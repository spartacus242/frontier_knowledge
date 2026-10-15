# C4 record (Gates 0-3)

**ID:** UAQ-XXXX (placeholder; intake C4)

**Domain(s):** Information science / web archiving (reference rot); Wikimedia research (verifiability); scientometrics (citation obsolescence, survival analysis).

## Gate 0/1

**Question (canonical, reformulated):** In English Wikipedia, does the hazard of a cited external URL becoming unreachable differ by article topic, after conditioning on when the citation was added and on the cited domain's type (news, government, academic, commercial, etc.), and if so, which topics lose live verifiability fastest?

- Intake version (recorded): "Does the rate at which cited external sources in Wikipedia articles become unreachable (link rot) differ by topic area enough that some fields lose verifiability measurably faster than others, after controlling for citation age and source domain type?"
- Reason for reformulation: "lose verifiability" conflated *link liveness* with *verifiability*. On Wikipedia an archived copy keeps a claim verifiable. The reformulation makes link death the measured outcome. Archive coverage becomes a separate second outcome: "unrecoverable" means dead with no usable snapshot.

**Alternative formulations:**
1. Is the citation half-life of web references on Wikipedia field-dependent once you control for when the link was added and what kind of site it points to?
2. Is any topic-level difference in Wikipedia link rot more than a by-product of topic-specific source mixes (for example sports citing local news, politics citing .gov)? Or is there a residual topic effect?

**Motivating gap:** Wikipedia link rot has been measured overall: 18% dead in 2011, 11% of references and 54% of pages in 2024. It has also been characterised mechanically ("permanently dead" links, IABot behaviour). Topic-stratified decay with these controls has been done for scholarly literature and for the NYT, but no Wikipedia study of it was found.

**Presuppositions:**
1. Articles can be assigned topics. *Established:* WikiProject tags and the ORES/LiftWing articletopic model exist. Multi-label assignment is a known complication.
2. The date each citation was added is recoverable from revision history. *Established* but costly.
3. Link liveness can be measured. *Partly contested:* soft-404s, paywalls, bot blocking and content drift make "unreachable" noisy, and IMC'22 found many "permanently dead" tags wrong.
4. Domain type can be classified. *Established*, with heuristics.
5. Topic is not fully confounded with domain type and age, so a residual effect is identifiable. *Contested:* this is what the question tests.
6. Editor maintenance (link replacement and archiving) varies by topic and censors observed decay. *Flagged:* it must be modelled. Otherwise "decay" partly measures editor attention.

**What would count as an answer:** A survival or hazard model (e.g. Cox or discrete-time) of citation-URL death on a large sample of citation-addition events, with these covariates:
- topic (articletopic or WikiProject)
- addition year
- domain type
- domain popularity
- censoring for editor removal or replacement

A yes means topic coefficients are significant and practically large (for example a hazard ratio of 1.3 or more between topics) after the controls. A no means topic effects vanish once domain type and age are controlled. Secondary outcome: the same model for "dead and no usable archive". Either outcome settles the question. Status: well-posed. It is a question, not a thesis.

## Gate 2 — Novelty

**Ledger check:** no duplicate among C1-C5 (the ledger was not otherwise inspected in this run).

**Queries run (18 search queries plus 9 page fetches; one fetch failed, one hit a CAPTCHA):**
1. "Wikipedia link rot by topic area comparison" — Wikipedia Link rot article, CJR NYT study, IMC'22. No Wikipedia topic breakdown.
2. "Wikipedia dead external links reference decay across categories WikiProjects study" — Tzekou et al. 2011. No topic breakdown (checked in full text).
3. "\"reference rot\" Wikipedia citations survival analysis domain" — retracted papers on Wikipedia and journal obsolescence. Not relevant.
4. "Wikipedia citation half-life URL decay field discipline" — URL-decay studies of LIS and scholarly journals. None on Wikipedia.
5. "which Wikipedia articles have most broken links by subject" (lay phrasing) — noise, plus Tzekou 2011.
6. "Wikimedia research link rot external references dataset topic ORES" — Baigutanova 2023 (reference quality, not rot), Arquivo.pt Wikipedia project.
7. "Pew Research When online content disappears 2024 Wikipedia" — Pew 2024: 11% of references dead, 54% of pages affected. No topic or domain-type breakdown (checked).
8. "Wikipedia citations verifiability decline over time by article category dead links InternetArchiveBot" — Meta page "Reference Quality in English Wikipedia", IA "9M links rescued" posts. No topic stratification.
9. "Wikipedia link rot arXiv measurement 404 domain type news government" — generic link-rot explainers and a Wikidata source-quality paper.
10. "obsolescence of web references Wikipedia scientometrics topic differences" — "Persistence of web references in scientific research" (scholarly, not Wikipedia).
11. "permanently dead links Wikipedia analysis why links die archived" — IMC'22 and an IA 2026 blog post on recovering the dead web.
12. "Wikipedia dead links by topic/across topics science medicine sports" — Wikimedia Research Fund "Improving the Persistence of External References" (page failed to load), CACM "decay and failures of web references".
13. "Wikipedia news citations link rot sports politics content drift study 2025" — Pew, CJR. Nothing Wikipedia-topical.
14. "Wikipedia Citations dataset references link availability by field" — Singh et al. 2020 Wikipedia Citations dataset (identifiers, not liveness).
15. "Wikipedia external links decay categories Kaplan-Meier lifetime of URLs cited in Wikipedia" — DecLiNe (internal link decay), journal URL-decay papers.
16. "arXiv 2025 2026 Wikipedia link rot topic categories large-scale analysis" (extended search) — Web2Wiki, retracted papers, Wikinformetrics. None on topic-stratified rot.
17. "URL decay varies by discipline … Klein 2014" — Hennessey & Ge 2013 (link survival across 20 disciplines), Klein et al. 2014 reference rot.
18. "Wikipedia link availability language editions topics dead link rate per WikiProject" — cross-language reference reliability (2023). Not rot.

