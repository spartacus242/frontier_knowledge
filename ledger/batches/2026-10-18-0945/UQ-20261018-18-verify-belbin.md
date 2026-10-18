# UQ-20261018-18 — Source read: Belbin et al. 2020, BISS 4:e58982

**Read level: FULL TEXT (via summariser).** Entire main text recovered from the publisher's own
JATS XML (biss.pensoft.net/article/58982/download/xml/) as ordered ≤80-character consecutive
segments across two complementary halves, plus targeted segment re-reads of the decisive paragraph,
plus an independent first-page read via biss.pensoft.net/article_preview.php?id=58982.
NOT "RAW": every read passed through the WebFetch summariser — direct curl is denied in this
environment (see Failed routes). Version read: the **published** version. No preprint exists or was used.

**Not read:** the content of the 2 reference-list entries (only their citation markers appear in text),
and whether the "Supplementary material" heading has content. Absence claims below are scoped to the
main text, which I did read in full.

**Budget used:** 1 web search (of 7), 6 WebFetch calls (of 7) — 5 successful, 1 refused.

---

## Q1. Existence, title, author line, bibliographic details, kind and length

**Exists.** Title exactly as printed on the first page:

> Task Group 2 – Data Quality Tests and Assertions

The dash is an **en dash (–)**, not the hyphen used in the brief.

**Author line in printed left-to-right order** (from the article's own first page and the XML front
matter): **Lee Belbin‡, Arthur Chapman§, John Wieczorek|, Paul J. Morris¶, Paula F Zermoglio|**
— five authors, affiliation markers ‡ § | ¶ | with the key printed beneath. This matches the order
given in the brief (Belbin, Chapman, Wieczorek, Morris, Zermoglio). Note "Paula F Zermoglio" is
printed without a stop after the middle initial. Presenting author: Lee Belbin.

Journal *Biodiversity Information Science and Standards*, volume **4**, article **e58982**, **2020**
(published online 1 October 2020), DOI **10.3897/biss.4.58982**, publisher Pensoft. No issue number
stated. Presented at **TDWG 2020** (virtual).

**Kind and length: a short CONFERENCE ABSTRACT, not a full paper.** Article-type label on the page is
"Conference Abstract". The whole content sits inside the abstract: headings in order are Abstract →
Motivation → Goals, Outputs and Outcomes → Strategy → Status 2019-2020 → What has occurred during the
past year? → Keywords → Presenting author → Presented at, then empty boilerplate headings
(Acknowledgements through Conflicts of interest, no content) → References (2 entries) →
Supplementary material. **No figures, no tables.** About two printed pages. Main text is roughly
**600–700 words** — *my own estimate, from counting the reconstructed segments*; the two fetch
summarisers' own estimates were ~730 words (main text) and ~900 words (whole page incl. front/back
matter). This length bounds everything below: there is no methods section, no dataset, no analysis.

One uncorroborated detail: the first (broad) fetch described the type as "Conference Abstract
(CO – Contributed Oral Presentation)". The first-page read found **no** presentation-type code.
I do not rely on "CO".

## Q2. The two supplied strings, each checked un-primed

Both strings were recovered **without being supplied to the fetcher** — I asked for mentions of the
term and for the paragraph by its opening words, never for these phrases — and each was independently
recovered twice, in two separate requests. This satisfies the un-primed requirement rather than
merely echoing strings back.

**(a) "the most recent dropping of the two tests related to dwc:identificationQualifier" — VERBATIM.**
Contiguous and exact. The sentence as the document has it:

> Several times over the past three years, we believed we had finalized the tests, only to find new
> issues that have required a fresh understanding and subsequent edits, e.g., the most recent dropping
> of the two tests related to dwc:identificationQualifier:

Surrounding passage: preceded by the section's opening sentence, "The core tests have proven to be far
more complex than any of the team had anticipated." Followed immediately by the two bulleted test
names (see Q3). The supplied string is a clause fragment ending where the sentence's colon introduces
the list — fine as a quotation, but it is not a sentence.

**(b) "rules of open nomenclature are unevenly adopted across data records" — VERBATIM but CLIPPED.**
The string is contiguous and exact in the document. The sentence as the document has it:

> Aside from there being many values, the term expects the qualifier in relation to a given taxonomic
> name, and rules of open nomenclature are unevenly adopted across data records to reliably parse and
> detect dwc:identificationQualifier for these tests to be effective.

