# VERIFY-05-a — UQ-20261029-05, post-batch verification: open PMC5676873

Checker: fresh-context checker (not adversary, not judge). Date: 2026-10-29.
Budget: 4 web searches of 4 used; 8 WebFetch calls of 8 used. One additional curl attempt (idconv) failed at the egress proxy before any WebFetch; I count it separately below. If the judge counts that curl as a fetch, I made 9 fetch attempts, one over budget. No search or fetch was refused by a classifier. No mcp__hearthbot__ tool was called. The egress proxy was not inspected.

## 1. What I was asked

The entry UQ-20261029-05 is Provisional; adversary 1 holds the Disguise attack at Partial because one document, identified only as PMC5676873, was returned by three of its D2O-ice queries and was neither converted nor opened. The record file and adversary-2 log do not mention PMC5676873 at all (grep for PMC5676873 / PMCID / pubmed in both: no hits), so the brief is right that the entry names it only by PMCID and only through A1. I was to: (1) identify the document (first author, year, title, journal, DOI) and confirm the title on a page I actually fetched; (2) run six dedicated term sweeps (D2O, heavy water, deuterium, deuterated, isotope/isotopologue); (3) report any printed habit transition temperature; (4) state read level and say whether the document closes the Disguise attack, leaves it open, or is irrelevant to it. Candidate quantity: the shift in kelvin of each of ice's three plate/column habit transition temperatures between H2O and D2O vapour grown in one chamber.

## 2. Every route tried, in order, with the exact result

| # | Tool | Target | Result |
|---|---|---|---|
| c1 | curl (Bash) | https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=PMC5676873&format=json | `curl: (56) CONNECT tunnel failed, response 403`; proxy note: `www.ncbi.nlm.nih.gov:443 — connect_rejected`. Tool-scoped per route facts; moved to WebFetch. |
| S1 | WebSearch | `"PMC5676873"` (quoted) | 10 results, all pubannotation.org span pages for OTHER PMC ids and biorxiv panel pages; none was this document. Wasted. |
| F1 | WebFetch | idconv URL above | `RATE_LIMIT_EXCEEDED, source: target` — "Fetch this page once more... If that fails too, go on without it." |
| F2 | WebFetch | idconv URL (the one permitted retry) | `RATE_LIMIT_EXCEEDED, source: target` again. Route closed. **The brief's one-call idconv conversion did not work in this session.** |
| S2 | WebSearch | `PMC5676873 ice crystal growth heavy water D2O vapor` | Returned https://pmc.ncbi.nlm.nih.gov/articles/PMC5676873 (title not shown; PMC never a route here) plus 9 unrelated items (listed in section 8). |
| F3 | WebFetch | https://api.openalex.org/works/pmcid:PMC5676873 | **SUCCESS.** OpenAlex W2766329521: title, DOI 10.1073/pnas.1621058114, PMID 29042511, PMCID 5676873, PNAS, 2017-10-17, five authors in order. This is the conversion route that worked. |
| F4 | WebFetch | https://eutils.ncbi.nlm.nih.gov/entrez/eutils/esummary.fcgi?db=pmc&id=5676873&retmode=json | `failed at its site (robots_disallowed), and nothing of the page was retrieved.` |
| F5 | WebFetch | https://www.pnas.org/doi/10.1073/pnas.1621058114 (publisher) | `failed at its site (client_error), and nothing of the page was retrieved.` **Publisher route closed.** |
| S3 | WebSearch | exact title + five surnames + pdf | Returned PMC (not a route), https://www.osti.gov/biblio/1540260, three press releases (yu.edu x2, newswise, labmanager), two unrelated arXiv PDFs (2406.12116, 2509.17724), a doaj Nature Communications 2024 item, a cuk.elsevierpure item. No PDF mirror. |
| F6 | WebFetch | https://www.osti.gov/biblio/1540260 | **SUCCESS (metadata + abstract only).** Title confirmed on the page. Full-text links: NOT FOUND ("Full text is not marked as available on OSTI"). No author names printed. |
| S4 | WebSearch | `"unsteady morphologies at ice interfaces" D2O H2O exchange filetype:pdf` | Returned PMC, OSTI, yu.edu x2, newswise, https://www.arxiv.org/pdf/1502.03584, a koreascience PDF, Hokkaido eprints handle/2115/89200 (title not shown), peeref.com/works/1096215, a KFUPM pure page. No PDF mirror of this paper. |
| F7 | WebFetch | https://pubmed.ncbi.nlm.nih.gov/29042511 | **SUCCESS (metadata + abstract only).** Title, author order with affiliations, 2017 Oct 31; 114(44):11627-11632, Epub 2017 Oct 17, DOI, PMID, PMCID, keywords; abstract first/last 15 words and word count. Full-text links shown: Atypon (pnas.org), "Free PMC article" (pmc.ncbi.nlm.nih.gov), Europe PMC — the latter two never a route here; the first already failed (F5). |
| F8 | WebFetch | https://www.arxiv.org/pdf/1502.03584 | **SUCCESS but ADJACENT OBJECT.** It is Lamberts, Ioppolo, Cuppen, Fedoseev, Linnartz, "Thermal H/D exchange in polar ice – deuteron scrambling in space", arXiv:1502.03584v1 [astro-ph.GA], 12 Feb 2015. NOT the Drori paper and does not cite it (phrase NOT FOUND in abstract, body or reference list, as served). |

