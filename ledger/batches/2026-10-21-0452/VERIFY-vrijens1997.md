# VERIFY — vrijens1997

## Citation as the source itself serves it

I could NOT reach the article's own front matter (title page). The nearest thing I could read is the
Hasselt University repository record, which serves the metadata as Dublin Core fields. Verbatim, as served:

- `dc.title`: "Comparing compliance patterns between randomized treatments"
- `dc.contributor.author`: "Vrijens, B"; "GOETGHEBEUR, Els"
- `dc.identifier.citation`: "CONTROLLED CLINICAL TRIALS, 18(3). p. 187-203"
- `dc.date.issued`: "1997"
- `dc.identifier.volume`: "18"; `dc.identifier.issue`: "3"; `dc.identifier.spage`: "187"; `dc.identifier.epage`: "203"
- `dc.identifier.doi`: "10.1016/S0197-2456(96)00235-8"
- `dc.identifier.issn`: "0197-2456"
- `dc.publisher`: "ELSEVIER SCIENCE INC"
- `dc.identifier.isi`: "A1997XF53400001"
- `dc.type`: "Journal Contribution" (record also labelled refereed journal article)
- `local.format.pages`: "17"
- `dc.subject.other`: "binary longitudinal data; compliance; generalized estimating equations; medication event monitoring systems; summary statistics"
- `dc.description.notes`: "UNIV HOSP,LIEGE,BELGIUM. LIMBURGS UNIV CTR,DIEPENBEEK,BELGIUM."
- Record states full text access is CLOSED; no file attached.
- Source: https://documentserver.uhasselt.be/handle/1942/3351?mode=full

## Read level

**ABSTRACT ONLY** (plus repository metadata). NOT full text. NOT "not found" — the record and the
abstract exist and were read; the body of the paper was never served.

Routes that failed:
1. `https://www.sciencedirect.com/science/article/pii/S0197245696002358` — WebFetch returned
   `ROBOTS_DISALLOWED` (source: target). Host-level robots refusal, so the `/abs/pii/` variant was not
   worth a call. This is the publisher route and it is closed to this reader.
2. Web search for a PubMed record for this article returned none (no PMID surfaced in two searches).
3. Web search for any open PDF / repository full text returned none; the Hasselt record itself says access closed.
4. doi.org was not called: it resolves to the ScienceDirect host already shown to refuse this reader.

## Abstract (reconstruction)

The abstract below is a RECONSTRUCTION assembled from 17 ordered consecutive segments returned by the
fetch summariser (the ~125-character quotation cap). Junctions were taken only from consecutive returns;
nothing was completed by inference. Verification: the summariser's stated last five words,
"be sought in this case.", match the final segment. Its character count (~1,336) was hand-counted and is
an estimate, so the word-count check is weaker than an overlap check would be. Treat sentence-internal
junctions as reconstructed, not as a single verbatim read.

> When two equally efficacious drugs enter the market, the one with the better compliance is likely to be
> more widely used. Special management of the delivery may produce increased compliance. In this paper we
> analyze a trial of a single drug dosing prescription with patients randomized to either daily self
> monitoring of the outcome (blood pressure) or not. The study used Medication Event Monitoring Systems
> (MEMS) to record each exact time and date when a patient opened the pill container. No established
> method is available for comparing these high-dimensional compliance patterns between groups. This paper
> investigates several summary measures that highlight different dimensions of the pattern and the drug
> context in which they may be meaningful. Further, we examine conditional and marginal models that enable
> comparisons of the full pattern of daily dosing indicators for subjects between the groups. We found no
> simple difference in average compliance levels, but we found an interesting interaction between
> treatment and time: similar compliance existed initially among patients in both randomized groups, with
> a stronger decline over time for patients who did not monitor their blood pressure. We discuss how a
> balance between simplicity of interpretation and efficiency of data use may be sought in this case.

## Kind of source

