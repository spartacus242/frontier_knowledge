# UQ-20261016-42 — Invasive reference dynamic-response requirements in BP device validation standards

Verification run 2026-10-16. Independent literature-and-methods check. No knowledge of what anyone concluded from these sources.

Budget: 14 web searches allowed / **14 used**. 6 page fetches allowed / **6 used** (1 of the 6 failed at the server). No overrun.

---

## 1. Headline result

**The premise that the standards are silent on the invasive reference line's dynamic response is FALSE for ISO 81060-3:2022.**

ISO 81060-3:2022 clause **4.3.1 c)** is a **normative "shall"** requirement, and it is explicitly **per subject**. It names *natural frequency* and *damping coefficient* by name.

It does **not** name resonance, flush test, or square-wave test.

The other documents in scope (ISO 81060-2, AAMI/ANSI SP10, the 2018 AAMI/ESH/ISO Universal Standard, AHA and ESH statements, IEEE 1708) **could not be read** within budget. Their requirements are recorded here as COULD-NOT-READ, not as "no requirement".

---

## 2. Search log (14 queries)

| # | Query | One-line result |
|---|---|---|
| 1 | ISO 81060-3:2022 continuous automated non-invasive sphygmomanometer intra-arterial reference requirements clauses | All hits were standards-resellers (webstore.iec.ch, iso.org, sfs.fi, genorma). One VDE-Verlag preview PDF identified. |
| 2 | ISO 81060-3 invasive reference "natural frequency" OR "damping" OR "square wave" arterial line requirement | Mostly clinical-education sites (derangedphysiology, rebelem). Surfaced the CVUT/Lekar a technika fluid-filled-catheter paper. |
| 3 | ISO 81060-2:2018 intra-arterial reference "resonant frequency" "damping coefficient" reference measuring system clause | Surfaced medRxiv "Intra-Arterial Blood Pressure Measurement: Sources of Error and Solutions" full PDF, and the VDE 81060-2 preview. |
| 4 | ISO 81060-3:2022 commentary review requirements continuous blood pressure validation Saugel invasive reference arterial catheter | **No scholarly commentary found.** All 9 hits were standards-sales pages. No paper quoting 81060-3 clauses located by this query. |
| 5 | IEEE 1708 cuffless blood pressure standard reference invasive arterial line requirement dynamic response | Only resellers (standard.no, sfs.fi, accuristech, globalspec) + an embs.org and incompliancemag press release. **No clause text reachable.** |
| 6 | "81060-3" validation continuous noninvasive blood pressure "invasive" reference requirements paper clause annex | **Key hit:** publisher sample PDF `cdn.standards.iteh.ai/samples/71161/.../ISO-81060-3-2022.pdf`. Also FDA cuffless guidance, AHA statement, Frontiers validation study. |
| 7 | cuffless blood pressure validation study "square wave test" OR "damping coefficient" arterial line reference reported methods | Hits were arterial-line-vs-cuff accuracy studies in children, plus clinical-teaching pages. No cuffless validation study reporting a square-wave test. |
| 8 | validation study "ISO 81060-3" continuous noninvasive blood pressure device invasive arterial reference accuracy results | **Key hit:** Frontiers Med Technol 2026 "BP100 according to ISO 81060-3: 2022" full PDF — an actual 81060-3 validation study. |
| 9 | blood pressure device validation verdict re-analysed overturned "under-damped" OR "resonant" invasive reference line criticism | **Nothing responsive.** ResearchGate figures, flashcards, unrelated PMC articles. No re-analysis or overturned verdict. |
| 10 | ISO 81060-2:2018 neonates intra-arterial reference permitted auscultation reference requirement invasive | Returned ClinicalTrials.gov 81060-2 study protocols and a Philips NBP validation PDF; **did not** establish 81060-2 clause text on damping. |
| 11 | AAMI SP10 ANSI invasive reference blood pressure "damping" transducer requirement 1992 standard | Only ANSI/AAMI sales pages, FDA NIBP guidance page, Medaval protocol summary. **No SP10 clause text reachable.** |
| 12 | ClearSight Nexfin continuous BP validation invasive reference methods "square wave" OR "fast flush" OR "damping" reported | Several ClearSight validation papers identified (PMC9369920, jcm-11-04498, s12871-020-01091-x) but **fetch budget already exhausted** — not opened. |
| 13 | "AAMI/ESH/ISO" universal standard 2018 validation blood pressure invasive reference not permitted auscultatory | Repository copies of the Universal Standard manuscript (UCL Discovery, ORA Oxford) located, **not opened** — fetch budget exhausted. |
| 14 | arterial line damping reference questioned validity cuffless validation criticism letter reanalysis | Reviews on validating cuffless devices + one RETRACTED consumer cuffless validation paper. **No instance of a verdict challenged on damping/resonance grounds.** |

