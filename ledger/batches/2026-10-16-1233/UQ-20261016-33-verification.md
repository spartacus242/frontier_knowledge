# UQ-20261016-33 — verification notes

Checked 2026-10-16. Budget used: 14/14 searches, 6/6 fetches. No safety-classifier refusals.
Verdict: **PARTLY_CONFIRMED**.

---

## 1. Sources actually opened (6 fetches)

### F1 — Knight T et al. 2022, PMC9353695 — READ
Knight T, May B, Tyson D, McAuley S, Letzkus P, Enright SM. "Detecting drug diversion in
health-system data using machine learning and advanced analytics." *Am J Health-Syst Pharm*
2022;79(16):1345-1354. doi:10.1093/ajhp/zxac035

- Design: retrospective, 10 acute-care hospitals / 4 health systems; 27.9M medication-movement
  transactions. **22 known, blinded diversion cases, all nursing staff.** Health System 3 gave no
  incident data. Model trained on a small initial sample, 60/40 split + K-fold CV; **labels came
  from a 98th-percentile heuristic, not confirmed diversion outcomes.**
- No stated primary endpoint. Closest: "detected known diversion cases (n = 22) in blinded data
  faster than existing detection methods." Result: **mean 160 days, median 74 days earlier
  (range 7-579 days).**
- Verbatim disclaimer confirmed: **"Fourth, we tested sensitivity, not specificity."**
- Future work, verbatim: **"measure specificity in order to develop analytics that will yield
  fewer alerts."**
- **Correction to claim B:** the paper is NOT "only days-of-earlier-detection." It prints
  **"96.3% accuracy, 95.9% specificity, and 96.6% sensitivity"** for the initial sample — but
  against the 98th-percentile heuristic labels, not confirmed diversion. Claim B's flat "only"
  is wrong; its substance (no MDR, no DP-vs-magnitude, no alert-rate/specificity analysis
  against true diversion) stands.
- Absent: minimum detectable diversion rate, detection probability vs magnitude, false-alarm
  rate, actual alert volume, ROC curve, power calculation, confidence intervals. Authors note
  "the number of known diversion incidents in the study was fairly small (n = 22)."
- Internal inconsistencies flagged by the fetch (worth a human check, not load-bearing here):
  Scripps text 91 days vs Table 7 71 days; "7 diversion incidents" in text vs 6 rows in Table 6.

### F2 — Epstein RH, Dexter F et al. 2016 — READ (via Iowa esploro record)
Epstein RH, Dexter F, Gratch DM, Perino M, Magrann J. "Controlled Substance Reconciliation
Accuracy Improvement Using Near Real-Time Drug Transaction Capture from Automated Dispensing
Cabinets." *Anesth Analg* 2016;122(6):1841-1855. doi:10.1213/ANE.0000000000001289. PMID 27111643

- Unit of analysis: per transaction for capture accuracy/latency (1,384 acceptance-test
  transactions; 145,642 in the central pharmacy DB); per patient case and per provider for
  reconciliation error.
- Endpoint: **reconciliation error rate** (discrepancy between anaesthesia record and dispensing
  record), plus capture accuracy, latency, % available within 2 and 5 min.
- Comparator: historical periods. Baseline (Jan 2012 - Jun 2013), Next-Day Reports
  (Jul 2013 - Apr 2014), Near-Real-Time. **Error rate 8.8% -> 5.2%.** No concurrent control.
  No CIs in what I could read.
- **Reports none of:** sensitivity, specificity, false-alarm rate, detection probability,
  minimum detectable diversion quantity. Most errors are clerical; errors concentrated in a
  small share of providers.
- **Claim B's characterisation of this paper is CORRECT.** Refinement for the ledger: the
  residual 5.2% discrepancy rate is precisely the *documentation-variance input* the candidate
  question needs. The paper supplies a variance term, not a detection-probability output.