As served, a refereed journal article in *Controlled Clinical Trials* — a **methods paper**, not a review,
not a protocol, not a guideline, not an editorial. Its own framing is methodological ("No established
method is available for comparing these high-dimensional compliance patterns between groups"; "This paper
investigates several summary measures"; "we examine conditional and marginal models"), applied to one
trial's data. The keywords ("generalized estimating equations", "binary longitudinal data", "summary
statistics") point the same way. It is therefore a secondary analysis of someone else's trial: the
abstract does not name the parent trial or claim the randomisation as the authors' own, and I could not
check whether the body attributes the trial to another group.

---

## (a) Front matter: authors, title, journal, volume, issue, pages, year, DOI

**Holds, but on repository provenance, not the paper's own front matter.**

Every element of the ledger citation matches the record: Vrijens B; Goetghebeur (served as "GOETGHEBEUR,
Els", i.e. initial E); "Comparing compliance patterns between randomized treatments"; *Controlled
Clinical Trials* (served in caps as "CONTROLLED CLINICAL TRIALS"); volume 18; issue 3; pages 187-203;
1997; doi 10.1016/S0197-2456(96)00235-8. `local.format.pages` "17" is arithmetically consistent with
187-203 inclusive.

Caveat required by rule (7): this is NOT taken from the front matter. The Hasselt record is a
third-party transcription, and its all-caps author and journal strings plus the ISI accession number
(A1997XF53400001) indicate it was loaded from a Web of Science feed. The DOI could not be independently
resolved to a publisher page from here, so the DOI string is also unconfirmed against the publisher.

## (b) What it MEASURES, in its own words

Verbatim strings found:

- "a trial of a single drug dosing prescription with patients randomized to either daily self monitoring
  of the outcome (blood pressure) or not"
- "The study used Medication Event Monitoring Systems (MEMS) to record each exact time and date when a
  patient opened the pill container."
- "comparisons of the full pattern of daily dosing indicators for subjects between the groups"
- "several summary measures that highlight different dimensions of the pattern"
- "conditional and marginal models"
- keyword: "binary longitudinal data"; keyword: "generalized estimating equations"

Against the ledger's description:

- Randomised, blood-pressure context, self-monitoring versus not: **supported verbatim** ("randomized to
  either daily self monitoring of the outcome (blood pressure) or not").
- Electronically timestamped dosing: **supported verbatim** — MEMS recording "each exact time and date
  when a patient opened the pill container". Note the recorded quantity is a container OPENING, not an
  ingestion; the abstract makes no ingestion claim.
- Endpoint is the dosing indicator rather than blood pressure: **supported, with a wording trap.** The
  analysed quantity is the "daily dosing indicator" per subject per day (binary longitudinal data), and
  blood pressure appears in the abstract only as the thing one arm self-monitors. But the abstract calls
  blood pressure "the outcome" in its own words. So "the endpoint is not blood pressure" is right about
  what is analysed while the paper's own sentence labels blood pressure "the outcome". Anyone quoting the
  abstract must keep that distinction.

Unit of analysis / comparator / estimand, as closely as the abstract allows:
- Unit of analysis: the subject-day binary dosing indicator, nested in subjects ("the full pattern of
  daily dosing indicators for subjects"); alternatively, per-subject summary measures.
- Comparator: the randomised arm that did not self-monitor ("patients who did not monitor their blood pressure").
- Estimand: the abstract names **no** estimand in estimand language. What it names is (i) a difference
  in "average compliance levels" and (ii) an "interaction between treatment and time". "conditional and
  marginal models" implies both subject-specific and population-averaged contrasts, but the abstract does
  not say which contrast is the primary target, and gives no estimator, no effect size, no interval and no
  p-value. Any precise estimand attributed to this paper cannot be sourced from the abstract.

## (c) The three recorded ABSENCES

Read level first, as required: **abstract only.** Therefore none of the three absences can be established
as absent from the paper. What follows is strictly "not present in the abstract I read", which is a much
weaker finding, and rule (9) applies: silence in an abstract is not a prohibition and not evidence of
absence in a 17-page methods paper.

1. **No analysis keyed to clinic VISITS** — not found in the abstract. The abstract's time structure is
   daily ("daily self monitoring", "daily dosing indicators", "decline over time"); the words visit,
   clinic, appointment, office appear nowhere in it. Cannot see that it is absent from the full text.
   A caution: a self-monitoring BP trial of this era would almost certainly have had scheduled visits, and
   a 17-page paper has room to key an analysis to them, so this absence is unverified, not safe.
2. **Does not map a dosing pattern onto a treatment EFFECT** — not found in the abstract. The abstract's
   object throughout is the comparison of compliance patterns BETWEEN randomised groups; no clinical
   endpoint, efficacy, dose-response or BP-lowering effect appears in it. The nearest thing is the market
   framing, "When two equally efficacious drugs enter the market, the one with the better compliance is
   likely to be more widely used", which stipulates equal efficacy rather than estimating any effect.
   Still only an abstract-level non-finding.
3. **Does not discuss white-coat or pre-visit adherence** — not found in the abstract. No white-coat,
   white coat, pre-visit, toothbrush or similar term appears in it. Cannot see that it is absent from the
   full text. Note also that this paper's one arm is a self-MONITORING arm, i.e. patients measuring
   themselves at home, which is a different construct from pre-visit behaviour; the abstract does not
   connect the two.

## (d) "No difference in average compliance but a treatment-by-time interaction"

**Mostly holds; the wording in the ledger is tighter than the paper's.** The abstract states it once:

> "We found no simple difference in average compliance levels, but we found an interesting interaction
> between treatment and time: similar compliance existed initially among patients in both randomized
> groups, with a stronger decline over time for patients who did not monitor their blood pressure."

Grammar on both sides of the cut: the clause is "no **simple** difference in average compliance levels".
Dropping "simple" turns a statement about the inadequacy of a simple summary contrast into a null result
on average compliance — the paper's methodological point is precisely that simple summaries miss the
structure, so "no difference in average compliance" is a stronger and differently-pointed claim than what
is served. Likewise the paper says "an interesting interaction between treatment and time", not a
"treatment-by-time interaction" with any test attached: there is no estimate, no uncertainty and no
significance statement anywhere in the abstract, and nothing to re-derive at the authors' own threshold.
The direction is stated unambiguously: equal at baseline, steeper decline in the non-self-monitoring arm.
The abstract states the finding only once; I cannot report other formulations or which carries a
citation, because the body was not served.

## (e) Does the paper raise how the measurement schedule itself shapes dosing?

**Could not check.** At abstract level the answer is "adjacent but not the same question". Two strings bear on it:

- "Special management of the delivery may produce increased compliance."
- "with a stronger decline over time for patients who did not monitor their blood pressure"

These say that an intervention on how the drug is delivered/managed, and specifically an assigned daily
self-monitoring routine, is associated with better sustained dosing. That is a measurement activity
changing dosing — but it is the randomised INTERVENTION, framed as management of delivery, not a question
about the MEASUREMENT SCHEDULE of the study shaping the dosing it records. The abstract nowhere raises
reactivity of the MEMS monitoring itself, which is common to both arms and is described purely as a
recording instrument ("to record each exact time and date"). Whether the body (which, per its own
sentence, "discuss[es] how a balance between simplicity of interpretation and efficiency of data use may
be sought") raises instrument reactivity or the schedule's influence on dosing, I cannot see.

---

## Defects

1. **Read level is abstract only, and three of the five claims need full text.** Claim (c)'s three
   absences cannot be supported at this read level; they should be marked "not found in abstract", not
   "absent". Claim (e) is unresolved.
2. **Front matter is repository-sourced, not front-matter-sourced** (rule 7). It is a Web of Science-fed
   DSpace record (all-caps strings, ISI accession A1997XF53400001), and the DOI was never resolved to a
   publisher page from here. Author given names as served: "Vrijens, B" and "GOETGHEBEUR, Els".
3. **Quotation of (d) drops "simple".** The paper says "no **simple** difference in average compliance
   levels". The ledger's "no difference in average compliance" overstates a null and inverts the
   methodological point of the sentence.
4. **"treatment-by-time interaction" is a tightening.** The abstract says "an interesting interaction
   between treatment and time", with no estimate, no interval, no test and no threshold; nothing in the
   abstract can be re-derived or carried with uncertainty.
5. **Endpoint wording trap in (b).** The abstract itself calls blood pressure "the outcome", while the
   analysed endpoint is the daily dosing indicator. Also, what MEMS records is a container OPENING, not
   an ingestion; no ingestion claim is available from this source.
6. **Unverified estimand.** The abstract names no estimand, no estimator and no primary contrast; "unit of
   analysis / endpoint / comparator / estimand" in the ledger is a reasonable reading of
   "daily dosing indicators for subjects between the groups", but only the endpoint and comparator are
   in the paper's own words.
7. **Secondary-analysis attribution unchecked** (rule 5). This is a methods paper analysing one trial's
   data; the abstract neither names nor credits the parent trial, so a finding attributed to these authors
   may belong to the trial's own investigators. Not checkable without the body.
8. **The abstract is a 17-fragment reconstruction**, verified only by a last-five-words match and an
   estimated character count, not by junction overlaps. Sentence-internal junctions should be re-verified
   before any of it is quoted as a single verbatim string.
9. Publisher route closed: ScienceDirect returns ROBOTS_DISALLOWED for this reader, so no future pass
   should spend calls there without a different route (interlibrary copy, or the authors' other
   repository deposits).
