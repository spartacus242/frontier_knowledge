# VERIFY — "A natural upper bound to the accuracy of predicting protein stability changes upon mutations" (arXiv:1809.10389)

Checker note. Fresh context. Reports what the source says; does not adjudicate the question.

---

## CLAIM

Source handed to me: arXiv:1809.10389, "A natural upper bound to the accuracy of
predicting protein stability changes upon mutations". An earlier agent reported
reading it in full.

Sub-claims to check:

- (a) Equation 14 defines a **reliability** as `sigma^2_true / (sigma^2_true + sigma^2_err)`.
- (b) It prints ceilings of **0.73** and **0.83** analytically, and **0.74 +/- 0.02**
  and **0.84 +/- 0.02** by simulation, in section 3.2.
- (c) Its unit of analysis — a mutation pooled across proteins, or an assay? And is the
  error variance estimated from within-assay replicates, or from disagreement between
  publications curating the same mutation?
- (d) Pearson or Spearman throughout? Does "Spearman" occur at all?
- (e) Does "deep mutational scanning" or "DMS" occur anywhere?
- (f) Does it rescale or re-rank any predictor?

Plus: state the regime this ceiling is a ceiling for, and whether a per-assay
deep-mutational-scanning reliability sits inside that population.

---

## READ LEVEL

**FULL TEXT**, including the supplementary material, via **WebFetch on
`https://arxiv.org/pdf/1809.10389v1`** across four calls. Front matter and version
history additionally from **WebFetch on `https://arxiv.org/abs/1809.10389`**.

Qualification, stated so nobody over-reads this note: the PDF was served to me
*through the fetch summariser*, not as raw bytes. The summariser **refused bulk
verbatim transcription twice** ("that would reproduce most of the source text"), so
the long sentences below are **labelled reconstructions assembled from ordered
consecutive fragments**, each fragment returned whole and under the ~125-character cap.
I did not complete any cut string by inference. Junctions were checked for grammatical
closure; the summariser returned no overlaps, so junctions are **grammar-verified, not
overlap-verified**. Short quotations (under ~110 chars) are single whole returns and are
marked *as served*.

Front matter, taken from page 1 and the abs page, not from anyone's short form:

> Ludovica Montanucci¹, Pier Luigi Martelli², Nir Ben-Tal³\*, Piero Fariselli¹\*
> ¹Department of Comparative Biomedicine and Food Science, Legnaro (Padova), Italy.
> ²Biocomputing Group, Department of Pharmacy and Biotechnology, University of Bologna, Bologna, Italy.
> ³Department of Biochemistry and Molecular Biology, George S. Wise Faculty of Life Sciences, Tel Aviv University.

arXiv:1809.10389**v1**, submitted **2018-09-27**, subject class **q-bio.BM**. v1 is the
only version listed. **No journal name, volume, pages or DOI is printed in the PDF or on
the abs page.** I did not reach a published journal version — fetch cap reached, see
ROUTES THAT FAILED. That is a *limit of this check*, not a finding that none exists.

**Genre.** This is a **primary theoretical / methodological paper**: an analytical
derivation (section 2) followed by a Monte Carlo on subsets of curated databases
(section 3). It is **not** a review, not a benchmark study, and not a guideline. Load-bearing
consequence: **it evaluates no predictor at all.** No predictor is run, scored, or named
as a tested method anywhere in the analysis.

---

## WHAT THE SOURCE SAYS (quotations as served)

### Section headings, in order

```
Abstract
1 Introduction
2 Theoretical estimation
2.1 Data uncertainty and representation of the data with a probabilistic model
2.2 Theoretical correlation between two observed distributions as a function of the variances
3 Experimental datasets
3.1 Distribution of the available data
3.2 What can we expect from the current experimental datasets?
4 Conclusion
References
Supplementary material:
  1. Distribution of DDG in different datasets
  2. Estimation of a lower bound for the root mean square error
  3. Experimental estimation of the root mean square error
```

### (a) Equation 14, as served

