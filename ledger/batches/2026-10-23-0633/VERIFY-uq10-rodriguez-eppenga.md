# VERIFY - UQ-20261023-10: the ceftolozane 62.5% is a direction-blind on-therapy non-adjustment rate, and the Eppenga protocol announces its measurement; but the "no results paper" leg is unopened, not negative
Checker: fresh context. Budget used: 6 WebFetch (5 WebFetch calls + 1 curl retrieval that returned 0 bytes), 2 WebSearch. Date 2026-10-23.

## CLAIM

As handed to me, in two limbs:

1. That Rodriguez-Reyes M. et al., '4CPS-073 Follow-up of recommendations on dose adjustment of ceftolozane/tazobactam in renal failure', European Journal of Hospital Pharmacy 2019;26(Suppl 1):A102.2 prints "16 patients experienced a change in CrCl but dose was not adjusted accordingly in the majority of cases (n=10, 62.5%)" with the DIRECTION of the change UNSPECIFIED, and with a denominator of 16 of 46 patients rather than episodes or post-recovery windows.
2. That Eppenga W.L. et al., 'Fluctuation of the renal function after discharge from hospital and its effects on drug dosing in elderly patients - study protocol', BMC Nephrology 2015;16:95, DOI 10.1186/s12882-015-0095-4 ANNOUNCES a measurement and prints no result of any kind.

Verdict in one line: **limb 1 holds and limb 2 holds, both on full reads.** But one supporting gloss the record carries ("underdosed" as a renal-reduction artefact) is NOT printed anywhere in the abstract and must be struck; the entry's own quotation of the 62.5% sentence drops its scope-setting opener, which is the very word that makes the denominator point; and the leg that the protocol has produced no results publication is NOT established - I located a candidate document of exactly the right kind and could not read it.

## READ LEVEL

**(a) Sub-claim (a), answered.**

- **Rodriguez-Reyes et al. 2019 (4CPS-073): FULL TEXT.** The abstract *is* the document, and the document was reached. Route that worked, first try, one fetch: `https://ejhp.bmj.com/content/ejhpharm/26/Suppl_1/A102.2.full.pdf`. I ran two passes over it: a front-matter/whole-text pass and then a second, dedicated, term-aimed sweep for direction words (per the one-sweep rule). The Results section below is a **reconstruction from 16 ordered consecutive fragments**, assembled only from consecutive returns; I completed no cut string by inference. Nothing in this source is unread.
- **Corroborating route, same document:** `https://eahp.eu/congress_poster_walk/24-4cps-073/`, the EAHP congress listing. **This is the same document, not a second source** - a repeated title return is a title match, never corroboration. One thing it did yield that the BMJ PDF did not: the poster's own table headers, "Demographic and clinical data (N=46)", "Underdosed (n=18)", "Overdosed (n=11)". And one trap it set: that page's served text **does not contain the string "62.5"**. That is a fact about the EAHP page's rendering, *not* about the abstract, which prints "(n=10, 62.5%)" plainly at the BMJ route. Anyone sweeping only the EAHP page would file a false absence.
- **Eppenga et al. 2015 (BMC Nephrology 16:95): FULL TEXT**, all 7 PDF pages. Route that worked, first try, one fetch: `https://link.springer.com/content/pdf/10.1186/s12882-015-0095-4.pdf`, exactly as the entry's record predicted.
- **Eppenga W.L., PhD thesis, Jeroen Bosch Hospital / 2016 (the candidate results-bearer for sub-claim (e)): COULD NOT READ.** This is **COULD NOT READ, not NOT FOUND.** The document exists and I have its URL; I failed to open it. See ROUTES THAT FAILED.

**Sub-claims I did not reach, marked COULD NOT CHECK rather than reported as negative findings:**

- **(e) is PARTLY reached.** One search ran and returned a candidate results-bearing document; that document would not open at either route available to me and the budget was then spent. I did **not** establish that no results publication exists. **My budget ran out; that is a property of my check, not of the literature.**
- **(f) is PARTLY reached** as to Hughes et al., whose front matter was not among my sources and which I had no budget to retrieve. See GROUPS below.
- I did **not** re-test the record's own side-claim that "no full paper was locatable" from the congress abstract. I ran no search for one. That claim is itself an unenumerated universal and I leave it where I found it: **unverified**, neither confirmed nor contradicted by me.
- I did not open `https://www.onderzoekmetmensen.nl/en/node/43767`, the Dutch research registry record that surfaced for the Eppenga cohort. Unopened.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Front matter, taken from the front matter

