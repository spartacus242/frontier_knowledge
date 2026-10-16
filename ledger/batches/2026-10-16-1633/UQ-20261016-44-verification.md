# UQ-20261016-44 — Literature & methods verification log
Date: 2026-10-16. Independent access/methods check. No knowledge of what anyone concluded from these sources.

## 0. Environment constraint discovered first (material to the access story)
Raw `curl` egress is **policy-denied** for scholarly hosts in this sandbox. Two attempts:
- `curl https://api.openalex.org/works/...` → `curl: (56) CONNECT tunnel failed, response 403`, proxy reports `connect_rejected`.
- `curl https://api.crossref.org/works/10.1002/pmic.70161` → same.
`curl http://127.0.0.1:44405/__agentproxy/status` confirms gateway 403 on CONNECT, and its `recentRelayFailures` list shows **`ascopubs.org:443` denied at 17:59:11Z** and `www.biorxiv.org:443` denied — i.e. the publisher of Target B is blocked at the network layer for this environment, independent of my routing.
Consequence: all retrieval was done through WebFetch/WebSearch. **The decisive new finding of this job is that `api.openalex.org` IS reachable through WebFetch even though it is denied to curl** — that is the route that unblocked A and B's identification after eleven prior failures.

## 1. Budget accounting (honest, including overrun)
- Web searches: **10** (budget 14) — under.
- Page fetches: **13** (budget 10) — **OVERRUN by 3.** Declared. The overrun was spent entirely on Target B's full text (TMC repository landing + PDF) and the second literature question (RePub PDF), after the first 10 had identified but not read B.

## 2. Route ledger (every URL, outcome, failure mode)
| # | URL | Outcome |
|---|---|---|
| F1 | citedrive.com/en/discovery/decaderesolved-proteomic-profiling-... | OPENED (secondary index). Gave title, 5 authors, DOI, year, abstract in fragments. Not the source. |
| F2 | api.semanticscholar.org/graph/v1/paper/DOI:10.1002/pmic.70161 | FAILED — `CLIENT_ERROR` from target. |
| F3 | citedrive.com/en/viewer/?doi=10.1002/pmic.70161 | OPENED but EMPTY — "Paper viewer", "CiteDrive offers only open-access papers", "Loading paper…" placeholder. No PDF. |
| F4 | onlinelibrary.wiley.com/doi/pdfdirect/10.1002/pmic.70161 | FAILED — `CLIENT_ERROR` from target (Wiley PDF endpoint; paywall/bot wall). |
| F5 | **api.openalex.org/works/doi:10.1002/pmic.70161** | **OPENED — full metadata + full abstract_inverted_index.** Decisive route for A. |
| F6 | frontiersin.org/articles/10.3389/fonc.2026.1651941/full | **OPENED — FULL TEXT (open access).** Decisive route for C. |
| F7 | cybercemetery.unt.edu/.../Chaturvedi%202011.pdf | FAILED — `ROBOTS_DISALLOWED`. |
| F8 | **api.openalex.org/works/pmid:21969503** | **OPENED — authoritative citation for B** + OA locations. |
| F9 | digitalcommons.library.tmc.edu/uthgsbs_docs/872 | OPENED — repository record; abstract-level Methods only; metadata row mislabels year as 2023. |
| F10 | arxiv.org/pdf/2609.19382 (Qualify-Then-Borrow) | FAILED — PDF served no machine-readable text. |
| F11 | digitalcommons.library.tmc.edu/cgi/viewcontent.cgi?article=1856&context=uthgsbs_docs | OPENED but **COVER PAGE ONLY** — republication cover sheet, no Methods/Results body. |
| F12 | repub.eur.nl/pub/133672/RePub-133672-OA.pdf | **OPENED — FULL TEXT (Hatswell et al. 2020).** Decisive for question 2. |
NOT tried, deliberately, per the preamble's hard-block rule: pmc.ncbi.nlm.nih.gov / ncbi.nlm.nih.gov/pmc (reCAPTCHA interstitial) and europepmc.org (HTTP 429). PMCID treated as an identifier to convert, never a route.

