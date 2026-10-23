"""Cubes for gm.c: python3 gmcubes.py s T depth  ->  lines 'gl gr [gl2 gr2]' (depth 1 or 2 gap pairs around the middle).
For odd T the middle element is x_m with m = (T+1)/2, and reversing the sequence swaps the left and right gap lists, so a
cube is kept only if its left gaps are lexicographically <= its right gaps (every reversal orbit keeps a cube).
For even T no symmetry is used."""
import itertools, sys
s, T, depth = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3])
for gaps in itertools.product(range(1, s + 1), repeat=2 * depth):
    left, right = gaps[0::2], gaps[1::2]
    if T % 2 == 1 and left > right:
        continue
    print(" ".join(map(str, gaps)))
