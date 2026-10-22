# VERIFY — Parish et al. 2023, instrument grade

Checker: fresh context. Date: 2026-10-22. Budget used: 5/5 WebFetch, 0/6 WebSearch. No call was refused.

## CLAIM

The Provisional entry (UQ-20261022-07) is defended against rejection-as-renamed-known on the ground that the
prior's **instrument is not the candidate's**: Parish et al. use *a pharmacodynamic surrogate with no limit of
detection and no false-positive rate at participant-occasion grain, rather than an assay that detects the drug
class in a specimen.*

Six sub-claims were handed to me: (a) what the analyte is; (b) platform and vendor; (c) whether LOD, LOQ,
false-positive rate and specificity are printed — each answered separately; (d) the suppression cut-off and its
justification; (e) what the paper itself says about non-aspirin causes of a suppressed or unsuppressed value;
(f) whether the assay sat inside the protocol and whether any specimen-governance / consent-release question
is raised.

## READ LEVEL

**FULL TEXT**, at the publisher: `https://trialsjournal.biomedcentral.com/articles/10.1186/s13063-023-07198-z`
(HTML, open access) and the publisher PDF `.../counter/pdf/10.1186/s13063-023-07198-z.pdf`. Both opened first
try. No PMC/Europe PMC route was attempted and none was needed.

**One bounded exception, and it bears directly on sub-claim (c).** The Laboratory assays subsection defers:
`"(see Supplementary Methods for further details of the assay procedures)"`. The article's Supplementary
Information listing names **Additional file 1** ("Table S1. Baseline characteristics by randomized treatment
allocation"; "Figure S1. Hours between ingestion of last tablet and urine sample in adherent participants";
"Figure S2. Urinary 11-dehydro thromboxane B2 (U-TXM) during follow-up by aspirin allocation in the adherent
sample") and **Additional file 2** ("Analysis dataset containing all the information needed to replicate this
analysis, with one row per person"). **No item in that listing is called "Supplementary Methods."** I did not
open either file (fetch cap). So the absences in (c) are established **for the main text**; for the
supplementary material they are **Unverified, not verified-absent**. Do not let the entry upgrade this.

### Front matter (taken from the PDF page-1 byline, not from anyone's short form)

> "Sarah Parish*†, Georgina Buck†, Theingi Aung†, Marion Mafham†, Sarah Clark, Michael R. Hill, Rory Collins,
> Louise Bowman†, Jane Armitage† and on behalf of the ASCEND Study Collaborative Group"

Title: "Effect of low-dose aspirin on urinary 11-dehydro-thromboxane B2 in the ASCEND (A Study of
Cardiovascular Events iN Diabetes) randomized controlled trial." *Trials* 2023;**24**:article 166.
DOI 10.1186/s13063-023-07198-z. Registrations as printed: "ISRCTN ISRCTN60635500. Registered on 1 Sept 2005;
NCT00135226. Registered on 24 Aug 2005."

The front-matter byline **matches** the author string the prior ledger note used (initials form), with one
cosmetic difference: front matter prints "Michael R. Hill", not "Hill M". No citation defect.

### Source type (instruction 5)

The publisher page carries **no article-type label**. By structure — Background / Methods / Results /
Discussion / Conclusions, a CONSORT reference, an ethics-and-consent declaration, a trial registration block —
it is a **primary report of an ancillary (sub-study) analysis of a randomised controlled trial**, published in
a trials-methodology journal. It is not a protocol, not a review, not an editorial. *Flag: the type is my
inference from structure, because the page does not state it.*

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are as served by the publisher reader. Where a sentence came back in more than one
segment, it is labelled a reconstruction with the fragment count, assembled only from ordered consecutive
returns, with no gap bridged by inference.

### (a) The analyte — a downstream biochemical consequence, not the drug

Introduction, reconstruction from **2 consecutive fragments**:

> "Thromboxane A2 inhibition can be assessed by measuring the urinary excretion of 11-dehydro-thromboxane B2"
> + "(U-TXM), a stable metabolite of thromboxane A2 [2, 3]."

