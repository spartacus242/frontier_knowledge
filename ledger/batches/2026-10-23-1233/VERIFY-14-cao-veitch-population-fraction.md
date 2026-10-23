# VERIFY - Cao & Veitch 2018's 37.3% is real; the entry's quotation of it is not
Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

UQ-20261023-14 carries, in its nearest-prior field, this as the paper's words:

> "Only 37.3% of servers were rated \"Adequate\""

and uses it twice: as the only published population fraction found in three gates and
two adversary passes (so the novelty grade turns on it), and as the leg that Attack 2
marks Partial from both adversaries because nobody read the document past a
paraphrased abstract (so the independent Provisional cap turns on it too).

I was asked to re-test that string, the numerator class behind it, the denominator,
the regime, the model stratification, the two-way overlap with V2's limit rule, the
instrument's bearing on C4, and Yao 2017's field numbers at the publisher.

## READ LEVEL

- **Cao, Y; Veitch, D (2018), "Network Timing, Weathering the 2016 Leap Second",
  Proc. IEEE INFOCOM 2018, DOI 10.1109/INFOCOM.2018.8486286 — ABSTRACT ONLY, but now
  VERBATIM rather than paraphrased.** I obtained the whole abstract as five ordered
  consecutive summariser segments from the UTS OPUS catalogue record
  (https://opus.lib.uts.edu.au/handle/10453/130538). The 125-character cap that forced
  A2 into a paraphrase is defeated by asking for ordered consecutive segments; that is
  a fact about the request, not about the page. **FULL TEXT: COULD NOT READ** — routes
  below, all route failures this run, not a spent budget.
- **Yao, Wenxuan et al. (2017), DOI 10.1016/j.epsr.2017.03.004 — COULD NOT READ at the
  publisher.** This converts A1's "stopped budget" into a tried-and-failed route: see
  ROUTES THAT FAILED. Sub-claim 8 is therefore **COULD NOT CHECK**, not a negative
  finding.
- **Nothing else opened.** I opened **none** of the six limit-bearing families in V2's
  rule (G.8272, G.8272.1, G.8271.1, G.8271.2, C37.118.1/IEC-IEEE 60255-118-1,
  NIST SP 1500-08, IEC/IEEE 61850-9-3, IEEE C37.238), and none of sources 1, 2, 3, 6-13.

## WHAT THE SOURCE SAYS (quotations as served)

### 1. The string in the entry is not in the document

**A RECONSTRUCTION FROM 5 CONSECUTIVE SEGMENTS**, served in order from the OPUS
abstract field, junctions verified at each seam:

> "© 2018 IEEE. We collect high resolution timing packet data from 459 public Stratum-1
> NTP servers during the leap second event of Dec. 2016, including all those
> participating in the NTP Pool Project, using a testbed with GPS and atomic clock
> synchronized DAG cards. We report in detail on a wide variety of anomalous behaviors
> found both at the NTP protocol level, and in the detailed timestamp performance of
> the server clocks themselves, which can last days or even weeks after the event.
> Overall, only 37.3% of servers had Adequate performance overall."

The paper's own closing sentence is **"Overall, only 37.3% of servers had Adequate
performance overall."** The entry's **"Only 37.3% of servers were rated \"Adequate\""
is in no document I opened.** Sweeps run: the targeted segment-by-segment transcription
above, and a second dedicated sweep of the PDF for "Adequate"/"Poor"/"Good"/"rating"/
"grade"/"classif" (returned nothing legible — garble, see ROUTES). This is an
**EXISTENCE defect** in the entry's quotation, and it is a finding, not a failure of
mine. The **number** 37.3% survives verbatim; the **sentence around it** does not.

Why the difference carries weight, and these are my own readings of the two strings:

- **Scope-setting opener and closer.** The sentence opens "Overall," and closes
  "overall." The figure is doubly scoped as a summary across the paper's two named
  anomaly dimensions ("at the NTP protocol level, and in the detailed timestamp
  performance of the server clocks themselves"). The entry's version drops both scope
  words and reads as a single-criterion pass rate.
- **"had Adequate performance overall" is a COMPOSITE claim; "were rated \"Adequate\""
  reads as a single rating event against one criterion.** MY OWN READING OF THE WORDS,
  NOT A METHODS FINDING: a verdict on "performance overall" across two dimensions is in
  effect a conjunction over criteria, so the complement (62.7%) is a union of failure
  modes, not failures of one threshold.
- **Logical form.** The clause ASSERTS the quantity (it does not deny it or record a
  move away from it). It is a proportion, not a conditional, so there is no
  necessary/sufficient confusion available. **Modality: bare, unhedged, uncited** — no
  "may", no "approximately", no reference. There is no more-hedged formulation in the
  abstract to prefer; whether the body hedges it is unread.
- **Printed location: the ABSTRACT, final sentence**, as served by the OPUS catalogue
  record. Whether the figure also appears in a results section, a table or a figure is
  **COULD NOT CHECK**. The entry's own flag ("ABSTRACT ONLY") is correct on location.

### 2. Numerator class — COULD NOT CHECK

The paper's Methods were unreadable. The abstract names **no threshold, no units, no
standard, and no definition of Adequate**. It does tell me the rating is not
single-axis: anomalies are reported "both at the NTP protocol level, and in the detailed
timestamp performance of the server clocks themselves". So on the read I achieved the
rating is a **composite of at least two dimensions, with no numeric limit printed**.
A2's paraphrase ("no numeric limit stated behind the rating") is **confirmed for the
abstract and untested for the Methods**. I cannot say whether a seconds/microseconds
threshold, an availability criterion, or a leap-second-handling correctness test sits
behind it, and the silence of an unread body is not evidence either way.

### 3. Denominator — partly confirmed, attrition COULD NOT CHECK

Verbatim: **"459 public Stratum-1 NTP servers"**, matching the entry. Selection, verbatim:
**"including all those participating in the NTP Pool Project"**. Note the grammar on
both sides of that cut: "including all those" makes the 459 a **superset** of the Pool's
Stratum-1 participants, not the Pool itself — so this is neither pure pool membership
nor a stated internet-wide scan. The rest of the selection rule (scan, reachability
filter) is not in the abstract. **Candidate servers lost to missing data: not printed;
COULD NOT CHECK.** This last gap bears directly on V2's pre-declared measurand
exemption, which reaches "the share of the nominal denominator lost to missing records":
the paper's own attrition figure is exactly the quantity nobody has read.

### 4. Regime, in the paper's own words

- **Population:** "459 public Stratum-1 NTP servers ... including all those
  participating in the NTP Pool Project".
- **Unit of analysis:** the server — "only 37.3% of servers".
- **Operating condition:** "during the leap second event of Dec. 2016". A scheduled
  timekeeping event. The abstract names no jamming, spoofing, outage or GNSS anomaly.
  It does extend the observation window: anomalies "can last days or even weeks after
  the event".
- **Instrument:** "using a testbed with GPS and atomic clock synchronized DAG cards",
  over "high resolution timing packet data". A2's paraphrase is now confirmed verbatim.
  The reference sits at the measuring testbed, outside the measured unit.
- **Threshold:** **not printed in anything I could read.**
- **Category:** "Adequate performance overall" against an unnamed complement. Other
  category labels not legible.

Does the entry's claim sit inside this regime? On population, unit and instrument, yes.
On operating condition, no — see sub-claim 6.

### 5. Model or version stratification — UNENUMERATED, not confirmed

The abstract names no hardware or software model, version or vendor. But a five-sentence
abstract would not name one either way, so **this is not a test of the paper**. My
dedicated sweep for "ntpd", "chrony", "Meinberg", "Symmetricom", "model", "version" and
"vendor" ran against the garbled PDF and returned nothing legible — that is a failed
sweep, not an absence. Classify the entry's "unstratified by model" as **true over the
instance I read (the abstract) and UNENUMERATED at full text; nobody has tested it.**
My own observation, flagged as reasoning: a paper that promises to "report in detail on
a wide variety of anomalous behaviors found ... at the NTP protocol level" is a
plausible place for implementation and version breakdowns, so the entry is asserting the
less likely of the two possibilities from a document it has not opened. The search that
would ground this is a term sweep over a legible full text — an OCR pass over the UTS
PDF's page images, which **nobody has tried**.

### 6. Overlap, both directions, against V2

**Direction A — does V2's limit rule reach public Stratum-1 NTP servers?**
**UNENUMERATED. I opened no limit-bearing document, and neither did anyone before me**
(A2: "I opened no limit-bearing document this run and say so"; source 11 is a
third-party vendor wiki that "names no clause numbers and gives no PRTC/ePRTC accuracy
figure"). Instances opened: none. Instances not opened: all eight named documents.
MY OWN REASONING ABOUT THE DOCUMENTS' SCOPE, NOT A SOURCE FINDING: the enumerated
families are telecom network-limit Recommendations (ITU-T G.827x), power-system
synchrophasor and substation standards (C37.118.1 / 60255-118-1, 61850-9-3, C37.238) and
a NIST PMU measurement publication; none is an NTP specification, and a volunteer public
internet NTP server is not by default a telecom PRTC/T-BC node or a substation clock.
That reasoning is plausible by kind and **unverified**; what would ground it is the scope
clause of G.8272 and of C37.238, one fetch each. Nor can the frame be pulled the other
way from source 12, whose "cheap GPS receivers without any significant \"holdover\"" is,
as both the record and the entry already flag, an assertion about the population and not
a measurement of it — and it is a community thread, not a limit-bearing document.

**Is a scheduled leap second one of V2's enumerated epoch sources?** No. V2 enumerates
regulator interference bulletins, NOTAMs, ADS-B-derived interference products,
GPS/Galileo NAGUs, and constellation or ground-segment anomaly notices. A leap second is
announced by an IERS Bulletin C, which is on none of those lists, and the paper's own
operating condition is "the leap second event of Dec. 2016". **This leg of the entry's
how-it-differs field HOLDS, and now on verbatim rather than paraphrased wording.**

**Direction B — does the paper's measured class include a GNSS-disturbance epoch, which
would pull it INTO the frame? COULD NOT CHECK, and this is the direction the entry never
tested.** The abstract's condition is the leap second only, but it also says the
anomalies "can last days or even weeks after the event", so the observation window
extends well past it. Whether any GNSS disturbance falls inside that window and is
measured as such is in the unread body. An unread document's silence is not a clearance.

### 7. The instrument, and C4 — this cuts toward the kill, not away

The abstract prints the instrument verbatim: **"using a testbed with GPS and atomic clock
synchronized DAG cards"**. MY OWN READING, NOT A SOURCE FINDING: that is a reference
**external to the measured unit** — the GPS and atomic clock sit at the measuring
testbed and the server's timestamp behaviour is graded against them. C4 (as the brief
states it) stands on the vendor application note for the proposition that a
GNSS-disciplined clock's own post-holdover time-error record is a self-estimate the
operator cannot verify in service. A testbed with its own independent reference does not
have that defect for the units it watches. **So yes: this is structurally the kind of
measurement C4 says the frame lacks, and I say explicitly that it bears on checks 1 and
2.** Two caveats, both mine: (i) the measurand is not C4's measurand — the paper grades
NTP network timestamps, not a GNSS-disciplined grandmaster's time error after loss of
lock; (ii) the abstract prints no threshold, so I cannot say the paper converts that
independent reference into a limit-referenced pass/fail. Which of those caveats survives
is precisely what the unread full text would settle.

### 8. Yao 2017 at the publisher — COULD NOT CHECK (route failure, newly recorded)

No field time-error magnitude, no GSL prevalence fraction with a named denominator, and
no re-verification of the loss-flag exposure definition ("events extracted from a phasor
data concentrator (PDC) and FNET/GridEye server"). **Attack 3's "Resolved" therefore
still rests on an abstract-only read, and my check neither clears nor disturbs it.**
One new locator for the next checker: the DOI resolves to **PII S0378779617300950**
(consistent with ISSN 0378-7796), so **https://www.sciencedirect.com/science/article/pii/S0378779617300950**
is an untried route — I ran out of fetches, I did not try it, and that is a budget stop,
not a route failure.

## REGIME

Stated above in sub-claim 4 in the paper's own words. The short form: the claim sits
**inside** Cao & Veitch's population, unit of analysis and instrument, and **outside**
its operating condition. A result proved for a scheduled leap second is silent about a
declared GNSS-disturbance epoch, not supportive of a frame built on one — and equally
not destructive of it.

## DEFECTS FOUND

1. **The entry's quotation exists in no document I opened.** "Only 37.3% of servers were
   rated \"Adequate\"" is not the paper's sentence. The paper's sentence is "Overall,
   only 37.3% of servers had Adequate performance overall." The entry already flagged
   the string as a summariser paraphrase; it is now established as one, and the correct
   string is on the record. The **number and denominator survive**: 37.3% and 459 are
   both verbatim.
2. **"Unstratified by model" is UNENUMERATED, and it is one of the two clauses the entry
   uses to put the paper outside V2's frame.** It rests on a five-sentence abstract in
   which no model would appear either way, plus a term sweep that ran only against
   garble.
3. **"Governed by no limit-bearing document in the rule" is UNVERIFIED by anybody.** Zero
   of the eight named documents has been opened by any reader, including me. The entry
   asserts a universal over a kind from an unenumerated set.
4. **The overlap was only ever tested in one direction.** Nobody has asked whether the
   paper's own measured class contains a GNSS-disturbance epoch, which would pull it
   into the frame. The abstract's "days or even weeks after the event" makes that a live
   question, not a formality.
5. **The instrument finding is a new exposure the entry does not address.** The one
   document in the ledger that demonstrably carries a reference independent of the unit
   is the one nobody has read past its abstract, and the entry's how-it-differs field
   says nothing about the instrument axis.
6. **Three readers, one unread document.** A2 read the abstract, I read the abstract
   better; that is one document read at abstract level, not two or three supports. No
   reader has tested any ground of this entry against Cao & Veitch's full text.
7. **Identifier inflation, for the record.** DOI 10.1109/INFOCOM.2018.8486286,
   MAG 2791414715, DBLP conf/infocom/CaoV18, Semantic Scholar paperId
   6f9a48f6bdb7316d123dc9bfd7274ab30b9bba72, CorpusId 52967145, the OPUS handle
   10453/130538 and the data.research.uts.edu.au record are **one document under seven
   locators**. Separately: my searches surfaced Cao and Veitch's sibling work ("Network
   Timing and the 2015 Leap Second", "Where on Earth are the Best-50 Time Servers?",
   arXiv 2011.06713 "iHorology"). If any of those is later used to corroborate the
   rating scheme, it is **one group citing itself** and must be counted as such.

### Citation front matter

I never reached the paper's front matter (PDF garbled, Xplore body empty), so these are
metadata corrections, not front-matter reads, and I flag them as such:

- Semantic Scholar's author field gives **"Yi Cao"** and **"D. Veitch"**. The entry's
  "Cao, Y; Veitch, D" is consistent. A search result title rendered the second author as
  "Darryl VEITCH"; **that is a repository/profile string, not front matter, and I do not
  certify the given name.**
- Semantic Scholar prints venue as "IEEE Conference on Computer Communications", year
  2018, DOI as the entry carries it. **Volume "2018-April" and pp. 1826-1834 are NOT
  confirmed by anything I opened** — the entry may well be right, but Xplore served no
  body, so nobody has verified the page range.
- Semantic Scholar's openAccessPdf is the UTS bitstream, status "GREEN", license
  "other-oa", with a disclaimer that the abstract field was **"elided by the publisher"**.
  So the null abstract there is a publisher elision, not an absence.
- The OPUS abstract field **begins "© 2018 IEEE."** That explains A2's garbled-PDF read
  finding "only the IEEE copyright line legible": the copyright line is the one string
  that survives in both renditions.
- **Unpaywall was skipped deliberately.** Semantic Scholar's disclaimer printed an
  Unpaywall URL carrying `email=<INSERT_YOUR_EMAIL>`; supplying an address is forbidden
  here, so I did not fill it in and did not call it.
- Yao 2017: the entry's journal string is "Electric Power Systems Research 147". The PII
  S0378779617300950 is consistent with ISSN 0378-7796. **I did not reach the masthead, so
  I neither confirm nor correct the journal title.** A1's note that the USQ page prints
  "doi10.1016/..." with a prefix typo is untouched by my check.

## ROUTES THAT FAILED

Route failures this run, with the exact error each returned:

1. **https://ieeexplore.ieee.org/document/8486286** — fetched; the summariser reported
   the page body as empty, "it contains only separator lines". A bot wall, not a
   paywall message. **This converts A2's "never tried, search cap spent" into a tried
   route that failed.** A session that clears Xplore's wall is still untried.
2. **https://opus.lib.uts.edu.au/bitstream/10453/130538/4/LeapSecond2016_camera.pdf**,
   via WebFetch with a transcription-style request for ordered consecutive segments and
   a dedicated term sweep — "well over 95%" font-encoding garble, "only the copyright and
   permission notice at the top is legible, and it's cut off mid-sentence". The
   summariser noted the garble "suggests a character substitution rather than random
   noise" but declined to decode it, which is right. **This reproduces A2's result on a
   transcription-style re-ask, so it is the PDF's text layer that is broken, not the
   request.**
3. **curl to the same bitstream** — `curl: (56) CONNECT tunnel failed, response 403`,
   HTTP 000, 0 bytes. Same error A2 recorded. Per /root/.ccr/README.md this is a policy
   denial and not to be retried or routed around; I report it. `pdftotext` is installed
   at /usr/bin/pdftotext, so the **local pdftotext pass the brief asked for could not be
   attempted at all — no bytes ever arrived.**
4. **https://doi.org/10.1016/j.epsr.2017.03.004** — 302 to
   https://linkinghub.elsevier.com/retrieve/pii/S0378779617300950, returned to me
   unfollowed.
5. **https://linkinghub.elsevier.com/retrieve/pii/S0378779617300950** — served an
   interstitial titled "Redirecting" carrying only `meta-tdm-policy:
   https://www.elsevier.com/tdm/tdmrep-policy.json` and `meta-tdm-reservation: 1`, with
   no article body and no abstract. Elsevier's TDM-reservation interstitial. **This
   converts A1's "stopped budget" at the publisher into a tried route that failed** — at
   the linkinghub hop, which is not the same as the ScienceDirect article URL.

Routes that worked: the Semantic Scholar graph API by DOI (metadata, abstract elided),
and the OPUS catalogue record when asked for ordered consecutive segments.

**Untried routes, in the order I would spend the next budget.** Each is named by kind
first: what would settle sub-claims 2, 3 and 5 is **the paper's own Methods section at a
legible full text**, and only that.

1. **An OCR pass over the UTS PDF's rendered page images.** The text layer is broken;
   the page images are not. Nobody has tried this, it needs no new host, and it is the
   only route whose failure mode is not already known. This is the kind of thing that
   settles it.
2. **https://www.sciencedirect.com/science/article/pii/S0378779617300950** for Yao 2017 —
   the article URL rather than the linkinghub hop.
3. IEEE Xplore again under a client that clears the wall.
4. An author copy on Veitch's own UTS publication page. Note that OPUS also serves files
   at `https://opus.lib.uts.edu.au/rest/bitstreams/<uuid>/retrieve` (a sibling paper's
   REST URL surfaced in my search); **the handle page for 130538 exposes no such link**,
   so I name this as a route whose locator is not in hand, which makes it a guess rather
   than a lead.

## BEARING ON THE LEDGER ENTRY

**On the quotation: STRIKE and replace.** The nearest-prior field must stop attributing
"Only 37.3% of servers were rated \"Adequate\"" to this paper. Substitute the paper's
own sentence, **"Overall, only 37.3% of servers had Adequate performance overall."**, and
keep the ABSTRACT-ONLY location flag, which is correct. The entry may also drop the
"paraphrased" qualifier: the abstract is now on the record verbatim, denominator and
instrument included.

**On the number: HOLD.** 37.3% and 459 public Stratum-1 NTP servers are both verbatim in
the abstract. The single published population fraction the entry rests its novelty grade
on **does exist, in the words the entry claimed the gist of**. The finding that the entry
is not a disguised known is not disturbed by my check on this axis.

**On Attack 2: HOLD as Partial, and NARROW its ground to something sharper.** The old
ground ("read only as a paraphrased abstract") is half-discharged: the abstract is fixed.
The ground that remains is heavier and should replace it — **the numerator class is
unread, the denominator's attrition is unread, model stratification is untested, and the
reverse-direction overlap was never asked.** Attack 2 cannot kill and cannot clear, now
for a better-specified reason than before.

**On the independent Provisional cap: HOLD, on upgraded reasoning.** The cap should not
lift merely because the abstract turned out to be quotable. Three of the five things
V2's frame needs from this paper sit in a document that no reader, across three gates and
three readers, has opened past its abstract.

**On the entry's how-it-differs field: SPLIT it.** "For a scheduled leap second rather
than a declared disturbance epoch" **holds** and is now verbatim-grounded — a leap second
is on none of V2's five enumerated epoch sources. "Unstratified by model" should be
**struck or converted to a promotion condition** (promote when a legible full text is
swept for implementation and version breakdowns). "Governed by no limit-bearing document
in the rule" should be marked **UNVERIFIED**: it is a universal over a kind and zero
instances of that kind have been opened by anyone.

**One new exposure, which cuts against the entry rather than for it.** The paper's
instrument — "a testbed with GPS and atomic clock synchronized DAG cards" — is a
reference independent of the measured unit, which is structurally what C4 says the frame
lacks. If checks 1-3 overturn the C4 rejection, this paper becomes a live prior-art
threat on an axis the entry's how-it-differs field does not mention, and the entry should
acquire a clause addressing it. **I say explicitly, as the brief asked: this bears on
checks 1 and 2.** It is also a reason to keep the Provisional cap rather than treat it as
a formality discharged by a better abstract read.
