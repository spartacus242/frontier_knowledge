# Skeptic-3 report on claim packet 2026-10-21-1

Only `claim.md` was read. Everything below was produced from scratch inside this folder.

## 1. REPRODUCED? — YES

### 1a. Witnesses (`check_witnesses.py`)
All four witnesses checked literally against the quoted definitions (1-indexed blocks
`x_i in [(i-1)s, is-1]` for M; consecutive gaps `<= s` for G; 3-AP-freeness tested as
`2*x_j - x_i not in X` for all i<j): M(3,4) 18 elements OK; M(3,5) 30 OK; M(3,6) 37 OK; G(3,6) 22 OK.

### 1b. Impossibility, method 1: own C backtracker (`search.c`, `table.c`)
DFS with a "forbidden value" counter array (adding x forbids 2x-y for every earlier y).
Results (`run_M6.txt`, `table_out.txt`):

| case | result | nodes |
|---|---|---|
| M s=4, 19 blocks | IMPOSSIBLE | 26 273 |
| M s=5, 31 blocks | IMPOSSIBLE | 3 839 906 |
| M s=6, 38 blocks | IMPOSSIBLE | 1 502 148 753 (116 s) |
| G s=6, 23 elements | IMPOSSIBLE | 257 386 |

Iterative deepening (`table.c`) gives the full k=3 rows under the quoted definitions:
* G(3,s), s=2..8: 5, 9, 11, 17, **23**, 33, 37 (printed 5, 9, 11, 17, 22, 33, 37). Only s=6 differs.
* M(3,s), s=2..6: 7, 11, **19, 31, 38** (printed 7, 11, 18, 29, 37). s=4,5,6 differ.
So the claim's four corrections are exactly the four discrepancies; all other printed entries in range are confirmed.

### 1c. Impossibility, method 2: independent SAT encoding, CaDiCaL (`sat_check.py`, `sat_small.txt`, `sat_M6.txt`)
Different encoding (exactly-one per block / position variables with gap clauses, plus one clause per 3-AP).
M 4 18 SAT (a different witness), M 4 19 UNSAT, M 5 30 SAT, M 5 31 UNSAT, G 6 22 SAT, G 6 23 UNSAT.
M 6 37/38 left running in background; see `sat_M6.txt` if finished.

### 1d. External validation of the search engine
Rabung (Math. Magazine 48 (1975) 142-148) computed N*(M,3) = least span forcing a 3-AP in a sequence
with gaps <= M: 6, 18, 27, 64, 102 for M=2..6. My `span.c` (same engine, maximising span) returns
exactly 6, 18, 27, 64, 102 (`span_out.txt`).

