# VERIFY — uq09 — Sawyer et al. (Omnipod 5 settings) and NCT05204134 protocol

Checker: fresh context. Budget used: 2 searches of 6, 5 fetches of 5 (cap reached).
Date of check: 2026-10-22.

---

## CLAIM

Two sources from one ledger entry, both flagged as thinly read. The composite claim under
test is that these two sources are prior art for a **settings-CHANGE-effect** question —
i.e. that one or both establish what happens when a human changes an AID user's
programmable settings, separated from the controller's own adaptation.

Sub-claims as handed to me:

**Source 1** — Sawyer A, Wilmot EG, Do D, Miller KM, Ly TT, Forlenza GP, "Settings
Associated with Optimal Glycemic Outcomes with the Omnipod 5 Automated Insulin Delivery
System: Evidence from Real-World Users with Type 1 Diabetes", 2026, DOI
10.1177/15209156261456826.
(a) Does the DOI resolve, and to what journal/volume/pages? (b) Real article, preprint, or
abstract/poster? (c) Cross-sectional or longitudinal? (d) Does it net out the controller's
own adaptation? (e) Any numbers for a settings-change effect?

**Source 2** — ClinicalTrials.gov NCT05204134, "Adaptation of Insulin Delivery Settings to
Improve Clinical Outcomes With AID Use".
(f) What is randomised/compared, and what is the primary endpoint? (g) Does the protocol or
SAP define an estimand separating a human settings change from controller adaptation?
(h) Status, and do results exist? (i) Does the protocol print any quantity for how much a
commercial controller adapts on its own?

---

## READ LEVEL

**Source 1 — FULL TEXT.** Opened at the publisher, `journals.sagepub.com/doi/10.1177/15209156261456826`,
first try, no paywall interstitial. Abstract, Methods, Results, Table 2 and the Limitations
paragraph were all served. The earlier agent's abstract-only read on a third-party index was
avoidable: the publisher page opens.

**Source 2, protocol/SAP — FULL TEXT.** `cdn.clinicaltrials.gov/large-docs/34/NCT05204134/Prot_SAP_000.pdf`
served directly through WebFetch, including the cover page, the synopsis, the endpoint list,
Section 8 (Statistical Considerations) and Section 9.10.

**Source 2, registry record (status + results) — THIRD-PARTY MIRROR ONLY, registry itself
NOT read.** The registry's own HTML is a JavaScript template and its API v2 endpoint is
robots-disallowed to this fetcher (see ROUTES THAT FAILED). Status, dates, enrolment and the
existence of posted results below come from a MedPath mirror of the record, not from
clinicaltrials.gov. That is a weaker read level and the answers to (h) carry it. Note
specifically that the mirror's wording of the primary outcomes does **not** match the
protocol's (below), and I could not adjudicate that against the registry itself.

---

## WHAT THE SOURCE SAYS (quotations as served)

### SOURCE 1 — front matter, as the publisher prints it

- Title: "Settings Associated with Optimal Glycemic Outcomes with the Omnipod® 5 Automated
  Insulin Delivery System: Evidence from Real-World Users with Type 1 Diabetes"
- Journal: **Diabetes Technology & Therapeutics**. (The 10.1177 prefix is SAGE; the journal
  itself is the Liebert title, now served on the SAGE platform. The prefix misleads — it is
  the platform, not the journal.)
- **Volume, issue and pages: NONE EXIST.** The page is labelled "OnlineFirst". "First
  published online June 24, 2026." Any citation that supplies a volume or page range for
  this DOI has invented it.
- Article type label as printed: **"Research article."** Not a preprint, not a
  conference abstract, not a poster.
- Byline as served: "Alexandra Sawyer, Emma G. Wilmot, Duy Do, Kellee M. Miller, Trang T.
  Ly, Gregory P. Forlenza." The page truncates after Wilmot with "[…] View all authors and
  affiliations", so affiliations were not served to me and I do not report them.

### SOURCE 1 — abstract

RECONSTRUCTION, assembled from **29 ordered consecutive segments** returned by the
summariser under its ~125-character quotation cap. Assembled only from consecutive returns;
nothing completed by inference; junctions verified by continuity of clause.

