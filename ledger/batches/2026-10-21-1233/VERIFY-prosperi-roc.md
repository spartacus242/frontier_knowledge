# VERIFY — Prosperi et al., "Empirical fragility and ROC curves for masonry buildings subjected to settlements"

Checker note, fresh context. Batch 2026-10-21-1233.

## Citation as the source itself serves it

Front matter of the PDF served at the TU Delft repository (published version, Elsevier front matter intact):

> Alfonso Prosperi (a), Paul A. Korswagen (a), Mandy Korff (a,b), Roel Schipper (a), Jan G. Rots (a)
> "Empirical fragility and ROC curves for masonry buildings subjected to settlements"
> *Journal of Building Engineering* 68 (2023) 106094
> DOI 10.1016/j.jobe.2023.106094
> (a) Delft University of Technology; (b) Deltares

Independently confirmed against Crossref (`api.crossref.org/works/10.1016/j.jobe.2023.106094`, read through WebFetch): same five authors in the same order, same title, container-title *Journal of Building Engineering*, volume 68, article-number 106094, page 106094, published June 2023, publisher Elsevier BV, type journal-article, ISSN 2352-7102. Crossref lists no issue number (special numbering "C").

**Source type:** a PRIMARY STUDY — an empirical analysis of an assembled field-survey database. Not a review, protocol, guideline, editorial or column. It does import one comparison from elsewhere (Peduto et al. [9]) and is explicit that it is doing so.

## Read level

**FULL TEXT.** Read via WebFetch on the repository PDF
`https://repository.tudelft.nl/file/File_d05fb48c-e7b7-4fd1-b000-3963834114f2?preview=1`
in three passes: (1) front matter, abstract, overall structure; (2) the ROC/AUC apparatus, Fig. 8, Table 1, Table 5; (3) Section 5.3 limiting-value passage, abstract figures, Section 4.1 provenance, damage-class counts, limitations.

**Routes that failed: none.** No search or fetch was refused. 3 of 5 fetches and 0 of 6 searches used. The repository PDF resolved first try, so no publisher fallback (sciencedirect.com) was needed and doi.org was never touched.

Quotation note: the summariser's ~125-character cap meant several long sentences came back as ordered consecutive fragments. Where a quotation below is assembled from more than one returned fragment it is **labelled a reconstruction with the fragment count**. Nothing is completed by inference.

---

## (a) Front matter

**What the source says.** Exactly as reproduced above, and exactly as Crossref independently serves it. Authors in order: Prosperi, Korswagen, Korff, Schipper, Rots. Volume 68, article number 106094 (which also serves as the page number in the Elsevier article-number scheme — there is no page range), year 2023 (June), DOI 10.1016/j.jobe.2023.106094.

Taken from the front matter of the article itself, not from any short form. **No defect.** Every element of the handed citation matches.

---

## (b) THE DECIDING QUESTION — numeric discrimination statistics

**Answer: NO. The paper prints no absolute numeric discrimination statistic anywhere — no AUC value, no TPR or FPR value, no sensitivity, no specificity, no positive predictive value. It draws the ROC curves and shades the AUC without printing the numbers.**

The apparatus is all there and fully defined. Section 2.4:

> "ROC curves are plotted with the true positive rate (TPR) versus the false positive rate (FPR)."

with TPR = TP/O(+) as Eq. (2) and FPR = FP/O(−) as Eq. (3), and (reconstruction from 2 consecutive fragments):

> "the Area Under the ROC Curve (AUC) represents a measure of the overall diagnostic performance of a considered model or index. AUC scores takes values from 0 (inaccurate test) to 1 (perfect classifier)."

> "A value of 0.5 for AUC is associated with the diagonal line and is equivalent to a random guess."

Those are *definitional* numbers — 0, 1, 0.5 — the scale of the statistic, not a measurement of these buildings.

**Every occurrence of "AUC" in the paper, and what each carries:**