So the analyte is **neither aspirin nor an aspirin metabolite**. It is a stable urinary metabolite of
thromboxane A2 — the eicosanoid whose platelet synthesis aspirin blocks. The measured quantity is therefore a
**downstream biochemical consequence of the drug's pharmacological action**, two steps removed from the drug:
drug → COX-1 acetylation → reduced TXA2 → reduced urinary 11-dehydro-TXB2.

The paper also normalises rather than measures a concentration directly:

> "U-TXM is divided by creatinine concentration from spot urine samples to make 24-h collection of urine
> unnecessary, giving a U-TXM value reported as pg/mg creatinine" (reconstruction, **2 consecutive fragments**)

**Sub-claim (a): CONFIRMED, and in the strong form.** The paper's own words make the analyte a pharmacodynamic
surrogate. The paper never claims to detect aspirin in a specimen.

### (b) Platform and vendor

Laboratory assays, first sentence, reconstruction from **2 consecutive fragments** (junction verified by the
parenthesis opening in fragment 1 and closing in fragment 2):

> "U-TXM in previously frozen aliquots of the urine samples was assayed in duplicate using a competitive ELISA"
> + "(AspirinWorks® test kit, Corgenix, Peterborough, UK) as used in several previous studies [5, 8]."

**Sub-claim (b): CONFIRMED from the Methods.** Competitive ELISA; AspirinWorks® test kit; Corgenix. The earlier
agent's report is accurate; front matter of the Methods adds the place, "Peterborough, UK", and adds that the
kit was "as used in several previous studies [5, 8]".

### (c) LOD, LOQ, false-positive rate, specificity — answered separately

I read the whole **Laboratory assays** subsection. It is seven sentences and ends immediately before the
"Statistical analysis" heading. Reproduced in full, as served (sentences 1 and 2 reconstructed as above;
sentences 3–7 each from 1–2 consecutive fragments):

> 3. "Assay values below or above the linear range after possible dilutions were imputed with the respective
>    assay limit."
> 4. "The Pearson correlation between the U-TXM duplicate values where both were present was very high (0.98)."
> 5. "The 2 participants with a baseline level in both duplicate measurements above the assay range after
>    two-fold dilution were excluded as estimation of any reduction would not be accurate."
> 6. "Imputed follow-up values (13 participants had both duplicate measurements imputed) were not excluded as
>    this would cause bias (with high values more likely on placebo and low values on aspirin)."
> 7. "The average of the U-TXM values across the duplicates (after imputation) divided by the creatinine was
>    used as the sample result."

That is the entirety of the paper's assay-performance text. Taking the four requested quantities one at a time,
in the published-is-not-performed discipline:

| Quantity | Verdict in the main text | What the paper does instead |
|---|---|---|
| **Limit of detection** | **NOT PRINTED.** No number, no units, anywhere. | **BOUNDS without naming.** It invokes "the linear range", "the respective assay limit" and "the assay range" as operative objects — values outside them are imputed to the limit, and 2 participants are excluded for exceeding the range after two-fold dilution — but it **never states what any limit is**. The quantity is used and not published. |
| **Limit of quantification** | **NOT PRINTED.** The phrase does not occur. | Same: subsumed into the unnamed "linear range". |
| **False-positive rate** | **NOT PRINTED.** No false-positive rate, no false-negative rate, no misclassification rate, no error rate of any kind, for any unit. The concept of exposure misclassification is never raised. | Nothing — the paper does not define, bound, predict, announce or measure it. |
| **Specificity** (or sensitivity, PPV, NPV, ROC, AUC) | **NOT PRINTED.** None of these terms appears, and no 2×2 classification table against any reference standard exists. | Nothing. |

**One figure must not be mistaken for a performance figure.** The only quantitative assay characteristic the
paper prints is `"The Pearson correlation between the U-TXM duplicate values where both were present was very
high (0.98)."` That is **duplicate reproducibility — precision**, within-sample agreement of the assay with
itself. It is **not** accuracy, and it is **not** specificity: it says nothing about whether a value below the
cut-off was produced by aspirin. Any ledger text that cites 0.98 as evidence about the instrument's
classification performance would be a category error.

