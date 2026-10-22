# VERIFY — DMS agreement numbers (two sources)

Checker run 2026-10-22. Fresh context. Budget used: 2 searches, 5 fetches (cap 6/5 — exhausted).

## CLAIM

Two sources are cited on this ledger for printed numbers.

**SOURCE 1** — Livesey BJ, Marsh JA, "Updated benchmarking of variant effect predictors using
deep mutational scanning", *Molecular Systems Biology* (2023), DOI 10.15252/msb.202211474.
Sub-claims: (a) it prints a **median agreement of 0.54**, and the question is between *what* —
alternative published assays of the same protein, or replicates of one assay — with its location
and denominator, the ledger asserting the denominator lives in **Table EV3** (not read);
(b) a count of **human proteins**; (c) whether the words *replicate, reliability, ceiling,
upper bound, attenuation* appear; (d) whether it **corrects** any correlation or **re-ranks**
predictors on a noise basis.

**SOURCE 2** — Reeb J, Wirth T, Rost B, "Variant effect predictions capture some aspects of deep
mutational scanning experiments", *BMC Bioinformatics* 21:107 (2020), DOI 10.1186/s12859-020-3439-4.
Sub-claims: (e) a section headed **"Experimental agreement sets the benchmark for prediction
methods"**; (f) between-experiment rank correlations of **0.21 (BRCA1)** and **0.93 (bla)**, a
**mean of 0.03** for beneficial effects, over **11 measurements on 4 proteins**; (g) whether it
computes a ceiling, applies a correction, or re-ranks anything.

## READ LEVEL

**Source 1: FULL TEXT**, at `https://link.springer.com/article/10.15252/msb.202211474`.
Body text, figure and Expanded-View legends, Discussion and Materials & Methods all served and
searchable. **Exception — one component NOT read: Table EV3 itself.** The Expanded View / supplementary
table is a separate file; its caption does not appear on the HTML article page and I did not open it
within budget. The denominator question is therefore **COULD NOT READ**, not NOT FOUND (see DEFECTS).

**Source 2: FULL TEXT**, at
`https://link.springer.com/article/10.1186/s12859-020-3439-4?code=…&error=cookies_not_supported`
(the BioMed Central canonical URL 302-redirects there). Headings, Abstract, Results, Discussion,
Conclusions and Methods served. The served page **cut off partway through the "Prediction methods"
subsection of Methods**, so the tail of Methods is unread; nothing the sub-claims turn on sits there.

Both sources are real, open and readable. Neither is a NOT FOUND and neither is a COULD NOT READ.

## WHAT THE SOURCE SAYS (quotations as served)

### Source 1 — Livesey & Marsh 2023

**Front matter, as served on the publisher page.** Authors Benjamin J Livesey and Joseph A Marsh.
Journal *Molecular Systems Biology*, volume 19, issue 8, article number **MSB202211474**, published
13 June 2023, issue cover date August 2023. Page range: the last-page field on the publisher page is
blank, so **no page numbers are printed on this route** — anyone citing "19:e11474" or a page span is
using a short form from elsewhere, not the front matter I read. Article type as labelled: **"Article"**
(DC metadata "OriginalPaper") — a **primary benchmarking study**, not a review, not a protocol.

**(a) The 0.54 number — it is printed, once, in a Results sentence.**

Location: Results, under the subheading *"Overview of VEPs and DMS datasets used in this study"*.
It is **printed in running prose, not in a table or figure**. It appears **exactly once** in the article.

The sentence had to be assembled past the summariser's ~125-character cap. **The following is a
RECONSTRUCTION FROM 2 FRAGMENTS**, the junction verified by the anchor string `Table EV3)` which I
quoted in the first fragment and used as the explicit start-point of the second:

> "Most correlations observed between alternative assays were in a range between 0.4 and 0.6
> (median 0.54; Table EV3), which is similar to the level of correlation between DMS and the top
> VEPs in our previous study."

Fragment 1 (as served): `Most correlations observed between alternative assays were in a range between 0.4 and 0.6 (median 0.54; Table EV3)`
Fragment 2 (as served, requested as "the words after `Table EV3)` up to the full stop"):
`, which is similar to the level of correlation between DMS and the top VEPs in our previous study`

