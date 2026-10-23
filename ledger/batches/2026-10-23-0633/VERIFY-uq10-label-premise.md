# VERIFY - UQ-20261023-10 limb (c)'s document-kind premise: five product labels opened; premise INSTANCED on three, half-met on one, failed on one, and the "pre-declared drug list" turns out never to have been enumerated

Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

The premise behind limb (c), as the entry carries it (entry line 5, Question canonical): the cohort is
"restricted to a pre-declared drug list whose labels state a renal dose threshold and a single full dose
per indication (titrated drugs excluded by pre-declared rule)". P3 (entry line 8) records this as
"UNVERIFIED as a document-kind premise: ZERO product labels or SmPCs were opened by the record or by
either adversary", and both adversaries read the clause as an existence claim restricting a list rather
than a universal over labels. Limb (c) alone depends on it: the labelled full dose is that limb's
denominator.

So the test is to INSTANCE it. I opened real labels and classify below.

**ZEROTH FINDING, BEFORE THE LABELS, AND IT IS THE ONE THAT MATTERS MOST.** My task was to read the entry
"for the pre-declared list, and pick from it". **There is no list in the entry.** I ran three sweeps
(labelled MY OWN GREPS, not a source finding), honouring the rule that one keyword sweep's silence is not
absence:

- Sweep 1, broad: 40 candidate drug names across all four UQ-10 files (entry, record, adversary-1,
  adversary-2). Returns, with counts: vancomycin 8, ceftolozane 5, enoxaparin 2, allopurinol 2,
  metformin 1, meropenem 1, dabigatran 1, apixaban 1. Nothing else.
- Sweep 2, targeted at the phrase: `(pre-?declared|intended|candidate|study|index)[ -]drug[ -]?(list|set|classes)?` →
  11 hits across the four files.
- Sweep 3, aimed only at "drug list" with context printed: all 11 hits are the *phrase* being used or
  being flagged as unverified. **Not one is followed by an enumeration of drugs.**

Every drug name in the record is there as an example of something else: vancomycin as the TDM/titrated
exemplar (i.e. a drug the pre-declared rule *excludes*), allopurinol as Boussadi's rule-table example,
ceftolozane because the Rodriguez-Reyes abstract is about it, apixaban/dabigatran/enoxaparin inside
adversary #1's Disguise 6 query string. So "pre-declared" is at present an **announcement of a list, not
a declaration of one**, and I picked from the drugs the entry names rather than from a list it supplies.
This is a defect of a different kind from the one P3 records, and neither adversary recorded it:
adversary #1 (line 43) and adversary #2 (line 73) both tested whether labels *can* satisfy the clause,
and neither asked whether the list the clause restricts to exists.

## READ LEVEL

**PARTIAL on all five documents, by section, every one through WebFetch's summariser and none as raw
HTML.** I read: the page header / Highlights front matter (revision date, labeler), Section 2 Dosage and
Administration with its renal-impairment subsection and tables, and for Eliquis also Section 8.6. These
are the sections the claim is about. I did **not** read any label end to end, and I cannot certify
characters the summariser did not return; quotations below are **as served**, under the ~120-character cap
I requested per item.

Four of the five pages carried a coverage note: "this page's text is NNN characters long and the answer
above covers only characters 0 to 100000" — Zerbaxa (110,487 chars; final 10,487 unread), Zosyn (102,395;
final 2,395 unread), meropenem (110,349; final 10,349 unread), Eliquis (108,605; final 8,605 unread). The
dosing sections sit early in an FDA label, so the unread tails are the package/ingredient/NDC blocks, but
I state the gap rather than claim a full read. The Fresenius piperacillin/tazobactam page returned no
coverage note.

**ROUTES THAT FAILED: NONE.** No fetch was refused, no 403, no proxy error, no TLS problem, no search
classifier refusal. **I did not stop because a route failed; I stopped because the budget was exactly
exhausted** (2/2 searches, 6/6 fetches).

