# VERIFY - is the question's CI-half-width fallback incommensurate with TBR<54 and the level-2 event count? (the Sanofi SAP opened first-hand, plus a second TIR-primary SAP, plus the consensus statement nobody had opened)
Checker: fresh context. Budget used: 4 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

UQ-20261023-06, THE YARDSTICK DEFECT (leg 2 of the Provisional cap), as the entry books it: that the
candidate's declared fallback decision rule - the half-width of the primary endpoint's 95% confidence
interval - "is a time-in-range quantity of several percentage points on the one SAP anyone opened" and
is therefore incommensurate with a change in TBR<54 and with a level-2 event count "whose entire
guideline-relevant range is under 1 percentage point".

Three separable assertions, and they do not stand or fall together:
  Y1. The one opened SAP has no pre-specified margin on the hypoglycaemia endpoints, so the fallback
      is what would actually fire.
  Y2. That fallback is a TIR quantity of several percentage points ON that SAP.
  Y3. TBR<54 and the level-2 event count have a guideline-relevant range under 1 pp, so the test
      returns "no" by construction for those two.

My verdict in one line: Y1 HOLDS (quoted, two instances). Y2 HOLDS AS ARITHMETIC BUT NOT AS A PRINTED
FACT - the SAP prints no half-width; it prints the inputs, and ~3.6 pp is a derivation. Y3 HOLDS for
TBR<54 on a 24-hour denominator and HOLDS A FORTIORI for the event count, but for a DIFFERENT AND
STRONGER REASON than the entry gives, and the entry's own phrasing of Y3 for the event count has no
printed referent in the consensus statement. Net: HOLD, NARROWED, with three corrections to the text.

## READ LEVEL

S-A. Sanofi SAP, NCT04075513 (adversary 1's "S2"). Route:
   https://cdn.clinicaltrials.gov/large-docs/13/NCT04075513/SAP_001.pdf - the route the entry names.
   Opened FIRST TRY, two fetches (offset 0 and offset 1000), via the WebFetch summariser.
   READ LEVEL: PARTIAL. Front matter; Section 1.3 (sample size / hypotheses) reached in full as
   thirteen ordered consecutive served fragments; Sections 2.1.3.1, 2.1.3.2, 2.1.3.3, 2.4.4.1.1,
   2.4.4.2.1, 2.4.4.3, 2.4.5, 2.4.5.1 reached. The summariser stated it read "through Section 2.5.3,
   about page 43 of 64" and that "Sections 2.5.4 onward, Sections 3-7, and Appendices A-B are not in
   the text I was given". So every absence I record on S-A is an absence in pages 1-43 of 64, not in
   the SAP. It also reported the Section 1.3 sample-size FORMULA garbled in the extracted text; I
   therefore do not quote the formula and I do not reproduce the SAP's own derivation.
   NO ROUTE FAILED on S-A. I did not page 2.5.4-Appendix B; that was my choice of where to spend
   fetches, not a route failure.

S-B. Senseonics SAP, NCT03908125 (the second TIR-primary SAP; D2 of
   VERIFY-uq06-sap-prespecification.md, which I opened independently of that note).
   Route: https://cdn.clinicaltrials.gov/large-docs/25/NCT03908125/SAP_001.pdf - built by editing
   S-A's path on the cdn.clinicaltrials.gov/large-docs/<nn>/<NCT>/SAP_001.pdf pattern. Opened first
   try, ONE fetch. READ LEVEL: PARTIAL - front matter, Version History, Document Approval, Sections
   2.2, 4, 5.1.1, 5.6.1, 5.6.2, 5.8 reached. The summariser reported Sections 4, 5.6.1, 5.6.2 and 5.8
   "truncated or garbled" in the extraction, so S-B's absences are the weaker of my two SAP reads and
   I mark them so.

S-C. Battelino et al., the International Consensus on Time in Range. Route: the UEA institutional
   repository ACCEPTED MANUSCRIPT PDF, https://ueaeprints.uea.ac.uk/id/eprint/73064/2/Accepted_Manuscript.pdf,
   located by my one WebSearch and opened first try, ONE fetch.
   READ LEVEL: PARTIAL, and the partiality matters for sub-claim (d). I reached the title page and the
   full author list, the Pregnancy section in prose, and Tables 1, 2, 3 and 4 AS THE SUMMARISER READ
   THEM. I did NOT see Table 3 rendered as a table, and I did NOT reach a continuous prose sentence in
   the main-population section that asserts "<1%" for TBR<54 in words. My (d) numbers are therefore
   TABLE CELLS as served, not quoted prose, and I say so rather than dressing a cell as a sentence.
   I also did NOT reach this article's own journal/volume/issue/page/DOI line: the accepted manuscript
   does not carry one (see (b)).

NOT OPENED, named so no silence of theirs is scored: the posted SAP for NCT05135676 - the single
document the entry nominates as the one that would overturn leg 2 - and those for NCT05669547 and
NCT05114590; the PROMISE SAP (NCT03808376) and the Jaeb protocol (NCT04765358), which another checker
in this batch opened and I did not; Danne et al. 2017, the consensus statement that actually DEFINES
the level-2 hypoglycaemic EVENT with its duration criterion. I stopped at 4 fetches because I had
spent the budget on the two documents the claim turns on plus the consensus statement, not because any
route failed. NOTHING HERE IS A COULD NOT READ.

(b) FRONT MATTER, as printed, per document.

S-A. Title as printed: "A 12-week randomized controlled trial to compare TOUJEO(R) and TRESIBA(R) in
   terms of glucose values in target range and variability during continuous glucose monitoring (CGM)
   in patients with type 1 diabetes mellitus". Type: STATISTICAL ANALYSIS PLAN, version 1.0 (running
   header "Version number: 1"). Date of issue 01-Jul-2021. SPONSOR as printed: Sanofi. Protocol number
   HOE901-U300-LPS14947. NCT PRINTED in the document: NCT04075513. AUTHORS: the cover carries the
   labels "STATISTICIAN:" and "STATISTICAL PROJECT LEADER:" WITH NO NAMES in the served text. I reached
   the front matter and it is nameless - which is not the same as failing to reach it, and I name no
   author for S-A. Journal / volume / issue / pages / DOI: NONE. This is a posted trial document, not
   an article, and I invent no DOI for it.

