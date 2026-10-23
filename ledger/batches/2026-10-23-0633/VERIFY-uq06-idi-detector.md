# VERIFY - Idi et al. PISA detector: Table I "Fault/day" 0.33, stated operating point, and the absent time-below-range number

Checker: fresh context. Budget used: 8 WebFetch, 1 WebSearch. Date 2026-10-23.

I did not read the entry's adversary or record files, and I have not been shown the
reviewer's reasoning. Everything below is from the document.

## CLAIM

As the entry carries it: that a published pressure-induced-sensor-attenuation detector
exists with a stated operating point; that it prints 0.33 faults per monitoring day in
its Table I column "Fault/day" over 72 traces averaging 9.91 days; and that it prints NO
time-below-range percentage and NO between-arm contrast.

Source as the entry cites it: Idi E. et al. (2024), IEEE Journal of Biomedical and Health
Informatics, DOI 10.1109/JBHI.2024.3465893.

## READ LEVEL

**FULL TEXT**, for the single document behind DOI 10.1109/JBHI.2024.3465893, read at the
University of Padova institutional repository in two versions of the same paper:

- **Published version** (research.unipd.it file `3e8723a3-c6c6-4017-8492-d45e0926dda5`):
  front matter, abstract, body, references. Carries "IEEE Journal of Biomedical and Health
  Informatics", Vol. 29, No. 2, first page 1383, running headers through 1395, and the
  dates received 22 April 2024 / revised 19 August 2024 / accepted 12 September 2024 /
  published online 20 September 2024 / current version 6 February 2025.
  **Table bodies were NOT extracted from this file** - the markdown converter returned
  Table I's caption and dropped every cell. That is a property of the conversion, not of
  the paper.
- **Author-accepted manuscript** (research.unipd.it file
  `c627be92-31a7-41f8-b676-dfb19d3f62cb`): same title, same five authors, same DOI line,
  placeholder header "GENERIC COLORIZED JOURNAL, VOL. XX, NO. XX, XXXX 2017", CC BY-NC-ND
  licence statement, "accepted for publication" notice. **Table bodies DID extract from
  this file**, including Table I, Table II, Table V, Table VIII and Table IX.

**These two files are ONE document**, not two sources: same DOI, same title, same author
line. An inflated prior list would count them twice; I do not. All Table I cell values
below are therefore read from the **accepted manuscript** of this DOI, not from the
typeset published page. I could not cross-check the cells against the published typesetting
because the converter dropped that file's table bodies and my fetch budget was then spent.

Every sub-claim (a) through (g) was reached. Nothing is marked COULD NOT CHECK.

## WHAT THE SOURCE SAYS (quotations as served)

The summariser caps verbatim quotation at roughly 125 characters, so the longer passages
below are **reconstructions from ordered consecutive returns**; I say how many fragments
at each, and I have completed no cut string by inference.

### (b) Front matter

Author list in printed order, taken from the front matter of both files:

> Elena Idi, Eleonora Manzoni, Andrea Facchinetti, Giovanni Sparacino, Simone Del Favero

Title:

> Unsupervised Retrospective Detection of Pressure Induced Failures in Continuous Glucose
> Monitoring Sensors for T1D Management

Venue: IEEE Journal of Biomedical and Health Informatics, Vol. 29, No. 2, February 2025
issue; first page 1383. DOI line as printed: "DOI 10.1109/JBHI.2024.3465893".

The last page, 1395, is **MY OWN INFERENCE** from the published file's running headers,
not a printed page range; the paper itself prints no range. All five authors are at the
same institution's repository deposit, i.e. **one group**, which is worth saying because
the claim rests on a single group's single paper.

### (c) The 0.33 cell - CONFIRMED

Table I caption, reconstructed from two consecutive returns:

> CHARACTERISTICS OF THE SIMULATED AND REAL DATASETS: NUMBER OF TRACES (N TRACES), THE
> AVERAGE MONITORING TIME (MONITORING TIME), AND THE NUMBER OF FAULTS PER DAY (FAULT/DAY).

