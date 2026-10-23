# VERIFY - UQ-20261023-06 existence claim: the declared frame's satisfying set is NON-EMPTY, instanced on DCLP3 (iDCL pivotal)
Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

THE EXISTENCE CLAIM. That the candidate's declared frame has a non-empty satisfying set: at least
one COMPLETED randomised trial or registry cohort that

- (i) reports a consensus CGM metric as a primary or key secondary endpoint,
- (ii) used a sensor model for which a pressure-artifact detector with a stated operating point has
  been published,
- (iii) provides per-reading two-arm trace access.

The record grades this UNVERIFIED on the ground that "no agent opened a single qualifying trial."

LOGICAL FORM, stated because this ledger keeps losing kills on it. This is an EXISTENTIAL. One
opened instance settles it affirmatively; no number of unopened near-misses settles it negatively.
The record's grade is therefore not a finding about the frame but a finding about the batch's
reading: "no agent opened one" is a fact about the agents. I opened one.

**VERDICT: INSTANCED.** The instance is DCLP3 / the iDCL pivotal trial. All three clauses are
quoted and, for clause (iii), verified by downloading the data and counting rows rather than by
reading a promise on a page. One residual on clause (ii) is recorded in DEFECTS FOUND and it does
not touch the existence claim.

## READ LEVEL

**1. DCLP3 clinical protocol - FULL TEXT.**
`DCLP3_Clinical_Protocol_Pivotal_Study_v10.0 5 NOV 2018.pdf`, shipped inside the Jaeb public
dataset zip. Extracted locally with `pdftotext -layout` to 2,950 lines and read directly. No
paywall, no fetch: the document travels inside the dataset.

**2. DCLP3 public dataset - FULL, DOWNLOADED AND INSPECTED (not merely listed).**
Anonymous HTTPS GET returned `HTTP:200 SIZE:195304936`. 90 files. I converted encodings, joined the
CGM trace file to the randomisation roster, and computed per-arm row counts and sampling intervals.
This is the strongest read level in the note and it is the one clause (iii) turns on.

**3. Idi et al. 2025, the pressure-artifact detector - PARTIAL.**
Sections read as served: Abstract, II-B (data), III-D (threshold selection), IV-A (simulated
results), IV-B (real-data results), front matter. NOT read: Tables VII and VIII in Appendix A, which
hold specificity, precision, F1, AUROC and AUPRC. The served text did not reproduce those numbers,
so I do not quote them and I do not treat them as absent - they are printed in the paper and unread
by me.

**4. Brown et al. 2019, the primary publication - PARTIAL.**
Front matter, primary-outcome sentence, randomisation counts, device sentence, data-sharing
sentence. Read from an institutional journal-club PDF copy, not from nejm.org.

**5. ClinicalTrials.gov record NCT03563313 - COULD NOT READ. ROUTE FAILURE, NOT BUDGET.**
I had fetches remaining when both routes failed; see ROUTES THAT FAILED for the exact errors. This
matters only for the *form* of the endpoint quotation: I wanted the registry's own wording and I
could not get it, so I quote the protocol and the paper instead, which are better sources for an
endpoint anyway. No sub-claim went unreached for want of budget.

### Every candidate my searches returned, and whether I OPENED it

A returned title is not a checked trial, so here is the full return with its read status. My WebFetch
of the Jaeb index returned 39 datasets. 31 carry the page's only content note, "* Dataset contains
CGM Data"; I reproduce the page's own shortened study labels.

OPENED AND FULLY INSPECTED - 1 of 39:

- **DCLP3 / iDCL trial, NCT03563313** - `DCLP3 Public Dataset - Release 3 - 2022-08-04.zip`.
  Downloaded, unzipped, protocol read, traces counted per arm. THE INSTANCE.

