# VERIFY — Bender et al. (1966), J. Am. Chem. Soc. 88: 5890

Checker run: 2026-10-22. Fresh context. Caps: 6 searches / 5 fetches. Used: 5 searches, 5 fetches (2 of the fetches returned nothing).

## CLAIM

As the ledger entry cites it: **Bender et al. (1966), Journal of the American Chemical Society 88:5890**, described as *"a determination of the concentration of six enzymes by active-site titration."*

Sub-claims handed to this checker:

- **(a)** Does the paper exist at that volume and page, and what is its exact title and author list in order?
- **(b)** Does it print, for each of its enzymes, an ACTIVE FRACTION or a ratio of titrated active sites to a total protein measure (weight, absorbance, nitrogen, dry mass)? Name the numbers and where they are printed.
- **(c)** If it prints only active-site concentrations with no total-protein denominator, say so explicitly — that is a different finding.
- **(d)** Is the comparison across enzymes, or within one enzyme across preparations?

## READ LEVEL

**Split verdict. Do not collapse these two.**

- **(a) — FOUND, and front matter established from bibliographic records, not from the article's own front matter.** The paper unambiguously exists at the cited volume and page. Three mutually independent records agree on it (ESTHER, Wikidata, Semantic Scholar carrying MAG + MEDLINE identifiers). This is **NOT** a "FOUND, front matter read" result in the strict sense required by checking rule (7): I never saw the article's own title page. Every string below is transcribed from a third party's record of the front matter. Where the records disagree I report the disagreement rather than picking a winner.

- **(b), (c), (d) — COULD NOT READ.** Not NOT FOUND. The article exists, is correctly cited, and would not open at any route available here. **No abstract was obtainable either** — this is below "abstract only". Semantic Scholar's record states in terms that the abstract field was **elided by the publisher** and returns `"abstract": null`. So I have **zero sentences of the paper's own prose**, and therefore **cannot name a single number from it**, cannot say whether it prints an active fraction, cannot say whether it prints only bare concentrations, and cannot say whether its comparison runs across enzymes or across preparations of one enzyme.

This is a deliberate COULD NOT READ rather than a reconstruction. The paper is 24 pages of 1966 ACS print (5890–5913); its numbers live in tables I have not seen. Any statement here about what those tables contain would be fabrication, including statements that would be easy to make from general knowledge of this famously-cited methods paper.

## WHAT THE SOURCE SAYS (quotations as served)

**Nothing from the source itself.** No sentence, abstract, table caption or figure legend of Bender et al. (1966) was served to me by any route. The only text below is *bibliographic record text about* the source, served by three third-party databases, and it is labelled as such throughout.

### Title, as each record serves it

**Wikidata (via wikidp.org/Q28258125), served verbatim:**

> The Determination of the Concentration of Hydrolytic Enzyme Solutions: α-Chymotrypsin, Trypsin, Papain, Elastase, Subtilisin, and Acetylcholinesterase

**Semantic Scholar (MEDLINE-style casing), served verbatim:**

> The determination of the concentration of hydrolytic enzyme solutions: alpha-chymotrypsin, trypsin, papain, elastase, subtilisin, and acetylcholinesterase.

**ESTHER (bioweb.supagro.inrae.fr), served verbatim and OCR-damaged — reproduced as served, NOT corrected:**

> "The determination of the concentration of hydrolytic enzyme solutions:" "a-chymotrypsin, trypsine papain, elastase, subtilisin, and acetylcholinesterase"

The ESTHER rendering carries three visible defects: the α is flattened to a bare `a-`, "trypsin" is spelled **"trypsine"**, and the comma between "trypsine" and "papain" is **missing**. Flagged, not silently fixed. The Wikidata rendering is the one with intact diacritics and punctuation.

### Author list in order

The maximal, best-attested reading, reconciling the three records:

1. M. L. Bender
2. M. L. Begué-Cantón
3. R. L. Blakeley
4. L. J. Brubacher
5. J. Feder
6. C. R. Gunter
7. F. J. Kézdy
8. J. V. Killheffer (Jr.)
9. T. H. Marshall
10. C. G. Miller
11. R. W. Roeske
12. J. K. Stoops

**Twelve authors. All three records agree on the count, on the order, and on the surnames' sequence.** Per-record disagreements, which matter because an "et al." in a ledger entry hides all of them:

| Position | ESTHER | Wikidata | Semantic Scholar |
|---|---|---|---|
| 3 | Blakely RL | R. L. Blakeley | R. Blakeley |
| 7 | Kezdy FJ | F. J. Kézdy | F. Kézdy |
| 8 | Kilhefer JV, Jr. | J. V. Killheffer | J. V. Killheffer |
| 11 | Roeske RW | R. W. Roeske | R. Roeske |

