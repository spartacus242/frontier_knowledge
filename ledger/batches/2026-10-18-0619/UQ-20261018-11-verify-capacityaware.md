# UQ-20261018-11 verify Capacity-Aware Inference (arXiv:2503.05066)

Read level: PDF (arxiv.org/pdf/2503.05066, read through the fetch summariser, not raw text) plus abs page. Not a raw-text read; quotes below are summariser output.

## Calls (0 searches, 4 fetches on the PDF/abs + 1 invalid call)
1. WebFetch "arxiv.org/abs/2503.05066" -> FAILED: InputValidationError "invalid_format ... path: url ... Invalid URL" (missing scheme; tool-side, not the document).
2. WebFetch https://arxiv.org/pdf/2503.05066 -> OK. Title and authors as printed on first page.
3. WebFetch https://arxiv.org/abs/2503.05066 -> OK. v5, submitted 2025-03-07, v5 2026-05-11. No comments/venue line on abs page.
4. WebFetch PDF (drop rate / loss / ICLR checks) -> OK.
5. WebFetch PDF (baseline labels, tables, 12% sentence) -> OK.

## Findings
Q1 Title (PDF first page): "CAPACITY-AWARE INFERENCE: MITIGATING THE STRAGGLER EFFECT IN MIXTURE OF EXPERTS". Authors in order: Shwai He, Weilin Cai, Jiayi Huang, Ang Li (matches arXiv abs ordered list). First author Shwai He. Running header "Published as a conference paper at ICLR 2026" reported on every page (PDF); abs page itself shows no venue.
Q2 Yes. Table 1 (OLMoE): row "Baseline" with gamma=+inf, no capacity constraint, no drops. Table 2: "Baseline" per model, capacity setting not stated in table; text (Sec 3.2) says MoE models often use dropless inference. Table 9 (SEED-Bench) has a gamma=inf baseline.
Q3 Finest accuracy grain: benchmark sub-category - MMBench six capabilities (CP, FP-C, FP-S, AR, LR, RR; Fig 11 bar chart), SEED-Bench dimensions (Table 9). Otherwise per task (OBQA, PIQA, RTE, WinoGrande, BoolQ, ARC-C, HellaSwag, MMLU, GSM8K; Tables 1-3). Finest non-accuracy grain: dropped-token % per layer, per capacity factor, per dataset (App G, Figs 17-20); expert load per expert per layer (App F). No per-token results.
Q4 No drop rate by language/script/domain/frequency/position. Only: per-dataset drop % vs gamma (Fig 7; App G per layer: OBQA, PIQA, RTE, WinoGrande, BoolQ - datasets are tasks, not token strata); aggregate 2% (Expert Drop) vs 12% (Token Drop) on OLMoE-Instruct (Sec 5.2); multimodal image/text expert LOADS (Fig 10) and Text First/Image First/Uniform drop orders (Table 4) but no per-modality drop rate. Read: whole PDF via summariser, queried specifically; cannot exclude a missed sentence.
Q5 No correlation/regression/paired per-stratum test. Only qualitative accuracy vs gamma: Table 1 OLMoE baseline avg 64.0, Score rule gamma=1.0 avg 61.1, other rules 51.8-53.1; Sec 5.2 Expert Drop (2% dropped) hurt more than Token Drop (12%); App D/Fig 12 gamma 1.5 "sufficient to maintain performance". No loss/perplexity reported (accuracy, EM, pass@1, BERTScore, speedup). Table 1 averages over seeds. The "12% -> ~0.9% degradation" figure was attributed by the summariser to abstract/Sec 5.2; not independently checked against the abstract text (summariser would not reproduce the abstract).
Q6 Capacity C = gamma * mean per-expert tokens, enforced locally per device. Token Drop Table 1 (OLMoE): gamma 2.0, 1.5, 1.0 with rules Order, Reverse Order, Random, Score (default). Table 2: Token Drop & Expanded Drop gamma 2.0 (OLMoE-Instruct, DeepSeek-V2-Lite), 1.5 (Qwen1.5-MoE-Chat, Mixtral-8x7B-Instruct); Expert Drop skips lowest-load 10% of experts. Table 3 (Qwen3-MoE): expert-level gamma 1.5 vs device-level 1.0. MolmoE: gamma 1.0, 0.5 with Uniform/Text First/Image First; Table 9 gamma 0.5/1.0/1.5. Fig 12 sweeps 0.0-3.0.

## Caveats
- Summariser inconsistency: Fig 18 named "DeepSeek-V2-Chat" in one answer, Table 2 uses "DeepSeek-V2-Lite"; unresolved.
- Sec 5.1 "12% ... Mixtral ... 85% speedup" vs Sec 5.2 "12% ... OLMoE-Instruct": different models; ambiguous whether all or overloaded tokens. Abstract page cites 1.85x speedup for Mixtral Expanded Drop.
- gamma for the 12% OLMoE figure not stated in that sentence; gamma=2.0 inferred from Table 2.
