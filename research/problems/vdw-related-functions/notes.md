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

---

# Session 2026-10-21 (04:52 UTC run)

## Why tractable now
The 2026-10-18 run found that Brown-Landman-Robertson's Table 1 (arXiv:0706.4420, "computed with a standard backtrack
algorithm", 2007) disagrees with explicit, brute-force-checkable objects at four entries: M(3,4), M(3,5), M(3,6) and G(3,6).
Each disagreement is a 3-AP-free object one element LARGER than the table allows, so either the table is wrong there or the
definitions are not the ones printed. Re-read 2026-10-21 (WebFetch of arxiv.org/pdf/0706.4420): the definitions are exactly
"xi in [(i-1)s, is-1], 1 <= i <= n" for M and "xi - xi-1 <= s, 2 <= i <= n" for G, and the table reads
G(3,s) = 5 9 11 17 22 33 37 48 ? and M(3,s) = 7 11 18 29 37 48 ?. Small values are seconds of SAT or backtracking, so they can
be settled exactly today, and the published M(3,7) = 48 and G(3,9) = 48 can be tested with a few hours of CDCL.

Status check 2026-10-21: searches for later computations of M(k,s) / G(k,s) (queries listed below) found Brown-Hare 1997
(JCTA 77, the bounded-gaps function, no table of values), Ahmed 2009 (Integers 9 A06: wd numbers only, no M or G) and the
2004 errata sheet of Landman-Robertson's book (no M or G entry). OEIS search pages are blocked here (403 / robots), so the
sequences 7,11,19,31,38 and 5,9,11,17,23,33,37 could not be searched in OEIS directly; skeptics must try. The journal
version (JCTA 115 (2008)) and the book's 2nd edition (2014) could not be read here.

Queries run: "Brown Landman Robertson bounds on van der Waerden numbers and some related functions M(k,s) G(k,s) table";
"3-term arithmetic progression free set gaps at most s maximum size ... G(3,s)" (extended); "one element from each block ...
M(3,s) exact values"; "5, 9, 11, 17, 22, 33, 37, 48 OR 7, 11, 18, 29, 37, 48 OEIS"; "Landman Robertson Ramsey Theory on the
Integers second edition M(k,s) OR G(k,s)"; "Tanbir Ahmed some new van der Waerden numbers ... 2009"; "Brown, Landman and
Robertson ... bounded gaps ... computed values SAT" (extended); "0706.4420 ... cited by ..." (extended).

## Frozen definition of "solved" (this session)
Solved = the correct exact value of at least one k = 3 entry of BLR Table 1 for M or G that is either "?" or wrong in the
table, established by (a) an explicit 3-AP-free object of size v - 1 meeting the definition exactly as printed, and (b) an
exhaustive proof that size v is impossible, reproduced by an independent method; and not already published elsewhere.
A witness alone (showing a published value too small) is a sub-result: "published value disproved", not "value determined".

## Approaches (2026-10-21)
1. **Re-read the definitions and table** (WebFetch of the arXiv PDF): definitions as quoted above; the M and G rows are as the
   2026-10-18 notes said. Verdict: the disagreement is not a misquotation on our side.
2. **Plain exhaustive backtracking** (`code/bt.c`, new, independent of the SAT encodings): M(3,s) = 7, 11, 19, 31, 38 for
   s = 2..6 (s = 6: 1.5e9 nodes); G(3,s) = 5, 9, 11, 17, 23, 33, 37 for s = 2..8. Agrees with the SAT values everywhere.
3. **Which search shortcut reproduces the printed table?** (`code/btv.c`, `code/btv2.c`, `code/variants.py`). Forcing x_1 = 0
   in M (the first chosen element at the very start of block 1) gives exactly the printed M row 7, 11, 18, 29, 37 for s = 2..6.
   Forcing x_2 = x_1 + 1 in G (first gap 1) gives exactly the printed G row 5, 9, 11, 17, 22, 33 for s = 2..7. Neither is a
   valid "without loss of generality": blocks break translation symmetry in M, and nothing forces a gap of 1 in G. Other
   variants tried and NOT matching: overlapping blocks, blocks [(i-1)s+1, is], x_1 = s-1, gaps < s, first gap = s.
   Confidence that this is the mechanism: moderate (it matches 11 printed values with no free parameter, but is inferred).
   Corollary: a restricted search can only under-count, so the printed M(3,7) = 48 and G(3,9) = 48 are LOWER bounds on the true
   values if the same shortcut was used (true M(3,7) >= 48, G(3,9) >= 48), not exact values.