**Flag:** cutting the string at "data records" turns a subordinate clause into what reads as a
standalone empirical claim about adoption. In the document the clause runs straight on into
"**to reliably parse and detect** dwc:identificationQualifier **for these tests to be effective**" —
i.e. the point is that adoption is too uneven *for the tests to work*, not a free-standing finding
about nomenclature practice. The printed sentence is also grammatically incomplete as written (it
lacks the "too…/not…enough…" that the "to…for…to be effective" construction needs); I report it as
printed and have not smoothed it.

Full surrounding paragraph (reconstructed from ordered ≤80-char segments; 68 words, and my own word
count of the reconstruction agrees with the summariser's count of 68, so the paragraph is complete):

> This decision resulted from a review of dwc:identificationQualifier values in GBIF records and an
> evaluation of expected values based on the Darwin Core definition of the term. Aside from there
> being many values, the term expects the qualifier in relation to a given taxonomic name, and rules
> of open nomenclature are unevenly adopted across data records to reliably parse and detect
> dwc:identificationQualifier for these tests to be effective.

Followed by: "A similar situation occurs for dwc:scientificName, where we have resorted to the term
"polynomial" to refer to the non-authorship part of dwc:scientificName."

Truncation note (rule 5): the summariser did cut quotations at ~125 characters on the first targeted
request. I worked around that by requesting ordered ≤80-character segments, not by completing any cut
string myself. Every quotation above is assembled only from consecutive segments the document returned.

## Q3. What the document DOES about dwc:identificationQualifier — DECISIVE

**Yes: the Task Group specified two tests over the field and then dropped them.** The dropped tests
are named in the document:

> TG2-VALIDATION_IDENTIFICATIONQUALIFIER_DETECTED and
> TG2-AMENDMENT_IDENTIFICATIONQUALIFIER_FROM_TAXON

(one a VALIDATION test, one an AMENDMENT test — i.e. both record-level.)

**Stated reason, quoted:** "This decision resulted from a review of dwc:identificationQualifier values
in GBIF records and an evaluation of expected values based on the Darwin Core definition of the term.
Aside from there being many values, the term expects the qualifier in relation to a given taxonomic
name, and rules of open nomenclature are unevenly adopted across data records to reliably parse and
detect dwc:identificationQualifier for these tests to be effective."

**Framing: a DECISION TAKEN, reported in passing as an illustration — not an open question, and not
handed to others.** Three things fix this:
- The document's own word is "decision" ("This decision resulted from…"), stated in the past tense
  and as settled.
- It is introduced as an *example* of a general difficulty: the dropping is cited after "only to find
  new issues that have required a fresh understanding and subsequent edits, **e.g.**, the most recent
  dropping…" — its rhetorical job is to evidence that "the core tests have proven to be far more
  complex than any of the team had anticipated."
- No future work, no research question, no referral to another group, and no call for measurement is
  attached to it. Where the document *does* refer work onward it says so explicitly and about other
  things — "Parameters" fed into Task Group 4, and the dependence on the Annotations Interest Group.
  identificationQualifier gets no such onward referral. The nearest analogue is the adjacent
  dwc:scientificName problem, which the group handled itself by adopting the term "polynomial".

So the field is dropped from scope with a one-paragraph justification grounded in an unquantified
review, and the matter is closed rather than posed.

## Q4. Any MEASUREMENT of qualifier usage, survival or agreement — **NOT FOUND**

Scoped to the full main text, which I read. The document states that a review happened — "a review of
dwc:identificationQualifier values in GBIF records and an evaluation of expected values based on the
Darwin Core definition of the term" — and reports its qualitative outcome ("there being many values",
uneven adoption) but gives **no number whatsoever** about it: no count of records or values examined,
no share, no rate, no survival figure, no agreement figure, no date or snapshot of the GBIF data
reviewed, no list of the values found. "Many values" is the entire quantitative content.

Every number the document does print, with its level of aggregation, so these are not mistaken for
qualifier measurements:
- **"the 99 CORE tests"** — a count of *tests* in the group's own suite ("We have now standardized all
  the test parameters for the 99 CORE tests."). Per-test, not per-record and not per-qualifier.
- **two** tests dropped — per-test.
- **two** test fields that took longest ("Parameters", "bdq:sourceAuthority") — per-field.
- **seven** planned outputs under Goals, Outputs and Outcomes — per-output.
- **"the past three years"**, **"the past year"**, "early in 2020", "Months of work" — durations.
- 2 reference-list entries.

