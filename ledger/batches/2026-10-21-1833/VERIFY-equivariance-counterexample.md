# VERIFY — the permutation-equivariance derivation (adversarial break attempt)

## CLAIM

The derivation the entry's rejection rests on, in two halves which must be kept apart because they
have different evidential status:

**Half A (algebraic equivariance).** In a standard decoder-only transformer, relabelling the
residual-stream coordinates by a permutation leaves the computed function identical: linear maps
absorb the permutation; RMSNorm/LayerNorm gains and biases, dropout masks and residual adds permute
with it; RoPE acts inside head dimensions; the MLP nonlinearity lives in the MLP hidden basis.

**Half B (statistical consequence).** With i.i.d. initialisation over residual coordinates and an
ELEMENTWISE optimiser such as AdamW, the identity of the top-m highest-magnitude residual channels
is an exchangeable random set, therefore the expected Jaccard overlap between two independently
seeded runs of one recipe equals the uniform-permutation null and the expected Spearman rank
correlation of the per-channel magnitude vector is zero.

Two adversaries produced this independently; neither could cite a theorem; both labelled it their
own derivation. My task was to try to break it from published literature, on four lines.

## READ LEVEL

Per source. Nothing was refused; both caps were reached (6/6 searches, 5/5 fetches).

| Source | Read level |
|---|---|
| arXiv:2307.12941 | **FULL TEXT** — abs page and PDF both served |
| arXiv:2403.00986v3 (arXiv HTML) | **PARTIAL FULL TEXT** — served text cut before §4.2 |
| arXiv:2606.20743v1 (arXiv HTML) | **FULL TEXT as served** for the questions asked |
| arXiv:2601.22966v1 (arXiv HTML) | **PARTIAL FULL TEXT** — Appendix A.4 (setup) not in served content |
| arXiv:2606.31963, arXiv:2503.09543, arXiv:2205.11380 | **NOT READ BY ME.** Used this batch's own first-hand verification notes (`VERIFY-gauge-2606.31963.md`, `VERIFY-polypythias-2503.09543.md`, `VERIFY-puccetti-2205.11380.md`). Everything I take from them is labelled as second-hand within this ledger. |
| 7 further candidates (listed under ROUTES) | **DISCOVERED, NOT OPENED** — fetch cap exhausted |

All quotations below are **as served by the summariser**. Where the ~125-character cap applied I
asked for ordered consecutive segments; nothing below is assembled across a non-consecutive gap and
nothing is completed by inference.

## WHAT THE SOURCE SAYS (quotations as served)

### (1) PUBLISHED COUNTEREXAMPLE — **ABSENCE. None found.**

The test: the same residual-stream/hidden dimension INDEX carrying an outlier or massive activation
in two or more **independently initialised** training runs of **one** recipe. Two best candidates
opened; both fail the test explicitly, and in the most informative way — they print indices and
then say they have only one seed.

**arXiv:2606.20743v1, "Massive Activations Are Architecturally Robust: A Controlled
Scratch/Commitment Residual Stream Test", Maruthi Vemula (UNC Chapel Hill), cs.LG, 17 Jun 2026.**
Decoder-only transformers, 160M and 290M, FineWeb-Edu, four configurations (vanilla, suppress,
ledger, ledger-hs; ledger-hs only at 290M). Genre: primary study. It **prints the indices**:
Table 2 "dim" column at 290M — vanilla **828**, suppress **550**, ledger (commitment stream C) and
ledger-hs **22**, with the ledger model's scratch stream D also **22**. And it states, verbatim as
served:

> "We train one seed per configuration and use English web text only."

So the three differing indices are **three different recipes with one seed each** — not a cross-seed
comparison in either direction. The one same-index statement is **within one model**: the commitment
outlier sits on "the very same" dimension as the scratch stream (22). At 160M it says the outlier is
on "the same dimension as the scratch stream" and **gives no index**. The paper **never states**
whether the index is or is not consistent across seeds or runs. The reader also flagged that
"the same few feature dimensions are involved across inputs" appears in the Introduction as a
description of **prior literature**, not as this paper's own result — so it must not be attributed
to it.

