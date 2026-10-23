# VERIFY - FDSN availability: the document kind instantiated at three live endpoints, two confirming and one a counter-instance
Checker: fresh context. Budget used: 7 WebFetch, 0 WebSearch. Date 2026-10-23.

## CLAIM

Entry, "Presuppositions" (1): "per-channel availability records retrievable at resolution finer than
w=15 min and T=1 h", with the half "which networks implement it UNVERIFIED (NCEDC, SCEDC, RESIF
instances returned, none opened; no IMS implementation opened)".

Entry, "Promotion requires" (ii): "open at least one live FDSN availability implementation
(service.ncedc.org, service.scedc.caltech.edu or ws.resif.fr) for a named network plus one IMS or
ANSS availability record, and establish that gap intervals are retrievable at sub-15-minute
resolution over an arbitrary window, which lifts well-posedness toward 3/3".

Entry, contested clause (adversary #3, clause C5): "that archive gaps equal operational downtime -
the spec's `show=latestupdate` reports when data 'were loaded into the repository' and does not say
whether availability covers archive holdings or real-time status".

LOGICAL FORM OF (ii), checked as handed to me: it is a CONJUNCTION of three NECESSARY conditions -
(a) one live implementation for a named network, "plus" (b) one IMS or ANSS availability record,
"and" (c) gap intervals retrievable at sub-15-minute resolution over an arbitrary window. It is not
a disjunction, and (a) is not sufficient for it. Meeting (a) and (c) therefore does not discharge
(ii). The "or" inside (a) is a disjunction over the three hosts only.

## READ LEVEL

The three endpoints the entry records as "RETURNED BY SEARCH, NOT OPENED BY ANYONE; no route was
tried... the budget ran out rather than the route failing" were tried first, as instructed. All
three hosts are live and none is blocked at this proxy.

1. ws.resif.fr/fdsnws/availability/1/query?net=G&sta=SSB&cha=BHZ&starttime=2024-01-01T00:00:00
   &endtime=2024-01-08T00:00:00&format=text - FULL TEXT of the response body, verbatim, all 5 lines
   (header + 4 data rows). No route failed.
2. service.ncedc.org/fdsnws/availability/1/query?net=BK&sta=CMB&cha=BHZ&loc=00
   &starttime=2024-01-01T00:00:00&endtime=2024-01-08T00:00:00&format=text - PARTIAL. Two fetches.
   The first was served as a summariser PARAPHRASE only (12 data rows reported, no stamps); on
   re-ask in transcription style ("output only the first four lines... then the last two lines") the
   header and 5 data rows came back verbatim. Rows 4-10 of ~12 were NOT transcribed. The refusal was
   a fact about my first request, not about the document - the second request was served.
3. service.scedc.caltech.edu/fdsnws/availability/1/ (service landing page) - PARTIAL, summariser-
   served, sentences quoted under named headings; not a verbatim whole-page read.
4. service.scedc.caltech.edu/fdsnws/availability/1/query?net=CI&sta=PASC&cha=BHZ
   &start=2019-01-01T00:00:00&end=2019-01-03T00:00:00&format=text - FULL TEXT of the response body,
   verbatim, all 3 lines (header + 2 data rows).
5. The FDSN fdsnws-availability v1.0 specification - NOT RE-OPENED. The entry records it at full
   text by two readers and tells me not to re-open it except to settle a disagreement. I rely on no
   quotation from it that the entry does not already carry.
6. An IMS availability record - NOT READ AT ANY LEVEL, NO ROUTE TRIED. The 7-fetch budget was spent
   on the three endpoints. This is BUDGET EXHAUSTED, not a route failure, and it is not a negative
   finding about the IMS.

## WHAT THE SOURCE SAYS (quotations as served)

### RESIF, ws.resif.fr/fdsnws/availability/1/query, net=G sta=SSB cha=BHZ (verbatim, complete)

```
#Network Station Location Channel Quality SampleRate Earliest                    Latest
G        SSB     00       BHZ     Q       20.0       2024-01-01T00:00:00.000000Z 2024-01-08T00:00:00.000000Z
G        SSB     10       BHZ     Q       20.0       2024-01-01T00:00:00.000000Z 2024-01-01T00:00:05.600000Z
G        SSB     10       BHZ     Q       20.0       2024-01-01T00:00:05.650001Z 2024-01-02T00:00:12.100000Z
G        SSB     10       BHZ     Q       20.0       2024-01-02T00:00:12.150001Z 2024-01-03T00:00:10.450000Z
G        SSB     10       BHZ     Q       20.0       2024-01-03T00:00:10.500001Z 2024-01-08T00:00:00.000000Z
```

Keys printed: Network, Station, Location, Channel, Quality, SampleRate. Stamps to SIX decimals
(microsecond). Spans are clipped to my arbitrary chosen window at both ends.

MY OWN ARITHMETIC on the printed stamps, carrying no uncertainty because the source states none:
the three discontinuities in location 10 are 00:00:05.600000Z -> 00:00:05.650001Z,
00:00:12.100000Z -> 00:00:12.150001Z and 00:00:10.450000Z -> 00:00:10.500001Z, i.e. 0.050001 s each.
The printed SampleRate is 20.0, so one sample interval is 1/20.0 = 0.05 s. These are ONE-SAMPLE
tears, not outages.

### NCEDC, service.ncedc.org/fdsnws/availability/1/query, net=BK sta=CMB loc=00 cha=BHZ (verbatim, 5 of ~12 rows)

```
# Network Station Location Channel Quality SampleRate Earliest Latest
BK CMB 00 BHZ D 40.0 2024-01-01T07:21:06.5945Z 2024-01-01T07:26:42.9445Z
BK CMB 00 BHZ D 40.0 2024-01-01T07:29:48.9945Z 2024-01-01T07:33:18.4445Z
BK CMB 00 BHZ D 40.0 2024-01-01T13:14:50.8945Z 2024-01-01T13:18:15.5695Z
BK CMB 00 BHZ D 40.0 2024-01-06T22:34:50.5695Z 2024-01-06T22:37:25.9695Z
BK CMB 00 BHZ Q 40.0 2024-01-01T00:00:00.0195Z 2024-01-07T23:59:59.9945Z
```

Stamps to FOUR decimals (0.1 ms). MY OWN ARITHMETIC: the interval between the first row's Latest
(07:26:42.9445Z) and the second row's Earliest (07:29:48.9945Z) is 186.05 s = 3 min 6.05 s - a
printed, resolvable interval well under 15 min, from an arbitrary window I chose.

CRITICAL READING OF THAT INTERVAL, AND IT IS MY OWN, NOT THE SOURCE'S: it is NOT an outage. The last
row shows quality Q covering 2024-01-01T00:00:00.0195Z to 2024-01-07T23:59:59.9945Z continuously -
the identical interval. The D rows and the Q row are the same channel partitioned by the Quality key.
A reader who took the D-row gaps for downtime would be reading a quality partition as an outage.

### SCEDC, service.scedc.caltech.edu/fdsnws/availability/1/query, net=CI sta=PASC cha=BHZ (verbatim, complete)

```
#Network Station Location Channel Quality SampleRate Earliest Latest Updated TimeSpans Restriction
CI PASC 00 BHZ   40.00  2019-01-01T00:00:00.000000Z 2019-01-03T00:00:00.000000Z NA NA OPEN
CI PASC 10 BHZ   40.00  2019-01-01T00:00:00.000000Z 2019-01-03T00:00:00.000000Z NA NA OPEN
```

Quality column EMPTY. `Updated` = NA. `TimeSpans` = NA. Earliest and Latest are EXACTLY my requested
window endpoints. One row per channel, not a span list.

### SCEDC landing page, service.scedc.caltech.edu/fdsnws/availability/1/ (as served, with headings)

Under heading "# FDSN Availability Web Service":
- "Availability information is refreshed daily."
- "Query end point updates are made on a daily basis but they are made at a delay to allow gaps in
  the archive to be filled."
- "The most recent records are from 6 days ago."

Under "Timespans for /extent and /query endpoints", the timespan is "the earliest and latest miniseed
data points that fall within the specified start and end times", including any gaps.

Under "Description", served date ranges: Extent, triggered records Jan 1977 to present; Extent,
continuous records Oct 1999 to present; Extent, phase records Jan 1932 to present; Query, continuous
records (H, N, L) Jan 01 2011 to April 28, 2020.

Parameters the page lists under "URLs:": net, sta, loc, cha, start, end, asset, format, nodata. The
page does NOT mention `mergegaps` and does NOT mention `show`. (Which sweep: I asked for the
parameter list explicitly as item (d) of a four-part request, not as a side effect of a broad read.)

SCOPE-SETTING CHECK on the load-bearing quotation. "Query end point updates are made on a daily
basis but they are made at a delay to allow gaps in the archive to be filled." The opening words
"Query end point" SCOPE the clause to /query specifically, as against /extent, which is the endpoint
the entry's premise is about. The clause ASSERTS the backfill delay - it does not deny it and does
not record a move away from it. Modality: flat declarative, no hedge, no "may". It is not a
disjunction. The purpose clause "to allow gaps in the archive to be filled" is the operative part:
the delay EXISTS SO THAT gaps present in real time are no longer present in the record. The grammar
on both sides of my cut is intact - the sentence begins and ends where I have it.

## REGIME

- RESIF /query, in its own words via its output keys: unit of analysis is the (Network, Station,
  Location, Channel, Quality, SampleRate) tuple; population is the holdings of the RESIF/EPOS node;
  operating condition is "data points present in the repository"; window is user-chosen and spans
  are clipped to it. Instance opened: network G (GEOSCOPE), station SSB. I did not enumerate RESIF's
  network list.
- NCEDC /query: same tuple, quality codes D and Q both returned; population is NCEDC holdings.
  Instance opened: network BK, station CMB. I did not enumerate NCEDC's network list.
- SCEDC /query: the page's own stated regime is "the earliest and latest miniseed data points that
  fall within the specified start and end times", refreshed daily at a deliberate delay, with
  continuous /query coverage printed as ending April 28, 2020. Instance opened: network CI, station
  PASC. The page "names only network CI, in its examples. It does not give a full list of networks
  served."
- Does the claim sit inside these regimes? For resolution, yes at NCEDC and RESIF. For the
  archive-vs-operational question, the SCEDC regime is explicitly ARCHIVE HOLDINGS at a lagged daily
  refresh, so the entry's EEW/operational-status reading sits OUTSIDE it.
- Gaebler & Ceranna 2021's regime is the IMS seismic network. None of BK, CI or G/SSB was shown by
  any document I opened to be an IMS station, so none of what I opened is commensurable with it.

## DEFECTS FOUND

1. **THE PREMISE IS TRUE OVER TWO INSTANCES AND FALSE AS A UNIVERSAL OVER IMPLEMENTATIONS.**
   Sub-claim 1, classified as the brief requires. TRUE over NCEDC (BK CMB 00 BHZ: per-channel spans,
   0.1 ms stamps, a printed 186.05 s interval) and over RESIF (G SSB BHZ: per-channel spans,
   microsecond stamps, three printed 0.050001 s interruptions), both over an arbitrary window I
   chose. FALSE on the third instance, with the counter-instance quoted above: SCEDC's /query returns
   ONE row per channel whose Earliest and Latest are my own window endpoints, with `TimeSpans NA` -
   no span list, so no gap of any length is resolvable from it. MY OWN READING, flagged as mine: the
   response is formally consistent both with "PASC BHZ had no gaps in those two days" and with
   "per-span machinery not populated"; the blank Quality column and `TimeSpans NA` are what make me
   read it as the latter, and a reader who disagrees should re-open it. Either way it does not
   deliver the kind. NAMED, NOT OPENED: the two 2019 draft spec versions, the IRISSeismic
   `getDataAvailability` wrapper, and every other FDSN node.

2. **"THE SPEC SETTLES THE DOCUMENT KIND" IS AN OVER-CLAIM, AND THIS IS NEW AGAINST THE ENTRY.**
   The entry says adversaries #1 and #3 reading the spec "settles the document kind ('full resolution
   time series listings', per-channel spans with microsecond stamps, mergegaps tolerance in
   seconds)". It does not. SCEDC's own landing page lists neither `mergegaps` nor `show` among its
   parameters, and its /query returns extent-shaped rows. A specification that "binds no network and
   names no holdings" also does not bind the implementations to its response shape. Reading the kind
   off the spec was exactly the move the entry flagged as un-instantiated, and the one instance that
   departs from the spec is the one that decides it.

