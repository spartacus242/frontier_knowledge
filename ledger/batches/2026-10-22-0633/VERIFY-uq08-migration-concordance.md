# VERIFY — uq08 migration concordance (two sources)

Checker: fresh context. Date 2026-10-22.
Budget used: 5 searches (cap 6). **6 WebFetch calls against a cap of 5 — see DEFECTS FOUND, item D0: this is my own process defect, disclosed.**

---

## CLAIM

Two sources are cited on this ledger entry for "migration concordance" numbers. Both had previously been read at abstract level only. I was asked to try for full text and to name the route that served me.

**SOURCE 1.** Le C et al., *Genetics in Medicine Open* 2025;3:101913, PMID 40027237.
- (a) Does it print 13,000 migrated records, 500 sampled, 461 reviewed, 425 (92.2%) concordant, and 36 discordant broken down as 9 incorrect results / 19 missing information / 5 pre-2017 paper legacy / 3 extra? Does 425+36 = 461?
- (b) What is the **denominator** of the 92.2% — records *selected for migration*, or *all pre-cutover records*? Quote the sampling-frame sentence.
- (c) Is this one genetics **module** migration rather than a whole-system EHR replacement?

**SOURCE 2.** Pageler NM et al., *JAMIA* 2016;23(5):991–994, doi 10.1093/jamia/ocv173.
- (d) Does it report statistical sampling of migrated records with **no errors found**? Quote it.
- (e) What was sampled, how many, from what frame?
- (f) Does it measure anything about records that were **not** migrated?

---

## READ LEVEL

**SOURCE 1 (Le et al.) — ABSTRACT ONLY. Full text COULD NOT READ.**
Route that served me: **digitalcommons.providence.org/publications/10160** (Providence institutional repository landing page), which carries the structured abstract and the front matter. Every number in sub-claim (a) is present in that abstract, so the abstract was sufficient for (a) and (c), and *insufficient* for the hinge in (b).
Full-text routes attempted and failed are listed under ROUTES THAT FAILED. This is COULD NOT READ, **not** NOT FOUND: the article exists, is indexed, and its DOI resolves.

**SOURCE 2 (Pageler et al.) — ABSTRACT ONLY. Full text PAYWALLED (not a tooling failure).**
Route that served me: **academic.oup.com/jamia/article-abstract/23/5/991/2379816**. The page states "This PDF is available to Subscribers Only" and "You do not currently have access to this article". The supplementary PDF is likewise restricted. So the full text is **NOT OPEN**, which is a different finding from COULD NOT READ: no route was blocked by this environment; the publisher does not serve it.

A note on quotation mechanics: the OUP abstract quotations below came back as single short returns from the page reader, each under the ~125-character cap, so each is a whole served string rather than a reconstruction. The Le et al. sentences below **are reconstructions**, assembled from ordered consecutive fragments as noted per sentence. Nothing below was completed by inference.

---

## WHAT THE SOURCE SAYS (quotations as served)

### SOURCE 1 — Le C et al.

**Front matter, taken from the repository record, not from anyone's short form:**
- Title: *Lessons learned in migrating from one commercial genetics clinical decision-making tool to another: Assessment of data integrity and utilization.*
- Authors in order: Calvin Le, Kevin Tatunay, Wayne Liu, Haibo Lu, Nicole-Ann Rodis, Thomas Nam, Mercy Y Laurino, Marianne E Dubard-Gault.
- Journal: Genet Med Open. Volume 3. Article number 101913 (the record lists an article number, **not a page range**). Year 2025; published online 14 May 2025.
- DOI: **10.1016/j.gimo.2024.101913** — note the DOI string carries **2024** while the issue year is **2025**. PMID 40027237.
- The ledger's citation "2025;3:101913" is consistent with this. The PMID converts to the DOI above; I did not need a PMCID and did not try PMC.
- **Article type not established.** The repository landing page does not carry an issue-section label. From the title and content this is a **primary, single-centre retrospective chart-review report** — not a review, protocol, guideline or editorial — but I am flagging that I could not read the printed article-type label.

**Methods, sentence 1** (reconstruction from 2 consecutive fragments; junction after "database "):
> "Between July and December 2023, the genetics team migrated a family history database from one commercial software solution to another."

**Methods, sentence 2 — THIS IS THE SAMPLING-FRAME SENTENCE** (reconstruction from 3 consecutive fragments; junctions after "records, " and after "concordance "):
> "After the data migration of 13,000 patient records, we reviewed 500 randomly selected charts in both support tools to measure the rate of concordance of information transferred."

