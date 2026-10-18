# UQ-20261018-14 — LATE Gate 4, adversary 1 (independent, cold)

Date: 2026-10-18. Prior Gate 4 verdict STRUCK; not read. Files read in batch dir: only
`UQ-20261018-14-record.md`. No `-entry.md`, `-adversary-*.md` or `-verify-*.md` opened.

Budget used: 7 WebSearch, 6 fetches (5 WebFetch + 1 raw curl of the repo README). At fetch cap.

## Read levels

| Artefact | Level |
|---|---|
| `UQ-20261018-14-record.md` | FULL TEXT (local) |
| modded-nanogpt `README.md` @ master | **FULL TEXT**, raw curl, HTTP 200, **54,932 bytes**, no summariser |
| arXiv 2008.02215 (SAT time leap) via ar5iv HTML | FULL TEXT (via summariser) |
| LessWrong "Measuring the Dark Energy of AI Progress" | FULL TEXT (via summariser) |
| arXiv 2511.21622v1 "On the Origin of Algorithmic Progress in AI" | FULL TEXT, **TRUNCATED** (ends mid-§7; appendices + reproducibility stmt omitted) |
| arXiv 2005.04305 (Hernandez & Brown) | **ABSTRACT ONLY** |
| recsys-reproducibility genre; STABILIZER; "Towards a Statistical Methodology to Evaluate Program Speedups" (0902.1035) | **SEARCH SNIPPETS ONLY** |

Authorship caveat: I attribute 2511.21622 to Gundlach on the strength of the LessWrong post's
self-reference plus search/record-page titles (MIT FutureTech, ICML/NeurIPS listings). I did **not**
check that author line against the document's own first page. Authorship UNVERIFIED; the design
findings below come from the paper's own body text.

## Failed routes (exact error text)

1. `mcp__github__get_file_contents` KellerJordan/modded-nanogpt README.md →
   `Access denied: repository "kellerjordan/modded-nanogpt" is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge. If the add_repo tool (mcp__claude-code-remote__add_repo) is available in this session, ask the user whether to add this repository to it — check list_repos first to see what the workspace can reach. Do not add repositories the user has not asked for; if add_repo is not available, this repository cannot be added to this session.`
2. `gh api repos/KellerJordan/modded-nanogpt/contents/README.md` →
   `gh: GitHub access to this repository is not enabled for this session. Use add_repo to request access. If add_repo answers that read access is already available and you need GitHub API or write access, call add_repo again with access:"push" to attach the repository with credentials. (HTTP 403)`
   I did **not** add the repository (no user request). Fell back to the public raw route, which succeeded.
3. Search 7 (repo discussion on inter-run timing variance) surfaced **no** repo discussion thread.
   This is **DID NOT FIND**, not COULD NOT READ. Not retried in reworded form.

## Disguise sweep — queries run (vocabularies the record did not try)

1. `measuring algorithmic efficiency of neural networks re-implementing historical architectures common modern software environment compute to reach fixed performance`
2. `"are we really making much progress" re-evaluation reported improvements fail to survive reproduction share of gains baselines`
3. `statistically rigorous performance evaluation measurement bias reported speedups indistinguishable from noise compiler optimization benchmarking methodology`
4. `modded-nanogpt speedrun record timing noise floor audit re-timing variance 2026 whether step-downs are real`
5. `separating algorithmic progress from hardware and software toolchain progress by re-running historical code in period-correct versus modern environments`
6. `Gundlach "On the Origin of Algorithmic Progress" nanogpt speedrun FLOP reductions decomposition algorithmic progress paper`
7. `KellerJordan modded-nanogpt discussion issue "inter-run variance" timing multiple runs requirement record baseline same hardware debate`

## First-hand work product

### (i) Rules premise — the struck finding's second leg, DEFEATED

README lines 233–241 read verbatim at first hand. Rule 2's `p<0.01` governs **mean val loss ≤3.28**
and is "waived" for "submissions which improve speed by optimizing the systems performance, without
touching the ML". Rule 4 is the whole of the time axis: *"Run faster than the prior record when
baselined on the same hardware."* No replication count, no significance level, no paired-run
procedure, no node specification. The candidate's premise — variance control on the loss axis, none
on the record axis — is **established, not inverted**.

New material not in the record, from the same read:
- Discretionary reason 2: the record is "intentionally kept roughly 0.001-0.002 loss below 3.28";
  a PR consuming that buffer must "outperform a simple step count decrease, when measured at
  equivalent loss". So time can be bought with loss margin — a confound on the time axis.
- Maintainer intent, in an HTML comment: *"The goal of this benchmark/speedrun is simply to find out
  which techniques actually work"*, against "LLM training papers which claim a huge benefit but then
  use their own idiosyncratic non-competitive benchmark". The audit is the maintainer's own objective.

