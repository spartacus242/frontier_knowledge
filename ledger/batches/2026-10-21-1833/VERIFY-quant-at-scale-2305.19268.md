# VERIFY — arXiv:2305.19268, "Intriguing Properties of Quantization at Scale"

Checker: fresh-context pass, 2026-10-21. Budget used: 1 search, 5 fetches (cap 6/5).

## CLAIM

As the ledger entry names the source: arXiv:2305.19268, "Intriguing Properties of Quantization at
Scale", described as "ablating optimization choices against outlier-dimension emergence", UNOPENED by
all three passes of this batch and named as the entry's remaining novelty risk.

Sub-claims handed to me:
(a) identity and front matter as served;
(b) what it MEASURES about outlier dimensions — unit, endpoint, comparator, estimand;
(c) **the question that matters**: does it anywhere compare WHICH residual-stream / hidden dimension
    INDICES carry outliers ACROSS independently seeded or independently trained runs of one recipe —
    an index overlap, a set intersection, a rank correlation, or a printed list of indices per run;
(d) does it vary the random SEED as an ablated factor, and what factors does it ablate;
(e) any claim about whether an outlier-channel layout can be SHARED or must be RECALIBRATED per
    checkpoint;
(f) regime — scales, architectures, quantization setting.

## READ LEVEL

**Full text, summariser-mediated.** The paper body was read through WebFetch against
`https://arxiv.org/pdf/2305.19268v1` (three separate prompts) and the NeurIPS 2023 camera-ready
`https://papers.neurips.cc/paper_files/paper/2023/file/6c0ff499edc529c7d8c9f05c7c0ccb82-Paper-Conference.pdf`
(one prompt). The abstract was additionally read as served on `https://arxiv.org/abs/2305.19268` and
reconstructed from 12 ordered consecutive segments (see below). This is NOT "could not read" and NOT
"abstract only": section numbers, table captions, table cell values and appendix text were returned.

Caveat that belongs on the record: every **absence** claim below ("the word seed does not appear",
"no index list is printed") is the fetch summariser's report of its own search over the served PDF
text, not my own grep of a local file. curl to arxiv.org is refused at this proxy (CONNECT tunnel
403, tool-scoped), so I could not download the PDF and run pdftotext + grep myself. The absences are
corroborated by two independent documents (arXiv v1 and the NeurIPS camera-ready) and by the positive
content of the outlier tables, which are counts-only. I state them as findings, with that provenance.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity / front matter as served

Title: "Intriguing Properties of Quantization at Scale".
arXiv ID as served: **2305.19268v1**, submitted **2023-05-30**; v1 is the only version listed.
Subjects: cs.LG, cs.AI. **No journal reference and no comments field on the arXiv abs page.**

Authors, in the order printed: Arash Ahmadian\*†, Saurabh Dash\*, Hongyu Chen\*, Bharat Venkitesh,
Stephen Gou, Phil Blunsom, Ahmet Üstün, Sara Hooker. Affiliations as printed: Cohere and Cohere For
AI; footnote "\*" = "Equal Contribution.", footnote "†" = "Also affiliated with the University of
Toronto & the Vector Institute for Artificial Intelligence." (Author emails are printed on page 1; I
did not transcribe them and put no personal identifier into any URL.)

Venue, established by search and by fetching the camera-ready, NOT from the arXiv front matter:
**NeurIPS 2023** (poster 72114; proceedings PDF 6c0ff499edc529c7d8c9f05c7c0ccb82). The camera-ready
carries the same title and the same eight authors in the same order. If the ledger entry needs a
citation, note that the arXiv v1 front matter itself carries no venue — the venue is an external
fact, not something the identifier serves.

**Type of source: primary study** (controlled pre-training ablation plus post-training quantization
evaluation), with a Related Work section. Not a review, protocol, guideline, editorial or column.

### Abstract — RECONSTRUCTION from 12 ordered consecutive fragments

Labelled a reconstruction: assembled only from consecutive returns of one request for ordered
segments of ≤100 characters; junctions checked for continuity; nothing completed by inference. The
server also reported a total abstract length of 1,147 characters, consistent with 12 segments of ≤100.