- Limitation: the esploro fetch declined to reproduce the abstract verbatim (125-char quoting
  cap), so the above is paraphrase + figures, not quoted abstract lines.

### F3 — IIASA RR-75-025 (Avenhaus, MUF-D) — **COULD NOT READ**
https://pure.iiasa.ac.at/235/1/RR-75-025.pdf returned an Anubis bot-protection "Access Denied"
page, error 9e4edb5b6b850c41. No claim made about its contents.

### F4 — Burr T, Bonner E, Michalak S, Norman C. "An Overview of Statistical Methods used in
Nuclear Safeguards" — READ
https://ww2.amstat.org/meetings/proceedings/2019/data/assets/pdf/1199480.pdf (pp. 553-579;
the fetch could not confirm the journal name from the PDF).

Verbatim lines:
- **"the material balance (MB) is defined as MB = Ibegin + Tin - Tout - Iend"**
- **"Typically, many measurements are combined to estimate the terms Tin, Ibegin, Tout, and
  Iend in the MB"**
- **"These paired data are declarations usually based on measurements by the operator"**
- **"the facility could divert NM and alter the accounting records to try to mask the diversion"**
- **"such a falsification would cause a mean shift between the operator declaration and the
  corresponding inspector measurement"**
- **"The D statistic and the one-item-at-a-time tests rely on estimates of operator and
  inspector measurement error RSDs"**
- **"Inspector NDA measurements are made using portable neutron and gamma detectors taken into
  the facility"**
- **"One common goal is for the loss detection probability DP=1 - beta to be at least 0.95"**
- **"significant quantity, which is 8 kg for Pu"**
- **"The alarm threshold h is chosen so that the FAP per analysis period"**
- **"It is important to recognize that large throughput facilities cannot typically achieve
  DP >= 0.95"**

This document does **not** spell out a combined MUF-D test, and does not define a separate
minimum detectable quantity (the goal quantity is the SQ).

### F5 — Vovanese K, Shan X, Khasawneh M (2018) — READ (record only)
"A predictive framework to identify potential diversion by health care providers." *Proc. 7th
Annual World Conference of the Society for Industrial and Systems Engineering*, Binghamton NY.
https://uhcl-ir.tdl.org/items/59537d27-a3b5-4923-a78a-22477e21e1ea/full
(It is a conference paper, not a thesis, contrary to how the search hit reads.)

- Data mining on automated-dispensing transaction records; **4-day sample, 1-4 Apr 2015**.
  Decision Table beat Logistic Regression, Decision Tree, Naive Bayes, K-means.
- Verbatim: **"with high sensitivity, precision (NPV), and Receiver Operating Curve (ROC) area,
  combined with a low false positive rate."**
- **All qualitative — no numeric AUC, sensitivity, specificity, FPR.** "precision (NPV)" is
  internally inconsistent. No detection probability, no MDR.
- Significance: this is a published work that *does* report ROC/sensitivity/false-positive-rate
  language for hospital controlled-substance surveillance. It dents the strict wording of
  claim B's universal negative, without supplying anything the candidate question asks for.

### F6 — Epstein RH, Gratch DM, McNulty S, Grunwald Z (2011) — **COULD NOT READ**
"Validation of a System to Detect Scheduled Drug Diversion by Anesthesia Care Providers."
The Miami esploro record indexes only the digest reprint, *Survey of Anesthesiology*
2011;55(6):315-316, doi:10.1097/01.SA.0000407051.71019.8a — bibliographic metadata, **no
abstract**. The original is *Anesth Analg* 2011;113(1):160-4. Fetch budget exhausted.
**No claim made about its contents.** Its title announces validation of a *detection* system,
so it is the single largest unresolved threat to claim B's universal negative. Must be opened
before claim B is relied on.

---

## 2. (a) Is claim A's identity argument correct?

**My own algebra on the stated identity.** With
ID = (BI + receipts) - (administered + documented waste + returns + EI):

