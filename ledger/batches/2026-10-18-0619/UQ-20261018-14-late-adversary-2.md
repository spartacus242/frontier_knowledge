# UQ-20261018-14 — LATE Gate 4, adversary 2 of 2 (independent, cold)

Date: 2026-10-18. Prior Gate 4 verdict STRUCK; not read. Files read in this directory: ONLY
`UQ-20261018-14-record.md`. No -entry/-adversary-1/-adversary-2(prior)/-adversary-3/-verify- file opened.

Budget used: 7 web searches, 4 web fetches (cap 8 / 6). 1 failed non-web route (logged below).

## Read levels

| Item | Level |
|---|---|
| Gate 0–3 record (local) | FULL TEXT |
| modded-nanogpt README "World record history" table, all 94 rows | FULL TEXT of the table, via summariser; cross-checked against 5 independent anchors in Fact E (R1=45, R21=2.933 01/26/25, R21 re-timings 2.997 & 3.014, R72=1.496 02/10/26, R92=0.665 08/30/26) — all 5 match |
| Mühlbauer, Apel, Siegmund, "Identifying Software Performance Changes Across Variants and Versions", ASE '20 | PDF (via summariser); author line checked against printed first page + ACM reference line |
| Böhm, Sattler, Siegmund, Apel, arXiv:2511.17271 | PDF, chars 0–100,000 of 104,479 — final 4,479 NOT READ (PARTIAL PDF); author line from printed first page |
| larry-dial, "How the NanoGPT Speedrun WR dropped by 20% in 3 months", 5 Oct 2025 | FULL TEXT (via summariser, LW/greaterwrong mirror) |
| Fichte et al. arXiv:2008.02215 (SAT time leap) | NOT OPENED by me — relying on Established Fact F only |
| Zhao et al. 2506.22419 Appendix A | NOT OPENED by me — relying on Established Fact B only |

## Failed route (exact error text)

`mcp__github__get_file_contents` owner=KellerJordan repo=modded-nanogpt path=README.md →
"Access denied: repository \"kellerjordan/modded-nanogpt\" is not configured for this session. Allowed
repositories: spartacus242/frontier_knowledge. If the add_repo tool (mcp__claude-code-remote__add_repo) is
available in this session, ask the user whether to add this repository to it — check list_repos first to see
what the workspace can reach. Do not add repositories the user has not asked for; if add_repo is not
available, this repository cannot be added to this session."
Not retried, not reworded. I reached the same table through the already-in-conversation github.com page.

## THE DECISIVE NEW ARITHMETIC (what the Established Facts do not settle)

Fact E gave three anchors and an aggregate (64.8%). It did not give the per-step distribution. I fetched the
full 94-row table and computed every consecutive relative step-down (t_{i-1}-t_i)/t_{i-1}, then compared it
to the noise floor implied by the contributors' OWN published dispersion (Fact D).

Measured within-submission timing CV from Fact D:
- pr299, n=20: sd 71.6 ms on mean 84,429.5 ms → **CV = 0.085%**
- other file, n=13: sd 202.9 on mean 77,337.6 → **CV = 0.262%**

Minimum detectable step-down under the candidate's own rule (two-sample, n=5 per arm, p<0.01, t≈3.36, ~8 df;
SE_diff = CV·sqrt(2/5)):
- tight CV: 3.36 × 0.054% ≈ **0.18%**
- loose CV: 3.36 × 0.166% ≈ **0.56%**

Step-downs below 0.56% (the LOOSE floor), 17 of 91 steps:
22→23 0.37, 23→24 0.44, 27→28 0.18, 29→30 0.51, 36→37 0.48, 37→38 0.28, 40→41 0.55, 46→47 0.45,
62→63 0.30, 67→68 0.32, 68→69 0.46, 69→70 0.46, 70→71 0.33, 75→76 0.48, 79→80 0.35, 85→86 0.39, 90→91 0.35.
Smallest step in the whole series is 0.18% (27→28), i.e. AT the tight floor, above nothing.

Log-share held by those 17 steps: sum of -ln(1-p) ≈ 0.0670 against a series total ln(45/0.665) = 4.2146.
**= 1.6% of the cumulative log-speedup.** Under the tight CV, essentially 0%.

Consequences:
1. Limb (i)'s headline — "what share of the recorded speedup is measurement" — is computable **at a desk
   today** from (a) the public table and (b) the contributors' published dispersion. The answer is
   "≤ about 2%, probably ~0%". The record's own pre-committed "all real" branch is the foreseeable outcome.
