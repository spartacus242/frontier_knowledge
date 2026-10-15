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
