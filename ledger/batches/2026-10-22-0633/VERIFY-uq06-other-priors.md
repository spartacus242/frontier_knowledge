# VERIFY-uq06 — other priors

## CLAIM

Two sources are cited as the next-nearest priors for the same ledger candidate.

**SOURCE 1.** Manathunga S, Janssen MP, Luo Y, Russell WA, Pothast M, "When to repeat a biomarker
test? Decomposing sources of variation from conditionally repeated measurements", arXiv:2602.14877v1.
Sub-claims: (a) contains verbatim the phrase that threshold-conditional repeating "induces selection
on the measurement error"; (b) prints repeat rates of 94.6% and 93.1%, with a disputed denominator
(an earlier agent says below-cutoff first readings, not released results); (c) prints 22% (female)
and 25% (male) as the share of total variance from measurement variation; (d) recomputes a reference
interval, a prevalence, or a monitoring delta anywhere; (e) its regime.

**SOURCE 2.** Niu A, Yan X, Wang L, Min Y, Hu C, "Utility and Necessity of Repeat Testing of Critical
Values in the Clinical Chemistry Laboratory", PLOS ONE 2013;8(11):e80663. Sub-claims: (f) prints 4.0%
(24/601) as the proportion of initial/repeat pairs exceeding the CAP allowable-error limit; (g) its
unit is the initial/repeat run pair on a critical-value specimen and its population is critical values
only; (h) prints any share of released results, reference interval or monitoring delta; (i) whether a
third PLOS ONE 2013 paper (Yang D, Zhou Y, Yang C, 8(3):e59518) has a patient-level rather than
within-specimen "repeat", and prints 0.96%, 2.10 per patient and 57.7%.

## READ LEVEL

| Source | Read level | Route that served |
|---|---|---|
| 1. arXiv:2602.14877v1 | **Full text** (body prose; tables/figures summarised, not reproduced glyph-by-glyph) | `https://www.arxiv.org/pdf/2602.14877` — the PDF route served on the first attempt |
| 2. PLOS ONE e80663 | **Full text** (body prose and abstract; Table 2 contents not reproduced by the reader) | `https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0080663` |
| 3. PLOS ONE e59518 | **Full text** (body prose; **Table 2 and Table 3 contents not reproduced**, so denominators resident only in tables were not visible) | `https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0059518` |

No source was COULD NOT READ. No source was NOT FOUND. All three exist and all three opened at the
first route tried. The `arxiv.org/html/` fallback was not needed and was not used.

## WHAT THE SOURCE SAYS (quotations as served)

### Source 1 — front matter

Title: "When to repeat a biomarker test? Decomposing sources of variation from conditionally repeated
measurements". Authors as served in the front matter: **Supun Manathunga, Mart P. Janssen, Yu Luo,
W. Alton Russell, Mart Pothast**. arXiv:2602.14877v1. The reader gave the date as "February 17, 2026"
while also reporting the posting as February 16, 2026; the one-day discrepancy is reported as served
and not resolved. Preprint, not a journal article; no peer-review statement.

Type: **methods preprint / primary methodological study** (it develops estimators and fits them to one
empirical dataset). It is not a review, protocol or guideline.

#### (a) The "induces selection" phrase — CHECKED ALONE, UNPRIMED

The phrase appears **verbatim**. Reconstruction of the Section 2.3 sentence from **2 consecutive
segments** (junction verified by continuation of the same clause at "ϵi,1 / while"):

> "If we only observe ∆i = xi,1 − xi,2 when xi,1 < c, this induces selection on the measurement error
> ϵi,1 while ϵi,2 remains unbiased."

The sentence immediately before, as served (1 segment):

> "Let c denote a threshold below which the first measurement is repeated."

The sentence immediately after, as served (1 segment), followed in the paper by an equation display:

> "Naively applying eq. (6) will result in:"

**Grammar on both sides of the cut.** The quoted fragment is verbatim, but it is cut on both sides in
a way that moves the content. On the left, the clause the paper attaches is conditional and is about
an *estimator*: the selection arises "if we only observe ∆i = xi,1 − xi,2 when xi,1 < c" — i.e. when
one works with the *observed difference* of the conditionally-repeated pair. On the right, the paper
immediately restricts which error is selected on: it is **ϵi,1 only**, "while ϵi,2 remains unbiased."
A claim rendered as "threshold-conditional repeating induces selection on the measurement error",
with no subscript and no conditioning clause, drops the asymmetry that is the whole point of the
sentence.

