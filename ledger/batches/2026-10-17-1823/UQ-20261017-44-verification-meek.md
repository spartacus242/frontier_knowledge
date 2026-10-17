# Verification: Meek et al., arXiv:2606.14000v1
Read level: FULL TEXT via summariser (arxiv.org/html/2606.14000v1, 3 fetches) + PDF route (1 fetch) + abs page (1 fetch). 0 searches, 5 fetches. All via summariser; quotes are fragments.

1. Exists: yes. Meek, Ge, Qiu Xiang, Chess, Ilin; cs.AI; submitted 12 Jun 2026.
2. Corpora counts (NOT in Table 1):
 - 175 = statements in Butcher textbook (denominator for 54.9% coverage; 84 proof-complete + 12 statement-only). Not an evaluation count.
 - 4,636 = M2F proofs in Table 3 Mathlib-overlap analysis (230, 5%).
 - 6,960 = RepoProver proofs in Table 3 (278, 4%).
 Table 2 n (derived by summation, not stated): direct OpenMath 95, M2F 1864, RepoProver 1438; round-trip 95 / 1722 / 1341.
3. Categories Faithful/Stronger/Different: yes (Table 2 caption). Assigned by LLM judges (DeepSeek-V4-Pro direct; gpt-oss-120b round-trip). Human check: 2 authors regraded 20 OpenMath entities, agreed on 18. "Stronger" rubric: "a sound generalization, acceptable for a formalization audit". Does NOT explicitly include dropping a redundant hypothesis; Thm 523A (drops PSD hypotheses) is "correctly flagged ... as Different" by the judge. Not stated as a general rule.
4. The 54/4/42, 73/2/25, 82/1/18 triples are in Table 2 (not Table 1), NL vs Lean direct row, percentages with counts in parentheses: OpenMath 54%(51)/4%(4)/42%(40); M2F 73%(1359)/2%(42)/25%(463); RepoProver 82%(1173)/1%(12)/18%(253). Round-trip: OpenMath 46/14/40; M2F 61/13/26; RepoProver 69/11/19. Agreement (F+S grouped) 72.6/74.7/78.4. Table 1 is sorries/axioms (RepoProver 5*/0, M2F 12/4, OpenMath 0/0).
5. Comparator: OpenMath = Butcher textbook NL statements. M2F = largely M2F's own generated docstring (self-consistency); 30 Rockafellar s1.1 entities mentioned. RepoProver = blueprint NL (leanok environments) of algebraic-combinatorics textbook. Round-trip: textbook NL vs blind back-translation from Lean. Table 3 comparator = Mathlib (exact?+all).
6. Agent-produced. Abstract: "applying a coding agent to formalize Numerical Methods for Ordinary Differential Equations"; s2.1 "RepoProver orchestrated thousands of parallel agents to formalize a graduate algebraic-combinatorics textbook in Lean". M2F: "we pair each M2F-generated docstring". Paper never says any Table 2 statements were human-written.
7. CIs: NOT FOUND (no CIs, bootstrap, error bars; "confidence" only judge's per-edge output). Covariates: NOT FOUND as analysis (only chapter-level coverage, e.g. Ch.3 34.8%). Frame audit: NOT FOUND (admits drops from parsing failures/API errors not missing at random; no audit of how entities selected; only the 20-entity OpenMath sample is stratified random).