**arXiv:2601.22966v1, "A Unified View of Attention and Residual Sinks: Outlier-Driven Rescaling is
Essential for Transformer Training", Zihan Qiu, Zeyu Huang, Kaiyue Wen, Peng Jin, Bo Zheng and 14
others (Qwen Team, Edinburgh, Stanford, Tsinghua), 30 Jan 2026.** Also prints indices — dimension
**1423** in Qwen3-235B-A22B, **1572** in Qwen3-Next, **304** in the 24.6B-A1.7B MoE. These are
**different models of different families and sizes**, i.e. different recipes, so they are outside the
test by construction, and **no two of them share an index**. Seeds are never mentioned; ablations use
a 2B model on 120B tokens. The consistency the paper asserts is across inputs, tokens and layers,
not across runs:

> "The pattern is stable across inputs, appearing as a dark vertical stripe in activation
> visualization"

> "dimension 304 consistently deviates from 1 across all layers"

**From the batch's own first-hand notes (second-hand to me).** Puccetti (2205.11380) Table 4 prints
exactly two index columns, one row per model — `bert-base-uncased` 308/381, `roberta-base` 77/588,
`multiberts-seed-1` 218/674, ViT 187/759, BERT-medium (ours) 281/378 — **no two rows share an
index**, there is **one** multiBERTs seed, and the paper's nearest cross-run statement is
within-seed across checkpoints and qualitative ("the same for all the checkpoints for this seed").
PolyPythias (2503.09543) is the one large multi-seed suite — 10 seeds at each of 14M/31M/70M/160M/
410M — and contains **no per-dimension or per-channel activation analysis of any kind** (the words
"activation", "outlier dimension", "channel", "neuron", "per-dimension", "hidden state" do not occur
in it).

**Models sharing a pretrained initialisation do not count, and that is what the one transformer
multi-run paper I read full-text gives.** arXiv:2403.00986 uses five **independently initialised**
MultiBERTs (seeds 1–5, differing in initialisation and batch order) — so it clears that bar — but it
reports merging/alignment outcomes as means with standard errors over the 10 pairings, **not any
index-overlap statistic**. And the gauge paper's "cross-seed" pairs are, per the batch note,
**fine-tuning seeds off a shared base**, which is exactly the excluded case.

**So: the published record I reached contains no instance of the same index in two independent runs
of one recipe, AND no instance of the contrary measurement either. It is an unmeasured question, not
a settled one.**

### (2) A COMPONENT THAT BREAKS EQUIVARIANCE — **none found in what I read.**

No published argument or measurement that a standard component of real recipes is non-equivariant to
a residual-coordinate permutation turned up in anything I opened. What I did find, each pointing the
other way or off target:

**Mechanism is LEARNED, not predetermined (2601.22966).** The paper attributes the outlier's
functional role to RMSNorm's global statistics —

> "allowing the outlier in one dimension to influence all other dimensions."

— and says the PreAffine vector λ₁ "can learn to amplify those specific dimensions". The reader's
direct answer: the paper does **not** argue that any component makes particular indices special
a priori, and it makes no claim about optimisers. That is weak published support **for** a priori
index interchangeability, not against it.

**A real constraint, but in the wrong basis (2403.00986).** The paper states that **features across
heads are NOT permutable**: ignoring heads "will not lead to a valid permutation" for function
preservation, and that variant is included only for comparison. Q and K may take different inner
permutations than V, but all three must share the same **outer** head ordering. This constrains
permutations of the head/internal basis; it does not touch a permutation of the **residual** basis,
which the Q/K/V projections absorb. Off target for Half A.

**The gauge group is LARGER, not smaller (2606.31963, via the batch note).** LayerNorm residual
charts carry permutation gauge `S_d`; RMSNorm charts **with generic per-channel gain** carry
signed-permutation gauge `B_d`, from which the paper concludes "Thus permutation-only alignment is
symmetry-incomplete for RMSNorm models." A sign flip being an additional symmetry **enlarges** the
group; and because Half A/B concern **magnitude**, signs are irrelevant to the top-m set. Not a
break. Note also that this paper's only natural independent-seed measurement is a **sign** statistic
("about 50%" mismatch, 10M params, 4 layers, d=256, running prose) — a sign quantity, not a
magnitude-index quantity.