S-B. Title as printed: "A Post Approval Study to Evaluate the Long-term Safety and Effectiveness of
   the Eversense(R) Continuous Glucose Monitoring (CGM) System". Type: STATISTICAL ANALYSIS PLAN,
   Version 1.0, dated 08NOV2023. SPONSOR as printed: Senseonics. Protocol CTP-0034, Version 10. NCT not
   printed in the document; posted under NCT03908125. AUTHOR as printed in the Version History: Chris
   Mullin, Director, Global Strategy Services; the Document Approval block gives his role as
   "Statistician/author". No journal, volume, issue, pages or DOI.

S-C. Title as printed on the accepted manuscript: "Clinical Targets for Continuous Glucose Monitoring
   Data Interpretation: Recommendations from the International Consensus on Time-in-Range".
   AUTHORS, full list in printed order as served from the front matter: Tadej Battelino; Thomas Danne;
   Stephanie A. Amiel; Roy Beck; Richard M. Bergenstal; Torben Biester; Emanuele Bosi; Bruce
   Buckingham; William Cefalu; Kelly L. Close; Claudio Cobelli; Eyal Dassau; J. Hans DeVries; Kim
   Donaghue; Klemen Dovc; Francis J. Doyle III; Satish Garg; George Grunberger; Simon Heller; Lutz
   Heinemann; Irl B. Hirsch; Roman Hovorka; Weiping Jia; Olga Kordonouri; Boris Kovatchev; Aaron
   Kowalski; Lori Laffel; Brian Levine; Aleksander Mayorov; Chantal Mathieu; Helen R. Murphy; Revital
   Nimri; Kirsten Norgaard; Christopher G. Parkin; Eric Renard; David Rodbard; Banshi Saboo; Desmond
   Schatz; Keaton Stoner; Tatsuiko Urakami; Stuart A. Weinzimer; Moshe Phillip - 42 names.
   TWO HONEST FLAGS ON THIS LIST. (1) "Tatsuiko Urakami" is as served; I suspect a serving/OCR
   artifact for Tatsuhiko Urakami, and I report what I was served rather than silently correcting a
   person's name. (2) "Kirsten Norgaard" is served without the Danish o-slash.
   JOURNAL / VOLUME / ISSUE / PAGES / YEAR / DOI: NOT PRINTED on the accepted manuscript. The only
   journal string in the body is "Diabetes Care 2019: 42 (Suppl 1)", which is a CITATION TO THE ADA
   STANDARDS OF CARE inside the text, NOT this article's own citation line, and anyone harvesting it
   as such would mis-cite the paper. My WebSearch returned the DOI 10.2337/dci19-0028 from a citation
   aggregator (citedrive); that is a THIRD-PARTY RESTATEMENT, not front matter, and I do not record it
   as front-matter confirmed. I did not reach a page with the volume and page range and I do not supply
   one from memory.

## WHAT THE SOURCE SAYS (quotations as served)

(c) DOES THE SAP PRINT A PRIMARY TIME-IN-RANGE CONFIDENCE INTERVAL OR A POWERED MARGIN, AND WHAT IS
ITS HALF-WIDTH IN PERCENTAGE POINTS?

Answer in one line: S-A prints BOTH a powered margin AND a declared 95% CI decision rule for the
primary TIR endpoint, and prints NO half-width and NO standard error - it prints the design inputs
from which a half-width can be derived. S-B prints NEITHER a margin NOR a commitment to a primary CI.

S-A, PRIMARY ENDPOINT, Section 2.1.3.1, as served: "The primary efficacy endpoint is the percent time
in the glucose range of >=70 to <=180 mg/dL" - the served remainder of the sentence being "(>=3.9 to
<=10 mmol/L) at Week 12, obtained using CGM". Analysis, Section 2.4.4.1.1: "will be analyzed using
available data from the 12-week randomized period in ITT population via an analysis of covariance
(ANCOVA)".

