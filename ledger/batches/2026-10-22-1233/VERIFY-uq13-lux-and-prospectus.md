# VERIFY - Lux's 22.6%/7.4% confirmed as printed; the cat-bond trigger annex still unopened, but a real latency clause surfaced

Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

That Lux et al. (2024) prints a missed-event rate of 22.6% and a false-alert rate of 7.4% over
53 ComCat M>=4.5 in-region events with 95 detections, on a unit and comparator that are not an
agency's own successive published magnitudes; and that a parametric catastrophe bond's trigger
annex specifies which published magnitude vintage it reads and at what latency.

Sub-claims as assigned: (a) the two rates, counts, locations, and the paper's unit/endpoint/
comparator/estimand; (b) whether Lux compares an agency's own successive published magnitudes;
(c) read level on the prospectus annex; (d) quote on which magnitude value, which source, at what
time; (e) quote on post-settlement revision; (f) failed routes.

## READ LEVEL

**Source 1 - Lux et al. (2024): FULL TEXT, but of an author-hosted copy, not the version of record.**

Angela I. Lux; Deborah Smith; Maren Böse; Jeffrey J. McGuire; Jessie K. Saunders; Minh Huynh;
Igor Stubailo; Jennifer Andrews; Gabriel Lotto; Brendan Crowell; Stephen Crane; Richard M. Allen;
Douglas Given; Renate Hartog; Thomas Heaton; Allen Husker; Julien Marty; Leland O'Driscoll;
Harold Tobin; Sara K. McBride; Douglas Toomey (2024), "Status and Performance of the ShakeAlert
Earthquake Early Warning System: 2019-2023", Bulletin of the Seismological Society of America,
DOI 10.1785/0120230259.

Author list taken from the FRONT MATTER of the copy read, in printed order. Read via
https://rallen.berkeley.edu/pub/2024Lux/Lux-ShakeAlertPerformance-BSSA-2024.pdf

CAVEAT ON THE COPY, which the entry should carry: this copy's front matter prints the volume as
"XX", the issue as "Number XX", and pages as "1-22". It is therefore an accepted-manuscript /
author copy, NOT the paginated BSSA version of record. The DOI matches. I did not open the
version of record, so I cannot certify that 22.6% and 7.4% are identical in it. Treat the two
rates as confirmed *in the author copy at this DOI*.

**Source 2 - IBRD CAR Mexico 2024 prospectus supplement: PARTIAL. Front matter, Overview,
"The Notes" summary, and Additional Risk Factors. ANNEX A: COULD NOT READ.**

Prospectus Supplement dated April 3, 2024, International Bank for Reconstruction and
Development, Government of Mexico as Insured; Floating Rate Catastrophe-Linked Capital at Risk
Notes due April 24, 2028; Class A US$225,000,000 (earthquake), Class B US$70,000,000
(earthquake), Class C US$125,000,000 (Atlantic named storm). Issue date on or about April 17,
2024. Read via
https://thedocs.worldbank.org/en/doc/5cbd575a1d088a7f093b3e93bc996ba0-0340022024/original/ft2024-XS2799645788.pdf

