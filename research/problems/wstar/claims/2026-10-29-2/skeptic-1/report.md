# Skeptic report: claim 2026-10-29-2, "w*(3;5) = 76"

All code is in /tmp/claude-0/g2s1 and was written from scratch for this review. I did not open the
claimant's repository. (A process listing I ran to find my own PIDs also showed other users' jobs.
I ignored them and used nothing from them.)

## 1. REPRODUCED? Yes

### Part (1): the witness is a good 5-colouring of [1,75]
`check.py` tests every 3-AP (a, a+d, a+2d) with d >= 1 for c2-c1 == c3-c2.
- The witness string has length 75 and uses only the colours {1,2,4,5} (counts 20/19/0/18/18).
- It has 0 bad APs, so it is good. As a cross-check, it also has 0 monochromatic 3-APs.
- The set {1,2,4,5} contains no non-constant 3-term AP (checked by enumeration). So a 4-colouring
  with no monochromatic 3-AP, recoloured into {1,2,4,5}, is good. With W(3;4) = 76 (Beeler-O'Neil
  1979; OEIS A135415 lists 3, 9, 27, 76), this gives w*(3;5) >= 76. The packet's statement holds.
  The witness itself shows the lower bound directly, without citing W(3;4).

### Part (2): no good 5-colouring of [1,76] exists (exhaustive search, completed)
Final method (`fc8.c`, a C program):
- Depth-first search with forward checking. Each unassigned position keeps a mask of forbidden
  colours. When position k gets colour c, then for every coloured position i the third position j of
  each AP through i and k is updated:
  - j = 2k-i loses colour 2c-c_i;
  - j = 2i-k loses colour 2c_i-c;
  - j = (i+k)/2 loses colour (c_i+c)/2.
  A position with no colour left prunes the branch.
- Branching uses the fewest-remaining-colours rule, with ties going to the position nearest the
  centre. The bookkeeping is bit-parallel over 128-bit masks.
- Work units are all colourings of the central block, positions 34..43 (1-based). Branches that
  forward checking already refutes are dropped. A unit is kept only if it is lexicographically
  minimal among its images under colour reversal C (c -> 6-c), position reversal R and RC. These
  four maps send good colourings to good colourings and map the block to itself, so every orbit of
  good colourings has a member in a kept unit.
- That leaves 313,357 units. Each one is searched to the end, and a done-file makes the run
  resumable.
- There is a node cap per unit: a unit over 5,000,000 nodes would be handed to CaDiCaL
  (`cdcl_caps.py`). No unit reached the cap, so the SAT hand-off was never used.

Result: all 313,357 units completed. Each unit index 0..313356 is recorded exactly once in
done7.txt, with 0 solutions. The search visited 19,785,497,608 nodes. No good 76-colouring exists.

Cost:
- About 2,630 CPU-seconds (about 44 CPU-minutes) on one core.
- Of that, about 76 s came from the slower scalar version `fc7.c` (the first 810 units). The
  remaining units ran in `fc8.c`, which resumed from the same done-file with the same unit
  numbering.
- Wall clock was 23:22 to 00:09:40 UTC.
- Coverage: 100 % of the unit space (313,357 of 313,357 units).

Validation of the search code:
- **Known values, `fc2`/`fc6`/`fc7`/`fc8`:**
  - 2 colours: n=8 has 6 good colourings, n=9 has none.
  - 3 colours: n=22 has 2, n=23 has none.
  - 4 colours: n=39 has 78, n=40 has none.
  - These match the printed 9, 23, 40, and also the plain brute force in `dfs.c`. With symmetry
    reduction on, every orbit of the full solution list for n=39 and n=8 is still represented.
- **Positive control at the real size:** the witness's canonical central block was run with n=75
  (`fc8b`, block 15542551224). The search found 15 good colourings, all verified, and one is in the
  witness's symmetry orbit.
