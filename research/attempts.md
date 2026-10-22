# Attempts log

Append-only. One entry per daily session (see PROMPT.md, END OF DAY).

## 2026-10-14 (first session, started on request; ran into 2026-10-15 UTC)
- **Problem:** improve published lower bounds for the off-diagonal van der Waerden numbers w(2;3,t), t = 31..39
  (Ahmed-Kullmann-Snevily, arXiv:1102.5433 Table 2). Tier A.
- **Frozen definition of solved:** for some t in 31..39, an explicit 2-colouring of [1..n] with n > B_t (B_t = 930, 1006, 1063,
  1143, 1204, 1257, 1338, 1378, 1418) whose colour 0 has no 3-AP and colour 1 has no t-AP.
- **Approaches (verdicts):**
  1. Plain probSAT, no symmetry: weak (t=20 stalls below 370).
  2. Palindromic probSAT: finds the extremal w(2;3,20) > 388 in ~2 min; cb=5 much better than 2.3.
  3. Incremental palindromic climbing (insert middle bit): works but slows sharply near the palindromic maximum.
  4. Cyclic Z_p colourings constant on multiplicative cosets + CaDiCaL: ruled out, high confidence (t=5 cyclic max p=7 vs 21 linear).
  5. PAWS-style clause weighting: no better than probSAT at the frontier; dropped.
  6. Palindromic climbing with skipping (non-monotone n): t=38 to 1274, t=39 to 1322 palindromic; too slow at n ~ 1300.
  7. LNS SAT repair of near-misses: every neighbourhood up to ~60% of variables UNSAT; ruled out as implemented, moderate confidence.
  8. Palindromic seed + non-palindromic extension: the winner. Reproduced the conjectured exact w(2;3,24) > 592 in seconds from a
     564 palindromic seed. Reached t=31: 893, t=33: 1039, t=35: 1154. All short of the records.
- **Label:** NO PROGRESS. No skeptic gate run (no claim).
- **Code/data:** `research/problems/vdw-w23t-lower-bounds/` (`code/ls.c`, `code/climb*.py`, `code/verify.py`, `best/`, `notes.md`).
- **Tomorrow:** if continuing, spend the whole session on t=33 (24 short): many palindromic seeds past 1000, faster bitset
  solver, interior-insertion and backtracking extensions. Otherwise pick a different problem.