RETURNED, CGM-flagged, NOT OPENED - 30 (31 CGM-flagged rows less the one I opened). Each is a possible further instance and none is counted
toward or against the verdict: TIGHT NCT05135676; PEDAP NCT04796779; AIDE T1D NCT04016662; CLVer
NCT04233034; IOBP2 NCT04200313 (I retrieved its download URL and did not use it); healthy
non-diabetic CGM age <7; GLAM; FLAIR NCT03040414; Loop observational NCT03838900; DCLP5 NCT03844789;
DAN05 NCT02925299; CITY NCT03263494; HYCLO; WISDM NCT03240432 (URL retrieved, not used); SENCE
NCT02912728; residual C-peptide; CGMND; Mini-Dose Glucagon exercise pilot NCT02660242; combined
DIAMOND/HypoDE/REPLACE-BG GMI dataset; racial differences in mean CGM glucose vs HbA1c; REPLACE-BG
NCT02258373; Insulin and Device Study; CTR3 NCT02137512; metformin RCT in overweight adolescents
NCT01881828; severe hypoglycemia in older adults; PSO4 NCT01823341; PSO3 NCT01591681; PSO1
NCT01736930; JDRF CGM RCT NCT00406133; inpatient CTR NCT01271023.

RETURNED, flagged as NOT containing CGM data, NOT OPENED: T1DexiP; T1DEXI; home HbA1c validation;
ReCGM; T1D Exchange Registry; SEEDS; nutrition dataset; Mini-Dose Glucagon non-severe hypoglycemia
NCT02411578.

DETECTOR-LITERATURE RETURNS from my one detector search, 9 links. OPENED: 1 - the
research.unipd.it PDF of Idi et al. 2025. NOT OPENED: 6 further research.unipd.it handles, which I
count as TITLE MATCHES FROM ONE REPOSITORY AND ONE GROUP, not as six sources; a patsnap.com blog
page on "CGM sensor drift mechanisms and correction methods", which is an aggregator restatement and
resolves to no paper, so I did not grade it; and PMC4455457, hard-blocked here and not converted -
see defect 6.

PRIMARY-PUBLICATION RETURNS from my one NEJM search, 9 links. OPENED: 1 - the institutional PDF
copy, which carried the front matter. NOT OPENED: jci.org reference stub, x-mol.com record, two
Dexcom HCP marketing pages, two ucdenver profile pages, massmed CME page, diabetescenters.org
bibcite stub. None of these is the kind of document that could settle an endpoint or a front matter
question better than the article itself, so none was worth a fetch.

The existential needed one instance. I opened one, and I am naming the 38 I did not so that the
count in this note cannot be mistaken for a survey.

## WHAT THE SOURCE SAYS (quotations as served)

### Clause (i) - a consensus CGM metric as PRIMARY. Verified.

Protocol v10.0, section 10.2 "Statistical Hypotheses", lines 1313-1314:

> "The primary outcome for this study (6-month randomized trial) is CGM-measured % in range
> 70-180 mg/dL."

SCOPE-SETTING OPENER, as this ledger now requires. The sentence opens "The primary outcome for this
study (6-month randomized trial) is" - the parenthesis scopes the claim to the 6-month randomised
phase, which is exactly the phase the frame is about. The clause ASSERTS the quantity as the primary
outcome; it does not deny it, hedge it or record a move away from it. There is no competing
formulation elsewhere in the protocol: the synopsis table at line 377 says the same thing in other
words - "The primary outcome is time in target range 70-180 mg/dL measured by CGM in CLC group vs.
SAP group at 6 months".

Protocol section 10.7.1 "Hierarchical Analyses", lines 1455-1464. The protocol does not merely list
secondary outcomes, it NAMES six as key by giving them alpha protection:

> "To preserve the overall type 1 error for selected key secondary endpoints, a hierarchical testing
> procedure will be used."

and the ordered list, lines 1459-1464:

> "CGM-measured % in range 70-180 mg/dL (primary outcome)"
> "CGM-measured % above 180 mg/dL"
> "CGM-measured mean glucose"
> "HbA1c at 26 weeks"
> "CGM-measured % below 70 mg/dL"
> "CGM-measured % below 54 mg/dL"

Five of the six are consensus CGM metrics in the Battelino-consensus sense: TIR 70-180, TAR >180,
mean glucose, TBR <70, TBR <54. The clause the frame needs is satisfied twice over - as primary AND
as alpha-protected key secondary.

Brown et al. 2019, as printed in the paper, the primary outcome:

> "the percentage of time that the blood glucose level was within the target range of 70 to 180 mg
> per deciliter"

