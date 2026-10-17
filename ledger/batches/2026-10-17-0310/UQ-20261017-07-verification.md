# UQ-20261017-07 verification notes
## Queries (1 of 7)
1. WebSearch "DataDecide: How to Predict Best Pretraining Data with Small Experiments arXiv" -> arXiv id 2504.11393 (ICML 2025, Magnusson et al.)
## URLs opened (5 of 6 fetches)
- https://arxiv.org/abs/2609.11917 : OPENED. Title "Data Scarcity and Model Sparsity: Mixtures-of-Experts Overfit More to Repeated Data" (Jha, Li, Leskovec, Liang, Zettlemoyer; submitted 2026-09-10, v2 2026-10-07)
- https://arxiv.org/abs/2504.11393v1 : OPENED. abstract: 25 corpora "differ in sources, deduplication, and filtering"; up to 1B; 3 seeds
- https://arxiv.org/html/2504.11393v1 : OPENED. Table 1 25 recipes; 14 scales 4M-1B; 25x14x3=1,050 (summariser's arithmetic)
- https://arxiv.org/html/2609.11917v1 : OPENED. design, crossing, R=32 reversal
- https://arxiv.org/pdf/2504.11393 : OPENED. exact strings; word "teacher" absent
- https://arxiv.org/pdf/2609.11917 : OPENED. exact R=32 sentence; Table 3 (80M only)
Not opened: none failed.
## Exact strings checked
- "over 14 different model sizes ranging from 4M parameters up to 1B parameters (more than 30K model checkpoints in total)."
- "All 1B (target size) models have 3 full reruns with different seeds" (Sec 2.1)  [html reading: extra seeds at smaller sizes stop at 25% of compute]
- "We conduct controlled pretraining experiments across 25 corpora"
- Table 1: "top 7% of DCLM classified documents", "top 3% or 10% with FineWeb-edu classifier", "top 10% or 20% with reproduced DCLM classifier", Falcon+CC "top 10% or 20% documents with reproduced or original"
- "teacher" does not appear in DataDecide.
- MoE paper: "the catastrophic effect of data repetition leads to a reversal at R=32, where dense models outperform MoEs."; "MoEs outperform dense models at R<=16"
## Conclusions
Claim 1 REFUTED: 25 recipes (not several teacher-derived), differing in sources, dedup, heuristics, mixtures and classifiers; keep rates NOT matched (3,7,10,20%); 14 scales holds; 3 seeds holds only fully at 1B.
Claim 2 CONFIRMED with qualification: architecture x repetition rate is a crossed grid; reversal at R=32 (dense wins) vs MoE wins R<=16; regularisation reverses again.
Caveat: summariser-mediated reads; Table 1 details and Table 3 numbers not independently verified from raw text.
