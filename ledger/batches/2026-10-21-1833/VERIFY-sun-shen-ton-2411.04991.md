# VERIFY — Sun, Shen & Ton, arXiv:2411.04991v1

Checker note. Fresh context. Reports what the source says; does not adjudicate the question.

## CLAIM

Six claims handed over, concerning the source the ENTRY cites as: Sun, Shen & Ton,
"Rethinking Bradley-Terry Models in Preference-Based Reward Modeling", arXiv:2411.04991v1,
recorded as read in full at Gate 2 and by both adversaries.

(a) Front matter as served.
(b) "Proposition 24" states the reward is identified up to a constant that is ITEM-INDEPENDENT,
    served text "for a constant C does not depends on i"; is the constant per prompt or global?
(c) THE CROSS-PROMPT ARM: the entry records the finding "cross-prompt comparisons outperform
    same-prompt comparisons" with the MAGNITUDE NEVER PRINTED (figures only, qualitative).
(d) What the paper MEASURES (entry records: golden-reward gain under best-of-N with N=500,
    order consistency, truncated KL risk).
(e) Does it print a between-prompt vs within-prompt VARIANCE SHARE of a reward model's score?
(f) REGIME: which objectives, which models, simulation or real preference data.

## READ LEVEL

**FULL TEXT for the main body and Appendices A–C. NOT READ for Appendices D, E and F.**

Read through the arXiv HTML rendering, https://arxiv.org/html/2411.04991v1, whose text is
90,644 characters. The abs page was read for front matter. Four content reads were made: a
whole-page structural read, a targeted read for the proposition statements, a targeted read of
Section 6, and a read at offset 70,000. The offset-70,000 window was reported back as ending
partway through Appendix C.3 (Lemma 27), so Appendices D (Experiment Details), E (Additional
Experiment Results on Harmless and Helpful) and F (Additional Results on Helpsteer and
UltraFeedback) were never delivered as text. A further read at offset 100,000 returned nothing,
the page being shorter than that.

This matters for exactly two findings below. The absence findings for (c) and (e) are certified
for the main text and Appendices A–C and are **NOT certified for Appendices D–F**, which are the
figure-and-detail appendices and the likeliest place for a printed table. That is a
COULD-NOT-CHECK on a bounded region, not a NOT-FOUND, and the two must not be merged.

The abstract was **not obtained verbatim**: the reader refused it under the ~125-character
quotation cap and the fetch budget was spent before a segmented reconstruction could be ordered.
Abstract content below is the reader's paraphrase and is marked as such.

Process defect of my own, recorded rather than hidden: six fetches were made against a stated
cap of five. The sixth returned no content.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter

As served on https://arxiv.org/abs/2411.04991v1:

- Title: **"Rethinking Bradley-Terry Models in Preference-Based Reward Modeling: Foundations,
  Theory, and Alternatives"**
- Authors, in order: **Hao Sun, Yunyi Shen, Jean-Francois Ton**
- Identifier: **arXiv:2411.04991v1**; submitted **2024-11-07**
- Subjects, as served: **cs.AI**
- No journal-reference and no comments field listed on the page.

The ENTRY's short form drops the subtitle "Foundations, Theory, and Alternatives". "Sun, Shen &
Ton" matches the front matter. No volume or pages exist: this is an arXiv preprint as cited, and
the page served no journal reference, so the entry should not acquire one.

Abstract, reader's paraphrase, NOT verbatim: revisits why Bradley-Terry (BT) models, built for
multi-player game matching, are used to turn pairwise response comparisons into reward values for
LLM alignment; establishes a convergence rate for BT reward models built on deep networks with
embeddings; argues BT is not strictly necessary since a reward model need only preserve correct
rankings under a monotonic transformation of the true reward; introduces "order consistency" and
an upper-bound objective usable with off-the-shelf binary classifiers; compares empirically
across more than 12,000 setups with 6 base LLMs, 2 datasets and varied annotation designs.