NUMERATOR CLASS AND DENOMINATOR, both directions, because a metric one word away is a different
metric. The protocol's metric is "% in range 70-180 mg/dL", CGM-measured: numerator is CGM readings
falling in [70,180] mg/dL, denominator is CGM readings available in the analysis window, not
wall-clock time and not fingerstick readings. Its near neighbours in the same dataset are distinct
columns and I checked them: the shipped `gluIndices.txt` carries `gluInRange` AND `gluInRange140`
(a 70-140 range) side by side, so the 70-180 column is not being read off a tighter-range neighbour.
What the consensus class MISSES relative to the frame's wording: nothing I can see - "consensus CGM
metric" is broader than this one metric. What it INCLUDES that a careless reading would exclude:
`gluInRange` here is a percentage, not minutes or hours, and the file carries `gluHours` separately
as the denominator in hours.

The dataset ships these metrics precomputed. Header of `Data Files/gluIndices.txt`, verbatim:

> `PtID|analysis|dayTime|period|gluHours|gluBelow54|gluBelow60|gluBelow70|gluLBGI|gluHypoRate|gluInRange|gluInRange140|gluCV|gluSD|gluMean|gluAbove180|gluAbove250|gluAbove300|gluHBGI`

### Clause (ii) - a published pressure-artifact detector with a stated operating point, for this sensor model. Verified at sensor-model level.

The sensor model. Protocol section 6.1.2 "Continuous Glucose Monitoring", lines 857-860:

> "The study CGM will include Dexcom G6 transmitter and sensors when using the Tandem t:slim
> X2 with Control-IQ technology. This may not be an FDA-approved device system at the start of
> the study, but may become approved during the course of the study. The CGM sensor will be
> replaced at least once every 10 days."

SCOPE-SETTING OPENER, and here it bites, so I flag it rather than cut it away. The G6 sentence
carries the trailing scope "when using the Tandem t:slim X2 with Control-IQ technology", which is
the INTERVENTION arm's configuration. The sentence ASSERTS G6 for that configuration. It does not,
on its own characters, assert G6 for the control arm. See DEFECTS FOUND, defect 1.

Protocol synopsis, treatment groups, lines 387-391:

> "Intervention Group: t:slim X2 with Control-IQ Technology and Study CGM."
> "Control Group: Sensor-augmented pump (SAP) with no automated insulin delivery, and study CGM"

Protocol section 5.2 "Procedures for the SAP Group", lines 773-774:

> "Participants in the SAP group will use an insulin pump with no automated insulin delivery in
> conjunction with the study CGM, study blood glucose meter and study ketone meter."

Brown et al. 2019, as printed:

> "a continuous glucose monitor (Dexcom G6, Dexcom)"

and, for the control arm:

> "Patients in the control group received a continuous glucose monitor."

The detector. Front matter taken from the paper's own front matter, not from a short form:

> Authors in printed order: Elena Idi, Eleonora Manzoni, Andrea Facchinetti, Giovanni Sparacino,
> Simone Del Favero
> Title: "Unsupervised Retrospective Detection of Pressure Induced Failures in Continuous Glucose
> Monitoring Sensors for T1D Management"
> Venue: IEEE Journal of Biomedical and Health Informatics, Vol. 29, No. 2, pp. 1383-1396,
> February 2025. DOI 10.1109/JBHI.2024.3465893

Its instrument, quoted from Section II-B: the real data were collected

> "using the Dexcom G6 CGM sensor (Dexcom Inc., San Diego, CA)"

PUBLISHED IS NOT PERFORMED, so here are the operating-point numbers, named, with where they are
printed, and with what I could and could not pin down.

- Real Dexcom G6 data, Isolation Forest, the best-performing method: **recall 0.55**, printed in
  Section IV-B and in Table V; the Abstract renders the same figure as "55%". False-alarm rate on
  the same traces: the Abstract says roughly **"3 false alarms in 10 days"**; Section IV-B gives
  "less than 3 in 10 days" and also reports 3 to 4 FP in 10 days across methods. Per-subject spread,
  Section IV-B and Fig. 8: **median per-subject recall 0.76**, and **12.5% of traces have recall
  below 0.3**.
- Simulated test set, 20 virtual subjects: **recall 74%**, printed in the Abstract, Section IV-A and
  Tables III/VII, "generating only 0.17 FP/day".
- DENOMINATOR, checked and NOT found: the artifact count that is the recall denominator is not
  stated numerically in the text I read. So the paper PRINTS a recall and does not print its
  denominator in the sections served to me. I record that as a gap in my read, not as a defect in
  the paper - Tables VII and VIII are unread.
