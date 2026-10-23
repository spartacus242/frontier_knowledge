# VERIFY - K221183 AEYE-DS precision figures confirmed at the FDA primary; NCT04612868 protocol s9.10 announces the sub-study and prints no result

Checker: fresh context. Budget used: 5 WebFetch (1 refused), 0 WebSearch, plus 1 blocked curl. Date 2026-10-23.

## CLAIM

That a second vendor's clearance summary prints a between-operator overall agreement of 97.73% (43/44)
[88.19%, 99.60%] from three novice operators on two cameras of one model, beside a sensitivity of
92.98% [83.30%, 97.24%] and a specificity of 91.36% [88.22%, 93.72%] in the same file. Related claim:
the pivotal protocol only ANNOUNCES a repeatability sub-study without printing a number.

**Verdict: the claim HOLDS, and it holds at the FDA PRIMARY, not only at the mirror.** The related
protocol claim also holds, and holds more strongly than the entry states. Two incompletenesses are
recorded under DEFECTS; neither touches the figures.

## READ LEVEL

1. **FDA 510(k) summary K221183, AEYE-DS, AEYE Health Inc., decision 2022-11-10 - FULL TEXT at the
   FDA PRIMARY.** `https://www.accessdata.fda.gov/cdrh_docs/pdf22/K221183.pdf` opened on the FIRST
   WebFetch with no redirect and no error. The entry's note that "the FDA primary was not attempted"
   is accurate as a record of the reviewer's read and is now superseded: **the primary costs one
   fetch.** I did NOT use `fda.innolitics.com`. Read across two fetches: pass 1 for the figures,
   pass 2 for ordered consecutive verbatim segments of the Precision Study and Clinical Performance
   Data sections.
2. **NCT04612868 registry record - FULL TEXT** via `https://classic.clinicaltrials.gov/ct2/show/NCT04612868`.
3. **Prot_SAP_000.pdf, "Study Protocol and Statistical Analysis Plan", protocol AEYE-DS-001 v3.4,
   24 November 2021 - PARTIAL: section 9.10 in full, the title page, the table of contents, and
   targeted term sweeps across the whole document.** I did not read sections 1-9.9 or 10-11 in full.
   Reached at `https://cdn.clinicaltrials.gov/large-docs/68/NCT04612868/Prot_SAP_000.pdf`.

Nothing here is COULD NOT READ. Nothing here is an unreached sub-claim: **(a) through (g) were all
reached.** My budget did not run out.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Document identity, from the front matter

K number **K221183**. Trade name **"Aeye-ds"** in the clearance letter and **"AEYE-DS"** in the
Indications for Use and the 510(k) Summary. Applicant **"AEYE Health, Inc."** in the letter and
**"AEYE Health Inc."** in the Summary. The letter's page header reads **November 10, 2022**; its
"Dated" and "Received" fields both read **October 7, 2022**. The document does not label a separate
decision date, so the entry's "decision 2022-11-10" matches the letter header and not a field so
labelled in the file. This is a regulatory clearance summary: it has **no author list, no journal, no
volume, no issue, no pages and no DOI**, and I am not confirming any. The entry's citation does not
assert any, which is correct.

### (c) Each figure at its printed location

All six agreement figures sit in the section headed **"Precision Study"**, in two tables, one for
**"1 image per eye"** and one for **"2 images per eye"**. The table block holding the claimed figure
is headed **"Between - Operator Reproducibility"** (split across lines in the source), with column
headings **"Operator 3," "Operator 1," "Operator 2"** and row labels **"mtmDR +", "mtmDR -",
"Insufficient quality"**.

- Between-operator, 1 image per eye: **"OA 97.73% (43/44) [88.19% ;99.60% ]"** - the claimed figure,
  **verbatim, with its fraction and both interval bounds.**
- Between-operator, 2 images per eye: OA 95.45% (42/44) [84.87% ;98.74% ]
- Between-device, 1 image per eye: OA 98.48% (65/66) [91.90% ;99.73% ]
- Between-device, 2 images per eye: OA 95.45% (63/66) [87.47% ;98.44% ]
- Intra-operator, 1 image per eye: OA 98.48% (130/132) [94.64% ;99.58% ]
- Intra-operator, 2 images per eye: OA 96.97% (128/132) [92.47% ;98.82% ]

Sensitivity and specificity sit in a different section, **"Clinical Performance Data"**. The
narrative primary-endpoint sentence opens **"AEYE-DS correctly identified 53 of the 57 fully
analyzable subjects with mtmDR+, thus the sensitivity was 92.98%"**, and the specificity appears in a
later sentence of the same paragraph. **Sensitivity 92.98% [83.30%; 97.24%]; specificity 91.36%
[88.22%; 93.72%]** - verbatim, both intervals matching the claim. A "Key results" table in the same
section reprints them rounded as **93% [83.3%; 97.2%]** and **91.4% [88.2%; 93.7%]** under the label
"1 image per eye". **The claim's "in the same file" is correct; "in the same table" would not have
been** - two sections, three tables.

