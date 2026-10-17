# UQ-20261017-27 verification notes (Megatron determinism doc; FlexTrain)

## Searches (2 of 8 used)
1. "Megatron-core deterministic reproducible training documentation" -> found docs.nvidia.com/megatron-core/developer-guide/{latest,nightly}/user-guide/deterministic-training.html
2. "FlexTrain: Scalable Hybrid-Parallel Training ... Consistent Accuracy" -> only mlsys.org oral/poster pages and slides PDF; no arXiv or proceedings version found (hits were ElasWave, EasyScale - different papers)

## Fetches (6 of 6 used)
1. https://mlsys.org/virtual/2026/oral/3776 - OK (abstract page; summariser PARAPHRASED abstract; links to slides, OpenReview h2yhNcbwSL, poster 3553)
2. https://docs.nvidia.com/megatron-core/developer-guide/latest/user-guide/deterministic-training.html - OK, summariser output (page text read through a summariser, not raw)
3. https://openreview.net/forum?id=h2yhNcbwSL - FAILED (bot verification page, no content)
4. same docs page, second pass with targeted string checks - OK
5. https://mlsys.org/media/mlsys-2026/Slides/3776.pdf - OK (slides, via summariser)
6. https://openreview.net/pdf?id=h2yhNcbwSL - FAILED (fetch error)
Not tried (cap): arxiv (none found), proceedings.mlsys.org, Megatron-LM GitHub docs, nightly docs page.

## Strings checked on the Megatron docs page (summariser-reported)
- "Deterministic training guarantees that two runs with identical inputs produce identical outputs at every step." FOUND
- "asserts that two runs of the same configuration produce bit-identical outputs and gradients" FOUND (test-suite description)
- "identical inputs" / "same configuration" defined? NOT defined on page.
- "random", "seed", "rank", "data-parallel", "different": NOT PRESENT. "across": present only in "bit-exact across runs on every supported NCCL version" and "inter-node tree topology can vary across runs without a pinned topology file".
- Mechanisms named: NCCL Tree excluded ("intra-node chain reduction order is not user-controllable"), fused CE non-deterministic ("fused CE is non-deterministic"), TP comm overlap ("the overlap path is not bit-exact"), TE nondeterministic algos unless NVTE_ALLOW_NONDETERMINISTIC_ALGO=0. RNG streams not discussed.
- Conditions: --deterministic-mode; env vars validated (NCCL_ALGO subset of Ring, CollnetDirect, CollnetChain, ^NVLS); --cross-entropy-loss-fusion and --tp-comm-overlap must be off; flash attention allowed.
- Test matrix covers "parallelism cells (TP, PP, VPP, EP, FSDP, and composites)" but each cell compared run-vs-run at same config.

## FlexTrain
- Authors: Cai, Gu, Zhong, Wang, Zheng, Liu, Kaihua, Wang, Xiao, Huang. Title as above.
- Abstract (paraphrased by summariser, not verbatim): favours PP changes, "which keeps computation deterministic and accuracy consistent"; adds DP scaling when consistency can be relaxed; 1.73x elastic-job speedup with consistent accuracy, 2.27x relaxed.
- Slides: PP scaling yields "Bitwise identical Loss"; DP scaling shows visible loss divergence; DP+PP reaches 2.27x "under relaxed accuracy constraints"; TP/CP/EP rejected as complex/communication-heavy. Evaluation: three real configs plus simulation on a 3-month trace; metrics JCT/speedup, queue time; loss curves as accuracy signal; no numeric accuracy scores; convergence not addressed.
- Full paper body NOT read (OpenReview blocked, no arXiv). Slides only.

## Conclusion
A2: The doc states no cross-layout guarantee; its guarantee is run-to-run with unspecified "identical inputs"/"same configuration". Silence, not an explicit disclaimer of cross-layout equivalence. Documentation gives no statement that changing layout changes (or preserves) the model.
B: FlexTrain treats consistency as a categorical property of change type (PP yes, DP no), demonstrated qualitatively on loss curves (slides); it is not a measured scalar. Final-model metrics (downstream/validation) not seen in slides; full paper unread, so B3 is not a clean negative.
