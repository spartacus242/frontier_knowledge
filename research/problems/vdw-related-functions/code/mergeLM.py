"""Merge span lower bounds for gm.c: python3 mergeLM.py hmin_file > out. Uses exact H_s(k) from hmin.c where known, the
OEIS A065825 Lmin(k) (lmin_oeis43.txt; Lmin <= H_s since gap-bounded sets are a special case), and the superadditive bound
B(a+b) >= B(a) + B(b) - 1 (split a set into its first a and last b elements), up to k = 128."""
import sys
B = {}
for line in open(sys.argv[1]):
    if line[0].isdigit():
        k, v = map(int, line.split()); B[k] = v
for line in open("lmin_oeis43.txt"):
    k, v = map(int, line.split()); B[k] = max(B.get(k, 0), v)
for k in range(1, 129):
    b = B.get(k, 0)
    for a in range(1, k):
        b = max(b, B[a] + B[k - a] - 1)
    B[k] = max(b, B.get(k - 1, 0) + 1)
    print(k, B[k])
