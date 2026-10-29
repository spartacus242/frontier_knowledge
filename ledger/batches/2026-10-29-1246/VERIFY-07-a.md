# VERIFY-07-a — UQ-20261029-07, Prior P1 (Jumelet & Zuidema, arXiv:2310.14840 / Findings of EMNLP 2023)

Date: 2026-10-29. Role: fresh-context checker, post-batch verification pass. Not an adversary, not a judge; no verdict on the entry is recommended here.

Claim tested: the entry's and record's account of Prior 1 — its Table 1 numbers and labels, the "considerable gap" sentence, the §3.2 "exact lower bound" sentence and what the bound is, the §5.4 / Figure 5 scaling claims (and whether any asymptote is fitted), and the dedicated-sweep absence claims for "irreducible", "entropy rate", "asymptote" and "entropy".

Verdict on the claim as the entry makes it: **PARTIAL** — every printed number, label and section location the entry cites is confirmed on two documents over three retrieval paths; the sweep absences are confirmed at summariser strength; the verbatim quotation is truncated (drops ", however"); and the entry omits a caveat printed in the paper itself (footnote 7: the causal PCFG bound rests on "a sample of 1100 token probabilities") that bears on how much the printed 183.1-vs-192.8 gap can carry. Details below.

## Budget tally (recorded first, as the rules require)

- Web searches: 2 of 3 used. One unspent: after the two documents were in hand no load-bearing item remained that a search could ground, and no COULD NOT READ is outstanding.
- Retrieval attempts: 8. One `curl` attempt on https://arxiv.org/pdf/2310.14840 FAILED (`curl: (56) CONNECT tunnel failed, response 403` — tool-scoped per the route facts; the egress proxy was not inspected or probed). Seven WebFetch calls SUCCEEDED: arxiv.org/pdf/2310.14840 x4 (Table 1 + §3.2; gap sentence + §5.4 + asymptote question; term sweep A; §7/§8/fn 7/corpus sizes), aclanthology.org/2023.findings-emnlp.288.pdf x2 (Table 1 + fn 7 + Fig. 5 axes; term sweep B), ar5iv.labs.arxiv.org/html/2310.14840 x1 (term sweep C + Table 1 + gap sentence). **If the failed curl counts as a fetch, I overran the 7-fetch cap by one attempt (8 attempts, 7 successful). I spent the seventh WebFetch deliberately, on §7, §8 and footnote 7, and record the overrun rather than hide it.**
- Because curl was blocked, I never held the raw text: every read below went through the WebFetch summariser. The sweeps are therefore summariser passes, not grep. This matters for the absence claims (see §5).

## Sources and read levels

| Source | Route | Read level |
|---|---|---|
| arXiv:2310.14840, PDF (latest version served; the page carries no version number or date in the served text) | WebFetch, 4 targeted passes | SECTION READ via summariser: abstract, §1, §3.2, §4.1, §5 intro, §5.1, §5.3 incl. fn 7, §5.4, Fig. 5 caption, Table 1, §7, §8, reference list (sweep). Not every sentence of the paper was requested, so not FULL TEXT in the strict sense; every item the brief asked for was located. |
| ACL Anthology camera-ready, 2023.findings-emnlp.288.pdf, Findings of EMNLP 2023, pages 4354–4369, "December 6-10, 2023 ©2023 Association for Computational Linguistics" | WebFetch, 2 passes | SECTION READ via summariser: Table 1, §5.1, §5.3 fn 7, §5.4, Fig. 5 caption, reference list (sweep). |
| ar5iv.labs.arxiv.org/html/2310.14840 (HTML rendering of the arXiv text) | WebFetch, 1 pass | SECTION READ via summariser: body in full for the sweep, Table 1, §5.4 gap sentence. **Reference list truncated after "Petrov and Klein 2007"**, so entries alphabetically after "P" (Shannon 1951; Zhang et al. 2023) were not visible on this path. |
| Entry, record, adversary logs 1 and 2 | local files | FULL TEXT (entry, record); adversary logs grepped for every passage on P1 / 2310.14840 and the key terms. |

Front matter (taken from the first page, not from a short form): Jaap Jumelet and Willem Zuidema, Institute for Logic, Language and Computation, University of Amsterdam. Title: "Transparency at the Source: Evaluating and Interpreting Language Models With Access to the True Distribution."

