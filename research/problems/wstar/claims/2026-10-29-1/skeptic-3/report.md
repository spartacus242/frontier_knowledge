# Skeptic review of claim packet 2026-10-29-1 ("w*(3;5) = 76")

Reviewer: independent skeptic 3. Everything below was built from scratch in /tmp/claude-0/skeptic3/
from the claim packet alone. The claimant's repository (/home/claude/frontier_knowledge) was not opened.

## Verdict: REJECT

Reason (short): part (2) of the frozen definition, the exhaustive check that no good 5-colouring
of [1,76] exists, could NOT be reproduced here: five independent exact methods (two backtracking
programs with forward checking, a plain CaDiCaL run, a cube-and-conquer CaDiCaL run, and an
incremental "lemma" SAT strategy) all failed to finish; the best of them (9 symmetry-reduced cubes,
CaDiCaL 1.5.3) had completed 0 of 9 cubes after about 40 minutes and is still running in the
background (cube76.log). The lower-bound half, part (1), is reproduced but is not new: the
exhibited colouring uses only the colours {1,2,4,5}, so it is just a classical w(3;4) > 75
witness (Beeler-O'Neil 1979), and w*(3;5) >= w(3;4) = 76 is immediate. Novelty of the value 76
itself was not contradicted by any source I could reach, but that is moot while (2) is unverified.

---------------------------------------------------------------------------------------------------

## 1. REPRODUCED?  Partly (part (1) yes, part (2) NO)

### Part (1): the 75-colouring (check1.py)

check1.py re-implements the definition from the packet directly (for every a < b < c with
b - a = c - b, require chi(b) - chi(a) != chi(c) - chi(b)) and tests the printed string.

    length 75, colours used [1, 2, 4, 5], violations: 0

So the string is a good 5-colouring of [1,75]. Observation: colour 3 never occurs. Among the
colours 1..5 every 3-term arithmetic progression of distinct colours ((1,2,3),(2,3,4),(3,4,5),
(1,3,5) and reverses) contains 3, and {1,2,4,5} contains no 3-AP, so a colouring that avoids
colour 3 is "good" iff it has no monochromatic 3-AP. The artifact is therefore exactly a
4-colouring of [1,75] with no monochromatic 3-term AP, i.e. a witness of the classical
w(3;4) > 75 (Beeler-O'Neil, 1979; w(3;4) = 76 is in the Wikipedia table and in Ahmed 2009/2013).
The inequality w*(3;5) >= w(3;4) = 76 therefore holds for a trivial reason and the lower bound
part of the claim is not a new contribution (the paper's printed ">= 75" is in fact weaker than
this trivial bound).

### Part (2): no good 5-colouring of [1,76] (NOT reproduced)

Validation of my searchers on the printed small cases (all methods agree):

| method | w*(3;2) | w*(3;3) | w*(3;4) |
|---|---|---|---|
| search.c (naive left-to-right backtracking) | 9 (3 good colourings of [1,8], 0 of [1,9]) | 23 (2 of [1,22], 0 of [1,23]) | 40 (39 of [1,39] with chi(1)<=2, 0 of [1,40]) |
| dfs2.c / dfs3.c (forward checking + MRV) | 9 | 23 | 40 |
| sat.py / cube2.py / plain.py / lemma.py (CaDiCaL) | 9 | 23 | 40 |
| dfs3.c classical mode (MONO=1) | w(3;2)=9, w(3;3)=27 reproduced | | |

The found small colourings were re-checked independently with the check1.py logic.

Attempts at n = 76, s = 5 (one process at a time, as instructed; wall-clock figures are from
the container clock):

1. search.c, naive backtracking: already n = 50 did not finish in 135 s. Cause: the number of
   good 5-colourings of [1,m] explodes (G(10)=1.47M, G(11)=4.48M, G(12)=13.7M, ratio ~3 per
   step), so a left-to-right tree is hopeless without strong look-ahead.
2. dfs2.c / dfs3.c (forward checking on every AP with two assigned points, most-constrained-
   variable ordering, symmetry breaking for the group {id, reflection, colour reversal, both}:
   chi(1) <= 3, chi(1) <= chi(76), chi(1)+chi(76) <= 6; resumable 4923-cube split on the first 6
   positions): first cube not finished after 3 minutes -> projected > 100 CPU-hours. Killed.
   Calibration: the same program in classical mode cannot finish w(3;4) = 76 either
   (no cube of 8 finished in 600 s with either MRV or left-to-right ordering).
3. Plain CaDiCaL on the full CNF (380 vars, exactly-one + 19 colour-triples per AP, ~27k clauses):
   n = 75 (satisfiable) not solved in 110 s; calibration on the classical w(3;4) instance:
   n = 75 (SAT) and n = 76 (UNSAT) each not solved in 500 s. Solver comparison on the
   w*(3;4) n = 40 instance (bench40.out): glucose4 4.6 s, gluecard4 4.4 s, minisat22 6.4 s,
   cadical153 7.3 s, cadical195 7.9 s, maplechrono 11.1 s, mergesat3 20.3 s, lingeling 23.3 s;
   no solver is dramatically better.
4. cube.py: CaDiCaL cube-and-conquer, 1215 cubes on positions 1..5: 0 cubes finished in 510 s.
5. lemma.py: try to prove "chi(p) != 3" for p from the middle outwards with a 1M-conflict budget
   each, then a final solve: positions 38, 39, 37 all returned UNKNOWN (45-60 s each); abandoned.
6. cube2.py with K = 2 (9 cubes on (chi(1), chi(76)) after symmetry breaking), CaDiCaL 1.5.3,
   learned clauses shared across cubes, resumable (cube76.log, driver run_cube76.sh, restarts
   automatically if killed): launched at container time 1793273939; at the time of writing the
   first cube had been running for about 40 minutes with no result. The job is left running in
   the background; if it ever finishes, cube76.log will contain 9 "CUBE i ... UNSAT" lines and an
   ALLDONE line (or a SAT line with a 76-colouring, which would refute the claim).

Active hunt for a good 76-colouring (none found):
- ls.c: min-conflicts/tabu local search (validated: finds good colourings for n=22,s=3 and
  n=39,s=4, and correctly fails at n=23,s=3). For s=5 it found a good colouring of [1,60] that
  uses colour 3 once (position 7), but found nothing at n=66 or n=70 in 30 s each (best cost 1
  and 3), so it is too weak to say anything at 76.
- hunt.py: large-neighbourhood SAT around the claimant's colouring (placed at 1..75 or 2..76,
  free a window of W positions plus the extra end, solve with assumptions): W=24 (54 windows)
  and W=36 (22 windows) all UNSAT in under a second; W=48 windows did not return within 50 s.
- The main cube2 run would also report any satisfying assignment.

Total time spent on the search attempts: about 3.5 hours of wall clock across all runs above,
of which the still-running cube2 job accounts for ~40 min at the time of writing. The packet's
"about 4.3 CPU-hours" is therefore not implausible for a well-tuned solver, but I could not
confirm it, the packet gives no method, program, log or checkable proof for (2), and nothing in
the packet allows the exhaustive check to be verified without redoing it.

Bottom line for question 1: (1) is reproduced (but trivial, see above); (2) is NOT reproduced.

## 2. NOVEL?  Not contradicted (no publication of w*(3;5) found), with gaps

What was found:
- arXiv:0706.4420 (Brown, Landman, Robertson), fetched (abs page, PDF, ar5iv): only version v1
  (2007-06-29); Section 3 defines w*(k;s) and Table 1 prints w*(3,s) = 9, 23, 40, >= 75 for
  s = 2..5 and "?" for s >= 6, exactly as the packet says; the paper states the values came from a
  standard backtrack and gives no exact value for s >= 5.
- The journal version, "Bounds on some van der Waerden numbers", JCTA 115 (2008) 1304-1309
  (doi 10.1016/j.jcta.2008.01.005; abstract via augusta.elsevierpure.com; a Colgate preprint
  copy at math.colgate.edu/~aaron/pap/VdwBounds.pdf): the abstract does not mention w*, and the
  Colgate preprint's only table is for w(k,3) and w1(k,3); the w* table appears only in the arXiv
  version.
- Citing papers (Semantic Scholar API, 19 records for DOI 10.1016/j.jcta.2008.01.005): none has
  a title about this variant. Checked in full where accessible: Ahmed, "Some new van der Waerden
  numbers and some van der Waerden-type numbers", Integers 9 (2009) A06 (computes w1 and wd, not
  w*; its only 75/76 are classical: w(4;2,2,4,5)=75, w(4;3,3,3,3)=76); Ahmed, "Some more van der
  Waerden numbers", JIS 16 (2013) (classical only); Mao-Ozeki-Robertson-Wang, "Arithmetic
  progressions, quasi progressions, and Gallai-Ramsey colorings" (no w*); Robertson, "Zero-sum
  analogues of van der Waerden's theorem" (no w*); Bergelson-Richter survey arXiv:2603.25922
  (2026; no w*; its 76 is w(4,3)).