**Sub-claim (c): CONFIRMED for the main text — all four absent, with the Supplementary-Methods caveat above.**
This is the entry's whole defence and it survives, but it must be stated as *the paper prints none of the four*,
and the deferred Supplementary Methods must be named as not-read rather than silently treated as empty.

### (d) The cut-off and its justification

The cut-off appears in exactly **two** places in the article (instruction 4: report every formulation).

**Formulation 1 — Abstract**, reconstruction from **2 consecutive fragments**:

> "Effective suppression (U-TXM < 1500 pg/mg creatinine) and percentage reductions in U-TXM"
> + "by aspirin allocation were compared."

**Formulation 2 — Methods, Laboratory assays**, as part of sentence 2, reconstruction from **3 consecutive
fragments**:

> "...giving a U-TXM value reported as pg/mg creatinine, with U-TXM < 1500 pg/mg creatinine by this"
> + "assay taken as indicating effective suppression [9] (see Supplementary Methods"
> + "for further details of the assay procedures)."

Results and Discussion use only the bare phrase "effective suppression"; **the number 1500 occurs nowhere else.**

**On the justification.** The Methods formulation **carries a citation, [9]; the Abstract formulation is
unsupported** (it is a parenthetical definition). And this is the point the entry should be most careful with:
**the paper offers no argued justification at all.** There is no derivation, no ROC analysis, no outcome-anchored
threshold selection, no reference to a validation cohort, no statement of what the cut-off's error rates are.
The whole justification is the construction "taken as indicating effective suppression **[9]**" — an appeal to
reference 9, plus the hedging verb "**taken as**", which concedes that the cut-off is adopted rather than derived.

> **Defect against the earlier agent's wording, flagged not corrected.** The earlier agent reports the cut-off as
> "justified by reference to a commercial kit's 510(k) clearance." The publisher reader, asked what justifies
> the threshold, also returned that reference [9] is an FDA 510(k) decision summary for the AspirinWorks kit.
> **I did not read the reference list verbatim myself** (fetch cap), so "510(k) decision summary" is a
> characterisation of reference [9] that I am passing through at second hand, not front-matter-verified. The part
> I *can* certify from the Methods text is narrower and sufficient: the justification is a bare citation plus
> "taken as", with nothing argued in the paper. The ledger should assert the narrow version.

**Sub-claim (d): CONFIRMED on the value and the structure of the justification; the identity of reference [9]
is second-hand and should be marked so.**

**Regime point on the cut-off, and it is the sharpest finding in this check.** The paper's own name for what the
threshold classifies is "**effective suppression**" — a pharmacodynamic state of platelet COX-1 inhibition. The
paper **never** calls it, or uses it as, a classifier for *exposure to aspirin*. When it is applied to the
placebo arm, the resulting share is reported as a comparator for the aspirin arm, not as a detection of
off-protocol drug use.

### (e) Non-aspirin causes of a suppressed or unsuppressed value — the paper's own physiology only

I asked the source separately for (i) low-value mechanisms other than study aspirin, (ii) high-value mechanisms
despite aspirin, (iii) non-platelet/extraplatelet thromboxane sources, inflammation, or COX-1 specificity, and
(iv) limitations. The asymmetry in what came back is the finding.

**(i) A LOW (suppressed) value for a reason other than study aspirin — the paper names exactly one: non-study
aspirin, ascertained by report.** From the Statistical analysis paragraph (reconstruction from **8 consecutive
fragments**, junction at each semicolon verified):

> "The relationship between follow-up and baseline U-TXM was plotted (on a log scale), distinguishing
> categories by adherence to study aspirin/placebo tablets (reported on the sampling form) and non-study
> aspirin use. Participants were classified as non-adherent (last tablet date earlier than the day before
> sampling, **or known to be taking non-study aspirin**); last tablet taken ≤ 12 h before sample; last tablet
> taken > 12 h before sample; and adherent but the time of taking tablet not known (distribution of timings
> shown in Fig. S1). Two participants could not be classified."

Note what this does: non-study aspirin enters as a **self-report field on the sampling form that disqualifies a
participant from the adherent category** — it is an input to classification, not something the assay detects or
quantifies. Asked directly for Discussion/Limitations sentences on low values arising from anything other than
study aspirin, the reader returned **"None found."**

