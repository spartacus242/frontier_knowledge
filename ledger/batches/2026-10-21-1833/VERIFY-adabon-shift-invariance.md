# VERIFY — AdaBoN shift-invariance

Checker run: fresh context, 2026-10-21. Query budget used: 2 searches of 6, 4 fetches of 5.

## CLAIM

That AdaBoN's allocation rule depends only on reward DIFFERENCES WITHIN a prompt, so
adding a constant to every reward of one prompt leaves its allocation and its reported
metric unchanged.

Source as the entry cites it: Raman, Asi & Kale, "AdaBoN: Adaptive Best-of-N Alignment",
arXiv:2505.12050v3.

## READ LEVEL

**Full text, but summariser-mediated — not a direct read.** This must be stated plainly
because it bounds every quotation below. Raw `curl` to arxiv.org fails at this proxy with
`CONNECT tunnel failed, response 403` (tool-scoped, exactly as the routing note predicts),
so there was no way to pull the HTML or PDF to disk and read bytes. All content below came
through three prompted WebFetch passes over `https://arxiv.org/html/2505.12050v3` plus one
over the abs page. Equation numbers, LaTeX expressions and numeric settings are therefore
**as reported by the summariser**, not as eyeballed in the source. I did not re-render the
equations myself. Treat the algebra in WHAT THE SOURCE SAYS as high-confidence (it is
internally consistent across three independent passes with different prompts) but not
byte-verified.

Not an abstract-only read: the summariser returned section-level detail from Sections 2, 3,
4.1, 4.2 and the appendix list, including material that appears nowhere in the abstract.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter, and the unit the method operates on

From the abs page as served:

- Title: **AdaBoN: Adaptive Best-of-N Alignment**
- Authors in order: **Vinod Raman, Hilal Asi, Satyen Kale**
- arXiv id: **2505.12050v3**; the abs page served **"This version: v3 2026-03-13"** and an
  original submission date of **2025-05-17**. It listed **no v1 or v2 entries and no file
  sizes** — the version history was not served, so I cannot report what changed between
  versions.
- Subjects: **cs.CL, cs.AI, cs.LG**. No journal reference, no DOI, no comments field served.

The entry's short-form citation "Raman, Asi & Kale" matches the served front matter. Defect
(7) does not fire.

Unit the method operates on — confirmed as the entry records it. A batch is K prompts
x_1,...,x_K drawn without replacement; each prompt carries per-prompt budget B and the paper
states **"the total budget is BK."** The allocation is a vector a in [BK]^K with
sum_i a_i <= BK, where a_i is the number of LM calls spent on prompt x_i. Default K = 5,
B = 120. So the entry's "a batch of K=5 prompts at budget BK" is accurate, including the
budget notation (it is BK, not NK; N stays reserved for standard Best-of-N).

Stated objective, **Equation 1**:

    E_{R_{i,j} ~ r o pi(x_i)} [ sum_{i=1}^{K} max_{j=1..a_i} R_{i,j} ]

described in the text as **"the cumulative expected reward obtained by running Best-of-N
sampling."** Section 2.3 extends this to randomized adaptive policies in an unnumbered
display.

### (b) The allocation rule, with the decisive step

Two-stage policy, per-prompt exploration budget d <= B.

Stage 1 (Algorithm 2, lines 1-2): draw d rewards per prompt, R_{i,1},...,R_{i,d}, and fit an
estimate D-hat_i of that prompt's reward distribution.

The per-prompt quantity, **Equation 2** — the expected-maximum curve the entry records:

    V_{i,j} := E_{Z_1,...,Z_j ~ D-hat_i} [ max{ R_{i,1},...,R_{i,d}, Z_1,...,Z_j } ]

estimated by Monte Carlo from D-hat_i (Algorithm 2, line 3), with m = 1024 samples in
Section 4.4.

**The decisive step** (Algorithm 1, "Greedy Allocation"): start from a = [0]^K; for each of
T = (B-d)K steps choose

    i_t in argmax_{i in [K]} ( V_{i, a_i + 1} - V_{i, a_i} )

then increment a_{i_t}. **The quantity compared across prompts is the marginal gain of one
more sample — a within-prompt difference of two adjacent points on that prompt's own
expected-maximum curve.** No reward level enters the comparison.