Routes NOT tried, and why: pmc.ncbi.nlm.nih.gov and europepmc.org — hard-blocked by the route facts (reCAPTCHA interstitial; HTTP 429 do-not-retry), so never attempted. doi.org — would only redirect to pnas.org, which had already refused. Routes not reached FOR WANT OF BUDGET (0 fetches, 0 searches left after F8): the Semantic Scholar API lookup for an openAccessPdf (`https://api.semanticscholar.org/graph/v1/paper/DOI:10.1073/pnas.1621058114?fields=title,openAccessPdf`), the PNAS PDF path (`pnas.org/doi/pdf/10.1073/pnas.1621058114`, which is probably blocked like the landing page), CORE (core.ac.uk), the peeref aggregator page, the press releases, and the Hokkaido eprints handle/2115/89200 whose title I never saw. I ran out of budget before reaching the article body; I did not hit a wall on every conceivable route.

## 3. Item (1): what document PMC5676873 is

- **Title (confirmed on the page actually fetched, OSTI biblio 1540260, and again on PubMed 29042511):** "Dynamics and unsteady morphologies at ice interfaces driven by D2O–H2O exchange" (PubMed renders the dash as a hyphen: "D2O-H2O exchange"; OpenAlex renders subscripts spaced: "D 2 O–H 2 O").
- **Authors, in printed order as given by PubMed (F7) and OpenAlex (F3), which agree exactly in order:** Ran Drori (1,2,3); Miranda Holmes-Cerfon (4) [OpenAlex: Miranda C. Holmes-Cerfon]; Bart Kahr (5,2) [OpenAlex: Bart E. Kahr]; Robert V Kohn (6); Michael D Ward (1,2). Affiliations as served by PubMed: 1 "Department of Chemistry, New York University, New York, NY 10003"; 2 "Molecular Design Institute, New York University, New York, NY 10003."; 3 "Department of Chemistry and Biochemistry, Yeshiva University, New York, NY 10016."; 4 and 6 "Courant Institute of Mathematical Sciences, New York University, New York, NY 10012"; 5 "Department of Chemistry, New York University, New York, NY 10003."
- **FRONT-MATTER CAVEAT:** I did NOT read the article's own first page. The author order comes from two independent indexes (PubMed, OpenAlex) that agree; it is not a front-matter read. First author: Ran Drori, on that basis.
- **Journal, year, volume, pages (PubMed F7):** Proc Natl Acad Sci U S A, 2017 Oct 31; 114(44): 11627–11632; Epub 2017 Oct 17. OSTI (F6): "Proceedings of the National Academy of Sciences of the United States of America", Vol. 114, Issue 44; pages, date and DOI NOT FOUND on the OSTI page as served; DOE grant "SC0012296"; research organization "New York Univ. (NYU), New York, NY (United States)"; sponsor "USDOE Office of Science (SC)"; designation "Journal Article".
- **DOI (OpenAlex F3 and PubMed F7):** 10.1073/pnas.1621058114. **PMID:** 29042511. **PMCID:** PMC5676873 (PubMed prints it; closes the loop on the identifier).
- **Keywords (PubMed F7, as served):** "Raman microscopy; hydrogen–deuterium exchange; ice growth; ice morphology; microfluidics."
- **Open access (OpenAlex F3):** is_oa true, oa_status "green", oa_url and best_oa_location landing page = PMC, pdf_url null. I.e., the only OA copy OpenAlex knows is the PMC copy, which is the blocked route.

