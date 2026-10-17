# UQ-20261016-64 verification 2 - working notes

## Searches (3 of 7 used; none refused)
1. "University of Goettingen dissertation clinical documentation loss recorded consultation versus written medical note" -> no matching dissertation; hits incl. ediss.uni-goettingen.de/handle/11858/14818 and a NeurIPS 2026 "Beyond Facts - What AI Clinical Notes Leave Out" listing (not requested, not opened).
2. "JMIR Medical Informatics 2026 e88734" -> only generic journal index pages; no hit for the article itself.
3. German-language Goettingen dissertation query (Dokumentation/Arztbrief/Gespraechsaufzeichnung) -> nothing identifiable; ediss.uni-goettingen.de/handle/11858/14732 listed but NOT opened (fetch pool used up).

## Fetches (6 of 6 used)
1. https://medinform.jmir.org/2026/1/e88734 -> returned EMPTY content.
2. https://arxiv.org/abs/2010.03574 -> opened OK.
3. https://aging.jmir.org/2023/1/e44037 -> opened OK.
4. https://doi.org/10.2196/88734 -> 302 redirect to medinform.jmir.org/2026/1/e88734 (same page as 1).
5. https://ediss.uni-goettingen.de/handle/11858/14818 -> opened; Tolle 2023, clinical workstation system; analog vs digital surgical protocols; NOT the target.
6. https://medinform.jmir.org/2026/1/e88734 retried with different prompt -> empty again.

## Strings checked
- arXiv: "medical notes only provide additional predictive power over structured information in readmission prediction"
- JMIR Aging: "characterize the magnitude of variation in the availability of data from chart abstraction or survey"

## Conclusions
1. e88734: COULD NOT READ. Routes failed: direct page (empty x2), DOI redirect (lands on same empty page), web search (no hit). PMC/Europe PMC blocked. Cannot answer yes/no from the source. DOI 10.2196/88734 was assumed from the JMIR pattern; the redirect confirms it resolves to that URL.
2. arXiv 2010.03574: "Characterizing the Value of Information in Medical Notes" (Hsu, Karnwal, Mullainathan, Obermeyer, Tan). Readmission and in-hospital mortality; structured data alone vs structured + notes. No transcripts. No speaker/interpreter/accent breakdown. Answer: NO / NO.
3. JMIR Aging 2023;6:e44037: Bernstein et al., diabetes life expectancy (Lee index) from patient survey vs EHR chart abstraction, n=75. No transcripts, no notes-from-encounter comparison, no language attributes. Answer: NO / NO.
4. Goettingen dissertation: not identified within 2 searches. The one Goettingen item opened (Tolle 2023) is about analog vs digital surgical records, not consultation-to-note loss.
