# VERIFY — HSIB/HSSIB, "Oxygen issues during the COVID-19 pandemic"

## Citation, as the source serves it

Healthcare Safety Investigation Branch (HSIB), *Oxygen issues during the COVID-19 pandemic*,
investigation report. Published 19/05/2021. Served at
https://www.hssib.org.uk/patient-safety-investigations/oxygen-issues-during-covid-19-pandemic/investigation-report/

Front matter note: the page names the investigating body as **Healthcare Safety Investigation
Branch (HSIB)**, not HSSIB. HSSIB is the successor body now hosting the page. No ISBN, no
report reference number and no formal self-citation line is printed in the served text; the only
identifiers the report issues are its recommendation/observation/action IDs (R/2021/..., O/2021/...,
A/2021/...). Section list as served: Considerations in light of coronavirus (COVID-19); A note of
acknowledgement; About this report; Our investigations; Executive Summary; 1 Background and context;
2 The reference event; 3 Involvement of the Healthcare Safety Investigation Branch; 4 Analysis and
findings from the investigation; 5 Summary of findings, safety recommendations, safety observations
and safety actions; 6 References; 7 Appendices; Providing feedback and comment on HSIB reports.

**Source type:** a national patient safety *investigation report*. Not a primary study, not a
review, not a guideline, not an editorial. Its unit of analysis is a single **reference event**
(two patients desaturating in one Trust's HDU) read against national MGPS governance. Its output
is findings plus recommendations, not an effect estimate: there is no comparator, no endpoint and
no estimand in the trial sense.

## Read level and routes that failed

**READ LEVEL: full text**, via WebFetch, in two windows — characters 0–100,000 and 100,000–128,114
(total 128,114 characters). Nothing was left unread.

Routes that failed:
- `curl` to www.hssib.org.uk — `CONNECT tunnel failed, response 403`. Tool-scoped at this proxy,
  not a host block; WebFetch served the same URL fine.
- The WebFetch summariser **refused** an explicit request for ordered consecutive segments when the
  request was framed as reproducing whole sentences. The cap was then beaten by asking separately
  for the first ~100 characters, the last ~100 characters, and the measured character gap between
  them. Every full sentence below is therefore a **labelled reconstruction**, with the number of
  fragments and the junction evidence stated.

---

## (a) Does the report exist and is it reachable

Yes. It exists, it is open, and it was read in full. See read level above. This is a *found and
read* finding, not a could-not-read one.

## (b) The figures "4.2" and "3.1"

Found. One sentence in the report uses them as measurements (paragraph numbered 2.19 in the
summariser's attribution). Other occurrences of those digit strings in the document are paragraph
numbers and cross-references (e.g. 1.3.1, 4.2.x), not quantities.

**Reconstruction from 2 fragments, verified by a 55-character overlap at the junction**
("…dropped from 4.2 bar to 3.1 bar "in about 10 secon" appears in both fragments):

> "The pressure test showed that pressure in the HDU dropped from 4.2 bar to 3.1 bar "in about 10
> seconds" and the pressure alarms alerted."

**What was actually measured — and it is not what the figures are likely to be used for:**

- **Quantity:** *pipeline pressure*, in **bar**. Not flow. Not litres per minute. Not an FiO2, not
  a delivered dose, and not a bedside reading against a prescription.
- **Where:** in the **HDU** (high dependency unit) — i.e. at a leg of the Trust's medical gas
  pipeline system, not at an individual patient's outlet compared to that patient's setting.
- **Under what circumstances:** during a **deliberate pressure test that the Trust itself ran on a
  Sunday** on its MGPS, to locate where problems might lie. The test was *preceded by mitigations*:
  the Trust had on the Saturday moved patients between wards to redistribute oxygen flow, and had
  reviewed its "red dot plan" to establish where oxygen-dependent patients were actually being
  cared for. So the figures come from an induced, instrumented test under modified patient
  distribution — not from the original incident, and not from routine operation.
- **By whom:** the **Trust**, with **estates staff stationed in clinical areas** to monitor the
  test's effects. Not by HSIB, and not by an independent metrology exercise.
- **Attribution inside the quote:** the report puts **"in about 10 seconds" in quotation marks**,
  i.e. the report is quoting that timing from an evidence source rather than asserting it as its
  own measurement. Any downstream use should carry the quotation marks.
- **Stated uncertainty:** the only hedge the report attaches is that quotation-marked "about". No
  interval, tolerance or instrument precision is given for 4.2 or 3.1.

Adjacent findings as served (paraphrase, not quotation): paragraph 2.20 reports that the test
showed the red dot plan had not worked in the second wave, and that the Trust's capacity
calculations had not accounted for uneven demand across its site.

## (c) The two recorded fragments

### Fragment 1 — "unable to conclusively determine whether the desaturation"

The words are present, in the **Executive Summary**.

**Reconstruction from 3 fragments.** Both junctions fall **inside a split word**
("associated" + " with a" + "ny pressure loss"), so no word was supplied by inference:

> "The investigation has been unable to conclusively determine whether the desaturation was
> associated with any pressure loss or reduction in oxygen flow within the HDU or other factors
> involved in their care."

**What the clauses on each side do to the meaning.** The fragment stops at "the desaturation" and
so drops the entire predicate. The full sentence is a **three-way, symmetric non-determination**:
the investigation could not say whether the desaturation was associated with (1) pressure loss,
(2) reduction in oxygen flow within the HDU, or (3) other factors involved in the patients' care.
Cutting at "the desaturation" leaves a reader free to supply whichever branch suits them. In
particular the fragment conceals that the report **also declined to exclude ordinary clinical
causes** — and conceals that "reduction in oxygen flow" is named by the report only as an
*unresolved candidate cause in this one incident*, never as a measured quantity.

Preceding sentence as served: "The two HDU patients that had become desaturated recovered their
oxygen saturation levels without any adverse effects."

### Fragment 2 — "unable to identify whether the pressure drop in the HDU was responsible"

The words are present, at paragraph 2.26.

**Reconstruction from 3 fragments.** Both junctions again fall **inside a split word**
("responsible f" + "or the patients des" + "aturating or whether…"):

> "The investigation has been unable to identify whether the pressure drop in the HDU was
> responsible for the patients desaturating or whether desaturation had occurred due to other
> clinical factors relating to their care."

**What the clauses on each side do to the meaning. This is the defect.** The fragment is verbatim
but it is **cut exactly at the hinge of a disjunction**. As cut, it reads as a one-sided failure to
confirm a pipeline cause — which invites the inference that a pipeline cause was the live
hypothesis and merely went unproven. The full sentence is **even-handed in both directions**: the
investigation could not identify whether the pressure drop was responsible *or* whether the
desaturation was due to other clinical factors. The second disjunct, which the cut removes, is what
stops the sentence being read as a near-miss confirmation.

Preceding sentence as served: "The two HDU patients who desaturated recovered without any adverse
effects."

### Both formulations together (defect-check item 4)

The report states the non-determination **twice**, and the two are not identical in scope:

- Executive Summary — **broader**: "pressure loss **or reduction in oxygen flow** within the HDU or
  other factors involved in their care."
- Paragraph 2.26 — **narrower**: "the pressure drop in the HDU … or other **clinical** factors
  relating to their care."

Only the Executive Summary version mentions *flow* at all. **Neither formulation carries a
citation**; both are the investigation's own hedged statement about its own evidence. Anyone citing
the report for a flow-related non-finding is relying on the Executive Summary wording, not on 2.26.

## (d) THE DECIDING QUESTION — is the bedside-delivered-versus-prescribed question posed?

**NOT POSED.** The report does not ask, as a question of its own, whether the oxygen delivered at a
patient's bedside departs from the prescribed or set flowmeter setting as a function of the
concurrent aggregate demand of other patients on the same pipeline leg. There is no posing
sentence to quote. Checked across both read windows, including section 5. The term **"diversity
factor" does not appear anywhere in the document.**

Sorting the present material into the three categories asked for:

**(i) Present — whether a measured pressure drop caused desaturations in one incident.** This is
asked, and explicitly left unresolved, twice. See (c) above for both full sentences. Note the
quantity in play is pressure (bar) in a pipeline leg, and the question is causal-in-one-event.

**(ii) ABSENT — whether delivered flow tracks concurrent demand across patients as a general
quantity.** Nothing poses this. What exists instead is *qualitative physics stated as background*,
not as an open question, plus an installed-equipment action:

> "reduces the potential pressure available to oxygen outlets later in the system."
> (section 1.2.5)

> "The more sprinklers you attach to the same hosepipe the lower the pressure is to each sprinkler"
> (section 1.2.6, the report's hosepipe analogy)

Both are about **pressure available at outlets**, framed as explanation of how MGPS behaves — and
both are asserted, not interrogated. Neither names the **prescribed/set flowmeter value** as a
reference, neither names **delivered flow at the bedside** as the measurand, and neither treats the
discrepancy as a quantity to be characterised. Also present as background, not as a question:
"The COVID-19 pandemic placed unprecedented demands on MGPS due to the number of patients requiring
oxygen therapy".

**(iii) Present — engineering and governance recommendations.** R/2021/120 and R/2021/132–135,
O/2021/115–118, A/2021/041–043 (listed under (e)). The nearest thing in the whole report to the
quantity in question is a **safety action by the Trust**, not a question by the investigation:
A/2021/041 — the Trust procured pipeline flow meters and electronic telemetry to actively monitor
flow rates across the estate. That is instrumentation installed at estate level, recorded as
something the Trust did; it is category (iii), and it measures pipeline flow rates, not bedside
delivered flow against prescription.

**So: only (i) and (iii) are present.** The general measured quantity — bedside delivered flow as a
function of concurrent aggregate demand, referenced to the prescribed setting — is not posed as a
question anywhere in this report.

One guard on this finding (defect-check item 9): the report's **silence** on that question is not
the report prohibiting it, and the report's noting of *other* absences (the red dot plan failing,
capacity calculations not accounting for uneven demand) is **not** a flag of this gap. Those are
absences in the Trust's planning, not an acknowledged gap in knowledge about delivered flow.

## (e) Scope, and the recommendation numbers

**Scope — clinical management is explicitly OUT of scope.** The Executive Summary states that the
investigation:

> "has not explored the clinical management of patients requiring oxygen therapy in this report."

(Served as a sub-110-character fragment; the subject of the clause was not returned, so I report the
predicate as served and do **not** supply a subject. Section 5 contains no scope statement at all,
so this Executive Summary line is the scope statement.)

This matters for (c) and (d): the report rules out the clinical arm of the very disjunction it
cannot resolve — it declines to exclude "other clinical factors" while also declining to examine
them. That is a limit on the non-finding's weight, in the report's own terms.

**Safety recommendations (all dated 2021):**

- **R/2021/120** — NHSE/I: urgently issue definitive guidance on the role, function and key
  attendees of the medical gas committee, including board-level reporting. (Issued earlier, in the
  March 2021 interim bulletin, and carried into this report.)
- **R/2021/132** — NHSE/I: review and further specify the roles, responsibilities and competencies
  of individuals named in the MGPS health technical memorandum, including how designated officers
  are appointed and trained.
- **R/2021/133** — NHSE/I: set up ongoing assurance of the qualifications and experience of the
  HTM-named individuals, including how Authorising Engineers and their subcontractors are appointed.
- **R/2021/134** — NHSE/I: complete the review, revision and reissue of the MGPS HTM, reinforcing
  multidisciplinary working (four content areas: infrastructure advice; clinical/non-clinical
  collaboration; staff competence and training; the preceding recommendations).
- **R/2021/135** — Care Quality Commission: review and adapt its assessment model for NHS hospital
  estates to increase scrutiny of estates-related safety concerns.

**Safety observations:** O/2021/115 national recruitment/training for engineering and estates
professionals; O/2021/116 prioritising MGPS for financial investment and management where it may not
meet future clinical need; O/2021/117 NHS Premises Assurance Model to include more specific MGPS
questions at trust level; O/2021/118 user-centred design for Central Alerting System updates.

**Safety actions:** A/2021/041 Trust procured pipeline flow meters and electronic telemetry to
monitor flow rates across the estate; A/2021/042 NHS Premises Assurance Model moving to mandatory
online reporting, summer 2021; A/2021/043 CAS issuing organisations to be accredited to issue
national patient safety alerts from mid-2021.

Every recommendation is addressed to a **national body** (NHSE/I, CQC) and concerns **governance,
competence, assurance and estates scrutiny**. None commissions measurement of delivered oxygen at
the bedside against prescription.

---

## Defects

1. **Attribution of the body is wrong in the ledger entry.** The report is **HSIB** (Healthcare
   Safety Investigation Branch) on its own front matter. HSSIB is the successor body hosting the
   page. Taking the name from the host rather than the front matter.
2. **(b) unit and endpoint error waiting to happen.** "4.2" and "3.1" are **pipeline pressure in
   bar in the HDU**, recorded during a **Trust-run deliberate pressure test** after patients had
   been moved to redistribute flow. They are not flow, not litres per minute, not bedside, not from
   the original incident, and not a comparison against any prescribed setting. Citing them in
   support of a claim about delivered oxygen versus prescription misstates the measurand, the
   location, the circumstance and the actor.
3. **(b) an attributed quantity stripped of its attribution.** "in about 10 seconds" is in
   quotation marks **in the report**, i.e. the report is quoting it from evidence, and "about" is the
   only uncertainty stated. Quoting the timing bare would present as HSIB's measurement something
   HSIB presents as someone else's words.
4. **(c) fragment 2 is the textbook cut-at-the-hinge misquotation.** "unable to identify whether the
   pressure drop in the HDU was responsible" is verbatim but severed at a disjunction. The full
   sentence is symmetric — it could not identify whether the pressure drop was responsible **or
   whether** other clinical factors were. The cut converts an even-handed non-determination into
   what reads like an unproven-but-live pipeline hypothesis.
5. **(c) fragment 1 drops its whole predicate.** "unable to conclusively determine whether the
   desaturation" stops before all three branches (pressure loss / reduction in oxygen flow / other
   factors in their care), letting a reader supply the branch they want.
6. **(c) the two formulations are not interchangeable.** Only the Executive Summary version mentions
   *flow*; 2.26 says *pressure drop* and *clinical* factors. Neither carries a citation. A claim that
   leans on "flow" must cite the Executive Summary specifically.
7. **(d) the deciding question is not in this source.** Only (i) one-incident causal
   non-determination and (iii) governance/engineering recommendations are present. The general
   quantity is represented solely by asserted qualitative physics (the hosepipe/sprinkler analogy;
   "reduces the potential pressure available to oxygen outlets later in the system") and by
   A/2021/041, a Trust action installing estate-level flow meters. "diversity factor" is absent.
   Treating the analogy or A/2021/041 as the report posing the question would overread it.
8. **(d) near-miss trap.** The report's own noted absences — the red dot plan not working, capacity
   calculations not accounting for uneven demand — are absences in *the Trust's planning*, not an
   acknowledged knowledge gap about delivered flow. They are not a flag of the gap sent for checking.
9. **(e) scope cuts against the non-finding's weight.** The report says it "has not explored the
   clinical management of patients requiring oxygen therapy in this report", yet its stated
   non-determination rests on being unable to exclude "other clinical factors". The alternative it
   cannot rule out is one it did not examine.
10. **My own read, declared.** Every full sentence here is a reconstruction (2 or 3 fragments) built
    only from consecutive returns with junctions falling inside split words; no word was inferred.
    Paragraph numbers (2.17–2.20, 2.26, 1.2.5, 1.2.6) come from the summariser's attribution, not
    from my own sight of the numbered margin. The scope sentence was served without its subject and
    is reported as served, uncompleted. No ISBN or formal report reference number is printed in the
    served text, so none is given.
