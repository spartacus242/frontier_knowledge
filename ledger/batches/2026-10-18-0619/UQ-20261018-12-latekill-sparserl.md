# UQ-20261018-12 — late-kill check: arXiv:2605.07330 "SparseRL-Sync"

Audited 2026-10-18. Read level: FULL TEXT (abs page + PDF v1 + HTML rendering /html/2605.07330v1).
Budget used: 0 searches, 6 fetches (limit 4 / 7). No failed routes, no refusals.
Routes: https://arxiv.org/abs/2605.07330 (OK) | https://arxiv.org/pdf/2605.07330v1 (OK, machine-readable)
| https://arxiv.org/html/2605.07330v1 (OK, x4 targeted reads).
No personal identifier used in any URL. Unpaywall skipped by rule.

## VERDICT: paper exists and the reader's claims are LARGELY SUBSTANTIATED, with one clean kill.

## Q1 — existence, title, author line, versions, venue
Exists. Title on the document's own first page (PDF + HTML agree):
  "SPARSERL-SYNC: Lossless Weight Synchronization with $\sim 100 \times$ Less Communication"
(abs page renders it as "SparseRL-Sync: Lossless Weight Synchronization with ~100x Less Communication")
Author line, taken from the document's first page (PDF) and re-confirmed against the HTML ordered
author list — NOT from the abs record alone; all three routes gave the identical ordered list:
  Lucas Hu*, Ranchi Zhao*, Isaac Zhu, Zach Zhang, Hscos Zhang, Hugh Yin, Jason Zhao†
  (*Equal contribution. †Corresponding author.) No affiliations printed.
NOTE: "Hscos Zhang" is the spelling returned by all three routes. Odd, but not a transcription error
I can attribute to one summariser — treat as the paper's own spelling.
Versions: v1 only. abs page: submitted 2026-05-08. Document's own date line: "May 11, 2026".
  → unresolved 3-day discrepancy between the record and the compiled PDF/HTML datestamp. Flagged, not resolved.
Venue: none. No journal-ref, no comments field. Subjects: cs.LG, cs.AI, cs.DC.

## Q2 — what is measured
Primary statistic is the CHANGED fraction; "sparsity" is its complement, i.e. the fraction UNCHANGED.
Defining sentences (Sec 2.1, "Setup") — each checked alone, none stitched:
  "capture snapshots of the BF16 model weights immediately before and after each offline weight-update event."
  "we compute two statistics, both per tensor and aggregated across the model"
  "the fraction of elements whose BF16 value changes"   <- element-level update ratio
  "the fraction of tensors for which no element changes" <- tensor-level inactive ratio
  "sparsity defined as its complement"
NO equation. Definition is prose only.
Unit: percent of elements. Denominator: NOT STATED EXPLICITLY anywhere — the paper never says
"total elements in the tensor" or "in the model". This is a real gap, worth recording.
Aggregation: BOTH per tensor and model-aggregate, per the Setup sentence. Table 2 values are
"averaged across an entire training run"; Figures 4 and 7 are per synchronization step.
Snapshots are before/after each weight-update event; the paper does not explicitly say the compared
snapshots are CONSECUTIVE sync steps. Reader's framing of "between steps" is an inference, not a quote.

## Q3 — "tends to increase over training"
FOUND, verbatim, and confirmed UN-PRIMED (I asked for sentences containing the word "increase" in that
subsection, and separately asked for the before/after sentences without supplying the phrase):
  "Across all scales, sparsity tends to increase over training."
Location: Sec 2.1, subsection "Sparsity across model scales", the paragraph citing Figure 7.
It is the only sentence in that paragraph containing "increase".
Supporting trend datum elsewhere in 2.1 ("BF16 vs. FP32"): BF16 changed ratio
  "dropping from roughly 0.75% in the early steps to below 0.56% by step 8."
Authors give NO mechanism for the increase over time. The Fig 7 caption's explanation (larger pretrained
weights, more mass sub-threshold, absorbed by the BF16 cast) explains differences ACROSS SCALES, not
change over time. The general why-sparse account is the "Three-Gate Theory" (Sec 2.2, after Zhu et al. 2025:
KL-constrained small steps, model geometry, BF16 rounding) — not a time-trend argument.

## Q4 — models, scales, precision, pretraining vs RL
Single-model instrumentation: Qwen3-30B-A3B-Instruct-2507.
Cross-scale (Figure 7), four scales: Qwen3-8B-Base, Qwen3-30B-A3B-Instruct-2507,
GLM-4.5-Air-Base (106B), DeepSeek-V3.1-Base (671B). Dense + MoE.
RL settings (Table 2, all five on 30B only): DAPO, GRPO, GSPO, Async-RL, Agentic-RL.
Precision: "We use BF16 for both training and inference." Trainer-side master weights FP32
("e.g., FP32 in standard mixed-precision training", Sec 3). OPTIMIZER-STATE precision is NOT discussed —
only master weights. Sync-precision comparison FP16 / BF16 / FP8 in Figure 5.
ALL measurement is RL fine-tuning: "We instrument Qwen3-30B-A3B-Instruct-2507 during RL fine-tuning."
NO pretraining and NO SFT measurement anywhere. The "-Base" checkpoints are RL starting points, not
pretraining runs. Caveat: the text does not explicitly restate that the 8B/106B/671B Fig 7 curves are
RL runs — that is implied by the section framing.