Table I body as served, three value columns plus a row-label column, two data rows and no
fourth column (I asked that question explicitly and the answer was "no fourth data column",
"only two data rows"):

| | N Traces | Monitoring Time | Fault/day |
|---|---|---|---|
| Simulated Data | 100 | 10.0 | 0.42 |
| Real Data | 72 | 9.91 | **0.33** |

So the entry's three numbers - **0.33**, **72**, **9.91** - are the Real Data row of
Table I, in the column the entry names, spelled as the entry spells it. A dedicated literal
sweep for "9.91" returned exactly one occurrence, "Only in Table I, Real Data row,
Monitoring Time cell"; the running text rounds it, saying subjects were "monitored for 10
days".

**DENOMINATOR, in the paper's own words.** The paper prints no total monitoring-day figure.
What it prints is the per-trace mean, 9.91, over 72 traces. 72 x 9.91 = **713.5
trace-days - MY OWN ARITHMETIC**, carrying no stated uncertainty because the paper states
none on 9.91. And the unit of that denominator is a **device-trace, not a subject**: the
real set is

> collected on 36 adult subjects with Type 1 Diabetes

and

> Only subjects wearing simultaneously two different CGM devices were selected

i.e. 36 subjects x 2 co-worn devices = 72 traces, so 713.5 device-trace-days is about
356.8 subject-days (**again my own arithmetic**).

**NUMERATOR CLASS, with its exclusions** (needed, because four other things in this paper
are "0.33" or one word from it). What Table I's 0.33 counts is the rate of
**consensus-labelled reference faults**, not any detector output. The ground-truth rule:

> The ground-truth (detailed in Table I) is defined knowing that the failures are
> characterized

and the discordance requirement, that the artifact affects

> only one device of the two worn by the subject

The labelling pipeline and its confidence cut:

> The traces were visually inspected by 3 operators

> Consensus meetings with 3 senior operator

> only the potions with label > 2 were selected as faulty

[sic "potions"] against Table II, "CRITERIA FOR MANUAL LABELING", whose three levels are

> Label 1: "Probably not a PISA" / Label 2: "It could a PISA" / Label 3: "It is a PISA"

so "> 2" admits **only level 3, "It is a PISA"**.

**OVERLAP IN BOTH DIRECTIONS.** What the 0.33 class **MISSES**: any pressure attenuation
that hit **both** co-worn sensors at once, excluded by the one-of-two-devices rule; every
episode a panel rated level 2, "It could a PISA", excluded by the "> 2" rule; every episode
invisible to retrospective visual inspection; every episode in a subject not wearing two
devices, excluded at subject selection; and anything lacking the fall-then-restoration
morphology. What it **INCLUDES** that a plain "rate of compression artifacts" would not:
it is counted per **device-trace**, so one physical compression seen on one of two co-worn
devices is one fault carried on two device-trace-days of denominator; and it is a
**certified-label rate**, not an event rate. 0.33 faults per monitoring day is therefore a
reference-label frequency under those exclusions, **not a population incidence of
compression artifacts**.

**Is it reported at some other operating point?** No, and this is the one place the entry's
wording could mislead a later reader. 0.33 Fault/day is **threshold-free** - it describes
the data, not a detector at a setting. Nothing needed re-deriving. The near neighbours
that a loose reading would collide with, all from the same dedicated "0.33" sweep:
Table V Local Outlier Factor CI "[0.26-0.33]"; Table V Connectivity Outlier Factor CI
"[0.26-0.33]"; Table VIII Isolation Forest F1-score 0.33; Table IX Clustering-Based Local
Outlier Factor FP/day median 0.33; and Table I Simulated Data Fault/day 0.42. The chosen
detector's own false positives per day is **0.29**, not 0.33 (Table V, below).

### (d) The operating point - PARTLY, and the distinction matters

