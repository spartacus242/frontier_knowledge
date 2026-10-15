# Off-diagonal van der Waerden numbers w(2;3,t): improve published lower bounds (t = 31..39)

Session: 2026-10-14 (first run). Tier A.

## Why this is tractable now
The best published lower bounds for w(2;3,t) at t = 31..39 come from one local-search campaign
(Ahmed, Kullmann, Snevily, "On the van der Waerden numbers w(2;3,t)", arXiv:1102.5433 / DAM 2014,
Table 2: w(2;3,t) > 930, 1006, 1063, 1143, 1204, 1257, 1338, 1378, 1418 for t = 31..39). The authors
themselves call the large-t values uncertain (local search with Ubcsat; RoTS best only up to t = 33).
Status checks run today (web search, Wikipedia "Van der Waerden number" page, Monroe 2016/2019
arXiv:1603.03301, Heule 2017 JoC, Hunter arXiv:2111.01099, Green arXiv:2102.01543) found no later
explicit values for these t: later work is either diagonal W(r,k) or asymptotic. So these bounds
look open and unimproved since ~2011-2014. Fresh angles available today: modern CDCL SAT solvers
(CaDiCaL via python-sat) with structural constraints (palindromic, cyclic / modular, multiplicative
pre-partitioning a la Heule 2017), plus fast custom C local search.

## Frozen definition of "solved" (frozen for this session)
For a given t in {31,...,39}, the published bound is "w(2;3,t) > B_t" with B_t as above, i.e. a
good 2-colouring of {1..B_t} is known. An IMPROVEMENT for t is an explicit 2-colouring of
{1, ..., n} with n > B_t (n >= B_t + 1) such that colour 0 contains no 3-term arithmetic
progression and colour 1 contains no t-term arithmetic progression. This proves w(2;3,t) > n.
Results for t >= 40 (no published bound found) or for t <= 30 matching the conjectured values are
sub-results only, not improvements.
Sources: arXiv:1102.5433 Table 2; https://en.wikipedia.org/wiki/Van_der_Waerden_number (accessed 2026-10-14).

## Approaches log (2026-10-14)
1. **Plain probSAT (no structure)**, `code/ls.c` palin=0, cb=2.3. t=20: n=340 found quickly, n=370/388 not within 60s. Weak; superseded by (2).
2. **Palindromic probSAT** (x_i = x_{n+1-i}), `code/ls.c` palin=1. t=20: found a good colouring of [388] (the extremal size, w(2;3,20)=389) in 26M flips / ~2 min; checked by `code/verify.py`. Solver validated.
   - Tuning: cb=2.3 stalls (t=24 stuck at n=507 vs conjectured 592); cb 4-6 solve n=507 in <0.4M flips, cb=9 too greedy. Use cb=5.
3. **Incremental climbing** (`code/climb.py`): solve n, insert one middle bit, re-solve n+1 from that start.
4. **Cyclic Z_p colourings constant on multiplicative cosets (Heule/Rabung-style), SAT via CaDiCaL** (`code/cyclic_sat.py`).
   RULED OUT (high confidence): requiring colour 0 to be 3-AP-free *mod p* is far too restrictive. Sanity case t=5: cyclic
   good colourings exist only for p <= 7 (even with no coset restriction, g=1), versus w(2;3,5)-1 = 21 linearly. For t=20, no
   prime p in [100,330] gave SAT within 20k conflicts for g in {2,3,4,6} (many proved UNSAT). Cyclic structure cannot reach the frontier.
5. **Clause-weighting local search (PAWS-style)**, `code/lsw.c`. At t=24, n=507 it solves fast, but at the frontier (n=551) it
   failed in 110 s where probSAT cb=5 solved in 1.5M flips. Not better; dropped.
6. **Calibration against AKS palindromic table** (arXiv:1102.5433 Tables 6-7): pdw(2;3,24) = (568,593) exact, so our climb reaching
   551 at t=24 in ~15 min is below their palindromic search. Key structural fact from their Table 7: for t=31 the palindromic
   bound equals the conjectured w (931), but for t >= 32 the records are NON-palindromic, 44-63 above the palindromic values,
   except t=38 (pal 1369 vs w>1378, gap 10) and t=39 (pal 1411 vs w>1418, gap 8). Their values for t>35 are explicitly not
   believed exact. So the most promising targets are palindromic colourings at t=38 (need n>=1379) and t=39 (need n>=1419).
7. **Palindromic climbing with skipping** (`code/climb2.py`): palindromic satisfiability is not monotone in n, so on failure at
   n also try n+1..n+4 before retrying. Running for t=37,38,39.
8. **LNS SAT repair of near-misses** (`code/lns.py`): free the variables in violated APs plus a random fraction, fix the rest,
   CaDiCaL repair. At t=24, n=566 (palindromic, 1 violated AP + mirror) every neighbourhood of 108-174 free vars (of 283) was
   proved UNSAT; larger ones hit the conflict budget. Near-misses are far (in Hamming distance) from solutions. RULED OUT as
   implemented (moderate confidence).
9. **Palindromic seed + non-palindromic extension** (`code/climb_plain.py`): append/prepend '1' and re-solve without symmetry.
   Calibration t=24: from our palindromic n=564 it reached n=592 in seconds (verified by `verify.py`), i.e. w(2;3,24) > 592,
   matching the AKS conjectured exact value w(2;3,24)=593; n=593 fails (best=1 violation). This is the pipeline that works.
   Now running from our palindromic bests at t=31 (872), t=33 (958), t=35 (1040).
10. **Better palindromic seeds, then extension (t=33)**: three palindromic climbs from 958 reached 996/998/1000 in ~45 min
    (published palindromic range for t=33 is (996,1005)); extending those non-palindromically reached 1039, still 24 short of
    the record 1063 (need >= 1064). Earlier extension from the weaker 958 seed stalled at 1037.

## Final standing (all verified by `code/verify.py`; colourings in `best/`)
| t | ours (good colouring of [n]) | published bound w > B_t | improvement? |
|---|---|---|---|
| 24 | 592 | 592 (conjectured exact w=593) | matches, not new |
| 31 | 893 | 930 | no (-37) |
| 33 | 1039 | 1063 | no (-24) |
| 35 | 1154 | 1204 | no (-50) |
| 38 (palindromic only) | 1274 | 1378 | no |
| 39 (palindromic only) | 1322 | 1418 | no |

Label: NO PROGRESS. No claim was sent to the skeptic gate.

## Ideas for next session
- The t=24 calibration says the pipeline (palindromic seed close to the palindromic maximum, then non-palindromic extension)
  can reach record level; the bottleneck is seed quality and raw flip rate at n ~ 1000-1400. Spend the whole day on ONE t
  (t=33 is closest: 24 short) with many independent palindromic seeds pushed past 1000, then extend each.
- Speed up `ls.c`: flip cost is dominated by ~1.5n 3-AP occurrences per variable; a bitset representation of colour 0 would
  make 3-AP checks word-parallel.
- Extension variants not yet tried: insert bits in the interior (not only the ends), and allow removing a few end bits
  (backtrack) when stuck at best=1.
- Fetching the AKS certificates (arXiv:1102.5433 Appendix A) needs the full PDF text; arxiv.org is blocked for direct download
  here and WebFetch's summariser did not reach the appendix. raw.githubusercontent.com is reachable.
