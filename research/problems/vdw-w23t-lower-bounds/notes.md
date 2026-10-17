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

---
# Session 2026-10-15 (second session, same problem, focused on t = 33)

## Why still tractable / status
Re-checked 2026-10-15 (web search for w(2;3,33) and the van der Waerden pages): no newer value than AKS's w(2;3,33) > 1063
(arXiv:1102.5433 Table 2). Yesterday's pipeline (palindromic seed + non-palindromic extension) reproduced the conjectured exact
w(2;3,24) = 593 and reached 1039 at t=33, so the remaining 25 is a seed-quality / search-move problem, not a missing idea.
New angles today: interior insertions and trimming/backtracking in the extension phase, and more, stronger palindromic seeds.

## Frozen definition of "solved" (unchanged, frozen for this session)
An explicit 2-colouring of {1..n}, n >= 1064, with no 3-AP in colour 0 and no 33-AP in colour 1 (proves w(2;3,33) > 1063).
The same frozen definition from 2026-10-14 also applies to any other t in 31..39 if one happens to improve.

## Approaches log (2026-10-15)
1. **Extension with interior inserts + trimming/backtracking** (`code/climb_plain2.py`): from yesterday's 1039, after 4
   consecutive failures trim 6 bits from random ends and re-extend; inserts at start / end / random interior. Run "y" reached
   1046 within 45 min (yesterday's end-only extension was stuck at 1037-1039 for >1 h). Run "x" (same settings) stayed at 1039.
2. **Deeper backtracking (trim 12)** from 1046 (run "z"): reached **1064 at ~1340 s**, one more than the published
   w(2;3,33) > 1063. Checked by `code/verify.py` and by a separate set-based brute-force script (93 zeros, no 3-AP among zeros,
   longest AP among ones has length 32). Saved as `best/t33_n1064.txt`. Attempted to break it myself: both independent checks
   pass; re-confirmed the published bound from arXiv:1102.5433 Table 3 ("w(2;3,t) > ... 1063 ..." for t=33, strict).
3. **Palindromic seeds** (climb2, runs s1/s2) from 1000 reached 1002 and 1004 (within AKS's published palindromic range
   (996,1005)); not needed once (2) worked; stopped.
4. **Skeptic gate on claim 2026-10-15-1 (w(2;3,33) > 1068): FAILED on novelty.** Skeptic 1 and 2 reproduced the colouring
   (longest colour-0 AP 2, longest colour-1 AP 32) but found OEIS A171081 comments by Juan Lopez Marcano (Aug 21 2026):
   a(31) >= 954 and a(33) >= 1072, i.e. w(2;3,33) > 1071, with certificates a171081_1.txt / a171081_2.txt and a Zenodo preprint
   (record 21943191, 2026-08-15, main theorem w(2;3,31) >= 941). Skeptic 1 checked the 1071 certificate is valid. I confirmed
   the OEIS comment myself via WebFetch. Our 1068 is NOT new. Lesson: the status check must include the OEIS entry itself
   (A171081 here), not just papers; yesterday's check missed this because oeis.org search pages were not fetchable, but the
   A-number page is.
   Current best known (to our knowledge): t=31: >953, t=33: >1071; t=32, 34..39 unchanged from AKS as far as A171081 shows.
5. **Same pipeline at t=35** (record 1204 per AKS; A171081 shows no newer t=35 value): from 1154, four runs with trim 12-20
   reached 1185 in ~2.5 h, slowing to a few levels per hour. 19 short. Saved `best/t35_n1185.txt`.
6. **t=33 past 1071**: one run from 1068 with trim 20 made no progress in 1 h.

Label for 2026-10-15: NO PROGRESS (claim 2026-10-15-1 failed the gate unanimously on novelty).

---
# Session 2026-10-16 (third session, same problem, t = 35)

## Status check and why still tractable
Checked 2026-10-16: OEIS A171081 (fetched directly) has only Marcano's Aug 2026 updates for t=31 (>953) and t=33 (>1071),
nothing for t=35. Zenodo record 21943191 (one version, 2026-08-15) holds only t=31 certificates; its README's theorem is
w(2;3,31) >= 941 (the PDF itself could not be downloaded here). Web search found arXiv:2608.20824 (asymptotic two-colour w(k),
not w(2;3,t)) and nothing for t=35. So the best known bound we can find is still AKS (arXiv:1102.5433 Table 3) w(2;3,35) > 1204.
Also reviewed `ledger/routed-open-problems.md` (new since yesterday): UQ-20261015-02 (palindromic gap pdg, extend pdw past
t=20) is in this area, but extending exact pdw needs complete SAT solving that AKS already took to t=27; not picked today.
Tractable now because trim-and-regrow extension gained 31 at t=35 yesterday (1154 -> 1185) and was still moving.

## Frozen definition of "solved" (frozen for this session)
An explicit 2-colouring of {1..n}, n >= 1205, with no 3-AP in colour 0 and no 35-AP in colour 1 (proves w(2;3,35) > 1204).

## Approaches log (2026-10-16)
1. **Trim-and-regrow from 1185, trims 12/20/30/20** (4 runs, 1 h): only one trim-20 run moved, 1185 -> 1195.
2. **Three restarts from 1195 (trims 20/20/30)** (1 h): 1195 -> 1197 (trim 20).
3. **Deeper trims 30/40/60/40 from 1197** (90 min): no gain. (Another 90 min was lost when a kill pattern matched the
   launching shell and killed the new runs at start. Kill by PID from `ps`, never with a `pkill -f`/`pgrep -f` pattern that
   also appears in the same command line.)
Best today: w(2;3,35) > 1197 (`best/t35_n1197.txt`, verified), 7 short of AKS's 1204. Hourly gains: +10, +2, 0; this basin
looks exhausted. Label: NO PROGRESS. No claim sent to the gate.

---
# Session 2026-10-17 (fourth session, same problem family, t = 38 and t = 39)

## Why tractable now / status
The AKS strict bounds rise by about 53-81 per step for t = 31..37 but only by 40 for 37->38 and 38->39 (1338, 1378, 1418),
which suggests their t = 38, 39 searches were the least converged (AKS also say t > 35 values are not believed exact). Our
trim-and-regrow pipeline reached 99.4% of the t=35 record. And any t=35-good colouring is automatically t=38- and t=39-good,
so yesterday's 1197 is a ready-made seed for both. Status check 2026-10-17: OEIS A171081 (fetched) mentions only t=31, 33
updates (Marcano 2026); web search found nothing newer for t = 38, 39. Best known: w(2;3,38) > 1378, w(2;3,39) > 1418
(arXiv:1102.5433 Table 3).

## Frozen definition of "solved" (frozen for this session)
An explicit 2-colouring of {1..n} with no 3-AP in colour 0 and no t-AP in colour 1, with n >= 1379 for t = 38 or
n >= 1419 for t = 39.

## Approaches log (2026-10-17)
1. **Cross-t seeding + trim-and-regrow (trim 20)**: seeds were yesterday's t=35-good colouring of [1197] (automatically
   t=38/39-good) and the old palindromic t=38 (1274) / t=39 (1322) colourings. Within 1 h: t=38 reached 1373 from both seeds,
   t=39 reached 1412 / 1411. Second hour: t=38 1374, t=39 1412.
2. **Deeper trims 40/60 from the bests** (75 min): t=38 1374 -> 1375; t=39 no gain.
3. **All four runs on t=38 from 1375, trims 20/30/40/60** (90 min): no gain.
Best today: w(2;3,38) > 1375 (`best/t38_n1375.txt`, 3 short of 1378) and w(2;3,39) > 1412 (`best/t39_n1412.txt`, 6 short of
1418), both verified. The hypothesis that AKS's t=38/39 bounds were weak (their +40 steps) is NOT supported: our independent
search plateaus just below both, as it did at t=35 (7 short) and t=33 (where the true record turned out to be 1071, 3 above
our plateau). This pipeline seems to saturate a few percent-of-a-percent below the best known values for every t tried.
Label: NO PROGRESS. No claim sent to the gate.
