#!/usr/bin/env python3
"""Secondary (independent-method) check with CaDiCaL via python-sat.
Decide: is there a 3-AP-free set S subset of [0, L], 0 in S, |S| >= N, with all
consecutive gaps <= s?   (Translate so min S = 0; then max S <= (N-1)*s = L.)
usage: sat_check.py s N
Encoding: x_p (p in 0..L) = p in S.  a_p = "some selected q >= p" (over-approx
allowed: it only strengthens the gap constraints).
  x_q -> a_p for p <= q;  x_p -> (not a_{p+1}) or x_{p+1} or ... or x_{p+s}
  no 3-AP: for a<b<c, c-b = b-a: (not x_a or not x_b or not x_c)
  sum x_p >= N  (sequential counter)
"""
import sys, time
from pysat.formula import CNF, IDPool
from pysat.card import CardEnc, EncType
from pysat.solvers import Cadical153

s, N = int(sys.argv[1]), int(sys.argv[2])
L = (N - 1) * s
pool = IDPool()
x = lambda p: pool.id(('x', p))
a = lambda p: pool.id(('a', p))
cnf = CNF()
cnf.append([x(0)])
for p in range(L + 1):
    for q in range(p, L + 1):
        cnf.append([-x(q), a(p)])
    gap = [-x(p)]
    if p + 1 <= L:
        gap.append(-a(p + 1))
        gap += [x(r) for r in range(p + 1, min(L, p + s) + 1)]
    cnf.append(gap)
for b in range(L + 1):
    for d in range(1, L + 1):
        if b - d < 0 or b + d > L: break
        cnf.append([-x(b - d), -x(b), -x(b + d)])
card = CardEnc.atleast(lits=[x(p) for p in range(L + 1)], bound=N, vpool=pool, encoding=EncType.seqcounter)
cnf.extend(card.clauses)
print(f"s={s} N={N} L={L} vars={pool.top} clauses={len(cnf.clauses)}", flush=True)
t = time.time()
with Cadical153(bootstrap_with=cnf.clauses) as solver:
    res = solver.solve()
    print(f"SAT result for 'exists {N}-element 3-AP-free set with gaps<={s}': {res}  ({time.time()-t:.1f}s)", flush=True)
    if res:
        m = set(v for v in solver.get_model() if v > 0)
        S = [p for p in range(L + 1) if x(p) in m]
        print("witness:", S)
        gaps = [S[i+1]-S[i] for i in range(len(S)-1)]
        assert max(gaps) <= s and len(S) >= N
        assert not any(2*b-a_ in set(S) for a_ in S for b in S if a_ < b)
        print("witness verified")
