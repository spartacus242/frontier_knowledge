# VERIFY — Withers (2001), CSIRO ZO00057, and the RQ flow-error cancellation claim

Checker run: fresh context, 2026-10-22. Query budget: 6 searches / 5 fetches. Used: 4 searches, 5 fetches
(fetch cap reached — recorded, not worked around). No mcp__hearthbot__ tool called. No personal identifier
placed in any URL, query string, header or form; Unpaywall not used.

## CLAIM

Handed claim (algebraic): in flow-through respirometry, VO2 and VCO2 are each computed as a flow rate
(corrected to STP) multiplied by a concentration difference; because RQ is the RATIO of the two, a
multiplicative error in the STP-corrected flow term cancels to first order and therefore does not move the
computed RQ, while it does move each rate.

Sub-claims as handed:
(a) what equations does Withers (2001) print for VO2 and VCO2, and do both carry the same flow term;
(b) does Withers (2001) itself say RQ is insensitive to / independent of flow-rate calibration error, or the
    contrary;
(c) do the printed equations differ by push/pull mode, or by water-vapour / CO2 scrubbing, in a way that
    breaks the cancellation;
(d) separately: confirm the AARC 2004 CPG window 0.67–1.3 at section 9.1.2 verbatim and its location, and
    report whether the guideline says what an out-of-range value INDICATES.

## READ LEVEL

**Withers (2001): ABSTRACT ONLY.** The publisher page opens and serves the title, journal, volume(issue),
pages, year, DOI, copyright line and the full abstract. It offers **no free full-text or PDF link**. The
printed equations are in the paywalled body and I did not read them. This is ABSTRACT ONLY — it is neither
NOT FOUND (the paper exists and the publisher record opens) nor COULD NOT READ (the abstract read fine).

**AARC CPG 2004: FULL TEXT.** The guideline PDF is open at aarc.org and was read twice (front matter,
section 9, and a whole-document sweep for every RQ / 0.67 / 1.3 / "physiologic range" occurrence).

**Secondary, clearly labelled as NOT the source:** the UCR WartHog / LabAnalyst "RESPIROMETRY VO2" help page,
read in full. It is a software help file, not a peer-reviewed source, and it does **not** cite Withers (2001);
it cites Withers (1977).

## WHAT THE SOURCE SAYS (quotations as served)

### 1. Withers (2001) — front matter, as served

Taken from the publisher's own record, with the route for each field named, because the fields were not all
served from one place:

- Title (publisher abstract page, verbatim): "Design, calibration and calculation for flow-through
  respirometry systems"
- Journal / volume(issue) / pages / year (publisher abstract page): Australian Journal of Zoology, 49(4),
  445–461, 2001. Copyright line as served: "© CSIRO 2001".
- DOI: 10.1071/ZO00057. "ZO00057" — the only identifier the ledger entry gave — is CSIRO Publishing's
  article ID, i.e. the DOI suffix, not a separate record.
- Author, as served by https://www.publish.csiro.au/ZO/ExportCitation/ZO00057: **"Withers P. C."**
  The ExportCitation record gives volume 49 with **no issue number**; the issue (4) comes from the abstract
  page header.

**Front-matter defect, flagged rather than filled:** the abstract page as served to this reader carried **no
author byline and no affiliation line**, and no received/accepted dates. The author's initials above are
therefore from the publisher's citation-export record, **not from the article's printed front matter**, and
the affiliation is unknown to me. I attach no guess (I have not written "Philip C. Withers" or a university)
because nothing I read printed it.

### 2. Withers (2001) — abstract

**RECONSTRUCTION from 11 ordered consecutive fragments** requested under the ~125-character quotation cap,
assembled only from consecutive returns. Two defects in the serving are flagged, not corrected:

> "Flow-through respirometry systems that measure oxygen consumption (VO2), carbon dioxide production (VCO2)
> and evaporative water loss (EWL) require the accurate calibration of the flow meter and three separate
> analysers (O2, CO2 and H2O vapour). Correct measurement of VO2, VCO2 and EWL depends on the incurrent air
> flow (VI) and its condition (e.g. dry, CO2-free), and the excurrent air flow (VE) and its condition
> (e.g. dry, CO2-free), which can differ in different parts of the excurrent circuit. Usually either VI or VE
> is measured and the other is calculated from the gas composition. I describe here a procedure for precise
> calibration of CO2 and H2O analysers in a flow-through respirometry system by reference to a calibrated O2
> analyser, using a small gas flame. Generic equations are derived for calculation of VO2, VO2 [sic — see
> flag] and EWL with a variety of configurations for a flow-through respirometry system. Procedures for
> selection of data from continuous records of VO2, VCO2 and EWL for calculation of minimal (basal or
> standard) values are briefly described. Finally, the importance of the correct order of data treatment
> prior to calculation is described."