## Q5 — do 99.30, 99.40, 98 exist
ALL THREE EXIST, and the levels match the reader's description. Table 2, "Sparsity summary on 30B across
five RL settings". Columns: Setting | BF16 sparse | BF16 changed | FP32 changed | Inactive tensors.
  DAPO        99.4003% | 0.5997% | 99.4704% | 4.9732%
  GRPO        99.3859% | 0.6141% | 99.4595% | 5.5216%
  GSPO        99.3958% | 0.6042% | 99.4653% | 5.9673%
  Async-RL    99.4006% | 0.5994% | 99.4354% | 5.3852%
  Agentic-RL  99.3030% | 0.6970% | 99.6845% | 5.4193%
→ "99.30 to 99.40 at 30B" = the BF16-sparse column's range, 99.3030% (Agentic-RL) to 99.4006% (Async-RL).
   Unit = % of elements unchanged; aggregation = run-average on the 30B model. Reader's level is correct.
   TRAP TO NOTE: the FP32-changed column also reads 99.43–99.68%. Those are near-DENSE FP32 master
   weights (fraction CHANGED), the opposite meaning. Do not confuse with the sparsity column.
→ "at least 98 percent across scales up to 671B": "All four models exhibit $\geq 98\%$ BF16 sparsity
   from the very first synchronization step." Reader correct.
Per-scale figures in the Fig 7 text: 106B "somewhat lower sparsity ($\sim 98\%$–99%)";
671B "climbs to $\geq 99.5\%$ sparsity within a handful of steps". No scale-specific number printed for 8B.
Sec 3.3 gives "mean element-level sparsity of 99.38% over GRPO fine-tuning (Figure 7)".
Figure 6 / text: "Only about 5%–6% of parameter tensors have no changed elements";
  "more than 94% of tensors still contain at least one changed element".

## Q6 — per-tensor / per-group breakdown  ** THE KILL **
The reader's "per-tensor breakdown in a figure" DOES NOT EXIST as described.
NOT FOUND, after full-text reads of Sections 1-6 incl. all 10 figure captions and 3 tables:
  - no breakdown of sparsity by attention vs MLP, by embeddings, by layernorm / normalization gains,
    by router, or by q/k/v projections.
What DOES exist, and is probably what the reader garbled:
  (a) Figure 6 + Table 2's "Inactive tensors" column — a tensor-level INACTIVE RATIO (share of whole
      tensors with zero changed elements, ~5-6%). That is a scalar per run, not a per-tensor-type breakdown.
  (b) One group-level statistic, MoE EXPERT tensors only, Sec 2.1 "Element-level vs. tensor-level sparsity":
        "only 14 expert tensors (0.46%) were never updated in any step"
        "3,010 expert tensors (97.98%) were updated in every one of the 10 steps"
      (arithmetic self-check: 3010/0.9798 = 3072 expert tensors; 14/3072 = 0.456% — internally consistent)
  (c) Qualitative, no numbers: LoRA adapters "near-100% update density" (Sec 3.4); embedding-table
      indices "span up to $\sim 10^8$ positions" (Sec 3.3).
Deciles / normalization gains / token frequency: ABSENT. No grouping by weight-magnitude decile, by
normalization gain, or by token frequency anywhere. Closest text is a speculative aside in the Fig 7
discussion: "likely reflecting architectural differences in weight magnitude distributions."

## Q7 — learning-rate schedule  ** SECOND KILL **
NOT FOUND. Read the full text (all sections 1-6 plus captions). The phrase "learning rate" NEVER APPEARS.
No LR value, no warmup, no cosine/linear/constant schedule, no decay phase, and the paper NEVER relates
sparsity to any phase of a learning-rate schedule. It does not measure sparsity in separate schedule phases.
"schedule" occurs once, in an unrelated sense (Sec 1, "Existing engineering remedies"):
  "schedule the distribution order and concurrency."
→ So the time-trend claim in Q3 is stated but entirely UNEXPLAINED by LR dynamics; the paper offers no
  LR-based account, and nothing in it licenses an LR-decay reading of the rising sparsity.

## Open hooks for the audit
- Denominator for the element-level fraction is never stated. Any downstream reuse of 99.38% needs that pinned.
- "Consecutive syncs" is the reader's wording, not the paper's.
- v1 is the only version; the 2026-05-08 record date vs the 2026-05-11 document date line is unreconciled.
- The rising-sparsity-over-training claim is asserted in one sentence with no mechanism and no LR analysis —
  that is the thin spot, not the headline sparsity numbers.