4. **Forward-checking exhaustive search** (`code/fc.c`): third independent method; confirms M(3,4) = 19, M(3,5) = 31,
   M(3,6) = 38 (3.9e8 nodes, 104 s), G(3,6) = 23, G(3,7) = 33, G(3,8) = 37 (4.5e8 nodes, 76 s).
5. **Monolithic CaDiCaL for M(3,7) from n = 46 and G(3,9) from n = 45** (`code/scan_MG.py`, logs `code/M7b.log`, `code/G9b.log`),
   running.
6. **Skeptic gate, claim 2026-10-21-1**: M(3,4) = 19, M(3,5) = 31, M(3,6) = 38, G(3,6) = 23 (packet in `claims/2026-10-21-1/`).
   Outcome: skeptics 1 and 3 SIGN-OFF, skeptic 2 REJECT (novelty unsure: the Landman-Robertson 2nd edition was unreadable).
   2 of 3, so it does not count. All three reproduced every value, two of them also by SAT. See `claims/2026-10-21-1/gate.md`.
   Skeptic 3 found that the 2008 journal version (JCTA 115, 1304-1309) contains no M or G at all.
7. M(3,7) and G(3,9): the CaDiCaL scans (n = 46 and n = 45) died unexplained once (empty logs, likely killed while the skeptics
   were running) and were restarted at 06:12 UTC; no result by the end of this run. Still open: true M(3,7) >= 46,
   G(3,9) >= 45 from our witnesses; >= 48 each if the printed values are restricted-search counts as hypothesised in approach 3.

---

# Session 2026-10-21 (08:53 UTC run)

## Why tractable now
The 04:52 run settled four small entries (M(3,4..6), G(3,6)) and found a search shortcut that reproduces the printed M and G
rows exactly. That hypothesis makes falsifiable predictions for the larger printed entries: if the 2007 search fixed x_1 = 0
(M) or a first gap of 1 (G), the restricted maxima must be exactly 47 for M(3,7), 36 for G(3,8) and 47 for G(3,9), and the
true values can only be larger or equal. Restricted instances are much smaller SAT problems (a fixed first element), and the
unrestricted M(3,7) and G(3,9) can be split into resumable cubes (the container restarted twice during the last run, killing
two monolithic CaDiCaL runs).

Status check 2026-10-21 08:53: no new source since 04:52. The Landman-Robertson book, 1st ed. (AMS STML 24, 2004), lists in
its notation index "Least n so that every {x1, . . . , xn} with xi ∈ [(i − 1)m, im − 1] contains a k-term arithmetic
progression" (via the academia.edu record of the book), so the book does treat the one-per-block function; whether it prints
values is unknown. Its text could not be read: Google Books search pages are robots-blocked, the AMS endmatter PDF of the 2nd
ed. failed to fetch, core.ac.uk failed. Queries run this session: "Ramsey Theory on the Integers second edition table of
contents ... bounded gaps ..." (extended); "Landman Robertson ... 2014 gaps x_i - x_{i-1} ... M(k,s) OR G(k,s) OR w_1(k,s)";
"gap sequences Landman Robertson ... x_i in [(i-1)m, im-1] ... table values" (extended); "Ramsey Theory on the Integers pdf
Supersets of AP m-gap"; fetched moreDoAFinal.pdf (Landman-Robertson-Robertson, restricted gaps: no M or G values) and the
Gasarch review (no M or G). This remains the open novelty question; it needs someone with the book.