**What the spent budget cost, stated as a spent budget and not as an absence:** I opened **US FDA-format
labels only**. No EU SmPC (EMA product-information PDF) and no UK SmPC (medicines.org.uk) was opened,
because locating either needs a search and both searches went to DailyMed. SmPCs have a different layout
(section 4.2 Posology) and I make **no claim whatever** about what they contain. On SmPCs the premise is
**UNENUMERATED**, which is not a negative finding.

## WHAT THE SOURCE SAYS (quotations as served)

Sub-claim (b) first, with a caveat the schema forces: **product labels have no author list, journal,
volume, issue, pages or DOI.** Asking for them of this document kind is a category error, and I will not
manufacture fields. The front-matter equivalents are: issuing authority, labeler/packager, revision date,
and the SPL set id, all of which I took from the page header and Highlights and none of which I took from
a short form someone else wrote. Issuing authority for all five: **US Food and Drug Administration**
(FDA-approved prescribing information), hosted by the **US National Library of Medicine, DailyMed**.

---

### LABEL 1 - ZERBAXA (ceftolozane and tazobactam) for injection

Labeler/packager "Merck Sharp & Dohme LLC". "Revised: 5/2026". DailyMed "Updated May 12, 2026". No
version number shown. SPL set id 70ac1d90-eff3-4f0b-9f46-5846c571b32f.

**(i) Renal dose threshold.** Section 2.3: "The recommended dosage of ZERBAXA in adult patients with
renal impairment is based on CrCl as described in Table 3." Table 3's measure-and-units column head reads
**"Estimated CrCl (mL/min)"**, with bands "51 to less than 90", "30 to 50", "15 to 29", and "Less than 15
(not receiving intermittent hemodialysis)". Table 3 footnote: **"Estimated CrCl using the Cockcroft-Gault
formula"**. So the full dose runs down to CrCl 51 and reduction begins at CrCl 50: the threshold is a
single well-defined number in mL/min.

**(ii) Full dose per indication.** Section 2.1 Table 1, as served: cIAI "ZERBAXA 1.5 g" | "Every 8 Hours"
| "1 hour" | "4 to 14 days"; cUTI "ZERBAXA 1.5 g" | "Every 8 Hours" | "1 hour" | "7 days"; HABP/VABP
"ZERBAXA 3 g" | "Every 8 Hours" | "1 hour" | "8 to 14 days". Section 2.1 text: "The recommended dosage of
ZERBAXA in adult patients is 1.5 gram (g)" for cIAI and cUTI, and "3 g (ceftolozane 2 g and tazobactam 1
g) for HABP/VABP administered every 8 hours".

**SINGLE VALUE or RANGE: SINGLE VALUE.** No dose on this label is a range. The ranges on the label are
**durations** ("4 to 14 days"), not doses - a cut that dropped the word "days" would manufacture a dose
range out of a course length, so I flag it.
**DIFFERS BY INDICATION: YES**, 1.5 g q8h for cIAI/cUTI against 3 g q8h for HABP/VABP, and Table 3 carries
the two indication groups as separate columns all the way down the CrCl bands.

### LABEL 2 - ZOSYN (piperacillin and tazobactam) injection

Labeler "Baxter Healthcare Corporation". "Revised: 5/2026" (printed M/YYYY, not MM/YYYY). SPL set id
8db6bd91-2106-4bfd-8cc8-38aaf1e18d17.

**(i) Renal dose threshold.** Section 2.4 Table 1, column header **"Creatinine clearance, mL/min"**;
Section 2.4 text, **"creatinine clearance less than or equal to 40 mL/min"**. Bands as served: "Greater
than 40 mL/min", "20 mL/min to 40 mL/min", "Less than 20 mL/min", plus Hemodialysis and CAPD rows. Table
1 footnote: "Creatinine clearance for patients not receiving hemodialysis". **No estimating equation is
named anywhere on this label** - not Cockcroft-Gault, not any other.