What the paper **does** print. A recall / false-alarm pair for the selected method, in the
abstract:

> In real data, Isolation Forest is confirmed to be effective in the detection of failures,
> achieving a recall of 55% and generating 3 false alarms in 10 days.

(reconstruction from two consecutive fragments). The **hedged** form of the same figure, in
Section IV-B, which is the one to quote per discipline:

> IForest raises one of the lowest number of false alarms (less than 3 in 10 days)

and the interval form in Table V: Isolation Forest on real data, **Recall 0.55 [0.46-0.62],
FP/day 0.29 [0.25-0.32]**. Note that the abstract's bare "3 false alarms in 10 days" is the
unhedged restatement of "less than 3 in 10 days"; 0.29/day x 10 = 2.9, so the bare form
rounds up.

And a **threshold-selection rule**, Section III-D, served as five consecutive fragments:

> we split the dataset into training and test set (80:20)

> define a grid of possible thresholds and a cost function as follow:

> J represents the Euclidean distance of a point of the FP/day-Recall curve from the bottom
> right corner

> For each threshold, we compute the average recall and FP/day in the training set and the
> corresponding value of J.

> Once considered all the possible thresholds of the grid, we select the one that minimizes
> the cost function J.

with "thresholdopt = argmin(J) (7)". The cost function was served as
J(thr) = p[1 - Recall(thr)]^2 + [FP/day(thr)]^2 (Eq. 6), and the extraction appears to have
dropped a square-root sign, so **I do not rely on its exact algebraic form**. Separate
thresholds were set for daytime (7 am to 11 pm) and nighttime.

What the paper does **NOT** print: **no numeric threshold value anywhere**, and the
candidate grid is unspecified. I asked for this directly and the answer was "No numeric
threshold value is printed anywhere in the paper. The grid of candidate thresholds is not
specified."

**Logical form of the quotation I am relying on.** "achieving a recall of 55% and generating
3 false alarms in 10 days" is a **conjunction** reporting achieved performance - it is not a
condition at all, and in particular it is **not a sufficient instruction** for applying the
detector to new traces. The argmin-J passage is a **procedure**, and the procedure
**requires** a labelled training set (the 80:20 split supplies recall and FP/day per
candidate threshold): labels are a **necessary** input, so the rule is reproducible in
method but not transferable as a setting. A third party handed only this paper therefore
has the operating point as a **reported point on a curve**, and would have to re-run the
threshold search on their own labelled data to instantiate it.

### (e) What it detects

PISAs **specifically**, not pooled faults. The aim, two fragments:

> to detect one of the most common of these artifacts, the so-called pressure induced sensor
> attenuations

and the pipeline is described as designed

> to detect pressure induced malfunctions

The definition, from Section I-B rather than Methods - and I say so plainly, because I was
asked for the Methods definition and the paper puts it in the introduction:

> a fall of the glucose level followed by a restoration phase

> known in the community as Pressure-Induced Sensor Attenuations (PISAs)

**A real gap, stated as a gap and not as a finding against the paper:** the paper lists other
fault types - "drifts [16], [17], disconnections" - but **never states that the detector
excludes them**. I asked that question directly. The detector is an **unsupervised** anomaly
detector over five hand-designed features, so its alerts are generic anomaly scores graded
**against** PISA reference labels; anything non-PISA that trips the score is counted as a
false positive rather than being excluded by definition. The exclusions that are explicit
attach to the **reference class**, listed under (c) above, plus the evaluation rule that an
alert within

> a 45-minute time window after a fault

is "not counted as a false positive", with a false positive being an alarm in a window

> of duration Tw = 45 min where no compression artifact is present

### (f) Time below range, hypoglycaemia counts, between-arm contrast - NONE PRINTED

**Two sweeps, as required.** The first was a broad full-document read, which reported none.
The second was a **dedicated literal-string sweep** aimed only at these terms, and it
returned:

- "time below range", "TBR", "below range", "time in range", "TIR": **"No occurrence."**
  The nearest wording is Section I's "above or below this range (hyper and hypoglycemia
  respectively)", which is not a reported percentage.
- Any percentage of time spent in any glucose range: **"No occurrence."** Every percentage
  in the paper is either detection recall ("74%", "55%") or the share of monitoring time
  discarded in Section IV-B, "0.9%-1.25% of the 14400 minutes".
- "70 mg/dL" as a literal string: no occurrence; only "safe range (70-180 mg/dL)" in the
  introduction. "54 mg/dL": no occurrence.
- "between-arm": no occurrence. "control group": no occurrence. "arm" has **no whole-word
  occurrence** - every hit is the substring inside "alarm(s)". "intervention" and "randomi"
  occur only inside **reference titles**.
- "hypoglyc": occurs in the introduction as motivation and in reference titles only.

The closest the paper comes to the candidate's quantity, and the scoping that kills it as a
measurement - Section I-B, paragraph 2:

> the false perception that an hypoglycemic episode occurred (possibly altering the
> hypoglycemic event count)

**What the opening words scope:** the clause sits inside the paper's motivation for building
a detector, describing what a PISA **can** do to a reader of the trace. Its modality is
**possibility** - "possibly altering" - and the clause **ANNOUNCES / PREDICTS** the
hypoglycaemic-count distortion. It does not **ASSERT** a measured value and it reports no
number, no denominator and no units. Published is not performed: this paper **DEFINES and
MOTIVATES** the hypoglycaemia-count effect and **does not measure it**.

One thing a later reader could trip on, so I record it: the study's design has **two
simultaneously worn devices per subject**, and the paper does compare against the rule-based
method of its reference [22] (higher recall, "about ten times the FP/day"). Those are a
between-**device** ground-truth construction and a between-**method** comparison. Neither is
a between-arm or between-group outcome contrast, and neither rescues the claim in (f) in
either direction.

### (g) Sensor model

Real data:

> using the Dexcom G6 CGM sensor (Dexcom Inc., San Diego, CA)

> is a subset of the dataset collected during the Dexcom G6 Pivotal trial

on "36 adult subjects with Type 1 Diabetes".

**The second device is never named.** The paper says each selected subject wore "two
different CGM devices" and names only the Dexcom G6. So of the 72 traces, the model is named
for the G6 arm of the pairing and is **not stated** for the other. Whether "two different
CGM devices" means two units of one model or two distinct models is **not resolved in the
paper**; I will not guess it. ("Dexcom G4" appears only in a reference title.)

Simulated data: UVa/Padova T1D Simulator, no sensor model named -

> Each trace generated with the simulator is corrupted with realistic measurements noise

## REGIME

In the paper's own words. **Population:** 36 adults with type 1 diabetes, a subset of the
Dexcom G6 Pivotal trial, further restricted to "only subjects wearing simultaneously two
different CGM devices". **Unit of analysis:** the CGM trace, 72 of them, i.e. a device-trace
and not a subject. **Instrument:** Dexcom G6 (the co-worn second device unnamed). **Operating
condition:** retrospective, unsupervised, offline detection; the title says "Unsupervised
Retrospective", and separate day (7 am - 11 pm) and night thresholds. **Category detected:**
consensus-labelled PISAs at label level 3 only ("It is a PISA"), present on one of the two
co-worn devices. **Threshold:** chosen by argmin of a recall / FP-per-day distance cost on an
80:20 training split; no numeric value printed. **Second regime in the same paper:** 100
virtual subjects from the UVa/Padova simulator, 10.0 days each, Fault/day 0.42 - a different
regime, and the Table I row the entry does **not** cite.

**Does the claim sit inside this regime?** The three numbers (0.33 / 72 / 9.91) sit exactly
inside it - they are that regime's own descriptive row. The "stated operating point" sits
**partly** inside: a recall/FP pair is printed, a transferable numeric threshold is not. The
two negatives (no TBR percentage, no between-arm contrast) sit inside it and are confirmed.