- **Two independent implementations agree:**
  - The scalar forward checker `fc7.c` was rerun on every 50th unit (6,268 units, 4.1e8 nodes). Its
    node count and solution count matched `fc8` for every one of them.
  - 200 more sampled units matched exactly as well.
- **SAT cross-check, done separately with my own CNF (`enc.py`) and pysat solvers:**
  - The encoding reproduces 9, 23 and 40 (finding good colourings at 8, 22, 39 and UNSAT at 9, 23,
    40), with both CaDiCaL and Glucose.
  - 12 random good central blocks (positions 34..43) at n=76 were each decided UNSAT by CaDiCaL
    (`satx.py`).
  - A 7-position cube was refuted by both the DFS (13 s) and CaDiCaL, Kissat and Glucose
    (126 to 177 s). A 10-position cube that was heavy for the DFS was refuted by CaDiCaL in 3.9 s.

Hunting for a good 76-colouring:
- The exhaustive DFS is itself the hunt. It would have printed any good colouring, and it found none.
- Earlier attempts also found none: SAT cube-and-conquer (`acc.py`, about 1,100 cubes, about
  40 CPU-min) and direct sub-cube runs with CaDiCaL, Kissat and Glucose.

What did not work, for the record:
- Plain CDCL:
  - Cubes with 7 to 10 central positions fixed took 2 to 3 minutes each.
  - Adaptive cube-and-conquer would have taken far more than 9 hours.
- Redundant clauses ("no long AP inside a colour class") did not help.
- A SAT test labelled "4 colours, n=76" was actually the w*(3;4) instance, not W(3;4). It is not
  used anywhere in the argument.

## 2. NOVEL? Probably yes: nothing found, but two books could not be checked

Nothing I could open states w*(3;5) = 76, w*(3;5) <= 76, or any improvement on the printed ">= 75".

Queries and sources, in order:
1. arXiv abs page of 0706.4420 (v1 only, 2007-06-29; no journal reference or comments).
2. arXiv PDF of 0706.4420.
   - Section 3 defines w*(k;s) exactly as in the packet.
   - Table 1 prints "w*(3, s) 9 23 40 >= 75 ? ...".
   - The values come from "a standard backtrack algorithm".
