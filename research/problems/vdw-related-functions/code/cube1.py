# Solve one cube of the M(3,s) or G(3,s) SAT instance and record the result in a file (resumable across restarts).
#  M: cube (p, q): x_1 = p (offset in block 1) and x_n = (n-1)s + (s-1-q); with p <= q this covers all solutions up to the
#     reflection x -> ns-1-x, which maps a valid choice to a valid choice and swaps the roles of p and q.
#  G: cube (g1, g2): x_1 = 1, x_2 = 1+g1, x_3 = 1+g1+g2 (no symmetry used).
#  Extra cube kinds for testing the 2007 search-shortcut hypothesis: Mfirst0 (x_1 = 0 only), Ggap1 (first gap = 1 only).
# Usage: cube1.py KIND s n a b outdir
import sys, os, time
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
from pysat.formula import IDPool
kind, s, n, a, b, out = sys.argv[1], int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4]), int(sys.argv[5]), sys.argv[6]
fn = os.path.join(out, f"{kind}_s{s}_n{n}_{a}_{b}.txt")
if os.path.exists(fn): sys.exit(0)
t0 = time.time(); S = Cadical153()
if kind.startswith('M'):
    N = n*s; var = lambda x: x+1; pool = IDPool(start_from=N+1)
    for d in range(1, N):
        for x in range(0, N-2*d): S.add_clause([-var(x), -var(x+d), -var(x+2*d)])
    for i in range(n):
        lits = [var(x) for x in range(i*s, (i+1)*s)]; S.add_clause(lits)
        for c in CardEnc.atmost(lits, 1, vpool=pool, encoding=EncType.pairwise).clauses: S.add_clause(c)
    assum = [var(a)] if kind == 'Mfirst0' else [var(a), var((n-1)*s + (s-1-b))]
    decode = lambda m: [x for x in range(N) if m[x] > 0]
else:
    L = 1 + (n-1)*s; var = lambda i: i; pool = IDPool(start_from=L+1)
    for d in range(1, L):
        for x in range(1, L-2*d+1): S.add_clause([-var(x), -var(x+d), -var(x+2*d)])
    S.add_clause([var(1)])
    z = {x: pool.id(('z', x)) for x in range(1, L+2)}; S.add_clause([-z[L+1]])
    for x in range(1, L+1):
        S.add_clause([-z[x], var(x), z[x+1]]); S.add_clause([z[x], -var(x)]); S.add_clause([z[x], -z[x+1]])
    for x in range(1, L+1):
        if x+s+1 <= L+1: S.add_clause([-var(x)] + [var(y) for y in range(x+1, min(L, x+s)+1)] + [-z[x+s+1]])
    for c in CardEnc.atleast([var(i) for i in range(1, L+1)], n, vpool=pool, encoding=EncType.seqcounter).clauses: S.add_clause(c)
    if kind == 'Ggap1': assum = [var(2)]
    else: assum = [var(1+a)] + [-var(y) for y in range(2, 1+a)] + [var(1+a+b)] + [-var(y) for y in range(2+a, 1+a+b)]
    decode = lambda m: [i for i in range(1, L+1) if m[i-1] > 0]
r = S.solve(assumptions=assum)
res = f"{kind} s={s} n={n} cube=({a},{b}) {'SAT' if r else 'UNSAT'} {time.time()-t0:.1f}s"
if r: res += " : " + " ".join(map(str, decode(S.get_model())))
open(fn + ".tmp", "w").write(res + "\n"); os.replace(fn + ".tmp", fn); print(res, flush=True)