**(ii) A HIGH value despite aspirin — the paper discusses this at length.** Discussion (reconstruction from
**3 consecutive fragments**):

> "However, in that study, U-TXM levels were about 50% higher in participants with diabetes than in non-diabetic
> controls and so, with a similar percentage reduction in both groups, the percentage effectively suppressed was
> higher (92%) in the healthy control group after aspirin."

and (reconstruction from **2 consecutive fragments**):

> "Serum thromboxane recovery after aspirin dosing has also been found to vary between people but be resolved by
> twice daily dosing [11]."

Introduction, as served: `"platelet abnormalities may mean that inhibition is shorter lasting"` and
`"in platelets for their ~ 10-day lifetime"`.

**(iii) Non-platelet or extraplatelet thromboxane sources, inflammation, or the specificity of U-TXM for platelet
COX-1: "None found"** in the Discussion or Limitations.

**(iv) Limitations.** The paper states **one**, and it is not about the instrument:

> "However, a limitation of the present study was that it did not include different dosing schedules."

**(v) Over-the-counter availability / how much placebo-arm non-study aspirin there was: "None found."** No
sentence in the Discussion or Limitations addresses either.

**Sub-claim (e): answered, and the answer cuts both ways for the entry.**

- The paper's asymmetry is exactly the entry's point: every mechanism it discusses is a reason an *aspirin-taker*
  might **fail** to be suppressed (a false negative for suppression). It discusses **no** mechanism by which a
  *placebo-taker* could fall below the cut-off other than actually taking non-study aspirin — i.e. it never
  characterises the false-positive direction at all. That is a stronger form of the entry's "no false-positive
  rate" point than the entry currently makes: the paper has no FPR *and* no qualitative FPR discussion.
- **But the entry's stated ground is partly not in the source.** See DEFECTS 1.
- The diabetes sentence is a **population-dependency of the threshold stated by the paper itself**: a fixed
  1500 pg/mg creatinine cut-off applied to a population whose levels run ~50% higher yields a different
  suppressed share. The paper uses this to explain a 92% figure elsewhere. Anyone treating 1500 as
  population-invariant is outside the paper's own regime.

### (f) Protocol position, and specimen governance

**Specimen collection was inside the trial.** Methods, as served:

> "During the 2-month placebo "run-in" phase of the trial, baseline blood and spot urine samples"
> + "were collected locally in general practice surgeries and mailed to the central laboratory."

and the assay ran on the trial's own stored aliquots: `"U-TXM in previously frozen aliquots of the urine samples
was assayed in duplicate..."`. Also noted: `"baseline samples were not assayed for the additional adherent
sample participants"`.

**Pre-specification of this comparison is NOT stated.** Asked directly, the reader returned: no sentence states
that the U-TXM comparison was pre-specified; the protocol [7] and the Data Analysis Plan [6] are cited for the
**trial**, in the construction `"(protocol and CONSORT diagram [7]; Data Analysis Plan [6])."` This is a
*silence*, and per instruction 9 silence is not a denial — but it is equally not a confirmation, and the prior
ledger note leaned on the confirmation. See DEFECTS 2.

**Ethics and consent, as served:**

> "The ASCEND trial was approved by the North West Multicenter Research Ethics Committee"
> + "and all participants provided written informed consent."

Consent for publication: `"Not applicable."`

**No specimen-governance or consent-release question is raised anywhere.** Asked directly for any sentence about
data or sample availability or release to others, the reader returned only the data statement:

> "All data analyzed during this current study are included in the Supplementary information files of this
> article."

— which covers **the analysis dataset, not the specimens**. No sentence addresses releasing samples.

**Sub-claim (f): the assay ran on specimens collected under the trial's own protocol and consent, and the paper
raises no governance or consent-release question — because none arose.** The assay was performed by the trial's
own collaborative group on its own frozen aliquots. **No third-party release occurred**, so this paper is **not
an instance of stored trial specimens being released to an outside party**, and it therefore supplies **no
evidence either way** on the candidate's presupposition that such release is permissible. It is silent in the
sense of instruction 9: the absence of a governance discussion here is not a finding that governance is
frictionless, nor that it is prohibitive.

