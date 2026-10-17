# Notes UQ-20261017-26-lategate4-lit-a (started 2026-10-17)

## Budget: 9 searches used, 4 fetches used (both caps exhausted)

## Queries (all WebSearch, standard)
1. spec decoding output distribution drift vs batch-composition nondeterminism baseline -> dev.to post (marcuswwchen), arXiv 2601.11580 "Speculative Decoding: Performance or Illusion?", LLM-42 (2601.17768). Titles only.
2. batch invariance nondeterminism LLM inference -> Thinking Machines-derived blogs, batch_invariant_ops repo mirror. Titles only.
3. two-sample/equivalence testing LLM outputs serving engine quantization -> Model Equality Testing 2410.20247, Auditing Model Substitution 2504.04715, "Same Request, Different Answer" 2609.04748, Certifying Compressed LMs 2608.15046. Titles only.
4. "Same Request, Different Answer" -> same paper; nothing new.
5. spec decoding "not lossless" fp batch size vLLM -> only vLLM docs version pages.
6. Model Equality Testing noise floor same model different engine -> 2504.04715, 2411.05197 Hardware and Software Platform Inference, MET again.
7. vLLM RFC/issue spec decode correctness statistical test -> 2510.22876 "Correctness Forensics for Batch Speculative Decoding: Ragged Tensor Problem", dev.to again.
8. nondeterminism identical-config variation concurrency batch size -> 2506.09501 (Numerical Sources of Nondeterminism), 2601.07239 (Stochastic CHAOS), 2511.17826.
9. Certifying Compressed LMs / equivalence margin / benchmark gap -> 2608.15046; ICML 2026 "Pre-Registering the Detectable Effect: Paired-MDE budget for 4-bit quantization benchmarks" (title only).

## Fetches
A. arxiv.org/pdf/2609.04748 -> FAILED (PDF no text layer)
B. dev.to/marcuswwchen/... -> OK (summariser over full article)
C. docs.vllm.ai/en/v0.22.1/features/speculative_decoding/ -> page body missing (nav only); NOT READ
D. arxiv.org/abs/2609.04748 -> OK, abstract-level via summariser

## Exact strings
- "We measured it. Ran the same 2,000 prompts through both paths, greedy, temperature 0." (dev.to) FOUND via summariser
- "And 1.2% is our number, on our model, at our logit margins." FOUND via summariser
- "A driver update that changes reduction order without changing our config would slip through." FOUND via summariser
- Open-problem sentence about spec-on excess vs composition-matched noise floor: NOT FOUND anywhere I could read (read only dev.to article + 2609.04748 abstract; vLLM docs unreadable).

## Conclusions
See structured output.
