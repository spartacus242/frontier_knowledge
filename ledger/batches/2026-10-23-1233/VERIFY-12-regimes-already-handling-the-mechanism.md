# VERIFY - Do the three nuclear/Navy documents already assert, deny or test the non-informative-arrival presupposition?
Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-23.

I did not read the entry file, the record, or any adversary log. Every quotation below comes from
a document I opened in this session. Where I reason rather than report, the step is labelled
MY OWN REASONING or MY OWN ARITHMETIC.

## CLAIM

The entry's Motivating gap, verbatim: "No document opened by the record or by any adversary asserts
that presupposition, denies it, or tests it." Three single-reader kills bear on it:

- **Kill A** (adversary 1, §5): San Onofre ML13303B093 "handles arrival timing by a convention -
  'Only data points with calibration intervals between 100 and 683 days were included in the
  evaluation.'", so the presupposition is "contested in the nuclear regime, where early arrivals
  are excluded rather than modelled".
- **Kill B** (adversary 1, attack 7): NAFI AD0669904 "shows the field saw the mechanism in 1966-67
  (unscheduled calibrations tabulated; 'not all scheduled equipments were sent in') and did not
  analyse it".
- **Kill C** (adversary 3, clause C7): "the suspect arm is partly handled by informative EXCLUSION
  on a documented cause before any curve is fitted ... limb (ii)'s model would have to represent
  exclusion as well as arrival."
- **Entry line 13** numbers: "drift SD 0.381-0.478% with two transmitters' calibrations removed
  against 0.615-1.110% with them in, per cent of span by context, no uncertainty printed, inclusion
  factor ~1.6 to ~2.3".

## READ LEVEL