"Blakely" (ESTHER) vs "Blakeley" (other two) and "Kilhefer" (ESTHER) vs "Killheffer" (other two) are flat contradictions, not stylistic variants; ESTHER is the OCR-damaged record on the title too, so on the balance of evidence **Blakeley** and **Killheffer** are correct, but this is an inference from record quality and is **not** a reading of the article's own byline. The suffix **"Jr."** on Killheffer appears in ESTHER alone. The middle initial **J.** on Kézdy appears in ESTHER and Wikidata and is dropped by Semantic Scholar.

### Remaining front matter

- **Journal:** Journal of the American Chemical Society (ESTHER and Semantic Scholar state it in words; the Wikidata record states it only as an identifier, Q898902, which the reader resolved by inference from the DOI prefix — noted so the inference is visible)
- **Volume / issue:** 88 (24)
- **Pages:** 5890–5913 (Wikidata and Semantic Scholar both give the full span; **ESTHER gives the start page 5890 only**, which is the form the ledger entry copied)
- **Year:** 1966. Wikidata gives a publication date of **20 December 1966**
- **DOI:** 10.1021/ja00976a034
- **PMID:** 5980876 (from Semantic Scholar's `externalIds`; ESTHER's PubMed field is empty)
- **MAG ID:** 2092331199; Semantic Scholar CorpusId 7131396
- **Open access status, as served verbatim by Semantic Scholar:** `"status": "CLOSED"`, with `"url": ""`

### Document type