I read the host's served extraction in two passes, offset 0 and offset 80000. The served text is
118,763 characters in total (a fetch at offset 160000 returned "Nothing left to read ... this
page's text is 118763 characters long", which fixes the length exactly). The offset-80000 pass
ends mid-sentence, on the token "...Not", inside the "The Notes" overview.

So: the document NAMES Annex A (terms of the Class A Notes), Annex B, Annex C, Appendix I (AIR
Expert Risk Analysis), Appendix II (AIR Expert Risk Analysis Results) and Appendix III (AIR Data
File). The TEXT of those annexes is not in this host's extraction. This is COULD NOT READ, and
strictly not NOT FOUND: the annexes exist and are named in the document I opened. Their silence
in my read is not evidence about their contents in either direction.

**Source 3 - IBRD CAR Chile 2023 prospectus: NOT ATTEMPTED.** Budget exhausted. Not a negative
finding.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Lux's two rates, with locations

Both numbers are printed, and both are printed ONLY in the Conclusions.

Missed-event rate, Conclusions:

> "Missing 12 of the 53 earthquakes gives a missed event rate of 22.6%."

False-alert rate, Conclusions:

> "a false alert rate of 7.4% for the real-time system (seven false alerts out of 95 M >=4.5 alerts)."

The Abstract, the Results and Table 1 carry the COUNTS but not the two percentages. The
percentages are a Conclusions-only formulation.

Per PUBLISHED IS NOT PERFORMED: these are measured rates over an enumerated five-year event set,
not definitions or targets. The paper measures them. The Conclusions set them against a
pre-existing design target, quoted there from Given et al. (2018):

> "No more than 1 out of 10 ComCat earthquakes above the target magnitude will be missed."

That is the HEDGED, CITED formulation of the standard, and it is the comparator the paper judges
22.6% against (the paper glosses 22.6% as "~2 out of 10 ComCat" earthquakes).

### (a cont.) Numerator class and denominator, both directions

**22.6% = 12 / 53.**

Denominator 53: ComCat M>=4.5 earthquakes over the period, described in the Results as in the
"West Coast reporting region" and in the Conclusions as "within the alerting boundary". Appears
in Table 1, Results and Conclusions.

Numerator 12 is a COMPOSITE and does not match Table 1's own "missed event" class. Table 1
defines a missed event as a ComCat M>=4.5 earthquake ShakeAlert did not detect, and counts 7. The
Conclusions' 12 = those 7 undetected events PLUS 5 events the paper says were "detected by
ShakeAlert" but were "below the alerting threshold" (i.e. ShakeAlert's magnitude estimate fell
under M 4.5). Separately again, the Abstract and Results treat three *detected* events with
location error over 100 km as missed.

So the paper carries at least three different "missed" classes (7, 12, and a location-error
variant), and 22.6% is built on the widest of them.

- What the 22.6% class MISSES relative to a plain reading of "missed event": nothing - it is
  broader, not narrower.
- What it INCLUDES that a plain reading excludes: 5 earthquakes ShakeAlert did detect and did
  characterise, failing only to clear the M 4.5 publication threshold. On Table 1's own
  definition these are not missed events.

**7.4% = 7 / 95.**

Numerator 7: detections with "no matching catalog event within 100 km and 30 s of origin time",
a criterion the paper attributes to Cochran et al. (2018) and which the Abstract calls
ShakeAlert's "internal definition". Table 1 counts 7.

Denominator 95: here the paper's own wording slips. The Abstract, Results and Table 1 give 95 as
the number of ShakeAlert DETECTIONS whose maximum magnitude estimate was M>=4.5. The Conclusions
sentence quoted above calls the same 95 "M >=4.5 alerts". Those are not the same class: the
Results state that of 53 ComCat events, 46 were detected and alerts were published for 41 of
those 46, so published alerts are a strict subset of detections. Further, the Figure 1 caption
gives 87, not 95, for what is described as the same ShakeAlert M>=4.5-within-the-alerting-
boundary criterion.

- What the 95 class MISSES relative to "alerts issued to the public": nothing; it is broader.
- What it INCLUDES that "alerts" excludes: detections that never became published alert messages.

Note for the entry: the candidate claim says "95 detections". That tracks Table 1, the Abstract
and the Results, and is therefore MORE accurate than the Conclusions sentence that prints the
7.4%. The claim is not inheriting the paper's slip; it is quietly correcting it. But the claim
should not be read as putting both rates over one population - see DEFECTS.

### (b) Does Lux compare an agency's own successive published magnitudes? No.

Stated plainly: NO. On a full-text read of the author copy, the paper nowhere compares a
preliminary published catalog magnitude against a later revised published catalog magnitude for
the same earthquake. It does not discuss revision of ComCat or ANSS catalog magnitudes at all,
and it does not state whether the ComCat values it used were final at the time of comparison.

The near neighbour the entry must not be confused with: the paper DOES report ShakeAlert's own
successive real-time estimates for single events, e.g. on the 2021 M 4.7 Truckee earthquake,

> "The first alert update from EPIC revised the magnitude estimate of M 3.8, with a final estimate of M 3.7."

and on Ferndale,

> "The EPIC magnitude increased to a final magnitude estimate of M 6.3."