```
            <sigma_xy>      sigma_DB^2              1
<rho>  =  -------------- = -------------------- = --------------------      (14)
            <sigma_x^2>     sigma^2-bar
                            + sigma_DB^2           1 + ( sigma^2-bar
                                                         / sigma_DB^2 )
```

In the served LaTeX-ish rendering:

> `\langle \rho \rangle = \frac{\langle \sigma_{xy} \rangle}{\langle \sigma_{x}^2 \rangle} = \frac{\sigma_{DB}^2}{\overline{\sigma^2} + \sigma_{DB}^2} = \frac{1}{1 + \left(\frac{\overline{\sigma^2}}{\sigma_{DB}^2}\right)}`

(The first subscript came back as `\chi` in one call and `x` in another; the surrounding
text uses `{x_i}` and `{y_i}`, so I read it as `x`. Flagged rather than silently fixed.)

Sentence immediately **before** it, as served:

> "With this, the Pearson correlation (Eq. 4) can be estimated as:"

Sentence immediately **after** it, as served:

> "Given that the two variances are greater than zero, the experimental observations will always yield"

…continuing, as served:

> "the experimental observations will always yield Pearson correlation smaller than 1."

The two quantities, in the paper's own words:

- `sigma_DB^2` — > "This is the variance of the distribution of the real $\Delta\Delta G$ values"
- `sigma^2-bar` — > "Where we indicate with $\overline{\sigma^2}$ the average variance of the data"

i.e. the mean of the per-variation variances `sigma_i^2` over the N variations.

**The literal string "reliability" does not occur anywhere in the paper.** Searched for
on its own. The quantity in Eq. 14 is named `<rho>` and called the (expected) **Pearson
correlation**.

### (a-cont.) Both variables are noisy, and equally so

Section 2.2's heading is itself the giveaway: "Theoretical correlation **between two
observed distributions** as a function of the variances". The set-up, as served in three
consecutive fragments:

> "We assume that both $\{x_i\}$ and $\{y_i\}$ are derived from the same set of distributions"
> "$(P_i(x_i) = P_i(x_i|\mu_i,\sigma_i) = P_i(y_i|\mu_i,\sigma_i))$,"
> "where the distributions $P_i$ can differ for each *protein variation i*."

The denominator is approximated as `sigma_x * sigma_y ~= sigma_x^2 ~= sigma_y^2`, so the
**same `sigma^2-bar` enters both variables**. Eq. 14 is therefore symmetric in the two
measurements: it is the correlation between **two equally-noisy parallel observations** of
the same true values.

The abstract states the framing, reconstruction from 2 consecutive fragments:

> "We investigate the correlation between pairs of measured ΔΔG variations, where one is used as a predictor for the other."

### (b) The four numbers, and what each is a ceiling ON

All four are printed **in running sentences in section 3.2** — not in a table, not in a
figure.

Inputs first, as served (single return):

> "we obtained $\overline{\sigma}=1.04$ and $\sigma_{DB}=1.72$ , and $\overline{\sigma}=0.72$ and $\sigma_{DB}=1.57$ , respectively."

(S1 then S2; units kcal/mol.)

**Analytical — 0.73 and 0.83.** As served, single whole return:

> "Substituting these values in Eq 14, we obtain estimations of maximum Pearson correlations of 0.73 for S1 and 0.83 for S2."

- **0.73 → S1**, **0.83 → S2**. Called "maximum Pearson correlations".
- **No uncertainty is attached to either.**

**Simulation — 0.74 +/- 0.02 and 0.84 +/- 0.02.** Reconstruction from **3 consecutive
fragments**, junction grammar closes:

> "By drawing 100 pairs of such "experiments", and repeating the runs 10 times, we obtained an estimation" + "of the Pearson correlation (with variable {σ_i})" + "of 0.74 ± 0.02 and 0.84 ± 0.02, for S1 and S2 respectively."

