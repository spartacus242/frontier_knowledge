# Verification notes: Epoch "Three challenges facing compute-based AI policies"
Read level: FULL TEXT, but only via a summariser (WebFetch). Page opened at the given URL (slug correct). Summariser refused to reproduce whole article; quotes are short fragments, not stitched.
Searches: 0. Fetches: 3 (all to https://epoch.ai/gradient-updates/three-issues-undermining-compute-based-ai-policies), all succeeded.
Note: summariser gave inconsistent section ordering between calls (sections 1/2 swapped); numbering of sections not reliable.

## Findings
1. Title "Three challenges facing compute-based AI policies"; By Venkat Somala, Anson Ho, and Séb Krier; Sep 11, 2025. Date matches.
2. Not posed as a question of what the figure leaves out in the requested form. Closest: "there are other uses of compute that matter for model performance, but are nevertheless missed by existing compute metrics". Covers: distillation teacher, synthetic data, reward models. Rollouts only loosely ("labs might generate millions of model responses to prompts"); verifier inference not quantified ("universal verifier" named only); failed/discarded runs NOT mentioned.
3a "At the time, pre-training accounted for 90-99% of total training compute" -- denominator total training compute; no source for the range seen via summariser.
3b "~25% of its pre-training compute budget" for phi-4 synthetic data generation. Denominator: phi-4 pretraining compute.
3c "Despite the RL compute representing only one-fifth of the base model's pretraining compute" (R1-Zero). Denominator: base model pretraining.
3d "was likely less than 10% of the pre-training compute" o1-high reasoning training vs GPT-4o pretraining; footnote 4: "It's not certain that o1-high was based on GPT-4o"; "we lack public information about how much compute o1-high required". Note: this is reasoning TRAINING compute, not inference.
3e "requiring merely 3% of the compute budget that went into training the original BERT model" -- DistilBERT. Denominator BERT training compute (student cost only).
3f "current policies typically only count the compute from the student run" -- present.
3g "the compute invested in building reward models remains entirely unaccounted for" -- present; in paragraph on regulatory frameworks generally, not EU-specific. No number for reward-model or teacher inference compute.
4. Spot estimates, no intervals. Only hedges: "estimates of training compute are speculative" (figure caption), footnote 4 above.
5. No distribution; individual examples only (GPT-4o, o1-high, R1-Zero, phi-4, Llama 4, Kimi K2, o3 with tools per summariser).
6. No. No reordering test; no 10^25 FLOP mention. Only qualitative: "a future model could be trained with a fraction of the compute specified by existing thresholds".
