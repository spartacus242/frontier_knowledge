# UQ-20261018-11 by-subject verification: who measured WHICH tokens are dropped at expert capacity, with penalty vs uncapped run

Read level: FULL TEXT/PDF via summariser for OpenMoE (2402.01739), Capacity-Aware Inference (2503.05066v3 html), LIMoE (2206.02770), 2605.17598, 2303.06182. All through WebFetch summariser (verbatim quotes truncated; none stitched). All other hits: SEARCH SNIPPETS/TITLES ONLY (not opened).

## Searches (7 of 7), all returned results, no errors
1. which tokens are dropped mixture of experts expert capacity token dropping analysis by language or domain -> OpenMoE, Soft MoE, LIMoE, Unified Perspective 2503.22996, dev.to blog, NeMo docs
2. MoE token dropping multilingual language disparity capacity factor overflow fairness -> only tokenizer-fairness papers (not MoE), dev.to blog. Nothing relevant.
3. dropless MoE versus capacity factor dropped tokens position in sequence loss penalty -> MegaBlocks, 2303.06182, 2503.05066, blogs
4. expert capacity overflow dropped tokens harm rare languages low-resource MoE translation -> 2212.07571 (MoE overfitting low-resource; not drop-related per title), 2605.17598
5. batch prioritized routing dropped tokens which tokens dropped token frequency -> Soft MoE, LIMoE, MoD, OpenMoE
6. expert choice routing vs token choice with capacity dropped tokens per-domain loss no-drop comparison -> 2604.01622 (diffusion LM EC routing), 2503.22996, MoD, OLMoE (unopened)
7. token dropping sparse MoE dropped tokens disproportionately rare tokens / low-resource / long sequences -> ST-MoE, V-MoE scaling 2303.07226, MegaBlocks, OpenMoE, 2402.12399 (unopened)

## Fetches (6 of 7), all succeeded, no errors
1. arxiv.org/pdf/2402.01739 (OpenMoE) - read OK
2. arxiv.org/html/2503.05066v3 - read OK
3. arxiv.org/pdf/2206.02770 (LIMoE) - read OK
4. arxiv.org/pdf/2605.17598 - read OK; no drop analysis
5. arxiv.org/pdf/2303.06182 - read OK; no drop measurement
6. arxiv.org/abs/2402.01739 - author line check

## Findings
(1) Identity/incidence of dropped set:
- OpenMoE (Xue, Zheng, Fu, Ni, Zheng, Zhou, You; arXiv 2402.01739, submitted 2024-01-29; author order from abs page). Sec 4.3, Fig 12a/12b: token drop ratio (%) vs position ID, per dataset. Strata: position (later tokens dropped) and dataset/domain (RedPajama, The Stack low; multilingual TED and instruction data/MT-Bench high). Language: only aggregate Multilingual TED curve, no per-language split. Token ID: not measured (hypothetical "\n" example). Aggregation: per-position drop ratio pooled over tokens; layer not stated for drop plots. Capacity-free comparator: NONE. Sec 4.4/Fig 14 adds a drop mechanism to Mixtral and DeepSeek-MoE (dropless models) to show same pattern; no quality comparison.
- LIMoE (Mustafa et al. 2022; author list NOT checked against first page), Sec 2.1/2.2.1, Fig 3, 6, 9: "success rate" (share not dropped) per modality (image vs text), layer 9 shown. No position or frequency analysis. No uncapped comparator (eval uses "high slack factor").
- Capacity-Aware Inference 2503.05066 (He, Cai, Huang, Li): drop proportion DT overall per capacity factor; per-layer counts in Appendix F; modality split only for multimodal under drop strategies. No language/domain/frequency/position strata.

(2) Penalty attributable to dropped tokens:
- 2503.05066: aggregate average benchmark accuracy vs uncapped (gamma=inf). OLMoE score selection: 64.0 baseline; 64.0 (g=2.0), 63.1 (1.5), 61.1 (1.0). Token drop at fixed gamma (Table 2): OLMoE 63.5->62.3, Qwen1.5-MoE 65.9->65.1, DeepSeek-V2-Lite 69.3->68.2, Mixtral 74.3->73.8. Aggregate only (mean across benchmarks), not stratified by language/domain/frequency/position. (Figures as relayed by summariser; the 63.5 vs 64.0 baseline mismatch between Table 1 and 2 not reconciled.)
- OpenMoE Sec 3.3.2: attributes MT-Bench multi-turn degradation to drop of long sequences ("probably be caused by the token drop of a long sequence") - speculative, no controlled run.
- LIMoE: dispatch-order variants (BPR ~70% val acc vs shuffle 56%, image-first 42%) - compares prioritisation policies, not capped vs uncapped.
- 2303.06182: asserts drop "harms accuracy", not quantified.
- 2605.17598: no mention of capacity/dropping at all (full text read).

(3) Regression/correlation of stratum drop rate vs stratum penalty: NOT FOUND in anything opened. OpenMoE puts drop rate by dataset/position next to a qualitative degradation claim but computes no per-stratum penalty or correlation.

Unopened/unchecked: ST-MoE, V-MoE scaling (2303.07226), MegaBlocks, Soft MoE, MoD, OLMoE, 2503.22996, 2212.07571, 2402.12399, blog posts. Absence claims therefore rest on search results plus 5 opened papers, not an exhaustive read.
