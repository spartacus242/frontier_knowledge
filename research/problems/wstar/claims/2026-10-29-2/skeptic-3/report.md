# Skeptic report: claim packet 2026-10-29-2 (claim: w*(3;5) = 76)

Working directory (DIR): /tmp/claude-0/g2s3. All code here was written from scratch by the skeptic;
the claimant's repository was not opened, listed or searched.

## The claim
w*(3;5) = 76, where w*(3;s) is the Brown-Landman-Robertson function of arXiv:0706.4420 (Section 3, Table 1:
w*(3,s) = 9, 23, 40, >= 75 for s = 2,3,4,5). The packet itself says the lower bound 76 is classical
(W(3;4) = 76) and that the new content is the upper bound, i.e. part (2): no good 5-colouring of [1,76].

## Q1. REPRODUCED?

### Part (1): the printed good 5-colouring of [1,75] -- YES
`check1.py` (own checker; tests all 1369 3-APs a<b<c of [1,75] for chi(b)-chi(a) = chi(c)-chi(b)):

    length: 75   colours used: [1, 2, 4, 5]   violations: 0   monochromatic 3-APs: 0
    append 1..5 at position 76 -> 1, 2, 4, 2, 4 violations respectively

The witness is valid. It uses only {1,2,4,5}, i.e. it is a 4-colouring of [1,75] with no monochromatic
3-AP, relabelled into a 3-AP-free colour set, exactly as the packet says.

