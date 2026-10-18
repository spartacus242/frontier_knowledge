# UQ-20261018-11 verify Switch Transformers (arXiv:2101.03961)

Read level: FULL TEXT via summariser (arxiv.org/pdf/2101.03961 main body + Appendices A-F; text ended inside reference list). arxiv.org/html/2101.03961 also resolved (first 100000 of 102005 chars read through summariser). Everything came through a summariser, not raw text.

## Calls
Searches: 0 of 7.
Fetches: 6 of 7, all succeeded, no errors.
1. arxiv.org/abs/2101.03961 - OK. Authors in order: William Fedus, Barret Zoph, Noam Shazeer. Abstract matches (up to 7x pretraining speedup, T5-Base/Large, 101 languages, trillion params).
2. arxiv.org/pdf/2101.03961 - OK. Section 2.2 sentence located.
3. arxiv.org/pdf/2101.03961 - OK. Wording and scope of the fraction.
4. arxiv.org/pdf/2101.03961 - OK. Whole-paper check on which tokens drop and cost of dropping.
5. arxiv.org/pdf/2101.03961 - OK. Appendix F code, Table 1, Appendix B.
6. arxiv.org/html/2101.03961 - OK, same sentence confirmed independently.

## Findings
Q1. FOUND, VERBATIM fragment. Section 2.2 (Distributed Switch Implementation), paragraph after the expert capacity formula: "we didn't notice any dependency on the number of experts for the number of tokens dropped (typically < 1%)". Summariser reported a leading "Throughout our experiments" once; treat that opening as unverified. The "typically < 1%" string was checked on its own and appears in the parenthesis. It is NOT a statement that the drop fraction at the capacity limit is <1% for a stated capacity factor: no capacity factor, model size or step is attached to it. The statement is about the lack of dependency on the number of experts. Adjacent sentence: "Empirically we find ensuring lower rates of dropped tokens are important for the scaling of sparse expert-models" (no ablation given). Same paragraph says the auxiliary load-balancing loss with a high enough coefficient ensured good load balancing. Table 1 uses capacity factors 2.0, 1.25, 1.0 but reports no drop rates.
Q2. NOT FOUND. Aggregation not stated (not per batch / layer / run / training average). It is a single unqualified aggregate remark ("throughout our experiments" per summariser). Read full main text and appendices.
Q3. NOT FOUND. No analysis by language, script, domain, frequency or position. Section 4.3 has per-language speedups for the multilingual model, not overflow. Read whole body plus Appendices A-F.
Q4. NOT FOUND for direct cost of dropping. No ablation of dropped-token cost, and no infinite-capacity / no-limit run. Closest: Table 1 (quality after 100k steps, neg log perplexity): Switch-Base CF2.0 -1.554, CF1.25 -1.553, CF1.0 -1.561; MoE-Base 2.0 -1.547, 1.25 -1.559, 1.0 -1.572. These vary capacity factor, not drop rate, and no run removes the limit. Appendix B (No-Token-Left-Behind): rerouting overflow tokens to next-best expert, "found no empirical benefits" (summariser wording), reported as not helping; says "virtually no tokens are dropped" after iterating.
Q5. PARTIAL. Text (Sec 2.2): overflow tokens skip expert computation and the representation "is passed directly to the next layer through the residual connection". No explicit selection rule in prose. Appendix F Figure 15 code implies arrival/position order within the core: position_in_expert = mtf.cumsum(expert_mask, dimension=tokens_per_core) * expert_mask; expert_mask *= mtf.less(position_in_expert, expert_capacity); comment "Keep only tokens that fit within expert capacity." Gate score does not appear to decide who is dropped. That is an inference from code, not a stated rule.

## Caveats
All quotes via summariser (125-char truncation); code lines and Table 1 numbers are summariser transcriptions, not checked against a second rendering except the Sec 2.2 sentence (3 fetches agree).
