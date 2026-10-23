# VERIFY - the measurand exemption's scope, the "only instrument" premise, and whether a state-or-alarm record carries a magnitude
Checker: fresh context. Budget used: 4 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

Entry UQ-20261023-14, adversarial-log row 4, the textual half of the single load-bearing leg, verbatim:

> "the measurand exemption covers records MISSING, not records present-but-estimated, and the repair would need a second reformulation and a smaller population."

Adversary #1's fallback clause C5, verbatim and with its own self-label:

> "FALSE BY CONSTRUCTION, AND THIS IS MY OWN REASONING ABOUT THE CLAUSE'S LOGIC, NOT A SOURCE FINDING: a state or alarm record carries a transition and a threshold crossing, not a magnitude. V2's repair therefore admits strata for which the estimand is undefined. The search that would have grounded this (a vendor alarm-log format specification) was not run — budget spent."

Adversary #2's contrary reading, verbatim:

> "the record converts the contested clause into a reported quantity — V2 reports 'the share of the nominal denominator lost to missing records' as a primary result and presupposition 6 declares the measurand exemption out loud, so obtainability is a measurand here, not a presupposition, and attack 4 does not reach it."

VERDICT IN ONE LINE: **PARTLY.** The exemption-scope half of row 4 is CORRECT on the text, and A2's contrary reading does not contradict it because A2 is answering a different clause (obtainability, not estimation). But three further things fail: (i) the premise A1's kill is stated to need — "the ONLY instrument the question declares is the unit's own record" — is **not in V2 anywhere**, and V2's one exclusivity word ("ONLY") is spent on the exposure limb instead; (ii) the "second reformulation" premise rests on a rule whose text is **absent from all four files**; (iii) C5 is **FALSE as the universal it is written as**, on a counter-instance already printed inside the entry's own record, and only narrowly true on the alarm-record format of the one vendor manual I opened at that section.

## READ LEVEL

Per source, in the order the brief lists them.

