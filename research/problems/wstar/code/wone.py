"""Solve one cube for w*(3; r): python3 wone.py r n cube  (cube = colours of the central len(cube) positions).
Prints 'cube UNSAT secs' or 'cube SAT secs colouring'."""
import sys, time
from pysat.solvers import Cadical153
r, n, cube = int(sys.argv[1]), int(sys.argv[2]), sys.argv[3]
width = len(cube); lo = (n + 1 - width) // 2 + 1
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
t0 = time.time(); ok = s.solve(assumptions=[v(lo + j, int(cube[j])) for j in range(width)])
if ok:
    m = set(l for l in s.get_model() if l > 0)
    print(cube, "SAT", f"{time.time() - t0:.1f}", "".join(str(next(c for c in range(1, r + 1) if v(i, c) in m)) for i in range(1, n + 1)))
else: print(cube, "UNSAT", f"{time.time() - t0:.1f}")
