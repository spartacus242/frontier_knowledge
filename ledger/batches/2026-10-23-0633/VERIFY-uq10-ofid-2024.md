# VERIFY - OFID 2024 ofae059 times only the DOWNWARD renal dose reduction; no upward-transition quantity is printed

Checker: fresh context. Budget used: 8 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

The single thing that decides UQ-20261023-10: whether 'Early Versus Late Antipseudomonal
beta-Lactam Antibiotic Dose Adjustment in Critically Ill Sepsis Patients With Acute Kidney
Injury', Open Forum Infectious Diseases 2024, DOI 10.1093/ofid/ofae059, prints a TIMING or a
SHARE of antibiotic dose INCREASE conditioned on renal function IMPROVING (the upward
transition), or whether it only times the downward dose REDUCTION after AKI onset.

If it prints an upward-transition timing or share, the entry is a disguised known and falls to
Rejected. If it does not, the Disguise hole closes. The entry's Disguise attack is Partial from
both adversaries solely because both sweeps returned this paper and neither opened it; one
adversary read the TITLE as timing the reduction. A title grounds nothing. This note opens it.

ANSWER TO THE DECIDING QUESTION, FIRST AND PLAINLY: **NO.** In the Abstract, Introduction,
Methods (including the Definitions subsection), Results (including Secondary Outcomes) and
Tables 1-3 - all of which I read - the paper prints **no** timing, rate, share or count of
beta-lactam dose increase, dose escalation of the dose amount, de-escalation reversal, or return
to full dosing, conditioned on renal function improving or recovering. Both of its arms are
defined by the time to a dose **reduction**. Details, including every term sweep run
individually, are under WHAT THE SOURCE SAYS below. The Discussion and Conclusion I could not
read; that is a property of my routes, not of the paper, and is logged under ROUTES THAT FAILED.

## READ LEVEL

**PARTIAL.** Reached, in the publisher's own article HTML at
https://academic.oup.com/ofid/article/11/3/ofae059/7596145 :

- full front matter (authors, title with subtitle, journal, volume, issue, article number, pages, year, DOI)
- Abstract (Background, Methods, Results as served)
- Introduction (complete)
- Methods, all subsections including Population, **Definitions**, Outcomes, Sample size, Statistical analysis
- Results, including Secondary Outcomes
- Table 1 (baseline characteristics), Table 2 (Cox model), Table 3 (outcomes)

**NOT reached: Discussion, Limitations, Conclusion.** The OUP article HTML, at every offset I
tried (default, 24000, 60000), terminates the article body at the two opening words of the
Discussion, **"This prospective"**. This is not a budget excuse for those three sections and it
is not a finding about them either: it is a route failure, recorded with its exact behaviour
below. My fetch budget is now fully spent (8 of 8), so I did not attempt an institutional PDF
mirror.

Keep these apart: this is **COULD NOT READ** for Discussion/Limitations/Conclusion, and
**FULL-SECTION READ** for Abstract, Introduction, Methods, Results and Tables 1-3. The sections
that would carry a measured quantity - Results and the Tables - are in the read part.

## WHAT THE SOURCE SAYS (quotations as served)

All quotation is as served by the summariser, which caps verbatim quotation at roughly 125
characters; multi-fragment strings are labelled as reconstructions with their fragment count.

### (b) Front matter, taken from the article's own front matter

- **Authors, printed order (10):** Namareq F. Aldardeer; Maram M. Alshreef; Emad A. Alharbi;
  Ahmad K. Aljabri; Mohammad H. Aljawadi; Thamer A. Almangour; Saad Alobaili; Mohammed I.
  Alarifi; Awad Alomari; Abdullah M. Alhammad.
- **Title as printed:** "Early Versus Late Antipseudomonal beta-Lactam Antibiotic Dose
  Adjustment in Critically Ill Sepsis Patients With Acute Kidney Injury: **A Prospective
  Observational Cohort Study**"
- **Journal:** Open Forum Infectious Diseases
- **Volume 11, Issue 3 (March 2024); article number ofae059; pages 1-9; 2024 (published online 1 February 2024)**
- **DOI:** 10.1093/ofid/ofae059

