# VERIFY uq08 — Colicchio 2018 (JBI) and Nestor 2019 (MLHC)

## CLAIM

A ledger entry asserts that one of its limbs is **already asked and numbered** in the
literature, resting on two sources:

- **Source 1** — Colicchio TK et al., *Journal of Biomedical Informatics* 2018;83:40–53,
  doi 10.1016/j.jbi.2018.05.018. Sub-claims put to it: (a) it prints 41 measures, 40 (98%)
  significant in at least one region, and 20 (49%) of the significant differences driven by
  changes at **control sites**; (b) what a control site is and what "driven by one" means;
  (c) the design is a **segmented regression on prospective operational measures after a
  phased go-live**; (d) it disclaims causality, in what words; (e) it measures some
  **fraction of a record not migrated**.
- **Source 2** — Nestor B et al., "Feature Robustness in Non-stationary Health Records",
  arXiv:1908.00690 / MLHC 2019. Sub-claims: (f) a **maximum AUROC drop of 0.29**, said by an
  earlier agent to be mortality / random forest / raw features; (g) located at the **2008
  CareVue→MetaVision** change in MIMIC; (h) **were both systems' data retained** (i.e. is
  this a discontinuity *without* data loss?); (i) does it ask what fraction of a record
  failed to migrate.

## READ LEVEL

