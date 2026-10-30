import sys, time
from pysat.solvers import Solver
from sat_search import build_clauses, var
n, s, name, key = int(sys.argv[1]), int(sys.argv[2]), sys.argv[3], sys.argv[4]
cl, _, _ = build_clauses(n, s, sym=True)
for i, ch in enumerate(key):
    cl.append([var(i, int(ch) - 1, s)])
t = time.time()
with Solver(name=name, bootstrap_with=cl) as S:
    r = S.solve()
print(name, key, "SAT" if r else "UNSAT", f"{time.time()-t:.1f}s", flush=True)