These are successive estimates from a real-time alerting algorithm within a single event's alert
sequence, each compared against a FIXED ComCat value. They are not successive *published catalog
magnitudes* from an agency's bulletin. ShakeAlert is a USGS product, so "an agency's own
successive estimates" is literally true of EPIC updates - which is exactly why the entry's unit
must stay worded as *published* magnitudes, or the separation collapses on a technicality.

### (c)-(d) The prospectus: which magnitude value, which source, at what time

Annex A: COULD NOT READ (see READ LEVEL). The following comes from the Overview and "The Notes"
summary, NOT from Annex A, and I flag that for every item.

**WHICH SOURCE - not read.** The served text uses "Primary Earthquake Reporting Source" and
"Back-up Earthquake Reporting Source" as defined terms, and refers to earthquake payouts being
calculated from "Earthquake Event Parameters" supplied by an "Earthquake Reporting Source", with
AIR as Event Calculation Agent making determinations in Event Reports. The DEFINITIONS of those
terms are not in the served text. No agency is named in what I read. No catalog or bulletin is
named in what I read.

**WHICH MAGNITUDE VALUE / VINTAGE - not read.** No magnitude type (e.g. Mw), no depth or location
convention, and no bulletin vintage appears in the served text.

**AT WHAT TIME - partially read, and this part is real.** Under "The Notes", the Earthquake
Calculation Date is defined as the LATER OF two limbs: the first Business Day after a Notice of
Applicable Event is delivered, and -

> "the first (1st) Business Day at least fourteen (14) calendar days after the Date of Occurrence of such Earthquake"

GRAMMAR AT THE CUT, stated explicitly: that quoted string is the SECOND LIMB of a "later of X and
Y" construction. It is not a free-standing rule that parameters are read fourteen days after the
event; fourteen days is a FLOOR, and a late Notice of Applicable Event pushes the date out. Read
as a bare sentence it would overstate the precision of the clause.

Alongside it, the served text defines an "Event Parameters Acquisition Period" as

> "the thirty (30) Business Days' period"

beginning the first Business Day after the Calculation Date, extendable in increments of at least
five Business Days, and not running past the tenth Business Day before the Maturity Date. There
is also a "Deemed Earthquake Calculation Date" fallback where no date of occurrence is specified
in time, resting on the Event Calculation Agent's reasonable judgment, and a "Reporting Source
Failure Event" regime (which is presumably what the Back-up Reporting Source serves, though I did
not read a clause saying so).

So: the LATENCY half of limb (b)'s document-kind premise is now evidenced from an instance of the
document kind - a minimum fourteen-calendar-day stand-off before the parameters are fixed, plus a
thirty-business-day acquisition window. The WHICH-VINTAGE half is not.

### (e) Revision of the magnitude after settlement - COULD NOT CHECK

No clause on revision, amendment, restatement or correction of reported parameters after an Event
Report appears in the text I read, and no clause stating that an Event Report or the Event
Calculation Agent's determination is "final and binding" or "conclusive" appears in the text I
read. I have no quotation to offer, and the annex that would carry such a clause was not served.
This sub-claim is COULD NOT CHECK, not a negative finding.

The one adjacent thing I did see: the Principal Reduction definition keys reductions to "the last
Event Report delivered by the Event Calculation Agent" five Business Days before each Principal
Reduction Date. YOUR CHECKER'S OWN INFERENCE, offered as inference and not as the quote (e) asked
for: the phrase "the last Event Report" presupposes that Event Reports can be superseded by later
ones, which is a revision mechanism of some shape. But this is payment mechanics, it says nothing
about whether a magnitude revision reopens a settled payout, and I will not let it stand in for
the clause (e) actually requires.

## REGIME

