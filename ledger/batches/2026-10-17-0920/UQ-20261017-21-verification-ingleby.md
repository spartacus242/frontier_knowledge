# UQ-20261017-21 Ingleby / ECMWF Newsletter 184 notes
Searches: 5 of 8. Fetches: 5 of 6. (Fetch tool returns a summariser's answer, not raw text: all quotes are THROUGH A SUMMARISER of the full page.)

## Routes
1. WebFetch ecmwf.int/en/newsletter/184 -> OK, issue index (Summer 2025). Article: "Assimilation of global Mode-S aircraft winds" (News item 12). No Ingleby byline on index.
2. WebSearch "Ingleby ECMWF Newsletter 184 GNSS interference aircraft observations" -> only aviation-safety GNSS documents; nothing on the article.
3. WebFetch .../news/assimilation-global-mode-s-aircraft-winds -> OK. Author: Bruce Ingleby.
4. WebFetch .../news/new-observations-april-june-2025 -> OK, no author, no GNSS/GPS/interference mention; only table row "Global Mode-S aircraft winds" activated 8 May 2025.
5. WebFetch same Mode-S article, exact-string check -> string present.
6. WebSearch (GNSS jamming impact on AMDAR/Mode-S O-B) -> no relevant meteorological hit; one hit amt-2024-110 (EMADDC).
7. WebSearch (GPS interference Baltic/Middle East aircraft met data O-B) -> only aviation/GNSS-monitoring reports (Aireon, GPSPATRON, EASA), none on NWP.
8. WebSearch (GNSS interference ECMWF Tech Memo/newsletter Mode-S) -> only aviation safety docs (EASA SIB, ICAO, IFALPA).
9. WebFetch amt.copernicus.org/preprints/amt-2024-110/amt-2024-110-ATC2.pdf (de Haan et al., EMADDC) -> no mention of interference/jamming/spoofing; GPS only as position source. Note this is a referee-comment PDF (ATC2), not necessarily the paper itself.
10. WebSearch (Ingleby 2025 QJRMS Mode-S) -> found ecmwf newsletter page, ECMWF node pages, events.ecmwf.int Ingleby slides (events/511 contribution 5582; events/383). NOT fetched (fetch budget kept); unread.
Not tried: Ingleby QJRMS 2025 (under review), ECMWF Tech Memos, doi routes.

## Exact strings (through summariser; sentence is 139 chars so split)
- "In parts of eastern Europe and the Middle East, there are gaps due to GPS interference," -> PRESENT
- "and also occasional bad data that was not detected." -> PRESENT (continuation of same sentence)
- "gaps due to GPS interference" -> PRESENT, exact
- preceding sentence: "The first figure shows the cruise level coverage in May 2025."
- "GNSS", "jamming", "spoofing" -> ABSENT from the page (summariser report; the term used is "GPS interference").
- No reference list on page; in-text cites de Haan et al. and Ingleby (2025, QJRMS, under review); neither concerns interference.

## Answers
1. One clause only, as above. Context: describes Figure 1 (cruise-level Mode-S coverage map, May 2025).
2. NOT quantified: no counts, shares, error magnitudes, time series. Figure 1 is a coverage map but the text does not tie the gaps to it explicitly (summariser). Qualitative remark -> reviewer's "unquantified remark" is right. Caveat: figure content itself not inspected.
3. No affected-vs-unaffected comparison. The only RMS-difference remark in the article concerns tropics (convection, few winds), unrelated.
4. No QC change in response to GPS interference. Article says the bad data was "not detected". Thinning/box-size changes described are for other reasons (2022 over-assimilation central Europe).
5. Other work: none found in 4 literature-oriented queries (see routes 2,6,7,8). Countable negative: 0 of ~4 queries returned an NWP-background quantification. Search tool is weak (US-only, aviation-dominated), so absence is not proof. Candidates not read: Ingleby QJRMS 2025 (under review), Ingleby ECMWF workshop slides (events 511/5582, 383/4599).

## Unit/endpoint/comparator/estimand
The newsletter article is a descriptive news piece on assimilating global Mode-S EHS aircraft winds; for the GPS-interference remark there is no unit, endpoint, comparator or estimand (qualitative statement of coverage gaps and some undetected bad data). Read level: full web page via summariser (FULL TEXT, second-hand extraction), not PDF.