- Wikipedia "Van der Waerden number" (current): no colour-progression variant; the only 76 is
  w(4;3,3,3,3) = 76.
- OEIS: A005346, A217236, A217059 pages fetched; none cross-references a sequence 9, 23, 40, ...
  for this variant. Web searches site:oeis.org for "9, 23, 40", "9, 23, 40, 75", "9, 23, 40, 76"
  returned no van der Waerden-type sequence with these terms.
- Gasarch's review of "Ramsey Theory on the Integers" and the 2004 errata sheet of the book:
  no w*.

Sources that could NOT be opened (and how they bear on novelty):
- Google Scholar (robots_disallowed) and the Semantic Scholar web search page (robots_disallowed):
  citation counts and full-text search for "w*(3;5)" could not be checked there; the Semantic
  Scholar API citation list was used instead.
- OEIS search pages (robots_disallowed for WebFetch; direct curl through the proxy returned 403):
  only A-number pages could be read, so an OEIS entry for w*(3,s) under a different leading term
  could have been missed.
- MathOverflow and Math.StackExchange search pages (SITE_BLOCKED; domain-restricted web searches
  were rejected or returned nothing): a question or answer announcing w*(3;5) = 76 would have been
  missed.
- zbMATH, OpenAlex citation queries, researchgate (client errors), arXiv search pages
  (robots_disallowed): the arXiv listing search could not be run; only targeted web searches were.