> **Objective:** Identifying programmable device settings and user behaviors associated with
> achieving glycemic targets is critical for informing clinical practice and improving
> outcomes with automated insulin delivery (AID) systems. This real-world analysis aimed to
> identify predictors of achieving optimal glycemic outcomes for people with type 1 diabetes
> (T1D) using the Omnipod® 5 AID System.
> **Methods:** This retrospective analysis included real-world data from Omnipod 5 users
> aged ≥ 2 years with T1D in the United States and Europe who had sufficient continuous
> glucose monitor data (≥30 days with ≥1 reading; ≥75% of days with ≥220 readings) available
> in Insulet's device and person-reported datasets between January 1 and March 31, 2025.
> Logistic regression was used to identify programmable settings and user behaviors
> associated with achieving >70% time in range (TIR; 70–180 mg/dL [3.9–10.0 mmol/L]).
> Optimal thresholds for the top modifiable predictors were determined using Youden's J
> statistic, and their impact on glycemic outcomes was explored.
> **Results:** Data from 176,405 users were analyzed. Predictors of achieving >70% TIR
> included the following: a higher number of user-initiated boluses/day, greater time in
> Automated Mode, use of lower glucose targets, and a more aggressive correction factor (CF)
> and insulin-to-carbohydrate (I:C) ratio (all P < 0.001). Use of optimized device settings
> (110 mg/dL [6.1 mmol/L] target, I:C ratio ≤350/total daily insulin dose [TDD], and CF
> ≤1500/TDD [mg/dL] or ≤83/TDD [mmol/L]) with user behaviors that reflect expected system
> use (≥90% time in Automated Mode, ≥3 boluses/day), used by 7.9% and 1.4% of adult and
> pediatric users, respectively, resulted in a higher median TIR compared with users overall
> (77% vs. 66% in adult and 78% vs. 62% in pediatric users, respectively), and time spent in
> hypoglycemia remained low across age groups. Findings were consistent across geographic
> regions and prior insulin regimen.
> **Conclusions:** These results provide actionable guidance for clinicians to optimize
> outcomes for people with T1D using the Omnipod 5 System.

### SOURCE 1 — the design sentence, and the sentence that settles (c)

Design, as served:

> "This retrospective study used de-identified data from Omnipod 5 System users"

> "This retrospective analysis included real-world data from Omnipod 5 users aged ≥ 2 years with T1D"

> "between January 1, 2025, and March 31, 2025."

The sentence that decides whether this is prior art for a change-effect question is in the
**Limitations**, and it is the paper's own disclaimer:

> "did not evaluate the impact of adjusting an individual user's programmable settings."

And on the change question as future work:

> "Adoption of optimized settings over time among Omnipod 5 users and their associated impact"

— described as "an important area for future research."

The closest thing to a longitudinal handle is a **sensitivity analysis that excludes
changers rather than measuring change**:

> "who had no setting adjustments during the 3-month study period"

with results reported as "similar". That is a robustness check against within-window
settings drift. It is not a before/after comparison and the paper does not present it as one.

### SOURCE 1 — what it measures (unit, endpoint, model, comparator)

- Unit of analysis: the individual user, one summary value per user. "Data from 176,405
  users were analyzed."
- Observation window: 1 Jan 2025 – 31 Mar 2025; inclusion floor "≥30 days (either
  consecutive or nonconsecutive) with at least one CGM reading." No per-user day count is
  printed beyond that floor.
- Endpoint: binary, "achieving >70% time in range (TIR; 70–180 mg/dL [3.9–10.0 mmol/L])."
- Model: "logistic regression modeling with backward stepwise selection was used", reported
  as odds ratios.
- Predictors: "Programmable settings included programmed target glucose" and others; "User
  behaviors included the percentage of time spent in Automated Mode"; plus age group,
  gender, country.
- Comparator: a **reference category of other users**, not the same user at another time.
- Settings normalisation: "were standardized by multiplying each user's average value by
  their total daily insulin dose."

### SOURCE 1 — every number it prints that could be mistaken for a change effect

Odds ratios (Table 2) with 95% CIs, cross-sectional, between-user:

