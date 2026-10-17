# UQ-20261017-07 working notes: overlap of two quality-classifier kept sets
Budget used: 9 searches (0 refused), 5 fetches (0 refused). Pool exhausted; not every candidate could be opened.

## Searches (one-line result)
1. FineWeb-Edu vs DCLM overlap Jaccard same keep fraction -> surfaced Nemotron-CC, SmolLM2, CCI3.0-HQ, PDS, HF model cards.
2. quality classifiers agree top docs overlap -> OLMo2, Data Data Everywhere, Nemotron-CC, Gaperon, 2510.00866 (data-quality illusion), 2512.24265.
3. Gaperon classifier agreement -> irrelevant mostly; Gaperon 2510.25771, Essential-Web 2506.14111 listed (not opened).
4. Zyda-2 overlap -> Zyda-2 2411.06068, Nemotron-CC, GneissWeb, ACL 2026 short.10 (not opened beyond landing page).
5. Cohen's kappa LLM judge doc quality -> Essential-Web, JQL 2505.22232, others (not opened).
6. top 10% two scorers Jaccard -> QuRating 2402.09739 etc. (not opened).
7. Essential-Web annotator agreement kappa -> Essential-Web, FinerWeb-10BT (not opened).
8. Jaccard selected subsets same ratio -> Edu-QuRating, SPICE, PDS, Joint Selection (not opened except 2512.24265).
9. Spearman FineWeb-Edu vs DCLM score -> Nemotron-CC again, PDS, HF fasttext cards, Marin W&B report (not opened). Nothing new.

## Fetches
1. https://arxiv.org/pdf/2412.02595 (Nemotron-CC) OPENED (via summariser). Table 8 / Sec 3.3 overlap; Table 9 keep rates.
2. https://arxiv.org/html/2510.00866v1 (data-quality illusion) OPENED. No cross-filter overlap number.
3. https://aclanthology.org/2026.acl-short.10/ OPENED landing page only (abstract). No overlap; full PDF not read.
4. https://arxiv.org/pdf/2411.06068 (Zyda-2) OPENED. No overlap statistic; only cross-dedup.
5. https://arxiv.org/pdf/2512.24265 (FineWeb-Mask) OPENED. No overlap statistic.

## Strings checked (all via summariser, so paraphrase risk; the 125-char quote cap applied)
- "only 10% of the documents are predicted as high quality by both classifiers" (Nemotron-CC, as returned)
- "ensembling different classifiers can increase the recall of high-quality documents from Common Crawl"
- "only 368 domains are in the intersection" (Appx B, top-1k domains each)
- Not re-verified on a second fetch (fetch pool exhausted).

## Numbers
Nemotron-CC Table 8 (CC-MAIN-2021-21 snapshot, union of docs flagged high quality by either classifier = 11,359,655):
 both 1,152,821 (10.1%); FineWeb-Edu only 4,022,294 (35.4%); DCLM only 6,184,540 (54.4%).
 Derived by me/summariser (not stated in paper): Jaccard ~0.101; share of FineWeb-Edu set also in DCLM set 1,152,821/5,175,115 ~22.3%;
 share of DCLM set also in FineWeb-Edu = 1,152,821/7,337,361 ~15.7% (my arithmetic).
 Table 9 keep rates: FineWeb-Edu 8%, DCLM 11% (so NOT matched; max Jaccard bound = 8/11 ~0.73 if nested, max intersection share of the smaller set = 100%).
 Note: 5,175,115/11,359,655... keep rates imply ~8% of ~ 65M docs; inconsistent-looking denominators not checked.

## Conclusion
- Unmatched keep rate: one published figure found (Nemotron-CC), Jaccard ~10%, 22% of FineWeb-Edu set.
- Matched keep rate: nothing found in what I could open. Not found != proven absent: Essential-Web, QuRating, GneissWeb, JQL, SmolLM2, PDS, OLMo 2, Gaperon, DCLM, TxT360 were not opened.
- Annotator/judge kappa: search hits only; no values read.
