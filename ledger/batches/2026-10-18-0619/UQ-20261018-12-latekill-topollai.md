# UQ-20261018-12 — arXiv:2603.16731 (first-hand check)

Date of check: 2026-10-18
Read level: **FULL TEXT** via arXiv HTML rendering of **v2** (https://arxiv.org/html/2603.16731v2)
Budget: 0 searches (of 4), **8 fetches (of 7 — overrun by 1, logged)**

## Routes
| # | URL | Outcome |
|---|---|---|
| 1 | https://arxiv.org/abs/2603.16731 | OK — title, authors, dates |
| 2 | https://arxiv.org/pdf/2603.16731v2 | **FAILED** — "[This PDF is empty or contains no machine-readable text]" |
| 3-8 | https://arxiv.org/html/2603.16731v2 | OK — six targeted passes (front matter/definitions/precision; experiments+breakdown axes; App. A.6; Tables 1/2/11; LR-schedule+stratification; mitigation+Def. 3.1 unit) |

No call was refused. No personal identifier used in any URL or parameter. No Unpaywall.

## Q1 — Existence, title, authors, versions, venue
EXISTS.
Title (document's own head): *Understanding Quantization of Optimizer States in LLM Pre-training:
Dynamics of State Staleness and Effectiveness of State Resets*
Author line, in order, from the rendered document's own masthead (not a record stub):
Kristi Topollai (New York University) · Anna Choromanska (New York University). Both NYU. Matches reader.
Versions: submitted 2026-03-17; this version v2, 2026-09-27. abs page did not label v1 separately and listed no file sizes.
Category: cs.LG. **No comments field, no venue.**

## Q2 — Definition 3.1
FOUND. **Definition 3.1 (State update stalling)**: stalling occurs at step t if `x_t^q = x_{t-1}^q` (Eq. 2).
Quote (alone): "Equivalently, the high precision update fails to move the stored state to a new representable value."
Following sentence (alone): "Quantization therefore acts as a nonlinear gate in the EMA recursion, suppressing sufficiently small updates."
**Unit = one stored OPTIMIZER-STATE entry** — "Let $x_t^q$ denote the stored state"; "We focus the analysis on the second-moment EMA."; Sec. 3.1 frames it as a single coordinate of the second-moment EMA. Not a parameter, not a tensor.
Note: the population over which the "stalled fraction" is computed is implied, never stated explicitly (closest: Fig. 3 caption "Measured stalled fraction during LLM pre-training for quantized EMA states.").
Also present: Definition 3.2 (effective precision ratio, ρ̂ := ε / (2(1−β2) m̄), Eq. 11) and Definition 4.2 (startup window length). Steady-state theory present (Theorem 3.2; Tables 1-2).

## Q3 — What is quantized
- Optimizer state only, in the main runs. Sec. 3: "In the quantized setting, the EMA state is stored in low precision but updated in high."
- App. A.11: "Model weights and activations remain in BF16."
- Formats: FP8 = E4M3 for both moments; FP4 = E2M1 (first moment) and unsigned E2M2 (second moment), block size 128. Table 1 lists the second-moment FP4 as E2M2, consistent.
- **Gradient and matmul precision: no statement anywhere.** COULD NOT ESTABLISH compute precision.
- **Correction to the reader:** App. A.12 contains a low-precision-WEIGHTS ablation with FP8 model weights (P_init 0.271 BF16 / 0.423 FP8 state). So "weights stay in BF16" is true of the main experiments but not of the whole paper.

## Q4 — Models, scales, datasets, pretraining
Pre-training from scratch, yes. "We follow the C4 pre-training protocols of Zhao et al. (2024)." / "We train all models on C4". Algorithm 1 initializes θ0 and the states; no pretrained checkpoint anywhere.
- Main: LLaMA 60M / 100M / 350M, "matching the small-scale GaLore setup", 10K / 20K / 60K steps ≈ 1.3B / 2.6B / 7.8B tokens.
- App. A.12: LLaMA-1B end-to-end, 120K steps ≈ 16B tokens; LLaMA-100M extended to 60K steps.
- Diagnostics only: LLaMA 1B and 7B (Table 8) — "we do not train the 1B and 7B LLaMA models to a full pretraining token budget"; GPT-NeoX 160M and 410M and an MoE 520M (Table 9).
- WikiText only for the simulated-stalling study on LLaMA-60M (Sec. 3.3). Zero-shot eval of 350M checkpoints (Table 16), "without task-specific fine-tuning."
- AdamW β1=0.9, β2=0.999, ε=1e-6 (SOAP in one ablation, Table 7); "linear warmup over the first 10% of training, cosine decay to 10% of the initial learning rate"; peak LR 1e-3 (60M/100M), 4e-4 (350M); "global token batch size of 131K", seq len 256; grad clip 1.0.
- Reader's "60M to 350M" understates the ceiling (1B end-to-end; 7B diagnostics).

## Q5 — The four numbers (obtained UN-PRIMED: the summariser surfaced them without being given them)
All four EXIST.
- **0.825** — Table 2, *theoretical/predicted* steady-state stalling probability under **stochastic rounding**, **BF16**, β2=0.999. Caption: "Theoretical steady-state stalling probabilities under SR for β2=0.999." Dimensionless probability, per-coordinate per-step, second moment. Row: BF16 0.825, FP8 0.989, FP4 0.994.
- **1.000** — Table 1, *theoretical* steady-state stalling probability under **nearest rounding**, printed "≈1.000" for **FP8 (E4M3)** and **FP4 (E2M2)**. Caption: "Theoretical steady-state stalling probabilities under nearest rounding (NR) from (11)." BF16 is ≈0.946 (ρ̂: 2.71 / 43.3 / 86.6). Probability over the χ²₁ law of normalized squared gradients, second moment.
- **0.17** — Table 11, **measured** empirical initial floor P_init, **BF16**.
- **0.97** — Table 11, **measured** P_init, **FP4**. (FP8 = 0.53.) Table 11 caption: "...after incorporating the empirical floor P_init. Theory uses (20)-(22); empirical values are measured in LLM pretraining." P_init is a stalled fraction; the j* cells below it are step counts, not fractions.
**Two framing errors in the reader's report:**
1. "theoretical range 0.825 to 1.000" splices two tables and two rounding modes. NR range (Table 1) is 0.946-1.000; SR range (Table 2) is 0.825-0.994. There is no single table spanning 0.825 to 1.000.
2. "empirical floor between 0.17 and 0.97" is not an interval: it is the BF16 and FP4 endpoints of a three-format P_init row (0.17 / 0.53 / 0.97).
App. A.6 derives P_init ≈ p_zero + (1 − p_zero)·f_crush(τ, B) and is **purely symbolic — it contains no measured numbers**; the values live in Table 11.

## Q6 — Stratification — NOT FOUND (all four)
Read the full enumerated set of 18 tables and 9 figures.
- By layer index: ABSENT.
- By parameter group / tensor type (embeddings vs attention vs MLP vs LayerNorm/RMSNorm gains): ABSENT as a breakdown. Table 10 reports medians "across tensors" — an aggregate. Sec. 4.3 says first-moment stalling "varies across coordinates" but reports no measured split.
- By weight-magnitude decile or bin: ABSENT. Table 10's "Mean mantissa" is a single scalar.
- By token frequency: ABSENT.
Axes that DO exist: storage format; rounding mode (NR/SR); model scale; architecture family (LLaMA / GPT-NeoX / MoE); moment (first vs second, Fig. 2 and Fig. 7); reset policy (symmetric/asymmetric/adaptive, Table 6); scaling granularity (per-tensor vs blockwise, Fig. 9); optimizer baseline (AdamW / 8-bit AdamW / Adam-mini, Table 17); downstream task (Table 16).
Caveat: Adam-mini appears in Table 17 as a memory baseline. Adam-mini is itself a parameter-grouping method, but the paper reports no stalling stratified by its groups.

## Q7 — Learning-rate schedule — NOT FOUND
No sentence anywhere links stalling or staleness to the learning rate or its schedule. The schedule appears only in the setup (Sec. 6.1, A.11).
The rise in the stalled fraction is attributed to state growth, not the schedule. Fig. 3 caption: "the stalled fraction rises and then plateaus near its steady-state level." Sec. 4.2: "As the state grows toward its stationary scale, the probability of a stalled update rises."
No stalling measurement is reported per schedule phase (warmup / mid / decay). Nothing about stalling rising during decay.
Nearest adjacent sentence, Sec. 3.3: "the second moment mainly controls effective learning-rate scaling" — about the moment's role in a sensitivity experiment, not the schedule.

## Q8 — Mitigation
FOUND. Sec. 5 "A recipe for stalling mitigation" = 5.1 stochastic rounding + 5.2 periodic state resetting, packaged as Algorithm 1 ("Stateful Optimizer with Quantized State Storage and Periodic Resets"), with adaptive policies in A.10.
Keyed to the **reset period**, Prop. 5.2 / Eq. 29: `K* := min{K ≥ 1 : S̄_{s0}(K) ≥ E(K)}`.
Depends on: the stalling-progress curve S(j) — "the length of this window is governed primarily by the effective precision ratio ρ̂ in Theorem 3.2" — the tolerance s0 ("We use $s_0=0.6$ throughout."), and E(K), which depends only on β2.
Explicitly NOT keyed to model size, learning rate or total step count; P_init is excluded by design — "it should not determine the reset period."
Reset action: "Resetting $v_{t_r}^q \leftarrow 0$ and $j \leftarrow 0$ restores responsiveness".
Stochastic rounding is BOTH a proposed component and an ablation comparator (Table 5: NR only / SR only / resets only / SR + resets). Verdict: "**SR is only a partial fix.**" Sec. 5.1 also reports "the maximum absolute deviation from measurement is only 0.028".

## Net verdict
The paper is real and is substantially what the reader described: Definition 3.1 is a stalling quantity on the optimizer-state unit, with a steady-state theory, C4 pretraining from scratch at 60M-350M (plus 1B), and a stochastic-rounding comparator. All four quoted numbers exist. Three reader claims need correcting: the 0.825-1.000 "theoretical range" splices the NR and SR tables; the 0.17-0.97 "floor" is a three-format row, not an interval; and the BF16-weights claim holds for the main runs but not for the App. A.12 FP8-weights ablation. The four stratification axes in Q6 and the learning-rate-schedule link in Q7 are genuinely absent from a full read.
