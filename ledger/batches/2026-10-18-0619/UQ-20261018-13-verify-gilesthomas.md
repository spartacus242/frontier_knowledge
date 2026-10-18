# UQ-20261018-13 verify gilesthomas 32i

Read level: FULL TEXT of part 32i (via WebFetch summariser, 3 separate fetches; page reported complete incl. footnotes). Part 32m (series conclusion) read via summariser only for the specific terms asked. Other parts of series NOT read.

## Calls (3 searches, 4 fetches; no errors encountered)
S1 "Giles Thomas gilesthomas.com seeds standard deviation final test loss comparing training runs" -> unrelated arXiv results, nothing from gilesthomas.com.
S2 'gilesthomas.com "32i" LLM from scratch' -> generic; only a month index page of gilesthomas.com.
S3 '"Writing an LLM from scratch, part 32" interventions gilesthomas.com ...' -> found 32i URL.
F1 https://www.gilesthomas.com/ -> homepage; no 32 titles, only 2026-10 posts; not useful.
F2 https://www.gilesthomas.com/2026/04/llm-from-scratch-32i-interventions-what-is-in-the-noise -> title/author/date, SDs, rule.
F3 same URL, string checks one at a time.
F4 same URL, rule paragraphs and checkpoint question.
F5 https://www.gilesthomas.com/2026/04/llm-from-scratch-32m-interventions-conclusion -> no smoothing/SD/3-SD content.
(F4 and F5 were parallel; total fetches 5 counting F1..F5 -- within the 7 budget.)

## Findings
Q1: "Writing an LLM from scratch, part 32i -- Interventions: what is in the noise?", Giles Thomas, dated 7 April 2026 (from page text), URL above. Series: part 32 interventions (32a baseline ... 32m conclusion). 32i carries the seed-noise material.
Q2: Compares TEST SET loss ("Loss against our test dataset") between intervention runs and baseline. Final train loss is also listed per run but is not used in the SD analysis. Rule: normal heuristic "we'd expect ~99.7% of results to be within three SDs" (also called "the 3-SD rule"); intervention counts as distinguishable from noise only if outside mean +/- 3 SD. No SD threshold stated as a formal pre-set decision rule beyond this heuristic; author also notes "three data points is rather a small number".
Numbers (three experiments, n=3 runs each):
 - vary seed before weight init (seeds 42,22,67): mean 3.672857, SD 0.0154919; 3-SD range 3.6263813 to 3.7193327
 - same weights, vary training seed (baseline + 23, 67): mean 3.684462, SD 0.008672; range 3.658446 - 3.710478
 - vary weight seed, training seed pinned (42,23,67): mean 3.673215, SD 0.012062; range 3.637030 - 3.709400
 My check: range half-widths equal 3 x SD in all three, so the stated SDs and ranges are internally consistent. (An earlier summariser remark that two SDs lack a divide-by-n is unverified and not relied on; whether SDs are population or sample is not stated in what I saw.)
 Baseline test loss 3.692; interventions 3.602 (LR schedule) to 3.874 (weight tying).
Q3: END-OF-RUN-style test loss on a fixed test set, one value per run; SD computed across 3 runs/seeds (per-run values, then SD across runs; not a within-run series). Caveats: the test set is never defined (no size/source); post does not say whether the evaluated weights are final or a "best" checkpoint (only appearance of "best" is a path runs/8xa100m40-baseline/checkpoints/best/model.safetensors). Intervention table entries are single runs, not seed-averaged.
Q4: NOT FOUND. Strings "smooth", "moving average", "exponential", "window" absent in 32i (read in full); "last" only in "last few months/days". 32m also has none (read via summariser). Remaining 32a-h, j-l not read. Only loss-curve-ish mention: gradient clipping described as "limiting the effects of loss spikes" (purpose of clipping, not an observation).
Q5: Nothing on within-run training-loss-curve noise. "Noise" in 32i means run-to-run seed variation. 32m only links to a separate post about "random noise affects training" without detail.
Record claims: "reports seed SDs on final test loss" - supported, with the final-vs-best-checkpoint caveat; "three-SD rule" - supported; "never smooths ... or chooses an averaging window" - consistent for 32i (and 32m), not checked in other parts.
