# VERIFY — UQ-20261022-07, reason-for-silence attack (Gate 4 attack 7, adversary 3)

Checker: fresh context. Budget used: **6 of 6 searches, 5 of 5 fetches.** Stopped at the cap, as
instructed, rather than working around it. One fetch was refused by a site (`robots_disallowed`) and
is recorded below rather than retried by another route.

---

## CLAIM

The attack handed to me, in the harness's wording:

> there is no credible reason for silence, because an academic trials group **already pre-specified
> and published placebo-arm biochemical positivity with denominators for an over-the-counter class
> two decades before the entry's claimed regime.**

The task set me five sub-claims: (a) every trial/paper that assayed **control-arm** specimens for the
**study drug class** and printed a positivity rate **with a denominator**; (b) the **earliest** such
publication; (c) whether this is **routine** in any therapeutic area, per area; (d) whether any of
them **re-estimates** the treatment effect for the measured control-arm exposure (the candidate's
third limb); (e) whether **published guidance** (ICH E9/E9(R1), CONSORT, FDA, EMA) asks anyone to
measure control-arm exposure to the study class **by assay**.

I report what the sources say. I do not grade the question and I do not adjudicate the entry.

---

## READ LEVEL

Per source, named separately. **COULD NOT READ and NOT FOUND are kept distinct throughout.**

| Source | Route | Read level |
|---|---|---|
| Baxi et al., PLOS ONE 2018;13(1):e0190118 | `journals.plos.org/plosone/article?id=10.1371%2Fjournal.pone.0190118` | **Full text** (publisher HTML, via summariser). **Table 2 was not rendered** to the summariser, so per-matrix placebo counts were not obtained. Abstract, Methods, Results, Discussion all reached. |
| ICH E9(R1) Step 4 Guideline, adopted 2019-11-20 | `database.ich.org/sites/default/files/E9-R1_Step4_Guideline_2019_1203.pdf` | **Full text** (the official PDF, whole-document term search run against it). |
| Jacot et al., Clin Transl Med 2018;7:37 | `link.springer.com/article/10.1186/s40169-018-0213-6` | **Full text** (publisher page, via summariser). Author list truncated on the page as served. |
| Parish et al., *Trials* 2023;24:166 | `trialsjournal.biomedcentral.com/articles/10.1186/s13063-023-07198-z` | **Full text**, but **targeted** — I asked three questions (prior art, re-estimation, pre-specification) and did not re-derive the Table 1 numbers myself. For those I rely on two prior first-hand reads held in this repo (see below) and label them as such. |
| Grant et al., iPrEx, NEJM 2010 | Not fetched by me | **Not read by me.** Relied on at second hand from a prior first-hand read in this repo, explicitly labelled. |
| CONSORT 2010 checklist + explanation | `www.consort-statement.org/checklists/view/32--consort-2010/66-intervention` | **COULD NOT READ.** Site returned `robots_disallowed`; nothing of the page was retrieved. This is **not** a finding that CONSORT is silent. |
| FDA guidance; EMA guidance other than ICH E9(R1) | Not attempted | **NOT CHECKED** — budget exhausted. Not a negative. |

