#!/usr/bin/env python3
"""Verify the claimed witness for M(3,7) > 50: x_i in [7(i-1), 7i-1], i=1..50, no 3-term AP."""
import sys
W = [int(t) for t in open(sys.argv[1]).read().split()]
s = 7
print("count:", len(W))
ok = True
if len(W) != 50:
    ok = False; print("FAIL: expected 50 elements")
for i, x in enumerate(W, 1):
    if not (s*(i-1) <= x <= s*i-1):
        ok = False; print(f"FAIL: x_{i}={x} not in [{s*(i-1)},{s*i-1}]")
if len(set(W)) != len(W):
    ok = False; print("FAIL: repeated element")
S = set(W)
naps = 0
for a in W:
    for b in W:
        if b > a and (2*b - a) in S:
            naps += 1; print(f"FAIL: 3-AP {a},{b},{2*b-a}")
print("3-APs found:", naps)
print("WITNESS", "VALID" if ok and naps == 0 else "INVALID")