3. **THE ARCHIVE-VS-OPERATIONAL CLAUSE (C5) IS NOW SETTLED FROM A DOCUMENT, AGAINST THE ENTRY.**
   Sub-claim 3. Of the three instances, exactly one STATES a policy, and it states the archival
   reading: "Query end point updates are made on a daily basis but they are made at a delay to allow
   gaps in the archive to be filled" and "The most recent records are from 6 days ago" (both under
   "# FDSN Availability Web Service"). C5 doubted whether availability covers archive holdings or
   real-time status; at SCEDC it covers archive holdings, by design, with real-time gaps
   deliberately filled before the record is built and no record at all for the most recent days.
   NCEDC and RESIF stated no such policy in anything I opened - I opened their query responses, not
   their help pages, so their silence here is MY UNREAD, not their absence.

4. **THE SPEC'S OWN LOAD-TIME FIELD IS UNPOPULATED AT BOTH INSTANCES THAT COULD CARRY IT.** The
   `show=latestupdate` field is the one the entry's C5 clause turns on. SCEDC returns the column as
   `Updated NA` for both rows. At NCEDC, the request with `&show=latestupdate` appended returned
   client_error while the identical URL without that parameter was served twice - a differential
   test of one parameter. MY OWN INFERENCE from that pair, which a single transient could also
   explain and which one fetch would settle: NCEDC does not accept `show`. Consequence either way:
   on what I opened, the archive-load time that would let a reader separate archive gaps from
   operational downtime is not retrievable, which is a second and independent reason C5 cannot be
   resolved in the entry's favour.