| # | Location | String | Numeric? |
|---|---|---|---|
| 1 | §2.4 | "the Area Under the ROC Curve (AUC) represents a measure of the overall diagnostic performance of" | definition only |
| 2 | §2.4 | "A value of 0.5 for AUC is associated with the diagonal line and is equivalent to a random guess." | scale reference only |
| 3 | §4.3 | "the AUC scores of the ROC curves for the selected SRI have been compared;" | no number |
| 4 | Fig. 8 caption | "The shaded area represents the Area Under the Curve (AUC)." | no number — AUC shown as shading |
| 5 | §5.3 | "present higher AUC scores than the δρ." | ordinal, with the percentages below |
| 6 | §5.3 | "The lowest AUC scores are the ones retrieved for the differential settlement δρ both for building on shallow and deep foundations (Fig. 8a and b)." *(reconstruction from 2 consecutive fragments)* | ordinal only |

§4.3 ranks rather than quantifies: "the highest values for AUC scores are the ones retrieved, in order…".

**The only AUC-adjacent numbers in the paper are RELATIVE percentages against one reference predictor**, in §5.3 (reconstruction from 3 consecutive fragments, the junction verified by the repeated "the"):

> "the differential settlement δρ was superseded as an indicator of damage by the rotation θ (by 14%), the relative rotation β (14%) and the deflection ratio Δ/L (7%)."

> "foundations, the θ (by 6%), the β (3%) and the Δ/L (1%) present higher AUC scores than the δρ."

So the full set of such numbers is: **14%, 14%, 7% (shallow foundations) and 6%, 3%, 1% (deep foundations)** — six percentages, all in §5.3, all expressing an increase *over the differential settlement δρ*, none an AUC level. **The paper does not state whether these are absolute percentage-point differences in AUC or relative differences.** That ambiguity is in the source, not in my reading of it; a checker cannot resolve it and must not resolve it by arithmetic, because without one absolute AUC the two readings are not distinguishable.

**The "sensitivity-pair" is graphical only.** Fig. 8 caption (reconstruction from 4 consecutive fragments):

> "ROC curves for the selected SRI parameters (a), (c), (e) and (g) for shallow and b), (d), (f) and (h) deep foundations. Each SRI parameter varies between 0 and the maximum recorded value. The black dot shows the best sensitivity-pair. The shaded area represents the Area Under the Curve (AUC)."

The optimum is a *dot on a plot*. Its coordinates — which are precisely a (FPR, TPR) pair, i.e. the specificity/sensitivity of the best threshold — are never printed. Fig. 1 is the explanatory schematic, not data (reconstruction from 2 consecutive fragments):

> "Explanatory illustration of ROC curve: (a) distribution of undamaged and damaged cases as a function of the settlement-related parameter; (b) conceptual ROC curve, the optimized threshold value is identified by the sensitivity pair at the minimum distance (dmin) from the perfect classifier (0,1)."

**Table 1 is an EMPTY TEMPLATE, not a filled confusion matrix.** It carries only the symbolic cells TN, FP, FN, TP with the margins O(−), O(+), P(−), P(+) and total N. No counts of buildings. The text introduces it as exactly that:

> "The observed and the predicted binary results can be summarized in a two-by-two contingency table, as shown in Table 1."

No filled confusion matrix appears anywhere else in the paper either. The building counts that do appear (386, 122, 264, 262, 23, 11) describe the dataset and the damage classes — none of them is a TN/FP/FN/TP cell.

**What IS printed numerically, and must not be mistaken for discrimination performance.** Table 5 — headed "Damage" / "Opt. Threshold for Shallow Foundations" / "Opt. Threshold for Deep Foundations" with a "Damage Probabilities [%]" header — gives the ROC-optimized thresholds and, at each, a damage probability read off the fragility curves:

- Optimized thresholds, shallow: δρ 88.5 mm, θ 8.76 mm/m, β 4.77 mm/m, Δ/L 1.23 mm/m
- Optimized thresholds, deep: Δρ 48.5 mm, θ 5.33 mm/m, β 3.67 mm/m, Δ/L 0.98 mm/m
- Damage probabilities [%], row "Light": 45.4, 25.4, 21.4, 23.8 (shallow); 25.4, 20.9, 23.2, 23.8 (deep)
- Damage probabilities [%], row "Moderate to Severe": 12.5, 7.5, 6.6, 7.0 (shallow); 2.3, 1.9, 2.3, 2.3 (deep)

These are **fragility-curve probabilities evaluated at the ROC-derived threshold**, i.e. P(damage | predictor = threshold). They are not confusion-matrix quantities, not sensitivity, not specificity and not PPV. Confirmed by the authors' own framing (reconstruction from 2 consecutive fragments):

> "The values of the optimized threshold obtained with the ROC technique were used to retrieve the probability associated with the two damage groups herein adopted (Table 2)."

The abstract likewise reports a probability, not a discrimination statistic (reconstruction from 2 consecutive fragments):

> "At a relative rotation of 1/500 masonry buildings on shallow foundations were observed to reach or exceed light damage with a probability of 13%, and functional and structural damage with 5%."

**Bottom line for the ledger.** The ROC machinery is used to *locate thresholds*, and the thresholds are then *handed to the fragility curves*. The discrimination performance itself — the thing an AUC number would report — is presented only as curves, shading, an ordinal ranking, and six relative percentages. Any claim attributing a specific AUC, sensitivity, specificity, TPR, FPR or PPV figure to this paper is unsupported by the text as served.

---

## (c) Predictors evaluated, and the fate of the classical limiting values

**Predictors.** Four settlement-related indicators (SRI), evaluated for shallow and for deep foundations separately:

1. differential settlement **δρ**
2. rotation **θ**
3. relative rotation / angular distortion **β**
4. deflection ratio **Δ/L**

So both candidates named in the claim are present: angular distortion (as β, explicitly identified with relative rotation) and the deflection ratio.

**The classical limiting values are NOT evaluated as classifiers at their own authors' thresholds.** This is the sharpest finding in the note after (b).

- **Skempton–MacDonald** is cited *only for the definition* of relative rotation — reference [46] in §3.2, attached to the phrase "angular distortion [46]". Its limiting value is never tested, never named as a number, never run through the ROC.
- **Burland–Wroth** is cited *only for the SRI definitions* — reference [26] (1975), "according to the original definitions provided by Ref. [26]". Its limiting value is likewise never tested.
- **Boscardin–Cording's** value is the one value from the literature the paper engages with numerically, and it engages with it **by converting it into a fragility probability**, not by scoring it as a classifier.

Verbatim, the 3.3‰ passage (reconstruction from 5 consecutive fragments, §5.3 final paragraph):

> "For instance, for buildings settling under their own weight, Boscardin and Cording [42] proposed a value of the angular distortion equal to 3.3‰ (1/300) to prevent the occurrence of moderate to severe damage (Table 2), which translates to 5%, for shallow, or 2%, for deep foundations, on the corresponding fragility curve herein proposed."

followed by:

> "Thus, optimized thresholds are in line with limiting values found in literature."

The direction of travel is explicit and is the opposite of classification. The authors say so generally:

> "The proposed fragility curves can be used to retrieve the probabilities of damage of the limiting values adopted in the literature."

and

> "the probability of having or exceeding damage is retrieved with the fragility curves proposed in this study"

Their own thresholds come from the data, not from the literature:

> "the sensitivity-pair with the highest distance from the diagonal line represents the optimized estimate of the threshold value"

**Regime note.** 3.3‰ enters this paper as an *input to a fragility curve*, and what comes out is a probability (5% shallow, 2% deep) of moderate-to-severe damage. It never enters as a *decision threshold whose TPR and FPR on these 386 buildings are computed*. A claim that this paper validates (or refutes) Boscardin–Cording as a classifier, or reports its hit rate and false-alarm rate, is outside the regime the paper establishes anything in. The paper's own comparison claim is weaker and differently shaped: that its data-optimized thresholds land "in line with" the literature value.

