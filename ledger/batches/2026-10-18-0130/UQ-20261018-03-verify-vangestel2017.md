# UQ-20261018-03 verify Van Gestel, Müller, Bosmans 2017 (Health Econ 26(9):1094-1109, doi 10.1002/hec.3505)

## Read level
PDF-level of the WORKING-PAPER versions (York HEDG 16/27, via summariser), plus abstract/metadata from Bern BORIS and Erasmus Pure.
The Wiley journal version was NOT opened (DOI and Wiley fetches errored). Text is summariser-mediated; quotes below are short fragments as returned, not stitched.
Working-paper text may differ from the published journal version.

## Routes (6 fetches, 2 searches)
- Fetch 1 doi.org/10.1002/hec.3505: ERROR (client error)
- Search 1 (title + authors): found BORIS Bern, Pure EUR, ZHAW, York HEDG 1627.pdf, IDEAS dp1710 and 16-27
- Fetch 2 york.ac.uk HEDG 1627.pdf (WP 16/27, July/Aug 2016): OK, full working paper summarised
- Fetch 3 boris.unibe.ch/145849 (Bern DP 17-10, Feb 2017): OK, abstract/metadata only (PDF listed, CC-BY, dp1710.pdf)
- Fetch 4 york 1627.pdf offset 20000 (results, robustness): OK
- Fetch 5 onlinelibrary.wiley.com/doi/10.1002/hec.3505: ERROR
- Fetch 6 pure.eur.nl record: OK, journal metadata confirmed (Health Economics 26(9), Sept 2017, 1094-1109)
- Search 2 (journal details): irrelevant results

## Findings
1. Exists. Raf Van Gestel, Tobias Müller, Johan Bosmans. "Does My High Blood Pressure Improve Your Survival? Overall and Subgroup Learning Curves in Health". Health Economics 26(9), 1094-1109, 2017, doi 10.1002/hec.3505 (Pure EUR). Earlier versions: HEDG WP 16/27 (York), Bern DP 17-10.
2. Yes. TAVI, Belgian registry, "the first 860 patients undergoing TAVI in Belgium in 23 different centers" (WP). Regression N 854 baseline, 780 full controls. Data 2007-2012. Outcomes: 24/36-month survival; MACE (pacemaker, renal failure, stroke).
3. NOT SETTLED by a quote. Unit = patient (index i, hospital h, year t). Exposures are defined at HOSPITAL level in the models: cumulative volume = patient number within a hospital; static volume = annual procedures in hospital h; hospital fixed effects. WP phrase: "the 30th patient for a provider (hospital)". Summariser says operator identity appears not observed. The abstract and text nonetheless speak of "operator/physician experience" loosely. I did not see a sentence stating explicitly that operator ids are absent. Treat as centre-level exposure with operator wording in the narrative; unconfirmed in journal version.
4. Yes. "Days between procedures"/days since last TAVI is an exposure (mean ~26, median 14, min 0). Human capital depreciation named as one of three learning types; fragment: "Physicians' skills may suffer from a spell without practice". "human capital depreciation" is in abstract and in the nonlinearity remark.
5. Yes in WP. Renal failure +0.12 pp per additional day since last procedure; stroke +0.07 pp per day. Table 3 shows 0.0012 and 0.0007 (probabilities as decimals), both significant at 5%, specification (3) with hospital fixed effects. Model = linear probability model, robust SEs; probit/logit marginal effects "almost perfectly identical". Not Lasso/Theil-Goldberger (those used for survival). Denominator: probability of the event per patient. Not checked in journal version.
6. Hospital fixed effects: yes ("a vector of hospital fixed-effects"). Operator fixed effects: not seen. Annual (static) volume and cumulative patient number entered together: yes.
7. Cited in the WP (summariser, first fetch), for recent-experience effects in CABG. Reference list itself not read line by line; journal reference list not read.
8. No formal threshold derived. Robustness (Table 8): about 100 days between procedures, stroke risk "strongly increased", read as non-linearity. The 30-patient split is an experience split at about the sample mean, not days away. Observational remark, not a derived interval.

## Caveats
Contradiction to flag: first-fetch summary said exposure "effectively centre-level... physician-level interpretation in discussion"; second said hospital. Both agree on hospital as the modelled level.
