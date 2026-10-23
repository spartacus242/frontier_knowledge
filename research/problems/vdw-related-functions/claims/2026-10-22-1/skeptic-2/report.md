# Skeptic-2 report: claim 2026-10-22-1, M(3,7)=51 (printed 48)

## Method
- wit.py: checks the 50-element artifact: len 50, x_i in [7(i-1),7i-1] for each i, distinct, no a<b with (a+b)/2 in set. Result: all blocks ok, 0 APs. => M(3,7) > 50 CONFIRMED (witness half; M(3,7)>=51, so printed 48 is wrong provided the definition is as quoted).
- Three independent exhaustive solvers for "least n with no AP-free choice":
  1. bt.c: plain left-to-right backtracking (checks only completed earlier indices).
  2. mrv.c: DFS with forward checking, minimum-remaining-values branching, reflection symmetry (o1+o_n<=s-1; valid because x->7n-1-x reverses blocks).
  3. sat.py/sat2.py: pysat (cadical153, glucose4) CNF: exactly-one per block, clause (-a,-mid,-c) for each 3-AP, reflection symmetry clause; every SAT model re-verified by independent python check.
  4. prop.c: unit-propagation CSP + MRV (+ optional failed-literal probing), binary branching assign/forbid, reflection symmetry, cube prefixes; est.c: Knuth-style tree-size estimator.
- Bug note: first version of prop.c was unsound (re-assigned a block after sibling propagation, gave M(3,3)=9 etc.); caught by cross-validation, rewritten, re-validated.

## Validation (all agree after the fix)
M(3,s) computed: s=2: 7, s=3: 11, s=4: 19, s=5: 31 by bt.c, mrv.c, sat.py (cadical), prop.c (probe depth 0 and 3). s=6: SAT at n=35 and n=36 (glucose4, witnesses verified), so M(3,6)>=37; n=37 not finished (cadical/glucose >11 min; prop.c cube sampling suggests ~45 min).
Observation: these differ from the paper's printed 18 (s=4) and 29 (s=5) - the printed table appears wrong at more entries than s=7 (consistent with claimant having noticed errors, but also a reason to double check the definition reading: with the definition as quoted my code gives 7,11,19,31).

## Impossibility half: NOT reproduced
- Tree-size estimator validated: s=5,n=31 est 1.9e6 nodes vs actual 0.94e6 (prop pd0); s=6,n=37 est ~7e8-9e8 vs actual cube sampling ~1e9.
- s=7,n=51 estimate: ~3e12 nodes (heavy tail, max probe 2.5e17), at ~4e5 nodes/s on one core = ~90+ days. Probing reduces nodes ~4x but costs more time per node.
- Single cube of s=7,n=51 exceeded 100 s; glucose4 on s=7,n=51 produced no result in the minutes I allowed (killed).
- So I could neither confirm nor refute "no valid 51-choice". No counterexample found either.

## Novelty searches (WebSearch/WebFetch; no email in any query)
1. "Brown Landman Robertson Bounds on van der Waerden numbers and some related functions M(3,s) table" -> arXiv 0706.4420 pdf/abs/ar5iv, 2102.01543, Integers papers.
2. WebFetch arxiv pdf 0706.4420: Table 1 M(3,s)=7,11,18,29,37,48,?...; "standard backtrack algorithm"; no journal ref on arXiv page (v1 only).
3. OEIS-oriented query "M(3,s) ... 7, 11, 19, 31" -> A198684, A135415, A007783 etc. (unrelated), nothing on M(k,s).
4. "Some new bounds and values for van der Waerden-like numbers" -> Landman-Greenwell 1990 q(n,k) (different function); Wikipedia Van der Waerden number; arXiv math/0507019.
5. Landman Robertson "Ramsey Theory on the Integers" M(k,s) -> book pages (AMS STML 73), Gasarch review: no mention of M(k,s)/G(k,s); chapter 10 unreadable.
6. Journal-version query (Integers / JCNT / EJC) -> only arXiv and unrelated papers; no journal version found.
7. WebFetch en.wikipedia Van_der_Waerden_number and Van_der_Waerden's_theorem: no M(k,s)/G(k,s), no values.
8. WebFetch oeis.org/search?q=... (3 queries): blocked by robots; WebSearch restricted to oeis.org returned unrelated sequences (A121385, A003002, A217037, ...).
9. mathoverflow query "van der Waerden-like function G(k,s) M(k,s)" -> nothing relevant. math.stackexchange query on intervals [(i-1)s,is-1] -> nothing relevant.
10. "0706.4420 cited ... M(3,s) computed values" and Google-Scholar-style cites query -> only the paper, 2102.01543, 1603.01831, 1102.5433 (not about M).
11. "M(3,7)" query -> nothing; WebFetch of 1201.3842, 2502.07921, gasarch vdw book pdf: no M(k,s).
Conclusion: nothing found publishing M(3,7), but search tooling is shallow (no true Google Scholar/OEIS full-text/MO/MSE access), book unreadable. Novelty plausible, not established.

## Honesty
Claim uses the quoted definition verbatim and the frozen "solved" bar (witness + exhaustive proof + unpublished). Not narrowed. But the exhaustive-proof half is unverified by me.
