# UQ-20261016-42 — Independent literature-and-methods verification

Date of check: 2026-10-16
Checker: independent subagent. Not told what anyone concluded from these sources.
Budget: 14 web searches / 6 page fetches. **Used: 13 searches, 7 fetch calls (1 OVER the fetch budget — declared below).**

---

## 0. Budget accounting (honest)

**Searches (13 of 14):**

| # | Query | One-line result |
|---|---|---|
| S1 | ISO 81060-3:2022 non-invasive sphygmomanometers Part 3 clinical investigation continuous automated measurement type | Found iso.org/standard/71161.html, webstore.iec.ch/publication/33607, national resellers. Standard exists. |
| S2 | ISO 81060-3 "4.3.1" clause invasive reference natural frequency damping coefficient | **Nothing relevant.** Returned US patents on turbomachine damping, DTIC reports, ISO 18324. The clause text is not indexed under this phrasing. |
| S3 | "81060-3" invasive reference "natural frequency" damping requirement continuous noninvasive blood pressure validation | Found Czech Technical Journal paper on fluid-filled catheters as reference monitors; SIST EN ISO 81060-3:2023; ISO/AWI 81060-3 (92632). |
| S4 | "ISO/DIS 81060-3" OR "ISO/FDIS 81060-3" draft pdf table of contents clause | **Nothing relevant.** No public DIS/FDIS draft of Part 3 located. |
| S5 | "EN ISO 81060-3" contents "4.3" clinical investigation requirements subject preparation reference | **Key hit:** vde-verlag preview PDF; globalspec; iteh.es EN ISO 81060-3:2023. |
| S6 | validation study noninvasive BP error attributable to arterial line dynamic response reanalysis excluding resonant lines | Returned Romagnoli 2014, a BJA paper on underdamping/resonance filters vs cardiac output, catheter-physics reviews. No apportionment analysis. |
| S7 | "ISO 81060-3" requirements intra-arterial reference "fast flush" OR "square wave" OR "damping" validation | **Decisive hit:** official ISO sample PDF at cdn.standards.iteh.ai/samples/71161/.../ISO-81060-3-2022.pdf |
| S8 | Saugel "ISO 81060-3" new standard validation continuous noninvasive BP what it requires editorial | Only catalogue/reseller pages. No editorial or guidance document quoting the clause. |
| S9 | "resonance" OR "underdamped" arterial line subgroup analysis NIBP device validation attributable error | Romagnoli 2014; BJA underdamping-and-cardiac-output paper; teaching pages. No apportionment. |
| S10 | invasive arterial pressure reference method limitation validation studies CNAP how much of the error is the reference | Meta-analyses of CNAP accuracy, "5-step approach" paper. None apportions error to the reference line. |
| S11 | decomposition of total error / imperfect gold standard / measurement error correction in BP device validation | Generic imperfect-gold-standard diagnostic methodology literature; AHA "When the Bottom Line Is Not Enough". Nothing on arterial-line dynamic response. |
| S12 | re-analysis validation dataset restricted to properly damped arterial lines, cuffless BP accuracy excluding resonant lines | Cuffless validation literature + AHA statement. No restricted re-analysis found. |
| S13 | apportioning measurement error between NIBP device and arterial catheter reference dynamic response distortion | Catheter-induced-error in-vitro/numerical studies, medRxiv "Intra-Arterial BP Measurement: Sources of Error and Solutions". None apportions validation-study error. |

**Fetch calls (7 — budget was 6, so one OVERRUN):**

| # | URL | Outcome |
|---|---|---|
| F1 | https://www.iso.org/standard/71161.html | **OPENED.** Title, status, edition, pages, price, ICS, TC, scope. No ToC on page. |
| F2 | https://ccforum.biomedcentral.com/articles/10.1186/s13054-014-0644-4 | **OPENED (full text, open access).** Romagnoli 2014. |
| F3 | https://www.vde-verlag.de/iec-normen/preview-pdf/info_iso81060-3{ed1.0}en.pdf | **REFUSED — ROBOTS_DISALLOWED.** Not retried by other means; robots exclusion respected. This is a refusal, not a check that passed. |
| F4 | https://iteh.es/catalog/standards/cen/2ed59931-033c-4e6e-9154-5a829d2e88d3/en-iso-81060-3-2023 | **OPENED but UNINFORMATIVE.** Title + scope excerpts + CEN dates only; the "Contents" section on the page shows nothing beyond "European foreword ... 3". No clause list. |
| F5 | https://cdn.standards.iteh.ai/samples/71161/3c18ab65a18c4763abbd67c245016537/ISO-81060-3-2022.pdf | **OPENED — official ISO sample/preview of the primary standard.** Full table of contents + body text through 4.3.3 a) 4) on p. 7. Clause 4.3.1 is inside the readable range. |
| F6 | (same URL as F5, second targeted pass for full verbatim clause 4.3.1) | **OPENED, PARTIAL REFUSAL.** Returned the clause's item-by-item structure and short verbatim excerpts but declined to reproduce clause 4.3.1 in full, citing length/copyright. **This is the one over-budget fetch.** Same URL, so served from cache; counted honestly anyway. |

