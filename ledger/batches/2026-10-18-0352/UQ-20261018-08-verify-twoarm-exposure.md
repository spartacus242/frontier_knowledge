# UQ-20261018-08 verify two-arm exposure (working notes)

## Read levels
- DOC 1 Shergold-Weir (2018) Rec 14: COULD NOT READ the report itself (all industry.gov.au copies blocked by robots). Only a third-party summary (Australian Institute of Architects, via summariser) was read: SECONDARY SUMMARY ONLY. Full text of Rec 14 NOT obtained.
- DOC 2 VBA Building Documentation Audit (Vol 2 Class 1 & Vol 1 Multi-Disciplinary, Mar-Aug 2024): PDF (read through a summariser, not raw text).

## Routes (7 searches budget: 6 used; 7 fetches budget: 7 used)
S1 search Shergold Rec 14 phrase -> only secondary pages, no primary text in snippets.
S2 search Vic AG "DtS, performance solution, or a combination of these" -> VBA/BPC audit PDFs listed (not VAGO).
F1 bpc.vic.gov.au VBA Building Surveyor Audit Program Vol 1 Class 2-9 Jan-Jun 2022 -> read; string ABSENT; no totals of PS/FERs; "a mixture of performance solutions and DtS solutions" s5.3.1.
F2 bpc.vic.gov.au same program Vol 1 Class 2-9 2021 -> read; string ABSENT; no totals; per-audit counts only.
F3 industry.gov.au Shergold PDF (July 2018 path) -> ROBOTS_DISALLOWED.
S3 search VBA audits "fire engineering reports" -> surfaced the 2024 audit PDF.
S4 search Shergold full pdf mirrors -> list of mirrors (industry.gov.au, apo, minterellison, etc.).
F4 industry.gov.au .../pdf/... Shergold PDF -> ROBOTS_DISALLOWED.
F5 bpc.vic.gov.au FINAL Building Documentation Audit Vol 2 Class 1 & Vol 1, Mar-Aug 2024 -> read; string PRESENT; 13 FERs / ~100 PS PRESENT.
F6 AIA summary PDF of Shergold-Weir recs -> read; summariser says phrase present, gave only paraphrase of Rec 14.
F7 industry.gov.au 2019-05 docx -> ROBOTS_DISALLOWED.
S5 search Shergold Rec 14 wording -> nothing useful.
S6 search Rec 14 "That each jurisdiction..." -> nothing useful (SA/Qld certificates of occupancy, VBA PS 01).
Budget for fetches exhausted before a primary copy of the Shergold-Weir report (or a second pass of the 2024 audit) could be read. Not tried: apo.org.au, minterellison, cpd.nccb BCR implementation report, mccraeinquiry VBA.0001.0001.0182_1.pdf.

## Findings
### Doc 1
- Rec 14 full text: COULD NOT READ at source. Do not treat as verified.
- Phrase "the circumstances in which performance solutions have been used and for what purpose": summariser of the AIA summary PDF said yes it is in Rec 14, but its reply repeated my own prompt string and it gave only a paraphrase ("each jurisdiction to set out what information performance solutions must include and to require occupancy certificates to record when and why performance solutions were used"). Treat as UNCONFIRMED (secondary, possibly echoed).
- Single value vs per-element: COULD NOT READ.
### Doc 2
- Title: Building Documentation Audit, Volume 2 - Class 1 & Volume 1 - Multi-Disciplinary Audit; issuer Victorian Building Authority (not VAGO); audits ran Mar-Aug 2024; copyright 2025. URL https://www.bpc.vic.gov.au/__data/assets/pdf_file/0031/24889/FINAL-Building-Documentation-Audit-Volume-2-Class-1-and-Volume-1-March-August-2024.pdf
- (a) String, per summariser: Section 1.6 (Audit process): "What compliance solution was used, e.g., DtS, performance solution, or a combination of these." FOUND (one summariser pass; short enough to be verbatim but not independently re-checked).
- (b) "13 Fire Engineering Reports (FERs) were reviewed which contained approximately 100 Performance Solutions" - FOUND, section "Fire Engineering" per summariser; the summariser said the full sentence was longer than 125 chars so this is a portion. Unit: counts of performance solutions inside 13 reports in an audit sample; denominator (number of buildings audited, which volume the 13 FERs belong to) not established.
- Per building vs per element: NOT stated outright. Summariser: audit assesses "compliance solution" as one of the considerations per item, and applies performance solutions at individual performance-requirement level ("Where a performance solution is not used"). The phrase "DtS, performance solution, or a combination of these" itself shows the recorded value can be a combination, i.e. not a clean two-arm split. Inference, not an explicit statement.
- Earlier VBA volumes (2021, Jan-Jun 2022 Class 2-9): string absent, no 100/13 totals; but they say "in 12 of the audits a performance solution was used for at least one of the exits" (2022) and "in 27 of the audits ... at least one of the exits" (2021) - per-audited-building counts of PS used for part of a building; and "a mixture of performance solutions and DtS solutions".
