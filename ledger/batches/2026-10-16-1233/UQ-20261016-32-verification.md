# UQ-20261016-32 — independent verification notes
Date: 2026-10-16. Budget used: 11 searches / 6 fetches (fetch budget exhausted).

## Verdict: PARTLY_CONFIRMED
Numbers survive. Characterisations of all three sources need correction.

---

## (a) Verbeke 2022 — Cancers 2022;14(10):2471 (PMC9139767)

**What it varies: measurement/examination APPROACH, not specimen state.**

Verbatim (via PMC full text):
- "Compared to the most simple approach (macroscopic measurement in one plane), the
  comprehensive approach (macroscopic measurement in two planes with microscopic
  corroboration) resulted in a larger tumour size in 263 (83%) cases."
- "T-stage assignment differed in 142 (45%) cases between the simple and comprehensive
  approach."
- Abstract: "mean absolute size difference: 10 mm; mean relative size change: 36%"
- Intermediate contrasts: 2D-macro vs 2D-micro changed T category in 57 (18%);
  2D-macro vs 3D-macro in 115 (37%).
- By site: head 7 mm (28%); body/tail 16 mm (58%) (Table 3).
- Cohort: "A total of 315 eligible cases were included in the study cohort";
  "231 tumours were located in the head of the pancreas and 84 in the body/tail."
  Resections: 80 classical + 147 PPPD, 84 distal, 4 total pancreatectomies.
- Methods, macroscopic: "the largest tumour size was routinely measured in the plane of
  specimen slicing"; second perpendicular dimension CALCULATED from slice count x
  craniocaudal length. Microscopic: "the invasive front of the tumour was annotated under
  the microscope in the tissue section(s)".
- **Timing is held constant, not varied:** "As specimen grossing is usually undertaken
  following fixation" — the paper argues formalin shrinkage therefore does not drive its
  reproducibility findings. Axial slicing vs bivalving appears only as a LIMITATION, not
  as a compared arm.

CONFIRMED: 142/315; 45% (my arithmetic: 142/315 = 45.1%); mean 10 mm; mean relative 36%.
CORRECTED: the contrast is between two size-derivation protocols applied to the SAME
(already fixed) specimens — one plane vs two planes + microscopic corroboration. It is
NOT a contrast between physical states across excision, fixation and processing. Also it
is a single organ, and the paper reports no fraction-near-threshold statistic.

## (b) Tran 2015 — J Cancer 2015;6(8):759-766, doi:10.7150/jca.12094

Tran T, Sundaram CP, Bahler CD, Eble JN, Grignon DJ, Monn MF, Simper NB, Cheng L.
"Correcting the Shrinkage Effects of Formalin Fixation and Tissue Processing for Renal
Tumors: toward Standardization of Pathological Reporting of Tumor Size."

- Organ: **renal / kidney** (23 clear cell RCC, 6 papillary, 1 chromophobe, 1 t(6;11),
  3 oncocytomas). NOT pancreas, NOT breast.
- n = **34** nephrectomy cases, one surgeon, prospective; only tumours grossly <=5.5 cm.
- Four measurement points, all four present:
  1. **Radiologic** — "preoperative computerized tomography (CT) and magnetic resonance
     imaging (MRI) images were retrospectively reviewed", ~2.4 months pre-op, 3D.
  2. **Fresh gross** (reference standard) — "At the end of surgery, the fresh specimen was
     sectioned and measurements of the tumor's three dimensions were taken".
  3. **Post-fixation gross** — "After fixation, another set of three dimensional
     measurements were taken."
  4. **Microscopic** — "A whole mount glass slide or standard glass slide section was made"
     (2D on slide).
- Results (diameter): radiologic 12.1% larger than fresh (~0.4 cm); fresh->fixed -4.6%
  (~0.1 cm); fixed->microscopic -7.1% (~0.2 cm); fresh->microscopic -11.4% (~0.3 cm);
  all P<0.01. Mean diameters 3.0 / 2.7 / 2.5 / 2.3 cm. Conversion factors 1.05, 1.08, 1.13.
- Threshold output: "Two of our cases would receive a different pT1 classification
  depending on which measurement was used for staging" (pT1b -> pT1a). My arithmetic:
  2/34 = 5.9%; no CI given by the authors.

CORRECTION to the claim: the first state is **preoperative radiologic imaging**, not an
in-situ/intraoperative caliper measurement. So "in situ -> fresh gross -> post-fixation
gross -> histologic" is better read as "radiologic -> fresh gross -> post-fixation gross
-> microscopic". The chain IS executed, but in one organ, n=34, single surgeon, size-capped
cohort.

## (c) Tsuruda 2020 — Acta Oncologica 2020;59(3):260-267

Tsuruda KM, Hofvind S, Akslen LA, Hoff SR, Veierod MB. "Terminal digit preference: a
source of measurement error in breast cancer diameter reporting."
doi:10.1080/0284186X.2019.1669817

