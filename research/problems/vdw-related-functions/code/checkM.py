"""Independent brute-force check of a one-per-block choice: python3 checkM.py s T x_1 ... x_T"""
import sys, itertools
s, T, xs = int(sys.argv[1]), int(sys.argv[2]), list(map(int, sys.argv[3:]))
assert len(xs) == T, "wrong length"
assert all(i * s <= x <= i * s + s - 1 for i, x in enumerate(xs)), "element outside its block"
S = set(xs)
bad = [(a, b) for a, b in itertools.combinations(sorted(S), 2) if 2 * b - a in S]
print("OK: no 3-AP" if not bad else f"3-AP found: {bad[0]}")