**(ii) Full dose per indication.** Section 2.2, adults, all indications except nosocomial pneumonia:
"3.375 g every six hours", totalling 13.5 g per day. Section 2.3, nosocomial pneumonia: "4.5 g every six
hours plus an aminoglycoside", totalling 18 g per day.

**SINGLE VALUE or RANGE: SINGLE VALUE** for each of the two adult indication groups.
**DIFFERS BY INDICATION: YES**, 3.375 g q6h against 4.5 g q6h, and Table 1 prints the two as separate
columns across every CrCl band. Paediatric dosing is weight-based (90 mg/kg, 112.5 mg/kg) and the label
states paediatric dosing in renal impairment "has not been determined" - so the premise holds on the
adult arm and is **silent, not satisfied,** on the paediatric arm.

### LABEL 3 - PIPERACILLIN AND TAZOBACTAM for injection (generic)

Labeler "Fresenius Kabi USA, LLC". "Revised: 6/2015". DailyMed "Updated October 16, 2024". SPL set id
e53ebafc-3afa-4a1e-9313-fecd1c1c5d7c.

I spent the sixth fetch on a *second labeler's label for the same molecule*, because limb (c) needs "the
labelled full dose" to have **one** referent per drug, and nothing in the entry says which labeler's
label. Result: **the two labels agree, exactly, eleven years apart.**

**(i)** "renal impairment (creatinine clearance ≤ 40 mL/min)"; Section 2.3 Table 1 rows as served: ">40
mL/min 3.375 q6h 4.5 q6h", "20-40 mL/min* 2.25 q6h 3.375 q6h", "<20 mL/min* 2.25 q8h 2.25 q6h",
"Hemodialysis** 2.25 q12h 2.25 q8h", "CAPD 2.25 q12h 2.25 q8h". Footnote: "*Creatinine clearance for
patients not receiving hemodialysis". Highlights: "(≤40 mL/min of CRCL)". No equation named.

**(ii)** Section 2.1: "3.375 g every six hours totaling 13.5 g (12.0 g piperacillin/1.5 g tazobactam)";
Section 2.2, nosocomial pneumonia: "4.5 g every six hours plus an aminoglycoside, totaling 18.0 g (16.0 g
piperacillin/2.0 g tazobactam)".

**SINGLE VALUE; DIFFERS BY INDICATION: YES.** Concordant with Label 2 on the threshold (40 mL/min) and on
both full doses.

### LABEL 4 - MEROPENEM for injection

Labeler/packager "Xellia Pharmaceuticals USA LLC". "Revised: 4/2021". DailyMed "Updated July 10, 2024".
SPL set id 06d84c55-94ff-46e5-8477-b8881c12eb0a.

**(i) Renal dose threshold.** Section 2.2 Table 1, column header **"Creatinine Clearance (mL/min)"**,
bands "Greater than 50", "26 to 50", "10 to 25", "Less than 10". Renal-measure sentence, with its
scope-setting opener intact: **"When only serum creatinine is available"** is followed by "the following
formula (Cockcroft and Gault equation)". **What the opener scopes:** a *fallback*, for the case where a
measured or otherwise-available CrCl is absent. The clause does not assert that the threshold is defined
on an estimate; it RECORDS A MOVE to an estimate in one circumstance.

**(ii) Full dose per indication.** Section 2.1: complicated skin and skin structure infections (cSSSI)
"500 mg given every 8 hours"; complicated intra-abdominal infections "1 gram given every 8 hours for
intra-abdominal infections". Paediatric Table 2 as served: "Complicated skin and skin structure
infections | 10 | 500 mg | Every 8 hours", "Complicated intra-abdominal infections | 20 | 1 gram | Every
8 hours", "Meningitis | 40 | 2 grams | Every 8 hours". Adult meningitis dosing is not given; meningitis is
limited to "Pediatric Patients 3 Months of Age and Older Only".

