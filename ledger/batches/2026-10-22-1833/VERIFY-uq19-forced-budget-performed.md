# VERIFY - UQ-20261022-19: is the randomized within-item forced-budget slope contrast genuinely unpublished?
Checker: fresh context. Budget used: 5 WebFetch, 3 WebSearch. Date 2026-10-22.

## CLAIM

That the candidate's own number is nowhere published - that no study has actually run the
randomized within-item forced-budget design and reported the within-item slope against the
pooled between-item slope - which is what makes this rejection asked-but-open rather than
answered.

The claim is a conjunction of four conditions, and I grade them separately because the
literature splits them apart:
  (i)   a PERFORMED forced reasoning-token-budget manipulation,
  (ii)  RANDOMIZED assignment of budgets,
  (iii) over a FIXED item set, with
  (iv)  a reported WITHIN-ITEM slope CONTRASTED against a POOLED BETWEEN-ITEM slope.

## READ LEVEL

All reads are through the WebFetch summariser: the page was converted to markdown and a
small model answered my prompt against it. I did not see raw HTML for any source. Section
numbers, table numbers and quotation boundaries below are **as the summariser reported
them**, and I could not verify any junction myself. Treat every quotation as served, not as
checked by me. The summariser caps verbatim quotation near 125 characters, so no quotation
below is longer than one clause.

| Source | Read level |
|---|---|
| Oladri, Jawahar & Mohamed 2026, arXiv:2607.21433v1 | PARTIAL - summariser over full HTML; Secs 2.1, 3.1.1-3.1.4, 3.2.1, 3.2.3, 3.2.4, 4.1.3, 4.2.3, 6, Tables 1-2 reported |
| Zhou, Ling, Chen, Wang, Fan & Wang 2026, arXiv:2604.10739v1 | PARTIAL - summariser over full HTML; Secs 1, 2.1, 3.1, 3.3, 4.1.3, 4.1.4, 4.2.3-4.2.5, 4.2.9, 4.2.10, 5.3, 5.4, Tables 1-3, 6, Appendix A reported |
| Su, Healey, Nakov & Cardie 2025, arXiv:2505.00127v1 | PARTIAL - summariser over full HTML; Secs 3, 4.1, 5, 5.1, 6, Tables 1-3, Figs 1, 3 reported |
| arXiv:2610.25768, "Truncated Reasoning Under a Budget" | **COULD NOT READ** - rate-limited at the target on two separate attempts. NOT a negative finding. |

COULD NOT READ is kept strictly distinct from NOT FOUND throughout. arXiv:2610.25768 was
found, is of the right kind, and is unread. Its silence is evidence in neither direction.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Queries run - 3 of 3 WebSearch used

1. `within-item slope forced thinking token budget randomized accuracy reasoning length
   confound between-item` - returned 9 results, mostly budget-forcing method papers; the two
   best candidates (2607.21433, 2604.10739) came from this and the next query. No result
   title mentioned a slope decomposition.
2. `budget forcing accuracy vs forced reasoning token budget same questions per-question
   length accuracy relationship pooled` - returned 9 results including s1 (the budget-forcing
   origin paper) and 2610.25768; heavy title overlap with query 1.
3. `Simpson's paradox LLM reasoning length accuracy within-question fixed effects item-level
   slope naturally emitted chain length causal` - the econometric-vocabulary sweep. Returned
   mostly generic Simpson's-paradox and fairness-ML material, i.e. the econometric vocabulary
   is **not** in use in this literature. One on-topic hit: Su et al. 2505.00127.

No query was refused by the classifier.

### (b) Titles returned that could carry the quantity, and whether I opened them

OPENED (3):
- Oladri, Jawahar & Mohamed 2026, "Token Budget Saturation and Mechanistic Early-Detection of
  Reasoning Non-Convergence in Chain-of-Thought Models", arXiv:2607.21433v1 - OPENED.