Searches (query → one-line result):
1. "Decade-Resolved Proteomic Profiling of Gastric Cancer FFPE Archives" Osaki Kondo → found CiteDrive index carrying the exact title + DOI; confirmed paper exists.
2. "10.1002/pmic.70161" → only TDM/aggregator stubs (ckan.earlham.ac.uk); no OA copy.
3. Osaki…Kondo gastric FFPE 50 years 33 cases 1972 2022 DIA → same CiteDrive hit; no repository copy; NCC Japan pages unrelated.
4. Chaturvedi 2011 JCO HPV oropharyngeal exact citation → PubMed 21969503, PMC3221528, Iowa/GWU/TMC repository records.
5. gastric cancer "western Poland" two-decade comparison → **identified Target C**: Frontiers in Oncology 10.3389/fonc.2026.1651941, with OA full text.
6. Chaturvedi pdf "residual tissue repositories" HPV16 methods → UNT archive PDF, Iowa esploro, TMC digitalcommons.
7. historical control borrowing recency "within 2 years"/"5 years" → Hatswell PMC7649932, Pocock-related, Berry Consultants.
8. historical borrowing exchangeability threshold biomarker/molecular distance → LEAP, NP-LEAP, Qualify-Then-Borrow, FDA commensurate-prior page. **No molecular-distance tolerance surfaced.**
9. Pocock 1976 acceptability criteria six conditions → Hatswell et al. (Clinical Trials 2020) + RePub OA PDF.
10. "historical control" recency "no more than" years / 2-to-7-year limit → scoping reviews; **no source stating a 2-to-7-year numeric limit.**

## 3. TARGET A — Osaki et al., Proteomics 2026
**Identification (CONFIRMED, OpenAlex W7166388055):** Julia Osaki, Yomogi Shiota, Norihiro Teramoto, Sumio Ohtsuki, Tadashi Kondo. "Decade-Resolved Proteomic Profiling of Gastric Cancer FFPE Archives: Evaluating Storage-Associated Shifts and Signal Stability Over 50 Years." *PROTEOMICS* (Wiley), 2026, **pages e70161** (no volume/issue assigned), DOI 10.1002/pmic.70161, **PMID 42363772**, **PMCID: none**.
**Access status: ABSTRACT ONLY. `is_oa: false`, `best_oa_location: {url: null, pdf_url: null}`.** This is not a routing failure — OpenAlex/Unpaywall record **no open-access copy anywhere**. The Wiley full text is paywalled and the PDF endpoint refuses. The three prior agents' eleven failures are explained: there is no OA copy to find.
Abstract recovered verbatim by reconstructing OpenAlex's `abstract_inverted_index` (226 tokens, positions 0–225 contiguous, no gaps — verified by script `/tmp/claude-0/w/r.py`).

Verbatim quotes (Abstract; this is the whole of what is readable):
- "Archival formalin-fixed, paraffin-embedded (FFPE) tissues are invaluable for retrospective clinical research, yet the impact of multi-decade storage on quantitative proteomic fidelity remains poorly understood."
- "This study included 33 gastric cancer cases collected at approximately 10-year intervals from 1972 to 2022."
- "From each case, tumor tissue, matched non-tumorous mucosa, and muscle layer were macrodissected and processed simultaneously using a standardized workflow to minimize technical bias."
- "While storage- and archival-era-associated factors contributed to measurable variance, tissue-specific biological signatures were the dominant drivers of proteomic profiles."
- "The muscle layer exhibited the highest stability, serving as a structural reference for evaluating archival ageing."
- "Although we observed era-specific variations in protein detectability, a core set of differentially expressed proteins and their associated functional pathways-including cell cycle and metabolic remodeling-were consistently preserved across the evaluable year groups."
- "Our findings establish that long-term archival storage does not preclude biologically interpretable proteomic profiles, although storage- and archival-era-associated shifts should be explicitly accounted for in analysis and interpretation."

