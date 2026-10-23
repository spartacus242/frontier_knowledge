# VERIFY - K213037 (IDx-DR v2.3) does NOT contain the quoted string; but it describes no precision study
Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

UQ-20261023-09 carries, as its own counter-instance to its kill, the claim that one
FDA-cleared autonomous diagnostic device's clearance summary **states**
'Repeatability or reproducibility study: None described', and that therefore for that
device the candidate's quantity is a COVERAGE GAP rather than a measured one. The entry
records the claim as opened by NEITHER adversary. The cited source is:
FDA 510(k) summary K213037, IDx-DR v2.3, Digital Diagnostics.

The claim has two separable legs, and they do not stand or fall together:

- **L1 (quotation leg):** the summary states that exact string.
- **L2 (substantive leg):** no repeatability/reproducibility study is described for this device,
  so the quantity is a coverage gap for it.

**L1 is REFUTED. L2 is TRUE OVER THE INSTANCE I OPENED**, with a scope correction that
matters (see REGIME and DEFECTS).

## READ LEVEL

- **FDA primary PDF, https://www.accessdata.fda.gov/cdrh_docs/pdf21/K213037.pdf — FULL TEXT.**
  Opened on the first fetch at the route the entry's own citation names. No route failed.
  Three passes: (i) a broad front-matter/performance pass, (ii) a dedicated term-by-term
  sweep (the second sweep the ledger rules require before writing that a term is absent),
  (iii) a located-quotation pass for the near-miss sentence and the Usability paragraph.
- **FDA 510(k) database record page,
  https://www.accessdata.fda.gov/scripts/cdrh/cfdocs/cfpmn/pmn.cfm?ID=K213037 — FULL TEXT**
  (field table). Opened first try.
- **Mirror, https://fda.innolitics.com/device/K213037 — FULL TEXT.** Opened first try.
  Read only to test whether the quoted string originates in the mirror's field rendering
  rather than in the FDA document. It does not.
- Budget was **not** exhausted: 1 fetch and 1 search remained unspent. Nothing below is a
  budget-driven absence.
- **Not read:** DEN180001 (the De Novo decision summary for the original IDx-DR). See
  BEARING for why that is a nomination by kind and not a finding.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Document identity, from the front matter

This is a regulatory submission summary, not a journal article, so several of the requested
bibliographic fields do not exist for it. I say which rather than inventing them.

- 510(k) number: **K213037**
- Device trade name: **IDx-DR v2.3**
- Applicant: **Digital Diagnostics, Inc.**, 2300 Oakdale Blvd., Coralville, IA 52241
  (applicant contact as printed: Ashley Miller)
- Correspondent: Kelliann Payne, Hogan Lovells US LLP, 1735 Market St., Floor 23,
  Philadelphia, PA 19103
- Date 510(k) Summary prepared: **June 14, 2022**
- Date received: **09/21/2021** (database record). The PDF's own letter text gave a
  May 17, 2022 received date for the amended submission; the database record's
  09/21/2021 is the original receipt. Both are printed; they are different fields.
- **Decision date: 06/17/2022**; Decision: **Substantially Equivalent (SESE)**
- Regulation **21 CFR 886.1100**, Class II, product code **PIB**,
  classification name "Diabetic Retinopathy Detection Device", review panel Ophthalmic
- Predicate: IDx-DR v2.0
- **Author list: none.** A 510(k) summary carries no authors, no journal, no volume,
  no issue, no pages and no DOI. The responsible party in the front matter is the
  applicant firm, Digital Diagnostics, Inc., with the named contact above. Any citation
  that gives this document authors, a venue or a DOI has invented them.
- Indications for Use, verbatim (assembled from three consecutive returned segments;
  **labelled a reconstruction**, junction verified): "IDx-DR is indicated for use by
  healthcare providers to automatically detect more than mild diabetic retinopathy" /
  "(mtmDR) in adults diagnosed with diabetes who have not been previously diagnosed with
  diabetic retinopathy." / "IDx-DR is indicated for use with the Topcon NW400."

### (c) The quoted string: REFUTED

