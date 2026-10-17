# UQ-20261017-41 verification notes
Read levels: A = FULL TEXT (arxiv.org/html/2307.02923, via summariser); B = FULL PAGE via summariser (structure/definitions only); C = secondary articles (satellitetoday, techcrunch) quoting SpaceX; SpaceX PDF itself not opened.
Calls used: 1 search, 5 fetches (A twice).

## A (Guarnieri et al.)
A1 FOUND. Table 1 caption: "Table 1 - Statistics on Startlink satellite version 1.5 launches until October, 2022." Columns: Mission Number, Mission Name, Deployed, Working, Efficiency. Rows: 35 launches (mission nos 30-64) + TOTAL. Deployed/Working = satellite counts; Efficiency = percent (Working/Deployed). Compiled from Wikipedia. No dates, batch, storm exposure, altitude.
A2 PARTLY. 97.05% appears ONLY as the TOTAL row of Table 1 (1765 deployed, 1713 working), a satellite-level pooled percentage over the table's 35 rows. Prose says "97% successful for the last 34 launches" (fragment of longer sentence). So the question's framing "97.05% = efficiency of 34 preceding launches" is NOT exactly what the paper shows: 97.05% is the table total (35 rows, incl. the storm launch if row 36 is in it, not verified), and the 34-launch figure is stated as rounded 97%. 22.45%: FOUND, "For this specific launch, only 22.45% of the load survived and became operational." Table row Mission 36, Group 4-7: 49 deployed, 11 working, 22.45% = satellites working / satellites deployed (11/49).
A3 Purely descriptive: no model fit, no uncertainty interval, no statistical test (per summariser reading of whole paper).
A4 No batch attribution. Words batch/production/manufactur/design flaw do not occur. Discusses Feb 2022 geomagnetic storm drag, possible collisions, and says cause unknown.

## B (McDowell stats page)
B1 FOUND (counts per launch group + summary by generation/shell). Columns include: Total Sats Launched, Failed to orbit, Early Deorbit, Disposal Complete, Reentry after Fail, Total Down, Total In Orbit, Screened, Failed/decaying, Graveyard, Total Working, Disposal underway, Out of constellation, Anomalous, Reserve/Relocating, Special, Drift, Ascent, Operational Orbit. Definitions given, e.g. "Failed to orbit (f): Launch vehicle failed to reach orbit."; "Total working" = in orbit minus those thought failed (screened or uncontrolled decay); notes tentative classes can be downgraded. Letter codes from GCAT SatType. Rules are category definitions, not full decision procedure (limit of my reading).
B2 Counts only; no rates, intervals or variance on the page.

## C (Feb 2024 deorbit)
C1 YES. ~100 Starlink satellites; SpaceX plan detailed 12 Feb 2024 (SpaceX "Commitment to Space Sustainability"); Satellite Today 13 Feb 2024, TechCrunch 14 Feb 2024. Wording quoted by TechCrunch: SpaceX "identified a common issue" that could "increase the probability of failure". Satellites reported as currently working. Called a subset of first-generation (v1) satellites.
C2 NOT STATED in either article: neither says one launch, one batch or several. Only "early version 1 design"/"first-generation". Not inferred. Primary SpaceX PDF not opened, so NOT FOUND in secondary sources only.
