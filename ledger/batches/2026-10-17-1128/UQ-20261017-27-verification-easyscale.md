# UQ-20261017-27 — Verification: EasyScale (arXiv:2208.14228)

Task: read arXiv:2208.14228 (EasyScale, elastic DL training preserving accuracy
across worker count changes). Budget: <=6 searches, <=6 fetches.

## Log

### Fetch 1 (pending): https://arxiv.org/abs/2208.14228 — abstract
- RESULT: SUCCESS. Title "EasyScale: Accuracy-consistent Elastic Training for Deep
  Learning". Authors Mingzhen Li, Wencong Xiao, Biao Sun, Hanyu Zhao, Hailong Yang,
  Shiru Ren, Zhongzhi Luan, Xianyan Jia, Yi Liu, Yong Li, Wei Lin, Depei Qian.
  cs.DC, submitted 2022-08-30, current v3 dated 2023-11-07. No venue listed.
  Summariser REFUSED verbatim abstract (>125 char cap); gave paraphrase:
  elastic training keeping accuracy consistent on homogeneous AND heterogeneous
  GPUs; EasyScaleThread abstraction + fast context switching; intra-/inter-job
  schedulers; deployed in online serving cluster, idle GPUs, +62.1% utilization.
  NOTE: abstract read = ABSTRACT-via-summariser only so far.

### Fetch 2 (pending): https://arxiv.org/html/2208.14228v3 — body
### Fetch 3 (pending): https://www.alphaxiv.org/abs/2208.14228.md — body (backup route)
- FETCH 2 RESULT: SUCCESS, arxiv.org/html/2208.14228v3 serves FULL BODY.
  Headings: 1 Intro; 2 Motivation (2.1 Demands for Resource Elasticity,
  2.2 Non-determinism over Elasticity); 3 Design (3.1 Overview, 3.2
  EasyScaleThread, 3.3 Sourcing and Solving Non-determinism, 3.4 Scheduling
  Policy incl 3.4.1 Heterogeneity-aware EST Planning, 3.4.2 EasyScale
  Scheduler); 4 Implementation; 5 Evaluation (5.1 Micro-benchmark 5.1.1-5.1.4,
  5.2 Trace Experiment, 5.3 Cluster Experiment); 6 Related Work and Discussion;
  7 Conclusion; References.
  Candidate quotes surfaced (to be confirmed): "producing bitwise-consistent
  models regardless of different numbers and types of GPUs allocated";
  "elastic training should generate model parameters bitwise identical compared
  to the data parallel training"; "fail to generate consistent model accuracy
  using different amounts of resources"; "we fix the random seeds of RNGs at the
  beginning of the training"; determinism levels D0 Fixed-DoP / D1 Elasticity /
  D2 Heterogeneity. Mechanisms: RNG state (dropout, dataloader/augmentation),
  BatchNorm rank-dependence, gradient aggregation order / ring all-reduce bucket
  reconstruction, GPU kernel selection, data-loader worker state + per-thread
  data indices, per-GPU batch scaling.