**Repo-internal second-hand sources, named so the provenance is auditable** (these are prior
checkers' first-hand reads in this same batch directory, not my own):

- `/home/claude/frontier_knowledge/ledger/batches/2026-10-22-0633/VERIFY-parish-ascend-numbers.md`
- `/home/claude/frontier_knowledge/ledger/batches/2026-10-22-0633/VERIFY-parish-instrument-grade.md`
- `/home/claude/frontier_knowledge/ledger/batches/2026-10-22-0633/VERIFY-iprex-placebo-drug-levels.md`

---

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Every instance found that printed control-arm positivity WITH a denominator

**Two.** Plus one that assayed the control arm and printed no denominator. In six searches. I say
below why that count is not a measurement of rarity.

---

#### A1. Baxi et al. 2018 — the strongest instance, and it is NOT in the ledger

**Front matter, from the page itself.** Sanjiv M. Baxi, Eric Vittinghoff, Peter Bacchetti, Yong
Huang, Kata Chillag, Ryan Wiegand, Peter L. Anderson, Robert Grant, Ruth M. Greenblatt, Susan
Buchbinder, Monica Gandhi, Albert Y. Liu. *PLOS ONE*, 2018, volume 13, issue 1, article e0190118,
DOI 10.1371/journal.pone.0190118, published 9 January 2018.

**Article type:** primary study — a **nested pharmacologic substudy** of a phase 2, randomised,
double-blind, placebo-controlled extended-safety trial of tenofovir disoproxil fumarate (TDF) among
men who have sex with men: the **US CDC PrEP Safety Study, ClinicalTrials.gov NCT00131677**. Only
the San Francisco site participated in the substudy.

**The quantity, named with its denominator, as served:**

> "in only 1/41 placebo arm participant"

printed in the **abstract**. The Results sentence that carries it in prose:

> "Drug was detected in plasma, PBMCs, and hair in almost all active arm participants, and not
> detected in almost all placebo arm participants."

and the Discussion's interpretation of the single positive:

> "possibly a surreptitious PrEP user"

**So: the number is 1, the denominator is 41, the units are placebo-arm participants with study drug
detected in their own specimens, and it is printed in a sentence in the abstract.** This satisfies
the task's quantity specification — a published measurement of how many control-arm participants in
a randomised trial had the study drug class detected in their own specimens, reported with a
denominator — more squarely than anything the record or either adversary opened.

**Instrument, and it is a detection assay for the study class, not a proxy.** LC/MS/MS for tenofovir
(TFV) in plasma and hair and for TFV-diphosphate in PBMCs. Limits as served:

> "The lower limit of quantification (LLOQ) for TFV was 10 ng/mL."

PBMC LLOQ 2.5 fmol/sample. For hair the page gives a validated range of 0.01 to 0.400 ng/mg and
**does not state a separate LLOQ**. **No false-positive rate is printed** for any matrix.

**Unit of analysis and sampling frame, in the paper's terms.** Unit: the **participant**, not the
participant-visit. Of 101 eligible San Francisco participants, 88 (88%) consented and all 88
contributed data; 41 of the 88 were placebo-arm. Eligibility required having

> "been on study drug (either TDF or placebo) for ≥ 3 months."

Hair was collected at substudy enrolment; PBMCs at the same visit (33%) or the nearest quarterly
visit (67%); plasma matched to the hair and PBMC collection dates. Samples were tested by staff
blinded to arm assignment.

**Pre-specification: the page does not say.** It states no pre-registered or pre-specified analysis
plan for the placebo-arm testing. The Discussion frames placebo testing as **estimating specificity**
and lists it as a **strength**. So the placebo denominator exists because the authors wanted an
analytical specificity comparator, not because anyone pre-declared a contamination measurement.

**Read level: full text. Table 2 not rendered**, so the per-matrix split of the single placebo
positive (plasma vs PBMC vs hair) is **COULD NOT READ**, not absent.

---

#### A2. Parish et al. 2023 — the attack's own instance, checked where the attack's adjectives live

**Front matter, from prior first-hand reads in this repo:** Parish et al., *Trials* 2023, volume 24,
article 166, DOI 10.1186/s13063-023-07198-z. The prior checker records that the publisher landing
page served "Trials", "2023", "volume 24", "article 166", and that **the full author string and the
masthead article-type label are not established at either route** — I inherit that caveat and do not
improve on it.

**The printed placebo cells, from the prior first-hand read of Table 1** (labelled second-hand):

| Table 1 row | Placebo cell |
|---|---|
| Random sample — All (ITT) | **5/74 (7%)** |
| Either sample — Adherent | **5/168 (3%)** |
| Random sample — Non-adherent | **4/9 (44%)** |

and the prose formulation the adversary quoted:

> "82% allocated aspirin versus 7% allocated placebo achieved effective suppression of U-TXM
> (Table 1)."

**My own targeted read of that page answered the three questions the attack rests on:**

**(i) Pre-specification — NOT established at the publisher page.** On my read, **the words
"pre-specified" and "prespecified" do not appear anywhere on the page.** The nearest text is a
citation to the *main trial's* governing documents:

> "(protocol and CONSORT diagram [7]; Data Analysis Plan [6])"

which is the ASCEND protocol and the ASCEND Data Analysis Plan, **not** a pre-specification of this
substudy's placebo-arm comparison. The one phrase in the neighbourhood runs the other way:

> "A preliminary analysis had shown that the Pearson correlation"

— a **data-driven** decision (not to adjust for baseline), described as preliminary, not planned.

**(ii) Re-estimation — none.** The page does not re-estimate or adjust the treatment effect for the
placebo-arm positivity or for non-study aspirin use, and **mentions no dilution of the effect**.
Non-study aspirin users were handled by **classification, not adjustment**: they were classed as
non-adherent and excluded from the adherent analysis. The only adjustment reported is for age and
baseline values:

> "Adjustment for participant age did not alter estimates of the reduction in U-TXM with aspirin"

**(iii) Prior art — the paper names none.** It cites no earlier trial that measured drug exposure or
biochemical adherence in a placebo or control arm. Its two nearest citations are to non-placebo
comparisons:

> [5] Bethel MA, Harrison P, Sourij H, Sun Y, Tucker L, Kennedy I, et al. Randomized controlled
> trial comparing impact on platelet reactivity of twice-daily with once-daily aspirin in people
> with type 2 diabetes. Diabet Med. 2016;33(2):224–30.

> [8] Ames PR, Batuca JR, Muncy IJ, De La Torre IG, Pascoe-Gonzales S, Guyer K, et al. Aspirin
> insensitive thromboxane generation is associated with oxidative stress in type 2 diabetes
> mellitus. Thromb Res. 2012;130(3):350–4.

Ref 5 is a **crossover comparison of two aspirin regimens**; ref 8 is an **observational
thromboxane study**. Neither is a placebo-arm exposure measurement. **The paper does not present
itself as continuing a tradition**, which is itself evidence about how often this has been done.

---

#### A3. iPrEx (Grant et al., NEJM 2010) — MEASURES, does not PRINT the denominator

From the prior first-hand read in this repo (`VERIFY-iprex-placebo-drug-levels.md`), labelled
second-hand. The paper prints:

> "No drug was detected in any plasma or cell specimens from subjects in the placebo group."

and the prior checker establishes, on a whole-document check, that this zero carries **no numerator
over denominator and no N of any kind** anywhere in the main text; that the sentence after it prints
denominators **for the FTC–TDF group only**; that Figure 4's legend names no denominators and
carries no placebo footnote; and that the placebo result sits on a **case-anchored, site-matched
1:2 case-control sample**, not on all placebo participants at scheduled visits. No detection
threshold is printed, so the zero has no stated analytical floor.

**This is the Published-is-not-performed distinction in its exact form: iPrEx MEASURES the placebo
specimens and does not PRINT the rate.** It therefore does **not** count as an instance under the
task's quantity specification, and it must not be merged with A1 or A2.

---

### (b) The earliest such publication I could establish

**Earliest I established: Baxi et al. 2018 (PLOS ONE 13(1):e0190118), 1/41.** Second: Parish et al.
2023.

**I must be explicit about what that is and is not.** It is the earliest **I found in six searches**.
It is **not** established as the earliest in existence, and I will not dress it as one. Specifically:

- I ran one search aimed directly at the pre-2000 cardiology vocabulary (AMIS, plasma salicylate in
  the placebo group, non-study aspirin). It returned **only unrelated salicylate pharmacology and
  modern aspirin-dosing papers** — PubMed 6985998 (the AMIS primary report), a 2009 plasma-salicylate/
  aspirin-resistance paper, topical methyl salicylate platelet work, the 2019 JAMA aspirin
  meta-analysis, ADAPTABLE. **Nothing in the results established whether AMIS assayed placebo-group
  salicylate.** That is COULD-NOT-ESTABLISH, not a negative.
- I ran one search aimed at the 1980s hypertension vocabulary (placebo-group urine assay,
  non-protocol antihypertensive). It returned **only modern clinical (non-trial) adherence
  screening** — PATHWAY-2 (2015), baxdrostat (2023), PubMed 32776967 (serum + urine monitoring in
  first-line therapy, 2020), oral-fluid HRMS (2020), Syst-Eur's BP-variability reanalysis. **No
  1970s–80s instance was reached either way.**
- **Tuberculosis (urine isoniazid testing in both arms) and lipid-lowering (statin drop-in) were
  never searched** — the budget went to the vocabularies above.

**A dating point that matters more than the publication year, and it cuts against the attack.** The
*specimens* in both instances were collected two decades or so before the entry's claimed regime —
ASCEND ran 2005–2017; NCT00131677 is a mid-2000s trial. The *publications* are **2023 and 2018**.
The attack as handed to me says the group **"published ... two decades before the entry's claimed
regime"**. That is false of the publication dates. Adversary 3's own text (line 74 of
`UQ-20261022-07-adversary-3.md`) actually says the instance **"dates the testable regime two decades
earlier than the record does"** — a claim about the **availability regime**, not about publication.
The version handed to me has hardened a regime claim into a publication claim, and the publication
claim does not survive. See DEFECTS.