**Lux et al. (2024), in its own words.** Population: ComCat earthquakes at M>=4.5 within the
ShakeAlert "West Coast reporting region" / "alerting boundary" (Figure 1), 2019-2023. Threshold:
M>=4.5, the public alerting threshold, applied to BOTH ShakeAlert's estimates and ComCat
magnitudes. Instrument: the ShakeAlert real-time EEW system (EPIC and FinDer algorithms).
Unit of analysis: it is TWO units, not one. For the missed-event rate the unit is a catalog
earthquake (denominator 53). For the false-alert rate the unit is a ShakeAlert detection
(denominator 95). Endpoint: whether the real-time system produced a detection/alert matching the
catalog event, matched on "no matching catalog event within 100 km and 30 s of origin time"
(Cochran et al. 2018). Comparator: the ComCat catalog, treated as fixed ground truth. Estimand:
the operational detection and false-alarm performance of a deployed EEW system against a
reference catalog, judged against the Given et al. (2018) design target.

Does the claim sit inside this regime? For limb (a), yes - the claim's rates, counts and
comparator are the paper's own, and the paper's comparator is indeed a reference catalog rather
than an agency's successive published magnitudes. The paper is silent about catalog magnitude
revision, and that silence is what limb (a) trades on; silence outside a regime is not support,
so the entry should claim only the separation, not any positive finding about revision.

**IBRD CAR Mexico 2024, in its own words.** Population: a single sovereign risk transfer, Mexico,
earthquake (Classes A and B) and Atlantic named storm (Class C), risk period to April 24, 2028.
Unit: an "Earthquake" with a "Date of Occurrence", assessed by parameters from an "Earthquake
Reporting Source". Instrument: a parametric payout computed by AIR as Event Calculation Agent and
delivered in Event Reports. Operating condition: a minimum fourteen-calendar-day stand-off from
the Date of Occurrence, then a thirty-business-day Event Parameters Acquisition Period, with a
Reporting Source Failure regime and a Back-up Reporting Source behind it.

Does the claim sit inside this regime? Partly, and only for one half. The claim's "at what
latency" sits squarely inside what I read. The claim's "which published magnitude vintage it
reads" is about a definition I did not reach. One instance of the document kind is also one
instance; a single Mexico supplement cannot carry a premise stated about parametric contracts
generally.

## DEFECTS FOUND

1. **Both rates are Conclusions-only.** 22.6% and 7.4% are not in the Abstract, Results or
   Table 1. An entry that cites them should say "Conclusions", because a reader checking Table 1
   will find counts and no percentages and will think the citation is wrong.

2. **The 22.6% numerator is not Table 1's "missed event" class.** It is 7 undetected + 5 detected
   events below the M 4.5 publication threshold. The paper's own Table 1 counts 7 missed. Any use
   of 22.6% that implies "ShakeAlert failed to see 12 earthquakes" misdescribes 5 of the 12,
   which ShakeAlert did detect. The paper also has a third, location-error-based "missed" class
   in the Abstract and Results. The entry should carry the composition, not just the rate.

3. **The two rates have different denominators, and the claim's phrasing blurs this.** "over 53
   ComCat M>=4.5 in-region events with 95 detections" reads as one population characterised two
   ways. It is two populations: 22.6% is per catalog earthquake (/53), 7.4% is per ShakeAlert
   detection (/95). Rewrite as two rates over two denominators.

4. **The paper's own denominator wording for 7.4% is unreliable, and 95 conflicts with 87.** The
   Conclusions call the 95 "alerts"; Table 1, the Abstract and the Results make 95 *detections*,
   with published alerts a strict subset (41 of 46 detected events). The Figure 1 caption gives 87
   for an apparently identical criterion. The claim's choice of "detections" is the defensible
   one, but the 95-vs-87 tension is in the paper and the entry should not present 95 as
   unambiguous.

5. **The source read for Lux is not the version of record.** Volume, issue and pagination are
   unfilled ("XX", "Number XX", pages 1-22) in the copy read. The entry carries no volume or
   pages, and I cannot supply them from my read.

6. **The document-kind premise is still resting on an unopened annex, and now on a *second*
   unopened annex.** The entry conceded one prospectus truncated before its annexes. I opened the
   same prospectus from the issuer's own host, read the whole served extraction end to end, and
   the annexes are still not in it. So the concession is not an artifact of a bad route taken
   once; this host does not serve the annex text at all. Limb (b) cannot be promoted on it.

7. **But the premise is no longer wholly unevidenced, and the entry understates itself.** The
   latency half is now documented from inside a real parametric earthquake trigger: a floor of
   "fourteen (14) calendar days after the Date of Occurrence" plus a "thirty (30) Business Days'"
   acquisition period. The entry says limb (b) is unread; more precisely, its latency half is
   read and its vintage half is not.