**Between what, exactly.** Between **alternative assays / alternative score sets of the same
protein** — i.e. different published measurements, under different experimental conditions and
sometimes entirely different assay types. It is **not** replicates of one assay. The supporting
sentences, as served (each cut at the cap, cuts marked):

> "Many DMS datasets provide multiple scores covering different experimental conditions and
> sometimes entirely different…" — tail begins "fitness assays of the same protein" and goes on to
> note that mapping tables link each study's assay names to MaveDB and this study's identifiers
> (Table EV2).

> "We calculated the absolute Spearman's correlations between these score sets in the same protein"
> + tail as served: ", to gauge the reproducibility of DMS results under different conditions"

> "The strongest correlations (> 0.9) were between experiments in extremely similar conditions" +
> tail as served, first part: ", while assays investigating fitness under highly varying
> experimental conditions" — the remainder states that assays using **alternate fitness metrics
> often gave correlations below 0.3**.

So the statistic is an **absolute Spearman's rank correlation**, aggregated as a **median**, over
**pairs of alternative score sets within the same protein**, and the authors' own stated purpose is
"to gauge the **reproducibility** of DMS results **under different conditions**". The spread the
authors print around it is wide and condition-driven: **>0.9** for near-identical conditions, **0.4–0.6**
for most alternative assays, **below 0.3** for alternate fitness metrics.

**The denominator is NOT printed in the text.** The citing sentence gives only the range (0.4–0.6),
the median (0.54) and the pointer `Table EV3`. It states **no number of protein pairs, score-set pairs
or comparisons**. The article text also **never states how many proteins have more than one assay**,
and never gives a total count of score sets. Table EV3 is the only place the denominator could live,
and **I could not read it**.

**(b) Human proteins.** Printed in the **Abstract**:

> "…experiments for 26 human proteins to benchmark 55 different VEPs…"

A second, differently-scoped "26" is printed in Results, *Overview*:

> "…we increased the number of DMS datasets of human single amino acid variants from 13 to 26."

And in Materials & Methods, *DMS identification and criteria*:

> "We retained 13 DMS datasets in human proteins from our previous analysis and identified a further
> 19 studies…"

**Both formulations of "26" are present** — 26 **proteins** (Abstract) and 26 **datasets** (Results) —
because the design selects one representative dataset per protein, so the two coincide by
construction. Neither is hedged; neither carries a citation. The Methods figure (13 retained + 19
further **studies** identified) does not reconcile to 26 by addition; "studies identified" is a
pre-filter count, and I did not resolve the arithmetic. Flagged, not asserted.

The separate clinical benchmark runs on a different and much larger denominator:

> "The distribution of AUROC-based rank scores for unsupervised VEPs on ClinVar and gnomAD variants
> from 985 proteins." (Figure 4A legend; same "985 proteins" wording in Fig 4B, EV4, EV5)
> "Where possible, we obtained predictions from 18 unsupervised VEPs for all variants in these proteins."

**(c) Word search — each term searched separately, over the served article page.**

| term | verdict |
|---|---|
| replicate / replicates / replication | **ABSENT** |
| reliability | **ABSENT** — the adjective *reliable* occurs: "It is crucial that we learn what factors make a DMS dataset reliable for this purpose…" |
| ceiling | **ABSENT** |
| upper bound | **ABSENT** |
| attenuation | **ABSENT** |
| (also checked) experimental error | ABSENT |
| (also checked) measurement error | ABSENT |
| (also checked) reproducibility | **PRESENT, once**: "to gauge the reproducibility of DMS results under different conditions" |
| (also checked) noise | only as **"noisier"**, and about alignments, not DMS: "may be noisier than protein alignments" (Results, clinical-benchmark subsection) |

Scope limit on this table: it covers the **served HTML article page**. Expanded View files and
supplementary text were not searched.

**(d) Correction and re-ranking — NO on the noise reading.**

The paper **does not** adjust, correct, disattenuate, divide or rescale any VEP-vs-DMS correlation
using the DMS-vs-DMS agreement value, and **does not** state that experimental agreement caps, limits
or sets an expectation for predictor performance. The nearest thing in the article is the tail of the
0.54 sentence itself — ", which is similar to the level of correlation between DMS and the top VEPs in
our previous study" — which is a **descriptive juxtaposition**, not a correction and not a stated
ceiling. The Discussion contains **no** ceiling claim.