- FETCH 3 RESULT: SUCCESS, www.alphaxiv.org/abs/2208.14228.md serves full text
  (SC '23). Says Section 5 reports NO accuracy percentages; consistency shown as
  train-loss difference curves (Fig 9). Other numbers: ctx-switch overhead <=1.9%
  (Electra); 67.1% avg reduction in first-minibatch time; consistency overhead
  <1% for NeuMF/Bert/Electra/Swin, D2 heter overhead avg 236%; trace: JCT 8.3x
  (homo) 13.2x (heter), makespan 2.5x/2.8x; cluster: alloc ratio +17.1%, SM util
  +62.1%, ~459 idle GPUs, 362 preemptions 0 failures. 0.6%/2.8% accuracy
  variance figures are in Section 2 Motivation, not Section 5.

### Fetch 4 (pending): arxiv html — verbatim strings, Sec 2.2/3.1/3.3
### Fetch 5 (pending): arxiv html — Sec 5.1.1 protocol: runs per config, seeds, numbers
- FETCH 4 RESULT: SUCCESS. Exact-string checks (all FOUND):
  (1) "producing bitwise-consistent models regardless of different numbers and
      types of GPUs allocated" — FOUND, Introduction.
  (2) "bitwise identical" — FOUND, Sec 3.1 ("...elastic training should generate
      model parameters bitwise identical compared to the data parallel
      training...").
  (3) "we fix the random seeds of RNGs at the beginning of the training" — FOUND,
      Sec 3.3 (D0), continues "...and record the RNG states".
  (4) "fail to generate consistent model accuracy using different amounts of
      resources" — FOUND, Sec 2.2.
  Sec 2.2 numbers (ResNet18/CIFAR10 on varying V100 counts, TorchElastic &
  Pollux): val-acc diffs up to 5.8% at epoch 10 (Fig 2); overall acc variance at
  100 epochs 0.6% (TE) and 2.8% (Pollux) (Fig 3); per-class acc up to 7.4% (TE)
  / 17.3% (Pollux), avg 3.9% / 7.4% over 10 classes.
  RUNS/SEEDS: paper does NOT state run counts for Figs 2-3. Fig 2 explicitly
  holds seed FIXED and varies only GPU allocation -> seed NOT varied. Fig 4
  (ResNet50/CIFAR10) ran DDP three times varying gamma, not seeds.

### Fetch 5 (pending): arxiv html — Sec 5 protocol, per-config metrics, seed-to-seed
- FETCH 5 RESULT: SUCCESS. Sec 5.1.1 protocol:
  stages: stage0 = 4xV100; stage1 = 2xV100 (elasticity); stage2 = 1xV100 + 2xP100
  (heterogeneity); each stage 100 mini-batches. 8 models (Table 1); only ResNet50
  and VGG19 plotted (others "are similar and are hence omitted due to space
  limit"). Datasets: ImageNet (ShuffleNetv2, ResNet50, VGG19, SwinTransformer),
  PASCAL (YOLOv3), MovieLens (NeuMF), SQuAD (Bert, Electra).
  Metric = TRAIN LOSS and train-loss DIFFERENCE vs DDP ("train loss curves of the
  last worker of EasyScale with DDP"). No val accuracy, no parameter-level
  bitwise diff presented. Claim sentence candidate: "guarantees to produce
  bitwise-identical DL models under an elastic number of heterogeneous GPUs".
  NO final accuracy/loss numbers per configuration (Fig 10 graphical only).
  SEED-TO-SEED: explicit NO. Never runs same config with different seeds, no
  variance/stddev, no config-vs-seed comparison. Seeds fixed throughout.
  RUNS PER CONFIG: single run per stage/config, no repetition count stated;
  "10 times" repetitions appear only in timing experiments (5.1.2, 5.1.3).
  DISCREPANCY: fetch 3 (alphaxiv) called the loss-difference figure "Figure 9";
  fetch 5 (arxiv html) called it "Figure 10". Figure numbering uncertain.

### Fetch 6 (pending): arxiv html — confirm exact claim strings + abstract wording
- FETCH 6 RESULT: SUCCESS. Exact-string checks:
  (1) "guarantees to produce bitwise-identical DL models under an elastic number
      of heterogeneous GPUs" — FOUND, Sec 5.1.1.
  (2) "The train loss of EasyScale-D1 is identical to that of DDP-homo in stage 0
      and stage 1" — FOUND, Sec 5.1.1 (source has markdown emphasis on names).
  (3) "elastic accuracy-consistent model training" — FOUND, Sec 3.1.
  (4) ABSTRACT verbatim chunks: "scales distributed training on heterogeneous
      GPUs while producing deterministic deep learning models" / "thus achieving
      elastic accuracy-consistent model training."
  (5) "bitwise equivalent" — NOT FOUND. "numerically identical" — NOT FOUND.
      Paper uses "bitwise identical", "bitwise-identical", "bitwise-consistent".
  (6) CONCLUSION: "EasyScale achieves elastic accuracy-consistent model training"

## BUDGET USED
Searches: 0 of 6. Fetches: 6 of 6 (1 abs, 4 arxiv html v3, 1 alphaxiv .md).

## CONCLUSION
Paper read in FULL TEXT form (arxiv.org/html/2208.14228v3 served the whole body;
alphaxiv.org/abs/2208.14228.md corroborated). IMPORTANT CAVEAT: every extraction
came through WebFetch's summariser, so wording is confirmed only to the extent
the summariser quoted it back; no raw-byte grep was performed. The abstract was
likewise only read through the summariser (the first pass refused a verbatim
abstract over the 125-char cap).

1. UNIT/ENDPOINT/COMPARATOR/ESTIMAND: unit = one elastic training job over a
   scripted sequence of resource stages; endpoint = per-mini-batch TRAIN LOSS and
   train-loss difference vs a DDP run (bitwise parameter identity asserted but
   not measured as such); comparator = DDP-homo (fixed GPUs, fixed seeds,
   deterministic algorithms) and DDP-heter, plus EasyScale-D1 vs D1+D2 ablation,
   plus TorchElastic/Pollux in motivation and YARN-CS etc. for scheduling;
   estimand = a deterministic invariance/identity claim (exact equality), not a
   statistical effect with uncertainty.
2. CLAIM: see quotes above (abstract, intro, Sec 3.1, Sec 5.1.1, conclusion).
3. EVIDENCE TYPE: a bitwise-identity CLAIM evidenced by single-run train-loss
   curves/differences over 100 mini-batches per stage, with seeds FIXED. Not a
   tolerance band; not replicated runs. 1 run per configuration, no repetition
   count stated; seeds NOT varied. The only "10 times" repetition is in the
   timing/overhead experiments (5.1.2, 5.1.3).
4. SEED-TO-SEED: clean NO. No seed-to-seed variance figure, no stddev, no
   comparison of configuration-to-configuration vs seed-to-seed differences.
   Fig 2's motivating experiment deliberately holds the seed fixed and varies
   only the GPU allocation, so it cannot separate the two.
5. FINAL-METRIC NUMBERS PER CONFIGURATION: none in the evaluation (Sec 5) — the
   consistency figure is graphical, no table of per-config accuracy/loss. The
   only per-configuration accuracy numbers in the paper are the BASELINE spreads
   in Sec 2.2 (ResNet18/CIFAR10 on varying V100 counts): up to 5.8% val-acc
   difference at epoch 10; 0.6% (TorchElastic) and 2.8% (Pollux) overall-accuracy
   variance at 100 epochs; per-class up to 7.4% (TE) / 17.3% (Pollux), averaging
   3.9% / 7.4%. Non-accuracy numbers: ctx-switch overhead <=1.9% (Electra);
   consistency overhead <1% for NeuMF/Bert/Electra/Swin, ~236% average for D2
   heterogeneity; 67.1% reduction in first-mini-batch time; JCT 8.3x/13.2x,
   makespan 2.5x/2.8x vs YARN-CS; +17.1% GPU allocation ratio, +62.1% SM
   utilization, ~459 idle GPUs, 362 preemptions with no EasyScale job failures.
6. MECHANISMS NAMED: (a) rank/worker-keyed RNG streams — dropout depends on GPU
   RNG state; Python/NumPy/PyTorch random states for dataloader + augmentation;
   (b) BatchNorm tracking running status by worker rank; (c) gradient aggregation
   /reduction ORDER — ring all-reduce and bucket reconstruction, worker restart
   changing the aggregation order of the first resuming mini-batch; (d) GPU
   KERNEL SELECTION — "different kernels selected for the same operator can also
   lead to subtle differences in the results", from profiling-based algorithm
   selection and hardware-dependent kernel implementations; (e) data ordering —
   dataloader worker states and per-EasyScaleThread data indices are tracked so
   the input stream stays consistent, though data sharding is not framed as a
   standalone divergence source; (f) per-GPU batch-size scaling changing the
   inherent hyperparameters. So: ALL FOUR of reduction order, kernel selection,
   rank-keyed RNG streams and data sharding/ordering are addressed, with data
   sharding the least emphasised as a *cause*.

VERDICT: CONFIRMED — the paper does claim bitwise-identical/accuracy-consistent
models across changing numbers and types of GPUs, and it evidences that claim
with single-run, fixed-seed train-loss comparisons rather than replicated runs,
a tolerance band, or a direct bitwise parameter diff; it reports no seed-to-seed
variation anywhere.
