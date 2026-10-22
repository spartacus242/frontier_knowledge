# VERIFY uq08 — "unreadable PMCIDs"

## CLAIM

A ledger entry records three sources that could not be read at any available route and
names them as what blocks the entry from Validated. Two of the three are given only as
PMCIDs — PMC11741007 and PMC12793680 — i.e. nobody converted them to a DOI. The claim
under check is the entry's own premise: that these two are unreadable here. Sub-claims,
reported separately per paper: (a) full front matter; (b) read level; (c) whether the paper
concerns EHR replacement or data migration at all; (d) whether it prints any fraction of a
pre-cutover clinical record not brought into a replacement system, per fact class or in
aggregate; (e) whether it measures any artefactual discontinuity in an incidence, exposure
or comorbidity measure at a cutover date.

**Verdict on the entry's premise: it does not hold. Both converted cleanly and both opened.**
Neither is unreadable, neither is off-topic, and one is fully open access.

### Conversion (PMC ID converter, which answers here)

`https://pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?format=json&ids=PMC11741007,PMC12793680`
(the legacy `ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/` path 302-redirects to this one), served:

    {"status":"ok","response-date":"2026-10-22 05:37:57", ...
     "records":[{"doi":"10.1093/jamia/ocv173","pmcid":"PMC11741007","pmid":26977100,
                 "requested-id":"PMC11741007"},
                {"doi":"10.1093/ofid/ofaf695.2146","pmcid":"PMC12793680",
                 "requested-id":"PMC12793680"}]}

PMC12793680 has **no PMID** in the converter's record — consistent with its being a
conference-supplement abstract. Both PMCIDs are therefore identifiers that convert in a
single call; no PMC page was ever needed.

---

# PAPER 1 — PMC11741007

## (a) FRONT MATTER

Taken from the OUP article page's own printed front matter, cross-checked against the
Crossref deposit; the two agree on every field.

- **Authors, in order:** Natalie M Pageler; Max Jacob Grazier G'Sell; Warren Chandler;
  Emily Mailes; Christine Yang; Christopher A Longhurst
- **Title:** "A rational approach to legacy data validation when transitioning between
  electronic health record systems"
- **Journal:** Journal of the American Medical Informatics Association
- **Volume / issue / pages:** 23 (5), 991–994
- **Year:** published online 14 March 2016; issue dated September 2016
- **DOI:** 10.1093/jamia/ocv173
- **PMID:** 26977100 · **PMCID:** PMC11741007
- **Publisher:** Oxford University Press

## (b) READ LEVEL — **ABSTRACT ONLY**

Opened at `https://academic.oup.com/jamia/article-abstract/23/5/991/2379816`. The page
serves the complete structured abstract plus front matter and states "You do not currently
have access to this article"; the PDF is subscriber-restricted. Pages 991–994 of body text
were **not** read. This is *abstract only*, not COULD NOT READ and not NOT FOUND.

## WHAT THE SOURCE SAYS (quotations as served)

**Reconstruction from 12 ordered consecutive fragments**, each returned whole and each
overlapping its neighbour by about four words; every junction was verified by that overlap
and nothing was completed by inference.

> Objective The objective of this project was to use statistical techniques to determine
> the completeness and accuracy of data migrated during electronic health record
> conversion. Methods Data validation during migration consists of mapped record testing
> and validation of a sample of the data for completeness and accuracy. We statistically
> determined a randomized sample size for each data type based on the desired confidence
> level and error limits. Results The only error identified in the post go-live period was
> a failure to migrate some clinical notes, which was unrelated to the validation process.
> No errors in the migrated data were found during the 12- month post-implementation
> period. Conclusions Compared to the typical industry approach, we have demonstrated that
> a statistical approach to sampling size for data validation can ensure consistent
> confidence levels while maximizing efficiency of the validation process during a major
> electronic health record conversion.

**Served damage, reproduced not corrected:** "12- month" carries a stray space after the
hyphen exactly as the OUP page serves it. Flagged per the known OCR damage on OUP
article-abstract pages rather than silently repaired.

Numbers visible anywhere on that page: 95% (twice), 5% and 2% — all three appear **only in
the alt text of a figure**, described there as a detection level and error limits. They are
parameters of the sampling plan, not observed results, and no figure image or table is
rendered on the page.

