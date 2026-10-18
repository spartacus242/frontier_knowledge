# UQ-20261018-12 — LATE Gate 4, adversary 1 (independent, cold)

Date: 2026-10-18. Prior Gate 4 verdict STRUCK; Gate 2 grade void. Read: the Gate 0-3 record
only (no -entry/-adversary/-verify file opened). ESTABLISHED FACTS block treated as given.
Budget used: 8 searches / 8, 5 fetches / 6.

## What I added that the record and the facts block did not have

Three papers pose the candidate's estimand in vocabularies the record never searched. Two are
decisive. I opened them at first hand.

### NEW PRIOR N1 — arXiv 2607.09800, Zekai Shang (sole author, UIUC). READ FULL TEXT (HTML v4,
chars 0-100000 of 104782; final 4782 NOT read).
Title discrepancy to flag: the arXiv abs listing says "Auditing Invisible Weight Updates with
Reference Traces"; the v4 HTML first page says "Reference Traces for Auditing Invisible Weight
Updates and Guiding Exact-Budget Protection." Same sole author. v1 2026-07-09, v4 2026-08-27,
cs.LG, no venue.
The struck record dismissed this paper FROM ITS TITLE as "a model-auditing/provenance paper, not
a numerics-incidence paper" and never opened it. That dismissal is the error my pass corrects.
What it actually measures:
  - Sec 2, Eq (1): Q_m(q_i + d_i) = q_i, decoded-grid equality of the stored code before/after
    one update; signed zeros count equal. Paper's words: a coordinate is "frozen on one update
    when its stored code is unchanged." This IS the candidate's ANNIHILATION definition.
  - f_t = fraction of coordinates frozen on step t. This IS the candidate's limb-(a) per-step
    estimand. Table 1 defines first/persistent "majority crossing" as f_t >= 1/2.
  - The REFERENCE TRACE is a high-precision trajectory used to audit when the stored code
    changes — i.e. the candidate's V2 "distortion" comparator (an FP32-master replay of the
    same step), in different words.
  - PRETRAINING, real transformers: nanoGPT GPT-2 124M on OpenWebText (4.1-4.2, App C);
    162.2M RMSNorm/RoPE/SwiGLU decoder (4.2, Table 7); 162.2M NeoX/Pythia-style (4.3, C.5-C.6);
    134.1M DQT Llama, simulated INT3, Wikipedia, 55,670 updates (4.6); plus toy systems.
  - PARAMETER-GROUP STRATIFICATION PRESENT: attention vs feed-forward group means (4.1, App
    C.1); Table 7 splits Core (attention + SwiGLU) from All-2D. Sec 4.1: attention and FFN
    weights are "majority-frozen from the first update" at the default learning rate.
  - NUMBERS: Table 6 (step 10,000) coordinate-weighted attention/MLP never-moved 0.599 (RNE
    E5M2), 0.413 (RNE E4M3); every SR cell <= 1.18e-8. Table 5 (step 3000) ~0.626 / ~0.443 RNE,
    near zero SR. Table 7 (modern decoder, step 3000) core never-moved 65.87% / 65.83% RNE;
    all-2D 71.17% / 71.15%.
  - MATCHED MITIGATION ARM ON HELD-OUT LOSS PRESENT: Sec 4.2 / Table 6, two seeds — SR recovers
    89.24-89.43% of the RNE held-out-loss gap at E5M2 and 92.07-92.16% at E4M3. Figure 2 plots
    the paired gaps. Sec 4.5: native E4M3 + software SR, full-SR recovery 0.9766.
    >>> This is the limb the record called "the candidate's one genuinely unmeasured limb"
    (presupposition 4). It is measured.
  - ABSENT in it: frozen-fraction by weight-magnitude bin/decile (App A.1 has a within-binade
    phase model, no decile breakdown); frozen-fraction by embedding ROW (the tied 38.6M
    transformer.wte.weight is reported separately only in the allocator studies);
    LayerNorm/RMSNorm gains — Sec 4.1 says 1-D normalization parameters stay fp32, so they are
    outside the write-back analysis altogether; and any breakdown of f_t by warmup / peak /
    cosine-decay PHASE (training-progress trajectories exist: 4.2 recovery over steps
    3001-10,000, E4M3 95.6-97.7% -> 92.1-92.2%; 4.3/Table 10 schedule-aligned trajectories over
    updates 101-3000 with 99.650% of variation to a common time effect).
  - RELIABILITY CAVEAT, from the paper's own text: its aggregate-forecast proxy (2.2, Eq 4)
    FAILS its registered tests in the RMSNorm decoder (Table 8) and the locked-margin test
    (App B.1, interval containment 0.368), and the NeoX audit fails directional specificity
    (4.3, C.6). Sole author, no venue, v4, title moved between versions. Numbers above arrived
    through the page summariser; I did not inspect the raw table.
  - FRAME MISMATCH, and it is real: stored 2-D weights are quantized to analytic E5M2/E4M3
    grids (and simulated INT3) with fp32 COMPUTE and fp32 OPTIMIZER STATE. The candidate's
    declared frame C is BF16 parameters with BF16 or block-quantized 8-bit Adam state. BF16 has
    7 mantissa bits against E4M3's 3, so the absorption threshold differs by ~16x; and the
    optimizer-state precision is exactly what Shang holds in fp32. All LLM runs are 124-162M,
    not a scale ladder.

