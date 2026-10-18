# UQ-20261018-14 verify rule 4 (modded-nanogpt README rules, TIME axis)

Read level: FULL TEXT of README.md (raw, via curl to raw.githubusercontent.com master, HTTP 200, 54,932 bytes), cross-checked with a WebFetch summary of the github.com repo page. Rules quoted below are from the raw file (lines 233-252), not the summariser.

## Routes
1. WebFetch https://github.com/KellerJordan/modded-nanogpt -> OK (summarised; rules matched raw text).
2. Bash curl https://raw.githubusercontent.com/KellerJordan/modded-nanogpt/master/README.md -> 200, full text. (No failures. 0 searches.)
README content runs to record 92 dated 08/30/26.

## Rules (verbatim, "## Rules", "New records must:")
1. Not modify the train or validation data pipelines. (You can change the batch size, sequence length, attention structure etc.; just don't change the underlying streams of tokens.)
2. Attain <=3.28 mean val loss. (Due to inter-run variance, submissions must provide enough run logs to attain a statistical significance level of p<0.01 that their mean val loss is <=3.28. Example code to compute p-value can be found [here](records/track_1_short/2025-01-04_SoftCap#softer-softcap). For submissions which improve speed by optimizing the systems performance, without touching the ML, this requirement is waived.)
3. Not use any extra `torch._inductor.config` or `torch.compile` flags. (These can save a few seconds, but they can also make compilation take >30min. This rule was introduced after the 21st record.)
4. Run faster than the prior record when baselined on the same hardware.

Following text: "Incorporating open PRs into a new record is strongly encouraged..." ; discretionary rejection reasons (1 readability; 2 do not consume the ~0.001-0.002 loss buffer below 3.28 except better than a step-count decrease at equal loss); note coordinate_descent_tuning allowed on GPT-2 Medium track; "Other than that, anything and everything is fair game!"; link to "further clarifications" (discussion #23, NOT opened).

## Findings
Q1 Rule 4 is VERBATIM-ish but the audit's wording is a paraphrase: real wording "Run faster than the prior record when baselined on the same hardware." The audit string "Run faster than the prior record when baselined on the same hardware" is identical minus the final period -> verbatim.
Q2 Rule 2 carries p<0.01. It governs the LOSS axis (mean val loss <=3.28), not time. Waived for pure systems-performance speedups that do not touch the ML.
Q3 "Baselined on the same hardware" is the only text. It says nothing about paired runs, same node, re-running the prior record alongside, or how many times. Rule says the comparison is baselined on same hardware; a strict "paired same-node re-run required" is NOT stated. The same-hardware baselining requirement exists in wording; its procedure is unspecified.
Q4 Replication of timing: NOT FOUND. The only replication language ("enough run logs", p<0.01) is in rule 2 and concerns val loss. Searched README for timed/timing/average/mean time/seeds/multiple runs/variance: only hits are the "Timing change after record 21" section (grace period, coordinate_descent_tuning) and rule 2. No timing p-value or timing-variance rule.
Q5 Hardware: "Official records are timed on 8 NVIDIA H100 GPUs from https://app.primeintellect.ai/. PrimeIntellect has generously sponsored recent validation runs." (line 105). Standardised to 8xH100 and named provider. Docker section header: "Alternative: Running with Docker (recommended for precise timing)"; "For cases where CUDA or NCCL versions aren't compatible with your current system setup, Docker can be a helpful alternative." Not a specific node/instance/driver spec.
Q6 Toolchain: rule 3 bans extra torch._inductor.config / torch.compile flags. Table has toolchain upgrades as records: #7 "Upgraded PyTorch 2.5.0" (10/18/24); #25 "Upgrade PyTorch to 2.9.0.dev20250713+cu126" (07/13/25); track 2 #11 "Upgrade from torch 2.7 to torch==2.10.0.dev20251210+cu126" (no date/log). Re-timing rows: #21 "21st record with new timing" and "21st record with latest torch" (3.014 min, 05/24/25) labelled "not a new record, just re-timing #21 with latest torch". Install line: `pip install torch==2.10 ... # the pinned build, not a nightly`. No rule text explicitly governs whether version bumps count; accepted in practice (history table).
Q7 Rules above.
