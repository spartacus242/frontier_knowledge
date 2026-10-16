# UQ-20261016-36 — Verification log: in-vessel position as a quality attribute in standards and accreditation schemes

Date of check: 2026-10-16
Checker: independent literature-and-methods subagent
Budget: 14 web searches / 6 page fetches. **Used: 14 searches (at budget), 6 fetches (at budget).** 7 access routes refused or blocked (see below).

## 0. Claim under check

> "Nothing shows any standards body, accreditation scheme, regulator or named facility treating a cryostored unit's position INSIDE a storage vessel as a quality attribute - that is, as something to be recorded against the unit, controlled, qualified, or used as a decision input such as stratified release testing, position-aware allocation, or a covariate in investigating a failure."

Three categories to keep apart (as specified in the task):
- **(a)** location recorded for traceability/retrieval — an inventory requirement;
- **(b)** storage ENVIRONMENT qualified / mapped / monitored for temperature uniformity, incl. qualifying the warmest point and putting worst-case material there;
- **(c)** the individual unit's position treated as an attribute of THAT UNIT's quality, affecting what is done with it or how its result is read. **Only (c) refutes the claim.**

## 1. Important caveat on method

Raw HTTP (`curl`) to every document host was refused by the environment's egress proxy (`CONNECT tunnel failed, response 403`), so every document had to go through the fetch tool, which (i) converts the PDF text layer and (ii) **caps its read at the first 100,000 characters of the extracted text**. Consequence: for three of the four documents I did open, the storage clauses are in the unread remainder. Quotes below are the fragments the fetch tool returned as verbatim from the PDF text layer; where it returned a fragment rather than a whole sentence I have reproduced the fragment and not completed it.

**Nothing in this log is a read of: AABB Standards for Cellular Therapy Services (paywalled), ISO 20387, ISO 21973, ISO 24190 (all paywalled), EU GMP Annex 1, EU GMP Annex 2, HFEA Code of Practice guidance note 17, FACT-JACIE Part C10/D9, NetCord-FACT Part D6/D7, or ISBER section I2.100.** Those are COULD-NOT-READ, not "not found".

## 2. Searches run (14 — at budget)

| # | Query (abbreviated) | One-line result |
|---|---|---|
| 1 | ISBER Best Practices storage location / position / LN2 vapour phase gradient | Found free full-text ISBER Best Practices PDF (vhir.vallhebron.com); rest were abstract/aggregator or vendor pages |
| 2 | NetCord-FACT cord blood standards 7th ed PDF storage location records | Found factglobal.org PDF `cb-standards-for-public-comment.pdf` + FACT standards landing pages (paywalled/registration) |
| 3 | FACT-JACIE HCT standards 9th ed PDF storage location inventory | Found ebmt.org `STS.5.2.050_HCT_Standards_9th_Ed_R1.pdf` (9th ed) and older 4.1/5.3/6.0/7th ed PDFs |
| 4 | HFEA code of practice storage location dewar straw position GN 17 | Found 8th-ed PDFs on preprodportal.hfea.gov.uk and a 9th-ed consultation/pre-publication PDF on hfea.gov.uk |
| 5 | AABB Standards for Cellular Therapy Services storage location quarantine | Only store/landing pages + a TOC and front-matter preview PDF; full standards are sold, not published |
| 6 | SPREC Standard PREanalytical Code long-term storage element codes | Only aggregator/abstract pages (usuhs, umn, lih) + a SAGE reader link + one PMC id |
| 7 | ISO 20387 biobanking storage location traceability clause 7 | Only EA/UKAS/ILAC training slides, resellers and a manuscript about the standard — no clause text |
| 8 | ISO 21973 / ISO 24190 scope | ANSI preview-pages PDF (scope + contents only) and resellers; no clause text |
| 9 | EudraLex Vol. 4 Annex 2 ATMP storage location segregation PDF | Found `ec.europa.eu/.../2018_annex2_en.pdf` and an EC document-download link |
| 10 | Cryo tank failure investigation: position in tank / canister / level (Pacific Fertility, Univ. Hospitals 2018) | News coverage and litigation documents only; nothing describing in-vessel position as an investigation variable |
| 11 | "position" within cryogenic vessel as quality attribute / stratified release / vial location (extended search) | Vendor blogs, cryopreservation reviews, a cryovial study — no standard, regulator or facility treating position as a unit quality attribute |
| 12 | Cryogenic temperature mapping, warmest location, worst-case placement guidance | Mapping protocols (CASRAI), ISPE controlled-temperature-mapping concept paper, freezer-variability poster, transfusion-guidelines appendix — all category (b) material |
| 13 | HFEA code of practice 9th ed PDF storage, restricted to hfea.gov.uk/portal.hfea.gov.uk | Found the in-force PDF `portal.hfea.gov.uk/media/it1n3vpo/2022-07-01-code-of-practice-2021.pdf` |
| 14 | EU GMP Annex 1 2022 "loading pattern" worst-case position | No primary Annex 1 text; only consultancy/LinkedIn/vendor summaries. **Annex 1 text therefore never read.** |