There **is** a re-ranking, but it is not noise-based. As served:

> "Recalculating the VEP rankings like this (Dataset EV3) does not greatly change the outcome, with
> ESM-1v retaining…"

The recalculation it describes is a **coverage** robustness check, not a noise correction: some VEPs
return no score for certain variants, which could flatter low-coverage methods, so the authors
restricted the analysis to missense variants reachable by a single-nucleotide change and filled
missing scores with each VEP's most benign score per protein. Reported effect: ESM-1v stayed first,
EVE fell second→fourth, mutationTCN fell ninth→twentieth. (Note: `Dataset EV3` here is a *different*
object from `Table EV3`, and `Fig EV3` is a third — the article uses all three labels.)

The paper also prints a negative result about predicting which DMS datasets are good:

> "Interestingly, there is little correspondence between the median VEP correlation with DMS datasets
> and the performance…" (Discussion)

**Unit of analysis, endpoint, comparator, estimand — in the authors' own words where served.**
Unit: individual human single amino acid / missense variants within a protein; for the 0.54 figure
the unit is a **pair of score sets "in the same protein"**. Endpoint: **"absolute Spearman's
correlations"** between score sets, and between VEP predictions and the representative DMS dataset;
separately **AUROC** and **AUBPRC** on clinical variants, summarised as a **"median rank score"**.
Comparator: 55 VEPs against each other and against DMS; for 0.54, alternative assays of the same
protein against each other. Selection rule, as served: "For proteins with multiple DMS datasets
available, the assay that gave the highest median absolute Spearman's correlation…"; "We selected the
dataset with the highest median Spearman's correlation to all VEP predictions for that protein…";
"Only the top-scoring DMS dataset per-protein was taken to represent DMS in the final results."; and
the stated reason, "The use of the median ensures that our assay selection is not skewed by a few
particularly high- or low-correlating VEPs."

### Source 2 — Reeb, Wirth & Rost 2020

**Front matter, as served.** Article type as labelled: **"Research article"** — a **primary study**.
Authors in order: **Jonas Reeb, Theresa Wirth, Burkhard Rost**. *BMC Bioinformatics*, volume **21**,
article number **107**, 2020, published online **17 March 2020** (metadata cover date 2020/12,
issue 1). Note the ledger's "21:107" matches the article number, which is what this journal prints
in place of a page span.

**(e) The heading exists, verbatim.** Served as a third-level heading inside Results, the
**sixth** Results subsection:

> "Experimental agreement sets the benchmark for prediction methods"

Served order of the Results subsections: "DMS studies not complete yet"; "Some correlation achieved
by all methods"; "Envision might approximate experimental values best"; "All classification methods
detect increasing effect strength"; "Beneficial effects difficult to predict"; **"Experimental
agreement sets the benchmark for prediction methods"**; "Assessment of binary classification
(neutral/effect) similar to regression". A matching Discussion subsection is served as "Beneficial
effects neither correctly predicted, nor consistent between experiments".

**(f) All four numbers are printed, all four in that same Results subsection, all in running prose —
none in a table.**

| number | shortest clause as served | location | what it is |
|---|---|---|---|
| **0.21** | `BRCA1 and BRCA1_2015_E3 (ρ = 0.21` | Results, *"Experimental agreement sets the benchmark…"* — sentence, not a table or figure | Spearman ρ between **two experimental measurements on BRCA1** (BRCA1 vs BRCA1_2015_E3), reported for **deleterious SAVs**. Experiment-vs-experiment, not a prediction score. |
| **0.93** | `The strong correlation (ρ = 0.93)` | same subsection, sentence | between **two experiments on bla** ("beta-lactamase TEM precursor"), **bla and bla_2014**, which **measured the same condition**. Experiment-vs-experiment. |
| **0.03** | `Experiments did not correlate at all with each other for beneficial effect (mean ρ = 0.03)` | same subsection, sentence | **mean ρ between experiments, restricted to beneficial-effect SAVs**. Explicitly called a **mean**. The Abstract equates beneficial with **gain-of-function**. |
| **11 / 4** | `Such data were available for 11 measurements on 4 proteins` | same subsection, sentence | the denominator of the between-experiment comparison: **11 measurements on 4 proteins**. |