S-A, SECTION 1.3, reconstruction from THIRTEEN ordered consecutive served fragments - LABELLED A
RECONSTRUCTION, assembled only from consecutive returns, junctions verified, nothing completed by
inference:

  "The sample size calculation is based on the percent time spent in glucose range of >=70 to <=180
  mg/dL" / "For this criterion of percent time in range, there is no predefined non-inferiority
  margin." / "A relative non-inferiority margin of 10% is considered." / "The non-inferiority null
  hypothesis would be H0: m1-m0 <=-0.1*m0 or H0: m1-0.9*m0 <= 0" / "and the alternative hypothesis
  would be H1: m1=m0." / "Toujeo would be considered non-inferior to Tresiba if the lower limit of the
  95% confidence interval (CI)" / "for the adjusted difference estimate of m1-0.9*m0 at Week 12 is >
  0." / "Assuming a common SD of 14.7%, an average percent time in range in the Tresiba treatment
  group of 56%" / "(value from LPS14587), no true difference between both arms under H1, and a
  relative non-inferiority of 10%," / "a sample size of 131 evaluable patients per treatment group
  would provide at least 90% power" / "to show non-inferiority of Toujeo with respect to Tresiba on
  the percentage of time plasma glucose" / "within the range of >=70 to <=180 mg/dL at Week 12." /
  "With the assumption of a non-evaluability rate of 22%, 338 patients (169 per treatment group) will
  be randomized."

TWO SCOPE-AND-FORM CHECKS ON THAT PASSAGE, because a careless cut would invert it:

  (i) "For this criterion of percent time in range, there is no predefined non-inferiority margin."
  The OPENING WORDS "For this criterion of percent time in range" SCOPE the absence to the TIR
  criterion specifically, and the clause RECORDS AN ABSENCE of a field-standard margin - it does NOT
  deny that this SAP has a margin. The very next sentence ASSERTS the one adopted: "A relative
  non-inferiority margin of 10% is considered." Quoted alone, sentence one would read as "this SAP
  pre-specifies no margin on TIR", which is the opposite of the document. The entry and adversary 1 do
  NOT make that error - both carry the 10% relative margin correctly. I record the trap because the
  two sentences sit adjacent and the cut between them is grammatically clean.

  (ii) "Toujeo would be considered non-inferior to Tresiba if the lower limit of the 95% confidence
  interval (CI) for the adjusted difference estimate of m1-0.9*m0 at Week 12 is > 0."
  LOGICAL FORM: a SUFFICIENT condition for the non-inferiority conclusion, in the SAP's own "would be
  considered ... if" construction, not a necessary one, and not a disjunction. MODALITY: conditional
  ("would be"), as a pre-specification should be. AND THE DETAIL THAT MATTERS FOR THE QUESTION: the CI
  is on the COMPOSITE m1 - 0.9*m0, NOT on the plain between-arm difference m1 - m0. The candidate's
  fallback says "half-width of its primary 95% CI". On this SAP the primary 95% CI is not an interval
  around a between-arm difference at all; it is an interval around a 0.9-weighted contrast whose
  location absorbs 10% of the control mean. That is a second incommensurability the entry does not
  record, independent of scale.

S-A, NUMERIC HALF-WIDTH: NOT PRINTED. I asked for it twice, in two differently-aimed fetches, and both
returns say so: "No numeric CI width or half-width appears in the text I could see" and "The visible
content does not print a numeric width or half-width for the primary endpoint's 95% CI, or a numeric
standard error for the primary treatment difference. Section 1.3 gives only design assumptions."
TWO SWEEPS, not one. Under the ledger's own rule: S-A DEFINES and POWERS the primary CI and BOUNDS its
width through SD and n; it does not MEASURE or PRINT its half-width. The quantity the entry attributes
to the SAP is not in the SAP.

S-A, ALPHA: not stated in words in the portion read. The summariser noted "The formula uses 1.96, which
implies a 95% two-sided interval, but this is my inference, not text in the document." I carry that as
an inference and not as a printed alpha.

