# VERIFY - Coleman CGSIC slides 14-15 and ICG-19 WG-D Rec C: is the GPS engineering assessment posed as outstanding?
Checker: fresh context. Budget used: 4 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261022-11 asserts three things:

1. That Coleman's CGSIC deck poses, as a needed and unperformed assessment, the engineering
   evaluation of GPS ground and on-orbit software models that presently assume |UT1-UTC| < 1 s.
2. That slide 15 prints a QZSS self-declared 64 s broadcast limit.
3. That ICG-19 WG-D Recommendation C (24 October 2025) asks providers to anticipate the
   increased UT1-UTC tolerance and to promote research on a possible negative leap second,
   with no inventory and no numbers.

The entry proposes a ROUTING ROW on the ground that the GNSS slice is a POSED but unperformed
engineering task, and flags that the key posing sentence was reconstructed from two served
fragments. A routing row on this ledger requires the posing sentence verbatim from the document.

## READ LEVEL

**Source 1. Coleman, Michael J., "Towards Continuous Universal Time and the Future of the Leap
Second", 64th Civil GPS Service Interface Committee Timing Subcommittee Meeting, convened with
ION GNSS+, Monday 16 September 2024.**
https://www.gps.gov/cgsic/meetings/2024/coleman.pdf - no DOI (conference presentation, not a
journal article). Deck length as served: 23 slides.

- Title slide: FULL TEXT. Front matter read directly, not from a short label.
- Slides 14 and 15: FULL TEXT, verbatim, served as ordered consecutive segments under the
  summariser's ~125-character quote cap, in two independent fetches with different prompts.
- Slides 1-13 and 16-23: NOT READ line by line. I asked the summariser, across the whole deck,
  whether any slide states that such an assessment has already been carried out; it answered no.
  That answer is summariser-mediated, not my own read, and I grade it as such below.

**Source 2. ICG Working Group D, "Information on the work related to the proposed redefinition of
UTC (revision of Recommendation 16-B (2016))", document identifier "ICG/REC/2025", dated
"Friday, 24th of October 2025", sign-off date "24 October 2025".**
https://www.unoosa.org/documents/pdf/icg/2025/ICG-19/ICG-19_WG-D_Recommendation_C_.pdf
- no DOI (UN OOSA ICG working-group recommendation).

- Operative recommendation clause: FULL TEXT, verbatim, three segments.
- Background narrative (ITU-R history, WRC/RA/CGPM chronology): PARTIAL. Read as summariser
  condensation with individually quoted number-bearing fragments. I did not obtain the background
  prose verbatim end to end and do not grade on its wording.

No source in this entry was COULD NOT READ. Both named documents opened.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Slide 14's text about the needed assessment

Slide 14 is headed **"Answers from GNSS Providers"** and carries the framing line
**"Impacts of a new tolerance"**. Under the subheading **"GPS"**, the first bullet reads:

> "Necessitate an engineering assessment of all GPS ground and on-orbit software models
> that presently assume that UT1 – UTC < 1.0 second."

**This is a RECONSTRUCTION from TWO fragments.** The fragments as served were:

- F1: `Necessitate an engineering assessment of all GPS ground and on-orbit software models`
- F2: `that presently assume that UT1 – UTC < 1.0 second.`

**Junction verified**, and verified independently rather than by inference. A second fetch with a
different prompt was asked what word immediately follows "models"; it returned "that", matching
F2's opening token, and reported that the bullet is one sentence on the slide ending in a period.
Two differently-prompted reads agree on the junction, so I treat the assembled sentence as whole.
I did not complete any cut string by inference.

The remaining GPS bullets on slide 14, same read:

> "Necessitate more "unconventional" time stamps to be documented during the leap interval
> (for example, currently using 23:59:60.xxx) in ICD."

> "A large discontinuity in UTC occurring approximately once per century is likely to cause a host
> of problems, there will be no real (i.e., non-simulated) experience to handle it."

### (b) Needed/necessitated, or already done?

**Needed/necessitated.** The printed verb is "Necessitate". Nothing on slide 14 reports a
completed assessment, and the whole-deck question (summariser-mediated, see READ LEVEL) returned
no completed-assessment statement anywhere in the 23 slides.

