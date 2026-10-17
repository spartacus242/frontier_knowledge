# ZClip arXiv:2504.02507 verification
Read level: PDF (via summariser, 3 fetches of /pdf/) + ABSTRACT (abs page). HTML route returned a partial page (no 6.6.1 body).
Calls: 0 searches. WebFetch: abs (ok), /pdf/ (ok), /html/ (partial, ToC only for appendix), /pdf/v1 x2 (ok). curl direct to arxiv pdf: 403 proxy (not counted as content).
Findings:
1. ZClip: Adaptive Spike Mitigation for LLM Pre-Training; Abhay Kumar, Louis Owen, Nilabhra Roy Chowdhury, Fabian Guera (BluOrion); submitted 2025-04-03 (v1; one version).
2. Section 6.6.1 "Z-Score Threshold" (appendix 6.6 Hyperparameter Tuning) exists; Figure 11 caption "Clipping percentage vs. training step for different z-score thresholds." Intro sentence matches the quoted one (returned identically in 2 PDF fetches). Figure at lr 1e-3, 50BT.
3. ZClip z-score thresholds 1.5 to 4.0 step 0.5. Not a fixed norm c.
4. No numeric clipped-step % for fixed c=1.0. Qualitative only: Sec 4.1 at lr 5e-3 "continuous clipping for both strategies" (Fig 5: both "saturated"). Fig 7 (lr 1e-3, c=1.0): fixed clipping "larger and more frequent deviations" (gradient-norm deviations, not clip frequency).
5. No. Plots grad norms before/after clipping only.
6. One model scale (1B LLaMA-style, 16 layers; 7B-70B future work). One training stack (FSDP, 4x8 H100, HF Transformers 4.47.1, PyTorch/Lightning, fused AdamW, BF16).
7. Present per two PDF fetches: "The optimal threshold c furthermore depends on the particular model and the many hyperparameters in the training recipe." In Sec 2.1, run-in heading "Sensitivity to Hyperparameters". HTML fetch only surfaced a different sentence ("difficult to select a single, optimal threshold upfront"); Sec 2.1 title inconsistent across summaries.
Caveat: all via summariser; the 6.6.1/Fig 11 and Q7 sentences came back verbatim in 2 independent PDF fetches.
