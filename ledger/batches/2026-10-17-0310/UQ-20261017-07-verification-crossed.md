# UQ-20261017-07 prior-art: data selection x matched-compute architecture
Searches: 9 run, 0 refused. Fetches: 5 of 5 used, all opened.

## Queries (one-line result each)
1. "pretraining data quality filter interacts with architecture choice matched compute: ranking of architectures changes across data mixtures" -> QuaDMix, Goyal 2404.07177, 2605.19407 (Data Filtering Limits), ICML "Removing Noise" poster; no filter x architecture study.
2. "architecture comparisons rank reversal across pretraining datasets Transformer vs Mamba vs MoE same FLOPs different data curation" -> 2502.12120 (LLMs on the Line), Mamba/MoE-Mamba papers; no curation x architecture crossing.
3. "data filtering classifier choice architecture interaction ... data selection model architecture ablation" -> 2410.08102 (multi-actor data selection), MATES, Data Selection survey; single-architecture selection papers.
4. "does the best architecture depend on the pretraining data? ... hybrid linear attention MoE FineWeb-Edu DCLM" -> 2607.07953, 2507.06457 (hybrid linear attention), small-LM architecture blog; architecture-only, not opened.
5. "architecture data two-way ANOVA variance decomposition ... interaction term" -> irrelevant (agent eval, bilingual, "Plant Trees" data+architecture effects on syntactic bias at small scale); not opened.
6. "architecture ablations conclusions do not transfer across pretraining corpora ..." -> Canon layers 2512.17351, NASTransfer (vision NAS); not opened.
7. "quality classifier filtered pretraining data benefits depend on model architecture ..." -> 2605.19407 again, 2510.00866 (Data-Quality Illusion); no architecture axis seen.
8. "Removing Noise, not Finding Gold" -> arXiv 2510.00866 located.
9. "architecture-by-data interaction scaling laws ... FineWeb-Edu, DCLM, Nemotron-CC equal FLOPs" -> 2502.12120 again; nothing new.

## URLs opened (5)
- https://www.emergentmind.com/papers/2605.19407 : only one-line summary (unfiltered beats aggressive filtering at high compute).
- https://arxiv.org/abs/2502.12120 : abstract only.
- https://arxiv.org/abs/2605.19407 : abstract only; filter x compute (and size); architecture not mentioned.
- https://arxiv.org/abs/2510.00866 : abstract only; classifier-based quality filtering vs training on the high-quality set; no architecture axis stated.
- https://arxiv.org/html/2502.12120v2 : full-text summary; see below.
Not opened (search snippet only): 2507.06457, 2607.07953, 2504.16511, 2410.08102, 2512.17351, 2510.24963, Plant Trees.

## Exact strings (as returned by summariser; short)
- 2605.19407 (via emergentmind): "with high compute and model scale, unfiltered data can outperform aggressively filtered data"; abs: "with enough compute, the best data filter is no data filter" (summariser quote).
- 2510.00866 abs: "it does not necessarily enhance language modeling on the high-quality set".
- 2502.12120: data determines loss-to-loss trend; other factors "limited impact".

## Closest hit: 2502.12120 (Wiedemer et al., LLMs on the Line)
- Factors: pretraining data (FineWeb-Edu, C4, Pile UC), tokenizer, architecture (Llama-3 417M vs Mamba 420M, Lingua), plus HF checkpoints. Intervened one at a time, NOT a full factorial. FLOPs NOT stated as matched; compute varies by checkpoint/size/seed.
- Unit: training run / checkpoint (200-800 per config). Endpoint: downstream loss as function of pretraining-dataset loss (loss-to-loss curve). Comparator: Llama vs Mamba within a dataset+tokenizer; datasets compared within architecture. Estimand: shift/slope of loss-to-loss power law.
- Data axis is corpus identity (source), not a selection rule/quality filter. No interaction variance component; no sign-flip count (summariser: "does not report a dataset x architecture interaction analysis").
- Caveat: summary is from one summariser pass of the HTML; interaction claim absence is "not reported in what was read", not exhaustively verified.

## Conclusion
No study found crossing a data-selection factor with a matched-compute architecture factor. No interaction variance component or architecture-axis sign-flip count found anywhere. Near-misses: 2502.12120 (data source x architecture, unmatched FLOPs, no interaction stat), 2605.19407 and 2404.07177 (filter x compute, architecture fixed). Limit: 9 searches, abstracts only for most; "found nothing" is a bounded negative, not "does not exist". Full text of 2605.19407 and 2510.00866 was not read, so an architecture axis inside them is not excluded (abstracts do not mention one).
