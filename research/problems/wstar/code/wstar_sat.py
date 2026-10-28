"""w*(3; r) by SAT (BLR arXiv:0706.4420, Section 3): least n such that every r-colouring of [1, n] has a 3-term AP that is
monochromatic or whose colours (c1, c2, c3) form an AP (c2 - c1 = c3 - c2 != 0). Usage: python3 wstar_sat.py r n [n2 ...]
prints SAT (with a colouring of [1, n]) or UNSAT for each n. Symmetry breaking: colour reversal c -> r+1-c preserves the
forbidden patterns, so colour(1) <= ceil(r/2) is assumed (with r odd the middle colour is fixed by the reversal)."""
import sys, time
from pysat.solvers import Cadical153
from pysat.card import CardEnc

def solve(r, n, symbreak=True, pal=0):
    """pal = 1: require colour(i) = colour(n+1-i); pal = 2: colour(i) = r+1-colour(n+1-i) (witness search only)."""
    v = lambda i, c: (i - 1) * r + c          # i in 1..n, c in 1..r
    s = Cadical153()
    for i in range(1, n + 1):
        s.add_clause([v(i, c) for c in range(1, r + 1)])
        for c in range(1, r + 1):
            for d in range(c + 1, r + 1):
                s.add_clause([-v(i, c), -v(i, d)])
    bad = [(x, y, z) for x in range(1, r + 1) for y in range(1, r + 1) for z in range(1, r + 1)
           if (x == y == z) or (y - x == z - y != 0)]
    for a in range(1, n + 1):
        for d in range(1, (n - a) // 2 + 1):
            b, c = a + d, a + 2 * d
            for (x, y, z) in bad:
                s.add_clause([-v(a, x), -v(b, y), -v(c, z)])
    if pal:
        for i in range(1, n + 1):
            j = n + 1 - i
            for c in range(1, r + 1):
                c2 = c if pal == 1 else r + 1 - c
                s.add_clause([-v(i, c), v(j, c2)])
    if symbreak and not pal:
        for c in range((r + 1) // 2 + 1, r + 1):
            s.add_clause([-v(1, c)])
    ok = s.solve()
    col = None
    if ok:
        m = set(l for l in s.get_model() if l > 0)
        col = [next(c for c in range(1, r + 1) if v(i, c) in m) for i in range(1, n + 1)]
    s.delete()
    return ok, col

if __name__ == "__main__":
    import os
    r = int(sys.argv[1]); pal = int(os.environ.get("WSTAR_PAL", "0"))
    for n in map(int, sys.argv[2:]):
        t = time.time(); ok, col = solve(r, n, pal=pal)
        print(f"r={r} n={n} {'SAT' if ok else 'UNSAT'} {time.time() - t:.1f}s" + (" : " + "".join(map(str, col)) if ok else ""), flush=True)