S-A, THE HYPOGLYCAEMIA ENDPOINTS AND WHETHER ANY MARGIN ATTACHES (Y1):
  Section 2.1.3.2, TBR<70 as an other/secondary endpoint: "Percent time and mean hours per day with
  glucose <70 mg/dL (on all time [00:00 to 23:59]".
  Section 2.1.3.3, TBR<54 as tertiary/exploratory: "Percent time and mean hours per day with glucose
  <54 mg/dL (<3.0 mmol/L) (on all time".
  Section 2.4.4.2.1: the p-value is "for descriptive purpose only".
  Section 2.4.4.3: "No multiplicity adjustment will be made on other secondary/other efficacy
  variables".
  Section 2.4.5: "The analysis of the safety variables will be essentially descriptive."
  NO MARGIN IS ATTACHED TO EITHER BELOW-RANGE ENDPOINT. Y1 CONFIRMED on S-A, first-hand.

  BUT A NARROWING ON THE "essentially descriptive" QUOTATION, WHICH IS THE ONE ADVERSARY 1 LEANS ON.
  Its LOGICAL FORM is a flat assertion carrying the sponsor's own hedge "essentially"; it is not a
  disjunction and not a conditional. And the SAME SECTION is not CI-free: the served summary of 2.4.5.1
  reports hypoglycaemia INCIDENCE analysed "with odds ratios and 95% CIs from logistic regression" and
  hypoglycaemia RATES as "over-dispersed Poisson rate ratios". So what S-A withholds from the
  hypoglycaemia endpoints is a MARGIN, not a confidence interval. "Hypoglycaemia gets no yardstick at
  all" would be too strong a reading of that quotation, and I do not let it stand. This CUTS BOTH WAYS
  for the entry, and the direction is worth stating: an odds ratio and an over-dispersed Poisson rate
  ratio are DIMENSIONLESS RATIO-SCALE quantities. A percentage-point half-width cannot be laid against
  them at all. The narrowing therefore strengthens the event-count leg while weakening the rhetoric.

S-B, THE SECOND TIR-PRIMARY SAP, AND WHY IT MATTERS MORE THAN THE ENTRY EXPECTS:
  Primary endpoint, Section 2.2: "The primary effectiveness endpoint is time in range, defined as
  glucose values between 70 mg/dL and 180 mg/dL" - continuing, as served, "at 12 months compared to
  the first month post-first Sensor insertion".
  Section 5.6.2: "Effectiveness will be measured as percentage change in the percent time in range
  (based on hours)" - a RELATIVE percentage change, not a percentage-point difference.
  Section 5.1.1, on confidence intervals: "Confidence intervals may be presented, where appropriate."
  MODALITY CHECK, and it is the whole point of quoting it: "may be presented, where appropriate" is
  PERMISSIVE AND CONDITIONAL. It does not pre-specify a primary 95% CI; it reserves discretion. Cutting
  it to "confidence intervals will be presented" would change the modality exactly the way the batch
  before this one was burned by.
  NO performance goal, margin or clinically relevant difference on the primary endpoint. NO numeric CI
  width, half-width, SD assumption or SE printed anywhere. And on the below-range metrics: the document
  "does not mention time below 70 mg/dL or time below 54 mg/dL anywhere" in the portion read (one
  multi-term sweep only, on a partly garbled extraction - the weaker of my two SAP reads).
  CONSEQUENCE FOR THE QUESTION: on S-B the candidate's fallback has NO REFERENT. There is no
  pre-specified primary 95% CI whose half-width could be taken. The fallback does not merely give the
  wrong-sized yardstick there; it gives none.

(d) WHAT THE CONSENSUS GUIDANCE STATES FOR TBR<70 AND TBR<54.

From S-C, TABLE 3 ("CGM-based targets for different diabetes populations"), cells as served - I did not
see this table rendered and I quote it as cells, not prose:
  TBR, <70 mg/dL / <3.9 mmol/L, Type 1 and Type 2 diabetes: "<4%" of readings and "<1 hr" per day.
  TBR, <54 mg/dL / <3.0 mmol/L, Type 1 and Type 2 diabetes: "<1%" of readings and "<15 min" per day.
  TBR, <70 mg/dL, OLDER / HIGH-RISK: "<1%" of readings and "<15 min" per day. Table 3 gives NO
    separate <54 mg/dL target for this group - only the <70 row.
From TABLE 4 (pregnancy):
  Type 1 pregnancy, "<63 mg/dL": "<4%" and "<1 hr"; "<54 mg/dL / <3.0 mmol/L": "<1%" and "<15 min".
  Type 2 / gestational: "see Pregnancy section" - NO numeric target.
The one PROSE sentence I reached on these targets, and it is scoped: the Pregnancy section's "the TBR
<63 mg/dL (<3.5 mmol/L) recommendation of <4% is safely achievable". SCOPE CHECK: its opening context
scopes it to PREGNANCY and to the <63 threshold, and the clause ASSERTS achievability. It is NOT a
source for the main-population <4%/<1% pair, and I do not use it as one.

LEVEL-2 AND THE EVENT COUNT - the finding the entry needs and does not have:
  Table 2 LABELS the "<54 mg/dL (<3.0 mmol/L)" row "Level 2"; the AGP section labels "Very Low"
  "(Level 2)". S-C "does not define it in words" in what I reached.
  AND: S-C PRINTS NO NUMERIC TARGET FOR A LEVEL-2 EVENT COUNT. Table 1 lists "Episodes (hypoglycemia
  and hyperglycemia) 15 min" as a metric to report, and the text I reached does not explain the
  15-minute criterion or attach any count target to it. Table 3, which is where the targets live,
  carries TIME-SHARE rows only.
  DEDICATED SECOND SWEEP: my single fetch on S-C asked specifically and separately for the level-2
  definition and for an event duration criterion, in addition to the targets - so this is an aimed
  question's answer, not a broad sweep's silence. It is still ONE read of a PARTIAL text, and the
  document that would settle the event definition is Danne et al. 2017, WHICH I DID NOT OPEN.

(b-regime) REGIME OF S-C, IN ITS OWN WORDS, AND WHETHER THE CLAIM SITS INSIDE IT.
Population: Table 3 separates "Type 1 and Type 2 diabetes" from "Older / high-risk"; Table 4 handles
pregnancy. Unit of analysis: "% of readings" with a parallel "time per day" column. Operating
condition: a 14-day CGM period with adequate data capture (the consensus's standard; I did not reach
the sentence stating the capture threshold and do not quote one). Instrument: CGM sensor glucose.
Thresholds: 70, 54 and, for pregnancy, 63 mg/dL. Category: a population-level TARGET FOR CLINICAL CARE,
not a trial decision margin and not a between-arm contrast.
DOES THE CLAIM SIT INSIDE IT? PARTLY, AND THIS IS LOAD-BEARING. The claim uses S-C's numbers as the
scale of a BETWEEN-ARM DIFFERENCE in a randomised trial. S-C's numbers are WITHIN-PATIENT ATTAINMENT
TARGETS. A target of "<1%" bounds where a patient should sit; it does not bound how far two arms may
differ. The transfer is defensible - a difference between two arms both of which should be under 1%
cannot be large - but it IS a transfer across regimes, and the entry states it as though the consensus
document set the scale of a contrast. It does not.

NUMERATOR AND DENOMINATOR CHECK ON THE ONE NUMBER THE CLAIM LEANS ON ("<1%"), BOTH DIRECTIONS.
  NUMERATOR CLASS: CGM readings with sensor glucose below 54 mg/dL. S-C's class carries NO artifact
  exclusion - which is this entry's own thesis elsewhere, and is consistent with it.
  DENOMINATOR: all CGM readings in the reporting period, over full 24-hour days. Checked against the
  near neighbours it is NOT: not a nocturnal denominator; not a per-event denominator; not "% of
  patients attaining"; not the <63 mg/dL pregnancy threshold; not the <70 row.
  WHAT S-C'S CLASS MISSES that the claim needs: any event-count target. The claim says the level-2
  EVENT COUNT has a "guideline-relevant range under one percentage point". S-C attaches "<1%" to a TIME
  SHARE, not to a count, and attaches nothing to the count. The claim's own phrasing is a CATEGORY
  ERROR on this metric: an event count per 14 days has no percentage-point range to be under.
  WHAT S-C'S CLASS INCLUDES that the claim excludes: all daytime readings (the question's TBR<70 is
  nocturnal), and the older/high-risk population, whose TBR<70 target is "<1%", not "<4%".

