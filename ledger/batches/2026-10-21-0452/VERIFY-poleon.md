# VERIFY — Poleon, Sabbagh & Racette 2022 (Whitecoat adherence in POAG)

## Citation as the source itself serves it

Front matter citation line, verbatim (reassembled from two consecutive fragments, each under the
summariser's quotation cap):

> "Poleon S, Sabbagh N and Racette L (2022) Whitecoat Adherence in Patients With Primary Open-Angle Glaucoma."
> "Front. Med. 9:867884."

with `doi: 10.3389/fmed.2022.867884`. Note the front matter prints "Sabbagh N **and** Racette L", not a
comma before the last author.

- Article-type label as printed: **ORIGINAL RESEARCH article**
- Journal: *Frontiers in Medicine*, Section: Ophthalmology
- Volume 9, article number 867884, 2022. Received 1 Feb 2022; accepted 26 April 2022; published 19 May 2022.
- Authors and affiliations as served: Shervonne Poleon (Department of Optometry and Vision Science,
  School of Optometry, University of Alabama at Birmingham, Birmingham, AL); Nouran Sabbagh
  (Department of Internal Medicine, UAB, Montgomery, AL); Lyne Racette* (Department of Ophthalmology
  and Visual Sciences, School of Medicine, UAB, Birmingham, AL).
- Edited by: Menaka Chanu Thounaojam. Reviewed by: Altaf A. Kondkar (King Saud University, Saudi
  Arabia) and Sara Mucherino (University of Naples Federico II, Italy). The editor's affiliation is
  served inconsistently on the page itself (Augusta University in one block, Meharry Medical College
  in another); recorded as served, not resolved.
- Parent study grant named in Methods: NIH EY025756.

## Read level and routes

**Read level: FULL TEXT.** Read via WebFetch at
`https://www.frontiersin.org/journals/medicine/articles/10.3389/fmed.2022.867884/full`
(open access, CC BY 4.0). Abstract, Methods, Results text, Table 1, Table 2 rows and Discussion /
limitations all read.

**Routes failed: none.** No DOI resolution, PMC, Europe PMC, doi.org or Unpaywall call was needed or
attempted; the publisher host answered on the first try. One WebSearch (domain-restricted to
frontiersin.org) to obtain the URL; four WebFetch calls against that one URL. No refusal was
returned by any call.

Long verbatim strings below were obtained by asking for **ordered consecutive segments** under the
summariser's ~125-character quotation cap and assembling only consecutive returns; where a string is
assembled this way it is labelled a reconstruction with the fragment count. No cut string was
completed by inference.

---

## (a) Front matter

**What the source says: the claim's front matter is correct in every field.**

| Field | Claim | Source |
|---|---|---|
| Authors | Poleon S, Sabbagh N, Racette L | matches (front matter joins last two with "and") |
| Title | Whitecoat Adherence in Patients With Primary Open-Angle Glaucoma | verbatim match, including the unhyphenated "Whitecoat" |
| Journal | Frontiers in Medicine | matches ("Front. Med." in the citation line) |
| Volume | 9 | matches |
| Article number | 867884 | matches |
| Year | 2022 | matches (published 19 May 2022) |
| DOI | 10.3389/fmed.2022.867884 | matches |

Taken from the article's own front matter and citation line, not from a third-party short form.

---

## (b) The figures, windows, n, device and test

**What the source says: every number and p-value in the claim is verbatim correct. Two things in the
claim's framing are not what the paper compares, and the claim drops the uncertainty the paper
always carries.**

Verbatim, from the Abstract (reconstruction from 4 consecutive fragments):

> "Overall, mean adherence increased from Pre14−4 to Pre3−1 (85.5% ± 21.2 to 88.5% ± 23.2, p = 0.01) and
> decreased from Post1−3 to Post4−14 (87.0 ± 23.9 to 84.9 ± 23.3, p = 0.02)."

The same two comparisons appear a second time in the Results body (reconstruction from 3 consecutive
fragments), unhedged and without a citation to anyone else:

> "In the entire sample, mean adherence increased from Pre14−4 to Pre3−1 (85.5% ± 21.2 to 88.5% ± 23.2,
> p = 0.01) and decreased from Post1−3 to Post4−14 (87.0 ± 23.9 to 84.9 ± 23.3, p = 0.02)."

