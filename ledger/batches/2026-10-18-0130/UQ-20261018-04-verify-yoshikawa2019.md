# UQ-20261018-04 verify Yoshikawa 2019

Read level: FULL TEXT (Springer/BMC article page, via summariser; Tables 1 and 2 not in page text, so values come from narrative). Quotes are single short fragments, not stitched.

## Calls (2 fetches, 0 searches)
1. WebFetch https://doi.org/10.1186/s12913-019-4540-0 -> FAILED, proxy HTTP 429; not retried.
2. WebFetch https://bmchealthservres.biomedcentral.com/articles/10.1186/s12913-019-4540-0 -> 302 redirect to link.springer.com.
3. WebFetch https://link.springer.com/article/10.1186/s12913-019-4540-0 -> OK, full article text (summarised).
4. WebFetch same URL, targeted prompt -> OK, verbatim fragments.

## Findings
1. EXISTS. Title, BMC Health Services Research 19, article 695 (2019, published 15 Oct 2019), DOI all match. Authors: Takeki Yoshikawa, Eizen Kimura, Emi Akama, Hiromi Nakao, Toshihiro Yorozuya, Ken Ishihara.
2. Unit = individual instrument (RFID InstrumentID). Exposure = usage count (uses until failure), extracted from "Use record" and "Repair request record". Paper: "we used only the usage count". Yes, per-item usage count from RFID system log. Setting: Japanese Red Cross Wakayama Medical Center, 1 Sep 2013 - 30 Apr 2017.
3. Yes: "issuance of a repair request as the occurrence of instrument failure".
4. All four present (Results): "1.026-fold increase in the risk of instrument failure occurrence" per use (paper does not say "odds ratio"; from logistic regression, Cooper scissors); "coefficient of determination is 0.032" (pseudo-R2 type unspecified; paper says "coefficient of determination", not R-squared); Hosmer-Lemeshow p = 0.117; 169 and 224 are usage-count thresholds above which model-predicted PROBABILITY OF FAILURE exceeds 0.5 and 0.8 respectively (Cooper scissors logistic model, 136 scissors with repair requested). Not thresholds of a failure rate observed.
5. No. "We have not used any patient data". No SSI or patient outcome.
6. No sterilisation-process failure or load failure analysed; sterilisation count only as usage-rate denominator/background.
7. Yes. Kaplan-Meier, cumulative survival (y) vs usage count (x), five types (Cooper n=35, Metzenbaum 28, Kelly 20, Kocher 58, Pean 28); pairwise log-rank: Kelly vs Kocher p=0.017, Kelly vs Pean p=0.004, Cooper vs Metzenbaum p=0.036, Cooper vs Pean significant, Kelly vs Metzenbaum significant (p not in text), Kocher vs Pean NS p=0.106.
8. No. Age/time since purchase not modelled; Discussion only mentions "period between the start of use and disposal" without values.

## Caveats
Logistic model sample is 136 Cooper scissors all with repair requested (per summariser); how non-failures enter is not clear from what I read. Tables not seen.