**And the sentence that breaks uniqueness.** Section 2.1, for cSSSI: **"For *P. aeruginosa*, a dose of 1
gram every 8 hours is recommended"**. **What the opening words scope:** a *pathogen*, inside an
indication that already has a stated full dose. The clause **ASSERTS** a second full dose for the same
indication. So for cSSSI the full dose is 500 mg q8h **or** 1 g q8h - a 2x ambiguity conditioned on
organism, not on indication.

**SINGLE VALUE or RANGE:** each printed figure is a single value and the label prints **no** range such
as "500 mg to 2 g" - but **the full dose for cSSSI is not unique**, so "single value" and "unique
referent" come apart here. **DIFFERS BY INDICATION: YES**, and *within* one indication by pathogen.

**Second peculiarity, and it cuts the other way.** Table 1's renal rows express the reduced dose
**relatively**, not absolutely: "Greater than 50 | Recommended dose (500 mg cSSSI and 1 gram
Intra-abdominal) | Every 8 hours", then "26 to 50 | Recommended dose | Every 12 hours", "10 to 25 | One-half
recommended dose | Every 12 hours", "Less than 10 | One-half recommended dose | Every 24 hours". Two
consequences, pointing opposite ways: (1) the table *does* resolve the full dose per indication in the
">50" row - but it prints only the two non-pathogen-qualified values and omits the *P. aeruginosa* 1 g
variant, so the table's own resolution is incomplete; (2) "One-half recommended dose" makes the full dose
the **explicit named referent** of the reduction, which *helps* limb (c): on this label a reduced dose is
definitionally a fraction of the full dose.

### LABEL 5 - ELIQUIS (apixaban) tablets

