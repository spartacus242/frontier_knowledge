# UQ-20261016-40 — Verification log: "Automated filtering of particle images in single particle cryoEM"

Run date: 2026-10-16
Source under check: bioRxiv 10.1101/2025.11.12.688030 ("cryoDANN" / "cryoVAE").
Budget: 14 web searches, 6 page fetches. **Used: 14 searches, 6 fetches (both exactly at budget, no overrun).**

---

## 1. Access routes and refusals

| # | Route | Outcome |
|---|---|---|
| A1 | `curl` → `https://www.biorxiv.org/content/10.1101/2025.11.12.688030.full.pdf` | **PROXY-REFUSED.** `curl: (56) CONNECT tunnel failed, response 403`. Agent-proxy status endpoint confirms policy denial class for arbitrary hosts (`recentRelayFailures` shows the same 403-to-CONNECT for www.ebi.ac.uk, data.rcsb.org, pmc.ncbi.nlm.nih.gov, eutils.ncbi.nlm.nih.gov, api.semanticscholar.org). Not retried, per /root/.ccr/README.md ("do not retry policy denials"). |
| F1 | WebFetch `https://www.biorxiv.org/content/10.1101/2025.11.12.688030.full.pdf` — bulk verbatim transcription | **OPENED but REFUSED in part.** Page content retrieved; the extraction sub-model declined to transcribe verbatim ("I can't transcribe the full article verbatim, but I can summarize it"). Also reported that the converted content "begins at the Introduction" — i.e. title page/abstract not in the conversion. |
| F2 | WebFetch same PDF — targeted question set 1 | OPENED. Returned short quotes. |
| F3 | WebFetch same PDF — targeted question set 2 | OPENED. Sub-model noted a **125-character per-quote limit**, so long sentences came back only as fragments. |
| F4 | WebFetch same PDF — targeted question set 3 (tables, totals) | OPENED. Confirmed tables are not in the conversion. |
| F5 | WebFetch `https://www.biorxiv.org/content/10.1101/2025.11.12.688030v1.full` (HTML full text) | OPENED. "Tables 1, 2, and 3 appear only as captions with empty bodies, and Table 4 has only a caption describing subset definitions. Supplementary Tables S1–S7 are cited but not included." |
| F6 | WebFetch `https://ftp.empiar.pdbj.org/archive3/10093/10093.xml` (EMPIAR mirror, to recover EMPIAR-10093's deposited particle count) | **FAILED.** `CLIENT_ERROR / source: target / "There was an error while fetching."` Fetch budget then exhausted; EBI (`www.ebi.ac.uk`) is proxy-blocked, so no second route to the EMPIAR record. |

**Net reading status: yes-partial.** All running prose of Results, Methods and Discussion was readable (via converted text, quoted in fragments). **No table in the paper was readable** — Tables 1–4 and Supplementary Tables S1–S7 were empty or absent in both the PDF→markdown and HTML→markdown conversions. Every claim that depends on a table value is therefore COULD-NOT-READ, not "not found".

---

## 2. Searches run (14) with one-line results

| # | Query | Result |
|---|---|---|
| S1 | `"Automated filtering of particle images in single particle cryoEM" biorxiv 688030` | Found the canonical PDF URL `biorxiv.org/content/10.1101/2025.11.12.688030.full.pdf`. |
| S2 | `cryoDANN cryoVAE biorxiv 2025.11.12.688030 full text EMPIAR-10093` | Nothing relevant; only unrelated cryo-EM ML arXiv preprints. Did not surface the HTML full-text URL. |
| S3 | `EMPIAR-10093 particle stack number of particles deposited` | No EMPIAR-10093 record; surfaced only pdbj mirror pages for 10029/10076/10096/10097. |
| S4 | `fraction of picked particles retained final reconstruction survey many cryo-EM structures statistics` | No pooled corpus statistic. Surfaced "A minority of final stacks yields superior amplitude in single-particle cryo-EM" (Nat Commun 2023, s41467-023-43555-x = CryoSieve). |
| S5 | `cryo-EM inter-laboratory comparison same dataset processed independently several groups overlap particle sets` | No inter-lab curation-overlap study; surfaced cross-validation-with-independent-particle-set papers and a 2004 particle-picking comparative study. |
| S6 | `"ring trial" OR "round robin" cryo-EM single particle data processing comparison multiple laboratories same dataset` | No cryo-EM ring trial. Mostly generic analytical-chemistry round-robin pages. |
| S7 | `survey EMPIAR EMDB depositions percentage of picked particles used in final map attrition statistics across entries` | No pooled attrition statistic; EMPIAR FAQ/deposition-policy pages and EMDB deposition-rate news pages only. |
| S8 | `"particle picking challenge" cryo-EM consensus overlap between participants picked particles comparison` | Surfaced REPIC (Commun Biol 2024, s42003-024-07045-0) — consensus/overlap across *picking algorithms*, not across laboratories' curation. |
| S9 | `EMDataResource "map challenge" multiple groups reconstructed same cryo-EM datasets independently results comparison 2018` | Surfaced the 2019 EMDataResource **model** challenge (same map, many modellers) — not particle curation. |
| S10 | `"median" OR "on average" percentage "of picked particles" discarded during cryo-EM processing across datasets review` | No pooled statistic; per-paper method tables and the CryoSieve JoVE protocol. |
| S11 | `Heymann 2018 "map challenge" outcomes cryo-EM reconstruction challenge participants same raw data different particle numbers` | Surfaced "The first single particle analysis Map Challenge: a summary of the assessments" (Heymann et al.) and the Zenodo deposit "CryoEM Maps and Associated Data Submitted to the 2015/2016 EMDataBank Map Challenge". **Not opened** (fetch budget spent) — so whether particle-set overlap was measured is unverified. |
| S12 | `cryo-EM "particle curation" how many particles thrown away typically "10%" OR "20%" of picked particles contribute final map analysis of deposited datasets` | Again CryoSieve / JoVE only; no corpus-wide rate. |
| S13 | `"of the initially picked particles" cryo-EM retained final reconstruction average across 100 datasets benchmark` (extended) | No pooled retention rate. Surfaced "Counting particles in cryo-electron microscopy may result in incorrect population estimates" (Commun Biol) — about population estimates, not retention rates. |
| S14 | `cryo-EM blind trial two independent groups processed same micrographs compared final particle stacks Jaccard overlap curation reproducibility` (extended) | No inter-laboratory curation-overlap measurement. REPIC, CryoSieve, an expert-curated picking dataset (Sci Data 2023). |

---

## 3. The four words, from the document's own text

- **UNIT.** The individual particle image, scored after reference-free 2D alignment. Supporting text: the method operates on "individual particles after reference-free 2D alignment" and each particle "receives a quality score between 0 and 1" (Methods, *Calculating particle quality score: cryoDANN*). Datasets, not just particles, are a second level of aggregation: "We tested the entire workflow ... using four EMPIAR datasets" (Results, *Particle filtering workflow and test dataset*); "We tested our method on the five publicly available datasets from EMPIAR" ... "which have author deposited particle stacks" (Results, *Assessment on EMPIAR datasets with particle stacks*); "we randomly selected 50 datasets from user visits in 2024" (Methods, *Pipeline for cryoEM data processing*).
- **ENDPOINT.** Three: resolution, B-factor, angular distribution. Methods, *Comparison with other methods and assessment metrics*: "The metrics used to assess the performance were resolution"; "B-factor (obtained by fitting a straight line through the Guinier plot)"; "angular distribution of the particles"; "The angular distribution of a given set of particles was assessed using the software cryoEF"; cryoEF "calculates a coverage metric, referred to as the efficiency".
- **COMPARATOR.** Four, all present (quotes in §4, claim 3).
- **ESTIMAND.** Whether a score-thresholded retained subset matches (or betters) the full stack. "results in the same resolution reconstruction as with the full set of particles" (Results, *Particle filtering workflow and test dataset*); "obtain a resolution similar (to within hundredths of an angstrom) to the value obtained from the whole stack of particles" and "does not compromise the quality of the reconstruction obtained" (Results, *Assessment on EMPIAR datasets with particle stacks*); "results in better resolution, lower B-factors and comparable distribution of Euler angles" (Results, *Performance on the test dataset*).

---

## 4. Claim-by-claim

### Claim 1 — UNIT: particle images across five EMPIAR entries; name the five. → **PARTLY-CONFIRMED**
Verbatim: "We tested our method on the five publicly available datasets from EMPIAR" / "which have author deposited particle stacks." (Results, *Assessment on EMPIAR datasets with particle stacks*).
**The paper never lists the five codes in one sentence, and the table that would list them (Table 3) was unreadable.** The five codes named within that section are EMPIAR-10024, EMPIAR-10255, EMPIAR-10097, EMPIAR-10093 and EMPIAR-11233; two independent extractions (F3, F5) agreed on that set and both flagged it as inferred from section text, not from an explicit list. Per-entry anchors: "highlights this for one of the datasets, EMPIAR-10024"; "For EMPIAR-10255 there are two particle stacks deposited in EMPIAR"; "The same trend is also observed for EMPIAR-10097"; "For EMPIAR-10093, we observe that over 80% of the particles must be retained"; "EMPIAR-11233 has a particle dataset with only 42k particles of high quality".
**Why only partly:** those five are *one* sub-analysis. The paper's unit set is wider — a separate test set of four EMPIAR entries (EMPIAR-10024, 10288, 10547, 10955: "We tested the entire workflow ... using four EMPIAR datasets"; "For the dataset EMPIAR-10288, we could not obtain a reasonable resolution reconstruction"; "shows reconstructions generated for EMPIAR-10547 using filtered particle sets"; "in the fourth dataset (EMPIAR-10955), the 11k particles selected at a threshold of 0.06"), plus 50 eBIC user datasets, plus EMPIAR-10812 as *training* data ("the RELION class ranker training dataset (EMPIAR-10812)"). EMPIAR-10024 is in both the four-entry test set and the five-entry author-stack set; the text does not reconcile "four" and "five".

### Claim 2 — ENDPOINT: refinement resolution, B-factor and cryoEF. → **CONFIRMED** (with one wording correction)
Quotes as in §3. Correction: the paper's third metric is the **angular distribution**, and cryoEF is the *software* used to assess it, yielding a coverage metric called the "efficiency". "cryoEF" is not itself an endpoint name in the paper's own phrasing.

### Claim 3 — COMPARATOR: class ranker, one expert's manual selection, size-matched random subsets, full set. → **CONFIRMED** (all four exist; one over-specification)
- RELION class ranker: "we selected the top N scoring particles from class ranker and N randomly-selected particles" (Results, *Performance on the test dataset*).
- Expert manual selection: "An expert-selected set of classes was used to obtain a manual selection of particles" (Results, *Performance on the test dataset*).
- **Size-matched random subsets — present, three separate places:** "similar resolution can be obtained by random selection of the same number of particles" (Results, EMPIAR-10255 passage); "An equal number of randomly selected particles results in comparable resolution" (EMPIAR-10024 passage); and the method statement "To compare these metrics meaningfully, the reconstructions need to be performed with similar number of particles." Also the class-ranker sentence above pairs "top N scoring" against "N randomly-selected". This comparator is real and is applied as a matched-size control, not merely mentioned.
- Full set: "Comparisons with the full set of 50k particles suggest that automated filtering" (Results, *Performance on the test dataset*); "We used the full deposited stack of particles (43.5k) as a positive control" (EMPIAR-10024 passage).
Correction: the paper says "An expert-selected set of classes" — it does not state that this was **one** expert. "One expert's manual selection" is not supported verbatim.

### Claim 4 — ESTIMAND: whether a score-thresholded retained subset preserves full-set map quality. → **CONFIRMED** (slightly narrower than the paper's own aim)
Quotes as in §3. Note the paper's estimand is two-sided rather than purely non-inferiority: besides matching the full set it claims *improvement* ("results in better resolution, lower B-factors and comparable distribution of Euler angles") and rescue of failing datasets (~30% of 50 eBIC datasets recovered past an 11 Å threshold when cryoDANN is combined with the class ranker).

### Claim 5 — The paper reconstructs the COMPLEMENT (a map from its own rejected particles). → **CONFIRMED**, for **two** entries: EMPIAR-10024 and EMPIAR-10093.
- EMPIAR-10024: "we performed 3D refinement jobs with the lowest-scoring 12k and 18k particles" / "corresponding to the thresholds of 0.7 and 0.8 respectively" / "This resulted in the reconstructions with resolution of 5.44 Å and 4.67 Å respectively" (Results, *Assessment on EMPIAR datasets with particle stacks*, EMPIAR-10024 passage).
- EMPIAR-10093: "the lowest scoring 90k particles yield a reconstruction at 4.38 Å (Table S3)" (same section, EMPIAR-10093 passage).
Caveat on quoting: because of the extraction tool's 125-character quote cap, these arrive as consecutive fragments of the running sentences rather than as one continuous quotation. The fragments were returned consistently across two independent extractions.

### Claim 6 — NUMBERS on EMPIAR-10093. → **PARTLY-CONFIRMED**
Verbatim, the one sentence carrying all four numbers (Results, *Assessment on EMPIAR datasets with particle stacks*, EMPIAR-10093 passage):
> "For instance, the top 84k particles achieve a reconstruction at 4.08 Å, while the lowest scoring 90k particles yield a reconstruction at 4.38 Å (Table S3)."
- Resolutions 4.38 Å and 4.08 Å: **CONFIRMED**, units Å, both are refinement resolutions of reconstructions.
- Counts ~90,000 and ~84,000: **CONFIRMED** as "90k" and "84k"; the paper writes them rounded to the nearest thousand, so "about" is fair.
- Entry: **CONFIRMED** EMPIAR-10093.
- Direction: **CONFIRMED** — 90k is the lowest-scoring (rejected) set, 84k the top-scoring (retained) set, and the rejected set is the *worse* of the two by 0.30 Å.
- **Size-matched? NO.** 84k vs 90k differ by ~6k, ≈7% of either set. The paper does not describe them as size-matched, and does not state they are disjoint or complementary. Treating this pair as a size-matched retained-vs-rejected contrast over-states it.
- **Arithmetic against the entry's stated total: COULD-NOT-READ.** The paper never states EMPIAR-10093's total stack size in any readable text; the number lives in Table 3 / Table S3, both unreadable (see §1), and the EMPIAR record itself was unreachable (pdbj mirror errored, EBI proxy-blocked). What can be said:
  - 84,000 + 90,000 = **174,000**. If the deposited stack is ≈174k, the two subsets are exact complements and the arithmetic closes.
  - But the same passage says "For EMPIAR-10093, we observe that over 80% of the particles must be retained" / "to obtain a resolution similar to the full set of particles". 84,000 / 174,000 = **48.3%**, well under 80%. So under the 174k reading, the 84k set is *not* the ">80% retained" set — these are two different thresholds in one paragraph.
  - Conversely, if 84k *were* the ">80%" set, the total would be ≈105k (84,000 / 0.80 = 105,000), and then 84,000 + 90,000 = 174,000 > 105,000: the "top 84k" and "lowest 90k" would have to **overlap by ≈69,000 particles** and could not be complements at all.
  - These two readings cannot both hold. Which is right is not decidable from the readable text. Flagged as unresolved, not as a pass.
- Cross-check that *does* close, on the other entry: EMPIAR-10024's stack is stated as "the full deposited stack of particles (43.5k)" and Figure 4's caption as "Particle stack (with 43,585 particles)". Top sets 31k (thr. 0.7) and 25k (thr. 0.8) against rejected sets 12k and 18k: 31 + 12 = 43 and 25 + 18 = 43, both ≈43.5k. So for EMPIAR-10024 the retained/rejected pairs **are** exact complements of the stated total, and the arithmetic is internally consistent. (The top-set resolutions were returned as "we obtained resolutions of 4.39 Å and 4.29 Å respectively"; the extraction did not pin which threshold takes which value, so that assignment is left uncertain. Full-stack resolution for EMPIAR-10024 was reported as 4.24 Å.)

### Claim 7 — the untested-speculation sentence. → **CONFIRMED**; raised only, never tested.
Verbatim (assembled from two consecutive fragments owing to the quote cap; the quoted phrase in the claim **does appear**):
> "It is important to note that the filtered-out particles may exhibit different conformation(s) of the molecule, implying heterogeneity."
Location: Results, *Assessment on EMPIAR datasets with particle stacks* — the final sentence of that section, in the EMPIAR-10255 discussion. The sentence immediately before it: "This is the resolution we obtain using the particles that the authors used for their final refinement". There is **no following sentence** — the next text is a new heading.
**Tested? No.** The paper performs 3D *refinement* on rejected particles (EMPIAR-10024, EMPIAR-10093) but no 3D classification, no heterogeneity analysis and no conformational test on the rejected sets is reported anywhere. The sentence is framed as a caveat ("It is important to note that ... may"), is hedged twice ("may", "implying"), carries no supporting result, and is the last sentence of its section.

### Claim 8 — Does the paper estimate how often a rejected set contains an identifiable distinct structural state? → **CONFIRMED that it does not.**
No rate, no share, no count over entries, and no pre-registered or stated criterion for "distinct structural state" appears anywhere. There is no operational definition of what would count as a distinct state, and nothing is scored against one. What the paper does instead is exhibit the complement's **map quality only**: one resolution number per rejected subset (5.44 Å and 4.67 Å for EMPIAR-10024; 4.38 Å for EMPIAR-10093), with the heterogeneity reading left as the single hedged sentence of claim 7. A rejected set reaching 4.38 Å is evidence that it contains ordered, alignable particles; it is not evidence, and is not offered as evidence, that it contains a *different* state.

---

## 5. Separate literature question

### (a) Pooled, corpus-wide statistic for the share of initially picked particles surviving to the final reconstruction → **NOT-FOUND**
Seven searches aimed at this (S4, S7, S10, S12, S13, and partly S3, S14) returned no pooled attrition/retention rate over many depositions. Nothing was refused or blocked on this question — the searches ran and returned nothing on point, so this is a genuine "not found" within a 14-search budget, not a reading failure. Note a structural reason it may not exist: EMPIAR/EMDB depositions generally record the particle count *used* in the final map, not the count initially picked, so the numerator-and-denominator pair needed for a corpus-wide rate is mostly not in the archives.
Nearest things found, none of which is the statistic asked for, and **none of which I opened** (fetch budget spent — so these are leads, not verified sources):
- "A minority of final stacks yields superior amplitude in single-particle cryo-EM", Nat Commun 2023, doi 10.1038/s41467-023-43555-x (CryoSieve) — about aggressive sieving of an already-final stack on a handful of datasets, not a corpus-wide picked→final rate.
- "Counting particles in cryo-electron microscopy may result in incorrect population estimates", Commun Biol, doi 10.1038/s42003-026-09859-6 — about population-fraction estimation, not retention rates.

### (b) Cryo-EM processing ring trial / inter-laboratory comparison in which several groups curated the same dataset and the OVERLAP of their retained or rejected sets was measured → **NOT-FOUND**
Searches S5, S6, S8, S9, S11, S14. No study was found in which independent groups curated one dataset and the intersection/overlap of their retained or rejected particle sets was quantified. Nearest leads, **none opened, so none verified**:
- The 2015/2016 EMDataBank single-particle **Map** Challenge (Heymann et al., "The first single particle analysis Map Challenge: a summary of the assessments"; data deposit at zenodo.org/records/1185426). This is the closest in design: many groups reconstructed from the same raw datasets. Whether particle-set overlap between submissions was ever measured is **unverified** — the assessments surfaced in search are map-level comparisons.
- The 2019 EMDataResource **Model** Challenge and the Ligand Modeling Challenge — same map, many modellers; no particle curation at all, so not responsive.
- REPIC, "REliable PIcking by Consensus", Commun Biol 2024, doi 10.1038/s42003-024-07045-0 — measures consensus/overlap across particle **picking algorithms**, not across laboratories, and at the picking stage rather than the curation stage.
- A 2004 comparative study of automatic particle selection (Scripps picking bake-off) — again algorithms, not labs.

---

## 6. Counts (honest)

- Web searches: **14** of 14. No overrun.
- Page fetches: **6** of 6. No overrun.
- Refused/blocked/failed: **3** — (1) curl CONNECT 403 from the egress proxy (A1); (2) the extraction sub-model's refusal to transcribe the preprint verbatim (F1), which forced fragmentary quoting throughout; (3) WebFetch CLIENT_ERROR on the EMPIAR pdbj XML (F6), which is why EMPIAR-10093's total is unresolved.
- Additionally, and not a refusal but a reading limit: **every table in the paper (1–4, S1–S7) was unreadable** in both available conversions.
