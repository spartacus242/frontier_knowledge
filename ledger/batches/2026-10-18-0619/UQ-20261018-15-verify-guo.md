# Verify: Guo, Pleiss, Sun, Weinberger, On Calibration of Modern Neural Networks (arXiv:1706.04599)

Read level: PDF (arxiv.org/pdf/1706.04599, read through the WebFetch summariser, not raw text) plus the arXiv abs page. Not read as raw text locally.

## Log
Searches: 0.
Fetches (6 of 7):
1. WebFetch arxiv.org/pdf/1706.04599, title/author/venue/Sec 4.2: OK.
2. WebFetch same, sentence with "does not change the maximum": OK.
3. WebFetch same, accuracy sentence, ranking/ordinal, sampling/decoding, vector/matrix scaling: OK.
4. curl https://arxiv.org/pdf/1706.04599 (raw PDF for pdftotext): FAILED, "curl: (56) CONNECT tunnel failed, response 403".
5. WebFetch same PDF, Sec 4.2 paragraph in short chunks: OK.
6. WebFetch arxiv.org/abs/1706.04599: OK.

## Findings
Q1. Title "On Calibration of Modern Neural Networks". First page author line: "Chuan Guo * 1 Geoff Pleiss * 1 Yu Sun * 1 Kilian Q. Weinberger 1" (Weinberger last). abs page ordered list agrees (Guo, Pleiss, Sun, Weinberger). Footer: Proceedings of the 34th ICML, Sydney, Australia, PMLR 70, 2017. abs comments: "ICML 2017". v1 14 Jun 2017, v2 3 Aug 2017.

Q2. Checked separately.
- "Because the parameter T does not change the maximum of the softmax function": PRESENT, VERBATIM in Sec 4.2 (two separate fetches). Full sentence as returned: "Because the parameter T does not change the maximum of the softmax function, the class prediction ŷ′ᵢ remains unchanged." (summariser noted the prime was garbled in extraction.)
- "temperature scaling does not affect the model's accuracy": PRESENT, VERBATIM. Full sentence: "In other words, temperature scaling does not affect the model's accuracy." Follows the "maximum of the softmax" sentence in Sec 4.2. (Apostrophe form in the PDF is the typographic one.)
Caveat: both are summariser renderings, but each was returned as a short string under ~125 chars, so truncation is not a concern; I did not stitch them.

Q3. Regime. The paper's whole invariance is the two sentences above: T>0 scalar does not change the max of the softmax, hence the single-input class prediction (argmax_k of z_i) is unchanged, hence accuracy. The paper is about K-class classification with one logit vector per input (Sec 4.2 begins "For classification problems involving K > 2 classes"). Nothing else was found.
(a) argmax over a single token's logits: COVERED. This is exactly the statement (class prediction ŷ′ remains unchanged). Settled by the paper's own sentence.
(b) greedy decoding of a multi-token completion: NOT stated by the paper (silent). The paper never mentions decoding, sequences or generation. It follows by extension only if the same single scalar T applies to every step's logits (per-step argmax unchanged, so the greedy path is unchanged). That is my inference, not the paper's statement. Fetches: no mention of language models in connection with temperature scaling; LMs appear only in the intro (speech recognition context); NLP experiments (DANs, TreeLSTMs) are classification.
(c) summed or length-normalised log-probs over multi-token options: NOT covered / paper silent. The paper proves only that the maximum of one softmax is unchanged. Scoring options by sum of log-probs is not an argmax over one softmax; dividing logits by T changes each token's log-softmax non-uniformly (log-sum-exp term depends on T), so ranking of sequences can change. This is my reasoning, not something the paper says or proves.
(d) sampling at a temperature: NOT covered / paper silent. The paper only claims argmax invariance. The paper itself says T>1 raises entropy and T→0 collapses to a point mass ("As T → 0, the probability collapses to a point mass (i.e. q̂_i = 1)"), i.e. the distribution changes; no claim about sampled outputs. Sampling invariance is clearly not implied (it is a change of distribution).
The paper's own statement settles only (a).

Q4. Yes, discusses non-scalar rescaling. Quotes: "Matrix and vector scaling are two multi-class extensions of Platt scaling." Matrix scaling prediction (Eq. 8): ŷ′ᵢ = argmax_k (W zᵢ + b)^(k). Vector scaling: "a variant where W is restricted to be a diagonal matrix." The paper's invariance sentence is placed in the temperature scaling paragraph only. The paper does NOT state that vector or matrix scaling preserve accuracy or argmax (summariser report; I did not see a statement). Arbitrary W, b can change the argmax; summariser said Table S2 error values for these differ slightly from uncalibrated, but I did not see the table values myself, so treat that as unverified. Also reported: vector scaling "recovers essentially the same solution as temperature scaling" because "the learned vector has nearly constant entries" (summariser quote, single fetch). Invariance claim does not extend.

Q5. Ranking / ordinal metrics: NOT FOUND. Read via summariser across the full PDF: no mention of ranking, AUC, ordinal metrics or Brier score in connection with temperature scaling. Metrics discussed: ECE, MCE, NLL, error, entropy, reliability diagrams. Table S2 note reported as "Error with temperature scaling is exactly the same as uncalibrated." Only accuracy/error is claimed invariant. Caveat: this is a negative from a summariser pass, not a grep of raw text.

## Other points
- Section 4.2 is "Extension to Multiclass Models" per the summariser; the temperature paragraph is within it.
- Temperature T is fitted by NLL on a validation set ("T is optimized with respect to NLL on the validation set").
- Paper says entropy maximisation equivalence is in supplement Sec S2.
