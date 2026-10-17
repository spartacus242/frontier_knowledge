# UQ-20261017-29 lategate4 lit b notes (2026-10-17)

## Queries (9/9 used). Search returns titles+URLs only, no text.
1. dedup changes optimal mixture weights -> SoftDedup 2407.06654, BaichuanSEED, 2511.06913; nothing directly on point
2. overlap between SFT datasets Tulu/OpenHermes/UltraChat -> Tulu3 2411.15124, "Fixing It in Post" 2506.06522 (not opened); no overlap study seen
3. duplicates across sources distort mixture proportions -> SlimPajama-DC 2309.10818, Mix MinHash Match 2512.18834
4. dedup little effect / instruction tuning dups -> Lee et al 2107.06499, SoftDedup; nothing on post-training dups
5. Tulu3 SFT mixture card -> HF README (fetched)
6. SmolTalk card/SmolLM3 -> Fixing It in Post, SmolLM2 2502.02737 (not opened)
7. mixture optimisation vs cross-domain duplicates -> SampleMix 2503.01506, DoReMi, 2606.08167 (not opened)
8. smoltalk README (huggingface.co only) -> README URL (fetched)
9. practitioners merge/dedup open SFT sets -> NebulaExp-8B 2606.26671, CuratorKIT 2606.21631, OpenDataArena 2512.14051 (none opened)

## Fetches (4/4). ALL were passed through the WebFetch summariser; I read no raw full text.
F1 HF tulu-3-sft-mixture README: ok. Summariser: 18 sources w/ exact counts, no percentages, no dedup/overlap statement. "It contains 939,344 samples from the following sets." Metadata num_examples 939343. My arithmetic on the 18 reported counts = 889,344 (50,000 short; unexplained).
F2 arxiv.org/html/2309.10818 (SlimPajama-DC): ok. Summariser table: RedPajama->SlimPajama CommonCrawl share 72.6% -> 52.2%, C4 14.4->26.7, etc; confounded with length filtering (1.86% docs). Quote found: "global deduplication removes duplication within and between each data source." and "merging all domains typically yields better results than selective combinations." Paper does not isolate dedup effect on which mixture is best.
F3 arxiv.org/html/2512.18834v2 (Mix, MinHash, Match; Alrashed & Orabona, KAUST): ok. Summariser: pretraining, AR/TR/HI; Fig1 + Tables 9-12 pairwise overlap (Arabic table lists 10 of 21 pairs); Table 1 overlap-degree distribution (2-way..6-way); Table 2 union/dedup sizes; NO declared-vs-effective weight comparison; "we allocate tokens to sources according to their document fractions".
F4 HF HuggingFaceTB/smoltalk README: ok. Summariser: counts in prose for 9 of 13 components (sum ~876K vs "1M samples"); "using tuned ratios" with ratios not given; no dedup statement; Smol-constraints decontaminated vs IFEval.

## Exact strings
- "global deduplication removes duplication within and between each data source": found (summariser quote, F2)
- "merging all domains typically yields better results...": found (summariser quote, F2)
- "It contains 939,344 samples from the following sets.": found (summariser, F1)
- "using tuned ratios": found (summariser, F4)
- any "dedup" statement in Tulu3 card / SmolTalk card: not present in the card text as the summariser reported it; I could not verify the summariser had the entire page.

## Conclusions: see structured output.
