# arXiv:2206.07136 verification notes
Read level: PDF (via summariser; quotes truncated/paraphrased by summariser, not read raw). Abstract page also read.
Calls: fetches 3 (arxiv abs OK; arxiv pdf OK; arxiv pdf v3 OK second pass), searches 1 (venue; found NeurIPS 2023 proceedings listing; that page not opened).
## Findings
1. Title: Automatic Clipping: Differentially Private Deep Learning Made Easier and Stronger. Authors Zhiqi Bu, Yu-Xiang Wang, Sheng Zha, George Karypis. arXiv submitted 2022-06-14, v3 2023-10-04. arXiv page gives no venue; search results list NeurIPS 2023 proceedings (not opened, search-snippet level).
2. Subject: replace per-sample DP clipping with normalization g_i/(||g_i||+gamma), gamma=0.01, removing threshold R. 
3. FOUND, Sec 3.1: "we find in the GPT2 generation experiments in [41] that 100% of per-sample gradients are clipped at all iterations"; classification QQP/QNLI/MNLI "about 20~60% on average"; details in Appendix H.1 (not opened). Unit: per-sample gradients, not optimizer steps. [41]=Li et al ICLR 2021, so results cited from other work.
4. Not quantified directly. Indirect: Fig 2 dot-product similarity clipped vs regular gradient; Fig 5 per-sample norms pre/post clipping.
5. Partial. Any constant R equivalent to R=1 (Sec 4); Thm 1 (SGD: lr*R coupling), Thm 2 (adaptive: R cancels); App B.3 per-layer equivalence only if thresholds scale proportionally, Fact B.1 counterexample. No cross-model-scale equivalence result.
6. Private (DP).