**The one mechanism I could not examine: finite precision and reduction order.** A published
literature exists — surfaced by search, **NOT OPENED**: arXiv:2511.17826 "Deterministic Inference
across Tensor Parallel Sizes That Eliminates Training–Inference Mismatch", arXiv:2506.09501
"Understanding and Mitigating Numerical Sources of …", arXiv:2601.21824 "DASH: Deterministic
Attention Scheduling for High-throughput Reproducible LLM Training". **None of these is framed as a
statement about permutation equivariance**, and per instruction (9) I will not dress a literature
about a different thing up as a flag of this gap. The honest form: Half A is an **algebraic** identity
and a bitwise identity under tiling/sharding of the hidden dimension is a **stronger, different**
statement that nothing I read addresses; a shard-boundary or split-K effect would be index-dependent
in a way the derivation does not discuss. Unexamined, not refuted.

**One boundary from the claim's own wording, needing no citation.** Half A explicitly scopes to RoPE
("rotary position embedding acts inside head dimensions"). A positional scheme added **directly in
the residual basis** with index-dependent values is outside that scope. I opened no source for this,
so I cite none; it is a regime boundary of the claim, not a counterexample to it.

### (3) THE OPPOSITE FINDING IN A NEIGHBOURING FIELD — **published, but one quoted string is not the source's words.**

**Identifier exists.** arXiv:2307.12941 = **"On Privileged and Convergent Bases in Neural Network
Representations"**, **Davis Brown, Nikhil Vyas, Yamini Bansal**, submitted **2023-07-24 (v1)**,
subject classes **cs.LG, cs.AI, cs.CV**. Front matter taken from the abs page, not from any short
form. Genre: **primary empirical study** (not a review, not a theory paper).

**String 1 — "neural networks do not converge to a unique basis": VERBATIM, but abstract-only and
qualifier-stripped.** As served, it is item (1) of the abstract's numbered findings:

> "(1) Even in wide networks such as WideResNets, neural networks do not converge to a unique basis;"

The grammar on the **left** of the cut carries the whole point: "**Even in wide networks such as
WideResNets**". The sentence is a claim about width failing to produce convergence, not a general
theorem. The **body does not use this wording at all**. Its two formulations are both hedged:

> "This suggests that there is a large variance in the basis of neurons that are found in a trained
> network."

> "This argues against convergent learning in neural networks from the perspective of the basis of
> neurons."

So there are three formulations: one unhedged, in the abstract, with a width qualifier; two hedged,
in the body ("suggests", "argues against … from the perspective of"). None carries a citation.

**String 2 — "up to permutation": NOT PRESENT.** Checked alone and unprimed, on the abs page and in
the PDF. Neither contains it. The closest wording is in §3, and it is a **question**, not an
operationalisation statement:

> "are the two neural networks the same up to a permutation of neurons per layer?"

**What the paper measures, in its own words.** Metric: "permutation-correlation" (**perm-corr**),
defined as a maximum over permutations of summed covariances between the two networks' neurons,
served as `maxp∈Permn Σi Cov(X1i, X2p(i))`, and the paper notes it is "the measure used by Li et al.
[19] and Jordan et al. [15] to find an appropriate permutation" — so the metric is attributed to
others. Unit of analysis: **individual neurons**, "averaged across all the layers"; the served text
does not say how convolutional channels or spatial positions are treated. Matching: the permutation
maximising the covariance sum, with **no solver named**. Comparator: two networks with independent
initialisations and batch orderings.

**Number of independent runs: NOT STATED.** Figure 1 compares "two networks trained with independent
initializations and batch orderings"; the count is not given anywhere in the served text.

### (4) IS IT A CITED THEOREM ANYWHERE? — **Half A is a published, derived assertion. It is not a numbered proved theorem in anything I read. Half B has no source at all.**

**arXiv:2403.00986v3, "Merging Text Transformer Models from Different Initializations"** states
Half A explicitly, in the paper's own voice, with algebra on the residual equations (Eqs. 7–8), and
the reader's direct answer is that it is **not** a numbered proposition/lemma/theorem and carries
**no formal proof**. Strings as served:

> "maintain the functional equivalence of the overall model."

> "the permutation needs to be the same for both addends."

> "any permutation to the output would need to permute the features of the LayerNorm module as well."

> "the entire Transformer architecture uses the same" {P, Pᵀ} matrices for all residual-connection
> weights