The estimator, Section 3.1, is a Gaussian KDE:

    f-hat_h(x) = (1/(dh)) sum_{j=1}^{d} phi( (x - R_j^i) / h )

with Scott's rule for the bandwidth. Served quotations:
**"perhaps the simplest distribution estimation procedure is kernel density estimation (KDE)
using a Gaussian kernel"** and **"we use Scott's rule (Scott, 1979), a standard automatic
bandwidth selection rule"**.

So every component the entry records is really in the paper: KDE (yes), Scott's rule (yes,
cited to Scott 1979), expected-maximum curve (yes, Eq. 2), greedy marginal-gain step (yes,
Algorithm 1). Served quotations for the last two: **"apply a greedy algorithm to assign the
remaining budget accordingly"** (Introduction, contribution 2) and **"directly estimating
marginal gains via Monte Carlo sampling, removing the need for an auxiliary model"**
(Section 1.1).

**One transcription flag, raised rather than silently corrected.** The bandwidth was served
as **h = sigma-hat * d^{1/5}**. Scott's rule is conventionally sigma-hat * n^{-1/5}; a
positive exponent would make the bandwidth grow with sample size, which is backwards. This
is very likely exponent-sign damage in the HTML-to-markdown conversion, not an error in the
paper. I flag it because the routing note tells me to reproduce as served and flag rather
than correct. **It is immaterial to this claim either way**: sigma-hat is itself
shift-invariant, so h is unchanged under a constant shift whichever sign the exponent carries.

Supporting result: the greedy procedure is stated to be optimal when the V_i are concave and
monotonically increasing (V_{i,j+1} - V_{i,j} >= V_{i,j+2} - V_{i,j+1} and V_{i,j+1} >= V_{i,j}),
and **Proposition 3.1** establishes that f(n) = E[max{c, X_{1:n}}] has those properties for any
distribution of finite first moment. The text also notes that greedy run on *estimated* V
vectors is a heuristic and may not be optimal.

Algorithm blocks: **Algorithm 1 "Greedy Allocation"**, **Algorithm 2 "Two-stage Adaptive
Best-of-N (AdaBoN) Allocation Policy"**, both under Section 3 "An Adaptive Two-Stage
Allocation Policy".

### (c) Does any step compare a reward LEVEL across two different prompts?

**No.** This is the question the entry's verdict turns on, and the answer from the served
text is clean.

The only cross-prompt operation in the method is the argmax in Algorithm 1, and its argument
is the difference V_{i,a_i+1} - V_{i,a_i}. There is no threshold, no pooled ranking across
prompts, and no shared cutoff anywhere in the allocation. I asked specifically and the
summariser reported none; the metric definitions (below) likewise carry no absolute cutoff.

I re-derived the invariance rather than taking it on faith. Shift prompt i's rewards by a
constant c:

1. The d exploration draws become R_{i,k} + c.
2. In the KDE, sigma-hat is shift-invariant, so h is unchanged, and the fitted density is
   exactly the original density translated by c. So D-hat_i -> D-hat_i + c.
3. V_{i,j} is an expectation of a max over quantities all translated by c, so
   V_{i,j} -> V_{i,j} + c **for every j** — the whole curve rises rigidly.
4. Hence every marginal gain V_{i,j+1} - V_{i,j} is **exactly unchanged**, and the gains of
   the other K-1 prompts are untouched.
5. The argmax in Algorithm 1 is therefore unchanged at every one of the T steps, so the
   allocation vector a is unchanged.

The claim's mechanism is confirmed, and confirmed at the step the entry nominates.

Two precision notes on step 3-4 that the entry should carry:

- Exactness in the *estimator*: V is estimated by Monte Carlo with m = 1024 draws. Under
  common random numbers (the same underlying uniforms, so the shifted draws are the original
  draws plus c) the estimated gains are exactly unchanged too. On an independent re-seed the
  gains differ by Monte Carlo noise — but that is sampling noise, not a shift effect, and it
  is not systematic in c. Invariance is exact for the idealised V and exact for the estimator
  under a shift-equivariant coupling of randomness.
- The **objective's value is not shift-invariant, only its argmax is.** Equation 1 is a sum of
  per-prompt maxima, i.e. a sum of levels, so shifting prompt i by c raises the objective by
  exactly c. The claim as handed to me asserts invariance of the *allocation* and of the
  *reported metric*, not of the objective value, so this is not a defect in the claim — but an
  entry that slid from "allocation is invariant" to "the objective is invariant" would be wrong.