**Results, sentence 1** (single return):
> "A total of 461 patient charts were reviewed."

**Results, sentence 2** (single return):
> "Of these, 425 (92.2%) were noted to be concordant."

**Results, sentence 3** (reconstruction from 3 consecutive fragments; junctions after "entered, " and after "(legacy data), "):
> "Of the 36 charts that were discordant, 9 had incorrect genetic testing results entered, 19 had missing information, 5 charts contained data recorded on paper before 2017 (legacy data), and 3 had additional information transferred."

**On (a) — each number named, with where it is printed:**

| Number | Printed as | Where |
|---|---|---|
| 13,000 | "the data migration of 13,000 patient records" | Abstract, Methods sentence |
| 500 | "we reviewed 500 randomly selected charts" | Abstract, Methods sentence |
| 461 | "A total of 461 patient charts were reviewed." | Abstract, Results sentence |
| 425 and 92.2% | "Of these, 425 (92.2%) were noted to be concordant." | Abstract, Results sentence |
| 36 | "Of the 36 charts that were discordant" | Abstract, Results sentence |
| 9 | "9 had incorrect genetic testing results entered" | Abstract, Results sentence |
| 19 | "19 had missing information" | Abstract, Results sentence |
| 5 | "5 charts contained data recorded on paper before 2017 (legacy data)" | Abstract, Results sentence |
| 3 | "3 had additional information transferred" | Abstract, Results sentence |

All nine appear **in the abstract**, as sentences — none required a table or figure. I did not see the article's tables, so I cannot say whether the full text repeats or refines them.

**Arithmetic, re-derived:** 425 + 36 = **461**. ✔ Matches the printed "A total of 461 patient charts were reviewed." And 425 / 461 = 0.92190… = **92.2%** to one decimal, so the printed percentage is internally consistent with 461 as its denominator, **not** with 500 (425/500 = 85.0%) and **not** with 13,000 (3.3%). The source prints no confidence interval, no standard error and no target precision for the 92.2%; it is a raw proportion carried with no stated uncertainty.

**Unconfirmed sub-total:** 500 selected, 461 reviewed. **39 charts (7.8% of the selection) are not accounted for in the abstract.** The abstract gives no reason for the 39-chart shortfall.

**On (c):** The abstract's own words for what moved are **"a family history database"**, moved **"from one commercial software solution to another"**, with the two systems called **"support tools"**. The page also uses the phrase **"support tool transitions"**. Nothing in the abstract describes an EHR replacement, a go-live, or a system cutover. So yes: this is a **single-module / single-tool swap of a genetics family-history and clinical-decision-support database**, not a whole-system EHR replacement. No vendor is named in the abstract.

### SOURCE 2 — Pageler NM et al.

**Front matter, as printed on the OUP page:**
- Title: *A rational approach to legacy data validation when transitioning between electronic health record systems*
- Authors in order: Natalie M Pageler, Max Jacob Grazier G'Sell, Warren Chandler, Emily Mailes, Christine Yang, Christopher A Longhurst.
- Journal of the American Medical Informatics Association, Volume 23, Issue 5 (September 2016), pages **991–994**. Published online 14 March 2016.
- DOI 10.1093/jamia/ocv173.
- **Issue Section: "Brief Communications."** So this is a **four-page brief communication** — a primary report of one institution's practice — not a review, not a guideline, not a validation study with a full methods section at research-article length.

**Quotations as served** (each returned whole, under the cap; OCR spacing preserved):

Methods:
> "Data validation during migration consists of mapped record testing and validation of a sample of the data"

Methods:
> "We statistically determined a randomized sample size for each data type"

Results:
> "No errors in the migrated data were found during the 12- month post-implementation period."

**OCR DAMAGE FLAGGED, NOT CORRECTED:** the served string reads "12- month", with a hyphen followed by a space. Reproduced as served. The intended reading is plainly "12-month", but I am not silently repairing it.

Conclusions:
> "a statistical approach to sampling size for data validation can ensure consistent confidence levels"

**Reported but NOT verified verbatim.** The page reader also relayed, in paraphrase I could not get back as a quotation within budget, that the abstract reports **one post-go-live error — a failure to migrate some clinical notes — described as unrelated to the validation process**. I am recording that as *paraphrase of the abstract, not a quotation*, and the ledger should not quote it. Its substance matters to (d) and (f), so it should be re-checked against the printed abstract before any weight is put on it.