- Zhou, Ling, Chen, Wang, Fan & Wang 2026, "When More Thinking Hurts: Overthinking in LLM
  Test-Time Compute Scaling", arXiv:2604.10739v1 - OPENED.
- Su, Healey, Nakov & Cardie 2025, "Between Underthinking and Overthinking: An Empirical Study
  of Reasoning Length and correctness in LLMs", arXiv:2505.00127v1 - OPENED.

ATTEMPTED, COULD NOT READ (1):
- "Truncated Reasoning Under a Budget: Evaluating System-1 Models as Decision-makers",
  arXiv:2610.25768 - two fetches, both RATE_LIMIT_EXCEEDED at the target. Unread.

RETURNED, NOT OPENED - could plausibly carry the quantity (8):
- "Steering LLM Thinking with Budget Guidance", arXiv:2506.13752 - returned, not opened.
- "Wait, We Don't Need to 'Wait'! Removing Thinking Tokens...", ACL Findings EMNLP 2025.394 -
  returned, not opened.
- "Boosting Accuracy and Efficiency of Budget Forcing in LLMs via Reinforcement Learning for
  Mathematical Reasoning", arXiv:2510.21398v1 - returned, not opened.
- "Learning a Continue-Thinking Token for Enhanced Test-Time Scaling", arXiv:2506.11274 -
  returned, not opened.
- "Token-Budget-Aware LLM Reasoning", ACL Findings 2025.1274 - returned, not opened.
- "s1: Simple test-time scaling", EMNLP 2025 main.1025 - returned, not opened. This is the
  origin of budget forcing and is cited as such by Oladri et al. Sec 2.1.
- "The Coupling Tax: How Shared Token Budgets Undermine Visible Chain-of-Thought Under Fixed
  Output Limits", arXiv:2605.07686v1 - returned, not opened.
- "Lexical hints of accuracy in LLM reasoning chains", Sci Rep s41598-026-55000-2 - returned,
  not opened (nature.com is a known-bad route here; I had no fetch left for a mirror).

RETURNED, NOT OPENED - judged wrong kind or off-topic (9):
- "The Cost of Reasoning: Token-Accuracy Frontiers", tmls.nyc - returned, not opened; an
  industry research page, kind uncertain.
- "Reasoning Tokens and Thinking Budgets: Cost vs Accuracy", intuitionlabs.ai - vendor
  explainer, not a study.
- "How Token Budgets Can Shift LLM Benchmark Accuracy by 70 Percentage Points", Medium - blog.
- "Adding Reasoning Budget to vLLM", shuyo.wordpress.com - implementation note.
- arXiv:2603.08000 - search returned the bare PDF URL with no title; unidentified, not opened.
- "Diagnosing and Mitigating Sycophancy and Skepticism in LLM Causal Judgment",
  arXiv:2601.08258v3 - off-topic.
- "Simulating Sensitivity: A Simpson's Paradox in Large Language Model-Based Creative
  Practitioner Modeling", doi:10.1145/3803784.3816848 - off-topic (creative-practitioner
  simulation, not reasoning length).
- PyMC Simpson's-paradox gallery page; theneuralbase A/B-testing primer; two ResearchGate
  "Detecting Simpson's Paradox" ML papers - generic method material, not LLM evaluation.

Title-return accounting: 2607.21433 and 2510.21398 each surfaced at two queries. **That is one
document each, not two sources, and repeated surfacing is not corroboration.** The heavy title
overlap between queries 1 and 2 is a sign my sweep saturated the "budget forcing" vocabulary
quickly; it is not evidence that the field is small.

### (c) Any study randomly assigning forced budgets over a fixed item set and reporting a within-item slope?

**No - not in any document I opened.** Two opened papers perform the manipulation; neither
randomizes, and neither reports a slope.