## Frozen definition of "solved" (this session)
Unchanged from 04:52: the correct exact value of at least one k = 3 entry of BLR Table 1 for M or G that is "?" or wrong in the
table, with a witness of size v - 1 under the printed definition and an exhaustive impossibility proof at v reproduced by an
independent method, not published elsewhere. Today's targets: M(3,7) and G(3,9) (printed 48 each).

## Approaches (08:53 run)
1. Resumable cube runner (`code/cube1.py`, `code/runjobs.sh`, results one file per cube in `code/cubes/`).
2. **Shortcut hypothesis, predictions for larger entries.** Forcing the first gap to 1 in G: restricted maximum at s = 8 is
   36 (SAT `Ggap1 s=8 n=36`, UNSAT n=37 in 360 s; exhaustive `btv2 G 8 0 1`: 1.1e8 nodes, 17 s), so restricted G(3,8) = 37 =
   printed; at s = 9 the exhaustive restricted search (`btv2 G 9 0 1`, 2.0e10 nodes, ~1 h, log `code/btv2_G9_gap1.log`) gives
   maximum 47, so restricted G(3,9) = 48 = printed. Both predictions hold. Corollary: true G(3,9) >= 48 (the 47-element
   witness in the log is a valid gap-9 set). M(3,7) prediction (restricted x_1 = 0: SAT at 47, UNSAT at 48) running.
3. **Unrestricted n = 48 cubes** (`code/jobs2.txt`): M(3,7), 28 cubes (p, q) with p <= q, the p = 0 cubes last (they are
   implied by the restricted x_1 = 0 run); G(3,9), 81 cubes on the first two gaps. Any SAT cube makes the printed 48 wrong.
4. **Restricted M(3,7) witness by forward checking** (`code/fcf.c`, fc.c with x_1 forced): 47 blocks with x_1 = 0 not found in
   15 min. The SAT jobs `Mfirst0 s=7 n=47` (predicted SAT) and `n=48` (predicted UNSAT) had no answer after ~3 h.
5. **Faster solvers?** (`code/bench/`): on the restricted G(3,8) UNSAT instance, CaDiCaL 1.5.3 360 s, CaDiCaL 1.9.5 298 s,
   Kissat 4.0.4 no answer in 1200 s. Kissat in python-sat IGNORES assumptions (it warns), so it must never be used with
   `cube1.py` as written: a cube would silently be solved as the whole instance. Not worth switching.
6. **Min-conflicts local search for M witnesses** (`code/lsM.c`): finds the extremal 30-block M(3,5) witness in 2e6 steps but
   not a 37-block M(3,6) witness in 200 s. Ruled out for M(3,7) at 48 (moderate confidence: simple heuristic, no tuning).
7. **Status at end of run:** M(3,7) n = 48 cubes (1,1) and (1,2) running for ~2 h with no answer; G(3,9) n = 48 cubes not
   started. The cube runner is resumable: rerun `code/runjobs.sh code/jobs1.txt 2` and `code/runjobs.sh code/jobs2.txt 2`
   after a container restart; finished cubes are skipped. At this rate the full n = 48 split is many CPU-days, so a
   stronger encoding or symmetry argument is needed before the cubes can finish.

---

# Session 2026-10-21 (20:53 UTC run)

## Why tractable now
The 08:53 run showed the printed G(3,9) = 48 is exactly what a first-gap-1 search gives, so it is only a lower bound until the
unrestricted case is searched. Plain SAT cubes were far too slow (no cube finished in hours, and container restarts killed
them twice). The forward-checking backtracker `fc.c` decided G(3,8) at 37 in 76 s on one core, so a version that fixes the
first two gaps splits G(3,9) at T = 48 into 81 independent, resumable subproblems that four cores can work through.

Status check 2026-10-21 20:53: no reply on the Landman-Robertson book; no new source found since 08:53 (searches listed in the
04:52 and 08:53 sections). The routed ledger problems (`ledger/routed-open-problems.md`) were reviewed; none is a better fit
for a day of compute than finishing this table.

## Frozen definition of "solved" (this session)
Unchanged: the correct exact value of a k = 3 M or G entry of BLR Table 1 that is "?" or wrong in the table, with a witness
of size v - 1, an exhaustive impossibility proof at v reproduced independently, and not published elsewhere. If G(3,9) turns
out to equal the printed 48, that is a sub-result (printed value confirmed), not a solution.

