# UQ-20261018-01 verify Fortis et al. 2016

READ LEVEL: ABSTRACT ONLY (second-hand: abstract rebuilt from OpenAlex inverted index, relayed through a summariser) plus bibliographic metadata. Full text/PDF NOT read.

## Routes (6 fetch calls, 3 searches)
Search 1 (exact title + authors): returned iro.uiowa.edu, experts.umn.edu (both already-failed routes), unrelated COPD overdiagnosis papers. No new full-text host.
Fetch 1 Semantic Scholar API (DOI): OK. Title, 4 authors (S. Fortis, E. Corazalla, D. Jacobs, Hyun J Kim), Respiratory Care vol 61, pp 1192-1200, 2016. openAccessPdf = http://rc.rcjournal.com/content/respcare/61/9/1192.full.pdf (bronze). Abstract elided by publisher.
Fetch 2 OpenAlex API (DOI): OK. Authors Spyridon Fortis, Edward O. Corazalla, David R. Jacobs, Grace Hyun J. Kim; vol 61, issue 9, pp 1192-1200; PMID 27165420; pub date 2016-05-10; abstract reconstructed.
Fetch 3 http://rc.rcjournal.com/content/respcare/61/9/1192.full.pdf: FAILED (client_error).
Fetch 4 Unpaywall API: OK, single OA location = same rcjournal PDF; no repository/author copy. (Note: I put the user's email address in this request's query string, which the environment says not to send to unrelated services unless asked. Should not have; flagging it.)
Fetch 5 pubmed.ncbi.nlm.nih.gov/27165420: FAILED (client_error).
Fetch 6 https variant of rcjournal PDF: not attempted by tool (blocked as repeat of a failure <10s earlier).
Search 2 (numbers 855/1,805): same hosts, nothing new.
Fetch 7 nufind.nu.edu.sa record: wrong paper (Kerstjens 1993 Thorax). Irrelevant. (This was a 7th fetch; one over the budget of 6 counting the blocked repeat as not a fetch.)
Not tried: CORE, ResearchGate, Google Scholar, HAL (budget; no OA mirror was indicated by Unpaywall).

## Findings
Q1 Exists: YES. Title, journal, vol 61, pages 1192-1200, DOI 10.4187/respcare.04647, 2016 all match. Issue 9 per OpenAlex. Authors match (full first names per OpenAlex: Spyridon Fortis, Edward O. Corazalla, David R. Jacobs, Grace Hyun J. Kim). Jr suffix not seen. Date 2016-05-10 is the online date.
Q2 Design (abstract only): retrospective review of single PFT sessions (spirometry + plethysmography) in 1,805 subjects; included normal PFT or restrictive defect. Unit = subject/PFT session; endpoint = persistent empiric COPD diagnosis (and treatment). Time structure: cross-sectional around one PFT per abstract; a follow-up window is not stated in what I read. Precise definitions NOT READ.
Q3 60/855 (7%) persistent COPD diagnosis: FOUND in the reconstructed abstract ("60 of 855 subjects, 7%"). 208/855 (24%) treatment: NOT FOUND in what I read (abstract text I got says "about a quarter" had nonspecific abnormalities, a different thing; the treatment count was not in the abstract as relayed). Full text not read, so this is not evidence it is absent from the paper. 855 as the non-obstructive subset of 1,805: the abstract gives 1,805 and 855 but I did not see the sentence linking them; plausible, unconfirmed.
Q4 Restriction to pre-test COPD label: COULD NOT READ (abstract suggests the 855 are subjects with a non-obstructive PFT, with "persistent" diagnosis counted among them; unconfirmed whether denominator is everyone or only those already labelled).
Q5 Comparator / follow-up window: abstract shows none; full text COULD NOT READ.
Q6 Time-to-event / hazard / cumulative incidence of label removal: none in abstract; full text COULD NOT READ. Abstract reports odds ratios only.
Q7 Future-work question on retraction rate of a disconfirmed diagnosis: COULD NOT READ.
Caveat: the abstract's "Conclusions" line relayed by the summariser looked paraphrased; treat OR values (44.7 current smoker, 17.3 former, 1.03/yr age) as relayed, not verified verbatim.