## REGIME

S-A. Population: patients with type 1 diabetes mellitus, 12-week randomised two-arm comparison of
Toujeo vs Tresiba. Unit of analysis: patient, ITT population, percent of CGM time at Week 12.
Operating condition: CGM wear over a 12-week randomised period, ANCOVA-adjusted. Instrument: CGM
(model not reached in my read). Threshold/category: primary is the 70-180 mg/dL band; below-range
endpoints at 70 and 54 mg/dL as secondary and tertiary/exploratory. Estimand: a non-inferiority
contrast on the composite m1 - 0.9*m0 in percent TIR.
DOES THE CLAIM SIT INSIDE IT? YES for Y1 and Y2 - S-A is precisely the document kind the fallback
clause refers to, a posted SAP for a completed two-arm CGM-endpoint trial, and the fallback is
evaluated against its own printed design. This is the right regime and the claim is inside it.

S-B. Population: post-approval, long-term safety and effectiveness of an implantable CGM. Unit:
percent time in range at 12 months compared with the first month post-insertion. NOT a two-arm
randomised contrast - a WITHIN-SUBJECT CHANGE OVER TIME in a single-arm post-approval study.
DOES THE CLAIM SIT INSIDE IT? PARTLY. S-B is a TIR-primary CGM-endpoint SAP, so it bears on "what do
SAPs of this kind pre-specify", but it has no between-arm contrast, so the question's "recomputed
between-arm difference" has no object there. I use S-B for one thing only: that a second TIR-primary
SAP pre-specifies no primary CI at all. I do not grade the between-arm limb on it.

S-C. As set out under (d): within-patient clinical attainment targets by population, on a 24-hour
denominator. The claim imports them as the scale of a between-arm difference. Transfer flagged.

## DEFECTS FOUND

(e) DOES THE INCOMMENSURABILITY CLAIM HOLD? ARITHMETIC WRITTEN OUT, AND IT IS MINE.

MY OWN ARITHMETIC, from S-A's printed Section 1.3 inputs and nothing else. Inputs as printed: common
SD = 14.7% (percentage points of percent TIR), 131 evaluable patients per arm, two-sided 95% interval
(alpha inferred, not printed - see above), at least 90% power.

  Standard error of the plain between-arm difference m1 - m0:
    SE = 14.7 * sqrt(2/131) = 14.7 * 0.12356 = 1.816 pp
  Half-width of its two-sided 95% CI:
    1.96 * 1.816 = 3.56 pp

  Standard error of the contrast the SAP actually intervals, m1 - 0.9*m0:
    SE = 14.7 * sqrt((1 + 0.81)/131) = 14.7 * 0.11755 = 1.728 pp
  Half-width:
    1.96 * 1.728 = 3.39 pp

  So the fallback yardstick on S-A is approximately 3.4 to 3.6 PERCENTAGE POINTS of percent TIR.
  For scale, the SAP's own pre-specified margin in absolute terms: 10% relative on an assumed Tresiba
  mean of 56% = 5.6 pp.

