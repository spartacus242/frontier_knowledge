# UQ-20261016-65 verification 2 (working notes)
Searches: 6 of 7 used (none refused). Fetches: 6 of 6 used.

## Searches
1. "Radiology Business 40% of images, radiology reports requiring follow-up are never reviewed" -> found RB article (node/121381 and topics/.../40-images-reports-intervention-never).
2. Yousem neuroradiology never viewed PACS EMR logs JACR -> only RB/AuntMinnie secondary pages; JACR paper itself not surfaced.
3. PACS analytics which series viewed -> Intelerad InteleViewer help, AuntMinnie, patents; no vendor series-view report.
4. enterprise imaging analytics viewer usage (Sectra/Merge/Visage/Hyland) -> HIMSS/SIIM viewer paper, KLAS pages; nothing opened with series-level metric.
5. radiology analytics dashboard image views -> Carestream Vue dashboard release, AccelaRad analytics, others.
6. PACS "which series" opened hanging protocol analytics -> patents, IHE wiki; no vendor product doc.

## Opened
- OPENED https://radiologybusiness.com/topics/health-it/enterprise-imaging/imaging-informatics/40-images-reports-intervention-never (Thakar, 6 Nov 2018)
- OPENED https://radiologybusiness.com/node/121381 (same article, exact strings)
- OPENED https://cdn.auntminnie.com/.../15599431/siim-pacs-audit-data-unlock-ed-image-viewing-stats (exam-level, Staten Island Univ Hosp, no vendor)
- OPENED https://inteleviewer.documentation.intelerad.com/iv-help/PACS-5-4-1-P2/en/Content/Topics/IV_AboutOpeningStudiesSeries.html (how to open series; no view-tracking report)
- OPENED https://radiologybusiness.com/.../clinicians-view-neuroradiology-reports-more (same Yousem dataset, ~7,000 studies)
- OPENED https://www.carestream.com/newsandevents/news-releases/2012/... (dashboard: study-level ops metrics)
- NOT OPENED: JACR paper DOI (not surfaced by search; no fetch left), any Sectra/Merge/Visage/Hyland analytics docs.

## Strings checked (RB article)
- "Of the 124 never-viewed studies, 20 percent were classified as normal, 40 percent were minor unimportant findings,"
- "40 percent were classified as findings that require intervention or follow-up and less than 1 percent were critical."
- "approximately 8.4 percent had neither images or imaging reports viewed in PACS or EMRs."
- "neither the imaging nor the radiology report accessed in the eight months after the imaging order was placed" (from first summariser pass only; not re-confirmed on second pass)

## Conclusion 1
40% = share of the 124 never-viewed neuroradiology studies (about 8.4% of >8,200) classed as needing intervention/follow-up, i.e. ~50 studies, ~0.6% of all studies. Not 40% of all follow-up-requiring studies. Headline is misleading. Viewing = any access to images or report in PACS/EMR logs (viewer not distinguished; patient only as proposed alert recipient). Unit: study (order). Comparator: none for the 40% (descriptive split across severity classes); setting comparisons separate.
## Conclusion 2
No vendor doc found documenting per-series view reports. Only study/exam-level viewing found (AuntMinnie 2010-11 Staten Island exam-view study; Carestream dashboard study-level ops metrics). Absence in 6 searches is not proof of non-existence.
