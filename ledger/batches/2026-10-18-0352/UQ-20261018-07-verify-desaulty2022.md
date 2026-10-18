# UQ-20261018-07 verify Desaulty 2022 (Nat Commun 13:4172)

Read level: PDF (nature.com/articles/s41467-022-31850-y.pdf, read via summariser, 3 fetches of same PDF). Not read directly as HTML.

## Calls (2 searches, 7 fetches)
1. FETCH nature.com/articles/s41467-022-31850-y -> CLIENT_ERROR
2. FETCH doi.org/10.1038/s41467-022-31850-y -> HTTP 429 proxy rate limit
3. SEARCH title query -> PMC (blocked, not used), DOAJ, HAL-BRGM, ideas.repec, techxplore
4. SEARCH HAL query -> hal-brgm hal-03739535v1 found
5. FETCH hal-brgm.../hal-03739535v1 -> Anubis access-denied
6. FETCH nature.com/....pdf -> OK (title, authors, thresholds, Delta list)
7. FETCH ideas.repec record -> OK, bibliographic + abstract summary only
8. FETCH PDF (targeted: phrase, samples, precision) -> OK
9. FETCH PDF (targeted: thresholds, Delta, recycl, time) -> OK

## Findings
1. Paper confirmed. Authors: Desaulty, Monfort Climent, Lefebvre, Cristiano-Tassi, Peralta, Perret, Urban, Guerrot. Published 26 Jul 2022. Unit of analysis = individual specimens. Per Fig 4 caption/Methods: 3 spodumene concentrates (NAL, Sayona Quebec, Keliber; Keliber also beta-spodumene, analcime, LiOH.H2O), 8 Li carbonates, 10 hydroxides in Methods (11 in Fig 4 caption), 5 NMC cathode active materials (commercial NMC333/532/622/811 + in-house synthesised), ONE prismatic NMC532 cell from South Korea (4 cathode sheets, n=8 pieces, Fig 3). Corrections: not only one cell+... it is several specimens per stage, with count discrepancy (10 vs 11 hydroxides). Precision: d7Li at 2 sigma, typical external reproducibility +/-0.4 permil (2s); in-house standard long-term 0.5 permil (2s); normalised to bracketing L-SVEC. Battery cell value +10.4 +/- 0.4. Per-process Delta7Li present (see 4).
2. Phrase: (a) "must be active" FOUND; (b) "new orebodies" FOUND. Actual sentence: "This approach is only possible if robust data on within-deposit variations are available; moreover, the database must be active, as new orebodies of deposit are exploited, new extraction sites are open, and new mining/refining companies enter the market." Source wording is "the database", NOT "the reference database" -> near-miss; the quoted string is an ellipsis-spliced paraphrase of "the database must be active, as new orebodies of deposit are exploited". Located in the certification-approach section. (Summariser quoted pieces; the full sentence came through one summariser pass so the middle clauses are lower confidence than the two key phrases.)
3. Thresholds FOUND. Hard-rock: "For d7Li values below +6 permil (the third quartile of hard-rock data)": spodumenes West Kunlun, Yilgarn, Pilbara, refs 32-34, n=20, IQR -0.3 to +6.0, median +2.8. Brine: "over +11.3 permil (the third quartile of 'Li triangle' salars data": Bolivia/Argentina/Chile brines, n=103, refs 35-40 (Fig 2 caption 35-41), IQR +7.9 to +11.3, median +9.8. +6 to +11.3 = "unknown origin domain". Chinese Qaidam brines n=20 (ref 41) IQR +16.1 to +31.4. Both are third quartiles (probabilistic "probably", not hard bounds); hard-rock is not strictly "below +6" exclusive domain: it is Q3 of 20 samples.
4. Delta7Li values FOUND (all permil; read as A minus B):
 - d7Li hydroxide - spodumene concentrate = +5.5 (Keliber, measured pair, sulphate-free alkaline route; also in Conclusion "up to +5.5")
 - Li+ - beta-concentrate leaching = +0.2 to +0.4 (Keliber; Rayleigh ESTIMATE from ore +1.1, analcime -0.9, yield 84-94%)
 - purified Li+ - Li+ (ion exchange) > +8 at 95% yield (authors' lab experiments; Fig 3 alpha=1.055 R=95-98%)
 - SQM - Leverton = +1.0 to +1.4 (Atacama brine products, measured)
 - hydroxide - carbonate = +0.4 to +0.8 (SQM and Leverton; paper: no significant fractionation)
 Reported only by first summariser pass (not re-confirmed on second pass): sulphuric acid process, calcination, cathode synthesis, cell manufacturing = no significant fractionation; salar evaporation fractionation mentioned not quantified. Note these are single-route/single-plant values, not a production-weighted route set; the +5.5 is one plant, the >+8 is lab.
5. Time index: NOT FOUND (read: full PDF through summariser, two targeted passes). Only static year-tagged context in Introduction: 2020 mine production shares (Australia hard-rock 47%, Chile 21%, China 17%, Argentina 7%, other 7%), reserve shares (Chile 44%, Australia 22%, Argentina 9%, China 7%, other 18%), 2030 demand projection (44x 2017 volumes), refining and cell shares by country. No year-by-year or period-by-period isotopic composition. Production shares exist as country shares for 2020 (Fig 1 USGS 2021), but are NOT used to weight isotope data; no weighted mean reported.
6. Recycled Li d7Li: NOT FOUND. Recycling mentioned only in Introduction (Li in cells "can be recycled and reused", not cost-effective vs primary) and in reference titles. Korean battery values cited come from earlier study of anthropogenic Li, not recycled feedstock.

## Caveats
Summariser-mediated; no verbatim reading of page. Sample counts: Methods and Fig 4 caption disagree for hydroxides (10 vs 11).