Also worth recording: the authors' §5.3 verdict on their *own* optimized thresholds is a two-sided one (reconstruction from 4 consecutive fragments):

> "The results summarized in Table 5 shows how the optimized limiting values do not prevent the occurrence of light damage, as the probabilities range from 21% up to 45%. However, they are associated with low probabilities of moderate to severe damage, from 7% up to 13% for shallow foundations and about 2% in the case of deep foundations."

and the recommendation is scoped accordingly (reconstruction from 2 consecutive fragments):

> "Therefore, the optimized threshold values herein proposed may be used to prevent the occurrence of serviceability damage [71] (i.e. cracks wider 5 mm in Table 2)."

---

## (d) The instrument

**Manual bed-joint levelling, from an in-situ campaign in 2003.** No satellite or InSAR data enters the authors' own dataset.

> "jointly with the available bed-joint measurements from an in-situ campaign carried out during the year 2003, a decade earlier."

The year is stated (2003) and so is the temporal offset: the bed-joint survey precedes the damage survey by "a decade". Settlement measurement and damage observation are therefore **not contemporaneous**, by the paper's own account.

The authors characterise the instrument's resolution as a limitation (reconstruction from 3 consecutive fragments):

> "the displacements of only a few points are gathered at fixed, limited intervals with manual bed-joint levelling readings, thus suggesting that damage appears at higher values of distortion"

**Satellite / InSAR: does it enter the paper at all? Yes, but only as discussion and as an imported comparison — never as data for these 386 buildings.**

- §2.1 discusses SAR as an *alternative* technique for obtaining settlement data.
- §5.2 notes that the comparison study of Peduto et al. [9] used **satellite-derived** values over a 5-year period.

That is an attribution to another paper, not a measurement in this one. A claim that this paper's results rest on, or validate, InSAR-derived distortions would be a misattribution of someone else's instrument. A claim that satellite data is entirely absent from the paper would also be wrong — it is present as cited context. The accurate statement is: discussed and cited, not used.

---

## (e) The sample

> "the information from 386 field surveys over different Dutch provinces was collected into a database in MATLAB [69]."

**Count and foundations.** 386 surveyed masonry buildings:

> "including 122 buildings on shallow foundations and 264 on deep (piled) foundations."

122 + 264 = 386, so the foundation split exhausts the sample.

**Provenance.**

> "the damage and foundation information of 262 cases was retrieved from a cluster of masonry buildings in a neighbourhood of Schiedam"

262 of 386 come from one Schiedam neighbourhood. The remaining ~124 are from "different Dutch provinces"; **the paper does not describe how those non-Schiedam cases were surveyed.** The figure 124 is my subtraction, not the authors'.

**Construction types** (§5.1): 269 UBHM, 44 UBHS, 58 UH, and 15 that could not be sorted (269 + 44 + 58 + 15 = 386). Age: 334 built before 1950.

**Damage classes and pooling.** Three classes: "No Damage", "Light Damage", "Moderate to Severe Damage", mapped from the finer damage scale in Table 2. The positive class is not one fixed set — the paper runs **two separate binarisations**, one per damage level, phrased as *reach or exceed*: "reach or exceed light damage", and reach or exceed moderate to severe damage. Table 5 reflects this with its two rows, "Light" and "Moderate to Severe". So there are two positive classes, each the union of its own class and everything above it.

**Damage prevalence: NOT STATED.** The paper gives no overall proportion or percentage of damaged buildings in the sample, and no per-class counts for "No Damage" or "Light Damage", by foundation type or overall. The only class count anywhere is the moderate-to-severe one, given as a limitation rather than as a descriptive statistic:

> "the number of buildings classified as 'Moderate to Severe Damage' is small (23 and 11 cases for shallow and piled foundations respectively)"

