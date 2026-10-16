# Gate 4 (run late and separately) - candidate UQ-20261016-51 - adversary log

Read: the record UQ-20261016-51-record.md and LEDGER.md Gate 4 section only.
Budget used: 12 of 12 web searches, 5 of 5 fetches. No search was refused. The budget is now exhausted, so any check not listed below was NOT RUN.

## Restatement (own words)
Take a fixed set of benchmark items and an open-data model with an indexed pretraining corpus. For each item, find every corpus copy of the stem, label each copy as stating the gold answer, stating a different answer, stating no answer, or revealing that the gold label itself is wrong. (a) Report how common each class is, with extractor error rates. (b) Test whether items whose copies mostly disagree with gold score lower than difficulty-matched items with no copies, and say how many score points the correction moves. Two separable claims: a descriptive census (a) and a causal-sign claim (b).

## Queries (all in vocabularies the record did not use)
1. "benchmark leakage with incorrect labels in training set mislabeled duplicates of test questions effect on test accuracy" (ML label-noise vocabulary) -> Gaperon (2510.25771), Northcutt label-errors paper (2103.14749), blog explainers. Nothing on wrong-label leaks into LM pretraining.
2. "Data Contamination: From Memorization to Exploitation" Magar Schwartz wrong labels -> the paper itself (2203.08242). OPENED, see below.
3. MMLU web crawl answer key source scraped -> HELM, infini-gram mini (2506.12229), Are We Done with MMLU (2406.04127), CCQA. No statement that MMLU keys came from the same pages as corpus copies.
4. Chinese: "基准污染 训练数据 错误答案 泄露 题目 答案不一致 大模型评测" -> surveys (2406.04244), Chinese blogs. No wrong-answer-in-leak study.
5. "contaminated subset lower accuracy than clean subset explanation web copy has incorrect answer" -> Gaperon again, Schaeffer et al. overview, explainers. No explanation of below-clean contaminated subsets.
6. Hendrycks MMLU sources "freely available" practice exams -> mostly irrelevant test-prep pages (weak query; MMLU paper opened directly instead).
7. "answer-aware decontamination ... correct answer versus incorrect answer" (decontamination practice vocabulary) -> infini-gram mini, Olmo 3, Inference-Time Decontamination (2406.13990), Silicon Bureaucracy (2603.21636). No answer-polarity-aware filter.
8. German: "Benchmark-Kontamination ... falsche Antworten im Trainingskorpus" -> English surveys, Contamination Report for Multilingual Benchmarks (2410.16186). Nothing.
9. CV/ML duplicate-leakage vocabulary: "near-duplicate train test overlap label conflict ... ciFAIR" -> Barz and Denzler (CIFAR duplicates), 2504.00638 on duplication. NOT OPENED; titles only. Unknown whether any handles conflicting labels, and it is vision anyway.
10. Frequency/knowledge-conflict vocabulary: "answer follows most frequent answer among pretraining occurrences ... wrong answer more frequent than correct" -> "LLMs and the Madness of Crowds" (2411.01539), co-occurrence factual knowledge (2310.08256), 2607.00447. NOT OPENED; these might bear on the mechanism of (b) and should be checked.
11. "models reproduce erroneous benchmark labels MMLU incorrect gold answer ... memorization" -> Are We Done with MMLU (2406.04127), Li et al. 2310.17589, a 2026 WSD labels paper (2609.17554). NOT OPENED (MMLU-Redux again unread).
12. "infini-gram OR WIMBD OR OLMoTrace benchmark contamination incorrect answer / wrong answer in documents" -> infini-gram mini, Gaperon, Deng et al. "Investigating Data Contamination in Modern Benchmarks" (2311.09783). The last NOT OPENED.
Net: 12 queries, 8+ in new vocabularies (label noise, near-duplicate CV, knowledge conflict / frequency, decontamination practice, Chinese, German, erroneous-key reproduction, answer-side phrasing). No prior found that classifies the answer asserted by naturally occurring corpus copies or reports a disagreement share. Most hit lists were read as titles only; that limits how much the null is worth.