**Oladri, Jawahar & Mohamed 2026 (arXiv:2607.21433v1).** Front-matter authors: Renuka Oladri,
Niveda Jawahar, Abdirisak Mohamed (University of Maryland College Park; SAP Labs, LLC). No DOI
on the page. Design: budget forcing via a logits processor that forces `</think>` at B thinking
tokens (Sec 3.1.2), B in {256, 512, 1024, 2048, 4096} plus an "uncapped" condition under a
10,000-token ceiling; 200 problems per benchmark drawn with seed=42 (Sec 3.1.3) over GSM8K,
MATH-500 and AIME 1983-2024; DeepSeek-R1-Distill-Qwen-7B.

- Not randomized. Served quotation, Sec 3.1.1: "Generation uses greedy decoding
  (do_sample=False) to maximize reproducibility." The budget sweep is deterministic.
- **Per-budget accuracy is not printed numerically at all.** Table 1 prints only B* (the
  minimum sufficient budget) and uncapped accuracy. So this paper does not even print the
  accuracy-on-budget curve, let alone a slope.
- No regression slope, no fixed effects, no within/between decomposition. The only regression
  objects are logistic-regression probes (Sec 4.1.3), which are classifiers.
- Closest printed statistic, Sec 3.2.3 (running text, no table): point-biserial r = 0.431,
  p < 0.0001, between convergence status and problem number, n = 200 on the AIME set. **This is
  a correlation between correctness-convergence and an item's index number - not a slope of
  accuracy on budget.** Same section: "means that problem order explains less than 19% of
  convergence variance" (r-squared approx 0.186).
- Table 2 (between-group, not a slope): converged n = 113 (56.5%), accuracy 96.5%, approx 4,100
  tokens; non-converged n = 87 (43.5%), accuracy 11.5%, 10,000 tokens.
- B* is DEFINED as the smallest budget reaching >=95% of uncapped accuracy (Sec 3.1.4): a
  threshold crossing, not a slope.
- The "approx 40%" compute waste (Intro) and "43.5% ... could be saved" (Sec 3.2.4) are
  explicitly hypothetical, scoped by the opener quoted at Sec 3.2.4: "If an oracle could
  identify non-converging generations at generation start..." - the clause **records a
  conditional projection, it does not assert a measured saving.** The 4,000-9,000 token saving
  (Sec 4.2.3) is likewise a projection.

**Zhou, Ling, Chen, Wang, Fan & Wang 2026 (arXiv:2604.10739v1).** Front-matter authors: Shu
Zhou, Rui Ling, Junan Chen, Xin Wang, Tao Fan, Hao Wang (corresponding) - Nanjing University;
Baidu; Nanjing University of Finance & Economics. No DOI for this paper. Design: budget forcing
from 500 to 16,000 tokens in 500-token steps, **32 budget points per problem** (Sec 4.1.3), over
AIME 2024+2025 (60 problems), MATH-500 (500), GPQA Diamond (198); DeepSeek-R1-32B and s1-32B;
temperature 0.

This is the closest performed design in the literature I reached, and the important finding of
this check:
- **It is a complete within-item crossing, not a randomized one.** Every budget level is applied
  to every problem. Served quotation, Sec 4.1.4: "For each problem at each budget, we record"
  (clause continues past the summariser's cut; I rely on it only for the design, not for a
  result). The summariser notes the paper never uses the word "fixed".
- **It still reports no within-item slope, no pooled slope, and no contrast between them.** No
  regression coefficient, no fixed-effects model, no within/between decomposition. Flips are
  tracked per item but summarised as aggregate ratios.