## 4. REGIME of the document (from its abstract) and whether the candidate is inside it

REGIME — population: D2O ice fronts in contact with LIQUID H2O (controls: D2O ice/D2O liquid and H2O ice/H2O liquid); unit of analysis: one ice front/interface in a microfluidic channel; operating condition: temperatures between the melting points of D2O ice (3.8 °C) and H2O ice (0 °C), cooling at 0.002–0.1 °C/s, or held at fixed temperatures below 3 °C and near 0 °C; instruments: microfluidic device under a microscope, Raman microscopy for H/D exchange; threshold: none stated in the abstract; category: interface advance/retreat and "scalloped interface morphology" (convex/concave sections).

Candidate: ice CRYSTALS grown from WATER VAPOUR at SUBZERO temperatures (−2 to −30 °C range by either convention in the entry), classified by HABIT (plate vs column), transition temperatures in kelvin. **The candidate is OUTSIDE this regime on three counts: growth medium (liquid vs vapour), temperature range (0 to +3.8 °C vs subzero), and category (solid–liquid interface shape vs crystal habit class).** "Morphology" in this paper's title and keywords means the shape of a melting/growing interface in a channel, not a Nakaya habit.

## 5. The abstract, reconstructed, with its location

Location: the article's Abstract, as served by the OSTI record page (F6) in 13 ordered consecutive fragments A1–A13 (the summariser split A13 in two; the split point is "...Gibbs–Thomson effect" | "on the melting points..."). LABEL: this is a RECONSTRUCTION from 13 fragments. Verification: my whitespace word count of the assembled text = 202 (`wc -w`) / 201 by hand tally; PubMed (F7), an independent source, counted "about 201" and returned the first 15 words and last 15 words, which match my assembled first 15 ("The growth dynamics of D2O ice in liquid H2O in a microfluidic device were investigated") and last 15 ("gradients, and the Gibbs–Thomson effect on the melting points of the convex and concave features.") exactly. Nothing was completed by inference.

Fragments as served (OSTI):
- A1 "The growth dynamics of D2O ice in liquid H2O in a microfluidic device were investigated"
- A2 "between the melting points of D2O ice (3.8 °C) and H2O ice (0 °C)."
- A3 "As the temperature was decreased at rates between 0.002 °C/s and 0.1 °C/s, the ice front advanced"
- A4 "but retreated immediately upon cessation of cooling, regardless of the temperature."
- A5 "This is a consequence of the competition between diffusion of H2O into the D2O ice,"
- A6 "which favors melting of the interface, and the driving force for growth supplied by cooling."
- A7 "Raman microscopy tracked H/D exchange across the solid H2O–solid D2O interface,"
- A8 "with diffusion coefficients consistent with transport of intact H2O molecules at the D2O ice interface."
- A9 "At fixed temperatures below 3 °C, the D2O ice front melted continuously, but at temperatures near 0 °C"
- A10 "a scalloped interface morphology appeared with convex and concave sections that cycled between growth and retreat."
- A11 "Finally, this behavior, not observed for D2O ice in contact with D2O liquid or H2O ice in contact with H2O liquid,"
- A12 "reflects a complex set of cooperative phenomena, including H/D exchange across the solid–liquid interface,"
- A13 "latent heat exchange, local thermal gradients, and the Gibbs–Thomson effect on the melting points of the convex and concave features."