## REGIME

What the source establishes, and where its boundary lies.

- **Population.** Adults with diabetes and no occlusive arterial disease, randomised in ASCEND. The paper itself
  states that in a comparison study, "U-TXM levels were about 50% higher in participants with diabetes than in
  non-diabetic controls", so the cut-off's behaviour is population-specific **by the paper's own statement**.
- **Unit of analysis.** One participant's single mailed spot urine, at one follow-up sampling, plus (for most) one
  run-in baseline. **Not the participant-occasion, and not repeated scheduled visits.** The sampling is a
  subsample, not the trial.
- **Instrument.** Competitive ELISA (AspirinWorks®, Corgenix) for urinary 11-dehydro-thromboxane B2, normalised
  to spot-urine creatinine. A **pharmacodynamic marker of platelet COX-1 inhibition**. It is not a drug assay,
  not a drug-metabolite assay, and not an immunoassay for the drug class.
- **Threshold.** U-TXM < 1500 pg/mg creatinine, "taken as indicating effective suppression [9]" — adopted by
  citation, not derived, and named for a **pharmacodynamic state**, not an exposure state.
- **Endpoint / estimand / comparator (instruction 6, the paper's own words).** "Effective suppression (U-TXM
  < 1500 pg/mg creatinine) and percentage reductions in U-TXM by aspirin allocation were compared." So: two
  endpoints — a binary share and a percentage reduction — with **randomised allocation** as the comparator, at
  **participant-sampling** grain.
- **Operating condition.** Spot urines collected in general-practice surgeries and mailed; assayed in duplicate
  from previously frozen aliquots; out-of-range values imputed to an unnamed assay limit; time since last tablet
  taken from a self-completed sampling form.

**Does the claim handed to me sit inside this regime?** The claim is about the instrument, and the instrument is
described in the Methods, so **yes — the instrument claim is inside the regime.** What is **outside** the regime
is any use of this paper as an *exposure-detection* result: the paper's estimand is a suppression share by
allocation, its grain is one sampling per participant, and its threshold is named for a pharmacodynamic state.
A placebo-arm share below the cut-off is, in this paper's own regime, a **specificity comparator for a
suppression endpoint** — not a measured rate of off-protocol drug acquisition, and not a per-occasion exposure
classification. A result proved under these assumptions is **silent** outside them.

## DEFECTS FOUND

**1. "Suppression attributable to other NSAIDs" is not in the source.** The prior adversary note
(`UQ-20261022-07-adversary-3.md`, attack 2) lists among the entry's defences that Parish's cut-off has
"suppression attributable to other NSAIDs". I asked the source directly for sentences on other drugs or NSAIDs,
on inflammation, and on non-platelet thromboxane sources, in the Discussion and Limitations: **"None found"** in
every case. The paper's only named non-study-aspirin cause of a suppressed value is **non-study aspirin itself**,
and it enters as a self-report field on the sampling form, not as a physiological mechanism. The other-NSAID
mechanism is **the adversary's own physiology, not the paper's**, and must be struck from any defence that cites
Parish as its source. The defence survives without it — indeed in stronger form, since the paper discusses *no*
false-positive mechanism at all.

**2. "Pre-specified" is not supported by the paper's text, and it is load-bearing in the prior note.** The prior
note states that the group "pre-specified a placebo-arm comparison" and "pre-specified a control-arm biochemical
comparison" (attacks 2 and 7(a), and the Verdict's "single strongest killing point"). **No sentence in the
article states that this U-TXM comparison was pre-specified**; the protocol and Data Analysis Plan are cited for
the trial overall. What the article *does* support is the weaker and still useful proposition that **the
specimens were collected inside the trial's own protocol, under its own ethics approval and written consent, and
assayed by the trial's own group**. Attack 7(a)'s force depends on the stronger reading; it should be re-stated
at the strength the text carries, or the stronger claim should be sourced from the protocol [7] / DAP [6]
directly, neither of which I opened.

**3. The prior note's "no LOD ... no false-positive rate" is correct but under-qualified.** It should say
*printed nowhere in the main text*, and should name the deferred "Supplementary Methods", which the article
promises but its own Supplementary Information listing does not name, and which I did not open. An absence
asserted flatly where a deferral exists is the kind of claim that reverses on the next check.