But the grammar on both sides of the bullet matters, and it qualifies the entry's framing. The
bullet is a **verb-initial fragment with no printed subject**, hanging under the framing line
"Impacts of a new tolerance" on a slide headed "Answers from GNSS Providers". Restored, it reads:
*[a new tolerance would] necessitate an engineering assessment*. So the printed sentence is

- **conditional**, not present-tense outstanding: the assessment becomes necessary *if* the
  tolerance is changed; and
- **attributed**, not authorial: it is reported by Coleman as GPS's answer to his survey, in the
  providers' voice, not posed by Coleman in his own voice as an open task.

The hedged, attributed formulation is the one I quote above and the one the ledger should carry.

### (c) Slide 15's QZSS figure

Slide 15, also headed "Answers from GNSS Providers", under "Recommended Leap Interval:":

> "QZSS: No direct recommendation, but noted that DUT1 needs to be within 64 seconds to avoid
> broadcast message format and ground control algorithm changes (a value of 1 minute or less
> might be preferred)."

**RECONSTRUCTION from TWO fragments**; junction at `...to avoid broadcast` / `message format and
ground control algorithm changes...`. Verified: the second fetch was asked for the words
immediately before and after "64 seconds" and returned "within" and "to", and returned the same
two fragments with the same break, so the junction holds across two reads.

**What the 64 is a limit ON.** The quantity is **DUT1** - the broadcast UT1-UTC offset parameter -
and the units printed are **"seconds"**. The number is the bound DUT1 "needs to be within"
**in order to avoid** "broadcast message format and ground control algorithm changes". It is a
threshold, so there is no denominator; it is not a rate.

**Numerator class and overlap, both directions.** The source's class is the *value of the
broadcast DUT1 parameter*. What it MISSES relative to the entry's "broadcast limit": it is not a
limit on broadcasting as such, nor a stated field-width or message-capacity limit - the deck
nowhere says 64 s is what the message field can hold, and it does not name the parameter's bit
allocation. What it INCLUDES that the entry's phrase excludes: the 64 s is explicitly coupled to
**ground control algorithm** changes as well as message format, i.e. it bounds a ground-segment
condition and not only an over-the-air one. The entry also omits the second printed figure on the
same line, "a value of 1 minute or less might be preferred".

**PUBLISHED IS NOT PERFORMED.** The deck does not measure 64 s. It **ANNOUNCES** it, as a value
reported to Coleman by QZSS in answer to a survey question. "Self-declared" in the entry is
therefore fair.

### (d) Any number for Galileo on slide 14?

**No numeric value.** The Galileo section of slide 14 as served:

> "Verification that the format and processing of the DUT1 parameter with a higher value is
> properly handled."

> "ICD: current algorithm and associated parameters format (type, number of bits...) for the new
> leap period adjustment will have to be checked, tested and verified, even if it is executed
> only once per century"

> "Strongly recommended that any change in tolerance is timely and clearly communicated to us
> so that it can be properly implemented."

The only digit character in the Galileo section is the "1" inside the token **"DUT1"**; the second
fetch, asked directly for digits in that section, confirmed no standalone numeric values. There is
a word-form frequency, **"only once per century"**, and the phrase "number of bits..." with the
count elided by the deck's own ellipsis. **No tolerance figure, no threshold, no count for
Galileo on slide 14.** Galileo's position is printed on slide 15 instead, and it is non-numeric:
"Galileo: Preferred tolerance would be the one that minimizes the occurrences of new leap period
adjustments, therefore no limit."

### (e) ICG-19 Recommendation C

Operative clause, verbatim, three ordered consecutive segments:

> "The ICG WG-D recommends that :
> - the ICG monitors the ongoing development of the proposed redefinition of UTC
> - GNSS/RNSS providers anticipate the consequences of the increased tolerance between UT1 and UTC
> - GNSS RNSS providers promote research on the impact of a possible negative leap second"

Note the document's own inconsistency, preserved: "GNSS/RNSS" in the second bullet, "GNSS RNSS"
without the slash in the third. The bullets were served with a "●" marker.

