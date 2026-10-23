# VERIFY - Hughes 2022 dlac080: the 5-of-11 beta-lactam escalation, its time origin, and the 3-day median renal recovery

Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

Entry UQ-20261023-10 asserts four things about Hughes S., Heard K.L., Mughal N., Moore L.S.P.,
'Optimization of antimicrobial dosing in patients with acute kidney injury: a single-centre observational
study', JAC-Antimicrobial Resistance 2022;4(4):dlac080, DOI 10.1093/jacamr/dlac080:

1. it prints 'Five of the 11 dose-reduced beta-lactams were adjusted to maximum dosing by the ward or
   specialist infection pharmacist', denominator 11;
2. the time origin of those adjustments is within 24 hours of bacteraemia, not of renal recovery;
3. it never links the escalation to renal function;
4. it prints a median time to renal recovery of 3 days (IQR 2-5).

Verdict in one line: **(1) holds verbatim up to a glyph; (2) holds and is confirmed by the quoted
sentence's own suppressed tail; (4) holds verbatim but its denominator is NOT printed and the paper
carries two different definitions of "recovery"; (3) holds for the escalation itself but is too strong
as written - the paper does link dose-adjustment decisions to renal function in the Discussion, in the
opposite direction.**

## READ LEVEL

**PARTIAL (targeted extraction across the full article HTML; not a continuous full-text read).**

The article opened in one fetch at the route the record names: `https://doi.org/10.1093/jacamr/dlac080`
returned a single 302 to `https://academic.oup.com/jacamr/article/4/4/dlac080/6649766`, which served the
complete article (front matter, Abstract, Methods, Results, Discussion, Table 2, Figure 1 legend). The
record's route is accurate and cheap.