- The Landman-Robertson book "Ramsey Theory on the Integers" (2nd ed., 2014) itself is not
  online; it is the most likely place for a tabulated w*(3,5), and it was not checked.

Queries run (WebSearch unless noted):
 1. "w*(3;5)" OR "w*(3,5)" van der Waerden colours form arithmetic progression 76
 2. Brown Landman Robertson "Bounds on van der Waerden numbers and some related functions" colors arithmetic progression
 3. arithmetic progression "colors form an arithmetic progression" van der Waerden 9 23 40 75
 4. mathoverflow OR math.stackexchange van der Waerden "colors form an arithmetic progression" OR "colours form an arithmetic progression"
 5. arxiv "van der Waerden" "arithmetic progression" colors "w^*" OR "w*(k;s)" Brown Landman Robertson related functions exact value 5 colors (extended)
 6. site:oeis.org "9, 23, 40" van der Waerden
 7. "Ramsey Theory on the Integers" Landman Robertson "colors form an arithmetic progression" w* 3-term 5 colors 75
 8. "van der Waerden" "whose colors form an arithmetic progression" 76 (extended)
 9. site:mathoverflow.net OR site:math.stackexchange.com van der Waerden coloring "colors" "arithmetic progression" "form an arithmetic progression" 5 colors
10. van der Waerden variant monochromatic or "colors form an arithmetic progression" w*(3,s) 9 23 40 76 exact value computed SAT (extended)
11. site:oeis.org "9, 23, 40, 76"
12. site:oeis.org "9, 23, 40, 75"
13. "Brown" "Landman" "Robertson" 2007 "related functions" citing van der Waerden w*(k;s) "colors form" progression newer bounds 2015..2026 (extended)
14. "w^*(3;5)" OR "w*(3;5)=76" OR "w^*(3,5)" van der Waerden
15. "Bounds on van der Waerden numbers and some related functions" (restricted to scholar.google.com, semanticscholar.org, researchgate.net, zbmath.org, mathscinet.ams.org)
16. van der Waerden "arithmetic progression" colouring "colours" "form an arithmetic progression" OR "AP-colored" OR "arithmetic progression of colors" 3-term 5 colours exact 76 (restricted to mathoverflow/MSE/arxiv/oeis; rejected by proxy)
17. Brown Landman Robertson w*(k;s) "colors form an arithmetic progression" generalization "van der Waerden" 2020 2021 2022 2023 2024 2025 2026 (extended)
18. Landman Robertson "Ramsey Theory on the Integers" second edition 2014 van der Waerden "arithmetic progression" colors table w*(3; s) open problem
19. mathoverflow van der Waerden number variant "arithmetic progression" colors themselves form progression Brown Landman Robertson w*
20. "van der Waerden" "w^*(k;s)" OR "w*(k;s)" OR "w^*(3,s)" OR "w*(3,s)"
21. arxiv 2024 OR 2025 OR 2026 "van der Waerden" "5 colors" OR "5-coloring" "arithmetic progression" colours "arithmetic progression" variant exact value 76
22. Ahmed "Some new van der Waerden numbers and some van der Waerden-type numbers" Integers 2009
23. "Minimum Number of Colours to Avoid k-Term Monochromatic Arithmetic Progressions" arxiv
24. "Gallai-Schur triples and related problems" arxiv 2025
25. van der Waerden colouring colours of progression form arithmetic progression (restricted to mathoverflow.net: rejected; restricted to math.stackexchange.com: no results)
26. Landman Robertson "Ramsey Theory on the Integers" "w*(k; s)" OR "w^*(k;s)" chapter van der Waerden "related functions" colors progression
Pages fetched (WebFetch): arxiv.org/abs/0706.4420, arxiv.org/abs/0706.4420v1, arxiv.org/pdf/0706.4420,
ar5iv.arxiv.org/html/0706.4420, en.wikipedia.org/wiki/Van_der_Waerden_number, math.colgate.edu/~aaron/pap/VdwBounds.pdf,
math.colgate.edu/~aaron/pap/MonoRainbow.pdf, arxiv.org/html/1802.03387v1, arxiv.org/html/2603.25922v1,
augusta.elsevierpure.com (JCTA record), api.openalex.org/works/doi:10.1016/j.jcta.2008.01.005,
api.semanticscholar.org citations for arXiv:0706.4420 and for the DOI, emis.univie.ac.at/journals/INTEGERS/papers/j6/j6.pdf,
degruyterbrill.com (Ahmed 2009 record), cs.uwaterloo.ca/journals/JIS/VOL16/Ahmed/ahmed2.pdf, oeis.org/A005346,
oeis.org/A217236, oeis.org/A217059, cs.umd.edu/users/gasarch/bookrev/FRED/ramseyint.pdf,
cs.umd.edu/~gasarch/COURSES/752/S22/RTI-LR.pdf (errata sheet), sfu.ca/~vjungic/tbrown/tom-11.pdf, erdosproblems.com/721.
Failed fetches: scholar.google.com, semanticscholar.org web pages, oeis.org/search, mathoverflow.net/search,
math.stackexchange.com/search, zbmath.org, api.openalex.org cites-filter, researchgate.net, arxiv.org/search,
arxiv.org/a/robertson_a_1 (rate limited), cs.umd.edu/~gasarch/TOPICS/vdw/othervdwbook.pdf.

