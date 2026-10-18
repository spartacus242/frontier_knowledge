# UQ-20261018-03 residual: Hockenberry, Lien, Chou 2008

READ LEVEL: FULL TEXT, but only via a summariser on a ResearchGate page (chars 0-100000 of 102699 read; last 2699 unread). Not verbatim; not checked against the publisher PDF. Publisher page and NCCU PDF: abstract/metadata only / blocked. Budget overrun: 9 fetches (limit 8), 3 searches.

## Calls
S1 web search exact title -> found uchicago, IDEAS, NCCU handle.
F1 journals.uchicago.edu/doi/10.1086/593064 -> metadata + abstract paraphrase (ABSTRACT ONLY).
F2 ideas.repec.org/a/ucp/jhucap/v2i3y2008p303-335.html -> metadata, abstract; full text subscription.
F3 nccur.lib.nccu.edu.tw/handle/140.119/59147 -> item page, lists 303335.pdf, no link.
F4 nccur.lib.nccu.edu.tw/bitstream/140.119/59147/1/303335.pdf -> ROBOTS_DISALLOWED.
S2 search for results -> NBER w20017 and others.
F5 irtest.lib.nccu.edu.tw/handle/140.119/59147 -> no link addresses.
F6 doi.org/10.1086/593064 -> 302 to uchicago (not refetched).
F7 irtest.lib.nccu.edu.tw/bitstream/140.119/59147/1/303335.pdf -> ROBOTS_DISALLOWED.
S3 extended search -> ResearchGate record, NBER pdf, Hockenberry 2010 HSR.
F8 researchgate.net/publication/23547500_... -> detailed content (data, categories, estimates). Source of Q2,3,6.
F9 nber.org/system/files/working_papers/w20017/w20017.pdf -> how WP 20017 describes the 2008 paper (secondary).

## Findings
1. Exists. Jason Hockenberry, Hsien-Ming Lien, Shin-Yi Chou. "The Impacts of Task Repetition and Temporal Breaks in Production on Human Capital and Productivity." Journal of Human Capital 2(3), Sept 2008, pp. 303-335. DOI 10.1086/593064. (publisher, IDEAS, NCCU agree)
2. Taiwan National Health Insurance claims, procedures 1998-2004. Unit: procedure/patient episode by surgeon. PTCA N=107,747; CABG N=20,798. Excludes surgeon's first appearance and surgeons with no surgery in prior 1,000 days. Outcome 1-month (and 12-month) mortality.
3. YES, categorical. Days since surgeon's last procedure. PTCA: 0-2 (ref), 3-7, 8-14, 15-21, 22+. CABG: 0-2 (ref), 3-14, 15+. Full-FE 1-month mortality, linear-probability coefficients: PTCA 15-21 = 0.006477 (5%), 22+ = 0.008565 (1%); CABG 3-14 = 0.008562 (5%), 15+ = 0.013499 (5%). Reference-group 1-month means 1.66% PTCA, 5.03% CABG. Summariser gave only 15-21 and 22+ for PTCA, not 3-7 or 8-14.
4. UNRESOLVED. NBER WP 20017 says of this paper: "3-14 days raised mortality by 11-14%" and ">15 days raised mortality by 22%" (reference 0-2 days, CABG). The ResearchGate extract does not contain 11-14%; it gives "about 17%" for CABG 3-14 (0.008562/0.0503 = 17%). 15+ would be 0.013499/0.0503 = 27%, not 22%. So 11-14% and 22% may come from other specifications not seen, or be mis-stated. Do not cite 11-14% as the paper's own figure without checking the PDF. No CI seen.
5. No day threshold recommendation seen. Only volume thresholds in robustness checks (12-month volume 69 PTCA/45 CABG; >40/>30). Not specifically probed beyond "thresholds" in prompt.
6. Volume: yes, log surgeon and hospital 12-month volume (trailing 12 months before procedure), not significant in full-FE. Surgeon fixed effects: yes (plus year, county, hospital). SEs clustered by surgeon.
7. Not found in the extract; only categorical bins reported. I did not specifically ask about splines or break-point search, so this is weak NOT FOUND. NBER WP says earlier work found effect "monotonically increasing".
