# UQ-20261018-15 verify TOTT (arXiv:2407.07890)

Read level: FULL TEXT of PDF (via summariser; first 100000 of 101411 chars, last 1411 unread) plus arxiv.org/html section outline, arXiv abs page, iclr.cc oral page. All via summarising fetcher; quotes <=125 chars checked individually.

## Routes (1 search, 7 fetches; no errors encountered)
1. WebFetch arxiv.org/html/2407.07890 - OK; title, authors, headings. No venue text on page (only "arXiv:2407.07890v3 [cs.CL] 21 Apr 2025").
2. WebFetch arxiv.org/pdf/2407.07890 - OK (chars 0-100000). Authors, Appendix B tables.
3. WebFetch arxiv.org/pdf (2nd) - OK; Sec 2.2 quote, Sec 3.2 verbatim check.
4. WebFetch arxiv.org/html (2nd) - OK; Sec 3.2 format, checkpoints, unit.
5. WebFetch arxiv.org/abs/2407.07890 - OK; Authors; Comments: "ICLR 2025 (Oral)". v1 10 Jul 2024, v2 12 Dec 2024, v3 21 Apr 2025.
6. WebSearch "Training on the Test Task Confounds ... ICLR 2025 oral openreview" - OK; results incl iclr.cc/virtual/2025/oral/31791, is.mpg.de news "ICLR 2025 Oral". (titles/URLs only)
7. WebFetch arxiv.org/pdf (3rd) - OK; Appendix B tables 3 and 4, GSM8K 19 vs 17.
8. WebFetch iclr.cc/virtual/2025/oral/31791 - OK; lists "2025 Oral", authors Dominguez-Olmedo, Florian Eddie Dorner, Hardt.

## Findings
Q1 FOUND. Title confirmed. Author line in printed order (PDF first page): Ricardo Dominguez-Olmedo, Florian E. Dorner, Moritz Hardt (MPI-IS Tuebingen, Tuebingen AI Center, ETH Zurich). The supplied author line "Dominguez-Olmedo, Hardt & Mendler-Dunner" is WRONG: no Mendler-Dunner; Dorner is the missing middle author; Hardt is last, not second. Venue: PDF/HTML pages carry no venue text; arXiv abs Comments "ICLR 2025 (Oral)"; iclr.cc page lists it as 2025 Oral. Oral supported by record, not by paper's own text.
Q2 FOUND. Appendix B ("Causal interpretation of our findings") splits effect of model recency N on accuracy A into direct N->A and indirect N->T->A (T = training on test task). Method: causal-mediation framing (regression-estimated direct/indirect effects, Eq 5-6) built on a fine-tuning adjustment (fine-tune all models on same task data, treated as hard intervention do(T=t)). Sec 2.2 main gap: regression with clustered SEs by model family; after adjustment coefficient theta small, not significant. The "mediator" is training on test task (task-relevant data), not specifically multiple-choice-format ability alone.
Q3 per number:
 - 0.071 (MMLU): EXISTS, Appendix B Table 3 (NOT Table 2; no Table 2 mentioned), indirect effect phi-hat, SE 0.018, R2 0.530. Units not stated (probably accuracy as fraction; text never says). Denominator not stated.
 - 0.168 (GSM8K): EXISTS, Table 3, SE 0.032, R2 0.503. Same caveats.
 - ">7 points MMLU": EXISTS, Sec 2.2: "over 7 accuracy points in MMLU" (unadjusted newer-vs-older gap at equal pretraining compute, regression coefficient, pooled across models, 56 base models).
 - ">17 points GSM8K": DOES NOT EXIST as stated. Paper says "19 accuracy points in GSM8K" in Sec 2.2 and Intro. Record figure is wrong.
 Note: 0.071 vs ~7 points and 0.168 vs 19 points are different regressions/quantities; 0.168 does not match 19 points, so they are not simply total effect.
Q4 NOT FOUND as a share. Only effects in accuracy points (coefficients, SEs); no proportion/percentage mediated stated anywhere in the ~100k chars read. Reader would have to compute (e.g. 0.071 / total effect) and the total effect is not given in the same table. Text only says effect "significant, positive, and large", newer models score higher "primarily because of training on the test task".
Q5 FOUND partly. SEs in parentheses (0.018, 0.032); no confidence intervals; bold = p<0.05. Direct effect Table 4: MMLU psi-hat -0.004 (SE 0.009), GSM8K 0.000 (SE 0.032); text: "no evidence of a significant direct effect of model recency N on accuracy A". Appendix B clustering not stated.
Q6 VERBATIM (summariser reported word-for-word; followed by footnote marker): "conflates knowledge-testing with testing a models' ability to answer multiple choice questions". Located in Sec 3.2 "What does MMLU test for?" paragraph. Caveat: single-summariser confirmation, not a second independent read.
Q7 UNIT: released base models (56 base models, 70M-70B params), split by release before/after Nov 2023, controlling for pretraining compute. Within-pretraining-run checkpoint comparison: NOT FOUND. LR cooldown/annealing: NOT FOUND (read ~100k of 101,411 chars; last 1411 chars unread, likely references/end). Only intermediate checkpoints are of FINE-TUNING runs, used in emergence analysis (Sec 5).
Q8 Format mechanism: Sec 3.2 reformulates ARC/HellaSwag from cloze scoring to MMLU-style multiple-choice prompts (prompt format change, evaluation only, no weight update), and also evaluates MMLU in cloze. Quote: "We then reformulate ARC and HellaSwag as MMLU-style multiple-choice questions". No temperature/entropy rescaling, length-normalised or rank-based scoring, or label-emission correction reported. The adjustment is by TRAINING: "we adjust for test task training by fine-tuning all models on the MMLU auxiliary training set". So: prompt reformulation + fine-tuning; not a fixed-weight output transform.
