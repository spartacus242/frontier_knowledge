# UQ-20261017-27 working notes: replicated runs per configuration, config vs seed variation

## Searches (cap 8): 0 run. Both papers were opened directly by arXiv ID.

## Fetches (cap 6)
1. arxiv.org/abs/2609.17380 (no scheme): rejected by tool URL validation, never sent. Counted against the cap to be safe.
2. arxiv.org/abs/2408.05148 (no scheme): same rejection. Counted against the cap to be safe.
3. https://arxiv.org/abs/2609.17380: OK. Abstract only.
4. https://arxiv.org/abs/2408.05148: OK. Abstract only.
5. https://arxiv.org/html/2609.17380v1: OK, text through Appendix B, not truncated (per page summariser).
6. https://arxiv.org/html/2408.05148v3: OK, text through references, not truncated (per page summariser).
Total calls: 6. Successful fetches: 4. No HTTP 429.

Caveat: the HTML pages were read through WebFetch's summariser, not directly. Quoted strings are as relayed by the summariser. I did not re-check each string one at a time (no budget left).

## SOURCE A: arXiv:2609.17380, "OPEN-1B: A Fully Auditable Training Run"
- Authors: Donaghy, Wilcox, Ersoy, Rastogi, St Arnaud, Titov, Greenberg, Fielding, Grieve.
- Unit: one optimizer step (every op on every sample); run level is chained step hashes giving one final hash.
- Endpoint: bitwise equality of replayed steps with the published run.
- Comparator: the published trajectory (bf16 PyTorch baseline for the loss/stability comparison in section 4.3).
- Estimand: whether the released checkpoint was produced by the declared recipe; secondary, throughput/MFU overhead.
- A2: only data parallelism / node count varied (1 to 6 nodes, HSDP, 288 micro-batches, recipe and global batch fixed). No TP/PP/SP/EP variation. H100 only. The scaling study reports throughput and efficiency, not model equality. Bit-exactness across device counts is asserted ("bit-exact under replay, independent of device count and topology", 3.1), not measured. Six restarts were hash-checked (3.4).
- A3 (decisive): a single run. "The released run uses a single global seed of 42." (3.2). "Each configuration ran twice, once performing the state hash each step and once with hashing disabled." (5): throughput measurements, not training replicates. No seed-to-seed baseline. Section 6 (Audit) has no empirical replay results.
- Strings: "single global seed of 42" found; "Each configuration ran twice" found; "bit-exact under replay" found. Seed-variation baseline: not found in the full text as relayed.

## SOURCE B: arXiv:2408.05148v3, Shanmugavelu et al., "Impacts of floating-point non-associativity on reproducibility for HPC and deep learning applications"
- Unit: individual kernel invocations (parallel sums, PyTorch scatter_reduce, index_add); one end-to-end case, 1,000 GraphSAGE models per condition.
- Endpoint: bitwise identity metrics (V_s, V_ermv, V_c; V=0 is identical); runtime.
- Comparator: deterministic vs nondeterministic implementation of the same op, same GPU.
- Estimand: run-to-run variability from FP non-associativity, fixed inputs, fixed stack, single GPU.
- B2: mostly operation-level plus throughput. One trained-model comparison (2-layer SAGEConv, Cora, 10 epochs, Table 7). Convergence qualitative only ("converge to similar loss values").
- B3 (decisive): no decomposition into between-configuration and seed components; no ANOVA, variance components or multi-seed design. Seed was held fixed (unset seed listed as a source removed). No statement that configuration changes leave the trained model unchanged. Distributed-setting remarks are untested assertions ("in HPC and distributed settings there will also be inter-chip and inter-node communication"; a cited claim that inter-chip communication can be software scheduled).
- Strings: the "unchanged by configuration" claim: not found in the full text as relayed. Decomposition: not found.

## Conclusion
Neither paper reports replicated training runs per parallelism/hardware configuration, and neither compares configuration-to-configuration differences against seed-to-seed differences. A is a single run with a fixed seed; B has 1,000 repeats of one configuration on one GPU, with no configuration contrast.
