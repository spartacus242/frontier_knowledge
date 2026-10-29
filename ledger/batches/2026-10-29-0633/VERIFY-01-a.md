# VERIFY-01-a — UQ-20261029-01, post-batch verification (fresh-context checker)

Batch: 2026-10-29 06:33 UTC physics. Checker role: test ONE claim at first hand; no verdict recommended for the entry.

## What I was asked

Two tasks on the entry's load-bearing leg (Gate 2 asked-but-open ground):
1. CITATION — resolve the journal and DOI of the published version of Ryan et al., "Low thermal inertia of carbonaceous asteroid Bennu driven by cracks observed in returned samples", which the entry records as JOURNAL AND DOI UNRESOLVED after three queries and read as the NTRS 20250010685 accepted manuscript.
2. QUOTATION — verify at first hand the sentence the entry places at line 430: "Although the origin of the crack networks in the samples is not yet known, they are best interpreted as indigenous features rather than products of sample collection or return." Confirm the opener is really there and really the opener; say what it scopes; say whether it DECLARES the origin question open, notes a limitation, or records a move away; and say which clause is about ORIGIN (the candidate's question) and which about collection/return ARTEFACTS (a different question), and whether the first clause alone establishes that the candidate's question is posed in print.

Budget given: 6 searches, 7 fetches. Used: 6 searches, 7 fetch attempts (3 of the 7 died at the proxy and returned no content; I counted them anyway and stopped at 7).

## Brief defects found

- The brief's NTRS URL is printed with doubled percent signs ("Ryan%%20et%%20al_OREXThermalProperties.pdf"), a string-formatting artefact; the working URL has single "%20". The entry and record print it correctly.
- The brief says "(54 authors per the manuscript's own front matter)". I did NOT re-count: my read returned the title line and the first six author names only. The first six (A. J. Ryan, R.-L. Ballouz, R. J. Macke, T. Ishizaki, A. Alasli, J. Biele) match the entry's list. The count 54 is carried from the record, not re-verified here.
- Otherwise the brief describes the entry correctly: the entry does say "posed in print and explicitly declared unanswered at Ryan et al. 2026 (NTRS 20250010685) line 430", and it cites lines 442-445 and 445-448 alongside, so the leg as the entry states it rests on 430 PLUS 442-448, not on 430 alone.

## Routes tried, in order, with results

Fetches (7 attempts):
- F1 curl, NTRS PDF https://ntrs.nasa.gov/api/citations/20250010685/downloads/Ryan%20et%20al_OREXThermalProperties.pdf → `curl: (56) CONNECT tunnel failed, response 403` (proxy-level; tool-scoped per route facts; host not reached). My error: the route facts already said curl 403 is tool-scoped, so I should have started with WebFetch.
- F2 curl, NTRS metadata JSON https://ntrs.nasa.gov/api/citations/20250010685 → same proxy 403.
- F3 WebFetch, NTRS PDF (same URL as F1) → OK. Summariser returned ordered fragments (below). It stated its text ended "mid-sentence at line 1144 in Methods", so its sweep for a printed journal/DOI did not cover the manuscript's final pages.
- F4 WebFetch, NTRS metadata JSON (same URL as F2) → OK. Fields below.
- F5 WebFetch, api.crossref.org query.bibliographic=<full title>&filter=issn:2041-1723&rows=5&select=... → `PROXY_REJECTED (HTTP 403): url exceeds the maximum fetchable length`. My error: URL too long.
- F6 WebFetch, api.crossref.org query.bibliographic=Bennu+cracks+thermal+inertia+returned+samples&filter=issn:2041-1723&rows=3 → `RATE_LIMIT_EXCEEDED` at target (tool said retry once).
- F7 WebFetch, same URL, single permitted retry → `RATE_LIMIT_EXCEEDED` at target. Stopped the Crossref line. COULD NOT READ Crossref.

Searches (6):
- S1 `"Low thermal inertia of carbonaceous asteroid Bennu driven by cracks observed in returned samples" Nature Communications` → NTRS citation page, NTRS PDF, and reposts (astrobiology.com dated 2026/03/18, thedebrief.org x2, karmaka.de/?p=40545 labelled "OPEN ACCESS", universetoday, technews.tw dated 2026/03/28, scitechdaily, muckrack). No publisher page. None opened; the reposts are ONE document.
- S2 `Bennu thermal inertia cracks returned samples Ryan Ballouz Macke`, restricted to nature.com → https://www.nature.com/articles/s41467-026-68505-1 with the exact title in the search result's title field. PAGE NOT FETCHED (budget; and nature.com fails both ways per route facts). Also returned https://www.nature.com/articles/s41467-020-16528-7 titled "In situ evidence of thermally induced rock breakdown widespread on Bennu's surface" (used below as a convention check only).
- S3 `"s41467-026-68505-1"` → ten pages (Leiden repository, EMBL group pages, a bacteriophage news site, etc.) with no plausible relation to Bennu: a string-match failure. No on-point return; none opened.
- S4 `Ryan Bennu "thermal inertia" cracks returned samples 2026 Nature Communications doi 10.1038/s41467-026-68505-1` → NTRS, the same reposts, lpl.arizona.edu digital-signage pages, hoodline.com (2026/03). No publisher or indexer page. None opened.
- S5 exact title, restricted to pubmed.ncbi.nlm.nih.gov → https://pubmed.ncbi.nlm.nih.gov/41844589/ with the exact title in the search result's title field. PAGE NOT FETCHED.
- S6 exact title + Ryan, restricted to ui.adsabs.harvard.edu → target NOT returned. Returned adjacent Ryan papers (2024PSJ.....5...92R "Rocks with Extremely Low Thermal Inertia at the OSIRIS-REx Sample Site on Asteroid Bennu"; 2022JGRE..12707153R; 2020DPS/EPSC abstracts), plus 2020SciA....6.3699R ("Asteroid (101955) Bennu's weak boulders and thermally anomalous equator"), 2022NatGe..15..453D ("Alignment of fractures on Bennu's boulders indicative of rapid asteroid surface evolution") and 2020NatCo..11.2913M ("In situ evidence of thermally induced rock breakdown widespread on Bennu's surface"). None opened.

No search or fetch was refused by a classifier.

## (1) CITATION — result

Source for the journal: NTRS metadata record for 20250010685 (F4, read as JSON; READ LEVEL: FULL RECORD for the fields requested). Fields quoted as returned:
- title: "Low Thermal Inertia of Carbonaceous Asteroid Bennu Driven By Cracks Observed in Returned Samples"
- publications.publicationName: "Nature Communications"; publisher: "Springer Nature (United States)"; eissn: "2041-1723"; volume ABSENT; issue ABSENT; doi ABSENT; any field containing "10." ABSENT
- publications.publicationDate: "2025-12-12T06:00:00" — identical to distributionDate "2025-12-12T06:00:00"; submittedDate "2025-11-24T15:58:39"
- stiType: "ACCEPTED_MANUSCRIPT"; stiTypeDetails: "Accepted Manuscript (Version with final changes)"; center: JSC
- first 8 authors as NTRS prints them: A J Ryan, R-L Ballouz, R J Macke, T Ishizaki, A Alasi, J. Biele, S A Eckley, C G Hoover. NOTE: NTRS metadata spells author 5 "Alasi"; the manuscript's own front matter (F3, exact quote) prints "A. Alasli". Front matter governs; the entry's "Alasli" is correct.

JOURNAL: Nature Communications — RESOLVED, first-hand from the NTRS record, corroborated by the nature.com-restricted search return (S2) carrying the exact title.

DOI: 10.1038/s41467-026-68505-1 — RESOLVED BY INFERENCE, labelled: read off the path of the nature.com article URL returned by S2 (https://www.nature.com/articles/s41467-026-68505-1), per Nature's convention that article URLs are nature.com/articles/<DOI suffix> under prefix 10.1038. The page itself was NOT fetched, so the title-to-DOI pairing rests on the search result's title field, which the brief warns can deliver an adjacent object; I flag that. No Crossref or doi.org record was reached (F5-F7). The exact-DOI-string search (S3) returned nothing on-point. A second identifier that a later pass can convert to the DOI in one idconv call is PMID 41844589 (S5; page not fetched; the idconv endpoint in the route facts accepts PMIDs as well as PMCIDs — my knowledge of the service, labelled).

PUBLICATION YEAR: 2026 — supported, not fetched: (a) the "026" segment of the DOI suffix; the convention that this segment is the year is corroborated within this session by S2+S6, where nature.com/articles/s41467-020-16528-7 and ADS bibcode 2020NatCo..11.2913M carry the same title (Molaro et al. 2020) — my own cross-check, labelled; (b) the repost dates in S1/S4 (astrobiology.com 2026-03-18, technews.tw 2026-03-28, hoodline 2026-03), which place publication in or shortly before mid-March 2026; (c) PMID 41844589 sits among 2026 Bennu PMIDs (42420281, 42471328) in S5 — weak, labelled inference. EXACT DATE: NOT RESOLVED. The NTRS "publicationDate" 2025-12-12 equals NTRS's own distributionDate, precedes the reposts by three months and sits on a record with no DOI; I read it as the NTRS release date of the accepted manuscript, not the journal date — my reading, labelled.

VOLUME / ARTICLE NUMBER: NOT RESOLVED. No fetched record names them. (Nature Communications numbers one volume per year, which would make 2026 volume 17 — my own unsourced inference, NOT a finding; do not carry.)

So the entry's "JOURNAL AND DOI UNRESOLVED" was true of its own run and is now partly closed: the NTRS citation record names the journal (the record's reader fetched the PDF but not the metadata record), and the publisher URL encodes the DOI. What remains open: a fetched publisher or Crossref record confirming DOI, volume, article number and date.

## (2) QUOTATION — result

Source: NTRS 20250010685 accepted manuscript, F3 via WebFetch summariser. MY READ LEVEL: SECTION READ (Discussion, lines 427-432 and 442-448, as exact ordered fragments; title line and first six authors from page 1; a summariser sweep of page 1, headers, footers and body through line 1144 for a journal/DOI statement). NOT FULL TEXT: the summariser's input ended at line 1144, and I read only the passages named. The three batch readers claim FULL TEXT via the same summariser route; I do not contest that but cannot claim it myself.

REGIME line for the source: population = returned OSIRIS-REx Bennu particles (compared with Ryugu); unit = one particle; condition = laboratory thermophysical measurement plus XCT segmentation and conductivity modelling; document type = accepted manuscript with final changes (NTRS stiTypeDetails), of a Nature Communications article; the published wording was NOT checked. The candidate's object (internal cracks in returned carbonaceous asteroid fragments) is INSIDE this regime.

Reconstruction, 2 fragments, ordered and consecutive as returned, nothing completed by inference:
- A-1 (line 430): "Although the origin of the crack networks in the samples is not yet known, they are best"
- A-2 (line 431): "interpreted as indigenous features rather than products of sample collection or return."
Junction check: "they are best" | "interpreted as" — grammatical continuity ("best interpreted"). Word count: 29 by my own count, 29 by the summariser's. Location: Discussion section, lines 430-431 (the summariser cautioned that line numbers from extracted text are approximate; three batch readers and this read all place the sentence's start at 430). Matches the entry's quotation word for word.

