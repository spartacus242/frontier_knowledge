# Verification: arXiv:2604.14434 (companion to 2604.14419)
Web searches run: 0 (none needed). Fetches: 3 of 6.
## URLs
- https://arxiv.org/abs/2604.14434 : opened. Title "Geometric Routing Enables Causal Expert Control in Mixture of Experts", Ternovtsii & Bilak. Abstract only.
- https://arxiv.org/html/2604.14434v1 : opened (summariser output). ST-MoE trained from scratch on WikiText-103, 50K steps; Wide 1x12 (PPL 33.93), Deep 3x4 (PPL 34.62), linear-router (PPL 32.76); 36M logit-lens model. No seed counts for its own experiments. No cross-seed token-to-expert agreement. Only permutation null = Section 5 silhouette (200 permutations).
- https://arxiv.org/pdf/2604.14434 : opened. Strings checked: "seed" (only "15 runs across 3 seeds", attributed to companion paper; "category seed words" = vocabulary), "Hungarian" (not found), "permutation" (Sec 5 "permutation null (200 permutations)"), "agreement" (not found), "across runs" (Sec 13 related work, SAE features 30-40% shared, other work), "early checkpoint" (not found), "step 500" (not found).
## Conclusion
No cross-seed, matched-expert routing-agreement measurement against a null. Wide vs Deep are different architectures, not seeds. Analyses at converged 50K checkpoint only. Caveat: results come via a page summariser, not a full manual read.