## 3. Fetches attempted (6 fetch-tool calls — at budget) and routes refused (7)

| Route | Outcome |
|---|---|
| `curl https://vhir.vallhebron.com/.../ISBER-best-practices-repositories.pdf` | **proxy-refused** (CONNECT 403) — nothing retrieved |
| `curl https://www.ebmt.org/.../STS.5.2.050_HCT_Standards_9th_Ed_R1.pdf` | **proxy-refused** (CONNECT 403) |
| `curl https://factglobal.org/media/lplfxu3b/cb-standards-for-public-comment.pdf` | **proxy-refused** (CONNECT 403) |
| `curl https://portal.hfea.gov.uk/media/it1n3vpo/2022-07-01-code-of-practice-2021.pdf` | **proxy-refused** (CONNECT 403) |
| `curl https://ec.europa.eu/.../2018_annex2_en.pdf` | **proxy-refused** (CONNECT 403) |
| fetch 1: ISBER Best Practices PDF (vhir mirror) | **opened, partial** — 3rd edition (2012); read to ~section D3 of ~, remainder (incl. I2.100 Specimen Location) unread |
| fetch 2: FACT-JACIE HCT Standards 9th ed (ebmt.org) | **opened, partial** — extraction ended at B4.7.2; Part C10 / D9 (storage) absent from the readable text |
| fetch 3: NetCord-FACT Cord Blood Standards (factglobal.org) | **opened, partial** — 8th edition text, headers read "Draft"; read to B11.8.7; Part D6 "Conditions for Storage" / D7 "Monitoring and Alarm Systems" unread |
| fetch 4: `https://pmc.ncbi.nlm.nih.gov/articles/PMC6463986` (intended SPREC paper) | **blocked — reCAPTCHA interstitial.** No article text. SPREC therefore COULD-NOT-READ |
| fetch 5: HFEA Code of Practice in-force PDF (portal.hfea.gov.uk) | **blocked — ROBOTS_DISALLOWED** |
| fetch 6: HFEA Code of Practice 9th ed pre-publication PDF (hfea.gov.uk/media/2565) | **opened, partial** — read only to guidance note 5 (interpretation 5D); **GN 17 "Storage of gametes and embryos" not reached** |

Not attempted for want of budget: EU GMP Annex 2 (`2018_annex2_en.pdf`), AABB TOC/front-matter previews, ANSI preview pages for ISO 21973, ISO OBP pages for ISO 20387.

## 4. Verbatim quotes obtained, with locations

### 4.1 ISBER Best Practices for Repositories — **Third Edition, 2012** (title page: "2012 Best Practices for Repositories", "Third Edition"; copyright "2011 ISBER"; journal line "Volume 10, Number 2, 2012")

Note: the free full text available to me is the **3rd edition (2012)**. The current edition (5th, 2023) was not read; no statement here describes what ISBER *currently* requires.

Category (a) — location as inventory/traceability:
- Table of contents lists **"I2.100 Specimen Location"** under Section I (Biological Material Tracking). **The body text of I2.100 was not readable.**
- **C7.000 Backup Storage Capacity:** "*the location within the freezer where the samples have been relocated*" (record to be made when samples are moved out of a failed unit; the same best practice requires recording the freezer or refrigerator name or number).
- **B10.000 Relocation of a Repository:** "*A map should be created for the new site that will indicate the location of all equipment and materials that will be transferred.*" (facility move, not specimen-level.)

