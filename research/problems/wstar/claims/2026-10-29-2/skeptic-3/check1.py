#!/usr/bin/env python3
"""Part (1) checker: verify a colouring string is a 'good' s-colouring of [1, n]:
no 3-AP a<b<c (b-a=c-b) with chi(b)-chi(a) == chi(c)-chi(b)."""
import sys

def is_good(col):
    n = len(col)
    bad = []
    for d in range(1, (n - 1) // 2 + 1):
        for a in range(0, n - 2 * d):
            c1, c2, c3 = col[a], col[a + d], col[a + 2 * d]
            if c2 - c1 == c3 - c2:
                bad.append((a + 1, a + d + 1, a + 2 * d + 1, c1, c2, c3))
    return bad

W = "115442212114125512525422541445455112411544221211412551252542254144545511242"
if __name__ == "__main__":
    s = sys.argv[1] if len(sys.argv) > 1 else W
    col = [int(ch) for ch in s]
    print("length:", len(col), "colours used:", sorted(set(col)))
    bad = is_good(col)
    print("violations:", len(bad))
    for b in bad[:10]:
        print("  positions", b[:3], "colours", b[3:])
    # also check: is it a 4-colouring with no monochromatic 3-AP (W(3;4) type witness)?
    mono = [b for b in is_good(col) if b[3] == b[4] == b[5]]
    print("monochromatic 3-APs:", len(mono))
    # extension check: can [1,76] be reached by appending any colour?
    for c in range(1, 6):
        ext = col + [c]
        print("append", c, "-> violations", len(is_good(ext)))
    # palindrome / structure note
    print("reverse equals self:", col == col[::-1])
    sys.exit(0 if not bad else 1)