- Threshold: selected by minimising J(thr), Eq. 6-7, Section III-D. The numeric threshold is not
  reported. For real data, separate day (7am-11pm) and night (23-7) thresholds were tuned,
  Section IV-B.

The clause asks only whether a detector "with a stated operating point has been published" for the
sensor model. Recall 0.55 at ~3 false alarms per 10 days on Dexcom G6 traces, printed in a numbered
section and a numbered table of a journal paper, is a stated operating point. Clause (ii) holds.

### Clause (iii) - per-reading trace access for BOTH arms, to a third party. Verified by inspection.

This is the clause where "what a page promises" and "what is there" come apart, so I downloaded the
data. The Jaeb index page, read first, states no access terms at all - no registration, no login, no
data-use agreement, no fee, no citation requirement. Rather than take that as permission, I tested
it: a plain anonymous GET to the S3 object returned

> `HTTP:200 SIZE:195304936`

No credential, no click-through, no DUA. That is third-party access demonstrated, not promised.

Inside, `Data Files/cgm.txt` is plain ASCII (`file`: "ASCII text, with CRLF line terminators") with
the header, verbatim:

> `PtID|Period|DataDtTm|CGM`

and first data rows, verbatim:

> `1|1. Baseline|11DEC17:23:59:25|172`
> `1|1. Baseline|12DEC17:00:04:24|170`
> `1|1. Baseline|12DEC17:00:09:24|167`

One row per reading, with a timestamp to the second and a glucose value. **9,032,236 rows**,
168 distinct PtIDs, two Period values: "1. Baseline" and "2. Post Randomization".

MY OWN ARITHMETIC, from joining `cgm.txt` to `Data Files/PtRoster_a.txt` on PtID and grouping by
that roster's `trtGroup` column. The roster holds 170 rows: 168 carrying an arm (112 `CLC`,
56 `SAP`) and 2 carrying none; `PtStatus` is 168 "Completed" and 2 "Dropped" - i.e. the two
arm-less rows are pre-randomisation dropouts, and every randomised participant is marked Completed.
Rows of per-reading CGM by arm and period:

| arm | period | rows |
|---|---|---|
| CLC | 1. Baseline | 402,863 |
| CLC | 2. Post Randomization | 5,698,148 |
| SAP | 1. Baseline | 199,240 |
| SAP | 2. Post Randomization | 2,731,984 |

and distinct participants carrying post-randomisation readings: **CLC 112, SAP 56** - every single
randomised participant in both arms, none missing.

Still MY OWN ARITHMETIC: that these are per-reading traces and not a reduced series. For one
participant per arm, post-randomisation:

- PtID 10, CLC: 51,882 readings spanning 2018-04-19 15:04:30 to 2018-10-19 23:58:27; median
  inter-reading gap **300 s**; 10th percentile 300 s; 98.2% of gaps <= 301 s.
- PtID 9, SAP: 41,533 readings spanning 2018-01-19 12:05:34 to 2018-07-20 05:39:00; median gap
  **300 s**; 10th percentile 299 s; 96.6% of gaps <= 301 s.

Native 5-minute Dexcom cadence, six-month spans, both arms. The dataset also carries
`Pump_CGMGlucoseValue.txt` (223 MB) and `DexcomClarityCGM_a.txt` (767 MB) as further per-reading
sources. Clause (iii) holds.

### Completion

Protocol front matter, verbatim: "The International Diabetes Closed Loop (iDCL) trial: Clinical
Acceptance of the Artificial Pancreas / A Pivotal Study of t:slim X2 with Control-IQ Technology",
Protocol Chair Sue Brown, MD, University of Virginia; Coordinating Center Jaeb Center for Health
Research, Tampa, FL; "Version Number: v10.0", "5 NOV 2018". Seven US sites. Roster `PtStatus` is
"Completed" for all 168 randomised participants; CGM timestamps run through 2019; the six-month
results are published. Completed.

Brown et al. 2019 front matter, authors in printed order, taken from the article's own byline:

> "S.A. Brown, B.P. Kovatchev, D. Raghinaru, J.W. Lum, B.A. Buckingham, Y.C. Kudva, L.M. Laffel,
> C.J. Levy, J.E. Pinsker, R.P. Wadwa, E. Dassau, F.J. Doyle III, S.M. Anderson, M.M. Church,
> V. Dadlani, L. Ekhlaspour, G.P. Forlenza, E. Isganaitis, D.W. Lam, C. Kollman, and R.W. Beck,
> for the iDCL Trial Research Group"