| Predictor (category vs reference) | OR (95% CI) |
|---|---|
| Boluses/day ≥5 vs <3 | 8.76 (8.18, 9.38) |
| Boluses/day 3 to <4 | 2.23 |
| Automated Mode 90–100% vs 50–60% | 4.92 (4.37, 5.55) |
| Automated Mode 80 to <90% | 1.94 |
| Target glucose 110 vs 130–150 | 3.99 (3.65, 4.37) |
| Target glucose 120 | 2.21 (2.02, 2.42) |
| I:C ratio <350/TDD | 1.95 (1.86, 2.04) |
| CF <1500/TDD | 1.79 (1.70, 1.88) |
| Correct above 110 | 1.38 (1.26, 1.52) |

Group medians: median TIR 77% vs 66% (adults), 78% vs 62% (paediatric), for the fully
optimised **combination** versus all users; the combination was used by 7.9% of adults and
1.4% of paediatric users.

**Number printed for the effect of CHANGING a setting: NONE.** The paper MEASURES
cross-sectional association and PRINTS odds ratios; it does not measure, and does not print,
any quantity for the effect of a settings change. On its own account it "did not evaluate"
that.

### SOURCE 1 — on the controller's own adaptation (d)

The paper does not treat algorithm adaptation as a confounder; the words "adaptation" and
"adaptive" do not appear. What it does say about algorithm behaviour:

> "the AID algorithm modulates insulin delivery every 5 minutes based on CGM glucose values"

> "reverse correction feature, which adjusts insulin delivery based on the user's current glucose levels"

> "programmed basal rates do not influence insulin delivery when in Automated Mode"

> "DIA does not impact insulin delivered by the algorithm"

So the paper is aware that several programmed settings are inert under automation — which is
why basal and DIA are not among its effective predictors — but it nowhere nets out the
algorithm's own adaptation of total daily insulin, and nowhere discusses it.

### SOURCE 2 — protocol front matter and design

- Cover-page title: "Adaptation of Insulin Delivery Settings to Improve Clinical Outcomes
  with AID Use." The synopsis uses a *different* title: "Initialization and Adaptation of
  Insulin Delivery Settings..."
- Protocol version 2.0, dated 01 OCT 2021. Sponsor: Tandem Diabetes Care, Inc.
- **No separate SAP.** Section 8 "Statistical Considerations" is a short descriptive section.

Design, verbatim:

> "This feasibility study is a prospective, single arm study."

**Not randomised. No arms, therefore no between-arm comparison.** The within-subject
contrast is baseline CGM run-in versus each weekly adaptation:

> "compared to changes after each weekly adaptation."

Sample size, verbatim:

> "with the goal that 30 subjects start use of the study device, and at least 20 subjects complete the trial."

with at least 5 subjects at A1c 8–8.9% and at least 5 at A1c ≥9%; up to 45 screened. **No
power calculation, no effect size, no variance assumption** — the protocol is descriptive.

### SOURCE 2 — primary endpoint (f)

Protocol, verbatim:

> "by assessing the number of severe hypoglycemic events (needing assistance)"

The primary endpoint is a **safety count, not a glycemic-efficacy endpoint.** The protocol
gives no explicit timeframe for it; device use is 13 weeks within up to 17 weeks total. It
refers the count to an "expected incidence" but **does not print that expected value.**

The registry mirror lists **two** primary outcomes, both with a 15-week timeframe, and
words the first differently from the protocol:

> "Number of Severe Hypoglycemic Events (with altered mental status)"

> "Number of Diabetic Ketoacidosis events as defined by the Diabetes Control and Complications Trial (DCCT)"

Secondary endpoints (protocol): TIR 70–180; time <54, <70, >180, >250 mg/dL; tight range
70–140; post-prandial peak and 4-hour post-meal glucose AUC; sensor glucose median/IQR;
day vs night CGM metrics; weekly CGM metrics after adaptation; DKA, SAEs, adverse device
effects; change in total daily insulin (basal and bolus); **number of physician overrides**;
and patient-reported outcomes.

### SOURCE 2 — the human-change / controller-adaptation boundary (g)

There is **no estimand and no causal-contrast language anywhere in the document.** Section
8.1, verbatim:

> "Descriptive statistics of the rates of severe hypoglycemia, DKA, and serious adverse events will be reported."

Pre- and post-adaptation values are described, not attributed.

The closest the protocol comes to separating a human act from an automated one is
**procedural, not analytic** — it separates the study's own recommender from the humans who
implement its advice:

> "Adaptation will be recommended by the automated system."

> "Change their settings after being called by the study physician to match the new recommendations."

> "Physicians can at any time adjust pump settings."