**'Repeatability or reproducibility study: None described' does not appear in K213037.**

- It is absent from the FDA primary PDF. There is no heading, field or sentence of that
  form anywhere in the document.
- The sub-string **"None described" is itself ABSENT** from the document, on a dedicated
  sweep aimed only at it. So the claim fails even at the level of its most distinctive
  three-word fragment, which is the part that does the work.
- The document's headings, in printed order, are: Submitter; Device; Device Description;
  Indications for Use; Predicate Device; Purpose of Submission; Comparison of Technological
  Characteristics with the Predicate Device; Performance Data; Conclusions. Section VIII
  (Performance Data) has exactly two subsections, **"A. Summary of Non-clinical Studies"**
  (with one further heading, **"Usability"**) and **"B. Summary of Clinical Performance
  Testing"**. There is no precision, repeatability or reproducibility heading to carry
  such a line, and no structured field-and-value template of the
  "<study type>: None described" shape anywhere in the file.
- **The actual wording is: there is none.** The document does not use a formula to record
  the absence; it simply does not raise the topic. That is a different fact from the one
  the entry attributes to it, and the difference is the whole of L1.
- **The mirror is not the string's source either.** fda.innolitics.com/device/K213037
  carries no field labelled "Repeatability or reproducibility study" and no "None
  described" value; its non-clinical rendering lists software documentation, hazard
  analysis, cybersecurity and a "Usability" subsection, matching the FDA text. So the
  quotation cannot be excused as a mirror artefact the writer mistook for FDA text.
- One targeted search for the exact phrase pairing returned **no FDA summary carrying it**
  — only unrelated repeatability/reproducibility documents (two ASTM listings of the same
  standard F1469 under different year suffixes, a ClinicalTrials.gov study, a vendor PDF).
  Per the ledger's rule I count that as **title matches and not corroboration**, and I
  record it as a failed locate, not as proof the string exists nowhere: a single search's
  silence is not absence. **The honest status of the string is: not in the cited document,
  and not located in any document.**
- **Logical form of the string as the entry uses it.** Even on the counterfactual that it
  were printed, "None described" is a statement about the **description** in a submission
  summary. It is a **necessary-condition-style record of documentary silence**, not a
  **sufficient** ground for "no precision was measured". Reading it as the latter is the
  necessary-read-as-sufficient error. Its modality is reportorial, not evaluative; it is
  not a disjunction. The use the entry makes of it — "so for that device the candidate's
  quantity is a COVERAGE GAP rather than a measured one" — survives this reading **only in
  the weaker, documentary sense**: a gap in the public record, not an established absence
  of measurement.

### (d) Dedicated sweeps for each adjacent term

Run term by term, each as its own search rather than as one broad pass:

| term | result in K213037 |
|---|---|
| repeatab- (repeatability / repeatable) | **ABSENT** |
| reproducib- (reproducibility / reproducible) | **ABSENT** |
| precision | **ABSENT** |
| variability | **ABSENT** |
| re-acquisition / reacquisition / recapture / repeat imaging | **ABSENT as such** (see near-miss below) |
| test-retest | ABSENT |
| agreement | ABSENT as a noun; only "agreeing"/"disagreeing" in Tables 5 and 6, which are imputation tables |
| consistency | ABSENT; only "a consistent medically relevant framework" |
| operator | **PRESENT**, three times (quoted below) |

**The one near-miss on re-acquisition, located and scoped.** In **Section VII, "Comparison
of Technological Characteristics with the Predicate Device," under the "IDx-DR Client"
bullet**, the document says the client was "Updated to provide clear language of 'exam
completed' after repeated imaging attempts have resulted in" / "an insufficient image
quality output." **What the opening words scope:** this clause is inside a list of
*changes made to the subject device relative to the predicate*, and the thing being
changed is **the wording the client displays**. The clause therefore **neither asserts nor
denies** any repeatability quantity; it **records a user-interface modification**. It
establishes only that re-imaging happens in the workflow — which, if anything, is a reason
a precision study would have been informative, not evidence that one was done. The
companion sentences are "The result output and report will remain unchanged, indicating
exam quality was insufficient" / "and a diagnostic result is not provided.", and Table 1
lists "Insufficient image quality" as one of three device outputs.