Context, as returned (each a reconstruction from 2 fragments):
- Preceding sentence (lines 427-429): "With crack spacings well below the length of the diurnal thermal waves on both bodies, the networks act to suppress conductivity and yield comparable thermal inertias."
- Following sentence (lines 431-432): "For Bennu, the agreement between the PSFDs of the sampled particles and the sampling site suggests that extensive modification did not occur via this route."

Opener: CONFIRMED present and CONFIRMED as the sentence's opener — the preceding sentence ends "...comparable thermal inertias." and fragment A-1 begins "Although the origin...".

What the opener SCOPES: "Although" opens a concessive subordinate clause whose subject is "the origin of the crack networks in the samples". The object is the crack networks; the population is "the samples" — in a Bennu-sample paper this is at least the Bennu particles; because the preceding sentence says "on both bodies" and the following sentence narrows to "For Bennu, ...", "the samples" may cover both Bennu and Ryugu returned material, but I did not read on to a Ryugu sentence, so the Ryugu scope is PLAUSIBLE, NOT VERIFIED. The quantity in scope is the ORIGIN (what produced the cracks), not their effect on conductivity.

Polarity of the opener: it ASSERTS present ignorance — "is not yet known" — about the origin. It does not deny any mechanism and does not record a move away. It DECLARES the origin question open: "not yet known" is a statement about the state of knowledge, not about this study's scope or method (no "beyond the scope of this work", no "could not be determined with our data"); and "yet" frames it as expected to be resolved. It is, however, a CONCESSION subordinated to the main clause: the sentence's point is the artefact question, and the origin question is granted as open in passing.

