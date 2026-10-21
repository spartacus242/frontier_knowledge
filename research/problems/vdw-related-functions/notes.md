# Van der Waerden-related functions of Brown, Landman & Robertson: unknown entries of their Table 1 (k = 3)

Session: 2026-10-18. Tier A (exact values by SAT: explicit witness at n-1, UNSAT at n).

## Why tractable now
Brown, Landman & Robertson, "Bounds on van der Waerden numbers and some related functions" (arXiv:0706.4420, 2007; journal
version J. Combin. Theory Ser. A 115 (2008)) tabulate, for k = 3, w1(3,s) (least n such that every 2-colouring of [n] has a
3-AP in colour 1 or s consecutive integers in colour 2) only for s <= 7, M(3,s) for s <= 7 and G(3,s) for s <= 9, computed in
2007 by "a standard backtrack algorithm", with "?" beyond. Modern CDCL SAT (CaDiCaL, via python-sat) reproduces w1(3,7) = 193
in about 33 s here, so the next entries are plausibly within reach of a day of compute. Status check 2026-10-18: web searches for
the sequences and functions found no later computation (searches listed below); the journal version and the Landman-Robertson
book (2nd ed., 2014) could not be read here, so the skeptics must check those specifically.

Definitions (from arXiv:0706.4420, quoted via WebFetch):
- w1(k,s): least n such that every 2-colouring of [1,n] has a k-term AP in the first colour or s consecutive integers in the second.
- M(k,s): least n such that whenever x_i lies in the i-th block [(i-1)s, is-1] (i = 1..n), {x_1..x_n} contains a k-term AP.
- G(k,s): least n such that every set x_1 < ... < x_n with all gaps x_i - x_{i-1} <= s contains a k-term AP.

## Frozen definition of "solved" (frozen for this session)
Determining the exact value of a "?" entry of their Table 1 for k = 3: w1(3,s) for s >= 8, M(3,s) for s >= 8, or G(3,s) for
s >= 10. "Exact value v" means (a) an explicit object of size v - 1 avoiding the structure (machine-checkable), and (b) a proof
that size v is impossible (a SAT UNSAT result, ideally with a checkable DRAT proof, reproducible by an independent encoding).
A lower or upper bound alone is a sub-result, not a solution.

## Reproduction of the published table (sanity check)
- w1(3,s), s=2..7: 9, 23, 34, 73, 113, 193 -- all match the paper.
- M(3,s), s=2..5: ours 7, 11, 19, 31 vs paper 7, 11, 18, 29.  Disagree at s=4, 5.
- G(3,s), s=2..7: ours 5, 9, 11, 17, 23, 33 vs paper 5, 9, 11, 17, 22, 33.  Disagree at s=6.
  The disagreements come with explicit witnesses checked by brute force (e.g. M(3,4): one element in each of 18 blocks of
  length 4, no 3-AP: 2 4 11 12 19 23 24 30 32 38 43 47 50 55 59 61 66 69; G(3,6): 22 elements, gaps <= 6, no 3-AP:
  1 7 8 14 19 22 23 29 34 40 42 48 53 59 63 68 71 75 81 85 90 93). Either the 2007 table has errors there or the definitions
  differ from the quoted ones; to be checked against the journal version.

## Approaches log (2026-10-18)
1. SAT encodings (`code/sat_funcs.py`): w1 = 3-AP clauses on the colour-1 set plus one hitting clause per s-window;
   M = 3-AP clauses on [0, ns-1] plus exactly-one per block; G = 3-AP clauses, element 1 present, gap <= s enforced via suffix
   variables, |A| >= n by a sequential counter.
2. Local search lower bounds for w1 (`code/lsw1.c`, probSAT with colour-2 clauses restricted to d = 1): finds n = 192 at s = 7
   (the extremal value); at s = 8 it fails at n = 250 (best 1 violated clause), suggesting w1(3,8) is not far above 230.
3. **w1(3,8) by upward SAT scan** (`code/w1_scan.py`): SAT at every n = 230..237 (n=237 took 2363 s); witnesses saved as
   `code/w1_s8_n<n>.txt`. n = 238 is hard: monolithic CaDiCaL still running after >1.5 h.
4. **Local search at n = 238** (`code/ls_loop.sh`): 357 attempts x 10M flips, all FAIL (best 1 violated clause). Stopped.
5. **Cube-and-conquer at n = 238** (`code/w1_cubes.py`): cube (i,j) fixes min A = i and max A = n+1-j; reversal symmetry
   lets us keep i <= j, giving 36 cubes covering all solutions. 3 workers. After 1 h: cubes 0-5 (i=1, j=1..6) UNSAT, 1000-1900 s each.
6. **M(3,s), G(3,s) scans** (`code/scan_MG.py`, stopped to free cores): M(3,6) = 38 (paper 37), G(3,8) = 37 (matches paper);
   M(3,7) > 43 and G(3,9) > 44 (both SAT, paper has M(3,7)=48, G(3,9)=48), not finished.
7. **Monolithic CaDiCaL proved n = 238 UNSAT for w1(3,8)** in 10721 s (cube run stopped at 11/36 UNSAT cubes). With the
   verified 35-element witness at n = 237 (no 3-AP, no empty 8-window), this gives w1(3,8) = 238.
   **NOT NEW:** T. Ahmed, "Some new van der Waerden numbers and some van der Waerden-type numbers", Integers 9 (2009) A06,
   Table 5 (column d = 1, his wd(2;3,s) = w1(3,s)) already lists wd(2;3,8) = 238 and wd(2;3,9) > 346. Found via the OEIS
   A217236 link list after the computation; my earlier status check missed it because Ahmed uses different notation.
   Our value independently confirms his. Lesson: search the notation variants (w_d, "common difference at most d").
8. Next targets today: M(3,7), M(3,8), G(3,9), G(3,10) (our recomputation disagrees with BLR's M and G entries, so these are
   genuinely uncertain), and w1(3,9) where the best known is > 346 (Ahmed 2009).