CITATION CORRECTION the entry needs: the entry's citation **drops the subtitle** "A Prospective
Observational Cohort Study", and carries no authors, no volume, no issue and no article number.
The subtitle is load-bearing here: it declares the design (prospective observational cohort),
which is what the regime comparison below turns on. Everything else in the entry's citation
(title stem, journal, year, DOI) is correct.

### (d) What "early versus late dose adjustment" actually contrasts, and in which DIRECTION

Methods > Definitions, reconstructed from **5 consecutive fragments** (junctions verified; no
string completed by inference):

> "After receiving the initial full dose of antipseudomonal beta-lactam upon sepsis recognition,
> / participants were stratified into 2 groups according to the time to beta-lactam renal dose
> reduction. / The early beta-lactam dose adjustment (E-BLA) group included patients who
> received a reduced renal dose of beta-lactam / within the first 24 hours of sepsis
> recognition, while the late beta-lactam dose adjustment (L-BLA) group / included patients who
> received a reduced renal dose of beta-lactam after 24 hours from sepsis recognition."

SCOPE-SETTING OPENER: the sentence opens with "After receiving the initial full dose of
antipseudomonal beta-lactam upon sepsis recognition," which scopes the entire stratification to
the window **after** an initial unreduced dose, and then names the stratifier explicitly as
"the time to beta-lactam renal dose reduction". The clause my words sit in **ASSERTS** that the
measured dose transition is a reduction, and it asserts it of both arms. There is no second,
upward transition in the stratifier.

LOGICAL FORM: this is a **stipulative definition** (a biconditional assigning patients to arms),
not a necessary or a sufficient condition about dosing, and not a disjunction. Modality: flat
declarative, no hedge. The use I make of it - that both arms are downward-only - survives those
answers, because the definition exhausts the two arms.

**DIRECTION: downward only.** Early and late are both times of a dose **reduction**, measured
from sepsis recognition. The contrast is early reduction versus late reduction, i.e. how long
full dosing was maintained before being cut. It is not full-dose-versus-reduced, and it is not
reduced-then-restored.

Corroborating, Abstract > Methods, as served:

> "dose adjustments based on the administration of subsequent renally adjusted doses within 24 hours"

Abstract > Background, as served, which is where the paper states what question is open:

> "raising questions about the necessity for early antibiotic adjustment"

and Introduction:

> "administration of full doses for <24 hours"

Each of these three scopes the adjustment as going from full to renally adjusted. None records an
upward move.

### (c) THE DECIDING QUESTION - every term swept, each with its own dedicated sweep

I ran these as **separate, individually named sweeps**, not one broad pass, and I ran two of the
sweeps twice across two different fetches. Coverage: Abstract, Introduction, Methods, Results,
Tables 1-3. Not covered: Discussion, Limitations, Conclusion (see READ LEVEL).

| Term | Dedicated sweep result in the sections I read |
|---|---|
| "increas" | **Present, 6 occurrences, none a dose increase.** Abstract Background "contributing to an increased mortality rate"; Introduction "which may lead to increased antibiotic clearance"; Introduction "A meta-analysis reported increased odds of mortality associated with inadequate therapy"; and three KDIGO staging thresholds in Methods > Definitions: "Stage I is an increase in serum creatinine (SCr) 1.5- to 1.9-fold from baseline", "stage II is an increase in SCr 2- to 2.9-fold from baseline", "stage III is an increase in SCr 3-fold from baseline". The three staging ones are increases in **creatinine**, not in dose, and they go in the direction of worsening renal function. |
| "escalat" | **Present, 3 occurrences, all drug-SPECTRUM, none a dose amount.** See the definition and the numbers immediately below. |
| "de-escalat" | **Absent.** |
| "restor" | **Absent.** |
| "recover" / "recovery" | **Present, 2 occurrences, both renal-function outcomes, neither a dose change.** See below. |
| "renal recovery" | **Present, once**, Introduction only. See below. |
| "return to" | **Absent.** |
| "full dose" / "full doses" / "full dosing" | **Present, 4 occurrences, every one describing the INITIAL dose before reduction.** Methods > Population "received an initial full dose of antipseudomonal beta-lactam antibiotics"; Methods > Definitions "After receiving the initial full dose of antipseudomonal beta-lactam"; Introduction "administration of full doses for <24 hours"; Introduction, parenthetical variant, "the initial empiric beta-lactam in full (not renally adjusted) doses". The exact string "full dosing" does not occur. Not one of these is a **return** to full dose. |
| "back-titrat" | **Absent.** |
| "titrat" (broader, run separately) | **Absent.** |
| "resume" | **Absent.** |
| "reversal" | Present only inside the transient-AKI definition, "the complete reversal of AKI within 48 hours" - a reversal of the **injury**, not of a dose change. |

