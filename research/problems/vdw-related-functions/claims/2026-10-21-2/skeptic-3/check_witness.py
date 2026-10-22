#!/usr/bin/env python3
"""Check the 48-element witness against the definition quoted in claim.md:
S = {x1 < ... < xn}, x_i - x_{i-1} <= s (s=9), S contains no 3-term AP."""
W = [int(t) for t in """0 8 9 17 23 31 40 47 56 64 73 79 84 93 101 110 117 126 134 140 148 157 165 172 176 183 191 200 208 214 222 231 238 247 255 264 269 270 275 284 292 301 308 317 325 331 339 348""".split()]
s = 9
n = len(W)
print("n =", n)
assert n == 48, "not 48 elements"
assert len(set(W)) == n, "repeated element"
assert all(W[i] < W[i+1] for i in range(n-1)), "not strictly increasing"
gaps = [W[i+1]-W[i] for i in range(n-1)]
print("gaps =", gaps)
print("max gap =", max(gaps), " min gap =", min(gaps))
assert max(gaps) <= s, "a gap exceeds s"
assert min(gaps) >= 1
S = set(W)
aps = [(a, b, 2*b-a) for a in W for b in W if a < b and 2*b-a in S]
print("3-APs found:", aps)
assert not aps, "witness contains a 3-AP"
# Also check: positive integers reading (translate by +1 is harmless; check no issue)
print("Translated to start at 1:", [x+1 for x in W][:5], "...")
print("WITNESS OK: 48 elements, all consecutive gaps <= 9, no 3-term arithmetic progression.")