2. BUT the *count* output is not trivial and is not foreseeable-dull: ~17 of 91 accepted step-downs
   (about 1 in 5) sit inside the loose measured floor. That is a real, interesting number for audience 1
   even though its log-share is negligible. The candidate does ask for a count as well as a share.
3. Audience 2's stated dependency fails. Fact B establishes the Zhao et al. benchmark's 19 tasks are drawn
   from records 1–21 with R7 excluded. From my table, the SMALLEST step-down anywhere in records 1→21 is
   20→21 at **2.0%**, and the rest run 2.0%–31.8%. That is 4× to 11× the loose noise floor and 11× to 170×
   the tight one. So "a step-down inside the noise floor makes the FSR denominator partly noise by
   construction" is FALSE for the actual task set. (I did not verify the FSR formula itself — record-asserted,
   and Fact A shows the record even misattributes the paper to "Jiang et al." when it is Zhao et al. My
   deflation does not depend on the formula, only on which records the tasks come from.)
4. Cost pillar of the Reason-for-silence is ~10× overstated. Sum of all 92 record times ≈ 364 min ≈ 6.1
   node-hours per full pass (records 1–21 alone ≈ 235.8 min; records 22–92 ≈ 128 min). 5 reps × 2 nodes =
   ~61 node-hours ≈ **~490 H100-hours**; with compile/warmup overhead and two environment arms, order
   1,000–3,000 H100-hours, not the record's "~20,000". The record's arithmetic used "a generous mean of ~20
   min per run" against a series whose median record is ~1.9 min. A single motivated contributor can afford
   the re-timing limb.

Secondary findings from the table:
- **Non-monotone pair at the regime break.** Record 22 (2.990, 05/24/25) is SLOWER than record 21's original
  2.933 and is a record only against the 3.014 re-timing. So "the cumulative recorded wall-clock speedup"
  is not a product of monotone step-downs unless a convention is stated at the break. V2 states none.
- **Record 92 alone is ln(1.126/0.665)/4.2146 = 12.5%** of the cumulative log-speedup, in one bundled record.
- **Census instability.** The series gains a record every few days (R83→R92 in 3 months). Fact E's 64.8% was
  74.0% before R92. V2 pins no census date and no record count.
- Records dated Dec 2025 onward (R47→R92) hold ln(2.203/0.665)/4.2146 = **28.4%** of the cumulative
  log-speedup — exactly the window in which Fact D's ~15 contributor multi-run timing tables exist.

## Disguise sweep — queries I ran (vocabularies the record did not try)

1. software performance microbenchmark run-to-run noise / what share of reported performance changes in commit
   history are indistinguishable from measurement variability → ElastiBench 2405.13528; Laaber et al.
   "Software Microbenchmarking in the Cloud. How Bad is it Really?"; ICPE 2016 p37; "Automated Identification
   of Performance Changes at Code Level" 2303.14256.
2. re-measuring historical revisions of a software project / repeated runs / identify real performance changes
   / performance evolution of configurable systems → **Mühlbauer, Apel, Siegmund ASE '20 (OPENED)**;
   "Accurate Modeling of Performance Histories for Evolving Software Systems"; **arXiv 2511.17271 (OPENED)**.
3. modded-nanogpt speedrun timing variance noise floor re-timing old records → the repo; Zhao et al.;
   "Speedrunning Tabular Foundation Model Pretraining" 2606.03681 (not opened); alexjc/nanogpt-speedrun.
4. audit of reported speedups in systems research / fraction failing to reproduce / cumulative speedup
   decomposition → Touati, "Towards a Statistical Methodology to Evaluate Program Speedups" 0902.1035 /
   the Speedup-Test; "Does Systems Research Measure Up".
5. critique nanogpt speedrun records within measurement noise / are the speedups real → **LW post (OPENED)**;
   "Measuring the Dark Energy of AI Progress"; Prime Intellect "measuring autonomous research"; METR note.
6. do nanogpt speedrun techniques hold at larger scale 2026 / retained speedup / transfer → same cluster,
   nothing new; no transfer study.
7. performance history, every revision re-run, repeated measurements, fraction of claimed improvements
   statistically significant → MongoDB "Creating a Virtuous Cycle in Performance Testing" 2101.10231;
   SWE-Perf 2507.12415; "Rethinking Code Performance Benchmarks for LLMs" 2607.07619 (not opened);
   codspeed "benchmarks in CI without noise"; Kalibera regression benchmarking.