**The "escalation" number, and why it is not the claim's number.** Methods > Definitions, a
reconstruction from **2 consecutive fragments**:

> "Escalation of antibiotic therapy was defined as switching patients from antibiotics with a
> lower spectrum of activity / to antibiotics with a broader spectrum of activity [17]"

SCOPE AND FORM: this is a stipulative definition carrying its own citation [17]. The clause
**RECORDS A MOVE AWAY** from any dose reading of the word: the paper spends its only use of
"escalation" on spectrum, explicitly. So the one word in this paper that looks like the
candidate's upward transition is defined, in the paper's own Methods, to mean something else.

It does carry numbers. Table 1, row "Escalation of therapy needed to target culture in patients
with gram-negative isolates": **38 (16.9%)** overall, **12 (14.3%)** in E-BLA, **26 (18.6%)** in
L-BLA, denominators 224 / 84 / 140. (MY OWN ARITHMETIC: 12/84 = 14.29%, 26/140 = 18.57%,
38/224 = 16.96%, and 12 + 26 = 38 - the printed percentages and the split both check out.) The
same row label recurs in Table 2 as a Cox covariate with **HR 0.747 (95% CI .395-1.413)**, and
0.665 / 0.659 in the two variant models.

NUMERATOR CLASS of that 38, with its exclusion quoted: patients "switching ... from antibiotics
with a lower spectrum of activity to antibiotics with a broader spectrum of activity", further
restricted by the row label to escalation "needed to target culture **in patients with
gram-negative isolates**". DENOMINATOR: all 224 included patients (and 84 / 140 by arm) - checked
against the near neighbours it is not, namely the 204-ish with any culture, or the gram-negative
subgroup alone, neither of which is the printed denominator.

OVERLAP WITH THE CANDIDATE, BOTH DIRECTIONS.
- What this class **MISSES** that the candidate wants: every renal dose restoration. A patient
  kept on a reduced dose of the same drug after creatinine normalises is not in this 38 at all,
  because no drug switch occurred. The candidate's entire quantity is invisible to this row.
- What this class **INCLUDES** that the candidate excludes: switches to a broader-spectrum agent
  driven by culture results, with renal function irrelevant to the switch - a microbiological
  decision, not a renal one. The candidate's quantity is conditioned on renal recovery; this one
  is conditioned on a gram-negative isolate.
A number one word away from the claim's is a different quantity, and this is two words away:
spectrum rather than dose, culture rather than creatinine.

**The two "recover" occurrences, and why neither is the claim's number.**

1. Introduction, the hedged and cited background formulation, as served:
   > "renal recovery was observed in about 50% of patients with sepsis and AKI within 48 hours of admission"
   Modality: hedged ("about"), reported of other work, **no denominator printed**. The clause
   ASSERTS a renal-recovery rate. It says nothing about any dose.

2. Results > Secondary Outcomes, as served:
   > "a higher rate of 48 hours AKI recovery (70.7% vs 47.6%, P = .001)"
   SCOPE: the sentence sits in the L-BLA-versus-E-BLA comparison, so "higher" is L-BLA over
   E-BLA. Table 3 labels the same measure **"Transient AKI"**, defined in Methods > Definitions as
   > "defined as the complete reversal of AKI within 48 hours."
   Printed figures, Results text and Table 3: transient AKI **139 (62.1%)** overall, **40 (47.6%)**
   E-BLA, **99 (70.7%)** L-BLA, P = .001; resolution of kidney injury **174 (77.7%)** overall,
   **57 (67.9%)** E-BLA, **117 (83.6%)** L-BLA, P = .006. Resolution is defined as
   > "defined as a decrement of >=50% in the serum creatinine level within 7 days of AKI onset."
   (MY OWN ARITHMETIC: 40/84 = 47.6%, 99/140 = 70.7%, 40 + 99 = 139, 139/224 = 62.1%; 57/84 =
   67.9%, 117/140 = 83.6%, 57 + 117 = 174, 174/224 = 77.7%. All consistent with the printed
   percentages. The paper's own uncertainty on these is carried only as the P values above; no
   interval is printed for them.)

   **THE DIRECTION OF THIS MECHANISM IS THE REVERSE OF THE CANDIDATE'S.** Here the dose-timing
   arm is the exposure and renal recovery is the **outcome**: early-versus-late reduction ->
   probability of renal recovery. The candidate conditions the other way: renal recovery ->
   whether the reduced dose is ever restored. Dose is the outcome in the candidate and the
   exposure here. A reader skimming "48 hours AKI recovery (70.7% vs 47.6%)" could mistake it for
   a recovery-conditioned dosing figure; it is a dosing-conditioned recovery figure.

   A labelling discrepancy worth recording, since a reader checking the entry may hunt for it:
   the Results prose calls this measure "48 hours AKI recovery" while Table 3 calls it
   "Transient AKI". Same numbers, two names.