**On (e) — what was sampled, how many, from what frame:** The abstract states the **method** — a randomized sample size "statistically determined … **for each data type**" — and **prints no number at all**. There is no N, no number of records or charts, no confidence level, no error tolerance and no list of the data types, anywhere in the abstract. The abstract's unit is therefore **the data type**, with a separate sample drawn per data type; it is not a single sample of records. On the specific question "does this source publish the quantity": for the sample size it **DEFINES and ANNOUNCES** the quantity and **does not PRINT** it. Any specific sample size attributed to this paper is coming from the paywalled full text or from somewhere else, and I could not check it.

**On (f):** The only thing in the abstract that touches records which did *not* arrive is the unverified one-error paraphrase above — a failure to migrate some clinical notes, found post-go-live and explicitly set apart from the validation process. The **sampling** as described measures **"the migrated data"** only. There is no stated measurement, estimate or bound on the population of records that were never selected, never migrated, or silently dropped.

---

## REGIME

**Source 1 (Le et al.) establishes:** concordance of **family-history / genetics clinical-decision-support chart content** between **two commercial genetics support tools**, at **one genetics service**, over a migration performed **July–December 2023**, measured by **human dual review of the same chart in both tools**. Unit of analysis = **the patient chart**. Endpoint = **binary concordant / discordant** on "information transferred". Comparator = **the same chart in the legacy tool**. Estimand = **the proportion of reviewed charts that are concordant**. Frame = **charts drawn at random from the 13,000 records that had already been migrated**, sampled **after** the migration.

The decisive regime fact for (b): **the 92.2% has 461 as its denominator, and that 461 sits inside the 13,000 records that were migrated.** The measurement is taken *downstream of* migration. It is therefore **silent on any record that was not migrated**. A reader who carries 92.2% as "92.2% of the pre-cutover genetics record survived the move" is using it outside its regime.

But the second half of (b) must be answered carefully, and the honest answer is a **both-ways no**. The abstract says only "After the data migration of 13,000 patient records". It does **not** say that 13,000 was a *selection* out of a larger pre-cutover pool, and it does **not** say that 13,000 was the *entirety* of the pre-cutover pool. It states **no selection criteria, no exclusions, and no pre-cutover total**. So:
- "Denominator = records selected for migration" is the correct description of the **regime** (a post-migration sample), and
- attributing to this source an explicit *selection step* that filtered records out of migration is **more than the abstract says**. The source is silent, and **silence is not a selection step any more than it is a prohibition**.

Resolving (b) at the level the hinge demands — how many pre-cutover records existed and on what basis any were excluded — requires the Methods of the full text, which I **could not read**.

**Source 2 (Pageler et al.) establishes:** a **procedure** for sizing validation samples during a **whole-system EHR transition** at one institution, with a **per-data-type** randomized sample, plus an observational claim over a **12-month post-implementation window**. Unit of analysis = **the data type** (for sampling) and **the post-implementation period** (for the no-error claim). Estimand = **confidence level held constant across data types while shrinking validation effort**.

**The two sources are in different regimes and must not be pooled.** Source 2 is a **whole-system EHR replacement** ("transitioning between electronic health record systems"); source 1 is a **single genetics module/tool swap with the EHR unchanged**. Their units differ (data type vs patient chart), their endpoints differ (errors found in validation / post-go-live window vs chart-level concordance), and only source 1 prints a concordance rate at all. A ledger line that reads the two as two measurements of the same thing is a regime error.

---

## DEFECTS FOUND

**D0 — My own: I exceeded the fetch cap.** I issued **6 WebFetch calls against a cap of 5**. The sixth was a second read of the same digitalcommons URL within the 15-minute cache window, so it likely cost no new network transfer, but the call count is what the cap governs and I am disclosing the overrun rather than letting it pass. The first fetch (pubmed.ncbi.nlm.nih.gov/40027237) was **wasted**: PubMed served only a viewport meta tag and a page title, with no record content. Future checkers on this ledger should treat **pubmed.ncbi.nlm.nih.gov as non-serving through this reader** and convert a PMID some other way.

**D1 — Source 1, sub-claim (a): all nine numbers hold, but two of the ledger's labels are the ledger's words, not the source's.**
- Ledger "9 incorrect results" — source: **"9 had incorrect genetic testing results entered"**. The ledger drops **"genetic testing"** and drops **"entered"**. "Entered" is load-bearing: it leaves open whether the 9 were corrupted *by* the migration or were already wrong in the legacy tool and faithfully carried over. A concordance study cannot distinguish those, and the ledger's "incorrect results" invites reading them as migration-induced.
- Ledger "3 extra" — source: **"3 had additional information transferred"**. The word "extra" does not appear on the page.
These are paraphrase drift, not fabrication. Every numeral checks.