| Source | Read level this session | Route |
|---|---|---|
| Southern California Edison, Baskin, K. P., 15 May 1989, Docket 50-361, San Onofre Unit 2, Amendment Application No. 79 re TS 3/4.10.7 "18 Month Channel Calibrations", NRC ADAMS ML13303B093 | **FULL TEXT** via WebFetch summariser, one pass, dedicated inclusion/exclusion + 17-term sweep prompt | https://www.nrc.gov/docs/ML1330/ML13303B093.pdf - opened on the first call |
| FENOC letter PY-CEI/NRR-2449L, Wood, J. K., 17 Jan 2000, Perry, Docket 50-440, NRC ADAMS ML003677584 | **FULL TEXT, TWO passes** via WebFetch summariser: pass 1 targeted Attachment 2 Items 4.3/4.4.2; pass 2 transcribed the whole Attachment 1 Q8 response as 30 ordered consecutive segments plus a 14-term sweep over Attachments 1 and 2 | https://www.nrc.gov/docs/ML0036/ML003677584.pdf - opened on the first call, both passes |
| Naval Avionics Facility Indianapolis (organisation NOT confirmable from the document's own legible text - see Defects), "Evaluation of Initial PROTECT Pilot Study", NAFI TR-1124, pilot run March-December 1966, DTIC AD0669904 | **PARTIAL - full document fetched twice but OCR-limited.** FULL at: cover title, list of tables, Table 1/2/3 captions, Table 3 column headings and footnote, Section IV.F body, the IV.C/IV.D unscheduled sentences, Section III definitions. **COULD NOT READ** (OCR damage, not a failed route): Section IV.G body beyond its heading and three part-legible fragments; **all of Table 4's column headings and every Table 4 data cell**; the cover's author line and date; Table 3's out-of-tolerance cells for rows 1-2 | https://apps.dtic.mil/sti/pdfs/AD0669904.pdf - opened on the first call, both passes |
| DTIC catalogue record for AD0669904 (sought only to recover clean front matter) | **COULD NOT READ - ROUTE FAILED** | https://apps.dtic.mil/sti/citations/AD0669904 - "failed at its site (client_error), and nothing of the page was retrieved" |

Nothing else was opened. **EPRI TR-103335 and the NRC Status Report on it remain UNOPENED by me**:
everything I report of them is the licensee's rendering inside ML003677584, and the licensee calls
that rendering "excerpts **or paraphrases**" (see Defects, D4). NCSL/NCSLI RP-1, ILAC-G24:2022,
Castrup 2005/2006, Jackson & Castrup 1987, Bare 2006, Yiu & Su arXiv:2305.16018, the GE Vernova
dictionary and Beamex: **not opened by me, budget spent on the three documents the sub-claims name.**
That is a spent budget, not a property of any of those sources.

## WHAT THE SOURCE SAYS (quotations as served)

### SUB-CLAIM 1 - ML13303B093, the 100-683 day rule

**VERBATIM: YES.** "Only data points with calibration intervals between 100 and 683 days were
included in the evaluation."

**Printed location:** Enclosure A, Section 2, headed "SCE Analysis of Long Term Drift", on the first
page of Enclosure A (before the "-2" page marker).

**Grammar on both sides of the cut.** Two sentences before (served as three consecutive segments,
then one whole sentence):

> "The transmitter drift was determined by subtracting the as-left calibration data from the
> as-found calibration data," / "selecting the maximum difference for the five calibrations,
> converting to a percent of span," / "and dividing the maximum value by the time interval between
> calibrations."
> "Once the drift data was determined for individual transmitters, the data was grouped by model of
> transmitter and edited."

Two sentences after:

> "Intervals of less than 100 days were categorized as not applicable for a long term drift
> consideration."
> "Intervals greater than 683 days were removed since this is the maximum interval between
> calibrations."

**Numerator class.** Data points whose calibration interval falls in [100, 683] days, where a
"data point" is a drift figure built as (as-found minus as-left), **maximum over the five
calibrations**, converted to percent of span, **divided by the elapsed interval** - i.e. a drift
RATE, not a drift. NOTE A TENSION IN THE SERVED TEXT: "selecting the maximum difference for the
five calibrations" reads as one value per transmitter, while "data points with calibration
intervals" reads as one value per calibration pair. I report the tension rather than resolve it;
the document as served does not reconcile them.

**Denominator: NOT PRINTED.** "No total count of data points or calibration records is printed.
The document states only that drift was evaluated over 'the five calibrations' for each
transmitter." So the fraction of available pairs the window removes is **unobtainable from this
document**. The rule BOUNDS a selection; it does not report the selection's size.

**Does the rule anywhere name a REASON for calibration? NO.** Dedicated 17-term sweep: "unscheduled",
"suspect", "post-maintenance", "post maintenance", "failed instrument", "exclusion", "bias",
"biased", "reason for calibration", "overdue", "early", "late" - **none found**. ("Failure" occurs
several times; "translate" contains "late" as a substring only.) The only occurrences of
"scheduled" are outage dates: "until the scheduled Cycle 5 refueling outage, or September 11, 1989,
whichever comes first" and "scheduled to begin September 9, 1989". The only "excluded" is about
hardware, not data: "Neutron detectors are excluded from the channel calibration requirements."
The only "as-found"/"as-left" occurrence is the drift-definition sentence quoted above.

**CONFIRMED, both halves of adversary 1's report.** (a) The document does not say whether unscheduled,
suspect, post-maintenance or failed-instrument calibrations were included - it never raises the
category. (b) "Whether data exclusions bias the drift estimate: no such sentence found." The three
stated selection rules are the interval window, T-Test outlier removal ("removed from the data
base") and a Chi Square test; **the document does not discuss their effect on bias.**

### SUB-CLAIM 2 - classifying that rule against the entry's sentence

**It does NOT assert, deny or test the non-informative-arrival presupposition. It is a drift-horizon
and administrative-maximum rationale, exactly as the document's own reasons say.** Both bounds carry
a printed reason, and neither reason is about arrival:

- lower bound: "Intervals of less than 100 days were categorized as not applicable for a long term
  drift consideration." - a DRIFT-HORIZON reason (the quantity of interest is long-term drift);
- upper bound: "Intervals greater than 683 days were removed since this is the maximum interval
  between calibrations." - an ADMINISTRATIVE-LIMIT reason.

**Modality and logical form of the quotation Kill A relies on.** Declarative past, **UNHEDGED**, no
modal: a bare inclusion rule. Logically it is a **NECESSARY condition on inclusion** ("Only ... were
included" = included only if 100 <= interval <= 683), **not a sufficient one**: the T-Test and Chi
Square removed further points, so a point inside the window is not thereby in the evaluation. It is
not a disjunction. **Scope-setting opener:** the sentence has no opener of its own, but the
immediately preceding sentence scopes it - "the data was grouped by model of transmitter and
**edited**" - so the clause **RECORDS A SELECTION MOVE** within an editing step. It neither asserts
nor denies any property of the arrival process; the arrival process is never mentioned.

**MY OWN REASONING (not a source finding), and the reason Kill A fails on its own words.** The cut is
on **interval LENGTH in absolute days**, not on arrival relative to a due date. Under the candidate's
own exposure definition (actual minus due = elapsed time minus interval), an early arrival on an
18-month channel-calibration requirement produces an elapsed interval anywhere below the nominal
due interval. Every such point from 100 days up to the nominal due interval is **INSIDE** the window
and therefore **INCLUDED**. So "early arrivals are excluded rather than modelled" is false of this
document: the window removes only the extreme short tail (<100 days) and anything past the
administrative maximum. Both directions of overlap: the window **MISSES** the great majority of early
arrivals (it includes them), and it **INCLUDES in its exclusion** short intervals that are not early
arrivals at all (e.g. any pair of consecutive calibrations less than 100 days apart for any reason).
The search that would have grounded a stronger statement - the document printing the nominal and
maximum interval in days - was not needed, because the document prints neither as a number; it says
only "this is the maximum interval between calibrations". **I did NOT compute 18 months x 1.25 and I
do not assert that 683 days is the grace-extended TS limit; the document does not print that
arithmetic and neither do I.**

### SUB-CLAIM 3 - ML003677584, Attachment 2, Item 4.3

**VERBATIM: YES, at the location the entry gives.** Served as two consecutive segments:

> Segment A: "As a general rule, it is unacceptable to reject applicable data, because biases in the data selection"
> Segment B: "process may introduce biases in the calculated statistics."

Junction verified at "data selection" / "process".

**(a) One sentence or a join?** **One printed sentence in the document**, broken across a line break
in the PDF. It reached me as **two consecutive summariser fragments** and the assembled string is a
**2-fragment reconstruction of one printed sentence**. Both statements are true at different levels:
the document prints one sentence; my read of it is a reconstruction.

**Printed location:** Attachment 2, **Page 5 of 12**, under the heading "Item 4.3, Section 3,
'Calibration Data Collection', Fifth Paragraph", continuing onto page 6. The paragraph's own opening
words are "TR-1 03335, Section 3.3 provides guidance on the amount of data to collect." ("TR-1 03335"
is as printed.)

**(b) Whose words.** **Not the NRC's own text as filed, and not certainly a quotation at all.** The
framing sentence at Attachment 2, **Page 1 of 12** (three consecutive segments):

> "The following are excerpts or paraphrases from the NRC Status Report on the Staff review of EPRI" /
> "Technical Report (TR)-103335, "Guidelines for Instrument Calibration Extension/Reduction Programs"," /
> "dated March, 1994."

So the chain is: EPRI TR-103335 -> NRC Status Report on the staff review of it -> **licensee's
excerpt OR PARAPHRASE** inside Attachment 2 -> my 2-fragment reconstruction. **Four removes, and the
licensee's own framing declines to warrant the words as verbatim NRC text.** The NRC's own voice in
this document is the RAI questions in Attachment 1, which carry "NRC QUESTION" headings; Attachment 1,
Page 2 of 8, Question 3 begins "Since the NRC staff has not approved the EPRI TR-103335, ..."

**(c) Modality: HEDGED TWICE, and scoped.**
- "**As a general rule**" scopes a **defeasible default**, and the exceptions are enumerated at Item
  4.4.2 - so the prohibition is explicitly not absolute.
- "**may introduce**" is **epistemic possibility, not assertion**. The sentence does **not** say that
  selection biases the statistics; it says selection bias **may** introduce bias. Any use that reads
  it as "biases in the data selection process introduce biases" has **deleted a modal**.
- "**applicable** data" is a third scope-setter: data judged inapplicable is outside the rule, and
  Item 4.4.2's five reasons are what make data inapplicable.

**The Item 4.4.2 list - complete, and free of any timing reason.** Printed at Attachment 2,
**Page 7 of 12**, introduced by a **NECESSARY condition**: "Rejection of outliers is acceptable **only
if** a specific, direct reason can be documented for each outlier rejected." Then (three consecutive
segments):

> "Five acceptable reasons for outlier rejection provided that they can be demonstrated, are given in the TR:" /
> "data transcription errors, calibration errors, calibration equipment errors," /
> "failed instruments, and design deficiencies."

- **Complete as printed: YES** - five members, enumerated, matching the entry's list exactly.
- **Free of any timing reason: YES.** No member is early, late, overdue, out-of-interval or
  unscheduled. Dedicated sweep over **both** attachments: "overdue", "late", "early", "out of
  interval", "out-of-interval", "unscheduled", "grace" - **no whole-word matches anywhere**. ("later"
  in the Q8 response contains "late" as a substring only.)
- **Logical form:** a **DISJUNCTION of five members**, each carrying the proviso "provided that they
  can be demonstrated", and the whole list governed by the "only if" necessary condition above.
  Citing one member (failed instruments) is legitimate, but it inherits the demonstrability proviso.
- **The list is the TR's, not the NRC's**: "are given in the TR". So it is EPRI's five reasons, as
  reported in the NRC status report, as excerpted-or-paraphrased by the licensee.
- **A timing-adjacent prohibition sits beside it**, at Attachment 2, Page 5 of 12: "it is
  unacceptable to exclude data simply because it is old data." This is a **prohibition on one
  age-based exclusion**, not an accepted reason for one. It is the only sentence in either attachment
  that touches the time axis of data selection, **and it points away from excluding on timing.**

### SUB-CLAIM 4 - ML003677584, the two drift-SD sentences

**VERBATIM: YES.** Both sentences, with their printed location.

> R17-R18: "The standard deviation with these calibrations removed ranged from 0.381% at the zero
> point of calibration to 0.478% at the 100% point of calibration."
> R19-R20: "With these calibrations in the data set the standard deviation was 0.615% at the zero
> calibration point and 1.110% at the 100% calibration point."

**Printed location, corrected.** The Q8 **response begins on Attachment 1, Page 4 of 8** and the page
break falls mid-sentence inside it ("However, the tolerance interval was" | page marker "Page 5 of 8"
| "skewed by two instances of extreme drift."). The **two SD sentences are on Page 5 of 8** - so the
entry's "Attachment 1 p.5 (Q8 response)" is right for the SD sentences - but **the record count and
the whole first half of the response are on Page 4 of 8.**

**UNITS - SETTLED, and the entry's qualifier is not printed.** The literal string "%" is printed
after each of the four numbers. **"of span" and "percent of span" do not appear in that sentence and
do not appear anywhere in Attachment 1.** So the "of span" qualifier is **supplied by the reader, not
served by the document**. MY OWN OBSERVATION, offered as a caution and not as a finding about anyone's
process: the phrase "converting to a **percent of span**" IS printed in the *other* document in this
batch, ML13303B093 (San Onofre) - the two documents are easy to cross-contaminate on exactly this word.

**Numerator class, quoted with its exclusions.** Standard deviation of drift over a single
model-group analysis: "This was in the analysis of **Rosemount Transmitter Model 1153DB**." (R3),
reported **at two calibration points** - "at the zero point of calibration" and "at the 100% point of
calibration". The drift definition "Drift is defined as as-found - as-left." **is NOT in Q8**; it is
in Attachment 2, Item 4.2, inside the NRC-status excerpt. **So reading the Q8 standard deviations as
SDs of (as-found minus as-left) is an inference across attachments, not a quotation from the sentence
that prints the numbers.** The sub-model is inconsistent across the letter: Q8 says "1153DB", Q5 says
"(e.g., Rosemount 1153DB3s)", Q9 says "(e.g., Rosemount 1153DB4 transmitters)."

**DENOMINATOR - OBTAINED, and it is printed.** "**There were 6088 data points in this analysis.**"
(R4, Attachment 1, Page 4 of 8). Coverage figures are printed with it: "The +/-1 standard deviation
contained 5727 of the 6088 data points." / "Therefore 94.07% of the data points were within I
standard deviation of the mean." / "The +/-1.5 standard deviation contained 5914 of the 6088 data
points." The count is **not** attached to the SD sentences themselves.

**EXCLUDED CLASS - and it is narrower than "two transmitters' calibrations".** What was actually
removed:

> R10-R11: "One test (nine-point calibration test) conducted on two different instruments accounted
> for 40%" / "of the tolerance interval magnitude."
> R12: "Both of these transmitters were later designated as failed and replaced."
> R15: "The removed data points constituted less than 0.3% of the data."
> R16: "The magnitude of the analyzed drift became less conservative with the removal of **these two
> calibrations**."
> R28: "Therefore, these data points were eliminated from the drift analysis."

And the transmitter-level removal is a **COUNTERFACTUAL, in the subjunctive**:

> R13-R14: "**If** the transmitters were replaced at the time of the initial determination of extreme
> drift," / "the data from these transmitters **would have been** removed from the initial data set."

So: **two calibrations were removed, not two transmitters' calibration histories.** The transmitters'
other records stayed in. MY OWN ARITHMETIC, carrying the source's stated bound: "less than 0.3%" of
6088 data points is **fewer than about 18 data points**; the source prints the bound, not the count,
so the count of removed points is not printed.

**Stated justification** (not a timing one): "it was determined that these calibrations were not
representative of the pool of calibrations." (R22), plus R23-R27 on conservatism masking trending.
**And the licensee concedes the removal falls outside the five-reason rule:** "Only one analysis
removed outliers **without specific justification as defined in Section 4.4.2** of the" / "NRC status
Report on EPRI TR-1 03335." (R1-R2). R29-R30: "No other observations were removed on a purely
statistical criteria (i.e., no outlier outside of 3.5" / "sigma were removed)."

**UNCERTAINTY: CONFIRMED NOT PRINTED.** No uncertainty, confidence interval or per-point sample size
is printed with any of the four SD values.

**ENTRY LINE 13's RATIOS.** MY OWN ARITHMETIC: 0.615/0.381 = 1.614; 1.110/0.478 = 2.322. The entry's
"~1.6 to ~2.3" is arithmetically right. **Carrying the source's uncertainty through: the source prints
none, so these ratios are point ratios of unqualified point estimates and carry no interval either.**

**OVERLAP WITH THE CANDIDATE'S EXPOSURE CLASS, BOTH DIRECTIONS - and it is unenumerable here.**
- *Does the excluded class contain early arrivals that were never later failed?* **NO, by
  construction**: the excluded class is exactly one nine-point calibration test on each of two
  instruments, and **both** were "later designated as failed and replaced". There is no never-failed
  member.
- *Any overdue arrivals?* **NOT DETERMINABLE: the document prints no arrival-timing attribute for
  the excluded calibrations, or for any calibration.** Dedicated sweep over both attachments:
  "overdue", "late", "early", "out of interval", "out-of-interval", "unscheduled" - **no whole-word
  matches**. The excluded class is characterised by **failure**, not by timing, in either direction.
- *Does it include on-schedule records of instruments later failed?* **It includes records of
  instruments later failed - but only two of them, and their timing is not printed.** The same two
  instruments' remaining records **stayed in** the 6088 (R15: removed points were "less than 0.3% of
  the data"), and nothing says whether those were on schedule. So the exclusion **MISSES** every
  early and overdue arrival the candidate's exposure class would pick out, and **INCLUDES** a
  failure-caused exclusion the candidate's class does not contain.

Related method sentences, for the regime: Attachment 2, Item 4.4.4 (PNPP's own text): "One method was
to evaluate the standard deviations at different calibration Intervals." and "comparing the standard
deviations for the data in the various groups."; Item 4.4 (status): "if the standard deviation of
drift can be fitted with a regression line".

### SUB-CLAIM 5 - AD0669904

**Openable: YES, on the first WebFetch call, at the URL the citation names.** Fetched twice.

**Identifiable:**
- **Title: YES, legible on the cover - "Evaluation of Initial PROTECT Pilot Study".**
- **Report number: YES in substance - "NAFI TR-1124"**, but the OCR renders the prefix variously
  ("HAFI TR-1124", "NAIT TR-1124", "RAFT TR-1124", "MAPI TR-1124"). Both passes read the number 1124
  consistently.
- **Issuing organisation: NOT confirmable from the document's own legible text.** The cover block is
  garbled ("N A V A L .A .V t o N . C S T y") followed by legible "INDIANAPOLIS, INDIANA 46218". The
  body never spells out "Naval Avionics Facility"; the only expansion-like text is "Naval Air Systems
  Command", a different organisation. **"Naval Avionics Facility Indianapolis" is DTIC-catalogue or
  third-party attribution, not front matter I could read.**
- **Author: not legible.** The Acknowledgments refer to "the author" without naming him and credit
  "Mrs. Cynthia D. LaOue" as study coordinator, not author.
- **Date: not reliably legible** - the cover reads "16 DiCEM66R 1667". The body anchors the pilot to
  1966: "the March 1966 workload"; ten monthly workloads March-December; parameter estimates "from
  July 1964" to "November 1965"; a turnaround passage mentions "January 1967" (OCR-garbled).
- **No DD Form 1473 is present** - the page that looks like one is the instructions for filling it
  out. **So the clean-type front matter that would settle author and date is not in this PDF**, and
  the DTIC catalogue route failed (client_error).

**Table 4's caption - the full printed caption is LONGER than the form the claim gives.**
Printed: **"Monthly Summary of PROTECT Non-Scheduled (Unscheduled and Off-Station) Calibrations."**
So Table 4 does carry "Non-Scheduled (Unscheduled and Off-Station) Calibrations" - as a **substring**;
the shortened form drops "Monthly Summary of PROTECT", which is the part that says the table reports
**monthly volumes**. Sibling caption: Table 3, "MONTHLY SUMMARY OF PROTECT SCHEDULED CALIBRATIONS".

**The "not all scheduled equipments were sent in" sentence - PRESENT, in Section IV.F, but my two
passes do not agree character-for-character.** Pass 2, as two legible consecutive fragments:

> "Predicted figures were based on the actual number of equipments calibrated," /
> "since not all scheduled equipments were sent in for calibration."

Pass 1 served the same sentence as "The Predicted figures were based on" / "the actçual jiumber of
equipments calibrated, since not all scheduled equipments were sent in for calibration." - i.e. with
a leading "The" and with OCR damage across "actual number". **I therefore report the string as
present in substance and label my rendering a 2-fragment reconstruction whose leading article and
whose OCR state at "actual number" I could not settle across two passes.** The string as the entry
carries it - "were based on the actual number of equipments calibrated, since not all scheduled
equipments were sent in for calibration" - **is not certainly character-verbatim**; it is at best a
corrected reading of damaged OCR.

**Printed location:** body text of Section IV.F, whose heading is legible: "F. Tabular Summary and
Discussion of Scheduled Calibrations". **It introduces Table 3 (SCHEDULED), not Table 4.** Not a
footnote.

**WHAT ITS OPENING WORDS SCOPE - and this is what Kill B turns on.** "Predicted figures were based
on ..." scopes the clause to **how Table 3's PREDICTED column was normalised**. The main clause
**RECORDS A NORMALISATION MOVE** (a denominator choice); the "since" clause **ASSERTS non-submission
as a fact**. Table 3's own column structure confirms the move - column headings, as transcribed
(partly reconstructed from fragmented OCR, so labelled as such):

> 1. MONTH / 2. NUMBER SCHEDULED / 3. NUMBER CALIBRATED / 4. PREDICTED NO. OUT-OF-TOLERANCE* /
> 5. ACTUAL NO. OUT-OF-TOLERANCE / 6. PREDICTED TIME COST / 7. ACTUAL TIME COST
> Footnote: "* Based on Number Calibrated"

So the document carries BOTH "NUMBER SCHEDULED" and "NUMBER CALIBRATED" and **re-bases the predicted
out-of-tolerance count on the latter**. Row 1 (March): 23 scheduled, 21 calibrated; row 2 (April): 18
scheduled, 12 calibrated. (The out-of-tolerance cells of both rows are **[illegible]**.) The
document also names the **cause** of non-submission: "Since the pilot-study was operated on a manual
basis, no effort was made to remind custodians" and "...may recall too many equipments for the
available calibration time."

**Does it ANYWHERE compare as-found condition between scheduled and non-scheduled calibrations?**
**NO SUCH COMPARISON IS PRINTED IN THE LEGIBLE TEXT, and the two places where one could hide are
illegible.** Tables 3 and 4 are presented separately; the predicted-vs-actual analysis runs on
scheduled calibrations only. **Section IV.G ("G. Tabular Summary of Non-Scheduled Calibrations") is
readable only as its heading plus fragments** - "...equipment subsission...", "...repair agency after
the repair work...", "Ten hours in the P>>P>r>tlon of the vork-", and a final "Table 4 gives the
[illegible] of these [illegible]". **Table 4's column headings and every one of its data cells are
illegible**, so I **cannot confirm or rule out** an out-of-tolerance column in Table 4. **This is
COULD NOT READ from OCR damage, not absence.**

**Adversary 1's word sweep, re-run as dedicated single-term sweeps.**
- "unscheduled": **PRESENT, three occurrences** - CONFIRMED. IV.C: "...any special calibration
  requests (unscheduled calibrations) for these test equipments."; IV.D: "...due to unscheduled
  calibrations of some equipments (discussed further in the next section)."; and the Table 4 caption.
- "non-scheduled": TOC, list of tables, the IV.G heading, the Table 4 caption.
- "off-station": Table 4 caption and the list of tables only.
- "early", "overdue", "suspect", "bias": **not found in the legible text** - CONFIRMED, **with the
  OCR caveat**: Section IV.G's body and all of Table 4 are illegible and could hide occurrences.
- **BUT the as-found CONCEPT is present under other words, which a sweep on "as-found" misses.**
  "out-of-tolerance" occurs many times, including in Table 2 and Table 3 headings and in III.A
  ("...out-of-tolerance or to have failed..."). "in-tolerance" occurs in III.B's definition of C_i -
  "In-tolerance at submission" - and in IV.A. "at submission" occurs in the definitions of C_i and
  O_i ("...out-of-tolerance at submission."). "interval" occurs in III.A: "Certain restraints on the
  time interval between calibrations are used...". "recall" occurs many times: "Recall all test
  equipments which have exceeded their respective T_c." And IV.A prints a measurement limitation:
  "the 'true' condition received could not be determined."
- The only timing-to-condition link printed is a **MODEL DEFINITION, not an observation**: "F_i(T) -
  The probability that a test equipment in the ith class was out-of-tolerance (failed) prior to time
  T." That **DEFINES** failure probability as a function of elapsed time; it does not **MEASURE**
  condition against lateness or against scheduling status.

### SUB-CLAIM 6 - the motivating-gap sentence over the instances actually opened

**Instances I OPENED: three** - ML13303B093, ML003677584, AD0669904.
**Instances the entry's universal ranges over that I did NOT open: all the rest**, named in the READ
LEVEL table above (RP-1, ILAC-G24/OIML D10, Castrup 2005/2006, Jackson & Castrup 1987, Bare 2006,
Yiu & Su, GE Vernova, Beamex, OIML G20, SRNL-STI-2012-00190, EPRI TR-103335, the NRC Status Report,
MTA-MA-019, Fluke).

Over the three I opened, the entry's sentence - "No document ... asserts that presupposition, denies
it, or tests it" - is **TRUE OVER THOSE THREE INSTANCES, with one COULD-NOT-READ reservation**:

- **ML13303B093: TRUE.** It never mentions arrival timing, reason for calibration, or selection bias;
  both interval bounds carry non-arrival reasons, printed.
- **ML003677584: TRUE, but it is the near miss and should be recorded as one.** It **asserts a
  general, doubly-hedged anti-selection principle** - "As a general rule, it is unacceptable to
  reject applicable data, because biases in the data selection process **may** introduce biases in
  the calculated statistics." - and it fits drift SD against calibration interval (Item 4.4.4).
  **But it names no arrival-timing variable anywhere** (no whole-word "overdue", "late", "early",
  "out of interval", "unscheduled" in either attachment), so it neither asserts that arrival timing
  is non-informative, nor denies it, nor tests it. It asserts the *genus* (selection bias) and is
  **silent on the species** (arrival timing). Its one time-axis sentence, "it is unacceptable to
  exclude data simply because it is old data", is a prohibition on age-based exclusion.
- **AD0669904: TRUE OVER THE LEGIBLE TEXT; UNENUMERABLE over Section IV.G and Table 4**, which are
  illegible. It tabulates non-scheduled calibration volumes and handles non-submission by re-basing a
  denominator; it prints no comparison of condition against scheduling status or against lateness in
  anything I could read.

**THE FULL UNIVERSAL AS THE ENTRY WRITES IT IS UNENUMERATED**, because it ranges over roughly a dozen
documents I did not open and over the records of readers whose logs I did not read. **True over my
three instances is not established over the entry's set.**

**Is the entry's correction list wrong to record AD0669904 as an unrun check? YES, on both counts it
makes.**
- "**Title never obtained**": **FALSE.** The title "Evaluation of Initial PROTECT Pilot Study" is
  legible on the cover, and so is the report number NAFI TR-1124. I read both, twice.
- "**Named checks that remain UNRUN**": **FALSE for the title, the Table 4 caption, the IV.F sentence
  and the word sweep** - all four ran, and the document opens in **one fetch** at the URL its own
  citation names.
- **But a real gap remains, and it is a different one from the entry's:** the **issuing organisation,
  the author and the date are NOT confirmable from this PDF's front matter** (cover garbled, no DD
  Form 1473 present), and **Section IV.G and the whole of Table 4 are unreadable** - which is exactly
  where a scheduled-vs-non-scheduled condition comparison would sit. **That** is the unrun check, and
  it needs a clean-type source (a DTIC catalogue record or a microfiche-quality rescan), not another
  pass at this scan.

## REGIME

**ML13303B093 (San Onofre Unit 2, 1989).** Population: transmitters at one PWR unit with five
calibrations of history, **grouped by model of transmitter** and then edited. Unit of analysis: a
drift **RATE** - (as-found minus as-left), maximum over the five calibrations, percent of span,
divided by elapsed interval. Operating condition: a **one-time** request to defer 18-month channel
calibrations to the Cycle 5 refuelling outage, "or September 11, 1989, whichever comes first".
Thresholds: interval in [100, 683] days; T-Test outlier removal; Chi Square. **Does the claim sit
inside this regime? NO.** The regime carries no arrival-timing variable, no due date, and no reason-
for-calibration field. A claim about informative arrival is **silent here, and this document is
silent on it** - not supportive of either side.

**ML003677584 (Perry, 2000).** Population: Perry TS instrument channels; the data window is printed
**inconsistently and the inconsistency is unresolved in the document** - Attachment 1 Q6: "All
available data for the last **96 months** for each Technical Specification line item was collected,";
Attachment 2 Item 4.3: "Data was selected for the last **90 months** (5 cycles)." and "A time
interval of 90 months was selected as representative based on the PNPP operating history." Unit of
analysis: a data point = one as-found/as-left pair at one calibration point; **6088 of them** in the
Rosemount 1153DB analysis. Instrument: Rosemount 1153DB (sub-model inconsistent: DB / DB3s / DB4).
Operating condition: a licence amendment for a **24-month operating cycle**, with Q4 recording "the
extension of surveillance interval from 60 months to 72 months". Thresholds: +/-1 and +/-1.5 sigma
coverage; a 3.5-sigma outlier rule the licensee says it did not use. **Does the claim sit inside this
regime? PARTLY.** Calibration **interval** is a covariate here (Item 4.4.4). **Arrival relative to a
due date is not**, and no exclusion in this document is keyed to it.

**AD0669904 (NAFI PROTECT pilot, 1966).** Population: test equipment at one Navy calibration
activity - "Five equipments were selected from each of the twenty-five classes in PROTECT", class 3
deleted and class 25 replaced by class 26, "There are k = 24 classes in this pilot study"; the final
equipment count is **not printed**. Unit of analysis: an equipment-calibration event, **aggregated
MONTHLY** into counts. Operating condition: a **manual-basis** pilot, ten monthly workloads
March-December 1966, with model parameters estimated from July 1964 to November 1965. Thresholds: a
per-class recall time T_c; out-of-tolerance **at submission**; and the measurement limitation "the
'true' condition received could not be determined." **Does the claim sit inside this regime? THIS IS
THE CLOSEST OF THE THREE, AND STILL OUTSIDE IT.** The regime does carry a due time (T_c) and a
non-submission mechanism, but what it **reports** is monthly counts - scheduled, calibrated,
predicted and actual out-of-tolerance - **aggregated to the month and never crossed with lateness or
with scheduling status** in anything legible. Aggregation to the month is itself fatal to the
claim's unit: an individual arrival's earliness cannot be recovered from a monthly total.

## DEFECTS FOUND

**D1. Kill A's reading is a logical-form error, and it is the kill's whole load.** "Only data points
with calibration intervals between 100 and 683 days were included in the evaluation." is a
**NECESSARY condition on inclusion**, keyed to **interval length in days**, with **both bounds given
non-arrival reasons in the document's own next two sentences** ("not applicable for a long term drift
consideration"; "since this is the maximum interval between calibrations"). Read as the convention by
which "early arrivals are excluded rather than modelled", it inverts the quantity: MY OWN REASONING -
an early arrival whose elapsed interval is anywhere from 100 days up to the nominal interval is
**INCLUDED** by this rule. The document contains no "early", no "overdue", no "unscheduled", no
"suspect" and no "bias".

**D2. ML13303B093's denominator is not printed at all**, so no exclusion fraction can be computed
from it: "No total count of data points or calibration records is printed." A rule that BOUNDS a
selection without reporting the selection's size cannot show how much of the suspect arm it removes.

**D3. The entry's "per cent of span by context" for the Perry numbers is a supplied qualifier.** "%"
is printed; **"of span" and "percent of span" appear nowhere in Attachment 1.** The entry's own "by
context" hedge is the only thing keeping this from being a misquotation. (The phrase "converting to a
percent of span" IS printed in ML13303B093 - MY OWN OBSERVATION about how easy these two documents
are to cross.)

