# Famous-questions backtest

Proposed in `ledger/ambition-review-2026-11-18.md` and approved by Jace on 2026-11-19 ("Yes to everything!"). Set up on 2026-11-19; **not yet run**.

## What it tests

Whether the ledger's rules, as they now stand (LEDGER.md with the Ambition requirement, runner v19), would have admitted questions that turned out to open fields, if each had been put to the pipeline just before it was first seriously asked. A pipeline that rejects most of them at their own date is not selecting for ambition, whatever its rules say.

It tests the GATES, not the generator: the ten headlines are supplied, so the run skips drafting and starts at the ranker. Whether the generator would ever have drafted them is a separate question this cannot answer.

## The ten questions

`questions.json` holds them, two per area of the rotation, each with its as-of date (the day before which every agent must pretend nothing later exists), the landmark source that later asked or answered it (for the operator only, never handed to an agent), and the rule each one exercises: rule 4 (contested presupposition: P1, D1), rule 5 (Under-asked: P2, possibly D1), rule 6 (same question on another object: C2, B2), and plain field-opening questions (M1, M2, C1, B1, D2).

## How to run it

One question per run, because the as-of date is a per-run setting, and one run at a time, because LEDGER.md's one-batch-at-a-time rule applies here too: every run draws on the same shared search budget. For question N of `questions.json`, run the Workflow script `ledger/tools/unasked-ledger-batch-sequential-v19.js` with:

```
{
  "repo": "<repo root>", "dir": "<scratchpad>/backtest-<key>",
  "area": "<area>", "supplied": [{ "key": "<key>", "headline": "<headline>", "domain": "<domain>" }],
  "asOf": "<asOf>", "idPrefix": "BT",
  "date": "<YYYYMMDD of the run>", "dateIso": "<YYYY-MM-DD>", "startId": <N>,
  "indexCount": <entries in ledger/INDEX.md>, "batch": "backtest-<key>"
}
```

`supplied` makes the runner skip drafting, the ranker score the headline without discarding it or searching, and the developer write its Gate 0-1 record. `asOf` adds an instruction to every agent to treat sources dated on or after that day as nonexistent and to log any it meets as EXCLUDED (post-as-of). `idPrefix` gives the entries BT ids so they can never be mistaken for ledger entries.

**Never append backtest entries to `ledger/unasked-ledger.md`, `INDEX.md`, `rotation.md` or `routed-open-problems.md`, and never advance the rotation.** Copy each run's entry, records and adversary logs into `ledger/backtest/results/<key>/`, and write the summary to `ledger/backtest/results/SUMMARY.md`: per question, the ranker's Ambition, final status, tier, the gate and ground of any rejection, and every EXCLUDED source the agents logged.

Expected cost: ten single-candidate runs, roughly the search and agent load of two to three ordinary batches.

## How to read the result

Admitted means Validated, Provisional or Under-asked. Suggested bar, to be changed if Jace prefers another: **at least 6 of 10 admitted, at least 4 at Tier: Moonshot**. For each rejection, the question is whether the ground is fair (the question really had been asked and pursued by its as-of date) or an artefact of the rules (an object-swap disguise that was not one, a contested premise treated as false, a novelty kill on a one-sentence speculation). Fair rejections are not failures; artefacts are what to fix.

## Known limits

- **Hindsight.** Every agent knows how these stories ended. The as-of instruction asks them to set that aside and to say where they found it hardest; the ranker's Ambition scores will be inflated by it, so read them as an upper bound.
- **Search engines do not filter by date reliably.** The as-of rule depends on agents reading dates and excluding later sources; spot-check the EXCLUDED lists.
- **No comparison arm.** The pre-2026-11-19 pipeline (v18) cannot take supplied headlines, so this measures the current rules only. The review's thought experiment (B2 falling to the old covariate-swap rule) is the only reading of the old rules, and it was not a run.
