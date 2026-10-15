# Un-Asked Questions Ledger

Append-only. One entry per candidate, rejections included, in the schema from LEDGER.md. Newest at the bottom.

---
ID: UQ-20261015-01
Date: 2026-10-15
Status: Rejected
Domain(s): Cultural evolution; food studies; island biogeography
Question (canonical): Does the number of distinct traditional dishes in a regional cuisine scale with region area and population as a species–area-style power law, with island and mainland curves differing?
Alternative formulations: Is there a "cuisine–area curve" S = cA^z? / Do larger, less isolated regions accumulate dishes as island biogeography predicts for species?
Motivating gap: cultural evolution borrows ecological models, but dish richness vs. area appeared unfitted.
Presuppositions: dishes countable consistently (contested); comparable regional units; documentation effort controllable (contested).
What would count as an answer: regression of standardized dish counts on area, population and isolation, with a documentation-effort control and island/mainland contrast.
Novelty — queries run (query → one-line result): 18 in Gate 2 + 6 and 29 in Gate 4; full list in batches/2026-10-15/C1-record.md and C1-adversary-2.md.
Novelty — nearest prior formulations (3, with sources): Łuczaj et al. 2019, "The ethnobotany and biogeography of wild vegetables in the Adriatic islands", J. Ethnobiol. Ethnomed. 15:18 (PMC6440087; tests island biogeography on island food-plant repertoires, null); Kline & Boyd 2010, Proc. R. Soc. B (tool repertoire vs. island population); Barbosa & Fontanari 2009, arXiv:0902.1346 (culture–area relation).
Novelty — how this differs from each: Łuczaj: same test with food-plant taxa instead of dishes; Kline & Boyd: tools, population not area; Barbosa & Fontanari: theoretical culture count, not food.
Novelty confidence: Low (revised from Medium at Gate 4)
Significance — consequence: if documentation effort explains counts, recipe-count comparisons of cuisines are confounded.
Significance — audience: computational gastronomy, cultural evolution.
Significance — fecundity: repertoire-size laws across cultural domains.
Significance — anchoring: cultural repertoire–population debate (Kline & Boyd; Acerbi et al. 2017).
Reason for silence: offered "dishes can't be counted" explains why answering is hard, not why no one asked (Unresolved).
Adversarial log (8 rows: attack | objection | response | status): first adversary all Partial (judged too gentle; batch rejection rate was 40%, so Gate 4 was rerun harder). Second adversary: Triviality Resolved | Disguise UNRESOLVED (asked and answered null in ethnobotany: Łuczaj 2019; Insular Pharmacopoeias 2021) | Combinatorial Partial | Presupposition Partial | Vagueness Partial | Significance Partial | Silence UNRESOLVED | Dissolution Partial. Full logs: batches/2026-10-15/C1-adversary.md, C1-adversary-2.md.
Scores: Well-posedness 2/3 · Significance 1/3
Strongest remaining objection: disguised known; the only new element (dishes instead of plant taxa) rests on an undefined unit.
Suggested first step toward an answer (pointer only — do not take it): n/a (rejected).
Routing (if rejected as already-asked): asked and answered (null) in ethnobotany; not routed.

