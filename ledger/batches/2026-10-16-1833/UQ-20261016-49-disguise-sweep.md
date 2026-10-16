# UQ-20261016-49 — disguised-vocabulary prior-art sweep

Question: in pretraining with block-scaled sub-8-bit formats (MXFP8, MXFP4, NVFP4), is the
loss penalty vs a matched BF16 control uniform across the data distribution, or does it grow
with rarity (rare tokens, low-frequency entities, low-resource languages), as the shared-exponent
mechanism of a scaling block would predict?

Budget: 12/12 searches used, 5/5 fetches used. No search was refused.

## Search vocabularies spent (12)
1. ML-native title: "MXFP4 NVFP4 pretraining loss degradation rare tokens long tail distribution"
2. Compression-fairness lineage: "quantization disparate impact underrepresented long-tail examples compressed models forget"
3. Multilingual-eval lineage: "quantization multilingual LLM low-resource languages degrade more than high-resource"
4. Signal processing / numeric: "block floating point shared exponent dynamic range ... quantization noise analysis"
5. Knowledge/memorization: "low-precision training degrades memorization of long-tail facts rare entities"
6. Systems-paper internals: "per-token loss breakdown token frequency bucket low precision FP8 training BF16 baseline"
7. Information theory / reliability: "heavy-tailed quantization rate-distortion tail events error concentration underflow"
8. Answer-shaped: "4-bit pretraining rare tokens subpopulation degradation not uniform quantization tail perplexity 2026"
9. Buried-inside-adjacent-paper: "microscaling MXFP8 pretraining ablation per-language per-domain delta vs BF16"
10. Fairness/reliability engineering: "quantization fairness tail risk rare subgroups numerical precision reduction"
11. Mechanism terms: "stochastic rounding / shared exponent underflow gradient rare examples infrequent tokens"
12. Audit framing: "precision induced disparity subpopulation equally degraded pretraining numeric format rare tokens"

## Pages opened (5 fetches, all succeeded)
- https://arxiv.org/abs/2608.08188 — "Quantization Degradation in LLMs: A Signal-Noise Perspective".
  Weight-only PTQ at 2/3/4 bits. Unit = module / layer (error source decomposition and
  cross-layer amplification); endpoint = SNR of perturbed representations, plus downstream task
  accuracy; comparator = full-precision model; estimand = how much quantization noise each
  module injects and how it amplifies. No pretraining. No rarity axis at all (splits by model
  family, scale, task type). Format family not block-scaled.
- https://arxiv.org/abs/2509.25149 + https://arxiv.org/html/2509.25149v1 — "Pretraining LLMs with NVFP4"
  (NVIDIA, 12B hybrid Mamba-Transformer, 10T tokens). This is the closest thing to the right
  experiment: a real matched high-precision control (FP8 baseline; evals themselves run in BF16).
  Unit = benchmark category, not data subpopulation. Endpoints = training loss curve + aggregate
  category accuracies: General, MMLU / MMLU-Pro / AGIEval, Math (GSM8k, MATH), Multilingual
  (Global MMLU, MGSM), Code (HumanEval+, MBPP+), Commonsense (ARC-C, HellaSwag, OpenBookQA,
  PIQA, Winogrande). Estimand = mean accuracy difference per category between the NVFP4 run and
  the higher-precision run. NO breakdown by token frequency, rare tokens, per-language (multilingual
  is aggregate + task-level only), or long-tail knowledge. The only deficit the text discusses:
  "The exception is the coding task, where NVFP4 falls slightly behind", attributed possibly to
  noisy eval (MBPP+ dips on the final checkpoint). So the matched-control comparison exists but is
  never decomposed along a rarity axis, and no rarity mechanism is proposed or tested.
- https://arxiv.org/html/2410.11985v1 — "The Fair Language Model Paradox". Unit = token type binned
  by corpus frequency (bins in powers of 3); endpoints = per-token cross-entropy, per-token accuracy,
  per-token perplexity, per-token learning speed, plus token-balanced loss vs average loss;
  comparator = weight decay sweep lambda 0.0-2.0 (and low- vs high-frequency bins); estimand = effect
  of weight decay on low-frequency-token loss while aggregate loss stays flat. Exactly the measurement
  apparatus the question needs, pointed at the wrong knob: the intervention is regularization, not
  numeric format. Precision appears only as a setup detail ("mixed precision training (fp16) was
  employed"); quantization, FP8/FP4 and block scaling are not discussed.
- https://arxiv.org/abs/2407.03211 — "How Does Quantization Affect Multilingual LLMs?". Unit = language
  (and script class); endpoints = automatic benchmarks, LLM-as-judge, human evaluation; comparator =
  unquantized model; estimand = per-language degradation from quantization. Finding: damage is NOT
  uniform — non-Latin-script languages hit hardest, math reasoning degrades fastest, and automatic
  metrics understate harm (Japanese: -1.7% automatic vs -16.0% human). Post-training quantization of
  an already-trained model, not pretraining; no block-scaled sub-8-bit format.

## Not opened (seen in results, judged adjacent from title/context; unverified)
- "What Do Compressed Deep Neural Networks Forget?" / "Characterising Bias in Compressed Models"
  (arXiv 1911.05248, 2010.03058): pruning/PTQ of vision models; unit = example (PIEs, compression-
  identified exemplars); long-tail/underrepresented attributes disproportionately hit. The conceptual
  ancestor of the question, wrong modality and wrong stage.
- "The Uneven Impact of Post-Training Quantization in Machine Translation" (arXiv 2508.20893): PTQ, MT,
  unit = language pair.
- "What Causes a Disparate Impact in a Quantized Model?" (NeurIPS 2024) and "Understanding the Unfairness
  in Network Quantization" (ICML 2025): mechanism work on quantization disparity, unit = class/subgroup,
  PTQ/QAT on classifiers.
- "Recipes for Pre-training LLMs with MXFP8" (arXiv 2506.08027): the MXFP8 pretraining recipe paper;
  from the search snippet it reports loss curves and aggregate downstream parity, no rarity split
  (not verified by fetch — budget spent).
- "Unveiling the Potential of Quantization with MXFP4: Strategies for Quantization Error Reduction"
  (arXiv 2603.08713): MXFP4 error reduction, inference-side, not a rarity audit (unverified).
- "Stochastic Rounding for LLM Training: Theory and Practice" (arXiv 2502.20566): convergence theory for
  SR; no subpopulation endpoint.
- Non-print: tianpan.co blog, "The Quantization Quality Cliff: When int4 Passes the Median Eval and Fails
  on the Long Tail" (2026-05-10). Blog, int4 serving-side, median-vs-tail eval framing. Shows the
  intuition circulating informally, not a study and not block-scaled pretraining.

## Verdict
Nothing found does what the question asks. The question's three ingredients each exist separately:
(a) matched-control block-scaled sub-8-bit pretraining runs (NVFP4 2509.25149, MXFP8 2506.08027) that
report only aggregate loss and category-level accuracy; (b) rarity-stratified per-token loss machinery
(2410.11985) applied to regularization, not precision; (c) non-uniform-degradation findings by language
or by example (2407.03211, 2508.20893, 1911.05248) all for post-training compression of a finished model.
No source conditions the pretraining-time penalty of a block-scaled format on rarity, and none tests the
shared-exponent mechanism (small-magnitude values co-resident in a block with a large one losing mantissa
after the shared scale) as the explanation for a rarity-graded penalty.