and this "reduces the degrees of freedom" in alignment. The residual-stream derivation **cites no
paper**; the LayerNorm handling cites **Stoica et al. (2024)**; Related Work cites prior work for the
general point only —

> "Permutation and scaling invariances also lead to functionally identical minima that differ in the
> weight space."

Permutable axes, as the paper lists them: residual/model dimension (one shared {P, Pᵀ} across the
whole residual path, LayerNorm weights permuted with it); MLP hidden units (W₁ by P, W₂ by Pᵀ, per
layer); attention heads as whole units (own permutation per layer); head dimension within each head.
Not permutable: features across heads. Setting: **bert-base-uncased MultiBERTs seeds 1–5**
(encoder, LayerNorm), 10 pairings, GLUE per the abstract/section titles (the served text was cut
before §4.2 named the tasks).

**arXiv:2606.31963 Proposition 4.1** (via the batch note) is a **numbered** proposition, but it is the
**negative** direction — "no canonical coordinate transport between independently specified
parameterizations" exists "from function-level information alone" — and the batch note's own warning
applies: reading it as evidence that cross-seed index identity was *measured* and found absent would
be reading a theorem as a result. Its gauge-group statements (`S_d` for LayerNorm charts, `B_d` for
RMSNorm charts with generic per-channel gain) are the nearest thing to a stated symmetry-group
proposition for a transformer residual chart that this batch has verified first-hand.

**Strong unopened candidates for a stated, proved version of Half A**, all discovered this session,
**none read**: "Beyond the Permutation Symmetry of Transformers" (par.nsf.gov/servlets/purl/10657158
— the title itself presupposes "the permutation symmetry of transformers" as an established object);
arXiv:2610.18471 "Graph Metanetworks for Transformer Based Language Models"; arXiv:2506.13018v2
"Symmetry in Neural Network Parameter Spaces"; Godfrey et al., NeurIPS 2022, "On the Symmetries of
Deep Learning Models and their Internal Representations". Titles only, as search served them.

**Half B: nothing.** No source I opened states, let alone proves, that exchangeability implies
expected Jaccard equal to the uniform-permutation null or expected Spearman zero for top-m residual
channels. And the metric the prediction is about has, per the batch note, only been **DEFINED** —
2606.31963's top-k overlap, activation magnitude, **k = 10**, one prose line in Appendix H, with no
cross-run value printed under that name anywhere.

## REGIME

- **2307.12941 — vision.** ResNet-20 on CIFAR-10 with width multipliers 1–32 (Fig. 1; also 4× and 8×
  in Appendix A, plus a modified linear-residual-stream variant); Myrtle-CNN on CIFAR-10 to 92%
  accuracy; ConvNeXt on CIFAR-10; ViT on ImageNet (widths unspecified). Unit: **neurons per layer**,
  averaged across layers. Estimand: the max-covariance permutation correlation between two runs.
  No language model; no residual-stream coordinate; no magnitude top-m set; no Jaccard; no Spearman.
  Note a front-matter/body mismatch to carry: the abstract names **WideResNets**, and no WideResNet
  experiment appears in the served body text.
- **2403.00986 — encoder, LayerNorm, BERT-base scale.** Five independently initialised MultiBERTs,
  GLUE fine-tuning, 10 pairings, means ± standard errors. Half A is asserted for this architecture
  class; it is where the claim's premise is published, and it is an encoder with LayerNorm, not a
  decoder-only RMSNorm/RoPE model.
- **2606.20743 — decoder-only, 160M/290M, FineWeb-Edu, ONE SEED PER CONFIGURATION.** Unit: the
  residual dimension index within a single run; endpoint: presence/magnitude of a massive activation
  and its dim. The cross-seed regime does not exist in this paper.
- **2601.22966 — production Qwen-family models, 1B to 235B, ablations at 2B/120B tokens, seeds never
  mentioned.** Unit: dimension index within a released model; consistency claimed across inputs,
  tokens and layers.
- **The claim handed to me sits inside none of these regimes.** Half A's regime (decoder-only,
  RMSNorm, RoPE) is adjacent to 2403.00986's (encoder, LayerNorm) and the algebra transfers in the
  obvious way, but the published assertion is for the latter. Half B's regime — expected top-m index
  overlap across independently seeded runs of one recipe — is **measured by nothing I reached**.