**D4. The Item 4.3 sentence is weaker provenance than "second-hand".** The licensee's framing is
"excerpts **or paraphrases** from the NRC Status Report on the Staff review of EPRI Technical Report
(TR)-103335 ... dated March, 1994." It is therefore **not warranted as verbatim NRC text by the
document that carries it**, and the five-reason list is additionally the **TR's** list ("are given in
the TR"). Chain: EPRI TR -> NRC Status Report -> licensee excerpt-or-paraphrase -> my 2-fragment
reconstruction. **EPRI TR-103335 and the NRC Status Report were not opened by me.**

**D5. The Item 4.3 sentence is doubly hedged and its hedges are load-bearing.** "**As a general
rule**" (defeasible default, exceptions enumerated at 4.4.2) and "**may** introduce" (epistemic
possibility, not assertion), scoped to "**applicable** data". Any use of it as an assertion that
selection does bias the statistics deletes a modal.

**D6. The entry's excluded class at Perry is wrong by a level of aggregation.** The document removed
**two calibrations** - "with the removal of **these two calibrations**", "The removed data points
constituted **less than 0.3% of the data**" (of 6088: **fewer than about 18 points, MY OWN
ARITHMETIC**). The **transmitter-level** removal the entry's phrase "two transmitters' calibrations
removed" describes is the document's **COUNTERFACTUAL**: "**If** the transmitters were replaced at
the time of the initial determination of extreme drift, the data from these transmitters **would have
been** removed from the initial data set." Reading that subjunctive as what was done is a modality
error.

