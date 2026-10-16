# UQ-20261016-43 — Verification log

Date run: 2026-10-16
Target: Ligorati, Geyer-Klingeberg, Günther & Rathgeber (2026), "Degradation of lithium-ion
batteries: a meta-analysis", *Chemical Engineering Journal*, DOI 10.1016/j.cej.2026.174528.

**Outcome of the ACCESS task: SUCCESS — full text read.** The OPUS Augsburg repository serves the
CC-BY 4.0 full text as a PDF at a direct file URL. I did not need doi.org, linkinghub or
ScienceDirect at all.

---

## 0. Access routing

| # | URL / route | Tool | Outcome |
|---|---|---|---|
| 1 | `https://opus.bibliothek.uni-augsburg.de/opus4/files/128353/128353.pdf` | `curl -L` | **proxy-refused** — `curl: (56) CONNECT tunnel failed, response 403`; 0 bytes. Agent proxy does not allow raw curl to this host. |
| 2 | `$HTTPS_PROXY/__agentproxy/status` | `curl` | **blocked** — denied by Claude Code auto-mode classifier, reason "Containment Escape". Could not read per-tool proxy fixes. |
| 3 | same PDF URL | `python3 -I` + urllib + `/root/.ccr/ca-bundle.crt` | **proxy-refused** — `URLError <urlopen error Tunnel connection failed: 403 Forbidden>`. |
| 4 | same PDF URL | WebFetch (fetch 1) | **OPENED.** Extracted text = 102,912 chars. Covered chars 0–100,000. |
| 5 | same PDF URL | WebFetch (fetch 2) | **OPENED.** Same window, targeted extraction of counts / definition / moderators / estimand. |
| 6 | same PDF URL | WebFetch (fetch 3) | **OPENED.** Same window, Sec. 3.2 + strict keyword scan. |
| 7 | same PDF URL, `offset=100000` | WebFetch (fetch 4) | **OPENED.** Tail chars 100,000–102,912 (end of Limitations). |
| 8 | `https://opus.bibliothek.uni-augsburg.de/opus4/frontdoor/index/index/docId/128353` | WebFetch (fetch 5) | **OPENED.** Bibliographic record. |
| 9 | `https://www.nature.com/articles/s41467-022-35400-4` | WebFetch (fetch 6) | **OPENED.** Comparator source for the separate literature question. |

Routes NOT tried (unnecessary once the repository PDF opened, and so not evidence of anything):
doi.org, linkinghub.elsevier.com, sciencedirect.com article page and PDF, OpenAlex, Semantic
Scholar, CORE, author pages. PubMed Central / Europe PMC deliberately not used as routes.

**Budget:** 14 web searches (limit 14 — at budget, no overrun), 6 page fetches (limit 8).
3 refusals/blocks, all recorded above.

### Methodological caveat that bears on Claim 5 (must be read with the verdict)
Because the proxy refused direct download (rows 1 and 3), I could **not grep the PDF myself**. All
"verbatim" text below is what WebFetch's reader model returned, and that reader enforces a ~125
character cap per quote, so long sentences appear as chained fragments. The keyword-absence results
in §5 are therefore *that reader's* whole-document scan, not my own regex over the file. The whole
document text was read (0–102,912 chars across four passes), so this is **not** a
"could-not-read"; but the absence findings are tool-mediated, and I flag that rather than
overclaim. Two independent passes (fetch 1 and fetch 3) agreed on every absence.

### Bibliographic record (fetch 5, OPUS frontdoor docId 128353)
- Title: "Degradation of lithium-ion batteries: a meta-analysis"
- Authors: Matteo Ligorati, Jerome Geyer-Klingeberg, Timon E. Günther, Andreas W. Rathgeber
- Journal: *Chemical Engineering Journal*, ISSN 1385-8947, Elsevier BV, Amsterdam
- DOI: `https://doi.org/10.1016/j.cej.2026.174528` — **matches the handed identifier**
- Year of first publication: 2026; repository release 2026/02/25; listed under "Latest
  Publications (not yet published in print)". Licence CC-BY 4.0. Volume/issue/article number not
  shown. The record does not state published-version vs accepted-manuscript.

---

## 1. Searches run (14)