### (d) The reported metric, and the quoted string checked alone

The entry's description is **correct but incomplete: the paper reports two metrics, not one.**

**Batch Win Rate (BWR), Equation 3.** Compares AdaBoN's allocation against the uniform
allocation a = [B,...,B] — the probability, over reward draws and AdaBoN's own randomness,
that AdaBoN's sum of per-prompt maxima beats the uniform sum. Ties count as half a win, so
uniform against itself scores 0.50, and above 0.50 means AdaBoN wins. **Equal budget: yes** —
uniform spends B per prompt, total BK, the same total as AdaBoN. So the entry's "batch win
rate against uniform allocation at equal budget" is accurate.

**Expected Survival Time (EST), Equation 5.** The second reported metric, which the entry
does not record. It is the expected largest N for which AdaBoN at total budget BK is at least
as good as uniform allocation with N queries *per prompt*, computed as a sum over N of the
batch win-tie rate (Equation 4, ties weighted 1), with the sum capped at 2B in estimation.
**There is no absolute reward cutoff** — each comparison is relative to the realised rewards
of the uniform allocation at that N.

Both metrics are shift-invariant, which is *stronger* than the claim needs. Under both
allocations prompt i receives at least d >= 1 samples (indeed at least d = 0.75B = 90), so
prompt i's realised maximum exists on both sides of every comparison and rises by exactly c
on both sides, whichever subset of samples was drawn. Every comparison is a difference of
sums, so the sign is unchanged and ties stay ties. BWR unchanged; EST unchanged, term by term.

**The quoted string, checked alone and unprimed.** I asked whether the exact phrase appears
word for word before asking what it supports. Answer: **YES, verbatim**, in Section 4.2
(Evaluation Metrics and Benchmarks). Its sentence as served:

> "Our choice of the win rate over the expected cumulative max reward is because the scalar
> outputs of RMs are often only meaningful comparatively."

**Grammar on both sides of the cut — this is the check that matters here, and the string
passes it.** The subject of the clause the "because" attaches to is "Our choice of the win
rate over the expected cumulative max reward"; the main verb is "is". So the because-clause
justifies *the authors' choice of the win rate in preference to expected cumulative max
reward as the evaluation metric*. Cutting the quotation at "because" does not change what it
does: the entry uses it as the paper's own reason for preferring a comparative metric to a
level-valued one, and that is exactly the work the clause does in the source. No misquotation.

What immediately follows reinforces it rather than qualifying it away: the paper explains that
for a single prompt and two candidate responses the exact reward values may be meaningless
because they can be LM logits, while the comparison between the two responses is meaningful
under the Bradley-Terry model.

**Caveat on the sentence reconstruction, stated because the instructions require it.** I did
not obtain this 24-word sentence by assembling ordered consecutive segments. The summariser
refused the segmentation request outright, recognising it as reproduction of a full passage.
The sentence above came back instead from a targeted exact-wording check — I supplied the
candidate phrase and asked YES/NO plus the clause it sits in, and the summariser returned the
sentence and confirmed the wording "matches your claim exactly". So: the **phrase** in the
entry is verified verbatim and its grammatical context is verified; the full sentence is
reported on the summariser's confirmation rather than reconstructed from consecutive
fragments. I have not completed any cut string by inference.

### (e) Reward models, and what the paper says about ArmoRM

The paper names exactly the three the entry lists, and the entry's strings match the served
strings: **RM-Mistral-7B**, **FsfairX-LLaMA3-RM-v0.1**, **ArmoRM-Llama3-8B-v0.1**. Language
models: **Mistral-7B-v0.3, Gemma-7B, Qwen2.5-7B-Instruct, Meta-Llama-3-8B**. Four LMs by three
RMs = the 12 LM/RM pairs the abstract advertises.

**On ArmoRM's training objective, the AdaBoN paper says essentially nothing.** It describes
the three RMs only as "real-valued", around 8B parameters, and also used by Sun et al. (2024);
Appendix B gives ArmoRM's source URL and Llama 3 Community License. **It does not describe how
ArmoRM was trained or what kind of reward model it is, and it does not normalize, standardize
or rescale RM outputs anywhere.** That last point is worth recording: there is no
normalisation step that could have smuggled a level comparison into the pipeline.