### Refusals and blocks recorded
- **1 hard block:** `vde-verlag.de/iec-normen/preview-pdf/info_iso81060-3{ed1.0}en.pdf` → `ROBOTS_DISALLOWED` from target. This consumed a fetch and returned nothing.
- Per task instructions, PMC and Europe PMC were **not used as routes** (PMC reCAPTCHA interstitial, Europe PMC HTTP 429). PMC URLs appearing in search results were deliberately not fetched.
- No search was refused by the search tool.

---

## 3. Access routes attempted (6 fetches)

| URL | Outcome |
|---|---|
| `https://www.vde-verlag.de/iec-normen/preview-pdf/info_iso81060-3{ed1.0}en.pdf` | **FAILED — ROBOTS_DISALLOWED** (target server). Nothing retrieved. |
| `https://ojs.cvut.cz/ojs/index.php/CTJ/article/view/7845/6376` | **OPENED, full text** — Mikhailov & Fabián, *Lekar a technika / Clinician and Technology* 2021;51(1–4):5–14. |
| `https://cdn.standards.iteh.ai/samples/71161/3c18ab65a18c4763abbd67c245016537/ISO-81060-3-2022.pdf` | **OPENED, PARTIAL (publisher preview)** — front matter, full TOC, Scope, Clauses 3, 4.1–4.3.2, stopping inside 4.3.3. This is the **primary standard text**. |
| `https://www.medrxiv.org/content/10.1101/2020.08.29.20184275.full.pdf` | **OPENED, full text** — preprint on intra-arterial BP error sources. |
| `https://cdn.standards.iteh.ai/samples/.../ISO-81060-3-2022.pdf` (second pass, verbatim extraction of 4.3.1) | **OPENED** — but extraction was constrained by a **125-character quotation limit** in the fetch tool, so clause 4.3.1 could not be reproduced in full word-for-word. Fragments below are verbatim; connective text is paraphrase. |
| `https://www.frontiersin.org/journals/medical-technology/articles/10.3389/fmedt.2026.1681323/pdf` | **OPENED, full text** — Lai et al., validation study run against ISO 81060-3:2022. |

### Not opened (fetch budget exhausted) — all COULD-NOT-READ
ISO 81060-2:2018 (and AMD1:2020); ANSI/AAMI SP10; IEEE 1708-2014 and 1708a-2019; AAMI/ESH/ISO Universal Standard 2018 (repository copies were located at UCL Discovery and ORA Oxford but not fetched); AHA 2022 cuffless scientific statement; ESH recommendations; FDA cuffless guidance (fda.gov/media/190675); ClearSight/Nexfin validation papers; IEC 60601-2-34 (paywalled, never reachable).

---

## 4. ISO 81060-3:2022 — primary source findings

### 4.1 Document identity and structure (from the opened preview)

Table of contents, verbatim headings:
- Foreword; Introduction
- 1 "Scope"
- 2 "Normative references"
- 3 "Terms and definitions"
- 4 "General requirements for the clinical investigation", containing 4.3.1 **"Reference invasive blood pressure monitoring equipment"**, 4.3.2 "Subject requirements", 4.3.3 "Blood pressure distribution", 4.3.4 "Arterial reference site", 4.4 "Lateral difference", 4.5 statistical considerations
- 5 "Methods for clinical investigation" (5.1 accuracy, 5.2 stability, 5.3 blood pressure changes)
- **"Annex A (informative) Rationale and guidance"** — informative
- Bibliography; Terminology index