5. **SCEDC'S PAGE CONTRADICTS ITSELF AND ITS OWN SERVICE ON RECENCY - PUBLISHED IS NOT PERFORMED.**
   The page ANNOUNCES "The most recent records are from 6 days ago" while its "Description" prints
   /query continuous coverage as ending "April 28, 2020", and its URL Builder gives a "today" of
   2020/08/17. My 2024 window against /query returned SERVER_ERROR at the target; the same channel
   over a 2019 window returned rows. So the 6-day recency is announced, not performed, for CI PASC
   BHZ. The entry should not treat any of these three as a near-real-time product.

6. **THE INTERSECTION THE ENTRY NEEDS IS NOT SHOWN NON-EMPTY, AND THE POPULATION IS UNENUMERATED.**
   Sub-claim 2. Networks actually instantiated: BK (NCEDC), G (RESIF), CI (SCEDC) - one station each
   (CMB, SSB, PASC). No instance gave me a network list; SCEDC's page explicitly "does not give a
   full list of networks served". No document I opened places any of BK, CI or G/SSB in the IMS or
   attaches a named published noise-based capability product to them. So on what I opened, the
   intersection of "availability service implemented" and "commensurable published reference exists"
   is EMPTY - which is NOT the same as the intersection being empty, since the population is
   UNENUMERATED. I record one temptation and refuse it: I have a background recollection that
   GEOSCOPE operates stations that also appear in the IMS auxiliary network. THAT IS MY OWN
   RECOLLECTION, NOT A SOURCE FINDING, and I did not open a document for it. The kind of document
   that would settle it is an IMS station roster that carries FDSN network and station codes - the
   CTBT Protocol Part I station tables, or an FDSN/IMS code crosswalk. I opened neither, and I do not
   nominate either as a lead I can justify beyond its kind.

