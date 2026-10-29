"""List the cubes for an exhaustive w*(3; r) check at length n with wdfs: every colouring of the `width` central positions
that is lexicographically minimal in its orbit under colour reversal (c -> r+1-c) and position reversal (i -> n+1-i).
Both maps preserve the forbidden patterns and the central window, so a good colouring of [1, n] exists iff one exists
whose central colours form a listed cube. Internally bad cubes are kept (wdfs rejects them at once).
Usage: python3 wdcubes.py r n width   -> one line per cube: the wdfs arguments 'pos colour pos colour ...'"""
import sys, itertools
r, n, width = map(int, sys.argv[1:4])
lo = (n + 1 - width) // 2 + 1; pos = list(range(lo, lo + width))
assert all(n + 1 - p in pos for p in pos), "central window must be symmetric"
for t in itertools.product(range(1, r + 1), repeat=width):
    d = dict(zip(pos, t))
    imgs = [tuple(r + 1 - d[p] for p in pos), tuple(d[n + 1 - p] for p in pos), tuple(r + 1 - d[n + 1 - p] for p in pos)]
    if t <= min(imgs): print(" ".join(f"{p} {c}" for p, c in zip(pos, t)))