I spent a call on ArmoRM's own paper — Haoxiang Wang, Wei Xiong, Tengyang Xie, Han Zhao,
Tong Zhang, "Interpretable Preferences via Multi-Objective Reward Modeling and
Mixture-of-Experts" (arXiv:2406.12845, served HTML v1).

**The entry's question poses a false dichotomy. ArmoRM is both, in two stages.**

- Multi-objective stage: **regression on absolute ratings**, not Bradley-Terry. Served
  quotation: **"The model can be simply trained with regression loss."** Equation 1 is the
  squared-L2 objective minimising ||w^T f_theta(x (+) y) - r||_2^2. It regresses on **19
  objectives** (helpfulness, correctness, verbosity, ...) from 8 datasets, on **absolute scalar
  rating labels** — HelpSteer and UltraFeedback per-objective scales linearly rescaled to
  [0,1], BeaverTails True/False safety mapped to 1/0, missing objectives dropped from the loss.
- Gating / scalarisation stage: a shallow ReLU MLP (3 hidden layers, 1024 units) with a softmax
  output, taking the **prompt** feature f_theta(x) (last-token hidden state of the prompt) as
  input. Objectives are first verbosity-penalised, r_i' = r_i - lambda_i * r_verbose (Eq. 2),
  with lambda_i set for zero Spearman correlation with verbosity (Eq. 3); the scalar reward is
  R = g_phi(f_theta(x))^T r' (Eq. 4). The backbone and regression head are frozen and the
  gating layer plus a scaling variable beta (initialised to 100) are trained **"using the
  Bradley-Terry loss with an additional scaling variable"** (Eq. 5). **So yes, a Bradley-Terry
  loss is used — at the gating stage.** The backbone is further initialised from a
  Bradley-Terry reward model of Llama-3 8B from Dong et al. (2024).

So the accurate description is: multi-objective absolute-rating regression, scalarised by a
prompt-conditioned gating network that is itself trained with a pairwise Bradley-Terry loss, on
a backbone initialised from a Bradley-Terry model. An entry that records it as *only*
absolute-rating regression, or *only* Bradley-Terry, is wrong in both directions.

Two honest limits on that paragraph: the served HTML did not state the arXiv id in its front
matter (I have the id only from the search result that led me there), and it refers to the
model as "ArmoRM-Llama3-8B" without the "-v0.1" suffix, so I **cannot confirm from the paper
that the exact checkpoint string the AdaBoN paper uses is the one this paper describes** —
only that the AdaBoN paper names that checkpoint and this paper describes the model family and
links a released repository. The paper also does not say whether the final scalar is calibrated
on an absolute scale, and does not describe normalising output scores; the only rescaling
described is of the *training labels* to [0,1], and the Eq. 3 verbosity decorrelation is not a
score normalisation.

**None of (e) bears on the truth of the claim.** The invariance argument is a property of the
allocation rule, not of the reward function: for *any* reward model, shifting one prompt's
rewards by a constant leaves that prompt's marginal gains unchanged. The RM identity would
matter only to the separate question of whether reward *scales* are commensurate across
prompts — see REGIME.

### (f) Regime: tasks, scales, budgets

- Tasks/datasets: **AlpacaEval** in the main text; **HH-RLHF** and **PKU-SafeRLHF** in
  Appendix G. Prompts only — these are instruction-following, helpfulness/harmlessness and
  safety preference sets, not reasoning or verifiable-answer tasks.
- Scales: four 7-8B language models; three roughly 8B real-valued reward models; 12 LM/RM pairs.
- Budgets: default **B = 120** per prompt, exploration **d = 0.75B** throughout (so d = 90,
  leaving (B-d)K = 150 samples to allocate greedily at K = 5), with d tuned over
  {0.60B, 0.70B, 0.75B, 0.80B}. Ablations sweep **B in {80, 100, 120, 140, 160}** and
  **K in {3, 5, 10, 15, 20}** (default K = 5). **50 batches** per setting, results averaged
  over **100 runs**.
- Headline results as the abstract frames them: beats uniform at the same budget, stays
  competitive with uniform given 20% more budget, improves as batch size grows.

