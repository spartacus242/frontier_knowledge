# VERIFY - Sheintuch et al. 2017 (CellReg, Cell Reports 21:1102-1115): still unread past the abstract; eight routes failed, and what Figure 6 does remains UNKNOWN, not absent

Checker: fresh context. Budget used: 8 WebFetch, 3 WebSearch. Date 2026-10-22.
(Run executed 2026-10-23; the date line above is the template's.)

## CLAIM

The claim under test is the entry's own record about its Disguise attack, not a claim about neuroscience: that the single document which decides the Disguise attack - Sheintuch L., Rubin A., Brande-Eilat N., Geva N., Sadeh N., Pinchasof O., Ziv Y. (2017), 'Tracking the Same Neurons across Multiple Days in Ca2+ Imaging Data', Cell Reports 21(4):1102-1115, DOI 10.1016/j.celrep.2017.10.013 - has never been read beyond its abstract, and that what the paper does is UNKNOWN rather than absent. The entry records three failed routes across three agents (sciencedirect: robots_disallowed; cell.com: client_error; PMC5670033: hard-blocked) and holds two abstract-level strings: that current cell-registration practices "do not quantitatively evaluate registration accuracy, possibly leading to data misinterpretation", and "estimated error rates <5%".

VERDICT ON THE CLAIM: it HOLDS, and it is now better evidenced than when recorded. An independent fresh-context attempt on eight routes, five of them routes the entry had not tried, also failed to get past abstract level. The paper's full text is COULD NOT READ here, which is a fact about this environment's reach and not a fact about the paper. The entry is right that what the paper does is UNKNOWN; nothing below licenses reading that silence in either direction.

## READ LEVEL

- Sheintuch et al. 2017, Cell Reports 21(4):1102-1115, DOI 10.1016/j.celrep.2017.10.013: **ABSTRACT ONLY, and even the abstract only as a paraphrase**, not verbatim. No section of the body, no figure caption, no Methods and no Figure 6 was retrieved by any route. Read level for the body is COULD NOT READ.
- Important qualification on the abstract: the one route that served abstract content (DOAJ record c1aec0a7a6a4405daf6122e1fcf5fa14) returned it through the summariser, which **declined to reproduce the abstract verbatim**, citing its ~125-character quotation cap, and gave a paraphrase instead. So this check did not even raise the entry's two abstract strings from "recorded" to "verified verbatim". I have no verbatim sentence from this paper to quote.
- Front matter: **FULL and independently confirmed**, but from a metadata record (OpenAlex W2765445094, keyed on the DOI), not from the paper's own printed front matter. Treat the author order below as metadata-confirmed rather than front-matter-read.

Sub-claims reached:
- (a) ANSWERED (this section plus ROUTES THAT FAILED).
- (b) ANSWERED from OpenAlex metadata, with the caveat just given.
- (c) **COULD NOT CHECK.** Whether the paper varies a registration error rate and propagates it into cell turnover, population-vector correlation, place-field stability or any drift measure is unread. What Figure 6 plots, on what axes, in what units, is unread. This is not a negative finding.
- (d) **COULD NOT CHECK.** The "<5%" figure's location in the body, its numerator class, its denominator, and whether it is measured against a functional-response-independent ground truth are all unread. The abstract-level paraphrase places an under-5% claim in the abstract but gives no denominator and names no ground truth.
- (e) **COULD NOT CHECK as a quotation.** I cannot quote any sentence whole, with the words before and after the clause, because no verbatim sentence was served. See DEFECTS FOUND for what the paraphrase does and does not support.
- (f) **PARTLY, at abstract level only.** The paraphrase names Ca2+ imaging data, and recordings from hippocampus and cortex of freely behaving mice, and mentions no extracellular electrophysiology. An abstract's silence about electrophysiology does not establish that the body never treats it; this is unenumerated over the body, not established.
- (g) **COULD NOT CHECK.** I cannot state whether this paper performs the candidate's propagation. The honest one-sentence answer is: unknown from this read.

## WHAT THE SOURCE SAYS (quotations as served)

No verbatim sentence from Sheintuch et al. 2017 was served to me by any route, so this section carries no quotations from the paper. What follows is labelled by what it actually is.

1. Front matter, as the OpenAlex record (W2765445094, keyed on DOI 10.1016/j.celrep.2017.10.013) serves it:
   - Title: "Tracking the Same Neurons across Multiple Days in Ca2+ Imaging Data"
   - Authors, in the record's printed order (raw_author_name): Liron Sheintuch; Alon Rubin; Noa Brande-Eilat; Nitzan Geva; Noa Sadeh; Or Pinchasof; Yaniv Ziv (last, corresponding).
   - Journal Cell Reports (Cell Press / Elsevier BV); volume 21; issue 4; pages 1102-1115; publication date 2017-10-01; DOI 10.1016/j.celrep.2017.10.013; PMID 29069591.
   - PMCID: **not stated as an id in the record.** The record carries a PMC location with the OAI identifier pmh:oai:pubmedcentral.nih.gov:5670033, from which PMC5670033 is an inference, not a printed field. The entry's PMC5670033 is therefore consistent with the metadata but is, in this record, inferred rather than asserted.
   - is_oa: true. Best OA location pdf_url, verbatim: http://www.cell.com/article/S2211124717314304/pdf
   - DOAJ record listed as an OA location: https://doaj.org/article/c1aec0a7a6a4405daf6122e1fcf5fa14
   - Both NCBI locations (PubMed landing page; PMC article 5670033) are listed and both are unusable here.

2. Abstract content, **as the summariser paraphrased it from the DOAJ record** - this is the summariser's wording, NOT the paper's, and must never be quoted as the paper's:
   "The paper introduces a probabilistic method that automatically matches the same neurons across multiple imaging sessions in Ca2+ imaging data, and estimates a confidence value for each match. The authors note that current registration approaches, manual or automatic, often don't measure accuracy, which can lead to misinterpreted data. Using large-scale recordings from the hippocampus and cortex of freely behaving mice over weeks, they report that their method is more accurate than previously used routines, with estimated error rates below 5%, and that it scales to many sessions."
   The DOAJ page itself served no author list beyond "Sheintuch et al.", no volume, no issue, no pages, no DOI and no full-text link.

3. What the DOAJ-derived paraphrase supports and what it does not:
   - It is consistent with both strings the entry records. It does not verify either verbatim, and it does not let me check the grammar on either side of the entry's cuts.
   - On the entry's first string, the paraphrase locates the misinterpretation clause as a statement about **current practice** ("current registration approaches, manual or automatic"), i.e. a motivating claim about what other people's registration does not do. Scope-setting opener: on the paraphrase, the clause's subject is current approaches, not this paper's own results, and the clause ASSERTS a risk ("possibly leading to", on the entry's wording) rather than reporting a measured propagation. A hedged risk about other people's practice is not a measurement of how error rate moves a stability statistic. But I could not read the sentence, so I cannot certify where its opening words place the scope - that remains unchecked.
   - On the entry's second string, the paraphrase attaches an under-5% figure to the authors' own method's accuracy ("their method is more accurate than previously used routines, with estimated error rates below 5%"). It gives **no denominator, no numerator class and no ground truth.** On this read the paper ANNOUNCES an error rate for its own registration; whether anything downstream is computed from it is unread.

## REGIME

Stated in the source's own terms only as far as the abstract-level paraphrase reaches, with the gaps named:
- Instrument: Ca2+ imaging data (the title's own words). The paraphrase names "large-scale recordings from the hippocampus and cortex of freely behaving mice over weeks". No mention of extracellular electrophysiology, read at abstract level.
- Unit of analysis: individual neurons matched across imaging sessions; the method "estimates a confidence value for each match", so the unit appears to be the candidate cell pair / match. The exact numerator class and denominator of the error rate are UNREAD, so I cannot check the regime against the claim at the level this ledger requires.
- Operating condition: multiple sessions across days to weeks; "scales to many sessions".
- Threshold / category: UNREAD. Whether the paper sweeps a registration threshold, and over what range, is exactly the unread part.

Does the claim sit inside this regime? The candidate's propagation is an instrument-level question (calcium imaging, the sister instrument) and this paper is on that instrument, so the regimes are adjacent in instrument. But the propagation step - error rate varied, downstream drift statistic recomputed - is the part of the regime I could not observe at all. The correct statement is that I cannot place the claim inside or outside this paper's regime, because the regime's decisive axis (does the paper's analysis extend past its own accuracy number) is unread.

## DEFECTS FOUND

1. **No defect in the entry's record of this source.** The entry says the paper is unread past the abstract and that what it does is UNKNOWN rather than absent. Both are correct and survive a fresh attempt. The entry does not overclaim from the abstract in either direction, which is the right handling.

2. **The entry's route list is incomplete and should be extended.** It records three failures. Five further routes failed here, including two the task's own route list named (core.ac.uk, scholar.archive.org) and one not in the list (web.archive.org). Anyone re-attacking this entry should know that the Internet Archive path is also closed in this environment, since that is the route a reader would reach for next.

3. **A live PII discrepancy that no agent appears to have followed, and the most actionable thing in this note.** The entry's cell.com routes are built on PII S2211-1247(17)31466-6, i.e. S2211124717314666. The OpenAlex best-OA record gives the publisher PDF as http://www.cell.com/article/S2211124717314304/pdf - PII **S2211124717314304**, a different PII for the same DOI. One of the two is wrong. The entry's cell.com attempt returned client_error, which is consistent with a wrong PII as well as with a server block, and the showPdf attempt returned robots_disallowed, which is path-level and would have failed on either PII. I had no fetch left to test the OpenAlex PII. **Recommended next route, and the only untested one I can justify: https://www.cell.com/article/S2211124717314304/pdf and the matching fulltext path, before concluding cell.com is closed.** Naming it is a lead with a stated kind: a publisher-hosted PDF of an open-access article is exactly the kind of document that would settle sub-claims (c) through (g), because it carries the figure captions and Results. That is why it is a lead and not a guess; I have not opened it, so it settles nothing yet.

4. **Do not let the summariser's paraphrase enter the ledger as the paper's words.** The abstract content in this note is the summariser's wording. If the entry's two strings were themselves captured through the same summariser at some earlier pass, they are at risk of being paraphrase-with-quote-marks; they should be re-sourced verbatim before any adversary leans on the exact phrase "possibly leading to data misinterpretation" or "estimated error rates <5%". I could not verify either string character-for-character.

5. **One unenumerated universal to flag in my own report, so it is not read as settled.** On the instrument question (f), "the paper is calcium imaging only" is true over the instances I opened - which is the title and an abstract paraphrase - and **unenumerated over the body**, which I did not open. Same shape applies to the decisive question: "the paper does not propagate its error rate into a drift statistic" is NOT a finding of this check; it is unenumerated.

## ROUTES THAT FAILED

Eight fetches, every one of them on a document route, and three searches.

1. https://www.cell.com/cell-reports/fulltext/S2211-1247(17)31466-6 - FAILED, **client_error** at the site; nothing of the page retrieved. (Route 1 of the task list; matches the entry's recorded cell.com failure.)
2. https://www.cell.com/action/showPdf?pii=S2211-1247%2817%2931466-6 - FAILED, **robots_disallowed**; nothing retrieved. (Route 2.)
3. https://api.semanticscholar.org/graph/v1/paper/DOI:10.1016/j.celrep.2017.10.013?fields=title,openAccessPdf,externalIds,authors,year,venue - FAILED, **client_error**. (Route 4.) Retried once through curl, which failed differently and tool-scoped: **CONNECT tunnel failed, response 403** at the agent proxy, HTTP 000. So the Semantic Scholar openAccessPdf field was never obtained by either tool.
4. https://scholar.archive.org/search?q=%22Tracking+the+Same+Neurons+across+Multiple+Days+in+Ca2%2B+Imaging+Data%22 - FAILED, **robots_disallowed**. (Route 6; not previously recorded in the entry.)
5. https://core.ac.uk/search?q=... (same quoted title) - FAILED, **robots_disallowed**. (Route 5; not previously recorded in the entry.)
6. https://api.openalex.org/works/doi:10.1016/j.celrep.2017.10.013 - **SUCCEEDED**, metadata only. Source of the front matter in (b) and of the PII discrepancy in DEFECTS FOUND item 3. Not a full-text route.
7. https://web.archive.org/web/2021/https://www.cell.com/cell-reports/fulltext/S2211-1247(17)31466-6 - FAILED, **SITE_BLOCKED from target: "Access to this website has been blocked"**. Not in the task's route list; recorded because it is the obvious next reach and it is closed here.
8. https://doaj.org/article/c1aec0a7a6a4405daf6122e1fcf5fa14 - **SUCCEEDED**, abstract-level only, and the abstract came back paraphrased rather than verbatim (summariser's 125-character quotation cap). No author list, no volume, no pages, no DOI, no full-text link on the page.

Not attempted, deliberately: PubMed Central and Europe PMC (hard-blocked per instruction); Unpaywall (would require putting a contact email address in a query string, which is forbidden). PMC5670033 was treated as an identifier, never as a route.

Searches, all three spent and all three unproductive for a readable copy:
- S1: Sheintuch + full quoted title + "Cell Reports 2017 pdf full text" - returned DOAJ, two Israeli CRIS records, PMC5670033, CORDIS project pages. No reachable full text.
- S2: the seven surnames + CellReg + "pdf download" - returned nothing relevant to this paper at all (unrelated publication lists).
- S3 (extended): quoted title + Sheintuch Ziv 2017 pdf, restricted toward .edu / .ac.il - returned the Ziv lab publications page (https://www.weizmann.ac.il/brain-sciences/labs/ziv/publications), the Haifa CRIS record, an academia.edu posting of the article, DOAJ, PMC, and several unrelated lab PDFs. No search was refused by the classifier.

Two unopened leads, each with its kind stated so the next checker does not have to re-derive them, and neither of which I am claiming as evidence:
- https://www.cell.com/article/S2211124717314304/pdf (publisher PDF of an OA article - the right kind of document to settle (c)-(g); untested PII, see DEFECTS item 3). Also worth trying https://www.cell.com/cell-reports/fulltext/S2211124717314304.
- https://www.weizmann.ac.il/brain-sciences/labs/ziv/publications (a lab publications page - the right kind of document to yield an author-hosted PDF link, the wrong kind to answer any sub-claim by itself). The academia.edu posting is a repost host; it may carry the real PDF, but it is not a citable identifier and the paper's DOI is already resolved, so it should be used only as a file source, never cited.

## BEARING ON THE LEDGER ENTRY

**HOLD the Disguise attack exactly as recorded, and do not move novelty in either direction on the strength of this check.**

- The claim I was asked to test - that this decisive document is unread past its abstract and that what it does is UNKNOWN rather than absent - is confirmed. Eight routes, five of them new, did not reach the body. The entry's handling of the gap is correct: an unread document's silence is not evidence, and the Disguise hole neither closes in the candidate's favour nor opens against it on anything I obtained.
- Nothing I read bears on the branch point the entry turns on. I cannot say whether the paper varies a registration error rate into a downstream stability, turnover or drift statistic (Figure 6 unread, Results unread), nor whether it only validates an algorithm and reports its own accuracy. Both of the entry's conditional futures remain open. Novelty stays at Medium by default, not because Medium was confirmed, but because the test that could lower it did not run.
- **NARROW the entry in two mechanical ways.** (i) Extend its recorded route list from three to eight failures, adding core.ac.uk (robots_disallowed), scholar.archive.org (robots_disallowed), web.archive.org (site blocked), the Semantic Scholar graph API (client_error by WebFetch, proxy 403 by curl), and noting that DOAJ and OpenAlex succeed but are metadata/abstract only. (ii) Record that the two abstract strings the entry carries are, on this check, consistent-but-not-verbatim-verified, and that the misinterpretation clause appears to be scoped to current practice by other people rather than to a result of this paper - a hedged motivating claim, not a measurement.
- **CONVERT the decisive part to an explicit promotion condition, because that is what an unread document deserves:** "Promotion of UQ-20261023-01 above Provisional requires the Results and Figure 6 of Sheintuch et al. 2017 (DOI 10.1016/j.celrep.2017.10.013) to be read in full. If the paper varies a registration error rate - by threshold sweep or by simulating known error rates - and prints the resulting change in any turnover, population-vector-correlation, place-field-stability or drift statistic, the candidate's core design is a performed-and-published method on the sister instrument and novelty drops toward Low. If it reports only its own registration accuracy with no downstream propagation, the Disguise hole closes in the candidate's favour." The condition should name the untested cell.com PII S2211124717314304 as the first route to try, since the recorded cell.com failure may be an artifact of a wrong PII rather than a host block.
- The front matter in the entry's citation needs no correction: author list, order, journal, volume 21, issue 4, pages 1102-1115, year 2017 and DOI all match the OpenAlex record keyed on that DOI. The only front-matter refinements are additions: PMID 29069591, and the note that PMC5670033 is inferred from an OAI identifier rather than printed as a PMCID field in that record.
- Provisional therefore stands, for the reason the entry already gives: the document that would decide it has not been opened. That is a fact about the batch's reach, and this check extends the evidence for it rather than changing it.
