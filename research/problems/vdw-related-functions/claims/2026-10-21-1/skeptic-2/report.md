# Skeptic-2 report, claim 2026-10-21-1

## Q1 REPRODUCED: YES
- check.py: all 4 witnesses valid (distinct, sorted, each x_i in [(i-1)s, is-1] resp. gaps<=6, no 3-AP).
- Method A (CaDiCaL via python-sat, check.py/g_only.py): M(3,2..5)=7,11,19,31 ; G(3,2..7)=5,9,11,17,23,33.
- Method B (independent C backtracking, dfs.c, fc.c with forward checking): M(3,2..5)=7,11,19,31; M(3,6)=38 (1.03e9 nodes, exhaustive, max free size 37); G(3,2..7)=5,9,11,17,23,33.
- Confirmed: M(3,4)=19, M(3,5)=31, M(3,6)=38, G(3,6)=23. (SAT on M(3,6) was too slow; the C exhaustive search is the proof there. G(3,8) not rechecked; not claimed.)
- Alternate readings: printed M row 7,11,18,29,37 vs true max-free-sizes 6,10,18,30,37 and true M 7,11,19,31,38: no uniform reading (value or value-1) gives the printed row. Block shift to [(i-1)s+1,is] is translation-equivalent. So printed values are wrong under the quoted definitions.
## Q2 NOVEL: UNSURE (leaning yes)
Queries (WebSearch/WebFetch) and outcomes:
- arxiv abs 0706.4420: single version v1, no comments or corrections.
- "Bounds on some van der Waerden numbers" Brown Landman Robertson (Elsevier page, JCTA 115 (2008) 1304-1309): abstract mentions only w(k,m;2) bounds and a two-color m=3 table; no errata. Appears a different, shorter paper; no G/M table seen.
- G(3,s)/M(3,s) value strings (5,9,11,17,22,33; 5,9,11,17,23): nothing beyond the arXiv paper.
- OEIS web searches for "5, 9, 11, 17, 23" and "7, 11, 19, 31, 38"; fetched A157102, A135415 (unrelated). No match.
- MO/MSE search on the M(k,s) definition: nothing.
- Landman-Robertson book errata (gasarch RTI-LR.pdf): no G/M entries. Book text itself not inspected.
- Brown-Hare 1997 bounded gaps paper: defines G(k,r) (gaps < r), no k=3 table.
- arXiv 1201.3842: no G/M. Tom Brown paper list: no errata, no G/M.
- "G(3,6)" "23", errata/citation variants: nothing.
Could not exclude the book (2nd ed.) text, OEIS entries not indexed by search, or citing papers.
## Q3 HONEST: YES
Four entries corrected with witnesses and exhaustive proofs of both halves; within the stated definitions; other entries not claimed.
