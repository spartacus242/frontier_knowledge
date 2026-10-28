# w*(3; r): colourings with no monochromatic or "rainbow-AP" 3-term progression

Source: Brown, Landman and Robertson 2007 (arXiv:0706.4420), Table 1, row w*(3,s). w*(k; r) is the least n such that every
r-colouring of [1, n] has a k-term AP x, x+d, x+2d whose colours c1, c2, c3 satisfy c2 - c1 = c3 - c2 (this includes the
monochromatic case and colour APs in either direction). Printed values for k = 3: r = 2: 9, r = 3: 23, r = 4: 40, r = 5: >= 75,
larger r: "?".

## Why tractable
The r = 5 entry is a lower bound only; a SAT encoding (one variable per position and colour, one clause per forbidden colour
triple on every 3-AP) is small, and the symmetry group (colour reversal c -> r+1-c, position reversal i -> n+1-i) has order 4.

## Frozen definition of "solved" (2026-10-28)
w*(3; 5) is solved when a valid 5-colouring of [1, N-1] is given (checked by `code/check_wstar.py`) and every 5-colouring of
[1, N] is shown to contain a forbidden progression by an exhaustive check whose pieces are all recorded. A colouring alone,
or an exhaustive check at a larger N, is a sub-result.

## State after the 2026-10-28 run
- w*(3;3) = 23 and w*(3;4) = 40 reproduced (SAT colourings at 22 and 39; split checks UNSAT at 23 and 40: `runs/c3_*`, `runs/c4_*`).
- A 74-colouring with colour(i) = 6 - colour(75 - i) (`runs/pal74.txt`, checker OK): reproduces the printed bound 75.
- Neither symmetric type (colour(i) = colour(n+1-i), or = 6 - colour(n+1-i)) exists for n = 75..78 (`runs/pal5_scan.txt`).
- Full n = 75 check: plain SAT does not finish in 20+ min; 5 central positions as cubes leaves pieces of 20+ min; 7 central
  positions (orbit-minimal, internally valid: 7687 cubes) samples at 60 s average, max 258 s, 20/20 UNSAT
  (`runs/sample75w7*.txt`), about 128 CPU-hours in all. Tools: `code/wcube.py` (resumable cube runner), `code/wsample.py`,
  `code/wone.py`.
