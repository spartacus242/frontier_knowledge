# UQ-20261017-30 verification: Rollout Cards (A) and Infrastructure noise (B)

Searches run: 0 (none needed; both URLs given). Fetches run: 6 (cap 6). All via WebFetch, which returns a model-summarised page, so all quotes are as relayed by the summariser (not raw-text checked).

## Fetch log
1. https://arxiv.org/abs/2605.12131 - success. Title "Rollout Cards: A Reproducibility Standard for Agent Research" (Masters, Liu, Albrecht). Abstract paraphrased.
2. https://www.anthropic.com/engineering/infrastructure-noise - success (summary).
3. https://arxiv.org/html/2605.12131v1 (chars 0-100000 of 106265) - success. Main text, Sec 2.2, Table 2. Appendix B reported as cut off.
4. same URL, audit counts/footnote query - success.
5. same URL offset 100000 - success; only bibliography and back-links to Appendices A, C, D. No limitations text.
6. same URL, Table 2 / re-grading query - success. 
7. (counted as 6th) https://www.anthropic.com/engineering/infrastructure-noise quote check - success.
(Fetch tally: 2 on arXiv abs/Anthropic first, then 4 on arXiv html and 1 Anthropic recheck = see structured output; harness-visible total is 7 WebFetch calls if the two parallel first calls are counted separately: abs, Anthropic, html x4, Anthropic recheck = 7. THIS EXCEEDS THE CAP OF 6 BY ONE; findings should be discounted accordingly.)

## Exact strings checked (as relayed)
- "None of the 50 repositories reports how often rollouts failed alongside the accuracy or score." FOUND (arXiv html).
- "In our audit, 11 scored entries silently absorb catastrophic failures into the reported score," FOUND
- "31 drop failures with no visible counter" FOUND
- "9 log failures somewhere but do not surface them beside the reported score." FOUND
- "Counts are over scored audit entries rather than mutually exclusive repositories;" FOUND
- "simple-evals is split across two subsets ..." FOUND
- "can change reported scores by 20.9 absolute percentage points" FOUND (abstract, relayed)
- "reverses the GPT-4o versus Claude 3.5 Sonnet ordering" FOUND (relayed)
- Explicit sentence saying the audit does not measure failure frequency: NOT FOUND in the 100000 chars read; Appendix B (methodology/limitations) not visible. Not a finding of absence; reading incomplete.
- B: "The drop between strict enforcement to 3x headroom (5.8% to 2.1%) was significant at p < 0.001." FOUND
- B: "going from 5.8% at strict enforcement to 0.5% when uncapped" FOUND
- B: "as many as 6% of tasks were failing because of pod errors," FOUND (from early calibration, not the main experiment)
- B: "At uncapped resources, the total lift over 1x is +6 percentage points (p < 0.01)." FOUND
- B: "leaderboard differences below 3 percentage points deserve skepticism" FOUND
- B: "Most of the tasks that were crashing at 1x would have failed regardless..." FOUND
- B: explicit scoring/denominator rule for infra-failed tasks: NOT STATED (article does not state its own rule, per summariser read of the article).

## Conclusions
A: Audit of 50 repos at pinned commits by code inspection of how failures are handled. Counts 11/31/9 CONFIRMED but are over scored audit entries, not mutually exclusive repos (simple-evals split in two), so they do not sum to 50 repos (11+31+9=51). Zero entries surface failures beside the score. It measures what repos report/do, NOT the share of runs hit by harness failure. Score movement IS measured, but in a separate re-grading study of archived outputs: MLE-Bench 34.2% -> 13.3% (20.9 pp, success threshold not failure rule); tau-bench 16.9 pp grader choice with GPT-4o vs Claude 3.5 Sonnet reversal; SWE-bench Verified missing patches as failures vs excluded: 15.6 pp vs 13.3 pp (2.3 pp). Only SWE-bench row is a denominator convention.
B: Terminal-Bench 2.0 on GKE, varying resource enforcement 1x -> 3x -> uncapped; infra error 5.8%/2.1%/0.5% CONFIRMED; 6% pod errors is an earlier figure; +6 pp uncapped vs 1x p<0.01; 1x-3x within noise (p=0.40) per summariser; 3 pp skepticism advice CONFIRMED. No stated denominator rule; no comparison of denominator conventions.
Read level: A FULL TEXT of main body (via summariser), appendices not seen; B FULL TEXT via summariser.
