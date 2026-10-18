# UQ-20261018-06 verify: Simpson & Northrop, arXiv:2512.15429

Read level: FULL TEXT (arxiv.org/html/2512.15429v1, read through a summariser, 3 fetches) + abs record (1 fetch).
Caveat: summariser output; quotes split in two halves where long. Quote (c) was returned whole in fetch 1 and in two halves in fetch 2.

## Calls
- ToolSearch load WebSearch/WebFetch: ok
- Bash curl arxiv.org html + abs: BLOCKED (proxy 403, not counted as a WebFetch; no data)
- Fetch 1 arxiv.org/html/2512.15429v1 (overview, quotes, Discussion): ok, full text
- Fetch 2 same URL (each quote individually, section list): ok
- Fetch 3 arxiv.org/abs/2512.15429: ok (date, DOI)
- Fetch 4 same html (Sec 4.2, 5.1, 5.2, intro): ok
- Searches: 0 of 7. Fetches: 4 of 7.

## Findings
1. Paper confirmed. Simpson & Northrop (UCL Statistical Science). arXiv abs: submitted 17 Dec 2025, v1 only, stat.ME, DOI 10.1002/env.70075 (published Environmetrics). HTML body itself states no date. Estimand: GEV parameters (mu, sigma, xi) of the underlying full-block maxima, and return levels; location and scale depend on number of non-missing obs n_i per block, mu(n_i), sigma(n_i), shared xi; return levels by setting n_i = n. Assumption (Sec 3.2): "We assume here that observations are missing completely at random in each block." Then: "The missingness mechanism can vary between blocks, but must be non-informative," meaning "whether or not an observation is missing does not depend on its value." Raw data i.i.d.
2. Quotes, each checked separately:
 (a) YES, Sec 6 Discussion: "...the most extreme events are the ones that are the hardest to reliably record, e.g., river flow gauges being damaged by fast-running water, and there is a need to be able to capture such phenomena."
 (b) YES, same sentence as (a). Not an independent occurrence.
 (c) YES, Sec 6: "It is also quite likely for informative missingness to occur in environmental applications, but this is not accounted for in our current approach. ... To account for this, one could attempt to explicitly model the missingness mechanism and incorporate this into the GEV model. One option is to take a regression-based approach, exploiting covariates..." (ellipsis in my notes marks a gap I did not see verbatim.)
 (d) YES, Sec 3.2 (General strategy), sentence above. Verbatim.
3. Does NOT model informative / measurand-dependent missingness. Only names it as future work. Settles it: "but this is not accounted for in our current approach" (Sec 6); simulations (Sec 4) are MCAR within block with per-block missing proportion ~U(0,0.2); applications (Sec 5) use the same adjust model. Discussion also says if missingness is higher in seasons with higher values the model is misspecified (seasonal, not value-dependent).
4. Data: CORRECT. Brest sea surge heights at high tide, 1846-2007 = 162 years, ~9% raw missing, declustered and trend-corrected; 9 years with no data. Plymouth daily-max ozone (ug/m3), 1998-2024 = 27 years, ~10% raw missing; 2001 and 2006 most affected. Unit/level: annual block maxima, i.e. 162 and 27 blocks; missingness proportion per block (per year), not per station-population. Also simulation: 4 parent distributions, n=90, b=50, 10,000 reps.
5. Comparators: MOSTLY CORRECT with corrections. Simulation: Full, Naive, Discard (blocks with >10% missing removed), Weight1 (w=n_i/n), Weight2 (EDF^(n-n_i)), both from McVittie & Murphy (2025b), plus the authors' Adjust. Full = fit before missingness imposed, "impossible in practice"; the word "unattainable" does NOT appear (summariser report); "ideal" does. McVittie-Murphy described as independent and contemporaneous. Applications do not use Full; they compare adjust with naive, discard (Brest) and removal of affected years.
Minor: Table 4 caption (ozone) reportedly says "Brest sea surge data" (label error, one-source report).
Other Discussion content: seasonality, temporal dependence (max-AR extremal index 0.5 gives positive location bias, Sec E), POT/r-largest, Healy et al 2025, Richards et al 2025.