---

### (c) Is it routine? Per therapeutic area, reported separately

**HIV pre-exposure prophylaxis — DONE at least twice, and a 2018 field statement says it is NOT
routine.** This is the one area I can report on, and the finding is two-sided.

Done: Baxi 2018 (1/41, printed); iPrEx 2010 (assayed, zero, no denominator).

Against routineness, in the field's own words — **Jacot et al., "Development and clinical assessment
of new objective adherence markers for four microbicide delivery systems used in HIV prevention
studies", *Clinical and Translational Medicine* 2018;7:37, published 7 November 2018** (primary
study, reporting clinical study CONRAD 135 plus preclinical work; author list truncated as served,
Terry A. Jacot, Meredith R. Clark, Oluwatosin E. Adedipe, … Gustavo F. Doncel). Read level: full
text. Quotations as served:

> "Quantitating systemic or tissue ARV levels through LC–MS/MS is currently viewed as the most
> reliable measure of adherence."

> "However, for placebo-controlled trials, this is a high cost analysis that measures adherence only
> in the drug treatment group."

> "Lastly, LC–MS/MS analysis can only be done on samples from the treatment group of a
> placebo-controlled study."

> "Measuring adherence in both placebo and drug arms of a HIV PrEP study would better inform future
> trial designs."

and on why it is not done:

> "However, LC–MS/MS is costly and requires specialized technical personnel, equipment, and sample
> processing."

> "Similar to other objective measures, it is typically performed at the end of a study when
> adherence interventions are often too late."

The page **names no therapeutic area in which direct adherence monitoring is routine**, and **names
no trial that assayed control-arm specimens for the study drug or printed a positivity rate**. Its
own CONRAD 135 measured **placebo-product markers** in placebo users, not the study drug. Its
earliest trial-context citation is **Grant RM et al. 2010**, cited for the discrepancy between
self-report and measured adherence; its earliest relevant citation of any kind is **Maurer HH
2005**, on LC–MS/MS screening in clinical and forensic toxicology, **not** trial adherence.

**Hypertension — COULD NOT ESTABLISH.** One search in the vocabulary returned only non-trial
adherence screening (above). No RCT instance reached either way.

**Tuberculosis — NOT CHECKED.** No search spent.

**Lipid-lowering — NOT CHECKED.** No search spent; the "drop-in" vocabulary is unswept.

I decline to generalise from PrEP to the other three, per instruction.

---

### (d) Does any of them RE-ESTIMATE the treatment effect for measured control-arm exposure?

**None of the three does. Named, each with the sentence that settles it.**

- **Parish 2023** — my own read: no re-estimation, no adjustment for placebo-arm positivity, **no
  dilution sentence anywhere**. Non-study aspirin users were classed as non-adherent and excluded
  from the adherent analysis. The only adjustments reported are age and baseline.
- **Baxi 2018** — the paper rules it out in its own words:

  > "The drug concentrations were not assessed in relationship to the primary outcome of interest."

  and its models are **restricted to the active arm**:

  > "in active arm participants were estimated using univariate linear regression models."

  The paper reports **no HIV incidence outcome and no efficacy estimate at all**, so there is nothing
  for the 1/41 to adjust.
