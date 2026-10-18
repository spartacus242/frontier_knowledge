# UQ-20261018-19 — Source read: Albert et al., "Genetics of trans-regulatory variation in gene expression" (eLife 2018;7:e35471)

Reader: source-reader subagent. Date: 2026-10-18.

## READ LEVEL (declared exactly)

- **PUBLISHED VERSION (eLife 2018;7:e35471): COULD NOT READ.** Both the article route and the PDF route return a JavaScript "Client Challenge" page. PMC / Europe PMC not attempted (hard-blocked per brief).
- **PREPRINT (bioRxiv 10.1101/208447v1, `full.pdf`): FULL TEXT (via summariser).** Four targeted queries against the whole PDF; the summariser demonstrably had Results, Methods and Conclusion. **NOT raw text** — no unmediated read was possible (see failed routes).
- **PREPRINT TITLE BLOCK / ABSTRACT: NOT READ.** The PDF text extraction began at "Main text"; no title, author line, DOI line or abstract was present in the extracted text.
- **Author line: read from Crossref's ordered author array**, not from any document's printed first page (rule 4 fallback, since the publisher page will not open).
- Supplementary Data files (1-4) not examined.

**Every "NOT FOUND" below means: not found in the preprint body as read via the summariser.** It is not a statement about the published paper, which I could not read.

## Q1 — Existence, title, author line, journal, year, article id

Exists. Correctly cited in the brief.

- Title (Crossref): **"Genetics of trans-regulatory variation in gene expression"**
- Journal: **eLife**; year **2018**; volume **7**; article number **e35471**; DOI **10.7554/eLife.35471**
- Author line, Crossref ordered array, printed order: **1. Frank Wolfgang Albert — 2. Joshua S Bloom — 3. Jake Siegel — 4. Laura Day — 5. Leonid Kruglyak**

This matches the brief's citation (Albert F.W., Bloom J.S., Siegel J., Day L., Kruglyak L.) exactly, including order. **Caveat:** not verified against the document's own printed first page — the publisher page is JS-walled and the preprint PDF extraction contained no title block. Crossref's ordered list is the rule-4 permitted fallback; a record page, press release or search result was not used.

## Q2 — The unit and the estimand

| | |
|---|---|
| Measured object | The **expression level of one gene (one transcript)** — per-gene / per-transcript, measured by RNA-seq |
| Organism | **Yeast** (*Saccharomyces cerevisiae*) |
| Panel | **"1,012 segregants"** from **"a cross between laboratory and wine yeast strains"** — document's own words. Confirms the "1,012 segregants" figure reported elsewhere |
| Genotypes | **"We obtained high-confidence genotypes at 11,530 variant sites from low-coverage whole-genome sequences of the segregants"** [summariser cut at ~125 chars before the citation and "(Supplementary Data 3)."] |
| Expression measurement | **"an experimental pipeline for high-throughput generation of RNA-seq data"** |
| Endpoint / FDR | eQTL = linkage of a gene's expression to a locus at **"a false discovery rate (FDR) of 5%"** |
| Headline result | **"We used the genotype and RNA-seq data for eQTL mapping and identified 36,498 eQTL for 5,643 genes"** [cut; continues "at a false discovery rate (FDR) of 5% (Supplementary Data 4)."] |
| Distant endpoint | at least one **distant, trans-acting** eQTL: **98%; 5,606 genes** |

**LEVEL OF AGGREGATION (rule 8).** The 98%, the 5,606, the 5,643 and the 77 are all **per gene (per transcript)** — counts of genes, each gene counted once. The 36,498 is **per gene-locus pair** (eQTL), not per gene. The 92% / 33,529 is **per eQTL**. The median of 6 is **eQTL per gene**. The power figure is **per eQTL, by effect size** (see Q5) — it is not a per-gene detection limit.

## Q3 — The two quoted strings, each checked separately and un-primed

Both were obtained by asking for *the sentences that report the counts* and for *every passage about genes with no detected eQTL* — the strings were **not** supplied to the fetch (rules 5 and 6). Each was a separate request.

### (a) "Nearly every expressed gene (98%; 5,606) had at least one such distant, trans-acting eQTL"

**VERBATIM.** Returned un-primed as a complete sentence: *"Nearly every expressed gene (98%; 5,606) had at least one such distant, trans-acting eQTL."* (The supplied string omits only the terminal period.)

Surrounding passage as returned:
- Before: *"The vast majority of the genome-wide significant eQTL did not overlap the genes they influenced (92%; 33,529 of 36,498)"* — **TRUNCATED by the summariser's ~125-char limit**; it reported the continuation as "; indeed, 86% were located on a different chromosome."
- **Target sentence** (full, not cut).
- After: *"The individual effect sizes of the trans eQTL were smaller than those of local eQTL (median variance explained"* — **TRUNCATED**; reported continuation "2.8-fold less, T-test p < 2.2e-16; [Fig fig1])."