## 3. HONEST?  Mostly, with two caveats

- The claim as stated ("w*(3;5) = 76") does match the frozen definition's shape: a good
  colouring of [1,75] is given and a statement of exhaustive search over [1,76] is made; the goal
  was not narrowed to a weaker statement.
- Caveat 1: the packet presents (1) as the lower-bound half of a new result, but the colouring
  avoids colour 3 entirely and is just a classical w(3;4) > 75 colouring; w*(3;5) >= 76 follows
  from the published w(3;4) = 76 with no computation at all. The packet does not say this.
- Caveat 2: for (2) the packet offers only the sentence "every 5-colouring of [1,76] contains..."
  plus a CPU-time figure. No method, no program, no checkable certificate (e.g. a DRAT proof or a
  cube log) is given, so the only way to validate (2) is to redo it, which did not succeed here.
  The frozen definition requires that it "is shown by an exhaustive check"; as delivered, it is
  asserted rather than shown.

## Files in /tmp/claude-0/skeptic3/
check1.py (part (1) checker); search.c, dfs2.c, dfs3.c (backtracking; dfs3 has MONO=1 classical
mode and ORDER=lr/mid orderings); sat.py, plain.py, cube.py, cube2.py, lemma.py, bench.py,
satmono.py (SAT encodings); ls.c (local search); hunt.py (SAT neighbourhood hunt);
run_cube76.sh + cube76.log/cube76.out/cube76.times (the still-running main job); notes.txt
(timeline of killed runs); v*_*.log, t*.log, L39.log, L40.log, bench40.out (validation outputs).
