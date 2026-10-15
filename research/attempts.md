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
