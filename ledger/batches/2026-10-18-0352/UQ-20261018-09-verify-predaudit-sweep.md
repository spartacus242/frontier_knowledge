# UQ-20261018-09 pre-encounter prediction audit sweep

Read level: mixed. FULL TEXT (via summariser) for arXiv 2604.22182 (first 100k of 118k chars), Lauretta 2019 PDF, Carry 2012 (ar5iv), arXiv 2502.14990 (first 100k of 102.8k). ABSTRACT/short PDF for Barnouin 2024 ISAS abstract, Emery 2014 ACM abstract. Springer Wada 2018 page: partial text only. Everything else SEARCH SNIPPETS (titles/URLs only, no content).

## Searches (7 of 7)
1. pre-encounter vs in situ, bulk density/porosity, Ryugu Bennu Itokawa -> titles only; leads: arXiv 2604.22182, 2407.21386 (not opened)
2. lessons learned ground truth thermal inertia grain size -> titles only
3. retrospective assessment strength/cohesion remote vs ground truth -> Barnouin ISAS abstract, SBNAF; no systematic audit title
4. Lauretta unexpected surface of Bennu -> confirmed record (Nature 568, 2019)
5. accuracy of ground-based shape models vs spacecraft -> Carry 2012 KOALA/Lutetia, Durech et al
6. Ryugu pre-arrival vs measured -> Wada 2018 PEPS (pre-arrival review)
7. Dimorphos pre-DART predicted vs observed -> arXiv 2502.14990
Vocabularies: pre-encounter/in situ; ground truth/lessons learned; retrospective/prediction accuracy; shape-model validation; Design Reference Asteroid scorecard (implicit); Ryugu pre-arrival; DART pre/post.

## Fetches (7 of 7)
1. arXiv 2604.22182 (science from asteroid sample return missions): qualitative narrative only (Itokawa shape/spectral, Ryugu shape, Bennu boulders/smooth-surface expectation, thermal inertia ~350 confirmed). No signed errors, ratios, containment. Itokawa, Ryugu, Bennu covered. Last 18.7k chars unread.
2. Barnouin ISAS 2024 abstract: remote sensing (bulk density, macroporosity, cohesion) said consistent with Bennu/Ryugu SCI/TAG surface-contact results, Dimorphos cohesionless; Ryugu sample macroporosity ~20-30%. No numbers for errors/containment. Narrative.
3. Emery 2014 ACM abstract: Bennu pre-encounter Spitzer only; TI 310+-70; grain size mm-cm. No comparison.
4. Lauretta 2019 PDF: Table 1 "DRA scorecard" pre-encounter vs OSIRIS-REx values (+-1 sigma) for Bennu only. Includes bulk density 1260+-70 -> 1190+-13 kg/m3 (diff -70, -5.6%, ~1 sigma borderline: my arithmetic), mass, thermal inertia 310+-70 -> 350+-20, avg slope 15+-2.4 -> 17+-2, largest boulder (10-20)+-7.5 m -> 30x58 m (outside), pole dec outside 1 sigma (my check). Paper's own containment language is qualitative: footnote "Most values are well within 1σ". Porosity (~50% macroporosity inferred) and strength ("low levels of internal shear strength or cohesion") discussed in text with NO pre-encounter number. No signed-error/ratio column; the 1-sigma check column is the fetcher's, not the paper's.
5. Carry 2012 KOALA/Lutetia (ar5iv 1112.5944): single body (Lutetia). Spin axis within ~2 deg; diameter abstract claim 2% vs body text 105 vs 98 km (~7%, internal inconsistency in summary); volume uncertainty <10%; local shape dev ~2 km; TI <40, albedo 0.19+-0.01 agree with MIRO. Non-mechanical, not pooled.
6. arXiv 2502.14990 (Dynamical State of the Didymos System before and after the DART Impact): Table 2/Sec 4 compares pre-encounter values with DART-era pre-impact measurements, Didymos + Dimorphos. Density: pooled pre-encounter 2170+-350 -> Didymos 2790+-140 (+620, +29%, outside 1 sigma), Dimorphos 2400+-300 (+230, +11%, inside). Also diameters, shape ratios, system mass (-4.5%), separation. Abstract wording "largely in line with observations". Uncertainties 1 sigma; containment checks are the fetcher's own, paper reports no containment fraction. Last 2.8k chars unread. Authors/venue not captured by me.
7. Wada et al 2018 PEPS 5:82 "Asteroid Ryugu before the Hayabusa2 encounter": pre-arrival review only; no audit. Page truncated before thermophysical/mechanical sections.

## Findings
Q1 studies: Lauretta 2019 (Bennu, scorecard with per-property pre vs post values, no signed error column); arXiv 2502.14990 (Didymos system, per-property differences in table, only 2 bodies in one binary); Carry 2012 (Lutetia, shape/spin/TI); Barnouin 2024 abstract (narrative); arXiv 2604.22182 (narrative). None found reporting a pooled signed error or containment rate.
Q2 mechanical: partially. Bulk density/mass is in Lauretta Table 1 (Bennu) and 2502.14990 (Didymos/Dimorphos). Strength, cohesion, porosity: NOT FOUND as pre vs post numbers in anything opened (Lauretta text has post values only; Barnouin narrative).
Q3 pooling across bodies: NOT FOUND (opened sources are single-body, or one binary system; 2604.22182 is a narrative multi-body review).
Q4 containment rate: NOT FOUND as a reported statistic; only qualitative ("most values well within 1σ") or my own arithmetic.
Q5 non-mechanical pooled: NOT FOUND in what I opened. Nearest analogues: Lauretta 2019 scorecard (single body, many properties), Carry 2012 (single body). Search 5 surfaced Durech et al / Hanus "Asteroid models from multiple data sources" (arXiv 1502.04816) as possible multi-body shape-model validation but I did NOT open it.
Q6: 7 searches, 7 fetches; vocabularies above.
