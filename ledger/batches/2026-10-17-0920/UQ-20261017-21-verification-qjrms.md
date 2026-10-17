# UQ-20261017-21 verification notes
Counts: 8 searches, 6 fetches (cap reached; no overrun). No search refused.

## Searches (all standard mode)
1 Ingleby Mode-S global winds ECMWF TM GNSS interference -> ECMWF Newsletter 184 article, Ingleby ECMWF@50 pdf (events/511), Lonitz/DA WS pdf (events/428); NO Tech Memo or QJRMS listing found.
2 GNSS interference AMDAR Mode-S E-AMDAR workshop -> only aviation-side/ADS-B items, none meteorological.
3 OPSGROUP/EUROCONTROL share of flights -> ICAO APAC SP03 slides, others (news).
4 ECMWF TM Ingleby QJ -> same Newsletter/ISDA2023 slides; no TM or QJRMS record.
5 EUMETNET E-AMDAR/EMADDC GPS jamming -> nothing relevant (CVUT ADS-B papers, Cambridge Aeronautical Journal ADS-B NIC paper, wingbits).
6 EUROCONTROL RFI share EASA SIB -> ICAO slides, ION Navigation, GPS World (not fetched).
7 GPS jamming effect on aircraft met obs -> Ingleby/Lonitz pdfs again, Reading CentAUR, AMT preprint amt-2024-110 (not fetched; unknown relevance).
8 WMO ET-ABO 2024-25 GNSS interference -> wmo.int event page for Global Aviation Stakeholders Meeting / ET-ABO and WMO ABO Newsletter vol 27 (community.wmo.int/node/38111). NOT FETCHED (cap). Contents unread.

## Fetches
1 events.ecmwf.int/event/511 Ingleby "Global Mode-S aircraft winds improving low latitude forecasts", ECMWF@50, Dec 2025 -> read via page summariser (full text, summarised). 
2 icao.int APAC SRWG-8 WP12 IATA analysis (GNSS RFI, FDX) -> read via summariser.
3 events.ecmwf.int/event/428 Lonitz pdf -> actually Ingleby "Assimilation of Global Mode-S winds", DA Workshop Bonn Apr 2025.
4 ecmwf.int/node/29457 -> Newsletter 184 article, Jul 2025.
5 ICAO APAC SP03 GNSS vulnerabilities slides (2025) -> EUROCONTROL/EANS/Skai figures.
6 rntfnd.org ECTL UN-ICG Aug/Sep 2023 slides (Berz) -> EASA ECR and Airbus FDM event counts.
Not tried (fetch cap): doi.org / Wiley QJRMS, ecmwf.int/en/publications TM listing, EMADDC, E-AMDAR, WMO node pages, AMT preprint.

## Exact strings (as returned by the summariser; quoted text caps ~125 chars, so checked as returned, not char-verified on the PDF)
- "There are points in Eastern Europe with large RMS due to GPS jamming and intermittent problems south-east of Iceland (now resolved)." -> present in Ingleby talks (fetch 1 and 3). No numbers.
- "In parts of eastern Europe and the Middle East, there are gaps due to GPS interference" -> Newsletter 184 (fetch 4). No numbers. (Consistent with earlier reader.)
- "GNSS Reports: 3115 out of 7453." -> EVAIR 2024 slide (fetch 5).
- "2022: 4689 GNSS Events", "1st half of 2023: 4147 GNSS Events", "2021: 10843 Events", "2022: 49605 Events" -> fetch 6.
- Not seen in any read text: GNSS/GPS spoofing relation to met data, QC rule for interference, positional misassignment of met reports. These are "not found in the texts read", NOT "absent from the literature".

## Conclusion
Q1 (quantified effect on obs quality): no quantified source found. Best is a figure-only remark (Fig 2 vector-wind O-B RMS at 200 hPa, 1-deg boxes, 15 Oct 2024-31 Jan 2025) with an unquantified caption sentence. Journal/TM paper A NOT located (search) and not read; absence of a QJRMS/TM item in 2 searches is a search negative, not proof it does not exist.
Q2 (exposure): YES, usable-ish: IATA FDX (Aug 2021-Dec 2023): ~402k GPS signal-loss events / ~13.1M flights ~ 31 per 1,000; ASPAC ~3.5 per 1,000; event-level, airline-sample, B777/B787 not monitored, internal inconsistencies. EUROCONTROL/EASA counts (events, not flights). EANS: human reporting captures 2-10% of ADS-B-detected events. Skai: 397 transatlantic flights spoofed, ~74% NIC>=7 after leaving. EVAIR 2024 3115 GNSS reports of 7453; 550 spoofing.
Q3 (QC change): none reported for interference. Related-only: thinning (44 km low levels to 95 km at 200 hPa), heading correction, European Mode-S switched off for a year then reintroduced with thinning - none is interference-driven.
Q4 (gross positional misassignment of met reports): not found. Only aviation side: ADS-B NIC=0 / position integrity degradation (not read in full).
Q5: all Ingleby items are talks/news remarks; IATA and EUROCONTROL items are monitoring/exposure summaries, not met-quality studies.