### (ii) Step-down distribution — computed from the full table (92 unique records, 91 step-downs)

Parse cross-checks against established Fact E all hit: r1 = 45.0, r21 = 2.933, r92 = 0.665,
cumulative 67.67x, log ratio 4.2146.

| quantile of step-down (% of prior time) | value |
|---|---|
| p5 | 0.325% |
| p25 | 0.734% |
| **p50** | **1.212%** |
| p75 | 3.712% |
| p100 | 40.941% |

| threshold | records | share of cumulative log-speedup |
|---|---|---|
| < 0.5% | 16 / 91 | 0.89% |
| < 1.0% | 32 / 91 | 3.73% |
| < 2.0% | 55 / 91 | 10.69% |

Smallest positive step-downs: r28 0.177%, r38 0.282%, r63 0.302%, r68 0.325%, r71 0.329%,
r91 0.354%, r80 0.354%.

**Record 22 is NEGATIVE: 2.933 → 2.99 minutes, −1.943%.** It is a record whose recorded time is
*higher* than its predecessor's, admissible because rule 4 was met against the re-timed r21
(2.997 min). No analysis found notes this.

Against Fact D's measured within-submission timing dispersion (CV 71.6/84429.5 = **0.085%**;
202.9/77337.6 = **0.262%**): at n=5 per arm the smallest ~16 step-downs sit *astride* the p<0.01
detection threshold (a 0.177% step-down with sd 0.262% gives t≈1.1, not separable; with sd 0.085%,
t≈3.3, marginal). The test therefore discriminates — the question is not pre-answered — but the
**exposure is bounded in advance at ≤10.69% of cumulative log-speedup**, which is page-derivable.

## Classification on the ledger's distinction

Predominantly a **METHOD-NEVER-APPLIED-TO-THIS-UNIT** case whose question nonetheless **differs**
from the questions the prior literature posed, so it is not disqualified by that rule:
- Zhao et al. Appendix A posed "do the published record times reproduce on our hardware?" and
  answered it (3-run mean and sd, one common upgraded environment, one 8xH100 node, R1–R7 readable).
- METR posed "how is recorded progress distributed by idea type?" and answered it.
- Gundlach et al. 2511.21622 posed "what is the compute-equivalent gain of individual innovations in
  FLOPs?" and answered it, explicitly excluding wall-clock and hardware.
- The candidate poses "what share of the claimed step-downs is statistically distinguishable from
  measurement dispersion, and what share pays at another rung?" — a different estimand with a
  different decision rule. Un-asked on limb (i)'s survival-share estimand.
- **Limb (ii) is a POSED-and-weakly-answered question**, on this object, in a source the Gate 0–3
  record missed: Gundlach, LessWrong, 9 Mar 2026 — "Speedrun gains look similar at 124M parameters
  and 1.5B parameters"; "None of the algorithms in the speedrun clearly fall into this strongly
  scale-dependent bucket"; Keller Jordan quoted that "some of these innovations explicitly are not
  likely to scale". Unreplicated, no CIs, classifications "inherently subjective" and Claude-assisted.

## Attack grades

1. **Triviality — Partial.** I bounded the noise-floor sub-limb in one page (table above): ≤10.69% of
   cumulative log-speedup can fail at a 2% threshold, ≤3.73% at 1%, so "most of the series survives
   within-node re-timing" is predictable without running anything. Not defeated outright: which
   step-downs fail, the node-to-node arm, the period-correct-vs-common arm (r7's PyTorch upgrade is
   8.4% in one step; r92 is a 41% bundled drop), the failure classification and the transfer limb are
   not derivable. The candidate should publish the exposure bound and aim the compute at the
   unbounded limbs.
2. **Disguise — Partial.** Seven fresh vocabularies. The record's own nominated closest analogue,
   Fichte et al. 2008.02215, read in full, does **not** own the design: unit is 6 solvers in two
   3-solver teams (not successive winners), endpoint is instances solved within a 900s timeout,
   **no repetitions**, sd reported only *across the three solvers in a team*, **no share or fraction
   of progress** (conclusion is qualitative), it **never** asks whether a winner's gain over its
   predecessor is inside noise, and the environment is **common/modern, not period-correct**.
   Hernandez & Brown measure FLOPs to AlexNet accuracy (abstract only) — a trend, with no
   claim-vs-remeasurement. 2511.21622 measures FLOPs-to-loss on 1.6M–29M re-implementations, no
   wall-clock, no speedrun, no hardware/toolchain split. But limb (ii) is pre-addressed, weakly, by
   the March 2026 Gundlach post — a real novelty erosion the record did not know about.