### (e) Unit of analysis, population, endpoint, comparator, estimand

- **Unit of analysis:** not stated in those words anywhere I read. The analysis runs at the
  **individual patient / index ICU admission** level: 224 patients, time to in-hospital death.
  (MY OWN INFERENCE from the Ns and the time-to-event model, labelled as mine, not a quotation.
  What would ground it outright is an explicit unit-of-analysis sentence, which the paper does not
  print in the sections I read.)
- **Population, inclusion:** "critically ill patients with sepsis and AKI aged >=18 years who
  were admitted to the ICU" and who "received an initial full dose of antipseudomonal beta-lactam
  antibiotics". Four Saudi Arabian centres, November 2019 to September 2021. **1185 screened, 224
  included**, 84 E-BLA and 140 L-BLA.
- **Population, exclusions, as served:** "had end-stage renal disease or were receiving
  dialysis"; "received the initial dose of beta-lactam adjusted for renal function"; "had a
  confirmed diagnosis of coronavirus disease 2019 (COVID-19)"; "died within 48 hours of sepsis
  recognition". Note the second exclusion: a patient whose first dose was already renally
  adjusted is thrown out, which is a further guarantee that every retained patient's measured
  transition runs full -> reduced.
- **Primary endpoint:** Methods, "in-hospital mortality within the first 90 days of follow-up";
  the Abstract says "in-hospital mortality". A minor internal inconsistency, recorded, not
  load-bearing here.
- **Secondary endpoints:** "transient AKI, resolution of kidney injury during the hospital stay",
  need for renal replacement therapy, ICU and hospital length of stay.
- **Comparator:** E-BLA (reduction within 24 h of sepsis recognition, n = 84) versus L-BLA (after
  24 h, n = 140). The sample-size section labels L-BLA the "intervention" and E-BLA the "control".
- **Estimand / model:** "A multivariable Cox proportional hazards model was used to estimate the
  effects", primary result **HR 0.588 (95% CI .355-.974)** for L-BLA versus E-BLA on in-hospital
  mortality, with an inverse-probability-of-treatment-weighting sensitivity analysis giving
  **HR 0.574**. Secondary outcomes by chi-square or Fisher exact, t tests and Mann-Whitney U.
  The estimand is a hazard ratio for death, not any dosing quantity.

### (g) If it printed an upward-transition quantity

It does not, in the sections I read, so there is no numerator and denominator to compare. For the
record, what the candidate needs and what this paper's closest row offers:

- Candidate numerator: renal dose reductions that are **never restored** after renal function
  recovers. Candidate denominator: renal dose reductions in admissions with linked timestamped
  medication and laboratory records, over a pre-declared drug list.
- Closest thing printed here: 38/224 spectrum escalations to target culture in gram-negative
  patients, and 139/224 transient AKI. Neither numerator contains a single dose restoration
  event, and neither denominator is a set of dose reductions - both denominators are patients.

## REGIME

**The paper's regime, in its own words:** "critically ill patients with sepsis and AKI aged >=18
years who were admitted to the ICU" who "received an initial full dose of antipseudomonal
beta-lactam antibiotics", at four Saudi Arabian centres, November 2019 to September 2021, a
"Prospective Observational Cohort Study" (subtitle), unit the individual ICU admission, exposure
the time to "beta-lactam renal dose reduction" dichotomised at 24 hours from sepsis recognition,
instrument prospective chart data staged by KDIGO creatinine criteria, endpoint in-hospital
mortality estimated as a Cox hazard ratio, with dialysis patients, already-renally-adjusted first
doses, COVID-19 and deaths inside 48 hours all excluded.

