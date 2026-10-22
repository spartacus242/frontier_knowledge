# VERIFY - TF.2511-0 section 6 could not be read; its table of contents already contradicts the "per dissemination service / which parameter" reading

Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

That Report ITU-R TF.2511-0 (2022), sections 6.1 to 6.16, shows per dissemination
service whether the carried parameter is DUT1 (UT1-UTC) or the leap count (UTC-TAI),
and at what magnitude.

Source as the entry carries it: Report ITU-R TF.2511-0 (2022), "Impact of a continuous
reference time scale on radiocommunication services" or similarly titled - the ITU
publication page (itu.int/pub/R-REP-TF.2511) and any open PDF mirror. The entry read
only the table of contents and records that the string "DUT1" is absent from the TOC.

Record of the source by front matter (ITU publications carry no DOI):
ITU Radiocommunication Sector (ITU-R), Radiocommunication Study Group 7 ("managed by
SG07" on the publication page), 2022. Report ITU-R TF.2511-0 (10/2022). No DOI issued.
There is no personal first author; the front matter is institutional, and I take the
attribution from the publication page and PDF cover, not from any short label.

## READ LEVEL

- Report ITU-R TF.2511-0, ITU publication page (https://www.itu.int/pub/R-REP-TF.2511):
  FULL TEXT of the catalogue record. Gave the full printed title, the edition and date
  ("edition TF.2511-0, dated 10/2022"), status "In force", and the fact that the page
  carries no direct PDF link.
- Report ITU-R TF.2511-0, PDF
  (https://www.itu.int/dms_pub/itu-r/opb/rep/R-REP-TF.2511-2022-PDF-E.pdf):
  PARTIAL. Cover and front matter, the COMPLETE table of contents (sections 1-8 plus
  Annexes 1-4, including all sixteen headings 6.1-6.16), and body text from section 1
  through to a point inside section 5.2 "Time metrology and traceability", where the
  text the converter delivers stops mid-sentence. Read across three windows
  (offset 0, offset 85000, offset 115000).
- Report ITU-R TF.2511-0, SECTION 6 BODY TEXT: **COULD NOT READ.** This is a route
  failure, not a finding about the report. Both the offset-85000 and the offset-115000
  windows terminated at the same place inside section 5.2, each described by the
  converter as cut off mid-sentence; a later offset therefore buys nothing, because the
  extracted text itself ends there. Sections 5.3 through 8 and all four Annexes are
  likewise unread.
- Report ITU-R TF.2511-0, .docx edition
  (https://itu.int/dms_pub/itu-r/opb/rep/R-REP-TF.2511-2022-MSW-E.docx):
  COULD NOT READ. WebFetch returned "this page's text is 13 characters long" - the tool
  does not unpack Office zip containers.

I did NOT reach section 6. Sub-claims (b), (c), (d), (e) and (f) are therefore
**COULD NOT CHECK** as against section 6, and I mark them so below rather than reading
the silence of an unread section as a negative. Where I can report a true negative over
the range I actually read (sections 1 to 5.2), I say so and bound it to that range.

## WHAT THE SOURCE SAYS (quotations as served)

**Printed title (front matter).** The summariser caps verbatim quotation at about 125
characters, so the title came back as three segments. The following is A RECONSTRUCTION
FROM THREE ORDERED CONSECUTIVE SEGMENTS, assembled only from consecutive returns, with
the junctions verified and nothing completed by inference:

> "Content and structure of time signals to be disseminated by radiocommunication
> systems" + "and various aspects of current and potential future reference time scales"
> + "including their impacts and applications in radiocommunication"

The PDF cover reads "Report ITU-R TF.2511-0 (10/2022)".

**The heading of section 6, as printed in the table of contents:**

> "Impact of a possible change of UTC to a continuous time scale in radiocommunication
> services, technology, science and other applications"

**The sixteen subsection headings, as served from the table of contents.** These are the
headings only; I reached none of their body text.

- 6.1 "Impact on radionavigation-satellite service"
- 6.2 "Impact on mobile-satellite service, fixed-satellite service and broadcasting-satellite service"
- 6.3 "Impact on the mobile service"
- 6.4 "Impact on the radio astronomy service"
- 6.5 "Impact on the maritime mobile service, including global maritime distress and safety service (GMDSS), aeronautical mobile service and radiodetermination service"
- 6.6 "Impact on Maritime navigation"
- 6.7 "Impact on Astronomy"
- 6.8 "Impact on Geodesy"
- 6.9 "Impact on radio sciences"
- 6.10 "Impact on Time metrology and traceability"
- 6.11 "Impact on IT and Industry 4.0"
- 6.12 "Impact on digital systems"
- 6.13 "Impact on the time-stamping service"
- 6.14 "Impact on financial services"
- 6.15 "Impact of a continuous international reference for time on the IERS and EOP users"
- 6.16 "Impact on other applications"

I confirm the entry's observation that no parameter name appears in the table of
contents: no heading in section 6 contains "DUT1", "UT1", "leap" or "TAI".

**The one place DUT1 was actually served to me - and it is NOT in section 6.** From
section 4.3.1, inside the range I read:

> "contains the DUT1 (the offset between UT1 and UTC with a resolution of 0.1 s)"

GRAMMAR ON BOTH SIDES OF THE CUT: this fragment begins with a verb whose SUBJECT I never
received. I do not know which dissemination system or signal format "contains the DUT1"
here. The fragment establishes that section 4.3.1 names DUT1 and attaches "a resolution
of 0.1 s" to it; it does not tell me whose format that is, and I will not guess.

**A cross-reference that locates section 6.13's subject matter.** The converter reported
that section 4.3.2 "points to 'Section 6.13' for leap-second issues in digital systems".
That is the converter's wording, not a verbatim quote, and I treat it only as evidence
that leap-second handling in digital systems is discussed at 6.13.

**The only numeric magnitudes in seconds served to me, both OUTSIDE section 6:**

From section 5.1.10 (financial services):
> "The maximum tolerated divergence from UTC ranges from 1 ms to 100 µs"

From section 5.2 (time metrology and traceability):
> "Time comparison uncertainties of better than 20 ns for widely separated sites are"

GRAMMAR ON BOTH SIDES OF THE CUT: the 20 ns line is severed by the end of the extracted
text - its predicate is missing, so what is asserted of those uncertainties is unknown.
I treat it as unusable for any claim and record it only to show where my read stopped.

**True negative, bounded to sections 5.1.8-5.2 only.** For the offset-115000 window the
converter reported that it "contains no sentence saying the leap second count or TAI-UTC
offset would become constant, fixed, frozen, or unaffected" and "no count, percentage,
or survey/census call about affected systems". That is a negative over roughly sections
5.1.8 to 5.2, nothing more. It says nothing about section 6 or section 7.

**Other table-of-contents items bearing on the entry, all unread:** 3.2 "Motivation for
changing the leap-second procedure"; 3.3 "Description of potential future reference time
scales"; 4 "Systems for dissemination of time signals" with 4.1 Introduction, 4.2
"Radiocommunication services", 4.3 "Other dissemination systems"; 7 "Conclusion /
Summary of relevant issues considered in this Report"; Annex 4 "Letter addressed from
industries to the BR Director accompanying a petition to consider the discontinuation of
the insertion of leap seconds in UTC".

## REGIME

The report's own regime, in its own words from the printed title: its population is
"time signals to be disseminated by radiocommunication systems"; its unit of analysis
is the "content and structure" of those signals, together with "current and potential
future reference time scales"; and its declared output is "their impacts and
applications in radiocommunication". Section 6's regime, from its own heading, is
narrower and conditional: the "Impact of a POSSIBLE change of UTC to a continuous time
scale" - a prospective, hypothetical operating condition - and its stated domain runs
well past radiocommunication, to "radiocommunication services, technology, science and
other applications".

Whether the claim sits inside that regime: PARTLY, and the fit is worse than the entry
assumes. The claim asserts a per-dissemination-service mapping to a carried parameter.
The report does have a regime for that - but it is section 4, "Systems for dissemination
of time signals", whose unit of analysis is the signal and its content and structure,
and which is where the one DUT1-with-a-magnitude line I actually reached (4.3.1) sits.
Section 6's unit of analysis is not a signal format but an IMPACTED DOMAIN, and ten of
its sixteen subsections - 6.6 Maritime navigation, 6.7 Astronomy, 6.8 Geodesy, 6.9 radio
sciences, 6.10 Time metrology and traceability, 6.11 IT and Industry 4.0, 6.12 digital
systems, 6.13 time-stamping service, 6.14 financial services, 6.15 IERS and EOP users,
6.16 other applications - are not dissemination services at all. Only 6.1-6.5 are named
radiocommunication services. A per-service parameter inventory is not the thing section
6 is organised to be, on the evidence of its own headings.

I state plainly that this is a regime argument from the table of contents. A subsection
headed by a domain can still discuss which parameter that domain consumes. I could not
read the body, so I am narrowing the claim's likely location, not refuting its content.

## DEFECTS FOUND

**1. The citation's title is not the report's title; it is approximately section 6's
heading.** The entry carries the source as "Impact of a continuous reference time scale
on radiocommunication services" or similarly titled. The front matter reads "Content and
structure of time signals to be disseminated by radiocommunication systems and various
aspects of current and potential future reference time scales, including their impacts
and applications in radiocommunication". The entry's string is much closer to the
heading of section 6, "Impact of a possible change of UTC to a continuous time scale in
radiocommunication services, technology, science and other applications". This is not
cosmetic: a reader who takes the entry's title at face value will think the whole report
is an impact study of a continuous time scale, when the printed title announces that its
primary subject is the CONTENT AND STRUCTURE of disseminated time signals - which is
precisely the per-format material legs (b) and (c) need, and it is promised in the title
and delivered in section 4, not section 6. The entry has aimed at the wrong section.

**2. The claim is a claim about body text, and the body text is unread by me and, on the
entry's own admission, by the three prior agents.** Nobody in this chain has read section
6. The claim as written ("shows per dissemination service whether the carried parameter
is...") is stated with the confidence of a read. It should carry the read level it
actually has.

**3. "At what magnitude" is, so far as anything anyone has read, unsupported - and the
nearest number is a different quantity.** Per PUBLISHED IS NOT PERFORMED: I can name no
maximum |UT1-UTC| anywhere in what I read. The only DUT1 number served to me is "a
resolution of 0.1 s" at section 4.3.1. A RESOLUTION IS NOT A MAXIMUM. It is the
quantisation step of the encoding, not the largest offset the encoding can represent, and
not a value at which a service breaks. Taking the 0.1 s as the claim's "magnitude" would
be a number one word away from the claim's and a different quantity.

The same applies, more sharply, to the other numbers I reached. Numerator and denominator
for "The maximum tolerated divergence from UTC ranges from 1 ms to 100 µs" (section
5.1.10): the NUMERATOR CLASS is tolerated clock divergence from UTC for financial-services
timekeeping - how far a participant's clock may sit from UTC - and the DENOMINATOR is
financial-services regulatory tolerance, not any signal format's encoding field. OVERLAP
IN BOTH DIRECTIONS: what the source's class MISSES relative to the claim - every
broadcast signal format, every DUT1 encoding field, every radionavigation frame, and the
leap count entirely; what it INCLUDES that the claim excludes - clock-synchronisation
accuracy requirements on trading venues, which have nothing to do with which parameter a
dissemination service carries. Near neighbours it is NOT: it is not a bound on |UT1-UTC|,
not a DUT1 encoding range, and not a breaking point under a continuous time scale. On the
evidence in hand the report BOUNDS a financial timing tolerance; it does not MEASURE the
claim's magnitude.

**4. The entry's inference from the absent TOC string is sound as far as it goes, and the
entry should keep it that modest.** "DUT1" is indeed absent from the table of contents -
I confirm it. But the string IS present in the body at 4.3.1. A TOC absence is evidence
about headings, not about a document, and the entry should not be read as having
established that the report is thin on DUT1.

## ROUTES THAT FAILED

- `curl` to https://www.itu.int/dms_pub/itu-r/opb/rep/R-REP-TF.2511-2022-PDF-E.pdf:
  `curl: (56) CONNECT tunnel failed, response 403`. Per /root/.ccr/README.md a 403 from
  the proxy is a policy denial that must be reported and not retried or routed around, so
  I did not retry it. Consistent with the brief's note that a curl 403 here is
  tool-scoped: WebFetch reached the same URL without trouble. The consequence is that I
  could not download the PDF and run the locally available `pdftotext` over it, which
  would have bypassed both the summariser and its 125-character quotation cap and is by
  far the route most likely to deliver section 6. **This is the single blocker to
  settling the claim, and it is an environment limit, not a property of the document.**
- WebFetch on the PDF at offset 85000 and again at offset 115000: both windows terminate
  inside section 5.2, each reported as cut off mid-sentence. The extracted text ends
  there, so paging further forward returns nothing new. Sections 5.3-8 and Annexes 1-4
  are beyond what this converter delivers for this file.
- WebFetch on the .docx edition at
  https://itu.int/dms_pub/itu-r/opb/rep/R-REP-TF.2511-2022-MSW-E.docx:
  "Nothing left to read from offset 130000: this page's text is 13 characters long." The
  tool does not unpack Office zip containers, so the offset was never the issue.
- The ITU publication page carries no direct PDF link at all ("The page has no direct PDF
  link for this report"), so the working PDF and .docx URLs came from the one web search.

A route a successor should try, with budget to spare: fetch the PDF through whatever
mechanism can write it to disk, then `pdftotext` it - `/usr/bin/pdftotext` and
`/usr/bin/pdftohtml` are both installed here. Failing that, the .docx is a zip and
`python3 -I` can read `word/document.xml` out of it directly. Either route would deliver
section 6 whole and lift the quotation cap.

## BEARING ON THE LEDGER ENTRY

**Bearing: CONVERT TO A PROMOTION CONDITION, and NARROW the pointer. Do not strike, and
do not let it stand as written.**

On the claim itself: COULD NOT CHECK. I reached the complete table of contents and the
body through section 5.2, and no further. The entry's central assertion - that sections
6.1-6.16 show, per dissemination service, which parameter is carried and at what
magnitude - is about body text that neither I nor, by the entry's own record, any of the
three prior agents has read. It must carry that read level explicitly. An unread
section's silence is not evidence in either direction, and nothing here licenses striking
the claim.

What I can settle, and it matters: **the entry has aimed legs (b) and (c) at the wrong
section.** The report's printed title announces "Content and structure of time signals to
be disseminated by radiocommunication systems" as its primary subject, and that material
is section 4, "Systems for dissemination of time signals". The one DUT1 line anyone in
this chain has actually read comes from section 4.3.1, with "a resolution of 0.1 s"
attached. Section 6, by contrast, is organised by impacted domain, and only 6.1-6.5 name
radiocommunication services - 6.6 through 6.16 cover maritime navigation, astronomy,
geodesy, radio sciences, metrology, IT, digital systems, time-stamping, financial
services, IERS/EOP users and "other applications". So for leg (c)'s reach - how much of
the frame carries UT1-UTC - the entry should be re-pointed at **section 4** (and, beyond
this report, at Rec. ITU-R TF.460, which is where DUT1 encoding is actually specified; I
did not read it and name it only as the obvious next source, not as support). Section 6
remains the right place to look for leg (b), whose question is what a continuous time
scale does to each domain.

On the sub-claims, so the entry records exactly what was and was not tested:
- (a) Read level: PARTIAL on the PDF - cover, full TOC, body through section 5.2. Section
  6 body text: COULD NOT READ.
- (b) COULD NOT CHECK. I can list all sixteen headings verbatim, and they are impact-by-
  domain, naming no parameter. I reached no 6.x body text, so I matched no service to a
  parameter.
- (c) COULD NOT CHECK for section 6. Bounded negative for sections 1-5.2: **no maximum
  |UT1-UTC| is printed there, and no magnitude at which a service breaks.** The only
  DUT1 number is "a resolution of 0.1 s" at 4.3.1, which is a quantisation step, not a
  maximum. On the evidence in hand the report DEFINES DUT1's encoding resolution; it does
  not BOUND or MEASURE the claim's magnitude.
- (d) COULD NOT CHECK. Nothing in sections 1-5.2 states that the leap count or UTC-TAI is
  frozen or unaffected under a continuous time scale. Leg (b)'s premise is therefore still
  untested against this source - neither confirmed nor refuted. Sections 3.2 "Motivation
  for changing the leap-second procedure" and 3.3 "Description of potential future
  reference time scales" are the other unread places where it would plausibly be said.
- (e) COULD NOT CHECK, and this is the sub-claim the entry most needs settled. I found no
  share or count of affected services, formats or implementations anywhere in what I read,
  and the offset-115000 window explicitly reported none over roughly sections 5.1.8-5.2.
  But sections 6 and 7 - the impact survey and the "Conclusion / Summary of relevant
  issues considered in this Report" - are exactly where such a tally would live, and both
  are unread. **I cannot yet rule out that the candidate is a disguised known**, and the
  entry should not claim presupposition failure until section 7 in particular has been
  read. That is the sharpest reason to re-open this with a working route.
- (f) COULD NOT CHECK. Whether the report cites or calls for an inventory of the kind the
  candidate proposes is unknown; I saw no such call in sections 1-5.2. Section 7 and Annex
  4 (the industry petition letter) are the unread candidates.

Promotion condition I would set: the entry stays open, with its read level corrected to
"table of contents plus body through section 5.2, section 6 unread", and promotes only
when someone has read **sections 6.1-6.16 and section 7** from a text extraction that
reaches them - which here means getting the PDF onto disk for `pdftotext`, or unzipping
the .docx, rather than another WebFetch. Until then the entry should also drop the
report-title string it is carrying, which belongs to section 6's heading, and replace it
with the printed title.
