# VERIFY — "Price & Mager (2020), J Exp Zool A"

## CLAIM

As the ledger entry cites the source: **"Price & Mager (2020), J Exp Zool A"** — no title, no volume, no DOI. The entry records three failed routes: `biology.unt.edu` returned `robots_disallowed` twice (once percent-encoded), and two dedicated route-hunting queries surfaced no publisher or DOI route.

Sub-claims handed to me:

- **(a)** Does such a paper exist, and what is its full front matter?
- **(b)** Does it CONTAIN a cross-taxon compilation of published respiratory-quotient (RQ) values — a table or dataset of RQ values drawn from other papers? Name the number of values and where the table is, or say the paper does something else.
- **(c)** Does it print any empirical spread, standard deviation, range or distribution of RQ values about 0.7?

## READ LEVEL

**Three different read levels apply to the three sub-claims. They must not be collapsed.**

| Sub-claim | Read level |
|---|---|
| (a) existence + front matter | **Bibliographic-record level, established.** Two independent registries (Crossref REST API; OpenAlex) each return a full, mutually consistent record. I did **not** open the article's own front matter (title page / masthead), so per the front-matter rule this is registry metadata, not the paper's own front matter. |
| (b) cross-taxon RQ compilation | **COULD NOT READ.** Neither full text nor abstract text was obtained. I hold only a *word-presence* report over the abstract's inverted index. **Undetermined.** |
| (c) spread / SD / range about 0.7 | **COULD NOT READ.** Same. **Undetermined**, with one lexical datum (below). |

**This is a COULD NOT READ, not a NOT FOUND.** The paper exists, is uniquely identified, and has a live publisher route. It would not open at this proxy, and OpenAlex reports no open-access copy exists anywhere (`is_oa: false`, `oa_status: "closed"`, `oa_url: null`, `best_oa_location: null`).

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter, as served by the registries

From **Crossref** (`https://api.crossref.org/works?query.bibliographic=Price+Mager+respiratory+quotient&filter=from-pub-date:2019-06-01,until-pub-date:2021-06-30`), result 1 of 10:

- **DOI:** `10.1002/jez.2422`
- **Title, as served:** "Respiratory quotient: Effects of fatty acid composition"
- **Authors, in order:** Edwin R. Price; Edward M. Mager
- **Container-title:** Journal of Experimental Zoology Part A: Ecological and Integrative Physiology
- **Volume:** 333
- **Pages:** 613–618
- **Issued:** 2020-10-15
- **Type:** journal-article

From **OpenAlex** (`https://api.openalex.org/works/doi:10.1002/jez.2422`), confirming and extending:

- **Title:** "Respiratory quotient: Effects of fatty acid composition" (identical string)
- **Authors, in order:** (1) Edwin R. Price — first author, corresponding; (2) Edward M. Mager — last author
- **Affiliation, both authors, as served:** "Department of Biological Sciences, Advanced Environmental Research Institute, University of North Texas, Denton, Texas, USA"
- **Source:** Journal of Experimental Zoology Part A Ecological and Integrative Physiology
- **Volume / issue:** 333 / **9** (the issue number, which Crossref did not return)
- **Pages:** 613–618
- **Publication date:** 2020-10-15
- **Type:** article
- **IDs:** OpenAlex `W3092706616`; DOI `10.1002/jez.2422`; MAG `3092706616`; **PMID `33063463`**
- **Access:** `is_oa: false`; `oa_status: "closed"`; `oa_url: null`; `best_oa_location: null`. Two locations only, both landing pages with `pdf_url: null` — the DOI (publisher) and the PubMed record.
- **Counts:** `referenced_works_count: 48`; `cited_by_count: 17` (as of this check)
- **Indexer keywords, as served:** respiratory quotient, fatty acid composition, lipid oxidation, substrate oxidation, **fish**, docosahexaenoic acid, stearic acid, **cold-water fish**
- **Primary topic:** "Physiological and biochemical adaptations" (0.924). Concepts include Respiratory quotient (0.649), Fatty acid (0.527), Polyunsaturated fatty acid (0.453), Docosahexaenoic acid (0.420).

**Title length check:** the served title is 55 characters, comfortably inside the summariser's ~125-character quotation cap, and the same call explicitly flagged *other* results in the same list as ellipsis-truncated while leaving this one unmarked. The short title is therefore the real title, **not** a truncation artifact. No reconstruction was needed and none was performed.

### Abstract: not read. Only a key-presence report.

