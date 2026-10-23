# VERIFY - Sharma & Kumar 2025 (MBE, msaf296) simulates a NEW metric (NBS) against a model species tree; it does not calibrate published >=95% support labels

Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22 (date field as prescribed by the task template; this check actually ran 2026-10-23).

## CLAIM

Entry UQ-20261023-05 carries nearest prior (C) as: a NEW metric scored against simulated or assumed truth inside single datasets, on a different numerator class, denominator and unit from the candidate's. Specifically the entry claims Sharma & Kumar 2025 prints 8%, 10% and 21% incorrect-clade shares under low, medium and high incomplete lineage sorting, and a nonparametric-bootstrap false-positive rate below 1% at a 95% cutoff.

What turns on it (stated, not defended): the sub-1%-at-95% figure is the closest published thing to a calibration statement about the >=95% label. If it is a calibration of published support labels, the candidate is closer to answered. If the 8/10/21% shares are on the candidate's unit, the numerator-class distinction fails.

Verdict in one line: both numbers are printed and are verbatim correct, but the entry misnames the estimator behind the sub-1% figure, and neither number is a calibration of published labels. The numerator-class, denominator and unit distinction HOLDS.

## READ LEVEL

PARTIAL, via the publisher HTML landing/full-text page served through the WebFetch summariser in three passes (offset 0, 8000, 20000).

Sections I obtained text from, by name as the page prints them: front matter and publication dates; Abstract (full, reassembled); Introduction; Materials and Methods > Simulated Datasets; Materials and Methods > Empirical Datasets; Materials and Methods > Calculation of FBS and LPP; Results > Performance of NBS Analysis for Simulated Data Collections > Analysis of Datasets With ILS; Results > GTEE analysis; Results (empirical rodent / fungal / plant passages); Figure 7 caption (full); Figure 8 reference; Discussion (one sentence only).

NOT read at full continuous text: the complete Discussion, the complete Methods, Figures 1-6 and their captions, Figure 8 caption, any supplementary material, and the numeric contents of Fig. 7d-f (ROC curves) from which the <1% FPR is read. The PDF of record was never retrieved.

This is a PARTIAL read, not a COULD NOT READ. Where I say a thing is "not printed" below I mean: not present in the text served to me across those three passes. For sub-claim (e) in particular, the absence of an explicit definitional sentence is a fact about my read as much as about the paper, and I mark it accordingly.

Record of source: DOI 10.1093/molbev/msaf296 - Sharma (Sudip), 2025 - "Robust and Efficient Confidence Limits for Phylogenomic Inference of Organismal Relationships".

PMC/Europe PMC carries this paper as PMC12665395 and PubMed as PMID 41250902. Both are hard-blocked here and I did not route to them. PMC12665395 is an identifier to convert, never a route, and it names the SAME document as the DOI above - one document, not two. Likewise the four distinct URLs the single search returned for this paper (OUP advance-article, OUP advance-article-pdf, PMC, PubMed) are ONE document surfacing four times. That is a title match repeated, and it is NOT corroboration.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below were served by the summariser, which caps verbatim runs at roughly 125 characters. Where a quotation exceeds that I note it as a reconstruction from consecutive ordered segments and give the fragment count.

### (a) Front matter exactly as printed

- Authors, in printed order: **Sudip Sharma; Sudhir Kumar**. (Taken from the article front matter, not from any short form. Note for the ledger: the bare surname "Sharma" in phylogenetics also attaches to Prashant P. Sharma and others, both of whom the search surfaced; the front matter here reads Sudip Sharma.)
- Title, exactly: "Robust and Efficient Confidence Limits for Phylogenomic Inference of Organismal Relationships"
- Journal: Molecular Biology and Evolution
- Volume / issue / article: **Volume 42, Issue 12, December 2025, article msaf296**
- Pages: the page does **not print a page range**. The permissions link carries startPage=1 and endPage=11.
- Dates as printed: "Published: 18 November 2025"; "Accepted: 12 November 2025"; "Corrected and typeset: 01 December 2025." The page does not use the label "Advance Access," though the URL path does. Page metadata separately gives a publication date of 2025/11/28, which disagrees with the printed 18 November.
- DOI: 10.1093/molbev/msaf296