Category (b) — environment qualified/mapped/monitored:
- **C2.100 Vapor or Liquid Storage:** "*vapor phase storage is preferred because it provides sufficiently low temperatures to maintain samples*"
- **C8.000 Environmental Monitoring Systems:** "*different locations in the equipment might exhibit different temperatures depending on the size and age of the unit*"
- **C8.000 (Best Practice):** "*so that warm and cold spots that could be problematic for material storage can be identified*"
- **C8.000:** "*probes may be placed at various levels in the freezer to monitor liquid nitrogen levels*"
- **C8.000:** "*temperatures warmer than -196 C indicate that the probes are in the vapor phase of the chamber.*"
- **C8.000:** "*warming may not be immediately reversed by closing the freezer or refrigerator.*"

Category (c): **none in the readable text.** C8.000 establishes that temperature varies by location inside the equipment but does not connect that variation to an individual specimen's quality, to selection for release/QC, or to interpreting a result or investigating a deviation.

Phrase checks in the readable text: "quality attribute" — does not appear. "stratified" — does not appear. "position-aware" — does not appear. "worst-case location" — does not appear. No passage about a warmer top-of-vessel zone appears in the readable text.

### 4.2 FACT-JACIE International Standards for Hematopoietic Cell Therapy — **Ninth Edition** (publication date October 28, 2025; effective February 2, 2026)

Readable portion ended at **B4.7.2**. The storage parts (**C10 and D9, "Cellular Therapy Product Storage"**, listed in the table of contents) were **not readable**.

Only storage-adjacent text obtained, from the A4 definitions:
- **"Storage":** "*Holding a cellular therapy product for future processing, distribution, or administration.*"
- **"Quarantine":** "*...in a physically separate area clearly identified for such use...*" (segregation by designated area — a control on where material sits, at area level.)

Term checks in the readable portion: "position" appears only as **"Key position"** (A4) and **"key positions"** (B4.3–B4.4), i.e. personnel roles. "level" appears only as "level of donor risk" (B1.8.1), "level of care" (A4 Acuity), "levels of resolution" (A4 Verification typing). "canister", "rack", "height", "worst case": not present in the readable portion.

**Verdict for this document: (a)/(b)/(c) all COULD-NOT-READ for the storage clauses.** Nothing here supports or refutes the claim.

### 4.3 NetCord-FACT International Standards for Cord Blood Collection, Banking, and Release for Administration — **Eighth Edition** (edition date June 14, 2023; cover also prints "Effective: January 15, 2020"; running headers read "Draft NetCord-FACT International Cord Blood Standards")

Readable portion ended at **B11.8.7**; **Part D (D4–D8, incl. D6 "Conditions for Storage" and D7 "Monitoring and Alarm Systems")**, Part E and the appendices were **not readable**.

Category (a) — the most granular inventory requirement found anywhere in this check:
- **B9.1:** "*The inventory management system for CB units shall allow each CB unit and its samples*"
- **B9.2.3:** "*Storage device identifier*"
- **B9.2.4:** "*Location within the storage device*"
- **B9.2.5:** date of storage and removal
- **B9.5:** "*designed to address the duration of storage for cryopreserved CB units*"
- **B3.1.17:** records of "*sample location and storage temperature*" for associated, representative, reference, retention and maternal samples

This is the clause closest to the claim: it mandates recording **position inside the storage device** against the unit — but as an inventory/retrieval field. Nothing in the readable text makes that field a quality attribute, an input to release or allocation, or a factor in investigating a deviation.

Segregation / mix-up prevention (control on placement, at inventory-system level):
- **B9.3:** the system "*shall clearly distinguish related CB units from unrelated CB units*"
- **B9.4:** "*designed to prevent mix-ups, contamination of the CB units during storage*"
- **A4 "Quarantine":** "*The segregation of a cord blood unit to prevent cross-contamination or improper release.*"
- **B9.6.1:** "*Unrelated CB units shall not be returned to the CBB inventory after they have left the CBB premises.*"

Labelling:
- **B6.6.2:** labelling required "*At all stages of collection, distribution, processing, cryopreservation, or storage*"
- **B6.3.3:** "*The label shall be validated as reliable for storage under the conditions in use.*"

Representative/reference samples — stored under the same CONDITIONS, not at a specified position:
- **A4 "Representative sample":** "*Aliquot of the final cord blood product that is stored under the same conditions as the cord blood unit.*"
- **A4 "Reference sample":** "*stored for future analysis of product identity, potency, quality, purity*"
- **A4 "Contiguous segment":** "*A sealed length of tubing integrally attached to the cord blood unit.*"
- **B6.2.6:** "*Integrally attached segments should include an identifier linking the segments to the applicable CB unit.*"