- Printed numbers and where: Table 1 accuracies (e.g. 55.8%; the summariser notes these are not
  integer counts out of 60 and **no denominator is stated**). Sec 4.2.5: the 12K->16K accuracy
  change is -0.9% for R1-32B with "95% CI of [-1.4%, -0.4%]", **denominator not stated**; the
  bootstrap is "1,000 bootstrap samples ... percentile method" with **the resampling unit not
  stated**, which matters because Table 2's caption concedes "a single problem may contribute
  multiple flips across different transitions" - i.e. the observations are not independent and
  the paper does not model the dependence. Sec 4.2.5 also prints "these metrics are strongly
  correlated (Spearman rho=0.89, p<0.001)" - a correlation **between two aggregate metrics**,
  not a length-accuracy slope.
- Internal inconsistency the summariser flagged: Sec 4.2.5 gives the 7K flip ratio as p=0.038
  while Table 3 lists p=0.014 for 7,000 tokens.

### (d) Any study contrasting a within-item slope against a pooled slope on naturally emitted length?

**No contrast is computed anywhere I read. But Su et al. 2025 prints both halves side by side
and declines to reconcile them,** which is materially different from the quantity being absent
from the literature.

**Su, Healey, Nakov & Cardie 2025 (arXiv:2505.00127v1).** Front-matter authors: Jinyan Su
(Cornell), Jennifer Healey (Adobe Research), Preslav Nakov (MBZUAI), Claire Cardie (Cornell).
No DOI on the page. Design: naturally emitted length only, no forced budgets; N=10 responses per
question at T=1.0, top-p=1, Sec 3: "setting max token length as 8k"; GSM8K and MATH;
R1-Preview and R1-Distill.

- Pooled half, MEASURED AND PRINTED, Table 1 (Pearson / Spearman, length vs accuracy,
  unitless): R1-Preview GSM8K -0.5347 / -0.3740; R1-Preview MATH -0.6835 / -0.6390;
  R1-Distill GSM8K -0.1626 / -0.2216; R1-Distill MATH -0.7248 / -0.6801. **No denominator is
  stated, and the paper does not say whether these are pooled across questions or computed
  within question** - which is precisely the distinction the ledger entry turns on.
- Within-item half, MEASURED BUT NOT AS A SLOPE, Sec 4.1 / Figure 1: each question's 10 samples
  are ranked by length, and average length and accuracy are plotted by rank. Served quotation,
  Sec 4.1: "we observe a consistent non-monotonic trend across models and datasets." **No
  numeric within-item slope or correlation is printed** - the within-item object exists only as
  a plotted curve.
- The contrast is never drawn. The pooled coefficients and the within-question rank curves sit
  in the same paper without being reconciled.
- Also printed, Table 1, token means: R1-Preview GSM8K correct 1374.82 +/- 92.34 tokens vs
  incorrect 3069.22 +/- 337.53 tokens (denominators not given; I carry the stated sd forward
  rather than converting it).
- On the confound, the paper ASSERTS rather than tests. Intro, served: "likely due to their
  inherent complexity and the need for more reasoning steps" - the opener "likely due to"
  **scopes this as the authors' conjecture, not a measured decomposition.** Sec 5.1, served:
  "it remains unclear whether the increased length reflects the model's ability to recognize
  the intrinsic complexity" - this clause **records the question being left open; it does not
  assert the confound and does not deny it.** Those two read alike once the opener is dropped,
  and neither supports a claim that the pooled slope has been adjusted.
- Zhou et al. 2026 states the confound as a measured group property, Appendix A, served: "These
  samples tend to be harder problems (78% are Level 4-5 on MATH-500 difficulty scale)" and
  "suggesting that the model's own length choice correlates with problem difficulty and
  uncertainty." The opener "suggesting that" **scopes this as an inference from the 78% figure,
  not an independent measurement of the confound.**

#### Numerator/denominator check on the number that looks closest to the claim's

Su et al.'s Table 1 Pearson coefficient (e.g. -0.6835, R1-Preview on MATH) is the nearest
printed figure to the entry's quantity. It is a different quantity in both directions.

- The claim's quantity: a slope of accuracy on **forced** reasoning budget, identified **within
  item**, units of accuracy per token, with a per-item intercept absorbed.