and a third time as Table 2's "Overall" row: Pre14−4 `85.5 ± 21.2`, Pre3−1 `88.5 ± 23.2`, P `0.01`;
Post1−3 `87.0 ± 23.9`, Post4−14 `84.9 ± 23.3`, P `0.02`. All three formulations agree.

**The exact windows compared.** Verbatim from the Abstract Methods (reconstruction from 3 consecutive
fragments):

> "Wilcoxon tests were used to compare mean adherence between the following periods: Pre14−4 (days 14 to 4
> preceding the clinic visit) and Pre3−1 (days 3 to 1 preceding the visit); Post1−3 (days 1 to 3 following the
> clinic visit) and Post4−14 (days 4 to 14 following the visit)."

So:
- The 85.5% → 88.5% rise is **days 14–4 before the visit vs days 3–1 before the visit**. It is a
  within-pre-visit comparison, not "before the visit" against anything else.
- The 87.0% → 84.9% fall is **days 1–3 after the visit vs days 4–14 after the visit**. It is a
  within-post-visit comparison. It is **not** a fall from the pre-visit peak (88.5%) and not a fall
  relative to baseline; 84.9% is still below the Pre14−4 figure of 85.5%, but the paper never tests
  that pair.
- No test is reported across the visit (e.g. Pre3−1 vs Post1−3).

**The test.** Methods, Statistical Analysis, verbatim (reconstruction from 2 consecutive fragments):

> "we used Wilcoxon signed-rank test to identify significant differences in mean adherence between the
> following study periods"

The Abstract shortens this to "Wilcoxon tests". The signed-rank form (paired, within-patient) is the
one stated in Methods. Alpha = 0.05; analyses in JMP Pro 16. A separate **univariate linear
regression** was used for associated factors, not for the period comparisons.

**n = 66 and POAG.** Verbatim: "Sixty-six patients were included, of which 51.5% were female." and
"Mean age was 70.8 ± 8.1 years." Inclusion, verbatim (reconstruction from 3 consecutive fragments):

> "In this cohort study, patients with primary open-angle glaucoma were selected from an ongoing
> longitudinal NIH-funded study if they used hypotensive eyedrops, had a clinic visit during the parent study,
> and had adherence data during the 28 days evenly bracketing the clinic visit."

**The 28-day window.** Correct, and it is the paper's own phrase — "the 28 days evenly bracketing the
clinic visit" — and the span of the four analysis windows (days −14 to −1 and +1 to +14). The
limitations confirm it was protected: "We minimized this limitation by ensuring that no research
visits occurred within the 28-day period evenly bracketing the clinic visit."

But note a **different** window elsewhere in the same Abstract: the headline descriptive adherence
figures are over six months, not 28 days (reconstruction from 2 consecutive fragments):

> "In the 6 months evenly bracketing the clinic visit, mean and median
> adherence were 86.3% (standard deviation = 17.7) and 95.6% (interquartile range = 21.2), respectively."

The claim as handed does not attach 86.3% to the 28 days, so it does not commit this error — but
anyone extending the claim must keep the two windows apart.

**"One clinic visit each."** The paper does not state this as a design parameter in those words; it
states it as a **limitation** (reconstruction from 2 consecutive fragments):

> "A second limitation associated with the longitudinal cohort used in this study was our inability
> to assess whitecoat adherence over multiple clinic visits."

> "This was not possible as the number of research visits during the parent study reduced the number
> of eligible clinic visits for our analysis."

So one visit per patient is right in substance, but the paper's own framing is that it could not do
more than one, not that one was the chosen design.

**MEMS caps.** Verbatim: "Adherence within the implementation phase was measured using Medication
Event Monitoring System (MEMS) caps." Note the qualifier *implementation phase*, and that the first
two months of monitoring were excluded against the Hawthorne effect: "However, we guarded against
this by excluding the first 2 months of monitoring data."

---

## (c) The subgroup claim

**What the source says: the claim holds for the PRE-visit rise and FAILS for the POST-visit fall.
The paper reports the optimal subgroup moving in the OPPOSITE direction to the full sample after the
visit.**

The split is the one the claim names. Verbatim (reconstruction from 2 consecutive fragments):

