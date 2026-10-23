# VERIFY - Arbiter PD0057900A: the four load-bearing quotations exist, but the kill's central sentence is item 5 of a list stemmed "We believe that they do this for these reasons", and the document's regime includes spoofing

Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-23.

## CLAIM

Entry UQ-20261023-14, attack 4 (presupposition failure), clause C4, stands on one document: "Arbiter Systems PD0057900A, 'Specifying Holdover Performance'", read at full text by Adversary #1 only. Adversarial-log row 4 reads it as establishing that "for frame units without an independent reference the declared instrument observes an estimate of the estimand", on four quotations: (a) holdover is "the time error expected to accumulate"; (b) "holdover error can't be predicted exactly"; (c) a clock reports its "estimated actual holdover error"; (d) "Customers have no practical way to verify actual performance". Two of the four are A1's own reconstruction from two consecutive summariser fragments; one trailing clause was never served; (d) sits, by A1's own scope note, "in a competitor-comparison section" where A1 "did not see a preceding conditional". I was asked whether the four exist in that form, with that modality and that scope, and whether the document's regime covers the frame's modal unit.

Short answer: all four strings EXIST, verbatim, in this document. A1's two reconstructions are correct across their junctions. But three of the four carry scope or modality words A1 did not see, and the fourth - the load-bearing one - is an item in a hedged list of attributed competitor motives. One regime statement A1 recorded is FALSE: spoofing is within this document's regime, and discussed at length.

## READ LEVEL

Arbiter Systems PD0057900A, "Specifying Holdover Performance", Dickerson, Bill (printed on the page as "Bill Dickerson, P.Eng., FIEEE"; front matter also gives Arbiter Systems, Inc., Paso Robles, CA; copyright 2020) - **FULL TEXT via summariser, read in five passes**: one structural pass (front matter, every section heading), one targeted-quotation pass on the two definitional sections, one immediate-context pass (sentence before / sentence itself to its period / sentence after) on quotations (c) and the "statistical estimate" sentence, one pass on the numbered list containing quotation (d) and one pass for its stem, and one DEDICATED TERM SWEEP (verify / verifiable / measure / reference / caesium / rubidium / compare / external / probe / monitor / estimated / actual / spoof). Route: the arbiter.com URL in A1's source block. No route error, first call, five times.

The summariser twice REFUSED to serve either definitional section as gapless consecutive segments ("I can't reproduce both sections in full, verbatim, in consecutive segments") and refused the whole "How about our competitors?" section the same way. That refusal is **a fact about my request, not a property of the document**: every sentence I then asked for individually, and every sentence-before / sentence-after, was served. I did not obtain a continuous transcript of any section, so where I say a sentence has no preceding conditional I am relying on a served sentence-before, not on my own reading of continuous text. I flag that limit.

**Document number / revision.** Printed on the page as **"PD0057900A"**, one continuous string, at the foot of page 1; the trailing "A" is **not** shown separately and **not** labelled as a revision. The URL filename is PD0057900. The front matter therefore does **not** distinguish a revision A. **One document, two identifiers** - the entry's "PD0057900A" and A1's query-6 "PD0057900" name the same thing. The revision I read is the one the page prints: PD0057900A.

No other source in the entry was opened by me; this check was scoped to the one load-bearing document. Sources (2)-(13) remain at the read levels the brief records.

## WHAT THE SOURCE SAYS (quotations as served)

Sub-claims answered separately and in order.

### 1. The definitional sentence (A1's two-fragment reconstruction)

Section heading: **"What is the definition of 'holdover?'"**

> "Holdover is, quite simply, the time error expected to accumulate over a specified interval when the GNSS clock is unlocked."

Served to me **as one continuous 122-character string in a single segment**, not as two. So: **it is ONE sentence in the document, and A1's join is correct.** No preceding conditional. The sentence's opening words ("Holdover is, quite simply,") scope it as a DEFINITION and the clause ASSERTS the quantity.

