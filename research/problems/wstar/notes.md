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

## 2026-10-29 08:53 UTC run
- Status check (arXiv:0706.4420 re-read; web searches; the journal version, Colgate preprint "Bounds on some van der Waerden
  numbers", has no w* table): no published value of w*(3;5) beyond ">= 75" found. The Landman-Robertson book is unreadable.
- **Lower bound is classical (found by two skeptics):** the colour set {1,2,4,5} contains no 3-term AP, so a 4-colouring of
  [1, n] with no monochromatic 3-AP, recoloured into {1,2,4,5}, is good. Hence w*(3;5) >= W(3;4) = 76 (Beeler and O'Neil 1979),
  and the printed ">= 75" was already weaker than a known bound. Our 75-colouring is exactly such a recoloured 4-colouring.
  Likewise w*(3;6) >= 76 trivially. The only new part of "w*(3;5) = 76" is the upper bound (no good 5-colouring of [1, 76]).
- `code/wdfs.c`: domain-bitmask DFS with forward checking, unit propagation, most-constrained-first with central tie-break.
  Reproduces 9, 23, 40 in under 1 s; about 30x faster than CaDiCaL on the 20 sampled n = 75 cubes, same verdicts.
- `code/rundfs.sh` + `code/wdcubes.py`: resumable cube runs (orbit-minimal central windows).
  n = 75, width 7: two good colourings found (`runs/d5_75w7/`, `witness/wstar_r5_n75.txt`).
  **n = 76, width 8: all 97,969 cubes NONE, 4.3 CPU-hours** (`runs/d5_76w8_all.txt.gz`, `runs/d5_76w8_cubes.txt`).
- CaDiCaL (`code/wone.py`) agrees on 32 n = 76 cubes (10 hardest + 22 random): all UNSAT (`runs/sat_check76.txt`).
- `code/wbt.c` (plain backtracking, no look-ahead): correct on small cases, far too slow on hard cubes (> 10 min). Dropped.
- Six colours (table "?"): anti-symmetric SAT (`WSTAR_PAL=2`) gives a good 82-colouring (`witness/wstar_r6_n82.txt`),
  so w*(3;6) >= 83; symmetric searches at 84..96 timed out (`runs/pal6_scan*.txt`).