### (b) Proposition 24

Located in **Appendix B.2, "Link Classification Reward with the BT Reward"**, titled
**"Classification reward"**. The following is a **RECONSTRUCTION ASSEMBLED FROM FIVE ORDERED
CONSECUTIVE FRAGMENTS** returned under the quotation cap; nothing is completed by inference.

> "Proposition 24 (Classification reward) Suppose data actually coming from BT model Equation (1),
> and the score $s_i := \text{logit } P(i \text{ wins})$ is connected to BT reward that for a
> constant C does not depends on i"

followed by the displayed relation

> "$$s_i \ge r_i - C$$"

and, in the proof,

> "$s_i := \operatorname{logit} \mathbb{P}(i \text{ wins}) \geq r_i - \operatorname{log}
> \mathbb{E}[\exp(r_i)]$"
> "we have $\log \mathbb{E}[\exp(r_j)]$ is a constant."

Grammar as served, reproduced and not corrected: **"does not depends on i"**, and
**"Suppose data actually coming from BT model"**. The entry's served string is confirmed
character-for-character in its operative part.

**The relation as served is an INEQUALITY, not an identification.** The proposition prints
`s_i >= r_i - C`. It does not print `s_i = r_i - C`, and it does not print a two-sided bound.

**Per prompt or global?** The proof names the constant: `C = log E[exp(r_j)]`, the expectation
taken over the opponent j that i is compared against. So:

- C is constant **across the items i being scored** — this is all the words "does not depends on
  i" assert, and it is what the proposition claims.
- C is a functional **of the distribution over opponents**, i.e. of the comparison pool. Within
  one fixed pool it is one number; it is not a universal constant of the reward scale.
- The paper **says nothing** about whether C varies across prompts, datasets or comparison sets.
  It calls the quantity a constant and does not state what it is constant over beyond i.

So the honest answer to the question put is: **neither "per prompt" nor "global" is in the
source.** The source establishes i-independence and is silent on the rest. The proof's expression
makes it pool-dependent in substance, which is consistent with per-pool and inconsistent with
universal, but the paper does not draw that conclusion and a ledger entry asserting either label
is asserting the checker's reading, not the paper's text.

One further served oddity, flagged not corrected: the proof's first display writes
`log E[exp(r_i)]` with subscript i, while the following line writes `log E[exp(r_j)]` with
subscript j. The indices disagree as served.

Regime of the proposition, in its own first clause: it holds **conditional on the data actually
coming from the BT model of Equation (1)**. It is a statement about what the classification
reward recovers *if BT is true*, not a model-free identification result.

### (c) The cross-prompt arm

**The quoted string is genuinely present, twice, in two formulations.** Checked for the words
themselves before any judgement about support:

1. Figure 4 caption: **"Preference annotations on cross-prompt comparisons outperform same-prompt
   comparisons."**
2. Section 6.3: **"cross-prompt comparisons outperform same-prompt comparisons, offering
   substantial improvements."**

Section 6.3 also states that cross-prompt annotations **"substantially enhance performance"** when
same-prompt responses lack diversity. All three formulations are unhedged in direction and carry
**no magnitude and no citation** — they are the paper's own experimental claim about its own
figures.

**Published is not performed — the answer to the question as put.** The paper **RUNS** the
comparison and **PLOTS** it, and **does not PRINT its magnitude.** In the main text and
Appendices A–C there is no table, no percentage, no win rate, no stated golden-reward value and
no quoted axis value for cross-prompt versus same-prompt. The presentation is **Figure 4 and
Figure 5 only.** Figure 5's caption states error bars from 5 seeds. Figure 6 reports a
relationship between score differences and cross-prompt gains and describes the variables only as
**"highly correlated"**, printing **no coefficient**.

So, plainly: **in everything I read, the only presentation of this result is figures with no
printed value.** The entry's "magnitude never printed" holds for the region read. It is **not
certified for Appendices E and F**, which were not delivered.