Flags on the reconstruction:
- **Junction S5/S6.** The first segmentation returned an overlapping/duplicated pair at the "…either VI or VE
  is measured and the other is calculated from the gas composition…" junction and then self-corrected it. The
  assembly above uses the corrected non-overlapping pair, and the junction is verified by the overlap word
  "other". The duplication is a serving artefact, reported because the junction is load-bearing for sub-claim
  (c).
- **"VO2, VO2 and EWL"** in the sentence "Generic equations are derived for calculation of VO2, VO2 and EWL".
  Reproduced **as served**. Either the served abstract or the segmenter has "VO2" where "VCO2" is expected.
  I have not silently corrected it and I do not know which. Everywhere else the abstract pairs VO2 with VCO2.
- Dot-V notation (V̇O2 etc.) is flattened to "VO2" in the served text; subscripts are flattened likewise.

**Sub-claim (a) — what Withers prints for VO2 and VCO2: COULD NOT READ.** The abstract **ANNOUNCES** the
equations ("Generic equations are derived for calculation of VO2, VO2 and EWL with a variety of
configurations") and does **not print any of them**. I can therefore name no equation, no flow symbol and no
STP factor from this source, and I cannot say whether its VO2 and VCO2 expressions carry the same flow term.
Published-is-not-performed distinction, applied to my own read: the paper plainly **DERIVES** the equations;
what I have is the announcement of the derivation, not the derivation.

**Sub-claim (b) — does Withers state RQ is insensitive to flow calibration error: COULD NOT READ, and the
abstract is silent.** The strings "RQ", "respiratory quotient" and "quotient" do **not occur anywhere in the
abstract as served**, in either direction. I checked the words themselves before asking what they support.
The abstract's silence is not a statement, and it is not evidence that the body is silent. Note for the
ledger: the paper's announced subject matter is calibration, configuration-specific calculation, data
selection and order of operations — an explicit insensitivity statement about RQ is **not among the things the
abstract says the paper does**, so even on a successful full-text read the prospect of a direct quotation
settling (b) is uncertain.

**Sub-claim (c) — configuration dependence: the abstract itself asserts it, in the source's own words, while
saying nothing about cancellation.** Three served statements bear directly:
1. "Correct measurement of VO2, VCO2 and EWL depends on the incurrent air flow (VI) and its condition
   (e.g. dry, CO2-free), and the excurrent air flow (VE) and its condition (e.g. dry, CO2-free)" — so the
   paper's own framing makes the computation depend on **which** flow and on its drying / CO2-free condition,
   i.e. exactly the scrubbing variable (c) asks about.
2. "which can differ in different parts of the excurrent circuit" — the flow is **not one number** across the
   circuit.
3. "Usually either VI or VE is measured and the other is calculated from the gas composition" — in the usual
   case **only one flow is measured** and the other is a derived quantity.
The abstract does **not** use the words "push" or "pull". It says equations vary "with a variety of
configurations" but names no configuration and states no consequence for RQ.

### 3. AARC CPG 2004 — sub-claim (d), CONFIRMED

Front matter as served: "AARC Clinical Practice Guideline: Metabolic Measurement Using Indirect Calorimetry
During Mechanical Ventilation, 2004 Revision & Update", *Respiratory Care*, September 2004, Vol 49, No 9,
pp. 1073–1079. Section numbering is decimal with the prefix "MMMV" (e.g. "MMMV 9.0"), subsections 9.1, 9.1.1,
9.1.2…

Location and window, **confirmed verbatim**:

- MMMV 9.0 heading: "ASSESSMENT OF TEST QUALITY AND OUTCOME:"
- MMMV 9.1: "Test quality can be evaluated by determining whether"
- MMMV **9.1.2**: **"RQ rests in the normal physiologic range (0.67 to 1.3)"** — followed by superscript
  citations **1-5**.
- MMMV 9.1.1: "RQ is consistent with the patient's nutritional intake" (superscript 1-5)
- MMMV 9.1.3: "Variability of the measurements for yO2 and yCO2 should be ≤ 5% for a 5-minute data collecton"
  (superscript 72-75)
- MMMV 9.1.4: "The measurement is of sufficient length to account for variability in yO2 and yCO2" / "if the
  conditions in 9.1.3 are not met" (superscript 72-75)
- MMMV 9.2: "Outcome may be assessed by comparing the measurement results with the patient's condition"
  [and nutritional intake]
- MMMV 9.3: "Outcome may be assessed by observation of the patient prior to and during the measurement"

Served-text damage, reproduced not corrected: **"yO2" / "yCO2"** throughout are the dotted-V symbols (V̇O2,
V̇CO2) with the glyph lost; **"collecton"** for "collection" in 9.1.3; **"opencircuit"** for "open circuit" in
10.2. The guideline prints **"1.3"**, not "1.30".

**Does the guideline say what an out-of-range value INDICATES? No.** 9.1.2 states the range as one of the
things by which "Test quality can be evaluated" (9.1) and **states no meaning, cause or action for a value
outside it**. Nothing elsewhere in the document supplies one. The full-document sweep found every other RQ
occurrence, and none of them is a diagnostic rule for an out-of-range RQ:

- MMMV 1.0: "carbon dioxide production (yCO2), respiratory quotient (RQ), and resting energy expenditure
  (REE) as" [part of the procedure description]
- MMMV 2.0: "The measurements of yO2 and yCO2 are used to calculate RQ (yCO2/yO2) and REE using the Weir
  equation:" (superscript 13)
- 2.2: "To accurately determine RQ to allow nutritional regimens to be tailored to patient needs" (14-44)
- 2.3: "To accurately determine REE and RQ to" / "monitor the adequacy and appropriateness of current
  nutritional support" (14-44)
- 7.1: "Accurate assessment of REE and RQ may not be possible" (60-63) / "because of patient condition or
  certain bedside procedures or activities."
- 7.2: "Inaccurate measurement of REE and RQ may be caused by leaks of gas from the patient/ventilator
  system" — then 7.2.1 "Leaks in the ventilator circuit", 7.2.2 "Leaks around tracheal tube cuffs or
  uncuffed tubes", 7.2.3 "Leaks through chest tubes or bronchopleural fistula"
- 7.3: "Inaccurate measurement of REE and RQ occurs during peritoneal and hemodialysis due to removal across
  the membrane"
- 7.4 / 7.5: "Inaccurate measurement of REE and RQ during open circuit measurement may be caused by" / "…
  during closed circuit measurement may be caused by" — including 7.4.1 "Instability of delivered oxygen
  concentration (FIO2) within a breath or breath to breath", 7.4.2 "FIO2 > 0.60", 7.4.6 "Inappropriate
  calibration", 7.4.9 "Internal leaks within the calorimeter", 7.5.3 "Leaks drawing gas into the system
  during spontaneous breathing measurements"
- 10.4.3: "Recognize metabolic measurement values within the normal physiologic range" / "evaluate the
  results in light of the patient's current nutritional and clinical status"
- 10.6: "If a stable FIO2 cannot be achieved, yCO2 may be used to estimate REE by assuming an RQ of 0.83"
  (superscript 81); 10.6.1 "Underestimation of 25% for RQ of 1.2"; 10.6.2 "Overestimation of 19% for RQ of
  0.67"
- 11.1: "The following should be evaluated during the performance of a metabolic measurement to ascertain the
  validity of the results"; **11.1.5: "Results within the specifications listed in 9.1.3 or 9.1.4"**;
  11.1.3 "Values in concert with the clinical situation"; 11.2 "Measurement data should include a statement of
  test quality and list the current nutritional support"

Two structural facts about the guideline that matter more than the number itself:
- The direction of inference in the document runs **from named error sources to inaccurate RQ** (section 7:
  leaks, FIO2 instability, dialysis, inappropriate calibration → "Inaccurate measurement of REE and RQ").
  It **never runs backwards**, from an out-of-range RQ to an identified error class.
- The document's own **validity** checklist, 11.1, cites only **"9.1.3 or 9.1.4"** (the ≤5% variability and
  duration criteria) at 11.1.5. It does **not** cite 9.1.2. So the 0.67–1.3 window appears in the
  test-quality list but is not picked up in the section that says what makes results valid.
