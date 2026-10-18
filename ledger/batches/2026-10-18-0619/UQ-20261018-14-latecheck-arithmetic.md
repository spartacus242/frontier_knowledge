# UQ-20261018-14 — step-down arithmetic computed first-hand from the README

Read level: **FULL TEXT, RAW.** `curl` to `raw.githubusercontent.com/KellerJordan/modded-nanogpt/master/README.md`, HTTP 200, 54,932 bytes, fetched 2026-10-18, no summariser anywhere in the path. Byte count matches the independent read by the rule-4 verification reader exactly. The table was parsed by script and the numbers below are arithmetic on the parsed rows, not quotations from any agent.

## Parsing

109 rows match the record-row pattern; 92 unique record numbers, contiguous 1..92. Seventeen of the surplus rows belong to the second (GPT-2 Medium) table, which re-uses numbers 2..18 — the first occurrence of each number is the track-1 row, which is what the figures below use. The other two surplus rows are the re-timings of record 21 ("21st record with new timing", 2.997 minutes, 02/01/25; "21st record with latest torch", 3.014 minutes, 05/24/25), both excluded from the series.

## Series totals

- First record: 45.000 minutes, 05/28/24, the llm.c baseline — an external reproduction, not a modded-nanogpt submission.
- Last record: 0.665 minutes, 08/30/26.
- Total log-speedup ln(45/0.665) = **4.2146**, i.e. 67.67x.
- Records 1..21 (45.000 to 2.933) hold ln(45/2.933) = 2.7306 = **64.79%** of it.
- **Taking record 91 as the endpoint instead, the same share is 74.04%.** The headline share is not stable to the endpoint, and record 92 alone moves it by nine points.

## The distribution of step-downs — the finding that matters for this candidate

Exactly **one** step in the series is negative: **record 22, 2.933 to 2.990 minutes, -1.94%** ("Faster gradient all-reduce", 05/24/25). That is the timing-regime change the README documents after record 21 (grace steps replaced by untimed warmup, "an extra runtime of 850ms from the 10 extra timed steps", plus the `coordinate_descent_tuning` ban, "an extra runtime of ~3s"), showing up as an accepted record that is slower than its predecessor on the old clock.

| step-down size | how many of the 91 steps | their combined share of the total log-speedup |
|---|---|---|
| under 1% | 31 | 4.18% |
| under 1.5% | 50 | 9.41% |
| under 2% | 54 | 11.15% |
| under 3% | 63 | 16.24% |
| under 5% | 72 | 24.76% |

**This is the candidate's own result, computed before any run.** Most of the series' records — 54 of 91 — are step-downs smaller than 2%, which is the region where a timing noise floor could plausibly swallow them; but together they carry only 11% of the cumulative log-speedup. So the question's headline estimand, the share of cumulative speedup that survives re-timing, is bounded below at roughly 0.89 by arithmetic on published numbers, whatever the re-timing finds, while the informative statistic is the COUNT of records that fail separation.

## CORRECTION to this note's first version (made 2026-10-18, before the entry was written)

The first version of this note said one cold adversary's count of "~17 of 91" was "not reproduced at any threshold in the table above, so that figure is not confirmed". **That was my error, and the error was in my check, not in its figure.** The adversary's 17 is at a threshold my table does not contain — 0.56%, the minimum detectable step-down it derived from the contributors' own published dispersion (n=13, sd 202.9 ms on mean 77,337.6 ms, CV 0.262%; two-sample t at n=5 per arm and p<0.01) — and my finest bucket was 1%. Recomputed at its own stated threshold on the same byte-identical README:

| threshold | steps below it | their share of the total log-speedup |
|---|---|---|
| 0.18% (its tight floor, CV 0.085% from pr299, n=20) | 1 | 0.04% |
| 0.56% (its loose floor) | 17 | 1.60% |

**Seventeen, exactly, and its record list reproduces element for element: 23, 24, 28, 30, 37, 38, 41, 47, 63, 68, 69, 70, 71, 76, 80, 86, 91.** Its log-share of 1.6% also reproduces. So the figure is CONFIRMED at first hand, and the entry carries it.

The lesson is general enough to keep: a derived figure must be re-derived at the threshold ITS author stated, not looked for in whatever buckets the checker happened to tabulate. Checking a number against the wrong cut manufactures a false negative exactly as a narrowed question manufactures a false defect.