Abstract, reconstruction from 19 consecutive ordered segments (junctions verified; nothing completed by inference):

"Phylogenomic data are indispensable for establishing reliable relationships needed to build a robust Tree of Life. The superalignment approach concatenates hundreds or thousands of genomic segments, providing a straightforward, computationally efficient, and effective means of inferring phylogenies. However, the standard bootstrap method can produce overly confident support for incorrect inferences based on superalignments. It fails to account for the heterogeneity in phylogenetic signals across the data, which is caused by incomplete lineage sorting (ILS), data errors, and other biological processes. To detect such erroneous inferences, researchers need to produce and deliberate on the concordance of inferences derived from many complex and computationally demanding analyses that require knowledge of data partitions. This study demonstrates that analyzing phylogenomic subsamples with bootstrap upsampling overcomes the overconfidence drawback of the superalignment approach. We found that bootstrapping multiple small, randomly selected site subsets can detect the presence of phylogeny variation signals across the dataset, similar to that detected using data partitions. We present the Net Bootstrap Support (NBS) approach that accounts for this phylogenetic variation in the estimates of bootstrap confidence. NBS values showed comparable performance to multispecies coalescent analyses in the presence of ILS and surpassed it for datasets simulated with gene tree estimation errors. NBS analyses of phylogenomic data from rodents, fungi, and carnivorous plants corroborated the performance observed in simulated datasets and even mitigated overconfidence resulting from some data errors. NBS calculations are computationally efficient, with low memory consumption and high computational time savings, making the NBS approach well suited for big data molecular phylogenetics on both desktops and high-performance computing systems."

### (b) The 8/10/21% figures - CONFIRMED verbatim, with the denominator NOT PRINTED

Printed location: **Results > "Performance of NBS Analysis for Simulated Data Collections" > "Analysis of Datasets With ILS"**.

> "Superalignment ML phylogenies exhibited 8%, 10%, and 21% incorrect clades for the low, medium, and high ILS datasets, respectively."

Scope-setting opener check. The sentence opens with its own subject, "Superalignment ML phylogenies," so no preamble scopes it internally. But it sits inside a subsection whose heading is "Analysis of Datasets With ILS," and it is immediately preceded by "We analyzed 10 collections of alignment for low, medium, and high ILS situations." The clause **ASSERTS** the quantity, scoped to the simulated ILS collections only. Nothing in or around it reaches any empirical or published dataset.

**NUMERATOR CLASS.** Clades present in the maximum-likelihood phylogeny inferred from the concatenated **superalignment** that conflict with the model species tree the data were simulated from. The paper gives no explicit definitional sentence for "incorrect clade"; correctness rests on:

> "as the correct relationships are known for computer-simulated datasets." (Introduction)

> "The model species tree, containing 37 mammalian species, was used for simulation" (Materials and Methods > Simulated Datasets)

and on the Figure 7 caption's partition of clades into two classes:

> "Comparison of NBS and FBS values for correct and incorrect clades for datasets simulated with ILS."

Exclusions, as far as the served text states them: the class is restricted to clades of the superalignment ML tree (not of MSC/gene trees, which are reported separately), and to the ILS simulations (the GTEE simulations are a separate set with separate numbers).