## REGIME

The claim is a **mathematical property of the allocation rule and of the comparison structure
of the metrics**, and it is established inside the regime in which the paper states both. Eq. 2
defines V_{i,j} per prompt, Algorithm 1 compares adjacent differences of it, Eq. 3 and Eq. 5
compare sums against a uniform baseline at matched budget. The claim sits squarely inside that
regime. The usual regime trap on this ledger — a property proved for one population or
operating condition and cited for another — does not fire here, because the invariance follows
from the form of the rule and does not depend on the task, the scale, the budget, the reward
model, or the distribution of rewards. It holds for every one of the 12 LM/RM pairs and at
every B and K in the sweeps.

One genuine regime boundary, which the entry should carry because it is adjacent to the claim
and easy to overstate into:

**Shift-invariance is not scale-invariance, and the method does rely on cross-prompt
commensurability of reward SCALE.** The argmax in Algorithm 1 compares prompt 1's marginal gain
against prompt 2's marginal gain. Those are within-prompt differences, which is why an additive
shift cancels — but *multiplying* one prompt's rewards by a constant would rescale its gains and
would change the allocation. So the correct statement of what the rule needs is: it is
indifferent to where each prompt's reward scale is *centred*, but not to how each prompt's
reward scale is *stretched*.

This is sharpened by a notable silence I checked for directly. **The paper never discusses
whether RM scores are comparable across different prompts, or whether reward scales differ
between prompts.** Its entire comparability argument — the Section 4.2 passage the entry quotes
— is pitched **within** a single prompt: it reasons about "a prompt x and two responses
y_1, y_2 in Y". Appendix F.1 notes that reward distributions differ in **skewness** across
prompts, but that is a distributional remark and does not address score comparability. So the
paper's stated justification for using a comparative metric is a within-prompt argument, while
the allocation rule performs a cross-prompt comparison of within-prompt differences, and the
paper does not bridge that gap. Per instruction (9), I record this as what it is: **a silence,
not a prohibition and not a flag by the paper of the gap the entry is about.** It does not
weaken the claim — it is a separate observation that sits beside it.

## DEFECTS FOUND

Defects in the claim as handed to me: **none.** Both halves hold, and they hold at the step and
in the equations the entry nominates.

Defects and corrections in the entry's surrounding bookkeeping:

1. **The entry records one reported metric; the paper reports two.** Batch Win Rate (Eq. 3) and
   Expected Survival Time (Eq. 5). The claim's phrase "its reported metric" is therefore
   under-specified. This happens to cut in the claim's favour — I checked EST too and it is
   also shift-invariant, with no absolute cutoff — but an entry asserting invariance of "the"
   metric should name both.
2. **The entry's ArmoRM question is a false dichotomy** ("pairwise Bradley-Terry *or*
   multi-objective absolute-rating regression with gating"). ArmoRM is absolute-rating
   regression (Eq. 1, squared-L2 over 19 objectives) *scalarised by a gating network trained
   with a Bradley-Terry loss* (Eq. 5), on a backbone initialised from a BT model. Either
   one-sided answer is wrong.
3. **The AdaBoN paper is not a source for ArmoRM's objective at all.** It calls the three RMs
   "real-valued" and says nothing about their training. Anything the entry asserts about
   ArmoRM's objective is attributed to the wrong paper and belongs to arXiv:2406.12845
   (instruction 5).
4. **Served-text damage flagged, not corrected**: the Scott's-rule bandwidth came through as
   h = sigma-hat * d^{1/5}, where the conventional rule carries a negative exponent. Immaterial
   to this claim, but it should not be quoted in that form as if the paper printed it.
5. **Version history unavailable.** The abs page served only "This version: v3 2026-03-13" with
   no v1/v2 entries, so the entry's "v3" is confirmed as the current version but nothing can be
   said about what moved between versions.
