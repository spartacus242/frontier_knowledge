# arXiv:2006.15429 verification notes
Read level: PDF (arxiv.org/pdf/2006.15429, via summariser, two passes) + abs page. Venue from search result titles/URLs only.
Calls: 1 search, 3 successful fetches (1 malformed-URL fetch rejected, no network call).
- fetch abs: OK. Title/authors/date/abstract.
- fetch pdf (pass 1): OK. Theory, experiments, DP setting, thresholds.
- search venue: NeurIPS 2020 virtual poster + proceedings.neurips.cc 9ecff5455677b38d19f49ce658ef0608 entries returned (titles only, not opened).
- fetch pdf (pass 2): OK. Clip fraction absent; no venue on first page.
Findings
1. Understanding Gradient Clipping in Private SGD: A Geometric Perspective. Xiangyi Chen, Zhiwei Steven Wu, Mingyi Hong. Submitted 2020-06-27 (v2 2021-03-18). Venue NeurIPS 2020 (search results only; not on arXiv page or PDF first page).
2. Private SGD (DP); clipping is central.
3. Both theory and toy/small experiments. Theory: clipping can prevent convergence to stationary point; bias bounded via Wasserstein distance to symmetric distribution (Thm 5); symmetric noise keeps clipped gradient positively aligned (Thm 2); skewed/multimodal cases (Sec 2.2). Empirical: cosine-similarity histograms (Fig 3) used to argue approximate symmetry. Plus pre-clipping perturbation fix.
4. NOT FOUND. Fraction clipped never reported (read full PDF text via summariser). Only passing mention of Zhang et al. 2019 "fraction of examples with gradient norms exceeding c"; Appendix G qualitative (norms concentrated near 0, heavy tail).
5. NOT FOUND as clipped vs unclipped update comparison. Cosine histograms and Appendix H inner-product tables (E<grad f, g_t>) only; toy-problem distance-to-optimum in Sec 5.
6. Differentially private, per-example clipping, Gaussian noise. c=1, noise multiplier 1.1, MNIST/CIFAR-10 small CNNs.
7. NOT FOUND. Single global c=1; no model-size or per-group discussion; adaptive clipping only cited (Thakkar et al. 2019).