> "the settings adaptation system will continue to adapt back to one setting per day."

And on initialisation, the protocol contradicts its own synopsis. The synopsis calls it "An
automatic settings initializer"; the body says:

> "Initial pump settings will be configured by following the study settings algorithm worksheet"

Crucially, this boundary is between **the study's recommender and the study's clinicians**.
It is *not* a separation of a human settings change from **the commercial controller's own
adaptation**. On the commercial controller, all the protocol says is:

> "Control-IQ modulates basal insulin delivery."

— real-time modulation, which is not a settings change at all. The phrases "total daily
insulin update", "algorithm learns" and "self-adjust" do not appear.

### SOURCE 2 — status and results (h), from the mirror only

Status line as the mirror serves it: **"NCT05204134 Completed Not Applicable"**. No
"why stopped" text. Start 24 Mar 2022; primary completion 9 Sep 2022; study completion
29 Sep 2022; last update posted 5 Apr 2024 (last verified 1 Mar 2024). Interventional,
Phase Not Applicable, allocation N/A, intervention model "Single group", open label.
Enrolment 33 (33 started, 29 completed) — the mirror does not label the count actual or
estimated. One site: Barbara Davis Center, Aurora, Colorado. **Results exist**: the mirror
carries a results section, "Has Results: Yes", posted 2024-04-05. I did not read those
results, only the mirror's assertion that they exist.

### SOURCE 2 — any number for commercial-controller self-adaptation (i)

**NONE.** The protocol prints no magnitude for how much Control-IQ, or any commercial AID
controller, adapts on its own. The only adaptation magnitude in the document is a **cap on
the study's own recommender's step size**:

> "will limit recommendations to a maximum 5% change at a time."

That 5% is a design constraint the protocol SPECIFIES and never audits — it is not a
measurement of anything, and it is not about the commercial controller. The separate "10+%"
figure in Section 9.10 is a time-in-range improvement, not an adaptation magnitude.

---

## REGIME

**Source 1.** Population: Omnipod 5 users aged ≥2 with T1D in the US and Europe, in Insulet's
device and person-reported datasets, surviving a CGM-sufficiency filter, n = 176,405. Unit
of analysis: **the user, as a single three-month summary**. Operating condition: ordinary
commercial use, 1 Jan – 31 Mar 2025, no intervention. Instrument: manufacturer device logs
plus person-reported fields. Threshold: >70% TIR, 70–180 mg/dL, as a **binary** outcome.
Estimand: a **between-user cross-sectional association**, adjusted by stepwise-selected
covariates. Comparator: other users in a reference settings category.

The regime is therefore: *among users who already differ in their settings, which settings
co-occur with better control.* A change-effect question asks: *within a user, what does
moving a setting do.* **The claim handed to me sits OUTSIDE this source's regime**, and
unusually, the source says so itself in its Limitations. This is not an inference I am
imposing on it.

Two regime traps specific to this paper, both of the kind that has moved verdicts on this
ledger before:

1. **The 77% vs 66% TIR figure belongs to a seven-part COMBINATION** — 110 mg/dL target,
   I:C ≤350/TDD, CF ≤1500/TDD, *and* ≥90% time in Automated Mode, *and* ≥3 boluses/day. It
   is the median of the 7.9% of adults (1.4% of paediatric users) meeting all of it, against
   all users. Quoted for any single setting, or as what changing a setting would deliver, it
   is detached from its qualifier.
2. **The "aggressiveness" predictors are normalised by TDD**, and TDD under automation is
   partly an output of the controller. I:C ≤350/TDD and CF ≤1500/TDD therefore divide a human
   setting by an algorithm-influenced quantity. The paper states the normalisation plainly
   and does not discuss this; I report it as structure, not as a finding of the paper's.

**Source 2.** Population: 30 planned / 33 enrolled T1D subjects at a single US centre,
enriched for A1c ≥8%. Device: Tandem Control-IQ. Unit of analysis: the subject-week.
Operating condition: 13 weeks of use inside a feasibility protocol in which a study
recommender emails weekly settings advice, a study physician telephones, and the subject
implements — with physicians free to override at any time and overrides counted. Primary
endpoint: a **count of severe hypoglycemic events** (plus DKA per the registry), i.e. a
**safety** regime. Analysis: descriptive statistics, no hypothesis test, no estimand, no
power.