> "Analyses were performed in the full sample and in patients with optimal (≥80%, n = 49) and suboptimal
> adherence (<80%, n = 17)."

Table 2, as served:

| Row | Pre14−4 | Pre3−1 | P | Post1−3 | Post4−14 | P |
|---|---|---|---|---|---|---|
| Overall (n = 66) | 85.5 ± 21.2 | 88.5 ± 23.2 | 0.01 | 87.0 ± 23.9 | 84.9 ± 23.3 | 0.02 |
| Optimal (n = 49) | 94.0 ± 11.7 | 97.7 ± 7.4 | 0.001 | 95.2 ± 12.0 | 95.4 ± 5.7 | 0.007 |
| Suboptimal (n = 17) | 60.9 ± 23.7 | 61.8 ± 31.7 | 0.69 | 63.2 ± 33.1 | 54.7 ± 28.0 | 0.32 |

Results body, verbatim (reconstruction from 5 consecutive fragments):

> "As depicted in Figure 2, patients with optimal adherence showed an increase in adherence both prior to
> and after the clinic visit (Pre14−4 to Pre3−1: 94.0 ± 11.7 to 97.7 ± 7.4, p = 0.001; Post1−3 to Post4−14:
> 95.2 ± 12.0 to 95.4 ± 5.7, p = 0.007)."

> "There was no significant change from Pre14−4 to Pre3−1 (p = 0.69) or from Post1−3 to Post4−14 (p = 0.32)
> in patients with suboptimal adherence."

Abstract, second formulation of the same thing (reconstruction from 3 consecutive fragments):

> "In patients with optimal
> adherence, adherence increased from Pre14−4 to Pre3−1 (94.0 ± 11.7 to 97.7 ± 7.4, p = 0.001) and from
> Post1−3 to Post4−14 (95.2 ± 12.0 to 95.4 ± 5.7, p = 0.007). Whitecoat adherence was not observed in patients
> with suboptimal adherence."

Reading these against the claim:

- **Pre-visit rise: claim holds.** Significant in the ≥80% group (p = 0.001), not significant in the
  <80% group (p = 0.69, 60.9 → 61.8, a +0.9 pp move). "Carried by ≥80%, absent <80%" is a fair
  reading of what the paper reports for this comparison.
- **Post-visit fall: claim fails.** The paper's own words are that the optimal group showed "an
  increase in adherence both prior to **and after** the clinic visit", i.e. Post1−3 → Post4−14 went
  **up** (95.2 → 95.4, p = 0.007), the opposite direction to the full sample's significant
  **decrease** (87.0 → 84.9, p = 0.02). The <80% group is the one that fell (63.2 → 54.7, −8.5 pp),
  and that fall was **not** significant (p = 0.32). So **neither** subgroup reproduces the
  full-sample post-visit decline, and the group the claim credits with carrying the effect moves
  against it. The paper does not reconcile this directional discrepancy anywhere.
- The paper's blanket sentence "Whitecoat adherence was not observed in patients with suboptimal
  adherence" is the hedge-free formulation that supports the "absent below 80%" half; it is the one
  most likely to be quoted out of context, because it sits beside a −8.5 pp post-visit drop in that
  same group.

**On the suboptimal null, the paper offers power, not absence of effect.** Verbatim (reconstruction
from 4 consecutive fragments):

> "In this study, whitecoat adherence was not observed in patients with suboptimal adherence."

> "This could potentially be due to the small size of this group."

> "Although there was a large decrease in adherence after the clinic visit, high variability in adherence
> measurements in this group reduced our ability to detect a significant effect."

and in the limitations (reconstruction from 2 consecutive fragments):

> "Lastly, the relatively small number of patients with suboptimal adherence reduced our ability
> to detect a whitecoat effect in this group."

So "absent in the subgroup below 80%" overstates the paper: the paper says **not detected**, and
twice attributes that to n = 17 and to variability, while explicitly describing "a large decrease in
adherence after the clinic visit" in that very group.

**An internal oddity recorded as served, not corrected.** In the optimal row the post-visit
comparison is 95.2 ± 12.0 → 95.4 ± 5.7 — a +0.2 pp change reported at p = 0.007, with the SD
dropping by more than half between the two windows. This is the figure the paper prints in both the
Abstract and the Results body and in Table 2, three times consistently. It is reproduced here as
served, and flagged as anomalous on its face; no correction, re-derivation or guess at a
transposition has been made.

