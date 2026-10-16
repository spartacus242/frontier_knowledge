# Post-batch verification log — fresh-context checker, 2026-10-16 10:33 UTC batch

Each checker was handed one load-bearing claim from the adversary's report plus its cited source, and
NOT the adversary's reasoning or the judge's verdict. `q=` is its search count. This log is the
checker's own text as returned; the final EFFECT paragraph of some sections was cut by the runner's
output cap, marked [...] where that happened.

---

airborne-edna-distance | UQ-26-edna | PARTLY_CONFIRMED | q= 10 refused= 2
--- POSED IN PRINT?
Yes for both halves, though at different strength.

The distance half is posed as an executed, named analysis, not merely as future work. Clare et al. 2022 ran "read count numbers and distance from the enclosure" as a model (LR = 2.51, df = 1, p = 0.113) over 0-276 m. Kroos et al. 2026 made distance a titled factor ("Effects of Sampler Type, Distance, and Environmental Conditions") and reported a coefficient of -0.91 (95% CI -1.73 to -0.10). Stewart et al. 2026 made source provenance the paper's whole object, concluding signals "likely originate less than 200 m downwind of the sampler", and the UK national airborne-eDNA survey (Sci Rep, s41598-025-03650-z) states "Our estimations of airborne eDNA transportation distance ranged from a few hundred meters to 75.3 km", "distances ranged from 400 m to 75.6 km, with an average of the estimated maximum travel distances of 27.3 km", and an "estimated median distance of 18.6 km" used as a mapped buffer.

It is also posed as explicit residual future work, in the authors' own words:
- Lynggaard et al. 2026, Communications Biology (s42003-026-09950-y): "more comprehensive examinations are needed to investigate the spatial and temporal resolution of airborne eDNA", and "investigations into the state, transportation, and persistence of vertebrate airborne eDNA."
- UK national survey: "a dedicated experimental design will be necessary to further rigorously test eDNA transport distances", and "Because the true source origin(s) of these species' DNA could be missed, the estimated distances should be interpreted with caution", with "the true
--- EFFECT:
The claim splits cleanly, and the two halves get opposite answers.

Half one — how far from a survey unit the source can be — is ASKED AND SUBSTANTIALLY ANSWERED, and the ledger candidate's motivating gap is REFUTED on its own decisive test. The gap claimed Clare et al. 2022 left distance unquantified; Clare et al. in fact ran read count against distance over 0-276 m with in-enclosure points dropped (n = 27), reporting LR = 2.51, df = 1, p = 0.113 — the kill's figures are right to the decimal. Three further primary sources answer the same half with monotonically widening scope: Kroos et al. to 1000 m with a signed coefficient, Stewart et al. to 655 m with a modelled catchment and a "<200 m" conclusion, and the UK national survey to a 18.6 km median / 75.6 km maximum estimate. The question is not merely asked; it has a literature with numbers.

Half two — what share of a detected taxon list comes from outside the unit — is POSED but NOT ANSWERED. Every candidate figure measures something adjacent: residency labelling (Clare), model-catchment agreement (Stewart), or contamination-attributed exotics (UK survey). None partitions a taxon list by whether its source lay inside or outside a defined survey unit. This is the genuine residual.

Two precision corrections also bear on how the candidate should be worded. First, Kroos et al. do NOT fit a detection-probability-versus-distance function: they fit binomial GLMs and a Bayesian logistic model with distance as a predictor across only three levels (10/100/1000 m), report coefficients, and plot observed frequencies — so any claim that the decay function is in hand is unsupported. Second, three of the candidate's reported Kroos figures need adjusting: 110 is the planned total (analysed counts are 88 distance + 20 proof-of-concept = 108), "0 m" is the in-enclosure proof-of-concept rather than a distance class with a reported detection rate, and "27 verified animals" is 27 animals present in the park with no verification method stated. The "32% non-resident" in the kill is the ledger's own arithmetic (8/25), not Clare et al.'s wording, and Clare et al. explicitly hedge several of those eight as possible zoo stock or food.