The New England Journal of Medicine, vol. 381, no. 18 (October 31, 2019), pp. 1707-17,
DOI 10.1056/NEJMoa1907863. Randomisation as printed: "112 were assigned to the closed-loop group,
and 56 were assigned to the control group." Data-sharing sentence as printed: "A data sharing
statement provided by the authors is available with the full text of this article at NEJM.org."

## REGIME

**DCLP3, in the protocol's own words.** Population: "Type 1 Diabetes", "Ages 14 and older"; key
exclusion "Use of any non-insulin glucose-lowering agents except metformin". Design: "the closed
loop system vs. sensor-augmented pump for 6 months", seven US sites, up to 225 enrolled with "at
least 150 participants complete the 6-month randomized trial"; 168 randomised 2:1. Unit of analysis
for the primary outcome: the participant, with per-participant CGM-measured % in range over
6 months. Instrument: Dexcom G6, "replaced at least once every 10 days". Threshold/category:
70-180 mg/dL. The claim sits INSIDE this regime: the frame asks for a completed trial reporting a
consensus CGM metric with two-arm per-reading traces, and every term of that is a term of this
trial.

**Idi et al. 2025, in its own words.** Real-data regime: 72 CGM traces from 36 adult subjects with
T1D, monitored about 10 days, a subset of the Dexcom G6 Pivotal trial, restricted to "subjects
wearing two CGM devices simultaneously"; artifacts labelled retrospectively by three operators with
consensus meetings. Simulated regime: 100 virtual subjects from the UVA/Padova T1D Simulator, 10
days each, 3 meals/day, 80 train / 20 test, attenuations injected by a published model. Unit of
analysis: the artifact event, scored as recall against false alerts per day. Operating condition:
retrospective and unsupervised, not real-time.

Does the claim sit inside the detector's regime? For clause (ii) as written - "a sensor model for
which a pressure-artifact detector with a stated operating point has been published" - yes: the
sensor model is Dexcom G6 in both documents. But the two regimes are not the same regime, and the
frame would be overread if it were taken to mean the printed operating point transfers to DCLP3
traces:

- Age. The detector's real-data population is "adult subjects with T1D". DCLP3 enrols "Ages 14 and
  older" and did enrol adolescents. The detector's operating point is silent on adolescent traces.
- Duration. 10 days there, 6 months here. The false-alarm rate is quoted per 10 days.
- Labelling setup. The detector's ground truth came from subjects wearing two sensors at once.
  DCLP3 participants wore one. MY OWN REASONING, flagged as mine and not a source finding: the
  two-sensor requirement reads as a device for establishing labels rather than an input the method
  needs, since the method is described as unsupervised and retrospective on a trace. I did not
  verify this from Section III, and the search that would ground it - a dedicated read of the
  method's input specification in Section III - I did not run. Treat it as an open question, not as
  a finding.
- Real vs simulated. The headline "74%" is the SIMULATED number. The number that applies to real
  Dexcom G6 traces is 0.55. Anyone quoting 74% of a real-world trace is quoting the simulator.

## DEFECTS FOUND

**1. The control arm's sensor model is never named in a single unscoped sentence, in either
document.** This is the one soft joint in the instance and I will not paper it over. The NEJM
sentence for the control arm is "Patients in the control group received a continuous glucose
monitor." - no model. The protocol sentence that names G6 (section 6.1.2) carries the scope "when
using the Tandem t:slim X2 with Control-IQ technology", which is the intervention configuration.
What bridges them is a defined term: the synopsis assigns the Control Group "study CGM", section 5.2
has the SAP group use "the study CGM", and section 6.1.2 is the section that defines what the study
CGM is. MY OWN REASONING, NOT A SINGLE-SENTENCE SOURCE FINDING: the bridge is a definitional one and
I regard it as sound, but it is an inference across three locations, not a quotation. What would
settle it, stated by KIND before I name anything: a document that states the control arm's issued
CGM hardware directly - the Device Quality Control Testing CRF, the Study Device Training CRF, or
the NEJM supplementary appendix's device table. The CRFs are in the zip I already hold
(`Case Report Forms/07-Device Quality Control Testing - Worksheet.pdf`,
`Case Report Forms/14-Study Device Training - Worksheet.pdf`); they are that kind of document and I
did not open them. I call that a lead I can justify by kind, not a guess - and not a check that ran.
IMPORTANT: this defect does not touch the existence claim. Clause (ii) asks what sensor model the
TRIAL used, and the trial's investigational device is "t:slim X2 with Control-IQ and Dexcom G6
system". Even on the narrowest reading, the intervention arm's 5,698,148 post-randomisation readings
are G6 readings.