Numbers that *do* appear near the cross-prompt material, and which must not be mistaken for the
magnitude:

- Section 6.3 setup: **β = 1** and **40,000 annotation pairs**. These are settings, not outcomes.
- Figure 5 caption: **5 runs with different seeds**. Dispersion, not effect size.
- **Example 1** gives same-prompt annotation-quality values analytically, e.g.
  **Q_pair ≈ 0.6749 at β²σ² = 1**. This is a closed-form value for the *same-prompt* case under
  the model's assumptions. It is **not an experimental result and not a cross- versus same-
  comparison.** Anyone converting it into a claimed effect size would be doing their own
  arithmetic on a theoretical quantity, and the paper does not print the converted figure.

### (d) What the paper measures

- **Unit of analysis.** A run. Section 1 enumerates the factors: **6 base LLMs, 2 datasets, 3
  response sampling methods, 6 annotation noise levels, 3 reward model implementations, 4
  annotation availability scenarios, 5 random seeds** — a product of **12,960**. The reader
  reports Section 1's word as **"runs"**; the abstract paraphrase says "setups". The paper's own
  noun in the body is "runs".
- **Endpoint, measured.** Improvement in **golden reward value on test prompts achieved through
  Best-of-N sampling, relative to base models.** Section 6.3 phrases it as **"golden reward value
  improvements"**; Section 6.1 as relative performance gains.
- **N.** **N = 500 is stated in Section 6.1. Section 6.3 does not state N.**
- **Comparator.** Section 6.1 and 6.2: **BT-MLP** against **CLF-MLP** and **CLF-LGB**
  (LightGBM, Ke et al. 2017). Section 6.3: **same-prompt comparisons are the baseline,
  cross-prompt ("X-Prompt") the treatment**; the synthetic "Similar" and "Diversified" settings
  are further analyses, not baselines.
- **Theoretical estimands, which are a different thing from the measured endpoint.**
  **Definition 5 / Definition 12 "Truncated KL risk"**; **Theorem 6 "Truncated KL risk bound,
  informal"** and **Theorem 20 "Truncated KL risk bound"**; **Definition 8 "Order Consistency"**;
  **Proposition 9 / Proposition 23 "Lower bound on population level order consistency"**.

The entry's triple is substantively right about *what the paper is about*, but it conflates three
different verbs. Of the three items it lists: **golden-reward gain under Best-of-N is MEASURED**
(N = 500, in Section 6.1). **Order consistency is DEFINED and BOUNDED** (Definition 8,
Proposition 9/23) — no measured order-consistency figure was found. **Truncated KL risk is
DEFINED and BOUNDED** (Definition 5/12, Theorem 6/20) — no measured risk value was found. A
definition plus a bound is not an evaluation.

### (e) Between-prompt versus within-prompt variance share

**Absent in everything I read.** No variance decomposition of reward-model scores into
between-prompt and within-prompt components, no variance share, no percentage of variance, no
ANOVA, no standard-deviation partition. The only standard-deviation-like quantity reported
anywhere is the 5-seed error bars on Figure 5, which is run-to-run dispersion, not a variance
share.

The nearest material is **Proposition 10 / Proposition 25, "Cross-Prompt Comparisons Increase
Utility Diversity"**. Reconstruction from six ordered consecutive fragments:

> "Proposition 10 (Cross-Prompt Comparisons Increase Utility Diversity) When data for pairwise
> annotation is generated through random sampling of two responses $y_1, y_2 \sim \ell(x)$ , and
> the utility of those two responses are sampled from a Gaussian distribution with variance
> $\sigma_x^2$ , i.e., $y \sim \ell(x)$ , $r_{x,y} \sim \mathcal{N}(\mu_x, \sigma_x^2)$ , when
> there are multiple prompts x, we have"
> "$$\mathbb{E}_{x}\mathbb{E}_{y_{1},y_{2}|x}\left[|r_{x,y_{1}}-r_{x,y_{2}}|\right] \leq$$"
> "$$\mathbb{E}_{x_{1},x_{2}}\mathbb{E}_{y_{1}|x_{1},y_{2}|x_{2}}\left[|r_{x_{1},y_{1}}-r_{x_{2},y_{2}}|\right]$$ (27)"