## DEFECTS FOUND

1. **"up to permutation" is a misquotation.** The string does not appear in arXiv:2307.12941 on
   either route. The paper's words are a §3 question, "are the two neural networks the same up to a
   permutation of neurons per layer?". An entry presenting "up to permutation" as the paper's
   operationalisation is presenting a paraphrase as a quotation.
2. **"neural networks do not converge to a unique basis" is verbatim but cut before its qualifier.**
   It is abstract-only, item (1) of a numbered list, and begins "**Even in wide networks such as
   WideResNets**". The body never uses the wording and states the point twice, both times hedged.
   Quoted bare it reads as a general result; in the paper it is a claim about width.
3. **Regime transfer in line (3) is large and must be stated.** Vision CNNs/ViT, per-layer neurons,
   max-covariance perm-corr (a metric the paper attributes to Li et al. and Jordan et al.), run count
   not stated. Using it as a result about decoder-only residual-stream magnitude indices is a
   neighbouring-field analogy, not a measurement in the claim's regime.
4. **The adversaries' "no theorem" is nearly right but understates the record.** Half A exists in
   print — 2403.00986, with equations, a single shared residual permutation, and LayerNorm weights
   permuted along — as an **asserted derivation without a proof or a number**. That upgrades Half A
   from "unsourced derivation" to "sourced assertion, unproved, stated for a LayerNorm encoder".
   Four plausible sources for a proved version were found and not opened.
5. **Half B remains wholly unsourced, and Half B is what the rejection runs on.** Nothing states or
   proves the exchangeability ⇒ null-Jaccard / zero-Spearman step. A rejection citing published
   support for Half A while leaning on Half B is citing the wrong half.
6. **Published is not performed, on both sides.** Every paper I opened that prints a dimension index
   prints it for **one run per recipe** (2606.20743 says so in a sentence; 2601.22966 never mentions
   seeds). The only ten-seed suite measures no activations at all. 2606.31963 **DEFINES** the top-k
   overlap metric (magnitude, k=10) and prints no cross-run value for it. So the quantity Half B
   predicts has, in the record I reached, never been **MEASURED** — not by anyone, in either
   direction.
7. **Absence must not be written up as confirmation.** I found no counterexample. That is an absence
   of evidence in a space nobody has instrumented, not evidence that the null holds. The nearest
   independent-seed number in this batch (≈50% sign mismatch, 10M, d=256) is a **sign** statistic
   and is silent on magnitude-index identity.
8. **The two halves have different logical types and the entry should not blur them.** Half A is an
   exact algebraic identity, insensitive to seeds. Half B is a statement about an **expectation** over
   seeds — so even a single published pair sharing an index would be a draw from the predicted
   distribution, not a refutation. A genuine counterexample would have to be an overlap **above the
   uniform null at a stated significance**, and no paper I opened reports an overlap at all.
9. **One mechanism is unexamined rather than cleared.** Finite-precision reduction order over the
   hidden dimension (tiling, split-K, tensor-parallel shard boundaries) is index-dependent and is the
   one place Half A's "identical" could fail in practice. A literature exists; I did not open it; it
   is not framed as a permutation-equivariance result. Record as unexamined.

## ROUTES THAT FAILED

**None refused, none blocked.** Every URL I requested served content on the first attempt:
arxiv.org/abs/2307.12941, arxiv.org/pdf/2307.12941, arxiv.org/html/2403.00986v3,
arxiv.org/html/2606.20743v1, arxiv.org/html/2601.22966v1. No DOI resolution, no PMC/Europe PMC
conversion, no publisher paywall, no curl was needed; Unpaywall was not contacted and no identifier
of any person was put into any URL.

**Caps reached, which is why the check stops here, not a failure:** 5/5 fetches, 6/6 searches.

Gaps inside successful reads: **2403.00986v3** served text was **cut before §4.2**, so the GLUE task
list and all §4.2+ results are unread; **2601.22966v1** served content **did not include Appendix
A.4** (experimental setup), which is where a seed count would live if one exists — so its "seeds
never mentioned" is "not in the served text", slightly weaker than a full-document absence.

