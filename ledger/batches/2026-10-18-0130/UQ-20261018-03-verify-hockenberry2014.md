# UQ-20261018-03 verify Hockenberry & Helmchen 2014

## Read level
- Published JHE article (doi 10.1016/j.jhealeco.2014.06.001): ABSTRACT ONLY (via RePEc/IDEAS summary; Elsevier/ScienceDirect body not obtained). Body questions on the published version: COULD NOT READ.
- NBER WP 20017 (March 2014): PDF, read through a summariser (section and table references below come from that summary).

## Calls
1. WebFetch doi.org/10.1016/j.jhealeco.2014.06.001 -> 302 redirect to linkinghub.elsevier.com (pii S0167629614000812); not content.
2. WebSearch (title + authors) -> NBER, IDEAS/RePEc, GMU news, HCU Hamburg catalogue, causalclaims mirror. No open full text of published version.
3. WebFetch linkinghub.elsevier.com/retrieve/pii/S0167629614000812 -> empty page.
4. WebFetch ideas.repec.org/a/eee/jhecon/v37y2014icp70-80.html -> bibliographic record + abstract summary (published version).
5. WebFetch sciencedirect.com/...S0167629614000812 -> ROBOTS_DISALLOWED.
6. WebFetch nber.org/system/files/working_papers/w20017/w20017.pdf -> WP body, Table 2 etc.
7. WebSearch (full text / numbers) -> no new sources.
8. WebFetch nber.org/papers/w20017 -> WP abstract page, notes JHE publication.
(2 searches, 6 fetches)

## Findings
Q1 FOUND (RePEc): Hockenberry JM, Helmchen LA, "The nature of surgeon human capital depreciation", J Health Econ vol 37(C), pp 70-80, 2014, DOI 10.1016/j.jhealeco.2014.06.001. NBER page also cites same vol/pages.
Q2 Published abstract: 188 surgeons, 56,315 CABG, Pennsylvania 2006-2010. WP body: 56,315 discharges, 188 surgeons, 62 hospitals (Sec 4.1); PHC4 Pennsylvania Inpatient Hospital Discharge Data, Q3 2006-Q4 2010 (Sec 3.3). Unit = CABG discharge (patient); exposure is surgeon-level temporal distance varying per case; SEs clustered by surgeon. 62 hospitals and the quarters appear only in WP body read; published body not read. High-volume emergent subsample 93 surgeons, 9,853 patients.
Q3 WP (Sec 3.3.2, 3.1): two measures, days since surgeon's last CABG and days since last any inpatient procedure; linear in days (LPM), though theory assumes exponential decay. Published body not read.
Q4 WP Table 2 (all coefficients x100 = percentage points per day; LPM; surgeon + hospital FE; full sample): any-procedure in-hosp 0.067*** (0.025), 1-day 0.046*** (0.014); CABG recency in-hosp 0.032** (0.015), 1-day 0.010 (0.006). All four figures exist with the stated SEs. Note: 0.032 is significant at 5% in Table 2 (WP Sec 4.2 text reportedly says CABG effect not significant for full sample - internal inconsistency in WP). Other columns: emergent any-proc in-hosp 0.202 (0.062); high-volume 0.168 (0.044); high-vol emergent 0.398 (0.101). Published abstract confirms 0.067 pp (2.4% relative) and 0.398 pp (11.4%) only.
Q5 WP: surgeon, hospital (and year) FE; patient controls; log hospital and log surgeon CABG volume over trailing 365 days (Sec 3.1, 3.3.3; wording inconsistent between sections: "leading up to and including"). Published body not read.
Q6 WP Sec 3.2: "Increases in temporal distance could be correlated with unobserved determinants of patient survival". Sec 5: "endogenous scheduling of patients by severity may have confounded the estimates". Emergent subsample argued less vulnerable ("call schedule which is fixed ex ante"); abstract calls it "most plausibly exogenous". Findings framed as "consistent with" a mechanism. Published abstract (RePEc summary) also says "consistent with". Published body not read.
Q7 WP: NOT FOUND as derived interval. Models linear, no threshold. Mentions prior work (Hockenberry 2008) with 0-2 vs 3-14 day breaks (+11-14% mortality) and speculates largest losses in first few days. Read WP in full via summariser; published body unread so cannot say for published.
Q8 Cannot fully compare. Headline numbers in published abstract (RePEc) and WP abstract identical: 188 surgeons, 56,315, 0.067 pp, 2.4%, 0.398 pp, 11.4%, $7,871-18,500 per life-year. No difference seen at abstract level. Body-level differences UNVERIFIED.