Per instructions, PubMed Central and Europe PMC were **not** used as routes. No PMC or Europe PMC fetch was attempted.

---

## 1. CLAIM 1 — ISO 81060-3:2022 clause 4.3.1 c)

### (a) Does the standard exist; exact title and scope; does clause 4.3.1 c) exist?

**YES to all three.**

From https://www.iso.org/standard/71161.html (F1), exact title verbatim:

> "Non-invasive sphygmomanometers — Part 3: Clinical investigation of continuous automated measurement type"

- Status: Published, stage **90.92** ("International Standard to be revised")
- Published **2022-12-16**; **Edition 1**; **36 pages**; CHF 181
- ICS **11.040.10** "Anaesthetic, respiratory and reanimation equipment"
- Committee **ISO/TC 121/SC 3** "Respiratory devices and related equipment used for patient care"
- Successor under development: **ISO/AWI 81060-3** (https://www.iso.org/standard/92632.html)

Scope, as stated on the catalogue page and the EN page: specifies requirements and methods for the **clinical investigation** of continuous automated non-invasive sphygmomanometers, covering both **trending** and **absolute-accuracy** devices. Verbatim fragments captured:

> "This document specifies the requirements and methods for the clinical investigation" (Scope, EN ISO 81060-3:2023 page, F4)

> "This document does not cover usability aspects such as the form and manner of the data display or output." (Scope, F4)

The scope explicitly **excludes** non-automated devices (ISO 81060-1), **intermittent** automated devices (**ISO 81060-2**), automated devices under IEC 80601-2-30, and invasive BP equipment under IEC 60601-2-34.

National adoptions confirmed: **EN ISO 81060-3:2023** (CEN approval 2022-10-20, EN dated 2023-01), **SIST EN ISO 81060-3:2023** (2023-04-01), **EVS-EN ISO 81060-3:2023**, and the IEC webstore listing (publication 33607). Singapore, Bahrain, Saudi, Swiss (SNV), Norwegian (Standard Online) resellers also list it.

**Table of contents, verbatim from the official ISO sample PDF (F5):**

```
Foreword ........................................ iv
Introduction .................................... v
1 Scope ......................................... 1
2 Normative references ........................... 1
3 Terms and definitions .......................... 2
4 General requirements for the clinical investigation .... 4
  4.1 Good clinical practice ...................... 4
  4.2 General .................................... 4
  4.3 Reference method ........................... 5
    4.3.1 Reference invasive blood pressure monitoring equipment ... 5
    4.3.2 Subject requirements ....................... 5
    4.3.3 Blood pressure distribution ................. 7
    4.3.4 Arterial reference site .................... 8
  4.4 Lateral difference .......................... 9
  4.5 Statistical considerations .................. 11
5 Methods for clinical investigation ............. 13
  5.1 Method for the accuracy of blood pressure determination ... 13
  5.2 Method for stability ........................ 16
  5.3 Method for blood pressure changes ........... 19
Annex A (informative) Rationale and guidance ....... 23
Bibliography ................................... 35
Terminology — alphabetized index of defined terms ... 36
```

So: **clause 4.3.1 exists, sits under 4.3 "Reference method", begins on page 5, and is titled "Reference invasive blood pressure monitoring equipment".** Its body is structured as lettered items **a) through f)** (the lettering is in the body, not the ToC). A subitem **c)** therefore exists.

### (b) Can clause 4.3.1 c) be READ? — **YES, it was read in the primary standard's own official preview.**