So the sub-claim's four figures all check out as printed, with their stated attachments: 0.21 to
BRCA1, 0.93 to bla, 0.03 as a **mean** for **beneficial** effects, over **11 measurements on 4 proteins**.

**Coefficient.** Spearman. The between-experiment sentences use only the symbol **ρ**; the coefficient
is named in Methods, *Performance measures*: `Spearman ρ (spearmanr)`. Pearson R is reported elsewhere
in the paper but, per Methods, "not discussed" and not used for these numbers. So "rank correlations"
is a fair description of 0.21 / 0.93 / 0.03.

**Which 4 proteins.** Only **two are named in that subsection**: **BRCA1** and **bla**
("beta-lactamase TEM precursor"). The other two are **not named in the served text of that
subsection**. Methods, *Dataset collection*, mentions **Hsp82**, **beta-lactamase** and **ubiquitin**
as proteins with multiple measurements, but that passage does not explicitly tie them to the
11-measurement comparison, so the identification is **unconfirmed**. A per-protein measurement tally
read off that Methods passage (3, 3, 2, 2) sums to 10 rather than 11; **that arithmetic is the
reading tool's, not the paper's**, and I did not verify it against the served text. Recorded as an
open question, not as an error in the paper.

**(g) Ceiling, correction, re-ranking.**

- **No numeric ceiling is computed.** The paper **frames** experimental agreement as the reference
  point — its heading asserts that agreement "sets the benchmark for prediction methods", and it calls
  that agreement **"One proxy for an answer."** But it **prints no ceiling value**, derives no bound,
  and applies the agreement to no predictor's score.
- **No correction is applied** to any correlation. Words *corrected* and *correction*: **ABSENT**.
  The only uncertainty machinery in Methods is **bootstrap confidence intervals**.
- **Ranking does happen, but not on a noise basis.** As served: "the ranking of methods changed
  crucially depending on the measure used to compare" (Conclusions), and "SNAP2 achieved the highest
  area under the curve" (binary-classification subsection). The ranking variable is the **choice of
  performance measure**, not experimental noise.

**Word search, source 2:** *ceiling* **ABSENT**; *"upper bound"* **ABSENT**; *attenuation* **ABSENT**;
*corrected* **ABSENT**; *correction* **ABSENT**; *reproducibility* **ABSENT**; *replicate* **ABSENT**.
(The concept of between-experiment agreement is carried entirely by the words "experimental agreement",
"consistent between experiments" and "proxy".)

**Unit of analysis, endpoint, comparator, estimand — in the authors' own words where served.**
Unit: **single amino acid variants (SAVs)**, pooled across datasets for the main analysis — e.g.
**32,981 SAVs** in the set the paper calls **"SetCommon"**. Endpoint: **Spearman ρ** between
normalised experimental effect scores and prediction scores, plus **AUC** for binary neutral/effect
classification. Abstract, as served: "normalized the effect scores to evaluate variant effect
prediction methods". Comparators: predictions from **SNAP2, Envision, PolyPhen-2, SIFT and Naïve
Conservation**; and, separately, **other experiments on the same protein** — Fig. 3 caption, as served:
**"For every pair of experimental measurements on the same protein"**. Per-protein and per-measurement
values appear only in specific analyses, the between-experiment comparison among them. Estimand: rank
agreement, and classification discrimination.

## REGIME

**Source 1, the 0.54 figure.** Population: **26 human proteins** with deep mutational scanning data
meeting the paper's inclusion criteria, restricted to **single amino acid (missense) variants**. Unit
of analysis: a **pair of alternative published score sets for one and the same protein**. Operating
condition: the pairs span **different experimental conditions and sometimes entirely different fitness
assays** — the authors' stated purpose is to gauge reproducibility **"under different conditions"**.
Instrument: **absolute Spearman's rank correlation**, aggregated as a **median**. Category: a
**between-assay agreement** statistic.