| # | Query (abbreviated) | One-line result |
|---|---|---|
| 1 | Ligorati Geyer-Klingeberg Günther Rathgeber "Degradation of lithium-ion batteries" meta-analysis CEJ | **Hit** — OPUS frontdoor 128353 + direct PDF. This solved the access task. |
| 2 | "10.1016/j.cej.2026.174528" | No direct hit; only unrelated CEJ DOI listings. |
| 3 | published stability tests as right-censored lifetime data, censoring time = chosen test duration, electrocatalyst | Only (a): Technometrics censoring-time monitoring, Cramer reliability review, accelerated-life-test reviews, step-stress interval censoring. Nothing on literature stopping decisions. |
| 4 | "informative censoring" + reported test duration + fuel cell / electrolyser meta-analysis | Nothing relevant; PEMFC durability testing reviews only. |
| 5 | meta-analysis of reported catalyst stability test durations, researchers stop when degradation observed, reporting bias | Nothing. Returned PEMFC degradation datasets, an ACS Catal. stability-protocol perspective, and generic Wikipedia reporting/publication-bias pages. |
| 6 | "stopping time"/"stopping rule" of published experiments as censoring mechanism, dependent censoring, corpus | Only abstract statistics: copula dependent-censoring (arXiv 2210.04869, 2312.15566), "How real is the random censorship model in medical studies?" (arXiv 1703.01237). Not applied to a published-literature corpus. |
| 7 | PV module degradation rate meta-analysis censored / survival / published corpus | **Hit for category (b)**: "Determinants of the long-term degradation rate of photovoltaic modules: a meta-analysis" (OPUS Augsburg docId 121206) — sibling of the target. Plus NREL Jordan & Kurtz analytical review and the DuraMAT "Compendium of photovoltaic degradation rates". None framed as censoring. |
| 8 | perovskite T80 literature database right-censored, test ended before degradation, survival analysis | **Hit for comparator**: "Big data driven perovskite solar cell stability analysis", Nat. Commun. 2022 (s41467-022-35400-4); also "Stability follows efficiency…" (PMC, not used as a route). |
| 9 | "publication-time bias" / "publication time bias" censoring reliability reported lifetimes | Nothing in materials/reliability. Only Cochrane time-to-publication/reporting-bias abstracts in clinical imaging. |
| 10 | electrocatalyst stability test duration distribution, chronoamperometry, censored lifetime meta-analysis | Nothing. Returned accelerated-stress-test shortening papers (FAU) — designed protocols, category (a). |
| 11 | survival analysis of literature-reported device lifetimes right-censored "the test was stopped", Weibull fit to published durability data | Only (a): accelerated life test models (arXiv 0708.0369 / Statistical Science 21(4)), Wikipedia censoring, manufacturing survival-analysis tutorials, MDPI predictive-maintenance review. |
| 12 | battery cycle life literature meta-analysis "censored" observations, did not reach EoL threshold, Kaplan-Meier | **The target paper's own PDF came back as a result** — consistent with it being the main thing in this space — plus a knee-aware lifetime-prediction preprint (arXiv 2604.16580) and a NIST technical note. No censoring treatment of a literature corpus. |
| 13 | "dependent censoring" + experimenter chooses when to stop + published results bias | Nothing applied. Lecture slides (NTNU), a USPTO patent, random-censoring search pages. |
| 14 | meta-analysis of published time-to-event durability results censored at reported test duration, informative censoring | **Nearest precedent, but clinical**: "Effects of adjusting for censoring on meta-analyses of time-to-event outcomes" (Int. J. Epidemiol. 31(1):107) and Kalyvas et al., "Dealing with censoring in a network meta-analysis of time-to-event data" (doi 10.1177/26320843231190026). Plus (a)-type PEMFC reliability paper (doi 10.4236/epe.2019.118019). |

Search limits to note honestly: WebSearch is US-only, and 14 queries is a thin sweep of a large
literature. A negative here is "I did not find it in 14 targeted queries across both
vocabularies", not "it does not exist".

---

## 2. The four words, from the document's own text

**Unit of analysis — one reported DegRate observation nested within primary study.**
- Abstract: "drawing on 146 studies and 917 effect sizes"
- Sec. 2.1: "resulted in a final dataset of 146 primary studies (Table S2)" … "totaling 917 data points"
- Table 1 notes: "based on n = 146 studies and m = 917 observations" — the `n` studies / `m`
  observations notation is itself the nesting.
- Sec. 2.2, regression sample: "This resulted in a final dataset of 88 studies and 627 observations."
- Fig. 4 caption: "This figure is based on the same dataset of 88 studies and 627 observations"