UNCERTAINTY CARRIED THROUGH, as the source states it and as it does not. S-A's 14.7% is a design
ASSUMPTION ("Assuming a common SD of 14.7%"), with its provenance printed as "(value from LPS14587)" -
a different study. It is not a realised SD, and S-A prints no realised SE. The primary analysis is
ANCOVA, so the realised half-width would be SMALLER than my 3.4-3.6 pp by a factor of roughly
sqrt(1 - r^2) in the baseline correlation r, WHICH S-A DOES NOT PRINT. My figure is therefore an
UPPER ESTIMATE UNDER THE SAP'S OWN STATED SD, and I say so rather than presenting it as the trial's
interval. At a plausible r = 0.6 it would fall to about 2.8 pp; that is my illustration, not the SAP's.

THE COMPARISON, metric by metric, LABELLED AS MY OWN REASONING ABOUT SCALE AND NOT AS A SOURCE FINDING:

  TBR<54 (24-hour denominator). Guideline band from S-C Table 3: 0 to 1 pp ("<1%", "<15 min"). Yardstick
  3.4-3.6 pp. Ratio: the yardstick is ~3.4 to 3.6 times the WHOLE guideline-relevant band.
  AND A STRONGER FORM OF THE SAME POINT, which I prefer because it does not need the guideline at all:
  the metric is floored at 0. For a between-arm DIFFERENCE in TBR<54 to exceed 3.56 pp, one arm must
  sit at TBR<54 >= 3.56%, i.e. 3.56/100 * 1440 = 51.3 minutes per day below 54 mg/dL - more than THREE
  AND A HALF TIMES the consensus ceiling of 15 min/day. In any trial whose arms are both near target,
  the difference cannot reach the yardstick because the metric has nowhere to go. That is a
  floor-plus-ceiling argument from one printed consensus number and arithmetic, and it is tighter than
  "the ranges do not meet". HOLDS.

  LEVEL-2 EVENT COUNT PER 14 DAYS. This is not a scale mismatch, it is a UNITS mismatch: a count has no
  percentage points. A yardstick of 3.56 pp of percent TIR cannot be laid against "events per 14 days"
  in either direction, at any magnitude. S-A reinforces it from the other side - its hypoglycaemia rate
  analysis is an over-dispersed Poisson RATE RATIO, dimensionless, and a percentage-point half-width is
  not comparable to a ratio either. HOLDS, and more cleanly than the entry argues it.

  NOCTURNAL TBR<70 - WHERE THE CLAIM CORRECTLY STOPS. Guideline band for type 1/type 2 from S-C Table 3:
  0 to 4 pp ("<4%", "<1 hr"). My arithmetic: 60/1440 = 4.17% on a 24-hour denominator, consistent with
  the cell pair. A 3.4-3.6 pp yardstick is the SAME ORDER as a 4 pp band, so the "cannot cross by
  construction" argument does NOT extend here. The claim names only two metrics, and that is the right
  two. Confirmed, not merely conceded.

VERDICT ON (e): THE CLAIM HOLDS, as a conclusion. It holds NARROWED, and with three corrections to the
text that carries it.

CORRECTION 1 - Y2 IS A DERIVATION, NOT A PRINTED FACT, AND THE ENTRY'S WORDING SAYS OTHERWISE.
The entry books the fallback as something that "is a time-in-range quantity of several percentage
points ON THE ONE STATISTICAL ANALYSIS PLAN ANYONE OPENED". S-A PRINTS NO HALF-WIDTH and no SE; I asked
twice. What S-A prints is SD = 14.7%, n = 131 per arm, a 95% CI decision rule and 90% power - the
INPUTS. The ~3.4-3.6 pp is MY ARITHMETIC on those inputs, and it would have been adversary 1's too.
To adversary 1's credit, its own text concedes exactly this in terms - "no source I opened states the
half-width of any primary CI" - and the entry's VULNERABILITY OF LEG 2 paragraph repeats the concession.
The defect is in the SUMMARY SENTENCE, which drops the concession and reads as though the number were
printed. Under this ledger's own rule, S-A DEFINES, POWERS AND BOUNDS the primary CI; it does not
measure or print its half-width. The sentence should say "derivable from the SAP's printed design
inputs as approximately 3.4-3.6 pp (checker's arithmetic, upper estimate under the SAP's assumed SD)".
This narrows the wording and STRENGTHENS the finding, because the number is now computed rather than
asserted, and a number nobody had computed was the entry's own stated vulnerability.