I have not completed either truncated quotation myself; the cuts are flagged as cuts.

### (b) "Only 77 genes had no detected eQTL"

**VERBATIM.** Returned un-primed as a complete sentence: *"Only 77 genes had no detected eQTL."*

Surrounding passage as returned, in the section headed **"Deep eQTL mapping explains most gene expression heritability"**:
- Two before: *"We obtained high-confidence genotypes at 11,530 variant sites from low-coverage whole-genome sequences of the segregants"* [cut before the citation]
- One before: *"We used the genotype and RNA-seq data for eQTL mapping and identified 36,498 eQTL for 5,643 genes at a false discovery rate"* [cut before "(FDR) of 5%..."]
- **Target:** *"Only 77 genes had no detected eQTL."*
- One after: *"Among the genes with at least one detected eQTL, the median number was 6, with a maximum of 21"* [cut before figure/supplementary citation]
- Two after: *"Previous eQTL mapping in 112 segregants from this cross detected an average of less than one eQTL per gene"* [cut before "as a consequence of much lower statistical power"]

### The numbers and their denominators

Confirmed in the preprint: **98%**, **5,606**, **77**, and additionally **5,643** genes with >=1 eQTL and **36,498** eQTL.

The denominator is **not printed inside either sentence**. The document states it in Methods ("Sequence processing & gene expression quantitation"): *"Our final dataset included 5,720 transcripts, which were used for downstream analyses."*

**MY OWN ARITHMETIC (rule 9), from the document's numbers:** 5,606 / 5,720 = **98.0%** — so the printed "98%" is against the 5,720 analysed transcripts, i.e. "expressed gene" = one of the 5,720. 5,643 / 5,720 = 98.7%. 5,720 − 5,643 = **77**, so the 77 are the complement of the 5,643 and sit on the same 5,720 denominator. The document states no uncertainty on these counts, so none is carried through. **Note the trap:** 5,606 / 5,643 = 99.3%, not 98% — the 98% is *not* a fraction of the eQTL-bearing genes.

**Version caveat:** all of this is the preprint. If the published version re-ran with a different transcript filter, these counts could in principle differ; I could not read the published version to check.

## Q4 — Is the 98% a union over loci?

**UNION over loci** — the fraction of genes with **at least one** detected distant eQTL anywhere in the genome. Not a per-locus figure.

Settling sentence: *"Nearly every expressed gene (98%; 5,606) had at least one such distant, trans-acting eQTL."* — "**had at least one**" is explicit in the sentence itself.

Corroborating, from the same Results section: *"Among the genes with at least one detected eQTL, the median number was 6, with a maximum of 21"* — genes typically carry several loci, so the 98% necessarily aggregates across loci. No single locus affects 98% of genes anywhere in this paper; the per-locus view is the paper's hotspot analysis, where each hotspot affects a subset of genes.

## Q5 — THE POWER QUESTION: are the 77 characterised?

**NOT FOUND**, after a dedicated, un-primed query for *every* mention of genes with no detected eQTL across the full preprint body (read level: FULL TEXT via summariser).

- The 77 are mentioned in **exactly one place — one sentence** — and never revisited.
- **No** per-gene power analysis, **no** expression-level or abundance comparison, **no** detection-limit analysis, **no** heritability figure is given for them. They are not said to be uncharacterised either; they are simply not discussed.
- The only power statement is **study-wide and per-eQTL-by-effect-size**: *"We had greater than 90% power to detect eQTL that explain at least 2.5% of expression variance."* This is a statement about which **eQTL effect sizes** are detectable, not a per-gene detection limit, and it is not applied to the 77.

Limits of this finding: summariser-mediated read, title page/abstract absent from the extraction, supplementary data not examined, published version unread. This is "not found in the preprint body as read", **not** "proved absent".

## Q6 — CRISPR/perturbation, or natural genetic variation?

**Plainly: a natural-genetic-variation study** — eQTL linkage mapping in a panel of recombinant yeast segregants. **Not CRISPR, not a designed or engineered perturbation**, no knockouts, no overexpression constructs, no editing.

What plays the role of the perturbation: **the naturally segregating sequence variants between the two parent strains** (laboratory and wine yeast), **randomised by meiosis** across the **1,012 segregants** — 11,530 genotyped variant sites. Each segregant's genome is an independent random reshuffling of parental alleles, and statistical linkage between inherited genotype and transcript level substitutes for an experimenter-applied perturbation. Effects are therefore associational-by-linkage within this one cross, and the allele set is whatever those two strains happen to differ at.

## Q7 — Does it pose, as open, what fraction of genes is unmovable / responds to nothing?

**NOT FOUND.** A dedicated, un-primed query for open/unknown/future-work statements about the fraction of genes influenced by no genetic variation, or genes that respond to nothing, returned no such statement in the text available to me.

