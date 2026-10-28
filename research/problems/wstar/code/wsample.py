"""Print a random sample (for timing with wone.py) of canonical, internally valid width-w cubes for w*(3; r) at length n (cost estimate only).
Usage: python3 wsample.py r n width count seed"""
import sys, time, random, itertools, threading
from pysat.solvers import Cadical153
r, n, width, count, seed = map(int, sys.argv[1:6])
v = lambda i, c: (i - 1) * r + c
lo = (n + 1 - width) // 2 + 1; pos = list(range(lo, lo + width))
def ok(t): return not any(t[a + d] - t[a] == t[a + 2 * d] - t[a + d] for a in range(width) for d in range(1, width) if a + 2 * d < width)
def omin(t):
    d = dict(zip(pos, t))
    return t == min([t, tuple(r + 1 - d[p] for p in pos), tuple(d[n + 1 - p] for p in pos), tuple(r + 1 - d[n + 1 - p] for p in pos)])
cubes = [t for t in itertools.product(range(1, r + 1), repeat=width) if omin(t) and ok(t)]
random.seed(seed); pick = random.sample(cubes, count)
for t in pick: print("".join(map(str, t)))