#### (b) 94.6% and 93.1% — the denominators

Both numbers are printed. Reconstructions, each from **2 consecutive segments** (junctions verified
by the comma-then-participle continuation "threshold, / prompting"):

> "Among males, 18,173 of 849,469 (2.1%) initial Hb measurements were below the eligibility threshold,
> prompting a second measurement for 17,195 visits (94.6%)."

> "Among females, 123,379 of 1,013,690 (12.2%) initial Hb measurements fell below the threshold,
> prompting a second measurement for 114,840 visits (93.1%)."

**The earlier agent is correct.** Each denominator is the count of **initial measurements below the
eligibility threshold**, not of released or reported results, and not of all initial measurements:

- 94.6% = 17,195 / 18,173 below-threshold male initial measurements (= 94.62%). Not 17,195 / 849,469.
- 93.1% = 114,840 / 123,379 below-threshold female initial measurements (= 93.08%). Not /1,013,690.

Both re-derive at the authors' own stated counts. The percentages are *compliance with the retest
rule among those eligible for a retest* — i.e. a process-adherence rate inside the below-cutoff
stratum. They are not a share of results released to a clinician or a donor.

#### (c) 22% / 25% variance share

Printed, Section 5.5, as served (1 segment, short enough to return whole):

> "Variation due to the measurement is 22% of the total variance in females and 25% in males."

Assignment in the claim handed to me (22% female, 25% male) matches the source. The paper states the
same decomposition a **second time**, in the abstract, where the reader also reports the accompanying
population SDs of **1.07 g/dL (female)** and **1.28 g/dL (male)**. Neither formulation is hedged and
neither carries a citation — both are the authors' own result.

