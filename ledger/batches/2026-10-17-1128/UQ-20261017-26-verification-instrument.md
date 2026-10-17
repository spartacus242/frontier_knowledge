# UQ-20261017-26 verification instrument: working notes

## Searches (0 of 8 used)
None run; direct arXiv fetches succeeded.

## Fetches (6 of 6 used, cap reached)
1. https://arxiv.org/abs/2410.20247 - OK (abstract, via page summariser)
2. https://arxiv.org/abs/2511.20621 - OK (abstract, via page summariser)
3. https://arxiv.org/html/2410.20247v1 - OK, first 100000 of 102085 chars read (last 2085 chars NOT read; likely references/tail)
4. https://arxiv.org/html/2511.20621v1 - OK (full text via summariser; Section 7.4 and Appendix F)
5. https://arxiv.org/html/2410.20247v1 - OK (cached page, second question; same 100000-char limit)
6. https://arxiv.org/html/2511.20621v1 - OK (cached page, exact-string check)
No 429s. Note: all page content passed through a summariser, so quotes are as relayed by it, not read raw.

## Source A: Model Equality Testing (Gao, Liang, Guestrin)
- Test: two-sample test, empirical MMD estimator. Headline kernel: Hamming kernel (counts matching characters per position, right-padding shorter completions). Also compared: all-substrings kernel, one-hot kernel.
- Unit: completions (strings) sampled from an API per prompt; comparator: samples from a reference distribution (e.g. fp32 weights; fp16 null also used); estimand: whether the two output distributions P and Q are equal (MMD), p-value via permutation-style test.
- Power: abstract "a test built on a simple string kernel achieves a median of 77.4% power" (found; abstract also says about 10 samples per prompt). HTML body: median over alternative distributions Q, averaged over LMs and prompt distributions; m=25 prompts, avg 10 samples per prompt, N=250 samples per distribution. So "median 77.4% at ~10 completions over 20-25 prompts": CONFIRMED (25 prompts per the body; I did not see a 20 figure).
- Perturbations evaluated (as relayed by summariser from the HTML body):
  - quantization: nf4, int8, fp16 vs fp32
  - watermarking (Kirchenbauer et al. 2023, bias 2.5)
  - finetuning of Llama-3 8B Instruct (Wikipedia split, code dataset, lr 1e-6)
  - substituting one of 13 other instruction-tuned models
  - real API deviations: 31 provider endpoints vs fp32 and fp16 nulls (Fireworks semantic caching and Together quantization noted)
  - Intro mentions pruning and decoding-parameter errors but does not test them. System prompts not evaluated.
- Speculative decoding, batch size, concurrency, engine version, kernel choice (GPU): reported ABSENT from the portion read (first ~100000 of 102085 chars). vLLM appears only as a local sampling library (Appendix B.1), no version. Caveat: absence is from the summariser over 98 percent of the text; last 2085 chars unread. Strings asked: "speculative", "batch size", "concurrency", "engine" - none found.
- Abstract-level quote on perturbations: "API providers may quantize, watermark, or finetune the underlying model, changing the output distribution" (relayed; the abstract is paraphrased by the summariser in fetch 1, so treat as approximate wording).

## Source B: arXiv:2511.20621, DiFR: Inference Verification Despite Nondeterminism (Karvonen et al.)
- Token-DiFR: checks provider-generated tokens against a trusted reference implementation using the same random seed. Unit: per-token scores (clipped post-Gumbel logit margins) aggregated into batch-level statistics (batches of 1 to 10,000 tokens). Endpoint: honest vs misconfigured batch classification, AUC at 1% FPR. Comparator: reference implementation with same seed; cross-entropy baseline; honest configurations define null. Estimand: whether a batch of served tokens is consistent with the reference up to benign numerical noise. Activation-DiFR: random orthogonal projections of activations as fingerprints.
- Abstract claims: detects 4-bit quantization AUC above 0.999 within 300 output tokens (Token-DiFR), within 2 output tokens (Activation-DiFR); 25-75% less communication.
- B2 string "We have not evaluated our approach on other sampling procedures such as speculative decoding": FOUND (summariser quoted it from Section 7.4 Limitations, under 7. Discussion, and a separate check confirmed present). Also relayed: "Our algorithms and experiments focus on verifying sampling from a single LLM." and "We do not evaluate speculative decoding scenarios," citing lack of vLLM 0.10.0 support.
- B3: no measured speculative-decoding divergence. Appendix F is a sketch for one speculative decoding algorithm with no experiments or numbers (per summariser).

## Strings checked
- "a test built on a simple string kernel achieves a median of 77.4% power" - found (A abstract, summariser)
- "an average of just 10 samples per prompt" - found (A body)
- "We have not evaluated our approach on other sampling procedures such as speculative decoding" - found (B 7.4)
- "speculative" in A - not found in 98% read; last 2085 chars unread

## Conclusion
A tests drift from quantization, watermarking, finetuning, model swaps and real API deviations; no serving-stack axes (speculative decoding, batch size, etc.) in what was read. B explicitly says speculative decoding was not evaluated and gives no numbers for it. Neither source supplies a measured divergence for speculative decoding.