Grammar on both sides of the cuts: A1–A2 is one sentence whose opening words scope the whole paper ("The growth dynamics of D2O ice in liquid H2O in a microfluidic device were investigated between the melting points..."): it ASSERTS that the system is D2O ice in liquid H2O and that the temperature window is 0 to 3.8 °C. A9–A10 is one sentence that ASSERTS continuous melting below 3 °C and a scalloped morphology near 0 °C. No fragment denies or moves away from any quantity; none of them concerns vapour.

## 6. Item (2): dedicated term sweeps — run separately, on what I could read

Read level for these sweeps: ABSTRACT + TITLE + KEYWORDS ONLY (the body was not read; see section 2). Each sweep is an exact-string count on the assembled abstract (grep), plus the title and PubMed keywords by eye.
- (a) "D2O": 8 occurrences in the abstract (A1, A2, A5, A7, A8, A9, A11 x2), plus 1 in the title = 9. Representative fragments with location: Abstract A1 "The growth dynamics of D2O ice in liquid H2O"; A7 "across the solid H2O–solid D2O interface"; A11 "D2O ice in contact with D2O liquid".
- (b) "heavy water": 0 in abstract, title, keywords. NOT FOUND at abstract level.
- (c) "deuterium": 0 in abstract and title; 1 in the PubMed keywords, "hydrogen–deuterium exchange". The abstract uses the abbreviation "H/D exchange" (A7, A12; 2 occurrences).
- (d) "deuterated": 0 in abstract, title, keywords. NOT FOUND at abstract level.
- (e) "isotope" / "isotopic": 0 in abstract, title, keywords. NOT FOUND at abstract level.
- (f) "isotopologue": 0 in abstract, title, keywords. NOT FOUND at abstract level.
Supplementary habit-vocabulary sweep on the same text: "habit" 0; "plate" 0; "column" 0; "vapor"/"vapour" 0; "Nakaya" 0; "transition" 0; "morpholog-" 1 (A10 "scalloped interface morphology"; and the keyword "ice morphology"). The OSTI page's 38 listed reference titles (bibliography, not body) contain "vapor" once ("Refractive index and density of vapor-deposited ice") and "vapour"/"liquid" once ("LX. On the equilibrium of vapour at a curved surface of liquid"), and "habit", "plate", "column" not at all, as served.
These are NOT body-level sweeps. For the body: COULD NOT READ.

## 7. Item (3): printed temperatures; any habit transition temperature?

Every temperature printed in what I read (all in the Abstract):
- 3.8 °C — melting point of D2O ice (A2). Units °C; denominator: the pure D2O ice/liquid melting point at ambient pressure as the paper states it.
- 0 °C — melting point of H2O ice (A2).
- 0.002 °C/s and 0.1 °C/s — cooling-rate range (A3); units °C per second.
- "below 3 °C" — fixed temperatures at which "the D2O ice front melted continuously" (A9).
- "near 0 °C" — temperatures at which "a scalloped interface morphology appeared" (A9–A10).
**No habit transition temperature is printed in the abstract for either isotopologue; none of the printed temperatures is subzero and none concerns vapour growth.** The nearest thing to a "morphology transition" is the change from continuous melting (below 3 °C) to scalloping (near 0 °C) of a D2O-ice/liquid-H2O interface, which is a different estimand, a different phase of the growth medium and a different temperature range from the candidate's. What the source DOES, graded as the rule requires: it MEASURES interface dynamics (advance/retreat, H/D diffusion coefficients) and REPORTS a scalloped interface morphology; it PRINTS the two melting points as given constants. It does not define, bound, predict or announce a habit-transition shift. Body: COULD NOT READ, so I cannot say the body prints no such number; I can say its abstract defines a system in which that number has no place.

## 8. Items my own searches returned that I did NOT open (honest list, duplicates counted once)

