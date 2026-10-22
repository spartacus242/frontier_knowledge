# VERIFY - EANTC 2026 leap59/UTC-Offset-37 propagation test: one value, no maximum, and a six-versus-seven device count the source cannot settle
Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That EANTC's 2026 interoperability report injects a leap59 event with a UTC Offset of 37
into six vendor boundary clocks, testing a single value and no maximum.

Three limbs, graded separately below: (1) the injected event and its value; (2) the device
count and that the devices are vendor boundary clocks; (3) single value, no maximum.

Verdict: **MOSTLY HOLDS.** Limbs 1 and 3 are confirmed on verbatim text and are, if
anything, stronger than the entry states - the test not only tests one value, it PASSES at
that value, so it is not a failure-mode observation of any kind. Limb 2 is where the entry
overstates its source: "six" is the device table's figure, but the body prose of the same
page says "seven Telecom Boundary Clocks". The source contradicts itself and the entry
reports only one of its two numbers, without noting that it is picking one.

## READ LEVEL

Source is a wiki, not a journal article: no DOI exists to record. Front-matter identity, as
printed, is corporate - no individual authors are served anywhere on the pages I read.

  Corporate author: EANTC AG. Year: 2026. Title, verbatim from the report root page:
  "EANTC Transport & Cloud Networks Interop Test Report 2026". No DOI. No individual author.

1. **Test page** - .../Time Synchronization/Telecom Boundary Clock Class D Holdover Chain
   with Negative Leap Second.
   **READ LEVEL: FULL TEXT** of the test narrative, obtained as ORDERED CONSECUTIVE
   VERBATIM SEGMENTS across two fetches (13 consecutive segments for the setup/result
   paragraph, 4 for the device-count sentence). Two fetches agreed with each other on every
   number. The one thing I could NOT get verbatim is the device TABLE's column structure -
   see ROUTES THAT FAILED.

2. **Section index page** - .../Time Synchronization.
   **READ LEVEL: PARTIAL** - section narrative sentences, the subsection headings, and the
   13-item executed-test list. Served as sub-125-character fragments.

3. **Report root page** - .../EANTC Transport & Cloud Networks Interop Test Report 2026.
   **READ LEVEL: PARTIAL** - title, scope, vendor/device counts, event and staging dates
   only. I did not read the report's other sections.

4. **The 12 sibling test pages** in the Time Synchronization section.
   **NOT READ** - deliberately, to stay inside budget. This is the one residual on
   sub-claim (e)'s word "anywhere"; it is a limit on my read, NOT a negative finding. None
   of the 12 is titled for leap seconds, and the section index page prints no numeric offset
   value at all, so the residual is small but real.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The report exists; title and date

Confirmed to exist. Title verbatim from the root page: **"EANTC Transport & Cloud Networks
Interop Test Report 2026"**.

**No publication date is printed.** The root page prints no date and no "as of" date; the
only year on it is the 2026 in the title. What it does print:

- "the 12 leading vendors participating this year"
- "with 56 device types"
- "From January 26 to February 6" (hot-staging in Berlin; **no year printed** alongside)
- "The test results will be presented live at the Upperside World Congress" - Paris,
  "March 24-26"; the page notes the event was previously the "MPLS World Congress"

So the report is datable to 2026 only from its own title, and its testing window to
26 Jan - 6 Feb of an unprinted year. Treat "2026" as the title's year, not a printed
publication date.

### (b) The leap-second test: event injected, UTC Offset value, device count

RECONSTRUCTION from 13 ordered consecutive segments, single fetch, junctions verified; no
string completed by inference:

  "The T-GM was manipulating the time to 31st of December, 23:40:00, right before a leap
  second event, and sending announce messages with the leap59 flag set to true, which is
  required to announce a negative leap second, and UTC Offset being set to 37. Once the time
  reached 23:55:00, we disconnected the link between the T-GM and T-BC-1, causing the whole
  chain to enter holdover; this was done to see how the nodes behave and process the announce
  message flags once the negative leap second occurs; If this were not done, the T-GM would
  process the information of the negative leap second, set leap59 to false and set UTC Offset
  to 36 by itself; every following T-BC would then simply receive and forward the announce
  message, which would not show whether they processed it properly themselves. Once the leap
  second event happened, so time jumped from 23:59:58 to 00:00:00, all T-BCs showed that
  leap59 was set to false and that UTC Offset had been set to 36, the correct expected
  behaviour, as verified using the Calnex Paragon neo and the Keysight Time Sync Analyzer."

