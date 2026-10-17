# Verification notes: arXiv:2512.18834 (Mix, MinHash, and Match)

Searches run: 0 (not needed).
Fetches run: 6 of 6, all succeeded. All went through WebFetch's page summariser, not raw text.

## Fetches
1. https://arxiv.org/abs/2512.18834 - OK. Abstract (summariser paraphrase). Current version v2 (29 Jan 2026); first submitted 21 Dec 2025. Title "Mix, MinHash, and Match: Cross-Source Agreement for Multilingual Pretraining Datasets". Arabic, Turkish, Hindi. Datasets: HF collection AdaMLLab/mixminmatch.
2. https://arxiv.org/html/2512.18834v1 - OK. v1 is a different, Arabic-only paper (AraMix). 7 Arabic sources (CulturaX, ArabicWeb24, HPLT 2.0, FineWeb-2, C4, 101B Arabic Words, FinePDFs). 5-char shingles, 14 bands x 8 hashes per bucket, no Jaccard value reported. Table 2: 178,883,241 docs after MinHash; Table 1: 177.8B tokens. Multiplicity table (2 to 7 sources), per-source survival table, Fig 1 pairwise token overlap. "Document fractions" not mentioned in v1. No instruction/preference mention.
3. https://arxiv.org/html/2512.18834v2 - OK (structure and statistics).
4. v2 again, prompt on section 6.1.2 - OK.
5. v2 again, prompt on instruction/preference term search - OK.
6. v2 again, prompt on what the document fractions are computed over - OK.

v2 sections: 1 Intro, 2 Related Work, 3 Cross-Source Overlap, 4 MixMinMatch Algorithm, 5 Web Scraping Redundancies, 6 Evaluation Protocol (6.1.2 Proportional Sampling to a Fixed Token Budget), 7 Results, 8 Conclusion, Appendices A-E (A documents by source, B pairwise overlaps, C eval suite, D domain distribution, E limitations).

## Strings checked (one at a time, via summariser)
- "We then allocate tokens to sources according to their document fractions." FOUND, v2 sec 6.1.2 (summariser quote). Not in v1.
- "For a given subset, we compute the fraction of available documents contributed by each source." FOUND, v2 6.1.2.
- "natural source mixture" FOUND, v2 6.1.2.
- "mixture weight": NOT FOUND. "sampling weight": NOT FOUND.
- instruction, preference, SFT, fine-tuning, RLHF, alignment, DPO, synthetic: all NOT FOUND, including Related Work, Limitations, appendices. v1 separately reported no mention.
Caveat: absences rest on a summariser reporting a whole-document search, not on my own grep of raw text.

## Findings (v2, current version)
Unit: documents and tokens in web pretraining corpora, grouped by source; near-duplicate clusters across sources.
Endpoint: aggregate FineTasks score of small LMs pretrained on a fixed token budget (Table 5 lists 29.36B total training tokens), per language.
Comparator: best single-source baselines, baseline-removed subsets, FineWeb2-HQ (model-based filtering).
Estimand: effect on downstream benchmark score of keeping documents independently recovered by 2 or more sources ("matched") versus single-source and full MinHash pools.

Reported:
(a) Pairwise overlap: PRESENT, partly. Fig 1 (Arabic, image, percentages); numeric pairs in Tables 9-12 (Appendix B), not a full numeric matrix per language in the main text.
(b) Union de-duplicated size: PRESENT. Arabic 177.8B tokens / 178.9M docs; Turkish 167.6B / 219.1M docs; Hindi 76.2B / 59.6M docs (Tables 2, 8).
(c) Multiplicity by number of sources: PRESENT (Table 1, matched subset tokens by overlap degree). Arabic 2-way 28.9B, 3-way 16.4B, 4-way 7.1B, 5-way 1.3B, 6-way 32.4M. Turkish 26.0B / 14.3B / 9.5B / 5.7B (2 to 5). Hindi 10.9B / 8.0B / 5.4B / 1.4B / 0.2B (2 to 6).
(d) Per-source survival after dedup: PRESENT (Table 4). Arabic FinePDFs 98.5%, ArabicWeb24 93.8%, FineWeb-2 56.0%; Turkish FineWeb-2 60.5%, CulturaX 55.4%, C4 52.9%; Hindi FineWeb-2 78.7%, CulturaX 59.9%, C4 51.1%.

Object: web (and PDF) PRETRAINING corpora, not instruction or preference data.
Arabic (7): C4, CulturaX, HPLT 2.0, FinePDFs, FineWeb-2, ArabicWeb24, ClusterLab 101B Arabic Words. Turkish (5): HPLT 2.0, FineWeb-2, CulturaX, C4, VNGRS-Web. Hindi (6 entries): FineWeb-2, CulturaX, Sangraha (verified), Sangraha (unverified), HPLT 2.0, C4.

Declared mixture weight: none found. The "document fractions" in 6.1.2 are derived from document counts within whichever pool is being sampled (MinHash pool, matched pool, ablated pools), described as preserving each pool's "natural source mixture". No author-chosen proportion per source. So the paper does not compare declared weights with realized distinct-content shares. The quoted sentence confirms tokens are allocated "according to their document fractions", but that is in v2 only, and the fractions are realized counts, not declared weights.

Near-duplicate rule: character 5-gram shingles; signature length H=112; LSH B=14 bands x R=8; MinHash-estimated Jaccard threshold tau=0.8; union-find over verified candidate pairs (v2). v1 gave bands/hashes but no Jaccard value.

Instruction/preference data: not discussed anywhere (terms not found, including Related Work).

## Conclusion
Paper executes a cross-source MinHash overlap/de-duplication design (matrix, union size, multiplicity, survival all present) on web pretraining corpora in Arabic, Turkish, Hindi. It is not about instruction/preference datasets and has no declared mixture weights. Version caveat: v1 (Arabic only, no document-fraction sentence, no Jaccard value) differs from v2.