**Source 1, as printed in the BMJ front matter** (affiliation superscripts as printed):

> 1M Rodriguez-Reyes*, 1E López-Suñé, 1E Calvo-Cidoncha, 1M Tuset-Creus, 1C Codina-Jané, 2A Soriano-Viladomiu

- Affiliations: (1) Hospital Clínic, Pharmacy Department, Barcelona, Spain; (2) Hospital Clínic, Infectious Diseases Department, Barcelona, Spain.
- Title as printed, **title case**: "Follow-up of Recommendations on Dose Adjustment of Ceftolozane/Tazobactam in Renal Failure". Abstract number 4CPS-073.
- Citation line printed on the page: **EJHP 2019;26(Suppl 1):A1-A311**. Printed page locator: **A102**. No issue number (it is a supplement).
- **Abstract DOI, printed in the header: 10.1136/ejhpharm-2019-eahpconf.222.** The entry carries no DOI for this source.
- Conflict of interest: "No conflict of interest."

**Source 2, as printed in the BMC Nephrology front matter, full list in printed order:**

> Willemijn L. Eppenga; Wietske N. Wester; Hieronymus J. Derijks; Rein M.J. Hoedemakers; Michel Wensing; Peter A.G.M. De Smet; Rob J. Van Marum

- Title: "Fluctuation of the renal function after discharge from hospital and its effects on drug dosing in elderly patients - study protocol". BMC Nephrology, volume **16**, **article number 95** (no issue; "95" is an article number, not a page - the PDF's own pages run 1-7). Year 2015. DOI 10.1186/s12882-015-0095-4. Received 26 March 2015; accepted 25 June 2015.
- **Trial registration: NONE.** No registry identifier appears in the text. This matters for sub-claim (e): the protocol gives no registration number to search by.

### (c) The congress abstract

**The quoted string, verified.** The sentence as printed is:

> "During treatment, 16 patients experienced a change in CrCl but dose was not adjusted accordingly in the majority of cases"

> "(n=10, 62.5%)."

Those are fragments 10 and 11 of the consecutive reconstruction, verified at the junction. The characters the entry quotes are verbatim. **But the entry's quotation begins at "16 patients" and drops the sentence's opening words, "During treatment,".**

*What the sentence's opening words scope:* "During treatment," scopes the whole clause to the **on-therapy window** - and the abstract prints that window's length: "Average treatment duration was 8.4 days." The clause **ASSERTS** the quantity (it is not a denial and not a move away from one). Its **modality is plain indicative** ("was not adjusted"), hedged only by "in the majority of cases", which the parenthesis then quantifies. It is **not a conditional** - neither necessary nor sufficient in form - and **not a disjunction**. The use the entry makes of it survives all three answers.

The dropped opener cuts *in the entry's favour*, which is why it still needs fixing: "During treatment," is the exact word that rules out a post-recovery or post-discharge window. Quoting the sentence without it leaves the entry asserting the window rather than quoting it.

**The denominator.** The 62.5% is **10/16**. *MY OWN ARITHMETIC: 10/16 = 0.625.* So the denominator of the printed percentage is **16**, and the 16 are **patients** - "16 patients experienced a change in CrCl" - not episodes, not change-events, not post-recovery windows. The unit of analysis is the patient. The 16 are drawn from the included total, printed as "Forty-six patients were included".

**One correction to how the entry states this.** The abstract prints 46 and prints 16; it **does not print a percentage for the 16**. "16 of 46" is therefore *an inference from two printed numbers*, sound but derived, and should be labelled as such rather than carried as a printed denominator. **And there is a numeric collision a later reader will fall into:** the abstract contains a *second* sixteen -

> "Sixteen patients (34.8%) were admitted to the intensive care unit."

*MY OWN ARITHMETIC: 16/46 = 0.3478.* So 34.8% is arithmetically what 16/46 is, but as printed **34.8% is the ICU share, not the CrCl-change share**. Anyone who reaches for "the percentage behind the 16" will pick up the ICU figure.

**DIRECTION: not stated. Confirmed by a dedicated second sweep, not by a broad one.** I ran a sweep aimed only at direction terms. Absent from the document: "improve", "improvement", "worsen", "deteriorat", "recover", "recovery", "increase", "decrease", "higher", "fell", "rose", "normalis", "normaliz", "acute kidney injury", "AKI", "augmented". The single hit for "lower" is in the dosing definition, not in any statement about patients' renal trajectory:

> "Underdosing was defined as any dose lower than the Summary of Product Characteristics recommended dose (based on CrCl)"

The abstract says only that CrCl "changed". **Nowhere does it say whether it rose or fell**, and "not adjusted accordingly" does not encode a direction either - "accordingly" points back to the SPC CrCl band, which can be crossed in either direction. The 10 non-adjustments therefore **pool un-made increases with un-made reductions.**

**The point-in-time adequacy figures, verified verbatim:**

> "Evaluation at first day of therapy showed that 29 patients (63.0%) received an inappropriate dosage,"

> "18 (39.1%) were underdosed and 11 (23.9%) were overdosed."

*MY OWN ARITHMETIC, all against the printed base of 46: 29/46 = 0.6304; 18/46 = 0.3913; 11/46 = 0.2391; and 18 + 11 = 29.* Internally consistent, denominator 46 throughout, and the record's "29/46, 63.0% inappropriate; 18 underdosed, 11 overdosed" is **correct as carried**. The scope-setting opener here is "Evaluation at first day of therapy", which confirms the record's characterisation of these as **point-in-time** figures: day 1, not a during-treatment trajectory. These are a *different measurement from the 62.5%* and share no denominator with it.

**Is "underdosed" a renal-reduction artefact? NOT PRINTED - and this is where the record overreaches.** The abstract defines underdosing by one criterion only, quoted above: any dose below the SPC recommendation, which is CrCl-banded. It **states no mechanism**. It does not say that under-dosing arose from clinicians reducing doses for renal impairment more than the band requires. So on the read: **the abstract DEFINES "underdosed" as a deviation below an SPC CrCl-based dose and MEASURES its frequency; it does not attribute it to renal reduction.** Calling it a renal-reduction artefact is an attribution the document does not make.

*MY OWN REASONING ABOUT THE MECHANISM, NOT A SOURCE FINDING:* two routes to "underdosed" are live in this cohort and the abstract cannot distinguish them. One is renal over-reduction - 41.3% had CrCl <60 mL/min at treatment start ("At the beginning of treatment, 41.3% had CrCl <60 mL/min."). The other has nothing to do with renal function at all: ceftolozane/tazobactam carries a higher licensed dose for nosocomial pneumonia than for intra-abdominal or urinary infection, and "respiratory (43.5%)" was the commonest site here, so a dose correct for cUTI and given for pneumonia reads as "underdosed" with normal kidneys. **Nothing in the abstract adjudicates between these, and no search of mine ran on it.** What would ground it: the poster's per-patient dosing table, or a full paper if one exists - neither of which I opened.

### (d) The protocol

**It prints no result of its own. Confirmed on a full read.** The forward-looking sentence, with its opening words, from the abstract's Discussion:

> "This study will provide data on changes in renal function in elderly patients after discharge from the hospital"

and in the main-text Discussion:

> "this study will address whether closer monitoring of renal function and adaptation of renally excreted drugs"

*What the opening words scope:* "This study will provide" scopes the clause to the study's **future output**. The clause neither asserts nor denies the quantity - it **RECORDS A MOVE AWAY from asserting it**, promising it instead. Modality: future, a commitment, not a measurement. On the ledger's own vocabulary this source **ANNOUNCES** the quantity. It also **BOUNDS** it, in the sample-size calculation only.

**The medication limb is a counterfactual NEED, not an action taken. Quoted:**

> "The endpoints will be the percentages of patients in whom a change in the medication would be needed"

"would be needed" is subjunctive and counterfactual; the comparator is the medication "needed at discharge". The secondary endpoint is likewise not an action:

> "the percentage of patients in whom the prescribed drugs are not in accordance with the Dutch guidelines"

That is guideline concordance of what was prescribed, not a count of changes clinicians made. **Neither endpoint, as defined, measures dose changes actually made.** The Methods do say the team will review medication histories for changes made after creatinine results are reported, but that review is **not defined as an outcome**.

**Every number in the paper is a design or planning number**, not a measurement: 195 analysable patients, 244 to recruit at an assumed 20% loss, power and alpha, the renal-function group boundaries, the drug-dosing thresholds. The top-10 drug list is **external** 2012 SFK prescription data, not this study's data. **One trap here:** the paper prints an assumed **5% improvement and 15% deterioration**. Those are **priors fed into the sample-size calculation, not findings** - they are the easiest thing in this document to mistake for the result the candidate asks for, and they are the shape of the right answer with none of its content.

## REGIME

**Rodriguez-Reyes et al. 2019, in its own words.** Population: 46 hospitalised patients treated with ceftolozane/tazobactam, "Forty-six patients were included", mean age 65.4 +/- 16.2 years, 65.2% male, mean CrCl 61.8 +/- 30.6 mL/min, "Sixteen patients (34.8%) were admitted to the intensive care unit", sites respiratory 43.5% / urinary 30.4% / intra-abdominal 15.2%, commonest isolate "multidrug-resistant Pseudomonas aeruginosa (90.9%)", therapy "basically targeted (73.9%)". Design: retrospective observational, single third-level hospital (Hospital Clinic, Barcelona), **January to August 2018**. Unit of analysis: **the patient**. Operating window for the 62.5%: **"During treatment"**, mean duration 8.4 days. Instrument/threshold: the SPC's CrCl-banded recommended dose, with underdosing defined as "any dose lower than" it.

**Does the candidate's claim sit inside that regime? No.** The required overlap check, in both directions:

- **Numerator class.** The abstract's numerator is *cases, within 16 patients whose CrCl changed on therapy, in which the ceftolozane/tazobactam dose was not adjusted to the SPC CrCl band* - an **inaction**, direction-blind, one drug.
- **Denominator.** 16 (patients whose CrCl changed during treatment) - checked against the near neighbours it is **not**: not 46 (the included cohort, which is the base for 63.0%/39.1%/23.9%), not 30 (the targeted-therapy effectiveness subgroup, "(n=30)"), and not a count of change-episodes or post-recovery windows.
- **What the source's class MISSES relative to the candidate's quantity:** any isolation of renal **improvement**; any post-recovery or post-discharge window (its window closes when the antibiotic stops, at a mean of 8.4 days); any drug other than ceftolozane/tazobactam; any count of changes **made**.
- **What it INCLUDES that the candidate excludes:** renal **deteriorations**, pooled indistinguishably with improvements; patients needing a *reduction*; failure-to-act rather than action; and a critical-care-weighted, MDR-Pseudomonas-weighted single-centre antibiotic cohort.

A number one word away from the claim's is a different quantity, and this one is several words away: **inaction, not action; either direction, not improvement; on-therapy, not post-recovery.**

**Eppenga et al. 2015, in its own words.** Consecutive patients **aged 70 or older** with eGFR **below 60 mL/min/1.73 m2** (MDRD) on admission to a **geriatric ward**, community-dwelling for at least 2 months after discharge; excluded if eGFR below 10 or discharged for end-of-life care. Single-centre prospective observational, geriatric ward of Jeroen Bosch Hospital, 's-Hertogenbosch, Netherlands, 800-bed teaching hospital. Time points: admission, discharge, 14 days and 2 months after discharge. Unit: the patient, with repeated measures, plus drug-level counts within patient. Renal groups (Table 1): >80; 50-80; 30-50; <30; end-stage requiring dialysis, all mL/min/1.73 m2. *An internal inconsistency I noted on the read, labelled as mine:* the Table 1 group-2 range starts at 50 while the inclusion cut-off is 60, so the group boundaries and the inclusion criterion are not flush.

**Does the claim sit inside that regime?** The regime is the right *shape* for the candidate's question - post-discharge, improvement and deterioration both, medication consequences - which is precisely why this source is dangerous to the entry. But **a result proved under one set of assumptions is silent outside them, and a result not yet produced is silent everywhere.** This document measures nothing. It is a definition-and-design citation, and a design citation is not an evaluation.

## DEFECTS FOUND

1. **The record's gloss that "underdosed" is a renal-reduction artefact is not printed and should be STRUCK.** The abstract defines underdosing solely as a dose below the SPC CrCl-based recommendation and gives no mechanism. A competing non-renal explanation (the pneumonia dose) is live in this cohort and unadjudicated. This is the one place the entry asserts something its source does not say.
2. **The entry's quotation of the 62.5% sentence drops its scope-setting opener, "During treatment,".** Verbatim from "16 patients" onward, grammatically clean on both sides of the cut - and still defective, because the dropped words are the ones that establish the on-therapy window the entry is relying on.
3. **"16 of 46" is an inference, not a printed denominator.** The abstract prints 46 and prints 16 and prints no percentage joining them. Carry it as derived.
4. **An unflagged numeric collision:** the abstract's *other* sixteen, "Sixteen patients (34.8%) were admitted to the intensive care unit", makes 34.8% look like the CrCl-change share. It is not. The entry should name this trap so a later reader does not walk into it.
5. **The protocol's assumed 5% improvement / 15% deterioration are sample-size priors and should be named as such in the entry**, because they are the numbers in that document most likely to be mistaken for its results.
6. **The leg that no results publication exists is NOT ESTABLISHED, in either direction.** One search ran. **One sweep's silence is not absence.** The search returned a candidate of exactly the right kind and I could not open it. Writing "no results paper" from this would be an unenumerated universal; writing "a results paper exists" would be an unenumerated existence claim. The honest classification is **UNENUMERATED**: see below.
7. **Minor front-matter gaps:** the entry carries no DOI for the congress abstract (10.1136/ejhpharm-2019-eahpconf.222); the printed page locator is A102 (the ".2" being the BMJ sub-locator); the BMJ front matter prints "Rodriguez-Reyes" unaccented and the EAHP page "Rodríguez-Reyes"; the BMJ title is printed in title case. "16:95" is right, but 95 is an **article number**, not a page.

### (e) The deciding search, answered with instances named

**What KIND of document could settle whether the protocol produced results?** A results paper in a journal, a thesis chapter reporting the cohort, or a registry results posting. **A thesis is that kind of document** - Dutch pharmacy/clinical-pharmacology protocols of this sort routinely appear as a thesis chapter before or instead of a standalone paper, and a thesis prints full results tables.

- **Instance located, right kind, NOT OPENED:** W.L. Eppenga, PhD thesis, 2016, hosted by Jeroen Bosch Hospital at `https://www.jeroenboschziekenhuis.nl/sites/default/files/documents/2019-06/klinische-farmacologie-2016-proefschrift-willemijn-eppenga.pdf`. Same first author, same hospital, dated the year after the protocol. **I am naming it as a lead and calling it a lead, not a finding.** I do not know what is in it.
- **Instance located, right kind, NOT OPENED:** `https://www.onderzoekmetmensen.nl/en/node/43767` (and `/pdf`), the Dutch research registry record that surfaced for this cohort. The protocol itself **names no registration**, so this was a search hit, not a citation follow.
- **Instances I opened:** only the protocol itself, which prints nothing.
- **No standalone results paper surfaced in the one search I ran.** That is **one sweep**, and the search terms were weighted to the protocol's own title words, which is exactly how a differently-titled results paper hides.

**Classification: UNENUMERATED.** Not "true over the instances I opened", because I opened no instance bearing on it; not "false". The entry must not close this leg.

**Consequence for the entry's wording.** The entry's protocol limb divides in two, and the halves have different statuses. "This 2015 document announces and does not measure" is **settled by a read** - I confirmed it in full text, and the entry's characterisation of it is exact. "No results from this protocol have since been published" is **not settled at all**, and if the entry rests on that, then the worry quoted to me - that the results check is "argued shut by design rather than by a read" - **is sustained for that half.** Not because the design argument is wrong, but because it is doing work a read has not done.

### (f) Groups, not citations

**These two sources share no authors with each other.** Hospital Clínic, Barcelona (Rodriguez-Reyes, López-Suñé, Calvo-Cidoncha, Tuset-Creus, Codina-Jané, Soriano-Viladomiu) against Jeroen Bosch Hospital and Dutch academic co-authors (Eppenga, Wester, Derijks, Hoedemakers, Wensing, De Smet, Van Marum). Different countries, different institutions, different clinical questions, **zero overlap**. So these are **two independent groups**, and this claim is *not* a case of one group citing itself - which is a point in the entry's favour and worth recording as such.

**As to Hughes et al.: PARTLY CHECKED.** Hughes et al. was not among the sources I was given and I had no budget left to retrieve its front matter. What I *can* say from front matter I did read: **neither printed author list contains any author named Hughes.** What I **cannot** say is whether some *other* author of the Hughes paper also appears on either of these - that needs the Hughes front matter. **COULD NOT CHECK**, and this is a spent budget, not an absence.

## ROUTES THAT FAILED

- `https://www.jeroenboschziekenhuis.nl/.../klinische-farmacologie-2016-proefschrift-willemijn-eppenga.pdf` via **WebFetch**: the fetch reached the host but the summariser received no extractable text - it reported the content as **"[binary data]"** and answered nothing. The host did not block it; the PDF did not render to text.
- The same URL via **curl**: `curl: (56) CONNECT tunnel failed, response 403`, `HTTP 000 size 0`, zero bytes written. A 403 at this proxy is tool-scoped, and the usual remedy is to fall back to WebFetch - but WebFetch is the route that had already failed on extraction, and the fetch budget was then spent. **I did not route around the proxy and did not touch TLS settings.**
- No search classifier refusal occurred. Both searches ran and returned.
- **No route to either named document failed.** Both the EJHP abstract and the BMC Nephrology protocol opened on the first attempt at the route their citation names, one fetch each.
- Not attempted, for budget: the onderzoekmetmensen.nl registry record; any search for a differently-titled Eppenga results paper; the Hughes et al. front matter.

## BEARING ON THE LEDGER ENTRY

**HOLD the claim's substance; NARROW its supports; and CONVERT one leg into an explicit promotion condition.**

**Limb 1 (the congress abstract) HOLDS, and holds on a full read of the document.** The 62.5% is real, printed, and verbatim as the entry has it. Its direction is unspecified - confirmed by a dedicated term sweep, in which every direction word is absent and the one near-hit belongs to the dosing definition. Its denominator is 16 patients, not episodes and not post-recovery windows, and the 16 sit inside the printed 46. The quantity is **inaction in either direction over an on-therapy window of mean 8.4 days**, where the candidate asks for **changes made after improvement**. On the two-way overlap test it misses improvement, misses the post-recovery window, misses every other drug, and misses changes actually made, while including deteriorations and critical-care antibiotic management. **It is not prior art for the candidate's quantity.** Three fixes to how the entry carries it: restore the opener "During treatment,"; label "16 of 46" as derived; and strike the "renal-reduction artefact" gloss on "underdosed", which the abstract does not support.

**Limb 2 (the protocol) HOLDS as to the document.** It prints no result of any kind; every number in it is design, planning or external. Its forward-looking sentence - "This study will provide data on changes in renal function in elderly patients after discharge from the hospital" - records a promise, not a measurement, and its medication endpoint is explicitly counterfactual: "the percentages of patients in whom a change in the medication would be needed". **ANNOUNCES, and bounds; does not measure.** Add to the entry that its 5%/15% figures are sample-size assumptions, and that it registers no trial.

**But the entry's results check must be reopened, and this is the one place I move the entry against itself.** Nothing I did establishes that no results publication has appeared. I ran one search, it returned a candidate of exactly the right kind - the first author's own 2016 thesis - and that candidate **would not open at either route I had**. So the entry may not say, and must not imply, that the protocol produced nothing. **Convert that leg to a promotion condition:** *if W.L. Eppenga's 2016 thesis (or the onderzoekmetmensen.nl record 43767, or a differently-titled results paper from this cohort) prints a share of medication changes made or not made after renal function improved, this prior becomes live and UQ-20261023-10 must be re-graded.* Until someone opens the thesis, that half of the limb is **UNENUMERATED** - and on that half, the objection that the check was "argued shut by design rather than by a read" is sustained.

**One structural point in the entry's favour, which it should claim explicitly:** these two priors are **two independent groups**, Barcelona and 's-Hertogenbosch, with no shared authors. Neither list contains a Hughes. So whatever else is true, this claim does not rest on a single group citing itself.