Two things A1's use of it gets right and one it overreaches. Right: "expected to accumulate" is a statistical term of art, and the section goes on to make the statistics explicit. Overreach: the scoping phrase is "**when the GNSS clock is unlocked**" - the definition is conditioned on loss of lock. It defines what holdover IS; it says nothing about whether the accumulated error is observable afterwards.

### 2. "holdover error can't be predicted exactly"

Section heading: **"What is the definition of 'holdover?'"**

> "However, holdover error can't be predicted exactly: if it could, we would be able to correct for it."

A1's quotation drops the opening word. **The scope-setting opener is "However,"** - it marks a move AWAY from the preceding concession, which the term sweep shows to be "we do correct for as much of it as we can measure" and "sensitivities to factors we can't or for practical reasons, don't measure."

Modality and logical form, as asked:
- **Bare, not hedged**, on its main clause: "can't be predicted exactly".
- **The second clause is a counterfactual giving the REASON, not a conditional limiting the first.** "if it could, we would be able to correct for it" is an argument from the fact that correction is incomplete; it does not restrict the scope of "can't be predicted exactly".
- **Scope: this vendor's practice, inside a general definition.** The subject is "holdover error" without a possessive, so the clause reads generally; but the surrounding first-person sentences ("we do correct for as much of it as we can measure") make the warrant Arbiter's own correction practice. The document does not mark it as a result about GNSS-disciplined clocks generally, and cites nothing.
- **The quantity is PREDICTION, not observation.** This is the one-word gap. The sentence denies exact *ex ante* prediction. A1's attack needs the operator to be unable to *verify, after the fact, in service*, a unit's delivered time error. A sentence denying exact prediction does not assert that. Prediction and post-hoc observation are different quantities, and this is the document's own distinction, not mine: the whole section is about forecasting a counterfactual.

### 3. The "statistical estimate" pair (A1's second two-fragment reconstruction)

Section heading: **"What is the definition of 'holdover?'"**. A1's join is **correct at the comma**; the sentence completes as A1 reconstructed it, and I obtained the sentence after it.