### NEW PRIOR N2 — arXiv 2010.06192, Zamirai / Zhang / Aberger / De Sa (author line read on the
PDF's own page 1). READ PDF; Appendix D.3 + Figure 9 caption read at first hand. The facts block
recorded D.3 as COULD NOT READ; I read it.
  - Figure 9 caption, first sentence verbatim: "The percentage of weight updates that are
    non-zero but get canceled in the standard 16-bit-FPU training." That is the candidate's
    annihilation rate on the (parameter, step) ATTEMPT unit, per iteration.
  - STRATIFIED BY PARAMETER GROUP: four panels, (a) Terabyte-embedding, (b) Terabyte-linear,
    (c) Kaggle-embedding, (d) Kaggle-linear — embedding layers vs linear/MLP layers.
  - SCHEDULE PHASE, AND THE LR CONNECTION IS MADE EXPLICITLY: text says the cancelled-update
    percentage "can be larger than 80%" in the mid-to-late training stage, and rises as training
    proceeds. Terabyte uses 5% warmup to peak 28 then linear decay to 0 over the back half
    (App C.1, Table 10); Kaggle uses constant 0.1 (Table 9). D.3 attributes the Kaggle rise to
    shrinking gradient magnitude under constant LR, and the Terabyte rise to a COMPOUND effect
    of decaying gradient magnitude AND decaying learning rate, and says this aligns with the
    paper's theory.
  - LIMITS: DLRM on Criteo only. No cancelled-update percentage for ANY transformer or LLM
    (BERT appears elsewhere in the paper, not here). Panel values readable only as y-axis
    ranges (a ~50-100%, b ~60-80%, c ~20-40%, d ~50-100%); early-stage values NOT readable and
    not stated in text. No normalization gains, no magnitude deciles, no token-frequency bins.
    Document inconsistency noted: App C.1's DLRM-Kaggle LR entry (3e-4, -1%/epoch) conflicts
    with Table 9's constant 0.1.

### NEW PRIOR N3 — arXiv 2603.16731, Kristi Topollai and Anna Choromanska (NYU). READ PDF.
  - Def 3.1 "stalling": the stored quantized state equals its previous value, i.e. the
    high-precision update "fails to move the stored state to a new representable value."
    Algorithm 2 line 14: P_stall(k) = fraction of state entries where the new quantized value
    equals the old one. Same estimand STRUCTURE as the candidate's, on the optimizer-STATE unit.
  - PRETRAINING: LLaMA-architecture 60M / 100M / 350M on C4, 10K/20K/60K steps (6.1, Table 10).
  - Numbers: theoretical NR steady-state stall at beta2=0.999 (Table 1) BF16 ~0.946, FP8 ~1.000,
    FP4 ~1.000; SR (Table 2) 0.825 / 0.989 / 0.994; empirical initial floor (Table 8) 0.17 /
    0.53 / 0.97. Figure 2 plots the stalling ratio over steps; Figure 5 first-moment stalling.
  - Training-progress dependence present (4.2: stalling rises as the second moment grows toward
    steady state, then plateaus) but tied to time-since-init/reset, NOT to LR phase.
  - ABSENT: any per-layer / per-module / per-group breakdown (analysis is coordinate-wise, 3.1;
    4.3 says first-moment stalling "varies across coordinates" with no grouped numbers). And
    App A.9: "Model weights and activations remain in BF16" — so NO weight-level
    rounds-to-zero measurement. Unit difference from the candidate is genuine.