8. **Sub-claim (e) is unanswered.** Whether a post-settlement magnitude revision reopens anything
   is the sub-claim the task says "decides whether the candidate's second limb describes a real
   decision", and I have no quotation on it. It must be marked COULD NOT CHECK and must not be
   scored either way.

## ROUTES THAT FAILED

- `pubs.geoscienceworld.org/ssa/bssa/article/114/4/1875/639301` - WebFetch returned
  `client_error`; nothing of the page was retrieved. (This also means I never confirmed the
  volume/issue/page numbers implied by that URL path.)
- `thedocs.worldbank.org/.../ft2024-XS2799645788.pdf` at offset 160000 - "Nothing left to read
  ... this page's text is 118763 characters long". Useful negative: it bounds the served
  extraction exactly.
- The same PDF at offset 0 and at offset 80000 - both passes land in cover matter, Overview, "The
  Notes" summary and Additional Risk Factors. The offset-80000 pass terminates mid-sentence on
  "...Not". The Annex A/B/C Final Terms and the definitions of "Earthquake Reporting Source" and
  "Earthquake Event Parameters" are not in the served text by either route.
- IBRD CAR Chile 2023 prospectus - NOT ATTEMPTED, budget exhausted. Not a failed route and not a
  negative finding.
- Not tried, and the obvious next moves for whoever picks this up: the Luxembourg Stock Exchange
  or other listing-venue filing of the same notes, which serves annexes as separate documents;
  the Mexican Ministry of Finance (SHCP) disclosure of the same transaction; and the Chile 2023
  prospectus as a second instance of the document kind.

## BEARING ON THE LEDGER ENTRY

**Limb (a): HOLDS, with a required narrowing of wording.** Lux et al. (2024) does print 22.6% and
7.4%, with 12/53 and 7/95, and the paper's comparator is a reference catalog treated as fixed,
NOT an agency's own successive published magnitudes. The novelty separation the entry rests on
Prior 1 survives this check. Three wording changes are required before it is used: cite the
Conclusions, give the composition of the 12 (7 undetected + 5 below threshold), and split the two
denominators instead of running them into one phrase. Also note the copy read is an author copy
at the stated DOI, not the paginated version of record.

**Limb (b): NARROW, and convert the remainder to a promotion condition.** Do not strike it. Split
it in two:
- *Latency*: PROMOTE to read, on the Mexico 2024 supplement's Overview and "The Notes" - a
  minimum of "fourteen (14) calendar days after the Date of Occurrence", then a "thirty (30)
  Business Days'" Event Parameters Acquisition Period. Cite it as Overview/"The Notes", not as
  Annex A, and carry the "later of" construction so the fourteen days is stated as a floor.
- *Which published magnitude vintage, and which source*: remains UNREAD. The defined terms
  "Primary Earthquake Reporting Source" and "Back-up Earthquake Reporting Source" exist in the
  document, which tells us the contract does turn on an identified source, but their definitions
  were not served and no agency is named in what I read. The entry must not assert that the annex
  "specifies which published magnitude vintage it reads" on the strength of this check.

**Promotion condition, to be written into the entry:** limb (b) is promoted only when a trigger
annex is opened from a route that actually serves annex text, and the definitions of "Earthquake
Reporting Source" and "Earthquake Event Parameters" are quoted, together with a clause answering
sub-claim (e) - whether a magnitude revision after an Event Report or after settlement reopens
the calculation, or whether the Event Report is final and binding. Until (e) is quoted, the
entry's second limb has not been shown to describe a real decision, and the entry should say so
in those words rather than implying the question is settled.

**Mark on the entry:** (a) confirmed; (b) confirmed-as-stated (Lux does not compare successive
published magnitudes); (c) annex COULD NOT READ; (d) partially answered, latency only, source and
vintage COULD NOT READ; (e) COULD NOT CHECK; (f) recorded above. One prospectus is also one
prospectus - a premise about a KIND of document still needs a second instance, so the Chile 2023
read remains outstanding work and not a closed item.