**Inventory: no.** Asked directly, the served text contains none of "inventory", "survey",
"catalogue", and asks providers to compile or report no list. The three verbs are *monitors*,
*anticipate*, *promote research on*.

**Numbers: none in the operative clause.** The clause quoted above prints no digit. The document
as a whole does print numbers, all of them historical or bibliographic references in the
background narrative: "started in 2000 at the ITU-R", "during 2000-2010 WP7A studied the issue",
"(Torino, 2003)", "in 2010 the Draft Revision", "Radiocommunication Assembly 2012 (RA -12)",
"Resolution 653 (WRC-12)", "WRC-15 Agenda item 1.14", "TF.460-6", "Resolution 4 in 2022",
"increased in or before 2035", "expected at CGPM 2026", plus the identifier "ICG/REC/2025" and the
title's "Recommendation 16-B (2016)". None is a count of affected systems, models or interfaces.

## REGIME

**Coleman deck, in its own words.** Population: the GNSS/RNSS providers who answered a
questionnaire - the slides name GALILEO, GPS, NavIC, QZSS, and record "No direct recommendation
from other systems." Unit of analysis: one provider's free-text answer per bullet. Operating
condition: the slides are headed "Answers from GNSS Providers" and the two sub-framings are
"Impacts of a new tolerance" (slide 14) and "Recommended Leap Interval:" / "On GNSS Time Alignment
to UTC:" (slide 15). Instrument: a survey of providers, reported by one CCTF task-force member.
Threshold under discussion: the CGPM-2022 increase of the UT1-UTC tolerance; the present-day
assumption named is "UT1 – UTC < 1.0 second". Category: provider-stated impacts and preferences.