**2. The recall figure is printed without its denominator in the sections I read.** Idi et al. state
recall 0.55 and recall 74% but, in the text served to me, "the artifact count (recall denominator) is
not stated numerically". A recall without its denominator is a rate whose base I cannot check. The
numbers are printed; the base is not, in those sections. Tables VII and VIII are unread by me and may
carry it.

**3. The 74% figure is a simulator result and is the one most likely to be misquoted.** It sits in
the Abstract next to the real-data 55%, and the Abstract's own phrasing - "recognized the 74% of the
failures generating on average only 2 false alerts" - is the simulated test set. The honest
single-number summary of this detector on real Dexcom G6 data is recall 0.55 at roughly 3 false
alarms per 10 days, with 12.5% of traces below recall 0.3.

**4. One group, not four sources.** Clause (ii) rests, as far as my searches reached, on a single
Padova group: Idi, Manzoni, Facchinetti, Sparacino, Del Favero. My one search for the detector
literature returned nine links of which six were research.unipd.it handles - TITLE MATCHES FROM ONE
INSTITUTIONAL REPOSITORY, AND I COUNT THEM AS ONE GROUP'S OUTPUT, NOT AS CORROBORATION. Clause (ii)
is satisfied by one published detector from one group. That is enough for the clause as written,
which says "has been published", but the ledger should not read it as a literature.

**5. The record's grade confuses a property of the batch with a property of the frame.** "No agent
opened a single qualifying trial" is true of the agents and says nothing about whether one exists.
The instance was reachable in four calls: the Jaeb index, the index again for the href, one GET, and
`unzip`. The endpoint quotation did not even need the web - the protocol travels inside the dataset.

**6. A near-miss worth recording so the next reader does not repeat it.** The PMC item my detector
search returned (PMC4455457) is almost certainly the earlier PISA-detection literature on older
Dexcom hardware. PMC is hard-blocked here and I did not convert or open it. If it is a detector for
Dexcom G4/G5, it would widen clause (ii) to the G4/G5 trials in the Jaeb list (WISDM, CITY,
REPLACE-BG, the JDRF CGM RCT). UNOPENED, named as unopened, and not counted toward the verdict.

## ROUTES THAT FAILED

**ClinicalTrials.gov NCT03563313, HTML.** WebFetch to `https://clinicaltrials.gov/study/NCT03563313`
returned the page shell only; the summariser reported it "contains only ClinicalTrials.gov site
metadata (title, meta tags, and viewport settings), a 'Show glossary' / 'Search for terms' prompt,
and a note for study record managers about Data Element Definitions." The record is client-rendered.

**ClinicalTrials.gov API v2.** WebFetch to
`https://clinicaltrials.gov/api/v2/studies/NCT03563313?fields=protocolSection` returned, exactly:
"Not fetched: ... failed at its site (robots_disallowed), and nothing of the page was retrieved."

**Same API via curl.** `curl: (56) CONNECT tunnel failed, response 403`, `HTTP:000 SIZE:0`. This is
the documented tool-scoped curl 403 at this proxy, not a host block - but WebFetch, the usual way
around it, was the route robots-disallowed above, so both doors were shut for different reasons.

**Not a route failure, recorded so it is not mistaken for one.** `curl` to the S3 dataset object
worked perfectly: `HTTP:200 SIZE:195304936`. The proxy's curl restriction is tool- and host-scoped,
not general.

**Encoding, not access.** `Data Files/PtRoster_a.txt` is UTF-16LE and my first two `iconv` attempts
produced CJK mojibake, which could easily have been logged as an unreadable file. `file` reported
`cgm.txt` as plain ASCII and the roster as "Unicode text, UTF-16, little-endian"; `iconv -f UTF-16LE`
on the roster and no conversion at all on `cgm.txt` read both cleanly. Nothing here was unreadable.