**Event injected: leap59 = true** (a negative leap second), announced in PTP Announce
messages by an emulated T-GM. **UTC Offset value: 37**, transitioning to **36**.
Both numbers printed in the sentences above. Units: seconds. This is the PTP
`currentUtcOffset` carried in Announce - see REGIME for why that is not UT1-UTC.

**Device count - the source gives TWO answers and they disagree.**

Body prose, RECONSTRUCTION from 4 ordered consecutive segments:

  "For this test, we prepared a setup using an emulated Telecom Grandmaster (T-GM), the
  Calnex Paragon neo, which was also capturing the announce messages at the end of the
  chain, followed by **seven** Telecom Boundary Clocks, each connected to the Keysight Time
  Sync Analyzer to capture the announce messages."

Device list, **six** T-BC entries, each a different vendor:

  Ericsson RAN Connect 6682; Microchip Time Provider 4500; ZTE ZXR10 M6000-2S16;
  HPE PTX10002-60MR; Cisco 8011-4G24Y4H-I; Ciena 8192

Also listed: Telecom Grandmaster = Calnex Paragon neo (emulated, test equipment, not a DUT);
Frequency/Phase Analyzers = Calnex Paragon neo and Keysight Time Sync Analyzer.

Both fetches independently reported the prose number as "seven" and the list as six entries,
and the second explicitly flagged the page as internally inconsistent. I am confident the
discrepancy is in the SOURCE, not in the summariser.

### (c) Any other offset value, or a sweep toward a maximum?