## Independence of what I have

- Readers: ONE. Every pass was read by the WebFetch summariser; I saw no raw text.
- Retrieval paths: THREE (arxiv.org PDF; aclanthology.org PDF; ar5iv HTML). The four arxiv.org-PDF passes fall within WebFetch's 15-minute cache window and may have run against one cached page; they are four prompts, not four retrievals.
- Documents: TWO (the arXiv preprint text, rendered twice; the ACL camera-ready). Table 1 agrees to the last digit across both documents and all three paths.
- The record's P1 reading reproduces the same garbled "178 / 41.1 / 115.0" Treebank row that the arxiv.org-PDF path served me, which is consistent with the record having fetched the same arXiv PDF through the same summariser. The record and this note therefore share a route on that document; the ACL and ar5iv paths are my additions.

## (1) Table 1 — CONFIRMED on two documents, three paths

Caption, verbatim (four consecutive fragments as served): "Table 1: Perplexity scores for various masked and causal LM architectures." / "R² and Spearman's ρ are computed with respect to the PCFG log probabilities." / "Size denotes the total number of model parameters." / "TB denotes performance of LMs trained on the original treebank data."

Column headers as printed: (group) | Architecture | Size | (ψ)-PPL | R² | ρ. There is one perplexity column, headed "(ψ)-PPL", read as PPL for the causal block and ψ-PPL (pseudo-perplexity) for the masked block. There is NO "relative perplexity" column in Table 1 (relative perplexity appears only in Figure 5).

Rows, identical on all three paths:
- Masked block: PCFG — 63.9 (Size, R², ρ blank); BERT 9.5M — 71.9, 92.7, 96.9; RoBERTa 9.5M — 71.8, 92.7, 96.9; DeBERTa 10.7M — 71.1, 93.0, 97.0.
- Causal block: PCFG — 183.1 (blank); GPT-2 12.7M — 192.8, 97.0, 98.4; OPT 15.6M — 194.2, 96.7, 98.3.
- TB block (resolved by the ACL and ar5iv paths; garbled on the arxiv.org-PDF path exactly as the record described): DeBERTa 41.1; GPT-2 115.0. The TB rows are not relied on by the entry and not by me.

Every value the entry and record cite — 183.1, 63.9, 192.8, 194.2, 71.1, 71.9, 71.8 — is the printed value, in that table. **Labels:** the row is labelled "PCFG", not "optimum". The word "optimum" does not appear in Table 1 or its caption. The paper's own words for the PCFG row elsewhere are "optimal perplexity" (§1, §3.2, §5.4), "an optimal baseline" (§5 intro: "The underlying PCFG of the data generation process allows us to place the LM's performance against an optimal baseline."), "perplexity lower bound" (§3.2 heading, §5.4, Fig. 5 caption) and "this optimum" (§7). So "PCFG optimum" is a fair gloss in the paper's vocabulary but is not a printed label. No value the entry cites is wrong.

Note on the brief: the brief attributes "BERT 71.9, RoBERTa 71.8" and "63.9" to the entry; the entry's own text cites only "183.1 (causal PPL) vs GPT-2 192.8, OPT 194.2, DeBERTa 71.1". The fuller list is in the record. All of them check out.

## (2) The "considerable gap" sentence — LOCATED; quotation truncated in the entry

Location: §5.4 "Corpus & Model Size" (under §5 "Language Modelling"), results paragraph, referring to Figure 5 ("We report the results in Figure 5."). Confirmed on all three paths with identical wording.

Verbatim: **"A considerable gap between the optimal perplexity and model perplexity remains, however."**

The entry and record quote it as "A considerable gap between the optimal perplexity and model perplexity remains." — the final ", however" is dropped and the full stop moved. The meaning of the clause is intact, but it is not the verbatim sentence, and the dropped word is the one that ties the sentence to its neighbours.

