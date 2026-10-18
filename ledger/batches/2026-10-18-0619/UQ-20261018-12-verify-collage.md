# UQ-20261018-12 verify COLLAGE (arXiv 2405.03637)

READ LEVEL: PDF (arxiv.org/pdf/2405.03637) and arxiv.org/html/2405.03637 (partial), both via a summariser; PMLR landing page; arXiv abs page. No raw PDF text seen. Not Crossref-checked.
BUDGET: 1 search, 8 fetches (ONE OVER the 7-fetch cap; fetch 5 was a wrongly guessed PMLR URL).

## Calls
1. Fetch arxiv.org/abs/2405.03637: OK. Title, 10 authors (Tao Yu, Gaurav Gupta, Karthick Gopalswamy, Amith Mamidala, Hao Zhou, Jeffrey Huynh, Youngsuk Park, Ron Diamant, Anoop Deoras, Luke Huan). No venue/journal-ref listed on abs page (v1, 6 May 2024).
2. Fetch arxiv.org/pdf/2405.03637 (author/Def 3.3/Fig 3): OK. Venue "Proceedings of the 41st ICML, Vienna, Austria, PMLR 235, 2024". Fig 3 left caption quoted.
3. Fetch arxiv.org/pdf (Table 5): OK. Perplexity, train | validation cells.
4. Fetch arxiv.org/pdf (bitwise/groups/LR decay): OK. Not found.
5. Fetch proceedings.mlr.press/v235/yu24a.html: resolved to a DIFFERENT paper (Yu, Cai, Jiang, Zhang, "Efficient Algorithms for Empirical Group DRO"). Wrong guessed URL. Not used.
6. Fetch arxiv.org/html/2405.03637: OK. Def 3.2, Eq 2, Def 3.3, Eq 3, Table 5 caption.
7. WebSearch "COLLAGE Light-Weight Low-Precision Strategy ... v235": found proceedings.mlr.press/v235/yu24d.html.
8. Fetch proceedings.mlr.press/v235/yu24d.html: OK. Same title, 10 authors in same order, ICML 41st, PMLR 235, 2024, pp. 57459-57479.
9. Fetch arxiv.org/html/2405.03637v1: summariser content truncated (no Sec 5.2 body, no Fig 3 caption). Its keyword "not present" results are NOT reliable negatives.

## Findings
Q1 FOUND. Title and 10-author order identical on abs page, PDF summary, PMLR page. ICML 2024, PMLR 235, pp. 57459-57479.
Q2 FOUND. Definition 3.3 Effective Descent Quality. Lead-in "The effective descent quality for a given floating-pint precision is defined as" (typo "pint" in source). EDQ(dθ_t, dθ^_t; θ_t, P) = < dθ_t/||dθ_t||, dθ^_t >. dθ^_t = F^BF16(θ_{t-1} ⊕ dθ_t) − θ_{t-1} (Eq 2). It is an INNER PRODUCT (projection of effective update on intended direction), not a deviation/difference. Source: "In the absence of any imprecision, EDQ will be simply the norm of original update." and "EDQ in eq. (3) is projection of the effective update along the desired update."
Q3 FOUND, essentially verbatim. Fig 3 left caption: "Imprecision percentage (%) measured as the percentage of lost arithmetic for all model parameters, i.e., not updated, vs iterations for BF16." Axes: y imprecision %, x iterations, BF16 only. Right panel: EDQ vs iterations, one curve per precision strategy (caption: "Effective descent quality (EDQ) in (3) vs iterations to measure loss in information at the optimizer step"). Summariser said middle panel exists too (Kahan BF16 comparison per Sec 3.2) - not verified.
Q4 Level: caption says "for all model parameters" = pooled over all model parameters, as a function of iteration (per-iteration curve). No formula given; whether per-step vs cumulative is not stated. Breakdown by parameter group (embeddings, norm gains, magnitude decile): NOT FOUND in PDF read via summariser; html keyword check unreliable.
Q5 FOUND. Table 5 (Sec 5.2): perplexity, caption "Left: Train | Validation perplexity of pre-trained GPT with β2 = 0.95. Right: OpenLLaMA-7B with β2 = 0.95 and 0.99." Options A BF16, B Collage-light, C Collage-plus, D BF16 + FP32 Optim + FP32 MW. Numbers (train / val, as transcribed by summariser):
 125M: A 14.73/15.64; D 13.87/15.03 (B,C 14.01/15.03)
 1.3B: A 10.28/12.43; D 8.50/17.70 (B,C identical to D) -- val 17.70 higher than A's; looks anomalous, possibly a transcription issue, verify against raw PDF before citing.
 2.7B: A 9.97/12.18; D 8.33/11.36
 6.7B: A 9.87/12.18; D 8.17/11.13
 OpenLLaMA-7B β2=0.95: A 6.36/4.81; D 5.99/4.57
 OpenLLaMA-7B β2=0.99: A 15.96/12.55; D 8.58/6.42
 Train|val order for OpenLLaMA columns inferred, caption does not state it. Matched arms: A vs D differ in more than master weights (D also has FP32 optimizer states), so A vs D is not a clean master-weights-only contrast. Metric is perplexity, both train and validation reported.
Q6 Paper reports the "not updated" percentage of lost arithmetic (Def 3.2: result within half ulp of an input so input returned unchanged). That is the closest to a bitwise-unchanged fraction, but defined as a percentage "for all model parameters"; not described as a (parameter, step) bitwise-unchanged fraction vs magnitude lost. Magnitude of lost info is captured separately by EDQ. Both quantities appear (imprecision % and EDQ); no formula for the % was seen.
Q7 NOT FOUND (PDF via summariser read). No link of imprecision to a frozen parameter group or to LR decay late in schedule. Only nearby text: Appendix E.2 cosine annealing, 200 warmup (schedule description); Appendix D weight decay with small lr*lambda (e.g. 1.2e-5) ineffective in BF16 due to lost arithmetic -- not schedule decay.