What I could NOT do is read it as continuous prose. The summariser twice declined whole-section verbatim
reproduction - on the Methods ("I can't reproduce the Methods section verbatim") and on the Results
subsection "Antimicrobial use" ("I can't reproduce this subsection verbatim") - and caps quotation at
roughly 125 characters. So every long quotation below is a **reconstruction from ordered consecutive
fragments**, assembled only from consecutive returns, with the junction checked; I state the fragment
count each time. Sections I saw only through such fragments: Methods (definitions, study setting),
Results ("Antimicrobial use", "Impact of AKI on patients' outcomes", "Impact of antimicrobial dosing on
outcomes"), Discussion. Table 2 and Figure 1 I saw only as caption/row-label fragments, never as a grid;
one Table 2 cell value reported to me (96/97) I therefore mark as summariser-reported and NOT
independently re-verified.

No route failed. The budget was not exhausted: 1 of 6 fetches went unspent. Nothing below is a
budget-shaped absence.

### Front matter (sub-claim b) - verified from the article's own front matter

- Authors, printed order: **Stephen Hughes; Katie L Heard; Nabeela Mughal; Luke S P Moore**
  (corresponding author Luke S P Moore). Affiliations: Chelsea and Westminster NHS Foundation Trust,
  369 Fulham Road, London SW10 9NH, UK (all four); North West London Pathology, Imperial College
  Healthcare NHS Trust (Mughal, Moore); NIHR HPRU in HCAI and AMR, Imperial College London (Mughal,
  Moore).
- Title: *Optimization of antimicrobial dosing in patients with acute kidney injury: a single-centre
  observational study*
- Journal: **JAC-Antimicrobial Resistance**; volume **4**, issue **4**, article number **dlac080**;
  the page carries **no page range**. Year **2022** (received 16 February 2022; accepted 25 May 2022;
  published 25 July 2022). DOI **10.1093/jacamr/dlac080**.
- Against the entry's citation: no correction needed. The entry's "Hughes S., Heard K.L., Mughal N.,
  Moore L.S.P." matches the printed order and initials; "2022;4(4):dlac080" matches, and the absence of a
  page range in the entry is correct rather than an omission.

## WHAT THE SOURCE SAYS (quotations as served)

### (c) The 5-of-11 string, and what its opening words scope

Printed location: **Results, running text, under the subheading "Antimicrobial use"**. Not a table, not
a figure legend. The record's location is right.

Reconstruction from 2 consecutive fragments, junction verified (fragment 1 ends "...infection
pharmacist" with no terminal punctuation; fragment 2 begins lowercase "within" and carries the full
stop):

> "Five of the 11 dose-reduced β-lactams were adjusted to maximum dosing by the ward or specialist
> infection pharmacist **within the first 24 h post bacteraemia.**"

**The entry's string is verbatim except that the paper prints the Greek glyph "β-lactams" where the entry
writes "beta-lactams" - and except that the entry's quotation STOPS ONE CLAUSE EARLY.** The sentence does
not end at "pharmacist". The grammar is clean on both sides of that cut, which is exactly the failure mode
to watch: the words dropped are the trailing adverbial that fixes the time origin. Here the drop happens
to favour the entry (the suppressed tail is the entry's own point 2), but anyone quoting the entry's
string alone cannot see the time origin at all.

Neighbouring sentence BEFORE (2 fragments, junction verified at "(n = 4)" / "and 1200 mg"):

> "Dose reductions of β-lactams were most common with amoxicillin/clavulanate dosing of 600 mg twice a
> day IV (n = 4) and 1200 mg twice a day (n = 5) with two dose-reduced courses of piperacillin/tazobactam
> (4.5 g twice a day IV)."

Neighbouring sentence AFTER (2 fragments):

> "Fluoroquinolones (5/5), colistin (1/1), fosfomycin (1/1) and chloramphenicol (1/1) were dosed
> appropriately in the remainder of cases."

**What the opening words scope.** "Five of the 11 dose-reduced β-lactams" scopes the denominator to
*courses of β-lactam therapy that had been dose-reduced*, and nothing else: no aminoglycoside, no
fluoroquinolone, no colistin, and no β-lactam course that was never reduced. The trailing adverbial scopes
the time to *the first 24 h post bacteraemia*. The clause **ASSERTS** the quantity (it does not deny it or
record a move away from it). Its logical form is a flat past-tense count, not a conditional, not a
disjunction, and not a necessary-or-sufficient condition; its modality is unhedged in the Results.

Denominator chain, verified upward (fragments from the same subsection):

> "β-Lactam based therapy was prescribed in 97/105 cases" ... "utilized in 86/97 cases (88.7%)"
> [full licensed dosing]

So 86 full + 11 reduced = 97 β-lactam courses, out of 105 AKI stage >=2 patients analysed for
antimicrobial use. The arithmetic closes. (MY OWN ARITHMETIC: 11/97 = 11.3% of β-lactam courses were
dose-reduced; 5/11 = 45.5% were taken back to maximum dosing inside 24 h.)

Hedged restatement in the Discussion, which per the quotation discipline is the formulation to prefer
when citing the paper's own characterisation:

> "Dose reductions were uncommon and **typically** corrected by a pharmacist within 24 h ..."

Two things follow. First, the paper's own word for the escalation is **"corrected"** - it frames the
upward adjustment as the repair of an inappropriate initial prescription, not as a response to anything
in the patient. Second, "typically" is doing more work than the number supports: 5 of 11 is under half.
That is a defect in the source, and it cuts against anyone reading 5/11 as near-universal correction.

### (d) The time origin - the decisive point

Methods, on the window analysed (2 fragments, junction verified):

> "Antibacterial treatment prescribed **within the first 72 h from blood culturing** was analysed in
> patients with acute kidney injury or failure (defined as AKI stage 2 or above)."

Methods, dose-category definitions (fragments):

> "Full-dose β-lactams, or quinolones where used, were defined as unadjusted licensed dosing as per
> national formulary (BNF)."
> "Low doses were defined as adjusted doses for reduced creatinine clearance as defined by the
> manufacturers' datasheets within the UK."

**The time origin is the blood culture / bacteraemia date.** It is stated twice: in the Methods window
("from blood culturing") and in the 5-of-11 sentence's own tail ("post bacteraemia"). Renal recovery is
nowhere used as a time origin for dosing. Sub-claim (2) of the entry is CONFIRMED on the paper's own
words, not by inference.

**Keyword sweeps, two passes each where it matters.** A first broad sweep (one prompt) and then a second
dedicated sweep aimed only at these strings (a separate prompt that asked for whole-article coverage
including abstract, tables and figure legends) both returned:

- **"escalat" - string absent, on both sweeps.** The paper never uses the word escalation.
- **"restor" - string absent, on both sweeps.**
- "maximal" - absent; "never" - absent.
- "maximum" - **one occurrence only**, the 5-of-11 sentence.
- "increas" - four occurrences, all unrelated to dosing (ageing population; infection morbidity;
  increased volume of distribution; the KDIGO creatinine criterion "an increase in serum creatinine by
  >=1.5-fold").

I flag that my sweeps are not perfectly exhaustive: the first pass's "improv" sweep returned three
sentences and MISSED at least two that an earlier pass had already surfaced ("rapid improvement of renal
function", and the Discussion's "improving to baseline"). That is precisely the "one sweep's silence is
not absence" failure, caught in my own work. It is why I re-ran "restor" and "escalat" on a dedicated
prompt. Both are absent on two independent sweeps; treat the other absences as single- or double-sweep
findings, not as proofs.

**Does the paper link ANY dose adjustment to renal function? Yes - and the entry's "never" is too
strong.** The Discussion paragraph, sentence by sentence in order (fragments; sentences 1, 2 and 5 were
served truncated and I mark them so):

> S1: "Full-dose β-lactam therapy was commonly prescribed in patients with AKI stage >=2 ..." [truncated]
> S2: "Dose reductions were uncommon and typically corrected by a pharmacist within 24 h ..." [truncated]
> S3: "Dose adjustments after 48 h were not recommended if renal function was improving to baseline at
> time of review" ... "to correct for any potential hyperfiltration with recovering function."
> S4: "Where renal function recovery was slow, dose adjustments based on the estimated renal function at
> 48 h were advised."
> S5: "Dose adjustments after 48 h were required to reduce further accumulation ..." [truncated]

Test the logical form of S3, because it is the sentence a careless reader would cite against the entry.
S3 is a **CONDITIONAL** (if renal function was improving, then adjustment at 48 h was not recommended);
its modality is **NORMATIVE** ("were not recommended" - local guidance), not observational; and its
direction is an **UNLOADING, not a loading**: the "dose adjustment" it withholds is the downward
adjustment for reduced clearance, so improving renal function is a reason to LEAVE the dose at full, not
a trigger to raise a dose that had been cut. S4 is its complement, again normative and again about
whether to reduce.

So the precise finding: **the paper links the DECISION WHETHER TO DOSE-REDUCE to renal function
trajectory, in the Discussion, as guidance. It never links the 5-of-11 upward adjustment - or any
upward adjustment - to renal function recovering.** The agent it names for that upward adjustment is the
ward or specialist infection pharmacist, and the time it names is 24 h post bacteraemia, which is before
the paper's own median recovery of 3 days.

### (e) The median time to renal recovery

Printed location: **Results, running text, under "Impact of AKI on patients' outcomes"**:

> "Median time to recovery (1.5-fold reduction in serum creatinine) was 3 days (IQR 2-5)."

(The paper prints an en dash, "IQR 2–5".) The figure is also carried in the Abstract and Discussion in a
different and non-equivalent form - the Abstract gives recovery times BY DOSING ARM, "3 versus 4 versus 3
days, P = 0.612" for full/low/no aminoglycoside and "3 versus 5 days, P = 0.077" for full- versus low-dose
β-lactam, with no IQR. Those are subgroup medians, not the pooled 3 (IQR 2-5).

**Definition, quoted verbatim - and there are TWO of them.** Methods, "Definitions" (3 fragments,
junctions verified):

> "AKI was defined using the Kidney Disease Improving Global Outcomes (KDIGO) classification system21 as
> an increase in serum creatinine by >=1.5-fold, or >=26.5 μmol/L within any 48 h period; **time to
> recovery was measured as number of days from peak serum creatinine to reduction of 1.5-fold.**"

and, separately:

> "AKI recovery was defined as resolution of serum creatinine to baseline or rapid improvement of renal
> function at time of discharge if earlier."

The record's gloss - "a 1.5-fold fall from peak creatinine" - is correct for the 3-day median. But the
paper's OTHER recovery definition (return to baseline, or at discharge) is the one behind the
"105/106 surviving patients" and the Table 2 row. A 1.5-fold fall from peak is a much weaker event than
return to baseline: the 3 days is time to a partial fall, not time to restored renal function.

**Denominator: NOT PRINTED.** The sentence carries no n, and the surrounding paragraph (reconstructed in
order from fragments) offers three incompatible candidates:

> "The in-hospital 30 day mortality was higher in patients presenting with AKI stage >=2 (26/123; 21.1%)
> than those with presenting with normal renal function (25/352; 7.1%; P = 0.0001) but similar to patients
> presenting with AKI stage 1 (14/112; 12.5%; P = 0.0802) (Table 2). Mortality for patients treated on
> critical care with concurrent AKI stage >=2 was 5/14 (35.7%). Recovery of renal function at Day 21 or
> discharge was present in 105/106 surviving patients presenting with AKI stage >=2 (Figure 1). Median
> time to recovery (1.5-fold reduction in serum creatinine) was 3 days (IQR 2-5). One patient presenting
> with AKI stage 2 had initial recovery of renal function after Day 5 but a second renal insult occurred
> with declining renal function after Day 15 consistent with an unresolved AKI. One case of unresolved AKI
> was present in the AKI stage 1 group (106/107). The median hospital length of stay was greater for
> patients presenting with AKI stage 1 and stage >=2 compared with patients with preserved renal function
> (P < 0.0001)."

Candidates for the median's denominator: **106** (surviving AKI >=2, from the adjacent sentence), **112**
(the Figure 1 caption's "for all patients studied (n = 112)"), **105** (the antimicrobial-use cohort), or
**97** (a Table 2 AKI >=2 recovery cell reported to me as 96/97 - summariser-reported, NOT
re-verified by me, and inconsistent with the text's 105/106). Against the 123 who presented with AKI >=2,
every one of these is a survivor-restricted subset. **The median is printed; its denominator is not.**

### (f) Population, unit of analysis, instrument, endpoints

- Population: "A total of 647 episodes of Gram-negative bacteraemia in 608 individual patients were
  included in this study"; "All adults (>18 years) with a confirmed Gram-negative bacteraemia on or
  during admission ... in the four fiscal years April 2016 to March 2020 were included"; "across a large
  single-centre NHS acute Trust; Chelsea & Westminster Hospital (London, UK)." **647 episodes, 608
  patients, one London trust, April 2016 - March 2020: all four verified as printed.** Note the dates are
  FISCAL years, April to March, not calendar 2016-2020.
- Unit of analysis: **the episode**, with partial deduplication - "Patients with multiple blood culture
  results within 30 days of first isolate were deduplicated to a single (first) episode." The 39-episode
  excess over 608 patients is therefore repeat bacteraemias more than 30 days apart.
- Instrument: **serum creatinine** throughout; **KDIGO** staging (">=1.5-fold, or >=26.5 μmol/L within any
  48 h period"); **eGFR by MDRD** ("Calculation of eGFR was achieved using the Modification in Diet and
  Renal Disease (MDRD) equation"); and, decisively for the staging, **"Urine output measurements were not
  routinely available."** KDIGO was thus applied on its creatinine limb only. The entry's instrument list
  is verified, including the urine-output unavailability.
- Endpoints: **the paper labels no primary or secondary endpoint.** Its stated objective is "To determine
  the outcomes associated with this dosing strategy"; the outcomes extracted are "in-hospital mortality,
  length of stay and kidney function recovery (defined as recovery to baseline renal function)". Anyone
  describing a "primary endpoint" here is importing it.

### (g) A share of dose reductions never restored

**There is none.** "restor" is absent on two dedicated sweeps and "never" is absent; the paper prints no
figure for dose reductions that were not subsequently increased. What it prints is 5/11 adjusted to
maximum dosing *within the first 24 h post bacteraemia*, and then says nothing about the remaining 6.

MY OWN ARITHMETIC, labelled as such: 11 - 5 = 6 dose-reduced β-lactam courses were not taken to maximum
dosing inside 24 h. That complement is "not escalated within 24 h of bacteraemia", **not** "never
restored" - the paper is silent past that window, and silence is not a measurement. On this quantity the
paper does not measure; it does not even bound.

## REGIME

In the paper's own words: adult inpatients (>18 years) with microbiologically confirmed Gram-negative
bacteraemia at one large NHS acute trust, Chelsea & Westminster Hospital, London, over four fiscal years
April 2016 - March 2020; 647 episodes in 608 patients, unit of analysis the episode (deduplicated to the
first isolate within 30 days); retrospective observational service evaluation (ethics review and consent
waived). The dosing analysis is a strict subgroup: "Antibacterial treatment prescribed within the first
72 h from blood culturing was analysed in patients with acute kidney injury or failure (defined as AKI
stage 2 or above)" - 105 such patients for antimicrobial use, 97 of them on β-lactam-based therapy.
Instrument: serum creatinine with KDIGO staging on the creatinine limb only, urine output "not routinely
available", eGFR by MDRD. Dose categories: full = unadjusted licensed BNF dosing; low = "adjusted doses
for reduced creatinine clearance as defined by the manufacturers' datasheets". Operating condition for
the 5-of-11: the first 24 h after bacteraemia, in a hospital with a ward and specialist infection
pharmacy service reviewing prescriptions. Statistics non-parametric (Mann-Whitney, Kruskal-Wallis,
Wilcoxon, Fisher's exact), alpha 0.05.

Does the entry's use sit inside this regime? For sub-claims 1, 2 and 4 - yes; all three are statements
about what this paper prints, and all three are about quantities printed inside the AKI >=2 /
first-72-h-from-blood-culture frame. For the *candidate quantity* the entry is comparing against
(escalation of a dose reduction once renal function recovers) - **no.** The regime's clock starts at the
blood culture and its dosing analysis closes at 72 h; the paper's own median time to a 1.5-fold
creatinine fall is 3 days. A renal-recovery-triggered escalation is, on the paper's own numbers, mostly
outside the window it analysed.

### Overlap in both directions, for the 5-of-11 against the candidate quantity

- **Numerator class (quoted, with its exclusions):** "dose-reduced β-lactams ... adjusted to maximum
  dosing by the ward or specialist infection pharmacist within the first 24 h post bacteraemia".
  Excludes by construction: anything not a β-lactam; any β-lactam not dose-reduced; any adjustment made
  by someone other than the ward or specialist infection pharmacist; any adjustment after 24 h.
- **Denominator (checked against the near neighbours it is not):** 11 = dose-reduced β-lactam *courses*.
  It is NOT 97 (all β-lactam courses), NOT 105 (AKI >=2 patients in the dosing analysis), NOT 123 (all
  presenting with AKI >=2), NOT 647 (episodes) and NOT 608 (patients). 86 + 11 = 97 confirms it.
- **What the source's class MISSES relative to the candidate's quantity:** every restoration occurring
  after 24 h post bacteraemia - which, given the paper's own 3-day (IQR 2-5) median to even a 1.5-fold
  creatinine fall, is where essentially all renal-recovery-driven restorations would fall; restorations of
  aminoglycoside, fluoroquinolone, colistin, fosfomycin and chloramphenicol reductions; reductions in
  patients with AKI stage 0-1; and the 8/105 cases with no β-lactam at all.
- **What the source's class INCLUDES that the candidate excludes:** upward adjustments made because the
  initial reduction was simply wrong, with no change in renal function whatsoever. The Discussion says so
  in the paper's own verb - these reductions were "corrected by a pharmacist within 24 h". A
  prescribing-error correction is not a renal-recovery escalation.

Non-overlapping in both directions. **The 5-of-11 is a different quantity from the candidate's, and it is
different by exactly the words the entry identifies.**

## DEFECTS FOUND

Against the entry:

1. **Sub-claim 3 as written ("it never links the escalation to renal function") is too strong and should
   be narrowed.** The word "escalation" never appears in the paper, and no upward adjustment is anywhere
   tied to renal recovery - that much is right, on two sweeps. But the Discussion does link dose
   adjustment to renal function twice: "Dose adjustments after 48 h were not recommended if renal
   function was improving to baseline at time of review to correct for any potential hyperfiltration with
   recovering function" and "Where renal function recovery was slow, dose adjustments based on the
   estimated renal function at 48 h were advised." Both are normative guidance about whether to REDUCE,
   i.e. an unloading, not a loading - so they do not rescue the candidate reading - but an unqualified
   "never links" invites a one-fetch rebuttal. Rewrite as: *the paper never links an upward adjustment to
   renal function recovering; where it does connect renal function to dosing (Discussion), the direction
   is whether to withhold a reduction.*
2. **The entry's quotation of the 5-of-11 sentence stops one clause early**, at "pharmacist". The sentence
   continues "within the first 24 h post bacteraemia." The grammar is clean on both sides of the cut, so
   nothing flags it; carry the tail, since it is the very clause that makes the entry's point 2.
3. **Glyph:** the paper prints "β-lactams", not "beta-lactams". Trivial, but the string is not literally
   verbatim as the entry renders it.
4. **The entry should not call the 3-day median a "time to renal recovery" without the definition.** The
   paper defines it as "number of days from peak serum creatinine to reduction of 1.5-fold" - a partial
   fall from peak, not restoration of baseline function. The paper's *other* recovery definition
   ("resolution of serum creatinine to baseline or rapid improvement of renal function at time of
   discharge if earlier") drives the 105/106 figure, not the 3 days. Two definitions of one word, and the
   entry leans on the weaker.
5. **The 3-day median's denominator is not printed.** Candidates in the surrounding text and caption are
   106, 112 and 105, with a summariser-reported Table 2 cell of 96/97 that conflicts with the text's
   105/106. If the entry needs an n, it must say "unstated".

Defects in the source itself, worth recording:

6. The Discussion's "typically corrected by a pharmacist within 24 h" overstates a Results figure of 5 of
   11 (MY OWN ARITHMETIC: 45.5%). Under half is not "typically".
7. The AKI stage >=2 subgroup is reported against at least four different denominators across the paper
   (123 presenting, 112 in Figure 1, 106 surviving, 105 in the antimicrobial analysis, and a reported
   96/97 in Table 2) without a reconciliation.
8. No primary or secondary endpoint is declared anywhere.

On method, in my own work: my first "improv" sweep missed occurrences a different prompt had already
surfaced. I therefore re-ran the load-bearing strings ("restor", "escalat") on a dedicated whole-article
sweep. Readers should treat my single-sweep absences as weaker than the double-swept ones.

## ROUTES THAT FAILED

**None.** `https://doi.org/10.1093/jacamr/dlac080` returned one 302 ("Status: 302 Found") to
`https://academic.oup.com/jacamr/article/4/4/dlac080/6649766`, which served the article on the next fetch.
The record's route description is accurate.

Partial refusals, which are read-level limits and not route failures: the summariser twice declined
whole-section verbatim reproduction - "I can't reproduce the Methods section verbatim" and "I can't
reproduce this subsection verbatim" (Results, "Antimicrobial use") - and caps quotation at about 125
characters. I worked around this with ordered consecutive fragments.

The single WebSearch returned PMC and pmc.ncbi.nlm.nih.gov URLs for this article (PMC9311788) plus
unrelated AKI-dosing papers. PMC is hard-blocked here and I did not fetch it; nor did I need it. The
repeated appearance of the same PMC record under several result rows is **one document surfacing several
times, which is a title match and not corroboration.** 1 of 6 fetches went unspent; no sub-claim is
COULD NOT CHECK.

## BEARING ON THE LEDGER ENTRY

**HOLD, with one leg narrowed and the other strengthened.**

The decisive point goes the entry's way, and goes it on the paper's own words rather than on inference.
The time origin for the dose adjustments is the blood culture / bacteraemia date, printed twice - in the
Methods window ("within the first 72 h from blood culturing") and in the suppressed tail of the very
sentence the entry quotes ("within the first 24 h post bacteraemia"). It is not renal recovery. Combined
with the paper's own median of 3 days (IQR 2-5) to even a 1.5-fold fall from peak creatinine, the 24-hour
window closes before most renal recovery begins. So the 5-of-11 counts pharmacist corrections of
inappropriate initial reductions - the paper's verb is "corrected" - and not escalations triggered by
recovering renal function. **It is a different quantity from the candidate's, non-overlapping in both
directions, and the entry's reading of it survives.** That is the strengthening.

The narrowing is sub-claim 3. "It never links the escalation to renal function" should become "it never
links an UPWARD adjustment to renal function recovering", because the Discussion does connect renal
function to dosing twice, and a checker who sweeps only for "escalat" will find nothing while a checker
who reads the Discussion will find "Dose adjustments after 48 h were not recommended if renal function
was improving to baseline at time of review". Those sentences are normative and point the other way -
they withhold a reduction rather than restore a dose - so they do not reopen the candidate reading, but
left unqualified the entry's "never" is a hostage.

On the objection the entry answers with the 3-day median: the number is printed exactly as the entry has
it, in Results under "Impact of AKI on patients' outcomes". But two qualifications must travel with it or
the objection partly reopens. First, scope: it is time from PEAK creatinine to a 1.5-fold REDUCTION, not
time to restored baseline function - the paper reserves a separate and stricter definition for that, and
reports baseline/discharge recovery as 105/106 among survivors with AKI >=2. Second, denominator: none is
printed, and the neighbouring candidates (106, 112, 105, and a reported Table 2 96/97) do not agree. The
entry may use the 3 days to establish that renal recovery typically begins well after the 24-hour window
in which the 5-of-11 happened - that inference is sound and is the one the entry needs. It may not use it
as a measured time to full renal restoration in a stated denominator.

Finally, sub-claim (g): the paper prints **no** share of dose reductions never restored. "restor" and
"never" are both absent on dedicated sweeps. If any part of the entry treats this paper as bounding that
share, strike it - the paper does not measure, bound, predict or announce that quantity; it is silent
past 24 hours.