The two sentences before, as served (segmented for the summariser's cap, consecutive):

> "Such factors must be treated statistically."
> "That is, we measure the actual behavior of the oscillator while it is locked;" / "we assign as much of the variation as we can to 'known' mechanisms including aging and environmental effects" / "(temperature, humidity, and/or barometric pressure for instance);" / "and what remains is called the 'residual' - all of which appears as noise."

The sentence itself:

> "Then, based on that, we can make a statistical estimate of how far off that clock might have drifted," / "if it had lost lock, considering the predicted trajectory and the residual errors."

The sentence after:

> "This estimate varies for different holdover intervals."

**Subject**: the first person plural, "**we**" - Arbiter - performing an estimation on an oscillator **while it is locked**, about a **counterfactual**: "**if it had lost lock**". On its own words this sentence is **the vendor's specification-writing exercise**, not a figure a clock reports about itself in service. The subjunctive "might have drifted" / "if it had lost lock" is decisive: a clock actually in holdover has lost lock, and no counterfactual is required.

That said, the document does **separately** assert the in-service version, and A1's reading is not left with nothing. Term sweep, same section: "Since we measure environmental sensitivities along with aging of the resonator itself, in real" [time] and "we can estimate actual holdover uncertainty in that same environment"; and section "Why is constant temperature a bad restriction? I have an air conditioner...": "Which is why we provide actual, realtime estimates of expected holdover uncertainty" and "the actual holdover error will be less than predicted ~ 95 % of the time." So the in-service figure is also called an estimate - but **by those sentences, not by the one A1 quoted**.

**Necessary or sufficient**: offered as **sufficient**, not necessary. "we **can** make a statistical estimate" is a capability claim - one way to specify holdover. The nearest necessity in the passage is the preceding "Such factors **must** be treated statistically", and its subject is the **residual** factors just enumerated ("sensitivities to factors we can't ... measure"), not the whole time-error record. A1's step to "an estimate is the only thing obtainable" needs the necessity to attach to the record; in the document it attaches to the residual.

### 4. THE LOAD-BEARING SENTENCE

This is where the kill changes shape. The string exists, verbatim. But it is **item 5 of a numbered list**, and the list has a stem A1 did not see.

Section heading: **"How about our competitors?"**

> "We believe that they do this for these reasons:"
> 1. "Holdover is a key specification; they might be able to use it as a lock-out"
> 2. "Improving performance costs money (often, quite a lot)"
> 3. "Vendors cannot know the actual operating environment"
> 4. "Specifying at a constant temperature provides the best holdover for a given clock"
> 5. "Customers have no practical way to verify actual performance, so they will believe the claim"

The sentence after the list: it opens "The constant temperature condition is particularly troublesome," and goes on that holdover performance is mostly driven by temperature influences.

A note on section attribution, because my passes disagreed and the reader should know why. The list runs across a page break: one pass reported items 1-2 under "How about our competitors?" with items 3-5 extracted on page 2 after the "What is the meaning of Arbiter's holdover specification?" text, and the dedicated term sweep tagged the "verify" occurrence to the "meaning" section. **The stem resolves it**: "We believe that they do this for these reasons:" sits under "How about our competitors?", "this" refers to competitors' constant-temperature specifying, and the list is continuously numbered 1-5. The naive extraction order is a column/page-break artefact. A1's scope note ("in a competitor-comparison section") was right about the section.

Now the three things I was asked to decide.

- **Conditional, disjunction or bare assertion?** A1 looked for a preceding conditional and found none; **there is none**, and item 5 is a main clause with a "so" consequence. **But the governing modality is not in item 5 at all - it is in the stem.** The whole list is under "**We believe** that they do this for these reasons", which is (i) **hedged** - an author's belief, not an assertion of fact - and (ii) **an attribution of MOTIVE to competitors**, not a statement about clocks. By the ledger's own rule ("where a source states a claim more than once, quote the HEDGED, CITED formulation rather than the bare one"), the citable formulation of this sentence is the stem plus the item, not the item alone. A1's cut is verbatim and grammatically clean on both sides and still deletes the modality - the exact failure mode the batch rules name.
- **Subject: (i) a competitor's published specification, or (ii) a deployed unit's actual time error in service?** The sentence is a **hybrid, and its function in the document is (i)**. Its object "actual performance" does denote real behaviour, so a reader can get to (ii) from the words; but the consequence clause fixes the referent - "so they will believe **the claim**", and "the claim" is the competitor's published constant-temperature holdover figure. The list's purpose is to explain why competitors get away with a restricted specification. The document's sibling sentence makes the same move: in "What is the meaning of Arbiter's holdover specification?", "Without knowing the actual performance under your conditions, you can't tell what that clock" [does/will do - trailing words not served]. That is spec interpretation, not in-service measurement.
- **Does the use survive?** Only reading (ii) supports the kill, and the document asserts (ii) nowhere on its own account. It asserts, hedged, that customers cannot practically check a vendor's claim - as one of five believed reasons for a marketing practice. **The kill's central premise, in the form the kill needs it, is not asserted in this document.**

### 5. The trailing clause A1 could not see served

Section heading: **"Annex: What are the consequences of holdover error?"** (not the definitional sections - worth noting, since A1's row 4 presents it alongside them).

> "Arbiter's clocks report their estimated actual holdover error as part of the relevant time codes and protocols," / "so that each application can make an informed decision regarding what to do as the error accumulates."

Sentence after: "Table 1, which follows, shows the effects of varying holdover error on some power system applications."

**The trailing clause does NOT qualify "estimated".** It is a purpose clause about downstream use. So this quotation survives completion intact, and it is **the one of the four that does the work A1 wanted**: an Arbiter clock's own in-service holdover-error report is, in the vendor's own words, "estimated". Two qualifications. First, its scope is explicitly "**Arbiter's clocks**" - a possessive, this vendor's design, no generalisation. Second, the clause's point is that the figure IS carried in the time codes and protocols, i.e. **present in the record**, which is a different matter from whether it is verifiable.

## REGIME

As the document's own text defines it.

- **Population**: Arbiter Systems GNSS clocks. The Introduction frames the topic generally - "modern GNSS clocks increasingly specify holdover performance" - but every performance figure in the document is Arbiter's own: "Model 1206C clock, which incorporates a rubidium holdover oscillator (Figure 4)", and "our standard OCXO". **The words "substation" and "utility" are not used of the clocks**, and the document does not describe the installed base of anyone else's clocks except as publishers of specifications.
- **Unit of analysis**: one GNSS clock, specifically its holdover oscillator.
- **Operating condition**: holdover after loss of lock. "We report estimated holdover performance for time intervals from 15 minutes to 30 days" ("What is the definition of 'holdover?'") - A1's interval record is confirmed verbatim.
- **Instrument**: Arbiter's measurement of oscillator behaviour **while locked** ("we measure the actual behavior of the oscillator while it is locked"), plus the clock's own real-time estimate, plus a demonstration installation: "This is measured in the lobby of our facility in Paso Robles," ("What do we do to optimize our holdover performance?"; A1's phrase "real-world lobby environment" is not the document's wording). **The document never says what the measured holdover error of Figures 1, 2 or 4 was measured against.** Dedicated term sweep: "reference" does not occur; "compare"/"comparison" does not occur; "external" does not occur; "probe" does not occur; "monitor" does not occur; "caesium"/"cesium" does not occur.
- **Threshold, both figures printed, with locations**: "For our standard OCXO, specified at **1 ms/24 hours**" - section "What do we do to optimize our holdover performance?"; and in the same section, "typical performance is **over forty times better** (Figure 1)." **The "forty times" sentence does not name its baseline**; context makes it the 1 ms/24 h specification, and that identification is MY OWN READING OF THE CONTEXT, not a printed statement. Note also that "over forty times better" is a **typical-performance claim pointing at a figure**, i.e. the document ANNOUNCES it rather than printing a measured value with units and a denominator - I can name no table cell or numeric value for it. A1's record of both figures is accurate.
- **Confidence / estimator**: "We use a default estimator of **two sigma**" ("Why is constant temperature a bad restriction? I have an air conditioner..."), with "the actual holdover error will be less than predicted ~ **95 %** of the time." (same section).
- **Standards named**: "Meets requirements of **NERC PRC-002-2**" and "requirement **R10**" (Table 1 note). **IEEE C37.238 is not named. IEC/IEEE 61850-9-3 is not named. PTP is not named. IRIG-B is not named.** Table 1's applications are synchrophasor measurement units (PMU), merging units / sampled values, relays, event and fault recorders, and traveling-wave fault location.
- **SPOOFING - A1's regime statement is FALSE.** A1 records "Spoofing is NOT within this document's regime". Spoofing is discussed in the section **"Why is holdover performance important?"**, where every occurrence sits:

  > "The less obvious reason is that one of the indicators of spoofing is an unexpected time error from the GNSS receiver."
  > "So, the more stable the holdover oscillator, the more sensitive our spoofing detection becomes."
  > "...and the best sensitivity for spoofing detection, without raising false alarms."
  > "Of course, spoofing detection is also based on numerous other factors" ... "the more likely that we can correctly detect spoofing."
  > "...you would not be happy with us if we raised a 'spoofing alarm' because the temperature of the clock changed"

  Same section: "by actually measuring performance under actual operating conditions,". I found these on a question aimed at the term, after an earlier structural pass had already surfaced the topic; I did not need a second sweep to confirm presence.

  This is not a bookkeeping correction. The passage describes the clock's holdover model being used **in service, while locked, as a check against the GNSS receiver's own output** - "an unexpected time error from the GNSS receiver". That is an in-service two-source comparison, in a mode where the unit has **not** lost lock. It is the nearest thing in the document to the capability A1's attack says frame units lack, and A1 recorded the topic as outside the regime.

**Does the claim sit inside this regime?** The document's regime is: this vendor's GNSS clocks, holdover after loss of lock, 15 minutes to 30 days, two-sigma estimator, power-system applications, NERC PRC-002-2. The entry's clause C4 needs: the frame's modal unit, in service, its delivered time error unverifiable. The loss-of-lock condition and the vendor-specific population are both narrower than that, and the spoofing passage is a case inside the document where the condition does not hold.

### 7. A clock WITH an independent reference

**The document is SILENT.** On a dedicated term sweep, "reference", "external", "probe", "monitor", "compare"/"comparison" and "caesium"/"cesium" **do not occur**; "rubidium" occurs only as Arbiter's own holdover oscillator in the Model 1206C, not as a comparison standard. No sentence states or implies that a clock with an independent reference input can measure its delivered time error.

Stated precisely, because the distinction matters for the entry: this is **silence, not denial**. The sentence that would bound the kill to GNSS-only units **is not in this document** - so the kill cannot be bounded by it, and equally the document does not deny the capability. On my sweeps the proposition is **UNENUMERATED in this document**: I opened this one document and found no instance; I name the documents I did not open (sources 2-13 of the entry, and the never-opened vendor alarm-log format specification the entry's own C5 note nominates by kind). The spoofing passage above is the one place the document comes near the point, and it leans **against** the kill rather than for it.

### 8. Overlap, both directions, with V2's frame

- **Document to frame.** The document's clocks are "GNSS clocks" supplied by Arbiter for power-system applications; the only standard it claims compliance with is **NERC PRC-002-2 R10**. It does **not** name IEC/IEEE 61850-9-3 or IEEE C37.238. So **whether this vendor's clocks are governed by the frame's standards is not established by this document** - it is consistent with it (PMU and merging-unit applications are named), but the document makes no such statement. I was not given V2's frame text and do not assert the frame's contents.
- **Frame to document.** The document **nowhere** characterises any installed population by whether its units have an independent reference, and **nowhere** says GNSS-only units are modal in any population. "The modal unit of the frame is of this class" is **a step this document does not make**. It is A1's step. In the entry's record the only population sentence pointing that way is from source (12), the NTP Pool thread - "Many of the NTP Pool servers are cheap GPS receivers without any significant \"holdover\"" - which the record and the entry both already flag as an assertion about the population rather than a measurement of it, and which is about public NTP servers, not about the frame's standards-governed units.

## DEFECTS FOUND

1. **The kill's central sentence is governed by "We believe".** Quotation (d) is item 5 of a five-item list stemmed "We believe that they do this for these reasons:". A1's cut is verbatim and grammatically clean and deletes the modality. The citable form is stem-plus-item: a hedged attribution of motive to competitors, not an assertion about clocks.
2. **Its subject is a published claim, not an in-service measurement.** "so they will believe **the claim**" fixes the referent as the competitor's published constant-temperature holdover figure. Reading (i), which does not support the kill. The document asserts reading (ii) nowhere on its own account.
3. **Quotation (b) is about PREDICTION, not verification.** "holdover error can't be predicted exactly" denies exact *ex ante* prediction; the attack needs post-hoc unobservability. One word away, different quantity. Its dropped opener "However," marks a move away from the preceding concession that Arbiter *does* correct for what it can measure.
4. **Quotation (c)'s sentence is counterfactual and first-person.** "we can make a statistical estimate of how far off that clock might have drifted, **if it had lost lock**" is Arbiter's specification exercise on a **locked** clock, offered as **sufficient** ("we can"), not necessary. The necessity nearby ("Such factors must be treated statistically") attaches to the residual, not to the record.
5. **A1's regime finding on spoofing is false.** Spoofing is discussed throughout "Why is holdover performance important?", and the passage describes an in-service check of GNSS output against the holdover model, in a mode with no loss of lock.
6. **The generalising step is not in the document.** Every performance statement is possessive - "our standard OCXO", "Arbiter's clocks", "Model 1206C". The step from this vendor's design to "the declared instrument fails for the modal unit of the frame" is A1's, and the entry already concedes the leg is "a metrological design argument" and "NOT an algebraic identity".
7. **No independent-reference sentence exists either way** (see 7 above): the kill cannot be bounded to GNSS-only units by this document.
8. **What survives.** The strings all exist; both reconstructions are correct across their junctions; the unserved trailing clause completes harmlessly; and quotation (c)'s sentence, plus "Which is why we provide actual, realtime estimates of expected holdover uncertainty" and "the actual holdover error will be less than predicted ~ 95 % of the time.", do establish that **an Arbiter clock's in-service holdover figure is, in the vendor's own words, an estimate at two sigma**. That is a real finding about this vendor's clocks and it is the only part of the kill the document carries.
9. **Group count.** One document, one author, one vendor, no citations in it. The entry's vulnerability field already says so; nothing I found reduces that. Nobody but A1 had read it, and the entry's two "most likely to settle it" nominations (Cosart, impacts.ucar.edu) remain unopened and are not of the kind that could settle a question about this document's text.

## ROUTES THAT FAILED

None. The arbiter.com URL in A1's source block returned content on all five calls, with no error. Two summariser **refusals** to serve gapless consecutive transcripts of whole sections are recorded above as facts about my requests, not the document: every sentence I then asked for individually was served. I did not obtain a continuous transcript of any section and did not spend my sixth fetch trying, so my "no preceding conditional" findings rest on served sentence-before results, not on continuous reading - **I stopped there**. I ran no WebSearch; none was needed, the citation resolved directly. Sub-claims reached: all eight.

## BEARING ON THE LEDGER ENTRY

**Attack 4 / clause C4 should NARROW sharply, and the Unresolved it carries does not survive in its present form.**

The kill as written says the document establishes that a GNSS-disciplined clock's own time-error record after loss of lock is a statistical estimate the operator cannot verify in service. The document establishes the **first half for this vendor's clocks** - "Arbiter's clocks report their estimated actual holdover error", at a two-sigma default estimator, for intervals from 15 minutes to 30 days. It does **not** establish the second half at all: its only sentence about verification is a hedged item in a list of believed competitor motives, and its object is a published specification. Strike the unverifiability leg; hold a narrowed version of the estimate leg, scoped to "Arbiter's own GNSS clocks report an estimated, two-sigma holdover error".

That narrowing does not reach the frame. Two further steps are unsupported by this document: that the frame's modal unit is a GNSS-only clock with no independent reference (the document makes no population statement of any kind), and that this vendor's clocks are inside the frame (the document names NERC PRC-002-2, not C37.238 or 61850-9-3). Both were A1's, and should be **marked as A1's reasoning rather than as source findings**.

Adversary #2's two sentences, which I was told were graded Partial and which I had no reasoning behind, both survive contact with the document. "Obtainability is a measurand here, not a presupposition" is not touched by anything in this text. And on "No clause the question cannot survive without came back FALSE on a source I opened" - A2 never opened this one, so that is a statement about A2's read, not a defence of the clause; but on **my** read of the document A2 never opened, the clause C4 the kill needs did not come back TRUE either.

The one new fact the entry should carry regardless of how the verdict moves: **spoofing is within this document's regime**, in the section "Why is holdover performance important?", and the document there describes the holdover model being used in service to detect "an unexpected time error from the GNSS receiver" - a no-loss-of-lock, two-source comparison. A1 recorded the opposite. If any part of the entry treats spoofing as untouched by this source, that record is wrong.

Suggested disposition: **convert attack 4 from a standing Unresolved to a promotion condition**, namely that someone open a document of the kind that could actually settle it - a vendor holdover/alarm-log **format** specification showing what a unit's record carries and whether an in-service verification field exists (the entry's own C5 note nominates that kind and says the search was never run), or a limit-bearing Recommendation rather than source (11)'s third-party wiki summary. Both are nominations **by kind**, and I am naming the kind, not an instance: I opened neither, so this is a work item, not a lead I have grounded.