**There is no normative annex.** Annex A is the only annex and it is marked informative.

Scope exclusion, verbatim: this document does not apply to
> "invasive blood pressure monitoring equipment as given in IEC 60601-2-34"

(Clause 1, Scope, list of exclusions.) So the invasive line appears in 81060-3 only as the *reference*, never as the device under test.

### 4.2 Clause 4.3.1 — the requirement (THE LOAD-BEARING FINDING)

Clause 4.3.1 "Reference invasive blood pressure monitoring equipment", items a)–f):

- **4.3.1 a)** — "shall": the device under test
  > "shall be clinically investigated by using reference invasive blood pressure monitoring equipment"
- **4.3.1 b)** — "shall": the reference equipment
  > "shall conform with the requirements of IEC 60601-2-34"
- **4.3.1 c)** — **"shall"** — the dynamic-response requirement. Verbatim subject phrase:
  > "The natural frequency and damping coefficient of the reference invasive blood pressure monitoring equipment"
  …shall be examined and optimised (verbatim objective phrase):
  > "to meet dynamic requirements for each subject"
  The clause cites bibliography **Reference [1]**. It does **not** contain the words "resonance", "flush", or "square wave".
- **4.3.1 d)** — "shall": the equipment
  > "shall be referenced to the level of the right atrium"
- **4.3.1 e)** — "shall": air bubbles and clots shall be removed from the system prior to taking the reference measurements.
- **4.3.1 f)** — permissive "may": equipment that does not output waveform or beat-to-beat data "may be modified to permit such data collection".
- **NOTE 1** — points to guidance and rationale in **Clause A.2** (informative Annex A).
- **NOTE 2** — air bubbles or blood clots "in the catheter/transducer system" can degrade accurate measurement.

Clause 4.2 a) **NOTE 2**, verbatim opening:
> "Since a clinical investigation as described in this document requires an invasive"
…reference; the note goes on to say invasive reference equipment is placed in every subject even though some of the intended patient population would not normally be invasively monitored, so trial subjects represent the target population only to a limited degree.

### 4.3 Honest limits on this reading
- The preview **stops inside clause 4.3.3**. Not read: the rest of 4.3.3; **4.3.4 "Arterial reference site"** (directly relevant and unreviewed); 4.4; 4.5 (including 4.5.3, which sets subject and repeat-measurement counts); **all of Clause 5** and its acceptance criteria; **all of Annex A including A.2**, which NOTE 1 names as the home of the guidance on this very requirement; and the Bibliography, so **Reference [1] cited by 4.3.1 c) is unidentified**.
- Because of the fetch tool's 125-character quote cap, the **single connected sentence of 4.3.1 c) was never reproduced in full**. The two quoted fragments above are verbatim and were returned on two independent passes; the verb phrase joining them ("shall be examined and optimised") is reported consistently across both passes but is not a guaranteed-contiguous quote. Treat the *existence, modality and per-subject scope* of the requirement as confirmed; treat the exact full sentence as not captured.
- **The numeric dynamic criteria are not in 4.3.1 c).** The clause says "to meet dynamic requirements" without stating a minimum natural frequency or a damping-coefficient range. Those thresholds live in IEC 60601-2-34 (via 4.3.1 b) and in Reference [1] — neither of which was read. So "what value must fn and ζ meet?" is **COULD-NOT-READ**.

---

## 5. The other documents — status

