# DataDecide (arXiv:2504.11393) recipe check
Searches run: 0 (not needed). Fetches: 4 of 6.
Opened OK: https://arxiv.org/abs/2504.11393 ; https://arxiv.org/html/2504.11393v1 (x3 prompts) ; https://arxiv.org/pdf/2504.11393
Not opened/failed routes: none failed.
Strings checked (summariser-returned, treated as verbatim; summariser = secondary reader):
- Recipe names in Table 1 (Falcon+CC): "Original, QC 10%, QC 20%, QC Orig 10%, QC Tulu 10%"
- DCLM-Baseline: "Original, QC 7% FW2, QC 7% FW3, QC FW 3%, QC FW 10%, QC 10%, QC 20%"
- Falcon+CC desc: "Falcon and Dolma 1.7's Common Crawl." "We quality filter to top 10% or 20% documents with reproduced or original (Li et al., 2024) filter" "or retrain filter on pre-release version of Tulu-v3 (Lambert et al., 2024)."
- DCLM desc: "We quality filter to top 7% of DCLM classified documents and further take 2+ or 3+ scores" "with FineWeb-edu classifier; or filter to top 3% or 10% with FineWeb-edu classifier; or take top" "10% or 20% with reproduced DCLM classifier."
- Seeds: "All 1B (target size) models have 3 full reruns with different seeds," "while other model sizes have second and third seed runs that are terminated early after 25% of the target compute budget."
- Scales: "we opt for 14 specific configurations from 4M–1B parameter scale."
- Abstract: 25 corpora, up to 100B tokens, models up to 1B, 3 random seeds.
Recipe count: 5+1+1+1+1+1+5+7+3 = 25 (Dolma1.7 x5, Dolma1.6++, C4, FineWeb-Pro, FineWeb-Edu, Falcon, Falcon+CC x5, DCLM x7, 3 DCLM/Dolma mixes).
Not found: any statement of which model produced annotations for the classifiers; no OpenHermes/ELI5/Llama annotation mention in Table 1 (appendix not seen by summariser).
Conclusion: names present exactly. Decisive subset (same pool, same keep rate, differing only in annotating model): NO. Orig/Tulu share Falcon+CC and 10% but differ in classifier training data (original DCLM vs retrained on Tulu-v3 pre-release); FW 10% is on DCLM-Baseline pool using FineWeb-edu classifier. Seeds: 3 full only at 1B; others have truncated (25% compute) seeds 2,3.
