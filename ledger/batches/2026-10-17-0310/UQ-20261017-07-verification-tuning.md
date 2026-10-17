# UQ-20261017-07 working notes: per-architecture, per-corpus LR re-tuning

Budget used: 5 searches (4 unused), 5 fetches (pool exhausted). No search was refused.
Note: WebSearch returned only titles/URLs, no text. All quoted text below comes from WebFetch's small-model summariser, so quotes are relayed, not verified verbatim against the PDF.

## Searches (query -> one-line result)
1. Narang 2021 "Do Transformer Modifications Transfer" -> found arXiv 2102.11972 (pdf/abs/ar5iv).
2. optimal LR depends on training dataset / shift across corpora -> surfaced Time Transfer 2410.05838, Step Law 2503.04715, Scaling Optimal LR Across Token Horizons 2409.19913. No paper titled as dataset-to-dataset LR shift.
3. Melis 2018 State of the Art of Evaluation -> found arXiv 1707.05589.
4. "optimal learning rate" different datasets / data mixture / muP -> muP for MoE 2508.09752, Why do LRs transfer 2402.17457, Tensor Programs V, Learning Rates Do Not Transfer Across Double Descent (ICML 2026). None opened.
5. DeepSeek LLM scaling laws batch size LR data quality -> arXiv 2401.02954.

## Fetches (opened)
- https://arxiv.org/pdf/2102.11972 (Narang): opened
- https://arxiv.org/pdf/1707.05589 (Melis): opened
- https://arxiv.org/html/2503.04715v7 (Step Law): opened, data-recipe section 3.5.3 was cut off
- https://arxiv.org/pdf/2401.02954 (DeepSeek LLM): opened
- https://arxiv.org/html/2503.04715v4 (Step Law v4): opened, Sec 5.3 Data-Distribution Robustness
## Not opened (budget): 2410.05838, 2409.19913, 2402.17457, Tensor Programs V, 2508.09752, ICML 2026 double-descent LR paper.

## Exact strings (as relayed by summariser)
Narang: "All hyperparameters are held constant for each architectural variant across pre-training and fine-tuning." / "we intentionally kept hyperparameter fixed in order to measure whether a given modification improves performance regardless of hyperparameter settings." / "Not tuning hyperparameters handicapped other methods." / "Modifications to the Transfomer architecture often do not transfer across implementations and applications." / Universal Transformer case study: 25 configs swept, "only 2 managed to outperform the initial results".
Melis: "use a black-box hyperparameter optimisation technique to control for hyperparameter effects"; "standard LSTM architectures, when properly regularised, outperform more recent models"; PTB and Wikitext-2 tuned separately (Sec 6.2); Enwik8 tuning unclear.
Step Law: LR = 1.79 N^-0.713 D^0.307, BS = 0.58 D^0.571; "strong invariance across dense and sparse (MoE) LLMs"; Sec 5.3: "statistical invariance across linguistic and structural changes in the dataset"; "within 0.25% of the global minimum" (this is loss gap, not LR shift).
DeepSeek LLM: eta_opt = 0.3118 C^-0.1250; "we have not yet considered the impact of factors beyond the compute budget C on the optimal hyperparameters"; data quality changes the model/data allocation exponent (a: OWT2 0.578, in-house 0.524, early 0.450, MassiveText 0.49).

## Conclusion
- Found nothing that gives a number for how much a given architecture's optimal LR shifts when the corpus changes. Not a "could not read": the sources I opened do not report it, and the ones that might were not opened.
- Step Law (one preprint) claims LR is stable across data recipes (English, bilingual, code-heavy) with a single (N,D) law, for dense/MoE transformers. Evidence for small shift, with no per-recipe optimal-LR numbers in the text I saw.
- DeepSeek explicitly leaves non-compute factors unstudied, and shows data quality moves the scaling-allocation exponents (not LR).
- No source I read mandates per-arm, per-corpus retuning as established practice. Practice evidence is mixed: Narang fixed hyperparameters on purpose and itself flags under-tuning as a possible confound; Melis tuned each model per dataset and showed that tuning reverses published rankings.