| Document | Covers | Invasive reference? | Dynamic-response requirement | Status |
|---|---|---|---|---|
| **ISO 81060-3:2022** | Continuous automated NIBP | Yes, mandatory | **Yes — 4.3.1 c), "shall", per subject, names fn + damping coefficient** | **READ (partial preview)** |
| ISO 81060-2:2018 | Intermittent automated NIBP | Auscultation is the reference | Unknown | **COULD-NOT-READ** |
| ANSI/AAMI SP10 | Older US standard | Unknown | Unknown | **COULD-NOT-READ** |
| AAMI/ESH/ISO Universal Standard 2018 | Consensus validation protocol | Unknown | Unknown | **COULD-NOT-READ** |
| AHA / ESH statements | Consensus | Unknown | Unknown | **COULD-NOT-READ** |
| IEEE 1708 / 1708a | Wearable cuffless | Unknown | Unknown | **COULD-NOT-READ** |
| IEC 60601-2-34 | Invasive BP monitoring equipment | It *is* the invasive equipment standard | Cross-referenced by 81060-3 4.3.1 b); text never reachable | **COULD-NOT-READ** |

### Unverified secondary claim about ISO 81060-2 — flagged, not accepted
Mikhailov & Fabián (2021), Abstract:
> "the resonant frequency and damping coefficient must also be characterized"

and Introduction:
> "The standard also requires determining the resonant frequency and"

…(continuing overleaf) "the damping coefficient of the reference measuring system [2]."

This paper's cited standard is **ISO 81060-2:2018**, not 81060-3. **I did not verify this against ISO 81060-2's own text** and I flag it as doubtful on internal grounds: ISO 81060-2 covers *intermittent* devices and uses *auscultation* as its reference, for which fn and damping are meaningless. The attribution is plausibly a mis-citation of 81060-3 or of IEC 60601-2-34. **Verdict: COULD-NOT-READ. Do not rely on this as evidence about 81060-2.**

Same paper, Introduction, on IEC 60601-2-34:2011 — it "accepts devices for invasive blood pressure monitoring with a frequency response ranging from 0 to 10 Hz", adding:
> "However, this range only applies to transducers without connected catheters."

Table 1 lists the standard's minimum transducer natural frequency as **>10 Hz**, valid only for the chamber without a catheter. This is a secondary report of IEC 60601-2-34 and is **unverified**.

---

## 6. Q3 — what validation studies actually do

### 6.1 Lai, Lee, Chang & Chu (2026) — the one study run against ISO 81060-3 that I opened
"Continuous BP monitoring of ICU Taiwanese patients: training-phase evaluation of oCare™ BP100 according to ISO 81060-3: 2022", *Frontiers in Medical Technology* 8:1681323, published 07 July 2026, DOI 10.3389/fmedt.2026.1681323. Device: oCare™ BP100, "A prototype cuffless device developed by Taiwan Biophotonic Corporation (tBPC)" (Section 2.1), PPG-based, evaluated in Type T (trending) mode.

Four required descriptors, from the paper's own text:
- **Unit of analysis:** paired readings per subject within analysis periods — "Each analysis period contains 29 repeated measurement values for each subject." (Section 1.1)
- **Endpoint:** two, both from Section 3 — "the corrected standard deviation scorr ≤ 6 mmHg" (stability); "the average 50th percentile of relative errors ≤25%" and "the average 85th percentile of relative errors ≤50%" (change).
- **Comparator:** "Invasive arterial catheter blood pressure measurements of the A-line were used as the reference invasive BPM equipment" (Section 1).
- **Estimand:** **not explicitly defined.** The nearest statement of objective is whether stability stays "within the ISO target thresholds" and whether changes are "consistent with reference measurements" (Section 1).

**Reference-line dynamic response: NOT REPORTED.** The Methods contain no mention of natural frequency, damping coefficient, resonance, flush test, square-wave test, fast-flush, or over/under-damping. What they do report: "unilateral radial artery catheterization in the forearm" (Abstract), "Philips patient monitors (Models: IntelliVue MX800 and X2)" (Abstract), and "4 h continuous invasive blood pressure (ABP) monitoring" (Section 2.2). **Catheter size, transducer model, and zeroing are all unreported.**

**How they discharge clause 4.3.1:** Table 7 lists the row "4.3.1 Reference invasive BP equipment" with the entry **"PASS; IntelliVue MX800 & X2"**. Conformity with the whole of 4.3.1 is asserted by *naming the bedside monitor*. No sub-clause is addressed and **4.3.1 c) is never cited**; no fn or damping evidence is offered. This is the sharpest finding of the whole check: the per-subject dynamic-response "shall" is marked PASS without any reported measurement.