- "0.67" is also the value at which 10.6.2 states a 19% overestimation for the assumed-RQ-0.83 VCO2-only
  method — i.e. the same number is used there as the low extreme of the plausible range, not as a flag.
- 9.1.2 carries citations **1-5**: within this document the window is **attributed**, not derived. The
  guideline is a **GUIDELINE** (a consensus clinical practice guideline with an evidence reference list), not
  a primary study, and it reports the window as received.

### 4. Secondary structure, labelled: UCR WartHog / LabAnalyst help page

Read only because Withers' own equations were unreadable, and reported here as **secondary and not as
Withers (2001)**. Its own attribution, verbatim: "Equations used for computing exchange rates are derived in
part from" / "Depocas and Hart (1957; *J. Appl. Physiol.* 10:388-392)," / "Hill (1972, *J. Appl. Physiol.*
33:261-263) and Withers" / "(1977, *J. Appl. Physiol.* 42:120-123); others I derived myself." — i.e. it cites
**Withers 1977**, a different paper, and some equations are the page author's own.

Symbols as defined there: "FR = flow rate, V = exchange rate for the gas in question"; "STP = factor for
converting to standard conditions"; "Fi = input fractional concentration, Fe = excurrent fractional
concentration"; "RQ = respiratory quotient".

VO2 forms as served (a selection, verbatim):
- CO2 and water scrubbed, flowmeter upstream: "VO2 = STP * (FiO2 - FeO2) * FR / (1 - FeO2)"
- CO2 and water scrubbed, flowmeter downstream: "VO2 = STP * (FiO2 - FeO2) * FR / (1 - FiO2)"
- constant-RQ, flowmeter upstream, CO2 not removed: "VO2 = STP * (FiO2 - FeO2) * FR / (1 - FeO2 * (1 - RQ))"
- from VCO2, flowmeter upstream, CO2 not removed:
  "VO2 = STP * ((FiO2 - FeO2) * FR - FeO2* VCO2) / (1 - FeO2)"
