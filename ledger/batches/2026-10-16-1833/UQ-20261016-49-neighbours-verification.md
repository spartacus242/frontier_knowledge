# UQ-20261016-49 neighbouring-vocabulary check (6 searches, 5 fetches used)

## Searches
1. Hooker "Characterising Bias in Compressed Models" -> arXiv 2010.03058 found.
2. DP disparate impact -> arXiv 1905.12101 found.
3. Quantization low-resource languages -> arXiv 2407.03211 (Marchisio) found; also titles only (NOT opened): 2608.09941, 2608.11786, 2601.18306.
4. NVFP4/MXFP4 pretraining by token frequency -> only aggregate-recipe papers: 2509.25149, 2602.02047 (outlier dynamics, not opened).
5. FP4/FP8 long-tail/rare entity/low-resource loss vs BF16 -> DeepSeek-V3, InfiR2, FP4 LLM training (2501.17116): all aggregate; none opened.
6. Microscaling FP4 per-language / rare-token -> 2509.23202 (MXFP4/NVFP4 post-training quantization, not pretraining); not opened.
No search refused.

## Fetches (all opened OK)
- arxiv.org/abs/2010.03058v1 ; arxiv.org/pdf/2010.03058 ; arxiv.org/pdf/1905.12101 ; arxiv.org/pdf/2407.03211 ; arxiv.org/pdf/2509.25149
Not opened: 2602.02047, 2509.23202, 2501.17116, 2608.*, 2601.18306. No dedicated magnitude-pruning-only paper opened (Tran et al. "Pruning has a disparate impact" not surfaced by search); pruning is covered via Hooker 2010.03058 only.

## Exact strings checked (summariser-returned quotes)
- 2010.03058: "Pruning disproportionately impacts performance on underrepresented features"; "Compression cannibalizes performance on low-frequency attributes in order to preserve overall performance."; "all of the quantization methods we evaluate are implemented post-training"
- 1905.12101: "accuracy of DP models drops much more for the underrepresented classes and subgroups."
- 2407.03211: "non-Latin script languages impacted worst;"; "Degradation on automatic metrics appears negatively correlated with training data set size"
- 2509.25149: "Despite the small gap in loss, downstream task accuracies remain largely unaffected." Summariser: no breakdown by token frequency/language/entity; Table 2 has "Multilingual" category aggregate (FP8 77.93, NVFP4 80.24) plus Global MMLU, MGSM; main 12B comparison is against FP8 not BF16.
(Quotes are from a page summariser, not verified verbatim against PDF.)

## Per-neighbour summary
- Pruning+PTQ (Hooker 2020): unit = CelebA image / subgroup (Male, Young); endpoint = subgroup error, FPR, FNR, CIE membership; comparator = uncompressed models (30 per level); estimand = change in subgroup error vs baseline (implicit). Pruning applied during training; quantization post-training int8. ResNet-18 binary task, not LLM, not block-scaled.
- DP-SGD (Bagdasaryan 2019): unit = class/subgroup; endpoint = test accuracy per subgroup; comparator = non-DP model, well-represented groups; estimand = difference-in-drops (synthesis, not stated). Private TRAINING.
- Quantization of LLMs (Marchisio 2024): unit = language x task; endpoint = mMMLU, MGSM, FLORES, judges, human preference; comparator = FP16; estimand = relative % change from FP16. PTQ of trained models; no QAT.

## Conclusion
Yes, answered in neighbours (disparate effects of compression on rare groups, in vision pruning/PTQ, DP-SGD, LLM PTQ by language). Not answered for block-scaled sub-8-bit PRETRAINING: the NVFP4 pretraining paper reports aggregate loss and benchmarks only; within 6 searches I found no per-token-frequency / per-language / entity-rarity breakout for MXFP8/MXFP4/NVFP4 pretraining. This is absence within a bounded search, not proof of absence.