**Subgroup regression findings (for completeness).** Verbatim (each a reconstruction from 2
consecutive fragments):

> "In patients with optimal adherence, lower education level was associated with whitecoat adherence
> after the clinic visit (B = −4.0, p = 0.046)."

> "In the full sample, a significant negative association was observed between whitecoat adherence
> before the clinic visit and BIPQ total score (B = −0.40, p = 0.01)."

Further significant BIPQ subscale associations are reported in Results and Table 3; not enumerated
here, as no lettered claim turns on them.

---

## (d) IOP and clinical outcomes

**What the source says: plainly, no. The paper does not relate intraocular pressure or any clinical
outcome to the peri-visit adherence surge. IOP is never measured and never analysed in this study.**

Every occurrence of "intraocular pressure" / "IOP" in the article is in the Abstract Purpose, the
Introduction or the Discussion — i.e. motivation and speculation. Verbatim examples (each a
reconstruction from 2 consecutive fragments):

Abstract Purpose:
> "In glaucoma, whitecoat adherence to prescribed hypotensive therapy may lead to intraocular pressure readings
> within the target range, which may impact clinical decision-making."

Introduction:
> "Elevated intraocular pressure (IOP) is the sole modifiable risk factor for glaucoma progression, and daily
> instillation of hypotensive eyedrops can lower IOP and reduce pressure-induced optic nerve damage."

> "IOP readings within the target range may lead clinicians to overestimate treatment effectiveness, which may
> bias the interpretation of other clinical measures (e.g., visual field imaging results)."

> "Furthermore, the obtention of IOP readings within the target range may preclude recommendations for indicated
> adjunctive therapy or surgical intervention."

Discussion:
> "Hypotensive eyedrops lower IOP per 12 or 24-h, which can mask periods of uncontrolled IOP prior to the
> clinic visit."

> "This line of thought is consistent with reports of progressive worsening of the visual field with IOP levels
> seemingly at or below the target when measured in the clinic (20)."

Note the grammar on that last one: the IOP-and-visual-field claim is **attributed to reference 20**,
not measured here. It is the paper citing someone else.

**No IOP in Methods, Results or Table 1.** Table 1's row labels, as printed, are: "Study variable";
"Age (years) mean ± SD"; "Number of ocular medications, mean ± SD"; "Medication adherence, mean ± SD
(median, IQR)"; "Overall"; "Optimal (N = 49)"; "Suboptimal (N = 17)"; "Gender" (Female, Male);
"Race" (White, Black); "Education level" (High school/Some college, Baccalaureate, Graduate);
"Marital status" (Married, Not married); "Employment level" (Employed full-time, Not employed
full-time); "Household income" ($60,000 or less, Above $60,000, Declined to answer or unknown);
"BIPQ subscale scores"; "Total BIPQ score"; "Consequences"; "Timeline"; "Personal control";
"Treatment control"; "Identity"; "Concern"; "Emotional representation"; "Coherence".