- **iPrEx 2010** — per the prior first-hand read in this repo: the paper does not re-estimate
  efficacy for placebo-arm exposure, and **does not discuss the scenario**; its one
  concentration-conditioned comparison uses **non-detectable FTC–TDF subjects** as the comparator,
  not the placebo group.

**Vocabularies I searched on the answer side:** placebo-arm contamination; non-study drug use;
dilution of the treatment effect; "contamination" adjusted treatment effect re-estimated;
biochemical adherence; directly measured adherence; urine/plasma drug-level screening in trials;
off-protocol medication; drop-in.

**Vocabularies I did NOT search, and a negative must name them:** instrumental-variable or CACE
estimation using **measured** control-arm exposure; principal stratification on measured
control-arm exposure; "counterfactual placebo" incidence (the HIV-prevention term of art);
contamination-adjusted estimands in screening or vaccine trials; non-inferiority trials with
background-therapy assay.

**So limb 3 is UNFOUND, with the gaps named.** It is not established as unpublished.

---

### (e) Published guidance

#### ICH E9(R1), Step 4 Guideline, "Addendum on estimands and sensitivity analysis in clinical trials" — read in full

**The decisive finding is lexical, and it is a clean one.** On a whole-document term search of the
official Step 4 PDF:

> **"concentration", "pharmacokinetic", "assay", "blood level", "plasma" and "urine" do not appear
> in the guideline.** There is no PK sampling or drug-level measurement content.

What the addendum **does** contain is the estimand machinery for the *phenomenon*, with no
instruction to measure it. Quotations as served, with the sections they appear in:

- **A.1:** "irrespective of their compliance to the planned course of treatment"
- **A.1:** "regardless of adherence to the planned course of treatment"
- **A.3.1:** "if one patient has received additional medication"
- **A.3.1:** "background treatment, rescue medication, prohibited medication"
- **A.3.1:** "switching between treatments of interest"
- **A.3.2:** "when specifying how to address use of additional medication as an intercurrent event"
- **A.3.2**, treatment-policy strategy: "The occurrence of the intercurrent event is considered
  irrelevant in defining the treatment effect of interest:" / "the value for the variable of
  interest is used regardless of whether or not the intercurrent event occurs."
- **A.3.4:** "minimising the number of protocol violations and deviations, non-adherence and study
  withdrawals"
- **A.3.4:** "if rescue medication had not been available"
- **A.3.4:** "treatment-switching and conditioning regimens"
- **A.4:** "discontinuation of treatment, treatment switching, or use of additional medication"
- **A.5.1:** "outcomes if rescue medication had not been given when in fact it was"

And the direct negative on the specific thing I was sent to find:

> The guideline contains **no sentence about control-arm participants receiving the experimental
> treatment or the same drug class from outside the trial.**

**Read against the Published-is-not-performed rule:** the addendum **DEFINES** the event (as an
intercurrent event, with five named strategies) and **BOUNDS** the inferential consequences, and it
never asks anyone to **MEASURE** it — and certainly not by assay. A citation to a definition is not
an evaluation.

#### CONSORT — COULD NOT READ

`www.consort-statement.org/checklists/view/32--consort-2010/66-intervention` failed at the site
with **`robots_disallowed`**; nothing of the page was retrieved. Per instruction I recorded the
refusal and stopped rather than working around it. **This is not a finding that CONSORT is silent on
assay-measured adherence.** The question is open.

#### FDA and EMA guidance — NOT CHECKED

Budget exhausted. The EMA scientific-guideline page for ICH E9 appeared in my search results and was
not fetched. **Not a negative.**

---

## REGIME

The regime question is where this check actually moves, so I state each source's regime and then
whether the claim handed to me sits inside it.

**Baxi 2018's regime.** Population: MSM at the San Francisco site of a phase 2 extended-safety TDF
trial, on study drug ≥3 months. Unit of analysis: the **participant**, at **one substudy
collection** (hair at substudy enrolment, PBMC at that visit or the nearest quarterly visit, plasma
date-matched) — **not participant-visits across scheduled visits.** Instrument: LC/MS/MS detection of
the study drug itself, LLOQ 10 ng/mL plasma, 2.5 fmol/sample PBMC, hair validated 0.01–0.400 ng/mg,
**no false-positive rate stated.** Endpoint: log-transformed drug concentration. Purpose: comparing
three pharmacologic adherence measures in the **active** arm; the placebo arm is an **analytical
specificity comparator**. No clinical endpoint, no efficacy estimate.

