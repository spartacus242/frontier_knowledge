# UQ-20261016-47 verification: arXiv:2605.22821
Searches run: 0 (budget 6). Fetches used: 5 of 5.
Fetches:
1. arxiv.org/abs/2605.22821 -> OK. "Tokenisation via Convex Relaxations", Tempus, Whittington, Schmidt, Komm, Pimentel; submitted 2026-05-21 (v1). ConvexTok; LP formulation; improves intrinsic metrics and LM bits-per-byte, downstream less consistently.
2. arxiv.org/html/2605.22821 (offset 0) -> OK, truncated; only Figure 1 (tokenisation graph) visible; section "Stability of Tokenisers to Randomness on the Training Sample" listed in TOC.
3. same, offset 30000 -> no stability section in excerpt.
4. same, offset 80000 -> past end (page text is 69137 chars).
5. arxiv.org/pdf/2605.22821 -> OK. Caption list: Fig 1 graph; Fig 2 rounding schemes Det/Bias/Int; Fig 3 "Average Jaccard similarity between vocabularies when retraining a tokeniser on independently sampled subsets of the same data, for different numbers of documents"; Figs 4-27 intrinsic metrics (FLORES+, train subset, held-out ClimbMix); Figs 33-34 BpB and CORE vs vocab size.
Exact string checked: "Vocabulary Stability Across Training Subsets" -> not found as a caption (HTML excerpt and PDF summary both negative). Closest: Figure 3 in the stability section.
Not determined (budget exhausted): number of tokenisers per point, exact sample sizes, whether vocab overlap compares pairs of independent draws (pairwise average implied).
Q3: yes, LMs trained on tokenisers (BpB, CORE downstream, depths, seeds; Figs 33-34, Appendix I loss curves), but not in the stability figure.
Conclusion: identifier resolves; figure with exact title not found; Fig 3 is a close match (independent same-size draws, Jaccard, varying number of documents) not nested.