What the sweep establishes: the candidate's MACHINERY now shows up in a **fifth** independent vocabulary
(software-engineering performance-regression / performance-history), on top of the four the record named
(HPC variability, empirical algorithmics, benchmark metrology, decision-analysis/winner's-curse). Mühlbauer
et al. re-measure a commit history with 5 repetitions and separate real changes from noise with a 10%
threshold ("a rather conservative threshold"), one hardware setup, no claimed-improvement series, no share
estimand, no two environment arms, no transfer rung. Böhm et al. 2511.17271 use 10 repetitions and flag a
regression at max(0.1·mean, 3σ′) — a noise-floor rule — on synthetic scenarios, seeded Coreutils patches and
PICOSAT release pairs; "we performed all measurements on identical hardware with an identical environment";
explicitly NO share-of-claimed-speedup, NO leaderboard subject, NO period-correct arm, NO scale transfer.
The LW post (larry-dial, 05/10/2025) re-runs nothing, reports no repetition count, and its only "variance"
is "Lower variance gradients" (gradients, not timing); it apportions nothing and states transfer only as an
expectation. So: **the estimand is nowhere; the method is everywhere.** That cuts attack 2 but feeds 1, 3 and 7.

## Classification (the ledger's three-way distinction)

The candidate is a composite and must be split:
- **Limb (i), same-node / same-environment re-timing share:** a METHOD never applied to this unit, whose
  question does NOT differ enough to rescue it, because its answer is now derivable from already-published
  numbers (see arithmetic). Not an un-asked question in the ledger's sense; closest to "method never applied,
  answer foreseeable".
- **Limb (ii), transfer:** POSED IN PRINT AND NOT ANSWERED → an OPEN PROBLEM, not an un-asked question.
  METR states the worry and footnotes it ("small-scale-only tricks likely won't"); the LW post states it as
  an expectation; a third-party 1.6B attempt exists. Nobody has measured it.
- **The A1/A2 environment arm (period-correct vs one common modern environment):** this is the one genuinely
  UN-ASKED piece. Fact B establishes that the only team that re-timed the series ran it in ONE COMMON
  UPGRADED environment and could not even determine the pre-R7 PyTorch version — i.e. they took arm A2 only,
  and the period-correct arm has never been attempted on this ledger. It is also where the answer is not
  foreseeable (R7, R25, R66 are software-upgrade records; Fact B's own R7 exclusion is the only published
  data point). It is not the limb the question leads with.

## Attack-by-attack

**1 Triviality — PARTIAL.** Not a page for the whole question (transfer ladder, failure census, two arms
need real compute). But limb (i)'s headline is a page: the public table plus Fact D's published CVs give
"≤1.6% of cumulative log-speedup sits below a p<0.01/n=5 floor; probably ~0%". The record never computed
this, and its framing ("how much is measurement") advertises the limb whose answer is foreseeable. The
surviving non-trivial content is the count (17/91), the toolchain arm, transfer, and the failure census.

**2 Disguise — RESOLVED.** Five vocabularies swept across the record's work and mine; the machinery is
mature in all five and the estimand appears in none. Two nearest-in-vocabulary candidates opened at first
hand (Mühlbauer ASE '20; Böhm 2511.17271) both measure commit-pair regressions on one environment with no
claimed-improvement series and no share. The LW post opened and is narrative attribution, not an audit.

**3 Combinatorial novelty — RESOLVED.** The interface problem is demonstrated, not constructed: Fact D shows
contributors spontaneously built the instrument (8 statistics.md files, 11 record READMEs with time sd, an
explicit paired "baseline (n=10) against pr299 (n=20)" with a −964.8 ms delta), and Fact C/E show the
maintainer himself changed the timing regime after record 21 and published two re-timing rows annotated
"not a new record, just re-timing". The two fields meet on a problem both sides already act on.

**4 Presupposition failure — PARTIAL.** The central premise is now ESTABLISHED and the struck finding is
dead: per Fact C, rule 2's p<0.01 governs the LOSS axis only and is waived outright for pure
systems-performance speedups, and rule 4 carries no significance requirement, no paired runs, no replication
count. So the variance control does sit on the non-record axis. Three residual defects keep this off
Resolved: (a) **arm A1's feasibility is contested by first-hand evidence** — Fact B reports the benchmark
team could not determine the earlier PyTorch version for R1–R6 and therefore ran one common upgraded
environment, so "each record in its own period-correct pinned environment" may be unreconstructible for
exactly the records holding 64% of the log-speedup; (b) V2 justifies its p<0.01 as "the same level the record
rules impose on loss", but Fact C shows there is no unconditional p<0.01 in the rules — it is conditional and
waived for the submission class most likely to be noise-sized, so the mirroring rationale is mis-stated
(the design survives, its warrant weakens); (c) the framing figures are stale/wrong — "about 90 seconds"
is ~record 72 against a current 39.9 s, METR's "31×" is now 67.7×, and record 1 (45 min, llm.c) is an
external reproduction rather than a submission under these rules, so step 1→2 (30.2%, the second-largest in
the series) has a non-submission left endpoint.

**5 Vagueness — PARTIAL.** Readings are pre-committed and signed, which defeats the pure form of the attack.
But three live under-specifications let the number be chosen rather than measured: (a) "a **material** share
of the cumulative log-speedup" has no threshold, and on my arithmetic the honest answer (1.6%) could be read
into either branch by a motivated writer; (b) no census date or record count is pinned, and Fact E plus my
table show the headline moves 10 points on one record (74.0% → 64.8%) in a series gaining records weekly;
(c) the denominator ("the total log ratio of the series' cumulative speedup") is not declared as recorded or
re-timed, and at the record-21 regime break the recorded series is non-monotone (R22 = 2.990 > R21 = 2.933),
so the convention is load-bearing and unstated.

**6 Significance inflation — PARTIAL.** Audience 1 is evidenced by revealed preference, and strongly: Fact D
is the community building this exact instrument of its own accord from Dec 2025, with paired baselines and
pooled sd. Two deflations, though. First, audience 2's stated dependency does not hold: the benchmark's 19
tasks come from records 1–21, whose smallest step-down is 2.0%, far above any measured floor — so the FSR
denominators are not noise-contaminated and nothing of theirs needs re-scoring. Second, the limb that carries
the rhetorical force resolves to the dull branch by desk arithmetic, so the "31× may be partly measurement"
selling point is not available. What is left and real: a count-based finding for audience 1 (≈1 in 5 accepted
step-downs sits inside the measured floor, and the rules impose nothing on those), the toolchain/method split
(audiences 3–4), and transfer (audience 3, and METR's own stated worry). Also note the fix audience 1 would
be told to adopt is already their de facto practice for new submissions; the unserved need is retrospective
and governs the pre-Dec-2025 ~72% of the log-speedup.

**7 Reason for silence — PARTIAL.** Credible mechanisms survive and two are first-hand: the only team that
re-timed the history did it as a by-product and put everything quantitative in an unreadable figure (Fact B),
and community attention went PROSPECTIVE and per-submission rather than retrospective and per-series
(Fact D, Dec 2025 onward only). The disciplinary-boundary mechanism is strengthened by my sweep (five
method-owning vocabularies, none interested in a GPT-2 leaderboard). But the record's third pillar, cost, is
quantitatively defective by ~10× on its own data, and once the audit is cheap a competing explanation becomes
live that I cannot exclude: nobody ran limb (i) because its answer was foreseeable. That is attack 1 wearing
a different hat, and it is the honest reason the status is not Resolved. The silence on the transfer limb and
on the period-correct arm remains well explained (cost at a 2–4× rung; environment unreconstructibility).

**8 Dissolution — PARTIAL.** It does not fully dissolve: the count of non-separating step-downs, the A1/A2
environment contrast and the per-record retained speedup at a declared rung are genuine measurements with
determinate values. But three dissolution pressures are real and sourced. (a) The "share" is an accounting
convention, not a causal decomposition — Fact E's own words — across a series whose timing regime changes at
record 21 (grace steps replaced by untimed warmup, "an extra runtime of 850ms from the 10 extra timed steps";
coordinate_descent_tuning banned, "an extra runtime of ~3s"), whose batch/step budgets change, and several of
whose records ARE software upgrades. (b) The survival verdict is a function of n, not of the ledger's quality:
at the measured CVs, n=5 already separates 0.2–0.6% steps, so "share surviving" reports the protocol's
resolution. (c) The unit is coarsest where the gain is largest — record 92 alone is 12.5% of the cumulative
log-speedup in one bundled record, and V2 puts per-idea attribution out of scope (P4), so for an eighth of
the series the answer is "one bundle, survives", which answers nothing anyone wanted to know.

## Strongest remaining objection

Attack 1, in the specific form: limb (i)'s headline number is derivable today from the public record table
plus the contributors' own published timing dispersion, and it derives to the dull branch (≤~2%, probably
~0%). Everything in the candidate that is both non-derivable and un-asked — the period-correct-vs-common
environment arm, the failure census, the count of sub-floor step-downs — is reachable by a materially
smaller question than V2, and V2's transfer limb is an open problem already posed in print rather than an
un-asked question. A reformulation that led with the toolchain arm and the count would be stronger than this
one; as written, the question leads with its weakest limb.