0.54 is therefore **inside** the regime "median agreement between alternative published assays of the
same protein" and **outside** the regime "agreement between replicates of one assay". The two are not
interchangeable here and the paper's own numbers show why: agreement is **>0.9** when conditions are
nearly identical and **<0.3** when the fitness metric changes. A replicate-level reliability figure
would sit near the top of that range, not at 0.54. Anyone using 0.54 as a replicate reliability, a
noise floor, or a per-assay reliability coefficient has moved it out of the regime in which the authors
established it. Using it as "the median agreement between alternative assays of the same protein" is
inside the regime.

Note also the **denominator regime**: 0.54 is a median over **assay pairs**, not over proteins, not
over variants, and not over VEPs. The number of pairs is unstated in text.

**Source 1, the 26-protein figure.** Inside regime: 26 **human** proteins, DMS of **single amino acid
variants**, one representative dataset per protein. Outside regime: the paper's other denominator is
**985 proteins** for the ClinVar/gnomAD AUROC benchmark with **18 unsupervised VEPs** — a different
population, a different endpoint (AUROC, not Spearman) and a different comparator. The two must not be
blended.

**Source 2, the 0.21 / 0.93 / 0.03 figures.** Population: **4 proteins**, of which only BRCA1 and bla
are named in the subsection; **11 experimental measurements** among them; mixed organism scope (bla is
a bacterial beta-lactamase, BRCA1 human). Unit: a **pair of experimental measurements on the same
protein**. Instrument: **Spearman ρ**. Thresholds/categories: the values are **stratified by effect
class** — 0.21 for BRCA1 reported for **deleterious** SAVs, 0.93 for bla where the two experiments
**measured the same condition**, and 0.03 as a **mean across pairs restricted to beneficial /
gain-of-function** SAVs. So 0.93 and 0.21 are **endpoints of a spread across protein-pairs**, not
estimates of one quantity, and 0.03 is a **different estimand again** because its variant stratum
differs. Treating 0.21 and 0.93 as a single "between-experiment agreement" interval is inside regime;
treating either as a general reliability of DMS is not; and treating 0.03 as agreement over all
variants rather than over the beneficial stratum is a stratum error.

## DEFECTS FOUND

1. **Replicates vs alternative assays — the regime distinction the ledger must get right.** Source 1's
   0.54 is unambiguously **between alternative assays / score sets of the same protein**, measured
   under **different conditions**, and is explicitly framed as reproducibility "under different
   conditions". It is **not** replicate agreement within one assay. The word **replicate never occurs
   in the article at all**. Any ledger wording that calls 0.54 a replicate agreement, a replicate
   reliability or a within-assay noise figure is wrong in regime.

2. **The denominator is COULD NOT READ, not NOT FOUND, and it is not in the text.** The ledger's
   assertion that the denominator lives in Table EV3 is **consistent with** the citing sentence, which
   points there and prints no count itself. But Table EV3 is an Expanded View file I did not open, and
   its caption is **not on the article page**. So the denominator remains **unverified**: I confirm
   only that the text defers it to Table EV3 and states no number anywhere in prose. The article also
   never says how many of the 26 proteins have more than one assay. Do not let "pointer exists" harden
   into "denominator confirmed".

3. **A cut that changes the claim (grammar on both sides).** Quoting source 1 as "…(median 0.54; Table
   EV3)" and stopping there removes the authors' own continuation: ", which is similar to the level of
   correlation between DMS and the top VEPs in our previous study." The truncated form reads as a bare
   measurement awaiting interpretation; the full sentence shows **the authors themselves already
   juxtaposed assay-vs-assay agreement with VEP-vs-DMS correlation**. If the ledger entry rests on the
   authors having failed to notice the comparison, the cut is doing the work, not the source.

4. **Published is not performed — the asymmetry runs the right way here, and it is the finding.**
   Both papers **MEASURE** between-experiment agreement and **PRINT** the numbers. Neither **computes a
   ceiling**, neither **applies a correction**, neither **re-ranks on noise**. Source 1 has no ceiling
   or attenuation vocabulary at all. Source 2 goes furthest: it **asserts** in a heading that
   "Experimental agreement sets the benchmark for prediction methods" and calls the agreement "One
   proxy for an answer" — i.e. it **ANNOUNCES/FRAMES** the benchmark role — but it prints **no bound
   value**, performs **no correction**, and its only re-ranking turns on the **choice of performance
   measure**, not on noise. The distinction between "measured and framed" and "converted into a
   correction" is the whole load-bearing point.