What the document does say, so the ledger does not mistake one for the other:
- The 77 genes with no detected eQTL are reported as **a finding**, not posed as an open question.
- Open-question language exists but is aimed elsewhere: the organismal consequences of expression changes *"remain a key area for further research"* (Conclusion).
- On remaining missing heritability the paper makes an **inference, not an open question**: *"suggesting that the remaining missing heritability is explained by undetected eQTL with even smaller effects."*
- It **expects** more loci from better-powered human studies — *"suggesting that a similar hotspot-dominated architecture underlies human expression variation and will be uncovered in"* [TRUNCATED] — again an expectation, not a posed open question.

Caveat: the preprint's final section is headed **"Conclusion"**, not "Discussion", and the **Abstract was absent from the extraction** — an abstract sentence cannot be excluded.

## FAILED / REFUSED ROUTES, with exact error text (rule 10)

1. `curl https://api.elifesciences.org/articles/35471` (Bash) → `curl: (56) CONNECT tunnel failed, response 403`; `HTTP_CODE:000 SIZE:0`.
2. `curl https://api.crossref.org/works/10.7554/eLife.35471` (Bash) → `curl: (56) CONNECT tunnel failed, response 403`; `HTTP_CODE:000 SIZE:0`. Proxy status endpoint confirms: `"kind": "connect_rejected"`, `"detail": "gateway answered 403 to CONNECT (policy denial or upstream failure)"`, `"host": "api.crossref.org:443"`. **Policy denial — recorded and stopped; not reworked, not counted as a check that ran.**
3. `mcp__github__get_file_contents` for `elifesciences/elife-article-xml` path `articles/elife-35471-v1.xml` (attempt at an unmediated raw read of the published XML) → `Access denied: repository "elifesciences/elife-article-xml" is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge.` **Refusal — stopped; no repository was added.**
4. `mcp__github__search_code` `repo:elifesciences/elife-article-xml filename:elife-35471-v2.xml` → `{"incomplete_results":false,"items":[],"total_count":0}` (empty because of the same session scoping, not evidence the file is absent).
5. WebFetch `https://elifesciences.org/articles/35471v1` → `Client Challenge`; `"JavaScript is disabled in your browser."` / `"Please enable JavaScript to proceed."` / `"A required part of this site couldn't load. This may be due to a browser extension, network issues, or browser settings."`
6. WebFetch `https://elifesciences.org/articles/35471.pdf` → same client-challenge text: `"JavaScript is disabled in your browser."` / `"Please enable JavaScript to proceed."` / `"A required part of this site couldn't load."` **Confirms the brief's note: article AND PDF routes are both JS-walled.**
7. WebFetch bioRxiv `full.pdf`, first-page request → body readable but title block missing from extraction: `"The text begins with a 'Main text' heading and the body sections, with no title block, author list, journal or DOI line, or abstract."` Partial-extraction failure, not a transport failure.
8. Two searches for an accessible mirror of the published version returned only `elifesciences.org` (JS-walled) and `ncbi.nlm.nih.gov/pmc` / `pmc.ncbi.nlm.nih.gov` (hard-blocked per brief — **not attempted**, so not a failed check).

## BUDGET AND SELF-REPORTED ERRORS (rule 12)

- **WebSearch: 4 of 7** used. **WebFetch: 7 of 7** used — at budget, no overrun.
- Additional non-WebFetch routes attempted and reported above: 2 Bash curl calls (both policy-denied), 2 GitHub MCP calls (1 access-denied, 1 empty).
- Brief items I could not execute: (i) reading the **published** paper at all; (ii) confirming the title and author line against **the document's own first page** — Crossref fallback used; (iii) no FULL TEXT RAW read was achievable, so every quotation is summariser-mediated and several are cut at ~125 characters (each cut is flagged, none completed by me).
- No personal identifier was placed in any URL, query string or header. Unpaywall was not used.

## NOTE FOR THE LEDGER (surprises)

- **A Bash-curl 403 at this proxy is tool-scoped, not a host block.** `api.crossref.org` failed via curl and then succeeded via WebFetch in the same session. The proxy log shows `api.crossref.org:443` connect-rejected twice at 11:33 today — earlier readers in this batch may have recorded Crossref as unreachable when it is reachable via WebFetch.
- **98% and 77 are the same denominator from both ends:** 5,720 transcripts; 5,643 with >=1 eQTL, 77 with none, 5,606 with >=1 *distant* eQTL. The trans figure (98.0%) is almost identical to the any-eQTL figure (98.7%), so "98% have a trans eQTL" is close to "98% have any eQTL" — the trans result is not a subset worth distinguishing at this resolution.
- **The 77 get one sentence and no analysis.** Any ledger claim that this paper characterises its non-responding genes, or bounds per-gene power for them, is unsupported by the text as read. The only power number is per-eQTL-effect-size and study-wide.
- **Version discipline:** everything substantive here is bioRxiv 208447v1, whose final section is titled "Conclusion". Do not attribute a "Discussion" section, or any abstract wording, to this read.