- from %CO2, flowmeter downstream, CO2 not removed:
  "VO2 = STP * FR * ((FiO2 - FeO2) - FiO2 * (FeCO2 - FiCO2))/ (1 - FiO2)"

The page distinguishes **upstream vs downstream flowmeter placement**, not "push vs pull" in those words; it
requires water vapour removal for accurate calculation; and it says that if STP has already been applied to
the flow data, temperature and pressure should be set to 0 °C and 760 torr. It gives **no VCO2 equations** —
those are on a separate page I had no fetch left to open — so the structure of the CO2 channel is unread here
too.

## REGIME

**Withers (2001).** Animal flow-through (open-flow) respirometry. Population: animals in a chamber or mask
system. Unit of analysis: the gas-exchange rate of one animal computed from a continuous analyser record.
Endpoints: VO2, VCO2, EWL, and "minimal (basal or standard) values" selected from continuous records.
Instruments: a flow meter plus three analysers (O2, CO2, H2O vapour). Operating conditions enumerated by the
source itself: incurrent vs excurrent flow measurement, dry vs undried, CO2-free vs not, and "a variety of
configurations". There is no patient, no ventilator, no RQ threshold and no validity window in this regime.

**AARC 2004.** Critically ill **human** patients on **mechanical ventilation**; unit of analysis: one bedside
metabolic measurement; endpoints REE and RQ; comparator: the patient's nutritional intake and clinical
condition; instrument: an indirect calorimeter, open or closed circuit, with FIO2 ≤ 0.60 as a stated
limitation. 0.67–1.3 is a **test-quality screen on a clinical measurement**, printed under a heading about
assessing test quality, and attributed to five references.

**The handed claim's regime.** The cancellation claim needs an equation set in which both channels are the
**same** STP-corrected flow multiplied by a concentration function of analyser readings only. The Withers
abstract says, in the source's own words, that the usual case is that **only one flow is measured and the
other is calculated from the gas composition**, and that the flow "can differ in different parts of the
excurrent circuit" — so the premise "both carry the same flow term" is the thing in question, not a given,
and the source's own abstract puts configuration dependence at the centre. Whether it holds in Withers'
printed equations sits **inside a regime I could not read**.

## DEFECTS FOUND

