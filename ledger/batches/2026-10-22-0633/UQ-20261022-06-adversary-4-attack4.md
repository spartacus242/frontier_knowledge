# UQ-20261022-06 — adversary 4 (LATE Gate 4, attack 4 specialist, run 2026-10-22)

Fresh context, independent of adversary 3 and run concurrently with it; neither read the other's work.
Handed the Gate 0-3 record only, plus the facts the verification pass established about the sources.
Scope: attack 4 alone, presupposition failure, because on this ledger every recent Gate 5 kill has landed
on attack 4 and lands there because the first adversaries argue with the literature while nobody tests
whether the question's CONDITIONING CLAUSES are true of the world. Method required: enumerate R1's
conditioning clauses, then test each one directly against a document opened for the purpose, grading each
TRUE / FALSE / CONTESTED / UNVERIFIED on sources, before giving attack 4 one overall status.
Budget: 10 searches and 5 fetches declared; 7 searches and 5 fetches run.

ATTACK 4 STATUS: P
RECOMMENDATION: Provisional

## Restatement before attacking (the adversary's own words)

R1 asks, of ≥2 accredited clinical laboratories that run different middleware vendors and different repeat rule sets: under a rule for "first valid measurement" declared before any data pull (excluding QC-failed, calibration-failed, clot/haemolysis-flagged and out-of-linearity runs, with sensitivity arms varying each exclusion), (a) what per-analyte share of released results is not the first valid measurement of that analyte on that specimen, decomposed by the rule that caused the replacement (rerun, dilution, delta-check repeat, critical-value repeat, cross-instrument confirmation); (b) how the paired first-measurement and released-result distributions differ; and (c) whether reference-interval limits, threshold-crossing prevalence and the within-person monitoring delta, recomputed on both substrates, move beyond a materiality bound fixed in advance (allowable bias for the reference-limit shift, reclassification across the clinical decision limit, sign and size of the delta change) — with the share of candidate laboratories whose logs cannot supply superseded measurements at all reported as a primary result. My single job is to ask whether the clauses this question conditions on are true of the world, not whether the literature already answers it.

## Recommendation, in full

Attack 4 comes back Partial, not Unresolved, so there is no fatal presupposition failure and no kill I can source. The honest finding is narrower and more useful than a kill: the clause everyone would expect to break the question — that middleware/analyser logs retain and expose superseded measurements — IS contested on primary sources I opened (no CLIA retention duty attaches to an unreported measurement; the national retention standard's protected class is textually 'records... from which the result is derived', four years, below the report's seven; and the one documented middleware pipeline purges to off-site archive monthly), but R1's canonical wording already converts exactly that clause into a reported primary quantity, and the record's multi-leg note makes the feasibility census standalone. That is the difference between a presupposition and a measurand, and R1 is on the right side of it. Two genuine dents survive, and neither is fatal: two of R1's five named replacement causes (cross-instrument confirmation, delta-check repeat) are empty classes at the nearest own-field site and one (dilution) is not sourced as log-attributable anywhere I opened, so the decomposition will report zeros it did not anticipate; and the materiality bound's 'the analyte's clinical decision limit' presupposes a definiteness that Ozarda denies — decision limits are 'defined by consensus and vary among different populations' — which binds the analyte list rather than the question. Against Validated: six clauses are UNVERIFIED on my own reading, three of them load-bearing for the fallback leg (that the log identifies WHICH run was released; that per-analyte published allowable-bias figures exist, my attempt at that table having been refused at the source; and durable patient linkage in a middleware extract), and I ran only attack 4. Provisional is the ceiling I can honestly certify, and two cheap fixes would move it: open one middleware vendor data dictionary or audit-trail specification to settle whether release status and superseded runs are recorded per run, and add an R1 clause restricting the analyte set to directly measured analytes with a pre-citable decision limit and a published allowable-bias figure.

---

## Gate 4 — Attack 4 (presupposition failure), fresh-context adversary