**D7. Kill C cites as an instance of the rule what the licensee itself calls a departure from it.**
Q8's own first sentence: "Only one analysis removed outliers **without specific justification as
defined in Section 4.4.2** of the NRC status Report on EPRI TR-1 03335." The Rosemount removal was
justified instead by representativeness and by trending-margin reasoning (R22-R27), not by the five
documented causes. So "informative EXCLUSION **on a documented cause**" is at best contested on the
document's own words.

**D8. The exclusion at Perry is keyed to FAILURE, not to TIMING, and no timing attribute of the
excluded calibrations is printed.** Both directions of overlap are therefore unenumerable in this
document: it contains **no** early arrival that was never later failed (by construction - both
instruments failed), **no** identified overdue arrival (the words are absent), and it leaves the same
two instruments' other records **in** the data set with their timing unstated.

**D9. The entry is wrong twice about AD0669904.** "Title never obtained" is **FALSE** - the title and
report number are legible on the cover. Listing it among "Named checks that remain UNRUN" is
**FALSE** - it opens in one fetch and four named checks ran on it. (The genuine gap is different:
organisation, author and date are not readable from this PDF, and Section IV.G plus all of Table 4
are illegible.)

**D10. Kill B's quotation is not certainly character-verbatim, and its scope is a denominator
convention.** My two passes disagree on the leading article and on the OCR state of "actual number";
the sentence's opening words are "Predicted figures were based on ...", scoping it to **Table 3's
PREDICTED column**, confirmed by Table 3's footnote "**\* Based on Number Calibrated**". The mechanism
the field saw is **NON-SUBMISSION of scheduled equipment** - a missing-record mechanism, with its
cause printed ("no effort was made to remind custodians"; recall capacity) - **not arrival timing
relative to a due date.** And the field **handled** it, by re-basing the predicted count's
denominator; "did not analyse it" is true in the sense that no condition-vs-scheduling comparison is
printed, but the flat "did not analyse it" understates the handling and overstates what is readable,
since IV.G and Table 4 are illegible.