---
ID: UQ-20261015-02
Date: 2026-10-15
Status: Rejected
Domain(s): Combinatorics (van der Waerden numbers); SAT
Question (canonical): At the extremal length n = w(2;3,t)−1, what fraction of good 2-colourings are palindromic, and how does it behave as t grows?
Alternative formulations: Are extremal off-diagonal vdW colourings increasingly forced to be symmetric? / Does the palindromic solution count dominate, track or vanish relative to all solutions at threshold?
Motivating gap: this repo's local search found palindromic seeds far stronger than unrestricted search (research/problems/vdw-w23t-lower-bounds).
Presuppositions: exact w(2;3,t) known for small t; counts computable (both established).
What would count as an answer: enumeration/#SAT counts N(t), P(t) at n = w−1 for all known t.
Novelty — queries run (query → one-line result): 16 queries, 10 pages; batches/2026-10-15/C2-record.md.
Novelty — nearest prior formulations (3, with sources): Ahmed, Kullmann & Snevily, arXiv:1102.5433 (palindromic numbers pdw(2;3,t), palindromic gap, OEIS A198685; open problem "does the gap attain 0 infinitely often?"); Heule 2017, "Schur Number Five", arXiv:1711.08076 (palindromic share of extremal certificates, Schur case); Kouril & Paul 2008, W(2,6)=1132 (all extremal partitions, symmetric structure).
Novelty — how this differs from each: AKS data already fix the fraction at 0 wherever the palindromic gap > 0 (t = 4–8, 10, 11, 13–16, 19) and at 1 for t = 17 (unique solution), refuting "increasingly symmetric"; the asymptotic part is AKS's own open problem; Heule asks it for Schur numbers.
Novelty confidence: Low (as posed)
Significance — consequence: guides symmetry-restricted search for vdW bounds.
Significance — audience: SAT/Ramsey computation community (small).
Significance — fecundity: whether gap-0 t have small, mostly palindromic solution sets.
Significance — anchoring: AKS open problems 2, 4, 5.
Reason for silence: not reached.
Adversarial log (8 rows: attack | objection | response | status): not run; failed at Gate 2.
Scores: Well-posedness 3/3 · Significance 1/3
Strongest remaining objection: mostly answered by published pdw/w data.
Suggested first step toward an answer (pointer only — do not take it): n/a (rejected). The residue (N(t) and P(t) for gap-0 t = 3, 9, 12, 18, 20) may be re-submitted as a fresh candidate; AKS cite a Kouril reference for solution counts that was not opened.
Routing (if rejected as already-asked): asymptotic part = AKS open problem 2, routed to routed-open-problems.md.

---
ID: UQ-20261015-03
Date: 2026-10-15
Status: Rejected
Domain(s): Urban climatology; crowdsourced meteorology; transport geography
Question (canonical): Does the weekday–weekend cycle in urban heat island intensity, measured by crowdsourced private weather stations, scale across cities with the share of inbound commuters?
Alternative formulations: Is the urban "weekend effect" explained by commuter inflow across many PWS cities? / Does commuting fraction predict the weekly anthropogenic-heat signal in urban air temperature?
Motivating gap: weekly cycles known city by city; PWS networks now cover hundreds of cities.
Presuppositions: weekly canopy-UHI cycle reliably detectable (contested: CARB LA study non-significant; Bäumer & Vogel 2007 find the same cycle at a mountain station); PWS biases filterable; commuter share separable from density (contested).
What would count as an answer: cross-city regression of weekly UHI amplitude on commuter share with size/density/climate controls, checked against lockdowns.
Novelty — queries run (query → one-line result): 18 + 7 + 28; batches/2026-10-15/C3-record.md, C3-adversary.md, C3-adversary-2.md.
Novelty — nearest prior formulations (3, with sources): Fujibe 2010, "Day-of-the-week variations of urban temperature and their long-term trends in Japan", Theor. Appl. Climatol. (doi 10.1007/s00704-010-0266-y; weekend urban anomaly lower by 0.1–0.25 °C, stratified by population density nationwide); Earl, Simmonds & Tapper 2016, Environ. Res. Lett. (weekly UHI cycles, Australian cities); Liu et al. / Zhan et al., GRL 2022 (UHI drop in 300+ cities under lockdown and 31 cities in the Chinese New Year exodus).
Novelty — how this differs from each: covariate swap (commuter share for density) and instrument swap (PWS for official stations); the natural experiment it proposed has already been run at scale.
Novelty confidence: Low (revised from Medium at Gate 4)
Significance — consequence: would size the anthropogenic-heat share of UHI from mobility.
Significance — audience: urban climatologists, heat-action planners.
Significance — fecundity: PWS as an anthropogenic-heat sensor.
Significance — anchoring: weekly-cycle aerosol vs. local-heat debate.
Reason for silence: Unresolved (the question has effectively been asked with density).
Adversarial log (8 rows: attack | objection | response | status): first adversary: Triviality Resolved, Dissolution Resolved, rest Partial (judged too gentle; rerun). Second: Triviality Partial | Disguise UNRESOLVED (Fujibe 2010) | Combinatorial Partial | Presupposition UNRESOLVED (weekly cycle not reliably detectable) | Vagueness Partial | Significance Partial | Silence UNRESOLVED | Dissolution Partial.
Scores: Well-posedness 2/3 · Significance 2/3
Strongest remaining objection: Fujibe 2010 already asks weekly UHI amplitude vs. urban intensity nationally.
Suggested first step toward an answer (pointer only — do not take it): n/a (rejected). Methods residue: can CrowdQC-filtered PWS reproduce the weekly cycle where official stations show it?
Routing (if rejected as already-asked): answered (Fujibe 2010, lockdown studies); not routed.