- Citation in the claim is CORRECT (journal/year/volume/issue/pages).
- **"remains to be examined" does NOT appear in the paper** (asked explicitly; answer: No).
- Actual sentence, verbatim (reassembled from two consecutive sub-120-char fragments):
  "Further studies are needed to investigate the potential extent of under-staging and
  under-treatment" + "resulting from this measurement error."
  => "Further studies are needed to investigate the potential extent of under-staging and
  under-treatment resulting from this measurement error."
- **What "this measurement error" refers to:** terminal digit preference (rounding to 0/5),
  plus mammographic-vs-histopathologic disagreement. "Terminal digit preference was evident
  among breast cancer tumor diameters." NOT specimen handling, NOT fixation.
- Data: Cancer Registry of Norway, invasive breast cancers 2012-2016. n = 7,792 mammographic,
  13,541 histopathologic, 6,865 with both. All mammographic and 97.2% of histopathologic
  diameters in whole mm; digit 0 or 5 in 38.7% / 34.8%. ICC = 0.52 (moderate). Mammographic
  mean 1.26 mm larger, difference growing with size.

So: a registry-limb gap IS posed in print, but about digit preference, not about the
specimen-handling chain, and not in the words the claim attributes to it.

## (d) Fraction of staged patients within measurement-shift width of a T threshold

**Not found** as a published result for any organ in the general form the candidate question
asks (distribution width -> fraction of patients inside that width of a threshold).

Nearest published precedents actually read:
- Tran 2015: 2/34 renal cases would change pT1a/pT1b (single organ, tiny n, one threshold).
- Verbeke 2022: 142/315 (45%) pancreatic cases change T stage between two grossing
  protocols (not a shift distribution; no threshold-proximity fraction).
- Tsuruda 2020: quantifies the error and the digit clustering, but explicitly leaves the
  staging/treatment consequence to "further studies".

Candidates I COULD NOT READ (fetch budget exhausted; distinguish from "not found"):
- PMID 29580861 — "Breslow thickness measurements of melanomas around AJCC staging cut-off
  points" (imprecision + terminal digit bias). PubMed page returned an empty document body
  on fetch; lay summary exists at atlasofscience.org. Plausibly the closest existing
  threshold-proximity analysis, for melanoma. No claim made about its contents.
- "Effect of formalin fixation and tumour size in small-sized non-small-cell lung cancer"
  (Ewha/Yonsei repositories) — not read.

---

## Query list (11 searches)
1. Verbeke "Tumour Size and T-Stage in Pancreatic Cancer Resection Specimens Depend on the
   Pathology Examination Approach" Cancers 2022 -> found PMC9139767.
2. Tsuruda Acta Oncologica 2020 breast tumour size measurement error under-staging registry
   -> identified paper as "Terminal digit preference...", medicaljournalssweden + repos.
3. Tran 2015 tumor size measurement in situ fresh gross after fixation histologic shrinkage
   resection specimen -> surfaced jcancer.org/v06p0759 and IU ScholarWorks.
4. Tran "Journal of Cancer" 2015 6(8):759-766 tumor size measurement -> mixed, no direct hit.
5. Tran 2015 prostatectomy OR lung OR breast specimen "in situ" "fresh" "after fixation"
   tumor dimension four measurements comparison -> no direct hit; breast/renal distractors.
6. "proportion of patients" tumour size "close to" T stage threshold measurement variability
   reclassification staging cutoff -> surfaced melanoma AJCC cut-off paper lead.
7. melanoma staging varying precision terminal digit preference Breslow thickness 1 mm
   threshold proportion reclassified -> PMID 29580861 + atlasofscience summary.
8. breast cancer tumour size rounding 20 mm T1 T2 threshold proportion of patients
   misclassified digit preference -> only Tsuruda repos; no threshold-fraction paper.
9. "Breslow thickness measurements of melanomas around AJCC staging cut-off points"
   imprecision terminal digit bias abstract results (extended) -> links only, no snippets.
10. formalin fixation shrinkage tumour size proportion of cases stage migration near cutoff
    lung adenocarcinoma T1a T1b reclassification -> lung fixation papers, unread.
11. fraction of patients within measurement uncertainty of staging size threshold
    distribution specimen handling multi-organ study -> no matching title.

No search was refused by a safety classifier.

## Fetch list (6 fetches, budget exhausted)
1. https://www.ncbi.nlm.nih.gov/pmc/articles/PMC9139767/ -> 302 redirect, not followed.
2. https://medicaljournalssweden.se/actaoncologica/article/view/24067 -> Tsuruda citation,
   abstract substance, first pass at the under-staging sentence.
3. https://pmc.ncbi.nlm.nih.gov/articles/PMC9139767/ -> Verbeke full text; comparison,
   n=315, 142 (45%), 10 mm / 36%, methods, fixation-timing statement.
4. https://jcancer.org/v06p0759.htm -> Tran 2015 full text; renal, n=34, four time points,
   shrinkage percentages, "Two of our cases...".
5. https://pubmed.ncbi.nlm.nih.gov/29580861/ -> FAILED: empty page body returned; no
   content extracted. Melanoma paper therefore UNREAD, not absent.
6. https://medicaljournalssweden.se/actaoncologica/article/view/24067 (re-fetch, fragment
   prompt) -> exact conclusion sentence; "remains to be examined" = No; error = terminal
   digit preference.