5. **The question was asked in print in 2020 — the gap must be narrowed accordingly.** Source 2's
   section heading is not an incidental remark; it is a titled Results subsection whose claim is
   exactly that experimental agreement benchmarks prediction. An "un-asked question" framing that says
   nobody has noticed DMS-vs-DMS agreement bounds predictor evaluation is **contradicted by this
   heading**. What survives is the narrower and still defensible gap: nobody turns the measured
   agreement into a **quantitative ceiling, a disattenuation, or a noise-aware re-ranking**.

6. **A real but non-noise re-ranking in source 1 that must not be miscredited.** Source 1 does
   recalculate VEP rankings (Dataset EV3), with substantial movement — EVE 2nd→4th, mutationTCN
   9th→20th. The driver is **predictor coverage / missing scores**, with gaps filled by each VEP's most
   benign score per protein. Citing this as a noise-based or agreement-based re-ranking would be wrong.
   Note also the article's three distinct `EV3` objects — **Table EV3** (the assay-pair correlations),
   **Dataset EV3** (the coverage recalculation) and **Fig EV3** (AUBPRC rankings on shared variants).
   These are easy to conflate and a ledger citation to "EV3" is ambiguous as written.

7. **Two differently-scoped "26"s in source 1, plus an unreconciled Methods count.** 26 **human
   proteins** (Abstract) and 26 **DMS datasets** (Results, "from 13 to 26") both appear; they coincide
   because one dataset is selected per protein, but the formulations are different and should be quoted
   as the source states them. Methods separately says 13 retained datasets plus "a further 19 studies"
   identified, which does not add to 26; I did not resolve it and do not assert an error.

8. **Source 2's 4 proteins are only half-named, and a tempting tally is not the paper's.** Only BRCA1
   and bla are named in the subsection carrying the numbers. Hsp82 and ubiquitin appear in Methods as
   multi-measurement proteins but are not tied to the 11-measurement set in served text. The
   observation that a Methods tally sums to 10 rather than 11 is **the reading tool's arithmetic**, not
   the paper's; it is logged as an open question only.

9. **Stratum discipline on 0.03.** Source 2's 0.03 is a **mean ρ restricted to beneficial /
   gain-of-function SAVs**, not an overall agreement. Its companion Discussion heading — "Beneficial
   effects neither correctly predicted, nor consistent between experiments" — states the same finding
   a second time, in words, without a number. Both formulations should be cited; the heading is the
   unhedged one, the 0.03 sentence carries the quantity.

10. **Absence findings are scoped to the served article pages.** My present/absent verdicts for
    *ceiling*, *upper bound*, *attenuation*, *replicate*, *reliability* cover the served HTML of each
    article. Source 1's Expanded View files were not searched, and source 2's served page was cut off
    inside Methods, *Prediction methods*. Silence there is unmeasured, not established.

## ROUTES THAT FAILED

- `curl https://link.springer.com/article/10.15252/msb.202211474` → **curl (56) CONNECT tunnel failed,
  response 403**. **Tool-scoped, not a host block** — the same URL served full text through WebFetch
  immediately afterwards. Exactly the pattern the routing note warns about; no conclusion drawn from it.
- `curl https://bmcbioinformatics.biomedcentral.com/articles/10.1186/s12859-020-3439-4` → same
  **CONNECT 403**. Also tool-scoped.
- `WebFetch https://bmcbioinformatics.biomedcentral.com/articles/10.1186/s12859-020-3439-4` →
  **HTTP 302** to `link.springer.com/article/10.1186/s12859-020-3439-4?code=…&error=cookies_not_supported`,
  returned to me rather than followed. Content obtained on the follow-up call. **This cost one of five
  fetches and returned no content**, which is why source 2 had to be read in a single consolidated pass.
- **Whole-paragraph transcription refused.** A request to WebFetch for two complete paragraphs of
  source 1 as consecutive segments was **declined by the reading tool as excessive quotation**. The
  segmented-reconstruction technique therefore worked only for **short, sentence-level tails requested
  one at a time**. Consequence: no verbatim full paragraph and **no word count** for the 0.54 paragraph.
  The 0.54 sentence in this note is a labelled **2-fragment reconstruction**, junction anchored on
  `Table EV3)`.
