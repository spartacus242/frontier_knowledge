"""Witness search for M(3,s) at T blocks: SAT with `keep` consecutive blocks of a known witness fixed, placed so that
its block j lands on block j + shift (offsets inside blocks kept). Usage: python3 mext.py s T witness_file keep shift"""
import sys, time
sys.path.insert(0, '.')
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
from pysat.formula import IDPool
s, T, wf, keep, shift = int(sys.argv[1]), int(sys.argv[2]), sys.argv[3], int(sys.argv[4]), int(sys.argv[5])
w = list(map(int, open(wf).read().split())); m = len(w); st = (m - keep) // 2
N = T * s; pool = IDPool(start_from=N + 1); S = Cadical153(); var = lambda x: x + 1
for d in range(1, N):
    for a in range(0, N - 2 * d): S.add_clause([-var(a), -var(a + d), -var(a + 2 * d)])
for i in range(T):
    lits = [var(x) for x in range(i * s, (i + 1) * s)]; S.add_clause(lits)
    for c in CardEnc.atmost(lits, 1, vpool=pool, encoding=EncType.pairwise).clauses: S.add_clause(c)
assum = [var(w[j] + shift * s) for j in range(st, st + keep)]
t0 = time.time(); r = S.solve(assumptions=assum)
X = [x for x in range(N) if S.get_model()[x] > 0] if r else None
print(f"T={T} keep={keep} shift={shift} {'SAT' if r else 'UNSAT'} {time.time() - t0:.1f}s" + (" : " + " ".join(map(str, X)) if r else ""), flush=True)