## DEFECTS FOUND

These are defects in how the entry words things, not reasons the claim fails.

1. **Front-matter corrections.** The entry's "Idi E. et al. (2024)" is short by four named
   authors and off by one year on the citable form. Printed: Elena Idi, Eleonora Manzoni,
   Andrea Facchinetti, Giovanni Sparacino, Simone Del Favero, IEEE Journal of Biomedical and
   Health Informatics, **vol. 29, no. 2, February 2025**, first page **1383** (last page
   1395 is my inference from running headers), DOI 10.1109/JBHI.2024.3465893. Accepted
   12 September 2024 and online 20 September 2024, which is where the entry's "2024" comes
   from; it should read 2025 with the online-first date noted, or the volume and issue should
   be carried so the year is unambiguous.

2. **"0.33 faults per monitoring day" is a ground-truth prevalence, not a detector metric,
   and the entry does not say so.** Four other numbers in this paper are 0.33 (Table V twice
   as a CI bound, Table VIII as an F1, Table IX as an FP/day median) and the selected
   detector's own FP/day is 0.29. An entry that carries 0.33 next to the phrase "with a
   stated operating point" invites exactly the conflation the paper's own tables set up.

3. **"With a stated operating point" is true of a reported point and false of a transferable
   threshold.** No numeric threshold is printed and the candidate grid is unspecified. If the
   frame's clause (ii) needs something a third party could apply to new traces as-is, the
   paper supplies a **rule requiring labels**, not a setting.

4. **The denominator's unit is a device-trace, not a subject.** 72 traces are 36 subjects
   x 2 co-worn devices. Anyone converting 0.33/day into a per-patient burden without that
   step will be out by a factor near two.

5. **The sensor-model condition is only half specified.** The frame is conditioned on a
   sensor model; the paper names Dexcom G6 and leaves the co-worn second device unnamed.

6. **Not a defect but a limit on my read:** Table I's cells come from the author-accepted
   manuscript of this DOI, not from the typeset published page, because the converter dropped
   the published file's table bodies. Same DOI, same title, same authors; but I did not
   cross-check the digits against the typesetting.

## ROUTES THAT FAILED

- `https://doi.org/10.1109/JBHI.2024.3465893` - **302 Found**, Location
  `https://ieeexplore.ieee.org/document/10685074`; the redirect was returned to me rather
  than followed.
