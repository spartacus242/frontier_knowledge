# Working notes: arXiv:2604.10480 (Tracing the Roots), Appendix C check

## Searches run: 0 (none needed; direct arXiv fetches)
## Fetches run: 4 of 6 (all succeeded; all via WebFetch page summariser, so everything below is summariser-mediated reading of the arXiv HTML, not my own reading of raw text)
1. https://arxiv.org/abs/2604.10480 - OK. Title, authors, submitted 12 Apr 2026, abstract paraphrased only; no numbers on the abstract page.
2. https://arxiv.org/html/2604.10480v1 (structure) - OK. Headings: Secs 1-6, Limitations; Appendices A (A.1-A.3), B, C (no subsections), D, E.
3. https://arxiv.org/html/2604.10480v1 (Sec 4.2 + App C) - OK.
4. https://arxiv.org/html/2604.10480v1 (Sec 4.2 + Table 3) - OK.
5. https://arxiv.org/html/2604.10480v1 (Sec 5.1, 5.2, Limitations, intro) - OK.
(Fetches 2-5 were the same URL with different prompts; counted as 4 distinct calls after fetch 1 => total 5 calls. Corrected count: 5 fetch calls, under the cap of 6.)

## Strings checked
- "83 high-impact seed datasets": found (Sec 4 / 4.1 / intro).
- "430 distinct datasets connected by 971 inheritance edges": found (Sec 4.1). Intro says "430 unique nodes". The word "expanded" is not the paper's term; 430 includes the 83 seeds.
- "exact (instruction, input, output) triplet matches": found (Sec 4.2); App C: hashes of complete triplets, exact duplicates.
- "unintended redundancy rates of 5.30% and 46.48%, respectively": found (Sec 4.2). Table 3 also lists 46.48 for open-instruct-v1.
- Pairwise overlap matrix over all dataset pairs: NOT found in 4.2, App C, or elsewhere per summariser. Table 2 is a cross-domain source-to-target composition matrix (lineage, not content overlap). Closest: Table 3 top-10 rate list; Table 9 (App C) of intersection paths for six target datasets; Table 10 contamination pairs.
- Datasets-per-example multiplicity: NOT found. Closest: per-dataset redundancy rates; per-benchmark contamination counts.
- Union de-duplicated size of whole pool: NOT found. Nearest number: 570K unique instructions after MinHash dedup of a curated pool of 31 root datasets (~8.7M samples before filtering/dedup), Sec 5.1 / App E. That is a derived training set, not a pool-wide union.
- Near-duplicate rule: present in Sec 5.1 / App E only (MinHash, 128 permutations, threshold 0.7, 8-gram, after exact matching), used to build their own dataset; NOT used in the redundancy/overlap measurement (Sec 4.2 / App C exact only). Embeddings (Qwen3-Embedding-8B) only for Vendi/centroid diversity.
- Declared mixture weights vs content-implied weights: NOT found. Table 4 lists sizes only.

## Appendix C, section by section (no subsections)
(1) Strict matching protocol: hash complete triplets, exact duplicates. (2) Introduces Table 9 (upstream intersection paths) and advises curators to verify. (3) Table 9: six targets with evolutionary paths and intersection points (CodeFeedback-Filtered-Instruction -> CodeAlpaca-20k; Fast-Math-R1-SFT -> OpenR1-Math-220k; Open-Omega-Forge-1M -> codeparrot/apps; Light-R1-SFTData -> NuminaMath-CoT and hendrycks_math; OpenCodeReasoning -> codeparrot/apps; open-instruct-v1 -> self_instruct). No figures, no counts, no hash function named, no 46.48% in App C itself.

## 46.48% denominator
Paper calls it an "unintended redundancy rate" for open-instruct-v1 under the exact-triplet criterion. Neither Sec 4.2, Table 3 nor App C defines numerator or denominator. Presumed (inference, not stated): share of open-instruct-v1's triplets that match upstream (self_instruct) triplets. Not verified.

## Caveats
- All reading went through a summariser; I did not read Appendix C or Appendix E verbatim. Absences are therefore "not found by summariser reading of the relevant sections", fairly strong for App C (short, three items) but not a verbatim whole-paper read.
- Short exact quotes above are summariser-reported, not independently checked against raw HTML.

## Conclusion
Both decisive absences (pool-wide pairwise overlap matrix; datasets-per-example multiplicity) appear absent. Study survives on these two points. Unions, mixture-weight comparison also absent; near-dup rule exists only in their dataset-building step.
