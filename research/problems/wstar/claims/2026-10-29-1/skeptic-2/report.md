# Skeptic 2 report: claim 2026-10-29-1, w*(3;5)=76

## 1. REPRODUCED: yes
Part (1): check.py (own code) tests all a,d with a+2d<=75 on the 75-long string. No violations. Colours used are {1,2,4,5}.
Part (2): bit.c, my own exhaustive DFS, written from scratch. It uses bitset forward checking, MRV and middle-out tie-break, and symmetry breaking (colour complement x->s+1-x and reflection i->n+1-i, via a canonical rule on the two central positions). It splits into 1,501,412 prefix jobs (depth 12, resumable) and was run on one core.
Validation on small cases, using a SAT solver (CaDiCaL via pysat, sat.py/cubes.py), the simple DFS (dfs.c), the MRV DFS (mrv.c) and bit.c:
- 2 colours: n=8 good, n=9 none, so w*=9.
- 3 colours: n=22 good, n=23 none, so w*=23.
- 4 colours: n=39 good, n=40 none, so w*=40.
Good colourings found by the solvers were re-verified with an independent Python checker.
Result for 5 colours, n=76: all 1,501,412 jobs returned found=0 (none found=1), job ids contiguous 0..1501412-1, 82,318,012,542 nodes. NO good 5-colouring of [1,76] exists, per my search.
Hunt for a good 76-colouring: none (this is the same exhaustive run). As a sanity check, bit 75 5 finds a good 75-colouring in 7.6e8 nodes (a different one from the claimant's: 125114424221245524545144512115155224112511442422124552454514451211515522412, verified valid by the Python checker). So the search is not trivially rejecting everything.
Timing: the n=76 run took 11,528 s wall (~3.2 h, 1 core; machine shared with other reviewers). Earlier attempts were abandoned: plain CaDiCaL cubes (>20 min per cube, 75 cubes), naive backtracker (est. >30 h), a first MRV DFS (est. ~8e10 nodes at 0.7M/s).
Caveat: a bug in my own code would not be caught by an independent second implementation of the n=76 run; the checks are small-case agreement across 4 independent implementations (3 colours/4 colours agree with the published 23/40) and the positive n=75 test. The pairing of reflection symmetry with complement was validated only through the 2/3/4 colour known values (n=9,40 even case exercised).

## 2. NOVEL: no evidence of prior publication found (some sources not openable)
Printed value in arXiv:0706.4420 Table 1 (fetched, text via WebFetch): w*(3,s)=9,23,40,>=75 for s=2..5; "?" for 6..16. No further explanation of the 75.
Queries run (WebSearch unless noted):
1. "w*(3,5)" OR "w^*(3;5)" van der Waerden rainbow arithmetic progression colours form arithmetic progression Brown Landman Robertson
2. "Bounds on van der Waerden numbers and some related functions" w*(3,5) 75 table
3. WebFetch arxiv.org/abs/0706.4420 (abstract); WebFetch arxiv.org/pdf/0706.4420 (Table 1)
4. WebFetch Wikipedia "Van der Waerden number": no w*, no 75/76 for 5 colours (the 5-colour k=3 entry is ">170")
5. WebFetch scholar.google.com search: blocked (robots). Could not check Google Scholar.
6. WebFetch arxiv.org/a/search: failed; export.arxiv.org API: blocked (robots). Could not use arXiv search directly; used WebSearch results instead.
7. WebFetch api.semanticscholar.org citations of 0706.4420: one citing paper only, "A short proof that w(3,k)>=(1-o(1))k^2" (arXiv 2209.07651), unrelated to w*. Semanticscholar paper search: failed.
8. WebFetch oeis.org/search (two queries incl. 9,23,40): blocked (robots). OEIS search unavailable. WebSearch "9, 23, 40" van der Waerden ... OEIS; fetched A121385 (min number of monochromatic 3-APs; unrelated). Other hits A157199, A135415 not opened. So I could NOT rule out an OEIS entry for w*(3,s); WebSearch showed none.
9. WebFetch math.stackexchange search: blocked. mathoverflow search: blocked. WebSearch for MO/MSE phrasing (two queries) found nothing relevant.
10. WebSearch "arithmetic progression of colors" OR "colors form an arithmetic progression" ... (hits: 0706.4420, rainbow-AP papers 1404.7232, math/9910092, 1304.1829, none give w*(3,5)).
11. WebSearch Landman Robertson "Ramsey Theory on the Integers" w*(3 ... ; and "third edition" variant. The book itself could not be opened, so I cannot rule out that it (or its later editions) print a value for w*(3,5).
12. WebSearch extended: arXiv w^*(3 ... 2025 2026 (hits: 2606.02541, 2609.31798, 2610.32000, 2603.25922 survey; the survey 2603.25922 fetched: no w*). 2610.32000 and 2609.31798 not opened; they concern multicolour w(k;s) lower bounds, not w*.
13. WebFetch ar5iv 2102.01543: no w*.
Conclusion: nothing found, but Scholar, OEIS search, MO, MSE could not be opened and the book was not seen, so absence is weakly supported.

## 3. HONEST: yes, with caveat on (3)
Frozen definition: (1) good colouring of [1,N-1]: met (75, verified). (2) exhaustive check that none of [1,N]: met by my independent run for N=76 (the claimant's 4.3 CPU-hours is consistent with my ~3.2 h). (3) not already published: no publication found, but the search was partial (see above). The goal was not narrowed: the definition checked (common difference d>=1, colours c2-c1=c3-c2 including the monochromatic case) matches BLR's. The claim "table prints only >=75" is true per the fetched table.

## Verdict
See verdict.txt.
