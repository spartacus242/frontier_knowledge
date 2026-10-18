# UQ-20261018-12 — late-kill check: arXiv:2607.09800 (Shang)

Checked 2026-10-18. Budget used: 0 searches, 7/7 fetches.

## Read level
FULL TEXT, via the HTML rendering **https://arxiv.org/html/2607.09800v4** (104,782 chars),
read in four targeted passes. Characters 100,000-104,782 (tail of appendices / references)
were never returned by any pass — every pass reported the same truncation note.
Abs page read twice: https://arxiv.org/abs/2607.09800

PDF route: **NOT ATTEMPTED BY ME.** The task supplied the
"[This PDF is empty or contains no machine-readable text]" result; I spent the 7-fetch
budget on routes that returned text. That empty-PDF result is therefore a reported
observation, not a check I ran. Not a failed route of mine.

## Q1 — existence, titles, authors, versions
EXISTS. cs.LG. Identifier line: "arXiv: 2607.09800v4".

THE TITLES DIFFER. Both read at first hand:
- abs page:  "Auditing Invisible Weight Updates with Reference Traces"
- document's own first page (html v4):
  "Reference Traces for Auditing Invisible Weight Updates and Guiding Exact-Budget Protection"

Author line, from the DOCUMENT'S first page (not a record page):
  Zekai Shang, University of Illinois Urbana-Champaign (institutional email printed on the line).
  SOLE AUTHOR. The abs page independently lists Zekai Shang as the only author. Both agree.

Submission history: the abs page as delivered shows NO per-version history block. Only
  "Submitted: 2026-07-09" and "This version: v4 2026-08-27".
  => v2 and v3 dates: COULD NOT READ (not "no such versions"). v1 = 2026-07-09, v4 = 2026-08-27.
Venue / journal ref: FIELD ABSENT. No DOI, no Comments, no Report number, no Cite-as line.

Third title "The Silent Freeze: Predicting When ...": NOT FOUND in either the abs page or
the document. The third-party mirror itself was NOT checked (budget exhausted) — so the
mirror's title is unexplained, not refuted.

## Q2 — definition of FROZEN on one update
FOUND. Section 2.1 "Exact coordinate event", **Eq. (1)**:
    Q_m(q_i + d_i) = q_i
with Q_m "round-to-nearest-even on the target grid", q_i "an already stored grid value",
d_i "the optimizer's signed proposal". Prose: "The executable exact event is decoded-grid
value equality." Eq. (2) is the equivalent interval form:
    -(1/2)(q_i - q_i^-) < d_i < (1/2)(q_i^+ - q_i)
COMPARISON = stored grid code BEFORE the update vs the quantized result of applying ONE
signed update. Exactly the construction the question describes. Not a loss/activation proxy.

## Q3 — fraction frozen per step
FOUND, and it is PER STEP.
- f_t: "and f_t is the fraction frozen on step t" (Section 2, around Eq. (3):
  rho = eta||g|| / (eps||w||), eps = 2^-(m+1)).
- Proxy, Section 2.2 "Projected-reference proxy", **Eq. (4)**:
  f-hat_t(m) = (1/N) sum_i 1[ Q_m(q-hat_{t,i} + d^r_{t,i}) = q-hat_{t,i} ]
  i.e. a mean over N coordinates AT A SINGLE STEP t, tracked against update number
  (trajectories over updates 101-3000 in Table 10; Fig 2c).
- "No low-precision observation enters Eq. (4)."

**IMPORTANT NUANCE:** Section 2 says f_t "differs from the never-moved fraction". Most
reported empirical numbers (Tables 5, 6, 7, 9; Fig 2c) are NEVER-MOVED fractions, which are
CUMULATIVE. So: the per-step quantity is defined; much of what is tabulated is the
cumulative cousin. Do not conflate.

## Q4 — runs actually performed
Transformer training FROM INITIALIZATION (pretraining, short horizons), not fine-tuning:
- GPT-2 124M, nanoGPT (12L, 12H, d=768, ctx 1024, vocab 50304), OpenWebText,
  10,000 steps, seeds 1337/1338, AdamW. "starts from the raw fp32 initialization". (Table 6)
- Same config, 3,000 steps, seeds 1337/1338/42. (Table 5)
- 162.2M RMSNorm/RoPE/SwiGLU decoder, 162,220,800 params, 3,000 steps, seeds 271828/314159.
  Data NOT STATED. (Table 7, App C.4)
- 162.2M NeoX/Pythia-style decoder (LayerNorm, parallel residuals, GELU MLP 3072, 25%
  partial RoPE, untied embeddings), 3,000 steps x 30 runs = 90,000 updates. Data NOT STATED.