This is a notable near-miss: a representative sample is required to share the unit's storage **conditions**, which is the place a standard *could* have specified co-location/position — and, in the readable text, does not.

Temperature:
- **A4 "Warming event":** "*Any event when a cryopreserved cord blood unit reaches -150o C or warmer.*"
- **B3.1.17:** records of "*storage temperature*" for samples
- **B10.3.4:** "*continuous temperature monitoring*" — for transfer of inventory only
- Liquid-vs-vapour-phase requirement: **absent from the readable text** (B4.2.4 mentions "*Liquid nitrogen, including monitoring of oxygen levels*" only as a safety-policy topic). D6/D7 unread.

Term checks in the readable portion: "position" — only personnel ("*each key position in the CBB*", B2.5). "canister" — once, in **transfer records B10.3.3.8**, not in storage requirements. "rack", "height", "worst case" — absent. "level" — only "oxygen levels" (B4.2.4) and "level of resolution" (B3.1.25).

**Verdict: this document does (a) explicitly and at in-vessel granularity, plus placement control for mix-up/segregation; (c) not found in the readable text; D6/D7 COULD-NOT-READ.**

### 4.4 HFEA Code of Practice, 9th edition

The in-force PDF (`portal.hfea.gov.uk/media/it1n3vpo/2022-07-01-code-of-practice-2021.pdf`) was **blocked (ROBOTS_DISALLOWED)**. The pre-publication 9th-edition PDF on hfea.gov.uk opened but the read reached only **guidance note 5 (interpretation 5D)**, stopping mid-sentence at "*In relation to b), where consent is given following the application of the parental consent provisions in Schedule 3,*". Cover reads "9th EDITION – TO BE PUBLISHED OCTOBER 2018", "© HFEA copyright 2018".

What was readable is consent/licensing material, e.g.:
- Contents: "*17. Storage of gametes and embryos*" (title only)
- **GN 1, s.17(1)(c):** "*that proper arrangements are made for the keeping of gametes, embryos and human admixed embryos*"
- **GN 1, licence condition T10:** "*the PR must ensure that all stored gametes, embryos or admixed embryos are transferred to another licensed centre*"
- **GN 5, Schedule 3 para 8(1):** "*A person's gametes must not be kept in storage unless there is an effective consent by that person to their storage*"
- **GN 4, guidance 4.2(e):** "*the availability of facilities for freezing and storing eggs, sperm and embryos*"

In the readable portion: records of physical storage location, dewar/vessel requirements, LN2-level or temperature monitoring and alarms, and segregation/quarantine are **all absent** — but **GN 17, the guidance note that would contain them, was never reached.** "position", "goblet", "cane", "canister", "height", "worst case" do not appear in a storage context in the readable portion ("level" appears only in GN 2.14 on qualifications).

**Verdict: HFEA is COULD-NOT-READ on this question. Do not treat the absence above as evidence.**

### 4.5 Documents not opened at all

- **AABB Standards for Cellular Therapy Services (12th ed.)** — sold, not published; only store pages, a TOC preview and a front-matter preview surfaced. **COULD-NOT-READ.**
- **ISO 20387 (biobanking)** — paywalled; search returned accreditation-body training slides (EA IT-2, UKAS, ILAC B14) and resellers, no clause text. **COULD-NOT-READ.**
- **ISO 21973 (transport of cells)** — only an ANSI preview-pages PDF (scope/contents) surfaced and was not fetched. **ISO 24190** — no primary text surfaced; I could not even confirm its scope from a primary source. **COULD-NOT-READ.**
- **EU GMP Annex 1 (2022)** — search 14 returned no primary text (consultancy and social-media summaries only); not fetched. **COULD-NOT-READ.** Note for the record: Annex 1's sterilisation-load provisions (loading patterns, worst-case positions for biological indicators) are the nearest conceptual analogue to position-as-controlled-attribute, but they concern sterilisation loads, not cryostored units — and **I did not read them, so no claim is made about their wording.**
- **EU GMP Annex 2** — URL located (`ec.europa.eu/.../2018_annex2_en.pdf`), proxy-refused for curl, not fetched for want of budget. **COULD-NOT-READ.**
- **SPREC** — the only primary route found (PMC) returned a reCAPTCHA interstitial; aggregator pages (usuhs/umn/lih) are not the source and were not used. **COULD-NOT-READ.** I therefore cannot state what SPREC's long-term-storage element does or does not code.