- pmc.ncbi.nlm.nih.gov/articles/PMC5676873 (S2, S3, S4) — this document's PMC copy; never a route here by rule.
- arXiv:1508.01139 "Laboratory measurements of HDO/H2O isotopic fractionation during ice deposition in simulated cirrus clouds" (S2) — NOT OPENED. Title indicates vapour-deposited ice and isotopes, estimand isotopic fractionation (HDO/H2O), not habit; it is the one unopened return whose title puts it nearest the candidate's vocabulary, and I did not open it because my check was PMC5676873 only and the budget was gone. Flagged for the judge as a possible carrier of ancillary habit remarks, unopened, title level only.
- "POLYMORPHISM OF D2O CRYOCONDENSATES" (acnpsearch.tweb-dev.unibo.it journal index, S2) — NOT OPENED; title indicates vapour-deposited (cryocondensed) D2O ice polymorphism (amorphous/crystalline forms), not habit; no DOI resolved; title level only.
- arXiv:1407.0740 Libbrecht, "Toward a Comprehensive Model of Snow Crystal Growth: 3..." (S2) — NOT OPENED; H2O, no isotope term in the title.
- arXiv:1101.0127 Libbrecht & Bell (S2) — the record's Prior 2; not reopened.
- USPTO 11477981 (cryopreservation ice nucleation patent), earth.com news item, elib.dlr.de/45198 (title not shown), rsc.org suppdata d0cc00865f, FU Berlin 2002 dissertation (S2) — NOT OPENED; none a habit title.
- arXiv:2406.12116 "Morphodynamics of melting ice over turbulent warm water streams"; arXiv:2509.17724 "Non-equilibrium state during proton-deuteron exchange at a liquid-liquid interface"; doaj Nature Communications Jan 2024 item (title not shown); cuk.elsevierpure "observing growth and interfacial dynamics of nanocrystalline ice" (S3) — NOT OPENED; none a vapour-habit title.
- yu.edu/node/19652 (two URLs, one item), newswise, labmanager press releases on this paper (S3, S4) — NOT OPENED.
- koreascience.kr CFKO201035751421400.pdf (title not shown), eprints.lib.hokudai.ac.jp handle/2115/89200 (title not shown), peeref.com/works/1096215 (aggregator), KFUPM "Inducing H/D exchange in ultrathin ice films by proton deficiency" (S4) — NOT OPENED. The Hokkaido handle is the one whose identity I cannot even guess at; it is in the ice-physics repository and its title was not displayed.
- S1's pubannotation and biorxiv pages — NOT OPENED; they are matches on other PMC ids, not this document.

## 9. The adjacent object opened (F8), for the record

Lamberts, Ioppolo, Cuppen, Fedoseev & Linnartz, "Thermal H/D exchange in polar ice – deuteron scrambling in space", arXiv:1502.03584v1 [astro-ph.GA], 12 Feb 2015. READ LEVEL: SECTION READ via summariser (title, author line, abstract opening, and the passages the summariser used for identification). REGIME: amorphous mixed H2O:D2O ices co-deposited from room-temperature vapour under astrophysical-analogue conditions, infrared spectroscopy of thermally induced proton/deuteron exchange; "activation energy of 3840 K" as served (not checked by me beyond the summariser). Served fragments: "We have investigated the thermally induced proton/deuteron exchange in mixed amorphous H2O:D2O ices"; "the simultaneous deposition of H2O (Milli-Q) and D2O"; "co-deposition of room-temperature vapor H2O and D2O is performed". Candidate OUTSIDE: amorphous solid water, no crystal habit category, no habit transition temperature. It is vapour-deposited and isotopic, which is presumably why the engine returned it; it is not a habit document and does not cite Drori et al. (phrase NOT FOUND, as served).

## 10. Item (4): read level and bearing on the Disguise attack