> "Emergent properties have been widely adopted as a term to describe behavior not present in smaller
> models but observed in larger models. Recent work suggests that the trade-off incurred by
> quantization is also an emergent property, with sharp drops in performance in models over 6B
> parameters. In this work, we ask "are quantization cliffs in performance solely a factor of scale?"
> Against a backdrop of increased research focus on why certain emergent properties surface at scale,
> this work provides a useful counter-example. We posit that it is possible to optimize for a
> quantization friendly training recipe that suppresses large activation magnitude outliers. Here, we
> find that outlier dimensions are not an inherent product of scale, but rather sensitive to the
> optimization conditions present during pre-training. This both opens up directions for more
> efficient quantization, and poses the question of whether other emergent properties are inherent or
> can be altered and conditioned by optimization and architecture design choices. We successfully
> quantize models ranging in size from 410M to 52B with minimal degradation in performance."

The load-bearing sentence for this ledger entry, as served: "Here, we find that outlier dimensions
are not an inherent product of scale, but rather sensitive to the optimization conditions present
during pre-training."

### The same claim restated elsewhere — all formulations (defect-check 4)

Section 6, Related Work (strongest, unhedged, no citation attached to the claim itself):
> "Our work is the first to show that outliers are not inherent to scaling large language models."
> "Rather than an emerging property, they are a result of particular training methods."

Section 1, Contributions:
> "and can be avoided at scales as large as 52B given the right optimization choices."
> "Our results show that we can introduce simple INT8 post-training quantization with negligible
> impact on performance" / "due to choices we make during the pre-training stage."

Section 5:
> "Our results in Section 4 find that sensitivity to quantization at scale is not an inherent emergent
> property."

Section 7, Conclusion (the hedged, mechanism-level formulation):
> "higher levels of regularization through common techniques such as weight-decay, and
> gradient-clipping" / "leads to lower post-training quantization degradation."
> "emergent features are significantly less pronounced when training with bf16."

Broader Impact:
> "Rather, our results support the conclusion that optimization choices play a large role" / "whether
> emergent properties are present."

Section 5 also hedges the outlier metric itself, and this is the sentence most likely to be misread
as an index-stability claim (camera-ready wording):
> "outlier dimensions are not always a consistent proxy for quantization sensitivity."
and (arXiv v1, Section 5):
> "However, we did not observe a clear correlation between these measures and sensitivity to
> quantization."

Note the asymmetry: the *headline* is about outliers not being inherent to scale; the *downstream*
quantization result rests on end-task degradation, and the paper explicitly says its own outlier
counts do not correlate cleanly with quantization sensitivity.

### (b) What it MEASURES about outlier dimensions

**Unit of analysis:** a hidden/activation **feature dimension** of a given model variant, aggregated
over a fixed evaluation set. Appendix B.3, as served:
> "We classify a feature dimension as an outlier dimension if the *same* dimension is classified as an
> outlier" / "across 20 random samples from the C4 validation set (Raffel et al., 2020)."
> "These samples are fixed when experimenting with different outlier definitions."

Note carefully what "the *same* dimension" means there: the same index across **20 C4 samples of one
model**. It is a within-model, across-input stability requirement. It is **not** across runs, seeds or
checkpoints. This is exactly the phrase a reader could mistake for the cross-run comparison in (c).

