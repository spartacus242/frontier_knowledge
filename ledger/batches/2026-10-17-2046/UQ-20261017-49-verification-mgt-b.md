# UQ-20261017-49 verification (mgt-b) working notes

Read level: FULL TEXT via arxiv.org/html/2609.40295, read through a summariser (not verbatim page; quotes are short fragments, none stitched). /abs/ read for metadata (abstract only paraphrased by summariser). PDF route refused (HTTP 429).

## Calls
- WebFetch "arxiv.org/abs/2609.40295" without scheme: rejected as invalid URL (no request made).
- Search 1 (subject-only query, machine-generated text / pretraining quality filters 2026): hit 2609.40295 aggregators (emergentmind, papers.cool, deeplearn, chatpaper, aiweekly), plus unrelated AboutMe (2401.06408), FinerWeb-10BT.
- Fetch 1 abs page: OK. Title "How Much Is an AI Token Worth? Scaling Laws for Wild AI-Generated Web Text", Russell, Glickenhaus, Thai, Wieting, Iyyer, Spero, Emi; v1 30 Sep 2026.
- Search 2 (concentration/stringency query): same paper again; also Apple "Data-Quality Illusion" arXiv 2510.00866 (2025, not 2026).
- Fetch 2 pdf: HTTP 429 proxy rejection; not retried.
- Fetch 3 html (whole paper): pass rates, AI share, term check.
- Fetch 4 html (audit section): section 2 details, labeling, units.
- Search 3 (title + Pangram FineWeb DCLM): only aggregator pages, no new primary info.
Total: 3 searches, 4 fetches attempted (1 failed 429), plus 1 invalid-URL rejection.

## Findings
1. Most on-point paper: arXiv:2609.40295, as above. (Found by subject search; it is the same item as the cited id.) No 2026 paper found that is closer.
2. Same paper; identifier resolves to it. No discrepancy. Note: the ID is a September 2026 number, 30 Sep 2026.
3. Yes. Section 2 "AI-generated data is more likely to survive quality filters." Audit on "a subset of 10,000 raw Common Crawl documents".
   FineWeb pipeline: AI 29.3% vs human 12.8% (2.3x). DCLM full pipeline: AI 14.5% vs human 1.5% (9.8x).
   Unit: share of documents (Fig 2 caption: share of AI- and human-labeled documents left after each FineWeb stage). Denominators: only the 10,000-doc raw sample stated; number of AI vs human docs per class NOT given in text read (per-stage counts maybe only in Fig 2, not seen). Labeler for the audit not stated in that section.
   Quote: "These filters are insufficient at filtering out AI-generated text, and in fact heavily prefer it."
4. Post-filter only: 27.5% of June 2026 tokens that pass FineWeb quality filters are AI-generated (percent of tokens); 31.1% Aug 2026; also 10.1% Jun 2024, 16.1% Jun 2025, <=0.1% Jun 2021. Fig 1 caption rounds to 10/16/28/31. NO pre-filter (raw) AI share of tokens reported, so no before/after pair. Note the pass-rate audit is in documents, the share is in tokens: different units, not combinable.
5. Half answered, half open. Concentration: yes for two fixed pipelines (FineWeb, DCLM), by document pass rate, above. Growth with stringency: not tested; no threshold/stringency sweep (the r sweep, 0 to 64, is AI:human training-token ratio, a different variable). Only suggestive: DCLM (more selective) shows larger ratio than FineWeb, but those are different pipelines, not a stringency dial; the paper does not draw that conclusion as far as read.
6. "Rogan-Gladen", "sensitivity", "specificity", "prevalence correction": none present. Related: Pangram 3.3.2 "has a reported false-positive rate of 0.05% and false-negative rate of 1.99%" (citing Glickenhaus et al. 2026); footnote 4 gives 0.062% of 60,000 pre-2022 docs labeled AI as an upper bound on FPR. No classifier-error correction of the pass rates or shares mentioned.

Caveats: summariser-mediated; abstract and numbers consistent across abs and html reads. Could not open PDF.