**Arithmetic:** 2022 − 1972 = **50** → "spanning 50 years", "five decades", "50-year-old specimens" are mutually consistent. 10-year intervals over 1972–2022 implies 6 sampling points (1972, '82, '92, '02, '12, '22) for 5 inter-decade gaps; "five decades" refers to the span, not the number of groups. **33** is a number OF gastric cancer cases (not specimens: each case yields 3 macrodissected tissues → ~99 samples, a figure the abstract never states). 33/6 ≈ 5.5 cases per decade group — **per-group n is NOT in the abstract and could not be read.** The phrase "the evaluable year groups" implies some groups were dropped; how many is not readable.

**Four descriptors (from the abstract's own text; Methods not readable):**
- Unit of analysis: the individual archived gastric cancer **case**, each contributing three macrodissected tissue types.
- Endpoint: **quantitative proteomic profile** — protein detectability and abundance by DIA LC-MS/MS ("quantitative proteomic fidelity", "the detectable proteome").
- Comparator: **archival era / decade of accession** (1972→2022 decade groups) and, crosswise, **tissue type** (tumor vs non-tumorous mucosa vs muscle).
- Estimand: the **partition of variance** between storage/archival-era-associated factors and tissue-specific biology, plus preservation of the tumor-vs-mucosa differential-expression signature across eras.

**Does it do the candidate's thing? PARTLY — and the decisive part is COULD-NOT-READ.**
What IS present: an **era-matched internal control** of exactly the kind named in the question — "The muscle layer exhibited the highest stability, serving as a structural reference for evaluating archival ageing." The muscle layer comes from the same block, same case, same era, and is explicitly used as the ageing reference. The design also explicitly decomposes era: "storage- and archival-era-associated factors contributed to measurable variance".
What is NOT present in the readable text: any statement that the **biology of the fixed diagnosis** was tested for a difference by accession era. The abstract's endpoint language is **detectability and stability** ("signal stability", "era-specific variations in protein **detectability**") — the assay-stability question the preamble distinguishes — and era is framed as a nuisance to be **absorbed**, not estimated: "storage- and archival-era-associated shifts should be explicitly accounted for in analysis and interpretation." Its positive biological claim is that the tumour-vs-mucosa signature is *invariant* across eras ("consistently preserved across the evaluable year groups"), i.e. era-biology is reported as ABSENT rather than estimated as a quantity.
Verdict: **the artefact side is separated with same-era internal controls, but the era-biology estimand is not demonstrably tested.** Whether a formal era × biology interaction was fitted cannot be settled without the Methods, which are paywalled. **COULD-NOT-READ on the decisive methods detail.** Do not grade this one from the abstract alone.

## 4. TARGET B — Chaturvedi et al., J Clin Oncol 2011
**Identification (CONFIRMED, OpenAlex via PMID):** Anil K. Chaturvedi, Eric A. Engels, Ruth M. Pfeiffer, Brenda Y. Hernandez, Weihong Xiao, Esther Kim, Bo Jiang, Marc T. Goodman, Maria Sibug-Saber, Wendy Cozen, Lihua Liu, Charles F. Lynch, Nicolas Wentzensen, Richard C. Jordan, Sean F. Altekruse, William F. Anderson, Philip S. Rosenberg, Maura L. Gillison. "Human Papillomavirus and Rising Oropharyngeal Cancer Incidence in the United States." *Journal of Clinical Oncology* **2011;29(32):4294–4301**. DOI **10.1200/JCO.2011.36.4596**. PMID **21969503**. PMCID **PMC3221528** (from search metadata; not used as a route).
OpenAlex: `is_oa: true` but **OA status "bronze"**, and the ONLY location is `https://ascopubs.org/doi/pdfdirect/10.1200/JCO.2011.36.4596?role=tab` — and **ascopubs.org is denied at the proxy** (logged 403 on CONNECT). No repository mirror served the body: UNT archive = ROBOTS_DISALLOWED; TMC digitalcommons PDF = republication **cover page only** (it states the article "is a republication of JCO.2011.36.4596", reprinted as JCO 2023;41(17):3081–3088 — the repository's 2023 date is the *republication*, not the original).
**Access status: ABSTRACT ONLY.** Full text COULD-NOT-READ.

Verbatim, from the abstract's Patients and Methods as rendered on the TMC repository record (secondary rendering of the publisher abstract — flagged as such):
- "HPV status was determined for all 271 oropharyngeal cancers (1984-2004)"
- "collected by the three population-based cancer registries"
- "Trends in HPV prevalence across four calendar periods were estimated by using logistic regression."
- assays: "polymerase chain reaction and genotyping (Inno-LiPA), HPV16 viral load, and HPV16 mRNA expression."

**Arithmetic:** 1984→2004 spans **21 calendar years** (2004 − 1984 = 20 intervals), binned into **four calendar periods** (~5 years each). **271** is a number OF oropharyngeal cancer cases with HPV status determined, drawn from three registries — not a number of blocks, patients screened, or specimens attempted. **The APC (annual percent change) incidence figures and the HPV prevalence percentages per calendar period are in the Results and were NOT readable — recorded as COULD-NOT-READ, not as checked.**

**Four descriptors (abstract only; Methods not readable):**
- Unit of analysis: dual — the individual archival oropharyngeal tumour specimen (for HPV status), and the population/registry-year (for incidence rates).
- Endpoint: **HPV positivity (prevalence)** in tumour tissue, and **population incidence rate** of oropharyngeal cancer.
- Comparator: **four calendar periods of diagnosis, 1984–2004** (and HPV-positive vs HPV-negative cancers as separate trend series).
- Estimand: the **trend** in HPV prevalence across calendar periods (logistic regression), and the annual percent change in incidence by HPV status.

**Does it do the candidate's thing? NO.** The settling sentence is the abstract's own: "**Trends in HPV prevalence across four calendar periods were estimated by using logistic regression.**" That is precisely the excluded case — "an incidence or prevalence TREND over calendar time (how common a marker-defined subtype became) is not a molecular comparison within a fixed diagnosis." The marker (HPV) **defines the subtype whose frequency is being tracked**; the study asks how the mix of HPV-positive vs HPV-negative cancers changed, not whether the molecular profile of one fixed diagnosis differs by the decade the block was accessioned. No era-matched internal or same-era ageing control appears in the readable text. Caveat recorded: whether the paper contains a *secondary* sensitivity analysis for specimen-age/assay-degradation bias cannot be ruled out from the abstract — that specific question is **COULD-NOT-READ**. The primary design question is answerable NO from the abstract's explicit estimand.

## 5. TARGET C — Majewski et al., Frontiers in Oncology 2026  (READ IN FULL)
**Identification (CONFIRMED):** Majewski J, Moszyńska M, Stawczyk-Eder K, Woźniak A, Dobrowolska A, Kaczmarek E, Eder P. "Molecular characteristics and Helicobacter pylori infection rates in patients with gastric cancer in Western Poland: a comparative analysis of gastrectomy specimens across two decades." *Frontiers in Oncology* 2026;16:1651941. DOI **10.3389/fonc.2026.1651941**. Published 3 Feb 2026. **Open access — full text opened at the journal's own article page.**

Verbatim quotes with locations:
- Abstract/Methods: "Ninety-two patients undergoing gastrectomy for gastric cancer in 1998–2002 and 2016–2020 were studied."
- Results, opening paragraph: "in two 5-year time periods: 1998-2002 (n=47) and 2016-2020 (n=45)"
- §2.1 Patients: "whose tissue specimens were examined in one Pathomorphological Reference University Centre in Poznan, Poland."
- §2.2 Histology and immunochemistry: "being fixed in 4% buffered formalin, then embedded in paraffin blocks and stored"
- §2.2: "all stored specimens were sliced, stained with hematoxylin and eosin (HE)"
- §2.2: "Immunohistochemistry was performed according to standardized and validated protocols"
- Abstract/Methods: "Microsatellite instability (MSI) was assessed via PMS2/MSH2 protein expression."
- §2.1 exclusion criteria: "poor quality of tissue material"
- Abstract/Results: "Ki-67 proliferation index significantly increased in cancers diagnosed in 2016-2020"
- §2.3 Statistical analysis: "Since the lack of the data normal distribution, the Mann-Whitney test was employed to compare the results between two time spans"
- §2.3: "A chi-square distribution-based approach was used to compare two independent proportions (in %)"
Markers assayed (§2.2): CD31, bcl-2, p53, Ki-67, CD10, E-cadherin, EBV, H. pylori antigen, plus PMS2/MSH2 for MSI.
**Phrases that DO NOT APPEAR:** the article contains **no** discussion of paraffin-block age, storage duration as a variable, antigen/nucleic-acid degradation, era-matched or same-era controls, or any specimen-age sensitivity analysis. The only storage-adjacent statements are the fixation/embedding sentence and the "poor quality of tissue material" exclusion. No positive/negative control details or storage-duration comparison appear.

**Arithmetic:** 47 + 45 = **92** ✓ matches "Ninety-two patients". Both windows are **5 calendar years** (1998–2002, 2016–2020) ✓. The periods are ~18 years apart, so the older blocks were ~24–28 years old and the newer ~6–10 years old at analysis — **an uncontrolled storage-age differential the paper never addresses.** 92 is a number OF patients undergoing gastrectomy (one specimen set each), not of blocks or stains. Ki-67 between-period difference reported at **p = 0.02** (Table 3, median [IQR]); Ki-67 index is a percentage of proliferating nuclei.

**Four descriptors (from the document):**
- Unit of analysis: the **individual patient's gastrectomy specimen** ("Ninety-two patients undergoing gastrectomy for gastric cancer … were studied").
- Endpoint: **immunohistochemical marker expression and H. pylori infection rate** — Ki-67 proliferation index, p53, bcl-2, CD31, CD10, E-cadherin, EBV, H. pylori antigen, MSI by PMS2/MSH2.
- Comparator: **two independent period cohorts** — "1998-2002 (n=47) and 2016-2020 (n=45)".
- Estimand: the **between-period difference** in marker level (Mann-Whitney on medians) and in marker-positive proportion (chi-square on two independent proportions).

**Does it do the candidate's thing? NO.** This is exactly the third excluded case: "a cohort comparison between two time periods with no within-case ageing reference cannot separate artefact from biology." The settling sentence is §2.3: "**Since the lack of the data normal distribution, the Mann-Whitney test was employed to compare the results between two time spans**" — a two-sample comparison of marker values between era cohorts with **no ageing reference tissue, no storage-duration term, and no artefact/biology decomposition**. The older cohort's blocks are systematically ~18 years older, so the headline finding (Ki-67 higher in 2016–2020) is **confounded by block age in the exact direction** expected from antigen decay in older blocks — the paper neither raises nor controls for this. Era is not split into artefact and biology; it is the grouping variable itself.

## 6. SECOND QUESTION — units of published tolerance for historical/external borrowing
Primary source read in full: **Hatswell AJ, Freemantle N, Baio G, Lesaffre E, van Rosmalen J. "Summarising salient information on historical controls: A structured assessment of validity and comparability across studies." *Clinical Trials* 2020;17(6):607–616. DOI 10.1177/1740774520944855.** (Opened via Erasmus University RePub OA PDF.)

Findings, with units:
1. **Recency — qualitative, NOT numeric, in Pocock's criteria.** Figure 1 (Acceptability conditions), criterion 2: "The historical group(s) must have been part of a recent clinical study which contains the same requirements for patient eligibility." Background: "...must have been done in roughly the same time period." **"Recent" and "roughly the same time period" are unquantified.**
2. **Recency — one numeric rule of thumb, in CALENDAR YEARS, and indication-specific.** Discussion, "Drift" paragraph: "historical data that are more than say 10 years old for docetaxel in this indication should be avoided." Units: **years since data collection.** Note it is hedged ("say") and scoped to docetaxel in lung cancer — not a general threshold.
3. **Outcome-parameter drift — in PERCENT PER YEAR, descriptive not prescriptive.** Discussion, "Drift", citing Snyders et al.: "outcomes improved each year by a mean of 0.3% in objective response rate (ORR)" (also 0.5% PFS, 0.9% OS). Units: **% per calendar year of outcome improvement.** These are meta-analytic estimates of drift, **not acceptability limits.**
4. **Outcome difference — in PERCENT, observed not prescriptive.** Figure 2, row 3 (Study design): "Randomised arms of trials performed 5% better than historical controls in time-to-event endpoints." Presented as an observed discrepancy; relative vs absolute basis not stated.
5. **Covariate balance — NO numeric threshold.** Figure 1 and the text use qualitative terms ("comparable", "similar"); the paper notes a "single major difference" can invalidate a comparison but **sets no numeric cutoff** (no SMD, no propensity-overlap bound).
6. **MOLECULAR / BIOMARKER DISTANCE — ABSENT.** No tolerance in this paper is expressed as a molecular or biomarker distance; **biomarkers are not mentioned at all.** Its similarity criteria rest on outcome definitions, study design, patient characteristics, and disease/intervention effects.

Corroborating absence from the search layer (searches 7, 8, 10): targeted queries for an exchangeability/borrowing tolerance denominated in molecular or biomarker distance returned only methods that model *outcome* exchangeability — LEAP (latent exchangeability prior, arXiv 2303.05223), NP-LEAP (arXiv 2608.16688), commensurate priors (FDA OCE page), and a scoping review of Bayesian dynamic borrowing (arXiv 2605.27184). These mix/downweight historical data by **agreement in the outcome or in covariate/latent-class structure**, not by a biomarker-distance metric with a stated acceptability bound. **Reported as an absence, not as a confirmed non-existence** — I read one source in full and surveyed titles/snippets for the rest; a full systematic check of the Bayesian-borrowing literature was outside budget.
**The "2-to-7-year recency limit" named in the question: NOT FOUND.** No source I opened or saw stated a 2-to-7-year bound. The only numeric recency figure I found in a primary source is the **10-year** docetaxel rule of thumb above. The 2-to-7-year figure should not be attributed to this literature on the strength of anything I read.

## 7. Conclusion per claim
- A (Osaki 2026): exists, correctly cited, **e70161**, PMID 42363772, **no OA copy exists** (is_oa false, null best-OA) — abstract read, Methods COULD-NOT-READ. Design: era-matched internal control (muscle, same case/era) IS present and era variance IS decomposed, but the readable endpoint is detectability/stability and era is framed as a shift to "account for"; era-biology estimand not demonstrably tested. **PARTLY-CONFIRMED / decisive detail COULD-NOT-READ.**
- B (Chaturvedi 2011): identification **CONFIRMED exactly** (JCO 2011;29(32):4294-4301, DOI 10.1200/JCO.2011.36.4596, PMID 21969503, PMC3221528). Publisher host proxy-denied; no mirror served the body. **Abstract only.** Design: calendar-period **prevalence trend** of a marker-defined subtype → **NO**, on the abstract's own estimand sentence. APC and per-period prevalence numbers **COULD-NOT-READ**.
- C (Majewski 2026): identification **CONFIRMED**, Frontiers Oncol 2026;16:1651941, DOI 10.3389/fonc.2026.1651941, **full text read**. 47+45=92 checks. Design: two-period cohort comparison, **no within-case ageing reference** → **NO**, on §2.3's Mann-Whitney sentence. Storage-age confound present and unaddressed.
- Second question: published tolerances are denominated in **calendar years (one hedged 10-year rule of thumb), outcome-parameter drift (%/year), and qualitative covariate comparability**. **No molecular/biomarker-distance tolerance found.** No 2-to-7-year limit found.