## Pages opened (5 fetches)
- arxiv.org/pdf/2203.08242 (Magar and Schwartz). Quoted: "We assume that test instances appear in the pretrain corpus with their gold labels," and footnote 2 on unlabeled appearance being "beyond the scope of this paper". No wrong-label arm. Table 3 has contaminated settings below the baseline, but the baseline is the released BERT, not a matched clean run, and the text does not treat the drops as an effect.
- arxiv.org/pdf/2510.25771 (Gaperon). Mid-training on benchmark train and test sets (Penicillin-Plus); no wrong-label arm; says contamination "does not degrade performance in any of the chosen tasks" although some table entries sit slightly below the uncontaminated twin. Not about answer polarity.
- arxiv.org/abs/2603.21636 (Silicon Bureaucracy). Abstract only: noisy conditions give above-baseline gains. Not relevant to wrong-answer leaks.
- arxiv.org/pdf/2506.12229 (infini-gram mini). Contamination score is the share of 50-character substrings of the question found in the corpus (clean under 20%, dirty 80% or more). Dirty entries are then categorized with a gpt-4o-mini judge on whether "the correct answer" appears. No gold-agreement check described, no accuracy split by contamination. This is a closer neighbour than the record states: answer PRESENCE is already classified at corpus scale. Disagreement and gold-error classes are absent. (Fetcher summary; I did not see the numeric shares.)
- arxiv.org/pdf/2009.03300 (MMLU). Quoted: "manually collected by graduate and undergraduate students from freely available sources online"; "most of our questions came from PDFs or websites where questions and answers are on separate pages" (summariser paraphrase of the latter; not an exact-string check). No answer-key verification described. This supports web provenance of items but contradicts the idea that corpus copies carry the key on the same page, so it cannot be used for the unsourced "keys from the same pages" claim, and it strengthens presupposition 2 as genuinely contested.

Not opened and used for nothing: MMLU-Redux, Lacuna page D, Deng et al., Madness of Crowds, Barz and Denzler.

## Attacks

1. Triviality - Resolved. No page of existing knowledge gives an occurrence-level disagreement share or a signed correction; the nearest corpus-scale work (infini-gram mini) reports answer presence only and no accuracy split; Magar and Schwartz state a gold-only assumption. Evidence is the opened pages above plus the orchestrator's established facts on Li et al.

2. Disguise - Partial. 12 new queries found no renamed version of the question. But 7 of the 12 hit lists were not opened, and the closest new neighbours (infini-gram mini answer-presence judging; Magar and Schwartz gold-only assumption) show adjacent work rather than a prior. The record's grade of Medium stands; the unopened items (Deng et al., Madness of Crowds, Barz and Denzler, MMLU-Redux) are the checks not run.

3. Combinatorial novelty - Partial. There is a real interface problem (what a copy asserts, how to extract it, gold-error as a separate class, identification of the sign), but the record's argument for it is internal and I have no outside evidence that the interface is hard rather than just unvisited. infini-gram mini shows an LLM-judge pipeline over corpus hits already exists, so the pieces are combinable cheaply.

4. Presupposition failure - Partial. Presupposition 2 (copies state an answer) is contested: the MMLU authors say questions and answers sat on separate pages for most items, so keyless copies may dominate and limb (a)'s denominator be thin. The record already treats a thin denominator as a reportable NO. Presupposition 4 (matched comparison) is the strongest risk: the record's own confounding objection (items with wrong web keys are low-quality items) is not answered by observational data, and I could not source any paper showing a corpus majority answer drives the model's answer (Madness of Crowds not opened). Limb (a) is answerable without it, so the question does not fall; the claim "the correction is signed" would need an injection arm. Not Unresolved because the question is phrased as empirical and has a NO route; not Resolved because nothing evidences that identification can be had.

5. Vagueness - Resolved. YES and NO conditions are quantitative (below about 2% disagreement or a null within a stated MDE; CI excluding zero), the matching threshold is pre-registered, and the extractor error is a reported quantity. Evidence is the record's own pre-specification, which is concrete.

6. Significance inflation - Partial. The audience is real (AI2, EleutherAI, LLM360, DCLM run the indexes; harness maintainers) and the orchestrator's established facts show below-clean contaminated subsets in Li et al. with no explanation. But the record itself says the practice-relevant number may land under a point, and I found no evidence that any maintainer has asked for it.

7. Reason for silence - Partial. The record's instrument-shape mechanism (content never became a variable because it needs an annotator) is weakened: infini-gram mini already uses an LLM judge to classify whether the correct answer appears, so content classification at corpus scale is not out of reach. Magar and Schwartz explicitly scoped out non-gold appearance, which is evidence the case was seen and set aside rather than overlooked. The disciplinary-split and incentive mechanisms remain plausible but unevidenced. This explains non-answering better than non-asking; I could not source anything for non-asking.

8. Dissolution - Partial. Limb (a) cannot dissolve. Limb (b) risks dissolving into item quality unless the counterfactual is defined by intervention (training with copies removed or added), which only the open-data setting allows. The record already says so.

## Result
Provisional. No Unresolved attack, so no fatal ground. Promotion conditions: open and check Deng et al. 2311.09783, MMLU-Redux 2406.04127, Madness of Crowds 2411.01539, Barz and Denzler for any treatment of conflicting-answer copies; read the numeric answer-presence shares in infini-gram mini; decide whether (b) is to be stated with an injection arm.
sourced=true holds vacuously (no attack marked Unresolved).