## Approaches (20:53 run)
1. `code/fcp.c` (fc.c plus forced first gaps) and the resumable driver `code/runfcp.sh` (one result file per cube in
   `code/fcp_res/`): G(3,9) at T = 48, 81 cubes on the first two gaps, 4 in parallel. Cube (1,1) is trivially NONE (0,1,2).
   RESULT T = 48: 79 cubes NONE, 2 FOUND (first gaps (8,1) and (9,8), mirror images of each other): a 48-element 3-AP-free
   set with every gap <= 9 (`witness/G_s9_48elements.txt`, re-checked by brute force). So G(3,9) >= 49 and the printed 48 is
   WRONG. 14,200 CPU-s in total.
2. G(3,9) at T = 49 by the same split search (running).
3. **Independent recheck of G(3,9) by plain backtracking** (no forward checking; `code/btv2.c` with x_2 forced for first gaps
   1, 2, 4, 5 in `code/bt_res/`, and `code/btp.c` with the first two gaps forced for first gaps 3, 6, 7, 8, 9 in
   `code/btp_res/`; finer split because the container restarted twice mid-run): maximum 47 (first gap 1), 45 (2, 4, 5),
   and 48 only for first gaps (8,1) and (9,8). So the maximum is 48 and G(3,9) = 49, agreeing with approach 1 cube by cube.
4. **Skeptic gate, claim 2026-10-21-2: G(3,9) = 49 (printed 48).**
   **Outcome: 3 of 3 SIGN-OFF (default model, Sonnet, Fable), each with its own exhaustive search; CONFIRMED.**
   See `claims/2026-10-21-2/gate.md`. Shared caveat: the Landman-Robertson book text was not readable.

---

# Session 2026-10-22 (08:53 UTC run)

## Why tractable now
The split forward-checking search settled G(3,9) = 49 in about 4 CPU-hours per size (claim 2026-10-21-2, CONFIRMED). The same
idea applies to M(3,7) (printed 48): `code/fcpm.c` forces the offsets of the first blocks, and splitting on three offsets gives
343 independent, resumable cubes, each short enough to survive the hourly container restarts. Calibration: M(3,6) at T = 38 splits
into cubes of about 1e7 nodes each.

Status check 2026-10-22 08:53: nothing new since the 2026-10-21 runs (all searches listed there). No reply yet on the
Landman-Robertson book.

## Frozen definition of "solved" (this session)
Unchanged from 2026-10-21. Target: M(3,7). If a 48-block choice exists, M(3,7) >= 49 and the printed 48 is wrong; the exact value
then needs the next size impossible. If none exists, M(3,7) <= 48, and with a 47-block witness the printed 48 stands (sub-result).

## Approaches (08:53 run)
1. `code/runfcpm.sh` (343 cubes on the first three offsets, results in `code/fcpm_res/`), validated on M(3,4): all 64 cubes
   NONE at T = 19, 4 FOUND at T = 18. Running M(3,7) at T = 48.
   RESULT T = 48: after 17 cubes, cubes (0,2,1) and (0,2,3) FOUND a 48-block 3-AP-free choice (re-checked by brute force;
   `witness/M_s7_48blocks.txt`). So M(3,7) >= 49 and the printed 48 is WRONG. The T = 48 run was stopped there.
   **This contradicts the search-shortcut hypothesis for M:** the witness has x_1 = 0, so a search fixing x_1 = 0 would have
   found 48 blocks and printed at least 49. The hypothesis matched every printed M entry for s <= 6 and every G entry for
   s <= 9, but it does not explain M(3,7) = 48; the 2007 search may simply have been cut short there. Mechanism: unknown for M(3,7).
   Bug found and fixed in the drivers: a killed cube wrote a result file with no verdict (`r` empty). Eight such files for
   T = 48 were deleted; `runfcpm.sh` and `runfcp.sh` now write only non-empty results. All G(3,9) result files were checked
   and every one carries a NONE or FOUND verdict, so the G(3,9) result is unaffected.