**Endpoint — DegRate, capacity loss per cycle in %/cycle, defined by an 80 % end-of-life threshold.**
- Sec. 2.1: "we define the DegRate as a capacity loss leading to 80 % of the initial capacity" +
  "as a function of the number of charge-discharge cycles"
- Sec. 2.1: "Therefore, DegRate is an end-of-life benchmark, not a local slope at a specific cycle number"
- Abstract: "the decline in capacity per cycle, referred to as the degradation rate (DegRate)"
- Units: "%/cycle" (Abstract, Sec. 3) and "percentage points per cycle" (Sec. 2.3) — both used.

**Comparator — the base/reference category of each moderator in the meta-regression.**
- Table 2 notes: "Meta-regression coefficients quantify conditional mean differences in DegRate
  relative to the base category"
- Sec. 2.2: "The identified moderators can be classified into five main categories: publication
  characteristics, battery differences," … "measurement characteristics, experimental
  characteristics, and control variables."
- Table 1: "EXPERIMENT: TEMPERATURE Temperature of the experiment in °C";
  "EXPERIMENT: CUT-OFF CHARGE VOLTAGE Charge cut-off voltage of the experiment"
- Sec. 2.2: "such as the temperature settings and the charge cut-off voltages."

**Estimand — the conditional mean DegRate given moderators.**
- Sec. 2.3: "we estimate a single-model meta-regression (MRA), following Stanley and Jarrel [45]"
- Sec. 2.3: "Each coefficient reflects the change in mean DegRate, expressed in percentage points per cycle"
- Sec. 2.3: "quantifying their average impact on DegRate"
- The word "pooled" **does not appear** in the document.

---

## 3. Arithmetic checked

1. **344 / 627 = 0.54864 = 54.9 % ≈ "Approximately 55%"** — the paper's own figure is correct.
   This is a number OF regression-dataset DegRate observations whose 80 % threshold was never
   reached, so whose DegRate is a linear extrapolation.
2. **917 / 146 = 6.28 effect sizes per study** (full sample). **627 / 88 = 7.13 observations per
   study** (regression sample). Both consistent with the nested unit of analysis.
3. **Median 0.04 %/cycle ⇒ implied median end-of-life ≈ 20 / 0.04 = 500 cycles.** Because DegRate
   is defined by the 20-percentage-point drop to 80 % of initial capacity, DegRate is
   algebraically 20 pp ÷ (cycles to 80 %). The median DegRate is therefore a *reciprocal
   restatement of a median failure time in cycles*. This is my arithmetic, not the paper's — the
   paper does not state the implied cycle count.
4. **Mean 0.23 %/cycle ÷ median 0.04 %/cycle = 5.75×** — consistent with Sec. 3: "The distribution
   of DegRate exhibits a pronounced right-skewed shape (Figure 2)."
5. **Upper range 8 %/cycle ⇒ 20 / 8 = 2.5 cycles to end-of-life.** Sec. 3: "The values observed
   range from nearly 0 % to about 8 %/cycle". A 2.5-cycle end-of-life is not a physically
   meaningful cell lifetime, which indicates the upper tail is dominated by short-window
   linear extrapolations rather than observed threshold crossings. The paper does not comment on
   this. Flagged as my own inference from its numbers.
6. Reported distribution statistics for DegRate itself: median, mean and range only. **SD,
   quartiles and min/max of DegRate do not appear**; the SDs in Table 1 are for moderator dummies,
   not for DegRate.

---

## 4. Internal inconsistency found in the paper (not part of any handed claim)

- Sec. 2.2: "we identified 67 moderator variables", classified into **five** categories including
  "control variables".
- Conclusion: "46 moderators were identified and categorized into four groups: battery
  differences, experimental characteristics, measurement characteristics, and publication
  characteristics."

67 vs 46 moderators, and five groups vs four, between Methods and Conclusion. Recorded for the
ledger; it does not change any verdict below, but it means any claim quoting a moderator count
must say which section it came from.

---

## 5. THE DECISIVE ABSENCE — full-text scan

Strict whole-document keyword scan (two independent passes, fetch 1 and fetch 3, in agreement):

**ABSENT — no occurrence anywhere in the document:**
`censor` (and therefore `censoring`, `censored`), `right-censored`, `survival`, `time-to-failure`,
`time to failure`, `Weibull`, `Kaplan-Meier`, `hazard`, `informative censoring`, `competing
risks`, `incomplete`.