### Residue independently NOT FOUND (3 searches, zero hits)
Norm-gain stratification of the unchanged fraction; embedding rows binned by corpus token
frequency; BF16-master frozen fraction across a full cosine schedule with the Adam-normalization
offset tested. Queries 6-8 below returned only adjacent material (LM-head update geometry
2608.22253, Adam basis 2608.05136, scale-invariant schedule law 2609.09116, rare-token gradient
gating 2109.03127, Megatron-Bridge scheduler docs). This corroborates the facts block's NOT
FOUND for the FINEST strata — the residue is real, it is just much narrower than the record or
the facts block supposed.

## Disguise sweep — the 8 queries I ran (none duplicated the record's 11)
1. update to weight ratio per layer below bfloat16 resolution weight update skipped fraction
2. rounding cancels weight updates embedding layer DLRM percentage of updates cancelled per
   iteration late in training
3. swamping small increment lost weight update low precision training parameters stop changing
   learning rate decay
4. stalling fraction of weights unchanged quantized update fails to move to new representable
   value pretraining per layer embeddings
5. high precision reference trace shadow weights audit which updates lost low precision
   write-back target code crossing
6. fraction of updates rounded away RMSNorm LayerNorm gain parameters bf16 pretraining cosine
   schedule per parameter group measured
7. rare token embedding rows never updated token frequency bin rounding bf16 frozen rows
   measured percentage
8. bf16 master weights pretraining full cosine schedule frozen coordinate fraction rises during
   decay Adam normalized update offsets
Vocabularies that hit: "cancelled weight updates" (q2), "stalling / state staleness" (q4),
"reference trace / coordinate frozen / crossing" (q5). The record searched the
absorption/sparsity/stagnation/Kahan/SR families and missed all three.

## Fetches and read levels
F1 https://arxiv.org/pdf/2607.09800 — COULD NOT READ. Exact error text returned:
   "[This PDF is empty or contains no machine-readable text]". (Not "not found".)
F2 https://arxiv.org/pdf/2603.16731 — FULL TEXT (PDF, via summariser).
F3 https://arxiv.org/abs/2607.09800 — ABSTRACT ONLY. The summariser declined verbatim abstract
   reproduction, citing the 125-character quote limit; metadata + paraphrase returned.
F4 https://arxiv.org/pdf/2010.06192 — PDF. App D.3 / Fig 9 caption + text read; figure panel
   values COULD NOT READ beyond y-axis ranges.
F5 https://arxiv.org/html/2607.09800v4 — FULL TEXT, TRUNCATED. Exact note returned: "this
   page's text is 104782 characters long and the answer above covers only characters 0 to
   100000; the final 4782 were not read". I did not spend the 6th fetch on the tail.
NOT OPENED BY ME (taken from the ESTABLISHED FACTS block as instructed, not re-derived):
   2602.03839, 2606.13657, 2405.03637 (COLLAGE), 2602.11456 (AuroraRL).
No search and no fetch was refused. No reworded retry of any refused call was made. No personal
identifier appeared in any URL, query or header; Unpaywall was not used.

