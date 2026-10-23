# Skeptic-3 report: claim 2026-10-22-1 (M(3,7) = 51)

Rebuilt from claim.md only (no other research files, no git history). All code here is mine.
Status at hand-back (Thu Oct 22 23:03:09 UTC 2026): witness verified; small cases validated; exhaustive s=7,n=51 run IN PROGRESS
(4/49 parts finished, 4 UNSAT, 0 SAT; driver run_parts.sh still running under nohup, results land in parts_s7n51/,
ALLDONE file appears when complete; if the container restarts, re-run: ./run_parts.sh 7 51 25 26 parts_s7n51).

## 1. REPRODUCED? -> UNSURE (witness half YES; impossibility half incomplete, no counterexample so far)
- Witness: check_witness.py -> 50 elements, each x_i in [7(i-1),7i-1], distinct, 0 three-term APs. VALID (witness_result.txt).
- Exhaustive search: mrv3.c (own C code). Byte-array of forbidden positions + per-block live counters; placing v forbids
  2v-a, 2a-v, (a+v)/2 for every placed a; MRV branching (fewest live candidates), tie -> block nearest centre (--tie=1);
  dead-block pruning; complete enumeration, no symmetry reduction in the main run.
- Validation (small_values_mrv3.txt, small_values.txt [mrv.c bitset version], small_values_mrv2.txt [with propagation]):
  all three independent implementations and all tie-break options give M(3,s) = 7, 11, 19, 31, 38 for s = 2..6
  (printed table: 7, 11, 18, 29, 37 - the table is already wrong at s=4,5,6, consistent with the claim's thesis).
  Partition driver validated on s=6: n=38 -> 36/36 parts UNSAT; n=37 -> 2/36 parts SAT, solutions verified by check_sol.py.
  SAT formulation sat_search.py (pysat/CaDiCaL) agrees for s=2..5 but was too slow at s=6 (killed) - not used.
- s=7, n=51: split into 49 parts by (x_25, x_26). Finished parts (each ~6e8 nodes, ~6 min): see parts_s7n51/*.txt.
  So far every finished part is UNSAT. Complete result requires all 49 parts (~5 h of one core). Not finished at hand-back.

## 2. NOVEL? -> YES (no published value M(3,7)=51 found)
Queries run (WebSearch unless noted; WebFetch of pages in brackets):
- Brown Landman Robertson "Bounds on van der Waerden numbers and some related functions" -> arXiv 0706.4420 only (v1 only; no journal ref on arXiv page [arxiv.org/abs/0706.4420]).
- [arxiv.org/pdf/0706.4420] Table 1 confirmed: M(3,s)=7,11,18,29,37,48,?; "standard backtrack algorithm".
- [augusta.elsevierpure.com ... bounds-on-some-van-der-waerden-numbers] journal version JCTA 115 (2008) 1304-1309, DOI 10.1016/j.jcta.2008.01.005; abstract has no M/G functions.
- [math.colgate.edu/~aaron/pap/VdwBounds.pdf] journal version: only Sections 1-2, Table 1 is "Small values of w(k,3) and w1(k,3)"; Section 3 / M(3,s) row dropped.
- [api.semanticscholar.org ... DOI:10.1016/j.jcta.2008.01.005] 19 citing papers listed; none on M(k,s) values (titles checked; Ahmed 2009 checked separately: w_d numbers only).
- OEIS: search pages blocked (robots); WebSearch for "7, 11, 18, 29, 37, 48", "7, 11, 19, 31, 38", "5, 9, 11, 17, 22, 33, 37, 48" -> no OEIS match; A217005/A217060/A217008/A217237/A227281 fetched: ordinary vdW numbers / primes, unrelated.
- Wikipedia [Van_der_Waerden_number], [Van_der_Waerden%27s_theorem]: no M(k,s)/G(k,s), no BLR citation.
- MathOverflow / Math.SE: site searches via WebSearch (several phrasings: "one element from each" interval, bounded gaps, Nathanson) -> no relevant question; direct site/API fetches blocked.
- Google Scholar fetch blocked; scholar.archive.org blocked; Semantic Scholar used instead.
- Landman-Robertson book 2nd ed. (2014): TOC fetched [search.ub.tum.de record, bookstore.ams.org, old.maa.org review]: no section on block/gap functions; errata [cs.umd.edu RTI-LR.pdf] nothing.
- Related literature checked: Nathanson 1980 CMB (defines M(k,r), G(k,r); no values); Brown-Hare 1997 JCTA (G(3,2)=5 only); Alon-Zaks 1998 (asymptotics); Fox-Schildkraut arXiv:2608.20533 (m(k;r) same function, bounds only, no values); Au-Robertson-Shallit Integers 2011 (Omega(3,k) same function, asymptotic bound only); Landman-Robertson-Robertson 2023 (diffsequences); Brown-Jungic-Poelstra 2014; Graham Integers 2006; arXiv 1201.3842; Bergelson-Richter survey 2603.25922; Erdos 1979; Robertson CV/papers page; Johannson thesis (PDF unreadable, abstract only).
No source gives any value of M(3,7) other than BLR's 48.

## 3. HONEST? -> YES
Definition used is exactly the printed one (x_i in [(i-1)s, is-1]); witness has size v-1 = 50; impossibility claimed for v = 51;
entry is a printed (wrong) k=3 M-entry; packet does not narrow or weaken the frozen definition.