CORRECTION 2 - "THE ONE SAP ANYONE OPENED" IS NOW FALSE AS A COUNT, AND I ENUMERATE.
True when the entry was written (08:16) and superseded within the same batch. SAPs and protocols of
this kind now opened, listed as instances and not as a universal:
  OPENED BY ME, FIRST-HAND: NCT04075513 (Sanofi, SAP, TIR primary, 95% CI decision rule, 10% relative
    margin, no below-range margin); NCT03908125 (Senseonics, SAP, TIR primary, NO margin, NO
    pre-specified primary CI, below-range metrics absent from the portion read).
  OPENED BY ANOTHER CHECKER IN THIS BATCH, reported SECOND-HAND from
    VERIFY-uq06-sap-prespecification.md and NOT confirmed by me: NCT03808376 (Senseonics PROMISE, SAP,
    primary is MARD - a sensor-accuracy endpoint, not a glycaemic-control one) and NCT04765358 (Jaeb,
    PROTOCOL not SAP, no outcome labelled primary).
  NOT OPENED BY ANYONE: NCT05135676, NCT05669547, NCT05114590.
So: at least THREE SAPs opened, of which TWO have a TIR primary. The claim should read "on both
TIR-primary SAPs opened so far" - and that is a WIDER base than "one", pointing the same way.

CORRECTION 3 - THE ENTRY'S PHRASING OF Y3 FOR THE EVENT COUNT HAS NO PRINTED REFERENT.
"a level-2 event count whose entire guideline-relevant range is under one percentage point" attributes
a percentage-point range to a count. S-C's "<1%" is a TIME-SHARE target for TBR<54; S-C prints NO
event-count target at all (Table 1's "Episodes ... 15 min" is a metric to report, with no target in
Table 3). The right statement is the units argument: a count cannot be compared with a
percentage-point half-width at all. The conclusion survives; the reason given for it does not.

A FOURTH POINT, NOT A CORRECTION BUT A FINDING THE ENTRY LACKS: ON S-B THE FALLBACK HAS NO REFERENT.
S-B pre-specifies no primary 95% CI - "Confidence intervals may be presented, where appropriate"
(Section 5.1.1, permissive and conditional). So on one of the two TIR-primary SAPs opened, the question
cannot even construct its fallback. That is a defect in the fallback clause INDEPENDENT of scale, and
it is not sensitive to my arithmetic.

AND A FIFTH, ALSO INDEPENDENT OF SCALE: on S-A the primary 95% CI is on the composite m1 - 0.9*m0, not
on a between-arm difference. "Half-width of its primary 95% CI" borrows the precision of a shifted,
reweighted non-inferiority contrast and applies it to a plain difference in a different metric.

(f) FOR HOW MANY METRICS?

TWO OF THREE, and I name them: TBR<54 (by the floor-plus-ceiling and band arithmetic above) and the
LEVEL-2 EVENT COUNT PER 14 DAYS (by units, which is stronger). It does NOT hold for NOCTURNAL TBR<70,
whose guideline band of 0-4 pp is the same order as the 3.4-3.6 pp yardstick. The entry's own count of
two is correct.

ONE NARROWING ON THE TBR<54 LEG THAT A FUTURE V3 MUST NOT MISS, AND IT IS A DENOMINATOR POINT.
The question reads "nocturnal percent time <70 mg/dL and percent time <54 mg/dL". Grammatically,
"nocturnal" modifies the first conjunct; whether it reaches the second is ambiguous in the question's
own text. It matters, and here is why - MY ARITHMETIC: S-C's "<1%" and "<15 min" are mutually consistent
only on a 24-HOUR denominator (15/1440 = 1.04%). Scored over an 8-hour night, the same 15 minutes is
15/480 = 3.13% of nocturnal readings. So:
  TBR<54 on a 24-hour denominator: guideline band 1 pp, yardstick 3.4-3.6 pp, ratio ~3.5x. The leg is
    strong.
  TBR<54 on a NOCTURNAL denominator: guideline-equivalent band ~3.1 pp, yardstick 3.4-3.6 pp, ratio
    ~1.1x. The leg weakens from "cannot cross by construction" to "unlikely to cross", which is a
    different and much softer claim.
The TBR<54 leg of this defect is therefore CONDITIONAL ON THE 24-HOUR DENOMINATOR. The event-count leg
is not conditional on anything, because units do not rescale with a denominator. If a V3 scores TBR<54
nocturnally, the claim should be rested on the event count and on corrections 1-3 plus points four and
five, not on the TBR<54 band.

WHAT WOULD STILL OVERTURN THIS, AND WHAT KIND OF DOCUMENT IT WOULD HAVE TO BE. The kind required is a
POSTED SAP OR PROTOCOL for a completed randomised two-arm trial that prints a PRE-SPECIFIED MARGIN OR
DECISION THRESHOLD ON A BELOW-RANGE CGM ENDPOINT IN THAT ENDPOINT'S OWN UNITS - percentage points of
time <70 or <54, or events per unit time. If such a margin exists, the fallback never fires and the leg
falls. The entry nominates the posted SAP for NCT05135676 via the cdn.clinicaltrials.gov/large-docs
route. I did NOT open it. On kind, the nomination is SOUND - it is a posted SAP for a CGM-endpoint
trial, which is exactly the kind of document that could settle it - but WHETHER THAT PARTICULAR
DOCUMENT CARRIES SUCH A MARGIN IS UNKNOWN TO ME AND, SO FAR AS THE BATCH FILES SHOW, TO EVERYONE. It is
a justified lead, not a finding, and I call it a lead. Note also that two instances now point the other
way: neither S-A nor S-B carries a below-range margin. That is TWO INSTANCES, NOT AN ENUMERATION, and I
assert no universal over CGM-endpoint SAPs in either direction.