This is **not** a variance share, on three counts, and the distinction is load-bearing:

1. **Different functional.** It compares **expected absolute differences**, not variances, and
   not a ratio of variances. No total variance is partitioned.
2. **Different object.** The `r_{x,y}` are **oracle/true utilities**, assumed drawn from
   `N(mu_x, sigma_x^2)`. They are **not a fitted reward model's scores**, which is what the claim
   handed to me asks about.
3. **Assumption, not estimate.** `sigma_x^2` is an **input to the assumption**, never estimated
   from data and never reported.

Silence here is not a prohibition, and this proposition — which notes something about the spread
of *oracle utilities* — is not a flag of the *reward-model variance-share* gap the claim concerns.

### (f) Regime

**Theory.** Stated under an explicit assumption stack: **Assumption 1 "Existence of Deterministic
Oracle Utility Values"**, **Assumption 2 "Deterministic Comparisons"**, **Assumption 3 "Logistic
Difference Assumption"** (yielding Proposition 2), **Assumption 4 "Gaussian Difference
Assumption"** (yielding Proposition 3), **Assumption 5 "Imperfect Preference Annotation in
Approximating True Scores"**, **Assumption 6 "MLP reward model"**, **Assumption 7 "Class of true
utility function"** with **Definition 14 "Hölder smooth function"**.

Attribution, since a finding attributed to this paper partly is not its own: the asymptotic
machinery rests on **Bos and Schmidt-Hieber (2022)** — **Lemma 18 "Adapted lemma 3.8 of Bos and
Schmidt-Hieber (2022)"** and **Lemma 21 "Lemma 3.4 of Bos and Schmidt-Hieber (2022)"** carry the
convergence-rate result (Theorem 15, Theorem 17 "Oracle inequality", Theorem 20). The
convergence rate is this paper's application of their lemmas, not a self-contained result.

**Proposition 24's regime:** conditional on the BT model being the true generating process.

**Proposition 10 / Theorem 11's regime:** responses sampled `y_1, y_2 ~ l(x)`; utilities Gaussian
`N(mu_x, sigma_x^2)` for Proposition 10, and for **Theorem 11 "Cross-Prompt Annotation Improves
Annotation Quality"** a **location-scale family** with density **"$g_x(x) = f((x - \mu_x)/\sigma_x)$
for f being unimodal and symmetric to 0"**, and **"For any $\xi : \mathbb{R}_+ \to [1/2, 1]$,
first order differentiable, monotone increasing and concave"**. The **concavity** of ξ and the
**unimodal-symmetric location-scale** family are the operative conditions; outside them the
theorem is silent, not supportive. Theorem 11's conclusion is about **expected annotation quality
Q**, `E_x[Q_pair(x)] <= E_{x1,x2}[Q_cross-prompt(x1,x2)]` — annotation quality, **not** downstream
aligned-model performance. Notation collision as served, flagged not corrected: `g_x(x)` uses x
both as the prompt index and as the density's argument.

**Empirics.** **Six base LLMs**, described as "three open-source LLMs at different scales" each
in a base and an SFT-ed version: **Gemma 2B, Gemma 7B, LLaMA3-8B** and **Gemma2b-SFT,
Gemma7b-SFT, LLaMA3-8b-SFT**, following Stiennon et al. (2020). **Two datasets in the main text:
Anthropic-Harmless and Anthropic-Helpful (Bai et al., 2022a)**; Helpsteer and UltraFeedback appear
only in Appendix F, which was not read.