- Su et al.'s numerator class: the covariance of binary correctness with **naturally emitted**
  token length, over question-sample pairs under free generation at T=1.0, capped at 8k.
  Unitless, normalised by both standard deviations - **not a slope and carrying no units.**
- Su et al.'s denominator: unstated. Near neighbours it is not: not per-question (10 samples),
  not per-question-count, not per-item-budget cell. The plausible denominator is
  questions x 10 samples, but the paper does not say so, so I cannot name it.
- What Su's class MISSES that the claim needs: any forced or counterfactual budget; within-item
  identification; units; the per-item intercept; any budget level the model would not have
  chosen itself.
- What Su's class INCLUDES that the claim excludes: between-item difficulty variation - the
  entire confound the claim's within-item estimator is designed to remove; sampling-temperature
  variation within item, pooled indistinguishably with the between-item variation; and
  responses truncated at the 8k cap, whose scoring the paper does not describe (the summariser
  notes incorrect MATH responses average above 6,000 tokens, so truncation is live).

A number one word away - "correlation on emitted length" vs "slope on forced budget" - is a
different quantity, and this one differs in both directions at once.

### (e) Any behavioural-equivalence test between a capped and a naturally-stopping model at the same length?

**Partly - one exists, and it is weaker than an equivalence test.** Zhou et al. 2026, Sec 4.2.9
and Table 6, compare natural and forced R1-32B outputs **by token range**: the 6-8K bin gives
54.2% natural vs 53.8% forced. Served quotation, Sec 4.2.9: "Natural long-reasoning samples
exhibit similar accuracy decline patterns and flip ratios."

Why this is not the test the entry needs:
- Matching is by token **range**, not on matched items at matched lengths. It is a bin-level
  comparison, not a within-item one.
- The natural subset is 312 samples with more than 8K natural tokens (Appendix A), yet Table 6
  reports natural values for the 6-8K and 8-10K bins. The summariser flags this as unexplained;
  I cannot resolve it without reading the raw table.
- Appendix A concedes the natural samples are harder (78% Level 4-5), so the comparison is
  confounded by difficulty in exactly the direction that would make capped and natural look
  alike for the wrong reason.
- No equivalence bound, no power statement, no TOST. "Similar" is an eyeball verdict, not a
  behavioural-equivalence test.

Oladri et al. 2026 does not run this comparison. Its nearest statement, Sec 3.2.1, served:
"Accuracy is essentially flat across all budget levels, including uncapped." The opener
"Accuracy is essentially flat" **scopes this as an aggregate observation across conditions; it
neither asserts nor denies equivalence at matched length,** and since per-budget accuracies are
not printed (Table 1 gives only B* and uncapped), I cannot check it against numbers.

Su et al. 2025 runs no such comparison.

## REGIME

- **Oladri, Jawahar & Mohamed 2026.** Population: 200 problems per benchmark, seed=42, from
  GSM8K, MATH-500, AIME 1983-2024 (sampled from 933). Unit of analysis: the generation.
  Operating condition: DeepSeek-R1-Distill-Qwen-7B, greedy decoding, budgets <=4096 plus
  uncapped, all under a 10,000-token ceiling. Instrument: a logits processor forcing `</think>`.
  Threshold: B* = smallest budget reaching >=95% of uncapped accuracy. **The claim's
  manipulation leg sits inside this regime; the claim's reporting leg sits outside it, because
  the paper prints no accuracy-on-budget numbers and no slope of any kind.**
- **Zhou, Ling, Chen, Wang, Fan & Wang 2026.** Population: AIME 2024+2025 (60), MATH-500 (500),
  GPQA Diamond (198). Unit of analysis: problem x budget cell, 32 budget levels per problem.
  Operating condition: DeepSeek-R1-32B and s1-32B, temperature 0, budget forcing 500-16,000
  tokens. Category: "flips" per item across budget transitions. **The claim's design sits
  inside this regime almost exactly, except that assignment is saturated rather than
  randomized. The claim's within-vs-pooled contrast is simply not computed on data that would
  support it.**