## Classification on the ledger's trichotomy
POSED IN PRINT AND SUBSTANTIALLY ANSWERED — a disguised known on its headline limb and on most
of its two advertised residues — with a narrow asked-but-open remainder.
  - Limb (a), aggregate per-step annihilation rate: POSED AND ANSWERED. RL fine-tuning in BF16
    (2602.03839, per the facts block); pretraining in real transformers at FP8/INT3
    (2607.09800 f_t, never-moved 0.41-0.66); optimizer-state analogue in BF16/FP8/FP4
    pretraining with theory (2603.16731).
  - Limb (b), parameter-group concentration: PARTLY POSED AND PARTLY ANSWERED. embedding vs
    linear, 2010.06192 Fig 9; attention vs MLP, 2607.09800 Sec 4.1 / Table 7. Norm gains,
    magnitude deciles and token-frequency-binned rows: NOT ANSWERED (and norms sit outside the
    low-precision write-back path in Shang's shipped-style config).
  - Limb (c), LR-schedule-phase monotonicity: POSED AND ANSWERED IN DIRECTION for a decaying-LR
    DLRM run, with the LR decay named as a cause and a theory to match (2010.06192 D.3). NOT
    answered for a transformer under a cosine schedule, and NOT answered for Adam, where the
    candidate's own caveat (Adam's normalized update partly offsets LR decay) is still live.
  - Matched-arm held-out-loss consequence: ANSWERED at FP8, 124-162M (2607.09800 Table 6).
    Not answered in BF16 at scale.
A METHOD-TRANSFER reading does not rescue it: the per-step grid-equality test has now been
independently applied to transformer pretraining, so this is not "a method never applied to this
unit". What is left is a finer PARTITION of an already-measured quantity inside a different
precision frame.

## Eight attacks
1 TRIVIALITY — PARTIAL. Not page-answerable for the rates or the loss consequence. But the
  candidate's DIRECTIONAL claims largely are, and one is page-FALSIFIABLE: ulp(w) ~ |w|*2^-7 in
  BF16, so absorption needs |dw| < ~|w|*2^-8; Adam's update is magnitude-normalized
  (|dw| ~ lr*O(1)), so absorption probability RISES with |w| and small weights are LESS frozen —
  the opposite of the candidate's stated hypothesis. 2602.03839's own magnitude-only argument
  (critical magnitude 7.68e-4 at lr 3e-6, Table 2's 94.8-97.6% above it) is exactly this page of
  arithmetic, already in print. Norm gains fall out the same way (|gain|~1 => ulp/2 ~ 2e-3 >> a
  typical Adam step). What survives triviality: the quantitative rate per group, and the
  Adam-vs-LR-decay shape, which is genuinely two-sided.
2 DISGUISE — UNRESOLVED. Three vocabularies the record never tried each contain the question.
  Shang's Eq (1) is the candidate's annihilation definition and his f_t is the candidate's
  estimand, in pretraining, in real transformers, with attention-vs-MLP strata and a matched
  SR-vs-RNE held-out-loss arm. Zamirai's Fig 9 is the attempt-level cancelled-update percentage
  stratified by embedding vs linear and rising to >80% late under a decaying LR. Topollai's
  Def 3.1 is the same estimand on the state unit in pretraining with theory. All three opened at
  first hand. The objection's supporting claims are sourced, so Unresolved is permitted.
3 COMBINATORIAL NOVELTY — RESOLVED. The numerics x training-systems interface is load-bearing,
  not contrived: it produced shipped mitigations (Kahan in torchao/optimi, FP32 masters in
  Megatron/DeepSpeed, bitsandbytes stable embedding), a systems EXPLOIT of the same quantity for
  bandwidth (2602.03839; AuroraRL 2602.11456, ~1% of elements changing), a reset mitigation
  (2603.16731), and a coordinate-protection allocator (2607.09800). An interface that
  independently generated an engineering exploit is a real interface.
4 PRESUPPOSITION FAILURE — UNRESOLVED. Load-bearing presuppositions that fail: (i) concentration
  on SMALL-MAGNITUDE weights is backwards, by the ulp arithmetic and by 2606.13657 App D.2
  (updates preferentially occupy small-source-magnitude coordinates, 36.68% coverage vs a 10%
  baseline); (ii) the motivating gap's "no reported realized annihilation rate" is false in RL
  (2602.03839) and now also in transformer pretraining (2607.09800); (iii) "neither prior
  supplies a matched-arm held-out consequence" is false (2607.09800 Table 6); (iv) norm gains as
  a frozen group presupposes they are in the low-precision write-back path, and in Shang's
  shipped-style config 1-D norm parameters are kept fp32, which makes the limb closer to moot
  than to open. Credit where due: V2 does declare the configuration frame and does hold the
  LR-decay monotonicity as a PREDICTION rather than an assumption — that is the one
  presupposition handled correctly, and it is the candidate's best ground here.
5 VAGUENESS — RESOLVED. V2 fixes bitwise equality of the stored representation, a pre-declared
  parameter partition, a seed-replicate band, a declared frame, and explicit
  nothing-here / something-here criteria. Strong independent evidence against vagueness: four
  groups operationalized essentially the same test without coordinating and landed on mutually
  consistent definitions — Def A.2 (2602.03839), Eq (1) (2607.09800), Def 3.1 on the state unit
  (2603.16731), and AuroraRL's rho as the exact complement. Residual soft spots, noted not
  fatal: the distortion threshold is only "declared before any data pull" rather than fixed in
  the question, and "measurable share of the run" stays loose.
6 SIGNIFICANCE INFLATION — RESOLVED on the attack as posed. The named audience demonstrably acts
  on this exact quantity: two systems papers exploit it for communication, one proposes state
  resets, Shang's whole second half is "guiding exact-budget protection", i.e. deciding which
  coordinates to protect — which IS the stratification question. Counterweight to record, not to
  the attack: the marginal residue is a refinement of numbers maintainers already have, so the
  significance is deflated rather than inflated.
7 REASON FOR SILENCE — UNRESOLVED. The question is not silent; it has been asked in four
  vocabularies, and the record itself concedes the criterion is "NOT APPLICABLE". For the narrow
  residue the most credible mechanisms are self-defeating: norm gains are unstudied because
  shipped configs keep them in fp32 (moot, not unasked), and the magnitude-decile direction is
  derivable in a line (trivial, not unasked). Only the token-frequency-binned embedding limb has
  a clean mechanism — it needs tokenizer/corpus counts joined to a checkpoint trace, a real
  access barrier. The record's proposed mechanism (numerics owns the bound, systems owns the
  data, so nobody counts) is falsified by the fact that four groups counted, one of them with a
  chi-squared steady-state theory.