- **0.74 ± 0.02 → S1**, **0.84 ± 0.02 → S2**.
- Simulation setting: **100** pairs per run, **10** runs.
- The simulation differs from the analytic calculation by drawing from
  `N(DDG_i, sigma_i)` with **each variation's own `sigma_i`** rather than the single
  averaged `sigma-bar`. That is why the simulated values sit marginally *above* the
  analytic ones.
- **The "± 0.02" belongs only to the simulated pair.**

**What they are ceilings on.** Directly: the maximum Pearson correlation obtainable
when one noisy measurement of a set of ΔΔG values is used as a predictor for a second,
equally noisy measurement of the same values. The authors then generalise this in the
Conclusion, reconstruction from 2 consecutive fragments:

> "placing a natural upper bound on the maximum possible Pearson correlation" + "between predicted and empirical values."

### (b-cont.) The source states the bound THREE times, at three precisions

Per the "report every formulation" rule:

1. **Section 3.2 — point values, unhedged, dataset-specific**: 0.73 (S1), 0.83 (S2)
   analytic; 0.74 ± 0.02 (S1), 0.84 ± 0.02 (S2) simulated. This is the only place the
   four numbers appear.
2. **Abstract — hedged range.** Reconstruction from 3 consecutive fragments:
   > "We conclude that the upper bound is a function of both uncertainty and spread of the ΔΔG values," + "and that with current data the best performance should be between 0.7–0.8," + "depending on the dataset used; higher Pearson correlations might be indicative of overtraining."
   Hedges: "should be", "between 0.7–0.8", "depending on the dataset used", "might be".
3. **Conclusion — hedged single figure, tied to a spread threshold.** Reconstruction
   from 3 consecutive fragments:
   > "The current datasets (S2648, VariBench) have a $\sigma_{DB} < 2$ ," + "dictating an upper bound of about 0.8 to the Pearson correlation" + "and lower bound of about 1 kcal/mol for the root mean square error"
   …closing, as served: > "(see Supplementary Materials); better values would be indicative of overtraining."
   Hedges: "about 0.8", "about 1 kcal/mol", "would be indicative".

Note the formulations are **not interchangeable**: §3.2 gives 0.73/0.83 per subset; the
Conclusion rounds to a single "about 0.8" for the *databases* S2648 and VariBench and
keys it to `sigma_DB < 2`; the Abstract gives a *range* 0.7–0.8. None of them carries a
citation to another work — all three are this paper's own result.

No formulation is attributed to anyone else. The paper does not attribute the ceiling to
a prior source.

### (b-cont.) The RMSE companion figure, since the Conclusion invokes it

The Conclusion's "about 1 kcal/mol" is a rounding of supplementary numbers. The
supplementary section "Estimation of a lower bound for the root mean square error"
**does print** numbers, as served:

> "$\langle Rmse \rangle = 1.46$ kcal/mol and $\langle Rmse \rangle = 1.0$ kcal/mol for S1 and S2 respectively."

with simulated counterparts **1.4 ± 0.5** (S1) and **1.0 ± 0.2** (S2) kcal/mol, and the
general analytic result `<Rmse> ~= sqrt(2) * sigma-bar`.

So the Conclusion's "about 1 kcal/mol" is the **S2** value; the **S1** value is 1.46
kcal/mol, roughly 50% higher. Anyone carrying "about 1 kcal/mol" forward as *the* RMSE
floor is carrying the better of the two subsets.

**Flagged, unverified:** the summariser reported that the supplement "labels the S2
uncertainty as 'S1 data uncertainty'". I could not re-read the supplement to confirm this
(fetch cap). Recorded as a **possible labelling error in the source's supplement that
this check did not verify** — not asserted.

### (c) Unit of analysis and the source of the error variance

**Unit: the single-point protein variation (one mutation), pooled across many
different proteins.** As served:

> "comprising 3464 single-point mutations from 135 proteins of known structure (with PDB IDs)."

Datasets, as served:

- ProTherm (2013 update): > "comprising 3464 single-point mutations from 135 proteins of known structure"
- S2648: > "which comprises 2648 single-site variations in 131 proteins"
- VariBench: > "contains 1564 single-site variations from 99 proteins"
- **S1 = 574** ProTherm variations; **S2 = 551** variations shared by VariBench and S2648.

**The literal string "assay" does not occur anywhere in the paper.** Searched on its own.

**Error variance: from disagreement between separately reported / separately curated
values for the same mutation. NOT from within-assay replicates.** As served:

- S1 selection: > "for which two or more experimental ΔΔG values are reported for the same protein variation"
- S2 selection: > "for which the manual curators ended up with different ΔΔG values"

**"replicate" and "replicates" do not occur anywhere in the paper.** Searched separately.

The paper *does* cite within-experiment precision, but **does not use it** to set
`sigma-bar`. Reconstruction from 3 consecutive fragments:

> "roughly ranging from 0.1 to 0.5 kcal/mol" + "(as an example it is 0.14 kcal/mol for thermal unfolding in Perl and Schmid, 2001" + "and as small as 0.06 and 0.09 kcal/mol in De Prat Gay *et al.*, 1994)."

The 0.1–0.5 kcal/mol range carries **no citation**; the 0.14 is attributed to Perl and
Schmid 2001 and the 0.06/0.09 to De Prat Gay et al. 1994. These are the source's
attributions, not its own measurements.

Arithmetic the source itself does not print, but which follows from its own numbers:
`sigma-bar` = **1.04** (S1) and **0.72** (S2) kcal/mol is **2× to 17× larger** than the
within-experiment figures the paper itself cites (0.06–0.5 kcal/mol). The paper **does not
print this comparison and does not decompose `sigma-bar`** into measurement noise versus
condition/curation discordance. The ratio above is my arithmetic on its numbers, flagged
as such.

The paper is explicit that the conditions are heterogeneous. As served:

> "Different environmental conditions, such as pH and temperature, yield different $\Delta\Delta G$ values."

and, reconstruction from 2 consecutive fragments:

> "Therefore, data collected in ProTherm come from experiments performed with different techniques" + "and in different environmental conditions."

### (d) Pearson or Spearman

**Pearson throughout.** "Pearson" occurs roughly 25 times (summariser's approximate
count) across abstract, introduction, section 2, section 3 and the conclusion.

**"Spearman": DOES NOT OCCUR.** Searched as its own literal string.
**"rank": DOES NOT OCCUR.** Searched separately. There is **no rank-based analysis of any
kind** in the paper.

### (e) Deep mutational scanning / DMS

Each searched separately as a literal string:

| string | occurs? |
|---|---|
| "deep mutational" | **no** |
| "DMS" | **no** |
| "scanning" | **no** |
| "assay" | **no** |
| "replicate" / "replicates" | **no** |
| "high-throughput" | **yes — but see below** |

The single "high-throughput" occurrence modifies **computational methods**, not
experiments. Reconstruction from 3 consecutive fragments:

> "The performance of high-throughput computational methods to this end is evaluated mostly based on the" + "Pearson correlation coefficient between predicted and observed data, assuming that the upper bound" + "would be 1 (perfect correlation)."

So the one apparently promising string is **not** a reference to high-throughput
experimental measurement. There is no DMS content in this paper, under any synonym I
could search for.

### (f) Rescaling or re-ranking a predictor

**No.** The paper rescales, re-ranks, re-normalises and re-calibrates **nothing**,
because it **runs no predictor**. The only scaling is inside the variance argument of
section 2.2 — > "by scaling the original variables" — which concerns the invariance of
the correlation under rescaling of the data, not the treatment of a predictor's output.

### (g) What the source says about cross-dataset comparison

As served, single whole return:

> "It also follows that comparisons of predictors using different datasets are inherently misleading."

This is the paper's own warning and it bears directly on how its numbers may be reused.

---

## REGIME

