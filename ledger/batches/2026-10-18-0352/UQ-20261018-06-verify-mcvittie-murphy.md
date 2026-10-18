# UQ-20261018-06 verify McVittie & Murphy arXiv:2506.15970

Read level: PDF / FULL TEXT, read through the WebFetch summariser (arxiv.org/pdf/2506.15970, and the abs URL which also returned body text). Quotes below are as returned by the summariser; short strings only, not stitched.

## Calls
1. WebFetch "arxiv.org/abs/2506.15970" (no scheme): rejected by tool validation, no fetch made.
2. WebFetch https://arxiv.org/html/2506.15970: REJECTED by proxy, HTTP 429, told not to refetch. Not retried.
3. WebFetch https://arxiv.org/abs/2506.15970: OK; returned body text (no title/abstract), 3 stations, "almost 1 m" at Saint John.
4. WebFetch https://arxiv.org/pdf/2506.15970: OK; title, authors, string checks, methods.
5. WebFetch same pdf, targeted: Sec 2.2 sentence, delta-hat definitions, EM, yearly blocks, Table 4.
6. WebFetch same pdf, targeted: MCAR sentence, almost-1m sentence, external data, 10-15% rule, companion mention.
7. WebSearch "arXiv 2506.15964 McVittie Murphy ...": result list only (titles/URLs). 2506.15964 exists: "Weighted Parameter Estimators of the Generalized Extreme Value Distribution in the Presence of Missing Observations". Not opened.

## Findings
1. Paper confirmed: "Estimating Extreme Wave Surges in the Presence of Missing Data", James H. McVittie (Univ. Regina) and Orla A. Murphy (Dalhousie). Stations: Saint John (ref 65, 1941-2023, 83 yr), Yarmouth (ref 365, 1965-2023, 59 yr), Port-aux-Basques (ref 665, 1959-2023, 64 yr); years with missing data 60, 45, 56. Blocks are years ("when wave height maxima are obtained on a yearly basis..."). GEV is fitted to the surge series (tide removed via TideHarmonics, LOESS mean level + harmonics). CAVEAT: paper itself uses "wave height", "water level", "surge" loosely; "yearly block maxima of de-tided surge" is a fair reading, not a crisp statement. Fig 6 caption: "The red dot in the surge level series corresponds to the maximum wave level for that year."
2. Strings, each separately:
 (a) "a failure of the equipment was attributed to the high intensity waves": FOUND verbatim, Sec 2.2 (Missing Extremes), scenario III (MNAR example); scenario II is progressive equipment wear; next sentence says scenario III is not the only possible MNAR scenario. It is a hypothetical scenario illustration, not a documented failure at a named station.
 (b) "predict a 20-year return level almost 1m higher": FOUND verbatim, Sec 5. Full sentence: "Indeed, at this location, both the EM and conditional soft censoring approaches predict a 20-year return level almost 1m higher than the predicted return level from the observed likelihood method."
 (c) "In all cases, there was no evidence that the missing data mechanisms were MCAR": FOUND verbatim, Sec 5; Little's test applied to each station.
3. CENSORING PROBABILITY: option (i), NOT (ii). It is estimated from the data, not from external instrument/network data. Summariser-reported wording:
 - Unconditional soft: "delta-hat_j is the proportion of non-missing observations within the block" = n_j/(n_j+n'_j); "do not utilize any information from the random variables within each of the blocks".
 - Conditional soft: "the expectation of delta_j, conditionally on all the observed series level data", estimated as F-hat_Nobs(m_nj)^(n'_j), empirical CDF of all observed values raised to number missing in block.
 - EM: "estimates the expectation of delta_j conditionally on the observed maxima in terms of the GEV CDF": delta-hat_j = G(m_nj; Theta_t), iterated to |Theta_{t+1}-Theta_t| < eps.
 - Hard: indicator right-censoring. No external data on instruments/network/failure rates; missingness discussed only qualitatively ("loss of power and flooding of the measurement apparati...").
 So all three of the within-block proportion, the empirical CDF, and the GEV CDF in EM appear, one per estimator. Aggregation: per block (year) at a single station.
4. Reconstruction of realized block max at a failed station: NOT FOUND (full text read via summariser). Method treats the observed max as a lower bound (right-censoring); no use of high-water marks, neighbours, or hindcast. Imputation (Turki et al. 2020) only in literature review.
5. Estimators: obs (observed likelihood), hard (right-censored), softUC, softC, EM: confirmed all five. 10-15% rule: confirmed; paper says simulations "appear to support the often-used rule of thumb where blocks with more than 10-15% of the observations missing are dropped", citing Beck et al. (2020). Rule is for dropping blocks (per block, share of observations missing). The paper does not derive it.
6. "Almost 1m": Saint John, 20-year return level, metres. Table 4: obs 1.73, hard 6.26 (SE 137.66), softUC 1.88, softC 2.95, EM 2.65. Differences vs obs: EM +0.92 m, softC +1.22 m; "almost 1m" matches EM better than softC though the sentence names both. Yarmouth 20-yr: obs 1.07, hard 5.83, softUC 1.12, softC 1.17, EM 1.42. Port-aux-Basques: 0.88, 1.11, 0.90, 0.90, 0.99. Also Sec 5 gives 50- and 100-year levels (not read in detail).

## Companion
2506.15964 not cited in 2506.15970 (per summariser). Search shows 2506.15964 exists under a different title (weighted GEV estimators). A third related item, arXiv 2512.15429 "Accounting for missing data when modelling block maxima", appeared in search; not opened.
Summariser is a risk: Table 4 numbers and quotes were consistent across fetches 4-6, but not independently checked against the raw PDF.