1. **ABSTRACT ONLY is being asked to carry an equation-level claim.** Sub-claims (a) and (c) ask what
   equations the source prints; the source's abstract **ANNOUNCES** generic equations and prints none. Any
   ledger statement of the form "Withers (2001) prints VO2 and VCO2 with a shared flow term" is at present
   unsourced from this check.
2. **"Source is silent" must not be written for (b).** The abstract contains no instance of "RQ" or
   "respiratory quotient", in either direction. That is silence **of the abstract**, not of the paper.
   COULD NOT READ on the body; do not merge the two.
3. **Front matter is incomplete and partly off-record.** No author byline or affiliation was served on the
   publisher's abstract page; the author string "Withers P. C." comes from the publisher's citation-export
   record. Issue number 49(4) appears on the abstract page and is absent from the export. No received or
   accepted dates. No fuller name or affiliation is asserted here.
4. **Two serving defects inside the abstract, flagged not corrected:** the duplicated/overlapping fragment at
   the "either VI or VE is measured" junction, and **"VO2, VO2 and EWL"** where VCO2 is expected. The abstract
   above is a **reconstruction from 11 fragments**, not a single served block.
5. **"Cancels to first order" is the wrong strength for the structure the claim describes.** If both channels
   are literally the same multiplicative STP-corrected flow times a concentration function that does not
   itself depend on flow, the factor cancels **exactly** in the ratio, not merely to first order — the ratio
   is homogeneous of degree zero in the flow. "To first order" would be the right hedge only if the flow term
   also entered the dilution denominators or the concentration terms. The claim as written therefore
   understates its own algebra in the clean case and does not identify the cases where the structure fails.
6. **The failure modes the claim does not name.** Reading the secondary's printed forms (my algebra on
   *its* equations, not Withers'): the invariance survives the mode where VO2 is computed *from* VCO2, because
   that VCO2 was itself computed from the same FR, so the whole expression stays degree-one in FR. It does
   **not** survive two situations the printed equations expose: (i) the **constant-RQ modes**, where RQ is an
   *assumed input* inside the VO2 denominator and no RQ is computed at all, so there is nothing for the error
   to cancel in; and (ii) any case where the two channels do **not** share one flow number — which is exactly
   the case the Withers abstract flags when it says the flow "can differ in different parts of the excurrent
   circuit". Non-steady-state records, where measured concentrations depend on the washout time constant and
   hence on flow, would also break the degree-zero homogeneity; **nothing I read states this**, and I flag it
   as unverified rather than asserting it.
7. **(d) is confirmed on the number and the location and REFUTED on the inference.** The window and the
   section are exactly as cited: MMMV 9.1.2, "RQ rests in the normal physiologic range (0.67 to 1.3)". The
   guideline **says nothing about what an out-of-range value indicates**. Any ledger sentence that treats the
   AARC window as an error-identifying test is adding a direction of inference the guideline does not print.
   The guideline's own inference runs the other way (section 7: named error sources → inaccurate RQ), and its
   validity checklist at 11.1.5 cites only 9.1.3/9.1.4, **not** 9.1.2.
8. **Attribution within the guideline.** 9.1.2 carries superscripts 1-5: the window is received there, not
   established there. The guideline is a guideline, not a primary study, and no source I opened states the
   derivation of 0.67 or of 1.3.
9. **The secondary is not the source and does not cite it.** The UCR help page cites **Withers 1977**, not
   Withers 2001, and attributes some equations to the page author. It must not be rolled into "Withers (2001)"
   in the ledger. Its VCO2 equations were not read at all.
10. **Served-text damage in the guideline**, reproduced not corrected: "yO2"/"yCO2" for V̇O2/V̇CO2,
    "collecton", "opencircuit". The guideline prints "1.3", not the "1.30" the ledger entry's canonical
    question uses.

## ROUTES THAT FAILED

