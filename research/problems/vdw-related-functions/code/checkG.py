"""Independent brute-force check of a gap-bounded set: python3 checkG.py s x_1 ... x_n (prints n, max gap, 3-AP status)"""
import sys, itertools
s, xs = int(sys.argv[1]), sorted(map(int, sys.argv[2:]))
assert len(set(xs)) == len(xs), "repeated element"
g = max(b - a for a, b in zip(xs, xs[1:]))
S = set(xs)
bad = [(a, b) for a, b in itertools.combinations(xs, 2) if 2 * b - a in S]
print(f"n={len(xs)} maxgap={g} {'OK gap' if g <= s else 'GAP TOO BIG'} {'no 3-AP' if not bad else f'3-AP {bad[0]}'}")