- **Table EV3 (source 1 Expanded View) not opened.** No route attempted — the fetch budget (5) was
  exhausted by the Springer reads and the BMC redirect. This is **COULD NOT READ / NOT ATTEMPTED**, and
  is the one open item.
- PubMed Central / Europe PMC: **not attempted**, per routing (PMC reCAPTCHA, Europe PMC HTTP 429).
  PMCID 10407742 (source 1) and PMCID 7077003 (source 2) surfaced in search and were treated as
  identifiers to convert, never as routes. Unpaywall: **skipped entirely**, no contact address supplied.
  No personal identifier was placed in any URL, query string, header or form.

## BEARING ON THE LEDGER ENTRY

**Every number the ledger cites is really printed, in both sources.** Source 1 prints **median 0.54**,
once, in a Results sentence under "Overview of VEPs and DMS datasets used in this study", and **26
human proteins** in the Abstract. Source 2 prints **ρ = 0.21** (BRCA1), **ρ = 0.93** (bla), **mean
ρ = 0.03** (beneficial effects) and **"11 measurements on 4 proteins"**, all four in running prose in a
Results subsection headed, verbatim, **"Experimental agreement sets the benchmark for prediction
methods"**. No fabrication, no misattribution of journal, authors or year. Both are primary studies;
neither is a review, and neither attributes these particular findings to anyone else.

**One regime correction is mandatory.** 0.54 is **between-assay**, not **between-replicate**. The
article contains the word *replicate* nowhere. If the entry says "replicate agreement", fix the wording;
if it reasons from 0.54 as a within-assay noise floor, the inference does not survive, because the
authors' own spread is >0.9 for near-identical conditions and <0.3 for alternate fitness metrics — 0.54
is a **mixture across heterogeneous assay pairs**, which is a different quantity from replicate noise.

**One asserted denominator is unverified.** The ledger's claim that the denominator lives in Table EV3
is as far as I can take it: the text defers to Table EV3 and prints **no count** of pairs or proteins
anywhere in prose. Table EV3 itself **could not be read** within budget. Mark the denominator **open
(COULD NOT READ)**, not confirmed and not absent. One fetch of the Expanded View file would close it.

**The gap the entry rests on survives, but only in its narrow form.** Both papers **measure and print**
between-experiment agreement; **neither computes a ceiling, applies a correction, disattenuates
anything, or re-ranks predictors on a noise basis.** Source 1 has no ceiling/attenuation vocabulary at
all, and its one re-ranking (Dataset EV3) is a **coverage** check, not a noise check. So "the measured
agreement is never converted into a quantitative correction or a noise-aware ranking" is **supported by
both sources**.

**But the broad form of the gap is dead, and source 2 kills it.** A titled Results subsection asserting
that "Experimental agreement sets the benchmark for prediction methods", which calls that agreement
"One proxy for an answer", is the question being **asked in print in March 2020**. The entry must not
claim the connection is unnoticed. Rewrite the gap as: *measured, named and framed as the benchmark —
never quantified into a ceiling, never applied as a correction, never used to re-rank.*

**And the entry must not lean on the truncated 0.54 quote.** The sentence continues ", which is similar
to the level of correlation between DMS and the top VEPs in our previous study" — Livesey & Marsh make
the juxtaposition themselves. The gap is the **missing arithmetic**, not a missing observation. Any
phrasing implying the authors never noticed that VEP-DMS correlations sit at the assay-agreement level
is contradicted by the back half of the very sentence the number comes from.

**Minor hygiene.** Cite source 1 as *Mol Syst Biol* **19**(8), article **MSB202211474**, 2023 — the
publisher front matter prints **no page span**. Cite source 2 as *BMC Bioinformatics* **21**, article
**107**, 2020, **Research article**, authors **Reeb, Wirth, Rost**. Disambiguate source 1's three
distinct `EV3` objects (**Table** EV3 = assay-pair correlations; **Dataset** EV3 = coverage
recalculation; **Fig** EV3 = AUBPRC rankings) wherever the entry cites "EV3". Quote source 2's 0.03 with
its **beneficial/gain-of-function stratum** attached, and note its second, unhedged, number-free
formulation in the Discussion heading "Beneficial effects neither correctly predicted, nor consistent
between experiments".