## ROUTES THAT FAILED

NONE. Every document I attempted opened on the first try:
  https://cdn.clinicaltrials.gov/large-docs/13/NCT04075513/SAP_001.pdf - opened, twice (offsets 0 and
    1000).
  https://cdn.clinicaltrials.gov/large-docs/25/NCT03908125/SAP_001.pdf - opened, built by editing
    S-A's path on the same large-docs pattern. Recording the pattern as a working route for other NCT
    SAPs.
  https://ueaeprints.uea.ac.uk/id/eprint/73064/2/Accepted_Manuscript.pdf - opened; the institutional
    repository is a working route to the Battelino consensus accepted manuscript.
I did not attempt doi.org, diabetesjournals.org, PMC or Europe PMC, so I report no failure for them.
I DID NOT RUN OUT OF ROUTES; I SPENT 4 OF 6 FETCHES AND 1 OF 2 SEARCHES AND STOPPED BECAUSE EVERY
SUB-CLAIM WAS ANSWERED. Nothing in this note is a COULD NOT READ, and NO SUB-CLAIM IS COULD NOT CHECK.
The read-level limits that remain are PARTIAL reads, stated per document above: pages 1-43 of 64 on
S-A, a partly garbled extraction on S-B, and tables-as-served rather than rendered tables on S-C.

## BEARING ON THE LEDGER ENTRY

HOLD LEG 2, with its wording narrowed and its evidential base widened. The yardstick defect is real and
is now first-hand: I opened the SAP, computed the number nobody had computed, and opened the consensus
statement that adversary 1 recorded as UNVERIFIED at C7 and that the entry cites at line 59 as "the
<4% / <1% consensus targets" WITH NO CITATION OF ANY KIND - no author, no year, no identifier. That
citation gap should be closed in the entry: the targets are Battelino et al., International Consensus on
Time in Range, Table 3, read here in the UEA accepted manuscript, whose own journal/volume/pages/DOI are
NOT on the manuscript and which I therefore do not supply.

SPECIFIC EDITS THE ENTRY NEEDS, in the order they appear:
 1. Line 78's summary sentence: replace "a TIR quantity of several percentage points on the one SAP
    anyone opened" with "a TIR quantity derivable from the printed design inputs of both TIR-primary
    SAPs opened - approximately 3.4-3.6 pp on NCT04075513 (checker's arithmetic from SD 14.7%, n=131
    per arm, 95% two-sided; an upper estimate, since the ANCOVA primary would narrow it by an unprinted
    baseline correlation), and NOT CONSTRUCTIBLE AT ALL on NCT03908125, which pre-specifies no primary
    CI".
 2. Strike "whose entire guideline-relevant range is under 1 percentage point" as applied to the
    level-2 event count and replace it with the units argument. Keep the under-1-pp band for TBR<54,
    with Battelino Table 3 cited, and add that it holds on a 24-hour denominator.
 3. Line 79's VULNERABILITY OF LEG 2 can now be DISCHARGED IN PART: the half-width is no longer
    unmeasured. What remains unverified is the OTHER half of that paragraph - whether any CGM-endpoint
    trial pre-specifies a margin on a below-range endpoint in its own units. Two opened SAPs say no;
    that is two instances, not an enumeration; NCT05135676 remains a justified but unopened lead.
 4. Add the two scale-independent defects the entry does not have: the fallback has NO REFERENT on
    NCT03908125, and on NCT04075513 the primary 95% CI is on the composite m1 - 0.9*m0 rather than on a
    between-arm difference.
 5. Cite Battelino et al. at line 59 instead of referring to bare numbers.

ON THE CAP. Leg 2 survives my check and survives it better sourced than before, so the Provisional cap
does not loosen on this leg. But leg 2 was never the leg the cap stands on - the entry says so itself,
and leg 1 (the two Unverified attack-4 clauses) is unaffected by anything here. What my check does change
is the PROMOTION CONDITION at line 80: it is correct as written and should be strengthened. Replacing
"fallback: half-width of its primary 95% CI" with a delta pre-declared in the recomputed metrics' own
units is necessary not only because the TIR half-width is the wrong SIZE for two metrics, but because on
one of the two TIR-primary SAPs opened the fallback has no referent, and on the other it refers to a
reweighted non-inferiority contrast. Three independent reasons, of which the entry currently gives one.

CONVERT TO PROMOTION CONDITION: no - it already is one, at line 80. HOLD the leg, NARROW the wording per
edits 1-3, ADD the two findings per edit 4, and CLOSE the uncited-consensus gap per edit 5.