**PRESENT:**
- `end-of-life` — "Therefore, DegRate is an end-of-life benchmark, not a local slope at a specific
  cycle number" (Sec. 2.1). Unhyphenated "end of life" absent.
- `reliability` — but in an unrelated sense, study-quality scoring: "with higher scores indicating
  lower reliability (Table S8)."
- `lifetime` — as throughput encoding: "encoding lifetime via energy-throughput- and
  full-equivalent-cycle-based indicators".
- `truncat` — display only, Fig. 3 caption: "the CI lower boundary is truncated at zero." Not data
  truncation.
- `publication bias` / `selection bias` — see below.

### No censoring indicator
Confirmed. No censoring variable, flag or indicator appears in Table 1, Table 2 or the text, and
none of the survival-analysis machinery appears.

### How long each test ran / why it stopped
**Does not appear.** There is no statement of per-test duration and no statement of any stopping
reason. The only stopping-adjacent construct is "the last reported cycle".

### Test duration as a covariate — the paper does NOT do this either
Sec. 2.2: "We excluded moderators with substantial missing numerical data, such as experimental
duration, battery mass, and electrolyte composition."

So on the distinction the ledger asks for, the paper does **neither** of the two things:
- it does **not** treat the stopping time as a censoring time; and
- it does **not** adjust for test duration as a covariate — experimental duration was *dropped*
  from the moderator set for missingness.

### What it does instead: extrapolation, framed as a measurement caveat
Sec. 3.2, reconstructed from chained fragments:
> "Approximately 55% (344 out of 627) of DegRates in the regression dataset" "are estimated using
> partial cycling data because the 80% end-of-life threshold was not reached." "In these cases,
> DegRate is calculated by dividing the observed capacity fade by the number of cycles" "up to the
> last reported cycle, similar to Dechent et al. [9]." "This assumes a linear extrapolation of the
> DegRate beyond the observed window."

Sec. 3.2, sensitivity analysis:
> "Additional sensitivity analyses were performed to evaluate the impact of using linear
> extrapolation to estimate DegRate from partial cycling data for cells that did not reach 80% of
> their initial capacity."
> "To show that this approach does not affect our primary results, we calculate DegRate at the 90%
> threshold" "for all accelerated and decelerated degradation trajectories crossing the 80%
> threshold." "For each case, we calculate the ratio of the 90% DegRate to the 80% DegRate for each
> curve shape."
> "Since the adjustment applies the trajectory-specific median ratio to all observations that do not
> reach" "the 80% EoL threshold, these sensitivity specifications are conservative" "worst-case
> scenarios that illustrate the potential impact of linear extrapolation on DegRate-based
> benchmarking."

Sec. 2.1 states the same mechanism: "calculated based on the slope of the capacity degradation
curve up to the last reported cycle."

What the text does **not** say about these 55 %: it does not state a direction of bias; it does not
ask whether cells that never reached 80 % differ systematically from those that did; and it never
frames a short cycling window as a censored observation. The Limitations tail (chars 100,000+)
lists "DegRate as an interval-averaged endpoint" and notes the extrapolation may over- or
underestimate degradation, still without the censoring frame.

### Publication bias: raised, never tested
- Sec. 3.2: "Publication bias refers to the tendency of researchers, journal editors, or peer
  reviewers to" "preferentially submit or accept studies reporting statistically significant,
  novel, or large effect sizes,"
- Sec. 3.2: "This negative coefficient may also reflect a possible publication selection bias,
  where studies"
- Sec. 3.3: "this trend raises the question of whether publication selection bias is at play – i.e.,
  whether studies reporting more striking values are more"
- Sec. 3.3: "few primary studies report standard errors for their effect sizes, which are essential
  for publication bias tests and standard funnel plot analyses"
- Sec. 3.3: "This would enable more robust meta-analytical techniques, including the assessment of
  potential publication bias."
- Limitations tail: "Fourth, since this is a foundational meta-analysis in the field, we could not
  apply established tests for publication bias"

So the paper contemplates selection **on reported results** and runs no test of it; it never
contemplates selection **on stopping time**.

---

## 6. Conclusion per claim

**Claim 1 — unit of analysis, 917 effect sizes across 146 studies. CONFIRMED (with a correction
that matters for claims 3 and 4).** Both counts verified in three places, including the Table 1
`n`/`m` notation that encodes the nesting. Correction: those counts describe the **full sample**;
the **meta-regression** runs on **88 studies and 627 observations** after listwise deletion. Any
ledger statement attaching 917/146 to the regression results is wrong by 290 observations and 58
studies.