- **Source 1: FULL TEXT.** Route that served: an author/institutional repository copy at
  `nursing.jhu.edu/wp-content/uploads/2025/07/Comprehensive-methodology-to-monitor-longitudinal-change-patterns-during-EHR-implementations.pdf`
  (the publisher's own PDF of the JBI article, front matter intact). sciencedirect.com was
  not attempted (robots-closed per routing); no DOI resolution was needed because the
  repository copy carries the DOI in its front matter.
- **Source 2: FULL TEXT.** Routes that served: `arxiv.org/abs/1908.00690` (abstract) and the
  **PMLR camera-ready PDF** `proceedings.mlr.press/v106/nestor19a/nestor19a.pdf` (full text,
  used for all body/table findings). `arxiv.org/html/1908.00690v1` was not needed.
- Caveat on both: all reading was through the WebFetch summariser. Quotations below are
  **as served**, taken in ordered short consecutive segments; reassembled sentences are
  **labelled reconstructions** with their fragment count. I did not render Table 1 of
  Source 2 myself; its cell value is reported on the summariser's reading of that table.

## WHAT THE SOURCE SAYS (quotations as served)

### Source 1 — front matter, taken from the paper itself

Colicchio TK, Del Fiol G, Scammon DL, Facelli JC, Bowes WA 3rd, Narus SP. "Comprehensive
methodology to monitor longitudinal change patterns during EHR implementations: a case study
at a large health care delivery network." *Journal of Biomedical Informatics* 2018;83:40–53.
doi 10.1016/j.jbi.2018.05.018. Setting: Intermountain Healthcare.

**Type of source:** a **primary study** — a single-health-system methodology/case study of a
commercial EHR roll-out. Not a review, not a protocol, not a guideline, not an editorial.

**(a) The three numbers, and where each is printed.**

**41** is printed in **Methods §3.3 (Outcome measurements)**, not in the Results and not in
the abstract — reconstruction from 2 consecutive fragments:

> "We monitored 41 outcomes including quality (11 measures), productivity (20 measures),"
> " and safety (10 measures)."

**40 (98%)** is printed **twice**, and the two formulations differ in how the finding is
attributed. Abstract (reconstruction from 3 consecutive fragments):

> "A significant change attributable to the intervention was observed in 12 (29%)"
> " measures in three or more regions; in 32 (78%) measures in two or more regions;"
> " and in 40 (98%) measures in at least one region."

Results section (reconstruction from 3 consecutive fragments):

> "A significant change in the intervention sites when compared to the control sites was observed in 12 (29%)"
> " measures in three or more regions; in 32 (78%) measures in two or more regions;"
> " and in 40 (98%) measures in at least one region."

The **abstract** formulation is the stronger one ("attributable to the intervention"); the
**Results** formulation is the hedged, operational one ("in the intervention sites when
compared to the control sites"). Neither carries a citation; both are this paper's own result.

**20 (49%)** is printed **once only**, in the Results, and it is introduced as an
**additional** finding, not as a share of the 40 (reconstruction from 4 consecutive
fragments):

> "In addition, 20 (49%) measures detected a significant difference between the two groups caused by a"
> " significant change that happened in the control sites; out of these,"
> " 7 (17%) detected a significant difference in two regions,"
> " and 13 (32%) measures detected a significant difference in one region."

The 20 (49%) figure appears **nowhere else**: the **abstract does not report it at all**; the
Discussion paraphrases it as "nearly half of the measures"; and Tables 4–7 flag the individual
affected cases by footnote without printing a total.

**(b) What a "control site" is, and what "driven by one" means.**

Definition (reconstruction from 4 consecutive fragments):

> "In addition, we had control sites from two regions where the EHR was implemented only at the end"
> " of the study."
> "The two control regions include one medium-size hospital (243 beds), one large hospital"
> " (472 beds), and 10 primary care clinics."

So a control site is a site of the **same health system** that had **not yet** received the
EHR during the observation window — not an unexposed external comparator, and not
never-exposed: the study ends when the control sites themselves go live.

The mechanism is arithmetic, and the paper states it in Methods (reconstruction from 2
consecutive fragments):

> "Both tests are calculated in each group (intervention/control) separately, and then the difference between the two groups"
> " is obtained: ((intervention after – intervention before) – (control after – control before))."

A difference is "driven by" the control sites when that difference-in-differences is
significant **because the control arm moved**, not the intervention arm. The paper works an
example (reconstruction from 7 consecutive fragments):

> "Although a significant change was detected in “medication for asthma” in region 1,"
> " decreasing significantly immediately after go live by −26.04 (p < 0.001),"
> " such a difference is attributable to a significant increase in control sites."
> " In this region, intervention sites increased immediately after go live by 4.72 (p=0.05),"
> " whereas control sites increased by 30.76 (p < 0.001)."
> " Thus, the significant difference between the two groups"
> " was attributable to a change in the control sites."

Table footnote wording (reconstruction from 2 consecutive fragments):

> "Denotes a significance difference between the two groups caused by a significant difference"
> " that happened in the control sites."

**(c) The design.** The paper does **not** call its method a segmented regression. As served:

> "We used an interrupted time-series analysis (ITSA) with an ordinary least squares model (OLS) [21],"

with Newey–West autocorrelation adjustment and lag order chosen by the Cumby–Huizinga test.
The phrase "segmented regression" occurs in the paper **only inside the title of reference
[25]** (reconstruction from 2 consecutive fragments):

> "Outcomes of an intervention to improve hospital antibiotic prescribing: interrupted time series"
> " with segmented regression analysis"

Data are **monthly measures pulled from existing business-intelligence reports and the
enterprise data warehouse**, February 2013 – July 2017, with a two-year baseline before each
go-live. The go-live **was phased**: five intervention regions went live at different dates,
each "big bang" within its own region.

**(d) Causality disclaimer.** Yes, in the Limitations (reconstruction from 2 consecutive
fragments):

> "Although our methodology effectively detected various outcome changes that correlated with the EHR"
> " implementation, these changes do not imply a causal relationship."

**(e) Fraction of a record not migrated.** **No.** The words "migration", "migrate",
"convert" and "legacy data" do not appear. The only adjacent sentence is:

> "The commercial EHR implemented at Intermountain Healthcare replaced legacy homegrown systems."

**(6) What it measures, in its own words.** Unit of analysis: a **measure-month per site
group per region** — 41 routinely collected operational outcomes (11 quality, 20 productivity,
10 safety; 12 ambulatory, 29 hospital), aggregated monthly. Estimand: the
difference-in-differences of **level change immediately after go-live** and **trend change**,
intervention minus control, per region. Comparator: contemporaneous not-yet-live sites of the
same system. Metric: OLS coefficients with p-values.

### Source 2 — front matter, taken from the paper itself

Nestor B, McDermott MBA, Boag W, Berner G, Naumann T, Hughes MC, Goldenberg A, Ghassemi M.
"Feature Robustness in Non-stationary Health Records: Caveats to Deployable Model Performance
in Common Clinical Machine Learning Tasks." *Proceedings of the 4th Machine Learning for
Healthcare Conference*, PMLR **106**:381–405, 2019. Preprint arXiv:1908.00690v1 (2 Aug 2019,
cs.LG / stat.ML).

**Type of source:** a **primary empirical study** (peer-reviewed conference paper with a
methods contribution). Not a review.

**(f) The 0.29.** Printed **four times**, three in prose and once in a table, never in a
figure:

1. **Abstract** — "0.29 drop in AUROC for mortality prediction", random forest named in the
   same parenthetical (the parallel figure in the same sentence is 0.10 for length of stay).
2. **Introduction** — "worst-case drop of 0.29 AUROC on RF".
3. **Conclusion (§7)** — "reduced from 0.29 to just 0.06 for ICU mortality prediction".
4. **Table 1** (mortality), **"Max AUROC Drop"** column, **Raw** column, **RF** row.

So the earlier agent's attribution — **mortality, random forest, raw features** — is correct,
and the number is **MEASURED and PRINTED**, with the feature-set attribution ("Raw") supplied
by Table 1 rather than by the abstract sentence. Units: AUROC points. Denominator/baseline:
the paper reports **maximum AUROC drop relative to the first evaluation year, 2003**.

**(g) Located at the 2008 CareVue→MetaVision change.** Yes. Quotations as served:

Abstract: "a system-wide record-keeping change in 2008".

Introduction (reconstruction from 2 consecutive fragments; the digits after the system names
are footnote markers in the source, served without spacing):

> "when the underlying EHR data management system at BIDMC was changed from Philips"
> " CareVue2to MetaVision3in 2008"

§5.1, the locating sentence proper, served whole:

> "Models trained on the Raw representation suffer a rapid performance decrease in 2008, after the EHR change."

Figure 3 caption: "rapidly deteriorate during the EHR change from CareVue to MetaVision".

**(h) CRITICAL — both systems retained?** **Yes, both eras are present in the dataset and
both are used.** §6 speaks of "the CareVue portion of MIMIC-III (pre-2008)" and "the
Metavision portion of MIMIC-III (post-2008)"; MIMIC-III is described as covering 2001–2012;
the train/test regimes train on pre-2008 years and test through 2012; and a footnote notes
the split "can be re-identified from the differences in the data directly" — i.e. **both
bodies of data are in hand, distinguishable, and analysed**.

The mechanism the paper gives for the drop is a **schema/representation** change, not loss:

> "any raw features used in the CareVue system before 2008 are not used by later MetaVision records"

plus "entirely new database tables with new variable names". It also records a separate
practice change in 2004 in how often mean arterial blood pressure was charted.

**So what this paper measures is a discontinuity in feature identity/representation across a
system change, with BOTH systems' records retained and available — not a discontinuity caused
by records never migrated.** The paper does not frame the 2008 event as a migration at all; it
frames it as a change of recording system producing non-overlapping raw feature namespaces.

**(i) Fraction of a record that failed to migrate.** **No** — the paper neither asks nor
answers this. It does not discuss migration failure, unmigrated records, or any
migrated-fraction quantity.

**(6) What it measures, in its own words.** Unit of analysis: **one ICU stay** (first ICU
visit per patient); cohort 21,877 stays, MIMIC-III, stay ≥36 h, age >15. Inputs: 7 static
demographic features + 181 hourly labs/vitals over the first 24 h, in four representations —
Raw, PCA (68 components), CUI Code Spanning, Clinical Aggregations (68 expert concepts).
Endpoints: in-ICU mortality (7.4% positive) and length of stay >3 days (47.1% positive).
Models: logistic regression, random forest, bidirectional LSTM, GRU-D. Metric: AUROC, reported
as year-averaged AUROC and **maximum AUROC drop**. Train/test schemes: year-agnostic 5×2 CV;
train 2001–2002 / test 2003–2012; Prior Year; Full History.

## REGIME

**Source 1.** Regime: **one US integrated delivery network (Intermountain Healthcare)**,
commercial EHR replacing homegrown legacy systems, **five regions with staggered big-bang
go-lives**, Feb 2013 – Jul 2017, **41 routinely collected monthly operational measures**,
compared against **not-yet-live sites of the same system**, estimand = difference-in-differences
level and trend change by region, threshold p<0.05 (one reported value sits exactly at
p=0.05). Within this regime the source establishes: a monitoring **methodology**, the counts
of measures showing significant change, and the observation that a sizeable set of apparent
intervention effects trace to control-arm movement. The source is **silent** on: anything
about record completeness, data migration, record fields, or data loss; and silent on
mechanism for any individual measure's change.

**Source 2.** Regime: **MIMIC-III, a single academic ICU (BIDMC), 2001–2012**, first ICU
stay per adult patient, first 24 hours, two binary prediction tasks, four feature
representations, AUROC. Within this regime the source establishes: that AUROC degrades under
temporal train/test splits, worst at 2008; that the degradation is largest for the **Raw**
representation; and that **expert-concept aggregation** shrinks it (0.29→0.06 mortality,
0.10→0.03 LOS). The source is **silent** outside that: no claim about record migration
fidelity, no claim about how much of a record survives a system change, no claim about
non-ICU settings or other institutions, no per-system record counts.

**Does the claim handed to me sit inside the regime?** For Source 2 the fit is the problem.
The 0.29 is a true, printed, measured number **in a regime where no data was lost** — both
CareVue and MetaVision records sit in the dataset and are read. If the ledger limb is about
*records never migrated / a fraction of a record lost in a cutover*, this paper is **outside
that regime and silent on it**, not supportive of it. It is the right magnitude for "EHR
cutovers break models" and the wrong source for "data fails to migrate".

## DEFECTS FOUND

1. **"20 (49%) of the significant differences" misstates the set.** The source writes "**In
   addition**, 20 (49%) measures detected a significant difference between the two groups
   caused by a significant change that happened in the control sites". It is presented as an
   **additional** count over the 12/32/40 series, and 49% is 20/41 — a share of **all 41
   measures**, not of the 40 significant ones. Reading it as "20 of the 40 significant
   differences" is somebody's inference, and the source does not print that relation.
   (Both denominators happen to give ~49–50%, which is exactly why the slip is easy to miss.)
2. **"significant in at least one region" drops a qualifier on both sides of the cut.** The
   abstract says "A significant change **attributable to the intervention** was observed in
   … 40 (98%) measures in at least one region"; the Results says "A significant change **in
   the intervention sites when compared to the control sites**". Neither says simply
   "significant". The two formulations are not equivalent and the ledger short form matches
   neither.
3. **"41 measures" is cited to the wrong location.** 41 is printed in **Methods §3.3**, not
   in the Results and not in the abstract. Anyone re-deriving the counts from the abstract
   alone would not find the denominator there.
4. **"Segmented regression" is not the paper's own term.** The paper names
   "an interrupted time-series analysis (ITSA) with an ordinary least squares model (OLS)".
   "Segmented regression" occurs in the paper only inside a **reference title**. The
   descriptions are functionally close, but attributing the phrase to this paper takes a short
   form someone else wrote over the paper's front matter and methods.
5. **"Prospective operational measures" is half right.** The measures are operational and
   routinely collected (business-intelligence reports / enterprise data warehouse), and the
   paper claims the methodology can be applied prospectively — but the reported analysis is
   a retrospective pull over Feb 2013 – Jul 2017, not prospectively collected trial data.
6. **Source 2's regime is misapplied if used for data loss.** This is the load-bearing one.
   The paper measures a representation discontinuity **with both systems' data retained**
   (§6: "the CareVue portion of MIMIC-III (pre-2008)" / "the Metavision portion of MIMIC-III
   (post-2008)"); the stated mechanism is non-overlapping feature namespaces, not absent
   records. Using 0.29 as evidence about unmigrated records is the all-binary-theorem /
   continuous-instrument error in a new costume.
7. **Neither source measures any fraction of a record not migrated — and this is an
   absence, not a flag.** Source 1 never uses migration vocabulary at all; Source 2 discusses
   a recording-system change and explicitly says pre-2008 raw features "are not used by later
   MetaVision records", which is a statement about **feature reuse by models**, not about
   record survival. Silence here is silence: neither paper notes the gap, so neither can be
   cited as noting it.
8. **Unverified sub-detail, stated as such:** I did not establish **which train/test regime**
   Table 1's "Max AUROC Drop" column is computed under (2001–2002 train, Prior Year, or Full
   History); the paper states the drop is relative to the first evaluation year 2003. Anyone
   quoting 0.29 with a regime attached should confirm that cell's column header directly.

## ROUTES THAT FAILED

None. No search or fetch was refused, and no host blocked me. Spend: 1 WebSearch (cap 6),
4 WebFetch (cap 5). sciencedirect.com and PMC/Europe PMC were **not attempted** (routing says
closed/blocked); `arxiv.org/html/1908.00690v1` was **not needed** because the PMLR PDF served.
Unpaywall was not used, by instruction. Both sources are **open and readable** — this is not a
COULD NOT READ and not a NOT FOUND on either.

## BEARING ON THE LEDGER ENTRY

The entry claims one of its limbs is **already asked and numbered**. Split the limb.

- **If the limb is "does an EHR cutover produce a measurable discontinuity in operational
  measures / model performance, and by how much?" — then yes, asked and numbered, twice
  over.** Source 1 numbers it as 40 (98%) of 41 operational measures changing significantly
  in at least one region, with the critical and under-quoted caveat that 20 (49%) of the
  between-group differences were produced by the **control** arm moving. Source 2 numbers it
  as a 0.29 AUROC drop (mortality, random forest, Raw features), printed in the abstract,
  introduction, conclusion and Table 1. Both numbers survive checking.
- **If the limb is "what fraction of a record fails to migrate in a cutover?" — then no,
  neither source asks it and neither answers it, and Source 2 in particular cannot be used
  for it.** Source 2's discontinuity occurs with **both** systems' records retained and read;
  it is a feature-namespace break, not a data-loss measurement. Source 1 does not touch
  migration at all. A limb about unmigrated record fractions remains **un-asked** on this
  evidence, and the "already numbered" verdict should be withdrawn for that limb specifically.
- **Repairs the entry needs regardless:** restate 20 (49%) as an additional count over 41
  measures rather than a share of the 40; restore the "attributable to the intervention" /
  "intervention vs control sites" qualifier on the 40 (98%); drop "segmented regression" in
  favour of the paper's own "interrupted time-series analysis (ITSA) with an ordinary least
  squares model (OLS)"; soften "prospective" to routinely collected operational measures
  analysed over Feb 2013 – Jul 2017; and attach to the 0.29 the fact that it is measured with
  no data loss.