The authors' own caveat (Results, Section 4):
> "the study was not carried out completely according to the ISO 81060-3:2022 protocol"

and the paper states that "full ISO validation remains to be completed."

Internal inconsistencies I found in the paper (reported for completeness, both independent of the damping question):
- Catheter site: Abstract says radial; the inclusion/exclusion list says "Arterial line placement in the brachial artery" (Section 2.3).
- Mean E50th for MAP: **10.08% in the text vs 10.80% in Table 6.**

### 6.2 Arithmetic checks on Lai et al.
- Stability, corrected SD (Table 4, periods A–F). SBP: 3.15, 3.83, 3.67, 3.99, 4.13, 4.29 mmHg. DBP: 1.84, 2.35, 2.25, 2.23, 2.85, 2.65 mmHg. MAP: 2.17, 2.54, 2.48, 2.69, 2.81, 3.12 mmHg (the PDF prints the fifth as "2,81" with a comma decimal separator). **Units: mmHg. These are numbers OF corrected within-subject standard deviation of the device-minus-reference difference.** Max over all 18 values = 4.29 mmHg < 6 mmHg threshold → the reported **pass is arithmetically consistent**.
- Change test (Table 6): mean E85th SBP 27.81%, DBP 24.84%, MAP 26.31%, all < 50% → pass consistent. Mean E50th 11.40%/9.93%/10.08–10.80%, all < 25% → pass consistent, **and the 10.08-vs-10.80 discrepancy does not change the verdict** (both far below 25%). **Units: percent; these are numbers OF percentile of relative error, not mmHg.**
- Sex balance: 11 of 40 female. **11/40 = 0.275 = 27.5%** — I confirm the paper's 27.5% and confirm it is **below the 30% requirement**. The paper acknowledges this.
- Subjects per period: 23, 21, 17, 12, 13, 9 against N = 40 enrolled. These **do not sum to 40** (23+21+17+12+13+9 = 95) and are not meant to — they are numbers OF subjects retained in each of six overlapping analysis periods, so a subject is counted in several. Change-test subjects: 22 (SBP), 15 (DBP), 16 (MAP). **Total paired-measurement count, bias, and limits of agreement are not reported anywhere in the paper.**

### 6.3 The medRxiv preprint on intra-arterial error — practice, not standards
"Intra-Arterial Blood Pressure Measurement: Sources of Error and Solutions" (medRxiv 10.1101/2020.08.29.20184275). **Title/author block was not returned by the fetch**; identification rests on the DOI and search title.

This paper is the clearest evidence on *practice*. Introduction:
> "In current clinical practice the Fast-flush test is not recorded, and no quantitative characterization is performed"

It mentions **no** validation standard — not ISO 81060-2, not ISO 81060-3, not SP10, not IEEE 1708, not AHA/ESH — and asserts **no** standard requirement. Its recommendation is its own, from the Discussion: the catheter system should be "characterized in situ during every intra-acterial blood pressure measurement session" [sic — the fetch rendered the phrase as "characterized in situ during every intra-arterial blood pressure measurement session"], with a matched compensating filter applied afterwards.

Four descriptors, from its own text:
- **Unit of analysis:** simulated pressure waveforms passed through virtual fluid-filled catheter systems; flush-test data from **121 patients** used only to set parameter ranges.
- **Endpoint:** pressure measurement error in mmHg (mean, systolic, diastolic), measured minus true, with time-shift correction.
- **Comparator:** measured vs true input waveform; uncompensated vs filter-compensated systems.
- **Estimand:** **not explicitly stated.**