**Scope:** attack 4 only. No other attack was run; no other attack status may be read from this log.
**Budget used:** 7 web searches, 5 fetch attempts (4 returned content, 1 refused at the source).
**Target wording:** R1, the one permitted reformulation. V0 was not attacked.

### Restatement before attacking

R1 asks, of ≥2 accredited clinical laboratories running different middleware vendors and different repeat rule sets, under a "first valid measurement" rule declared before any data pull (QC-failed, calibration-failed, clot/haemolysis-flagged and out-of-linearity runs excluded, with sensitivity arms varying each exclusion): (a) the per-analyte share of released results that is not the first valid measurement of that analyte on that specimen, decomposed by the rule that caused the replacement (rerun, dilution, delta-check repeat, critical-value repeat, cross-instrument confirmation); (b) how the paired first-measurement and released-result distributions differ; (c) whether reference-interval limits, threshold-crossing prevalence and the within-person monitoring delta, recomputed on both substrates, move beyond a materiality bound fixed in advance — with the share of candidate laboratories whose logs could not supply superseded measurements at all reported as a primary result.

My job is not whether the literature answers this. It is whether the clauses R1 conditions on are true of the world.

### Disguise queries — two vocabularies Gate 2 did not try

Gate 2 ran own-field own-words, quantity-already-published, metrology, EHR/informatics, IFCC quality-management and statistics vocabularies. I added two it did not:

**(α) LIS/middleware informatics-engineering vocabulary**
1. `laboratory middleware audit trail retains all instrument runs "result history" rerun record Data Innovations Instrument Manager documentation`
2. `"Use of middleware data to dissect and optimize hematology autoverification" limswiki full text`
3. `multicenter study extracting autoverification middleware data two laboratories different middleware vendors comparison repeat rules rule sets clinical chemistry`

**(β) Accreditation / records-retention regulatory vocabulary**
4. `42 CFR 493.1291 corrected report "original report" retained duplicates laboratory CLIA record retention requirements`
5. `ISO 15189:2022 record retention "original observations" raw data retention period clinical laboratory accreditation requirement amended results retain original`

**Also run (own-field answer-side, to test the materiality clause)**
6. `EFLM biological variation database biologicalvariation.eu analytical performance specification bias measurand list coverage`
7. `"clinical decision limits" versus reference intervals "only a few" measurands available laboratory medicine which analytes have decision limits guideline-derived`

Neither vocabulary surfaced a paper asking R1's question. Vocabulary α surfaced the single document that most directly tests R1's central clause, which Gate 2 had returned and not opened. No search was refused by the classifier.

### Read levels

- **FULL TEXT:** Starks et al., *J Pathol Inform* 2021;12 (middleware autoverification), via LIMSwiki — Table 1's full rule list not reproduced in the served text.
- **FULL SECTION TEXT:** 42 CFR § 493.1291, Cornell LII.
- **FULL STANDARD AS SERVED:** Australian Commission on Safety and Quality in Health Care, *Requirements for the retention of laboratory records and diagnostic material*, 9th ed. 2022.
- **FULL TEXT AS SERVED:** Ozarda, *Biochemia Medica* 2016;26(1), doi:10.11613/BM.2016.001.
- **REFUSED AT SOURCE, NOTHING RETRIEVED:** Ricos/Westgard desirable biological-variation specifications table (robots_disallowed). Recorded as could-not-read, never as absence.

### R1's conditioning clauses, enumerated literally