**D11. Kill B's sweep missed the as-found concept under other words.** "as-found" is indeed absent
from AD0669904, but "out-of-tolerance" occurs many times (including in Table 2 and Table 3 headings),
"in-tolerance" and "at submission" occur in the III.B definitions of C_i and O_i, and III.A prints
"Certain restraints on the **time interval** between calibrations are used". A sweep on the paper's
own vocabulary, not the candidate's, is the sweep that was needed. **This is the second-sweep rule
earning its place.**

**D12. Table 4's caption is shortened in the claim.** Printed: "Monthly Summary of PROTECT
Non-Scheduled (Unscheduled and Off-Station) Calibrations." The dropped words are the ones that say
the table reports monthly **volumes**, which is why it cannot bear on condition.

**D13. The 90-vs-96-month inconsistency inside ML003677584 is real and printed**, in two different
attachments of the same letter (Attachment 1 Q6: 96 months; Attachment 2 Item 4.3: 90 months, "5
cycles"). It is not a reader's error.

**D14. ML13303B093's own unit of analysis is internally tense as served**: "selecting the maximum
difference for the five calibrations" (one value per transmitter) against "data points with
calibration intervals" (one value per pair). I report it; I do not resolve it.

**D15. Citation front matter, corrections.**
- ML13303B093: author/date/title confirmed **from the document itself**, not only from a log -
  Kenneth P. Baskin, Vice President, Southern California Edison Company; May 15, 1989; Docket No.
  50-361; San Onofre Unit 2; **Amendment Application No. 79**, a **one-time exception** to the
  18-month channel calibration surveillance requirements of TS 3/4.10.7, **supplementing an
  application of March 10, 1989**. The entry should carry "Amendment Application No. 79" and
  "one-time exception"; "application to amend TS 3/4.10.7" understates that it is a one-time
  deferral, not a permanent interval change.
- AD0669904: the organisation "Naval Avionics Facility Indianapolis" is **not** front matter I could
  read; cite it as DTIC attribution. Report number as printed: **NAFI TR-1124** (the entry's "NAFI
  Technical Report 1124" is a correct expansion). Author and date: **not legible**; "probably 1967"
  should stay flagged, and the body's own anchors are 1966 ("the March 1966 workload", ten monthly
  workloads March-December).
- ML003677584: the Q8 **response** begins on **Attachment 1, Page 4 of 8**; only the two SD sentences
  fall on Page 5. The 6088 count is on Page 4.

## ROUTES THAT FAILED

- **https://apps.dtic.mil/sti/citations/AD0669904** - "failed at its site (client_error), and nothing
  of the page was retrieved." **ROUTE FAILED** (not a spent budget). This was my sixth and last
  fetch; it was aimed only at recovering clean-type front matter (organisation, author, date) for
  AD0669904, which the PDF's garbled cover and missing DD Form 1473 do not provide. A different
  catalogue route (a DTIC search page, or the "Reproduced by the CLEARINGHOUSE for Federal Scientific
  & Technical Information Springfield Va. 22151" lineage) is **UNTRIED - budget exhausted, not a
  failed route.**
- No search was refused; **I ran no searches at all** - all three documents located from their
  citations.
- **Nothing else failed.** All three nrc.gov / dtic.mil PDFs opened on the first WebFetch call, and
  both second passes opened too. The summariser served a 30-segment ordered transcription of the Q8
  response and a 7-column table-heading transcription on transcription-style prompts; **the only
  thing it would not serve is Table 4's cells and Section IV.G's body, and it said why - the OCR is
  destroyed there.** That is a property of the scan, not of my request: I asked twice, the second
  time with an explicit [illegible]-marking instruction, and it returned [illegible].

## BEARING ON THE LEDGER ENTRY

**Kill A (adversary 1 §5, San Onofre) - STRIKE.** It fails on the document's own next two sentences
and on logical form. The 100-683 day rule is a **necessary condition on inclusion keyed to interval
length**, given a **drift-horizon** reason and an **administrative-maximum** reason, in a document
that contains no "early", no "overdue", no "unscheduled", no "suspect", no "bias" and no reason-for-
calibration field at all. "Early arrivals are excluded rather than modelled" is **false of this
document**: MY OWN REASONING - early arrivals from 100 days up to the nominal interval are included.
The presupposition is **not** "contested in the nuclear regime" by this document; this document is
**silent** on it, which is what the entry's motivating-gap sentence says. ML13303B093 should move
from "contests the motivating gap" to **"opened, silent on the arrival axis, both interval bounds
reasoned on other grounds"**, and its denominator should be recorded as **not printed**.

**Kill B (adversary 1 attack 7, NAFI) - NARROW, do not strike.** What survives: the field **did**
tabulate non-scheduled calibrations (Table 4, caption legible) and **did** record that scheduled
equipment was not submitted, naming the cause; and **no comparison of condition against scheduling
status is printed in anything legible**. What must be corrected: (i) the quotation is a **2-fragment
reconstruction of damaged OCR**, not certainly character-verbatim, and my two passes disagree on it;
(ii) its opening words scope it to **Table 3's PREDICTED column**, and Table 3's footnote "\* Based on
Number Calibrated" shows the move is a **denominator re-basing**; (iii) the mechanism seen is
**non-submission (a missing record)**, not **arrival timing relative to due**; (iv) it was **handled**
by that re-basing, so "did not analyse it" needs the qualifier; (v) **Section IV.G and all of Table 4
are illegible**, so the absence is **COULD NOT READ over the decisive pages**, not established
absence. Attack 7 cannot carry a kill on the arrival axis: at best it shows a 1966 programme
conditioning on what arrived without testing what did not, which is adjacent to the candidate's
mechanism and **aggregated to the month**, hence at the wrong unit.

**Kill C (adversary 3 clause C7, Perry) - NARROW sharply; it does not reach the arrival axis.** The
exclusion is real and is on a stated cause - "Both of these transmitters were later designated as
failed and replaced." - but: it removed **two calibrations**, "less than 0.3% of the data" of 6088
(**fewer than ~18 points, MY OWN ARITHMETIC**), not two transmitters' histories (that is the
document's **counterfactual**, D6); the licensee itself calls the removal one made "**without
specific justification as defined in Section 4.4.2**" (D7); and **no arrival-timing attribute of the
excluded calibrations is printed anywhere in the letter** (D8), with "overdue", "late", "early", "out
of interval" and "unscheduled" absent from both attachments. So "the **suspect arm** is partly
handled by informative exclusion" conflates the **failure** arm with the **timing** arm. C7 supports
at most: *in this one nuclear analysis, a failure-caused exclusion preceded the curve fit.* It does
**not** support "limb (ii)'s model would have to represent exclusion as well as arrival" **as a fact
about timing in the nuclear regime** - the regime prints no timing exclusion. If C7 is kept at all,
keep it as a **promotion condition** on limb (ii) (a model of this method should say what it does with
failure-caused exclusions), not as a kill on the motivating gap.

**Entry line 13's numbers - mostly sound, two corrections.** The four values are **verbatim** with
literal "%" at Attachment 1, Page 5 of 8; "no uncertainty printed" is **CONFIRMED** (none, no CI, no
per-point n); the ratios 1.614 and 2.322 are **arithmetically right** and, since the source prints no
uncertainty, they carry none (MY OWN ARITHMETIC). Corrections: **"of span" is not printed anywhere in
Attachment 1** (D3), and **"two transmitters' calibrations removed" should read "two calibrations
removed"** (D6). Also now available and worth adding: the **denominator is printed - "There were 6088
data points in this analysis." (Attachment 1, Page 4 of 8)** - and the removed set is bounded at
"less than 0.3% of the data". The sub-claim's premise that "the count was not served" is **false; it
is printed and I have it.**

**The motivating-gap sentence itself - HOLDS over the three instances I opened, and should be
re-stated as instanced rather than universal.** None of ML13303B093, ML003677584 or AD0669904
asserts, denies or tests the non-informative-arrival presupposition. ML003677584 is the near miss and
should be recorded as such: it asserts the **genus** - "As a general rule, it is unacceptable to
reject applicable data, because biases in the data selection process **may** introduce biases in the
calculated statistics." - is silent on the **species**, and its one time-axis sentence, "it is
unacceptable to exclude data simply because it is old data", **points away from** excluding on
timing. **But the entry's sentence as written is an UNENUMERATED UNIVERSAL**: it ranges over roughly a
dozen documents I did not open. Re-write it as "no document any reader has opened and reported" plus
**an explicit list**, or it stays unverified in the way this ledger keeps being bitten by.

**Resolution bearing.** Attacks 2 and 4, insofar as they rest on Kill A, should stay **Partial at
most and are candidates for Resolved** now that Kill A is struck; Kill B's narrowing does not
reinstate them. Attack 6's **Resolved** is unaffected by anything I read. "Reason for silence
mechanism (3)" - a field that handles the mechanism by convention - is **supported only by the NAFI
denominator re-basing (a missing-record convention, monthly aggregation)** and **not** by the San
Onofre interval window; it should be re-grounded on the former and the San Onofre citation removed.
**The NEW NEIGHBOUR that took novelty from "one close neighbour" to "two" should be re-examined:** if
it is ML003677584's drift-SD exclusion, it **BOUNDS a failure-caused exclusion with no printed timing
attribute** and is therefore a neighbour on the **exclusion** axis only, at a different unit (6088
as-found/as-left data points, one instrument model, one plant) - MY OWN READING of the overlap, which
I state as a bearing and not as a finding about how the grade was set. Novelty should revert to
**"Medium with one close neighbour"** unless the second neighbour is something other than this.

**Cap bearing: none.** The cap rests on attack 5 / adversary 3's algebraic identity and its two
backup legs (RP-1 unopened by all four readers; the GE Vernova exposure variable defined but not
populated). **I opened none of those three sources** and spent my whole budget on the three documents
the sub-claims name. Nothing I read touches the cap in either direction, and I record that as a
spent budget, not as support for the cap.