- **Su, Healey, Nakov & Cardie 2025.** Population: GSM8K and MATH questions. Unit of analysis:
  the response (10 per question). Operating condition: free generation at T=1.0, top-p=1, 8k
  cap - **no budget manipulation at all.** Sec 6 adds a SimPO training intervention preferring
  shorter responses, which is a training change, not an inference-time budget. **The claim's
  forced-budget leg sits entirely outside this regime; only the pooled-slope leg sits inside,
  and even there the paper does not say whether its coefficient is pooled or within.**

## DEFECTS FOUND

1. **"Randomized" is the wrong bar, and it makes the absence true but uninformative.** This is
   the central defect. Zhou et al. 2026 apply all 32 budget levels to every problem: a complete
   within-item crossing. For identifying a within-item slope that is a **stronger** design than
   random assignment, not a weaker one - randomization is how you approximate a crossed design
   when you cannot afford to saturate it. By writing the requirement as "the randomized
   within-item forced-budget design", the entry sets a bar that the literature steps over by a
   better route and then counts the step-over as an absence. The entry's absence survives on the
   wording, not on the science.
2. **"Nowhere published" overstates a two-part absence as a whole-cloth one.** What is actually
   unpublished is narrow: the **contrast** between a within-item slope and a pooled
   between-item slope. The within-item forced-budget grid is published (Zhou et al. 2026, 32
   budgets x 758 items across three benchmarks). The pooled coefficient on naturally emitted
   length is published (Su et al. 2025, Table 1). The within-item curve on naturally emitted
   length is published as a figure (Su et al. 2025, Fig 1). Three of the four ingredients are in
   print; what is missing is one regression and one comparison.
3. **The absence is bounded by a thin sweep, and the entry should say so.** 3 searches, 3
   documents opened, 1 document of the right kind unread (arXiv:2610.25768, rate-limited
   twice), and 8 further plausible titles returned and not opened - including s1 itself, the
   origin of budget forcing. I did not read the paper that invented the manipulation. An
   absence asserted over that reading is a bounded absence.