The abstract **exists** as an `abstract_inverted_index` in OpenAlex (reported present, not null; roughly 140 distinct indexed words, the responder's own manual tally and flagged by it as unverified). I deliberately did **not** ask for the abstract to be reassembled from an inverted index, because an order-free word bag cannot be turned back into sentences without inference, and inference is exactly what is forbidden here. So **there is no abstract quotation in this note, and none should be attributed to me.**

What I did obtain is a yes/no on whether each of a fixed list of strings occurs as a key. This is a lexical fact about a word list, not a reading of the abstract:

- **Present as keys:** `0.7`, `species`, `taxa`, `fatty`, `acids`, `oxidation`, `lipid`
- **Absent as keys:** `compilation`, `literature`, `review`, `standard`, `deviation`, `range`, `variation`, `table`, `measured`, `diets`, `carbohydrate`, `protein`

### Answers to the sub-claims, at the read level each rests on

**(a) EXISTS.** Full front matter above, from two registries. The ledger's missing title, volume, pages and DOI are now supplied.

**(b) UNDETERMINED — COULD NOT READ.** I cannot say whether the paper contains a cross-taxon compilation of published RQ values, cannot name a number of values, and cannot locate a table. The honest statement is that **I never reached the body or the abstract text.** The only bearing evidence is weak and runs both ways: the abstract's word list contains `species` and `taxa` (consistent with a cross-taxon framing) but not `compilation`, `literature`, `review`, `table` or `measured`; and the paper carries **48 references**, which is a lot for a six-page paper and is consistent with — but does not establish — a literature compilation. **Silence in an abstract's word list is not absence in a paper**, and a 140-word abstract is far too small a surface to rule a table in or out.

**(c) UNDETERMINED — COULD NOT READ, with one lexical datum.** The string `0.7` **is** a key in the abstract's word index, so the abstract does state something involving 0.7. Nothing else follows from that: I cannot say in which sentence, with what hedge, or whether it is a canonical value, a measured value or a contrast. And none of `standard`, `deviation`, `range`, `variation` or `measured` appears as a key. Per the published-is-not-performed rule I must answer by **naming the number and where it is printed**, and **I cannot name any number**: I cannot say whether the paper DEFINES, BOUNDS, PREDICTS, ANNOUNCES or MEASURES a spread about 0.7, because I did not read a single sentence of it.

### Article type

Registry `type` is `journal-article` / `article` for both registries — i.e. **not** registered as a review, editorial or correction. Six printed pages (613–618) with 48 references in *J Exp Zool A*'s page economy is consistent with a short research paper or a short synthesis/review-style contribution; **the registry type does not discriminate between those, and I could not read the paper to tell which it is.** Whether any finding in it is attributed to someone else is therefore also unestablished.

## REGIME

**Stated honestly: I could not establish the paper's regime, because I could not read it.** What the metadata indicates, and only indicates:

- The indexer keywords are **fish** and **cold-water fish**, alongside docosahexaenoic acid and stearic acid; the concept scores are dominated by polyunsaturated fatty acid and DHA. Both authors sit in a department whose other work is fish physiology.
- This points to a paper whose *subject* is **how the fatty-acid composition of the lipid being oxidised shifts RQ** — i.e. the unit of analysis is plausibly a *fuel molecule's* stoichiometry, possibly worked out for fish lipids, rather than a *population of organisms*.

**The scope question the ledger needs answered is therefore live and unanswered.** A ledger entry that leans on this paper as a *cross-taxon compilation of measured RQ values* would be invoking a regime (many taxa, measured whole-animal RQ, an empirical distribution) that the metadata does not confirm and may contradict (a fish-and-fatty-acid-chemistry regime, possibly stoichiometric rather than empirical). **That is a flag for a future reader, not a finding.** I did not read the paper and I am not entitled to say the regimes mismatch — only that the mismatch is plausible enough that it must be checked against the body, not the title.

## DEFECTS FOUND

These are defects in **the ledger entry's record of this source**, which is what I was sent to establish — not defects in the paper.

1. **The ledger's "no publisher or DOI route" record is wrong.** The entry states that two dedicated route-hunting queries surfaced no publisher or DOI route. A publisher route and a DOI **do** exist and were recovered on the **first** bibliographic query to Crossref: DOI `10.1002/jez.2422`, *J Exp Zool A* **333**(9):613–618, plus PMID `33063463`. The entry's three recorded failed routes all pointed at one self-archived PDF on a departmental web server; the registry layer was apparently never queried. This is the "a prior nobody opened" failure mode in its route-hunting form: the record generalised from one blocked mirror to "no route".
2. **The entry's missing front matter was recoverable and is now supplied** — title, volume, issue, page range, exact publication date, DOI, PMID, affiliations, author order, reference count.
3. **The entry's status must be corrected from an implied dead end to COULD NOT READ.** NOT FOUND is wrong: the paper is real, uniquely identified and indexed. COULD NOT READ is right: it is closed access with no OA copy anywhere per OpenAlex, and the publisher page would not serve at this proxy.
4. **No defect in the paper is alleged, and none could be.** I did not read it. Any ledger statement that this paper *does* or *does not* contain an RQ compilation, or *does* or *does not* print a spread about 0.7, is currently unsupported in both directions — including any such statement already in the entry.
5. **A trap I want recorded so the next checker does not fall into it.** The absence of `compilation`, `range`, `standard` and `deviation` from the abstract's word index is **not** evidence that the paper lacks a compilation or a spread. It is evidence about roughly 140 words. Treating it as evidence of absence would be exactly the "silence is not a prohibition" error.

## ROUTES THAT FAILED

Attempted first-hand in this check:

1. `https://onlinelibrary.wiley.com/doi/10.1002/jez.2422` — **failed at its site (`client_error`); nothing of the page was retrieved.** This is the publisher route and the one that would have carried the abstract and, behind the paywall, the body. Not a paywall message — the page did not come back at all.
2. `https://api.crossref.org/works/10.1002/jez.2422` — **HTTP rate limit (`RATE_LIMIT_EXCEEDED`, source: target), on two separate attempts**, the second made singly as the error instructed. So the per-DOI record, which would have carried any deposited abstract, reference list and the publisher's own title string, was never served. The Crossref *search* endpoint had answered normally minutes earlier, so this is throttling, not a host block.
3. Title-exact search restricted to abstract-mirroring hosts (ouci.dntb.gov.ua, colab.ws, pubmed.ncbi.nlm.nih.gov, semanticscholar.org, x-mol.com) — **returned no links at all.**
4. One WebSearch was **rejected by the proxy with HTTP 400 (`PROXY_REJECTED`, "the request was invalid")** — caused by my own over-long `allowed_domains` list, i.e. a malformed request of mine, not a content refusal. Reissued correctly as route 3. Recorded for completeness.
5. `https://biology.unt.edu/~mager/Price & Mager JEZA 2020.pdf` — **not re-attempted.** This is the only full-text copy that surfaced (it is the top hit for the author-and-RQ query, so the PDF demonstrably contains the phrase "respiratory quotient"). The ledger records `robots_disallowed` on it twice, once percent-encoded. A robots refusal is a host's crawling policy, not a tool quirk, so per the standing instruction I **recorded it and stopped rather than working around it** — I did not try to retrieve it by curl or any other means. **This is the one route that would settle (b) and (c), and it is closed by policy rather than by failure.**

Budget: 6 searches and 5 fetches, both caps reached. Stopped as instructed.

## BEARING ON THE LEDGER ENTRY

1. **Correct the citation.** Price, E. R., & Mager, E. M. (2020). Respiratory quotient: Effects of fatty acid composition. *Journal of Experimental Zoology Part A: Ecological and Integrative Physiology*, **333**(9), 613–618. https://doi.org/10.1002/jez.2422 (PMID 33063463). Both authors: Department of Biological Sciences, Advanced Environmental Research Institute, University of North Texas, Denton, Texas, USA.
2. **Change the entry's status from "routes exhausted / no DOI route" to COULD NOT READ, and strike the "no publisher or DOI route" line.** That line is false and would mislead the next person into re-abandoning a paper that is one registry query from being identified.
3. **Do not let the entry assert anything about the paper's contents.** Sub-claims (b) and (c) are **undetermined at the read level reached**, in both directions. If the ledger currently records this paper as *supplying* a cross-taxon RQ compilation or an empirical spread about 0.7, that support is unverified. If it records the paper as *lacking* them, that too is unverified.
4. **The one positive content datum, with its limits stated.** The string `0.7` occurs in the paper's abstract. That is all; it licenses no claim about what the paper prints.
5. **Flag the regime question for whoever gets the full text.** The metadata (fish, cold-water fish, DHA, stearic acid, polyunsaturated fatty acid; a six-page article with 48 references) suggests a paper about how the fatty-acid composition of oxidised lipid shifts RQ, plausibly in fish — not necessarily a cross-taxon empirical compilation. Whoever reads the body should ask, first, what the **unit of analysis** is (fuel molecule vs. organism), whether any RQ table is **compiled from other papers or computed stoichiometrically**, and whether any spread about 0.7 is **measured or derived**. A stoichiometric derivation and an empirical distribution are different regimes, and the ledger needs to know which one it is leaning on.
6. **Next route to try, since this is a policy block rather than a dead end:** interlibrary loan or an institutional Wiley subscription; a retry of `https://api.crossref.org/works/10.1002/jez.2422` once the throttle clears (for the deposited abstract and the 48-item reference list, which would itself reveal whether the paper's bibliography looks like a cross-taxon compilation); the PubMed record at PMID 33063463 for the publisher abstract; or a direct request to the corresponding author. The departmental PDF is **off-limits by robots policy**, not unavailable, and that distinction should be written into the entry so it is not re-litigated.