**Population.** Single-point (single-site) amino-acid substitutions in globular proteins
of known three-dimensional structure, **pooled across 99–135 different proteins**,
curated from the published literature into ProTherm / S2648 / VariBench. The four
ceiling numbers are computed on two specific sub-populations:

- **S1**: 574 ProTherm variations for which **two or more** experimental ΔΔG values are
  reported for the same variation.
- **S2**: 551 variations shared by VariBench and S2648 for which the **manual curators
  arrived at different** ΔΔG values.

Both sub-populations are **selected on the existence of discordance**. They are not
random samples of the databases.

**Unit of analysis.** One protein variation (one mutation). Not a protein. Not an assay —
the word "assay" is absent.

**Endpoint.** ΔΔG of folding, in kcal/mol, drawn from heterogeneous experimental
techniques under heterogeneous conditions (pH, temperature), as the paper states
explicitly.

**Instrument / error model.** `sigma_i` is the per-variation spread implied by
**separately reported or separately curated literature values** for that variation.
`sigma-bar` (1.04 S1, 0.72 S2 kcal/mol) is their mean. `sigma_DB` (1.72 S1, 1.57 S2
kcal/mol) is the spread of the **true ΔΔG values across the pooled set of mutations from
different proteins**.

**Estimand.** The expected Pearson correlation `<rho>` between **two independent draws
from the same per-variation distributions** — i.e. the correlation between two
equally-noisy parallel measurements. Formally identical to the classical reliability
coefficient, though the paper never uses that name.

**Comparator.** A second noisy measurement, "where one is used as a predictor for the
other." **Both arms carry the full error variance**, symmetrically.

**Threshold.** `sigma_DB < 2` kcal/mol is the stated condition under which the
Conclusion's "about 0.8" applies.

### Does a per-assay deep-mutational-scanning reliability sit inside this population?

**No. Outside, on five independent axes at once.** The paper is **silent** on it — not
supportive, not contradictory.

1. **Unit mismatch.** The paper's `sigma_DB` is the spread of true ΔΔG **across mutations
   drawn from 99–135 different proteins**. A per-assay DMS reliability is computed
   **within one protein's assay**, over that protein's mutations. These are different
   `sigma_DB` quantities, and `sigma_DB` is the *numerator* of Eq. 14 — so the ceiling
   moves with it. A within-protein mutational spread is generally narrower than a
   cross-protein pooled spread, which pushes the ceiling in the **opposite** direction
   from what a naive transfer would assume.
2. **Endpoint mismatch.** ΔΔG of folding in kcal/mol from thermal/chemical denaturation
   is not a DMS fitness, abundance or stability score. The paper measures the former
   only.
3. **Error-source mismatch.** The paper's `sigma-bar` is **between-publication and
   between-curator discordance** across heterogeneous techniques and conditions. A
   per-assay DMS reliability is built from **within-assay replicate agreement**. The
   paper never uses replicates — the string is absent — and its `sigma-bar` is an order of
   magnitude above the within-experiment precision it itself cites.
4. **Noise-symmetry mismatch.** Eq. 14 assumes **both** variables carry `sigma-bar`. A
   replicate-based reliability and a ceiling on a *noiseless* predictor against one noisy
   measurement are different quantities, related by a square root. **The paper nowhere
   states or derives that relation** — searched; NOT PRESENT. So Eq. 14 cannot be read
   as licensing a conversion in either direction.
5. **The source's own transferability warning.** "comparisons of predictors using
   different datasets are inherently misleading." The 0.73/0.83/0.74/0.84 figures are
   explicitly S1- and S2-specific, and the paper itself disclaims their portability.

A result proved under these assumptions is **silent** outside them.

---

## DEFECTS FOUND