Scope-setting opener, as required: the sentence carrying 92.98% opens by restricting its denominator
to **"the 57 fully analyzable subjects with mtmDR+"**. The clause **ASSERTS** the quantity. It does
not hedge it, and the figure is not an upper bound or a projection.

### (d) The design, quoted

**"imaged by three different novice operators, using two different Topcon NW400 fundoscopy devices."**

That is the whole of it: **three operators, novice, two camera units, one model (Topcon NW400)** -
exactly as the claim states, down to the single model. **22 participants** in the final analysis.
"Novice" is defined in the Clinical Performance Data section, not in the Precision Study: **"Novice
operators, who had not previously performed ocular imaging,"** (the sentence continues). Repetition
discipline: **"Per protocol, operators allowed subjects at least 8 minutes between successive imaging"**,
and **"12 image sets/diagnoses were obtained for each participant, for a total of 264 image sets/diagnoses
in total."**

### (e) Unit of analysis and denominator definition

This is the one place the file is thin, and the thinness is the file's, not the claim's. The Precision
Study section **does not define its unit of analysis** as per-participant, per-eye or per-pair, and
**does not say how 44, 66 and 132 are formed.** The only unit noun it offers is **"image sets/diagnoses"**.
Dedicated term sweep, run as a second sweep aimed only at these terms: **"participant level"** is
present, but in the **Clinical Performance Data** section, where the clinical unit is explicit
("at the participant level"); **"image set"** occurs only inside "image sets/diagnoses" in the
Precision Study; **"per-eye"** hyphenated does not occur, the file writing "per eye".

MY OWN ARITHMETIC, labelled as such, not a source finding: 132/22 = 6, 66/22 = 3, 44/22 = 2
comparisons per participant, which is consistent with pair-level rather than participant-level
counting. **The file never says which pairs**, so I am not asserting the reconciliation - the
**numerator class of the 43/44 is undefined in the file**, and I cannot quote exclusions because none
are printed.

### (f) NCT04612868: posted documents and section 9.10

Record: **"Pivotal Prospective Clinical Trial to Demonstrate the Efficacy and Safety of AEYE-DS
Software Device for Automated Diabetic Retinopathy Detection From Digital Fundoscopic Images"**,
sponsor **AEYE Health Inc** (industry). Results ARE posted (first submitted 2023-05-23, first posted
2023-08-01); the primary outcome reports **sensitivity 92.98% (83.3 to 97.24)** and **specificity
91.36% (88.22 to 93.72)** in **462 participants** - independently corroborating the two clinical
figures outside the 510(k) file.

**A protocol IS posted, as one combined document:** label **"Study Protocol and Statistical Analysis
Plan"**, file **Prot_SAP_000.pdf**, dated **2021-11-24**, uploaded 2023-05-23, 1,776,272 bytes. The
record marks protocol and SAP present and the ICF absent. The entry's conditional "if its protocol or
statistical analysis plan is posted" resolves: **both, in one file.**

Section **9.10 "Repeatability & Reproducibility Testing"**, reconstructed from 12 ordered consecutive
segments returned by the summariser, junctions verified, labelled a reconstruction:

> "Adequate validation will be performed and controls implemented to characterize and ensure
> consistency (repeatability and reproducibility) of the diagnostic output. The reproducibility
> (variability between different devices) and repeatability (variability between results from the
> same operator) analysis will be performed in a separate validation sub-study, under a separate
> sub-study protocol, but on subjects who will have participated in the pivotal study. Half of the
> participants will have been diagnosed as mtmDR- based on the original Expert Reader grading and
> half of the participants will have been diagnosed as having mtmDR+. Each participant in the
> sub-study will have completed the entire AEYE-DS imaging protocol 10 times, imaged by three
> different novice operators on two different Topcon NW400 fundoscopy devices. The binary output of
> AEYE-DS will be used to assess repeatability and reproducibility and compute the percent complete
> agreement of the AEYE-DS outputs across repeats, novice operators and fundoscopy devices. Full
> details of the study design and analysis will be provided in the Repeatability and Reproducibility
> Study Protocol."

**PUBLISHED IS NOT PERFORMED, applied: section 9.10 ANNOUNCES.** It prints **no percentage, no count
and no confidence interval.** Every number in it - 10 repeats, three operators, two devices, the
half/half split - is a **design parameter, not a result**. Modality throughout is future
("will be performed", "will be used", "will be provided"): the section **RECORDS A MOVE AWAY** from
reporting the quantity here, deferring it twice over - to a separate sub-study and then to a separate
sub-study protocol. The entry's "ANNOUNCES ... and prints no number" is **exactly right, and sits in
the section number the entry names.**

