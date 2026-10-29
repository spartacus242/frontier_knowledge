# Skeptic review: claim 2026-10-29-1, "w*(3;5) = 76"

Reviewer: skeptic1. All code is in /tmp/claude-0/skeptic1/ and was written from scratch. Nothing under /home/claude/frontier_knowledge was opened.

## Verdict
REJECT. Part (2), the exhaustive search, was **not reproduced**. My own complete search was stopped at the 2-hour background limit after covering about 10.6% of the search tree. Novelty is plausible but not fully established, because several sources could not be opened. The definition is not weakened.

## 1. REPRODUCED?

### Part (1): the 75-long colouring. REPRODUCED.
- `check.py` checks every 3-term AP (a, a+d, a+2d) in [1,75] directly and finds 0 violations.
- **Observation:** the colouring uses only the colours {1,2,4,5} (counts 20/19/18/18). The set {1,2,4,5} contains no non-constant 3-term AP. So the colouring is just a 4-colouring of [1,75] with no monochromatic 3-AP, which I confirmed (0 monochromatic APs), with the colours renamed. Turned around, this means **w*(3;5) >= W(3;4) = 76 follows at once from the 1979 Beeler–O'Neil result** W(3,3,3,3) = 76 (on Wikipedia, and in OEIS A135415 = 3, 9, 27, 76). The packet's remark that the printed ">= 75" is "not tight" is therefore a trivial consequence of a 47-year-old result. Only the upper bound (part 2) has any real content.
- Structural note: every non-constant forbidden colour pattern (1,2,3), (2,3,4), (3,4,5), (1,3,5) and their reverses contains colour 3. So once colour 3 is removed, the problem is exactly a 4-colour van der Waerden problem. Any proof of part (2) therefore has the C3 = empty case, i.e. W(3;4) <= 76, as a sub-case. That is a hard computation, so the claimant's 4.3 CPU-hours is plausible.

### Part (2): no good 5-colouring of [1,76]. NOT REPRODUCED (incomplete).
Tools I wrote and validated:
- `sat.py` (pysat CaDiCaL 1.5.3, direct encoding). It reproduces 9, 23 and 40: n=8 SAT / 9 UNSAT for s=2; 22 SAT / 23 UNSAT for s=3; 39 SAT / 40 UNSAT for s=4.
- `bt.c`, a left-to-right backtracker. It reproduces 9, 23 and 40. Its counts of good colourings match brute force (`brute.py`) for (s,n) = (3,12), (4,10), (5,8).
- `mrv2.c`, the main exhaustive solver. It uses full constraint propagation over every AP, smallest-domain-first branching, and a root split on the two central positions with one representative per orbit of {identity, reversal, colour complement c -> 6-c} (9 orbits). Checkpoints are kept on disk. It reproduces 9, 23 and 40 (n=40 s=4 UNSAT in 87k nodes, and n=41 UNSAT). In counting mode (no symmetry breaking) it matches brute-force counts exactly: s=3 n=12: 1042; s=4 n=10: 79018; s=5 n=8: 112266; s=5 n=9: 373346. Checkpoint and resume were tested on n=39 and n=40.

The n=76, s=5 run:
- Wall time 7209 s (2.0 h) on one core, shared with two other reviewers. The process was stopped at the harness's maximum background time limit. Following the harness instruction I did not restart it.
- About 1.32e9 nodes searched. 63 of the roughly 597 depth-4 subtrees were completed: all of the first root orbit, centre colours (1,1), except one subtree, path `Addd`. That is about 10.6% of the tree. **No good 76-colouring was found in the covered part.**
- At the observed rate, finishing would take about 15–20 more hours on one shared core.
- Earlier attempts:
  - Monolithic and cube-and-conquer SAT (`cube76.py`, 2118 symmetry-reduced cubes on positions 36–41). Over about 13 min the first cube did not finish.
  - SAT on depth-10 propagation cubes (`cuber.c` + `solvecubes.py`) averaged about 4.7 s per cube over 334k cubes, which is far too slow.
  - A failed-literal-probing variant (`mrv3.c`) halved the node count but did not reduce time.
- Total compute I used: about 2.5 h on one core.

Active hunt for a good 76-colouring: the partial exhaustive search above found none. I have no evidence against the claim, but I have no independent confirmation of it either.