None of these is a measurement of the field in Q3. The aggregation level of the one thing that was
examined (GBIF records carrying dwc:identificationQualifier) is never reported as a quantity at all.

## Q5. Does it state or imply the reliability/agreement rate of open-nomenclature qualifiers is
unknown or unmeasured? — **NOT FOUND as stated; one adjacent sentence, which is about something else**

No sentence says, or implies, that a reliability or agreement rate is unknown or unmeasured. The
document never raises the concept of an agreement rate between a qualified determination and a later
one, and never says a quantity is missing.

The only nearby sentence is the one already quoted: "…rules of open nomenclature are unevenly adopted
across data records to reliably parse and detect dwc:identificationQualifier for these tests to be
effective." Read carefully, this asserts something **different in kind**: that *machine parsing and
detection of the term* cannot be made to work reliably enough for the group's tests, because adoption
of the conventions varies. It is a claim about the tractability of automated testing over the field,
asserted without measurement — not a claim that the field's reliability has been measured, and not a
claim that it is unknown. Treating it as a statement that an agreement rate is unmeasured would be an
inference of the reader's, not of the document's.

## Q6. Does a qualifier SURVIVE from specimen label to delivered aggregator record? — **NOT FOUND**

The document says nothing about whether dwc:identificationQualifier, or any qualifier, survives from
an original specimen label through to a delivered aggregator record. The word "label" does not figure
in any such claim; there is no provenance or pipeline-attrition discussion.

Two sentences sit adjacent to the topic and must not be read as answering it — both are about the
**tests and their results**, not about the qualifier:
- "Broad deployment of the tests, from collector to aggregator" — a planned *output* of the group, i.e.
  where the group wants its tests run; not a statement about data surviving that chain.
- "We recognize the dependence on the work of the Annotations Interest Group for the results from the
  tests to have maximal impact. It is important that test results stay with the records." — this is
  about **test results** staying attached to records downstream, a different object from the
  identification qualifier on a specimen label.

This is exactly the adjacent-object trap: the document does discuss persistence along the
collector→aggregator chain, but of *assertions the group generates*, not of *qualifiers the collector
wrote*.

---

## Failed routes, with exact error text

1. `curl -sS -L https://biss.pensoft.net/article/58982/` →
   `curl: (56) CONNECT tunnel failed, response 403`, `HTTP_CODE:000`.
   Gateway policy denies direct curl to external hosts in this environment
   (`$HTTPS_PROXY/__agentproxy/status` shows the same `connect_rejected` /
   "gateway answered 403 to CONNECT (policy denial or upstream failure)" for doi.org,
   api.crossref.org, link.springer.com and others). **Consequence: FULL TEXT RAW was not attainable
   here by any route; every successful read is summariser-mediated.** This is one single cause behind
   what could look like several unrelated failures.
2. `WebFetch https://api.crossref.org/works/10.3897/biss.4.58982` →
   `{"error_type":"PROXY_REJECTED","source":"proxy","message":"The WebFetch proxy rejected the request
   (HTTP 429; rate limited — the server requests waiting ~60s before retrying): Do not fetch this page
   again, even after waiting; other pages may be refused too. Before doing anything else, tell the user
   which page you could not read and why, then go on without it."}`
   **Refused — recorded and not reworked.** Consequence: the Crossref ordered author list
   cross-check **did not run**. The author line above rests on the article's own first page and the
   publisher's JATS front matter (two independent reads, agreeing), which the rule permits, but the
   independent Crossref confirmation is absent and must not be reported as a check that passed.

PMC / Europe PMC were never attempted (hard-blocked per routing rules; not needed — the publisher is
open access).

## Self-reported errors

- No budget overrun: 1/7 searches, 6/7 fetches.
- One refusal, logged above, leaving the Crossref author cross-check unperformed.
- The first fetch refused verbatim transcription on copyright grounds and returned a summary instead;
  I did not rely on that summary for any quotation. All quotations come from the later segment-wise
  reads. The only item traceable to that first fetch alone is the "CO – Contributed Oral Presentation"
  label, which the first-page read contradicted and which I have flagged as uncorroborated.
- Word-count figures marked as my own estimate are my arithmetic over the reconstructed segments, not
  the document's statement; the document states no length.
