"""Exhaustive check of 'no good r-colouring of [1, n]' for w*(3; r), split into cubes on the colours of the central
positions. Symmetries: colour reversal c -> r+1-c and position reversal i -> n+1-i both preserve the forbidden patterns, so
only cubes that are lexicographically minimal in their orbit (under the group of order 4) are solved.
Usage: python3 wcube.py r n width outdir [jobs-index jobs-total]   (width = number of central positions fixed)
Each cube's verdict goes to outdir/<cube>.txt (resumable)."""
import sys, os, time, itertools
from pysat.solvers import Cadical153
r, n, width, out = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
ji, jt = (int(sys.argv[5]), int(sys.argv[6])) if len(sys.argv) > 6 else (0, 1)
os.makedirs(out, exist_ok=True)
v = lambda i, c: (i - 1) * r + c
lo = (n + 1 - width) // 2 + 1                      # central positions lo .. lo+width-1
pos = list(range(lo, lo + width))
assert all(n + 1 - p in pos for p in pos), "central window must be symmetric"
def orbit_min(t):
    d = dict(zip(pos, t))
    imgs = [t,
            tuple(r + 1 - d[p] for p in pos),
            tuple(d[n + 1 - p] for p in pos),
            tuple(r + 1 - d[n + 1 - p] for p in pos)]
    return t == min(imgs)
cubes = [t for t in itertools.product(range(1, r + 1), repeat=width) if orbit_min(t)]
s = Cadical153()
for i in range(1, n + 1):
    s.add_clause([v(i, c) for c in range(1, r + 1)])
    for c in range(1, r + 1):
        for d in range(c + 1, r + 1): s.add_clause([-v(i, c), -v(i, d)])
bad = [(x, y, z) for x in range(1, r + 1) for y in range(1, r + 1) for z in range(1, r + 1) if y - x == z - y]
for a in range(1, n + 1):
    for d in range(1, (n - a) // 2 + 1):
        for (x, y, z) in bad: s.add_clause([-v(a, x), -v(a + d, y), -v(a + 2 * d, z)])
print(f"{len(cubes)} canonical cubes", flush=True)
for k, t in enumerate(cubes):
    if k % jt != ji: continue
    f = os.path.join(out, "c_" + "".join(map(str, t)) + ".txt")
    if os.path.exists(f): continue
    t0 = time.time(); ok = s.solve(assumptions=[v(p, c) for p, c in zip(pos, t)])
    res = "UNSAT"
    if ok:
        mm = set(l for l in s.get_model() if l > 0)
        res = "SAT " + "".join(str(next(c for c in range(1, r + 1) if v(i, c) in mm)) for i in range(1, n + 1))
    open(f + ".tmp", "w").write(f"r={r} n={n} cube={''.join(map(str, t))} {res} {time.time() - t0:.1f}s\n")
    os.replace(f + ".tmp", f)