6. **PUBLISHED-IS-NOT-PERFORMED check, run deliberately and passed in one direction only.** The
   quantities the entry relies on are genuinely *printed*, not merely defined: BWR and EST are
   defined (Eq. 3, Eq. 5) and measured, with Appendices F.1 and F.2 carrying Batch Win Rates and
   Expected Survival Times tables. But note the division of labour precisely: **the paper
   DEFINES and MEASURES its metrics; it nowhere states, tests or measures the shift-invariance
   property itself.** The invariance is a consequence of Eq. 2 plus Algorithm 1 that I derived;
   it is not a claim the paper makes, a proposition it proves, or a robustness check it runs.
   Proposition 3.1 proves concavity and monotonicity of the expected-max curve, which is a
   different property. So the ledger entry should present the invariance as **entailed by the
   paper's stated rule, not as reported by the paper** — asserting the latter would be the
   defect this instruction exists to catch.

## ROUTES THAT FAILED

1. `curl` to `https://arxiv.org/abs/2505.12050` — `curl: (56) CONNECT tunnel failed, response
   403`, HTTP 000, zero bytes.
2. `curl` to `https://arxiv.org/html/2505.12050v3` — same failure.
   Both are **tool-scoped** per the routing note, not host blocks: WebFetch reached both URLs
   immediately afterwards. The consequence is real though — with no local copy I could not
   grep, count words, or verify equations byte for byte, which is what caps the read level above.
3. WebFetch segmentation request for the 24-word Section 4.2 sentence — **refused** by the
   summariser, which declined to return ordered consecutive segments on the ground that it would
   reproduce the full passage despite the quote limit. It did volunteer the word count (24) and
   the gist. Recorded as a refusal rather than worked around; I substituted a narrower
   exact-wording check (candidate phrase in, YES/NO plus clause context out), which verified the
   phrase but is not a segment reconstruction. Per instruction, I stopped there rather than
   hunting mirrors (arxiv html v2, the Apple ML research page, export.arxiv.org) for an
   unsummarised copy.
4. Not attempted, by instruction: Unpaywall (would require a contact address), PubMed Central
   and Europe PMC (not applicable to an arXiv preprint, and hard-blocked here), and any
   inspection of the egress proxy.

Unused budget: 4 searches, 1 fetch.

## BEARING ON THE LEDGER ENTRY

**The claim holds, in the regime it is stated in, and the entry's reading of the decisive step
is correct.** The allocation rule's only cross-prompt operation is
argmax_i (V_{i,a_i+1} - V_{i,a_i}) in Algorithm 1 over the expected-maximum curve of Eq. 2.
That argument is a within-prompt difference. A constant added to one prompt's rewards
translates its whole V curve rigidly (the KDE bandwidth is itself shift-invariant), leaves every
marginal gain unchanged, and so leaves the allocation unchanged. Both reported metrics are
differences of sums against uniform at matched budget with no absolute cutoff, so they are
unchanged too. **(c) answers in the negative: no threshold, no pooled ranking, no shared cutoff,
no reward-level comparison between prompts anywhere in the rule or in the metrics.** The entry's
description of the machinery — KDE, Scott's-rule bandwidth, expected-maximum curve, greedy
marginal-gain step, K=5 at budget BK — matches what the paper prints.

Three things the entry should be made to carry before the verdict is recorded.

First, and most important for how the entry is phrased: **this invariance is entailed by the
paper, not reported by it.** The paper never states, proves or tests shift-invariance. The
entry is doing a derivation on the paper's stated rule, which is legitimate and which I
independently reproduced — but it must be attributed as such, not cited to the paper as a
finding. Proposition 3.1 proves something else (concavity and monotonicity).

Second, the sharp line between what is and is not invariant, since the neighbouring
overstatements are both false: the **argmax** of Eq. 1 is shift-invariant, the **value** of
Eq. 1 is not (it gains exactly c); and the rule is invariant to **shifts** but not to
**rescalings** of one prompt's rewards. The rule is indifferent to where each prompt's reward
scale is centred, not to how it is stretched.

Third, a silence that should be logged as a silence. The paper's own justification for a
comparative metric — the verbatim-confirmed Section 4.2 sentence — is a **within-prompt**
argument about two responses to one prompt, yet Algorithm 1 compares gains **across** prompts,
and the paper never discusses cross-prompt comparability of reward scores (Appendix F.1's
remark on differing skewness is not that). That gap is unaddressed by the paper rather than
flagged by it, and it does not bear against the claim; it is the open question sitting next to it.

Verdict input: **claim holds (yes)**, with the attribution correction in point one treated as
mandatory rather than cosmetic, since it changes the claim from "the paper shows" to "the
paper's rule implies".