23 + 11 = 34 of 386 ≈ 8.8% — **my arithmetic, explicitly not the paper's.** Note what the absent prevalence costs: PPV is prevalence-dependent, so even if a sensitivity/specificity pair were recoverable from Fig. 8 by eye, no positive predictive value could be derived from this paper. That is a second, independent reason the answer to (b) is no.

**Stated limitations of the sample** (relevant to any scope claim; reconstruction from 2 consecutive fragments for the first):

> "The buildings' dataset herein proposed, as any sample of structures collected to address post-disaster analyses, may not represent a random sample"

> "all the visual damage to the surveyed buildings was assumed to be caused by the settlements, while other possible contributing causes were disregarded based on the lack of major influences known to the authors." *(reconstruction from 2 consecutive fragments)*

> "The relatively small sample size may therefore affect the reliability of the analyses for that damage level."

> "it may be hard to generalize the conclusions, due to the relatively small sample size."

---

## (f) Verbatim check — "The relative rotation or angular distortion"

**FOUND, verbatim, as a contiguous string.** §3.2 (Phase I), in the list of the four SRI parameters:

> "The relative rotation or angular distortion [46] β, refers to the slope of the line joining two consecutive points…"

**Grammar on both sides of the cut.** The string begins a sentence, so there is no left-hand context to change its sense. On the right, the string is immediately followed by the reference marker [46], then the symbol β, then "refers to the slope of the line joining two consecutive points". The cut falls inside a subject noun phrase whose sentence is a *definition*. Cutting there does not reverse, hedge or qualify anything — but it does strip what the full sentence is doing: this is the paper **defining** β and **attributing the term** to Skempton–MacDonald [46], not asserting a result about it.

So the string is clean as evidence that the paper treats relative rotation and angular distortion as the same quantity and evaluates it as a predictor. It is **not** evidence of any threshold, any numeric performance, or any endorsement of a classical limiting value — the citation [46] sitting immediately after the quoted words is a definitional credit, and a quotation that stops at "distortion" hides that marker.

---

## What the source measures — unit of analysis, endpoint, comparator, estimand

In the paper's own terms:

- **Unit of analysis:** the individual surveyed masonry building (386 of them), each with a foundation type, a construction typology, a set of bed-joint-derived settlement indicators, and a visually assigned damage class.
- **Predictor / exposure:** one of four settlement-related indicators (SRI) per analysis — δρ, θ, β, Δ/L — each "varies between 0 and the maximum recorded value".
- **Endpoint:** reaching or exceeding a damage level, binarised two ways (light; moderate to severe), from the Table 2 damage scale.
- **Comparator:** for the ROC ranking, the four SRI are compared against *each other*, with differential settlement δρ as the de facto reference against which the six percentages are expressed. Buildings on shallow and on deep foundations are analysed as separate strata throughout, never pooled.
- **Estimand:** (i) a threshold value per SRI per foundation type, chosen as the sensitivity-pair at maximum distance from the diagonal; (ii) a fragility curve giving P(reach or exceed damage level | SRI value). Discrimination is used *instrumentally to select (i)*; it is not itself reported as a number.

**Regime the paper establishes its results in:** Dutch masonry buildings, predominantly pre-1950 (334 of 386), largely one Schiedam neighbourhood (262 of 386), shallow or piled foundations analysed separately, settlement characterised by manual bed-joint levelling at a few points at fixed limited intervals from a 2003 campaign, damage assigned by visual survey a decade later and assumed in full to be settlement-caused, sample not claimed to be random. The paper is **silent** — not supportive — outside that: on continuously monitored or InSAR-derived distortions, on non-masonry construction, on non-Dutch typologies, on buildings loaded by anything other than their own weight and the settlement in question, and on the moderate-to-severe stratum with any precision (34 cases total, flagged by the authors as too small to be reliable).

---

## Defects

