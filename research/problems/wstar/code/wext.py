"""Witness search for w*(3; r) lower bounds: SAT at length n with a block of a known good colouring fixed in the middle
(assumptions). Usage: python3 wext.py r n seed_colouring keep  (keeps the central `keep` colours of the seed)."""
import sys, time
from pysat.solvers import Cadical153
r, n, seed, keep = int(sys.argv[1]), int(sys.argv[2]), sys.argv[3], int(sys.argv[4])
v = lambda i, c: (i - 1) * r + c
s = Cadical153()
for i in range(1, n + 1):
    s.add_clause([v(i, c) for c in range(1, r + 1)])
    for c in range(1, r + 1):
        for d in range(c + 1, r + 1): s.add_clause([-v(i, c), -v(i, d)])
bad = [(x, y, z) for x in range(1, r + 1) for y in range(1, r + 1) for z in range(1, r + 1) if y - x == z - y]
for a in range(1, n + 1):
    for d in range(1, (n - a) // 2 + 1):
        for (x, y, z) in bad: s.add_clause([-v(a, x), -v(a + d, y), -v(a + 2 * d, z)])
m = len(seed); st = (m - keep) // 2; block = seed[st:st + keep]
best = None
for off in range(0, n - keep + 1):        # place the block at every offset, centred first
    pass
offs = sorted(range(0, n - keep + 1), key=lambda o: abs(o - (n - keep) // 2))
for off in offs[:5]:
    assum = [v(off + 1 + j, int(block[j])) for j in range(keep)]
    t = time.time(); ok = s.solve(assumptions=assum)
    if ok:
        mm = set(l for l in s.get_model() if l > 0)
        col = "".join(str(next(c for c in range(1, r + 1) if v(i, c) in mm)) for i in range(1, n + 1))
        print(f"n={n} off={off} SAT {time.time()-t:.1f}s : {col}", flush=True); break
    print(f"n={n} off={off} UNSAT {time.time()-t:.1f}s", flush=True)