**Parish 2023's regime.** Population: a subsample of ASCEND (diabetes, primary prevention, aspirin
100 mg vs placebo, conduct 2005–2017). Unit: a **participant at one mailed sampling**, in a random
sample plus a purposive non-adherent sample — per the prior repo read, 152 of 15,480 participants,
with follow-up "a mean of 2 years after randomization." Instrument: **urinary 11-dehydro-thromboxane
B2**, a **pharmacodynamic suppression proxy**, dichotomised at a borrowed cut-off ("Effective
suppression (U-TXM < 1500 pg/mg creatinine)"), **no LOD for aspirin, no false-positive rate,
suppression attributable to other NSAIDs.** Endpoint: achieving effective suppression. Purpose:
assessing the effectiveness of once-daily aspirin to suppress U-TXM — an **adherence/pharmacodynamic
question**, with the placebo column as its contrast.

**ICH E9(R1)'s regime.** A regulatory guideline on **defining** estimands and conducting sensitivity
analyses. Its unit is the **estimand attribute**, not a measurement. It is **silent**, not
permissive and not prohibitive, on measurement instruments of any kind.

**Does the claim handed to me sit inside these regimes?** Partly, and the mismatches are specific:

1. The claim says **"pre-specified"**. Neither source states pre-specification of the control-arm
   measurement. Parish's page does not contain the word; Baxi's page does not say. **Outside the
   regime.**
2. The claim says **"biochemical positivity ... for an over-the-counter class"**. Parish prints
   counts achieving **suppression**, by a proxy that does not detect the class — the construct is
   inverted and the instrument is a different kind. Baxi prints genuine **detection** of the class
   with a stated LLOQ, but the class is **prescription-only TDF, not over the counter**. **No single
   source sits inside both halves of the claim.**
3. The claim says **"two decades before the entry's claimed regime"**. True of the **enrolment and
   specimen-collection window** (mid-2000s). False of the **publication dates** (2018, 2023), which
   is what the task asked me to date. **Regime substitution.**
4. Neither source's unit is the **participant-visit** the entry's question specifies, and neither
   carries **limb 2** (concordance with protocol-recorded concomitant medication) or **limb 3** (a
   contamination-adjusted re-estimate).

---

## DEFECTS FOUND

**D1 — "pre-specified" is unsupported at the route the attack itself used.** The attack's load-bearing
adjective is not in the source. On my own read of
`trialsjournal.biomedcentral.com/articles/10.1186/s13063-023-07198-z`, **"pre-specified" and
"prespecified" do not appear**; the only protocol/Data-Analysis-Plan citation is to the *main trial*,
and the nearest methodological sentence — "A preliminary analysis had shown that the Pearson
correlation" — describes a **data-driven** choice. If the attack needs a pre-declared control-arm
measurement, it does not have one.

**D2 — publication date substituted for regime date.** "Published ... two decades before" is false:
2023 and 2018. Adversary 3's own sentence was about the **availability regime**, not publication. The
hardened form fails; the softer form (the class was obtainable outside the trial's channel from the
mid-2000s, so the regime is not new) survives untouched and does not need the paper's publication
date at all.

**D3 — instrument/construct mismatch, and it inverts the direction.** Parish's placebo cells count
participants **achieving suppression of a platelet metabolite**, not participants with **aspirin
detected**. There is no LOD for aspirin and no false-positive rate; the paper's own definition is a
threshold on U-TXM. A suppression count can be produced by other NSAIDs or by assay variability. So
"biochemical positivity ... for the study class" misdescribes what is printed.

**D4 — the field's own statement contradicts "no credible reason for silence", and I found it
first-hand.** Jacot et al. 2018, in a journal of clinical and translational medicine, states that
LC–MS/MS **"can only be done on samples from the treatment group of a placebo-controlled study"**
and proposes measuring **"adherence in both placebo and drug arms"** as a future improvement. That
is a 2018 field-internal statement that the placebo-arm drug measurement is **not** done, with a
stated cause (cost, specialised personnel, end-of-study timing) — and it reveals a mechanism the
record does not state: **the field conceptualises the placebo arm as un-assayable in principle,
because the placebo product contains no drug, and therefore never frames off-protocol acquisition as
a measurable quantity at all.** A reason for silence that the field states about itself is a credible
reason for silence.

**D5 — ICH E9(R1) is a guidance-level gap, and it points the same way.** The addendum names the
intercurrent event and five strategies and contains **no instance of "concentration", "assay",
"plasma" or "urine"**, and **no sentence about control-arm participants receiving the experimental
class from outside the trial.** Nobody's regulatory checklist asks for the measurement. That is a
sixth mechanism, and it supports the entry rather than the attack. (Caveat, stated plainly: silence
in a guideline is **not a prohibition**, and the absence of the word "assay" from an estimands
addendum is not a flag of this gap — the addendum is not the kind of document that specifies
instruments. I report it as a lexical fact with limited weight, not as a demonstration.)

**D6 — a prior nobody opened, and it is closer to limb 1 than the one the ledger argued over.**
**Baxi et al. 2018, 1/41, by LC/MS/MS for the study drug with a stated LLOQ**, appears in neither
the record, nor adversary 1, 2 or 3, nor the entry. It is open access at a publisher host, fetched
at the first route I tried. The record and the adversary spent the whole exchange on an instrument
(U-TXM) that is a proxy, while a genuine detection-assay instance with a printed denominator sat
unopened. **This is a sweep failure on both sides, and it cuts the entry's limb-1 novelty harder
than the adversary's own instance did.**

**D7 — my own count is not a rarity measurement, and I will not let it be read as one.** "Two
instances in six searches" bounds my sweep, not the literature. Three of the four therapeutic areas
I was asked about are **unchecked**, and the pre-2000 vocabularies are **unreached**. Anyone quoting
this note for "this has been done twice" would be converting my budget into a finding.

**D8 — Baxi's single positive is explained away, not counted.** The paper's own gloss on the 1/41 is
**"possibly a surreptitious PrEP user"** — a candidate explanation offered in the Discussion, in a
paper whose declared purpose is specificity. The number is printed and then dropped: **"The drug
concentrations were not assessed in relationship to the primary outcome of interest."** This is the
"reported as a specificity comparator and then dropped" pattern that adversary 3 proposed as the
repair mechanism, **independently confirmed in a second source**.

---

## ROUTES THAT FAILED

- **`www.consort-statement.org/checklists/view/32--consort-2010/66-intervention`** — WebFetch
  returned `robots_disallowed`; **nothing of the page was retrieved**. Recorded and not retried, per
  instruction. CONSORT's treatment of assay-measured adherence is **COULD NOT READ**, not absent.
- **Table 2 of Baxi et al. 2018** — reached the page but **not rendered** to the summariser, so the
  per-matrix split of the single placebo positive is unread. The overall 1/41 is from the abstract
  and is solid.
- **Table 1 footnotes of Parish et al. 2023** — I did not re-fetch them; the prior repo read records
  that they came back **paraphrased, not verbatim**, and I inherit that limitation rather than
  papering over it.
- **Searches that returned nothing on target** (recorded so the negatives are auditable):
  - placebo-arm specimens assayed for study drug / non-study drug use / positivity denominator →
    returned PMC and Europe PMC items (hard-blocked here), a DOAJ *Trials* stub, and the UCL
    microbicide-PK PDF; no instance established.
  - AMIS / plasma salicylate in the placebo group → only unrelated salicylate pharmacology and
    modern aspirin-dosing literature.
  - 1980s hypertension placebo-group urine assay → only modern non-trial adherence screening.
  - PrEP placebo-arm detection (Partners PrEP, FEM-PrEP, VOICE) → nature.com (fails both ways here),
    PMC items, and the PLOS ONE paper that became my best find.
  - vitamin D / supplement placebo-arm biomarker with contamination-adjusted effect → PMC items
    (blocked) and DOAJ stubs; **the nutrition-contamination cluster that adversary 3 flagged as its
    own biggest gap in §5 remains unopened by me as well.**
- **Not attempted at all, for want of budget:** FDA guidance; EMA guidance beyond ICH E9(R1);
  tuberculosis; lipid-lowering drop-in; instrumental-variable/CACE and principal-stratification
  vocabularies for measured control-arm exposure.
- **Not used:** doi.org, PubMed Central, Europe PMC, Unpaywall. Per the routing established for me, I
  went to publisher hosts directly, and I supplied **no email address or other personal identifier**
  to any service.

---

## BEARING ON THE LEDGER ENTRY

The attack is **partly** sustained, and it is sustained in a weaker form than the one handed to me,
while a finding I did not go looking for cuts the entry's novelty harder than the attack does.

**1. The attack's stated ground fails on its own adjectives.** "Pre-specified" is not in the source.
"Published two decades before the entry's claimed regime" is false of both publication dates.
"Biochemical positivity for an over-the-counter class" describes no single source: Parish's
instrument does not detect the class, Baxi's class is not over the counter. The strong conclusion
drawn from it — **"there is no credible reason for silence"** — is not supported by what I read.

**2. The attack's weak form survives intact and needs none of those adjectives.** Two of the
record's four stated mechanisms, **as literally worded**, are contradicted by published instances:
"no one's remit spans them" is false (two groups' remits did span them), and "the analysis has no
natural funder" is false (both figures were published open-access by the trials' own investigators).
And the record's dating of the **testable regime** to 2023–2026 is wrong as a general claim: the
measurement was taken on specimens from mid-2000s trials. Adversary 3's requirement (a) for
promotion — rewrite the reason-for-silence field, restrict the disciplinary-boundary and
incentive-gap mechanisms — **stands on this check**.

**3. But a credible reason for silence now exists in the field's own words, which is what the
Unresolved attack denied.** Jacot et al. 2018: LC–MS/MS **"can only be done on samples from the
treatment group of a placebo-controlled study"**; measuring **"adherence in both placebo and drug
arms ... would better inform future trial designs"**; and it is costly, specialised and typically
done at study end. Add ICH E9(R1), which names the intercurrent event and never asks for its
measurement, and the silence has two sourced mechanisms the record did not state: **the field treats
the placebo arm as un-assayable in principle** (and so never frames off-protocol acquisition as
measurable), and **no guidance makes the measurement anyone's obligation**. The ledger's rule —
"If no credible reason for silence exists, treat the novelty finding itself as suspect" — is **no
longer triggered on the evidence I read**. On my check the attack should move from **Unresolved**
toward **Partial**, conditional on the record's reason-for-silence field being rewritten around these
mechanisms rather than the three that failed.

**4. The entry's limb-1 novelty must be reworded again, and more sharply than adversary 3 asked.**
Adversary 3's proposed rewording — "no source prints the control-arm fraction **by an assay that
detects the study class**" — is **falsified by Baxi et al. 2018**, which prints **1/41** by LC/MS/MS
for the study drug with a stated LLOQ. That paper is a **fourth or fifth prior** and is in neither
the record nor any adversary note. What remains unpublished, on everything I read, is narrower:
**the control-arm fraction across scheduled participant-visits, by a pre-declared detection assay
whose LOD and false-positive rate are both reported, with the detection window stated against the
visit interval** — no source I read prints a false-positive rate, and neither instance uses
participant-visits.

**5. Limbs 2 and 3 are untouched by any source I read.** No concordance with protocol-recorded
concomitant medication; no contamination-adjusted re-estimate. Baxi rules the latter out explicitly
("The drug concentrations were not assessed in relationship to the primary outcome of interest");
Parish prints no dilution sentence; iPrEx does not discuss the scenario. **I found no re-estimation
anywhere, and I have named the vocabularies I did not search**, so this is an unfound negative, not
a demonstrated absence.

**6. What this check does not settle.** Whether the measurement has ever been done pre-2000
(tuberculosis, hypertension, aspirin cardiology — all unreached); whether CONSORT or any FDA/EMA
guidance mentions assay-measured control-arm exposure (CONSORT **could not be read**, the rest
unchecked); and the nutrition-contamination cluster, which adversary 3 named as the single most
likely home of a limb-1-plus-limb-3 analogue and which **neither of us has opened**. The frequency
question in sub-claim (a) is therefore bounded by my budget and not answered in general.