## 2. NOVEL? Plausibly, but not established.
Queries and sources (in order):
1. WebSearch: `w*(3;5) van der Waerden "arithmetic progression" colours form arithmetic progression Brown Landman Robertson`. Only the source paper and unrelated generalized-vdW papers came back.
2. WebSearch: `"Bounds on van der Waerden numbers and some related functions" citations`. Results: 1603.01831, 1201.3842 and others, none about w*.
3. WebFetch arxiv.org/abs/0706.4420 and arxiv.org/pdf/0706.4420. These confirm the definition and Table 1: w*(3,s) = 9, 23, 40, >=75, ?. The values were computed by "a standard backtrack algorithm". The paper conjectures w*(3;s) <= w(3;s).
4. WebSearch: `van der Waerden numbers "colors form an arithmetic progression" 3-term`.
5. WebSearch: `"w^*(3" OR "w*(3" van der Waerden 76 five colors rainbow ...`.
6. WebFetch en.wikipedia.org/wiki/Van_der_Waerden_number. It has no w*, but gives W(3,3,3,3) = 76 (Beeler & O'Neil).
7. WebSearch: `Landman Robertson "Ramsey Theory on the Integers" second edition table w*(3 ...`. I fetched the book errata (cs.umd.edu RTI-LR.pdf) and Gasarch's review of the 2nd edition: neither mentions w*. **The book itself could not be opened.** If it contains a value or an exercise on w*(3;5), that would bear directly on novelty, and I cannot rule it out.
8. WebSearch with site:mathoverflow.net (no relevant results). WebFetch of the mathoverflow.net search page was **blocked**. WebSearch restricted to mathoverflow.net and math.stackexchange.com was **rejected by the proxy**. WebSearch for the math.stackexchange phrasing returned no relevant hits.
9. WebFetch of the Google Scholar search was **blocked (robots)**. So "cited by" for 0706.4420 could not be checked through Scholar.
10. WebFetch Semantic Scholar API for citations of arXiv:0706.4420: only 1 citing paper (2209.07651, unrelated). A DOI-based query returned a mismatched paper.
11. WebSearch: `"Bounds on some van der Waerden numbers" ... cited by`. I fetched the published JCTA version (math.colgate.edu/~aaron/pap/VdwBounds.pdf). **The published version appears not to contain w* at all.** I also fetched Robertson's paper list and MonoRainbow.pdf, which only cites the JCTA paper.
12. OEIS: the search page oeis.org/search?q=9,23,40 was **blocked (robots)**. A-number pages fetched: A135415, A121385, A157199, A394445, A378196. None is w*. A WebSearch for `oeis "9, 23, 40" coloring arithmetic progression` found no matching sequence.
13. WebFetch arXiv API query: **blocked**. WebSearch for arxiv 2024–2026 follow-ups found nothing relevant.
14. WebFetch arxiv.org/html/2603.25922v1 (2026 vdW survey): no w*.
15. WebSearch `"w^*(k;s)" OR "w*(k;s)" van der Waerden` and `"whose colors form an arithmetic progression"`. I checked 1005.3749 and the Wikipedia vdW theorem article: no w*.

Conclusion: I found no publication of w*(3;5) = 76 or of any improved bound. The coverage gaps are the Landman–Robertson book text, Google Scholar citations, the OEIS search page and MathOverflow search. Separately, the lower bound 76 is not new in substance, since it is immediate from W(3;4) = 76 (1979). Only the matching upper bound could be new.

## 3. HONEST?
The claim is stated against the frozen definition with N = 76, without narrowing:
- (1) The colouring of [1,75] meets requirement (1). A colouring that uses only 4 of the 5 colours is a valid map into [1,5].
- (2) The search statement is the full statement over all 5^76 colourings.
- (3) Non-publication is asserted.

The packet does not mention that the witness is a renamed 4-colouring and that the lower half follows from W(3;4) = 76. That is a presentational omission, not a weakening of the goal. Whether (2) is true is exactly what I could not confirm.

## Timing
- Literature search: about 30 min.
- Validation runs: seconds.
- SAT experiments: about 20 min.
- First MRV run: about 10 min.
- Main mrv2 run: 7209 s wall, stopped at the time limit, about 10.6% complete. Checkpoint: /tmp/claude-0/skeptic1/mrv2_76.ck. Resume with: `./mrv2 76 5 0 mrv2_76.ck`.