The regime is therefore: *is weekly algorithmic settings advice, delivered through a
clinician, safe and feasible in 30 subjects at one site.* **The claim handed to me sits
outside this regime too**, on three counts: the trial is single-arm so it has no comparator
for a change effect; its primary endpoint is safety, not glycemic response to a change; and
its statistical section declines to attribute anything to the adaptation at all. A
descriptive feasibility protocol is **silent** on a change-effect estimand, not supportive of
one.

---

## DEFECTS FOUND

1. **(Record defect, consequential.) The journal is nameable and was not named.** Diabetes
   Technology & Therapeutics, served on the publisher page at first attempt. The earlier
   agent's third-party index page carried the DOI and ISSN but no journal title, which is
   almost certainly why the journal went unnamed. The routing rule held: resolve the prefix
   to the publisher. 10.1177 → journals.sagepub.com worked.
2. **Any volume or page range attached to this DOI is fabricated.** The article is
   OnlineFirst; no volume, issue, page range or article number has been assigned. Front
   matter must be taken as printed, which here means recording the absence.
3. **Cross-sectional read as longitudinal — the central defect for this entry.** The paper
   is retrospective and between-user. Its own Limitations: "did not evaluate the impact of
   adjusting an individual user's programmable settings." It is not prior art for a
   change-effect question.
4. **A quotation whose grammar invites exactly that misreading.** The abstract says optimal
   thresholds were found "and their impact on glycemic outcomes was explored." Read alone,
   "impact ... was explored" sounds like a change effect. Read with the clause on both sides
   of the cut, "their" refers to the *thresholds*, and the exploration is a comparison of
   median TIR between user groups defined by those thresholds. Verbatim but misleading if
   cut here.
5. **The near-miss that points the other way.** The paper's sensitivity analysis restricted
   to users "who had no setting adjustments during the 3-month study period" *removes*
   changers to guard against drift. If the record cited this as longitudinal evidence, it has
   the direction backwards.
6. **PUBLISHED IS NOT PERFORMED, source 1.** The paper DEFINES optimised settings, MEASURES
   cross-sectional odds ratios, and names the change question as future work. It prints **no
   number** for a settings-change effect. There is nothing to re-derive, because nothing was
   derived.
7. **Minor internal inconsistency, reported as served and not corrected.** The I:C ratio
   confidence interval is printed as "(1.86, 2.02)" in the Results text and "1.86, 2.04" in
   Table 2. I did not silently harmonise these.
8. **Source 2 is a single-arm feasibility study and answers nothing about randomisation.**
   Sub-claim (f) asks what it randomises: it randomises nothing. Allocation N/A, "prospective,
   single arm", one site, 33 subjects, no power calculation. Any characterisation of it as a
   randomised or controlled test of settings adaptation is wrong.
9. **Source 2's primary endpoint is safety, not glycemia.** Severe hypoglycemic events
   (protocol) plus DKA events (registry). The CGM and TIR measures are secondary. An entry
   that treats this trial's primary endpoint as a glycemic outcome has it wrong.
10. **Protocol and registry word the primary outcome differently, and the protocol's version
    has no timeframe.** Protocol: "needing assistance", no timeframe. Registry mirror: "with
    altered mental status", 15 weeks, and two primary outcomes rather than one. I could not
    adjudicate this against the registry itself.
11. **The protocol contradicts its own synopsis on initialisation** — synopsis "An automatic
    settings initializer" versus body "Initial pump settings will be configured by following
    the study settings algorithm worksheet", with titles differing between cover page and
    synopsis. Quoting the synopsis makes the trial sound more automated than the body does.
12. **No estimand anywhere in source 2.** Section 8.1 is descriptive statistics. There is no
    hypothesis, no contrast, no attribution — therefore nothing that separates a human
    settings change from controller adaptation as an *analytic* object. The separation the
    protocol does draw is procedural (automated recommender → physician call → subject
    implements, with overrides logged), and it is between the study's recommender and the
    study's clinicians, not between a human and the commercial controller.
13. **The 5% figure is a trap.** "will limit recommendations to a maximum 5% change at a
    time" is a cap on the *study recommender's* step size — a specified design margin, never
    audited. It is not a measurement, and it is not Control-IQ adapting. If the entry cites
    5% as how much a commercial controller adapts on its own, that is a misattribution
    across two different agents of change. Likewise the "10+%" in Section 9.10 is a
    time-in-range improvement, not an adaptation magnitude.