Grammar on both sides of the cut (consecutive sentences as served, in order):
- Before: "The corpus of 500,000 sentences appears to be the inflection point: the masked LMs appear to reach a plateau at this point, whereas the causal LMs continue to improve with more training data." / "For the model size experiment it can be seen that performance improves as model size increases."
- Target: "A considerable gap between the optimal perplexity and model perplexity remains, however."
- After: "The models we consider here are still relatively small, and it appears that larger scale models may be beneficial for the task, without risk of overfitting yet." / "Nonetheless, it remains interesting to see that our models follow a similar pattern as seen for large-scale LMs (Hoffmann et al., 2022), with a similar near-linear decrease in perplexity in log space."

Scope and force: the opening words "A considerable gap" scope the gap observed in Figure 5 at the scales studied (up to 7.5M sentences; 1–20 DeBERTa layers; ~10–16M-parameter models). The "however" sets it against the preceding sentence's "performance improves as model size increases". The clause ASSERTS a gap at finite scale. It does NOT assert a floor or a persistent gap in the limit: the very next sentence records the authors' expectation that "larger scale models may be beneficial for the task, without risk of overfitting yet" — i.e. the paper reads its own gap as plausibly reducible with scale. The entry's "reports the gap persisting" (Strongest remaining objection) is a shading toward the floor reading that the paper's next sentence does not support; "reports that a gap remains at the scales studied" is what the text says.

## (3) §3.2 "exact lower bound" — LOCATED; the bound is NOT the process's entropy rate

Verbatim, §3.2 "Perplexity Lower Bound", consecutive sentences as served:
- "Since the 'true' distribution over natural language is unknown, there is no way of determining the optimal perplexity that is attainable by a model."
- "In our setup, however, we *do* have access to the generative process behind our data."
- "It therefore becomes possible to compute an exact lower bound for the perplexity, allowing us to express exactly how accurately a LM modelled the distribution set out by the PCFG."
- "The perplexity lower bound depends on the language modelling objective of interest: for masked language modelling it will be different than for causal language modelling."

Opening words "It therefore becomes possible" scope a consequence of having the generating grammar in hand; the clause ASSERTS that the bound can be computed. The record read this correctly.

What the bound IS, from the paper's own methods: §3.2 defines perplexity as "the normalised inverse probability of test set D" (PPL(D) = P(D)^(-1/|D|) as served); the causal bound uses the PCFG's own conditional token probabilities obtained from prefix probabilities via Stolcke's (1995) Earley-based procedure (P_G(w_1..i)/P_G(w_1..i-1)); the masked bound uses a closed-form inside-outside expression (Eq. 3) for masked-token probabilities and is a pseudo-perplexity. §5.1: "We compute the perplexity scores on the evaluation corpus for both the language models and the PCFG, using the methods of §3.2." §4.1: "For training our models we generate 7.5 million sentences (97 million tokens), and development/test/evaluation corpora of 50k/50k/10k sentences, respectively."

So the bound is the perplexity of the generating distribution's own token probabilities evaluated on a finite evaluation sample — a Monte Carlo estimate of exp(E[−log p_true(token | prefix)]) — not an analytic entropy or entropy rate of the grammar. The words "entropy rate" do not occur in the paper (three sweeps, §5). The record's gloss "an analytically known optimum, which is the candidate's H in perplexity units" is wrong in kind: it is an empirical estimate on a sample, in perplexity per word-level PCFG terminal, not a closed-form H.