Numbers checked, with what they are numbers OF:
- Patient flush-test **IQR: f_natural 10–40 Hz; damping coefficient Z 0–0.6; n = 121 patients.** These are numbers OF the dynamic parameters of real in-service arterial lines. The lower end of this IQR (10 Hz) sits at the IEC transducer-only floor, so a substantial share of real lines are at or below it.
- Required **f_natural ≥ 15 Hz** to keep mean error acceptable for the fast waveform. Acceptability thresholds used: mean error < 1.5 mmHg (fast waveform); combined mean + systolic error < 3 mmHg.
- Example errors: mean 5.81 mmHg uncorrected vs 3.75 mmHg phase-corrected; **systolic 18.4 mmHg**; diastolic −0.1 mmHg; time shift 12 ms. "Red-region" errors of 8 to over 100 mmHg.
- Simulation sweep f_natural 0–50 Hz, Z 0–1.5; simulated catheters f_natural 10–20 Hz, Z 0.08–0.32; literature example 12.5 Hz / 0.28.
- Clinical fast-flush quality check offered in Results: "no more than 2 oscillations" with intervals under 30 ms.
- Good-practice measures (Introduction): "removing air bubbles, reducing the length of tubing, reducing the number of three-way taps used in the tubing".

**Magnitude check:** an 18.4 mmHg systolic error from line dynamics alone is larger than the entire ±5 mmHg / 8 mmHg tolerance band that device validation standards allow. So the parameter 4.3.1 c) governs is capable of dominating a pass/fail verdict. This is my arithmetic observation, not a claim made by either paper.

### 6.4 Mikhailov & Fabián (2021) — bench study, not a validation study
*Lekar a technika – Clinician and Technology* 2021;51(1–4):5–14. Four descriptors:
- **Unit of analysis:** 'catheter–sensor' systems (three identical catheters; two further catheters, Fig. 8; one differently irrigated system, Fig. 9).
- **Endpoint:** natural frequency f_n and damping ratio ζ from step responses — "The above parameters were further determined experimentally." (Methods)
- **Comparator:** well-irrigated vs poorly irrigated systems.
- **Estimand:** not formally defined; aim is "to assess conditions that can affect the accuracy of the direct blood pressure measuring" (Introduction).

Numbers, with what they are numbers OF — these are numbers OF bench catheter-system dynamic parameters:
- Well-irrigated system **f_n = 38.8 Hz, ζ = 0.130**; poorly irrigated **f_n = 6.5 Hz, ζ = 0.281** (Abstract). **Arithmetic/consistency check: 6.5 Hz is below the >10 Hz transducer minimum the same paper attributes to IEC 60601-2-34 (Table 1), and far below the ≥15 Hz the medRxiv paper computes as necessary.** Resulting error described as "tens of mmHg", frequency deviation "tens of Hz".
- Maximum permissible error for reference pressure instruments: **±2 mmHg** (Abstract and Introduction), attributed to the standard. **Unverified against the standard's own text.**
- Evaluated catheters 5 Fr, nominal length 125 cm, inner diameter 1.19 mm, manufacturer f_n > 200 Hz. TruWave with 12-inch (≈30.48 cm) tube: manufacturer-listed f_n 40 Hz. **I confirm 12 in = 30.48 cm exactly.**
- **Internal inconsistency I found:** the paper gives catheter inner radius 0.595 mm in the Methods model and inner diameter 1.19 mm in the experimental section. **These are mutually consistent, not contradictory: radius 0.595 mm × 2 = 1.19 mm diameter.** The fetch flagged this as an unresolved inconsistency; my arithmetic resolves it — it is a radius-vs-diameter difference, not an error. The Methods' "minimum catheter length 200 mm" vs catheters tested from 20 cm is likewise consistent (200 mm = 20 cm).

### 6.5 Validation studies I could not open
Fetch budget was exhausted before I could open a second or third *clinical validation* study. Identified but **COULD-NOT-READ**: the ClearSight caesarean-section retrospective validation (PMC9369920 — PMC route barred by instruction in any case), jcm-11-04498 (Würzburg repository copy available), BMC Anesthesiol s12871-020-01091-x, Perioper Med s13741-024-00442-3, and Nature Hypertension Research s41371-025-01082-w (PPG device after cardiac surgery). **The single-study basis for Q3 is a real limitation of this check.**

---

## 7. Q4 — any verdict questioned or overturned over an under-damped reference?