The task's brief named six. R1's wording carries fifteen. I add C2/C3 (split from the brief's (ii)), C6, C9, C10, C13 and C15.

| # | Clause R1 needs TRUE OF THE WORLD | Status |
|---|---|---|
| C1 | Middleware is in routine use at accredited laboratories and is vendor-identifiable | TRUE (sourced) / UNVERIFIED on "different vendors" |
| C2 | Repeat rule sets are knowable, and differ between sites | TRUE (sourced) on knowable / UNVERIFIED on differ |
| C3 | Two such sites are reachable by one investigator (data-access governance) | UNVERIFIED |
| C4 | Logs RETAIN superseded measurements | **CONTESTED (sourced both ways)** |
| C5 | Retained superseded measurements are QUERYABLE/EXPORTABLE | **CONTESTED (sourced both ways)** |
| C6 | The log identifies WHICH run was the released one | UNVERIFIED |
| C7 | Per-run validity flags (QC, calibration, clot/haemolysis, linearity) are recorded per run | TRUE (sourced) |
| C8 | Replacement events carry an attributable CAUSE in the log | CONTESTED (sourced both ways) |
| C9 | All five named causes are non-empty classes in the real world | **PARTLY FALSE (sourced)** |
| C10 | The released value is one run's output, not a computed/averaged/derived composite | UNVERIFIED |
| C11 | Per-analyte PUBLISHED allowable-bias figures exist | UNVERIFIED (source refused) |
| C12 | Per-analyte clinical decision limits exist and are definite enough to fix a bound in advance | **CONTESTED (sourced)** |
| C13 | Reference-interval limits are computable from routine production data (indirect-RI family exists and is applied to this substrate) | TRUE (sourced) |
| C14 | The monitoring delta is computable on BOTH substrates (>1 specimen per patient, durable linkage, inside the shorter substrate's window) | UNVERIFIED, with one sourced relief and one sourced pressure |
| C15 | Released results are the substrate for the three estimands, with no existing provenance rule already picking first measurements | TRUE (sourced) |

### Clause-by-clause, against documents I opened

**C1 — middleware exists, vendor-identifiable. TRUE in part; UNVERIFIED on "different".**
Starks: "The middleware software was Data Innovations (DI) Instrument Manager (DI, Burlington Vermont, USA) version 8.14", with data "pulled via Microsoft ODBC". So one named vendor product is in routine clinical use and is researcher-extractable. That a *second, different* vendor is in use at a reachable accredited laboratory is not established by anything I opened — the CAP Today middleware feature and the Data Innovations case study were returned and NOT opened, so I may not describe them. UNVERIFIED on the half R1 actually requires.

**C2 — rule sets knowable and different. TRUE on knowable; UNVERIFIED on different.**
Starks names site rules — "IG: Immature granulocytes", "Abn WBCs", "Abn Lymphs/Blasts", "MCV", "HGB", "PLT clumps", "PLT delta failure", "Thrombocytopenia, Rerun PLT-F" — and gives the site's delta check as "50% change in either direction within the last seven days". A numeric, locally parameterised rule is prima facie a local choice, which is suggestive but not proof that two sites differ. Table 1, the full rule set, was not reproduced in the served text.

**C3 — reachability by one investigator. UNVERIFIED.** Nothing I opened bears on it. Kills nothing.

**C4 / C5 — retention and queryability of superseded measurements. CONTESTED, sourced both ways.**
This is the clause the whole design hangs on, and it is the one I attacked hardest.

*Against:* 42 CFR § 493.1291 ties every retention duty to a test **report**. Paragraph (j): "All test reports or records of the information on the test reports must be maintained by the laboratory". The only "original" duty is (k)(3): "Maintain duplicates of the original report, as well as the corrected report" — and (k) is triggered only when "errors in reported patient test results are detected", i.e. after release. The candidate's event is *pre-release* replacement, which no provision of this section reaches. Nothing in it requires retaining a measurement made but never reported. The asymmetry is exact and it cuts the wrong way for R1: retention is mandated precisely where the event is **not** the candidate's event, and unmandated precisely where it is.
The Australian national retention standard repeats the asymmetry in its own words. Table 1 item 1.5, four years: "laboratory records such as records of analysis, calculations and observations **from which the result is derived**". By that wording the protected class is records from which the *released* result derives — which textually excludes the discarded run, since the released value derives from the replacement. Item 1.8 gives the report itself seven years for adults ("Copy of original report, or ability to reprint the information content of an original report"). So the intermediate substrate is protected for a shorter period than the released one, and the standard "gives no general rule linking raw-record retention to the reported result". It says nothing about unreported measurements, repeated runs on one specimen, or retaining the original value after an amendment; its nearest provision, footnote EN1, concerns IVD/method version history, not runs.
And at the one site whose middleware pipeline I could open: "Data retrieval required running a third-party application every month to capture middleware data prior to off-site archival", with extraction "more difficult" once archived, a future warehouse needing DB access or regular duplication, and "latency issues on the production server" flagged. The queryable superseded-measurement store is a rolling monthly window.

*For:* Fact (A)'s own-field paper did retrieve 701 pre-release repeats from one analyser's logs and decompose them by analyser error flag (37.09%), QC failure and out of linearity (9.55%) — retrieval of superseded runs demonstrably happened somewhere. And Starks pulled middleware data by ODBC at all.

**Why this does not reach Unresolved.** R1's canonical wording ends: "with the share of candidate laboratories whose logs could not supply superseded measurements at all reported as a primary result." The thing I just sourced as contested is not a presupposition R1 makes; it is an output R1 commissions. The record's MULTI-LEG NOTE makes that census standalone if every other limb falls. This is the difference between a presupposition and a measurand, and on the canonical wording R1 is on the right side of it. My instructions are explicit that a contested clause the record converts into a reported quantity grades accordingly, and I will not reach for a fatal status the sources do not support.

**C7 — per-run validity flags. TRUE (sourced).**
Starks' extract "includes instrument and middleware flags", named above, including "PLT delta failure". Fact (A)'s paper counted exactly R1's exclusion categories — analyser error flag, quality control failure, out of linearity. So R1's pre-declared exclusion rule is applicable to real log fields. One sourced caveat, which is a measurement difficulty and not a presupposition failure: "One major challenge is that the error messages concatenate on one another in a variety of combinations." R1's pre-specified sensitivity arms varying each exclusion exist for precisely this.

**C8 — cause attribution. CONTESTED.**
*For:* a rerun-triggering rule is itself a logged rule name ("Thrombocytopenia, Rerun PLT-F"), and the delta rule is parameterised, so delta-check and rerun causes are in principle recoverable. *Against:* flag concatenation (above); "Dilution is not mentioned" anywhere in Starks; and Fact (A) records that in the only own-field paper that attempted a decomposition, "the composition of the 701 cannot be reconstructed from what the paper prints", with a Methods inclusion list that is not the same categories as the Results decomposition. R1 pre-mitigates: limb (a) needs only that a replacement occurred, and presupposition 3 in the record already concedes the rule-wise decomposition is the part that needs the reason code.

**C9 — the five causes are non-empty classes. PARTLY FALSE (sourced). This is a real dent.**
Per Fact (A), in the nearest own-field corpus no second analyser exists, every search term for cross-instrument confirmation is NOT PRESENT, and "the word 'delta' appears nowhere". So two of R1's five named replacement causes are empty at that site, and dilution is not sourced as log-attributable in anything I opened. R1's taxonomy presupposes a five-cause structure that at least one real laboratory cannot populate. It is a dent and not a kill, because an empty cell in a pre-declared decomposition is a reportable zero — and a zero for cross-instrument confirmation is itself a finding about how single-analyser laboratories actually work. R1 would be improved by saying so in advance rather than discovering it.

**C10 — the released value is a single run's output. UNVERIFIED.**
Nothing I opened addresses it, and I will not assert it from memory. Flagged as an unforced definitional gap rather than a sourced failure: for calculated analytes and for dilution-corrected values, "the first valid measurement of that analyte on that specimen" has no single referent, and R1's pre-declaration should close this by restricting to directly measured analytes.

**C11 — published per-analyte allowable bias. UNVERIFIED.**
My one targeted attempt — the Ricos/Westgard desirable-specifications table — was refused at the source (robots_disallowed, nothing retrieved), and I did not open the EFLM BV database or any of the CCLM analytical-performance-specification papers my search returned. Under this ledger's own rule I may not assert that these figures exist, and I do not. Could-not-read, not not-found. Kills nothing in either direction, and is load-bearing for limb (c)'s reference-limit arm.

**C12 — definite per-analyte clinical decision limits. CONTESTED (sourced). The second real dent.**
Ozarda, opened, defines CDLs as "thresholds above or below which a specific medical decision is recommended" and states they are "defined by consensus and vary among different populations". It names only lipids — "total cholesterol, HDL cholesterol" — as having "well-defined CDLs", referring otherwise only generically to "parameters which have clearly-defined CDLs". It does *not* say decision limits exist for only a few measurands, so I will not claim that. What is sourced is weaker and still bites: "the analyte's clinical decision limit" is not a world-fixed per-analyte constant but a consensus artefact varying by population. Against the kill: a consensus-defined limit is still *declarable in advance*, which is all R1 requires of a materiality bound, and the clause binds the analyte list rather than the question. This matters more than it looks, because the record's own fallback leg is "limb (c) restricted to threshold-crossing prevalence and the monitoring delta" — and threshold-crossing prevalence rests on C12.

**C13 — reference intervals computable from routine production data. TRUE, with a sourced qualification that helps the candidate.**
Ozarda: indirect methods are "also known as data mining, based on previous laboratory data", "could be used for local situations or difficult groups of subjects", with "opposition to this approach from some, as there is insufficient knowledge of the subjects". So the method family exists and is applied to exactly this substrate, and the published objection to it is about subject characterisation, not measurement provenance. That is an independent confirmation of the record's "reason for silence" from the estimand side.

**C14 — monitoring delta on both substrates. UNVERIFIED, one relief and one pressure, both sourced.**
*Relief:* Starks' extract spans 1 Jan – 31 Jul 2018 with 132,432 specimens, its chart review covers "27 unique patients" including patients receiving daily CBCs, and the site's own delta rule looks back seven days — so within-person pairs sit comfortably inside a single middleware extract. *Pressure:* the monthly off-site archival means the superseded-measurement substrate is a rolling window while the released-result substrate persists for years (item 1.8's seven years against item 1.5's four, and the middleware's own month). The two substrates R1 wants to compare are **not co-extensive in time**, and the delta limb must be computed inside the shorter one. This is a design constraint R1 does not state and should. *Unverified:* durable patient linkage in a middleware extract — Starks' shared example was "de-identified to remove identifying data fields related to accession number, dates/times" and the paper "does not explicitly state whether the extract carries a patient identifier".

**C15 — released results are the substrate, with no provenance rule already in place. TRUE (sourced).**
Ozarda gives no rule for selecting one result per patient, does not discuss repeated measurements from one patient, and offers only outlier cleaning (Dixon D/R, Horn/Tukey IQR, iterative LAVE). It never addresses which of several measurements of a specimen enters a reference-interval calculation. With Fact (C), the estimand side takes the released result as the atom and does not open it. The clause holds, for the reason the record claims.

### Overall status for attack 4

**PARTIAL.**

Not Unresolved: no clause the question cannot survive without is FALSE on anything I opened. The two load-bearing clauses that *are* contested (C4, C5) are converted by R1's own closing clause from assumptions into a reported primary quantity, with the multi-leg note making that census standalone — so the contestation I sourced is R1's output, not R1's blind spot. The clause that is partly false (C9) yields reportable zeros, and the clause that is contested and unconverted (C12) binds the analyte list, not the askability.

Not Resolved: six clauses are UNVERIFIED on my own reading (C3, C6, C10, C11, C14's linkage half, and the "different" halves of C1 and C2), and three of those are load-bearing for the fallback leg the record itself nominates — whether the log says which run was released (C6), whether published allowable-bias figures exist (C11), and whether patient linkage survives into a middleware extract (C14). The question survives this attack, but it survives partly on clauses I could not check rather than on clauses I verified, which is what Partial means here.

### Two cheap fixes that would retire this attack

1. Open one middleware vendor data dictionary or audit-trail specification (NATA's ISO 15189:2022 application document and the CAP Today middleware feature are the routes my own searches returned and I did not open) to settle C6 and C4/C5 at the document-kind level rather than at one site.
2. Add to R1 a pre-declaration that restricts the analyte set to **directly measured** analytes for which a decision limit can be cited to a named consensus and a published allowable-bias figure exists — which closes C10, C11 and C12 in one clause and costs the design nothing it was going to get anyway.
---

## Sources OPENED by this adversary (its own list, verbatim)
- Starks et al. (first author Starks; full author list not captured in the served text), 'Use of middleware data to dissect and optimize hematology autoverification', Journal of Pathology Informatics 2021;12 — full text as reproduced at https://limswiki.org/index.php/Journal:Use_of_middleware_data_to_dissect_and_optimize_hematology_autoverification . READ LEVEL: full text (figures/Table 1 rule list not reproduced). PRINTS: Data Innovations Instrument Manager v8.14 as the middleware; ODBC extraction; 132,432 specimens, 1 Jan–31 Jul 2018; manual review on 10,314 specimens (7.8%); 53,396 instrument flags with 80.3% of samples unflagged; autoverification 87.8%→93.5% of CBC panel orders and 85.8%→89.8% of component orders; named flags incl. 'PLT delta failure' and 'Thrombocytopenia, Rerun PLT-F'; delta check defined as '50% change in either direction within the last seven days'; 'Data retrieval required running a third-party application every month to capture middleware data prior to off-site archival'; 'One major challenge is that the error messages concatenate on one another in a variety of combinations'. DOES NOT PRINT: whether the log retains superseded/diluted runs or only final results; any dilution rule; any repeat or rerun count with a denominator; an explicit patient identifier in the extract; any retention period; any comparison of released vs first results; anything on reference intervals.
- 42 CFR § 493.1291 (CLIA, Test report), Code of Federal Regulations, via Cornell LII, https://www.law.cornell.edu/cfr/text/42/493.1291 . READ LEVEL: full section text. PRINTS: (j) 'All test reports or records of the information on the test reports must be maintained by the laboratory'; (k)(3) 'Maintain duplicates of the original report, as well as the corrected report'; (i)(2) a referring laboratory 'must retain or be able to produce an exact duplicate of each testing laboratory's report'. DOES NOT PRINT: any requirement to retain a measurement made but never reported; any retention period in this section; any treatment of pre-release reruns, dilutions or repeats.
- Australian Commission on Safety and Quality in Health Care, 'Requirements for the retention of laboratory records and diagnostic material', 9th edition, 2022, https://www.safetyandquality.gov.au/sites/default/files/2022-04/retention_standard_ninth_edition_2022.pdf . READ LEVEL: full standard as served. PRINTS: Table 1 item 1.5, four years, 'laboratory records such as records of analysis, calculations and observations from which the result is derived'; item 1.8, seven years (adults), 'Copy of original report, or ability to reprint the information content of an original report'; item 1.2 four years for QC/QA/QM records; item 1.7 specimens '7 days from date of receipt or until 2 days after the final report is issued (whichever date is later)'; Table 6.4(ii) biochemical analytic aliquots '3 months after date of issue of report'; footnote EN1 on retaining 'the full history of all earlier versions/modifications of that particular IVD'. DOES NOT PRINT: any requirement covering unreported measurements, superseded or repeated runs on one specimen, or retention of the original value after a report is amended.
- Ozarda Y, 'Reference intervals: current status, recent developments and future considerations', Biochemia Medica 2016;26(1), doi:10.11613/BM.2016.001, https://www.biochemia-medica.com/en/journal/26/1/10.11613/BM.2016.001 . READ LEVEL: full text as served. PRINTS: indirect methods 'also known as data mining, based on previous laboratory data', 'could be used for local situations or difficult groups of subjects', with 'opposition to this approach from some, as there is insufficient knowledge of the subjects'; data-cleaning limited to outlier methods (Dixon D/R, Horn/Tukey IQR, iterative LAVE); clinical decision limits defined as 'thresholds above or below which a specific medical decision is recommended', 'defined by consensus and vary among different populations', with 'total cholesterol, HDL cholesterol' cited as having 'well-defined CDLs'. DOES NOT PRINT: any rule for selecting one result per patient; any handling of repeated measurements from one patient or one specimen; any statement that decision limits exist for only a few measurands; anything on which of several measurements of a specimen enters a reference-interval calculation.

## Returned by its own searches and NOT opened (its own honest list, verbatim)

An unqualified absence would not be honest; a paper this adversary's searches returned and it did not open is a paper it has not checked, and grounds no status in either direction.

- Ricos/Westgard 'Desirable Biological Variation Database specifications' table (phc.umsu.ac.ir PDF) — FETCH ATTEMPTED AND REFUSED AT THE SOURCE (robots_disallowed, nothing retrieved). This is could-not-read, not not-found; it is the document that would have settled clause C11 (per-analyte published allowable bias).
- NATA, 'ISO 15189:2022 Standard Application Document, Effective Feb 2026' (nata.com.au PDF) — the national application of the accreditation standard R1 invokes by the word 'accredited'; would bear directly on record-control and audit-trail requirements for electronic records.
- CAP Today, 'Broadening productivity spectrum, middleware' (captodayonline.com) — trade feature most likely to name several middleware vendors, bearing on clause C1 ('different middleware vendors').
- Data Innovations, 'Case study: Mid America Clinical Laboratories' (datainnovations.com) — vendor case study, possible source on what Instrument Manager retains.
- CLP Mag, 'The missing link' (clpmag.com) — middleware trade article returned by the vendor-vocabulary query.
- myADLM Clinical Chemistry Journal Club 2024, 'Clinical decision making suffers from inequivalent measurement results and inadequate RIs' — bears on clause C12 (definiteness of per-analyte decision limits).
- 'Analytical performance, reference values and decision limits' (research.regionh.dk record) — bears on C11 and C12 jointly.
- CCLM 'Recommendation for biological reference intervals' PDF (eclass-b.uoa.gr) — could carry a 'which measurement' selection rule.
- De Gruyter/Brill cclm-2021-0928 and cclm-2024-0108, plus almed-2019-0032 — biological-variation / analytical-performance-specification papers returned by the EFLM query, any of which could print per-analyte allowable bias.
- Journal of Pathology Informatics autoverification records of Jan 2014 and Jan 2022 (DOAJ records 029f41ea… and aaa96fb6…) — further middleware/autoverification papers that could describe what the logs retain.
- PMC-only identifiers, hard-blocked from this container and not converted to publisher routes inside the fetch cap: PMC4975204, PMC4023033, PMC6074554.
- govinfo CFR-2011 PDF of § 493.1291 and 42 CFR 493.1105 (the retention-period section proper) — I opened 493.1291 but NOT 493.1105, so the CLIA retention PERIOD for test records is not sourced by me.

## Disguise queries run, verbatim

- `laboratory middleware audit trail retains all instrument runs "result history" rerun record Data Innovations Instrument Manager documentation`
- `"Use of middleware data to dissect and optimize hematology autoverification" limswiki full text`
- `multicenter study extracting autoverification middleware data two laboratories different middleware vendors comparison repeat rules rule sets clinical chemistry`
- `42 CFR 493.1291 corrected report "original report" retained duplicates laboratory CLIA record retention requirements`
- `ISO 15189:2022 record retention "original observations" raw data retention period clinical laboratory accreditation requirement amended results retain original`
- `EFLM biological variation database biologicalvariation.eu analytical performance specification bias measurand list coverage`
- `"clinical decision limits" versus reference intervals "only a few" measurands available laboratory medicine which analytes have decision limits guideline-derived`