**Endpoint / metric.** Three definitions appear, in this order:
1. The Dettmers et al. (2022) criterion, quoted as served (Section 5):
   > "Activation feature dimensions are classified as outlier dimensions when the activation values
   > (denoted as $\alpha$ )" / "are greater than 6.0 at more than 25% of layers and 6% of tokens."
   and in Appendix B.3:
   > "a hidden feature dimension is classified as outlier dimension if the activation magnitudes
   > (denoted as $\alpha$ )" / "are greater than 6.0 ( $\alpha > 6$ ) at more than 25% of layers and
   > 6% of tokens."
   Result of applying it, as served from Appendix B.3 — **and the served glyph is damaged**:
   > "However, we find $\theta$ outlier dimensions across all of our 6B variants and fully trained
   > models using this definition."
   I reproduce it as served and flag the damage rather than silently correcting it: in context (and
   given Section 5's "we find that a threshold of 6.0 is too high to classify a feature dimension as
   an outlier" / "for all the variants we consider") the intended token is almost certainly **0**, but
   I did not read a legible "0" and I do not supply one.
2. **Searched constant threshold**, α > 4.2, Appendix B.3:
   > "we manually searched for the lowest threshold such that only one dimension is classified as
   > outlier" / "in our smallest (410M) fully trained model."
   This threshold is therefore **calibrated on one model (410M) and then applied to the others** — an
   important regime fact for (e).
3. **Adaptive / z-score threshold**, Table 5 caption: "adaptive threshold α > 4σ_token + μ_token".
   > "We further experimented with not fixing the threshold and using z-score outlier detection"
   > "We were not able to establish clear trends with this method either as shown in Table 5."

**Printed quantities (Table 5), as served.** Caption fragments: "Outlier statistic using different
thresholding rules" / "Top Table: constant threshold α > 4.2" / "Bottom Table: adaptive threshold
α > 4σ_token + μ_token". Columns: `Variant | # Outliers | %Seq Affected | %Layers Affected`.

Top table (constant α > 4.2), as extracted:
| Variant | # Outliers | %Seq Affected | %Layers Affected |
|---|---|---|---|
| {all other variants} | 0 | 0 | 0 |
| dtype=fp16 (wd=0.01) | 6 | 68.4 | 65.5 |
| cohere_410M | 1 | 25.0 | 26.3 |
| cohere_6B | 0 | 0 | 0 |

Bottom table (adaptive α > 4σ_token + μ_token), as extracted:
| Variant | # Outliers | %Seq Affected | %Layers Affected |
|---|---|---|---|
| dropout=0.1 | 2 | 44.0 | 40.5 |
| dropout=0.4 | 2 | 44.9 | 42.9 |
| dropout=0.8 | 1 | 19.2 | 25 |
| wd=0.1 (gc=none) | 2 | 28.0 | 39.3 |
| wd=0.01 (gc=none) | 0 | 0 | 0 |
| wd=0.001 (gc=none) | 2 | 34.3 | 34.5 |
| dtype=bf16 (wd=0.1) | 2 | 33.0 | 36.9 |
| dtype=fp16 (wd=0.1) | 2 | 41.1 | 42.9 |
| dtype=bf16 (wd=0.01) | 0 | 0 | 0 |
| dtype=fp16 (wd=0.01) | 8 | 66.2 | 64.3 |
| cohere_410M | 55 | 88.2 | 86.2 |
| cohere_6B | 7 | 65.5 | 56 |

Caution on this transcription: the PDF-to-text extraction returned the two halves without a visible
rule between them, and three row labels (`dtype=fp16 (wd=0.01)`, `cohere_410M`, `cohere_6B`) recur
with different values across the halves. My split above follows the caption's Top/Bottom structure and
the row ordering as returned; the row-to-half assignment of the first four rows is inference from
layout and should be re-checked against the rendered table before any of these numbers is quoted in
the ledger. The *shape* of the table is what matters here and is not in doubt: **counts and
percentages per variant, no indices.**

**Comparator.** For the quantization result: FP16 baseline vs W8A8 (and W4 weight-only) of the *same*
trained model, per variant and per scale (Table 4, Figure 1). For the outlier result: optimization
variants against each other, one trained model per configuration. **Estimand:** the effect of a
pre-training optimization choice on (i) post-training-quantization degradation on end tasks and
(ii) the *count* of outlier dimensions under a stated threshold rule. There is **no** estimand over
seeds or over run-to-run variation.

### (c) THE QUESTION THAT MATTERS — cross-run comparison of outlier dimension INDICES

**No such comparison appears.** Stated plainly, and this is the finding, not a hedge:

- No index overlap, no set intersection, no Jaccard, no rank correlation, and **no printed list of
  outlier dimension indices for any run**, in either arXiv v1 or the NeurIPS camera-ready.
- What the paper publishes instead is **counts and affected-fraction percentages per variant**
  (Table 5: `# Outliers`, `%Seq Affected`, `%Layers Affected`). In the taxonomy of this ledger, the
  paper **MEASURES** the *number* of outlier dimensions and never **PRINTS** any *identity* of one.
  There is no number to name, because the quantity does not exist in the document.
- The nearest thing in the paper is a **within-model, across-input** index-stability requirement — a
  dimension counts only if "the *same* dimension is classified as an outlier" across 20 fixed C4
  validation samples (Appendix B.3). That is a *definition device for a single model*, not a
  cross-run comparison, and it is applied inside one checkpoint at a time.
- The camera-ready's "outlier dimensions are not always a consistent proxy for quantization
  sensitivity" is about the metric's **predictive value**, not about the **stability of outlier
  locations**. It must not be cited as an index-stability result.

### (d) Seed and the ablated factors

**The paper does not vary the random seed, and the word "seed" does not appear in either document**
(summariser-reported search over both PDFs; see the read-level caveat).

The factors it does ablate, as the paper states them (Table 1, caption as served: "Optimization
choices that are explored for pre-training in our controlled setup."):
- Weight decay: 0.001, 0.01, 0.1
- Gradient clipping: None, 1
- Dropout: 0, 0.1, 0.4, 0.8
- Half-precision data type: bf16, fp16

Explicitly **not** ablated: learning rate, batch size, data, seed, architecture, training objective.
Architecture and objective are excluded on the record, Limitations as served:
> "We do not vary the architectural design and training objective in our experiments"
> "given our goal of a controlled experimental set-up and the large computational cost of each
> variant."
> "We leave exploring the impact of different training objectives and architecture design choices to
> future work."

Each configuration is trained **once**. "random initialization" appears twice — introduction: "each
experiment variant trained from random initialization"; Section 3.1: "training the same large scale
model architecture from random initialization" — and both are statements that variants start fresh,
**not** reports of repeated runs. "repeated runs" does not appear; the single occurrence of "variance"
is Section 6 describing Xiao et al., "migrating some of the activation variances into the model
weights", i.e. activation statistics, not run-to-run variability. No table or figure reports more than
one training run of the same configuration; the rows that look like repeats are the same model under a
different precision (Table 4, Appendix A.3) or a different outlier threshold (Table 5).

### (e) Shared vs per-checkpoint outlier-channel layout

**No such claim, in either direction.** The paper says nothing about whether an outlier-channel layout
can be shared across models or checkpoints or must be recalibrated. There is nothing to quote, so
nothing is quoted. The adjacent facts, which are not that claim:
- One-shot PTQ with **no calibration step**: Section 2 defines it as quantizing "without additional
  finetuning steps for calibration". Scales are computed "through uniform symmetric mapping",
  vector-wise (per-row activations, per-column weights) — i.e. computed from the tensor at hand, so
  the question of a reusable layout does not arise in their method.
- **No mixed-precision outlier decomposition**: outliers are not handled as a separate channel set in
  the reported INT8 results, so there is no "layout" object to share.
- The one thing genuinely reused across models is the **detection threshold** (4.2), searched on the
  410M fully trained model and then applied to the other variants. That is threshold reuse for
  *analysis*, not channel-layout reuse for *inference*.
- Section 4 / 3.2 on checkpoints: "the relative impact of varying the bit representation emerges early
  in training which confirms the main trend." and "In practice, we found performance at early
  checkpoints predictive of fully trained model performance." These are about the *ordering of
  variants* being stable early, not about outlier indices being stable across checkpoints.

Per defect-check 9: the paper's silence here is silence, not a prohibition; and its noting that
outlier counts do not correlate with quantization sensitivity is the absence of a *different* thing
and is not a flag of the index-overlap gap.

### (f) REGIME

- **Scales:** 410M, 6B, 13B, 52B parameters. Ablations were run on **410M and 6B early checkpoints**
  (Section 3.1); only the best-recipe models at 410M / 6B / 13B / 52B were fully trained (Section 4,
  Figure 1, Table 4). The outlier statistics in Table 5 are for the 6B variants and the fully trained
  410M / 6B models — i.e. the outlier analysis does **not** reach 13B or 52B.
- **Architecture:** one decoder-only GPT-style Transformer family — pre-norm layernorm, separate input
  and output embeddings, GeLU, 2048-token context, 51,200-token SentencePiece vocabulary (Section
  3.2). Architecture and objective held fixed by design (Limitations).
- **Quantization setting:** **post-training, one-shot, no calibration finetuning.** W8A8 INT8 for
  weights *and* activations with vector-wise scaling (per-row activation scales, per-column weight
  scales; Section 2, Eq. 1) — finer than per-tensor, and the paper does not describe per-group
  granularity. Additionally **W4 column-wise weight-only** quantization at 52B and smaller. FP16 is
  the baseline. No QAT, no QAF.
- **Outlier-detection regime:** activations on 20 fixed random C4 validation samples; thresholds
  α > 6.0 (Dettmers rule, yields the damaged-glyph "$\theta$" count), α > 4.2 (searched on 410M), and
  α > 4σ_token + μ_token (adaptive). Each figure must be re-derived at its own author's threshold —
  the counts in Table 5's two halves are **not** comparable across halves.

## DEFECTS FOUND

1. **The entry's one-line description is accurate but materially under-specifies the ablation.** "Ablating optimization choices against outlier-dimension emergence" is true. The ablated set is exactly four factors — weight decay, gradient clipping, dropout, half-precision dtype — and **seed is not among them**. Any ledger sentence that leans on this paper for run-to-run or seed-to-seed behaviour is outside its design.
2. **If the ledger entry treats this paper as the novelty risk for a cross-run outlier-index claim, the risk does not materialise.** The paper publishes outlier **counts**, never **indices**; it performs no overlap, intersection or correlation of index sets across runs, seeds, variants or checkpoints. This is a clean absence in both arXiv v1 and the camera-ready.
3. **Live misreading trap, within the paper's own wording:** Appendix B.3's "the *same* dimension is classified as an outlier / across 20 random samples" is a within-model, across-input criterion. Quoted without its 20-C4-samples tail it reads as cross-run index stability. Grammar on both sides of that cut changes the claim — a verbatim-but-truncated quotation of it would be a misquotation.
4. **Second misreading trap:** the camera-ready's "outlier dimensions are not always a consistent proxy for quantization sensitivity" uses "consistent" about predictive validity, not about index location. Do not cite it for layout stability.
5. **Granularity, not absence, on one axis:** the paper has a full outlier *classification* apparatus (three threshold rules, per-variant counts, %seq and %layers affected) that stops short of the grain the question asks about (which index, in which run). That is a granularity gap in the published quantity, and worth saying as such rather than as "the paper ignores outlier dimensions".
6. **Scale mismatch inside the paper's own evidence:** the headline quantization result runs to 52B, but the outlier-count evidence (Table 5) covers only 410M and 6B. A ledger sentence pairing "52B" with an outlier-dimension count would be mixing two regimes.
7. **Damaged glyph reproduced, not corrected:** "we find $\theta$ outlier dimensions across all of our 6B variants" — served as `$\theta$` where a numeral is expected. Flagged, not silently read as "0".
8. **Table 5 transcription hazard:** the extracted text does not separate the Top and Bottom halves, and three variant labels recur with different values. My Top/Bottom split is partly inferred from layout; verify against the rendered table before quoting any individual cell.
9. **Front matter carries no venue.** arXiv v1 lists no journal-ref and no comments. The NeurIPS 2023 attribution comes from a search result and from fetching the proceedings PDF, not from the identifier the entry names.
10. **Absence claims are summariser-mediated.** I could not grep a local copy (curl to arxiv.org refused at this proxy), so "seed does not appear" rests on the fetch tool's search of the served text in two independent documents, corroborated by the counts-only shape of Table 5. Strong, but not a local string search, and the record should say so.

## ROUTES THAT FAILED

- `curl -sSL https://arxiv.org/pdf/2305.19268v1` → `curl: (56) CONNECT tunnel failed, response 403`. Tool-scoped refusal at the egress proxy, consistent with the batch's routing note; **not** an arxiv.org block — WebFetch served the same PDF four times. Consequence: no local PDF, so no pdftotext + grep, hence the absence-claim caveat above. The proxy was not probed further.
- No other route was refused. arxiv.org/abs, arxiv.org/pdf and papers.neurips.cc all answered through WebFetch on first attempt. No DOI resolution, no PMC/Europe PMC, no publisher host, and no Unpaywall was needed or attempted; no personal identifier was placed in any URL, header or query string.

## BEARING ON THE LEDGER ENTRY

The source is **real, open, and now read in full** — the "UNOPENED" status on this entry can be
cleared, and "could not read" was never the situation.

On the novelty risk the entry flags: **it does not fire.** The paper is the strongest available
demonstration that outlier dimensions are a product of pre-training optimization rather than of scale
alone, and it establishes that by ablating four optimization factors (weight decay, gradient clipping,
dropout, bf16-vs-fp16) and counting outliers per variant at 410M/6B. It **never** asks whether the
*same dimension indices* carry outliers across independently seeded or independently trained runs of
one recipe. It does not vary the seed, trains each configuration once, prints no index list, and
computes no overlap or correlation across runs. It also takes no position — in either direction — on
whether an outlier-channel layout can be shared or must be recalibrated per checkpoint; its own
pipeline is calibration-free one-shot PTQ with vector-wise scales, so the layout question never
arises for it.

So the un-asked question survives contact with this source. Two guardrails for the entry's wording:
(i) do not let the paper's Appendix B.3 "the *same* dimension ... across 20 random samples" phrasing be
read as a partial answer — it is within-model across-input, and quoting it short of its tail is a
misquotation; (ii) if the entry wants to claim this paper *could* have answered the question cheaply,
that is fair — it had multiple trained variants in hand — but the entry should say the paper is
**silent**, not that it found indices unstable or stable. A result proved under one set of assumptions
is silent outside them.
