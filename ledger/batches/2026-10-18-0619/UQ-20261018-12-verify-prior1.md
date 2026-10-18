# UQ-20261018-12 verify arXiv 2602.03839
Read level: PDF (via summariser; main text + appendix excerpt from offset 40000). Not read by me directly; all text is summariser output.

## Calls
- S: 0 searches.
- F1 WebFetch "arxiv.org/abs/2602.03839": FAIL InputValidationError "Invalid URL" (no scheme).
- F2 WebFetch "arxiv.org/pdf/2602.03839": same FAIL.
- F3 https://arxiv.org/abs/2602.03839: OK. Title, authors Erfan Miahi, Eugene Belilovsky; v1 2026-02-03, v2 2026-05-19; cs.LG; no venue.
- F4 https://arxiv.org/pdf/2602.03839: OK. Authors w/ affil (Miahi, Covenant AI; Belilovsky, Mila/Concordia). Date not stated in text.
- F5 https://arxiv.org/html/2602.03839v2 (ulp/Definition): OK but appendix body absent; no "ulp" found; found |w|/256 sentences in Sec 3.2 and Fig 3 caption.
- F6 same html (7.7 / pretrain / breakdown): OK; appendix absent; no 7.7; "pre-training" appears only in Intro in a related-work context.
- F7 https://arxiv.org/pdf/2602.03839 offset=40000: OK; appendix.

## Findings
Q1 FOUND. Resolves; exact title "Understanding and Exploiting Weight Update Sparsity for Communication-Efficient Distributed RL". Authors Erfan Miahi, Eugene Belilovsky. v1 2026-02-03, v2 2026-05-19. arXiv preprint, no venue.
Q2 FOUND (PDF main text). Unit: fraction of model parameters (scalar). Endpoint: BF16-cast value unchanged between consecutive steps. Comparator: previous step's BF16 values (also k<=8 step gaps, staleness S<=32). Estimand: mean per-step sparsity. Also proposes PULSE (PULSESync lossless sparse BF16 patches, >100x sync reduction; PULSELoCo, >17x vs DiLoCo).
Q3 FOUND, label correction: Definition A.2 is "Update Sparsity": "the fraction of parameters that remain bitwise identical between step t and t + k after casting to D." (short fragment; summariser did not give the full definition). Definition A.1 compute-view weight update; A.3 Update Absorption: bf16(w+dw)=bf16(w). Unit = scalar parameter, k-step gap (k=1 per step). Dtype D general, BF16 the case studied.
Q4 FOUND. "approximately 99%" mean per-step sparsity; Qwen2.5-0.5B/1.5B/7B-Instruct, Llama-3.2-3B-Instruct, Gemma-3-4B-it; GRPO on MATH. Aggregation: whole-model fraction at each step, averaged over 400 steps, step SD 0.2-0.4%. >98% for k<=8. Fig 8 (Qwen2.5-1.5B, FP32 master): >99.4%. Per-model exact values only in Fig 2(a), not retrieved.
Q5 FOUND. Sec 3.2: "updates smaller than roughly |w|/256 cannot be represented and are rounded away." Appendix: "so half a unit in the last place (ULP) is:" and "A characteristic scale for this boundary distance is half a BF16 ULP." and "The factor 256 = 2^8 has a clean ULP origin." (appendix, Appendix D). Abstract: Adam updates "smaller than the local BF16 rounding threshold".
Q6 FOUND. |w|_crit ~ 7.7e-4 (7.68e-4 in Eq.16) = characteristic weight magnitude 256*eta at eta=3e-6, above which weights absorb one-step Adam updates (assumes |m_hat|/sqrt(v_hat)~1, not verified in training per summariser). Appears A.2, A.4, Table 2 caption, App D Table 6. NOT the sparsity. Distinct 7.68e-3 appears in A.5 Condition 3 (2560*eta worst case), not reconciled in text. Table 2: % of weights above |w|crit 94.8-97.6% (0.5B 96.2, 1.5B 97.6, Llama3B 96.5, Gemma4B 95.3, 7B 94.8).
Q7 FOUND. RL fine-tuning only (GRPO on MATH). No pretraining measurement; claims RL LRs are 100-1000x lower than pretraining (A.5, unsupported by measurement). "pre-training" mentioned in Intro only for related-work context.
Q8 NOT FOUND. Aggregate only; Table 2 gives whole-model magnitude percentiles (5th, median, 95th, mean). No embedding/norm/decile breakdown in the excerpts read (main text and appendix from offset 40000; not every page confirmed).
Q9 NOT FOUND (as matched-arm). Fig 8 shows sparsity + validation pass@1 for one model with FP32 master weights/BF16 compute, but no BF16-master comparator arm on held-out metric. Claim that FP32 eliminates sparsity attributed to Shenfeld et al.
Caveat: summariser inconsistently labelled which definition number is bitwise equality in F4 vs F7; F7 (appendix text) is taken as authoritative. 