**Cannot be stated from the source.** On the title alone this reads as a **primary methods / analytical-determination paper** rather than a review, protocol, guideline, editorial or column, and its length (24 pages) and twelve-author composition are consistent with a multi-enzyme experimental compilation out of one laboratory. I did not reach a publication-type field (the PubMed record, which carries MEDLINE's publication types, would not open), so **this is my reading of a title, not a fact read off the paper.**

## REGIME

What can be said about regime is bounded by the title, and the title bounds it loosely:

- **Analytes named:** six, and the ledger's "six enzymes" matches the title's list exactly — α-chymotrypsin, trypsin, papain, elastase, subtilisin, acetylcholinesterase. On this point the entry is accurate.
- **Stated object of measurement, in the title's own words:** "the **concentration** of hydrolytic enzyme **solutions**". The title's unit is a **concentration of a solution**, not a fraction, not a purity, not a ratio, and not a per-weight specific activity.
- **Unit of analysis, endpoint, comparator, estimand:** **unknown.** These live in the paper's text and tables. I reached none of them.
- **Method:** the title does **not** say "active-site titration". That phrase is the ledger entry's gloss, not the paper's words as served. It is a very likely gloss given Bender's programme and the burst-titration work of that period, but it is **not verified text**, and this note does not supply it as verified.
- **Whether the handed claim sits inside the paper's regime:** undeterminable. The entry's description asserts (i) six enzymes — supported by the title; (ii) a determination of concentration — supported by the title; (iii) by active-site titration — **unsupported by anything I could read, neither contradicted nor confirmed.**

## DEFECTS FOUND

1. **The ledger entry's page citation is a start page where a span exists.** The entry cites "88:5890"; the article runs **5890–5913**. Not an error, but the entry's citation is the truncated ESTHER form, which is consistent with the entry having been built from the ESTHER record rather than from the article. Worth knowing when judging how much of the paper the entry's author had seen.

2. **"Active-site titration" is in the ledger entry and not in any served title.** The entry's method attribution is an unverified gloss. It may well be right. It is reported here as *not established*, under checking rule (5): a finding attributed to a source has to be found in the source.

3. **Sub-claims (b), (c) and (d) are unresolved, and (b)/(c) are precisely the pair that a COULD NOT READ cannot adjudicate.** (b) asks whether the paper prints an active fraction — a titrated-sites-over-total-protein ratio — and (c) asks whether it prints only concentrations with no denominator. These are **mutually exclusive alternatives**, and a reader with no access to the tables cannot choose between them. Specifically, under the "PUBLISHED IS NOT PERFORMED" rule I am asked to answer a quantity question by **naming the number and where it is printed**. **I can name no number.** I also cannot say which of DEFINES / BOUNDS / PREDICTS / ANNOUNCES / MEASURES the paper does for an active fraction, because I did not reach a sentence of it. The honest state is: **unknown at every grain.**

4. **A trap worth naming explicitly for whoever reads this next.** The title's phrase "determination of the concentration" is *suggestive* of sub-claim (c) — concentration without a denominator — and it would be easy to write that down as a finding. **It is not a finding.** A title stating that concentrations were determined is silent on whether the paper also tabulated those concentrations against a weight, an A280, a nitrogen value or a dry mass. Silence in a title is not a prohibition. Anyone tempted to grade (c) "confirmed" off this title is reading absence as evidence.

5. **No front matter was read from the article.** Rule (7) requires author names, year, journal, volume and pages from the front matter and never from a short form someone else wrote. Every string in this note is from a short form someone else wrote. Three such forms agreeing is strong, and the surname sequence and the twelve-author count can be relied on; the per-author initials and spellings cannot be relied on to the standard the rule asks for, and two of them (Blakely/Blakeley, Kilhefer/Killheffer) are actively in conflict across records.

6. **Unpaywall was skipped deliberately, not overlooked.** Semantic Scholar's own disclaimer, served verbatim, pointed at `https://api.unpaywall.org/v2/10.1021/JA00976A034?email=<INSERT_YOUR_EMAIL>`. That route requires a contact address in the query string. Supplying one is forbidden here, so the route was not taken. Recording it so no later reader counts it as an untried route.

## ROUTES THAT FAILED

| # | Route | Result |
|---|---|---|
| 1 | `https://pubs.acs.org/doi/10.1021/ja00976a034` — publisher, direct | **client_error; nothing of the page retrieved.** No abstract, no first page, no front matter. This is the authoritative route and it gave nothing. |
| 2 | `https://pubmed.ncbi.nlm.nih.gov/5980876/` — NLM citation record (distinct host from PMC, tried on that basis) | **client_error; nothing retrieved.** Would have supplied MEDLINE publication types and any abstract. |
| 3 | `https://api.unpaywall.org/v2/10.1021/JA00976A034?email=…` | **Not attempted by policy.** Requires a personal contact address in the URL. Forbidden. |
| 4 | PMC / Europe PMC | **Not attempted.** Hard-blocked at this proxy per established routing (PMC reCAPTCHA interstitial; Europe PMC HTTP 429 with a do-not-retry instruction). Several searches surfaced `pmc.ncbi.nlm.nih.gov` article URLs; all of them were *other, citing* papers, not this one. A PMCID here is an identifier to convert, never a route. |
| 5 | Hosted-PDF search, 2 distinct queries (`filetype:pdf` on the exact title; `"ja00976a034" OR "5890-5913"`) | **No full-text copy surfaced anywhere.** Top hits were three USPTO subtilisin-variant patents that merely cite the paper in their reference lists, the ESTHER and Wikidata records already read, ESTHER author pages, and the National Academies biographical memoir of Myron L. Bender. None carries the article's text. |
| 6 | Secondary-quotation search for the paper's own figures (`"per cent" active … normality … preparations`) | **Nothing returned that quotes the paper's numbers.** No secondary source surfaced from which the tables could even be indirectly described — which is just as well, since a secondary paraphrase would not have been admissible as a read of this source anyway. |

**Routes that worked, for the record:** ESTHER paper record (front matter, no abstract — consistent with what the earlier agent reported); wikidp.org Q28258125 (fullest and cleanest front matter, plus the DOI and the page span); Semantic Scholar Graph API by DOI (identifiers, author list, page span, closed-access status, and an explicit statement that the publisher elided the abstract).

## BEARING ON THE LEDGER ENTRY

**The novelty grade cannot be settled on this source, and this note does not settle it.**

What is now nailed down, and was not before:

- **The source is real and correctly cited.** The earlier agent's inability to read it is confirmed as an access failure, not a phantom citation. The paper is *The Determination of the Concentration of Hydrolytic Enzyme Solutions: α-Chymotrypsin, Trypsin, Papain, Elastase, Subtilisin, and Acetylcholinesterase*, twelve authors, JACS **88(24): 5890–5913**, 20 December 1966, DOI 10.1021/ja00976a034, PMID 5980876. **No guess at the title was needed and none is attached** — the title above is served text from two independent records that agree on it.
- **The ledger's "six enzymes" is exactly right**, and the six are the six the title names.
- **The ledger's "determination of the concentration" tracks the title's own words.**
- **The ledger's "by active-site titration" is unverified.**

What remains open, and what it blocks:

- Sub-claims **(b)**, **(c)** and **(d)** are **COULD NOT READ**. If the novelty grade turns on whether Bender et al. published **active fractions** (titrated sites over a total-protein denominator) as against **bare active-site concentrations**, that grade is **still undecided**, and the distinction is exactly the one no accessible route could resolve. Likewise undecided is whether the paper's comparison is **across the six enzymes** or **within one enzyme across preparations** — a scope question that, on the precedent of this ledger, is the kind that has moved verdicts.
- **A COULD NOT READ must not be allowed to drift into a NOT FOUND, and neither must be allowed to drift into a confirmation.** The paper is open to anyone with ACS access; it is closed to this checker. The remaining decisive step is ordinary and cheap for a human: pull pages 5890–5913, find the summary table of enzyme concentrations, and read off whether a total-protein column sits beside the titre column. Until someone does that, grading (b) or (c) either way is a guess, and under the rule that a prior nobody opened is not prior art, **this source should be recorded as unread rather than as read against the entry.**

**Recommended ledger status for this source: EXISTS, CITED CORRECTLY (page span 5890–5913, not 5890), CONTENT UNREAD — blocking on sub-claims (b), (c), (d).**
