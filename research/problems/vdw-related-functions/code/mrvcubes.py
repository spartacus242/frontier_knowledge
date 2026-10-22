"""Print the canonical cubes for mrv.c: offsets for a reflection-closed set B of central blocks.
Reflection x -> Ts-1-x sends offset a in block j to offset s-1-a in block T-1-j, and maps 3-AP-free choices to
3-AP-free choices. A cube is kept only if its assignment is lexicographically <= its reflected image (read over B in
increasing block order), so every orbit keeps at least one cube. Output: one line per cube, 'blk off blk off ...'."""
import itertools, sys
s, T = int(sys.argv[1]), int(sys.argv[2])
m = (T - 1) // 2
B = sorted({m - 1, m, m + 1, T - 1 - (m - 1), T - 1 - m, T - 1 - (m + 1)})
for offs in itertools.product(range(s), repeat=len(B)):
    a = dict(zip(B, offs))
    img = {T - 1 - j: s - 1 - a[j] for j in B}
    if tuple(a[j] for j in B) <= tuple(img[j] for j in B):
        print(" ".join(f"{j} {a[j]}" for j in B))