- (a) **Entry and record** — /home/claude/frontier_knowledge/ledger/batches/2026-10-23-1233/UQ-20261023-14-entry.md and -record.md: **FULL TEXT** (entry read in full; record read in full at lines 1-60 covering Gate 0 and Gate 1, plus dedicated greps for "reformulation", "measurand", "MTIE alarm thresholds", "13 microsecond"). Adversary files -adversary-1.md and -adversary-2.md: **PARTIAL** — read at the clause lists (A1 lines 70-104, including C4, C5 and the measurand-exemption check; A2 lines 65-84, including its row 4 and its CL6 note), plus greps across both for the reformulation rule.
- (b) **Kind-lead "a vendor alarm-log format specification" — OPENED, two instances, both PARTIAL.**
  1. Symmetricom **"EDGE CLOCK 1000 / EDGE CLOCK 1100 User Manual"** (the manual's body text names the product "the TimeProvider"; 224 pages) — **PARTIAL**, read at the full table of contents, at page 24 ("Performance Monitoring", Chapter 1) and at page 134 ("Provisioning Alarms" / alarm-status normal response, Chapter 4). READ-LEVEL CAVEAT I must state: this was reached at the third-party aggregator **manualsdir.com** (https://www.manualsdir.com/manuals/142666/symmetricom-edge-clock-1000-edge-clock-1100.html), **not** the vendor's own PDF. It is a mirror of a vendor manual, and I grade it as such. NOT read: pp. 43-44 ("BesTime", "GPS Holdover"), pp. 126-133, 135, 138, 167-176, 205 ("Alarm Default Values").
  2. **AMD/Xilinx UG1602, section "Meinberg NetSync Monitor"** (https://docs.amd.com/r/en-US/ug1602-ptp-user/Meinberg-NetSync-Monitor) — **PARTIAL**, that one section page only. This is a chip vendor's documentation of a clock vendor's monitoring-record feature, not the clock vendor's own manual; I grade it as second-hand for the format and first-hand for what it asserts about the feature.
- **NOT OPENED, and named so the next reader can see the gap:** the SSU2000 user guide proper (not located by my one search for it — see ROUTES THAT FAILED; the EDGE CLOCK/TimeProvider manual is the same vendor's adjacent SSU product, not the SSU2000 itself), a Meinberg LANTIME firmware manual, an Oscilloquartz PRTC/ePRTC manual, a Microchip TimeProvider 4100 user guide, and any IEC/IEEE 61850-9-3 or IEEE C37.238 clock manual.
- (c) **P1 — Chronos Technology, "GPS Anomaly Event - 26 January 2016 CASE STUDY", CTLcs044 r1.0, https://rntfnd.org/wp-content/uploads/26-January-2016-GPS-Event.pdf** — **NOT OPENED BY ME.** I rely only on the quotations the record prints at its lines 76 and 79, exactly as A1 did. Read level of the underlying document: full-text summariser read at Gate 2, flagged by the record as "NOT re-verified in a second dedicated sweep".
- **Arbiter Systems PD0057900A / PD0057900, "Specifying Holdover Performance"** — **NOT OPENED BY ME, deliberately.** It is not one of the documents this check turns on: sub-claims 1-6 are about the entry's declared protocol text and about the alarm-record kind. Its read level remains what the brief records: full text by A1 only, two of four load-bearing quotations being A1's own reconstruction from two consecutive fragments, one trailing clause not served. **Nobody but A1 has read it, and I did not change that.**

## WHAT THE SOURCE SAYS (quotations as served)

### Sub-claim 1 — the two strings, verbatim, and whether "missing" admits "present-but-estimated"

V2's denominator clause, from the entry's "Question (canonical)" field (and identically from the record, line 11), quoted with enough on both sides of the cut to show the grammar:

> "... and what fraction of units exceeded the numeric limit its governing document states, with a Clopper-Pearson interval and with **the share of the nominal denominator lost to missing records** reported?"

Presupposition 6, verbatim and complete (record line 28; the entry compresses it, so I quote the record):

> "MEASURAND EXEMPTION DECLARED, out loud: the question does NOT presuppose that exceedances occur. Zero measured exceedance across the installed base, with stated power, is an answer. Reporting that the records needed are not publicly obtainable is likewise a finding about the measurement system, not a false premise."

SCOPE-SETTING OPENER, as the discipline requires. Presupposition 6's opening words — "MEASURAND EXEMPTION DECLARED, out loud: the question does NOT presuppose that exceedances occur" — **scope the exemption to the OCCURRENCE OF EXCEEDANCES.** Its third sentence extends the exemption to one further thing and names it exactly: records "not publicly obtainable". Both clauses **ASSERT** an exemption; neither **asserts, denies, or records a move away from** anything about the epistemic status of a record that *is* present and obtainable. The word that would have to appear for A2's rescue to reach C4 — "estimated", "self-reported", "measured against", "reference" — appears in neither sentence.

ANSWER, on the text: **NO.** "Missing records" does not admit a record that is present but is the unit's own estimate. A record a unit wrote is not a record the denominator "lost". And **NO** again on the second question: there is **no other clause** of V2 or of presupposition 6 that reaches a present-but-estimated record. I ran two sweeps for this rather than one, per the one-keyword-sweep rule: a broad read of the entry in full and of record lines 1-60, then a dedicated grep across all four files for `measurand|presupposition 6|obtainability` and a second for `reformulation`. The only V2 clause that mentions the quality of a record at all is clause (b) — "the record carries a model or holdover-oscillator-class identifier" — which is about a *key*, not about how the magnitude was obtained.

**A1's reading of the exemption is therefore right, and A2's contrary reading does not touch it.** This is the most important thing in this note, because the entry's "two adversaries read the same declared protocol and disagreed" framing is itself inaccurate. A2's own words name the clause it rescued: at its line 65, A2's row 4 grades **CL1(a), CL1(b), CL1(c), CL2, CL3, CL4, CL5** — the *obtainability* clauses — and at line 82 it says of the rescue, verbatim:

> "8. **CL6** — *not a clause.* The record declares the measurand exemption explicitly (presupposition 6) and V2 reports the lost-denominator share as a primary result. **Obtainability is this question's measurand, not its presupposition, and I say so rather than grading around it.**"

A2 is asserting that **obtainability** is a measurand. A1's C4 is not about obtainability; it is about a record that is obtained and is a self-estimate. The two adversaries did not disagree about one reading of one clause. They answered two different questions, and the judge's choice between them was not a choice.

### Sub-claim 2 — does V2 declare the unit's own record as the ONLY instrument?

A1's C4, verbatim, with the premise at issue in bold (A1 line 70):

> "A unit's own time-error / phase-offset record during a GNSS disturbance epoch is a MEASUREMENT of the time error the unit DELIVERED to its application. — CONTESTED on a source I opened (S3, full text), and the question cannot survive without it, because its primary estimand is 'maximum |time error| delivered to the dependent application' and **the ONLY instrument the question declares is the unit's own record.**"

Now the clauses that decide it. V2's frame rule, from the record's line 11, which spells the lettered clauses out (the entry's compressed version drops the letters but keeps every word that matters here):

> "all (operator, clock-or-receiver-model) strata for which **(a) a time-error, phase-offset, holdover-state or alarm record is obtainable at >= 1 sample / 15 min for >= 30 consecutive days spanning a declared disturbance epoch**, (b) the record carries a model or holdover-oscillator-class identifier, and (c) the stratum's application is governed by one of the limit-bearing documents given by the enumeration rule below"

And the estimand clause:

> "what is the distribution of **maximum |time error| delivered to the dependent application**, per epoch and per model stratum (median and upper quantiles, with the number of contributing units named)"

LOGICAL FORM, as the fallen-kill rule requires. Clause (a) is a **NECESSARY** condition on frame membership — one conjunct of a three-conjunct eligibility rule — and it is **not a sufficient condition for anything**, least of all for a claim about which instrument measures the estimand. Its predicate is "**is obtainable**", not "is produced by the unit". Clause (a) is also internally a **DISJUNCTION** over four record kinds ("a time-error, phase-offset, holdover-state or alarm record"), which matters for sub-claim 4. Clause (b)'s "the record" is a back-reference to (a)'s record and adds nothing about provenance. The estimand clause names a **quantity** and a **delivery point**; it names no instrument.

THE DECIDING OBSERVATION, and it is textual rather than mine: V2 **does** contain an exclusivity declaration, and it spends it on the other limb —

> "and with disturbance epochs declared **ONLY** from evidence generated outside the units under study (national regulator interference bulletins, NOTAMs, ADS-B-derived interference products, GPS NAGUs / Galileo NAGUs and constellation or ground-segment anomaly notices)"

So the drafter of V2 knew how to restrict an instrument to a named class, wrote "ONLY" in capitals once, and wrote it about **exposure**, not about **outcome**. The outcome side carries no "only", no "own", and no "self". MY OWN REASONING, LABELLED: an exclusivity stated on one limb and omitted on the other is evidence that the omission is deliberate, not evidence of a silent exclusivity. I would not rest much on that inference alone; I do not have to, because the plain reading is already decisive — a clause whose predicate is "obtainable" declares an availability condition, not a measuring instrument.

ANSWER: **V2 as written does NOT forbid an operator monitoring probe or a downstream measurement from supplying the estimand.** A probe's time-error record of a monitored unit satisfies (a) on its face (it is a time-error record, obtainable at cadence, spanning the epoch) and can satisfy (b) (a probe record can carry the monitored unit's model key). The premise A1's kill is stated to need is absent from the text.

And A1 concedes the substance of this in the very same clause, three sentences later (A1 line 70):

> "units that carry an independent reference (ePRTC with caesium, a PTP/SyncE secondary input, or an operator monitoring probe) can measure delivered TE"

So A1 holds simultaneously that probes can measure delivered TE and that the question declares the unit's own record as its only instrument. The first is a fact about the world; the second is a claim about V2's text; and the text does not support it.

### Sub-claim 3 — second reformulation, or a reporting addition?

A1's repair, verbatim (A1 line 75):

> "If the question were rewritten to report, per stratum, the share of units whose epoch-time error is measured against an independent reference versus self-estimated, C4 would become a measurand; that would be a SECOND reformulation, which Gate 1 does not allow, and it would shrink the frame to units with independent references, which is a different (and much smaller) population than 'the deployed installed base'."

**THE RULE TEXT IS ABSENT FROM THE FOUR FILES I WAS GIVEN.** I grepped all four for `one reformulation|single permitted reformulation|second reformulation|reformulation`. Every hit is a *reference to* the rule or an *application of* it, never a statement of it:
- entry line 6: "this is V2, the one reformulation taken at Gate 1" — an application.
- record line 10: "ONE reformulation taken at Gate 1, for well-posedness only; both versions recorded" — an application.
- record line 122: "after the single permitted reformulation" — an application.
- record line 40 and A2 line 84: "per the rule that a reformulation carries presuppositions of its own" — a *different* rule, about what a reformulation must be tested for, not about what counts as one.
- A1 lines 75 and 90: "a SECOND reformulation, which Gate 1 does not allow" — the premise itself, asserted.

So **this premise of row 4 rests on a rule I could not read**, and I say so rather than inferring the rule from its applications.

What the files *do* contain cuts against A1's classification in two ways, and I separate the textual point from my own inference.

TEXTUAL. The repair A1 describes is, in form, the **same move V2 already made** in its final clause: a share, over the nominal denominator, reported alongside the primary results. V2 reports "the share of the nominal denominator lost to missing records"; the repair would report the share of units measured-against-reference versus self-estimated. Same shape, same denominator, same reporting slot. Nothing in V2's estimand, frame rule (a)-(c), cadence, epoch rule or limit rule changes.

TEXTUAL, AND IT CUTS THE OTHER WAY TOO, so I record it: the record's own V1→V2 diff (line 13) ends "The measurand, population and estimand are unchanged", and the entry repeats it ("Measurand, population and estimand unchanged"). So "measurand, population and estimand unchanged" is **compatible with being counted as the one reformulation** — V2 itself was. That criterion therefore does not settle the question in either direction. The files genuinely do not decide it, and the rule that would is not in them.

MY OWN REASONING ABOUT THE LOGICAL FORM, LABELLED AS MINE: A1's sentence bundles **two** repairs and attributes the consequences of the second to the first. Repair-R1 is "report, per stratum, the share ... measured against an independent reference versus self-estimated". Repair-R2 is "shrink the frame to units with independent references". R2 is a change to clause (a) and would plainly be a reformulation with a smaller population. **R1 does not entail R2.** Reporting the measured-versus-estimated split leaves every unit in the frame and changes no membership clause; that is the whole point of a reported share, as V2's own missing-records share demonstrates. So row 4's "and a smaller population" does not follow from the repair that C4 actually needs. Whether R1 alone is a "second reformulation" I cannot decide, because the rule is absent; that it costs "a smaller population" is a non-sequitur I can decide, and it is wrong.

### Sub-claim 4 — the kind-lead, opened

Clause (a) admits, as a disjunction, "a time-error, phase-offset, **holdover-state or alarm** record". C5 says such a record "carries a transition and a threshold crossing, not a magnitude". Two instances, opened.

**INSTANCE 1 — Symmetricom "EDGE CLOCK 1000 / EDGE CLOCK 1100 User Manual" (body text: "the TimeProvider"), read at manualsdir.com, PARTIAL (TOC, p. 24, p. 134).**

The alarm record itself, from page 134, "Provisioning Alarms", Chapter 4, "Normal Response" — quotations as served:

> "SYS,EQPT:MJ,PWRA,NSA,03-10-24 11-22-11:" followed by "POWER A FAILED"

> "INP2,T1:MN,INPDISQ,NSA,03-10-24 11-25-17:" followed by "INPUT DISQUALIFIED AS POSSIBLE"

and the condition-retrieval summary format as served:

> "^^^\"GPS:<gpsstatus>\""   "^^^\"INP1:<inpstatus>\""

The summariser's own characterisation of that page, which I record as its words and not as a quotation from the manual: the alarm records "show the component, a severity code, an alarm name, a state code, a timestamp, and a text description" and contain "no measured numeric value (no TIE, MTIE, TDEV, or FFOFF reading)". **On this instance, at this section, the alarm record carries NO MAGNITUDE.** That is a point for C5, narrowly construed, and I give it to C5.

But the **same unit's performance-monitoring facility**, page 24, Chapter 1 — quotations as served:

> "The TimeProvider can monitor and qualify all enabled input signals based on phase measurements."

> "It measures the phase differences between the inputs and the output of the corrected clock."

> "From these phase measurements, the TimeProvider computes frequency offset and wander of the input signals."

> "Wander is reported in terms of Maximum Time Interval Error (MTIE) and Time Deviation (TDEV)"

> "creates phase, MTIE, TDEV, and Fractional Frequency Offset (FFOFF) reports."

> "Performance data is automatically gathered on all enabled or monitored inputs."

And the manual's table of contents, which I read in full, places this in the structure that matters: Chapter 1 "Performance Monitoring" (p. 24) with subsections "Phase Measurements", "MTIE Calculations", "TDEV Calculations", "FFOFF Calculations"; Chapter 4 "Provisioning Alarms" (p. 126) with "Retrieving Current Alarms" (p. 132), "Displaying Alarm Status" (p. 134), "Clearing Alarms" (p. 135); Appendix A "Alarm Default Values" (p. 205); Chapter 1 "BesTime" (p. 43) with "Normal Tracking" (p. 44) and "GPS Holdover" (p. 44).

SCOPE, because it changes what this instance proves: "It measures the phase differences between the inputs and the output of the corrected clock" scopes the magnitudes to the **INPUT** signals, measured against the unit's own corrected output. The clause **ASSERTS** that magnitudes are computed and reported; it does **not** assert that the unit measures its own delivered output error against anything independent. So instance 1 bears on C5 (is there a magnitude in the alarm-side record set?) and **not** on C4 (is the delivered quantity measured?). I keep those separate; A1's C5 and C4 are different claims and this instance answers only one.

REGIME of instance 1, in its own words: population = enabled or monitored **input signals** of one Symmetricom SSU-class clock; unit of analysis = an input signal; operating condition = normal operation and "GPS Holdover" (p. 44, unread); instrument = the clock's own phase-measurement block; threshold = alarm default values (Appendix A, p. 205, unread); category = phase, MTIE, TDEV and FFOFF reports, plus TL1 alarm and event records.

**INSTANCE 2 — AMD/Xilinx UG1602, section "Meinberg NetSync Monitor", PARTIAL (one section).** Quotations as served:

> "collects timing data from multiple downstream slave devices and compares these to the Meinberg master clock timesource"

> "An additional MTIE TLV enables the verification of compliance with specified MTIE time deviation limits."

and, as the summariser's report of the page rather than a quotation, that this "removes reliance on 'self-reported sync accuracy'" from slave devices, the monitor probing slaves with standard PTP messages. The page does **not** name the output fields or state that a per-clock numeric offset is printed; I say that rather than reading the MTIE TLV as a confirmed magnitude field.

REGIME of instance 2: population = downstream PTP slave clocks in one network; unit of analysis = a monitored slave; operating condition = ordinary PTP operation, no disturbance; instrument = the monitoring master plus a NetSync/MTIE TLV exchange, i.e. **a reference independent of the monitored unit**; threshold = "specified MTIE time deviation limits", values not given on this page; category = monitoring TLVs.

**CLASSIFICATION OF C5, over the instances I opened, in the three terms the rule demands:**

- As a claim about **the alarm record format strictly construed** ("the record a clock emits when an alarm raises or clears"): **TRUE over the one instance I read at that section** — instance 1's TL1 alarm response carries component, severity, alarm name, state, timestamp and text, and no reading.
- As the inference C5 actually makes — "V2's repair therefore admits strata for which the estimand is undefined" — **FALSE on the same instance.** The disjunct "alarm record" in clause (a) is not sealed off from magnitude: the alarm threshold on this very unit is set on an MTIE/TDEV quantity the unit itself "creates ... reports" and "automatically gathered[s]", and nothing in V2 restricts an alarm-stratum answer to the alarm text line while forbidding the MTIE report the alarm is a threshold on. C5 is true of a field list and false of the clause.
- As the **universal** it is written as — "a state or alarm record carries a transition and a threshold crossing, not a magnitude", with no qualifier of vendor, product or era: **UNENUMERATED.** I opened two instances, both partially, one of them at a third-party mirror and one of them a chip vendor's description of a clock vendor's feature. I did not open: the SSU2000 user guide (the instrument of the entry's own P1), a Meinberg LANTIME firmware manual, an Oscilloquartz PRTC/ePRTC manual, a Microchip TimeProvider 4100 user guide, or any 61850-9-3 / C37.238 clock manual. A universal over the kind "vendor alarm log" cannot be established from two partial reads, and A1 said as much itself: "The search that would have grounded this ... was not run — budget spent."

### Sub-claim 5 — the counter-instance already inside the files

The record's P1 regime line, verbatim (record line 76), with the instrument clause in bold:

> "REGIME: population = Chronos's own telecom-timing customer support estate ... unit of analysis = a timing unit or network element (SSU2000, Netsync 55300 feeding a 55400 SSU, Symmetricom TimeSource); operating condition = the 26 Jan 2016 GPS ground-segment UTC-parameter upload error ... **instrument = vendor alarm logs, MTIE alarm thresholds and holdover-state transitions**; threshold = internal MTIE alarm thresholds whose values are not printed; category = alarm counts, holdover-event counts and affected-share percentages, **plus ONE common-mode delivered-error figure**."

And the number, with its location, per published-is-not-performed (record line 79, quoting P1's support-desk section):

> "The MTIE values were showing an error of **13 microseconds** across all the affected SSU2000s"

PUBLISHED-IS-NOT-PERFORMED, done properly. The number is **13 microseconds**. Units: microseconds. Where printed: P1's support-desk section, per the record's line 79 (I did not open P1; this is the record's located quotation). Numerator class: an **MTIE reading** — a maximum time interval error — shown by the SSU2000s' own MTIE monitoring. Denominator: "all the affected SSU2000s" at the affected customers, a set the record elsewhere bounds as "approximately two thirds of the Netsync 55300 GPS Timing Units and SSU2000 estate" of one vendor's support estate. The record flags the figure as common-mode, "consistent with 'the UTC signal on some satellites was off by 13 microseconds'".

ANSWER to sub-claim 5: **YES — C5's universal is false, and the counter-instance is inside the entry's own record.** The entry declares, for its nearest prior, that the instrument IS "vendor alarm logs, MTIE alarm thresholds and holdover-state transitions", and from that instrument a **magnitude in microseconds is printed**. A claim that the alarm-side record "carries a transition and a threshold crossing, not a magnitude" is contradicted by the one document the entry treats as the exemplar of that record kind. My two opened instances explain the mechanism without rescuing the universal: the alarm *line* carries no reading (instance 1, p. 134), while the MTIE quantity the alarm thresholds are set on is computed, reported and gathered automatically by the same unit (instance 1, p. 24) — which is exactly how an MTIE magnitude reaches a published post-mortem.

OVERLAP IN BOTH DIRECTIONS, because 13 microseconds is one word away from the claim's quantity and is not it. What P1's class **MISSES** relative to V2's estimand: it is the error of the **GPS input** as the SSU measured it against its own corrected clock (instance 1's page 24 describes precisely that measurement: "the phase differences between the inputs and the output of the corrected clock"), whereas V2's estimand is "maximum |time error| **delivered to the dependent application**"; and the record's own next quotations show the delivered path diverging from the input figure — "downstream switches ... reject the timing inputs", "Roughly 40 elements entered holdover". What P1's class **INCLUDES** that V2's estimand excludes: units whose protective action removed the 13 microseconds from what they delivered, so the figure is an input magnitude for them and not a delivered one. **So the P1 counter-instance kills C5 and does not rescue C4.** That distinction is the single most load-bearing thing in this note after sub-claim 2, and A1's own line 70 makes the same distinction ("That 13 us is the error of the GPS INPUT as seen by the SSU") while A1's C5 ignores it.

### Sub-claim 6 — the missing premise, in the entry's own terms

The entry's own concession, verbatim, under "THIS REJECTION'S OWN VULNERABILITY":

> "The step from there to 'the declared instrument fails for the modal unit of the frame' is a **metrological design argument** ... Its **empirical limb is unmeasured by anybody**: the composition of the declared frame by availability of an independent reference (ePRTC with caesium, a terrestrial PTP or SyncE secondary input, an operator monitoring probe) has never been published, and A1's bridge to 'GNSS-only units dominate' rests on the record's own NTP Pool sentence, which the record itself flags as an assertion about the population and not a measurement of it."

ONE SENTENCE, as asked: **the argument needs a premise the declared protocol cannot supply — a measured composition of V2's declared frame by availability of a reference independent of the unit under study (ePRTC caesium, terrestrial PTP/SyncE secondary input, or operator monitoring probe), such that self-estimating units are the modal case rather than a reported minority — because V2's clause (a) requires only that a record be "obtainable" and names no instrument at all, so no reading of the protocol can tell you which kind of unit the frame is mostly made of.**

That is the premise check 1 (the Cosart deck, whose abstract promises "measurements taken during these events along with data logging the effects on time") would bear on, and the next reader can look for it there. I did not open Cosart; a sibling check is on it.

## REGIME

Stated for every source I graded on, in its own words, with whether the claim sits inside it.

- **The entry and record** (sub-claims 1, 2, 3, 6): regime = this ledger's own declared protocol text. Unit of analysis = a clause. The claim under check is an **entailment claim about that text**, so it sits squarely inside this regime, and these sub-claims are decidable here and nowhere else. The one exception is the Gate 1 reformulation rule, which is **outside** the four files and therefore outside everything I could read.
- **Symmetricom EDGE CLOCK 1000/1100 (TimeProvider) manual** (sub-claim 4): regime as above — one vendor's SSU-class clock, input signals as the unit of analysis, normal and GPS-holdover operation, the clock's own phase-measurement block as instrument. Does C5 sit inside it? **Partly.** C5 is a universal over "a state or alarm record"; this instance is one product of one vendor, read at two pages. It can **falsify** the universal (and does, for the clause-level inference) but cannot establish it. It is also the right vendor family for the entry: the entry's P1 instrument is the SSU2000, and this is the same vendor's SSU-class product line — adjacent, not identical, and I grade it as adjacent.
- **AMD UG1602 / Meinberg NetSync Monitor** (sub-claims 2 and 4): regime = PTP slave clocks monitored from a master in ordinary operation, no GNSS disturbance, instrument independent of the monitored unit. Does the claim sit inside it? For sub-claim 2 it is **directly relevant and weakly supportive**: it is an existing, documented vendor mechanism by which a time-error magnitude for a unit is obtained from outside that unit, which is exactly the instrument V2's clause (a) does not exclude. For sub-claim 4 it is inside the kind but **silent on the field list**, so I do not count it as a magnitude-bearing record format.
- **P1 as quoted by the record** (sub-claim 5): regime = one vendor's telecom-timing support estate, eleven tabulated customers, the 26 Jan 2016 **ground-segment UTC-parameter upload error** — "a constellation/ground-segment anomaly, NOT jamming or spoofing" (record line 76). Does the claim sit inside it? For C5, **yes** — C5 is a universal about record kinds, and this is an instance of the record kind. For C4, **no**, and the regime line is why: the epoch class is a common-mode broadcast error, not the jamming regime A1's C4 reasoning is built around ("Under jamming — the modal epoch class the candidate's exposure instrument ... is built for").

## DEFECTS FOUND

1. **THE "ONLY INSTRUMENT" PREMISE IS NOT IN THE DOCUMENT IT IS ATTRIBUTED TO.** A1's C4 says "the ONLY instrument the question declares is the unit's own record". V2 declares no outcome instrument. Clause (a)'s predicate is "**is obtainable**"; the estimand clause names a quantity and a delivery point; the one exclusivity V2 states ("declared **ONLY** from evidence generated outside the units under study") is on the exposure limb. This is an **existence defect of the locating kind**: the premise is presented as what the protocol declares, and the protocol does not declare it. It is also self-undercut inside A1's own clause, which grants that "an operator monitoring probe" can measure delivered TE. Attack 4's Unresolved rests on this premise; row 4 of the entry's log reproduces its consequence without reproducing the premise, so a reader of the entry alone cannot see that the premise is unsourced.
2. **THE TWO ADVERSARIES NEVER DISAGREED, AND THE JUDGE'S CHOICE BETWEEN THEM WAS NOT A CHOICE.** A2's rescue is about **obtainability** ("Obtainability is this question's measurand, not its presupposition"), i.e. records MISSING. A1's C4 is about records PRESENT AND SELF-ESTIMATED. Presupposition 6's two exempted things are exceedance-occurrence and public obtainability. A2's reading is correct about what it addresses and does not reach C4; A1's reading of the exemption's scope is correct. "Two adversaries read the same declared protocol and disagreed" is not what happened, and the appearance of a contested reading adopted by a judge is an artefact of two clauses being discussed under one row number.
3. **A NON-SEQUITUR INSIDE ROW 4: "AND A SMALLER POPULATION".** A1's sentence bundles a reporting addition (report the measured-versus-estimated share) with a frame restriction (restrict to units with independent references) and carries the second one's cost over to the first. The reporting addition alone changes no membership clause and shrinks nothing — V2's own missing-records share is the proof of concept. MY OWN REASONING, LABELLED.
4. **THE "SECOND REFORMULATION" PREMISE RESTS ON A RULE ABSENT FROM THE FILES.** Five hits across four files, every one an application or a reference, none a statement of the rule. The one criterion the files do state — "The measurand, population and estimand are unchanged" (record line 13) — cannot distinguish, because V2 itself satisfies it and V2 **was** the reformulation. This premise is therefore **COULD NOT CHECK on the rule's text**, which is distinct from false.
5. **C5 IS FALSE AS A UNIVERSAL, ON A COUNTER-INSTANCE PRINTED IN THE ENTRY'S OWN RECORD.** "a state or alarm record carries a transition and a threshold crossing, not a magnitude" against record line 76's "instrument = vendor alarm logs, MTIE alarm thresholds and holdover-state transitions" and line 79's "The MTIE values were showing an error of 13 microseconds across all the affected SSU2000s". The entry did not need an unrun search to find this; it needed to read its own regime line against its own fallback clause.
6. **C5 IS ALSO UNENUMERATED AS A UNIVERSAL.** Two instances opened, both partial, one at a third-party mirror; five named instance kinds unopened. A1 declared the grounding search unrun, which is the only reason this leg was reviewable — and the leg falls.
7. **THE RESIDUAL POINT IS A WELL-POSEDNESS DEFECT, NOT A PRESUPPOSITION FAILURE.** What survives sub-claims 1-2 is this: V2's clause (a) admits a unit whose only epoch record is its own estimate, and V2 contains no clause requiring measurement against an independent reference and no clause reporting the measured-versus-estimated split. That is a gap in the question's specification of its own instrument — the same family of defect as attack 5 ("'Delivered to the dependent application' does not fix a reference point"), which **both** adversaries graded Partial. It is not a presupposition the world falsifies; it is a clause the question forgot to write.
8. **A READ-LEVEL CONCENTRATION THAT NOBODY HAS RELIEVED.** The load-bearing document, Arbiter PD0057900A/PD0057900, is still read by **exactly one reader**, with two of four load-bearing quotations being that reader's own two-fragment reconstructions and one trailing clause not served. I did not open it; my budget went to the kind-lead the brief told me to instance, which was the right call for sub-claims 4 and 5 but leaves this untouched. Also unresolved and recorded as the brief asks: **"PD0057900A" and "PD0057900" are two identifiers that may name one document** — the entry and A1's source block carry the trailing A, while A1's query-6 result line and the URL filename do not. Nobody has checked the front matter. On the ledger's own rule that two identifiers naming one document is itself a finding, this is unresolved, and the entry's single-document leg is carried under a designator whose exact form has never been verified at the document.

## ROUTES THAT FAILED

- **WebSearch 1** — "SSU2000 Symmetricom user guide performance monitoring MTIE TDEV alarm thresholds manual pdf": **ran, no refusal, did not return an SSU2000 manual.** It returned the Symmetricom EDGE CLOCK 1000/1100 manual at manualsdir.com (which I then used), two TimeSource datasheets, an Acterna ANT-20 MTIE/TDEV operating-manual extract, a Symmetricom clock-module page, an IEEE TechNav topic page, and the Cosart WSTS deck "6-1_Symmetricom_Cosart_TimingMeasurementsMetrics.pdf" at tf.nist.gov. **The SSU2000 user guide itself was not located by this query.** Budget, not a host block: I had one search left and spent it on a second vendor rather than a second attempt at this one. The SSU2000 manual remains a live one-fetch lead for the next reader, and it is the right kind of document, since the SSU2000 is the instrument of the entry's own P1.
- **WebSearch 2** — a combined Meinberg LANTIME manual / Microchip TimeProvider 4100 query: **ran, no refusal, returned no manual.** It returned reseller product pages (apctech.com), two Meinberg datasheets (ds_m450.pdf, ds_m320.pdf), two Meinberg short-info sheets, and the AMD UG1602 NetSync Monitor page (which I then used). Neither the LANTIME firmware manual nor the TimeProvider 4100 user guide was located. **Searches exhausted at 2 of 2.**
- **WebFetch 1** — manualsdir landing page with `?original=1`: returned **the table of contents only**, no body text. Not a route failure for the document; a wrong page of it. The TOC was itself useful (it located Performance Monitoring at p. 24, the alarm sections at pp. 126-135, Alarm Default Values at p. 205, GPS Holdover at p. 44).
- **WebFetch 2** — AMD UG1602 NetSync Monitor section: **succeeded**, but the page names no output fields, so the MTIE TLV's payload is **COULD NOT READ from this route**, not absent.
- **WebFetch 3 and 4** — manualsdir `?page=24` and `?page=134`: **both succeeded** and both served body text. Recording this because it is a reusable route: on this aggregator, `?page=N` serves the manual's page N as text where the landing page serves only the TOC.
- **NOT TRIED, and these are spent-budget statements rather than properties of the documents:** Arbiter PD0057900/PD0057900A (deliberate — not a document this check turns on; and its front matter, which would settle the two-identifier question, is therefore still unread by anyone but A1); the SSU2000 user guide; a Meinberg LANTIME firmware manual; an Oscilloquartz PRTC/ePRTC manual; a Microchip TimeProvider 4100 user guide; EDGE CLOCK manual pp. 43-44, 126-133, 135, 138, 167-176 and 205; P1 itself. **All sub-claims 1-6 were reached. None is COULD NOT CHECK, except the rule-text component of sub-claim 3, which is absent from the files given to me rather than unread by me.**

## BEARING ON THE LEDGER ENTRY

**NARROW attack 4, and STRIKE C5. The Rejected status loses its ground, and the fallback does not hold it.**

What **HOLDS**, and should be kept in row 4 in these words: the measurand exemption as declared reaches **records missing** and **public non-obtainability**, and reaches neither a record that is present and is the unit's own estimate. Presupposition 6's three sentences exempt exceedance-occurrence and public obtainability and nothing else. A2's contrary reading is about obtainability and does not bear on this; row 4's "A2 ... allowed the exemption" should say that A2 allowed it **for the obtainability clauses**, which is all A2 claimed.

What **FALLS**: the premise that makes the exemption's scope matter. Row 4's kill needs V2 to have declared the unit's own record as its instrument, and V2 declares no outcome instrument at all — clause (a) says a record "**is obtainable**", clause (b) requires a model key, the estimand names a quantity and a delivery point, and the only "ONLY" in V2 restricts the **exposure** limb. An operator monitoring probe or a downstream measurement is not excluded by any clause of V2. With that premise gone, attack 4 is not a presupposition failure: it is the observation that V2's frame rule admits units whose estimand may be observed only by a self-estimate, and declares no clause distinguishing them. **That is a well-posedness defect of the same family as attack 5**, which both adversaries graded Partial and which the 2/3 well-posedness score already carries. Attack 4 should be regraded to **Partial on the defect it actually establishes**, and the Rejected status, which the entry itself says "stands on ONE leg", has no leg left at the Unresolved grade.

What **REVERSES**: C5, the first of the two legs the entry says would survive if the kill fell. It is **FALSE as the universal it is written as**, and the counter-instance is inside the entry's own record — "instrument = vendor alarm logs, MTIE alarm thresholds and holdover-state transitions" (line 76) producing "The MTIE values were showing an error of 13 microseconds across all the affected SSU2000s" (line 79). My two opened instances show the mechanism: the TL1 alarm line carries no reading ("SYS,EQPT:MJ,PWRA,NSA,03-10-24 11-22-11:" / "POWER A FAILED"), while the same unit "creates phase, MTIE, TDEV, and Fractional Frequency Offset (FFOFF) reports" and "Performance data is automatically gathered on all enabled or monitored inputs". C5 is true of a field list and false of the clause it was aimed at. Note what this does **not** do: the 13-microsecond MTIE is an **input**-error magnitude ("the phase differences between the inputs and the output of the corrected clock"), so it rescues C5's target and not C4's — a point A1's line 70 makes and A1's C5 then overlooks.

**CONVERT TO PROMOTION CONDITIONS**, since two premises are unread rather than refuted:
1. **The Gate 1 reformulation rule's text.** Row 4's "would need a second reformulation" is unverifiable in the four files; the rule is absent from all of them. Either cite the rule where it is written, or drop the clause. The bundled consequence "and a smaller population" should be dropped outright: it follows from restricting the frame, which A1's reporting repair does not require.
2. **The frame's composition by independent-reference availability**, which the entry already concedes "has never been published". Until a document prints it, no reading of V2 can establish that self-estimating units are the modal case — and A1's bridge to it runs through the NTP Pool sentence the record itself flags as "an assertion about the population and not a measurement of it".
3. **One identifier check and one read-level relief.** "PD0057900A" versus "PD0057900" has never been checked at the document's front matter, and the entry's single load-bearing document is still read by one reader with two reconstructed quotations. Both are one fetch each.
4. **C5, if anyone wants to keep it**, must be restated as what it can be: a claim about the alarm *message* format of named products, enumerated. As a universal over the kind, it is both false and unenumerated, and the ledger's own rule says an unenumerated universal is never established.

If a sibling check on the Cosart WSTS deck finds measurement against an independent reference in a deployed population, that bears on promotion condition 2 and on nothing I checked here; my sub-claims are decided on the protocol text and on the alarm-record kind, and both of those decisions are already in.