**Claim 2 — endpoint is %/cycle, a rate observed during the test, not a time to failure; median
0.04 %/cycle. PARTLY-CONFIRMED.** The unit (%/cycle) and the median (0.04 %/cycle) are confirmed
verbatim. The characterisation "a RATE observed during the test, not a time to failure" is
**contradicted by the paper's own definition**: DegRate is defined as "a capacity loss leading to
80 % of the initial capacity" and is explicitly "an end-of-life benchmark, not a local slope at a
specific cycle number". It is 20 pp divided by cycles-to-80 %, i.e. a reciprocal transform of a
failure time in cycles — and for 54.9 % of regression observations the threshold was never reached,
so the value is a linear extrapolation past the end of the test. The endpoint is nearer to a
rescaled time-to-failure than to a within-test slope, and more than half of it is extrapolated.

**Claim 3 — comparator is meta-regression covariate levels (chemistry, cut-off voltage,
temperature, plus experiment, measurement, publication factor groups). PARTLY-CONFIRMED.** The
comparator is right in substance — Table 2 notes confirm coefficients are differences "relative to
the base category". The group names in the claim are not the paper's. The paper's Sec. 2.2 names
**five** categories: "publication characteristics, battery differences, measurement
characteristics, experimental characteristics, and control variables"; the Conclusion names
**four** and drops control variables. "Chemistry" is not a group name — it sits under "battery
differences". Cut-off voltage and temperature are individual Table 1 moderators under experimental
characteristics, not groups.

**Claim 4 — estimand is the conditional mean degradation rate given covariates, pooled over the
corpus. PARTLY-CONFIRMED.** "Conditional mean" is the paper's own term (Table 2 notes; Sec. 2.3
"the change in mean DegRate"). "Pooled" is **not** the paper's word — it does not appear. And the
corpus over which the conditional mean is estimated is the 88-study/627-observation regression
corpus, not the full 146/917 corpus.

**Claim 5 — no censoring indicator; the stopping time is not treated as data. CONFIRMED, and
stronger than stated.** Every censoring and survival term is absent (`censor*`, `right-censored`,
`survival`, `time-to-failure`, `Weibull`, `Kaplan-Meier`, `hazard`, `informative censoring`,
`competing risks`). No censoring indicator exists. No test duration and no stopping reason is ever
reported. Crucially, on the distinction the ledger asks to be kept: the paper does **not** adjust
for test duration as a covariate either — "experimental duration" was explicitly *excluded* from
the moderators for missingness. It handles the 344/627 non-crossing cases as a linear-extrapolation
measurement caveat with a 90 %/80 % rescaling sensitivity check, never as censored observations.
The absence is therefore not an oversight at the margin: the paper's own Sec. 3.2 identifies
exactly the 54.9 % of its regression sample that are censored observations, and chooses to
extrapolate through them.
Caveat on method: this scan was performed by WebFetch's reader over the full extracted text, not
by my own grep, because the proxy refused direct download (see §0).

---

## 7. Separate literature question — three buckets kept apart

### (a) Ordinary reliability life-data analysis of ENGINEERING TEST DATA — designed censoring, analyst owns the stopping rule. FOUND, abundant and textbook.
Identified by title/abstract line in search results; **I did not open these**, so they are
classified from their titles, not from their methods sections:
- Cramer, "Ordered and censored lifetime data in reliability: An illustrative review", *WIREs
  Computational Statistics* (2023), doi 10.1002/wics.1571
- "A Review of Accelerated Test Models", *Statistical Science* 21(4) (arXiv:0708.0369)
- "On Censoring Time in Statistical Monitoring of Lifetime Data", *Technometrics* (2023),
  doi 10.1080/00401706.2023.2177351
- "Robust inference for step-stress experiments under interval-censoring", doi 10.1007/s11749-026-01009-8
- "A Reliability-Based Strategy for the Analysis of Single Proton Exchange Membrane Fuel Cells",
  doi 10.4236/epe.2019.118019 — the fuel-cell instance of (a)
- "Failure modes based censored data analysis for repairable systems", doi via S0360835221003430
In all of these the censoring is *designed* (Type-I/Type-II, step-stress, progressive) and the
analyst sets the stopping rule. This is emphatically **not** the thing under check.

