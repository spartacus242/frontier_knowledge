# UQ-20261018-20 — Source read: Bursch et al. 1990 (Carcinogenesis) and the "apoptotic index" commentary

Reader: source-reader subagent. Date: 2026-10-18.
Budget used: 7 web searches (budget 7), 7 WebFetch calls (budget 7). Plus 2 raw `curl` attempts, both refused at the egress gateway (logged below; not counted against the fetch budget).

## READ LEVEL (declared per source, per rule 2)

- **SOURCE 1 — Bursch et al. 1990, Carcinogenesis 11(5):847–853: ABSTRACT ONLY.**
  Read: the publisher's own article page at Oxford University Press (academic.oup.com/carcin), which carries the bibliographic header (title, author line, volume, issue, pages, year, DOI, affiliations) and the complete abstract. **The article body, methods, tables, figures and the stated formula were NOT read** — the page states "This content is only available as a PDF," "You do not currently have access to this article," "This PDF is available to Subscribers Only."
- **SOURCE 2 — Potten 1996, Br J Cancer 74(11):1743–1748: COULD NOT READ (body). Bibliographic header only.**
  Read: the publisher's own landing page and PDF preview at nature.com, which carry title, author, affiliation, journal, year, volume, pages and DOI — **and no abstract and no body text.** nature.com serves only "a preview of subscription content, access via your institution." The free copy is PMC2077230, and PMC is hard-blocked here. The Christie institutional repository record exists but is metadata only. **I therefore cannot report anything this commentary argues, and nothing below should be read as a check on its contents that passed.**

Note on raw reads: **"FULL TEXT RAW" was not achievable in this environment at all** — see failed route 1 below. Every byte I read came through the WebFetch summariser, so all "verbatim" strings are subject to that summariser's limits.

---

## SOURCE 1 — Bursch, Paffe, Putz, Barthel, Schulte-Hermann (1990)

### (a) Full citation and author line in printed order

From the Oxford University Press article page for the DOI (publisher page, not a record page or search result):

> W. Bursch, S. Paffe, B. Putz, G. Barthel, R. Schulte-Hermann.
> "Determination of the length of the histological stages of apoptosis in normal liver and in altered hepatic foci of rats."
> *Carcinogenesis* **11**, Issue 5 (May 1990), pages **847–853**. Published 01 May 1990. DOI 10.1093/carcin/11.5.847.

- **Printed author order: Bursch, Paffe, Putz, Barthel, Schulte-Hermann — five authors.** No author was dropped or promoted relative to the ledger's citation, which named "Bursch W. et al."
- **Page range correction:** the ledger's citation gives "11(5):847". 847 is the *first* page; the article runs **847–853** (7 pages).
- **Caveat under rule 4:** this author line comes from the publisher's article page for the DOI, **not from a scan of the document's own printed first page**, and **Crossref's ordered author list could not be obtained** (api.crossref.org is refused at this environment's gateway — failed route 1). The publisher page is the best available authority short of the printed page itself; I did not corroborate the order against a second independent source.
- **Two anomalies I am reporting rather than resolving.** (i) The superscript affiliation markers as rendered are incoherent: "1" after Paffe and after Barthel, "2" after Putz, none after Bursch or Schulte-Hermann. (ii) The affiliations render as "Instutute [sic] for Toxicology and Pharmacology, University of Marburg; Schering AG, 1000 Berlin 65, ERG" and "Department Experimental Toxicology, Schering AG, 1000 Berlin 65, FRG". Both look like OCR/markup damage to the original front matter, and I could not check them against the printed page. Anyone relying on the affiliations should re-derive them from the PDF.
- **The abstract text on this page is OCR'd and visibly corrupt** — it contains "fonnula" for "formula", "Fenmie" for "Female", "Instutute" for "Institute", "ERG" for "FRG". **Apparent verbatim fragments quoted from it therefore carry OCR errors, and I flag each one below.**

### (b) THE DECISIVE QUESTION — does it measure the DURATION of the histological stages of apoptosis in normal rat liver?

**Yes. Measuring that duration is the paper's stated object, and the abstract gives the figure.** This is established at abstract level, which is sufficient for the existence and value of the measurement, though not for its derivation.

Values as the abstract states them:

| Figure | Exact wording (OCR'd) | Tissue and condition it applies to | Aggregation / nature of the figure |
|---|---|---|---|
| **~3 h** | "The mean duration of the histological stages of apoptosis was found to be ∼3 h." | **Rat liver described as normal**, made hyperplastic by high-dose **cyproterone acetate (CPA)**, then with apoptosis initiation **blocked by CPA re-administration** during regression | **A mean.** No SD, SE, confidence interval or range is visible at abstract level — the "∼" is the paper's own only qualifier |
| **within 4 h** | "the majority of apoptotic bodies in foci disappeared within 4 h after PB" | **Altered (preneoplastic) hepatic foci** in rat liver, induced by a single dose of **N-nitrosomorpholine** and promoted **39 weeks with phenobarbital (PB)**, PB withdrawn then re-given to block initiation | **An upper bound on a majority, not a mean.** Reported as consistent with stage durations in foci being about as short as in normal liver |
| 39 weeks | "promotion for 39 weeks with phenobarbital" | Protocol duration for producing the foci — **not** an apoptosis duration | n/a |

**Two cautions that matter for how this figure can be used.**

1. **The "~3 h" is not measured in untreated, steady-state normal liver.** The condition is CPA-induced hyperplastic liver undergoing regression, with apoptosis *initiation pharmacologically blocked* so that the existing apoptotic bodies decay out of view — a decay-after-block design. The title says "normal liver"; the measurement condition is narrower than that phrase suggests. Treating "~3 h" as the persistence time of an apoptotic corpse in ordinary untreated rat liver is an extrapolation beyond what the abstract states.
2. **The ~3 h is the duration of the *histological stages* — the window during which an apoptotic cell or corpse is morphologically visible in a section.** That is the quantity the ledger's question asks about, and it is the quantity the paper reports.

### (c) Does it convert an apoptotic INDEX into an apoptotic RATE?

**It asserts that it does, and the abstract states the quantity but not the formula. I CANNOT quote the conversion and CANNOT give the paper's arithmetic — both are in the body I could not read.**

What the abstract establishes:
- Exact fragment (OCR'd): **"a simple fonnula is given to calculate the cell loss rate by apoptosis"** — i.e. "a simple formula is given to calculate the cell loss rate by apoptosis". So the paper does claim to supply an index-to-rate conversion, and the output quantity is a **cell loss rate by apoptosis**.
- The abstract frames the duration as the *missing factor* needed for that conversion: it states that quantifying cell loss requires **"counts of apoptotic cells"** in histological sections **plus** information on the duration of the visible stages. That is the logic of prevalence → rate, stated as a requirement.
- The abstract also refers to tracking **"apoptotic cell residues (apoptotic bodies, ABs)"** over time after CPA or PB treatment.

What I did **not** establish: the formula's actual form, its inputs, its denominator, any worked arithmetic, and whether the paper itself carries the duration's uncertainty through the conversion. **The abstract is silent on all of these, and the body was unreadable.** Do not attribute a specific equation to this paper on the strength of this read.

### (d) Any death modality other than apoptosis?

**At abstract level: no — apoptosis is the only form of cell death named.** The abstract names apoptosis ("Apoptosis is a form of cell death...") and does not mention necrosis, mitosis or cell division. It mentions hyperplasia as a liver state, not as a measured process.

**This is an ABSTRACT-LEVEL absence and is NOT evidence that the paper's body ignores other modalities** (rules 2 and 3). A 7-page 1990 liver-carcinogenesis paper could discuss necrosis in its methods or discussion without the abstract saying so. The honest status of (d) is: *not found at abstract level; body unread.*

### (e) Level of aggregation

**Could not establish. The abstract is silent on the denominator.** It refers to counts of apoptotic cells and apoptotic bodies in histological sections, and to a "cell loss rate", which implies a rate over some cell population — but **whether the unit is per field, per unit area, per 1000 hepatocytes, per unit liver volume or per whole liver is not stated at abstract level.** The numbers I report in (b) are **durations in hours**, which are per-apoptotic-event quantities (how long one corpse stays visible) and carry no tissue denominator. Anyone needing the rate's denominator must read the PDF.

---

## SOURCE 2 — "What is an apoptotic index measuring? A commentary"

### Identifier conversion (this part succeeded)

PMC2077230 converts to:

> **C. S. Potten.** "What is an apoptotic index measuring? A commentary."
> *British Journal of Cancer* (1996) **74**(11), **1743–1748**. Published 01 December 1996. DOI **10.1038/bjc.1996.624**.
> Affiliation as shown: Paterson Institute for Cancer Research, Christie Hospital NHS Trust, Manchester, UK.
> Publisher URL: https://www.nature.com/articles/bjc1996624 ; subject tag shown: "Experimental Oncology".

Crossref and PubMed were **not** the routes that worked: Crossref's API is gateway-refused here and a PubMed-restricted search did not surface the record. The conversion came from a nature.com-restricted title search, then the publisher page itself.

### (f) Full citation and author line in printed order

**Single author: C. S. Potten.** There is no author order to get wrong. The nature.com publisher page prints "CS Potten" with a single superscript marker and the Paterson Institute affiliation. The Christie institutional repository independently lists "Potten, Christopher S", "Br. J. Cancer", 1996-12, "74 (11)", "1743-8" — and it is the only source I have for the **issue number (11)**; under rule 4 a repository record is not authoritative for an author line, but the single-author fact is confirmed on the publisher page.

**Caveat:** read from the publisher landing page and PDF preview header, **not** from a scan of the printed first page; Crossref's ordered list was unobtainable.

### (g) What does it argue an apoptotic index does and does not measure?

**COULD NOT READ. I have no quotation and no paraphrase of its central claim.**

nature.com serves only "a preview of subscription content, access via your institution" for both the HTML and the `.pdf` URL. No abstract is shown. The free full text is PMC2077230, hard-blocked here. The Christie repository record shows an "Abstract" heading with **no abstract text beneath it** and offers no downloadable file. An extended search for an open PDF under both the DOI and the article ID `bjc1996624` returned no open copy — only the paywalled publisher page and later papers citing it.

**I did not read one word of this commentary's argument. The title is a question, and inferring its answer from its title would be exactly the kind of fabrication this ledger is guarding against.** Status: unread, not "nothing found".

### (h) Does it state prevalence = incidence × persistence, and does it give or cite a persistence time?

**COULD NOT READ — neither confirmed nor refuted.** No quotation is available. I have not established that the relation appears in this document in any form, nor that it gives or cites any persistence time, nor whose persistence time it would cite if it did. Any ledger entry asserting that this commentary states that relation is, on the present evidence, **unsupported**.

### (i) Does it discuss any modality other than apoptosis?

**COULD NOT READ.** No basis for an answer either way.

---

## FAILED ROUTES, with exact error text (rule 10)

1. **`curl https://api.crossref.org/works/10.1093/carcin/11.5.847`** → `curl: (56) CONNECT tunnel failed, response 403`, reported HTTP code `000`. The agent-proxy notice on the same command read: `api.crossref.org:443 — connect_rejected (the egress proxy refused the connection or could not reach the host; a refusal most often means that the host is not allowed for this session)`. The proxy's own status endpoint logs it as `"kind": "connect_rejected", "detail": "gateway answered 403 to CONNECT (policy denial or upstream failure)", "host": "api.crossref.org:443"`.
2. **`curl https://www.nature.com/articles/6690758.pdf`** → `curl: (56) CONNECT tunnel failed, response 403`, `HTTP 000 size=0 type=`, no file written.
   **These two together are the generalisable result: raw `curl` to external hosts is refused at this environment's egress gateway, for every host, not just blocked archives. WebFetch is the only working egress.** Consequently *no* source can be read at FULL TEXT RAW level here. The proxy status endpoint also shows the same `connect_rejected` 403 logged earlier today against `api.crossref.org` (three times), `www.biorxiv.org`, `journals.asm.org`, `www.ncimb.com` and `www.france-genomique.org` — i.e. **other readers on this batch hit the identical single cause and may each have logged it as a different per-host problem.** This is the rule-10 URL-length-limit pattern repeating: one invisible environmental cause behind many differently-worded failures.
3. **WebFetch `https://www.nature.com/articles/bjc1996624`** → `{"error_type":"CLIENT_ERROR","source":"target","message":"There was an error while fetching."}` — **not retried** (the `.pdf` sibling was tried instead and resolved the metadata).
4. **WebFetch `https://www.nature.com/articles/bjc1996624.pdf`** → request succeeded; **body withheld by the publisher.** Page text: "a preview of subscription content, access via your institution", followed by purchase and subscription options. A "cited by" list of five later articles is shown; the article's own reference list is not.
5. **WebFetch `https://academic.oup.com/carcin/article-abstract/11/5/847/328628?redirectedFrom=fulltext&login=false`** → request succeeded; **abstract only.** Access messages printed: "This content is only available as a PDF.", "You do not currently have access to this article", "This PDF is available to Subscribers Only." Access options listed: "Get access", institutional/personal sign-in, 24-hour purchase (EUR €53.00 / GBP £44.00 / USD $58.00), DeepDyve rental.
6. **WebFetch `https://christie.openrepository.com/entities/publication/667e457c-d38e-4967-9396-e1c3c69e2007`** → request succeeded; **metadata only.** "The 'Abstract' heading appears, but no abstract text follows it." No file, no full-text link, no DOI shown.
7. **Summariser refusals / truncations (not network failures, but they bounded what I could read):**
   - On the first OUP fetch: "I can't reproduce the full abstract verbatim, because that would exceed the 125-character limit on quoted material." — the 125-character truncation rule 5 warns about, hit in practice.
   - On a request for the Bursch abstract sentence by sentence: "I can't reproduce the abstract sentence by sentence, since that would reproduce the full copyrighted text." **A narrower request for short exact fragments succeeded where the sentence-by-sentence request was refused** — worth recording as a technique, not a workaround of a refusal: it is a different, smaller ask, and I did not re-issue the refused one.
8. **Not attempted, by instruction:** `doi.org` (prior HTTP 429 with a do-not-retry instruction), PMC and Europe PMC (hard-blocked). Recording these as *not run*, not as checks that passed.

## Searches and fetches actually used

**7 searches:** (1) BJC commentary title, unrestricted; (2) Bursch title + academic.oup.com, unrestricted; (3) `carcin 11 5 847`, restricted to academic.oup.com — **this is the search that found the Bursch article page**; (4) apoptotic-index commentary restricted to nature.com — **this is the search that converted PMC2077230**; (5) Bursch authors restricted to pubmed.ncbi.nlm.nih.gov — returned ten other Bursch/Schulte-Hermann papers but **not** the target record; (6) Potten 1996 open-PDF hunt with PMC/Europe PMC blocked — no open copy; (7) extended search on `bjc1996624` / the DOI with PMC blocked — no open copy.

**7 fetches:** (1) nature.com/articles/6690758.pdf — **wrong article, see Surprises**; (2) OUP Bursch page, header + metadata; (3) nature.com/articles/bjc1996624 — CLIENT_ERROR; (4) OUP Bursch page, sentence-by-sentence — refused, but emitted the "∼3 h" sentence unprompted; (5) nature.com/articles/bjc1996624.pdf — header only; (6) Christie repository — metadata only; (7) OUP Bursch page, targeted short-fragment read.

## Un-primed checking of the one quoted string I am reporting (rules 5 and 6)

The only string I report as the document's own wording for the decisive figure is **"The mean duration of the histological stages of apoptosis was found to be ∼3 h."**

- It was **emitted un-primed**: I never supplied this string, or the number 3, in any prompt. Fetch 2 asked only for the abstract in full and returned "the mean duration was about 3 hours" in paraphrase. Fetch 4 asked for sentences and returned the sentence above verbatim. Fetch 7 asked open-endedly "what does the abstract say about how long anything lasts" — with no number, no unit and no candidate phrasing — and returned the same sentence plus the exact fragment "mean duration of the histological stages of apoptosis". **Three independent summarisation passes, two of them with nothing to copy from, agree.** I regard the figure and the wording as sound at abstract level.
- **Each other fragment I quote is flagged as OCR-corrupt where it is**: "a simple fonnula is given to calculate the cell loss rate by apoptosis" (for "formula"), and the abstract's "Fenmie" for "Female". I have **not** silently corrected these in the quotations above.
- **No fragments were stitched.** The "within 4 h" figure and the "~3 h" figure are reported as separate statements about separate tissues, because that is how the abstract states them.

## SURPRISES

1. **A live trap at the top of the first search.** The first search for the commentary's exact title returned, among its hits, `https://www.nature.com/articles/6690758.pdf`. That URL is **not** the Potten commentary. It is **Ito Y, Matsuura N, Sakon M, Takeda T, Umeshita K, Nagano H, Nakamori S, Dono K, Tsujimoto M, Nakahara M, Nakao K, Monden M, "Both cell proliferation and apoptosis significantly predict shortened disease-free survival in hepatocellular carcinoma", Br J Cancer (1999) 81(4):747–751.** An agent that trusted the search result's title association and fetched that URL would have read a 76-tumour human HCC prognostic study and filed it as the "apoptotic index" commentary — the adjacent-object failure of rule 8, delivered by a search engine rather than by the reader's own inference. **I spent one of seven fetches on it.** Recording the URL so no later reader repeats it.
2. **And that wrong paper is unusually seductive**, because it *does* define an apoptotic index concretely and quotably: apoptotic cells scored on H&E by Kerr's criteria, "at least 1000 cells were counted across at least ten fields, and AI was the number of apoptotic cells per 1000." Anyone needing a crisp "apoptotic index is per 1000 cells" quotation could lift it from there and attribute it to Potten. **That is a per-1000-tumour-cells, per-section prevalence measure in human HCC — a different object from Bursch's per-event duration in rat liver.**
3. **The decisive question for Source 1 is answerable; the decisive questions for Source 2 are not.** Four earlier attempts failed on both. The asymmetry is worth recording: Bursch's abstract carries the duration figure and the claim that a conversion formula exists, so the ledger can stand on (b) and on the *existence* of (c); Potten 1996 is, on every route available in this environment, **completely unreadable**, so any ledger claim about its contents currently has no first-hand support at all. The ironic part: the free copy exists (PMC2077230) and the blocker is purely this environment's PMC block, not the literature.
4. **The "normal liver" condition is narrower than the title.** The ~3 h comes from CPA-induced hyperplastic liver regressing with initiation pharmacologically blocked, not untreated normal liver. This is the kind of scope slippage rule 7 is about, and it sits inside the paper's own title.
5. **The OUP abstract is served as damaged OCR** ("fonnula", "Fenmie", "Instutute", "ERG"). A reader quoting it without noticing would publish a misspelling as verbatim text — and a reader who silently fixed it would publish a quotation the page does not contain. Both are flagged above.
6. **The affiliations on the OUP page (University of Marburg; Schering AG, Berlin) do not obviously match Bursch and Schulte-Hermann**, who I would have expected in Vienna in 1990. I have **not** resolved this and am reporting it as a discrepancy, not a correction. It needs the printed first page.
7. **A PubMed-restricted search failed to find a paper PubMed certainly indexes** (search 5 returned ten other Bursch/Schulte-Hermann liver-apoptosis papers but not this one). Search-engine coverage of a site is not the site's coverage — not a reason to conclude a record is absent.

## My own errors and limits (rule 12)

- **Budget: exactly at limit, not over** — 7 searches, 7 fetches. One fetch (the Ito paper) was wasted on the search engine's mis-association; had I not spent it, I would have had a spare fetch for a further Potten route, though no open Potten route was ever found.
- **I issued two `curl` calls that the gateway refused.** I recorded the refusals and stopped using `curl`; I did not rework them to get around the refusal.
- **One brief I could not execute:** the task asked for Potten's central claim, its prevalence/incidence/persistence relation and its persistence time (questions g, h, i). **I could not execute any of these — the document's body is unreachable from this environment.** I am returning them as COULD NOT READ rather than as inferences from the title, the citing literature or the Bursch paper.
- **One brief I executed only partially:** question (c) asked me to quote the conversion and give the paper's own arithmetic. I can report only that the paper states it gives such a formula and names its output quantity. **I have no formula and no arithmetic**, and I did not construct any (rule 9: nothing below is my own arithmetic, because I derived no figures at all).
- **The Bursch author line and the Potten author line both rest on publisher pages rather than printed first pages, with no Crossref cross-check**, because Crossref is gateway-refused. Confidence is high but not the "printed first page or Crossref ordered list" standard rule 4 asks for.

## What a later reader should try

- For Potten 1996: any route to PMC2077230 from an environment without the PMC block; or the BJC print archive; or an institutional subscription to nature.com. **Do not** try doi.org (429, do-not-retry), Europe PMC (429, do-not-retry), the Christie repository (metadata only), or an open-web PDF hunt (two searches, none exists).
- For Bursch 1990: the OUP PDF behind the paywall is the only known full text; the article-pdf URL pattern on academic.oup.com requires an internal file ID that is not derivable from the abstract page. Questions (c), (d) and (e) remain genuinely open and should stay marked unread.