- Concealment as documented waste: true removal R leaves physical EI lower by R while declared
  waste is W+R. ID = (BI+rec) - (adm + (W+R) + ret + (EI_true - R)) = (BI+rec) - (adm + W + ret
  + EI_true) = 0. The +R and -R cancel exactly.
- Concealment as charted administration: declared administered is A+R, physical EI is EI_true-R.
  Same cancellation. ID = 0.
- Hence the ID statistic's non-centrality is zero for every R, so power = alpha for every R, so
  the set {R : power(R) >= 1-beta} is empty for any 1-beta > alpha and no MDR exists.
  **(My own arithmetic and my own power reasoning, not quoted from a source.)**

So the arithmetic leg is **right**, and it is the known safeguards failure mode: Burr et al.,
"the facility could divert NM and alter the accounting records to try to mask the diversion."

**But two corrections.**

1. *"at all magnitudes" is conditional, not unconditional.* The result requires (i) an exactly
   compensating declaration, (ii) removal within the concealing channel's capacity, and (iii)
   unchanged ID variance. Beyond capacity the declaration becomes internally impossible
   (declared waste exceeding the amount dispensed; charted dose exceeding vial content or
   pharmacologic range), and a declaration-plausibility check — not the balance — regains power.
   Co-signed/witnessed waste makes the waste entry a second declaration rather than a free
   variable, which also perturbs (iii).