3. ar5iv HTML of 0706.4420 (truncated before Table 1).
4. WebSearch: "w*(3;5)" van der Waerden arithmetic progression colours form arithmetic progression
5. WebSearch: Brown Landman Robertson "Bounds on van der Waerden numbers and some related functions"
6. WebSearch (extended): van der Waerden numbers colours forming arithmetic progression "w*(3" 75 five colors
7. arXiv html 2603.25922 (Bergelson-Richter survey, March 2026): no w*, only W(4,3)=76.
8. Wikipedia "Van der Waerden number" (current): no w*; lists w(4;3,3,3,3)=76 (Beeler and O'Neil).
9. Wikipedia "Van der Waerden's theorem": no w*.
10. WebSearch: "colors form an arithmetic progression" van der Waerden coloring
11. WebSearch: OEIS 9, 23, 40 van der Waerden arithmetic progression colors
12. WebSearch: site:mathoverflow.net van der Waerden colors arithmetic progression "arithmetic progression of colors"
13. WebSearch: Landman Robertson "Ramsey Theory on the Integers" second edition van der Waerden colors arithmetic progression w* table research problem
14. WebSearch: "0706.4420" citations OR "Bounds on van der Waerden numbers and some related functions" cited
15. WebSearch: math.stackexchange coloring integers no three-term arithmetic progression whose colors form arithmetic progression
16. arXiv 1005.3749 and 1201.3842 (found via the citation search): not about w*.
17. Google Scholar search and cited-by page: blocked (robots). Not readable.
18. Semantic Scholar citations API for arXiv:0706.4420: one citing paper, "A short proof that
    w(3,k) >= (1-o(1))k^2" (2022). Not about w*.
19. OpenAlex API: blocked. Semantic Scholar search endpoint: error. arXiv export API: robots-blocked.
20. arXiv author page for Robertson: rate-limited. Robertson's CV (math.colgate.edu) was read
    instead. Post-2007 papers include nothing on w*. It lists the books "Ramsey Theory on the
    Integers, 2nd ed." (2014) and "Fundamentals of Ramsey Theory" (2021).
21. Open Problem Garden, Landman category: nothing on w*.
22. Rödl-Sales, "A blurred view of Van der Waerden type theorems" (CPC 2021): no w*.
23. WebSearch: "van der Waerden" "w^*(3" OR "w*(3,5)" OR "w*(3;5)"
24. Emergentmind page for arXiv 2606.02541 (Fox-Hunter, June 2026): no w*.
25. Errata page (Gasarch site) for Landman-Robertson, 2004 edition: no w*.
26. JCTA 2008 journal version, "Bounds on some van der Waerden numbers" (Pure page): abstract has no w*.
27. Google Books feeds and googleapis books: blocked. Not readable.
28. OEIS search page: robots-blocked. OEIS A-number pages read:
    - A217235, A121385, A394445: unrelated.
    - A135415: W(3;r) = 3, 9, 27, 76; no w*.
29. WebSearch: mathoverflow van der Waerden numbers table colours "arithmetic progression" Brown Landman Robertson related functions open values
30. WebSearch: site:math.stackexchange.com van der Waerden coloring "colors" "arithmetic progression" three term AP colours in arithmetic progression
31. WebSearch: site:mathoverflow.net van der Waerden "Landman" "Robertson"
32. WebSearch (extended): "van der Waerden" "arithmetic progression of colors" OR "colours in arithmetic progression" 3-term five colours exact value 76
33. WebSearch: arXiv 2025 2026 van der Waerden type numbers colourings "arithmetic progression" colours SAT exact values Brown Landman Robertson w*
34. WebSearch: Robertson "Fundamentals of Ramsey Theory" 2021 van der Waerden table colors arithmetic progression w*
35. WebSearch: "w*(3,5)" OR "w*(3;5)" OR "w^*(3,5)" 76 coloring
36. arXiv 1404.7348 "Topics in Ramsey Theory": no w*.
37. Ahmed, "Some more van der Waerden numbers" (JIS 2013): no w*.

Sources I could not open:
- **Landman-Robertson, "Ramsey Theory on the Integers", 2nd ed. (2014):** not available online
  (bookstore and catalogue pages only).
- **Robertson, "Fundamentals of Ramsey Theory" (2021):** not available online either.
- **Google Scholar:** blocked.

If either book updated the table, the value could already be in print. Neither appeared in any
search result tied to w*, and no web page mentions an update. My assessment is that the value is
probably unpublished, but I cannot rule out those two books.

One caveat on what counts as new: the bound w*(3;5) >= 76 follows immediately from the published
W(3;4) = 76 (1979). Only the upper bound is new, and the packet says so itself.

## 3. HONEST? Yes

The frozen definition asks for three things:
1. A good 5-colouring of [1, N-1] is exhibited. Done for N = 76: verified.
2. An exhaustive check shows no good 5-colouring of [1, N] exists. Done: I reproduced it
   independently with full coverage.
3. N is not already published. Nothing found, with the two-book caveat above.

The goal was not narrowed or weakened:
- The definition used, "monochromatic, or colours in increasing or decreasing AP", is the paper's
  definition. Its k=3 form, c2-c1 == c3-c2, is exactly what I tested.
- The packet openly says that the lower bound is not new.
- The claimant's "about 4.3 CPU-hours" is plausible. My CDCL attempts would have taken far longer;
  a different method took about 44 CPU-minutes.

## Verdict
SIGN-OFF: the witness checks out, and my independent exhaustive search finds no good 5-colouring
of [1,76]. No prior publication of the value was found, but the two Landman-Robertson books could
not be checked.