**DENOMINATOR: NOT PRINTED.** This is a real gap and I will not paper over it. No sentence served to me states a total clade count, and when I queried for one directly the page yielded only partial counts from unrelated analyses (e.g. the plant dataset's "The unimodality of the bcl distribution for only 1 clade out of 10 was rejected"). From the Fig. 7 caption's correct/incorrect partition the denominator is evidently *all clades of the superalignment ML phylogenies at that ILS level*, pooled over the 10 datasets - but the paper does not say so in the text I read.

**YOUR OWN ARITHMETIC (mine, not the paper's):** 37 taxa give 34 internal branches on an unrooted fully resolved tree; times 10 datasets is 340 clades, so 8% is about 27 clades and 21% about 71. This rests on three assumptions the paper never states in the text served to me (unrooted, fully resolved, all 10 datasets pooled per ILS level). The paper carries no stated uncertainty on the 8/10/21% figures - no CI, no SD across the 10 datasets - so none can be carried through. Treat the counts as mine and provisional.

**UNIT: a clade (internal branch) in one inferred tree.**

**OVERLAP IN BOTH DIRECTIONS, against the candidate's unit (published >=95% support labels on the published record):**

What the source's class MISSES: it has no notion of a published support label at all. The 8/10/21% figures are a topological error rate of the *point estimate*, computed with no reference to any support value - a clade enters the numerator by being wrong, not by carrying any particular support. So the figures say nothing about any label, let alone a published one. They also miss the entire cross-study dimension: one simulated 37-taxon mammalian regime, not a corpus of published trees.

What the source's class INCLUDES that the candidate excludes: every clade regardless of support, so the denominator is loaded with low-support clades that a >=95% restriction would discard; correct clades, which fill most of the denominator; and simulated rather than published data.

Both directions miss. These are different quantities, and the entry's numerator-class/denominator/unit distinction **holds**.

### (c) The sub-1% false-positive rate - CONFIRMED verbatim, but the ENTRY NAMES THE WRONG ESTIMATOR

Printed location: **Results > "Analysis of Datasets With ILS"**.

> "The false positive rate (FPR) for NBS was less than 1% at a 95% cutoff (Fig. 7d to f)."

**The rate is for NBS, the paper's own new metric - not for the nonparametric/standard bootstrap.** The entry's phrase "nonparametric-bootstrap false-positive rate" misattributes it. The paper's standard bootstrap quantity is FBS (Felsenstein bootstrap support), and FBS is the thing the paper indicts: "the standard bootstrap method can produce overly confident support for incorrect inferences based on superalignments" (Abstract), with Fig. 7 built to show "NBS consistently showing higher AU-ROC values than FBS, indicating superior discriminative power." The entry's wording is not wholly groundless - NBS is built from nonparametric bootstrap resampling of small site subsets, which the Abstract calls "bootstrap upsampling" - but as written the entry hands the favourable number to the estimator the paper is arguing against. Note this cuts *against* the entry's own framing, since the entry elsewhere calls (C) a NEW metric; the misattribution is an internal inconsistency that lands on the right side of the ledger question.

**MEASURED AGAINST WHAT TRUTH: simulated.** The model species tree of 37 mammalian species used to generate the data. "as the correct relationships are known for computer-simulated datasets" (Introduction). There is no assumed reference tree and no published-record component in this figure.

**UNIT: a clade,** classified correct or incorrect against that model tree, with NBS thresholded at 95%.

**n: NOT PRINTED.** No FPR formula, no denominator, no n is given anywhere in the text served to me; I queried for a definition twice and the page returned none. The figure is read off Fig. 7d-f, which the caption identifies as ROC curves, and I did not read the curves themselves.

Hedging: the printed form is a **bound**, "less than 1%", not a point estimate, with a figure citation. Per PUBLISHED IS NOT PERFORMED this is a measured quantity (there is a simulation and a threshold behind it) reported as a bound rather than an estimate with uncertainty. And it is not zero: the Fig. 7 caption records a counterexample - "The circle in panel b) highlights an incorrect clade supported by NBS >= 95%; the Type I error threshold was 5%."

Scope-setting opener check. The sentence has no scoping preamble and **ASSERTS** the quantity. Its scope comes from its container: the subsection "Analysis of Datasets With ILS," and the Fig. 7 caption's "for datasets simulated with ILS." So the assertion is scoped to simulated ILS data and is silent outside it.

Companion figures, for context on the same cutoff: "Therefore, the overall TPR for NBS was >98% (AU-ROC = 0.99 to 1.00, Fig. 8a to c) at a 95% cutoff level" and "In contrast, TPR for LPP in MSC analysis was only 72% at a 95% cutoff level" (Results > GTEE analysis).

### (d) Is any part measured on the PUBLISHED record (cross-study)? No.

Everything quantitative is within-dataset or simulated.

Simulated, ILS: "We generated 10 datasets, each with 100 gene sequences sampled from 4,000 simulated gene sequence alignments." / "Each gene sequence contained 1,600 sites and was simulated using ILS, modeled through a MSC approach." / "Consequently, each dataset contains a total of 160,000 sites." (Materials and Methods > Simulated Datasets; source data cited to Mirarab et al. 2014; simulator software not named in the served text.)

Simulated, GTEE: "For each GTEE level, 1,000 gene sequence alignments were simulated," the data "obtained from Shen et al. (2021)."

Empirical (rodents, fungi, carnivorous plants) - and this is the part that could be mistaken for a published-record measurement, so it needs care. There is **no truth standard at all** for these, and **no rate is computed from them**. They are selected-by-controversy case studies:

> "They were selected because the ML phylogeny inferred from the concatenated superalignment analysis received very high FBS, some of which was not reproduced in other analyses." (Materials and Methods > Empirical Datasets)

> "This clade in the plant phylogeny and four clades of Fungal phylogeny (all with FBS >= 95%) have been controversial." (Results)

> "they did not receive support in MSC and other analyses (Roycroft et al. 2020; Shen et al. 2021)." (Results, rodents)

The selection sentence is decisive: the datasets were **chosen** for carrying high FBS that other analyses did not reproduce. A set chosen on the outcome cannot yield a rate for that outcome, and the paper prints none. n = 3 datasets, hand-picked.

Published support values do enter - but as **inputs**, not as the object of measurement: "FBS values for the Fungi phylogeny are from Shen et al. (2017)" (Materials and Methods > Calculation of FBS and LPP). Reusing another paper's support values as an input to your own comparison is not a calibration of the published record.

The single sentence in the paper that touches the published record is in the Introduction, and it is a **citation to a different paper**. Quoting the HEDGED, CITED formulation rather than any barer one:

> "However, a few clades with FBS >= 95% obtained fbs < 95% in the analysis of empirical datasets, as shown in Table 1 of Sharma and Kumar (2021)."

Scope-setting opener check on this one, because it is the sentence most likely to be over-read. It opens with "However," which **RECORDS A MOVE AWAY** from the preceding claim that bootstrap support "rapidly converges to 100% for the great majority of inferred clades." The clause asserts a *disagreement between two support measures* (FBS vs fbs) on empirical data. It does **not** assert a rate, does not compare either measure to any truth, and is hedged to "a few clades" and delegated to another paper's Table 1. It is not a calibration statement and it is not this paper's result.

### (e) Does it state what a 95% support value should mean?

Not in the text served to me, and I flag this as PARTIAL-read-limited: I did not read the full continuous Discussion, so an explicit sentence could exist where I did not look. I did query the page directly for probabilistic interpretations of bootstrap or NBS values and for definitional sentences, twice, and got none.

What the paper does instead: it **uses** 95% as an operating point and **asserts a Type I error target for its own metric**.

> "the Type I error threshold was 5%" (Figure 7 caption)

> "at a 95% cutoff" / "at a 95% cutoff level" (Results, ILS and GTEE)

The nearest Discussion sentence served: "We have presented a novel approach to incorporating the uncertainty in measuring the statistical support".

So, in the PUBLISHED-IS-NOT-PERFORMED vocabulary: the paper **DEFINES** 95% as a decision threshold and **BOUNDS** its own new metric's error at that threshold. It does not **measure** what existing published >=95% labels mean, and it states no semantics for them. A threshold choice is not a calibration statement.

### (f) One sentence

This is a simulation of a new metric: NBS is introduced in this paper and its false-positive rate is scored against a model species tree inside simulated datasets, not a calibration of support labels as they appear in the published literature.

## REGIME

In the paper's own words and units.

- Population / data: concatenated "superalignment" phylogenomics. Simulated ILS arm: "10 datasets, each with 100 gene sequences sampled from 4,000 simulated gene sequence alignments," each gene "1,600 sites," each dataset "160,000 sites," on a "model species tree, containing 37 mammalian species," ILS "modeled through a MSC approach," data cited to Mirarab et al. 2014. Simulated GTEE arm: "For each GTEE level, 1,000 gene sequence alignments were simulated," from Shen et al. (2021). Empirical arm: rodents, fungi, carnivorous plants, n = 3, selected because superalignment ML "received very high FBS, some of which was not reproduced in other analyses."
- Unit of analysis: a clade (internal branch) in an inferred tree, classified correct or incorrect against the simulation's model species tree.
- Operating condition: known simulated truth. "the correct relationships are known for computer-simulated datasets."
- Instrument: NBS (Net Bootstrap Support), introduced here, against comparators FBS (Felsenstein bootstrap support) and LPP from MSC analysis.
- Threshold / category: "a 95% cutoff"; "the Type I error threshold was 5%"; performance summarised by TPR, FPR and AU-ROC.

Does the claim sit inside this regime? Two different claims, two answers.

The **entry's characterisation of (C)** sits inside it: new metric, simulated/assumed truth, single datasets, different numerator class, denominator and unit. That is what the paper is.

The **candidate's own subject** - what a published >=95% support label means across the published record - sits **outside** it in every coordinate: outside the unit (clade-vs-model-tree, not published label), outside the population (one simulated mammalian regime plus three hand-picked datasets, not a corpus of published studies), and outside the instrument (NBS, which no published record carries). A result proved under these assumptions is silent on the candidate, not supportive of it and not against it.

## DEFECTS FOUND

Four, in descending weight. None overturns the entry's bearing.

1. **The entry misattributes the sub-1% FPR to the nonparametric bootstrap.** The printed sentence gives it to **NBS**, the paper's new metric. The paper's nonparametric/standard bootstrap quantity is FBS, which the paper argues is overconfident. The entry should read "the new metric NBS, computed by bootstrap upsampling of site subsets," not "nonparametric-bootstrap." As written the entry is internally inconsistent with its own "NEW metric" framing. Fix the wording; the conclusion is unaffected and in fact strengthened.

2. **The denominator of the 8/10/21% figures is NOT PRINTED.** If the entry asserts a denominator, it asserts more than the paper does. The paper partitions clades into "correct and incorrect" (Fig. 7 caption) and the denominator is evidently all superalignment-ML clades at that ILS level pooled over 10 datasets, but no total is stated and no per-dataset spread is given. My 340-clade reconstruction is MY OWN ARITHMETIC on unstated assumptions. The entry should say "denominator not printed."

3. **Citation front matter is imprecise, as the task warned.** The canonical citation is **Molecular Biology and Evolution 42(12):msaf296**, not "42:1-11". The article carries no printed page range; 1-11 comes from the permissions metadata, not the citation line. The entry omits the issue and the article number. Authors confirm as **Sudip Sharma and Sudhir Kumar** from the front matter. There is also a date discrepancy in the publisher's own fields: printed "Published: 18 November 2025" vs page metadata 2025/11/28, with "Corrected and typeset: 01 December 2025".

4. **The entry's "simulated or assumed truth" disjunction is looser than the paper.** For both numbers the entry asks about, the truth is **simulated only** - a model species tree. The empirical arm has no truth standard at all, assumed or otherwise; it has controversy in the literature and disagreement with MSC. "Assumed truth" would be a more generous description of the empirical arm than the paper supports, since nothing there is treated as true.

On the two things the task said could overturn the entry, explicitly:

- Is the sub-1%-at-95% figure a calibration of published support labels? **No.** It is the FPR of a metric introduced in this paper, against a simulated model tree, inside simulated ILS datasets, with no n or denominator printed. The candidate is not closer to answered on this source.
- Are the 8/10/21% shares on the candidate's unit? **No.** They are topological error rates of the point estimate, computed without reference to any support value, over a denominator that includes every clade regardless of support. The numerator-class distinction does not fail.

## ROUTES THAT FAILED

- `https://academic.oup.com/mbe/article/doi/10.1093/molbev/msaf296` - WebFetch "failed at its site (client_error)". Wrong URL shape: this is an advance-article path, not an `/article/doi/` path. Not a host block.
- `https://academic.oup.com/mbe/advance-article-pdf/doi/10.1093/molbev/msaf296/65366456/msaf296.pdf` - WebFetch "failed at its site (client_error)". The PDF of record was never retrieved, which is why my read is PARTIAL and the full Discussion and Figures 1-6 are unread. A tool-scoped retry via curl was not attempted within budget.
- `https://academic.oup.com/mbe/advance-article/doi/10.1093/molbev/msaf296/8326389` - **WORKED**, three times, at offsets 0, 8000 and 20000. This is the route for this paper.
- PMC (PMC12665395) and PubMed (PMID 41250902) were returned by the search and **deliberately not fetched**: PMC and Europe PMC are hard-blocked here, and a PMCID is an identifier to convert rather than a route. No Unpaywall call was made and no email address was placed in any URL, header or query string.
- No search was refused by the classifier. One search ran; it is recorded as one check and the four URLs it returned for this paper are recorded as one document.

## BEARING ON THE LEDGER ENTRY

**HOLD, with two corrections to the entry's wording and one narrowing.**

The entry's substantive characterisation of nearest prior (C) survives re-testing on the document. Sharma & Kumar 2025 introduces NBS, a new support metric, and scores it against a simulated model species tree inside 10 simulated ILS datasets and a separate GTEE simulation set, with three hand-picked empirical datasets used as illustrations carrying no truth standard. Both numbers the entry cites are printed and verbatim correct. Nothing in the paper measures anything on the published record cross-study.

Corrections to carry into the entry:
- Attribute the "<1% at a 95% cutoff" FPR to **NBS**, the paper's new metric, not to the nonparametric bootstrap. (Defect 1.)
- Cite it as **MBE 42(12):msaf296**, authors **Sudip Sharma and Sudhir Kumar**; note that no page range is printed and that 1-11 is permissions metadata. (Defect 3.)

Narrowing to carry into the entry:
- Say "simulated truth" for both cited numbers, not "simulated or assumed." (Defect 4.)
- Say the 8/10/21% **denominator is not printed**, and do not state one. (Defect 2.)

Neither attack succeeds. The sub-1% figure is not a calibration of published labels, so the candidate does not move toward answered on this source. The 8/10/21% shares are not on the candidate's unit, so the numerator-class distinction stands.

**One lead, named as a lead and not as a settled prior - and I have not opened it.**

What KIND of document could settle the candidate's question? One that takes support values **as published** across multiple independent studies and scores them against an outcome determined independently of those studies - a cross-study calibration or a retrospective agreement audit over a corpus of published trees.

The Introduction of this paper names **Sharma and Kumar (2021)**, whose "Table 1" is described as showing that "a few clades with FBS >= 95% obtained fbs < 95% in the analysis of empirical datasets." By kind, that is **closer** to the candidate than the paper I read - it tabulates clades at the >=95% label on empirical data - but it is still, on the description given, a comparison of two estimators on empirical datasets rather than a calibration against an independent outcome, and the within-paper description is hedged to "a few clades." I did not open it, I have no DOI for it, and I cannot say what Table 1's denominator is. **Call it a guess as to bearing, not a lead that settles anything.** It is worth one fetch in a later pass.

**Enumeration discipline, since the entry's "nearest prior" framing is universal-shaped.** Instances I OPENED: one - DOI 10.1093/molbev/msaf296 (Sharma & Kumar 2025). Instances I DID NOT open: Sharma and Kumar (2021); Shen et al. (2017); Shen et al. (2021); Roycroft et al. (2020); Mirarab et al. (2014). Any claim in the entry that **no** prior calibrates published >=95% support labels is therefore **UNENUMERATED - not established and not refuted** on this check. It is true over the one instance I opened. Do not promote it to a universal on the strength of this note.

**Promotion condition, if the entry wants one:** the (C) characterisation can be promoted past "unenumerated" only when Sharma and Kumar (2021) Table 1 has been opened and its numerator class, denominator and unit written out in both directions against the candidate's. Until then, hold (C) as verified-on-one-instance.