Dedicated second sweeps, as required before writing any absence: **"precision"** does not occur
anywhere in the protocol. **"97.73"** does not occur; section 11.4's "one-sided 97.5% exact binomial
confidence interval" is the only near string and is a different quantity. **"agreement"** occurs only
in 9.10, as "percent complete agreement". **"repeatab"/"reproducib"** occur only in the table of
contents entry, the 9.10 heading and the 9.10 body. **"operator"** occurs throughout (sections 5, 8,
9.2, 9.2.1, 9.2.2, 9.7, 9.8, 9.9, 9.10, Appendix A), so the operator-handling design is specified at
length while the agreement result is not.

### (g) Intra-operator and test-retest figures

**Yes, the file prints them, and the entry does not mention them.** Intra-operator OA **98.48%
(130/132) [94.64%; 99.58%]** at 1 image per eye and **96.97% (128/132) [92.47%; 98.82%]** at 2 images
per eye, both in the Precision Study section. Between-device figures are printed too (98.48% (65/66)
and 95.45% (63/66)). **The file prints six agreement figures; the entry carries one.**

## REGIME

**510(k) Precision Study, in its own words:** 22 participants, half graded mtmDR+ and half mtmDR- by
the original Expert Reader, each imaged 12 times (264 image sets/diagnoses) by **three novice
operators who "had not previously performed ocular imaging"**, on **two Topcon NW400 units**, with at
least 8 minutes between successive imaging. Instrument: one camera model. Output: the **binary**
mtmDR+/mtmDR- diagnosis, with "Insufficient quality" as a third row. Operating condition: two image
configurations graded separately (1 image per eye, 2 images per eye). Unit: **undefined in the file**,
counted in comparisons (44, 66, 132), not participants.

**510(k) Clinical Performance Data regime:** a different and much larger population - 462
participants in the registry results, 57 of them mtmDR+ and "fully analyzable" - unit explicitly
**"at the participant level"**.

**Does the claim sit inside these regimes?** Yes, and the pairing is internally consistent in a way
worth stating: the claimed 97.73% is the **1-image-per-eye** between-operator row, and the claimed
92.98%/91.36% are the **primary endpoint**, which the registry titles "Based on Two Macula-centered
Images (One Image From Each Eye of the Patient)" - i.e. the same 1-image-per-eye configuration. The
claim did not cross configurations. **But the two numbers come from two different studies with
different populations (22 vs 462) and different units (undefined comparisons vs participants), and
the claim's "beside ... in the same file" is a statement about co-location, not about a common
denominator.** Anyone using this pair as a single operating characteristic would be crossing regimes;
the claim as written does not.

## DEFECTS FOUND

1. **The entry's read-level note is now stale in the direction that matters.** "Read at a MIRROR,
   FDA primary not attempted" was true of the reviewer. The primary opens in **one fetch, no
   redirect, no error, at the URL the entry itself names.** Per the rule that a COULD NOT READ must
   distinguish route failure from an unspent attempt: this was an **unattempted route, not a failed
   one**, and the entry should say so rather than leaving a reader to infer the primary is hard to
   reach. **Every figure in the claim is confirmed at the primary, character for character.**
2. **The entry carries one of six printed agreement figures.** Reporting only the between-operator
   97.73% while the same section prints a **lower** between-operator figure at the other
   configuration (95.45% (42/44)) and two intra-operator figures is a selection a reader cannot see
   from the entry. The 97.73% is **the highest of the two between-operator values.** This does not
   falsify the claim - the claim says "a between-operator overall agreement", not "the" - but an
   entry resting a method-family argument on this file should carry the set.
3. **The 43/44's numerator class and denominator are undefined in the source.** The file prints the
   fractions without defining the comparison unit. **A CLSI-style agreement claim needs that
   definition**, and it is not in this file. Per the rule on near-neighbour denominators: I cannot
   write out what this numerator class misses or includes in either direction, **because the source
   does not state the class.** That is an absence in the source, reported as such, not a derivation.
4. **A protocol/summary discrepancy in the repeat count, which I flag and do not resolve.** Protocol
   s9.10 plans **"the entire AEYE-DS imaging protocol 10 times"**; the cleared 510(k) summary reports
   **"12 image sets/diagnoses ... for each participant, for a total of 264"**. Ten planned, twelve
   reported. The sub-study protocol that would reconcile this - the **"Repeatability and
   Reproducibility Study Protocol"** that 9.10 defers to - is **a document I did not open and cannot
   confirm exists in public.** Naming the kind that could settle it, as required: **it is the right
   kind** (a sub-study protocol defining the comparison unit and the repeat schedule), and it would
   also be the document that defines the 44/66/132 denominators. **It is a nomination I cannot
   justify by having seen it listed anywhere: call it a guess as to availability, not a lead.**