## 5. Arithmetic / figure checks

The claim contains no numbers, so there is no quoted figure to verify. The two numeric items encountered were checked for what they are numbers *of*:
- NetCord-FACT A4 defines a **"Warming event"** as a cryopreserved CB unit reaching **"-150o C or warmer"** — a temperature threshold applied to the unit, not to a position; units are °C as printed (the degree symbol renders as "o" in the PDF text layer).
- ISBER C8.000 refers to **"temperatures warmer than -196 C"** as indicating that **probes** (not units) are in the vapour phase — i.e. a statement about probe placement in monitoring, category (b).
- Budget arithmetic: 14 searches used of 14 allowed (0 remaining); 6 fetch-tool calls used of 6 allowed (0 remaining), of which 4 returned document text (all partial) and 2 were blocked; plus 5 raw-HTTP routes refused by the proxy before any fetch-tool call, giving **7 refused/blocked routes** in total.

## 6. Documented instance of in-vessel position used as a decision input

Searches 10 and 11 found none. Search 10 (the 2018 Pacific Fertility Center and University Hospitals Cleveland tank failures) returned news reports and litigation filings only; nothing in the returned material described position within the tank as a variable in the investigation, in a recall decision, or in a release decision. Search 11 (extended) returned vendor blogs, cryopreservation reviews and a cryovial study; none was a standards body, regulator, accreditation body or named facility treating position as a decision input. **This is "not found in the material my searches returned", not a demonstration of non-existence** — and note that the litigation record for those failures was not read.

## 7. Conclusion per element of the claim

| Element | Finding |
|---|---|
| ISBER (read: 3rd ed. 2012, partial) | Does **(a)** (I2.100 "Specimen Location" by title; C7.000 location-within-freezer record) and **(b)** (C8.000 warm/cold spots, probe placement, vapour-phase temperatures). **(c) not found** in the readable text. Current (5th ed.) text unread. |
| FACT-JACIE 9th ed. | Storage clauses (C10/D9) **COULD-NOT-READ**. Only area-level quarantine segregation seen in definitions. |
| NetCord-FACT CB 8th ed. | Does **(a)** explicitly at in-vessel granularity (B9.2.3 "Storage device identifier", B9.2.4 "Location within the storage device"; B3.1.17 "sample location and storage temperature") and placement control against mix-up (B9.3, B9.4). Representative sample must share storage **conditions** (A4), not a position. **(c) not found** in the readable text; D6/D7 unread. |
| AABB cellular therapy | **COULD-NOT-READ** (paywalled). |
| HFEA Code of Practice | **COULD-NOT-READ** (in-force PDF robots-blocked; pre-publication PDF read only to GN 5, so GN 17 "Storage of gametes and embryos" never reached). |
| ISO 20387 | **COULD-NOT-READ** (paywalled). |
| ISO 21973 / ISO 24190 | **COULD-NOT-READ** (paywalled; ISO 24190's scope not confirmed from a primary source). |
| EU GMP Annex 1 / Annex 2 | **COULD-NOT-READ** (no primary text fetched). |
| SPREC | **COULD-NOT-READ** (PMC captcha; aggregators are not the source). |
| Documented instance of position as a decision input | **NOT-FOUND** in the material returned by 2 targeted searches; no refutation, and no proof of absence. |
| Overall claim | **PARTLY-CONFIRMED.** Everything I could actually read does (a) and/or (b) and stops there; no document I read treats a unit's in-vessel position as an attribute of that unit's quality. But the clauses with the highest prior of bearing on (c) — FACT-JACIE C10/D9, NetCord-FACT D6/D7, ISBER's storage-QC and tracking sections, HFEA GN 17, all of AABB and all of ISO, both GMP annexes, and SPREC — were not read. The claim is **not refuted** by this check; it is **not confirmed** either. The sweeping word "Nothing" is not supportable on this evidence base. |

## 8. Correction to the claim as worded

The claim should not be read as implying that no body requires in-vessel position to be recorded. **NetCord-FACT 8th ed. B9.2.4 requires "Location within the storage device" as an inventory record field**, and B9.2.3 requires a "Storage device identifier" — so a unit's position inside its vessel *is* mandated to be recorded against the unit by at least one accreditation scheme, in category (a). What is absent from the readable text is any use of that record as a quality attribute: no stratified release testing, no position-aware allocation, no position covariate in deviation investigation.
