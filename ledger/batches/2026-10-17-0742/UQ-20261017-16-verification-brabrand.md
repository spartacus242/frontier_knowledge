# Verification: Brabrand et al., Dan Med J 2012;59(10):A4512

Searches run: 0 (none needed). Refused: 0.
Fetches: 4 of 6, all of the publisher PDF via WebFetch (summariser, so quoted text is as relayed by it).
- OPENED OK: https://content.ugeskriftet.dk/sites/default/files/scientific_article_files/2018-12/a4512.pdf (4 prompts)
- curl of same PDF: 403 from proxy tunnel; not circumvented. No PMC/EuropePMC/PubMed/doi.org attempts needed.

## Strings checked (one at a time)
- "introduces a systematic error": appears ("the use of unsynchronized time telling devices in research introduces a systematic error"; sentence continues "could lead to skewed results and introduce bias"; full sentence >125 chars)
- "could lead to skewed results": appears (same sentence)
- "Survival decreases with 7-10% per minute": appears ("Survival decreases with 7-10% per minute [8] and an error of several minutes in this context could potentially be disastrous.")
- "Such a small deviation will probably have little impact on the treatment of our patients or on research." appears (context: small deviation)
- ED median -00:30: appears only as KOLDING ED median (IQR -08:00 to 00:00). Esbjerg ED median -03:00 (IQR -03:00 to -02:00). No pooled 11-device ED median printed.
- ED range -17:05 to +01:00: the endpoints exist in Table 1 (-17:05 Esbjerg defib; +01:00 Kolding telephone) but the range is NOT printed as a range.
- Ambulance median -00:45, IQR -02:40 to -00:01: appears as printed in text.
- Ambulance range -05:22 to +02:00: endpoints in Table 2; "five minutes and 22 seconds" appears as max between ambulance defib and ED wall clock. Range not printed as such.
- 2 of 11 ED within one minute: "only two of 11 (18.2%)" appears (both Kolding wall clocks, 00:00). Note the two +/-01:00 phone clocks are exactly 1 min and not counted.
- 4 of 11 ambulance within one minute: "only four of 11 defibrillators (36.4%)" appears. Table 2 check: -00:45, -00:01, -00:01, +00:01 = 4. OK.
- 19 min 5 s: "The maximum deviation between two time telling devices was 19 minutes and five seconds." Appears. Consistent with Table values -17:05 (ED defib) vs +02:00 (ambulance defib). Tables do not show derivation.

## My own arithmetic from the tables (summariser-transcribed)
- ED sorted: -17:05,-11:11,-08:00,-03:00,-03:00,-02:00,-02:00,-01:00,00:00,00:00,+01:00 -> pooled median -02:00 (not -00:30). Range -17:05..+01:00 matches.
- Ambulance sorted: -05:22,-05:09,-03:15,-02:40,-01:42,-01:26,-00:45,-00:01,-00:01,+00:01,+02:00 -> median -01:26, NOT the -00:45 reported in text (summariser also flagged this). IQR -02:40..-00:01 is not clearly reproducible either.
- Summariser says text mentions 19 devices in the ED part while tables list 22 total; I did not verify that sentence myself.

## Other
- Reference: NIST online service (time.gov, accessed 26 Aug 2010), stated accuracy +/-0.2 s, EST + 6 h to Danish time. Dates of measurement not given; DST not addressed (summariser inference).
- Deviation computed as reference minus device (per summariser) - sign convention worth checking in the PDF.
- Design: observational, two hospitals (Esbjerg 5 ED devices; Kolding 6), 11 ambulance defibs (4 Esbjerg, 7 Kolding), 9 staff interviewed.
- No pairwise distribution; no linkage to patients/records; no bias estimate.

## Conclusion: PARTIALLY CONFIRMED (premise corrected on pooled ED median and on ambulance median)
