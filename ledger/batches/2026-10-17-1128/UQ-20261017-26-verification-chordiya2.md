# UQ-20261017-26 — verification of arXiv:2607.17283 (speculative decoding anatomy)

Task: read RESULTS + DISCUSSION (Sections 5,6,7). Budget 6 searches / 6 fetches.

## Log
(appending as I go)

### Fetch 1: https://www.alphaxiv.org/abs/2607.17283.md -> SUCCESS (page has full paper; summariser refused verbatim)
- Title confirmed: "Lossless but Not Free: An Empirical Anatomy of Speculative Decoding on Consumer Hardware", Param Chordiya (UC San Diego).
- Sec5 = Experimental Setup (Apple silicon, 18GB unified mem, no CUDA; 5 draft/target configs; HF fp16 + llama.cpp GGUF; Qwen2.5). Main runs 28 prompts x 128 new tokens; K-sweeps 8 prompts x 96 tokens.
- Sec6 = Results: three-level equivalence (synthetic rejection sampling, mock-model decoder, real-model). Real-model ~9,200 tokens per method, chi2=162.5, dof=200, p=0.976, greedy exact match.
- Speedups: best cfg 0.5B q8_0 draft + 3B fp16 MPS target = 1.57x main, peak 1.61x at K=6. 3 of 5 configs slower than baseline.
- Acceptance decays with position: 66.4% @pos1 -> 24.2% @pos4 (best cfg).
- Failure modes: Transformers fp16 draft slower/step than small llama.cpp target; quantized Metal backend verifies batches 2-7 ~serially.
- Sec7 = Discussion & Limitations: optimal K from 3 forces (decaying acceptance, draft cost ~K, verifier cost ~batch). Rejection-sampling arithmetic <1 ms/token. Limitations: single-stream batch-1, one machine, no 8B-class Colab results, statistical test bounds rather than eliminates deviation.
=> CONFIRMS chi2=162.5/200, p=0.976, ~9200 tokens/arm. Still need: binning, CI/SE on deviation, power analysis, permutation/bootstrap null, baseline-vs-baseline arm, field-magnitude comparison, exact limitation quotes.

### Fetch 2: https://www.alphaxiv.org/abs/2607.17283.md (targeted on equivalence subsection + limitations) -> SUCCESS
- (a) BINNING: "A two-sample chi2 test over 201 frequency bins (binned so every expected count >= 5)". dof = 200 = bins-1. Fig 2 described as "top-200 tokens by combined count"; text never calls the 201st bin an "other" bucket. Test corpus = 100 prompts x 100 tokens at T=1.0 -> 9,209 speculative / 9,214 baseline tokens (nominal 10,000; gap unexplained).
  NOTE discrepancy w/ fetch1: 28 prompts x 128 tokens = the SPEED main runs, not the equivalence test.
- (b) NO CI/SE. Deviation magnitudes given as: Level-1 synthetic "with KL(p_hat || p) <= 3.5e-4 in all cases" (a bound); real-model smoothed symmetric KL = 0.471, which paper itself says "is dominated by add-0.5 smoothing". No CI, no SE.
- (c) NO power analysis / no MDE. Closest: limitation "has the statistical resolution of about 9,200 tokens per method".
- (d) NO permutation / bootstrap null. Analytic chi2 only.
- (e) NO baseline-vs-baseline arm. Only speculative vs target-only. Greedy leg = spec vs baseline, not a null control.
- (f) NO comparison to field-reported effect sizes (no model-to-model benchmark gaps, no quantization effects). Only numeric batch-shape note: "shifts logits by up to roughly 0.1".
- (g) Limitation quotes captured (7 fragments) - see conclusion.

### Fetch 3: https://arxiv.org/html/2607.17283v1 offset=28000 -> page loaded, landed in Sec 3.2/start of Sec 4. No chi2/binning/limits. Keywords power/permutation/bootstrap/CI: none in excerpt.
### Fetch 4: same URL offset=55000 -> again Sec 3.2 material only. None of the target strings. Keywords: none.
### Fetch 5: same URL offset=92000 -> "Nothing left to read from offset 92000: this page's text is 80895 characters long." (page length = 80,895 chars)
### Fetch 6: same URL offset=65000 -> headings present: "4 Implementation", "Greedy special case.", "Expected yield.", "Model abstraction.". Sections 5/6/7 NOT reachable this way. Keywords power/permutation/bootstrap/CI: absent in excerpt. No baseline-vs-baseline described.

## Exact-string checks (one at a time)
- "162.5" with dof 200 and p = 0.976 -> FOUND (alphaxiv route, both fetches): chi2 = 162.5, dof = 200, p = 0.976. CONFIRMED.
- "~9,200 tokens per arm" -> FOUND and sharpened: 9,209 speculative tokens, 9,214 baseline tokens. CONFIRMED (approximation correct).
- "201 frequency bins (binned so every expected count >= 5)" -> FOUND. dof = 200 = 201-1.
- "top-200 tokens by combined count" -> FOUND, as Figure 2's description. Text does NOT state the 201st bin is an explicit "other" bucket.
- "100 prompts x 100 tokens at T = 1.0" -> FOUND for the equivalence test.
- "KL(p_hat || p) <= 3.5 x 10^-4 in all cases" -> FOUND (Level-1 synthetic test; a bound, not a CI).
- smoothed symmetric KL "0.471" + "is dominated by add-0.5 smoothing" -> FOUND.
- "power" / "power analysis" / "minimum detectable effect" -> NOT FOUND.
- "permutation" / "bootstrap" -> NOT FOUND.
- "confidence interval" / standard error on a deviation magnitude -> NOT FOUND.
- baseline-vs-baseline (two non-speculative runs vs each other) -> NOT FOUND.
- comparison to model-to-model benchmark gaps / quantization effects -> NOT FOUND. Only "shifts logits by up to roughly 0.1" (batch-shape numerics vs argmax near-ties).

## Routes tried for a RAW full text of Sec 5-7
- alphaxiv.org/abs/2607.17283.md : page contains full paper, but the WebFetch summariser declined verbatim reproduction; only short (<~120 char) quoted fragments relayed.
- arxiv.org/html/2607.17283v1 at offsets 28000 / 55000 / 65000 / 92000 : summariser kept returning Sec 3.2-4 material; page total 80,895 chars; Sec 5-7 never surfaced. Fetch cap reached.
=> READ LEVEL: full-paper page, but THIRD-PARTY/SUMMARISER-MEDIATED for Sections 5-7. Not a raw full text.

## CONCLUSION
Claims to verify: CONFIRMED (chi2=162.5, dof=200, p=0.976; ~9,200 tokens/arm -> 9,209 vs 9,214). Binning = 201 frequency bins with every expected count >= 5 (Fig 2: top-200 tokens by combined count); 100 prompts x 100 tokens at T=1.0.
Items 1-5 all ABSENT in the text I read. Item 6 PRESENT (limitations quoted). The paper's own limitation concedes the test "bounds rather than eliminates" distributional deviation, consistent with the absence of a power analysis or a resampling null.