**4. Risk of miscounting Pearson 0.98 as an instrument-performance figure.** It is duplicate reproducibility
(precision), not specificity or accuracy. Nothing in the current ledger text makes this error, but the figure is
the only assay number in the paper and is an obvious trap.

**5. Granularity, not absence, on one point.** The paper **defines** a classification category that includes
non-study aspirin use ("or known to be taking non-study aspirin") and **does not print a count for it**. Under
the published-is-not-performed rule this is correctly described — as the prior note does — as *defined and
classified but never counted*. Recording it as "the paper says nothing about non-study aspirin" would be wrong:
it says something, at a grain coarser than the question needs.

**6. No defect in the citation.** Authors, year, journal, volume and article number all check out against the
PDF page-1 byline and the article front matter. The prior note's author string is accurate.

## ROUTES THAT FAILED

**None.** Every route attempted returned. Recorded for the next checker so the budget is not re-spent:

- `https://trialsjournal.biomedcentral.com/articles/10.1186/s13063-023-07198-z` — **opened, full text**, four
  calls, no throttling.
- `https://trialsjournal.biomedcentral.com/counter/pdf/10.1186/s13063-023-07198-z.pdf` — **opened**, page-1
  byline served intact.
- doi.org, PMC, Europe PMC, Crossref, Unpaywall: **not attempted**, not needed.

**Not attempted, and the one real gap:** the two Additional files, and the "Supplementary Methods" the Laboratory
assays section defers to but the Supplementary Information listing does not name. Stopped at the 5-fetch cap
rather than working around it. **This is COULD NOT CHECK, not verified-absent.**

Second-hand, flagged: the identity of reference [9] as an FDA 510(k) decision summary for the AspirinWorks kit.
I did not read the reference list verbatim.

## BEARING ON THE LEDGER ENTRY

**The entry's instrument defence holds on the source's own text, with two of its stated grounds requiring
repair.** This supports *keeping* the Provisional entry rather than Rejecting it as a renamed known — on the
instrument question specifically, which is the question I was sent to settle.

What the source certifies, in its own words:

1. The analyte is "a stable metabolite of thromboxane A2", normalised to creatinine — a **downstream
   biochemical consequence** of the drug's action. The paper nowhere claims to detect aspirin, or any aspirin
   metabolite, in a specimen. The instrument is a pharmacodynamic surrogate. **The entry's core distinction is
   the paper's own.**
2. The main text prints **no LOD, no LOQ, no false-positive rate and no specificity figure** — four separate
   absences, each checked. The only assay number is duplicate reproducibility (0.98).
3. The threshold is named for a **pharmacodynamic state** ("effective suppression"), adopted by bare citation
   with the hedge "taken as", and never used or described as an exposure classifier.
4. The grain is **one participant-sampling**, not participant-occasion; the paper has no per-occasion
   classification to characterise.
5. The paper characterises **no false-positive mechanism at all** — every mechanism it discusses runs the other
   way (why an aspirin-taker might not be suppressed). This *strengthens* the entry's defence beyond how the
   entry currently puts it.

What must be repaired before this is relied on:

- **Strike "other NSAIDs"** from the defence, or source it elsewhere. Parish does not say it (DEFECT 1).
- **Downgrade "pre-specified"** to "collected inside the trial's protocol and consent, assayed by the trial's own
  group", or source pre-specification from protocol [7] / DAP [6] (DEFECT 2). This touches the prior note's
  attack 7(a) and its nominated strongest killing point, so it may move that attack's status.
- **Qualify the four absences** as *main text, Supplementary Methods not opened* (DEFECT 3). The entry's whole
  defence rests on these absences, and they are currently stated more flatly than the read supports.

On sub-claim (f) and the candidate's presupposition about releasing stored specimens: **this paper is not
evidence either way.** The assay was run by the trial's own group on its own frozen aliquots under its own
consent; no release to an outside party occurred, and the paper raises no governance question. Its silence here
is not a finding that release is permissible, and not a finding that it is barred. The entry's presupposition
(iii) stays **Unverified** — unchanged by this check.