**Sweeps run twice, per the one-sweep rule.** For data-use terms I ran two: the Jaeb index page via
WebFetch (reported no access terms, no DUA, no citation requirement) and a keyword sweep of
`ReadMe.rtf` for "data use", "data-use", "citation", "acknowledg", "agreement", "terms of use" -
zero hits. For the sensor model I ran a broad "dexcom" sweep (8 hits) and then a dedicated "G6"
sweep aimed only at that token (8 occurrences), which is how I found that the only G6 sentence
carries a scoping clause. I also ran a dedicated "pressure" sweep of the protocol: exactly one hit,
line 958, "Vital signs including measurement of blood pressure and pulse" - i.e. DCLP3 itself has no
pressure-artifact handling, which is consistent with the frame's premise and not a defect in it.

## BEARING ON THE LEDGER ENTRY

**The existence claim is TRUE OVER THE INSTANCE I OPENED. The UNVERIFIED grade should be struck and
the clause recorded as INSTANCED.** The declared frame's satisfying set is non-empty. The instance:

> DCLP3 / the iDCL pivotal trial. Brown SA, Kovatchev BP, Raghinaru D, Lum JW, Buckingham BA,
> Kudva YC, Laffel LM, Levy CJ, Pinsker JE, Wadwa RP, Dassau E, Doyle FJ 3rd, Anderson SM,
> Church MM, Dadlani V, Ekhlaspour L, Forlenza GP, Isganaitis E, Lam DW, Kollman C, Beck RW, for
> the iDCL Trial Research Group. "Six-Month Randomized, Multicenter Trial of Closed-Loop Control in
> Type 1 Diabetes." N Engl J Med 2019;381(18):1707-17. DOI 10.1056/NEJMoa1907863.
> Data: DCLP3 Public Dataset - Release 3 - 2022-08-04, Jaeb Center for Health Research,
> public.jaeb.org.
> Detector for clause (ii): Idi E, Manzoni E, Facchinetti A, Sparacino G, Del Favero S.
> "Unsupervised Retrospective Detection of Pressure Induced Failures in Continuous Glucose
> Monitoring Sensors for T1D Management." IEEE J Biomed Health Inform 2025;29(2):1383-96.
> DOI 10.1109/JBHI.2024.3465893.

Clause-by-clause: (i) HOLDS, primary outcome "CGM-measured % in range 70-180 mg/dL" plus five
alpha-protected consensus metrics as key secondaries. (ii) HOLDS at sensor-model level, Dexcom G6,
detector operating point recall 0.55 at ~3 false alarms per 10 days on real G6 traces; the control
arm's model rests on a definitional bridge rather than a single sentence, defect 1. (iii) HOLDS and
is the best-verified of the three: 5,698,148 CLC and 2,731,984 SAP post-randomisation readings at a
median 300-second cadence, all 112 and all 56 participants, downloaded by anonymous GET with no DUA.

**What this does to the Provisional cap.** The cap rested on the frame possibly being empty. It is
not empty, so the cap cannot rest there any longer. The honest residual is not existence but
TRANSFER, and the entry should be rewritten to carry it: the frame is non-empty, and the open
question is whether a detector operating point validated on 72 ten-day traces from 36 adults in the
Dexcom G6 pivotal trial, retrospectively and unsupervised, with two sensors worn for labelling, can
be applied to six-month single-sensor traces from a population that starts at age 14. That is a
generalisation question with a quotable regime on both sides, which is a far better thing for the
ledger to hold than an existence question that one `unzip` settles. I recommend converting the cap
into a PROMOTION CONDITION on exactly that: name the operating point, name the two regimes, and
require that any use of the detector on DCLP3 traces either re-derive its threshold on those traces
or carry the 0.55 recall and the 12.5%-of-traces-below-0.3 spread forward as stated uncertainty.

**What I did not check, marked so it is not read as a negative finding.** The front matter of the
registry record (route-blocked, not budget). Tables VII and VIII of Idi et al., holding specificity,
precision, F1, AUROC, AUPRC. The DCLP3 CRFs that would name the control arm's CGM hardware directly.
The PMC item that may be an earlier detector for Dexcom G4/G5. And 38 of the 39 Jaeb datasets, each
of which may be a further instance; one instance settles the existential, so I stopped at one rather
than spending the remaining budget enumerating a set whose non-emptiness was already established.
