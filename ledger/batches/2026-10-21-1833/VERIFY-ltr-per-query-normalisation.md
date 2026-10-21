# VERIFY — learning-to-rank / metasearch per-query score normalisation

Checker: fresh context. Budget used: 4 searches of 6, 5 fetches of 5 (fetch cap reached).
No mcp__hearthbot__ tool called.

## CLAIM

The entry's own named promotion condition for UQ-20261021-12 (per-prompt additive
offset in pairwise-trained reward models). The entry's Novelty-confidence line states
that novelty is "Not High" partly because "the learning-to-rank/metasearch per-query
score-normalization literature — the structural analogue in the field that owns the
method — was surfaced by title in three separate runs and opened in none", and the
Novelty-queries line names the surfaced title as **arXiv:2105.04651**.

The claim to check is therefore twofold:
- (a) what arXiv:2105.04651 is and whether it prints a BETWEEN-QUERY versus
  WITHIN-QUERY variance share of a ranker's score;
- (b) whether that literature, read in its own words, contains either
  (i) the share of a pairwise-trained ranking model's score variance that is a
  per-query additive offset, or (ii) the rate at which decisions taken by comparing
  scores ACROSS queries change when scores are centred within query.

## READ LEVEL

| Source | Read level |
|---|---|
| arXiv:2105.04651 (abs page) | **full front matter + abstract as served**, abstract reconstructed from 13 consecutive segments |
| arXiv:2105.04651 (PDF v1) | **full text** (section headings, figures, metrics and motivation sentences all served) |
| arXiv:2211.01494 (ar5iv HTML) | **PARTIAL full text** — served text truncated partway through Section 4.2 (inside Proposition 5's proof). **No experiments section reached**, so its results tables were NOT read. |
| Montague & Aslam, "Relevance Score Normalization for Metasearch" (Dartmouth PDF) | **full text** |
| Yan et al., "Scale Calibration of Deep Ranking Models" (research.google/pubs/pub51402) | **NOT OPENED** — surfaced by title twice; fetch cap reached first |
| arXiv:2608.26762, "Equal Ranking Quality, Different Decisions: Training Order-Consistent LLM Scorers" | **COULD NOT READ** — see ROUTES THAT FAILED. This is NOT a "not found": it is indexed and its title was served by search. |

COULD NOT READ and NOT FOUND are kept separate: every source above exists; one of
them (2608.26762) could not be read within budget.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) arXiv:2105.04651 — IDENTITY DOES NOT MATCH THE ENTRY'S LABEL

Front matter as served on the abs page:

- Title: "Not All Relevance Scores are Equal: Efficient Uncertainty and Calibration
  Modeling for Deep Retrieval Models"