14. **Sub-claim (i) answered in the negative, with the distinction kept.** The protocol
    prints no quantity for commercial-controller self-adaptation. It does not define, bound,
    predict or measure one either — on *Control-IQ's* adaptation it says only that the system
    "modulates basal insulin delivery", which is real-time modulation and not a settings
    change. This is an absence in the source, which is not itself a prohibition on the
    question being open.
15. **Read-level split within source 2, not to be merged.** Protocol: full text. Registry
    record: not read — mirror only. The status, dates, enrolment and existence-of-results
    answers are second-hand and should be re-verified from the registry by a reader whose
    fetcher is not robots-blocked. This is COULD NOT READ for that one route, not NOT FOUND:
    the record plainly exists.

---

## ROUTES THAT FAILED

- `curl` to `cdn.clinicaltrials.gov` — CONNECT tunnel failed, 403 at the proxy. Tool-scoped,
  not a host block: the same PDF served fine through WebFetch moments later. Exactly the
  failure mode the routing note warns about; I did not conclude the host was blocked.
- `curl` to `clinicaltrials.gov/api/v2/...` — CONNECT tunnel failed, 403, proxy reported
  `connect_rejected`.
- WebFetch of `https://clinicaltrials.gov/api/v2/studies/NCT05204134` — refused at the site
  with **robots_disallowed**; nothing of the response was retrieved. Per instruction I
  recorded the refusal and did not work around it by scraping the record's HTML or probing
  other API paths. This is why (h) rests on a mirror.
- Not attempted, by instruction: Unpaywall and any other route requiring a contact address.
  No personal identifier was placed in any URL, query string, header or form.
- Query budget exhausted at 5/5 fetches; the registry's own results tables were therefore
  never opened.

---

## BEARING ON THE LEDGER ENTRY

**The entry's position survives, and is now better supported than when it was thinly read.**
Neither source is prior art for a settings-change-effect question, and the strongest evidence
for that is in the sources themselves rather than in any reading I am imposing.

- Source 1 is a real, published, peer-reviewed research article — Diabetes Technology &
  Therapeutics, OnlineFirst, 24 June 2026 — not a preprint and not a poster. It is a large
  (n = 176,405) **cross-sectional retrospective association study**, and it **explicitly
  disclaims the change question**: "did not evaluate the impact of adjusting an individual
  user's programmable settings", naming adoption-over-time as "an important area for future
  research." It prints odds ratios for between-user associations and group median TIRs. It
  prints **no number for a settings-change effect**, and it does not net out the controller's
  own adaptation — indeed it normalises two of its key predictors by TDD, a quantity the
  controller partly determines. For a change-effect question this source is **silent, not
  supportive**, and it says so in its own voice.

- Source 2 is a **completed single-arm feasibility study** (Tandem, one site, 33 enrolled,
  2022; results reportedly posted April 2024) whose primary endpoint is a **safety count**
  and whose statistical section is purely descriptive. It randomises nothing, defines **no
  estimand**, and draws no causal contrast. Its human/automation boundary is procedural and
  sits in the wrong place for the entry's purpose: between the study's recommender and the
  study's clinicians, not between a human settings change and the commercial controller's own
  adaptation. It prints **no quantity** for commercial-controller self-adaptation; its only
  adaptation number, the 5% cap, belongs to the study's recommender and is a specified margin
  that was never audited.

**What should change in the entry, regardless of the verdict.** The front matter must be
corrected to name Diabetes Technology & Therapeutics and to record that no volume or pages
exist (OnlineFirst). Source 2's primary endpoint must be recorded as severe hypoglycemia (and
DKA), not a glycemic outcome, and the design as single-arm feasibility rather than anything
controlled. If either the 5% recommender cap or the abstract's "their impact ... was explored"
is doing work in the entry, that work should be withdrawn.

**Residual uncertainty I could not close.** The trial's posted results were never opened —
the registry refused this fetcher and my budget ran out. The entry should not assert what
those results show. It is also worth a reader with a working registry route confirming the
two-primary-outcome, 15-week framing against the protocol's single untimed endpoint. Both are
COULD NOT READ, not NOT FOUND.