5. **An internal inconsistency in the 510(k) file itself, unrelated to the claim but worth the
   entry's margin:** the Clinical narrative labels the secondary endpoint **"four images (one macula
   centered image and one optic disc"** per eye, while the Key results table labels the same figures
   **"2 images per eye"**. The registry's secondary outcome title confirms the narrative's reading
   ("Four Images (One Macula Centered Image and One Optic Disc Centered Image Per Eye)"), so **the
   table's "2 images per eye" label means two images per eye, i.e. four per patient.** The claimed
   97.73% is from the **"1 image per eye"** table, which is unaffected by this ambiguity.

**No defect found in any figure, interval, fraction, operator count, camera count or camera model in
the claim. Nothing in the claim is overstated relative to the primary.**

## ROUTES THAT FAILED

- `https://www.accessdata.fda.gov/cdrh_docs/pdf22/K221183.pdf` - **did not fail.** First try, full text.
- `https://clinicaltrials.gov/study/NCT04612868` (WebFetch) - **served a JS shell**, no record content.
  Summariser returned: "The page content you provided doesn't include the study record". Not a block.
- `https://clinicaltrials.gov/api/v2/studies/NCT04612868` (WebFetch) - refused: **"failed at its site
  (robots_disallowed), and nothing of the page was retrieved."** A robots policy, not a host block.
- `clinicaltrials.gov` v2 API via curl - **"CONNECT tunnel failed, response 403"**, exit 56; proxy
  reported `connect_rejected`. I did **not** route around this, did not disable TLS and did not touch
  HTTPS_PROXY.
- `https://classic.clinicaltrials.gov/ct2/show/NCT04612868` - **worked**, full record including the
  posted-documents block.
- `https://cdn.clinicaltrials.gov/large-docs/68/NCT04612868/Prot_SAP_000.pdf` - **worked** on the
  first try, giving s9.10 in full.
- `fda.innolitics.com` - **deliberately not fetched.** The point of this check was the primary.

## BEARING ON THE LEDGER ENTRY

**HOLD, and strengthen the provenance line.** The claim is confirmed at the FDA primary: 97.73%
(43/44) [88.19%, 99.60%] between-operator from three novice operators on two Topcon NW400 units, in
the "Precision Study" section, beside sensitivity 92.98% [83.30%, 97.24%] and specificity 91.36%
[88.22%, 93.72%] in the "Clinical Performance Data" section of the same file. **Strike
"FDA primary not attempted" and replace it with the primary URL and a one-fetch note**, so no later
reader re-spends the call or discounts the figures as mirror-only.

**The prior that makes attack 2 a method-family kill survives, and its second leg is now opened, not
assumed.** The entry said attack 2 would survive via this file plus a CLSI standard. Both halves of
the stated basis are now confirmed documents rather than nominations: the 510(k) prints the
between-operator agreement, and **NCT04612868's posted "Study Protocol and Statistical Analysis Plan"
(Prot_SAP_000.pdf, AEYE-DS-001 v3.4, 2021-11-24) s9.10 "Repeatability & Reproducibility Testing"
ANNOUNCES the sub-study in future modality and prints no agreement number at all.** The related claim
is confirmed at the exact section the entry names.

**Two narrowings the entry should absorb, neither of which reverses anything:**

- **Narrow the entry's "one figure" framing to the printed set.** The file prints six OA values, two
  of them intra-operator (sub-claim (g): yes, 98.48% (130/132) and 96.97% (128/132)) and two
  between-device. An entry arguing that this vendor *did* characterise repeatability should say the
  file prints **intra-operator agreement too**, since that is the stronger version of the same point
  and it currently sits outside the entry.
- **Convert the denominator question into a promotion condition.** Any step from "this file prints
  97.73% (43/44)" to a CLSI-graded claim about between-operator reproducibility needs the comparison
  unit defined, and **this file does not define it.** Promotion condition: open the
  "Repeatability and Reproducibility Study Protocol" that s9.10 defers to, or any FDA review
  memorandum that defines the 44/66/132 denominators. Until then the entry should carry the
  fractions as the file prints them and **not characterise the unit of analysis**, because the source
  is silent there and silence is not a per-pair reading.

**Instancing, per the existence-claim rule.** The premise behind the method-family framing is an
existence claim: that a second vendor's clearance summary prints a between-operator agreement figure.
**TRUE OVER THE INSTANCE I OPENED** - K221183 prints it, quoted above. I opened **one** vendor file.
I did **not** open any other vendor's 510(k) summary, so any entry sentence of the form "vendors
generally print this" or "no other vendor prints this" is **UNENUMERATED from my read** in either
direction, and should not be written from this check.