**Is the candidate inside it? No, and in four ways at once.**
1. **Direction of the dose transition.** The paper's only dosing variable is downward, by
   construction and by exclusion criterion. The candidate's quantity is upward.
2. **Which variable is the outcome.** Here dose timing is the exposure and renal recovery is a
   secondary outcome. In the candidate, renal recovery is the condition and the dose state is the
   outcome.
3. **Population and drug list.** ICU sepsis with AKI on antipseudomonal beta-lactams, versus any
   admission with linked timestamped medication and laboratory records over a pre-declared drug
   list.
4. **Denominator object.** Patients here; dose reductions in the candidate.
A result proved under one set of assumptions is silent outside them, and this one is silent on
the upward transition - not supportive of the entry and not against it.

## DEFECTS FOUND

Defects in the ledger's and the adversaries' handling of this source, not in the paper:

1. **The title reading was right about direction but was a guess until now.** One adversary read
   the title as timing the reduction. The Methods confirm that reading - "the time to beta-lactam
   renal dose reduction" - but a title grounds nothing, and the confirmation is in the Definitions
   subsection, which neither adversary opened. Correct conclusion, previously unsupported ground.
2. **The citation as the entry carries it drops the subtitle** "A Prospective Observational Cohort
   Study", and carries no authors, volume, issue or article number. The subtitle names the design
   the regime comparison rests on. Corrected front matter is in section (b).
3. **The nearest trap in this paper is the word "escalation", and it is a trap.** It appears with
   real numbers (38/224, 16.9%, and an HR in Table 2) and would read, to a keyword sweep, like an
   upward transition. The paper's own Methods define it as a **spectrum** switch, and the Table 1
   row restricts it to escalation "needed to target culture in patients with gram-negative
   isolates". Anyone grading this entry from a sweep hit on "escalation" would be citing a
   microbiological quantity for a renal one.
4. **The second trap is "48 hours AKI recovery (70.7% vs 47.6%)", whose mechanism runs the other
   way** - dose timing predicting recovery, not recovery predicting dose. The arrow must be checked
   before that number is used in either direction.
5. **EXISTENCE CLAIM, INSTANCED.** The premise under test is an existence claim: that this paper
   prints an upward-transition quantity. Instance opened: this one paper, DOI 10.1093/ofid/ofae059,
   Aldardeer 2024, read at Abstract / Introduction / Methods / Results / Tables 1-3. Verdict over
   what I opened: **FALSE over the instance I opened** - no such quantity is printed in those
   sections, and the per-term sweeps above are the evidence. For Discussion, Limitations and
   Conclusion the premise is **UNENUMERATED**: I did not read them.
6. **MY OWN REASONING, LABELLED AS SUCH, about how much that unread tail can matter.** A
   Discussion in a paper of this design would be restating and interpreting numbers that appear in
   the Results or the Tables; a measured upward-transition quantity appearing there for the first
   time would be a new result outside the reported outcome set, which Methods lists as mortality,
   transient AKI, resolution, RRT and lengths of stay. That is an argument about the shape of the
   article, **not a finding**, and I flag it as mine. What would ground it is the Discussion text
   itself, reachable in the OUP PDF or the PMC XML - which are **the same document** under
   different identifiers (DOI 10.1093/ofid/ofae059 = PMID 38434610 = PMC10906704; one paper, three
   identifiers, not three sources). I did not open either, so I do not count the tail as checked.
7. **Repeated title returns are not corroboration.** My one search returned this same article at
   four of nine result slots (two PMC URL forms, a PMID-routed PMC URL, and an IDSA Science Speaks
   blog commentary pointing at it). That is **one document plus one blog restatement of it**, and
   the blog is not the paper - it resolves to this same DOI and must not be graded in its place.

## ROUTES THAT FAILED

With the exact behaviour each returned.

1. **https://doi.org/10.1093/ofid/ofae059** - did not 429. Returned **302 Found** with
   `Location: https://academic.oup.com/ofid/article/11/3/ofae059/7596145`; the cross-host redirect
   was handed back rather than followed. Not a failure, a hop. Cost 1 fetch.