Polarity of the main clause: ASSERTS, hedged ("best interpreted"), that the cracks are indigenous, i.e., DENIES that they are "products of sample collection or return".

Reinforcement at lines 442-448, verified verbatim in the same fetch (B: 4 fragments; C: 4 fragments, junctions grammatical):
- B (442-445): "The observed cracks are consistent with formation on Bennu by thermal fatigue (Molaro et al., 2020; Delbo et al., 2022; Lucchetti et al., 2024) or micrometeoroid impacts (Ballouz et al., 2020; Keller & Thompson et al., 2025), or earlier geologic processes within or on Bennu's parent body, such as impacts or fluid reaction–driven volume changes." — asserts compatibility with four mechanisms, selects none.
- C (445-448): "For example, volume-increasing reactions (e.g., hydration) may have produced polygonal fracture patterns like those observed in the angular stones, whereas volume-decreasing reactions (e.g., desiccation) may have produced fractal or dendritic patterns like in the hummocky stones (Okamoto and Shimizu, 2015)." — "For example" and two "may have" modals: a proposal, not a finding. Note the discriminant axis is pattern topology (polygonal vs fractal/dendritic), not the candidate's orientation anisotropy; the record already says this.
These match the record's reconstructions (B) and (C) and the entry's line references word for word.