- 4-layer char GPT, ~0.8M params, Shakespeare, 3,000 steps, AdamW.
- Study 1 (persistent-native E4M3): 3,000 updates, 3 seeds, 6 cells; arch/data NOT STATED.
- Study 2 (native E4M3 + software SR): 3,000 updates, 12 arms; arch/data NOT STATED.
- Study 3: DQT Llama 134.1M, Wikipedia 20231101.en, 55,670 updates, ONE seed (42). SIMULATED INT3.
- Source-amortized E4M3 audit: 7 runs x 3,000 = 21,000 updates, NeoX-style arch.
- Allocator: 600-step source trace on the 162.2M decoder; fresh GPT-2 bundle at 5/10/20%.
SIMULATIONS / emulator studies:
- two-layer tanh teacher-student grid, 72 cells x 4 seeds, mantissa-truncation emulator
  that "carries arithmetic in fp64 and rounds each stored weight to m mantissa bits".
- frozen-feature regression (fixed tanh features, linear readout only).
- CNN on MNIST, ~106k params.
- depth-3 tanh student [8,48,48,4], 4,000 updates, 64 cells (App B.1).
- historical mantissa sweep, 3,000 fp64 GD epochs, 180 cells (App D.1).
VERDICT: yes, several runs ARE pretraining of a transformer from scratch — but short
(3k-10k steps) and, in most cases, with an EMULATED ("analytic") storage grid rather than
native low precision. NO fine-tuning run found. Two runs (Studies 1, 2) are native-hardware.

## Q5 — precision, per tensor
- GPT-2 124M (both horizons): stored = analytic E5M2 or E4M3 grid, "with no fp32 master
  copy", applied to 2-D decay-group weights only; "Forward and backward compute and
  optimizer moments remain fp32"; no fp8 GEMM. 1-D normalization parameters STAY fp32 =>
  **OUTSIDE the low-precision write-back path.** Codes held as "fp32 containers constrained
  to fp8 codes" => emulated storage.
- 162.2M RMSNorm decoder: analytic E5M2 on 162,201,600 eligible 2-D coords; remaining 2-D
  items fp32 containers; compute + moments fp32.
- NeoX bundle: analytic E5M2 @scale 1 and E4M3 @scale 128; compute/moments NOT STATED.
- Study 1 (NATIVE): "50 two-dimensional matrices are stored persistently as E4M3 codes";
  native hybrid-FP8 dense GEMMs; "retains fp32 non-GEMM arithmetic and optimizer state".
- Study 2 (NATIVE storage, software SR): "neither study quantizes optimizer state".
- Study 3: "Model values are signed-INT3 grid values held in fp32 containers";
  "forward and backward use mixed fp16 compute"; activation quantizer signed INT8;
  "Adam moments remain fp32"; "This demonstrates neither native INT3 storage nor native
  INT3 arithmetic."
- OPTIMIZER STATE IN FP32: **YES, explicitly, in every run that states it.** No run
  quantizes optimizer state.
- 1-D NORM PARAMS: explicitly OUTSIDE the quantized write-back path (GPT-2 runs); Study 1
  restricts quantization to 50 two-dimensional matrices.

## Q6 — breakdown by parameter group
FOUND. Grouping used = **ATTENTION vs FEED-FORWARD/MLP**, plus a "Core" vs "All 2-D" scope
split, plus embeddings handled separately in the allocator study. Established by an
UN-PRIMED open enumeration of all subset breakdowns (deciles/norm-gains/token-frequency
were never mentioned to the summariser).
- App C.2 / Table 5 (3k GPT-2): equal attention/MLP group-mean never-moved ~0.626 (E5M2),
  ~0.443 (E4M3) under RNE; essentially zero under SR.
- Sec 4.2 / Table 6 / App C.3 (10k GPT-2): coordinate-weighted attention/MLP never-moved
  ~0.599 (RNE E5M2), ~0.413 (RNE E4M3); <= 1.18e-8 in every SR cell.
- App C.4 / Table 7: "Core" = 84,934,656 attention+SwiGLU coords; "All 2-D" = 162,201,600.
  seed 271828: Core 65.87% RNE / 1.18e-6% SR; All 2-D 71.17% / 0.181%.
  seed 314159: Core 65.83% / 0%;            All 2-D 71.15% / 0.180%.
- App C.5 / Table 9: directional RMSE on core attention/MLP trajectory 0.00646 (E5M2),
  0.00815 (E4M3).
- Sec 4.1 / App C.1: pooled and attention/MLP group-mean frozen-fraction trajectories
  reproduced with RMSE 0.004-0.006. The archived "dense" statistic was an EQUAL mean of the
  two group fractions; corrected runs use coordinate-weighted aggregation.
- App C.1: the 38.6M tied transformer.wte.weight / lm_head.weight reported separately in the
  allocator studies (embeddings vs rest, but only there).
