# UQ-20261017-05 verification notes

## Searches (1 of 7 used)
1. "Klein Roodman Blind analysis in nuclear and particle physics Annu. Rev. Nucl. Part. Sci. 2005" -> found a gwern copy (gwern.net/doc/statistics/bias/2005-klein.pdf), annualreviews, arXiv hep-ex/physics 0312102 preprint (not opened).

## URLs (5 of 6 fetches used)
- OPENED https://www.gwern.net/doc/statistics/bias/1986-henrion.pdf (3 fetches, summariser)
- NOT OPENED https://doi.org/10.1146/annurev.nucl.55.090704.151521 -> proxy HTTP 429, told not to refetch. Annual Reviews page and arXiv preprint not tried.
- OPENED https://www.Gwern.net/doc/statistics/bias/2005-klein.pdf (2 fetches, summariser; confirmed to be Klein & Roodman 2005, 55:141-63)

## Strings checked (Henrion & Fischhoff)
- "unduly tight confidence intervals": FOUND. Sentence: "The result would be initially small Birge ratios, unduly tight confidence intervals, and the exclusion of discrepant data" (continues "that later prove to be more accurate than included ones").
- "recommended value": FOUND, Section VII: "Having a preexisting recommended value may particularly encourage investigators to discard or adjust unexpected results, and so induce correlated errors in apparently independent experiments."
- Remedy, Section VIII: "referees might be asked to scrutinize the account of an experiment "blind," before knowing its outcome and whether it affirmed prior expectations." Referee-blind scrutiny of an account; NOT blind analysis and does not hide the recommended value.
- Quotes taken via summariser; not checked against the PDF page image.

## H&F design
- Data: speed of light 1875-1958 (27 values); G (14, 1798-1983); proton magnetic moment; inverse fine-structure constant; ohm ratio; PDG kaon/hyperon lifetimes (92) and meson masses (214), combined 306; recommended values of 5 constants from reviews 1929-1973.
- Unit: individual reported measurement with stated standard error (and recommended-value reviews).
- Endpoints: Birge ratio (SD of normalised residuals, ideal 1), interquartile index (ideal 50%), surprise index (share outside 98% interval, ideal 2%).
- Comparator: ideal normal calibration, with the later accepted value taken as truth. No exposed vs unexposed arm.
- Estimand: calibration of quoted uncertainties (too small, "pervasive").
- (c) Answer: NO exposure/blinding contrast is measured. Mechanism is hypothesised and illustrated (bandwagon effect in speed of light, Millikan notebook), not tested.

## Klein & Roodman 2005
- No quantitative blinded-vs-unblinded comparison of uncertainty calibration found.
- Only quantitative item: Section 2 (p.144), historical unblinded measurements (neutron lifetime, K0S lifetime, a mass, gA/gV; refs 8-41, ~1967-2004). "the measurements do tend to cluster nearer the prior published averages than the final value." chi2 about prior averages 131.2 for 83 dof vs 249.7 about the final average. Unit: published measurement; comparator: prior published average vs final average; no blinded arm; authors say effect "not striking".
- Terms "pull", "normalized residual", "normalised", "overconfident": not found by summariser. Statement that a central-value bias adds to the variance of pulls: not found.
- Caveat: absence claims rest on a summariser over the gwern copy, not a full read.

## Conclusion
H&F pose the question and propose referee blind scrutiny, but do not measure a blinded/unblinded contrast. K&R give no calibration comparison; closest is the chi2 clustering check.