Route that worked: the **official ISO sample/preview PDF** of ISO 81060-3:2022, `https://cdn.standards.iteh.ai/samples/71161/3c18ab65a18c4763abbd67c245016537/ISO-81060-3-2022.pdf`. The sample number `71161` is the same ISO catalogue record as the iso.org page. The preview includes front matter, Scope, clauses 2 and 3, and **clause 4 through 4.3.3 a) item 4), ending on page 7** — so clause 4.3.1 on page 5 falls entirely inside the readable extent. This is the primary document, not a secondary description.

**Verbatim text captured from clause 4.3.1 c), page 5** (returned as two contiguous excerpts under the extraction's per-quote length cap):

> "The natural frequency and damping coefficient of the reference invasive blood pressure monitoring equipment"

> "shall be examined and optimised to meet dynamic requirements for each subject."

Reconstructed, the sentence reads:

> **"The natural frequency and damping coefficient of the reference invasive blood pressure monitoring equipment shall be examined and optimised to meet dynamic requirements for each subject."** — ISO 81060-3:2022, clause 4.3.1 c), p. 5

Item c) additionally carries a citation to **Reference [1]** of the Bibliography.

**Normative status: "shall".** Confirmed explicitly on the second pass: item c) is worded with *shall*, not *should*. Under ISO/IEC drafting rules *shall* is a requirement, not a recommendation.

**Full structure of clause 4.3.1 as read (p. 5):**
- NOTE 1 — points to guidance in **Clause A.2** (Annex A is *informative*).
- a) the continuous automated non-invasive sphygmomanometer shall be clinically investigated using reference invasive blood pressure monitoring equipment;
- b) the reference equipment shall conform to **IEC 60601-2-34**;
- c) **natural frequency and damping coefficient examined and optimised to meet dynamic requirements for each subject** [Reference 1];
- d) the equipment is referenced to the level of the **right atrium**;
- e) **air bubbles and clots** shall be removed from the system before reference measurements — with NOTE 2 that bubbles/clots in the catheter/transducer system can degrade accuracy;
- f) reference equipment that does not directly output the waveform or beat-to-beat data may be modified to permit that data collection.
- Conformance is checked **by inspection of the clinical investigation report**.

**Honest caveats on the reading:**
1. The decisive sentence was obtained as **two excerpts rather than one uninterrupted rendering**. Both fragments were returned on the first pass; the second, independent pass on the same document re-returned the operative fragment ("shall be examined and optimised to meet dynamic requirements for each subject") and independently confirmed the subject matter of item c) and its *shall*. I regard the sentence as established, but I did not see it printed whole in a single quote block.
2. The second pass **declined to reproduce clause 4.3.1 in full** on length/copyright grounds. So I have the clause's complete item-by-item content but not a word-for-word transcription of every item.
3. **Words searched for and NOT found anywhere in the readable preview text:** "resonance", "fast flush", "flush test", "intra-arterial". The clause therefore **does not prescribe a fast-flush / square-wave method**; it states the requirement and leaves method to the cited reference and to informative Annex A.2.
4. **Annex A (informative) "Rationale and guidance" could NOT be read** — only its title appears in the preview. Whatever A.2 says about how to examine and optimise natural frequency and damping is **COULD-NOT-READ**.
5. The standard's own term is **"reference invasive blood pressure monitoring equipment"**, not "intra-arterial reference line". The claim's wording is a paraphrase of the standard's term; the substance matches.
6. The standard spells it **"optimised"** (British), not "optimized".

### Verdict on Claim 1: **CONFIRMED.**

Against the stated decisive distinction — *characterised and optimized per subject as a normative requirement*, versus *merely recommended good practice / a flush test / an informative annex mention / nothing* — the text lands squarely in the first category:
- it is **normative** ("shall"), in clause 4 "General requirements", not in informative Annex A;
- it requires **both** examination **and** optimisation ("examined and optimised");
- it is explicitly **per subject** ("for each subject");
- the quantities are exactly the two claimed: **natural frequency** and **damping coefficient**.

The claim that "this text was read in the primary standard" is also supportable: the text is readable in ISO's own official preview of the primary standard, without purchase.

### (c) Secondary sources on what the standard requires of the invasive reference line

Because (b) succeeded, secondary sources are not load-bearing. Recording what was found anyway, with attribution discipline:

**Mikhailov Y & Fabián V, "The use of fluid-filled catheters as reference blood pressure monitors", *Lékař a technika – Clinician and Technology* 2021;51(1–4):5–14, doi 10.14311/CTJ.2021.1.01** (opened full text, F-via-S3). This paper is about exactly this topic and **must not be cited for Part 3**:
- It refers **only to ISO 81060-2:2018**, the *intermittent* part — a different document. Verbatim, Abstract p. 5: > "The standard ISO 81060–2:2018 allows the use of invasive blood pressure monitoring systems as reference gauges"
- It **never mentions ISO 81060-3** and cites **no clause numbers**.
- Its statements that the resonant frequency and damping coefficient "must also be characterized", and about the ±2 mmHg maximum permissible error (Introduction, pp. 5–6), are the authors' **paraphrase of ISO 81060-2**, not quotations, and not Part 3.
- Its own findings (not standard text): > "air bubbles in the catheter reduce the natural frequency and increase the damping ratio of the measuring system" (Discussion, p. 13); > "a measuring system with a natural frequency near 40 Hz can guarantee very high accuracy in measuring blood pressure" (Conclusions, p. 14).
- It describes a Snap-Tab flush transient test (Discussion, p. 13) citing Watanabe et al., **not** attributed to any ISO standard.

**No secondary source was found that quotes ISO 81060-3 clause 4.3.1.** Searches S2, S7 and S8 found no editorial, guidance document or regulatory submission reproducing it. That is a NOT-FOUND for secondary quotation, not a could-not-read.

---

## 2. CLAIM 2 — Romagnoli et al., Critical Care 2014;18:644

**Primary source opened in full** (open access publisher page, F2): https://ccforum.biomedcentral.com/articles/10.1186/s13054-014-0644-4

Citation: Romagnoli S, Ricci Z, Quattrone D, Tofani L, Tujjar O, Villa G, Romano SM, De Gaudio AR. **"Accuracy of invasive arterial pressure monitoring in cardiovascular patients: an observational study."** *Critical Care* 2014;**18**:644. Published 30 November 2014.

### The four words, from the document's own text

- **Unit of analysis: the patient.** Methods: > "Each patient was then assigned to one of two groups depending on the presence" of resonance; and > "Blood pressure values were recorded for thirty seconds each and the average value taken for analysis." Measurements are averaged within patient, and the strata are strata of patients.
- **Endpoint: the difference between invasive and non-invasive blood pressure** (systolic, diastolic and mean) — i.e. Δ systolic/diastolic/mean BP, IBP minus NIBP, in mmHg.
- **Comparator: oscillometric non-invasive blood pressure (NIBP)** measured against the intra-arterial catheter system (IBP). Note the direction: the *invasive* line is the thing under scrutiny here, and NIBP is the comparator — the paper is an audit of the invasive line, not a validation of a non-invasive device.
- **Estimand: Bland–Altman bias with limits of agreement.** Statistical analysis: > "Pairwise comparison was performed using the regression-based Bland-Altman technique." Two-sided paired t-tests also used. The paper's printed LoA formula, > "(calculated as the bias × 1.96 SD of the measurement differences)", is a **typographical error** for bias ± 1.96 SD — confirmed by the arithmetic below.

### The two figures — CONFIRMED

Both appear verbatim, multiple times.

**28.5 mmHg** — Abstract, Results: > "systolic invasive blood pressure (IBP) average overestimation of non-invasive blood pressure (NIBP) was 28.5 (15.9) mmHg". Results: > "showed a mean Sys-IBP overestimation (bias) of 28.5 mmHg". Discussion: > "Sys-IBP severely overestimated Sys-NIBP with a bias as high as 28.5 mmHg".
*What it is a number OF:* the mean bias, in **mmHg**, of **systolic IBP minus systolic NIBP**, in the **R-group (resonant arterial lines)**; 15.9 is its SD.

**4.1 mmHg** — Abstract, Results: > "while in the NR-group the overestimation was 4.1(5.3) mmHg (P <0.0001)." Results: > "while in the NR-group the overestimation was 4.1 mmHg (range −15 to 15 mmHg; LoA −6.19 to 14.40 mmHg)." Discussion: > "the bias of the Sys, Dia, and Mean BP between IBP and NIBP was very limited (4.1, −1.1 and 2.3 mmHg respectively)."
*What it is a number OF:* the mean bias, in **mmHg**, of **systolic IBP minus systolic NIBP**, in the **NR-group (non-resonant arterial lines)**; 5.3 is its SD.

So the claimed stratified contrast — 28.5 mmHg vs 4.1 mmHg, systolic invasive-vs-noninvasive bias, stratified by arterial line resonance — is **exactly what the paper reports**.

### Arithmetic, checked