1. **Table 1 is an empty symbolic template, not a filled confusion matrix.** It carries TN/FP/FN/TP and the margins O(−)/O(+)/P(−)/P(+)/N with no counts. Citing "Table 1" of this paper as a confusion matrix of the 386 buildings is false; no filled confusion matrix exists anywhere in the paper.
2. **No absolute AUC value is printed anywhere** — not in text, not in a table, not in a figure caption. AUC appears as *shading* in Fig. 8 and as an ordinal ranking in §4.3/§5.3. Attributing a specific AUC figure to this paper is unsupported.
3. **No sensitivity, specificity, TPR, FPR or PPV value is printed anywhere.** TPR and FPR are defined by Eq. (2) and (3) and then only plotted. The "best sensitivity-pair" is a black dot whose coordinates are never given.
4. **The six §5.3 percentages (14%, 14%, 7%; 6%, 3%, 1%) are relative increases over δρ, not AUC levels** — and the paper never states whether they are absolute percentage-point or relative differences. Carrying any of them as "the AUC" is a regime error; resolving the absolute/relative ambiguity by arithmetic is impossible without one absolute AUC, so it must be reported as ambiguous in the source.
5. **Table 5's percentages are fragility-curve damage probabilities at the ROC-optimized threshold, not discrimination statistics.** They are the most mis-citable numbers in the paper: 45.4/25.4/21.4/23.8 and 12.5/7.5/6.6/7.0 etc. are P(damage | threshold), confirmed by the authors' "were used to retrieve the probability associated with the two damage groups".
6. **Boscardin–Cording's 3.3‰ (1/300) is converted into a fragility probability, not evaluated as a classifier.** It "translates to 5%, for shallow, or 2%, for deep foundations, on the corresponding fragility curve herein proposed". No TPR/FPR is computed at 3.3‰. The paper's own comparison claim is only that its optimized thresholds are "in line with" the literature value.
7. **Skempton–MacDonald [46] and Burland–Wroth [26] are cited for definitions only** — relative rotation, and the SRI definitions respectively. Their limiting values are not evaluated at all, and are not even stated as numbers. A claim that this paper tests the classical limits as classifiers at their own authors' thresholds is false for all three literature sources.
8. **No damage prevalence is stated**, and no counts are given for "No Damage" or "Light Damage". Only the moderate-to-severe counts appear (23 shallow, 11 piled), and those are offered as a limitation. Consequence: PPV is not derivable from this paper even in principle, since PPV depends on prevalence.
9. **Temporal mismatch between instrument and endpoint, stated by the authors:** the bed-joint campaign is from 2003, "a decade earlier" than the damage information. Settlement and damage are not contemporaneous observations.
10. **Unreconciled internal counts.** 262 Schiedam cases sits awkwardly beside 264 piled-foundation buildings — adjacent, similar, and not the same quantity; the paper does not reconcile them, and the survey provenance of the ~124 non-Schiedam cases is never described. Anyone reading 262 and 264 as the same group would be inventing a link the paper does not make.
11. **Instrument resolution is a stated bias, with a stated direction.** The authors note that displacements are gathered "of only a few points… at fixed, limited intervals with manual bed-joint levelling readings, thus suggesting that damage appears at higher values of distortion" — i.e. they flag a likely upward bias in the thresholds, which any use of Table 5 should carry.
12. **Causal attribution is an assumption, not a finding:** "all the visual damage… was assumed to be caused by the settlements, while other possible contributing causes were disregarded".
13. **Sample is not claimed to be random** — "may not represent a random sample" — and the authors twice say the small sample size limits generalisation. Treating the Table 5 probabilities as population values for Dutch masonry generally overreaches what the authors claim.

### On the claim as handed, item (b)

If the ledger claim is that this paper **reports** numeric discrimination statistics, it does not hold: the paper draws ROC curves and shades AUC without printing a single absolute discrimination number, and its Table 1 is an empty template. If the claim is that the paper **performs** a ROC analysis and derives thresholds from it, that holds fully. The distinction between *performing* the analysis and *reporting its statistics* is the whole of the finding here, and the six relative percentages in §5.3 are the only numeric trace the discrimination analysis leaves in the text.
