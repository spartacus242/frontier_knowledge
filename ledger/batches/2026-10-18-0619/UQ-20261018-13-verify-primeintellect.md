# UQ-20261018-13 verify Prime Intellect nanogpt speedrun document

Read level: FULL TEXT (via summariser; page reported ~6000 words, ~12 sections, no visible truncation). Quotes were summariser-relayed; each checked one at a time.

## Calls (2 searches, 5 fetches; no errors)
1. WebSearch "Prime Intellect nanogpt speedrun environment agent '8-trial mean' record" -> OK; candidates primeintellect.ai/blog/measuring-autonomous-research, primeintellect.ai/auto-nanogpt.
2. WebSearch "Prime Intellect environments hub nanogpt speedrun ... eight times fixed seeds" -> OK, nothing new of use.
3. WebFetch primeintellect.ai/blog/measuring-autonomous-research -> OK. Title "Measuring Autonomous AI Research", AUG 15TH 2026, byline Elie Bakouch and Prime Intellect. Both phrases present.
4. WebFetch primeintellect.ai/auto-nanogpt -> OK. Title "Autonomous AI research for nanogpt speedrun", MAY 14TH 2026. Neither phrase present (sibling doc, different decision rule: steps to reach target val loss).
5. WebFetch blog (phrase locations) -> both phrases confirmed, sections: "eight times" in Harness; "record arbiter" in Prime Agent run_trial()/run_record() panel "Policy update after measured noise".
6. WebFetch blog (smoothing terms) -> none of smooth/EMA/moving average/last k/window appear in judging.
7. WebFetch blog (masthead, parser) -> byline and citation author confirmed; parser keeps final-step val_loss.

## Findings
Q1: "Measuring Autonomous AI Research", Prime Intellect Blog, 15 Aug 2026 (masthead/published-time metadata), Elie Bakouch and Prime Intellect. URL https://primeintellect.ai/blog/measuring-autonomous-research
Q2: "trains the recipe eight times on fixed seeds it can't touch" - present, apparently verbatim (Harness section; sentence continues "and writes a logfile with the exact source and all eight losses"). "8-trial mean remains the record arbiter" - present, apparently verbatim, in the Prime Agent policy panel next to "trust gains > 0.0005" and "confirm borderline wins with a 2nd draw". Caveat: relayed by summariser, not seen raw; the two strings were relayed twice consistently. Not a paraphrase per the summariser.
Q3: A record claim is `bash run.sh 8`: 8 runs on fixed seeds; frozen verify.py accepts if "the eight-run mean beats 3.27859" (threshold tightened from 3.28; luck pass ~1 in 1000). Quantity: mean of the eight final val_loss values. Single runs used for screening only. Policy: trust gains > 0.0005, confirm borderline wins with a 2nd draw.
Q4: NOT FOUND in judging. Read whole page. Only: "weight averaging near the end of training" (technique winning runs used) and 0.99 running averages in code snippets of an exploratory PSGD/SOAP lab. No EMA/last-k/window in the decision rule. (Sibling May 2026 page mentions "Tail EMA endpoint smoothing" only as a recipe component.)
Q5: End-of-run validation loss: parser keeps lines where step equals total steps (final-step val_loss). Not a training-loss series. Page does not describe how the val split is built or say "held-out" explicitly, so "fixed held-out set" is not confirmed by the text.
Unit/aggregation: per-record-claim mean over 8 seeds of final val loss; threshold 3.27859.
Distractor: May 14 2026 page "Autonomous AI research for nanogpt speedrun" uses steps-to-target-val-loss, no fixed 8-run rule; phrases absent.