---
ID: UQ-20261015-04
Date: 2026-10-15
Status: Provisional
Domain(s): Information science (reference rot); Wikimedia research; scientometrics
Question (canonical): In English Wikipedia, does the hazard of a cited external URL becoming unreachable differ by article topic after conditioning on when the citation was added and on the cited domain's type, and which topics lose live verifiability fastest?
Alternative formulations: Is Wikipedia citation half-life field-dependent once link age and site type are controlled? / Is any topic difference in Wikipedia link rot more than a by-product of topic-specific source mixes?
Motivating gap: Wikipedia link rot is measured only overall (Tzekou 2011: 18%; Pew 2024: 11% of references dead) or mechanically (IMC 2022).
Presuppositions: topics assignable (WikiProjects, articletopic model); citation-add dates recoverable; liveness measurable (noisy: soft-404s, paywalls); editor replacement censors decay and must be modelled (flagged).
What would count as an answer: survival model of URL death on citation-addition events with topic, addition year, domain type, domain popularity, and censoring for editor replacement; secondary outcome "dead with no archive".
Novelty — queries run (query → one-line result): 18 in Gate 2, 6 and 26 more in Gate 4; batches/2026-10-15/C4-record.md, C4-adversary.md, C4-adversary-2.md. No topic-stratified Wikipedia dead-link figure found in Wikimedia research, Wiki Workshop, Signpost, IABot, Lewoniewski or Arquivo.pt material.
Novelty — nearest prior formulations (3, with sources): Bowers, Stanton & Zittrain 2021, "What the ephemerality of the Web means for your hyperlinks", CJR (link rot by NYT section); Hennessey & Ge 2013, BMC Bioinformatics 14(S14):S5 (link survival across 20 disciplines); Nyayachavadi, Zhu & Madhyastha 2022, "Characterizing 'Permanently Dead' Links on Wikipedia", ACM IMC.
Novelty — how this differs from each: CJR: same design, one publisher's journalist-chosen links, no bot archiving or editor repair; Hennessey & Ge: scholarly papers, no domain-type control; IMC 2022: Wikipedia, but mis-tagging and archive lag, not topic.
Novelty confidence: Medium
Significance — consequence: yes → verifiability risk is uneven by domain and archiving/patrol could be prioritised by topic; no → target source types, not topics.
Significance — audience: Wikimedia Research, Internet Archive/IABot engineers, WikiProject coordinators, researchers using Wikipedia citations as data.
Significance — fecundity: whether editor attention per topic offsets decay (maintenance-vs-hazard race); cross-language replication; whether unrecoverable loss concentrates in local/ephemeral-source topics.
Significance — anchoring: Pew 2024 level without structure; CJR's unresolved age confound; IMC 2022 mis-tagging anomaly.
Reason for silence: remediation crowded out diagnosis after IABot (2016+); the join of revision history, topic labels and live crawls falls between scientometrics, web archiving and Wikimedia reference-quality work.
Adversarial log (8 rows: attack | objection | response | status): first adversary: Triviality Resolved, Presupposition Resolved, Dissolution Resolved, rest Partial (rerun harder). Second: Triviality | no stratified figure exists | checked Tzekou, IMC'22, Pew, Baigutanova | Resolved. Disguise | Wikimedia Research Fund grant "Improving the Persistence of External References on Wikipedia" unread (Meta-Wiki blocked from here) | 26 new searches found nothing | Partial. Combinatorial | CJR design × Wikipedia | Wikipedia-specific element (repair censoring) treated as nuisance | UNRESOLVED. Presupposition | consequence assumes topic-blind rationed archiving, but save-at-citation exists | topic-as-unit testable | Partial. Vagueness | threshold arbitrary | hazard model settles it either way | Resolved. Significance | tooling largely unchanged given prospective archiving | still matters for pre-2016 backlog and unarchivable sources | Partial. Silence | open data exist; insiders may expect "source mix" | crowd-out story fits | Partial. Dissolution | a "no" may only mean coarse taxonomy | secondary outcome survives | Partial.
Scores: Well-posedness 3/3 · Significance 2/3
Strongest remaining objection: it is a transplant of the CJR design to a new corpus (combinatorial novelty, Unresolved).
Promotion requires: (1) read the Wikimedia Research Fund grant page and outputs with working access; topic-stratified rates there → Rejected; (2) reframe the primary question around the Wikipedia-specific maintenance-vs-hazard race by topic; (3) replace the archiving-allocation consequence.
Suggested first step toward an answer (pointer only — do not take it): sample citation-addition events per articletopic from the Wikipedia Citations dataset and revision history; crawl liveness.
Routing (if rejected as already-asked): n/a.