Also searched for the answer itself (queries 1, 5, 12, 16, 18: "which topics rot fastest on Wikipedia"). No published answer found.

**Nearest prior formulations (each opened):**
1. Bowers, Stanton & Zittrain, "What the ephemerality of the Web means for your hyperlinks", *Columbia Journalism Review*, 2021. https://www.cjr.org/analysis/linkrot-content-drift-new-york-times.php
   - Link rot by NYT section (Sports 36% vs Upshot 13%, Travel highest, Health lowest), age-adjusted with a .gov/.edu domain effect noted.
2. Hennessey & Ge, "A cross disciplinary study of link decay and the effectiveness of mitigation techniques", *BMC Bioinformatics* 14(Suppl 14):S5, 2013. https://bmcbioinformatics.biomedcentral.com/articles/10.1186/1471-2105-14-S14-S5/tables/2
   - Median link survival by 20 academic disciplines, from 6.9 years (oncology) to 13.3 years (medicine).
   - The table page was opened; the PMC full text was CAPTCHA-blocked.
3. Nyayachavadi, Zhu & Madhyastha, "Characterizing 'Permanently Dead' Links on Wikipedia", ACM IMC 2022. https://bpb-us-w1.wpmucdn.com/sites.usc.edu/dist/4/966/files/2022/09/imc22-perm-deadlinks.pdf
   - Wikipedia-specific and covers link age and archiving lag. No topic or domain-type analysis.
- Also opened: Pew Research Center, "When Online Content Disappears", 2024 (Wikipedia overall rate only), and Tzekou et al., "Quality Assessment of Wikipedia External Links", WEBIST 2011 (18.34% dead overall; no topic, age or domain-type split).

**How this differs from each:**
1. Zittrain/CJR: same design (topic-stratified rot with age and domain controls) but a different corpus: a single publisher's links chosen by journalists. Wikipedia differs in three ways: crowd-maintained links, bot archiving (IABot), and editor replacement that censors decay. The NYT result does not transfer automatically.
2. Hennessey & Ge: discipline-stratified survival of URLs in *scholarly papers*. It has no control for domain type, does not cover encyclopedic topics (sports, pop culture, politics), and has no maintenance or censoring process.
3. IMC'22: Wikipedia-specific, but asks *why tagged-dead links are mis-tagged* and covers archive timing. It does not ask whether decay differs across topics, and it has no domain-type control.

**Novelty confidence: Medium.** No Wikipedia topic-stratified decay study was found across the vocabularies of web archiving, scientometrics, Wikimedia research and lay phrasing. But neighbour 1 (CJR/Zittrain) asks the identical question for another corpus. The step to Wikipedia is a transplant, and it may already exist in unpublished Wikimedia or IABot internal analyses or in the Wikimedia Research Fund project, whose page failed to load. Not an asked-but-open problem in the literature as far as found.

## Gate 3 — Significance

**Consequence:**
- *If yes* (residual topic effects): verifiability risk is unevenly spread across knowledge domains. Archiving and patrol effort, currently allocated topic-blind by IABot and by when an edit happens, should be prioritised by topic hazard. Topic-level "verifiability debt" then becomes a reportable metric.
- *If no* (effects explained by domain type and age): interventions should target source types instead (e.g. proactive archiving of .gov and local-news URLs at citation time). Topic is the wrong unit, which shifts tooling design.

**Audience:**
- Wikimedia Foundation Research and IABot/Internet Archive engineers: crawl and archiving prioritisation.
- WikiProject coordinators: cleanup drives.
- Web-archiving institutions such as Arquivo.pt and national libraries: seeding policy.
- Researchers who use Wikipedia citations as data (scientometrics, LLM-training provenance).

**Fecundity:**
- Does editor-attention density per topic (watchers, edits) offset decay, i.e. a maintenance-vs-hazard race?
- Do the same topic hazards hold across language editions?
- Does topic-specific rot predict content drift, or later citation-needed tags?
- Is unrecoverable loss concentrated in topics with local or ephemeral sources (e.g. regional sport, small-town history), creating systematic coverage bias in what remains verifiable?

**Anchoring:**
- Pew 2024 (11% of references dead) as a level without structure.
- The IMC'22 mis-tagging anomaly.
- The CJR finding that NYT topic differences are "in large part" due to age, an unresolved question of confounding.
- Baigutanova et al. 2023: reference quality improving overall over time.
- Open problems in scholarly reference rot (Klein et al. 2014).

## Reason for silence (candidate mechanism)

Remediation crowded out diagnosis. Once InternetArchiveBot made dead links fixable at scale (2016 onward), Wikipedia link-rot work became engineering ("rescue N million links") rather than description, so the remediation pipeline never needed a topic breakdown.

The data needed for the controlled version is also expensive to assemble, and the fields do not overlap. It joins three things:
- the citation-addition date from full revision history
- topic labels
- live crawls

Scientometricians stratify by discipline but study journals. Web-archiving researchers study generic URL samples. Wikimedia researchers study reference *quality* (reliability, citation need) rather than *persistence*.