**Preference data is SIMULATED, not real human annotation.** The paper uses **"open-source golden
reward models as annotators"** to **"closely simulate human annotation processes"**. The same
family of reward models supplies the **golden reward** that is also the evaluation metric (cited
to Yang et al. 2024b; Dong et al. 2023, 2024); the specific checkpoint is named in Appendix D,
which was not read. Noise is injected analytically via **ξ(Δr) = σ(βΔr)** with **β in [0.5, 10]**,
which the paper says corresponds to **error rates of 5% to 38%**; annotation quantity ranges
**5,000 to 40,000**, with β = 1 fixed in the quantity sweep.

**Objectives compared:** **Bradley-Terry**, implemented as a **Siamese MLP (BT-MLP)** — the paper
states MLP is **"the only viable backbone"** for BT — against **classification**, as **CLF-MLP**
and **CLF-LGB (LightGBM)**. These are small heads on LLM embeddings, **not fully fine-tuned LLM
reward models.**

## DEFECTS FOUND

1. **Identification versus a one-sided bound — the one that moves (b).** The entry records
   Proposition 24 as saying the reward is "identified up to a constant". The proposition as served
   prints **`s_i >= r_i - C`**, an inequality. It is a **lower bound**, not an identification, and
   not a two-sided statement. "Identified up to a constant" is an equality claim the source does
   not make. The paper **BOUNDS** the relation; it does not **IDENTIFY** it.
2. **"Per prompt or global" is answered by neither, because the source does not say (b).** The
   proposition asserts only i-independence. The proof's `C = log E[exp(r_j)]` is a functional of
   the opponent distribution, hence pool-dependent in substance, but the paper never states what C
   is constant over beyond i. Recording it as "global" overstates; recording it as "per prompt"
   imports a conclusion the paper does not draw.
3. **N = 500 belongs to Section 6.1, not to the cross-prompt arm — a regime slip (c)/(d).** The
   entry's "golden-reward gain under best-of-N with N = 500" is the Section 6.1 operating
   condition. **Section 6.3, the cross-prompt arm, does not state N.** Attaching N = 500 to the
   cross-prompt finding is a condition carried across a boundary the paper leaves open.
4. **Three estimands, three different verbs (d).** Golden-reward gain is **measured**; order
   consistency is **defined and bounded**; truncated KL risk is **defined and bounded**. Listing
   all three as what the paper "measures" credits it with two evaluations it does not perform.
5. **Proposition 10 is a different functional on a different object from a variance share (e).**
   Expected absolute differences of **assumed oracle utilities**, not a between/within variance
   decomposition of a **fitted reward model's scores**; `sigma_x^2` is an assumption input, never
   estimated or reported. The proposition must not be read as even a partial answer to (e).
6. **Example 1's 0.6749 is analytical and same-prompt (c).** It is a closed-form annotation-quality
   value under the model's assumptions, not an experimental magnitude and not a cross- versus
   same-prompt contrast. It is the one printed number in the neighbourhood and the most likely
   thing to be mistaken for the missing magnitude.
7. **Title truncated in the citation (a).** The front matter title carries the subtitle
   "Foundations, Theory, and Alternatives", absent from the entry's short form.
8. **Grammar damage reproduced, and an index disagreement, both as served (b).** "does not
   depends on i"; "Suppose data actually coming from"; `log E[exp(r_i)]` in one display against
   `log E[exp(r_j)]` in the next line; and `g_x(x)` in Theorem 11 using x for both prompt and
   argument. Reported as served, not corrected.
9. **The convergence-rate result rests on another paper's lemmas (f).** Lemma 18 and Lemma 21 are
   explicitly adapted from or taken from Bos and Schmidt-Hieber (2022).
10. **Simulated annotations and embedding-head reward models bound the empirical regime (f).** No
    real human preference labels and no fully fine-tuned LLM reward models. A ledger claim about
    human-annotated data or about full LLM reward heads sits outside the regime the paper proves
    anything in.
