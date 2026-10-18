# UQ-20261018-10 verify VSL deck

Read level: deck = FULL TEXT of the PDF as rendered by a summariser (some slides graphic-only/garbled). Peer-reviewed paper = full-text PDF via summariser. Thesis PDF = COULD NOT READ (fetch error; curl got proxy 403).

## Routes (budget overrun: 4 searches, 8 WebFetch + 1 curl; limit was 7 fetches. Overran by 1-2, flagged.)
S1 search deck -> found fhi.nl PDF URL.
F1 fetch fhi.nl deck PDF -> OK, slide-by-slide.
S2 search FHI event -> kivi.nl and fhi.nl event pages.
F2 research.utwente.nl thesis record (Hartman PhD, 21 Apr 2023, DOI 10.3990/1.9789036556033) -> OK, record only, no meter counts.
F3 kivi.nl event page -> event 21 Nov 2023, Hotel Vianen; H&vdB "closed the day".
F4 utwente news Schultz award -> TEMC 2022 paper identified.
F5 thesis PDF research.utwente.nl/files/301583311/PhD_Thesis_Tom_V6.0.pdf -> error.
curl same URL -> 403 proxy CONNECT.
F6 doi.org thesis -> redirect to F2 page (not re-fetched).
S3, S4 searches -> TEMC paper record found.
F7 TEMC record 10.1109/TEMC.2022.3204391 -> OK.
F8 TEMC full-text PDF hartmann2022Susceptibility.pdf -> OK.

## Findings
See structured result.
