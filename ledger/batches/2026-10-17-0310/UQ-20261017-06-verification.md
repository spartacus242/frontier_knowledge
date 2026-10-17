# UQ-20261017-06 verification: arXiv:2604.14419 (Ternovtsii & Bilak) "Equifinality in Mixture of Experts"
Searches run: 0 of 7. Fetches used: 6 of 6.
Fetches:
1. arxiv.org/abs/2604.14419 -> opened; title, abstract; no cross-seed sentence in abstract; says only PDF listed.
2. arxiv.org/html/2604.14419v1 -> opened but truncated (ends in Sec 4.3 Table 3); architecture/config/seeds obtained.
3. same, offset 30000 -> still truncated excerpt; nothing on cross-seed.
4. arxiv.org/pdf/2604.14419 -> opened; Sec 4.4 and Sec 5 summarised (two seeds 42,137; weight cosine 0.107; Jaccard 0.15/0.13; ~500x; converged only).
5. PDF second pass -> Sec 5 setup sentence: "Jaccard similarity of top-20 projected vocabulary words (best-match across 1024 experts)"; baseline "~0.0003". No definition of projection, no formula, no matching algorithm.
6. html offset 60000 -> excerpt does not reach Sec 5.
Strings checked (via summariser, not verbatim page reads by me):
- "Cross-seed analysis reveals 500x-above-random functional overlap through entirely different weight parameterizations" (reported present in intro)
- "Expert weights show no cross-seed alignment: best-match cosine similarity averages 0.107 for both architectures."
- "vocabulary projections show moderate functional alignment: best-match Jaccard averages 0.15 (Wide) and 0.13 (Deep)."
- "Jaccard similarity of top-20 projected vocabulary words (best-match across 1024 experts)"
- "far above the random baseline of ~0.0003"
- Sec 4.4: "Wide 1x12 ... is the worst downstream performer on HellaSwag and ARC-Easy"
Not found: Hungarian/assignment/permutation matching; any definition of how a vocabulary projection is formed; any early-checkpoint cross-seed measure; any link of cross-seed agreement to loss/downstream.
Own arithmetic: 0.15/0.0003=500; 0.13/0.0003~433. Note 0.0003 ~ 20*20/32000/40 = expected Jaccard for two random top-20 sets from a 32K vocab for ONE pair; a best-of-1024 match would give a higher null. Unverified whether the paper's baseline accounts for max-over-1024.
Conclusion: PARTIALLY CONFIRMED. Sentence and ~500x confirmed; it is a Jaccard of top-20 projected-vocabulary word sets between best-matched experts, not a token-routing overlap; matching appears to be per-expert best-match (not shown to be one-to-one); converged checkpoints only; no relation to loss. All numbers come from a page summariser, Section 5 text not read directly.
