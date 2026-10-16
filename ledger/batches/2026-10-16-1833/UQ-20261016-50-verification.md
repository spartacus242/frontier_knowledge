# UQ-20261016-50 verification: Nemotron-CC (arXiv:2412.02595)

Searches run: 0 (none needed). Fetches: 4 of 5 (all succeeded).

## URLs
- https://arxiv.org/abs/2412.02595 : opened. Title/authors/abstract; abstract names "classifier ensembling".
- https://arxiv.org/html/2412.02595 : opened 3 times with different prompts (Table 8; thresholds/kappa/reason; keyword scan).
- Not tried: PMC/Europe PMC (blocked), arXiv listings.

## Table 8
Caption: "Table 8: High-quality documents overlap analysis."
Columns: What | #Docs | Total unique (%)
- Total unique in union: 11,359,655 (100.0%)
- In intersection: 1,152,821 (10.1%)
- In FineWeb-Edu only: 4,022,294 (35.4%)
- In DCLM only: 6,184,540 (54.4%)
Arithmetic (mine): 1,152,821 + 4,022,294 + 6,184,540 = 11,359,655 exactly. Percentages sum to 99.9% (rounding).
Sample: one snapshot, CC-MAIN-2021-21 (Sec 3.3).
Text: "only 10% of the documents are predicted as high quality by both classifiers".
Appendix B: "Among the top 1k domains, only 368 domains are in the intersection." (Table 11 caption also says 368.)

## Strings checked (summariser, one at a time)
- "predicted as high quality by both classifiers" : present
- "ensembling different classifiers can increase the recall of high-quality documents from Common Crawl" : present
- "Ensembling different model-based classifiers can help select a larger and more diverse set of high quality tokens." : present (contribution 3a)
- "limited recall (around 10%) of high-quality tokens" : present (Sec 2.2)
- "kappa", "agreement", "disagree", "Cohen", "variance" : reported absent. Caveat: absence is from a page summariser, not full-text grep.

## Findings
Q1: Yes on both numbers (10.1%; 368 of top-1k domains).
Q2: Base = union of the two keep-sets (11,359,655 = 100%). Cells sum to the total exactly. Not the whole sample; the sample size is not given in Table 8.
Q3: Keep rates: paper gives no threshold for DCLM and none stated for Table 8; only Table 7 caption defines FineWeb-Edu HQ as score 3,4,5. So nothing says rates were matched; apparently native/own cutoffs but not explicit. Keep sizes differ (5.18M vs 7.34M), so rates are unmatched in fact. No kappa/chance-corrected stat, no document-vs-filter variance decomposition reported. Only F1 for checkpoint selection.
Q4: Stated reason is recall/diversity, not disagreement per se. Low overlap is cited as evidence the classifiers pick different documents, which is used to motivate ensembling; the word "disagree" is not used.