3. **Combinatorial novelty — Resolved.** The interface problem is quantified from the primary source:
   acceptance on the time axis requires one unreplicated comparison (rule 4) while the median
   step-down is 1.21% of prior time and measured timing CV is 0.085–0.262%, putting 16–32 of 91
   step-downs in the contested band. And contributors built the missing instrument themselves —
   8 `statistics.md` files, 11 record READMEs with multi-run time sd, paired baseline comparisons,
   all Dec 2025 → Apr 2026 (Fact D). Practitioners feel the gap; this is not a mashup.
4. **Presupposition failure — Partial.** The contested premise P7 is now established in the
   candidate's favour (see above), killing the struck finding. Two further presuppositions are live
   and sourced: **(a) the A1 period-correct arm's feasibility** — the only group that re-timed these
   records could not reconstruct the earlier environment (upgraded PyTorch used for R1–R6 "because
   the authors did not know the earlier version", Fact B), and the only executed time-leap study in
   another field declared period-correctness impossible ("it is impossible to obtain ancient Linux or
   Unix distributions") and used a common modern environment instead; the risk falls on exactly the
   early records holding ~64% of cumulative log-speedup. **(b) one comparable timing regime across
   1→92** — the README states the regime changed after r21 (+850ms, +~3s), r22's recorded time is
   *higher* than r21's, r1 is an external llm.c baseline rather than a submission, and the loss buffer
   is tradeable for time. V2 declares no regime policy.
5. **Vagueness — Partial.** Limb (i) is sharply specified and falsifiable; on a sequential chain the
   log-additive share is an exact partition (Σ log(t_{i−1}/t_i) = log(t_1/t_n)), so the share is not a
   construction. Two residual vaguenesses, both evidenced: the denominator **moves** (the 1–21 share
   was 74.0% before r92, 64.8% after — Fact E), so the headline must be dated; and limb (ii)'s "share
   of cumulative speedup surviving transfer" is **not well-defined as an aggregate**, because
   2511.21622 measures algorithmic gains to be "sub-multiplicative and slightly non-orthogonal"
   (predicted product 16.66x vs measured combined 6.28x), so per-record retentions cannot be composed
   into a share of the 67.67x. V2's clause (d) already reports per-record retention; the headline
   question overreaches beyond it.
6. **Significance inflation — Resolved.** The maintainer's own stated goal is to "find out which
   techniques actually work"; rule 2 proves the community legislates on variance when it sees it; and
   ~15 of 91 records now carry voluntary multi-run timing tables, i.e. the audience has already begun
   a weaker version of limb (i) unprompted. Downstream consumers of the recorded step-downs are
   published and multiplying: Zhao et al.'s FSR denominator, METR, Prime Intellect, Gundlach.
   Honest discount: the bounded exposure (≤10.7%) makes a "mostly real" finding on limb (i) likely
   and low-impact; the force sits on the toolchain arm and transfer.
7. **Reason for silence — Resolved.** Compounding and now evidenced. Load-bearing consumers arrived
   Sept 2025 → 2026. The analysts who decompose the series work from published times and lack the
   hardware — Gundlach "notes that the progress estimates have high variance but does not test
   individual records", which is the gap visible and unfilled. The one group with 8xH100 access
   re-timed as a sanity check for its own denominator and stopped. The community solved the
   submission-level version in practice without ever posing the series-level version.
8. **Dissolution — Partial.** Limb (i) does not dissolve: it yields per-record distributions, a count
   of failing step-downs and a dated share, and the test discriminates for 16–32 of 91 steps. What
   does partly dissolve: the single scalar "share of cumulative speedup" becomes a dated,
   regime-split, two-arm table (V2 half-concedes this); limb (ii)'s aggregate becomes a per-record
   retention table; and "period-correct" may dissolve into "the subset whose environment we could
   rebuild". The question survives as a table, not as a number.

Tally: 3 Resolved, 5 Partial, 0 Unresolved, 0 Unverified.

## Recommendation (judge applies the fatal rule, not me)

Both struck fatal findings fail on first-hand reads. Rules: rule 4 imposes no replication at all.
Appendix A: a narrower posed-and-answered question (3 runs, one common upgraded non-period-correct
environment, one node, R1–R7 readable, no per-step-down test, no failure classification, no transfer).
Accept, at reduced confidence, conditional on reformulating the headline estimand: date it, split it
by timing regime at record 21, exclude or flag r1 as an external baseline and r22 as negative, and
restate limb (ii) as a per-record retention table rather than a share of cumulative speedup.

## Strongest remaining objection

The A1 period-correct arm — the candidate's distinctive contribution over Appendix A — rests on a
capability that has already failed twice in the record: Zhao et al. could not determine the earlier
PyTorch version and ran R1–R6 in one upgraded environment, and Fichte et al. declared period-correct
environments impossible and substituted a common modern one. If A1 degenerates, the design collapses
toward Appendix A's (common environment, more reps, more nodes) and the novel residue is the
significance-tested surviving share plus the transfer ladder — the latter already addressed
qualitatively, on this very object, by Gundlach (9 Mar 2026).
