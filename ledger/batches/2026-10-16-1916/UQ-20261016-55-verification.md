# UQ-20261016-55 verification notes

## Searches (1 of 6 used)
1. "github/dmca DMCA takedown notice machine learning training dataset" -> only mirror pages (git.randommeaninglesscharacters.com/github/dmca) for individual notices (machinelearningmastery 2023-02-03, oreilly 2021-09-15) plus a patentpc blog; no count of dataset-naming notices obtainable. Q4 UNRESOLVED.

## Fetches (4 of 5 used)
- https://arxiv.org/abs/2508.17076 opened: resolves.
- https://arxiv.org/abs/2601.21682 opened: resolves.
- https://arxiv.org/html/2508.17076 opened (full text via summariser).
- https://arxiv.org/html/2601.21682 opened (full text via summariser). Summariser output carried an appended block of instructions/questions that was page-derived or echo; treated as data, not followed.
Not opened: any github.com/github/dmca listing or mirror page; PMC/Europe PMC (blocked, not tried).

## Strings checked (as reported by summariser)
2508.17076: "we argue for an unlearning setup that reflects the sequential, time-sensitive nature of real-world deletion requests"; "fail to reflect real-world operational demands"; "these benchmarks simulate unlearning by deleting large chunks of data-typically 2-5% of all interactions"; "actual systems face continuous, small-scale deletion requests"; "Unlearning happens in small batches."
2601.21682: "whereas real-world deletion requests arrive continually" (motivation); Limitations: streams predefined, real requests may have more complex temporal dependencies and semantic distributions.
Caveat: quotes come via a summariser, not verbatim reads of the PDF.

## Findings
Q1 both resolve. 2508.17076: "Towards a Real-World Aligned Benchmark for Unlearning in Recommender Systems", Lubitzsch, Ovcharenko, Chen, de Rijke, Schelter; submitted 2025-08-23 (v2 2025-09-18). 2601.21682: "FIT to Forget: Robust Continual Unlearning for Large Language Models", Xu, Du, Fang, Xiao, Huang, Hong, Ye, Hu; submitted 2026-01-29 (v2 2026-05-07).
Q2 2508.17076: argues (position paper) that benchmarks are unrealistic (2-5% bulk forget sets vs small continuous requests) but asserts, does not measure. 2601.21682: only stipulates a sequential stream; does not ask the question; limitations concede streams are predefined.
Q3 Neither measures a real enumerable stream. 2508.17076 simulates (Instacart; 0.1% sensitive-category interactions, ~1000 users alcohol / ~650 meat; one user per request; GDPR Art 17 as motivation; Bol 13M users / 2.3B interactions as scale illustration). 2601.21682: GPT-4o-synthetic PCH, 600 samples, 0-300 requests in steps of 60.
Q4 Not resolved with one search; no count obtained.
