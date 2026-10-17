# UQ-20261017-03 verification notes (2026-10-17)

Budget used: 4 of 7 searches, 6 of 6 fetches (5 opened, 1 failed). No search refused.

## Searches
1. "Ramanujan Library automated conjectures ... calibration" -> found arXiv 2412.12361 (Ramanujan Library) + Technion talk page. Titles only.
2. "Ramanujan Machine conjecture disproved counterexample not an identity refuted" -> no relevant refutation; irrelevant hits (RH disproof attempt, talks). Titles only.
3. "Ramanujan Machine conjecture later found false OR ..." -> only the paper's own pages, Technion talk, repec; no refutation. Titles only.
4. "automatically generated conjecture numerical identity turned out false PSLQ ..." -> general experimental-math papers (Bailey/Borwein, 2502.17533 "From Euler to AI"), not opened. Titles only.

## Fetches
1. arxiv.org/abs/2002.12690 -> OPENED. Exact string present: "Tested unique formulas count must not exceed 1/sigma"
2. arxiv.org/html/2002.12690 -> OPENED. Rule in abstract: "Tested unique formulas count must not exceed 1/sigma, where sigma is relative numerical error of the target constant." Sect.4: "Above criterion do not provide any numerical estimate for probability of successful identification." Sect.4: "equivalence problem is undecidable in general." Sect.5: "likelihood value provide also relative quantitative estimate of identification probability." (summariser-relayed quotes; not independently verified against the page)
3. arxiv.org/abs/1907.00205 -> OPENED. Abstract page only; summary found no threshold or coincidence probability (abstract page does not contain them).
4. doi.org/10.1038/s41586-021-03229-4 (Nature 2021) -> NOT OPENED (fetch error CLIENT_ERROR). Nature paper unverified. Routes failed: doi.org. Not tried (budget): nature.com direct, other.
5. arxiv.org/pdf/1907.00205 -> OPENED (version not identified). Relayed: random-match probability "smaller than 10^-40" for "an enumeration space of 10^9" and "result accuracy of more than 50 digits"; MITM-RF results "tested numerically to 100 digits" (Fig 3); "up to 2000 digits"; initial search 10 digits (Fig 2). No minimum digit threshold stated for acceptance. Says accuracy does not replace proof.
6. arxiv.org/pdf/2412.12361 (Ramanujan Library) -> OPENED. PSLQ cutoff RoI=2: "an RoI of 2 seems to comfortably separate random results from false positives, with a generous margin of error." LLL on random inputs ("each with d uniformly random binary digits"), suggested RoI 1.3 minimum, observed average "up to some apparent upper limit less than 1.5". No numeric false-positive rate; no falsified conjectures reported; results "are not theorems, but rather conjectures awaiting proofs."

## Conclusions
1. Odrzywolek: rule = tested unique formulas <= 1/sigma (sigma = relative numerical error of target). Declines absolute probability of identification (Sect.4 quote above); gives only relative likelihood.
2. Ramanujan Machine (arXiv PDF): ~10^-40 appears as a random-match probability for a stated worked case (10^9 enumeration space, >50 digits), not as the acceptance threshold; the acceptance rule is staged precision (10 digit search, 100 digit validation). The claim "bound around 10^-40" is supported ONLY with those conditions. Nature 2021 text not read.
3. Ramanujan Library: calibrates cutoff against random inputs (partly; LLL appendix D explicit; PSLQ RoI=2 empirical), no numeric false-positive rate.
4. Disproved machine-generated conjecture: NONE FOUND. Weak negative: 4 searches (titles only, results not opened except those above) + 5 sources opened, of which only the Ramanujan Library paper could speak to falsification. No paper reporting a refutation was seen; absence not established. Secondary-quote caveat: all quotes relayed by page summariser.