- **No open full text of Withers (2001) at any route reached.** The publisher abstract page
  (https://publish.csiro.au/zo/ZO00057) opens and **offers no free full-text or PDF link**; it served only
  the DOI and the copyright line. Two targeted searches for a full-text copy (one on title/journal/pages +
  equation vocabulary, one on the DOI and article ID with filetype:pdf) surfaced **no full-text route** —
  only the same publisher record, its ExportCitation page, its Crossref-cites page, and unrelated works.
- **Publisher abstract page did not serve the author byline or affiliation** to this reader; recovered the
  author string from https://www.publish.csiro.au/ZO/ExportCitation/ZO00057 instead.
- **Fetch cap (5 of 5) reached** before any further full-text route could be attempted. Per instruction this
  is recorded and I stopped rather than working around it. Not attempted, and deliberately so:
  PubMed Central and Europe PMC (hard-blocked per the routing brief), Unpaywall (barred — it would require
  supplying a contact address), and any constructed publisher full-text path.
- **Nothing was refused.** No 403, 404, 429 or CAPTCHA occurred in this run. The Withers gap is a paywall
  with no open route found, not a blocked host.
- **The secondary's VCO2 page was not opened** (no fetch left), so the CO2-channel equation structure is
  unread even in the secondary.

## BEARING ON THE LEDGER ENTRY

Bearing on UQ-20261022-01, which names Withers (2001) / ZO00057 as the unopened source most likely to settle
unmeasured ground (3) — the generator's cancellation derivation that drives limb (ii)'s demotion and the
first half of attack 8.

1. **The source exists, is correctly identified, and its front matter is now on the record.** Withers P. C.
   (2001), "Design, calibration and calculation for flow-through respirometry systems", *Australian Journal
   of Zoology* 49(4):445–461, doi 10.1071/ZO00057. "ZO00057" is the DOI suffix / CSIRO article ID. The entry
   may stop describing it by that bare code. No author affiliation or fuller name is on the record; do not
   add one.
2. **Ground (3) remains UNVERIFIED IN BOTH DIRECTIONS, and the reason has changed.** It is no longer "nobody
   opened it": the record now opens, at abstract level, and the abstract **neither states nor contradicts** the
   cancellation. The honest status is ABSTRACT ONLY with the equations unread — which is **not** the same as
   the three adversaries' "declined to source it". The entry should carry the distinction.
3. **The abstract moves one thing against the derivation's premise.** The source's own abstract says the usual
   flow-through case is that **one flow is measured and the other calculated from the gas composition**, and
   that flow "can differ in different parts of the excurrent circuit", with equations varying by configuration
   and by whether air is dry and CO2-free. So "both rates are linear in STP-corrected flow" — adversary 1's
   one-paragraph triviality argument, and the record's own derivation — is a statement about **a subset of
   configurations**, and the source most likely to settle it is the source that most insists configuration
   matters. The entry's triviality rebuttal ("not a page for every mode") survives this check; the
   derivation's unqualified form does not.
4. **The cancellation, where it holds, holds EXACTLY, not to first order.** That strengthens limb (ii)'s
   demotion in the clean shared-flow modes and does nothing for it outside them. Where it fails is
   identifiable without reading Withers: in constant-RQ modes RQ is an **input**, so no RQ is computed and
   the question does not arise; where the two channels do not share one flow number the homogeneity argument
   is simply unavailable. The entry should record cancellation as **conditional on a shared-flow,
   steady-state, degree-one structure** and should stop treating it as a property of flow-through
   respirometry as such.
5. **(d) changes the content of limb (ii) directly, and against the entry's use of it.** The 0.67–1.30 arm is
   confirmed as a real clinical window at the cited location — MMMV 9.1.2, "RQ rests in the normal physiologic
   range (0.67 to 1.3)", *Respir Care* 2004;49(9):1073–1079 — but the guideline **does not say what a value
   outside it indicates**, its validity checklist does not cite 9.1.2 at all, and its only RQ inference runs
   from named error sources to inaccurate RQ, never backwards. So the clinical window supports the entry's
   **feasibility arm** (a declared range) and supplies **no support whatever** for limb (ii)'s premise that an
   infeasible RQ identifies error classes. On present evidence limb (ii) has no instrument-reference backing
   in either source: Withers because unread, AARC because it declines to make the inference.
6. **Regime caution for any future use.** The AARC window is a quality screen on ventilated human patients;
   Withers is animal chamber respirometry. Carrying 0.67–1.3 across to an animal corpus is a regime transfer
   the AARC document is silent about — silence outside its assumptions, not support.
7. **The remaining settling move is cheap and specific.** One full-text read of Withers 49(4):445–461 — the
   equation section — would settle (a) and (c) by naming the printed flow symbol in each of VO2 and VCO2 per
   configuration, and would settle (b) by a string search for "quotient". No open route to that full text was
   found in this run; it needs library or interlibrary access, not another proxy attempt.