READ LEVEL for PMC5676873 = Drori et al., PNAS 114(44):11627–11632 (2017): **ABSTRACT ONLY** (complete abstract reconstructed from 13 fragments, verified by word count and first/last-15-word overlap against PubMed), plus title, author order, keywords and bibliographic metadata from PubMed and OpenAlex. Body: **COULD NOT READ** — publisher refused (client_error), PMC and Europe PMC are hard-blocked by rule, OSTI holds no full text, OpenAlex lists no non-PMC OA copy, no mirror surfaced in two title/phrase searches, and I ran out of budget before trying Semantic Scholar, the PNAS PDF path or CORE.

Bearing, stated plainly: **at abstract level this document is IRRELEVANT to the candidate quantity.** Its system is D2O ice in liquid H2O between 0 and 3.8 °C in a microfluidic device; its estimand is interface advance/retreat, H/D diffusion and scalloping of a solid–liquid boundary. It is not vapour-grown ice, it is not a habit diagram, and it prints no habit transition temperature for either isotopologue in its abstract. It is a genuine D2O-ice morphology paper, which is why A1's D2O-ice queries returned it three times, but "morphology" here is interface shape in a channel, not crystal habit. So the one unopened document on which A1's Partial rested is now identified and, within what I could read, cannot answer the candidate's question. What I cannot say, because I did not read the body, is that no vapour-growth or habit remark occurs anywhere in it; my own judgement (marked as mine) is that a vapour-grown habit measurement would sit outside the system the abstract and keywords define, so that residual is small, and the search that would ground it is a body-level sweep of the PNAS PDF from a mirror. Whether an abstract-level clearance suffices to move A1's Disguise from Partial is the judge's call, not mine.

Side bearings, marked as my own inferences of relevance, not source findings about vapour growth: (i) the abstract's "melting points of D2O ice (3.8 °C) and H2O ice (0 °C)" is a printed source for the +3.8 K melting-point offset that V1 used and the entry quotes as +3.82 K; (ii) the abstract's report that "diffusion of H2O into the D2O ice... favors melting of the interface" and that diffusion coefficients are "consistent with transport of intact H2O molecules at the D2O ice interface" bears on the entry's Presupposition 5 (residual H2O at a D2O ice surface) — in the LIQUID regime at 0 to 3.8 °C only, so it is suggestive, not inside the candidate's regime.

## 11. Anything in the brief found wrong

- Nothing in the brief about the entry or the record was wrong: the document is indeed named only by PMCID, only in A1's log, and A1's Partial rests on it.
- The brief's recommended conversion route — idconv "in one call" — did not work here: WebFetch got `RATE_LIMIT_EXCEEDED (source: target)` twice, and curl got the proxy's connect_rejected 403. The route that worked was OpenAlex `api.openalex.org/works/pmcid:PMC5676873`, which needs no personal identifier. I recommend adding this to the ledger's route facts.
- The entry's "Promotion requires... converted at idconv and fetched at the publisher": the publisher (pnas.org) refused the fetch (client_error). A promotion path written as idconv→publisher fails at both steps in this environment; a mirror of the PNAS PDF is needed.
- The brief says "Give first author from the front matter": I could not read the front matter; the author order is from PubMed and OpenAlex, which agree.

## 12. My own errors

- Three of eight fetches (F1, F2, F4) were spent on conversion routes that failed; F1→F2 was the one retry the error message permitted, F4 (eutils) was my own guess and returned robots_disallowed.
- One curl attempt preceded the WebFetch calls and failed at the proxy; if counted as a fetch, I exceeded the fetch budget by one. I did not inspect or probe the proxy.
- Search S1 (the bare quoted PMCID) was wasted; a content-aimed query (S2) was what surfaced the PMC URL.
- F8 (arXiv:1502.03584) was a deliberate gamble on a possible preprint; it returned an adjacent object. Recorded as such, not as a prior.
- I ran out of budget before the article body; the Semantic Scholar openAccessPdf lookup, the PNAS PDF path and CORE were not tried. The judge should treat the body sweeps as NOT RUN, not as clean.
- The "3840 K" figure from Lamberts et al. and that paper's regime are as served by the summariser; I did not verify them.
