# UQ-20261018-13 verify modded-nanogpt README rules

Read level: FULL TEXT. Raw README.md (450 lines, 54,932 bytes) fetched with curl from raw.githubusercontent.com, no summariser; rules section (lines 233-250) and metric comment (line 258) read directly. README latest record listed: #92, 08/30/26.

## Routes
- Search: 0 run.
- Fetch 1: WebFetch github.com/KellerJordan/modded-nanogpt -> OK (summariser; rules listed).
- Fetch 2: WebFetch raw.githubusercontent.com/KellerJordan/modded-nanogpt/master/README.md -> OK (summariser).
- Fetch 3: curl -sS raw.githubusercontent.com/.../master/README.md -> HTTP 200, 54932 bytes. All quotes below are from this raw copy. No failures.

## Q1 strings (one at a time)
(a) "Attain <= 3.28 mean val loss": near-verbatim. README line 238: "Attain ≤3.28 mean val loss." (uses the symbol ≤, no space; "<=" is a transcription of it). Present.
(b) "the first 10,485,760 tokens of the FineWeb valset": VERBATIM, line 258 ("...at least `math.exp(-3.28 * 10485760)` to the first 10,485,760 tokens of the FineWeb valset."). It sits in the "Comment on the target metric" section, not in the numbered rules.
(c) "submissions must provide enough run logs to attain a statistical significance level of p<0.01": VERBATIM contiguous substring of rule 2, line 238. Full: "(Due to inter-run variance, submissions must provide enough run logs to attain a statistical significance level of p<0.01 that their mean val loss is ≤3.28. ...".
(d) "Run faster than the prior record when baselined on the same hardware": VERBATIM, rule 4, line 240 (ends with a period).

## Q2 rules (README "## Rules", "New records must:")
1. Not modify the train or validation data pipelines. (You can change the batch size, sequence length, attention structure etc.; just don't change the underlying streams of tokens.)
2. Attain ≤3.28 mean val loss. (Due to inter-run variance, submissions must provide enough run logs to attain a statistical significance level of p<0.01 that their mean val loss is ≤3.28. Example code to compute p-value can be found [here](records/track_1_short/2025-01-04_SoftCap#softer-softcap). For submissions which improve speed by optimizing the systems performance, without touching the ML, this requirement is waived.)
3. Not use any extra `torch._inductor.config` or `torch.compile` flags. (These can save a few seconds, but they can also make compilation take >30min. This rule was introduced after the 21st record.)
4. Run faster than the prior record when baselined on the same hardware.
Then: open PRs strongly encouraged. "Discretionary reasons why a PR may not be accepted" (separate list 1-2): readability degradation; "The current record is intentionally kept roughly 0.001-0.002 loss below 3.28 to make validation simpler. If a PR substantially consumes this buffer, it should do so in a way that outperforms a simple step count decrease, when measured at equivalent loss." Note: coordinate_descent_tuning allowed for the GPT-2 Medium track. "Other than that, anything and everything is fair game!"
Track 2 (GPT-2 Medium): target lowered 3.28 -> 2.92, "All other rules remain the same."

## Q3 axis
LOSS axis. The p<0.01 requirement is on the claim "their mean val loss is ≤3.28" (rule 2). Rule 4 (time) carries no significance requirement in the text; it says only "Run faster than the prior record when baselined on the same hardware." Rule 2's significance requirement is waived for pure systems-speed submissions "without touching the ML". The README gives no p-value test for time.

## Q4 smoothing
Not present. Read all 450 lines (grep for smooth|ema|moving|average|window|curve|last N, then read rules and surrounding sections). No description of smoothing a training-loss curve, EMA of loss, mean of last k steps, or an averaging window for deciding a run beats another. Hits are unrelated: "Tail weight averaging (EMA) with a raised LR floor" (line 47, weights), Track 2 "EMA Wrapper on Muon" (optimizer), record 52 "Smooth scalars via beta increase", and attention "window" (sliding-window attention). "mean val loss" in rule 2 is a mean over runs.

## Q5 comparison procedure
In the README's terms: each submission supplies multiple run logs; the criterion is that the mean val loss (across runs, "due to inter-run variance") is ≤3.28 at p<0.01 (example p-value code linked in records/track_1_short/2025-01-04_SoftCap, NOT opened). Then the time must be faster than the prior record, baselined on the same hardware (official timing on 8xH100 from PrimeIntellect, line 105). No mid-run comparison described. Records are kept ~0.001-0.002 below 3.28 "to make validation simpler". Whether per-run loss is the final-step value is implied (line 101 mentions "the final validation" in train_gpt.py) but the rules do not spell out the per-run statistic; not verified in code.

## Q6 fixed set / timing
Fixed set: the README says the metric is loss on "the first 10,485,760 tokens of the FineWeb valset" (line 258), rule 1 forbids changing validation data pipelines/token streams, and line 289 says "we specified that the train/val tokens must be kept fixed". So fixed held-out set: FOUND. Once at end vs repeatedly: README does not state. Only hint is line 101 "the final validation" as a phase of train_gpt.py; records 33/35 mention "extend ... window for validation" and 91 "during validation". Evaluation frequency: NOT FOUND in README (read in full); would require train_gpt.py, not opened.

## Surprises
Rule 2 text says "≤" not "<="; the 10,485,760-token string is in the metric comment, not in the numbered rules; the README also permits evaluation "at any sequence length" provided the model remains a valid probability model.
