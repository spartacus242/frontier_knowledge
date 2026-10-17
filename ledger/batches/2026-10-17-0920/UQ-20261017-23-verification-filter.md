# Working notes: filter effect / conformity control prior art
Searches run: 8 (cap 8). Fetches run: 6 (cap 6). No search refused.

## Searches
1 "filter effect" conformity control concrete Bayesian FORM -> Heron 59-23/2 (Caspeele), Springer s11527-013-0048-y, Dortmund eldorado (Lux et al. 2026), RWTH pdf 1028555
2 steel yield mill test acceptance sampling truncated -> AISC EJ 800 (Updating standard shape material properties), Clinch thesis, Wolert/Nowak, UT FSEL yield test variation, JCSS steel
3 Melcher/Kala 2004 -> JCSR2004.pdf, Vilnius JCEM 6434 (Material and geometrical characteristics of structural steels)
4 Caspeele/Taerwe conformity control direction -> same concrete hits, ojs.cvut.cz, dspace.cvut.cz conformity criteria durability
5 steel mill acceptance retest grade conformance -> AISC, ASI compliance, Wolert-Nowak
6 Caspeele "filter effect" Structural Safety/Mat Struct -> same hits
7 steel "mill test" bias, rejection of low heats, truncated tail -> AISC 800/797, MTR survey of plate, JCSS steelpr.pdf
8 EN 10025 conformity FPC statistical evaluation Eurocode -> only mill datasheets / DoPs (nothing on distribution effect)
(Search results are titles/URLs only; none of the AISC, Wolert, JCSS-steel, MTR-survey pages was opened.)

## Fetches
1 heronjournal.nl/59-23/2.html (Caspeele, HERON 59(2/3)): abstract page only. Outcome: readable, abstract-level.
2 fce.vutbr.cz JCSR2004.pdf (general question): readable, full PDF text via summariser.
3 same, exact string "exclusion of values not satisfying the requirements of material standards": FOUND, Sec 2.1, sentence: "...is asymmetrical, evidently due to the exclusion of values not satisfying the requirements of material standards for that tensile strength class, and therefore they are reclassified to lower tensile strength classes."
4 same, exact string "is about 8.6%": FOUND: "the probability of not maintaining the assumed yield strength nominal value, 355 MPa, is about 8.6%"; "worse than the supposed 5% [2]" FOUND same sentence.
5 publications.rwth-aachen.de/record/1028555/files/1028555.pdf: summariser received EMPTY content. COULD NOT READ.
6 eldorado.tu-dortmund.de bitstream (Lux, Feiri, Schulze-Ardey, Hegger, Classen, Ricker, Scientific Reports 16:8277, 2026): readable full text via summariser.
Not tried: doi.org, PMC, Springer s11527 page, Heron PDF (fetch cap).

## Findings
Q1 Concrete: machinery exists. Caspeele (HERON 59, "From quality control to structural reliability: where Bayesian statistics meets risk analysis") abstract uses "filter effect": "this filter effect can be quantified using Bayesian updating techniques" (abstract level). Unit: concrete strength distribution/lots under EN 206-1 conformity criteria; Bayesian update of hyperparameters (numerical integration, MCMC); FORM shows positive effect on reliability. Comparator and estimand not stated in abstract (implied with vs without conformity control).
 Lux et al. 2026 (full text via summariser): wording is "filtering effect"; prior (incoming) vs posterior/predictive (outgoing) distribution of mu and sigma, priors from JCSS PMC, OC-function likelihood, MC n=15 per lot; endpoint beta by FORM (TesiproV) for RC short column; beta rises up to ~10%, sigma falls 5.81 -> 4.89 N/mm2.
Q2 Steel analogue: NOT FOUND in 4 steel-vocabulary searches (#2,#5,#7,#8). Hits are descriptive statistics of yield (AISC, Wolert-Nowak, UT FSEL, MTR survey, JCSS steel) - titles only, not opened, so this is a negative on titles/snippets, not on full texts. The only steel source that names a selection mechanism is Melcher et al 2004, and only as a one-sentence explanation of skewness.
Q3 Direction: no source states conservative/unconservative explicitly. Caspeele abstract: "positive influence on the reliability"; Lux et al implies ignoring CC understates beta (i.e. conservative) but is an inference by the summariser, not a quote; Lux Discussion has the confusing remark about old priors being "somewhat conservative, i.e., ... reliability indices may be overestimated" (summariser paraphrase, internally inconsistent). Nothing for steel.
Q4 Rate: Lux et al estimate probability of acceptance Pa(theta) vs fraction defective by MC (graph Fig 5), not an empirical rejection rate in practice. Caspeele abstract: none. Melcher: no reclassification rate. No source found with an empirical rejection/reclassification rate for steel or concrete.
Q5 Melcher et al 2004: both strings verified. Unit: individual yield-strength test results, plates pre-1999 and IPE flange samples (2000). Endpoint: P(fy<nominal), 5% and 0.1% quantiles. Comparator: nominal 235/355 MPa and EC3 values. Estimand: exceedance probability and characteristic/design quantiles. 8.6% method not shown. No reclassification rate. Grades analysed separately (S235 fitted normal/Hermite/shifted lognormal), no joint fit.
Caveat: 8.6% vs 5% - the 5% is the nominal definition of a characteristic value; 8.6% is the observed fraction below 355 in the pre-1999 plate set; "characteristic value 346 MPa" per summariser.
