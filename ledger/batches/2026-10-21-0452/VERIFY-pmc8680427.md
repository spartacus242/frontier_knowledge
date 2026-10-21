# VERIFY — PMC8680427 (identification check)

## Outcome: IDENTIFIED

## Citation, as the sources serve it

Front matter as the publisher's own page serves it (journals.lww.com fulltext page):

- **Article type label on the page:** "Clinical Communication"
- **Title:** Medical gas pipeline system as a limiting factor for hospital oxygen supply during COVID-19 outbreak
- **Authors:** Ajay Kumar; Poojitha R. Gunnam; Bhinyaram Jat(1); Ravi Kant(2)
- **DOI (on the page):** 10.4103/ija.ija_683_21
- **Journal / year (copyright line):** Indian Journal of Anaesthesia, 2021

The publisher fulltext page does NOT print volume, issue or page numbers, and it prints the
affiliation superscripts (1, 2) without the affiliation text. Those fields therefore come from
Crossref registered metadata, not from served front matter, and are flagged as such:

- **Journal (Crossref container-title):** Indian Journal of Anaesthesia
- **Volume 65, Issue 11, pages 834–836**
- **Published:** print 2021-11; online 2021-11-23
- **Type (Crossref):** journal-article
- **PMID:** 35001957
- **PMCID:** PMC8680427

## Read level

**Full text** — reached through the publisher host, journals.lww.com. The page served the
introduction, the incident description, the discussion, and the table/figure captions. The
contents of the table and figure themselves were not reproduced by the reader, so numbers that
exist only inside the table/figure are NOT covered by this check.

### Routes tried, and what each returned

1. `https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=PMC8680427&format=json` —
   **HTTP 302** to `https://pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?format=json&ids=PMC8680427`.
   Not followed automatically; returned as a redirect notice.
2. The redirected converter API on `pmc.ncbi.nlm.nih.gov` (an **API path, not an article page**) —
   **answered with JSON, no CAPTCHA interstitial.** This is the call that cracked the
   identification. Served verbatim:
   `{"status":"ok", ... "records":[{"doi":"10.4103/ija.ija_683_21","pmcid":"PMC8680427","pmid":35001957,"requested-id":"PMC8680427"}]}`
   It also warned `query param \`email\` is missing.` and `query param \`tool\` is missing.` — the
   warnings are harmless and were deliberately NOT satisfied, since supplying them would mean
   putting a contact address in a query string.
3. Web search on the bare string `"PMC8680427"` — **useless.** Ten hits, none of them this
   article: pubannotation.org annotation pages for *different* PMC ids, biorxiv full-text tab
   fragments, and PubChem substance RDF pages. This is very likely the route that burned the
   earlier reader's nine attempts; it does not work for this id.
4. `https://eutils.ncbi.nlm.nih.gov/entrez/eutils/esummary.fcgi?db=pmc&id=8680427&retmode=json` —
   **ROBOTS_DISALLOWED** at the fetcher. Dead route; do not retry.
5. `https://api.crossref.org/works/10.4103/ija.ija_683_21` via WebFetch — **answered**, gave
   title, four authors in order, container-title, volume, issue, pages, year, type. No abstract
   deposited in Crossref.
6. Title search — the only hit for the article itself was the blocked PMC page; a domain-scoped
   search surfaced the publisher fulltext URL.
7. `https://journals.lww.com/ijaweb/fulltext/2021/11000/medical_gas_pipeline_system_as_a_limiting_factor.10.aspx`
   — **answered with full text.**

Not tried, by instruction: pmc.ncbi.nlm.nih.gov *article* page, europepmc.org, doi.org
resolution, Unpaywall.

## Claim A — what the identifier refers to