1. **"Reliability" is an imported label; the paper never uses the word.** Eq. 14 is
   algebraically **exactly** `sigma^2_true / (sigma^2_true + sigma^2_err)` once
   `sigma_DB^2` is read as the true-value variance and `sigma^2-bar` as the mean error
   variance — and the paper's own definitions license that reading. But the literal string
   "reliability" occurs **nowhere** in the paper, and Eq. 14 is not a **definition**: it is
   **DERIVED** ("the Pearson correlation (Eq. 4) **can be estimated as**") and named
   `<rho>`, the expected Pearson correlation. Sub-claim (a) is right on the algebra and
   wrong on the verb and the name. A ledger entry saying the paper "defines a reliability"
   is a terminological import, not a quotation.
2. **Equal-noise-in-both-arms is the load-bearing qualifier, and it is easy to lose.**
   The ceiling is the correlation between two **equally noisy** measurements. If the
   ledger uses 0.73/0.83 as a ceiling on a predictor-vs-experiment correlation without
   that qualifier, it is a regime slip. The paper's own Conclusion makes exactly this
   generalisation ("maximum possible Pearson correlation between predicted and empirical
   values") **without ever deriving the asymmetric, noiseless-predictor case** — so the
   gap is in the source as much as in any reuse of it.
3. **"± 0.02" attaches only to the simulated pair.** 0.73 and 0.83 are printed with **no
   uncertainty at all**. Carrying "0.73 ± 0.02" would be fabricated precision.
4. **Pairing must be kept straight: 0.73/0.74 → S1, 0.83/0.84 → S2.** And the three
   formulations are not interchangeable — §3.2's point values, the Abstract's hedged
   "between 0.7–0.8 ... depending on the dataset used", and the Conclusion's "about 0.8"
   keyed to `sigma_DB < 2`. Quoting "0.7–0.8" as if it were the §3.2 result conflates a
   hedged abstract range with unhedged subset-specific numbers.
5. **`sigma-bar` is discordance, not measurement noise, and the paper does not decompose
   it.** At 1.04 / 0.72 kcal/mol it is 2× to 17× the within-experiment precision the paper
   itself cites (0.06–0.5 kcal/mol). Calling `sigma-bar` "experimental error" without
   qualification conflates instrument noise with curation and condition heterogeneity. The
   comparison ratio is **my** arithmetic on the source's numbers — the source prints
   neither the ratio nor the decomposition.
6. **The one "high-throughput" hit is a false lead.** It modifies *computational
   methods*, not experiments. Reading it as a gesture at high-throughput assays or DMS
   would be exactly the error of treating a mention of a different thing as a flag of the
   gap under check.
7. **The Conclusion's "about 1 kcal/mol" RMSE floor is the better subset's value.** The
   supplement prints 1.46 kcal/mol for S1 and 1.0 kcal/mol for S2. "About 1" is S2.
8. **A possible labelling error in the supplement, which I could not verify.** The
   summariser reported the supplement labelling the S2 uncertainty as "S1 data
   uncertainty". Recorded as flagged-and-unverified; fetch cap prevented re-reading.
9. **No journal citation is available from this source.** The PDF and abs page print no
   journal, volume, pages or DOI; v1 is the only arXiv version. Any journal front matter
   on this paper must be taken from the publisher, not from here — and I did not reach a
   publisher page.
10. **Non-defect, recorded to pre-empt a wrong flag.** The paper's silence on DMS,
    assays, replicates and Spearman is **silence**, not prohibition. It does not say DMS
    reliabilities are inapplicable; it simply never considers them.

Sub-claims as they stand against the source:

| sub-claim | verdict |
|---|---|
| (a) Eq. 14 is `s2_true/(s2_true+s2_err)` | **algebra YES; "reliability" NO — word absent; it DERIVES rather than DEFINES** |
| (b) 0.73, 0.83 analytic; 0.74±0.02, 0.84±0.02 simulated, in §3.2 | **YES, all four, in running sentences in §3.2; 0.73/0.74→S1, 0.83/0.84→S2** |
| (c) unit = mutation pooled across proteins | **YES — single-point variation pooled over 99–135 proteins; "assay" absent** |
| (c) error variance from between-publication/curation disagreement | **YES — not replicates; "replicate(s)" absent** |
| (d) Pearson throughout; "Spearman" occurs | **Pearson throughout; "Spearman" DOES NOT OCCUR; "rank" also absent** |
| (e) "deep mutational scanning" / "DMS" occur | **NEITHER OCCURS; "scanning" also absent** |
| (f) rescales or re-ranks a predictor | **NO — it runs no predictor at all** |

---

## ROUTES THAT FAILED

- **`curl` → `https://arxiv.org/pdf/1809.10389v1`** — `curl: (56) CONNECT tunnel failed,
  response 403`, zero bytes. Per my brief this is **tool-scoped at this proxy, not a host
  block**, and that is borne out: **WebFetch served the same URL** on the next attempt.
  Not retried and not routed around. `pdftotext` and `pdfplumber` are both present locally
  and would have given a raw read had the download succeeded.
- **`arxiv.org/html/1809.10389v1`** — **not attempted**, because the PDF route served
  first. Recorded so nobody reads its absence as a failure.
- **Published journal version** — **not reached**. Fetch budget (5) was exhausted on the
  arXiv PDF and abs page. This is **COULD NOT CHECK**, distinct from both COULD NOT READ
  and NOT FOUND: I make no claim about whether a journal version exists or what it prints.
- No search budget was used (0 of 6). No email address, name or other personal identifier
  was placed in any URL, query string, header or form. Unpaywall was not used. The egress
  proxy was not inspected or probed beyond reading the local README after the 403.

---

## BEARING ON THE LEDGER ENTRY

**The source opens, at the WebFetch-on-PDF route, and it says substantially what the
earlier agent reported.** The four numbers are real, printed where claimed, in section
3.2, in sentences. Sub-claims (b), (c), (d), (e) and (f) hold as put to me. Only (a) needs
correction, and only on wording: the algebra is exact, the word "reliability" is absent,
and Eq. 14 is a derived estimate rather than a definition.

**The entry's substantive exposure is regime, and it is specific.** This paper's ceiling
is a ceiling on the Pearson correlation **between two equally-noisy literature
measurements of the same pooled set of single-point mutations drawn from 99–135 different
proteins, where the "noise" is between-publication and between-curator discordance across
heterogeneous techniques and conditions.** Every one of those clauses is doing work:

- If the entry uses 0.73/0.83 as a ceiling on **predictor vs. experiment**, the symmetric
  equal-noise assumption is unstated and the paper never derives the asymmetric case.
- If the entry imports these numbers to a **per-assay DMS reliability**, that sits
  **outside the population on five axes** — unit, endpoint, error source, noise symmetry,
  and the paper's own cross-dataset warning. The paper is **silent** there. It should not
  be cited as establishing, bounding, or refuting a per-assay DMS ceiling.
- The direction of the `sigma_DB` mismatch is worth stating explicitly, because it is
  counter-intuitive: `sigma_DB` is the **numerator** of Eq. 14, so a *narrower*
  within-protein mutational spread yields a *lower* ceiling, other things equal. A naive
  transfer of "0.8" to a single-protein DMS setting is not merely unlicensed; it is
  unlicensed in a direction that flatters the DMS case.

**Two things the entry should not claim this source does.** It does not **measure** any
predictor's correlation — it runs no predictor, so there is nothing rescaled, re-ranked or
re-calibrated. And it does not **decompose** `sigma-bar` into measurement noise versus
curation discordance; it cites within-experiment precision (0.06–0.5 kcal/mol) and then
uses a `sigma-bar` an order of magnitude larger, without reconciling the two. If the
ledger's question turns on *what fraction of the ceiling is instrument noise*, this paper
**BOUNDS and PREDICTS** that quantity but does not **MEASURE** it.

**Front matter for citation:** Montanucci L., Martelli P.L., Ben-Tal N., Fariselli P., "A
natural upper bound to the accuracy of predicting protein stability changes upon
mutations", arXiv:1809.10389v1 [q-bio.BM], submitted 27 September 2018. No journal
reference is printed in the source; do not attach one on this check's authority.
