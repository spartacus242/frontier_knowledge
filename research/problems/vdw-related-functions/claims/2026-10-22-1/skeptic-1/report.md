# Skeptic 1 report (default model)

Transcribed by the researcher from skeptic 1's final hand-back message: the skeptic's tool refused to let it write this file
itself. Content unchanged apart from layout.

## Method
Read only claim.md. Confirmed the printed definition in arXiv:0706.4420v1 and that Table 1 prints M(3,7) = 48.
- `check_witness.py`: the 50 numbers sit one per block [7(i-1), 7i-1] and contain no 3-term progression.
- `bt.c`: plain left-to-right backtracking. `sat.py`: CaDiCaL encoding (one element per block, every cross-block 3-AP
  forbidden). `fc.c`: main solver, most-constrained block first, deletes every value that would complete a 3-AP, re-checks any
  solution found.
- `cube.sh` / `run.sh`: 196 resumable cubes fixing centre block 25 (offsets 0-3, by mirror symmetry o -> 6-o) and blocks 24, 26
  (all 49 pairs).

## Validation
| s | plain bt | SAT | main solver | cube split + symmetry | printed |
|---|---|---|---|---|---|
| 2 | 7 | 7 | 7 | - | 7 |
| 3 | 11 | 11 | 11 | - | 11 |
| 4 | 19 | 19 | 19 | n=19 all impossible | 18 |
| 5 | 31 | 31 | 31 | n=31 all impossible; n=29 solution found | 29 |
| 6 | 38 | timed out | 38 (37-element witness checked) | n=39 108/108 impossible; n=37 solution found | 37 |
The mirror shortcut is valid only for odd n and was relied on only there (n = 51 is odd).

## Results
All 196 cubes for s=7, n=51 impossible (16 immediately, as the fixed values form a 3-AP); about 1.8e10 nodes, ~1.6 h on 2
processes; every result file present. With the witness, M(3,7) = 51. A SAT cross-check of two s=7 cubes did not finish in 15 min.
Side finding: the table is also wrong at s = 4, 5, 6 (true 19, 31, 38).

## Queries (24 web searches, several extended)
Paper title; "M(3,7)" one element each block; OEIS phrasing; JCTA 2008 version; Landman-Robertson 2nd ed. M(k,s); "0706.4420";
MathOverflow and Math.SE phrasings (with and without site:); "7, 11, 19, 31, 38"; "7, 11, 18, 29, 37, 48"; OEIS-limited search;
cited-by on Scholar/Semantic Scholar/ResearchGate; Brown-Hare bounded gaps; Tanbir Ahmed 2009; book phrasings on Google Books and
ams.org; "one term in each block". None gave a value for M(3,7) or a correction.
Fetched: arXiv PDF/abstract (only v1); journal version JCTA 115 (2008) 1304-1309 and the authors' Colgate copy (no M or G);
Fox-Schildkraut arXiv:2608.20533 (same function as m(k;r), no values); Nathanson 1980; both Wikipedia articles; Semantic Scholar
citers (19 for the journal version, none relevant; Ahmed 2009 and Robertson et al. 2023 read in full).
Blocked: OEIS search, Google Scholar and Books, Gasarch's VDWgaps.pdf, AMS back matter of the 2nd ed., academia.edu copy.

## Honesty
Exact printed definition, explicit 50-element witness, complete impossibility for 51; nothing narrowed.

## Verdict
See verdict.txt: REPRODUCED YES, NOVEL UNSURE (leaning yes), HONEST YES, REJECT.