### 1e. Could the printed values be right under another reading?
`[(i-1)s, is-1]` and `[(i-1)s+1, is]` are translates, and G is shift-free, so off-by-one readings give
the same numbers. Variants computed (`table_out.txt`): block width s-1 gives M = 17, 25, 35 (s=4,5,6);
width s+1 gives M(3,4) = 38; G with gap <= 5 gives 17, gap <= 7 gives 33. None reproduces 18/29/37/22.
The printed values are simply too small (the authors' backtrack stopped short).

## 2. NOVEL? — YES (nothing published found)

Key finding: the journal version (JCTA 115 (2008) 1304-1309; https://www.sfu.ca/~vjungic/tbrown/tom-4.5.pdf
and https://math.colgate.edu/~aaron/pap/VdwBounds.pdf) does NOT contain Section 3, the functions M/G,
or the M/G table rows at all (its Table 1 has only w(k,3;2) and w1(k,3)). The M/G table exists only in
arXiv:0706.4420v1 (single version, no erratum). No later source states the corrected values.

Queries run (WebSearch; outcome in brackets):
1. "Bounds on some van der Waerden numbers" Brown Landman Robertson Table M(k,s) G(k,s) [paper pages only]
2. van der Waerden-like function 3-term arithmetic progression "gaps at most" sequence 5, 9, 11, 17, 23, 33, 37 [nothing]
3. "7, 11, 19, 31, 38" arithmetic progression [irrelevant OEIS hits A070421, A227281, A074337]
4. "5, 9, 11, 17, 22, 33, 37, 48" OR "5, 9, 11, 17, 23, 33, 37, 48" arithmetic progression [nothing]
5. "7, 11, 18, 29, 37, 48" OR "7, 11, 19, 31, 38, 48" van der Waerden [nothing]
6. arXiv 0706.4420 Brown Landman Robertson erratum OR correction Table 1 [nothing]
7. 3-AP-free set consecutive differences at most s maximum size OEIS "progression-free" "gap" [nothing]
8. "Ramsey Theory on the Integers" Landman Robertson errata OR corrections second edition [no G/M content]
9. "Brown" "Landman" "Robertson" "Bounds on some van der Waerden numbers" cited OR citing 2008 (extended) [citers are about w(3,k)]
10. "M(k,s)" OR "M(3,s)" "van der Waerden" "x_i" interval "(i-1)s" arithmetic progression backtrack [only the arXiv paper]
11. maximum size 3-AP-free set "consecutive" "differences at most" OR "gaps at most" 6 is 22 OR 23 [nothing]
12. site:oeis.org "van der Waerden" "progression" "difference" "at most" sequence 4, 8, 10, 16, 22, 32, 36 [nothing]
13. mathoverflow OR math.stackexchange "Brown, Landman" "Robertson" van der Waerden-like table error "G(3" OR "M(3" [nothing]
14. "4, 8, 10, 16, 22, 32, 36" OR "6, 10, 18, 30, 37" progression-free [nothing]
15. Brown Erdős Freedman "arithmetic progressions" "bounded gaps" 3-term exact values g(3,s) [nothing]
16. "van der Waerden" "Section 3" "related functions" M(k,s) G(k,s) blocks ... table values corrected (extended) [nothing]
17. scholar.google.com "Bounds on van der Waerden numbers and some related functions" [nothing new]
18. Rabung Lotts OR "Landman" "sequences with bounded gaps" arithmetic progression function values table [found Nathanson 1980, Brown–Hare 1997, Fox–Schildkraut 2026]
19. Landman Robertson "Ramsey Theory on the Integers" "bounded gaps" OR "gaps at most" 3-term ... table values [nothing]
20. "nearly consecutive" sequences "arithmetic progressions" OEIS gap bound 3-term maximum length [Alon–Zaks, Fox–Schildkraut; no small values]
21. arXiv 2608.20533 "nearly consecutive sequences without long arithmetic progressions" [found]
22. Landman Robertson book "Ramsey Theory on the Integers" errata page Robertson colgate [no G/M errata]
23. "3-term arithmetic progression" set "gaps" "at most 6" OR "difference at most 6" maximum 22 elements [nothing]
24. "M(3,4)" OR "M(3, 4)" OR "G(3,6)" OR "G(3, 6)" van der Waerden blocks gaps arithmetic progression [only the arXiv paper]
25. Rabung "On applications of van der Waerden's theorem" OR "sequences with bounded gaps" exact values G(3,r) [Rabung 1975]
26. OEIS "no 3-term arithmetic progression" "consecutive differences" OR "gaps" "at most n" maximal length sequence [A262347, A092482, A230490, A208746: unrelated]
27. "Progressions in sequences of nearly consecutive integers" Alon Zaks f(k,r) values [no small values]
28. oeis "5, 9, 11, 17, 23, 33, 37" OR "4, 8, 10, 16, 22, 32, 36, 47" OR "6, 10, 18, 30, 37, 47" [unrelated A-numbers]
29. "gap number" OR "gap numbers" g(k;r) arithmetic progression exact values small table computed "g(3" [nothing]
30. "Ramsey Theory on the Integers" "nearly consecutive" OR "bounded gaps" G(k,s) table "Nathanson" chapter 2 section [nothing]
31. van der Waerden "related functions" table "M(3, 4) = 18" OR "M(3,4)=18" OR "G(3, 6) = 22" OR "G(3,6)=22" OR "M(3,5)=29" [only the arXiv paper]
32. Rabung 1975 "N*(6,3)" OR "N*(M,l)" sequences bounded gaps ... 6, 18, 27, 64, 102 [nothing new]
33. "Ramsey Theory on the Integers" Landman Robertson "G(k, s)" OR "M(k, s)" OR "Nathanson" "bounded gaps" exercise table 2014 (extended) [nothing]
34. mathoverflow van der Waerden "bounded gaps" 3-term arithmetic progression longest sequence gap at most s exact values [nothing]
35. "Brown" "Landman" "Robertson" 2008 table "G(3" "M(3" incorrect OR wrong OR corrected OR "should be" (extended) [nothing]
36. github OR gitlab "van der Waerden" "bounded gaps" OR "blocks" 3-AP-free search G(3,s) M(3,s) ... reproduce [nothing]
37. books.google "Ramsey Theory on the Integers" "Nathanson" "gaps" "arithmetic progression" G(k,s) blocks "(i-1)s" [nothing]
38. "Landman" "Robertson" van der Waerden-like numbers "w_1(3" OR "w1(3,s)" OR "w*(3" table 9 23 34 73 113 193 [only the arXiv paper]
39. "Bounds on van der Waerden numbers and some related functions" citations semantic scholar OR researchgate [nothing new]
40. "Ramsey Theory on the Integers" table of contents second edition sections "2.6" OR "other generalizations" ... Nathanson [nothing]
41. arxiv 2025 OR 2026 "sequences with bounded gaps" OR "bounded-gap" 3-term ... exact values computed SAT "gap" van der Waerden G(3 [nothing]

Pages fetched (WebFetch):
* sfu.ca/~vjungic/tbrown/index.html — Brown's paper list; no errata; journal paper = tom-4.5.pdf.
* sfu.ca/~vjungic/tbrown/tom-4.5.pdf and math.colgate.edu/~aaron/pap/VdwBounds.pdf — journal version: no M/G functions, no M/G rows.
* math.colgate.edu/~aaron — no errata for the RTI book; no M/G.
* arxiv.org/abs/0706.4420 — single version v1 (2007-06-29), no erratum.
* arxiv.org/pdf/0706.4420 — definitions as quoted in the packet are verbatim; Table 1 as quoted; "standard backtrack algorithm".
* ar5iv.arxiv.org/html/0706.4420 — partial render, nothing extra.
* augusta.elsevierpure.com (journal record) — JCTA 115(7) 2008, 1304-1309, DOI 10.1016/j.jcta.2008.01.005; abstract has no M/G.
* api.semanticscholar.org citations of arXiv:0706.4420 — one listed citer (arXiv:2209.07651, about w(3,k)).
* oeis.org/A171081 (w(3,n)); A217058, A227281, A262347, A230490, A208746, A092482 — none concerns G/M.
* en.wikipedia.org/wiki/Van_der_Waerden_number — no G/M.
* Nathanson 1980 (Canad. Math. Bull. 23) — defines G and M, inequalities only, no values.
* Brown–Hare 1997 (JCTA 77, via cs.umd.edu VDWgaps.pdf) — G(3,2)=5, G(4,2)=10, G(5,2)=19, G(6,2)=37 only.
* Alon–Zaks 1998 (JCTA 84, vdw7.pdf) — asymptotics only.
* Fox–Schildkraut arXiv:2608.20533 (Aug 2026) — defines g(k;r), m(k;r); asymptotics only, no tables, no BLR mention.
* Rabung 1975 (Math. Mag. 48, via cs.umd.edu resappvdw.pdf) — N*(M,3)=6,18,27,64,102 (span, not count); matches `span.c`.
* cs.umd.edu RTI-LR.pdf — 2004 errata for RTI 1st ed.: nothing on G/M.
* Ahmed 2013 (JIS 16), Bialostocki–Oles (Integers 26, 2026), arXiv:1404.7348, Jungić RamseyProjects section-26, othervdwbook.pdf — no G/M values.

Not directly inspectable: the text of the Landman–Robertson book 2nd ed. (2014). Its public errata and
Robertson's page contain nothing on G/M and no search turns up G(k,s)/M(k,s) tables in the book. Residual
risk small but nonzero.

## 3. HONEST? — YES
The frozen definition asks for the correct exact value of at least one k=3 M or G entry that is wrong or "?",
via (a) a witness of size v-1 meeting the printed definition and (b) an exhaustive impossibility proof for size v,
not already published. The claim delivers exactly that for four wrong entries (M(3,4)=19, M(3,5)=31, M(3,6)=38,
G(3,6)=23) with the definitions exactly as printed; nothing reinterpreted, weakened or narrowed. The sentence
excluding other entries is a scope statement, not a weakening.

## Files
check_witnesses.py; search.c, run_M6.txt; table.c, table_out.txt, table_big.txt; sat_check.py, sat_small.txt,
sat_M6.txt; span.c, span_out.txt; verdict.txt.

## Addendum: SAT status at sign-off
SAT cross-check for M(3,6): n=37 SAT (CaDiCaL returned the identical witness; sat_M6.txt). n=38 was still running (>25 CPU min) when this report was finalised; the impossibility of 38 blocks therefore rests on the C backtracker (method 1), which agrees with the SAT solver on all six smaller cases and reproduces Rabung's 1975 values exactly.