**Discovered and NOT OPENED (cap exhausted) — each would change an answer above if it were read:**
- par.nsf.gov/servlets/purl/10657158, "Beyond the Permutation Symmetry of Transformers" — line (4).
- arXiv:2610.18471, "Graph Metanetworks for Transformer Based Language Models" — line (4).
- arXiv:2506.13018v2, "Symmetry in Neural Network Parameter Spaces" — line (4).
- Godfrey et al., NeurIPS 2022, "On the Symmetries of Deep Learning Models and their Internal
  Representations" — line (4).
- arXiv:2511.01023, "Seed-Induced Uniqueness in Transformer Models" — line (1); title is directly
  about seeds and it is the single most important unopened item for the counterexample question.
- arXiv:2511.17826 / arXiv:2506.09501 / arXiv:2601.21824 (DASH) — line (2), reduction order.

**Not re-read by me:** arXiv:2606.31963, arXiv:2503.09543, arXiv:2205.11380. I relied on this
batch's own first-hand notes for them and have labelled every use.

## BEARING ON THE LEDGER ENTRY

**The derivation survived the attempt, but only Half A survived on evidence; Half B survived on
nobody having looked.** The entry's rejection should be restated along that seam.

- **(1) ABSENCE, and it is a measurement gap.** No published report of the same residual/hidden index
  in two independently initialised runs of one recipe. The two papers that print indices say, or
  imply, one seed per recipe — 2606.20743 in a sentence ("We train one seed per configuration"),
  2601.22966 by never mentioning seeds and by comparing different model families (1423 / 1572 / 304,
  no shared index). Puccetti's five rows share no index and rest on one multiBERTs seed. PolyPythias
  has fifty runs and no activation analysis. **Report this as an absence, not as confirmation**, and
  say plainly that the contrary measurement is equally absent.
- **(2) No published break found.** The one paper that explains the mechanism calls the amplified
  dimensions **learned**, not predetermined. The one real non-permutability (features across heads,
  2403.00986) is in the head basis, not the residual basis. The gauge result makes the group
  **larger** (`B_d` ⊃ `S_d`) and concerns sign, which magnitude discards. The entry should add one
  caveat it currently lacks: finite-precision reduction order over the hidden dimension is
  index-dependent and unexamined here, so Half A should be stated as an **algebraic** identity, not a
  bitwise one.
- **(3) The opposite finding is genuinely published — with two quotation defects.** arXiv:2307.12941
  exists, by Brown, Vyas and Bansal (2023-07-24, cs.LG/cs.AI/cs.CV). "neural networks do not
  converge to a unique basis" is verbatim but **abstract-only** and must carry "Even in wide networks
  such as WideResNets"; the body says it twice, hedged. **"up to permutation" is not in the paper** —
  the entry must drop the quotation marks and use the paper's §3 question instead. Regime: vision
  CNNs/ViT, per-layer **neurons**, perm-corr; run count not stated; the abstract names WideResNets
  with no WideResNet experiment in the served body. Note the paper's first finding — that rotations
  cannot be inverted, so representations are not fully rotation-invariant unlike linear networks — is
  a **privileged-basis** result, which is compatible with, and presupposed by, a permutation-only
  symmetry. It supports the claim's premise structure while reporting the null empirically in a
  neighbouring regime.
- **(4) Half A is now citable; Half B is not.** Cite arXiv:2403.00986v3 for the residual-stream
  permutation symmetry — a single shared {P, Pᵀ} across the whole residual path with LayerNorm
  weights permuted along, asserted with algebra on Eqs. 7–8, **not numbered, not proved**, residual
  derivation citing no paper, LayerNorm handling citing Stoica et al. (2024), for a **LayerNorm
  encoder** (MultiBERTs). Cite arXiv:2606.31963 Proposition 4.1 only for the **negative** statement
  it actually makes. Four stronger candidates for a proved version were surfaced and not opened —
  the entry should record them as the next read rather than conclude that no theorem exists.
- **The single most consequential correction.** An entire rejection resting on Half B rests on an
  expectation nobody has measured, expressed in a metric that has been **defined once (k=10) and
  never evaluated across runs**. Half B also cannot be refuted by one shared index: it predicts a
  mean, so a counterexample must be an overlap above the uniform null at stated significance. The
  entry should say so, and should name arXiv:2511.01023 as the unopened item most likely to settle
  line (1).