---
ID: UQ-20261015-05
Date: 2026-10-15
Status: Rejected
Domain(s): Reliability engineering; maintenance optimisation
Question (canonical): Do standard preventive-maintenance interval models choose intervals that are too short because they omit maintenance-induced failures, and by how much in real data?
Alternative formulations: How far are classic age-replacement optima from the true optimum when maintenance introduces failures? / Does accounting for maintenance-induced defects lengthen optimal PM intervals in practice?
Motivating gap: post-maintenance "infant mortality" reported in the field.
Presuppositions: MIF measurable (established); models omit MIF (partly false: worse-than-old and post-maintenance-intensity models exist); direction "too short" (near-trivial in theory; contradicted in one case study).
What would count as an answer: nested models with and without a post-PM intensity term fitted to multi-industry data, reporting T*_MIF / T*_classic.
Novelty — queries run (query → one-line result): 18; batches/2026-10-15/C5-record.md.
Novelty — nearest prior formulations (3, with sources): the Waddington effect (WWII RAF Coastal Command; Hupjé 2023, Reliability Academy); Louit, Pascual & Banjevic 2009, IJEPES 31(7–8):396–401; Selvik & Lohne 2022, WCEAM 2021 proceedings (Springer). Also IEEE RAMS "Post-servicing failure rates: Optimizing PM interval and quantifying maintenance induced failure" (ieeexplore 6517681; title only).
Novelty — how this differs from each: only a cross-industry magnitude estimate is new, which is a data-access follow-up, not a new question.
Novelty confidence: Low
Significance — consequence: magnitude would justify post-PM terms in CMMS/RCM tools.
Significance — audience: reliability engineers, RCM practitioners, regulators.
Significance — fecundity: low (already discussed in RCM).
Significance — anchoring: Nowlan & Heap; TBO debate; IEC 61511 proof-test intervals.
Reason for silence: no real silence; folklore since WWII.
Adversarial log (8 rows: attack | objection | response | status): not run; failed at Gate 2.
Scores: Well-posedness 3/3 · Significance 1/3
Strongest remaining objection: disguised known (Waddington effect).
Suggested first step toward an answer (pointer only — do not take it): n/a (rejected).
Routing (if rejected as already-asked): asked and largely answered; not routed.