## (3) ORIGIN versus ARTEFACT — which clause does which

- Subordinate (concessive) clause, "Although the origin of the crack networks in the samples is not yet known": about ORIGIN — the candidate's question (what made the cracks). It declares that question unanswered.
- Main clause, "they are best interpreted as indigenous features rather than products of sample collection or return": about the ARTEFACT question — whether the cracks pre-date collection and return. This is a different question, the candidate's declared nuisance control (its P6). The following sentence ("For Bennu, the agreement between the PSFDs ... via this route") continues the artefact argument, so the sentence's argumentative thread is the artefact question; the origin question is conceded as open in passing.

Does the first clause ALONE establish that the candidate's question is posed in print? My reading, marked as my own:
- It establishes, alone, that the ORIGIN of the crack networks is EXPLICITLY DECLARED UNKNOWN in print, in the paper's own field. "The origin ... is not yet known" names the unknown (origin) and the object (the crack networks in the samples); that is the open question "what is the origin of these cracks?" acknowledged in print.
- It does NOT, alone, pose the question in the candidate's disjunctive form: it names no mechanism, so "volume-change versus shock" is not in the clause. That part of the leg rests on lines 442-445, which name "impacts or fluid reaction–driven volume changes" side by side (within a four-mechanism list), and on 445-448, which propose a volume-change discriminant mapped onto the two particle classes. Both verified here.
- So: "declared unanswered" is carried by line 430 alone; "posed, with the candidate's two mechanism families named" is carried by 430 together with 442-448. The entry states the leg in exactly that combined form, so the leg as written is supported by the text I read. Whether "declared unknown plus mechanisms listed" equals "posed" under the ledger's Definitions, and whether the candidate's orientation-statistics operationalisation changes that, is for the judge; I was not asked to grade it.

## Numbers

- Sentence word count: 29 (29 by summariser; 29 by my count).
- Manuscript line numbers: 430-431 (target), 427-429 (preceding), 431-432 (following), 442-445 (B), 445-448 (C); extracted-text line numbers flagged approximate by the summariser.
- NTRS record dates: submitted 2025-11-24; distribution/publication 2025-12-12.
- eISSN 2041-1723; PMID 41844589; DOI suffix s41467-026-68505-1.
- Incidental corroboration from S6 URLs (not fetched): ADS bibcode 2022NatGe..15..453D agrees with the entry's Prior 3 citation (Nature Geoscience 15, first page 453, 2022, first author D[elbo]); 2020SciA....6.3699R agrees with the intake's "Rozitis et al. 2020, Science Advances".

## Read levels

- Ryan et al. 2026 accepted manuscript (NTRS 20250010685): SECTION READ via summariser (Discussion 427-432, 442-448; page-1 title and first six authors; journal/DOI sweep of page 1, headers, footers, body through line 1144). Final pages beyond line 1144 NOT read for the journal/DOI sweep.
- NTRS metadata record (API JSON): FULL RECORD for the fields requested.
- Nature Communications published version (nature.com/articles/s41467-026-68505-1): COULD NOT READ — not attempted (fetch budget exhausted; route facts say nature.com fails both ways). The published wording of the line-430 sentence is therefore NOT verified; the NTRS copy is "Accepted Manuscript (Version with final changes)".
- Crossref: COULD NOT READ (F5 proxy URL-length rejection; F6, F7 target rate limit).
- PubMed record 41844589: NOT fetched; title from the search-result title field only.
- karmaka.de/?p=40545 (aggregator, "OPEN ACCESS"): returned, NOT opened.

## My own errors and what I did not reach

- Two curl attempts wasted against a proxy 403 the route facts had already described as tool-scoped (F1, F2).
- Crossref URL built too long for the proxy (F5); then two rate-limit refusals at the target (F6, F7); stopped as the tool instructed.
- Fetch budget exhausted at 7 attempts, 3 of them never leaving the proxy. Under a count that excludes those three, three fetches would remain; I did not use them, to stay inside the stated budget. Not reached: the nature.com article page (DOI/volume/date confirmation and the published wording of line 430); the karmaka.de post (would carry the DOI link, second-hand); the tail of the NTRS manuscript beyond line 1144 (to finish the "no journal/DOI printed" sweep); the Crossref record (volume, article number, date, author count).
- S3 (exact DOI string) returned only unrelated pages; S6 (ADS) did not return the target. Both counted as run, with no on-point return.
- Author count 54 not re-verified. Ryugu scope of "the samples" not verified.
- No classifier refusals occurred.