- Authors: Daniel Cohen, Bhaskar Mitra, Oleg Lesota, Navid Rekabsaz, Carsten Eickhoff
- arXiv ID: 2105.04651v1; Subjects: cs.IR; Submitted 2021-05-10; v1 is the only version
- DOI: 10.1145/3404835.3462951 (an ACM DOI; the PDF's own copyright line places it at
  SIGIR '21 as a full paper). No comment field, no separate journal-ref.
- Front matter taken from the abs page itself, not from any short form.

**This is not a per-query score-normalisation paper.** It is a primary empirical and
methodological study of *Bayesian uncertainty* over a neural ranker's relevance score.

Abstract — RECONSTRUCTION from 13 ordered consecutive segments served under the
summariser's ~125-character cap, assembled only from consecutive returns, no word
supplied by inference:

> "In any ranking system, the retrieval model outputs a single score for a document
> based on its belief on how relevant it is to a given search query. While retrieval
> models have continued to improve with the introduction of increasingly complex
> architectures, few works have investigated a retrieval model's belief in the score
> beyond the scope of a single value. We argue that capturing the model's uncertainty
> with respect to its own scoring of a document is a critical aspect of retrieval that
> allows for greater use of current models across new document distributions,
> collections, or even improving effectiveness for down-stream tasks. In this paper, we
> address this problem via an efficient Bayesian framework for retrieval models which
> captures the model's belief in the relevance score through a stochastic process while
> adding only negligible computational overhead. We evaluate this belief via a ranking
> based calibration metric showing that our approximate Bayesian framework
> significantly improves a retrieval model's ranking effectiveness through a risk aware
> reranking as well as its confidence calibration. Lastly, we demonstrate that this
> additional uncertainty information is actionable and reliable on down-stream tasks
> represented via cutoff prediction."

(13 fragments; junction grammar checked at each seam; the word "query" appears once,
in SEG1, and no segment mentions normalisation.)

**Does it print a between-query vs within-query variance share? NO.** It does not
decompose score variance into between-query and within-query components and reports no
share or percentage of variance attributable to query-level offsets. What it does
instead, in the published-is-not-performed vocabulary: it **MEASURES a different
variance object** — per-document mean-to-variance and mean-to-skew relationships
(Figure 2) and document score CDFs for a *single* query (Figure 3). Of the ledger's
quantity it does not even produce a DEFINITION; it **ASSERTS the non-comparability as a
premise and engineers around it.**

Cross-query comparability sentences, as served:

> "Neural relevance scores are not calibrated across queries, so document relevance is
> not distributed on a scale from 0 to 1"

> "One difficulty of this task is that variance can substantially differ across queries"

Its two normalisation-adjacent devices, as served:

> the CDF approach has "the advantage of normalizing scales to a range of [0, 1] across
> multiple queries"

> ERCE "removes all comparisons between pairs of relevant documents, pairs of
> non-relevant documents, and documents scored from different queries"

Note the direction of the second: the paper's own calibration metric **deletes**
cross-query comparisons rather than measuring what happens to them. The paper nowhere
describes centring or z-scoring scores within a query.

What it measures, in its own terms: unit of analysis = query-document pairs, documents
ranked as top-200 lists per query. Datasets = MS MARCO passage, TREC 2019 Deep Learning
Track, Robust04 (title queries, MS MARCO-trained models applied out of distribution).
Endpoints = MRR (MS MARCO), nDCG@200 (TREC DL 2019), nDCG@20 (Robust04), ERCE
(calibration), and the ratio of Choppy F1 to oracle F1 (cutoff prediction); paired
t-tests. Comparators = BERT-L2, BERT-L4, Conv-KNRM each in deterministic (D) and
MC-Dropout Bayesian (B) form, plus a generative BERT baseline and a risk-based language
model baseline for cutoff prediction. Estimand = whether mean MC-Dropout scores match
deterministic performance, whether last-layer MC-Dropout improves ranking calibration
and risk-aware (CVaR) reranking, and whether uncertainty features improve cutoff
prediction. Sections: 1 Introduction, 2 Related Work, 3 Measuring Retrieval Uncertainty
(3.1-3.5), 4 Experiments (4.1-4.6), 5 Results (5.1-5.5), 6 Conclusion.

### (b)-(c) The field in its own words — nearest two sources actually opened

**NEAREST ON THE MECHANISM: Bai, Jagerman, Qin, Yan, Kar, Lin, Wang, Bendersky,
Najork, "Regression Compatible Listwise Objectives for Calibrated Ranking with Binary
Relevance", arXiv:2211.01494.** Front matter as served: "Proceedings of the 32nd ACM
International Conference on Information and Knowledge Management (CIKM '23), October
21-25, 2023, Birmingham, United Kingdom"; DOI 10.1145/3583780.3614712; copyright line
"rightsretained"; all nine authors at Google. Primary methodological + empirical study.

This is the ledger's per-prompt-offset mechanism stated in the ranking field's own
vocabulary. Quotations as served:

> "their loss functions are invariant to rank-preserving score transformations" (Intro)

> "tend to learn scores that are not scale-calibrated to regression targets" (Intro)

> "the SoftmaxCE loss is translation-invariant" (Sec. 3)

> "could give scores that are arbitrarily worse with respect to regression metrics" (Sec. 3)

> on PairwiseLogistic: "mainly considers the pairwise score differences" (Sec. 3)

> the log-sum-exp term "is an unknown constant and has no effects on the value or
> gradients" (Sec. 4.1)

Eq. 8 as printed: `s_i -> log P_i - log Sum_j P_j + log Sum_j exp(s_j)`; the paper then
"drop[s] the constant term" to form virtual logits (Eq. 9).

The field does NOT use the ledger's words: the served text contains no "per-query
shift" and no "identified only up to a query-dependent constant". Its invariance claims
are about translation and rank-preserving transformations of the score vector.

**Does it print either limb? NO, in the served portion.** What it does instead:
- **DEFINES** the calibration target via global minima, e.g. `sigma(s_i) -> E[y|q,x_i]`
  (Sec. 3, Prop. 5) and `sigma(s_i)/Sum_j sigma(s_j) -> P_i/Sum_j P_j` (Eq. 11);
- **PROVES** that ListCE attains its global minimum at
  `T(s_i)/Sum_j T(s_j) -> E[y_i|q,x_i]/Sum_j E[y_j|q,x_j]` (Prop. 2, Eq. 19);
- prints no number in the served portion (truncated before the experiments).
Headline claim as served, without numbers: the approach "consistently achieves either
best or competitive result in terms of both regression and ranking metrics."
Unit of analysis = a query and its list of documents; labels binary; datasets named only
as "several public LTR benchmarks" and "YouTube Search" in the served portion; endpoints
= ranking metrics (NDCG named) and regression metrics (LogLoss for binary, MSE for
graded); comparator = multi-objective "SigmoidCE+SoftmaxCE", plus regression-only and
ranking-only; estimand = scores calibrated to E[y|q,x] with ranking quality preserved.
**Flagged read-level limitation:** because the served text stopped inside Sec. 4.2, I
cannot state that the experiments section prints no variance share — only that the
theory sections do not, and that the paper's declared metric set (NDCG, LogLoss, MSE)
contains neither a variance share nor a flip rate.

**NEAREST ON THE OPERATION: Mark Montague and Javed A. Aslam, "Relevance Score
Normalization for Metasearch", Department of Computer Science, Dartmouth College.**
Front matter as served names no venue and no year — I record that as served rather than
importing a citation from elsewhere. Primary empirical study.

Motivation as served — engineering for fusion, and ACROSS SYSTEMS, not across queries:

> "The goal of relevance score normalization is to make relevance scores comparable
> across input systems."

> "Even if we cannot interpret them individually, perhaps we can make the scores
> comparable between systems."

> "The algorithms that we investigate in this paper do not require training data."

Schemes defined in Table 1, as served: Standard = "Shift min to 0, scale max to 1";
Sum = "Shift min to 0, scale sum to 1"; ZMUV = "Shift mean to 0, scale variance to 1".
Sec. 6.3 adds 2MUV (mean shifted to two, unit variance). ZMUV is applied within each
query (e.g. "the min score given for each query"), so the *operation* is the ledger's
within-list centring; the *target* of comparability is between systems.

**Does it print either limb? NO.** No between-/within-query variance decomposition, no
share of variance attributable to a per-list offset, and no rate at which rankings or
comparisons change under normalisation. It reports only average precision. Unit of
analysis = retrieval runs fused per query, average precision averaged over queries,
random subsets of systems drawn 200 times (Sec. 6.2). Collections = TREC 3 (topics
151-200, 40 systems), TREC 5 (251-300, 61 systems), TREC 9 (451-500, 105 systems, web
track), and a 10-system TREC 5 subset (Table 3, Sec. 6.1). Endpoint = average precision
of the fused output versus the best input system. Comparators = Standard, Sum, ZMUV,
2MUV crossed with CombSUM and CombMNZ. Estimand not formally stated.
Results as served, Sec. 6.3: "The ZMUV norm almost always performed significantly better
than the standard norm." (CombSUM, Fig. 1); on TREC 5, ZMUV and Sum let CombSUM
"outperform the best input." (Fig. 1); "ZMUV performs very poorly with CombMNZ," while
Sum "almost always improves CombMNZ." (Fig. 2); Fig. 4: "There is no clear winner
between these two."
**Published-is-not-performed note:** the paper reports no exact numeric gains in the
text; the values exist only in plotted figures. So even its own effectiveness delta is
plotted, not printed.

### (d) REGIME — motivation as stated

The normalisation in this literature is motivated by **calibration and fusion
engineering, not by an identifiability argument about a pairwise objective.** Quoted
motivations:

- Bai et al.: "the pCTR model is required to be well calibrated because it affects the
  downstream auction and pricing models"; "modern systems in these applications have
  multiple stages and downstream stages consume the predictions from previous ones".
  Its Sec. 4.1 conflict argument is about the *gradients of two losses pushing scores
  toward different targets*, not about non-identifiability of the objective.
- Montague & Aslam: "The goal of relevance score normalization is to make relevance
  scores comparable across input systems."
- Cohen et al.: "Neural relevance scores are not calibrated across queries, so document
  relevance is not distributed on a scale from 0 to 1" — the non-comparability is a
  premise, and the response is a CDF transform plus a metric that deletes cross-query
  pairs.

The shift invariance IS stated in this field ("the SoftmaxCE loss is
translation-invariant"; PairwiseLogistic "mainly considers the pairwise score
differences"), but it is stated as a *property of the loss that obstructs a downstream
numerical use*, never as a parameter-identifiability result, and never attached to a
measurement of how big the free term is.

Three regime mismatches between this literature and the ledger's claim:
1. **Direction of the fix.** Bai et al. pin the score to an ABSOLUTE regression target
   `E[y|q,x]` by adding label information. The ledger's candidate fix REMOVES the
   per-query offset by centring. These are different operations and need different
   measurements; a method that pins a scale is silent on the size of the term it pins.
2. **Axis of comparability.** Metasearch normalises across SYSTEMS within a query. The
   ledger's quantity is across QUERIES for one scorer. The operation coincides; the
   estimand does not.
3. **Objective family and unit.** LTR here is listwise/softmax (and pairwise logistic)
   over a candidate list per query, with documents as items; the ledger is a pairwise-
   trained reward model over responses per prompt. The invariance class is the same, so
   the structural analogy is real — but no opened source instantiates it for a
   pairwise-trained scorer's score variance.

### (e) PLAIN STATEMENT — does this literature answer either limb?

**No. It defines and engineers around the per-query offset without measuring either
quantity.** For a pairwise-trained scorer:

- **Limb (i)** — share of score variance that is a per-query additive offset: **no
  opened source prints it, and none defines it as a quantity.** Cohen et al. assert the
  non-comparability; Bai et al. state the invariance and prove calibration targets;
  Montague & Aslam normalise and measure average precision. Nothing names a percentage.
- **Limb (ii)** — rate at which cross-query score comparisons flip under within-query
  centring: **no opened source prints it.** Montague & Aslam are nearest in SHAPE (they
  vary the per-list normalisation and measure the outcome), but the endpoint is average
  precision of a *fused* run across systems, not a flip rate across queries, and their
  numbers are plotted rather than printed.

An absence is a finding, and it is this: a second, independent literature turns out to
have **published the premise** (shift invariance of ranking losses) and **not the
measurement** — the same pattern Gate 5 found in DPO and Reward Collapse.

## DEFECTS FOUND

1. **MISIDENTIFIED EXEMPLAR (affects the entry's own words).** The entry's Novelty-
   queries line presents arXiv:2105.04651 as an instance of "learning-to-rank /
   metasearch per-query score-normalization literature". It is not. It is Cohen et al.,
   "Not All Relevance Scores are Equal", a Bayesian *uncertainty and calibration*
   paper whose only normalisation device is a CDF transform to [0,1], and whose own
   calibration metric (ERCE) **excludes** cross-query comparisons. The entry should
   either re-label this title or name a real per-query-normalisation exemplar
   (Bai et al. arXiv:2211.01494, or Yan et al. "Scale Calibration of Deep Ranking
   Models") in its place.
2. **SILENCE-IS-NOT-A-PROHIBITION / wrong-absence risk.** Cohen et al. do note an
   absence — "few works have investigated a retrieval model's belief in the score
   beyond the scope of a single value" — but that is the absence of *uncertainty*
   modelling, not the absence of a between-/within-query variance share. It must not be
   read as a flag of the ledger's gap.
3. **PUBLISHED IS NOT PERFORMED, twice.** Cohen et al. state that "variance can
   substantially differ across queries" and never quantify the cross-query component.
   Montague & Aslam run the per-query centring (ZMUV) and print no numeric gain in text
   at all; the values are in figures only.
4. **GRANULARITY GAP, not absence.** The field does classify the obstruction (loss
   invariant to rank-preserving / translating transformations) but stops above the grain
   the ledger needs (how much of the fitted score's variance that free term carries).
5. **INCOMPLETE READ, declared.** arXiv:2211.01494's served text truncated inside
   Sec. 4.2, so its experiments section was not read. My "no variance share" finding for
   that paper covers its theory sections and its declared metric set only.
6. **ON-POINT LEAD LEFT UNCHECKED.** arXiv:2608.26762, "Equal Ranking Quality, Different
   Decisions: Training Order-Consistent LLM Scorers", is the most limb-(ii)-shaped title
   found anywhere in this check — its title asserts exactly the ledger's thesis (equal
   ranking quality, different decisions, order-consistent training of LLM scorers). It
   could not be read. Recording it as an unchecked on-point lead, NOT as an absence.

## ROUTES THAT FAILED

- `https://arxiv.org/pdf/2608.26762` — served as a placeholder, "[This PDF is empty or
  contains no machine-readable text]". No front matter, no abstract, nothing quotable.
  Not a refusal and not a 404: the identifier is indexed and its title was returned by
  search. The fetch cap (5 of 5) was reached on this call, so the `arxiv.org/abs/`
  route for the same identifier was never tried. **COULD NOT READ.**
- Yan, Qin, Wang, Bendersky, Najork, "Scale Calibration of Deep Ranking Models" —
  surfaced by title at research.google/pubs/pub51402 in two separate searches, **NOT
  OPENED** (no fetch budget remained). This is the canonical "scale calibration" paper
  and remains the single most likely place in this field for a printed number.
- No search and no fetch was refused by the proxy or by any host. Unpaywall was not
  used; no personal identifier was placed in any URL, header or query string.

## BEARING ON THE LEDGER ENTRY

**The entry's named promotion condition is now discharged, and it discharges in the
entry's favour on the quantity while costing it one sentence of accuracy.**

1. **The gap survives in the newly opened literature.** Neither limb (i) nor limb (ii)
   is measured anywhere in the LTR/metasearch per-query normalisation literature that
   was opened. The "Novelty — how this differs" paragraph's closing sentence — "no
   source NAMES a between-/within-prompt variance share for a pairwise-trained reward
   model" — now extends to a second field: no source names a between-/within-QUERY
   variance share for a pairwise-trained RANKER either.
2. **But the premise finding generalises, which further narrows novelty.** The entry's
   Gate 5 finding ("the per-prompt term is written down... and never measured") now has
   a second, independent instance: "the SoftmaxCE loss is translation-invariant" and
   PairwiseLogistic "mainly considers the pairwise score differences" (Bai et al.,
   Sec. 3). The identifiability observation must stay excluded from the novelty claim,
   and the entry should say the exclusion is confirmed in TWO fields, not one.
3. **The entry's "Not High" confidence line needs a factual correction.** The structural
   analogue was real but the named title was wrong. Replace arXiv:2105.04651 with
   arXiv:2211.01494 (Bai et al., CIKM '23) as the exemplar, and re-describe the
   neighbour as: *states the shift invariance, pins the scale to an absolute regression
   target instead of centring, measures NDCG / LogLoss / MSE, prints no variance share
   and no flip rate.*
4. **A regime distinction the entry can now use.** The LTR fix and the ledger's fix run
   in opposite directions: calibrated ranking ADDS label information to pin an absolute
   scale; the ledger's candidate SUBTRACTS a per-query mean to remove the free term.
   The existence of the former is therefore not evidence about the magnitude of the
   latter, which strengthens the entry's "what would count as an answer" item (iii).
5. **Two leads remain live and should be run before the entry's confidence is raised.**
   Yan et al. "Scale Calibration of Deep Ranking Models" (NOT OPENED) and
   arXiv:2608.26762 "Equal Ranking Quality, Different Decisions: Training
   Order-Consistent LLM Scorers" (COULD NOT READ). The second is title-level on point
   for limb (ii) and is the most likely single source to flip this entry. Until it is
   read, the entry's novelty on limb (ii) rests on an unchecked neighbour and should not
   be promoted above Medium.