Does the claim sit inside that regime? **Partly.** The GPS sentence is inside it as a *reported
provider impact statement*. It sits *outside* it as a statement of what Coleman poses, and outside
it as an unconditional present-tense open task: the regime is prospective-conditional ("Impacts of
a new tolerance"), so the assessment is necessary under a tolerance change that has not yet taken
effect, not demonstrably outstanding today.

**ICG WG-D document, in its own words.** Unit: one working-group recommendation revising
"Recommendation 16-B (2016)". Population addressed: "the ICG" and "GNSS/RNSS providers". Condition:
the pending ITU-R/CGPM redefinition, with the tolerance "increased in or before 2035" and a
decision "expected at CGPM 2026". Category: recommended actions, no reporting obligation attached.
The claim sits inside this regime.

## DEFECTS FOUND

1. **Threshold misquoted.** The entry writes "|UT1-UTC| < 1 s". The slide prints
   "UT1 – UTC < 1.0 second": **no absolute-value bars**, and "1.0 second" not "1 s". Asked
   specifically about bars, the second fetch confirmed the inequality uses "<" with no vertical
   bars. For a routing row that rests on a verbatim sentence, the bars are an inserted
   mathematical commitment the slide does not make.

2. **"Poses" over-attributes.** The sentence is a GPS survey answer reported under "Impacts of a
   new tolerance", not Coleman posing an assessment as outstanding in his own voice. The subject
   of "Necessitate" is the prospective new tolerance, which the slide leaves unprinted.

3. **Conditional read as present.** "Necessitate" under that framing is contingent on the
   tolerance change, not an assertion that the assessment is overdue now.

4. **"Broadcast limit" is one word away from the printed quantity.** The 64 s is a limit on
   **DUT1**, needed to avoid **broadcast message format AND ground control algorithm** changes.
   Dropping the ground-segment half, and recasting a parameter tolerance as a "broadcast limit",
   changes the quantity.

5. **Second slide-15 figure omitted.** "(a value of 1 minute or less might be preferred)" is
   printed on the same line and is not carried by the entry.

6. **"No numbers" needs narrowing.** True of Recommendation C's operative clause; false of the
   document, which prints a dated horizon, "increased in or before 2035", and "expected at
   CGPM 2026". "No count and no inventory request" is the defensible form.

7. **Document label.** "ICG-19 WG-D Recommendation C" is the filename label. The document's own
   front matter gives identifier "ICG/REC/2025" and title "Information on the work related to the
   proposed redefinition of UTC (revision of Recommendation 16-B (2016))", and the body says
   "The ICG WG-D recommends that". The entry's date, 24 October 2025, is correct and printed twice.

8. **Author front matter.** The entry's "Coleman" should be **Michael J. Coleman**, Naval Center
   for Space Technology, US Naval Research Laboratory, Washington, DC, also listed as "Member of
   the CCTF's Task Force on Continuous UTC". Meeting and date in the entry are correct; the deck
   prints "64th Civil GPS Service Interface Committee Timing Subcommittee Meeting", "Convened with
   ION GNSS+", "Monday 16 September 2024".

9. **Dash form.** The deck prints "UT1 – UTC" with a spaced en dash, not a hyphen; both reads
   reported it so. Quote it with the en dash.

10. **Residual read gap, declared not inferred.** Slides 1-13 and 16-23 were not read by me line by
   line. My "no completed assessment anywhere in the deck" rests on a summariser answer over the
   full deck. That is a weaker read than a verbatim one and is not evidence that no such statement
   exists; it is the limit of what I checked.

## ROUTES THAT FAILED

- No host or document failed. Both named documents opened via WebFetch on first attempt.
- One **prompt** failed, not a route: the first fetch of the unoosa PDF asked for a complete
  verbatim transcription and the summariser declined, citing its ~125-character quote cap and
  refusing to paraphrase the remainder. Re-prompting for the operative clause alone as numbered
  ordered consecutive segments succeeded. Recorded so the next checker does not spend a fetch
  rediscovering it: ask unoosa recommendation PDFs for the operative clause, segmented, not for
  the whole document.
- The citation URL in the entry, https://gps.gov/cgsic/meetings/2024/coleman.pdf, resolves; I
  fetched the www host form.
- One WebSearch was spent locating the ICG-19 WG-D document, whose URL the entry gives only as
  "the UN Office for Outer Space Affairs ICG pages, unoosa.org". No search was refused.

## BEARING ON THE LEDGER ENTRY

**The routing row survives, narrowed. It should not be withheld.**

Sub-claim by sub-claim: (a) the posing sentence IS there and I have it whole, as a two-fragment
reconstruction whose junction two independently-prompted reads agree on. (b) It says
*Necessitate*; no completed assessment is reported. (c) The 64 s figure is on slide 15 as
described, with the corrections in DEFECTS 4 and 5. (d) Slide 14 prints no Galileo number.
(e) Recommendation C is as described, with "no numbers" narrowed per DEFECT 6.

So the entry's central factual engine holds: there is a document sentence naming an engineering
assessment of GPS ground and on-orbit software models as necessitated and nowhere reported as
done. That is what the routing row needs.

What must change before the row is written:

1. Replace the paraphrased threshold with the printed one, bars removed:
   "that presently assume that UT1 – UTC < 1.0 second."
2. Re-attribute. The row's posing sentence is **GPS's reported answer** on a slide framed
   "Impacts of a new tolerance", not Coleman's own framing, and it is **conditional** on the
   tolerance change. Write the row as "a provider-stated, tolerance-conditional engineering
   assessment, reported unperformed", not "an open task posed by Coleman".
3. Carry the row's label as a **reconstruction from two fragments with the junction verified**, as
   the entry already flags; do not upgrade it to a single-fragment quote.
4. Correct the QZSS leg to a limit on DUT1 avoiding both message-format and ground-control-
   algorithm changes, and add the "1 minute or less might be preferred" figure.
5. Soften the Recommendation C leg to "asks for no inventory and prints no count", since the
   document does print 2035 and CGPM 2026.
6. Fix the front matter per DEFECTS 7 and 8.

One promotion condition, not a strike: the claim that the assessment is **unperformed** rests on
absence of a contrary statement, and my absence check over slides 1-13 and 16-23 was summariser-
mediated rather than verbatim. Before the row is relied on for more than routing, a verbatim read
of the remaining 21 slides should confirm no later slide reports the assessment as done. Routing
does not need that; a stronger downstream use would.