4. **The econometric vocabulary is genuinely absent from this literature, which cuts both
   ways.** Query 3, aimed squarely at Simpson's paradox, fixed effects and within/between
   language, returned almost nothing from LLM evaluation. That supports the entry's absence -
   nobody is framing it this way - but it also means my searches could not have found a paper
   that did the decomposition under different words (e.g. "per-problem regression", "item
   random effects", "conditional logit"). I did not exhaust that space.
5. **Do not nominate arXiv:2610.25768 as the settling document.** The kind of document that
   could settle sub-claim (c) is an empirical forced-budget evaluation that prints a regression
   of correctness on budget with item-level identification. "Truncated Reasoning Under a Budget:
   Evaluating System-1 Models as Decision-makers" is plausibly that kind from its title - forced
   truncation, budget, evaluation - but **I could not read it, so naming it as the paper that
   would settle this is a guess, and I call it one.** It is the right lead to chase next; it is
   not a finding.
6. **A reporting defect that matters for any future citation of these papers.** Neither
   forced-budget paper states a denominator for its headline accuracy figures (Zhou et al.
   Table 1; Oladri et al. Table 1 prints only B* and uncapped), and Zhou et al. do not state the
   bootstrap resampling unit while conceding in Table 2's caption that one problem contributes
   multiple non-independent flips. If the ledger ever leans on -0.9% [-1.4%, -0.4%] as a
   measured within-item effect, that CI is computed over an unstated unit on non-independent
   observations.
7. **Oladri et al. should not be cited as measuring the budget-accuracy relation at all.** It
   DEFINES a threshold (B*) and prints threshold crossings; it does not print the curve. Its
   r = 0.431 is correlation of convergence with **problem index number**, which is a
   data-ordering artefact check, not a length or budget effect. Published is not performed, and
   here even the performed sweep is not reported numerically.

## ROUTES THAT FAILED

- `https://arxiv.org/html/2610.25768` - WebFetch returned RATE_LIMIT_EXCEEDED (source: target)
  on two separate attempts, the second as an isolated call. Document unread. I had no fetch left
  to try `arxiv.org/abs/`, a `v1` suffix, or the PDF.
- `nature.com/articles/s41598-026-55000-2` ("Lexical hints of accuracy in LLM reasoning
  chains") - not attempted. nature.com is a known-bad route in this environment and the NSF PAR
  or repository mirror would have cost a fetch I did not have.
- `arxiv.org/pdf/2603.08000` - search returned the bare PDF URL with no title. Not attempted:
  unidentified, and I will not spend a fetch on an untitled return over a titled candidate.
- No search was refused by the classifier. All 3 searches ran and are recorded above.

## BEARING ON THE LEDGER ENTRY

**NARROW the claim; strike one of its words; convert one leg to a promotion condition.**

Hold: **no document I opened reports a within-item slope contrasted against a pooled
between-item slope,** in either the forced-budget or the naturally-emitted vocabulary. The
candidate's own number is not in print in the three papers I read, and the econometric framing
is absent from this literature as a vocabulary. The asked-but-open characterisation is right in
substance: the question is live and nobody has answered it.

Strike: the word **"randomized."** Zhou, Ling, Chen, Wang, Fan & Wang 2026 (arXiv:2604.10739v1)
performs a **saturated** within-item forced-budget design - 32 budget levels crossed with every
problem across AIME 2024+2025, MATH-500 and GPQA Diamond - which identifies a within-item slope
better than randomization would. An entry that rests on "no one has run the randomized design"
is resting on a wording artefact. Rewrite the condition as "no one has **reported the
within-item against the pooled slope**", and the entry becomes true for the right reason.

Narrow: replace "nowhere published" with the specific absence. In print already: the within-item
forced-budget grid (Zhou et al. 2026, Secs 4.1.3-4.1.4); the pooled coefficient on naturally
emitted length (Su, Healey, Nakov & Cardie 2025, Table 1: -0.1626 to -0.7248 Pearson, unitless,
denominator unstated); the within-item curve on naturally emitted length as a plot only (Su et
al. 2025, Fig 1, no number printed); and a bin-matched capped-vs-natural comparison (Zhou et al.
2026, Table 6: 54.2% natural vs 53.8% forced in the 6-8K bin, confounded by difficulty per
Appendix A). Missing is the **one regression and the one comparison** that join them.

Convert to a promotion condition: the candidate's quantity may be **derivable rather than
novel**. If Zhou et al. 2026 release their per-problem x per-budget correctness grid, the
within-item slope is a fixed-effects regression on existing data, and the pooled slope on
naturally emitted length falls out of the same release. The promotion condition should read:
*check whether arXiv:2604.10739's per-problem budget grid is public; if it is, the within-item
vs pooled contrast is a re-analysis, not an experiment, and this entry drops from "needs a study
run" to "needs an afternoon".* Note also that sub-claim (e) is already **partly answered** - a
capped-vs-natural comparison exists at bin-matched length - so the entry should no longer carry
(e) as wholly open.

Caveat the absence explicitly in the routing row: one document of the right kind
(arXiv:2610.25768, "Truncated Reasoning Under a Budget: Evaluating System-1 Models as
Decision-makers") was **COULD NOT READ**, rate-limited twice, and eight further plausible titles
were returned and not opened, **s1 (EMNLP 2025 main.1025) among them.** By this ledger's own
standing rule, those are papers not checked. The absence is real as far as my reading goes, and
my reading is three papers deep, through a summariser, with no raw text verified.