**NOT-FOUND.** Two dedicated searches (#9 and #14), both in extended mode, returned nothing responsive: no letter, no comment, no erratum, no re-analysis, and no regulatory action in which a device's pass/fail verdict under ISO 81060-2, ISO 81060-3, SP10 or IEEE 1708 was challenged on the ground that the invasive reference line was under-damped or resonant.

Search #14 surfaced one **RETRACTED** paper — "Validation of a popular consumer-grade cuffless blood pressure device for continuous 24 h monitoring". I **did not open it and did not establish the grounds for retraction**; it appears to use 24 h ambulatory cuff reference rather than an invasive line, so it is probably not on point. **Grounds for that retraction: COULD-NOT-READ.**

This is a NOT-FOUND from two targeted searches, not an exhaustive negative. I did not search regulatory databases (FDA MAUDE, 510(k) review memoranda), standards-committee records, or non-English literature, and my fetch budget prevented opening the reviews that would most likely cite such an instance if one existed.

---

## 8. Phrases that do NOT appear where one might expect them

- **"resonance" / "resonant", "flush", "square wave" do not appear in ISO 81060-3 clause 4.3.1.** The clause's vocabulary is "natural frequency" and "damping coefficient" only. The square-wave/fast-flush test is the *clinical method* for estimating those two parameters, and it is textbook practice (derangedphysiology, rebelem, and the medRxiv paper all treat it so), but **81060-3 does not name it and does not mandate it.** A study could satisfy 4.3.1 c) by some other characterisation method.
- In Lai et al., none of "natural frequency", "damping", "resonance", "flush", "square wave" appears anywhere in the Methods.
- In the medRxiv preprint, **no validation standard is named at all.**

---

## 9. Conclusion per claim

1. **ISO 81060-3:2022 requires characterisation of the invasive reference's dynamic response — CONFIRMED.** Clause 4.3.1 c), naming "natural frequency and damping coefficient", with Reference [1] cited and rationale in informative A.2.
2. **That requirement is normative ("shall") — CONFIRMED.** 4.3.1 c) sits among items a)–e) all using "shall"; only f) is permissive ("may").
3. **It is per subject — CONFIRMED.** Verbatim: "to meet dynamic requirements for each subject". Not per study, not unspecified.
4. **The requirement mandates a flush/square-wave test — REFUTED.** Those words do not appear in 4.3.1. Only fn and damping coefficient are named; the method is not prescribed.
5. **ISO 81060-3 specifies numeric fn/damping thresholds in 4.3.1 c) — REFUTED for that clause** ("to meet dynamic requirements", no numbers). Where the numbers actually live (IEC 60601-2-34, Reference [1], Annex A.2) — **COULD-NOT-READ.**
6. **ISO 81060-2, SP10, the 2018 Universal Standard, AHA/ESH statements, IEEE 1708 — COULD-NOT-READ**, every one. No statement here about what they do or do not require. The one secondary claim about 81060-2 is flagged as doubtful and unverified.
7. **Published 81060-3 validation studies report having characterised the reference line — REFUTED on the one study opened.** Lai et al. 2026 report nothing, yet mark clause 4.3.1 "PASS" on the strength of naming the bedside monitor. Generalisation beyond this single study: **COULD-NOT-READ.**
8. **Routine clinical practice quantifies the line — REFUTED**, per the medRxiv preprint: "the Fast-flush test is not recorded, and no quantitative characterization is performed."
9. **A verdict has been questioned or overturned over an under-damped/resonant reference — NOT-FOUND** (two extended searches, nothing responsive; not an exhaustive negative).

### The three-way separation the task asked for
- **What a standard REQUIRES:** ISO 81060-3:2022 4.3.1 c) — normative, per subject, fn + damping coefficient. This is real and it is the one finding that can bear on a premise's truth.
- **What the clinical literature RECOMMENDS:** fast-flush/square-wave testing, bubble removal, short tubing, few stopcocks, in-situ characterisation every session, compensating filters. Good practice, widely published, not a standard's text.
- **What validation studies DO:** on the single ISO 81060-3 study I opened, nothing — the requirement is marked PASS without reported evidence. This is an informative absence, and it is a gap between the standard and practice, **not** evidence that the standard is silent.
