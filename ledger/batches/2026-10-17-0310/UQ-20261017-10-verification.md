# UQ-20261017-10 verification notes (2026-10-17)

## Queries (3 of 7 searches used; none refused)
1. "Unsloth gradient accumulation bug fix October 2024 loss normalization wrong" -> found unsloth.ai/blog/gradient, HF blog gradient_accumulation, Kaitchup posts.
2. "pretraining sequence packing padding fraction percent of tokens padding reported technical report" -> surfaced 1.5-Pints report, packing papers; no direct padding-figure source. 1.5-Pints NOT opened.
3. "padding tokens percentage pretraining concatenat documents ..." -> surfaced 2407.07495 (Bucket pre-training), 2404.10830 (Fewer Truncations), 2408.09621.

## Fetches (6 of 6 used)
1. https://unsloth.ai/blog/gradient - opened. Dated Oct 15, 2024.
2. https://www.huggingface.co/blog/gradient_accumulation - opened. Dated Oct 16, 2024.
3. https://arxiv.org/abs/2404.10830 - opened (abstract only).
4. https://arxiv.org/html/2404.10830v2 - opened; excerpt cut off before experiments; no padding figure seen.
5. https://arxiv.org/html/2407.07495v2 - opened; Table 1 padding ratios.
6. https://arxiv.org/pdf/2407.07495 - opened; confirmed 0.01% (Fixed-1024) and 0.08% (Fixed-16384).
Not opened: 1.5-Pints (2408.03506), 2408.09621, Kaitchup, lyceum; not searched: Llama 3 / OLMo / DCLM / Megatron docs for a padding figure.

## Exact strings checked
- "input documents are typically concatenated together and then split into sequences of equal length to avoid padding tokens" (2404.10830 abstract)
- "the packed training sequences only contain a negligible amount of padding" (2404.10830 intro, Best-fit Packing; qualitative, no number)
- "Padding ratio: The proportion of padding tokens in training sequences." (2407.07495)
- Table 1 r_pad: Fixed-1024 0.01%, 2048 0.01%, 4096 0.02%, 8192 0.04%, 16384 0.08%, DD 0.0%, BucketLLM-v0 0.37%, BucketLLM 0.12%.
- "a representative subset consisting of 100B tokens (approximately 98M documents)" (FineWeb-Edu)
- "naively averaging over each gradient accumulation step is wrong" (Unsloth, Oct 15 2024)
- "This is not the same as the average of the per-batch loss values." (HF blog, Oct 16 2024)
- "divided by the total number of all non padding tokens in those batches." (HF blog)

## Conclusions
1. The 0.01%-0.08% range matches EXACTLY Table 1 of arXiv 2407.07495 (Bucket pre-training), fixed-length rows 1024..16384. But it is a computed data-composition statistic on a 100B-token FineWeb-Edu subset, not a padding ratio published from a large pretraining run (the 1B Llama3.1-architecture model experiments do not report padding). Table 1 does not name its dataset explicitly (page summariser inferred it). No lab technical report (Llama, OLMo, DeepSeek etc.) figure was found; I did not search them specifically. The "so essentially every token carries equal weight in the loss" part is not stated by that paper as far as read.
2. Practice confirmed by 2404.10830 abstract quote above (concatenate then split to avoid padding).
3. Diagnosis found: Unsloth Oct 15 2024 and HF Oct 16 2024. Both concern gradient accumulation normalisation, with the denominator counting non-padded tokens; they are about padding/variable-length micro-batches (mostly fine-tuning), not about packing per se. Whether a fix was merged in Oct 2024 was not checked (no PR opened). Earlier public reports were not searched for.
