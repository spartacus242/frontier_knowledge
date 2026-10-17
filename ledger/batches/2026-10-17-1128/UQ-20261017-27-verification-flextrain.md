# UQ-20261017-27 verification: FlexTrain (MLSys 2026 oral 3776)

Target: FlexTrain: Scalable Hybrid-Parallel Training with Elastic Resource
Utilization and Consistent Accuracy. Authors: Weilin Cai, Diandian Gu,
Baoquan Zhong, Jun Wang, Zhuolin Zheng, Gaohong Liu, Jiang Kaihua,
Shuguang Wang, Wencong Xiao, Jiayi Huang.

## Routes already failed (per task, by earlier reader)
- mlsys.org/virtual/2026/oral/3776 (abstract page only)
- mlsys.org/media/mlsys-2026/Slides/3776.pdf (slide deck)
- openreview.net (reported blocked)

## Searches (4 of 6)
1. "FlexTrain MLSys 2026 paper parallelism training" -> mlsys virtual pages, slides
2. ""FlexTrain" arxiv elastic parallelism configuration change training throughput" -> no FlexTrain arXiv
3. ""Scalable Hybrid-Parallel Training with Elastic Resource Utilization and Consistent Accuracy" arxiv" -> NO arXiv version; only mlsys pages. (ElasWave 2510.00606 is a different paper.)
4. ""FlexTrain" proceedings.mlsys.org 2026 hybrid-parallel consistent accuracy github" -> no GitHub repo surfaced; arxiv 2310.20457 FlexTrain is a DIFFERENT, unrelated paper (heterogeneous devices).

## Fetches
1. https://proceedings.mlsys.org/paper_files/paper/2026 -> SUCCESS; FlexTrain listed, abstract page hash
   3c40417b8dca30c08cc361df5b33ad7e
2. https://mlsys.org/virtual/2026/poster/3553 -> SUCCESS (abstract/metadata only). Only outbound:
   openreview.net/forum?id=h2yhNcbwSL and proceedings.mlsys.org. No arXiv/GitHub/project site.
   Abstract claims: up to 1.73x speedup with consistent accuracy; up to 2.27x with relaxed consistency.
3. https://proceedings.mlsys.org/paper_files/paper/2026/file/3c40417b8dca30c08cc361df5b33ad7e-Paper-Conference.pdf
   -> SUCCESS. FULL TEXT reached, NOT truncated (eval section, conclusion, references all present).
   NEW ROUTE: the proceedings PDF (earlier reader never tried proceedings.mlsys.org).
4. https://proceedings.mlsys.org/paper_files/paper/2026/hash/3c40417b8dca30c08cc361df5b33ad7e-Abstract-Conference.html
   -> SUCCESS. Confirms PDF URL. NO supplemental, NO arXiv, NO GitHub/code link anywhere.
5. same PDF, exact-string pass 1 -> see below
6. same PDF, exact-string pass 2 (literal "bitwise" check) -> see below

## Exact-string results
FOUND: "accuracy consistency if only adjusting the degree of PP" (S7.1)
FOUND: "the loss curves of baseline and scaling-PP are exactly identical" (S7.1)
FOUND: "bitwise" x3 -> "bitwise-consistent accuracy when scaling PP degree" (Intro);
        Table 1 caption: "FlexTrain achieves bitwise consistent accuracy when scaling PP, but not when scaling DP+PP."
FOUND: "preserve deterministic computation" (Abstract); "non-determinism during elastic training" (Intro)
FOUND: "inherently preserves consistency in model weights and activations" (S2.1, re PP)
FOUND: "the maintenance of an identical accumulation order" (S2.1, why DP breaks)
FOUND: 1.73 (abstract, S7.4: "improves the training speed by 1.55x to 1.73x"); 2.27 (abstract, S7.4);
        2.72 (Intro: "can further accelerate LLM training by up to 2.72x") <-- internal inconsistency
NOT FOUND: "validation"
NOT FOUND: "perplexity"
NOT FOUND: "downstream"
NOT FOUND: "seed"
NOT FOUND: "variance"
FOUND: "convergence" (Intro, "maintaining consistent model convergence")

## Numbers
Fig 6(a), small model, 200 iters/stage: Baseline 6.237207889556885; Scaling-PP 6.237207889556885 (identical);
Scaling-DP 6.267908096313477 (delta ~0.0307).
Fig 6(b),(c) medium/large: RELATIVE loss difference only, axis ~ -0.08..0.08, iterations 0-600, NO numbers in text.
Models (Table 2): MoE+MTP. Small 1B active/7B total, 15 layers, 32 GPUs (elastic 32-128);
Medium 6B/60B, 29 layers, 64 (64-256); Large 30B/600B, 61 layers, 256 (256-1024).
Hardware: production cluster >1000 machines x 8 NVIDIA Hopper GPUs. Simulation: Seren trace, 3 months, 2288 A100.
Baselines: non-elastic scheduling (normalizer), ElasticFlow (PP and DP+PP), FlexTrain w/o Poisson prediction.
Eval headings: 7 EVALUATION; 7.1 Accuracy Consistency; 7.2 Performance Prediction and Improvement;
7.3 System Overhead; 7.4 End-to-End Results in Simulation.

## Conclusion
BODY READ (full text). Decisive Q4: NO final-model metric. Training loss only (<=600 iters), no validation
loss / accuracy / perplexity / downstream benchmark. No seeds, no replicates, no variance, no error bars.
Consistency claim is a BINARY PREDICATE ON THE TYPE OF CHANGE (PP-only = bitwise consistent; DP = not
guaranteed), supported by one loss-curve demo, not a measured equivalence quantity.