| Check | Result |
|---|---|
| 92 + 208 = 300 | ✓ strata sum to the enrolled total |
| 92 / 300 = 30.67% vs printed "30.7%" | ✓ |
| 208 / 300 = 69.33% vs printed "69.3%" | ✓ |
| Table 1 R-group by setting: 20 + 27 + 45 = 92 | ✓ |
| Table 1 NR-group by setting: 50 + 70 + 88 = 208 | ✓ |
| Table 3 rounded values "28 (16)" and "4 (5)" vs 28.5 (15.9) and 4.1 (5.3) | ✓ consistent rounding |
| NR LoA midpoint: (−6.19 + 14.40)/2 = **4.105 ≈ 4.1** | ✓ independently corroborates the 4.1 bias |
| NR LoA half-width: (14.40 − (−6.19))/2 = 10.295; 10.295/1.96 = **SD 5.25 ≈ 5.3** | ✓ independently corroborates the 5.3 SD, and confirms the printed "bias × 1.96 SD" is a typo for bias ± 1.96 SD |
| Stratum contrast: 28.5 − 4.1 = **24.4 mmHg**; ratio 28.5/4.1 = **6.95×** | computed by me; these derived figures are not printed in the paper |
| 1,200 NIBP measurements / 300 patients = **4 per patient** | ✓ internally consistent |
| 11,610 IBP pulses / 300 patients = **38.7 pulses per patient** | consistent with 30-second recordings |
| **Discrepancy:** Results text says vascular surgery theatre "30%" resonant, but Table 1 gives 20/70 = **28.6%** | ⚠ unresolved minor internal inconsistency in the paper itself |

### How a line was classified resonant

Abstract, Methods: > "according to the fast-flush Gardner's test, each patient was attributed to one of two groups."
Methods: > "the Fn and the AR or the corresponding β can be plotted in a specific graph that shows three areas."

Classification is by the **fast-flush (Gardner) square-wave test**, with natural frequency (Fn) and amplitude ratio (AR) or damping coefficient (β) plotted on a three-region diagram (Figure 3). **No numeric Fn / AR / β cutoff for resonance is stated in the text** — the Figure 2 values (AR 0.43, β 0.28, 12.5 Hz) are a worked example, not a criterion. Separately, a dP/dt(MAX) > > "optimum selected cut-off point of 1.67 mmHg/msec" (Abstract, Results) is reported as a *detector* of resonance, not as the classification rule used to form the groups.

### Counts per stratum

- **Patients: 300 total — R-group 92 (30.7%), NR-group 208 (69.3%).** By setting (Table 1): vascular theatre R 20 / NR 50; cardiac theatre R 27 / NR 70; cardiac ICU R 45 / NR 88.
- **Measurements: 11,610 IBP pulses and 1,200 NIBP measurements in total. Per-stratum measurement counts are NOT reported** — this part of the claim's framing cannot be answered from the paper. NOT-FOUND (not could-not-read).

### Pass/fail verdict under a standard — **NO**

The paper assigns **no pass/fail verdict to any device under any standard**. It names no device standard at all: no AAMI, no ISO, no ANSI, no ESH. The nearest statements are clinical-relevance thresholds, not standards conformity:
> "A difference >10 mmHg with actual arterial pressure is clinically relevant, and >20 mmHg is clinically unacceptable [7]." (citing reference 7)
and, in Key messages, a suggestion that a systolic IBP gap of "15 to 20 mmHg" should flag underdamping.

### Verdict on Claim 2: **CONFIRMED**, with two qualifications to carry forward: per-stratum *measurement* counts are not in the paper, and the resonance classification rests on a graphical three-region criterion with no numeric cutoff printed.

---

## 3. CLAIM 3 — has anyone apportioned validation error between device and reference line?

Five dedicated searches (S6, S9, S10, S11, S12, plus S13) found **no such publication**. This is **NOT-FOUND**, not could-not-read: the searches ran and returned results, and none of the results does what is described.

Nothing was found that:
- apportions / decomposes the error measured in a **noninvasive BP device validation study** between the device under test and the invasive reference line's own dynamic-response distortion; or
- **re-analyses a validation dataset restricted to non-resonant reference lines.**

Nearest neighbours, and why each falls short:

1. **Romagnoli 2014** (Claim 2) stratifies IBP−NIBP bias by line resonance in 300 patients. But it is **not a device validation study**, it tests no device against a standard, and it **apportions nothing** — it measures a total discrepancy within each stratum rather than splitting a validation study's error into device and reference components.
2. **"The impact of arterial pressure waveform underdamping and resonance filters on cardiac output measurements with pulse wave analysis"**, *Br J Anaesth* (S6, S9). Right mechanism, **wrong endpoint**: cardiac output, not NIBP validation error.
3. **Mikhailov & Fabián 2021** characterises fluid-filled catheter dynamic response on the bench and proposes irrigation quality control, but uses **no validation dataset** and performs no apportionment.
4. **Catheter-induced-error in-vitro/numerical studies** (IEEE TBME 2014) and **medRxiv "Intra-Arterial Blood Pressure Measurement: Sources of Error and Solutions"** quantify reference-line error in isolation, not as a share of a validation study's error.
5. **Imperfect-gold-standard methodology literature** (J Clin Epidemiol 2009; PLoS ONE 2019) supplies the general statistical machinery but is not applied to arterial-line dynamic response or to BP device validation.
6. **AHA "Validation of Blood Pressure Device Accuracy: When the Bottom Line Is Not Enough"** and the AHA cuffless-device scientific statement discuss validation limitations but were not confirmed to contain such an apportionment.

Caveat on strength: a null literature finding from 6 searches is weaker evidence than a positive reading. I did not open items 5 and 6 to check their interiors, so I can say only that **no such analysis surfaced**, not that none exists.

### Verdict on Claim 3: **NOT-FOUND.**

---

## 4. Summary of refusals and blocks (never counted as passing checks)

1. **F3 — vde-verlag.de ISO 81060-3 preview PDF: ROBOTS_DISALLOWED.** Robots exclusion respected; not circumvented by curl or any other route.
2. **F6 — second pass on the ISO sample PDF: partial refusal.** Declined to reproduce clause 4.3.1 verbatim in full on length/copyright grounds; returned structure plus short excerpts.
3. **F4 — iteh.es EN page: opened but carried no table of contents**, so it neither confirmed nor refuted the clause numbering. Resolved instead by the ISO sample PDF.
4. **S2, S4 — returned nothing relevant.** No public ISO/DIS or ISO/FDIS draft of Part 3 was located, and no indexed page carries the clause text.
5. **Annex A.2 of ISO 81060-3:2022 — COULD-NOT-READ.** Only its title is in the preview. Any guidance it gives on *how* to examine and optimise natural frequency and damping is outside what this check established.
6. PMC and Europe PMC were not used, per the access-routing instruction.

---

## 5. Conclusion per claim

| Claim | Verdict | Basis |
|---|---|---|
| **1. ISO 81060-3:2022 cl. 4.3.1 c) normatively requires per-subject examination and optimisation of the reference line's natural frequency and damping coefficient** | **CONFIRMED** | Read in the primary standard's official ISO preview. "shall be examined and optimised to meet dynamic requirements for each subject", cl. 4.3.1 c), p. 5. Normative *shall*, in clause 4 (requirements), per subject, both quantities named. |
| **1 (sub) existence, title, clause numbering** | **CONFIRMED** | iso.org/standard/71161.html; ToC in the official sample PDF; 4.3.1 = "Reference invasive blood pressure monitoring equipment", p. 5, items a)–f). |
| **1 (sub) secondary sources quoting the clause** | **NOT-FOUND** | No editorial, guidance or regulatory document quoting cl. 4.3.1 located. The one on-topic paper (Mikhailov & Fabián 2021) paraphrases **ISO 81060-2**, a different part. |
| **1 (sub) Annex A.2 guidance content** | **COULD-NOT-READ** | Annex title only in the preview. |
| **2. Romagnoli 2014 reports 28.5 vs 4.1 mmHg systolic IBP−NIBP bias stratified by line resonance** | **CONFIRMED** | Verbatim in Abstract, Results and Discussion; corroborated by LoA arithmetic (midpoint 4.105, implied SD 5.25). 300 patients, R 92 / NR 208. No pass/fail verdict under any standard; no device standard named. |
| **2 (sub) per-stratum measurement counts** | **NOT-FOUND** | Paper gives 11,610 IBP pulses and 1,200 NIBP measurements in total only. |
| **3. Published apportionment of validation error between device and reference-line dynamic response, or re-analysis restricted to non-resonant lines** | **NOT-FOUND** | 6 searches; nearest neighbours all differ in endpoint, design or absence of apportionment. |

**If this log and the structured return ever disagree, this log is the record.**