7. **SUB-CLAIM 4 SPLITS, AND ONLY ONE HALF IS INSTANTIATED.** A sub-daily availability record with
   gap intervals rather than an annual per-station percentage: YES, instantiated three times over
   (NCEDC at 0.1 ms, RESIF at 1 microsecond, both with interruptions printed; SCEDC at microsecond
   stamps but no spans). Whether any of them is an "ANSS availability record": I did not open a
   document that names BK, NC or CI as ANSS contributions - that label is my own background
   knowledge and I decline to grade on it. An IMS availability record: NOT INSTANTIATED, NO ROUTE
   TRIED, budget exhausted on the three endpoints. The routes I did not try are the CTBTO
   Operational Manuals and the CTBTO DAU record behind prior B, both of which the entry already
   lists as never opened.

8. **SUB-CLAIM 5, BOTH DIRECTIONS.** INCLUDES, finer than the candidate needs: sample-level time
   tears (RESIF's three 0.050001 s interruptions at a printed 20.0 sps = one sample interval, MY OWN
   ARITHMETIC); a Quality key that partitions one channel into separate span lists (NCEDC's D rows
   against its Q row over the identical week); a SampleRate key; stamps at 1 microsecond and 0.1 ms
   against the candidate's w=15 min. With `mergegaps` at its default 0.0 the listing is dense with
   interruptions that are not outages, and at SCEDC `mergegaps` is not offered at all. MISSES, and
   this is the serious direction: NO instance distinguishes channel-up from data-received. Every
   field returned describes data present in a repository - SCEDC says so in its own words, "the
   earliest and latest miniseed data points that fall within the specified start and end times" -
   and no instance returned any field for instrument state, telemetry state or channel operational
   status. A channel that was up while its data never arrived is indistinguishable from a channel
   that was down. Level of report: CHANNEL, with Location as a separate key, so FINER than station -
   which is what the candidate wants, except that no instance supplies the rule for aggregating
   channels and location codes into a station-level "up", and RESIF's own output shows why that
   matters (G SSB location 00 contiguous across the week while location 10 is interrupted three
   times). No instance states any uncertainty or any denominator.