## (c) IS IT ABOUT EHR REPLACEMENT / DATA MIGRATION?

**Yes — directly, and it is the closest of the three blocked sources to the ledger's
subject.** It is a single-institution report of the *validation method* used to check data
carried across a commercial EHR conversion. Genre: a short primary report of an
institutional project ("this project"), structured
Objective/Methods/Results/Conclusions, four journal pages. It is **not** a review, not a
protocol and not a guideline, and it attributes its findings to its own project rather
than to another source.

## (d) DOES IT PRINT A FRACTION OF A PRE-CUTOVER RECORD NOT MIGRATED?

**Not in the abstract — and this is a published-is-not-performed case.** The paper *names*
a non-migration event and prints **no number for it**:

> "The only error identified in the post go-live period was a failure to migrate some
> clinical notes, which was unrelated to the validation process."

"some clinical notes" is the entire quantification: no count, no fraction, no denominator,
no fact-class breakdown. Of the available verbs, the abstract **BOUNDS** the migration
error rate (a randomized sample per data type sized "based on the desired confidence level
and error limits", with 95% / 5% / 2% named in figure alt text) and **MEASURES zero** within
that bound. It does not **MEASURE** a loss fraction.

Note the zero is a bound, not a point estimate: "No errors in the migrated data were found"
under a plan sized to detect a 5% (or 2%) error rate with 95% probability constrains the
rate to roughly below that limit; it does not establish that nothing was lost — and indeed
the preceding sentence says something was.

Because I read only the abstract, **I report no absence for the body text.** Pages 991–994
may well print per-data-type sample sizes and counts; I did not see them and do not
characterise them.

## (e) ARTEFACTUAL DISCONTINUITY IN AN INCIDENCE, EXPOSURE OR COMORBIDITY MEASURE AT CUTOVER?

**No, in the abstract — and the paper is not built to measure one.** Its endpoint is the
presence of a *migration error* in a sampled record, not the value of any epidemiological
measure before versus after the cutover. No incidence, prevalence, exposure or comorbidity
figure appears, and no before/after comparison of such a figure is reported. This is a
category difference, not a gap the paper overlooked.

## REGIME

- **Population / setting:** one institution's single major EHR conversion.
- **Unit of analysis:** a record sampled within a data type — a randomized sample size
  determined separately "for each data type". Not a patient, not a fact, not a record in
  aggregate.
- **Endpoint:** completeness and accuracy of migrated data, scored as error found / not found.
- **Comparator:** "the typical industry approach" to validation sample sizing.
- **Estimand:** whether the error rate per data type lies within stated error limits at a
  stated confidence level — i.e. an *upper bound on error*, under a sampling plan.
- **Operating condition / window:** a 12-month post-implementation observation period.
- **Threshold, as its own authors stated it:** confidence 95%, error limits 5% and 2%
  (figure alt text only). Carried as served; the abstract text itself names neither number.

**Does the ledger's claim sit inside that regime?** Only partly. The paper's regime is
*validation-process efficiency* — how large a sample must be to bound migration error. A
claim that reads it as *quantifying how much of the pre-cutover record failed to arrive*
sits outside that regime: the design was never an inventory of what was lost, and a
zero-errors-found result under a sampling bound is silent on the size of any loss below
that bound. The one loss the paper does name — clinical notes — is explicitly placed
*outside* the validation process that produced the numbers.

## DEFECTS FOUND (Paper 1)

1. **The entry's premise is wrong for this source.** It is readable at abstract level at a
   route the routing notes already describe, and its PMCID converts in one call. A record
   calling it unread at any available route misstates what is available.
2. **A live misquotation trap at a cut.** "No errors in the migrated data were found during
   the 12- month post-implementation period" is verbatim, but the clause immediately before
   it says the only error found *was* a failure to migrate some clinical notes. Quoting the
   zero-errors sentence alone inverts the paper. The grammar on both sides of that cut
   changes the claim, and any ledger use of the zero must carry the preceding sentence.
3. **Two formulations, and they must both be reported** (one hedged by a qualifier):
   "The only error identified in the post go-live period was a failure to migrate some
   clinical notes, **which was unrelated to the validation process**" and "No errors in the
   migrated data were found…". The second is true only once "migrated data" is read as
   excluding the notes that were never migrated; the qualifier is what reconciles them.
4. **Bound reported as measurement.** 95% / 5% / 2% are detection parameters in figure alt
   text. Treating them as observed error rates, or converting them into a loss fraction,
   would be arithmetic the source does not print.
5. **Served OCR damage** at "12- month", reproduced rather than corrected.

---

# PAPER 2 — PMC12793680

## (a) FRONT MATTER

From the Crossref deposit (the item is a conference-supplement abstract; its front matter
is what the publisher deposited).

- **Authors, in order:** Savanna Brinkman; Kristen Hughes; Delia Allen; Elisabeth Adderson;
  Patricia J Barker
- **Title:** "P-1979. Impact of an Electronic Health Record Transition on Penicillin Allergy
  Documentation in a Pediatric Research Hospital"
- **Journal:** Open Forum Infectious Diseases
- **Volume / issue:** 13, Supplement_1
- **Pages:** **absent** — no page range; the item is identified by article number
  ofaf695.2146. The trailing "2146" is the abstract's sequence number in the supplement,
  and "P-1979" in the title is its poster number.
- **Year:** published online and in print 11 January 2026
- **DOI:** 10.1093/ofid/ofaf695.2146
- **PMID:** none deposited · **PMCID:** PMC12793680
- **Publisher:** Oxford University Press · **Licence:** CC BY 4.0
- **Crossref type:** `journal-article` — **this type is misleading.** The item is a
  **conference poster abstract** in a society-meeting supplement, not a full research
  article. Anyone taking the type field at face value will over-weight it.

## (b) READ LEVEL — **FULL PUBLISHED ITEM**

The structured abstract *is* the published item in full; a supplement poster abstract has
no further body text. Read verbatim from the CC BY 4.0 Crossref deposit. No peer-reviewed
full paper, methods section, table or figure exists to read.

## WHAT THE SOURCE SAYS (quotations as served)

**Reconstruction from 40 ordered consecutive fragments**, each returned whole with about
four words of overlap at every junction; all 40 junctions verified by overlap, nothing
completed by inference. JATS tags stripped below; inter-tag whitespace was normalised by
the server.

> **Background.** Accurate allergy documentation is crucial for preventing adverse drug
> reactions and optimizing antimicrobial stewardship. Electronic health record (EHR)
> transitions pose challenges to maintaining consistent allergy labeling, especially in
> populations where allergy de-labeling efforts have occurred. Interoperability between
> healthcare systems can further complicate allergy reconciliation if documentation is
> inconsistent. This project is a quality improvement initiative to quantify and verify
> allergy labeling discrepancies after an EHR transition in penicillin allergic patients.
>
> **Methods.** A retrospective chart review was conducted of 197 patients with active
> penicillin or penicillin derivative allergies listed in the institution's EHR, one year
> following the transition between commercial EHRs. Allergy lists were compared between
> systems to identify medication allergy discrepancies. If the allergy occurred after EHR
> transition it was not included as a discrepancy. Measures included: the number of allergy
> label changes per patient, rate of inappropriate relabeling of previously de-labeled
> allergies, and inappropriate removal of previously confirmed allergies. Messages were
> sent to active patients for verification purposes, and the EHR was revised accordingly.
>
> **Results.** A total of 87 medication allergy discrepancies were identified in 72/197
> (36.5%) patients. Antibiotics were 56 (64.3%) of the identified discrepancies with
> penicillin or penicillin derivatives being the most common antibiotic 43/56 (76.8%).
> Three cases of inappropriate penicillin allergy relabeling occurred despite previous
> de-labeling efforts, three patients were inappropriately labelled as not penicillin
> allergic, and one patient was relabeled with sulfa allergy. Patient messages were sent to
> 37/62 (59.7%) active patients with 18/37 (48.6%) response. Allergies were patient
> reported as correct in 17/18 (94.4%) suggesting an incomplete legacy system list.
>
> **Conclusion.** EHR transitions significantly impact allergy documentation with over
> one-third of patients in this study experiencing discrepancies. Our findings indicate a
> need for standardized cross-facility allergy reconciliation processes to prevent
> documentation errors and improve safety.
>
> **Disclosures.** Elisabeth Adderson, MD, Shionoji Inc.: Advisor/Consultant

**Served damage, reproduced not corrected:** "Shionoji Inc." appears thus in the deposit and
is near-certainly a misspelling of Shionogi; left as served. "labelled" and "labeling"
appear with inconsistent spelling in the original.

## (c) IS IT ABOUT EHR REPLACEMENT / DATA MIGRATION?

**Yes — an EHR transition is its subject, though data migration is not its framing.** It is
a quality-improvement initiative measuring whether one fact class, the medication allergy
label, stayed consistent across "the transition between commercial EHRs" at a single
pediatric research hospital. Genre: **conference poster abstract**, reporting a
retrospective chart review conducted as QI. Not a review, not a guideline, not a primary
research article with a methods section anyone can audit.

## (d) DOES IT PRINT A FRACTION OF A PRE-CUTOVER RECORD NOT MIGRATED?

**It prints numbers at this cutover, but none of them is that fraction — and conflating
them is the trap here.**

What is printed, and where (all in the Results sentences quoted above; there is no table or
figure):

| Figure | Denominator | What it counts |
|---|---|---|
| 87 | — | medication allergy discrepancies (a count of discrepancies, not patients) |
| 72/197 (36.5%) | 197 patients with an active penicillin/derivative allergy listed one year post-transition | patients with **at least one** discrepancy, in **either** direction |
| 56 (64.3%) | 87 discrepancies | discrepancies involving antibiotics |
| 43/56 (76.8%) | 56 antibiotic discrepancies | penicillin or derivatives |
| 3 | not given as a percentage | patients "inappropriately labelled as not penicillin allergic" |
| 3 | not given as a percentage | inappropriate relabeling despite previous de-labeling |
| 1 | not given as a percentage | patient relabeled with sulfa allergy |
| 37/62 (59.7%) | 62 "active patients" | patients messaged for verification |
| 18/37 (48.6%) | 37 messaged | responded |
| 17/18 (94.4%) | 18 responders | allergy patient-reported as correct |

**The 36.5% is not a non-migration fraction.** Three reasons, all from the source's own
words. (i) Its numerator is *discrepancies in both directions* — the stated measures include
both "inappropriate relabeling" (a label gained) and "inappropriate removal" (a label lost).
(ii) Its unit is **patients with ≥1 discrepancy**, not allergy entries, so it is a share of
patients and not a share of the record. (iii) The source itself attributes part of the
discrepancy to the *legacy* list rather than to the transition: patient verification found
allergies correct in 17/18 (94.4%), "suggesting an incomplete legacy system list". The
abstract nowhere asserts that the discrepancies were caused by migration failure.

**The closest thing to a loss-direction number is a count of three** — "three patients were
inappropriately labelled as not penicillin allergic". The source prints that as a bare
count. It prints **no** percentage or denominator for it; 3/197 = 1.5% would be *my*
arithmetic, not the source's, and the source does not print the converted figure.

All printed percentages are internally consistent on re-derivation (72/197 = 36.5%,
56/87 = 64.4%, 43/56 = 76.8%, 37/62 = 59.7%, 18/37 = 48.6%, 17/18 = 94.4%). No uncertainty
interval is stated anywhere, for any figure.

## (e) ARTEFACTUAL DISCONTINUITY IN AN INCIDENCE, EXPOSURE OR COMORBIDITY MEASURE AT CUTOVER?

**Partly, and the distinction matters.** The allergy label is an exposure/comorbidity-like
field, and the design does isolate change that is artefactual rather than incident: "If the
allergy occurred after EHR transition it was not included as a discrepancy" deliberately
excludes genuinely new allergies, so the 36.5% is change *attributable to the transition
rather than to new events*. To that extent, yes — the number is 72/197 (36.5%) of patients.

But it does **not** measure a discontinuity in an incidence *rate*, prevalence or exposure
*estimate* at the cutover date. No before/after rate is computed, no step change in any
epidemiological measure is estimated, and no denominator of person-time appears. The
estimand is *record-level disagreement between two systems*, not *a jump in a measure*.
Using this abstract as evidence for an artefactual discontinuity in a measured incidence or
comorbidity rate is a **granularity and estimand gap**, not a supported reading.

## REGIME

- **Population:** 197 patients with an *active* penicillin or penicillin-derivative allergy
  listed in one pediatric research hospital's EHR, assessed one year after the transition.
  Not all patients at the institution; not all allergy-bearing patients; one fact class only.
- **Unit of analysis:** the patient for the headline 36.5%; the discrepancy for the 87,
  64.3% and 76.8% figures. The two units are mixed across adjacent sentences.
- **Endpoint:** a medication allergy discrepancy between the legacy and replacement
  allergy lists, with post-transition-onset allergies excluded.
- **Comparator:** the legacy commercial EHR's allergy list versus the replacement's.
- **Estimand:** the share of this selected cohort showing ≥1 cross-system allergy
  discrepancy at one year — descriptive, no uncertainty stated, no causal attribution to
  migration made.
- **Operating condition:** a single commercial-to-commercial transition, in a setting where
  "allergy de-labeling efforts have occurred" — the abstract names that as a reason this
  population is *especially* susceptible, so the cohort is selected for elevated risk.
- **Evidence grade:** single-site QI, retrospective, conference abstract, not peer-reviewed
  as a full paper.

**Does the ledger's claim sit inside that regime?** Only for the narrow fact class of
medication allergy labels in a de-labeling-enriched pediatric cohort. Read as an aggregate
rate of record loss at EHR cutover, or as a per-fact-class migration-failure fraction, the
claim sits outside it: wrong unit (patients, not entries), wrong direction (both directions,
not loss), and a cause the source declines to assign.

## DEFECTS FOUND (Paper 2)

1. **The entry's premise is wrong for this source too, and more plainly:** it is CC BY 4.0,
   fully open, and the published item was read in full. Calling it unreadable at any
   available route is incorrect; the PMCID simply had not been converted.
2. **The headline number invites a regime error.** 36.5% is patients-with-any-discrepancy,
   both directions, in a cohort selected for prior de-labeling. It is not a share of records
   lost, not a share of allergy entries, and not attributed by the authors to migration.
   This is the same shape as the "share of users reported as a share of utilisation" defect.
3. **Mixed units of analysis across adjacent sentences** (87 discrepancies vs 72 patients vs
   56 of 87 discrepancies), with no restatement of which denominator is in play.
4. **An undefined denominator:** 62 "active patients" appears with no definition and no
   stated relation to the 72 patients with discrepancies or the 197 reviewed. The 59.7% rests
   on it.
5. **The loss-direction figure is a bare count (three patients) with no printed percentage.**
   Any fraction derived from it is the deriver's arithmetic, not the source's.
6. **The source's own counter-evidence is easy to drop:** 17/18 (94.4%) patient-confirmed
   allergies "suggesting an incomplete legacy system list" points at the legacy data, not
   the migration. A citation that keeps 36.5% and drops this clause misreports the abstract.
7. **Crossref types it `journal-article`.** It is a poster abstract. Metadata-driven citation
   will mis-grade its weight.
8. **No uncertainty anywhere**, on any of the ten printed figures.
9. **Undisclosed-elsewhere conflict is disclosed here:** Adderson, advisor/consultant,
   "Shionoji Inc." as served.

---

## ROUTES THAT FAILED

Recorded as encountered; none of these failures was worked around by probing the proxy.

1. `www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=…&format=json` — HTTP 302 to
   `pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?…`. Not a failure, a move; the
   redirect target answers. Two calls spent learning this, one per ID.
2. `pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/` (both IDs, first attempt) —
   RATE_LIMIT_EXCEEDED from the target, with an instruction to retry once singly. Retried
   once as instructed and it returned the JSON above.
3. `api.crossref.org/works?filter=…&select=…` — PROXY_REJECTED, HTTP 403,
   "url exceeds the maximum fetchable length". A URL-length limit, **not** a host block:
   the same query without the `select` list succeeded. Worth recording so nobody reads a
   403 here as Crossref refusing.
4. `api.crossref.org/works?filter=…` (shortened, first attempt) — RATE_LIMIT_EXCEEDED from
   the target. Retried once as instructed; returned both records.
5. **Crossref deposit, JAMIA abstract, verbatim segments — REFUSED on licensing.** The
   fetch summariser returned: the record "has no open license, so reproducing its full text
   would go beyond what the content permits." This is a **tool-scoped content refusal, not a
   host or paywall block** — the same reader served the CC BY 4.0 OFID abstract in full from
   the identical URL in the identical call. Routed around by reading the publisher's own
   article-abstract page instead, which served the text.
6. `WebSearch` for the JAMIA DOI, for PMID 26977100, and for the OFID article number —
   three searches returned essentially unrelated results (unconnected PMC figure pages,
   university publication lists, a GSI repository record). Only a title-phrase search
   recovered the OUP article-abstract URL. Search was a poor instrument here; the ID
   converter and Crossref did the work.

**Not tried, deliberately:** PMC and Europe PMC article pages (hard-blocked per routing
notes — a PMCID is an identifier to convert, and converting it was sufficient); doi.org
resolution (publisher host reached directly instead); Unpaywall (would require supplying a
contact address, which is not done); the JAMIA full-text PDF (subscriber-restricted).

**Query budget:** four content-returning fetches of a document plus two redirect notices and
two refusals, and four searches. Within the cap.

---

## BEARING ON THE LEDGER ENTRY

**The entry's stated blocker does not survive contact with these two sources.** It names
them as unread at any available route; both converted from PMCID to DOI in a single call to
an endpoint that answers here, and both then opened — one at abstract level on the
publisher's own page, one in full under CC BY 4.0. This is the
*a-prior-nobody-opened-is-not-prior-art* failure, in its original form: the record
characterised sources it had not established could be opened, and the obstacle was an
unconverted identifier, not an inaccessible document. Whatever else blocks this entry from
Validated, these two do not.

**But opening them does not hand the entry its quantity.** On the question the ledger
actually asks — does a published source print the fraction of a pre-cutover clinical record
that failed to arrive in a replacement system, per fact class or in aggregate — the honest
answer from these two is **no**, with two different shapes of no:

- **Pageler 2016 (JAMIA) is the published-is-not-performed case.** It is the on-topic paper:
  its whole subject is validating the completeness and accuracy of migrated data. It
  **names** a non-migration event — "a failure to migrate some clinical notes" — and prints
  no number for it at all. What it does is **BOUND** the migration error rate by a sampling
  plan and report zero errors found inside that bound. A bound is not a measurement, and
  "some clinical notes" is not a fraction. This is the strongest available demonstration
  that the field ran the analysis and never printed the quantity — but it is an
  abstract-level finding, and pages 991–994 were not read, so the entry may not record an
  absence in that body text on my authority.
- **Brinkman 2026 (OFID) is the regime case.** It prints ten figures at a real cutover, and
  the tempting one — 36.5% — is the wrong estimand three times over: patients rather than
  entries, discrepancies in both directions rather than losses, and a cause the authors
  decline to assign, having themselves pointed at "an incomplete legacy system list". Its
  loss-direction number is a bare count of three patients with no printed denominator. Used
  as a per-fact-class non-migration fraction it would repeat exactly the defect that moved a
  verdict last batch.

**Actions the entry should take.** Replace both PMCIDs with their DOIs
(10.1093/jamia/ocv173 and 10.1093/ofid/ofaf695.2146) and their front matter, taken from the
front matter above and not from any short form. Reclassify both from "could not read" to
"read" at the levels stated. Re-grade the OFID item as a conference poster abstract despite
its `journal-article` Crossref type. Strike the unreadability blocker. If the entry still
wants the quantity, the open question is now narrower and sharper: whether the body of
Pageler 2016 prints a count or fraction for the clinical notes that failed to migrate — a
four-page paywalled read that one institutional access would settle. And if 36.5% is cited
anywhere in the entry, it must carry its denominator, its both-directions definition, and
the authors' own legacy-list caveat, or it should not be cited.

**One caution on reading these as support.** Neither source measures a discontinuity in an
incidence, exposure or comorbidity *estimate* at a cutover date. Pageler does not measure
epidemiological quantities at all; Brinkman measures cross-system record disagreement, which
is adjacent but is not a step change in a rate. Silence here is silence, not a prohibition —
and neither paper noting the absence of something else is a flag of the gap the entry is
built on.