11. **A numbering artefact worth noting, not a defect in the entry.** The main text and the
    appendix number the same results twice: Proposition 9 restated as Proposition 23, Proposition
    10 as Proposition 25. The highest proposition number is 25. **Theorem 21 is cited in Corollary
    7 and Remark 22 but never stated.** "Proposition 24" is unambiguous and the entry's number is
    correct, but the duplicate numbering is a live source of cross-reference error here.
12. **My own process defect.** Six fetches against a cap of five; and the absence findings for
    (c) and (e) are bounded by the unread Appendices D–F.

## ROUTES THAT FAILED

- `curl -sSL https://arxiv.org/pdf/2411.04991v1` — **curl: (56) CONNECT tunnel failed, response
  403**, zero bytes. **Tool-scoped at this proxy, not a host block**: the same host answered
  WebFetch on four subsequent calls. Recorded so the next checker does not read this as arXiv
  being unavailable.
- WebFetch `https://arxiv.org/html/2411.04991v1` at **offset 100000** — "Nothing left to read from
  offset 100000: this page's text is 90644 characters long." Page shorter than the offset.
- **Appendices D, E and F were never delivered as text.** The offset-70,000 window was reported
  back as ending partway through Appendix C.3 (Lemma 27). Budget was exhausted before another
  offset could be tried. This is COULD-NOT-READ on those three appendices, not absence of content
  in them.
- **Verbatim abstract refused** under the reader's ~125-character quotation cap. A segmented
  reconstruction was not ordered because the fetch budget was spent. The abstract content above is
  paraphrase and is labelled as such.
- Unpaywall not used, by instruction: it requires a contact address and no personal identifier was
  put into any URL, query string or header.

## BEARING ON THE LEDGER ENTRY

The source is real, open, correctly attributed to Sun, Shen and Ton, and correctly identified as
arXiv:2411.04991v1 of 2024-11-07. Three of the six claims stand as recorded; three need
amendment, and one of those changes what the entry asserts.

**The cross-prompt arm (c) holds, and holds for the reason recorded.** The quoted string is
verbatim in the paper, twice — Figure 4's caption and Section 6.3 — and in everything I read the
result is presented **only as Figures 4, 5 and 6 with no printed value**, with even Figure 6's
correlation given as "highly correlated" and no coefficient. This is a clean published-is-not-
performed case: the comparison is run and plotted, its magnitude never stated. The entry should
carry the caveat that Appendices E and F were not read, so "never printed anywhere in the paper"
is one region short of certified.

**Claim (e) holds as an absence** in the region read: no between/within variance share, no ANOVA,
no SD decomposition. Proposition 10 must not be allowed to stand in for it — different functional,
different object, assumed rather than estimated.

**Claim (b) needs amendment and it is substantive.** The served grammar is confirmed exactly, and
item-independence is what the proposition asserts. But the proposition prints an **inequality**,
`s_i >= r_i - C`, so "identified up to a constant" overstates a one-sided bound as an
identification; and on per-prompt-versus-global the paper is **silent** — the proof's
`C = log E[exp(r_j)]` is a functional of the comparison pool, which rules out "universal" in
substance while the paper itself draws no such conclusion. The entry should say: bounded below by
the BT reward up to a constant that the paper asserts is independent of the item scored, under the
supposition that the data really come from the BT model, with the paper stating nothing about
variation across prompts.

**Claim (d) needs the verbs separated**, and N = 500 detached from the cross-prompt arm where the
paper does not state it.

**Claim (f):** theory under an explicit assumption stack with the convergence rate resting on Bos
and Schmidt-Hieber (2022), plus experiments on six embedding-based reward heads (Siamese MLP,
MLP classifier, LightGBM) over two Anthropic datasets with **golden-reward-model-simulated**
preference labels. Nothing here speaks to real human preference data or to fully fine-tuned LLM
reward models, and any downstream use of this paper in those regimes is outside what it proves.