## ROUTES THAT FAILED

- service.ncedc.org/fdsnws/availability/1/query?...&format=text&show=latestupdate - client_error at
  the site, nothing retrieved. ROUTE FAILED (not budget). The identical URL without `show` was
  served twice, so the failure is attributable to that parameter, probably but not certainly.
- service.scedc.caltech.edu/fdsnws/availability/1/query?net=CI&sta=PASC&cha=BHZ
  &starttime=2024-01-01T00:00:00&endtime=2024-01-08T00:00:00&format=text - SERVER_ERROR, source
  target. ROUTE FAILED. The landing page's printed /query coverage ending April 28 2020 explains it;
  the same channel over a 2019 window with SCEDC's own `start`/`end` parameter names was served.
- First NCEDC fetch: served as paraphrase only. NOT a failure of the route or of the document - a
  fact about my request, corrected by re-asking in transcription style, which worked.
- NOT TRIED, BUDGET EXHAUSTED, each one a live lead rather than a dead end: NCEDC and RESIF help or
  landing pages (would settle whether they too publish a backfill policy, i.e. defect 3 at two more
  instances); `mergegaps=900` against NCEDC or RESIF (would directly demonstrate the 15-minute
  tolerance the candidate needs); any IMS availability instance; any network-list endpoint.

## BEARING ON THE LEDGER ENTRY

Presupposition 1's UNVERIFIED half - sub-claim 6, answered in the entry's own terms - is now TRUE
OVER THE INSTANCES I OPENED for NCEDC/network BK and RESIF/network G, and FALSE over SCEDC/network
CI. The kind is instantiated: this premise is no longer "nominated by kind and never instantiated",
and the leg of Gate 1's hold that rested on nobody having opened an instance should STRIKE. The
entry's characterisation of these three as interchangeable instances of one kind should be NARROWED
to two, with SCEDC quoted as the counter-instance.

But promotion condition (ii) is NOT discharged, because it is a conjunction. Leg (a) is met, twice
over. Leg (c) is met at NCEDC and RESIF - with the caveat that what I demonstrated is a resolvable
186.05 s interval and three 0.050001 s interruptions, not a 15-minute mergegaps tolerance exercised,
which one untried fetch would have settled. Leg (b), the IMS or ANSS availability record, is
UNTOUCHED: I tried no route for it and my budget is the reason, so its absence here is no evidence.
(ii) therefore HOLDS, NARROWED TO ITS IMS/ANSS LEG, and well-posedness does not reach 3/3 on my
check. What I would put in its place as the remaining condition: open one IMS or ANSS availability
instance, and exercise `mergegaps` at a 900 s tolerance against NCEDC or RESIF.

The contested clause C5 moves the other way, against the entry, and it moves from contested to
settled at one instance. SCEDC states a deliberate backfill delay whose stated purpose is "to allow
gaps in the archive to be filled", and returns `Updated NA`; NCEDC appears to reject `show` outright.
So these records are archive holdings, not operational status at time t, and the load-time field that
could separate the two is unpopulated on everything I opened. C5 should CONVERT from "contested and
live" to a finding: the archival/catalogue audience survives, and the EEW audience claim should be
STRUCK from Significance rather than left standing as contested. Defect 8's other half is the
mechanism behind that - no instance distinguishes channel-up from data-received in either direction.

Net on the cap: the presupposition-1 ground for holding Gate 1 at 2/3 STRIKES on its
un-instantiated-kind leg and HOLDS on (ii)'s IMS/ANSS leg, so the cap survives on a narrower and
better-specified ground than the one the entry carries. Nothing I opened touches attack 7, attack 2,
or the two unread Kvaerna & Ringdal BSSA papers, and I did not reach them.
