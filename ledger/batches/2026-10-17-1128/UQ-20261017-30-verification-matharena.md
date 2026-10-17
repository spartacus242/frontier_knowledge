# UQ-20261017-30 — Verification: MathArena "The Hidden Effect of Retrying Requests in LLM Evaluation"

Target: https://matharena.ai/retry/
Budget: <=6 searches, <=6 fetches.

## Log

### Fetch 1 — https://matharena.ai/retry/ (full-text request) — SUCCESS
Summariser refused verbatim reproduction but answered all six sub-questions. Key reported content:
- Compares two strategies: "retry until success" vs "fixed number of retries" (budget exhausted => marked incorrect).
- Authors PREFER retry-until-success and assume it in experiments.
- Accuracy formula: under hard cutoff, if every run for a problem fails, denominator is zero and accuracy UNDEFINED.
- Magnitude: intro says frequent retries can overestimate performance by "up to 5 percent"; longest runs ~5% lower accuracy than shortest; simulations show initial increase of 1-5% at high failure rates. Summariser could not say pp vs relative.
- Reversal: GPT-5.1 outperforms DeepSeek-v3.2 at high stability; ranking REVERSES at lower stability under a maximum-time failure model.
- 8,855 model-problem pairs in historical analysis. 266 problems total, ~500 comparisons/model. Apex Shortlist sim: 49 problems, DeepSeek-v3.2 & Grok-4.1-Fast each 32 times.

### Fetch 2 — same URL, exact-string probe — SUCCESS
- "If all attempts fail, the solution is marked as incorrect" -> FOUND (verbatim).
- Choice-posing sentence: "There are two commonly used strategies for retrying failed requests:" -> FOUND.
- Own rule: "We prefer the first strategy and do not report model performance until a sufficiently stable implementation is available." -> FOUND.
- "up to 5 percent" -> FOUND: "frequent retries can overestimate performance by up to 5 percent on MathArena benchmarks".

### Fetch 3 — same URL, absences probe — SUCCESS
1. Reversal: "GPT-5.1 outperforms DeepSeek-v3.2 at high stability levels, but the ranking reverses at lower stability." Setting: "under a maximum-time failure model."
2. SHARE of runs affected by harness-side failure in real data: NOT FOUND. Failure analysis is simulated; "our historical data did not record the time taken per request."
3. DROP-the-item arm: not a distinct arm. Only denominator mention: "For the hard cutoff case, the denominator may be zero if all runs for a problem fail, in which case accuracy is undefined."
4. Count of publications stating their retry convention: NOT FOUND (no survey/tally).
5. "percentage points" / "pp": NOT FOUND; pp-vs-relative never stated.

### Fetch 4 — same URL, design probe — SUCCESS
1. "Averaged over all historical results (8855 model-problem pairs)" (Fig. 1 caption) -> 8855 written WITHOUT comma.
2. Design: unit = individual runs of the same model-problem pair (~4 independent runs per pair); endpoint = accuracy/correctness as a function of output length; contrast = shortest vs longest runs, plus pairwise shorter-vs-longer where exactly one is correct (Fig. 2, 266 problems, ~500 comparisons/model). Key: "In particular, the longest runs exhibit approximately 5% lower accuracy than the shortest runs."
3. Failure modes named: error at start (excluded), constant dropout rate (Fig. 3), maximum time (Fig. 4), maximum tokens (Fig. 5).
4. Mechanism (selection): "longer requests are retried more often and are thus replaced by shorter, more accurate requests."
5. Recommendations: "Providers should report the average number of retries per request." / "Providers should actively mention which policy they have for retrying requests".

### Fetch 5 — same URL, strategy-attribution + hard-cutoff probe — SUCCESS
1. Two strategies under heading "Retry strategies": "Retry until success:" ("The client continues retrying until the request succeeds." / "This guarantees complete benchmark results but can lead to many retries for longer requests." / "For very unstable models, benchmark results may never finish.") and "Fixed number of retries:" ("The client retries a fixed number of times." / "If all attempts fail, the solution is marked as incorrect." / "While this limits retries, it can introduce substantial bias and produce time-dependent results" / "due to fluctuating network conditions and server load."). The marked-incorrect sentence belongs to FIXED NUMBER OF RETRIES, not to the authors' own policy.
2. "hard cutoff" -> FOUND: "For the hard cutoff case, the denominator may be zero" (Simulated performance effect section). [Supersedes fetch-4's claim that the term is not used.]
3. "accuracy is undefined" -> FOUND: "in which case accuracy is undefined".
4. Full claim: "We experimentally demonstrate that frequent retries can overestimate performance by up to 5 percent on MathArena benchmarks." Located in Introduction, "Retry-induced bias"; supported by the later "Experimental Effect of Retrying Requests" section (Apex Shortlist).

## Conclusion
Searches run: 0. Fetches run: 5 (all to https://matharena.ai/retry/, all succeeded; read via summariser, which declined verbatim bulk reproduction but served targeted exact-string checks).

Read level: FULL TEXT, but mediated by the summariser (no raw HTML obtained).

1. Unit/endpoint/comparator/estimand:
   - Empirical arm: unit = an individual sampled run within a model-problem pair (~4 runs/pair; 8855 pairs; 266 problems); endpoint = accuracy (answer correctness); comparator = shortest vs longest run of the same pair (length/time as proxy for retry-susceptibility), plus pairwise shorter-vs-longer discordant pairs; estimand = the within-pair accuracy gap attributable to length, i.e. the selection bias retrying would induce (~5% lower accuracy for longest runs).
   - Simulation arm: unit = a simulated benchmark run of a model under an injected failure model (constant dropout rate, maximum time, maximum tokens); endpoint = reported benchmark accuracy and model ranking; comparator = stability/failure-rate levels (and retry-until-success vs hard cutoff); estimand = bias in reported accuracy and rank induced by the retry policy.
2. CONFIRMED (with attribution correction): the choice is posed, but as TWO options, not three. "There are two commonly used strategies for retrying failed requests:" — retry-until-success vs fixed number of retries. "If all attempts fail, the solution is marked as incorrect." is verbatim present but describes the FIXED-RETRIES option, not the article's own rule. The article's own rule: "We prefer the first strategy and do not report model performance until a sufficiently stable implementation is available." Dropping the item is NOT offered as an option.
3. "up to 5 percent" CONFIRMED verbatim. Percent-vs-pp is NOT stated anywhere ("percentage points"/"pp" absent). Context (~5% accuracy gap on a 0-100 accuracy scale) reads as percentage points, but the article does not say so.
4. CONFIRMED: "GPT-5.1 outperforms DeepSeek-v3.2 at high stability levels, but the ranking reverses at lower stability", "under a maximum-time failure model."
5. PARTIALLY CONFIRMED: the number 8855 is correct; the article writes it without a thousands comma ("8855 model-problem pairs"), in the Fig. 1 caption.
6. Absences:
   - Share of runs affected by a harness-side failure: ABSENT (no real-data rate given; failures are simulated; historical data lacks per-request timing).
   - Drop-the-failed-item arm: ABSENT as an arm. Nearest content is the hard-cutoff formula note that the denominator may be zero and "accuracy is undefined" — a degenerate case, not a drop-from-denominator condition.
   - Count of publications stating their convention: ABSENT (no survey/tally; only a recommendation that providers state their retry policy).