**No.** Only 37 -> 36. Both fetches of the test page returned this; the second put it
flatly: no other offset values are tested, no sweep, no range. The section index page prints
**no numeric UTC offset value at all** ("No numeric UTC offset value (such as 37 or 36)
appears"), and of the 13 executed tests it lists, exactly one is the negative-leap-second
test. Residual: the 12 sibling pages were not opened (see READ LEVEL item 4).

### (d) Any failure reported, and of what kind?

**No failure of any kind.** The test is a **PASS**: "all T-BCs showed that leap59 was set to
false and that UTC Offset had been set to 36, **the correct expected behaviour**". No
saturation, no wrap, no rejection, no undefined behaviour is reported in the tested setup.

The only "unknown" language on the page is prospective, about the world rather than the
devices - the section narrative says the effects of negative leap seconds on computer
systems and networks were still unknown before this test, and that "To date, there has been
no recorded instance of a negative leap second".

Note the section narrative's own framing of why PTP is the safe layer here:
"Since PTP itself is not affected by leap seconds" and "as leap seconds only affect UTC
time, not TAI". The test is of flag-and-offset PROPAGATION, not of arithmetic under a large
offset. The hedged statement of the endpoint is the section index's: the test checked that
"the flags and the carried UTC offset value in the Announce messages were properly set and
removed".

### (e) Any maximum representable or maximum correctly-propagated offset?

**Not stated anywhere on the three pages I read.** No maximum representable offset, no
maximum correctly-propagated offset, for any of the six (or seven) devices or for the
profile. No field width, no bit count, no LSB, no encoded range. Confirmed on both fetches
of the test page and on the section index.

PUBLISHED IS NOT PERFORMED: the report **DEMONSTRATES** correct propagation at one value.
It does not MEASURE, BOUND or even ANNOUNCE a maximum. There is no quantity here to compare
against a maximum, because no maximum is in the document.

## REGIME

**EANTC 2026, in its own words.** Population: network equipment submitted by "the 12 leading
vendors participating this year", "with 56 device types", at a multi-vendor interop event
hot-staged in Berlin "From January 26 to February 6". Unit of analysis: the device - one
Telecom Boundary Clock as a node in a chain. Operating condition: an emulated T-GM
(Calnex Paragon neo) with time manipulated to "31st of December, 23:40:00"; the T-GM link
cut at "23:55:00" so "the whole chain" enters holdover and each T-BC must process the event
itself rather than forward a pre-digested Announce; ITU-T Class D telecom boundary clocks.
Instrument: Calnex Paragon neo and Keysight Time Sync Analyzer, capturing Announce messages.
Threshold: "the correct expected behaviour" = leap59 false and UTC Offset 36 after the event.
Category: interop conformance, pass/fail.

**Does the claim sit inside it?** For limbs 1 and 3, yes. For limb 2's "six", only on the
device table; the prose says seven. For anything about a MAXIMUM, the claim sits entirely
OUTSIDE this regime - and correctly so, since the claim asserts the absence of a maximum,
which is what I found.

**NUMERATOR CLASS AND DENOMINATOR of the number that looks like the claim's.**

The source prints 37 and 36. A reader could mistake these for the |UT1-UTC| magnitudes the
routing row cares about. They are a different quantity.

- **Numerator class:** the PTP `currentUtcOffset` carried in Announce messages - i.e. the
  **UTC-TAI leap-second count**, 37 s going to 36 s. The source's own exclusion, quoted:
  "as leap seconds only affect UTC time, not TAI", and "Since PTP itself is not affected by
  leap seconds". So the field tracks the integer leap count, nothing else.
- **Denominator**, checked against the near neighbours it is not: the T-BC chain - six named
  devices by the table, "seven" by the prose. NOT the event's 56 device types, NOT its 12
  vendors, NOT the 13 executed Time Synchronization tests.
- **Overlap, both directions.** What the source's class **MISSES**: it never varies the
  offset, never approaches any field boundary, never reports a maximum, and never touches
  UT1-UTC at all - UTC-TAI (an integer leap count, frozen under continuous UTC) and UT1-UTC
  (the 3 600 s threshold quantity) are different quantities, so 37 is not a small instance
  of the routing row's estimand, it is a value of a neighbouring field. What the source
  **INCLUDES that the claim excludes**: a deliberate holdover dimension (link cut at
  23:55:00 so autonomous processing, not forwarding, is what is graded) and test equipment
  (Calnex, Keysight) sitting in the same device list as the DUTs. The entry's "no UT1-UTC
  value" is therefore correct and load-bearing; 37 is one word away from the claim's
  quantity and is not it.

## DEFECTS FOUND

1. **"Six" is one of the source's two device counts, and the entry does not say so.** The
   device table names six T-BCs from six vendors; the body prose of the same page says
   "followed by seven Telecom Boundary Clocks". The entry asserts six flatly - "six named
   boundary clocks", "six vendor boundary clocks", "one injected value on six vendor
   devices" - in at least four places, with no note that the prose disagrees. Six is the
   better-evidenced figure (six vendors are actually named; the seventh is named nowhere),
   but the entry should carry it as "six named devices, though the page's prose says seven".

2. **The entry's quotation of the injection is an unmarked elision.** The entry renders it
   as `"leap59 set to true and UTC Offset set to 37"`. The page reads: "with the leap59 flag
   set to true, **which is required to announce a negative leap second,** and UTC Offset
   **being** set to 37." The entry drops an intervening relative clause without ellipsis and
   silently normalises "being set to" to "set to". The meaning survives intact - this is
   hygiene, not substance - but it is presented in quotation marks as verbatim and is not.

3. **CITATION CORRECTION: the entry's own source note is wrong about where the year comes
   from.** The entry records the EANTC source with "year taken from the URL path and not the
   page body". It is printed in the page body: the report root page prints the title
   "EANTC Transport & Cloud Networks Interop Test Report 2026". The caveat should be dropped.
   A different and real caveat replaces it: no PUBLICATION DATE is printed anywhere I read,
   and the staging dates "From January 26 to February 6" carry no year.

4. **CITATION CORRECTION: short-form title.** The entry calls it "EANTC Interop Test Report
   2026". Full printed title: "EANTC Transport & Cloud Networks Interop Test Report 2026".

5. **The entry undersells its own point on (d), in the direction that favours it.** The
   entry says "no saturate, wrap, reject or undefined outcome was observed". True, but the
   stronger and more exact statement is available: the test **passed** - "the correct
   expected behaviour". The EANTC result is not an inconclusive probe near a limit; it is a
   clean pass nowhere near any limit. This strengthens the entry's "nothing was executed [to
   failure]" finding and should be stated as a pass.

