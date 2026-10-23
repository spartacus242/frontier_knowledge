#!/usr/bin/env python3
"""Generic checker: check_sol.py s n v1 v2 ... vn  -> prints VALID/INVALID (blocks [s(i-1), si-1], no 3-AP)."""
import sys
s, n = int(sys.argv[1]), int(sys.argv[2])
W = [int(t) for t in sys.argv[3:]]
ok = len(W) == n and all(s*i <= W[i] <= s*i+s-1 for i in range(n)) and len(set(W)) == n
S = set(W)
aps = [(a, b, 2*b-a) for a in W for b in W if b > a and (2*b-a) in S]
print("s=%d n=%d count=%d blocks_ok=%s 3APs=%d -> %s" % (s, n, len(W), ok, len(aps), "VALID" if ok and not aps else "INVALID"))