**Operator, all three occurrences, with their section.** All sit under **VIII.A, heading
"Usability"**, except the third which is in the risk-analysis text of VIII.A:
"The results of the usability validation study indicated that no existing critical tasks
were impacted" / "by the modification and no new critical tasks were introduced, and
demonstrated that previously untrained" / "camera operators could capture four retinal
images of sufficient quality following the imaging protocol" / "and using the indicated
camera system and standardized training and operating materials." (reconstruction from
four consecutive segments, junctions verified); "The purpose of the usability validation
test plan was to demonstrate that the intended image capture workflow" / "and training
methodology can successfully be used by the intended operators to capture four retinal
images."; and "Risks related to failure of various software components and their potential
impact on patient reports and operator failures were also adequately addressed in the risk
analysis."

**This is the closest the document comes to operator variability, and it is not it.** The
usability study's stated endpoint is **task success** — whether untrained operators *can*
capture four images of sufficient quality — not **between-operator agreement of the
device's referral decision**. It is a pass/fail human-factors validation. **PUBLISHED IS
NOT PERFORMED, and here not even published:** the document **announces** that usability
validation occurred and states its conclusion qualitatively; **it prints no number for it**
— no operator count, no success rate, no denominator. So for operator variability the
document **ANNOUNCES a qualitative result**, and for repeatability/reproducibility/precision
it is **silent**.

The named non-clinical content of VIII.A, for completeness, is the eleven-item software
documentation list ("1. Software/Firmware Description" ... "11. Cybersecurity"), software
verification and validation "at the unit, integration, and system level", a risk analysis,
a cybersecurity assessment, technical parameter characterization including image quality
and algorithm descriptions, an algorithm change protocol, and the usability validation.
**No bench, precision or reproducibility testing is named.**

### (e) Accuracy figures, with numerator class, denominator and reference standard

Printed in **VIII.B, Table 3**, for IDx-DR v2.3 on final-submission images:

- **Sensitivity 87.69% (171/195), 95% CI 82.24%-91.95%**
- **Specificity 90.07% (553/614), 95% CI 87.42%-92.32%**

Predicate IDx-DR v2.0, same table: sensitivity **87.37% (173/198)**, specificity
**89.53% (556/621)**.

Imputation sensitivity analyses, **Tables 5 and 6**: worst case sensitivity **84.24%**,
specificity **85.47%**; best case sensitivity **88.18%**, specificity **90.57%**.