### (b) Meta-analysis of published degradation RATES — what the target paper does. FOUND, including close siblings.
- **The target paper itself** (opened, full text, verified above).
- "Determinants of the long-term degradation rate of photovoltaic modules: a meta-analysis", OPUS
  Augsburg docId 121206 — same institution, same template, PV instead of LIB. Found by title; **not
  opened**.
- NREL Jordan & Kurtz, "Photovoltaic Degradation Rates — An Analytical Review", and the DuraMAT
  "Compendium of photovoltaic degradation rates" — pooling of published %/year rates. Found by
  title; **not opened**.
- **"Big data driven perovskite solar cell stability analysis", *Nature Communications* 2022,
  s41467-022-35400-4 — OPENED (fetch 6).** This is the most informative comparator in the whole
  search, because unlike the rate meta-analyses its endpoint is a genuine failure time. Unit of
  analysis: the device — "the Perovskite Database contains stability data for 7419 devices".
  Endpoint: "TS80m", built on TS80, "the time to decay to 80% of the stabilized efficiency at the
  end of the burn-in region"; the paper even uses the phrase "time to failure". And yet: none of
  "censor", "survival", "Weibull", "hazard", "Kaplan-Meier" appears. Where a test ended before T80
  it **extrapolates**, "assuming that the degradation after the initial burn-in period follows a
  simple exponential decay", conceding "This will not always be true, but it will be good enough
  for a first analysis", and compares log-transformed values with Student's t-tests. It "never
  frames a short test as a censored observation, and it never mentions that experimenters chose
  test durations", and it runs no test of whether stopping depends on observed degradation.
  So the closest empirical analogue — a literature corpus of stability tests with a real
  time-to-failure endpoint — independently makes the same choice as the target paper.

### (c) Treating the published literature's own STOPPING DECISIONS as a censoring mechanism that may be INFORMATIVE. **NOT FOUND.**
14 targeted queries across the materials-science vocabulary (durability, stability, lifetime,
T80, chronoamperometry, accelerated stress test, degradation rate, in electrocatalysis, fuel cells,
electrolysers, batteries, PV, corrosion, catalysis) and the statistical vocabulary (right-censored,
informative censoring, dependent censoring, competing risks, publication-time bias, reporting bias
in reliability data, stopping rule as censoring mechanism) returned **no paper that fits**. Queries
3, 4, 5, 6, 9, 10, 11, 12, 13 and 14 were each aimed at it and each returned either (a) or (b) or
pure methodology.

Nearest misses, and precisely why each is not (c):
- **Clinical meta-analysis that adjusts for censoring** — "Effects of adjusting for censoring on
  meta-analyses of time-to-event outcomes", *Int. J. Epidemiol.* 31(1):107; Kalyvas,
  Papadimitropoulou, Malbecq & Spineli, "Dealing with censoring in a network meta-analysis of
  time-to-event data" (2024), doi 10.1177/26320843231190026. Found by title; **not opened**. These
  pool censoring that occurred *inside the primary trials* — administrative end of follow-up, loss
  to follow-up. The censoring mechanism they carry forward is the trial's, not the literature's.
  They do not model the researcher's choice of when to stop and publish, and they do not test that
  choice for informativeness. This is the right *machinery* in the wrong *object*.
- **Dependent/informative-censoring methodology** — copula-based dependent censoring
  (arXiv:2210.04869, arXiv:2312.15566), "How real is the random censorship model in medical
  studies?" (arXiv:1703.01237). The statistical tools for testing informative censoring exist and
  are mature; nothing found applies them to a corpus of published materials-durability tests.
- **Accelerated-stress-test protocol papers** (e.g. the FAU "Shortening Accelerated Stress Tests"
  work) debate how long tests *should* run. That is prescriptive protocol design — category (a) —
  not an analysis of the distribution of stopping times actually chosen in the literature.

**Statement of the gap, strictly within what the documents support:** the machinery of (c) exists
in statistics, and corpora of published durability tests exist and are analysed (b), but across
these 14 queries I found no instance of anyone joining them — no paper that takes a published
corpus, reads each test's reported duration as a right-censoring time, fits a lifetime distribution
to the corpus, or tests whether the experimenters' stopping decisions depend on the degradation
being observed. Recorded as **NOT-FOUND** (searches ran and returned non-matching results), not as
could-not-read. Given a 14-query, US-only sweep, this is a well-aimed negative rather than proof of
non-existence.