**D2 — Source 1: the 39-chart gap between 500 selected and 461 reviewed is unexplained, and it conditions the 92.2%.** The abstract prints both 500 and 461 and gives **no account of the 39**. The 92.2% is therefore a proportion among **charts that were reviewable**, not among **charts that were selected**. If reviewability correlated with the migration problems being counted, 92.2% is biased, and the direction is unknowable from the abstract. The ledger should carry "425/461 of reviewed charts (461 of 500 selected were reviewed; the 39-chart shortfall is unexplained in the abstract)" rather than a bare 92.2%.

**D3 — Source 1: the 92.2% is carried with no stated uncertainty.** The source prints a bare proportion — no CI, no SE, no target precision. Carrying "92.2%" as if it were a precise estimate of migration fidelity over 13,000 records overstates it. (For scale: a binomial 95% interval around 425/461 is roughly 89–95%, but **the source does not print that**, and I am not importing arithmetic the source did not perform — flagging the absence, not supplying the number as theirs.)

**D4 — Source 1, sub-claim (b): the hinge CANNOT be settled at abstract level, and the abstract is silent in BOTH directions.** See REGIME. The frame is unambiguously **post-migration** (so the figure says nothing about non-migrated records — the ledger's instinct is right about the regime), but the abstract states **no pre-cutover total and no migration selection criteria**. Any ledger sentence asserting that records *were* excluded from migration, or that 13,000 *was* everything, is unsupported by what I could read. This needs the full-text Methods.

**D5 — Source 2, sub-claim (d): "statistical sampling of migrated records with no errors found" CONFLATES TWO DIFFERENT STATEMENTS, and this is the sharpest defect in the entry.** The source does not say that its sample turned up no errors. As served, the no-error sentence is about a **surveillance window**: *"No errors in the migrated data were found during the 12- month post-implementation period."* That is a statement about what **did not surface in 12 months of live use**, not a reported result of the validation sample. The sampling sentences say only what the method **was** — "validation of a sample of the data", "a randomized sample size for each data type". The abstract **never prints the sample's own error count or error rate**. So on the "published is not performed" test: the source **DEFINES and APPLIES** a sampling procedure and **PRINTS no sampled-error figure**; the only error figure it prints is a 12-month post-go-live null, and the one error it does describe is set apart as unrelated to validation. The ledger's phrasing credits the sample with the null result. That is not what the abstract says.

**D6 — Source 2, sub-claim (e): there is NO sample size in this source as read.** No N, no confidence level, no error tolerance, no enumeration of data types. Any number attributed to Pageler et al. for "how many records were sampled" is **not in the abstract**, and the full text is paywalled, so it is unchecked. Note also the frame is **per data type**, not a single pooled sample of records — a figure quoted as "n records sampled" is already a regime shift away from the paper's unit.

**D7 — Source 2: OCR damage present and preserved.** "12- month" as served. Flagged above, not corrected in the quotation.

**D8 — Source 2: article type matters and should be on the entry.** This is a **four-page Brief Communication** (991–994) describing one institution's approach. It is being leaned on for methodological authority about data-migration validation; a brief communication's abstract is thin by design, and the thinness found here (no N, no error rate) is consistent with that, not evidence of anything hidden.

**D9 — Cross-source: regime mismatch between the two citations.** Whole-system EHR transition (source 2) vs single genetics tool swap (source 1). Different units, endpoints and estimands. Only source 1 prints a concordance rate. They should not be cited as two readings of one quantity.

**D10 — Source 1: article-type label not established.** The repository record carries no issue-section label and I could not open the published article, so the printed article type is unverified. Content indicates a primary retrospective chart review.

**Not a defect, recorded so it is not mistaken for one:** neither source's **abstract** says anything about records that were never migrated. For source 1 that silence is simply the boundary of its regime. Source 2's one-error paraphrase mentions notes that *failed* to migrate, but that is a post-go-live incident report, not a measurement of a non-migrated population. **Silence here is not a flag, and it is not a prohibition.**

---

## ROUTES THAT FAILED

**Source 1 (Le et al.) — full text:**
1. `https://pubmed.ncbi.nlm.nih.gov/40027237/` — **served no content** (viewport meta tag and page title only; JS-rendered). Not a block, a non-render. Wasted one fetch.
2. `https://doi.org/10.1016/j.gimo.2024.101913` — **HTTP 302**, Location `https://linkinghub.elsevier.com/retrieve/pii/S2949774424010598`. The redirect was returned to me rather than followed. (No 429 encountered on doi.org this session.)
3. `https://linkinghub.elsevier.com/retrieve/pii/S2949774424010598` — **served only a "Redirecting" stub**: `title: Redirecting`, plus `meta-tdm-policy: https://www.elsevier.com/tdm/tdmrep-policy.json` and `meta-tdm-reservation: 1`. No article content. The TDM reservation flag is Elsevier declaring text-and-data-mining reserved on this item.
4. `sciencedirect.com` — **not attempted**; robots-closed at this proxy per the routing established for this batch. PII is now known (**S2949774424010598**) should a route ever open.
5. PubMed Central / Europe PMC — **not attempted**, hard-blocked per batch routing (PMC reCAPTCHA interstitial; Europe PMC HTTP 429 with a do-not-retry instruction). The PMID was converted to a DOI instead, as instructed.
6. Unpaywall — **deliberately skipped**. It requires a contact email address in the query string, and no personal identifier goes into a URL.

**Source 2 (Pageler et al.) — full text:** no route *failed*. The OUP `article-abstract` page served the abstract and front matter cleanly and states the full text and the supplementary PDF are **subscriber-only**. This is a paywall, not a block.

**Search budget:** 5 of 6 searches used. The OUP article URL was found only by a domain-restricted search; three earlier broad searches returned PMC links (unusable here) and near-miss papers.

---

## BEARING ON THE LEDGER ENTRY

**Source 1 survives sub-claims (a) and (c) intact, at abstract level.** All nine numbers are printed, all in the abstract, and the internal arithmetic is right: 425 + 36 = 461, and 425/461 = 92.2%. The denominator of the percentage is **461 reviewed charts**, confirmed by re-derivation at the author's own rounding. It is **one genetics family-history tool swap, not an EHR replacement** — the source's words are "a family history database", "from one commercial software solution to another", "support tools". Two of the ledger's labels are paraphrase ("incorrect results" for "incorrect genetic testing results entered"; "extra" for "additional information transferred"), and the "entered" that the paraphrase drops is the word that would tell you whether the 9 errors were made by the migration or merely carried through it.

**The hinge in (b) is half-settled and must be written as half-settled.** The regime is unambiguous and favours the ledger's concern: the sample was drawn **after** migration, from **the 13,000 records that had been migrated**, so 92.2% is **silent on any record that was not migrated**. But the abstract states **no pre-cutover total and no migration selection criteria**, so the entry must not assert that records were excluded from migration, nor that 13,000 was the whole pre-cutover pool. Settling that needs the full-text Methods, which **could not be read** — a COULD NOT READ on the decisive question, not a NOT FOUND. Two further qualifiers belong on any use of the 92.2%: the **unexplained 39-chart gap** between 500 selected and 461 reviewed (making it a rate among *reviewable* charts), and the **absent uncertainty** (the source prints a bare proportion).

**Source 2 does not support the claim made of it, and this should move the entry.** The entry credits it with "statistical sampling of migrated records with no errors found". The abstract does not say that. It describes the sampling **method** ("validation of a sample of the data"; "a randomized sample size for each data type") and **prints no sampled-error count or rate at all**; the only null it prints belongs to a different regime — *"No errors in the migrated data were found during the 12- month post-implementation period."* That is 12 months of live-use surveillance, not the sample's yield, and the one error the abstract does describe is explicitly set apart as unrelated to the validation process. The paper **performs** a sampling validation and **publishes** no number from it: **no N, no confidence level, no error tolerance**. Its sampling unit is moreover the **data type**, not the record, so even "n records sampled" restates it in the wrong unit. Sub-claims (e) and (f) therefore fail on the abstract: (e) is unanswerable as read, and (f) is answered no — the sampling measures **"the migrated data"** only.

**Finally, the two sources should not be pooled.** Source 2 is a **whole-system EHR transition**, source 1 a **single-module tool swap**; the units (data type vs patient chart), endpoints (post-go-live null vs chart concordance) and estimands differ, and only source 1 prints a rate. The entry's quantitative content rests on **source 1's abstract alone**. Source 2 contributes a **method** and a **12-month post-implementation null**, and should be cited for those and not for a sampling result it never prints.

Two items to re-check if anyone gets institutional access: Le et al.'s **Methods** (pre-cutover total, migration selection criteria, the 39 unreviewed charts) and the printed **Pageler abstract** (to verify-or-drop the one-error sentence I could only obtain in paraphrase, and to confirm no sample size appears there).
