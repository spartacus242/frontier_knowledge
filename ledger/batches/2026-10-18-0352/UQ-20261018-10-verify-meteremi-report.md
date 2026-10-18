# UQ-20261018-10 verify MeterEMI final publishable report

READ LEVEL: COULD NOT READ the Final Publishable Report or Summary (route found, document not opened).
Landing/record pages read: EURAMET project page (via search snippet + fetch), NPL project site conclusion post and results page.

## Log
S1 search "EURAMET 17NRM02 MeterEMI final publishable report": OK. Found empir.npl.co.uk/meteremi site, era-learn record.
F1 euramet.org/.../addressing-emi-effects-on-static-electricity-meters (guessed slug): FAILED (fetch error).
F2 empir.npl.co.uk/meteremi/2022/04/25/project-successfully-concluded/: OK. Says concluded; links "Final report (EURAMET)" to euramet.org/.../electromagnetic-interference-on-static-electricity-meters/ and to /meteremi/publications/. No PDF link on page. No standards bodies named.
F3 euramet.org/research-innovation/search-research-projects/details/project/electromagnetic-interference-on-static-electricity-meters: OK (landing page). Title "Electromagnetic Interference on Static Electricity Meters", MeterEMI, 17NRM02, coordinator Paul Wright (NPL, not VSL). Lists two documents:
  - Final Publishable Report 1.79 MB: euramet.org/download?...files=44078...identifier=/docs/EMRP/JRP/JRP_Summaries_2017/Normative/17NRM02_Final_Publishable_Report.pdf&cHash=31913ccae27b459e18191a41c7612bb4
  - Publishable Summary 0.22 MB: ...files=34850...17NRM02_Publishable_Summary.pdf&cHash=41ab0a2c42c205c4fc4ee6ade59a9dc9
F4 Final report PDF download URL via WebFetch: FAILED, proxy 403 "url exceeds the maximum fetchable length".
   curl of same URL from Bash: FAILED, CONNECT tunnel 403 (not counted as search/fetch; also a proxy status query was denied by the permission classifier, so I did not pursue it).
F5 Publishable Summary download URL via WebFetch: FAILED, same 403 length error.
F6 empir.npl.co.uk/meteremi/results/: OK but it is an interim progress page, not the final report.
S2 search with report phrases: OK. Surfaced an NPL-hosted interim PDF (not fetched): empir.npl.co.uk/meteremi/wp-content/uploads/sites/47/2021/01/01_Publishable_Summary_MeterEMI_M27-V2_MSU-approved.pdf (an M27 interim summary, not the final report). Also euramet.org/project-17nrm02 and mirror euramet-t.bs.ptb.de .../details/project/electromagnetic-interference-on-static-electricity-meters (shorter-link candidates, unfetched).
F7 guessed short legacy path euramet.org/docs/EMRP/JRP/JRP_Summaries_2017/Normative/17NRM02_Final_Publishable_Report.pdf: FAILED (fetch error). Fetch budget (7) used.

Route checklist: (1) EURAMET project page: reached, PDF links found, PDFs unreadable; (2) empir.npl.co.uk: reached, no final-report PDF there; (3) project site = empir.npl.co.uk/meteremi (no separate meteremi.eu tried); (4) VSL repository: not tried, and coordinator is NPL not VSL; (5) Scholar/ResearchGate: not tried; (6) CORDIS: not tried (EMPIR is not in CORDIS normally).

## Findings
Q1 Did not reach either document. Located both on the EURAMET page.
Q2-Q7 COULD NOT READ (not "not found"). Nothing about table, sample size, fleet figure, quoted strings, deliverable status or standards bodies was read from the report.
Side facts from the interim results page (not the report): no comparison table, no sample sizes, no error figures; says a comparison of an ensemble of European meters "will follow testing" (summariser paraphrase, not verified verbatim); names IEC 61000-4-19 only; CENELEC, WELMEC, OIML not mentioned there.
Next step for a later reader: fetch the two download URLs with a client that allows long URLs (or try euramet.org/project-17nrm02 and the euramet-t.bs.ptb.de mirror for shorter link forms).