- `https://ieeexplore.ieee.org/document/10685074` (the DOI's own target) - fetched, returned
  **empty content**: "The web page content you provided is empty." No front matter, no body.
- `https://ieeexplore.ieee.org/document/10689357` - **my own guessed article id**, fetched
  before the redirect resolved; same **empty content** result. I record it as a wasted call
  of mine, not as a publisher block.
- `curl` to the UniPD repository PDF - **`curl: (56) CONNECT tunnel failed, response 403`**,
  HTTP 000, 0 bytes. This is the documented **tool-scoped** curl 403 at this proxy, not a
  host block: WebFetch reached the same URL on the next call. I did not probe the proxy and I
  changed no TLS setting.
- Published-version PDF (`3e8723a3...`) - reachable and read at full text, but the markdown
  conversion **dropped every table body**, returning Table I's caption with no cells and
  Table II's title with no criteria. A **conversion** failure, not an absence in the paper.
- I did **not** use Unpaywall at all, per the no-personal-identifier rule, and I supplied no
  email to any service.
- **Budget:** 8 of 8 WebFetch and 1 of 3 WebSearch. Nothing was abandoned for want of budget;
  the only thing budget cost me was the Table I cross-check named in Defect 6.

## BEARING ON THE LEDGER ENTRY

**The claim HOLDS, with two narrowings and one front-matter correction.** Taking its three
parts in turn.

**Part 1, that such a detector exists with a stated operating point: TRUE OVER THE INSTANCE
I OPENED, and PARTLY as to "stated operating point".** Instancing it as required: I opened
**one** instance at full text - Idi, Manzoni, Facchinetti, Sparacino, Del Favero, DOI
10.1109/JBHI.2024.3465893 - and it is a published, peer-reviewed PISA detector evaluated on
real Dexcom G6 traces with a printed recall / false-alarm pair (Recall 0.55 [0.46-0.62],
FP/day 0.29 [0.25-0.32], Table V) and a printed threshold-selection rule (argmin J, Eq. 7).
The frame's clause (ii) therefore does **not** fail for want of a published detector: that
existence claim is satisfied by an opened instance, not by a search's silence. It is
satisfied **partly** on the stricter reading, because no numeric threshold is printed and the
selection rule needs a labelled training set. The entry should say which reading it means.
I opened no other PISA detector; the two Justia patent applications that surfaced in my one
search ("SYSTEM AND METHOD FOR DETECTING PRESSURE INDUCED SENSOR ATTENUATIONS (PISAs)...",
"...DETECTING SENSOR COMPRESSION...") I did **not** open, and I do not nominate them - a
patent application is not the kind of document that prints an evaluated operating point.

**Part 2, the 0.33 / 72 / 9.91 figures: CONFIRMED verbatim and correctly located.** Table I,
Real Data row, column "Fault/day" = 0.33, N Traces = 72, Monitoring Time = 9.91. The entry
has the number, the table and the column name right. **Narrow it** by recording that 0.33 is
a consensus-label rate per **device-trace-day** - under the one-of-two-devices discordance
rule and the label-3-only confidence rule - and not a detector output, not a per-subject
rate, and not a population incidence.

**Part 3, that it prints NO time-below-range percentage and NO between-arm contrast:
CONFIRMED over two sweeps**, one broad and one dedicated to those exact strings. "time below
range", "TBR", "time in range", "TIR", "between-arm", "control group" and any
time-in-range percentage all returned no occurrence; "arm" appears only inside "alarm". The
paper's nearest sentence, "possibly altering the hypoglycemic event count", sits in its
motivation, carries a possibility modality, and **announces** the quantity rather than
measuring it.

**So the second-independent-reason kill does not land, and the "already published" worry does
not land either.** The frame is not empty for want of a published detector with a stated
operating point - one exists and I opened it. And the candidate's quantity is not
pre-empted - this detector paper prints no time-below-range effect, no hypoglycaemic event
count and no group contrast, so a time-below-range quantity remains unpublished **by this
source**. That last statement is scoped to the one document I opened; it is not a claim about
every PISA paper, and I enumerated what I opened and what I did not.

**What I would change in the entry:** fix the citation to the full five-author 2025 vol. 29
no. 2 p. 1383 form; add the clause "ground-truth fault prevalence, per device-trace-day" next
to 0.33 so it cannot be read as a detector metric; downgrade "with a stated operating point"
to "with a stated recall / FP-per-day operating point but no transferable numeric threshold";
and record that only one of the two co-worn sensor models is named, which is the live
weakness in the frame's sensor-model condition.

**My own reasoning, marked as mine.** Three steps above are argument, not source findings,
and I label them so they can be reviewed: (i) that 713.5 device-trace-days and 356.8
subject-days follow from 72 x 9.91 and 36 x 2 - **my own arithmetic**, the paper printing no
total; (ii) that a labelled training set is a **necessary** input to argmin J and that the
printed recall/FP pair is consequently not applicable as-is to new traces - **my own
reasoning about the logical form of the Section III-D procedure**, grounded in that passage
but not stated by the authors in those words; (iii) that the paper's last page is 1395 -
**my own inference from running headers**, which the published front matter would settle.
The one document that would settle whether both co-worn devices are Dexcom G6 is the **Dexcom
G6 pivotal trial's protocol or primary results publication** - that **is** the kind of
document that names the devices subjects wore, which is why I name it - and I did **not**
open it, so the question stands unresolved rather than answered. No search I ran bore on it.