## 2026-10-15 (scheduled run)
- **Problem:** same as 2026-10-14, focused on w(2;3,33), then w(2;3,35).
- **Frozen definition:** unchanged: an explicit good 2-colouring of [1..n] with n > B_t (t=33: n >= 1064).
- **Approaches (verdicts):**
  1. Extension with interior inserts + trim-6 backtracking: 1039 -> 1046. Works where end-only extension had stalled.
  2. Trim-12 backtracking from 1046: reached 1064 (beats AKS 1063), then 1068 in three independent runs; stalled there.
  3. Palindromic seed climbs from 1000: 1002 / 1004 (inside AKS's published palindromic range); stopped as not needed.
  4. Skeptic gate on "w(2;3,33) > 1068": 3 fresh skeptics (default model, Sonnet, Fable) all REPRODUCED=YES, HONEST=YES/UNSURE,
     NOVEL=NO. OEIS A171081 has an Aug 21 2026 comment by Juan Lopez Marcano: a(31) >= 954, a(33) >= 1072 (w(2;3,33) > 1071),
     with certificates and a Zenodo preprint (10.5281/zenodo.21943191). Skeptic 1 verified the 1071 certificate. DOES NOT COUNT.
  5. Same pipeline at t=35: 1154 -> 1185 (record 1204, 19 short).
  6. Trim-20 from 1068 at t=33: no progress in 1 h.
- **Label:** NO PROGRESS. Skeptic verdicts: 0/3 sign-off (novelty).
- **Code/data:** `problems/vdw-w23t-lower-bounds/` (`code/climb_plain2.py` new; `best/`; `claims/2026-10-15-1/`).
- **Lesson:** the status check must open the OEIS A-number page directly (oeis.org/A171081 is fetchable by WebFetch even though
  OEIS search pages are not). The current records are t=31: >953, t=33: >1071 (Marcano 2026); others still AKS.
- **Ideas for tomorrow:** t=35 is 19 short with steady (slowing) gains; continue it from `best/t35_n1185.txt` with more runs
  and deeper trims, after first re-checking A171081 and the Zenodo record for any t=35 update. Or switch problem.

## 2026-10-16 (scheduled run)
- **Problem:** w(2;3,35) lower bound (record w > 1204, AKS arXiv:1102.5433; re-checked OEIS A171081, Zenodo 21943191,
  arXiv:2608.20824: nothing newer for t=35). Also reviewed `ledger/routed-open-problems.md`; did not pick a routed problem.
- **Frozen definition:** good 2-colouring of [1..n], n >= 1205, no 3-AP in colour 0, no 35-AP in colour 1.
- **Approaches (verdicts):**
  1. Trim-and-regrow from 1185 with trims 12/20/30: 1185 -> 1195 (only trim 20 moved).
  2. Restarts from 1195: -> 1197.
  3. Deeper trims 30-60 from 1197 for 90 min: nothing.
- **Label:** NO PROGRESS (best w(2;3,35) > 1197, 7 short). No skeptic gate (no claim).
- **Code/data:** `problems/vdw-w23t-lower-bounds/best/t35_n1197.txt`, `code/climb_plain2.py`.
- **Ideas for tomorrow:** after three days on w(2;3,t) this basin looks exhausted. Either restart t=35 from a much stronger
  palindromic seed (AKS palindromic range (1114,1155); ours was 1040) to reach a new basin, or switch problem (a routed
  ledger problem or another Tier A target).

## 2026-10-17 (scheduled run)
- **Problem:** w(2;3,38) and w(2;3,39) lower bounds (records > 1378 and > 1418, AKS arXiv:1102.5433; OEIS A171081 re-checked,
  no update for these t). Reason: AKS's step from t=37 to 38 to 39 is only +40, against +53..81 for t=31..37.
- **Frozen definition:** good 2-colouring of [1..n], no 3-AP in colour 0, no t-AP in colour 1, n >= 1379 (t=38) or n >= 1419 (t=39).
- **Approaches (verdicts):**
  1. Cross-t seed (the t=35-good 1197 colouring is t=38/39-good) and old palindromic seeds, trim-20 regrow: t=38 1374, t=39 1412 in 2 h.
  2. Deeper trims 40/60: t=38 1375; t=39 nothing.
  3. Four trims 20-60 on t=38 from 1375 for 90 min: nothing.
- **Label:** NO PROGRESS (t=38 3 short, t=39 6 short). No skeptic gate (no claim).
- **Code/data:** `problems/vdw-w23t-lower-bounds/best/t38_n1375.txt`, `best/t39_n1412.txt`.
- **Ideas for tomorrow:** four days on w(2;3,t) end the same way: the pipeline plateaus just below every known record.
  Switch problem. Candidates: a routed ledger problem with a computable part, or another Tier A target where the published
  search effort is thin (check OEIS first). If ever returning here, the missing ingredient is a fundamentally different
  search (e.g. a complete SAT solver on a structured sub-space), not more trimming.

## 2026-10-18 (scheduled run; cut off before END OF DAY, entry written 2026-10-21 from its notes)
- **Problem:** unknown "?" entries of Brown-Landman-Robertson's Table 1 for k = 3 (arXiv:0706.4420): w1(3,s) s >= 8, M(3,s)
  s >= 8, G(3,s) s >= 10. Tier A.
- **Frozen definition:** exact value of a "?" entry: witness of size v - 1 plus an UNSAT proof at v.
- **Approaches (verdicts):** SAT encodings for w1, M, G (worked); probSAT lower bounds for w1 (n = 192 at s = 7, stalls near 238
  at s = 8); upward SAT scan w1(3,8) (SAT to 237); 357 local-search attempts at 238 (all fail); cube-and-conquer at 238 (11/36
  cubes UNSAT, stopped); monolithic CaDiCaL proved 238 UNSAT, so w1(3,8) = 238, but NOT NEW (Ahmed 2009, Integers 9 A06, as
  wd(2;3,8) = 238). Recomputing the table disagreed with the printed M(3,4..6) and G(3,6).
- **Label:** NO PROGRESS (the one exact value found was already published). No skeptic gate.
- **Code/data:** `problems/vdw-related-functions/` (committed 2026-10-21 as work in progress).
- **Lesson:** search notation variants (w_d, "common difference at most d") in the status check.

## 2026-10-21

### 04:52 UTC (run fired on request)
- **Problem:** the M(3,s) and G(3,s) rows of BLR Table 1 (arXiv:0706.4420), following up the 2026-10-18 disagreement.
- **Frozen definition:** the correct exact value of at least one k = 3 M or G entry that is "?" or wrong in the table: witness of
  size v - 1 under the printed definition, exhaustive impossibility at v by an independent method, not published elsewhere.
- **Approaches (verdicts):**
  1. Re-read definitions and table from the arXiv PDF: quoted correctly; the disagreement is real.
  2. Plain C backtracking (`code/bt.c`): M = 7, 11, 19, 31, 38 (s = 2..6), G = 5, 9, 11, 17, 23, 33, 37 (s = 2..8).
  3. Search-shortcut hypothesis (`code/btv*.c`): forcing x_1 = 0 in M reproduces the printed M row exactly; forcing the first
     gap to 1 in G reproduces the printed G row exactly. Likely mechanism of the errors (inferred, moderate confidence).
  4. Forward-checking search (`code/fc.c`): third method, same values.
  5. CaDiCaL scans for M(3,7) from n = 46 and G(3,9) from n = 45: no result (died once, restarted, still running at log time).
  6. Skeptic gate on "M(3,4) = 19, M(3,5) = 31, M(3,6) = 38, G(3,6) = 23 (printed 18, 29, 37, 22)".
- **Label:** PROMISING. Skeptics: 1 SIGN-OFF, 2 (Sonnet) REJECT on novelty only (Landman-Robertson 2nd ed. not inspectable),
  3 (Fable) SIGN-OFF. All three reproduced every value. 2 of 3, does not count.
- **Code/data:** `problems/vdw-related-functions/` (`code/bt.c`, `code/fc.c`, `code/btv.c`, `code/btv2.c`, `claims/2026-10-21-1/`).
- **Ideas for next run:** the only open objection is the book. Find a readable copy or table of contents of Landman-Robertson
  2nd ed. (2014) sections on these functions; if it settles novelty, send a NEW claim packet to three NEW skeptics. Separately,
  finish M(3,7) and G(3,9) (printed 48 each; true values >= 46 and >= 45 from our witnesses) with symmetry-broken SAT or
  cube-and-conquer: an exact value there that differs from print would be a stronger result.

### 08:53 UTC (scheduled run)
- **Problem:** same as 04:52: BLR Table 1 (arXiv:0706.4420), now targeting M(3,7) and G(3,9) (printed 48 each).
- **Frozen definition:** unchanged from 04:52.
- **Approaches (verdicts):**
  1. Looked again for the Landman-Robertson book: its 1st ed. (2004) notation index does define the one-per-block function,
     so the book treats it; the text is unreadable here (Google Books robots-blocked). Novelty question still open.
  2. Shortcut-hypothesis predictions: restricted (first gap 1) G(3,8) = 37 and G(3,9) = 48, both equal to the printed values
     (SAT and exhaustive C, 2.0e10 nodes for s = 9). Strong support for the 04:52 explanation of the table's errors.
     Gives true G(3,9) >= 48 (47-element witness in `code/btv2_G9_gap1.log`).
  3. Resumable cube-and-conquer for unrestricted n = 48 (`code/cube1.py`, `code/runjobs.sh`): too slow, no cube finished in ~2 h.
  4. Forward-checking search for a restricted 47-block M(3,7) witness: not found in 15 min.
  5. Solver comparison: CaDiCaL 1.9.5 ~20% faster, Kissat slower and ignores assumptions in python-sat. Not worth switching.
  6. Min-conflicts local search for M witnesses: too weak beyond s = 5.
- **Label:** NO PROGRESS (no entry settled this run). No skeptic gate (no claim).
- **Code/data:** `problems/vdw-related-functions/code/` (`cube1.py`, `runjobs.sh`, `jobs1.txt`, `jobs2.txt`, `cubes/`, `fcf.c`,
  `lsM.c`, `bench/`, `btv2_G9_gap1.log`).
- **Ideas for next run:** M(3,7)/G(3,9) at 48 need a better method than plain cubes: e.g. G via a DFS that also uses the
  reversal symmetry and a "remaining length" bound, or an order/ladder encoding for M. The novelty blocker for the 04:52
  claim (the book) needs a human with the book; ask Jace. Otherwise consider a different problem.

### 20:53 UTC (scheduled run; ran into 2026-10-22 UTC through four container restarts)
- **Problem:** G(3,9) in BLR Table 1 (arXiv:0706.4420), printed 48.
- **Frozen definition:** unchanged from 04:52 (exact value of a wrong or "?" k = 3 M/G entry, witness + exhaustive
  impossibility, unpublished).
- **Approaches (verdicts):**
  1. Forward-checking search split on the first two gaps (`code/fcp.c`, `code/runfcp.sh`, 81 resumable cubes): at T = 48,
     2 cubes FOUND a 48-element gap-9 3-AP-free set (mirror images); at T = 49 all 81 NONE. About 4 CPU-h each.
  2. Independent plain backtracking without forward checking (`code/btv2.c`, `code/btp.c`, `code/bt_res/`, `code/btp_res/`):
     maximum 48 exactly, only for first gaps (8,1) and (9,8). Agrees with 1.
  3. Skeptic gate, claim 2026-10-21-2 "G(3,9) = 49": 3 of 3 SIGN-OFF.
  (Earlier SAT cube runs and local search from the 08:53 run were abandoned for this; the M(3,7) work did not continue.)
- **Label:** CONFIRMED. G(3,9) = 49, correcting the printed 48. Skeptics: SIGN-OFF (default model), SIGN-OFF (Sonnet),
  SIGN-OFF (Fable). Shared caveat: the Landman-Robertson book text could not be read.
- **Code/data:** `problems/vdw-related-functions/` (`witness/G_s9_48elements.txt`, `claims/2026-10-21-2/`, code above).
- **Ideas for next run:** M(3,7) (printed 48) with the same split forward-checking search (`code/fcpm.c` forces the first
  block offsets; validated on M(3,4)); then G(3,10), the first "?" entry. The 04:52 claim (M(3,4..6), G(3,6)) could go to a new
  gate with the journal-version finding added to its packet.