PMC8680427 is **not** a research paper measuring oxygen at the bedside. It is a
**Clinical Communication** (the journal's own label) in Indian Journal of Anaesthesia reporting a
**single-hospital incident** during a COVID-19 surge, in which the hospital's medical gas pipeline
system (MGPS) could not hold wall-outlet pressure because its pressure-reducing valves capped
total oxygen flow below concurrent demand.

Genre note per rule (5): this is a **clinical communication / incident report**, not a primary
study with a protocol, not a review, not a guideline. There is no comparator arm, no enrolled
sample and no estimand. Its unit of analysis is **one hospital's gas pipeline installation during
one event**.

## Claim B — what it MEASURES (the discriminating question)

**It measures oxygen pipeline pressure and pipeline flow capacity against concurrent demand.**
It does **NOT** measure oxygen delivered at a hospital bedside against the prescribed flowmeter
setting. No flowmeter-setting-versus-delivered-FiO2/flow comparison appears anywhere in the
served text. The quantities reported are system-side: bar of pressure at the wall outlets and at
the pressure-reducing station, and litres-per-minute capacity of the reducing valves, set against
a headcount of patients drawing oxygen.

Verbatim strings found in the served full text, each checked as a string on its own:

Design capacity (the denominator of demand):
- "The MGPS was initially designed to supply oxygen to 60 intensive care unit (ICU) beds and 300 non-ICU beds"

Concurrent demand at the time of the event:
- "about 200 patients were on ventilator support and about 450 patients were on oxygen supplementation by mask"

The measured pressure failure:
- "Eventually, there was drop in pressure at the wall outlets to 3.4 bar"
- "and low-pressure alarm in various wards got activated."

The flow-capacity limit identified as the cause:
- "Both pressure-reducing valves of duplex system (main and reserve) in MGPS,"
- "which allowed total oxygen flow of 4000 + 4000 litres per minute (LPM)"
- "were insufficient to maintain wall outlet pressure of 4.2 bar."

Note on the two pressure figures: the text gives the pipeline delivery pressure in two places and
they are not the same number — "to delivery pressure of 4.8 bar in hospital MGPS" (the
pressure-reducing station's output) versus "wall outlet pressure of 4.2 bar" (what the valves
failed to maintain). Per rule (4) both formulations are recorded here rather than reconciled;
neither carries a citation, and neither is hedged.

The remedy and its own measurements:
- "which gradually diminished as 5000 LPM of oxygen supply was restored by three emergency manifolds."
- "The installation of new pressure reducing station took 110 min to complete"
- "and 80 D type cylinders were consumed at emergency manifold."

The mechanism, as the discussion states it:
- "The pressure-reducing station in MGPS reduces high pressure (10.5 bar) of oxygen being received from LMO tank"
- "to delivery pressure of 4.8 bar in hospital MGPS."
- "The MGPS is built with 1.5 times surge capacity than expected load."

## Defects

1. **The earlier reader's failure was a routing failure, not a missing source.** The source is
   real, open access and readable. Record this as COULD NOT READ by the earlier reader, never as
   NOT FOUND, and never as a doubtful identifier.
2. **A bare-string search on a PMCID is a trap at this proxy.** `"PMC8680427"` returns ten
   confident-looking hits, zero of which are the article; several are annotation or RDF pages
   keyed to *other* PMC ids. Anyone matching on these would mis-identify the paper.
3. **The converter redirect must be followed manually.** The documented v1.0 converter URL 302s to
   a `pmc.ncbi.nlm.nih.gov` path. Because the standing guidance is "PMC is hard-blocked," the
   redirect looks like a dead end — but the blockage is on *article* pages, and this *API* path
   answers clean JSON. Treating the whole host as blocked is what makes this identifier look
   unidentifiable.
4. **Front matter is split across two sources.** Volume 65, issue 11, pages 834–836 are not on the
   publisher's served page; they are Crossref metadata. Per rule (7) they are labelled above
   rather than presented as served front matter.
5. **Affiliations are unrecoverable from the served page** — superscript markers without
   affiliation text. Do not assert the authors' institution from this read.
6. **Table and figure contents were not read.** Any figure at a stated threshold inside the table
   or figure is outside this check; rule (8) cannot be discharged for those.
7. **Potential mis-citation risk for the ledger:** the title's phrase "hospital oxygen supply"
   invites the reading that the paper is about oxygen reaching patients. It is not. Citing it for
   a bedside-delivery-versus-prescribed-setting claim would be a genre and endpoint error, even
   though the paper is genuinely about hospital oxygen failing to reach patients.