6. **Minor, not load-bearing, flagged for honesty:** the two pages give different figure
   numbers for what may be the same subject - the test page carries "Figure 98: Class D T-BC
   holdover chain with negative leap second - Test bed setup", the section index "Figure 88
   ... Negative Leap second in a chain of class D T-BCs". Most likely two genuinely
   different figures on two different pages. I did not spend a fetch resolving it.

## ROUTES THAT FAILED

Nothing was blocked. All four fetches succeeded on the first attempt. No search was run, so
no search was refused. Partial failures of READ, not of route:

- **The device table's column structure could not be obtained verbatim.** The summariser
  returned the headings concatenated - "Telecom GrandmasterTelecom Boundary ClocksFrequency/
  Phase Analyzers" - and stated that the entry-to-label mapping was its own inference and
  that the list layout was not preserved in the source. So: the six device NAMES are
  verbatim and the count of six entries is reliable, but their assignment to the "Telecom
  Boundary Clocks" column is INFERRED, not read. It is a well-supported inference (the three
  analyzer/T-GM entries are all Calnex or Keysight; the six vendor boxes are all network
  equipment), but it is not verbatim and limb 2 rests on it.
- **The 12 sibling test pages were not opened**, by budget choice. Sub-claim (e)'s
  "anywhere" is therefore checked across three pages, not the whole report.

## BEARING ON THE LEDGER ENTRY

**HOLD, with one narrowing.** The routing row's tractability tier survives, and the two
properties it rests on are confirmed on verbatim text:

- **"Exists today at one value"** - CONFIRMED, and should be upgraded to "passes at one
  value". leap59 = true with UTC Offset 37 -> 36, injected by an emulated T-GM, propagated
  through a chain in deliberate holdover, verified on two independent analyzers, all devices
  showing "the correct expected behaviour".
- **"Uncensused at any maximum"** - CONFIRMED on the pages read. No other offset value, no
  sweep, no range, and no statement of a maximum representable or maximum
  correctly-propagated offset for any device, anywhere in the three pages. Residual: 12
  sibling test pages unopened, none titled for leap seconds, and the section index prints no
  numeric offset at all.

**The narrowing.** Every "six" in the entry should become "six named devices (the page's
prose says seven)". This does not touch the tier: whether six or seven boundary clocks
propagated one value correctly, the result is still a single-value pass with no maximum, and
the routing row's distinction - "a declared failure-mode alphabet swept to each type
boundary ... rather than one injected value on six vendor devices" - holds either way. But
the entry currently reports a contested count as settled, and a checker reading the source
will find the contradiction in the same paragraph it took the quote from.

**One thing the entry gets right that is worth protecting.** The entry's note that EANTC
carries "no UT1-UTC value" is doing real work and is correct. The 37 is the PTP
`currentUtcOffset` - the UTC-TAI integer leap count, which the page itself scopes with "leap
seconds only affect UTC time, not TAI". It is NOT a small instance of the |UT1-UTC|
magnitude the 3 600 s threshold governs. Anyone tempted to read EANTC's 37 as evidence about
representable |UT1-UTC| is reading a neighbouring field. The entry's classification of this
source as "prior art for the METHOD and for the standing mechanism, not for the quantity"
is, on my read, exactly right.

**Net:** no attack is struck or reversed by this check. Attack 2's grading (EANTC as the
method neighbour, propagation at one value, no maximum) stands. The falsification of
reason-for-silence leg 1 stands - an independent lab did publish six named vendors'
leap-second behaviour. The vulnerability paragraph's "tests a single value (37 -> 36) and no
maximum at all" stands, and gains force once "no failure observed" is stated as what it is:
a pass.