2. *Claim A mischaracterises the source discipline, and this is the load-bearing error.* A
   "nuclear-safeguards-style material-balance test" is not the balance standing alone. The MB
   is built from **operator declarations** ("These paired data are declarations usually based on
   measurements by the operator"), and the discipline's answer to exactly claim A's problem is
   an **independent inspector verification measurement**: falsification "would cause a mean
   shift between the operator declaration and the corresponding inspector measurement," which
   is what the **D statistic** tests, using "estimates of operator and inspector measurement
   error RSDs," with inspector NDA instruments physically taken into the facility. So claim A
   proves that the *unverified* ID statistic has no MDR against concealed removal — a textbook
   result — not that safeguards-style methodology yields no answer.

**Does the hospital case have a counterpart of a measured (as opposed to documented) outflow
term?** Asymmetrically, yes:
- The *inflow* side is instrumented: ADC dispense events, receipts and inventory counts are
  machine records, not bare human declarations.
- The *outflow* terms (administered, documented waste) are human declarations — this is the
  real asymmetry, and it is what claim A has correctly located.
- A verification counterpart for the outflow side **exists in principle and is an active
  engineering target**: assay / volumetric / gravimetric verification of returned and wasted
  drug (syringe residual testing, returned-PCA-bag drug verification). I saw only a search-hit
  title here (an ASU engineering capstone, "Automating Narcotic Waste Measurement and Drug
  Verification for Returned PCA Bags") and **did not open any peer-reviewed study of its
  detection performance** — so this is a located-but-unverified counterpart, not a figure.

Consequence for the candidate question: claim A does not kill it, it **redirects** it. The
unanswerable branch is the declaration-only balance. The answerable branch is a
verification-augmented balance, where the assay's measurement uncertainty and the verification
sampling fraction enter the propagated variance and set a finite MDR — exactly the MUF+D
structure. The candidate question must specify which branch it means.

A second, independent and arguably more informative obstacle, from the same source: **"It is
important to recognize that large throughput facilities cannot typically achieve DP >= 0.95"**
against a target of DP >= 0.95 and SQ = 8 kg Pu. The throughput-to-variance ratio, not the
identity, is what defeats these tests in practice. A hospital dispensing unit is a very
high-throughput, high-relative-variance facility, so this precedent bears directly on the
candidate question and is missing from claim A.

---

## 3. (b) Claim B against the named papers, and the hunt for detection-limit figures

| Leg of claim B | Finding |
|---|---|
| Knight 2022 "reports only days-of-earlier-detection on 22 already-identified cases" | Mostly right; **"only" is wrong** — 96.3%/95.9%/96.6% accuracy/specificity/sensitivity appear for the heuristic-labelled development sample. 22 cases, all nurses, confirmed. |
| Knight 2022 quote "we tested sensitivity, not specificity" | **Verbatim confirmed** ("Fourth, we tested sensitivity, not specificity."). |
| Epstein/Dexter 2016 "documentation accuracy rather than detection probability" | **Confirmed.** Endpoint is reconciliation error rate 8.8% -> 5.2%; none of the detection metrics reported. |
| "No published work reports a minimum detectable diversion rate, a detection probability as a function of magnitude, or an alert-rate and specificity analysis" | **Not established.** Universal negative; Vovanese et al. 2018 reports ROC area, sensitivity and a "low false positive rate" (qualitatively). Epstein/Gratch/McNulty/Grunwald 2011 could not be read. Patents and vendor reports not opened. |

Nothing I opened reports a minimum detectable diversion rate, a detection probability as a
function of removal magnitude, or a specificity measured against confirmed diversion. The
narrow version of claim B survives; the universal version does not, as written.

**Located but NOT opened (budget) — must be cleared before relying on claim B:**
- Epstein RH, Gratch DM, McNulty S, Grunwald Z, *Anesth Analg* 2011;113(1):160-4 — highest risk.
- Bluesight *Diversion Trends Report* 2024 and 2025 (vendor; carry alert/investigation stats).
- US patents 10915604, 12001438, 11721430, 12249421, 12482554, 11081220 ("Controlled substance
  diversion detection systems and methods"; "Opioid management system"; "Dosage normalization
  for detection of anomalous behavior") — published documents whose claims describe thresholds.
- Fan M et al., "Diversion of Controlled Drugs in Hospitals: A Scoping Review of Contributors
  and Safeguards" (uses "safeguards" in the ordinary sense, not the nuclear one).
- ASU capstone on automated narcotic waste measurement / returned-PCA-bag drug verification.
- Safeguards side, unopened: *Braz J Radiat Sci* "Evaluation of Nuclear Material Balance by
  Statistical Analysis of the Material Unaccounted For (MUF)"; EPJ-N 2016 open-access safeguards
  paper; INMM node/11199 "Nuclear Material Accountancy and Data verification (The MUF-D-
  Problem)"; INMM node/11196; NRC MC&A pages.

---

## 4. (c) Is the question posed in print?

**Not found.** No source I opened or saw indexed poses the candidate question — a minimum
detectable sustained diversion rate per dispensing unit per month, computed as an
inventory-difference statistic with propagated variance and a stated DP at a stated FAP — in
either pharmacy or safeguards vocabulary. Searches for the explicit safeguards analogy
("inventory difference", "material balance", MUF applied to hospital controlled substances)
returned only ordinary-sense "safeguards" pharmacy literature and unrelated NRC/INMM material.

Nearest thing in print, from Knight et al. 2022 (a call for a specificity analysis, **not** a
detection limit as a function of magnitude):
> "measure specificity in order to develop analytics that will yield fewer alerts."

---

## 5. Full query list (14 searches, query -> one-line result)

1. Epstein Dexter 2016 Anesth Analg controlled substance diversion documentation discrepancies
   -> no direct hit; surfaced unrelated handoff/documentation papers.
2. Epstein Gratch Perino Magrann "Controlled Substance Reconciliation Accuracy Improvement" ADC
   Anesth Analg 2016 -> found Iowa esploro record (fetched, F2).
3. IAEA safeguards material balance accountancy falsification of operator declarations
   independent verification measurement probability of detection -> IIASA RR-75-025, INMM
   MUF-D-Problem, amstat 2019 PDF, ESARDA ITV 2022.
4. "MUF-D" statistic safeguards inspector verification falsified operator declared data
   detection probability -> same cluster; INMM node/11199 and node/11196, KIT publications.
5. "minimum detectable" diversion rate hospital controlled substance surveillance detection
   limit statistical power -> no such paper; returned PMC9353695, Bluesight reports, 2 patents.
6. drug diversion detection machine learning hospital ROC AUC sensitivity specificity alert rate
   false positive nurses -> PMC9353695 plus UHCL "predictive framework" (fetched, F5).
7. IAEA Safeguards Glossary 2022 "material unaccounted for" "D statistic" definition verification
   operator declarations detection probability -> no glossary PDF; Braz J Radiat Sci MUF paper,
   EPJ-N, amstat PDF, "stratum D-statistic" sampling-plan paper.
8. "predictive framework to identify potential diversion by health care providers" AUC
   sensitivity specificity -> UHCL repository records (fetched, F5).
9. hospital pharmacy controlled substance diversion "inventory difference" nuclear safeguards
   material balance accounting analogy -> **no cross-domain paper**; ordinary-sense pharmacy
   policy docs and separate NRC MC&A pages. Key negative for (c).
10. point-of-care testing returned controlled substance waste syringe residual analysis hospital
    diversion detection yield -> ASU engineering capstone on automated narcotic waste
    measurement / returned-PCA-bag verification; Bluesight "how to analyze narcotic wasting".
    No peer-reviewed detection-performance study surfaced.
11. Dexter Epstein anesthesia controlled substance diversion detection statistical power sample
    size audit sensitivity -> surfaced Miami record "Validation of a System to Detect..." (F6);
    several patents.
12. "receiver operating characteristic" drug diversion detection ADC anomaly detection validation
    specificity -> patents only (Opioid management system; Dosage normalization for detection of
    anomalous behavior) plus PMC9353695. No peer-reviewed ROC study.
13. "Validation of a System to Detect Scheduled Drug Diversion by Anesthesia Care Providers"
    Epstein Gratch Grunwald sensitivity specificity -> Miami esploro record only (fetched, F6,
    metadata only).
14. proportion of hospital opioid diversion that goes undetected detection rate unknown research
    gap surveillance sensitivity estimate -> trade press and vendor surveys only; no quantitative
    detection-rate estimate, no statement of the question.

## 6. Fetch list (6 fetches)

1. https://pmc.ncbi.nlm.nih.gov/articles/PMC9353695/ -> READ. Knight 2022, F1 above.
2. https://iro.uiowa.edu/esploro/outputs/journalArticle/Controlled-Substance-Reconciliation-Accuracy-Improvement-Using/9983806269502771
   -> READ (abstract paraphrased, 125-char quoting cap). Epstein/Dexter 2016, F2.
3. https://pure.iiasa.ac.at/235/1/RR-75-025.pdf -> **FAILED**, Anubis bot block, error
   9e4edb5b6b850c41. Could not read.
4. https://ww2.amstat.org/meetings/proceedings/2019/data/assets/pdf/1199480.pdf -> READ.
   Burr/Bonner/Michalak/Norman, F4. Load-bearing safeguards quotations.
5. https://uhcl-ir.tdl.org/items/59537d27-a3b5-4923-a78a-22477e21e1ea/full -> READ (record).
   Vovanese et al. 2018, F5.
6. https://scholarship.miami.edu/esploro/outputs/journalArticle/Validation-of-a-System-to-Detect/991031714137202976
   -> READ but **metadata only, no abstract**. Epstein 2011 contents unknown, F6.

## 7. Failures and refusals

- **No search was refused by a safety classifier.** All 14 returned results.
- One fetch hard-failed (IIASA, bot protection). One fetch returned metadata without an
  abstract (Epstein 2011). Two reads were degraded by the fetch tool's 125-character quoting
  cap (the Knight sentence carrying 96.3%/95.9%/96.6%, and the whole Epstein 2016 abstract).
- "Not found" vs "could not read", kept separate: the hospital-safeguards cross-domain question
  is **not found** (search 9, 14); IIASA RR-75-025 and Epstein 2011 are **could not read**.
