# UQ-20261017-25 verification: decomposition prior art
Searches run: 8 of 8 (cap reached). Fetches run: 6 of 6 (cap reached; two were redirect stubs).

## Searches (all standard mode)
1. seismic hazard map testing ... Tasan Beauval Mak Schorlemmer Rey 2018 cannot separate -> hits: Rey 2018 (isterre), GFZ PDF (Mak&Schorlemmer 2016), arXiv Le Teil, others. No "not separable" statement surfaced.
2. Kjeldsen Prosdocimi 2023 130235 -> Venice repository PDF found (arca.unive.it / iris.unive.it).
3. "not possible to separate model error from temporal variability" seismic -> Salditch/Stein PMC5789888 (simulation), Seismica article, USGS testing items. Not opened except PMC.
4. ASCE 7 wind retrospective exceedance -> no audit; only MRI explainers, Arecibo failure analysis (NASEM), regional wind studies.
5. flood hindsight test of issued 100-yr estimates / FEMA BFE audit -> USGS flood-frequency reports, no audit found.
6. design Hs back-test -> NHESS preprints (2016-333, 2017-165), ICCE paper, Encounter Probability of Hs. None opened. Snippets only; not evidence.
7. Mak & Schorlemmer / nonstationarity vs model bias -> same seismic items as 1,3.
8. "cannot be separated"/"not identifiable" hazard map generic -> arXiv 2010.04789 (Bayesian fluvial flood hazard uncertainty), HESS 2023 etc. Titles only; none opened.

## Fetches
1. arca.unive.it Kjeldsen PDF -> 302 redirect to iris.unive.it (counted).
2. isterre.fr rey-etal-jose2018.pdf -> read OK (summariser output, full text of PDF).
3. iris.unive.it Kjeldsen PDF -> read OK.
4. gfzpublic ... 1724897.pdf (= Mak & Schorlemmer 2016 BSSA) -> read OK.
5. ncbi.nlm.nih.gov/pmc/articles/PMC5789888 -> 302 redirect (counted).
6. pmc.ncbi.nlm.nih.gov/articles/PMC5789888 -> reCAPTCHA. COULD NOT READ.

## Exact strings checked (as returned by summariser)
- Kjeldsen&Prosdocimi: "the threshold is set so that there is an average of one event per year" (POT1); "...three events per year" (POT3). Counts: abstract 842 gauges; Table 2 AMS 939, POT1 842, POT3 767. "the POT series displayed a tendency for over-dispersion". NB accepted at 71% (POT1), 75% (POT3) vs Poisson 22%, 43%.
- Mak&Schorlemmer: "A true test of a forecast must use prospective data" ; observations "truly prospective" only for 1996 and 2002 maps.
- Rey et al: window +/-50 yr "does not change the overall results"; VI windows "too short with respect to the return periods".
Quotes passed through a summariser, not verbatim-verified against the PDF.

## Findings
H1.1: Mak & Schorlemmer 2016 and Rey 2018 do NOT separate issue-era bias from later hazard change (per read text). M&S2016 handles it by argument (prospective vs independent data), not decomposition. Tasan 2014, Stirling&Petersen 2006: NOT OPENED. Salditch 2018 (Stein group): NOT READ (captcha).
H1.2: No statement found that separation is impossible/not identifiable. Not found in the two papers read in full; 3 queries aimed at it returned nothing; but most candidate papers unread, so this is "none found", not "none exists".
H2.3: Wind, flood, wave: no observed-vs-nominal exceedance test of dated issued design values found in 3 dedicated queries (snippets only). Not proof of absence.
H2.4: Kjeldsen&Prosdocimi: confirmed the count, NB overdispersion, 1 or 3 events/yr thresholds. In-sample (calibrated per station to the observed record) is the summariser's inference; paper does not state it explicitly. Not an out-of-sample test of an issued value.
H2.5: FEMA BFE / ASCE 7 retrospective audit: none found in 2 queries. Not proven absent.