2. **https://academic.oup.com/ofid/article/11/3/ofae059/7596145** - **SUCCEEDED.** Served front
   matter, Abstract, Introduction, Methods, Results and Tables 1-3. **Partial failure: the article
   body terminates at the Discussion's first two words, "This prospective".** Retried at
   `offset=24000` and `offset=60000`; the `offset=60000` window began mid-Table 1 at the fragment
   "24 h of inclusion." and still ended at "This prospective", so the truncation is in the served
   document, not in my window. Each table is duplicated in the page source, which inflates the
   body and is why the offsets land where they do. Cost 4 fetches across the sweeps.
3. **https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=10.1093/ofid/ofae059&format=json** -
   returned **302 Found** to
   `https://pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?format=json&ids=10.1093%2Fofid%2Fofae059`.
   I did not follow it, because the destination is on the hard-blocked PMC host and I already had
   the full front matter from the publisher. Cost 1 fetch. No conversion result obtained from this
   route; the PMCID below came from the search listing, not from the converter.
4. **https://pmc.ncbi.nlm.nih.gov/articles/PMC10906704** - **FAILED.** Served a reCAPTCHA
   interstitial, not the article; its entire body text was "Checking your browser before accessing
   pmc.ncbi.nlm.nih.gov ..." and "Click here if you are not automatically redirected after 5
   seconds." This is the declared hard block, behaving as declared. Cost 1 fetch.
5. **Institutional PDF mirror - NOT ATTEMPTED, BUDGET SPENT.** My search surfaced no institutional
   mirror of this article's PDF (it returned PMC URL forms, the IDSA blog, and unrelated papers).
   After route 4 my fetch budget stood at 8 of 8, so I stopped. **This is a spent budget, not a
   property of the source**, and it is the reason Discussion / Limitations / Conclusion are
   COULD NOT READ rather than absent.
6. **Unpaywall - deliberately skipped**, because its contact-email parameter would put a personal
   identifier in a query string. No search classifier refusal occurred; my one search ran and
   returned results.

Sub-claims not reached: none. (a) through (g) are all answered, with (c) answered over the
sections I read and the unread tail flagged in both places.

## BEARING ON THE LEDGER ENTRY

**The Disguise hole closes on this source. It should move from Partial to clear, and this entry
does NOT fall to Rejected on ofae059.**

Why, in the entry's own terms. This is the right KIND of document - unit an antibiotic course in
an admission, population AKI arising inside the admission, object the timing of renal dose
adjustment - and that is exactly why both sweeps surfaced it and why leaving it unopened was the
right thing to flag. Opened, it is a **neighbour and not a disguised known**, because its only
dose transition is the downward one. Methods > Definitions stratifies "according to the time to
beta-lactam renal dose reduction", and the exclusion of patients who "received the initial dose
of beta-lactam adjusted for renal function" guarantees every retained course runs full ->
reduced. The paper measures how long full dosing was held before being cut, and whether holding
it longer buys survival (HR 0.588, 95% CI .355-.974, L-BLA vs E-BLA). The candidate asks whether
the cut is ever undone once creatinine comes back. The paper never asks that, and prints no
number that answers it.

The two numbers in it that a sweep would mistake for the candidate's both fail on inspection: the
38/224 (16.9%) "escalation" row is a **spectrum** switch "needed to target culture in patients
with gram-negative isolates", defined in Methods as switching to "antibiotics with a broader
spectrum of activity"; and the 48-hour recovery figures (139/224, 62.1%; 70.7% L-BLA vs 47.6%
E-BLA, P = .001) have **dose timing as the exposure and renal recovery as the outcome**, the
arrow reversed relative to the candidate.

Two carries for whoever updates the entry. First, fix the citation: add the subtitle "A
Prospective Observational Cohort Study" and the ten authors, first author Namareq F. Aldardeer,
volume 11, issue 3, article ofae059, pages 1-9. Second, note in the entry that the paper's
Discussion, Limitations and Conclusion remain **unread here on a spent budget**, so the closure I
am recording rests on Abstract, Introduction, Methods, Results and Tables 1-3 - the sections where
a measured quantity would be printed. If a future pass wants that tail, the document to open is
the OUP PDF or the PMC XML of **this same DOI** - one document, not a new source, and opening it
adds no independent corroboration of anything.