**Numerator class and denominator, checked against the near neighbours they are not.**
The Table 3 denominators are **participants diagnosable by both the subject device and the
predicate**, on final-submission images. That is an **analyzable-subset** accuracy. It
therefore **EXCLUDES** participants whose images returned "Insufficient image quality" —
i.e. exactly the population in which re-acquisition and operator variability bite. In the
other direction, it **INCLUDES** participants who were diagnosable only because the
predicate was also able to read them, which is a co-conditioning the claim's notion of
"the device's accuracy" does not contain. The near neighbours it is not: an
intention-to-screen accuracy over all enrolled participants (not printed as the primary
figure — the imputation tables are the document's gesture at it), and a per-eye rather
than per-participant accuracy (the unit here is the **participant**, not the eye or the
image). Anyone reading 87.69% as "the device's sensitivity in screening" has crossed a
denominator.

**Reference standard.** The document refers only to "the clinical reference standard" and
"the reference standard" of the predicate's pivotal study, cited to Abramoff et al. 2018,
and **does not define it in the summary**. I do not supply a definition from memory; to
get the reference standard's construction you must go to the cited 2018 paper, which I did
not open here.

**Study design, and this is material.** VIII.B states: "A retrospective study was conducted
to validate the clinical performance of the modified IDx-DR" and "Data previously collected
from the pivotal study of the predicate" were used. So the clinical evidence for v2.3 is a
**re-analysis of the predicate's already-collected images**, not fresh acquisition. **MY OWN
REASONING, NOT A SOURCE FINDING:** a study that re-runs a new algorithm version over a
fixed image set **cannot** measure acquisition-side repeatability even in principle, because
the images are held constant; what varies is only the software. What would have grounded
this as a finding is a protocol or statistical analysis plan for the v2.3 validation, which
I did not open. I flag it as an argument about study structure, not as something the
document asserts.

### (f) Primary vs mirror

**I read the FDA primary.** The verdict on the quoted string rests on
accessdata.fda.gov/cdrh_docs/pdf21/K213037.pdf (the summary PDF) and on the FDA 510(k)
database record page. The Innolitics mirror was opened **only** as a hypothesis test about
where the string came from, and it agreed with the primary. Nothing in this note depends on
the mirror. Had I relied on it, the limits would be real: a mirror re-renders FDA fields
and can normalise or drop headings, and this one visibly garbles text ("retimopathy" for
"retinopathy" in its Indications rendering), so it is unfit for a verbatim-string verdict.

## REGIME

**The regime of K213037, in its own words.** Population: "adults diagnosed with diabetes
who have not been previously diagnosed with diabetic retinopathy". Unit of analysis: the
**participant**, restricted in Table 3 to those "diagnosable by both devices". Instrument:
"IDx-DR is indicated for use with the Topcon NW400" — a single named camera. Operating
condition: four retinal images captured by a trained-but-not-experienced operator per the
imaging protocol; three-way output (mtmDR detected / not detected / insufficient image
quality). Category: Class II retinal diagnostic software, 21 CFR 886.1100, cleared
substantially equivalent to IDx-DR v2.0 on **retrospective re-analysis of the predicate's
pivotal images**.

**Does the claim sit inside it?** L2 does: it is a claim about what this document describes,
and I read the document. **But the entry's framing sits partly outside it in a way the entry
should state.** This is a **510(k) summary** — a statutorily brief public summary of a
submission, whose contents are selected by the applicant under 21 CFR 807.92. It is **not**
a decision summary and not a review memorandum. Silence in a document of this kind is weak
evidence about what was submitted or reviewed, and near-zero evidence about what was
performed. The entry's own words, "clearance summary **states**", claim an affirmative FDA
record of absence; what exists is an applicant-selected summary that does not raise the
subject. Those are different epistemic objects.

**Instancing the universal/existence structure, as the rules require.** The entry's
counter-instance is an **existence claim**: that at least one cleared device in the class has
no precision study at all. Instances I opened: **one** — K213037. Instances I did not open:
DEN180001 (original IDx-DR De Novo), K221183/other IDx-DR or Digital Diagnostics clearances,
EyeArt (K200667 and successors), AEYE-DS, and every other device in product code PIB. So the
existence claim, as a claim about *descriptions in clearance summaries*, is **TRUE OVER THE
ONE INSTANCE I OPENED**: K213037's summary describes no repeatability, reproducibility or
precision study, on dedicated per-term sweeps. As a claim about the **class** — about what
cleared autonomous diagnostic devices generally do or do not report — it is
**UNENUMERATED**, and I write no universal in either direction from one document.

## DEFECTS FOUND

1. **The verbatim quotation does not exist in the cited document.** Not the full string, not
   the heading, not the three-word fragment "None described". The entry attributes to K213037
   a sentence K213037 does not contain, and the mirror does not contain it either. This is
   the single most serious defect available in this ledger, because a quotation is the one
   thing a reader cannot check without opening the file — and the entry presents it as the
   document's own words with "states".
2. **The string is not located in any document.** My one search found no FDA summary carrying
   it. I do not claim it exists nowhere (one search's silence is not absence), but no one
   should carry it as a quotation until it is located. Until then its status is
   **unsourced**, and it should not be repaired by reattribution to a guessed document.
3. **Documentary silence presented as an FDA finding of absence.** Even granting the string,
   "None described" records that nothing was described, which is a fact about the summary.
   The entry's "rather than a measured one" converts that into a fact about measurement.
   Necessary read as sufficient; published-is-not-performed run backwards.
4. **Wrong document kind for the weight placed on it.** A 21 CFR 807.92 510(k) summary is
   applicant-selected and brief. Its silence cannot bear "no precision study at all",
   because precision data can be in a submission without reaching the summary.
5. **The nearest real content was not distinguished from the claim.** The document does carry
   a usability validation touching operators and image capture, and a UI change about
   "repeated imaging attempts". Neither is a precision study, but an entry that writes
   "nothing at all" without naming them is reporting a sweep it did not run; and an entry
   that counted the usability study as precision would be a different error in the other
   direction. Both are avoided only by naming the near-misses, which I have done.
6. **Published-is-not-performed on the usability result itself.** VIII.A prints **no number**
   for the usability validation — no operator count, no success rate, no denominator. It
   ANNOUNCES the study and its qualitative conclusion.

## ROUTES THAT FAILED

**None.** Every route I tried returned on the first attempt:

- accessdata.fda.gov/cdrh_docs/pdf21/K213037.pdf — 200, full text, first try, three passes.
- accessdata.fda.gov/scripts/cdrh/cfdocs/cfpmn/pmn.cfm?ID=K213037 — 200, full field table.
- fda.innolitics.com/device/K213037 — 200, full page.

No TLS failure, no 403, no 429, no redirect chase, no summariser refusal. The one search ran
and was not refused by the classifier; it simply failed to locate the string. Budget was not
exhausted (1 fetch, 1 search unspent). **No sub-claim is COULD NOT CHECK.** Sub-claims
(a)-(f) were all reached.

## BEARING ON THE LEDGER ENTRY

**STRIKE the quotation. NARROW and RESTATE the counter-instance. It survives, weaker, and it
is now opened.**

- **Strike L1 outright.** The entry must stop saying K213037 "states 'Repeatability or
  reproducibility study: None described'". It does not. Replace it with what is checkable:
  *"K213037's 510(k) summary (decision date 06/17/2022) describes no repeatability,
  reproducibility or precision study; the terms 'repeatability', 'reproducibility',
  'precision' and 'variability' do not appear in it, on per-term sweeps; Section VIII's only
  non-clinical performance subsections are software documentation/V&V, cybersecurity, risk
  analysis, technical parameter characterization, an algorithm change protocol, and a
  Usability validation."* That restatement is TRUE over the document I opened and costs the
  entry nothing it was entitled to.
- **Narrow the inference.** The gap established is a **gap in the public clearance summary**,
  not an established absence of measurement. The entry's phrase "rather than a measured one"
  overreaches on this evidence and should become "rather than one this clearance summary
  reports". With that correction the counter-instance still does the work the entry needs:
  if the Disguise finding is about what the class's public record contains, a cleared device
  whose summary reports no precision study at all is a real hole in that coverage, and the
  candidate's question is open for at least K213037.
- **Reverse the entry's own bookkeeping on one point.** The entry records this claim as
  opened by NEITHER adversary. **It is now opened, and it broke:** the character-level leg
  is false while the substantive leg holds in narrowed form. An entry that was relying on
  the quotation's authority was relying on nothing; an entry relying on the document's
  silence has something, in the weaker documentary sense.
- **Do not convert this to a promotion condition on the quotation.** There is no condition
  under which an unlocated string becomes a citation. The promotion condition, if the entry
  wants one, belongs on the strengthened version: *open DEN180001's decision summary.*
  **Nomination, justified by kind:** the kind of document that could settle whether precision
  was ever **measured** for the IDx-DR lineage is an FDA **decision summary** or review
  memorandum — the kind that enumerates the studies FDA reviewed, not the kind the applicant
  writes. DEN180001 (the original IDx-DR De Novo) is that kind, because De Novo
  authorisations publish decision summaries. **I have not opened it**, so this is a lead by
  kind and nothing more; I am not asserting what it contains.
- **Carry the class claim as UNENUMERATED.** One device opened; EyeArt, AEYE-DS and the rest
  of product code PIB unopened. Neither adversary, and not this entry, may write a universal
  about the class from here.
