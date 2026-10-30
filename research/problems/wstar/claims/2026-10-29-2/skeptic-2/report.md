# Skeptic report, claim 2026-10-29-2: w*(3;5) = 76

## 1. REPRODUCED? -- Part (1) yes, part (2) NO (not reproduced)
- Part (1): own checker (check1.py) confirms the 75-term string is a good 5-colouring (no AP with c2-c1=c3-c2, d>=1); it uses colours {1,2,4,5} only, so the lower-bound reasoning via W(3;4)=76 is sound: {1,2,4,5} has no 3-term AP, hence good = no monochromatic 3-AP (W(3;4)=76 is a literature value I did not re-derive).
- Search code written from scratch: sat.py (CaDiCaL via pysat, symmetry breaking chi(1)<=3 by colour reversal c->6-c), dfs.c / dfs2.c (plain ordered DFS), cube.py (cube-and-conquer, resumable).
- Validation: SAT and DFS both agree with printed values: 2 colours good at 8, none at 9; 3 colours good at 22, none at 23; 4 colours good at 39 (positive control: found), none at 40 (SAT 6.6 s; DFS 27,264,184 nodes, 1.7 s).
- Part (2), n=76, 5 colours: NOT completed. Monolithic CaDiCaL run ran ~6h10m CPU (started ~Oct 29, no result) and was killed by a container restart (03:19 UTC); relaunch (03:42) was killed again at ~05:25 UTC after ~1h45m. Cube run (K=6, 4923 cubes): 0 cubes finished in 12 min. Plain DFS: depth-7 prefixes need >1e9 nodes each (3 of 6 sampled exceeded 120 s; 18063 prefixes) => estimated hundreds of CPU-hours. Space covered with a completed proof: 0%. No good 76-colouring was found either (no SAT result from any run; no full search either). The claimant's 4.3 CPU-hour figure is not contradicted but I could not match it in a one-core budget interrupted by restarts (the solver is not checkpointable; cube approach was too slow).
- Total search wall-clock: ~6h10m + ~1h45m + short experiments, one core.

## 2. NOVEL? -- no evidence of prior publication found, but not conclusive
Queries run (WebSearch/WebFetch):
- fetch arxiv.org/abs/0706.4420 and arxiv.org/pdf/0706.4420 (Table 1: w*(3,s)=9,23,40,>=75, ? for s>=6; confirmed; the paper has no remark on 76)
- "w*(3;5)" OR "w*(3,5)" van der Waerden rainbow arithmetic progression colours form arithmetic progression
- Brown Landman Robertson "Bounds on van der Waerden numbers and some related functions" w*(k;s) citing
- van der Waerden number variant colours form arithmetic progression 9, 23, 40 sequence w*(3,s) 75 76 exact value (extended)
- mathoverflow OR math.stackexchange "van der Waerden" colouring "colors form an arithmetic progression" 3-term progression 5 colors 76
- fetch en.wikipedia.org/wiki/Van_der_Waerden_number (no w*; no mention)
- fetch arxiv.org/abs/2102.01543 (abstract only; no mention)
- fetch api.semanticscholar.org citations of 0706.4420 (returned only arXiv:2209.07651, w(3,k)>=(1-o(1))k^2; list may be incomplete)
- fetch oeis.org/A171081 (w(3,n); no w*); OEIS search pages: curl returned nothing, WebFetch blocked by robots (could not be checked)
- Google Scholar: blocked by robots (not checked). Landman-Robertson book 2nd ed.: not accessible, not checked. arXiv listing/MathOverflow/MSE searched only through the web search engine, no direct site search.
Result: no source found stating w*(3;5)<=76 or =76. Because Scholar, OEIS search and the book could not be opened, absence is not proven.

## 3. HONEST? -- Not established
The frozen definition requires (2) an exhaustive check. The lower bound is fine and honestly attributed to W(3;4)=76. The upper bound exhaustive check could not be independently verified, so the definition's condition (2) is unconfirmed by me; the claim wording is not narrowed, but its sole new content is unverified.