- App B.1: events split BY MANTISSA (m=5,7,9,11), not by parameter group.
- Sec 5/7: 768-coordinate TILES ranked for protection (not a semantic group).
NOT FOUND, after that un-primed enumeration: weight-magnitude DECILES; NORMALIZATION GAINS
(norm params are excluded from quantization entirely, so no frozen fraction exists for them);
TOKEN FREQUENCY.
Caveat: these breakdowns are of the NEVER-MOVED (cumulative) fraction, not per-step f_t.

## Q7 — SR vs RNE on held-out loss, >1 seed
FOUND. **Table 5**, caption: "Held-out loss and gap recovery at 3000 steps. Losses are nats;
each row uses its same-seed fp32 anchor." Three seeds (1337, 1338, 42), both formats.
  seed/fmt   fp32    RNE     SR      RNE gap  Recovery
  1337 E5M2  5.055   6.701   5.097   1.646    97.44%
  1338 E5M2  5.029   6.703   5.102   1.674    95.64%
  42   E5M2  5.069   6.700   5.138   1.632    95.76%
  1337 E4M3  5.055   6.219   5.076   1.164    98.14%
  1338 E4M3  5.029   6.237   5.046   1.209    98.54%
  42   E4M3  5.069   6.232   5.081   1.163    98.92%
"Recovery" = % of the RNE-minus-fp32 gap closed by SR, per Eq. (5).
**Table 6** (step 10,000, held-out per caption, 2 seeds; App C.3 names 1337/1338 but the
table labels only 1338): E5M2 fp32 4.275, RNE 6.412/6.419, SR 4.501, recovery 89.24%/89.43%;
E4M3 RNE 5.710/5.714, recovery 92.16%/92.07%.
**Table 7** (162.2M decoder, 2 seeds): recovery 92.94% (271828) / 93.61% (314159) — but the
table/caption do NOT state whether the loss is held-out. App C.4 aggregates: fp32 4.71785
[4.70719, 4.72852], RNE 6.26195 [6.26122, 6.26268], SR 4.82169 [4.81683, 4.82656],
RNE gap 1.54409 [1.53415, 1.55403].
Fraction of gap described as recovered: ~95.6-98.9% at 3,000 steps; ~89-92% at 10,000 steps.
Predeclared target was 90% (dotted line in Fig 2b).
NO standard deviations, confidence intervals or significance tests anywhere; Fig 2 bands are
"full two-seed ranges", and the caption states no inferential intervals or hypothesis tests
are reported. The text calls the decision rule deterministic, "not a population hypothesis test".

## Q8 — does the paper say its own test/forecast FAILS?
FOUND, repeatedly and prominently, including in the conclusion. Quotes (each checked alone):
- Sec 4.3: "Directional specificity fails in every target, however"
- Sec 8:   "the aggregate diagnostic fails in the fixed RMSNorm decoder"
- Sec 8:   "the registered classification is inconclusive"
- Sec 4.2: "the visibility trajectories fail the registered informativeness and directional-added-value gates"
- Sec 1 (contribution 3): "yields no registered practical allocator win"
- Sec 5:   "with the 5% quality gate failing"
- Sec 4.4: "its classification remains inconclusive_invalid_native_source_audit"
- Sec 4.4: "misses the 0.9 macro gate"
- Sec 4.4: "cannot rescue the joint rule to a positive result"
- Sec 7:   "the registered raw and unit-gain source predictors add no value"
- Sec 7:   "the registered classification remains inconclusive"
- Sec 2.2: "every uncertainty criterion fails"
- Sec 3:   "so its promotion criterion fails"
- Table 3: "all uncertainty gates in the locked 64-cell test fail"
- App B.1: "support decisions are therefore all negative"
- App C.4: "the range never reaches 0.10 and all four directional-added-value criteria fail"
- App C.5: "E5M2 core fails the 0.10 measured-range informativeness floor"
- App C.5: "Directional added value is untestable"
- App D.1: "expectation of an empty m=1 RNE window was falsified"
- App D.2: "The rule fails because directional cell accuracy is 94.4% versus 95.6% symmetric"

## Internal discrepancies to carry forward
1. THREE titles for one identifier; two of them confirmed at first hand and they differ.
2. Fig 2 caption says n=2 seeds per format; Table 5 lists three seed ids (1337, 1338, 42).
3. Tables 6 and 7 extract with blank / stacked cells. In Table 6 only seed 1338 is labelled
   and only one fp32 anchor value appears though the caption says each row has one; the
   stacked SR-gap values do not map cleanly onto the stacked rows (4.501 - 4.275 = 0.226,
   yet 0.229 is listed first). Per-seed fp32/RNE/SR for Table 7 are absent.
4. The exact-event definition is per-step (f_t); most tabulated empirics are the cumulative
   never-moved fraction. The paper flags the distinction but the tables lean on the cumulative one.
5. "Analytic" fp8 grids are emulated in fp32 containers with fp32 compute and fp32 moments —
   so most results are NOT a native low-precision training regime. Only Studies 1 and 2 are
   native, and Study 1's sixth cell is a manual recovery and inconclusive.
