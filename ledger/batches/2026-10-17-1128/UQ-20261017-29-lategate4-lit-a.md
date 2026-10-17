# Lit survey notes (budget used: 9 searches, 4 fetches)
## Searches (WebSearch returns titles/URLs only, no snippets)
1 near-duplicate overlap across instruction-tuning datasets union size -> generic dedup (Lee et al 2107.06499), data selection 2503.01807, TRIM; nothing on cross-dataset pool.
2 overlap SFT datasets MinHash Tulu OpenHermes... -> surfaced 2604.10480 (known), Tulu 3, 2506.06522 Fixing It in Post, 2604.13515 SFT-GRPO overlap (different meaning).
3 declared vs effective mixture weights dedup -> SlimPajama-DC 2309.10818 (pretraining global/local dedup), Lee et al. Not read.
4 open problem hidden overlap post-training datasets -> 2511.10985 (preference dataset curation), Delta Learning 2507.06187.
5 Tulu 3 SFT overlap effective weights -> DynamixSFT 2508.12116, 2508.11953 data mixing SFT, Fixing It in Post.
6 preference datasets overlap UltraFeedback HelpSteer Skywork -> Tulu 3, HelpSteer2-Pref, 2511.10985.
7 cross-dataset redundancy semantic duplicates Flan Alpaca... -> AraMix 2512.18834 (known), SlimPajama-DC, dolphin README. nothing new.
8 (extended) audit of open post-training datasets overlap matrix -> prompt-dataset survey 2510.09316, awesome lists, Nemotron post-training dataset card, SFT-GRPO. No overlap audit.
9 data mixture optimization assumes disjoint -> pretraining mixing (RegMix-type, BiMix, SampleMix 2503.01506, 2408.14037). Titles only; not read.
## Fetches
F1 arxiv.org/pdf/2506.06522 (Fixing It in Post) OK but TRUNCATED mid App C.1.2; summariser. Negative on visible part.
F2 alphaxiv.org/abs/2511.10985.md OK, truncated mid App A.3; summariser. Quotes: "TuluDPO contains a substantial overlap with UltraFeedback"; "we also perform deduplication"; no counts.
F3 arxiv.org/html/2508.12116v1 (DynamixSFT) OK, full text per summariser. Prior = original dataset sizes; no overlap discussion. Limitation: "instance-level mixture strategies remain an open direction for future work" (granularity, not overlap). Mixture is Tulu-v2 (16 datasets).
F4 arxiv.org/html/2510.09316v1 (prompt dataset survey) OK, first 100000 of 104555 chars. Only TF-IDF cosine between datasets; qualitative embedding overlap of dolly/OASST1/ShareGPT; no counts.
## Conclusions
Q1-Q4: no hit found within budget; Q5: no posing sentence found. Absence is bounded: search + 4 partial reads, not exhaustive.