8 DISSOLUTION — PARTIAL. The estimand survives analysis: well defined, measured, consequential
  (Table 6's held-out-loss gap). The alarming FRAMING does dissolve. At ~99% per-step sparsity in
  RL the model still improves (2602.03839), >98% at k<=8 means ~2% of coordinates move within 8
  steps, and Shang finds attention/FFN majority-frozen from the FIRST update in runs that train
  normally. So "effectively frozen / the model was not really trained for N steps" resolves into
  "low-precision write-back is a lossy compressor of the update stream whose held-out cost SR
  recovers ~90% of" — which is how the literature already treats it. The question survives as a
  measurement; its rhetoric does not.

## Honest note on the ground of this pass
My pass does not rescue the candidate and it does not reinstate the struck reasoning. It
RELOCATES the kill. The ESTABLISHED FACTS block's own framing — "the per-group and
schedule-phase limbs are published nowhere that four independent readers could find" — is itself
defective, in the opposite direction from the struck verdict's defect. The per-group limb IS
published (embedding vs linear, 2010.06192 Fig 9; attention vs MLP, 2607.09800 Sec 4.1 / Table
7) and the schedule-phase limb IS published for a decaying-LR run with the LR decay named as a
cause (2010.06192 D.3). Four readers missed these because all of them searched the
BF16-absorption / update-sparsity / stagnation family; none searched "cancelled updates",
"stalling" or "coordinate frozen / reference trace". The struck Gate 2 reached a defensible
conclusion from two misread papers; the correct conclusion follows from three papers nobody in
this chain opened.

## Recommendation (judge applies the fatal rule, not me)
Reject as an un-asked question. Route the genuine residue as asked-but-open, tier 2:
(i) the per-step frozen fraction in the candidate's ACTUAL declared frame — BF16 parameters with
BF16 or block-quantized 8-bit Adam state, which no paper covers (Shang holds state in fp32;
Topollai holds weights in BF16 and quantizes state; 2602.03839 is constant-LR RL) — across a
full cosine schedule in pretraining at >= 2 scales; (ii) stratification by normalization gains
in configs that actually write them in low precision, by magnitude decile, and by
token-frequency-binned embedding rows; (iii) whether Adam's normalized update offsets LR decay
enough to flatten the Zamirai trend in a transformer. Sources showing the surrounding question is
live: 2602.03839, 2607.09800, 2603.16731, 2010.06192.