Labeler/packager "E.R. Squibb & Sons, L.L.C.". "Revised: 4/2025". DailyMed "Updated April 17, 2025". SPL
set id e9481622-7cc6-418a-acb6-c5450daae9b0. (DailyMed returns ten ELIQUIS labels; nine are repackagers.
I opened the NDA holder's.)

I opened this one because the entry claims, as audience (3) at line 15, "anticoagulation and AF services,
for whom DOAC under-dosing is already a quality measure", and because adversary #1's Disguise 6 names
apixaban. It is the counter-instance.

**(i) Renal dose threshold - THERE IS NONE FOR ADULT DOSING.** Section 2.1, nonvalvular AF: the reduced
dose is "2.5 mg twice daily in patients with at least two of the following characteristics", the
characteristics being "age greater than or equal to 80 years", "body weight less than or equal to 60 kg",
and **"serum creatinine greater than or equal to 1.5 mg/dL"**.

**LOGICAL FORM, which is where this premise actually fails.** This is a **2-of-3 threshold rule over a
disjunctive set**. Serum creatinine ≥1.5 mg/dL is **neither necessary nor sufficient**: age ≥80 plus
weight ≤60 kg triggers the reduction with normal renal function, and a serum creatinine of 3 mg/dL alone
triggers nothing. **UNITS: mg/dL of serum creatinine, not mL/min of clearance.** **INEQUALITY DIRECTION:**
the trigger is a creatinine **ceiling** (≥1.5), and creatinine rises as function falls - the opposite sign
to the entry's clearance **floor**. The entry's recovery clock is "clearance returning above that same
label threshold": on this label **there is no clearance threshold to return above.**

Section 8.6, other indications: **"No dose adjustment is recommended for patients with renal impairment,
including those with ESRD on dialysis."** Section 8.6 also notes the trials "did not enroll patients with
ESRD on dialysis or patients with a CrCl <15 mL/min" - that CrCl figure is an **enrollment exclusion, not
a dosing threshold**, and quoting it as a renal dose threshold would be the exact misuse this ledger keeps
catching. The only clearance-style threshold on the label is paediatric: eGFR <30 mL/min/1.73 m², which
does not govern adult dosing.

**(ii) Full dose per indication - NOT A SINGLE VALUE FOR ONE INDICATION.** AF: "The recommended dose of
ELIQUIS for most patients is 5 mg taken orally twice daily." DVT/PE treatment: **"10 mg taken orally twice
daily for the first 7 days of therapy. After 7 days, the recommended dose is 5 mg taken orally twice
daily."** Recurrence reduction: "2.5 mg taken orally twice daily after at least 6 months of treatment for
DVT or PE." Hip/knee prophylaxis: "2.5 mg taken orally twice daily. The initial dose should be taken 12 to
24 hours after surgery."

**SINGLE VALUE or RANGE:** single values, but **time-varying** - DVT/PE treatment has two full doses
within one indication depending on day of therapy, so "the labelled full dose" has two referents there.
**DIFFERS BY INDICATION: YES**, four indications and four different regimens.

## REGIME

The regime of a product label, in its own terms, is unlike a study's and has to be stated or the
quotations float.

- **Unit of analysis:** the licensed product-indication pair, not a patient and not an episode. "Full
  dose" is a *recommendation* printed for a population, not a dose anyone received.
- **Population:** for all five, adults within the approved indications; paediatric arms are separate and,
  for Zosyn/Fresenius, explicitly undetermined in renal impairment.
- **Operating condition and instrument:** creatinine clearance in mL/min for Labels 1-4; serum creatinine
  in mg/dL inside a 2-of-3 rule for Label 5. **Equation named: Zerbaxa yes and unconditionally
  ("Estimated CrCl using the Cockcroft-Gault formula"); meropenem conditionally and as a fallback ("When
  only serum creatinine is available"); Zosyn and Fresenius not at all; Eliquis not applicable.**
- **Threshold:** CrCl 50 (Zerbaxa, first reduction at ≤50), CrCl 40 (Zosyn, Fresenius), CrCl 50
  (meropenem, interval change at 26-50), none in clearance (Eliquis adults).
- **Jurisdiction: United States, FDA format, all five.** The entry's clause says "labels or summaries of
  product characteristics". **I instanced the label half of that disjunction only.**

**Does the claim sit inside this regime?** For Labels 1-3, yes: the clause asks what the document prints,
and these documents print it. For Label 5, the claim sits **outside** - and note what follows: Eliquis is
**excluded from the pre-declared list by the list's own rule**, since it states no renal dose threshold.
That is a scoping finding about the entry's reach, not a falsification of its existence claim.

## DEFECTS FOUND

**(d) ENUMERATION, as the rule requires. Labels opened: 5. Classification: INSTANCED.**

The premise is **TRUE OVER THE INSTANCES I OPENED** on three of five:

1. **ZERBAXA (ceftolozane/tazobactam), Merck Sharp & Dohme, rev. 5/2026** - threshold "Estimated CrCl
   (mL/min)" with first reduction at 30-50; full dose 1.5 g q8h (cIAI, cUTI) and 3 g q8h (HABP/VABP),
   single values, differing by indication. **Satisfies both halves.**
2. **ZOSYN (piperacillin/tazobactam), Baxter, rev. 5/2026** - threshold "creatinine clearance less than or
   equal to 40 mL/min"; full dose 3.375 g q6h, and 4.5 g q6h for nosocomial pneumonia. **Satisfies both
   halves** (adult arm).
3. **PIPERACILLIN AND TAZOBACTAM, Fresenius Kabi, rev. 6/2015** - "(creatinine clearance ≤ 40 mL/min)";
   3.375 g q6h and 4.5 g q6h. **Satisfies both halves, and is concordant with (2) across labelers.**

Half-met, one:

4. **MEROPENEM, Xellia, rev. 4/2021** - threshold half satisfied ("Creatinine Clearance (mL/min)", >50 /
   26-50 / 10-25 / <10). Unique-full-dose half **not** satisfied for cSSSI: 500 mg q8h, and "For *P.
   aeruginosa*, a dose of 1 gram every 8 hours is recommended". Satisfied for intra-abdominal infection
   (1 g q8h).

Failed, one:

5. **ELIQUIS (apixaban), E.R. Squibb & Sons, rev. 4/2025** - **no adult renal dose threshold in
   clearance at all**; the trigger is serum creatinine ≥1.5 mg/dL inside a 2-of-3 rule, and Section 8.6
   says "No dose adjustment is recommended for patients with renal impairment" for the non-AF indications.
   Full dose also time-varying for DVT/PE (10 mg BID for 7 days, then 5 mg BID).

**I write no universal in either direction.** On US FDA labels the premise is instanced. On SmPCs it is
**unenumerated** - I opened none. Across the US label population as a whole it is unenumerated: five
labels is five labels.

**(e) Labels where the renal threshold is stated but a unique full dose is not - the case that breaks
limb (c)'s denominator.** One, squarely: **meropenem**. The threshold is printed in mL/min and the full
dose for cSSSI is pathogen-conditional (500 mg q8h, or 1 g q8h for *P. aeruginosa*), and Table 1's ">50"
row resolves only the two unqualified values and omits the *P. aeruginosa* variant. An episode of cSSSI
administered 500 mg q8h at a recovered clearance would be scored as a 50% exposure deficit if the
denominator is read as 1 g, and as fully restored if it is read as 500 mg. **Eliquis belongs in a separate
cell, not this one:** there the *threshold* is the missing element, and separately the full dose for
DVT/PE is non-unique over time. Both are conditioning dimensions - **pathogen**, and **day of therapy** -
that the entry's exclusion rule does not mention; it excludes **titration** only.

**Three further defects, each labelled for what it is:**

- **The list does not exist** (MY OWN GREPS, three sweeps, reported above - not a source finding). "Restricted
  to a pre-declared drug list" is unenumerated in the entry, the record and both adversary logs. This is
  not the label premise failing; it is a different and more basic gap, and it is the one that actually
  touches the 3/3 well-posedness grade on limb (c).
- **The entry's named audience is excluded by its own rule.** Audience (3) is anticoagulation and AF
  services; apixaban's label states no renal clearance threshold, so the pre-declared rule cannot admit
  it. Significance claim and inclusion rule are in tension on the one DOAC label I opened. (This is my own
  inference *from* the quoted label text, and I mark it as such; the quotation is the finding, the tension
  is my reading.)
- **A correction owed to the record.** Entry line 36 flags "adversary #2's claim that label thresholds are
  themselves defined on an estimated clearance is its own recollection, with zero labels opened". Over
  five labels that recollection is: **true and explicit on one** (Zerbaxa, "Estimated CrCl using the
  Cockcroft-Gault formula"); **true only as a scoped fallback on one** (meropenem, "When only serum
  creatinine is available"); **unstated on two** (Zosyn and Fresenius name "creatinine clearance" and no
  equation); **inapplicable on one** (Eliquis). So the Gate-1 wording repair at line 33 - "measured
  clearance" should read "estimated clearance" - is right in direction but too flat as written; it should
  read "estimated creatinine clearance (Cockcroft-Gault where the label specifies an equation)", because
  two of five labels specify none.

## ROUTES THAT FAILED

**None.** Every call returned. No CONNECT 403, no TLS failure, no doi.org 429, no classifier refusal. For
the record, the routes that worked, so nobody rediscovers them: **DailyMed `drugInfo.cfm?setid=...` serves
the full label through WebFetch in one call**, `fda/fdaDrugXsl.cfm?setid=...` also works, and
`search.cfm?labeltype=all&query=<name>` returns the setid list when you have no search budget left for a
drug - that is how I reached Eliquis having spent both searches on DailyMed.

The only read limitation is the summariser's 100,000-character coverage ceiling on four of five pages,
with the unread tails being the package/NDC blocks (noted under READ LEVEL). That is a partial read, **not
a failed route.**

**(f) Fraction of the pre-declared list checked.** **This cannot be expressed as a fraction, because the
list is not enumerated** - there is no denominator to divide by, which is itself the finding. Against the
drugs the entry names anywhere: **checked** ceftolozane/tazobactam, piperacillin/tazobactam (two labels),
meropenem, apixaban - 4 molecules, 5 labels. **Not reached:** vancomycin (named most often in the record,
but as the TDM exemplar, so excluded by the entry's own titration rule), allopurinol (likewise titrated;
Boussadi's example), enoxaparin, dabigatran, metformin, and quinolones as a class ("quinolones where
used", from Hughes). **Not reached at all: every SmPC** - no EMA product-information PDF and no
medicines.org.uk entry, on spent budget.

## BEARING ON THE LEDGER ENTRY

**HOLDS, and NARROWS - but it moves the defect rather than removing it.**

**P3 (entry line 8) must be rewritten.** "UNVERIFIED as a document-kind premise: ZERO product labels or
SmPCs were opened by the record or by either adversary" is no longer true of this ledger. Five labels are
now open and the premise is **INSTANCED**: three of five satisfy both halves, and two of those three are
different labelers' labels for the same molecule printing identical thresholds and identical full doses
eleven years apart. The adversaries' shared reading - that the clause is an existence claim restricting a
list - is **vindicated on opened documents**: such labels exist, and I can name three.

**So the label premise stops being a live objection, and limb (c)'s residual defect relocates to two
narrower, more specific places:**

1. **The list is unenumerated.** Limb (c) restricts to a list the entry never writes down. The repair is
   concrete and cheap: enumerate it. On what I opened, ceftolozane/tazobactam and piperacillin/tazobactam
   can go on it as written; meropenem needs a pathogen clause or an indication split; apixaban cannot go
   on it at all.
2. **The exclusion rule is one-dimensional.** "Titrated drugs excluded by pre-declared rule" handles
   vancomycin-style TDM dosing and nothing else. Two further conditioning dimensions appeared in five
   labels: **pathogen** (meropenem cSSSI, 500 mg vs 1 g) and **day of therapy** (apixaban DVT/PE, 10 mg
   BID for 7 days then 5 mg BID). Each gives "the labelled full dose" more than one referent inside a
   single indication, which is exactly the failure mode the premise was supposed to rule out.

**Effect on the scores.** Entry line 33 keeps well-posedness at 3/3 while conceding "three agents have now
left zero labels opened, so limb (c)'s denominator is unverified at the document-kind level". That
particular concession is now **discharged** - the denominator is verified at the document-kind level on
three labels. But the same line's 3/3 rested on the list being "pre-declared", and it is not declared
anywhere, so I would record **one new well-posedness defect on limb (c)** of the same repairable kind as
the two the entry already lists (enumerate the list; widen the exclusion rule to pathogen- and
phase-conditional dosing). Three one-sentence repairs rather than two. Whether that still reads as 3/3 is
the grader's call, not mine; I note that none of the three changes a limb.

**Effect on the verdict: none.** Entry line 34 is explicit that the Provisional "rests on the unopened
OFID paper alone" and that "the unverified label premise affects only limb (c) and both adversaries read
the clause as an existence claim rather than a universal, [so it] kills nothing". My check **confirms that
scoping judgement from the documents rather than from the shape of the clause**, and it closes the second
of the two items under "Promotion requires" at line 35 ("plus two label or SmPC fetches from the
pre-declared list to settle limb (c)'s denominator") - with the caveat that I settled it on **US labels**
and not on SmPCs, and with the new list-enumeration repair attached. The OFID 2024 fetch
(10.1093/ofid/ofae059) remains undone and remains the whole of the block to Validated.

**One thing I am not saying.** I am not saying labels generally print a single full dose per indication. I
opened five, in one jurisdiction, in one format, chosen because the entry names those molecules. Two of
the five complicate the premise in ways nobody on this entry had seen, which is a fair indication that a
larger sample would complicate it further.