### The lower-bound remark (w*(3;5) >= 76 from W(3;4) = 76) -- correct
{1,2,4,5} contains no 3-term AP (1,2,3 / 2,3,4 / 3,4,5 / 1,3,5 all use colour 3), so a 4-colouring of
[1,75] with no monochromatic 3-AP, recoloured into {1,2,4,5}, is good. W(3;4) = 76 is Beeler-O'Neil
(1979); confirmed on the current Wikipedia "Van der Waerden number" page (k=3 row: 9, 27, 76, >170, >223)
and in Landman-Robertson-Culver "Some new exact van der Waerden numbers" Table 1 ("4 3 3 3 3 - 76",
footnote d = Beeler and O'Neil). Hence w*(3;5) >= 76; this already beats the printed ">= 75" but the
packet correctly presents it as a consequence of a classical result, not as new.

### Part (2): exhaustive check that no good 5-colouring of [1,76] exists -- SEE RESULT BELOW

Tools written (all in DIR):
- `check1.py`       part (1) checker.
- `sat_search.py`   direct CNF encoding (5 Boolean vars per position; one clause per 3-AP and per forbidden
                    colour triple, 13 forbidden triples of 125; 1406 3-APs; 19115 clauses), CaDiCaL via pysat,
                    optional prefix cubes with a resumable state file.
- `sat_inc.py`, `sat_inc2.py`  incremental cube-and-conquer: one long-lived CaDiCaL instance, learned clauses
                    kept across cubes, every finished cube appended to a state file (resumable, relaunch.sh).
                    `sat_inc2` adds valid lex-leader symmetry breaking for colour reversal C (c -> 6-c),
                    position reversal R and RC (first two lex levels of each).
- `sat_whole.py`    whole-instance run with kissat 4.0.4 (pysat), same clauses + symmetry breaking; also writes
                    the DIMACS file `cnf_76_5.cnf`.
- `bt.c`            plain left-to-right backtracking in C (~13M nodes/s), resumable by prefix.
- `bt2.c`           CSP search: forward checking + unit propagation, MRV or static ordering, resumable by cube.
- `bt3.c`           bt2 plus failed-literal probing at shallow depth.

Validation on the known values (all tools agree; "SAT" = good colouring exists):
| n, s | expected | result |
|---|---|---|
| 8, 2  | exists          | SAT, witness 12211221 rechecked |
| 9, 2  | none, w*(3;2)=9  | UNSAT |
| 22, 3 | exists          | SAT, witness 2213122313113132213122 rechecked |
| 23, 3 | none, w*(3;3)=23 | UNSAT |
| 39, 4 | exists          | SAT, witness 231141433443341411323114143344334141131 rechecked |
| 40, 4 | none, w*(3;4)=40 | UNSAT (CaDiCaL 6 s, kissat 7 s, bt 2 s / 27.3M nodes, bt2 2 s / 0.68M nodes) |
bt, bt2 and bt3 return identical counts of good colourings (3, 0, 2, 0, 39, 0 with chi(1) <= s/2).
Positive controls: all searchers find good colourings where they exist (n = 8, 22, 39), and the packet's
75-colouring is verified good. CaDiCaL did NOT find a good 5-colouring of [1,75] within 15 minutes
(timed out), i.e. the 5-colour instances at this size are hard for CDCL in both directions.

RUN LOG for n = 76, s = 5 (one core of a loaded 4-core machine, wall clock):

| when (UTC) | method | what happened |
|---|---|---|
| 29 Oct 20:57-21:12 | CaDiCaL whole instance n=75 (positive control) | timed out at 15 min without finding a good colouring |
| 21:11-21:30 | `bt` plain backtracking, prefixes K=4 then K=6 | first live prefix (112112) not finished after 10+ min; stopped |
| 21:30-21:38 | `sat_search.py --cube 6` fresh CaDiCaL per cube | 126 trivially refuted cubes, then cube 112112 ran 7+ min; stopped |
| 21:40-21:55 | timing on the single K=6 cube 112112 (1/4923 of the live space) | `bt`: >300 s (unfinished); `bt2` (propagation+MRV): 213 s, 43.7M nodes; CaDiCaL incremental: >300 s; kissat: >300 s; `bt3` probing depth 4/8/12: no reduction (43.7M nodes) |
| 21:58-22:08 | `bt2` on 8 random live K=6 cubes, 60 s cap each | 2 finished (42 s, 58 s), 6 did not finish in 60 s; projected total ~4923 cubes x >=1 min >= 80 CPU-hours |
| 22:11-22:24 | `sat_inc2.py` K=4 incremental CaDiCaL with symmetry breaking (resumable) | first live cube 1121 (1/~300 of the space) ran 13.5 min without result; stopped |
| 22:25-03:19 | `sat_whole.py` kissat 4.0.4 whole instance + symmetry breaking (not resumable) | ran 4 h 54 min at 99% CPU without a result; killed by a container restart; work lost |
| 03:21-05:25 | `sat_kcubes.py` kissat per K=2 cube (15 cubes, resumable per cube) | cube 11 ran 2 h 04 min without a result; killed by a second container restart; work lost |
| 05:27-07:30 | `bt2` K=6 cubes, resumable per cube (`bt2state76.txt`) | see coverage below |

COVERAGE AT THE DEADLINE: see "Final coverage" at the end of this report.

Conclusion for Q1: part (1) reproduced; the lower-bound remark verified; part (2) NOT reproduced.
Three independent exact methods (plain backtracking, propagation-based CSP search, CDCL SAT with CaDiCaL
and kissat) all agree on the known values 9, 23, 40 and on every small positive control, but none came
close to finishing n = 76, s = 5 within the budget: every measurement projects the full search at
tens of CPU-hours or more, and the claimant's figure of "about 4.3 CPU-hours" could not be matched
by any method tried (kissat alone ran 4.9 h without a result). No good 5-colouring of [1,76] was found
in the part of the space that was covered, which is consistent with the claim but is not a verification.

## Q2. NOVEL? -- YES as far as can be determined (no publication of w*(3;5) <= 76 or = 76 found)

Primary source checked: arXiv:0706.4420 (Brown, Landman, Robertson, 29 Jun 2007, one version only).
Section 3 defines w*(k;s) exactly as the packet does, and Table 1 reads
"w*(3,s)  9  23  40  >=75  ?  ..." for s = 2,3,4,5,6,...; the text says the table entries "were all computed
with a standard backtrack algorithm". No sentence in the paper upgrades the >= 75 entry. The journal version is
"Bounds on some van der Waerden numbers", J. Combin. Theory Ser. A 115 (2008) 1304-1309,
doi:10.1016/j.jcta.2008.01.005 (title changed); its abstract (Augusta Univ. Pure page) does not mention w*.

Queries run (WebSearch unless stated; WebFetch = page read):
1. WebSearch: "w*(3;5)" OR "w*(3,5)" van der Waerden "arithmetic progression" colours form an arithmetic progression
2. WebSearch: Brown Landman Robertson "Bounds on van der Waerden numbers and some related functions" w*(k;s)
3. WebSearch: "colors form an arithmetic progression" van der Waerden 76 five colors 3-term
4. WebSearch: Landman Robertson "Ramsey Theory on the Integers" second edition "w*(k;r)" OR "w*(k,r)" colors arithmetic progression table 9 23 40 75
5. WebSearch: van der Waerden "3-term" "9, 23, 40" colours arithmetic progression OR "9, 23, 40, 76"
6. WebSearch (extended): arxiv "colors form an arithmetic progression" OR "colours form an arithmetic progression" van der Waerden-type number exact values computed SAT
7. WebSearch: OEIS van der Waerden 3-term arithmetic progression colours form arithmetic progression 9, 23, 40
8. WebSearch: site:mathoverflow.net OR site:math.stackexchange.com van der Waerden "colors form an arithmetic progression" OR "colours form an arithmetic progression"
9. WebSearch: Google Scholar citations "Bounds on van der Waerden numbers and some related functions" Brown Landman Robertson 2008 Integers
10. WebSearch: mathoverflow van der Waerden variant "colors" "arithmetic progression" colouring of colours itself progression w* Brown Landman Robertson table 75
11. WebSearch: "w^*(3" van der Waerden "5 colors" OR "five colors" 76 arithmetic progression of colors
12. WebSearch (extended): "Bounds on van der Waerden numbers and some related functions" Integers 8 (2008) A6 Brown Landman Robertson cited by
13. WebSearch: "Beeler" "O'Neil" 1979 "some new van der Waerden numbers" W(3,4)=76 ...
14. WebSearch (extended): "arithmetic progression" colouring "colours" "form an arithmetic progression" "Brown" "Landman" "Robertson" w^* 2009..2023
15. WebSearch (extended): van der Waerden-type numbers "arithmetic progression" "whose colors" OR "whose colours" form an arithmetic progression five colours 76 exact value
16. WebSearch: "Ramsey Theory on the Integers" 2014 second edition contents "w*(k" OR "colours of the progression" OR "colors of the progression form"
17. WebSearch: "van der Waerden" "w*(k" OR "w^*(k" "colors form" arithmetic progression 2015..2026 thesis OR paper 5-colouring 76
18. WebSearch: Landman Robertson Ramsey Theory on the Integers 2nd edition section "colors" "form an arithmetic progression" exercise research problem w*
19. WebSearch: oeis van der Waerden "colors" "arithmetic progression" variant sequence 9, 23, 40 Brown Landman Robertson
20. WebSearch (extended): "Ramsey theory on the integers" Landman Robertson 2014 "w*(k; r)" OR "w^*(k;r)" OR "colors form an arithmetic progression" chapter 6 "other generalizations"
21. WebSearch: "Bounds on some van der Waerden numbers" Brown Landman Robertson Journal of Combinatorial Theory Series A 115 (2008) cited by
22. WebSearch: Robertson "Fundamentals of Ramsey Theory" 2021 "colors form an arithmetic progression" OR "w*(k" van der Waerden
23. WebSearch: math.stackexchange van der Waerden colouring "arithmetic progression" colours "also form an arithmetic progression" OR "colors also form"
24. WebSearch: mathoverflow "van der Waerden" generalization progression "in the colors" OR "of colors" AP-colored "arithmetic progression" 5 colors 3-term 76
25. WebSearch: "w*(3,5)" OR "w*(3;5)" OR "w^*(3,5)" OR "w^{*}(3,5)"  (only unrelated W-algebra / Hurwitz hits)
Pages read (WebFetch): arxiv.org/abs/0706.4420v1; arxiv.org/pdf/0706.4420 (two offsets: definition + Table 1);
ar5iv.arxiv.org/html/0706.4420; en.wikipedia.org/wiki/Van_der_Waerden_number (current: no w* variant; k=3 row
9, 27, 76, >170, >223; W(3,4) = 76 credited to Beeler-O'Neil via Ahmed-type tables); en.wikipedia.org/wiki/Van_der_Waerden%27s_theorem;
oeis.org/A121385 (not related); api.semanticscholar.org paper arXiv:0706.4420 (citationCount 1; sole citer Hunter
arXiv:2209.07651, unrelated); api.crossref.org (JCTA 2008 version, referenced-by 10); api.openalex.org/works/doi:10.1016/j.jcta.2008.01.005
(cited_by_count 15; the cited-by listing itself returned client errors); augusta.elsevierpure.com (JCTA abstract);
math.colgate.edu/~aaron/papers.html (Robertson's publication list: nothing on w* after 2008);
math.colgate.edu/~aaron/pap/MonoRainbow.pdf; math.colgate.edu/~aaron/pap/Mixedvdw.pdf (Table: w(3,3,3,3)=76, Beeler-O'Neil);
sfu.ca/~vjungic/tbrown/ (Brown's list), tom-11.pdf, tom-65.pdf; arxiv.org/abs/2610.32000 (Kim, Oct 2026, lower bounds for W(r,k); no w*);
arxiv.org/pdf/2102.01543; arxiv.org/abs/2209.07651; arxiv.org/pdf/1404.7348; cs.umd.edu Gasarch book review of the 2nd edition
(no w*); old.maa.org review of the 2nd edition (chapter list only; chapter "Other generalizations of w(k;r)" exists,
contents not visible); en.wikipedia.org/wiki/Aaron_Robertson_(mathematician); independent.academia.edu/AaronRobertson7;
cs.umd.edu/.../loweroff.pdf; hellenicaworld.com VdW page.
Not openable (and how they bear on novelty):
- Google Scholar and Google/Bing/DuckDuckGo search pages: robots_disallowed. Citation hunting was done instead via
  Semantic Scholar API (1 citer), Crossref (10) and OpenAlex (15, list not retrievable) plus the authors' own pages.
  A citing paper settling w*(3;5) cannot be fully excluded, but none of the keyword searches surfaced one.
- OEIS search (oeis.org/search): robots_disallowed / proxy 403 (A-number pages are fetchable; A121385 checked). No
  OEIS sequence for w*(3,s) was found via web search either; a sequence 9, 23, 40, 76 would have been a hit.
- MathOverflow / Math StackExchange (direct and api.stackexchange.com): SITE_BLOCKED. Keyword web searches restricted
  to those sites returned nothing relevant.
- Landman-Robertson, Ramsey Theory on the Integers, 2nd ed. (2014): not online; AMS end-matter PDF and bookstore pages
  returned client errors / proxy 403. Two reviews of the 2nd edition mention no w*. Since the book is by two of the three
  authors of the 2007 paper, it could at most restate ">= 75" (or 76 via W(3;4)) as an open problem; it is very unlikely
  to contain an exhaustive 76 result that is absent from every searchable source.
- Robertson, Fundamentals of Ramsey Theory (2021): not online; same remark.
- dblp author page: anti-bot block.
Verdict on novelty: the exact value w*(3;5) = 76 (equivalently the upper bound <= 76) is not found anywhere; the
only published statement remains ">= 75" (2007/2008). The lower bound 76 is a trivial consequence of W(3;4) = 76 and the
packet says so explicitly. So part (3) of the frozen definition is satisfied, conditional on part (2) being true.

## Q3. HONEST? -- YES (no narrowing), but with the caveat that part (2) is the whole claim
The frozen definition requires (1) a good colouring of [1,N-1] (exhibited and verified), (2) an exhaustive check for
[1,N] (asserted by the claimant; stated as "every 5-colouring of [1,76] (all 5^76 of them)", which is the correct
unweakened statement), and (3) N not published (true). The packet is candid that the lower bound is classical and that
the only new content is the upper bound. Nothing was narrowed or redefined. However, the packet gives no checkable
artifact for part (2) beyond a run-time figure ("about 4.3 CPU-hours") and a method remark ("naive methods can take far
longer"); it names neither the algorithm nor a proof certificate (e.g. a DRAT proof), so the claim rests entirely on
trusting the claimant's run, and the 4.3 CPU-hour figure is far below what any of my methods needed.

## Overall
Q1: part (1) yes, part (2) NOT reproduced (search could not be completed; coverage below).
Q2: yes (nothing published beyond ">= 75"; 76 as a lower bound is classical and disclosed).
Q3: yes (no narrowing), but part (2) is unverified.
Since Q1 is not a clear yes, the verdict is REJECT (unverified), not a claim that the result is false.

## Final coverage (07:15 UTC, 30 Oct 2026; all processes stopped by PID)
Resumable `bt2` search (forward checking + unit propagation + MRV; colour-reversal symmetry chi(1) <= 3;
cubes = colourings of the first 6 positions): 4923 live cubes in total (count computed independently).
Finished: 26 cubes (112112 ... 112254, lexicographic order), 1.527e9 search nodes, 6472 s of CPU, average 249 s per
cube; 0 good colourings found in any of them. Coverage of the live cube set: 26 / 4923 = 0.53 %.
Projected total for this method at the observed rate: ~340 CPU-hours (other methods, see table above, were no faster:
plain backtracking, CaDiCaL (fresh and incremental), kissat (whole instance 4 h 54 min, and 2 h 04 min on a 1/15
cube) all failed to finish their first unit of work). Two container restarts (03:19 and 05:25 UTC) destroyed the two
non-checkpointed kissat runs; the bt2 state file `bt2state76.txt` holds the verified partial coverage.
Nothing found in the covered region contradicts the claim; the claim is simply not reproduced.

Total skeptic wall-clock: 29 Oct 20:50 UTC to 30 Oct 07:15 UTC (~10.4 h, including the restarts), one search process at a time.