No IOP. No visual field result. Visual field mean deviation and visual acuity appear **only** as
parent-study eligibility thresholds in Methods ("mean deviation better than −12 dB", "visual acuity
better than 20/40"), never as measured or analysed variables here. The only ocular variable carried
into the analysis is "Number of ocular medications".

**On rule (9):** the article contains **no** sentence stating that IOP or clinical-outcome data were
unavailable or unanalysed. Its silence on the link is simply silence — it is not a stated
limitation, and must not be reported as one. The limitations the paper does state are: the surrogate
nature of MEMS data, the inability to assess multiple clinic visits, a possible whitecoat effect
running throughout the parent study (12 research visits over 2.5 years), and the small suboptimal
group.

---

## (e) Study type and provenance of the measurements

**What the source says: a primary study — an original-research cohort analysis — and the adherence
measurements are its own, though taken from a parent study's data collection.**

- The article-type label printed on the page is **"ORIGINAL RESEARCH article"**. It is not a review,
  not a protocol, not a guideline, not an editorial and not a column. It does review prior whitecoat
  literature in the Introduction and Discussion, and the IOP/visual-field assertion in the
  Discussion is cited to reference 20 (see (d)).
- The paper calls itself a cohort study in its own words: "In this cohort study, patients with
  primary open-angle glaucoma were selected from an ongoing longitudinal NIH-funded study..."
- The measurements are the authors' own analysis of MEMS-cap data, but the data collection is the
  **parent** NIH longitudinal study's (grant EY025756); these 66 patients are a selected subset of
  it, and the regression covariates are "the demographic, clinical, and psychological data collected
  during the parent study". So: original analysis, secondary use of a parent cohort's prospectively
  collected monitoring data. Not an independent prospective data collection designed for this
  question.

**What the paper measures — unit of analysis, endpoint, comparator, estimand, in its own terms:**
- Unit of analysis: the individual patient (n = 66), one clinic visit each, compared **within**
  patient (Wilcoxon signed-rank, paired).
- Endpoint: mean percent medication adherence to hypotensive eyedrops over a defined window, from
  MEMS-cap dosing records in the implementation phase.
- Comparator: another window in the same patient — Pre14−4 vs Pre3−1, and Post1−3 vs Post4−14.
- Estimand: the within-patient shift in mean adherence between two adjacent windows, reported as
  mean ± SD per window with a paired-test p-value. No between-group contrast, no effect size with a
  confidence interval, no clinical endpoint, no adjusted model for the period comparisons.

---

## Defects

1. **(c) The directional core of the subgroup claim is wrong.** The claim says the effect is carried
   by the ≥80% subgroup. For the **post-visit** comparison the paper reports the ≥80% subgroup going
   **up** (95.2 → 95.4, p = 0.007) while the full sample goes **down** (87.0 → 84.9, p = 0.02). The
   ≥80% group cannot be carrying a decline it moves against. Verbatim: "patients with optimal
   adherence showed an increase in adherence both prior to and after the clinic visit".
2. **(c) "Absent below 80%" overstates the paper, which says not detected and blames power.** The
   <80% group fell 63.2 → 54.7 (−8.5 pp) at p = 0.32, and the paper twice says so explicitly:
   "Although there was a large decrease in adherence after the clinic visit, high variability in
   adherence measurements in this group reduced our ability to detect a significant effect" and
   "the relatively small number of patients with suboptimal adherence reduced our ability to detect
   a whitecoat effect in this group." Quoting the paper's own unhedged "Whitecoat adherence was not
   observed in patients with suboptimal adherence" without these two sentences is a cut whose
   surrounding clauses change the claim.
3. **(b) The claim's "before the visit" / "after it" collapses within-window comparisons into
   across-visit ones.** Both p-values compare two windows on the *same side* of the visit. Nothing
   in the paper tests pre-visit against post-visit, so the claim's phrasing invites a reading
   ("adherence rose before, then fell after") that the paper's tests do not support.
4. **(b) Stated uncertainty dropped.** The paper never reports these means bare; every one carries
   ± SD (85.5 ± 21.2, 88.5 ± 23.2, 87.0 ± 23.9, 84.9 ± 23.3). The SDs are large relative to the
   2–3 pp shifts, and the claim omits them.
5. **(b) "One clinic visit each" is substantively right but is the paper's stated *limitation*, not
   its design choice** — "our inability to assess whitecoat adherence over multiple clinic visits".
6. **Internal anomaly in the source itself, recorded not corrected:** the optimal group's post-visit
   row reads 95.2 ± 12.0 → 95.4 ± 5.7 at p = 0.007 — a +0.2 pp change at p = 0.007 with the SD more
   than halving. Printed identically in the Abstract, the Results body and Table 2. Reproduced as
   served; no correction inferred.
7. **Front-matter inconsistency on the publisher page itself:** the handling editor's affiliation is
   given as Augusta University in one block and Meharry Medical College in another. Not a defect in
   the claim; recorded because it is in the served front matter.
8. **Two different bracketing windows live in the same Abstract** — the 28-day analysis window and
   the "6 months evenly bracketing the clinic visit" window that carries the 86.3% mean / 95.6%
   median. The claim does not conflate them, but the figures are one sentence apart and are easy to
   cross-wire.
9. **No defect found in (a), (d) or (e).** Front matter matches field for field; the IOP answer is a
   clean no, with IOP never measured or analysed; the study is correctly characterised as a primary
   original-research cohort analysis reporting its own adherence measurements on a parent study's
   cohort.
