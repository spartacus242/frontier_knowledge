# Verification: arXiv:2606.21023 (HEAL)
Read level: PDF (arxiv.org/pdf/2606.21023 via summariser; two fetches), plus abs page.
Calls: fetch1 arxiv abs (ok: title, authors, 2026-06-19, v1). search1 title query (ok: arxiv pdf URL found). fetch2 pdf (ok, design/tables/appendices). fetch3 pdf (ok, affiliations, App B.1 fragments, Table 2 denominator). 1 search, 3 fetches total.
Real title: "Demystifying Numerical Instability in LLM Inference: Achieving Reproducible Inference for Mission-Critical Tasks with HEAL". Authors: Zhenting Zhu, Lucas Thai, Shan Yu, Yicheng Liu, Yifan Qiao, Chenxi Wang, Harry Xu, Junyi Shu. UCLA (6), UC Berkeley (Qiao), UCAS (Wang).
Q2 dtype BF16/FP16/TF32(+LayerCast)/FP32(+LayerCast)/HEAL; GPUs A100, H100, MI300X; attention TritonAttention for all baselines (FlashAttention lacks FP32; only profiled Table 1); batching: fixed, vLLM original order, vLLM reverse order, x3 GPUs = 9 measurements.
Q3 no weight-quantization arm. HEAL INT16 on Q,K,V activations only.
Q4 "6.2 +/- 0.4" in Table 2, BF16 row, Qwen3-8B, flip rate %, SEM. Denominator not stated; unit is percent of responses diverging from FP32 ground truth, not a count of flips. MCR-Bench 100 cases x 9 measurements is plausible but unconfirmed.
Q5 App B.1: "generally originate from highly unstable questions." Manual inspection only; no statistic or count. Authors say these reflect model capability limits, not precision issues.
Q6 No per-item flip propensity, concordance, or null model.
Q7 No batch-size-1 control. Large batches required; max-num-seqs 256.
Q8 Anchor: FP32 LayerCast on NVIDIA H100. Flip analysis on MedQA (200 of 1273) ran only on MI300X.
Caveat: summariser output; only short fragments treated as quotes.