2. M(3,7) at T = 49 by the same split (running).
   RESULT T = 49: cubes (0,2,1) and (0,2,3) FOUND again: a 49-block choice (re-checked; it extends the 48-block witness by
   336). So M(3,7) >= 50. T = 49 run stopped after 20 cubes; probing T = 50..53 in cube (0,2,1) and running the T = 50 split.
   RESULT T = 50: after 94 of 343 cubes, cube (6,4,6) FOUND a 50-block choice (re-checked; `witness/M_s7_50blocks.txt`).
   So M(3,7) >= 51. (The 49-block witness's cube (0,2,1) has maximum exactly 49: NONE at T = 50..53.) T = 50 run stopped.
   T = 51: cube (6,4,6) NONE (1.0e9 nodes); full T = 51 split running (`runfcpm.sh` forward, `runfcpm_rev.sh` from the end).
   RESULT T = 51: all 343 cubes NONE (every result file carries a verdict). With the 50-block witness, the forward-checking
   search gives **M(3,7) = 51** (printed 48). This rests on ONE program (`fcpm.c`) so far: needs an independent exhaustive
   check and the skeptic gate before it counts.
3. Correction to the 2026-10-21 explanation of the errors: the "x_1 = 0" shortcut reproduces the printed M row only for
   s <= 6. At s = 7 the true value is at least 51 and a 48-block choice with x_1 = 0 exists, so whatever produced the printed
   48 was not that shortcut alone. The G-row explanation (first gap 1) still matches every printed G entry.

# Session 2026-10-22 20:53 UTC

## Why tractable now
The 08:53 run left M(3,7) = 51 resting on one program (`fcpm.c`, 32 CPU-hours). A different search that branches on the most
constrained block, starts from the middle and uses the reflection symmetry might finish the same question in under two
CPU-hours, which is both an independent check and fast enough for skeptics to rebuild. Status check: a web search for the
BLR table and M(3,7) found nothing newer than arXiv:0706.4420; the AMS page for the Landman-Robertson 2nd ed. lists no errata.

## Frozen definition of "solved" (this session)
Unchanged from 2026-10-21 04:52. Target: M(3,7) = 51 (witness of 50 blocks in `witness/M_s7_50blocks.txt`, impossibility at 51).

## Approaches (20:53 run)
1. `code/mb.c`: bitset search placing the LAST block first (so every choice also forbids the midpoint with x_T), then
   left-to-right. Correct (M(3,2..5) = 7, 11, 19, 31) but slower than fcpm: one fcpm cube (offsets 0,4,4) split seven ways took
   ~240 s per part against 357 s for the whole cube. Dropped; benchmarks in `code/mb_bench/`.
2. `code/mrv.c`: blocks filled in any order, always the open block with fewest free positions (cut when one has none).
   Forbidden-set updates for all three AP roles (middle, end, either end) via shifted bitsets. Left-most tie-break: M(3,6)
   decided in 61 s (3.3e8 nodes); outermost tie-break: > 9 min, abandoned.
3. Innermost (most central) tie-break: M(3,6) in 20 s (7.3e7 nodes), 3x fewer nodes.
4. Cubes on the central blocks with reflection symmetry (`code/mrvcubes.py`, `code/runmrv.sh`, results `code/mrv_res/`):
   reflection x -> Ts-1-x sends offset a in block j to offset s-1-a in block T-1-j; a cube is kept only if its assignment over a
   reflection-closed set of central blocks is lexicographically <= its image. Validated end to end: s = 5 T = 30 FOUND (2 of 325
   cubes), T = 31 NONE (65/65); s = 6 T = 37 FOUND (1/108), T = 38 NONE (666/666); FOUND witnesses re-checked by `code/checkM.py`.
   **s = 7, T = 51: all 175 canonical cubes NONE, 6188 CPU-s, 1.9e10 nodes.** s = 7, T = 50: FOUND in cube 23:0,24:6,25:0,26:6
   (witness re-checked), run stopped after 299 of 1225 cubes. So two independently written searches agree: M(3,7) = 51.
5. Novelty: searched for the Landman-Robertson 2nd ed. table or errata (AMS post-publication page: nothing). Still unreadable.
6. Skeptic gate, claim 2026-10-22-1 "M(3,7) = 51": 0 of 3 sign-offs (see `claims/2026-10-22-1/gate.md`). Label PROMISING.

# Session 2026-10-23 08:53 UTC

## Why tractable now
G(3,10) is the first "?" in the G row of BLR Table 1 (arXiv:0706.4420). Status check: web searches (BLR table, "bounded gaps"
3-AP values, Brown-Hare 1997 full text at sfu.ca/~vjungic/tbrown/tom-22.pdf) found no value: Brown-Hare define G(k;r) but
give only asymptotic lower bounds; Fox-Schildkraut 2026 and the BLR journal version give none (see the 2026-10-22 gate reports).
New angle: a middle-out search that grows the sequence from its middle element in both directions, always on the more
constrained side, pruned with exact values of Lmin(k) (least N with a 3-AP-free k-subset of N consecutive integers).

## Frozen definition of "solved" (this session)
Unchanged from 2026-10-21 04:52, target G(3,10): a 3-AP-free set of v - 1 integers with gaps <= 10, plus an exhaustive proof
that v integers are impossible, not published elsewhere. A witness alone is a sub-result (lower bound for a "?" entry).

## Approaches (08:53 run)
1. `code/gm.c` middle-out search (middle element x_m, m = ceil(T/2), at 0; left needs m - 1, right T - m; extend the side with
   fewer usable positions). Correct on G(3,2..8) = 5, 9, 11, 17, 23, 33, 37. Speed about that of fcp (s = 8: 71 s vs 75 CPU-s).
   Side orders compared on G(3,8): most constrained 2.6e8 nodes, one side first 4.6e8, balanced 7.2e8.
2. Lmin bound (`code/lmin.c`, own computation of Lmin(1..30), equal to OEIS A065825 for all 30; `lmin_frozen.txt`;
   `lmin_oeis43.txt` adds A065825's published terms 31-43 for the s = 10 runs; beyond the table the safe bound
   Lmin(a+b) >= Lmin(a) + Lmin(b) - 1): every chosen anchor a forces the side's end to lie at least Lmin(c + r) - 1 beyond a,
   so the side must cross every position up to there. 2.5x fewer nodes at s = 8, 4x at s = 9. Plus: dead if that reach
   exceeds r*s.
3. Reversal symmetry for odd T (`code/gmcubes.py`, `code/rungm.sh`, `code/gm_res/`): validated at s = 8 (T = 37: 2080/2080 NONE;
   T = 36: 27 FOUND, witnesses re-checked by `code/checkG.py`). **G(3,9) at T = 49: 45/45 canonical cubes NONE, 3387 CPU-s**:
   a third independent exhaustive confirmation of G(3,9) = 49 (claim 2026-10-21-2), 4x cheaper than fcp.
4. G(3,10) witnesses by the plain serial search (`code/gm10/probe.txt`): FOUND at T = 46..54 (T = 54 in 419 s), T = 55 not
   decided in 600 s. **G(3,10) >= 55**: 54-element witness in `witness/G_s10_54elements.txt` (re-checked by checkG.py).
5. Randomised gap order (GM_SEED) for witness hunting at T = 52: no witness in 2 x 300 s; the plain order found one. Dropped.
6. T = 55 split into the 55 canonical cubes, 15 min cap each (`code/gm_res/s10_T55_*`): see below.
   RESULT: of the cubes started, (1,1) and (2,2) NONE instantly, (1,2) NONE in 730 s (9.0e8 nodes); (1,3) to (1,9) all hit the
   15 min cap. Stopped: at that rate the full T = 55 decision is roughly 30-80 CPU-hours, too much for one run or a skeptic.
7. Witness hunt at T = 55 with four different search orders (GM_ORD 0 and 2, GM_SEED 7 and 11), 50 min each: none found.
   So the best lower bound this run is G(3,10) >= 55.
