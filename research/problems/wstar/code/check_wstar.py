"""Independent check of a colouring: python3 check_wstar.py r digits  -> reports any bad 3-AP (mono or colour-AP)."""
import sys
r, col = int(sys.argv[1]), list(map(int, sys.argv[2]))
n = len(col); bad = None
assert all(1 <= c <= r for c in col)
for a in range(n):
    for d in range(1, n):
        if a + 2 * d >= n: break
        x, y, z = col[a], col[a + d], col[a + 2 * d]
        if y - x == z - y:
            bad = (a + 1, d, x, y, z); break
    if bad: break
print(f"n={n} r={r} " + ("OK" if not bad else f"BAD start={bad[0]} d={bad[1]} colours={bad[2:]}"))