**Footnote 7, which the entry and record do not mention** (attached to the §5.3 sentence "Despite being a task with greater uncertainty, however, the causal LMs ac-|quire distributions that are closer aligned to the true PCFG distribution than the masked LMs." — the page break the record flagged as "OCR damage" is the source's own hyphenation across a page break), verbatim in consecutive fragments: "Because the EarleyX algorithm has not been optimised for coarse-to-fine parsing, we were unfortunately forced" / "to compute the causal PCFG probabilities on a smaller subset." / "The results reported are on a sample of 1100 token probabilities." / "Concurrent to our work, more efficient prefix probability algorithms have been introduced by Nowak and" / "Cotterell (2023) and Opedal et al. (2023); we leave the incorporation of these procedures open for future work."

§8 Limitations adds, verbatim in fragments: "Our closed form equations for computing the lower bound on perplexity are exact, but when computing the lower" / "bound for specific large dataset we make use of some standard heuristics from the coarse-to-fine parsing" / "literature where some extremely low probability productions in long sentences might be pruned from the chart." / "We don't expect this to have noticable effects, but have not rigorously evaluated this assumption." / "The implementation we use for computing the lower bound in the causal language modelling case, EarleyX," / "is not optimized for extremely large grammars, and does not offer coarse-to-fine pruning." / "It is therefore painfully slow, limiting the size of grammars which we could use."

Whether the LM perplexities in Table 1 were computed on the full evaluation corpus or on the same 1100-token subset: NOT STATED in the text served; §5.1 implies the full evaluation corpus for the LMs, and fn 7 says the subset applies to "the causal PCFG probabilities". "Exact" in the paper's usage refers to the closed-form equations, not to the sampling of the value 183.1.

## (4) Scaling claims — CONFIRMED with one correction; no asymptote, fit or limit anywhere

- Corpus: "we test models on increasing training sets: ranging from 10.000 to 7.5 million sentences." CONFIRMED verbatim.
- Depth: "we train DeBERTa models with an increasing amount of layers, ranging from 1 to 20." CONFIRMED verbatim.
- Axes: Figure 5(a) x-axis is training-corpus size (extracted axis label "Train corpus size"; caption "as a function of training size (a)"); Figure 5(b) x-axis is FLOPS (text: "We report model performance as a function of FLOPS across intermediate checkpoints."; extracted axis label "FLOPS (non-embedding)"; legend "#params"). y-axis: "relative perplexity, which is defined as the LM perplexity divided by the PCFG perplexity lower bound." Caption verbatim: "Language modelling performance expressed as a function of training size (a) and model size (b)." / "Relative perplexity is computed with respect to the PCFG's perplexity lower bound, averaged over 3 seeds." **Correction:** the record's "plotted against FLOPS" and my brief's "against FLOPS" hold for panel (b) only; panel (a) is against corpus size. The entry itself makes no FLOPS claim.
- Fit / asymptote / extrapolation / limit: NONE. Asked directly on the arxiv.org-PDF pass, the summariser found no sentence fitting a curve, power law or scaling law, estimating an asymptote, extrapolating to infinite data or model size, or reporting a limiting value; the three sweeps return NOT FOUND for "asymptot". What the paper does instead: it DESCRIBES trends qualitatively — "the causal LMs converge slower to the final performance than masked LMs"; "the masked LMs appear to reach a plateau at this point, whereas the causal LMs continue to improve"; "performance improves as model size increases"; the gap "remains, however"; and a visual comparison to Hoffmann et al. (2022), "a similar near-linear decrease in perplexity in log space". The phrase "similar to how this is done for evaluating scaling laws of massive LMs" describes the reporting method borrowed (performance vs FLOPS across checkpoints), not a fit performed. Seeds: "averaged over 3 seeds"; no error bars, standard deviations or confidence intervals are mentioned in §5.4 or the caption.
- Training for the size experiment: "All models are trained on the maximum corpus size of 7.5 million sentences for 1 epoch."

## (5) Term sweeps — absences CONFIRMED at summariser strength, three passes, two documents

I ran three dedicated sweeps aimed only at the terms, each a separate WebFetch pass with an explicit instruction to write NOT FOUND for any absent string: Sweep A (arxiv.org PDF), Sweep B (ACL camera-ready PDF), Sweep C (ar5iv HTML; reference list truncated after "P"). The second and third sweeps were run before recording any absence, as the rule requires.

| String | Sweep A (arXiv PDF) | Sweep B (ACL PDF) | Sweep C (ar5iv, refs truncated) |
|---|---|---|---|
| "irreducible" | NOT FOUND | NOT FOUND | NOT FOUND |
| "entropy rate" | NOT FOUND | NOT FOUND | NOT FOUND |
| "asymptot" (asymptote/asymptotic) | NOT FOUND | NOT FOUND | NOT FOUND |
| "entropy" | 2: ref. Brown et al. 1992 "An estimate of an upper bound for the entropy of english"; ref. Shannon 1951 "Prediction and entropy of printed english" | 3: the same two, plus the substring in ref. Zhang et al. 2023 "MixCE: Training autoregressive language models by mixing forward and reverse cross-entropies" | 1: Brown et al. 1992 (Shannon and Zhang fall after "P" and were not visible) |
| "optimum" | 1 (§7) | 1 (§7) | 2 (both §7) |
| "scaling law" | 3 (§1; §5.4; ref. Kaplan et al. 2020) | 3 (same) | 3 (same) |
| "lower bound" | 11 | 10 | not requested |

Result: "irreducible", "entropy rate" and "asymptote" do not occur in either document on any of three passes — the entry's and record's absence claims hold. "entropy" as a bare word occurs only in the two reference-list titles the record names (Brown et al. 1992; Shannon 1951); as a substring it also occurs in a third reference title ("cross-entropies", Zhang et al. 2023), and nowhere in the body — no "cross-entropy" in the body on any pass. **Strength caveat, stated plainly:** these are summariser passes, not grep, because the curl route was blocked. The passes demonstrably differ in recall on other terms ("optimum" 1 vs 1 vs 2; "lower bound" 11 vs 10), so a single pass can miss an occurrence. Three concordant NOT FOUNDs across two documents and three paths is the strength of the absence here; it is not the strength of a grep over the raw text, and I say so rather than claim it.

The §7 sentences containing "optimum", verbatim in consecutive fragments, because they bear on the entry: "This approach allowed us to compute an exact lower bound on perplexity, and evaluate how well different LM" / "architectures can approach this optimum." and "We observed striking differences in the learning dynamics between masked and causal language models, where" / "the latter converge much more slowly, but ultimately approximate the optimum more closely."

## REGIME of P1

Population: sentences sampled i.i.d. from one English-like PCFG induced from automatically parsed treebank data (§8: "the automatic parses are far from error-free"); 7.5M training sentences (97M tokens), evaluation corpus 10k sentences. Unit of analysis: one LM trained from scratch (BERT 9.5M, RoBERTa 9.5M, DeBERTa 10.7M, GPT-2 12.7M, OPT 15.6M parameters), 3 seeds in Fig. 5. Operating condition: word-level PCFG terminals as tokens; 1 epoch over 7.5M sentences for the size ladder; DeBERTa 1–20 layers. Instrument: perplexity (causal) and pseudo-perplexity (masked) on the evaluation corpus, against the PCFG's own token probabilities on that corpus — the causal bound on a 1100-token sample. Threshold: none; no intervals. Category: finite-scale relative perplexity and its qualitative trend with corpus size and FLOPS.

Is the candidate inside it? Inside: a trained-LM-vs-known-generating-distribution comparison on a PCFG with a model/corpus ladder and printed numbers. Outside: an analytic entropy rate H (P1's optimum is a sample estimate on 1100 tokens, in perplexity per word-token, not nats per byte); any asymptote, fit, limit or interval; byte-level modelling; and the candidate's architecture axis — P1's "architectures" are masked vs causal TRANSFORMERS (BERT-family vs GPT-family: a training-objective contrast), not transformer vs gated-linear-recurrent/SSM. The entry's "architecture-family comparison" in P1 is a different axis from the candidate's.

## Same kind of quantity?

Table 1 sets a model's perplexity on (by §5.1's implication) the ~129k-token evaluation corpus against the generating distribution's perplexity on a 1100-token subset. Same kind of quantity (per-token perplexity on PCFG-generated text), different samples and sample sizes; the subset estimate carries an unprinted sampling error. Against the candidate's H it is a different kind: an empirical finite-sample perplexity per word-token vs an analytic entropy rate in nats per symbol.

## MY OWN ARITHMETIC (labelled; the paper prints none of these)

From the printed Table 1 values: ln(192.8/183.1) = 0.0516 nats/token (GPT-2 excess over the causal bound); ln(194.2/183.1) = 0.0589 (OPT); relative perplexities 1.053 and 1.061. Masked: 71.1/63.9 = 1.113 (ln 0.107), 71.9/63.9 = 1.125, 71.8/63.9 = 1.124 — pseudo-perplexity ratios, not cross-entropies. ln(183.1) = 5.21 nats/token mean log-loss of the causal bound. From §4.1: 97M/7.5M = 12.93 tokens/sentence; evaluation corpus ≈ 10,000 x 12.93 ≈ 129,000 tokens; the 1100-token sample is ≈ 0.85% of it.

Sampling-noise order of magnitude for the 1100-token bound — ASSUMPTION-DEPENDENT, the per-token log-loss standard deviation is NOT printed and I take it from no source: if it were 1.5 / 2.0 / 2.5 / 3.0 nats, the standard error of the mean over 1100 tokens would be 0.045 / 0.060 / 0.075 / 0.090 nats, i.e. a one-s.e. perplexity band around 183.1 of roughly [175, 192] / [172, 195] / [170, 197] / [167, 200]. On any of these assumptions the GPT-2 excess of 0.0516 nats is of the same order as one standard error of the bound. What would ground this: the per-token variance of −log p_PCFG on the evaluation corpus, or the authors' released token probabilities; neither was opened and the paper prints no interval. This is my reasoning, offered as a magnitude check, not a finding about P1.

## BRIEF ERRORS (places the brief was wrong or imprecise about the record)

1. Item (4) frames both corpus size and depth as scaled "against FLOPS". Only Figure 5(b) (model size) is against FLOPS (non-embedding); Figure 5(a) is against training-corpus size. The record says "plotted against FLOPS" without distinguishing panels; the entry makes no FLOPS claim.
2. Item (1) attributes "63.9", "BERT 71.9" and "RoBERTa 71.8" to the entry; those sit in the record. The entry cites 183.1, 192.8, 194.2 and 71.1. All values are correct either way.
3. Item (5) attributes to the entry the statement that "entropy occurs only in two reference-list titles"; that sentence is in the record. The entry states only that "the word 'asymptote' does not occur in it (dedicated sweep)".
4. Item (2) gives the quotation without ", however"; so do the entry and the record. The verbatim sentence ends ", however."

## ENTRY/RECORD DEFECTS FOUND (judged on the entry's and record's own words)

- Quotation truncated: "...remains." for "...remains, however." (entry and record).
- Omission: footnote 7's "sample of 1100 token probabilities" for the causal PCFG bound is nowhere in the entry, record or adversary logs; the record's "Treebank rows garbled" consistency check caught the TB row but not this, and the record attributes the "ac-|quire" break to OCR when it is the source's own page-break hyphenation.
- Gloss wrong in kind (record, not entry): "an analytically known optimum, which is the candidate's H in perplexity units" — the optimum is a finite-sample estimate of the generating distribution's perplexity, not an analytic H; the paper never uses "entropy rate".
- Shading (entry): "reports the gap persisting" — the paper reports a gap remaining at the scales studied and in the next sentence expects larger models to help.
- Axis label (record): "plotted against FLOPS" holds for panel (b) only.
- Everything else the entry and record say about P1 — numbers, table, section locations, the ladder ranges, the absence of any fitted asymptote, the sweep absences — is confirmed.

## BEARING (for the judge; no verdict recommended)

P1 does what the entry says it does: it trains LMs on samples from a known PCFG, prints the generating distribution's perplexity beside the models' (183.1 vs 192.8/194.2; 63.9 vs 71.1/71.8/71.9), scales corpus (10k–7.5M sentences) and depth (1–20 layers), and states that a gap remains at those scales. It fits nothing, extrapolates nothing, prints no interval and never uses "entropy rate", "irreducible" or "asymptote"; its own §7 names "how well different LM architectures can approach this optimum" as what the approach enables, and its §5.4 expects larger models to help. Two points the entry does not carry: the causal optimum rests on a 1100-token sample with no printed uncertainty, so the printed 0.05-nat causal gap is a finite-scale observation whose sampling error is of comparable order on any reasonable per-token variance (my arithmetic, assumption-dependent); and P1's architecture contrast is masked-vs-causal transformers, not the candidate's transformer-vs-SSM axis. None of this touches P2, which this note did not open.

## ROUTES FAILED

- `curl -L https://arxiv.org/pdf/2310.14840`: `curl: (56) CONNECT tunnel failed, response 403` (tool-scoped; WebFetch on the same URL succeeded). Consequence: no raw text, so sweeps are summariser passes, not grep.
- ar5iv HTML: served the body in full but the reference list was cut after "Petrov and Klein 2007"; Shannon 1951 and Zhang et al. 2023 were not visible on that path (they were on the other two).
- No classifier refusals. No PMC, Europe PMC, doi.org or Unpaywall routes were needed or tried. No personal identifier was placed in any URL.