**Population and n.** The figures come from the preferred Bayesian hierarchical model (normal
population distribution, Student-t measurement error) fitted to **a random sample of 100,000 donation
visits** from the filtered Vitalant dataset (Section 5.4: fitted "using a random sample of 100,000
donation visits"). A *separate* sample of 10,000 males and 10,000 females was used for **model
selection**, not for the reported fit — so n = 100,000 visits, not 20,000.

**Uncertainty as stated.** The 22%/25% are reported in the text as point values. No credible interval
accompanies them in the sentence as served; the stated uncertainty for the variance decomposition, if
any, sits in the model tables, which I did not see glyph-by-glyph. Reported as a limit of my read.

#### (d) Reference interval, prevalence, monitoring delta — answered separately

- **Reference interval: NO.** The words "reference interval" **do not appear anywhere in the paper**.
  Nothing of the kind is computed or recomputed. The derived ratio σ_pop/µ_pop (8.2% males, 7.8%
  females) is a coefficient of variation, not a reference interval.
- **Prevalence: NO, and what is there is attributed to someone else.** The word appears in Section 5
  only inside a description of other authors' work — "Luo et al. (2018)[24] employed a hierarchical
  Bayesian framework to estimate the prevalence of attention-deficit/hyperactivity disorder (ADHD)…"
  — and in reference [24]'s own title. The paper estimates **no** prevalence of its own. It does print
  observed below-threshold proportions (2.1% males, 12.2% females) and misclassification percentages
  (Table 5), which are not prevalence recomputations.
- **Monitoring delta: NO.** The string "delta" occurs once, capitalised, in the Figure 7 caption:
  "Delta cLPPD heatmap from 5-fold CV on synthetic datasets." That is a model-comparison statistic
  (a difference in cross-validated log pointwise predictive density), not a clinical monitoring
  delta or a delta-check.

### Source 2 — front matter

Title: "Utility and Necessity of Repeat Testing of Critical Values in the Clinical Chemistry
Laboratory". Authors: **Aijun Niu, Xianxia Yan, Lin Wang, Yan Min, Chengjin Hu**. PLOS ONE, 2013,
**8(11): e80663**, published 19 November 2013, doi:10.1371/journal.pone.0080663. Front matter matches
the short form handed to me exactly.

Type: **Research Article — primary, single-laboratory, retrospective study.** Not a review, not a
guideline. The CAP allowable-error limits it uses as its comparator are an external standard it
*applies*, not a result it derives.

#### (f) 4.0% (24/601) — NAMING THE NUMBER AND WHERE IT IS PRINTED

**The number is printed.** It sits in the **Results body text**, in the subsection on numbers and
rates of large differences, immediately after the AMR breakdown. Reconstruction from **2 consecutive
segments** (junction verified: "showed / good agreement"):

> "Only 4.0% (24/601) showed a large difference (Table 2), so that the majority (96% of the results)
> showed good agreement between the initial and repeated results."

Units and denominator: 24 of 601 **repeated chemistry critical values**, expressed as a percentage of
those 601. The sentence itself cross-refers the count to **Table 2**, whose contents I did not see.

Sentence immediately before (2 segments, junction "25 as / above"):

> "Of the total 601 repeated chemistry critical values, 572 were characterized as within the AMR, 25 as
> above the AMR, and 4 as below the AMR."

Sentence immediately after (3 segments, junctions "initially / classified" and "and 44.0%; and below /
the AMR"):

> "The numbers and rates of large differences found among each of the four test categories samples
> initially classified as: within the AMR were 12 (1 calcium, 1 glucose, 3 potassium, and 7 sodium) and
> 2.1%; above the AMR were 11 (only 11 glucose) and 44.0%; and below the AMR were 1 (sodium) and 25.0%."

**The comparator is as claimed.** The Methods define the endpoint against the CAP limit; reconstruction
from **2 consecutive segments** (junction "allowable / error limit"):

> "If the absolute or percentage difference between the two test runs was greater than the CAP allowable
> error limit, then the initial result was classified as having a "large difference"."

**The source states the claim more than once, and the two formulations differ in what they foreground.**
The 4.0% pooled figure is printed **only in the Results body text — it is NOT in the abstract.** The
abstract prints the *stratified* version instead (2 consecutive segments, junction "range / (AMR)"):

> "The number and rates (%) of large differences for within and outside the analytical measurement range
> (AMR) were 12 (2.1%) and 12 (41.4%), respectively."

And the abstract's Conclusions are stated **conditionally on that stratum**, not on the pooled rate
(reconstruction from 7 consecutive segments):

> "When the initial chemistry critical values are within the AMR, repeated testing does not improve
> accuracy and is therefore unnecessary. When the initial chemistry critical values are outside the AMR,
> however, the benefit of repeated testing justifies its performance and makes it necessary. Performing
> repeat clinical testing on a case-by-case, rather than routine, basis can improve patient care by
> delivering critical values more rapidly while providing savings on reagent costs associated with
> unnecessary repeat testing."

**Re-derivation at the authors' own thresholds.** 24/601 = 3.99% → 4.0% ✓. Within AMR: 12/572 = 2.10%
→ 2.1% ✓. Outside AMR: 25 above + 4 below = 29; 12/29 = 41.38% → 41.4% ✓. Above AMR: 11/25 = 44.0% ✓.
Below AMR: 1/4 = 25.0% ✓. Body counts (12 + 11 + 1 = 24) reconcile with the headline 24. All figures
re-derive exactly. No uncertainty interval is attached to any of them anywhere I read; these are raw
proportions reported without CIs.

#### (g) Unit of analysis and population — YES on both

**Unit: the initial/repeat run pair on one critical-value specimen.** The Methods criterion is "the
absolute or percentage difference between **the two test runs**", and the classification lands on "the
initial result". So the analysed object is a pair of runs on the same specimen — a *within-specimen
repeat*, a candidate replacement of the first run's number.

**Population: critical values only.** The 601 are introduced as (2 consecutive segments, junction
"glucose, / n = 106"):

> "A total of 601 chemistry critical values (potassium, n = 255; sodium, n = 132; calcium, n = 108;
> glucose, n = 106) obtained from 72,259 routine clinical chemistry specimens were repeat tested."

The 72,259 routine specimens are the **screening pool**, not a denominator for any reported rate.
Four analytes only, at the printed critical-value cutoffs: potassium <2.5 or >6.5 mmol/L; sodium <120
or >160 mmol/L; calcium <1.5 or >3.25 mmol/L; glucose <2.8 or >30 mmol/L. Collection window 1 January
to 30 April 2013, one laboratory.

#### (h) Share of released results, reference interval, monitoring delta — answered separately

- **Share of released results: NO.** No proportion of all released or reported results is printed. The
  nearest quantity is 601 critical values drawn from 72,259 routine specimens, which the paper does
  **not** convert into a percentage. Any such percentage (0.83%) would be *someone else's arithmetic*
  on the source's numbers; the source itself does not print the converted figure.
- **Reference interval: NO.** The paper prints critical-value cutoffs and analytical measurement ranges.
  A critical-value cutoff is not a reference interval and the paper does not compute one.
- **Monitoring delta: NO.** Paired differences are compared against CAP allowable-error limits, which
  is an analytical-agreement criterion, not a serial monitoring delta. "Delta failures" appears only as
  a passing reference to prior literature — attributed elsewhere, not a finding of this paper.

### (i) The third paper — Yang D, Zhou Y, Yang C

**It exists and it opened.** Front matter: "Analysis of Laboratory Repeat Critical Values at a Large
Tertiary Teaching Hospital in China", **Dagan Yang, Yunxian Zhou, Chunwei Yang**, PLOS ONE 2013,
**8(3): e59518**, published 14 March 2013, doi:10.1371/journal.pone.0059518. Research Article,
retrospective. Population: patients at The First Affiliated Hospital, College of Medicine, Zhejiang
University, described as "an adult comprehensive tertiary teaching hospital in Hangzhou"; calendar
year 2010; 11 critical-value analytes; inpatients and outpatients.

**Its "repeat" IS patient-level recurrence on later specimens, not within-specimen replacement — but
the paper never defines the term.** There is **no formal definition sentence** anywhere in the body.
The reading rests on what the paper measures: "interval time" **in hours** between successive events
(P10/P50/P90, medians up to 120 hours) for "the critical values of the same analyte and same patient".
A within-specimen replicate has no multi-hour interval, so the construct is unambiguously temporal
recurrence across specimens. Note a trap: the paper separately uses the phrase "validate the critical
result by repeat testing" — that refers to the laboratory confirmation step (Niu et al.'s sense) and is
**not** this paper's study object. So the claim handed to me is **correct in substance but rests on an
inferred construct**: this is a definitional/granularity gap in the source, not a printed definition.

**The three numbers: all printed; two of the three have NO printed denominator.**

| Number | Printed as | Unit it sits on |
|---|---|---|
| 0.96% | "Of these, 10,516 patients had 30,400 person time critical values, an incidence rate of 0.96%." | **Not establishable from the text.** The denominator is never stated. 10,516 / ~259,000 patients ≈ 4.1%, so it is **not** a patient-level incidence. It reconciles with 30,400 / ~3,170,000 tests ≈ 0.96%, i.e. a **critical-value-results-per-test rate**, but the paper does not say so. |
| 2.10 | "On average, each patient who experienced a critical value had it occur 2.10 times." | **Occurrences per affected patient**, as worded — but the global ratio does not reconcile: 30,400 / 10,516 = 2.89, not 2.10. The reader reports 2.10 as resting on Table 2, suggesting a per-analyte or otherwise-restricted mean. **Unresolved at my read level** (Table 2 not reproduced). |
| 57.7% | "with an approximate repeat critical value rate of 57.7%." | **Not establishable from the text.** The paper prints the number and not its denominator. Whether it is a share of WBC critical values, of WBC-critical patients, or of something else is not stated in the body. Note the hedge "approximate" in the authors' own wording. |

## REGIME

**Source 1 (arXiv:2602.14877v1) — one line.** US blood donors at Vitalant, first visits January 2017 –
October 2022, restricted to **same-day** repeat measurements; unit of analysis = the **donation visit**
carrying a paired same-day haemoglobin reading; instrument = **pre-donation point-of-care fingerstick
(capillary) Hb**, device not named; threshold = donor-eligibility cutoff **13.0 g/dL male / 12.5 g/dL
female**, a repeat being triggered **only** when the first reading fell below it; estimand =
decomposition of total Hb variance into between-donor and measurement components (plus misclassification
risk and conditional-retesting rules), via a Bayesian hierarchical model with normal population
distribution and Student-t measurement error, fitted to n = 100,000 visits.

**Source 2 (PLOS ONE e80663).** One clinical chemistry laboratory, 1 Jan – 30 Apr 2013; unit = the
**initial/repeat run pair on a single critical-value specimen** (601 pairs screened out of 72,259
routine specimens); population = **critical values only**, four analytes at printed cutoffs; comparator
= **CAP allowable-error limit**; endpoint = binary "large difference" between the two runs; key
stratifier = initial result **within vs outside the AMR** (572 vs 29).

**Source 3 (PLOS ONE e59518).** One tertiary teaching hospital, Hangzhou, calendar 2010, 11 analytes,
inpatients and outpatients; unit = the **patient** (and patient–analyte) experiencing **recurring**
critical values across **separate specimens over time**; endpoints = counts, rates and **interval times
in hours** between successive critical values.

**Does the claim handed to me sit inside these regimes?** Sub-claims (a)–(e), (f)–(h) and the
structural half of (i) do — they are claims *about what the sources print*, and each is checked at the
page where it is printed. Two scope problems arise when the numbers are lifted out:

1. **Source 1's 94.6%/93.1% live strictly inside the below-cutoff stratum.** They are retest-rule
   adherence among the retest-eligible. Outside that stratum (the 97.9% of male and 87.8% of female
   initial measurements at or above threshold) the paper is **silent**, by construction: no repeat was
   ever performed there. A reading of 94.6%/93.1% as any kind of share of released results is outside
   the regime.
2. **Source 2's 4.0% is a pooled figure whose own authors decline to conclude from it.** Its regime is
   "all 601 critical-value pairs, strata combined"; the paper's conclusions are stated **only** in the
   stratified regime (2.1% within AMR → repeating unnecessary; 41.4% outside AMR → repeating necessary).
   The pooled 4.0% detached from "within/outside AMR" is the same shape of defect as an effectiveness
   figure detached from the "seven checks in combination" qualifier.

## DEFECTS FOUND

1. **Cut grammar on the Source 1 quotation (sub-claim a).** The string "induces selection on the
   measurement error" is verbatim, but cut on both sides where the surrounding clause changes the
   claim. The paper's conditioning clause ("If we only observe ∆i = xi,1 − xi,2 when xi,1 < c") makes
   the selection a property of working with the *observed difference*, and the trailing clause confines
   it to **ϵi,1** "while ϵi,2 remains unbiased". A subscript-free paraphrase overstates the scope to
   "the measurement error" generally.
2. **Source 2's 4.0% is detached from the qualifier its authors rest everything on.** 4.0% (24/601) is
   printed, and only in the Results body text — **it is absent from the abstract**, which prints
   2.1%/41.4% instead. Quoting 4.0% without the within/outside-AMR split reverses the paper's own
   conclusion, which is that repeating is unnecessary within the AMR and necessary outside it.
3. **Source 3's 0.96% has no printed denominator, and the patient-level reading does not reconcile.**
   The paper calls it "an incidence rate" without stating what it is over. 10,516/259,000 ≈ 4.1%, so it
   is not patients-affected-per-patient; it reconciles only with results-per-test (≈ 30,400/3,170,000).
   Anyone citing 0.96% as a patient-level incidence is doing arithmetic the source does not print.
4. **Source 3's 2.10 does not reconcile with the paper's own global counts.** As worded it is
   occurrences per affected patient, but 30,400/10,516 = 2.89. The 2.10 must be a restricted
   (probably per-analyte) mean resident in Table 2. Unresolved at my read level — flagged, not corrected.
5. **Source 3's 57.7% has no printed denominator** and carries the authors' own hedge "approximate".
   The unit it sits on cannot be established from the body text.
6. **Source 3 never defines its central construct.** "Repeat critical value" is used throughout with no
   definition sentence; the patient-level/across-specimen reading is sound but is inferred from the
   interval-time analysis. The paper separately uses "repeat testing" in the *other* (within-specimen
   confirmation) sense, which is a live trap for anyone quoting it.
7. **Minor front-matter discrepancy on Source 1.** The reader reported the date both as "February 17,
   2026" and as posted "February 16, 2026". Reported as served; not resolved.
8. **Limit of read, not a defect of the sources.** Table contents were not reproduced glyph-by-glyph
   for any of the three papers (e80663 Table 2; e59518 Tables 2–3; the arXiv model tables). Denominators
   and credible intervals resident only in tables were therefore not visible to me. Defects 4 and 5 are
   open for this reason, and the absence of a stated uncertainty on 22%/25% is likewise provisional.

**Not defects, recorded so they are not mistaken for defects.** Source 1's silence on reference
intervals is silence, not a prohibition. Source 1's one appearance of "prevalence" is a description of
Luo et al. (2018) on ADHD — a finding the paper attributes to someone else, and noting the absence of
*that* is not a flag of the gap in question. Source 2's passing mention of "delta failures" in prior
literature is likewise attributed elsewhere.

## ROUTES THAT FAILED

**None.** Every source opened at the first route attempted:

- `https://www.arxiv.org/pdf/2602.14877` — served, full text. The `arxiv.org/html/2602.14877v1`
  fallback was therefore never needed and never tried.
- `https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0080663` — served, full text.
- `https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0059518` — served, full text.

No search or fetch was refused. No DOI resolution through doi.org was needed (both DOIs are PLOS, so
the publisher host was addressed directly). PMC/Europe PMC were not attempted, by routing policy. No
query carried any personal identifier; Unpaywall was not used. Four WebFetch calls used of five;
zero WebSearch calls used of six.

**This is itself a finding.** All three papers are open and readable at the obvious publisher route,
including the one the record treated as a pointer rather than a document. Nothing here is COULD NOT
READ and nothing here is NOT FOUND.

## BEARING ON THE LEDGER ENTRY

**Sub-claim verdicts.**

| Sub-claim | Verdict |
|---|---|
| (a) verbatim "induces selection on the measurement error" | **Holds** — present verbatim in §2.3; but cut on both sides (defect 1) |
| (b) 94.6% / 93.1% printed; denominator = below-cutoff first readings | **Holds, and the earlier agent is right.** 17,195/18,173 and 114,840/123,379. Not released results |
| (c) 22% female / 25% male variance share | **Holds.** §5.5 and again in the abstract; Vitalant US blood donors, n = 100,000 visits |
| (d) recomputes a reference interval / prevalence / monitoring delta | **Does not hold — NO to all three, separately.** "Reference interval" absent; "prevalence" only as attributed to Luo et al.; "delta" only as a cross-validation statistic |
| (f) 4.0% (24/601) vs CAP limit | **Holds** — Results body text, not the abstract; re-derives exactly; but detached from its qualifier (defect 2) |
| (g) unit = initial/repeat run pair; population = critical values only | **Holds** on both counts |
| (h) share of released results / reference interval / monitoring delta | **Does not hold — NO to all three.** The 601-from-72,259 ratio is not printed as a percentage anywhere |
| (i) third paper exists; "repeat" is patient-level recurrence; 0.96%, 2.10, 57.7% | **Holds structurally.** Paper exists, opened, and its "repeat" is across-specimen patient recurrence. All three numbers are printed — but 0.96% and 57.7% without denominators, and 2.10 does not reconcile (defects 3–6) |

**What this means for the candidate.** On the specific mechanism — that conditioning a repeat on a
threshold selects on the first measurement's error — **Source 1 is genuine prior art and states it
verbatim.** Any ledger entry claiming that mechanism as un-asked must now cite §2.3 against itself.

On the downstream quantities, all three priors are **silent rather than supportive or blocking.** None
of the three recomputes a reference interval. None prints a share of released results. None computes a
serial monitoring delta. They are nearest-neighbours in **topic** (what to do about a repeated test on
an out-of-range first reading) and not in **estimand**: Source 1's estimand is a variance decomposition
on below-cutoff donor haemoglobin; Source 2's is binary analytical agreement between two runs on a
critical-value specimen against a CAP limit; Source 3's is temporal recurrence of critical values in a
patient. A result proved under one set of assumptions is silent outside them, so the gap the candidate
occupies — if it is about what a conditional-repeat regime does to *released* results, to a *reference
interval*, or to a *monitoring delta* — survives all three, on an estimand mismatch rather than on
novelty of mechanism.

**Two cautions for whoever writes the entry.** (1) Do not cite Source 2's 4.0% as the paper's finding;
the paper's finding is 2.1% within AMR vs 41.4% outside, and its conclusion is conditional on that
split. (2) Do not treat Source 3's three numbers as having established units: two of them are printed
without denominators, and the third does not reconcile with the paper's own totals.
