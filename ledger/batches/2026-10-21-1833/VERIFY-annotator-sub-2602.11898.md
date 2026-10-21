# VERIFY — annotator substitution — arXiv:2602.11898

## CLAIM

As the ENTRY cites it: arXiv:2602.11898 shows "item disagreement of 16-66%" and, in Section 5.2,
"effects moving by more than 80% with the sign reversing for 'two of the eight models' in one case
study." The entry read the source at abstract/summariser level only, and it is one of two sources
the recommended routing row rests on.

Sub-claims assigned: (a) identity, (b) name the numbers and where, (c) what is substituted,
(d) whether the paper poses the share-of-published-conclusions-reverse question with a denominator,
(e) regime.

## READ LEVEL

**Full text**, via the arXiv HTML rendering `https://arxiv.org/html/2602.11898v1` (all sections,
Introduction through Discussion, plus appendix headings), and the abstract page
`https://arxiv.org/abs/2602.11898` for front matter.

Limit on the read: **figure content is not in the extracted text.** Figure 1 carried no caption in
what was served, and the per-model estimates for the political-science case study exist only in
Figure 5. So every number below is one printed in a sentence; where a number exists only in a
figure, that is stated as such.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity

Front matter as served on the abs page:

- Title: **"Benchmark Illusion: Disagreement among LLMs and Its Scientific Consequences"**
- Authors: **Eddie Yang, Dashun Wang** (two authors; no others served)
- **arXiv:2602.11898v1**, submitted **2026-02-12**, subject **cs.CL**
- No journal-ref and no comment line served.

The identifier **exists**. It is a **primary empirical / metascience methods paper** — it runs its
own benchmark re-analysis, its own simulation, and its own re-analyses of two published studies.
It is not a review, protocol, guideline or editorial.

Abstract, reconstructed from **15 consecutive numbered segments** returned in order by the
summariser (segment junctions checked for continuity; nothing completed by inference):

> "Benchmarks underpin how progress in large language models (LLMs) is measured and trusted. Yet
> our analyses reveal that apparent convergence in benchmark accuracy can conceal deep epistemic
> divergence. Using two major reasoning benchmarks - MMLU-Pro and GPQA - we show that LLMs
> achieving comparable accuracy still disagree on 16-66% of items, and 16-38% among top-performing
> frontier models. These discrepancies suggest distinct error profiles for different LLMs. When
> such models are used for scientific data annotation and inference, their hidden disagreements
> propagate into research results: in re-analyses of published studies in education and political
> science, switching the annotation model can change estimated treatment effects by more than 80%,
> and in some cases reverses their sign. Together, these findings illustrate a benchmark illusion,
> where equal accuracy may conceal disagreement, with model choice becoming a hidden yet
> consequential variable for scientific reproducibility."

(Label: reconstruction from 15 fragments.)

Section structure as served: 1 Introduction; 2 LLMs Make Different Mistakes; 3 The Dangers of LLM
Difference for Scientific Analysis; 4 Implications for Science: Simulation (4.1 Simulation Design,
4.2 Results); 5 Implications for Science: Empirical Applications (**5.1 Case Study 1: Education**,
**5.2 Case Study 2: Political Science**); 6 Discussion; Appendices A (annotation details),
B (additional result: Kim et al. 2021), C (additional result: Rozenas and Stukal 2019).

### (b) The numbers, as printed, with location and denominator

**The 16-66%.** Printed in the **abstract** ("disagree on 16-66% of items") and in the
**Introduction**:

> "Among models with comparable accuracy, disagreement ranges from 16-66% on MMLU-Pro and 17-65% on
> GPQA."
> "Crucially, this divergence persists even among top-performing frontier models with accuracy above
> 60%, where disagreement remains between 16% and 38%."

**Section 2, the section that actually does this analysis, prints different numbers**, in this
order:

> "Across all models, the pairwise disagreement rate is substantial, ranging from 16% to 76% on
> MMLU-Pro and 17% to 70% on GPQA."
> "Crucially, this disagreement persists even among models with comparable overall accuracy."
> "For the top-tier models (accuracy > 60%), disagreement rates still range from 16% to 38% on
> MMLU-Pro and 17% to 32% on GPQA."

So the paper states the item-disagreement result **more than once, and not identically**:
- abstract: 16-66% attached to "comparable accuracy"; 16-38% to "top-performing frontier models";
- Introduction: 16-66% (MMLU-Pro) / 17-65% (GPQA) attached to "comparable accuracy"; 16-38% to
  frontier models with "accuracy above 60%";
- Section 2 body: **16-76% (MMLU-Pro) / 17-70% (GPQA) attached to "all models"**, and 16-38% /
  17-32% to "the top-tier models (accuracy > 60%)". **The body never prints 16-66%.**

Only the 16-38% figure carries an author-stated threshold ("accuracy > 60%"). The 16-66% /
"comparable accuracy" formulation carries **no numeric accuracy band at all** — "comparable overall
accuracy" is left undefined in Section 2. The ranges point to **Figures 1 and 2** ("The results,
visualized in Figures 1 and 2"); Figure 2's caption as served: "Figure 2: GPQA - Pairwise Model
Proportion of Disagreement".

Denominator and unit for these percentages, in the paper's own words:

> "we calculate the proportion of questions on which any two models provide different answers"

so the unit is **a pair of models**, and the denominator is **questions in the benchmark**:

> "MMLU-Pro, a broad dataset of 12,032 multiple-choice questions across 14 disciplines"
> "GPQA, a challenging dataset of 448 expert-level questions in biology, physics, and chemistry."

Source of the predictions:

> "Drawing on model predictions from the creators of MMLU-Pro and the Holistic Evaluation of
> Language Models (HELM) benchmark suite."

**The number of models in this benchmark analysis is never stated in the body text.** A range of
pairwise rates is printed; the count of models and of pairs behind it is not.

**The "more than 80%".** It is **not printed in Section 5.2.** Every printed instance belongs to the
**education** case study (Section 5.1) or to a summary of it:

- abstract: "switching the annotation model can change estimated treatment effects by more than 80%"
- Introduction: "the estimated magnitude varies by roughly 80%" ... "ranging from 0.19 to 0.35
  against an original estimate of 0.44."
- Discussion (Sec. 6), as served: "swapping one high-performing model for another changes estimated
  effects by more than 80%" ... "in the education case and reverses the direction of the key
  relationship in the Russian news case."

Section 5.1 itself prints the figure as **84%**, not 80%:

> "with an estimated effect size of 0.44 for social studies-related writing."
> "The estimated effects range from a low of 0.19 for Olmo-3-7B to a high of 0.35 for Gemma-3-27B."
> "This represents an 84% difference in the estimated impact of the educational intervention."

Re-derived at the author's own stated threshold: (0.35 - 0.19) / 0.19 = 84.2%, i.e. the 84% is a
**max-over-min spread across the eight annotator models**, not a deviation from the original 0.44
estimate (0.35 vs 0.44 would be -20%; 0.19 vs 0.44 would be -57%). The Discussion sentence's "more
than 80%" is the same quantity restated loosely. No uncertainty interval is printed with any of
these point estimates in the text.

**The sign reversal.** Section 5.2 (Case Study 2: Political Science). The exact lowercase string
"two of the eight models" **does not appear**; the sentence begins the clause with a capital T.
Full sentence, reconstructed from 3 consecutive fragments:

> "Two of the eight models we tested (Gemma-3-27B and Qwen-2.5-72B) produce estimates that reach the
> opposite conclusion - that Russian officials are more likely to be blamed for bad news than to be
> attributed with good news."

Section 5.2's original-study estimate is printed ("with an estimate of approximately 0.24") but
**the paper prints no numeric range for the eight LLM-based estimates in Section 5.2's text** —
those values appear only in Figure 5. For Section 5.2, the paper therefore **MEASURES and PLOTS**
the reversal and **names which two models reverse**, but does not **print** the magnitudes.

### (c) What is substituted

**Model-as-annotator substitution.** The paper's own description:

> "We then use the annotations by different LLMs in place of the original annotations."

and, in the abstract, "switching the annotation model"; in the Discussion, "swapping one
high-performing model for another".

**It does not substitute a retired or deprecated snapshot for its vendor-designated successor.**
Nothing in the text performs or analyses a version-to-version swap inside a model family. API/model
volatility appears only once, in the literature review, **attributed to someone else** —
Barrie, Palmer and Spirling (2024) — not as the paper's own manipulation.

### (d) The routing test

**The paper does not pose it.** There is no sentence asking what share or fraction of published
studies or conclusions would change or reverse under model substitution, and no proportion with a
denominator of studies. What the paper has instead:

- **two** re-analyses (Kim et al. 2021, education; Rozenas and Stukal 2019, political science), plus
  appendix extensions of the same two;
- a **simulation** (Section 4) using **three simulated "AI annotators"**, not real LLMs;
- a within-study count for one case: 2 of 8 models reversing the sign in Section 5.2.

So the only denominator the paper prints is **models within one case study (2/8)**, never
**studies within a literature**. It DEMONSTRATES reversal in a case study; it does not RATE how
often reversal happens across published conclusions.

The paper says as much about its own reach:

> "We focus on two reasoning benchmarks and two empirical applications"
> "we examine a particular snapshot of model capabilities."

### (e) Regime

- **Benchmark-disagreement regime (Sections 1-2):** two multiple-choice reasoning benchmarks —
  MMLU-Pro (12,032 items, 14 disciplines) and GPQA (448 expert items, bio/physics/chem). Unit of
  analysis: a **pair of models**; endpoint: **proportion of questions answered differently**.
  Instrument: released predictions from the MMLU-Pro creators and HELM. Thresholds: "all models" vs
  "top-tier models (accuracy > 60%)". Model count unstated.
- **Annotation regime (Sections 5.1-5.2):** **eight LLMs per case study** ("eight different LLMs" in
  each). Named in the text: Olmo-3-7B, Gemma-3-27B, Gpt-oss-120B (5.1); Gpt-oss-20B, Gpt-oss-120B,
  Gemma-3-27B, Qwen-2.5-72B (5.2); Llama-3.1-8B (Appendix B). **The full list of eight is not
  printed in either case study's text.** Tasks: rubric-scoring student argumentative essays (5.1);
  classifying whether news fragments attribute events to "Russian officials" (5.2).
  Endpoints/estimands: the **treatment effect** of the MORE literacy intervention on argumentative
  writing scores (original 0.44) in 5.1; "the difference in the predicted probability of attributing
  Russian officials" "in the context of good news versus bad news" (original ~0.24) in 5.2.
  Comparator: the original human/published annotations.
- **Simulation regime (Section 4):** three simulated annotators; no real models.

Note that the models whose benchmark disagreement is measured (HELM / MMLU-Pro creators' released
predictions, model count unstated) and the eight models used as annotators are **not shown to be
the same set**. The named annotators are mid-size open-weight models, not the "top-performing
frontier models" to which the 16-38% figure is attached.

## DEFECTS FOUND

1. **The ">80%" is mislocated to Section 5.2.** It is the **education** case (Section 5.1 /
   Kim et al. 2021). Section 5.2 prints no percentage movement at all. The entry fuses two
   different case studies into one sentence.
2. **Section 5.1's own printed figure is 84%, not 80%.** "More than 80%" is the abstract's and
   Discussion's rounding of it. An entry reporting the source as showing ">80%" is quoting the
   abstract, not the section.
3. **The 84% is a max/min spread across annotator models, not a deviation from the published
   estimate.** 0.19 to 0.35, against an original 0.44. Anyone reading ">80% change in the effect"
   as ">80% away from the published result" has the wrong quantity; no model moved the estimate that
   far from 0.44.
4. **16-66% is an abstract/Introduction-only formulation.** The body section that runs the analysis
   prints **16-76% across all models** and **16-38% for accuracy > 60%**. The source states the
   result in at least three non-identical ways; only the 16-38% version carries an author-stated
   accuracy threshold. The 16-66% figure's "comparable accuracy" qualifier is never operationalised
   numerically.
5. **"two of the eight models" is accurate in substance but is not the served string** — the paper
   writes "Two of the eight models we tested (Gemma-3-27B and Qwen-2.5-72B)". Checked unprimed. The
   grammar on both sides of the cut is sound: the clause that follows does restrict to the opposite
   conclusion, so the quotation is not misleading, only miscapitalised and un-attributed to its
   named models.
6. **Published is not printed, for Section 5.2.** The eight per-model estimates behind the sign
   reversal exist only in Figure 5. The paper MEASURES and PLOTS them and NAMES the two reversers;
   it does not PRINT their magnitudes in text. Any numeric claim about how far 5.2's estimates moved
   cannot be sourced to a sentence in this paper.
7. **Model count missing in the benchmark analysis.** A pairwise-disagreement range is printed with
   no stated number of models or pairs, so the 16-66%/16-76% ranges have no printed denominator of
   comparisons.
8. **No full roster of the eight annotators** in either case study's text; five distinct names
   appear across 5.1, 5.2 and Appendix B.

## ROUTES THAT FAILED

- `curl https://arxiv.org/html/2602.11898v1` — **curl: (56) CONNECT tunnel failed, response 403**.
  Tool-scoped at this proxy, as the routing note predicts; the same URL answered WebFetch fully.
  Not a host block.

No search or fetch was refused. Budget used: **0 of 6 searches, 4 of 5 fetches**. No personal
identifier was placed in any URL, query string or header; Unpaywall was not used.

## BEARING ON THE LEDGER ENTRY

The source is **real, open, and reads in full**; the entry's characterisation is **partly** right.

What survives: the paper does establish **model-as-annotator substitution** as the manipulation
("We then use the annotations by different LLMs in place of the original annotations"), it does
report item-level disagreement among same-accuracy models on two reasoning benchmarks, and it does
exhibit a **sign reversal in 2 of 8 annotator models** in the political-science case study.

What does not survive, and what matters for the routing row:

- The ">80%" and the sign reversal are **two different case studies**, not one. The entry's
  "Section 5.2, effects moving by more than 80% with the sign reversing for two of the eight models"
  attributes 5.1's magnitude to 5.2.
- **16-66% is the abstract's number**; the body prints 16-76% (all models) and 16-38% (accuracy
  > 60%). An entry citing 16-66% as "item disagreement" without the comparable-accuracy qualifier,
  or treating it as the frontier-model figure, is outside the regime the body states.
- The paper **does not substitute a retired snapshot for its vendor-designated successor.** If the
  routing row is about deprecation-driven version swaps, this source is **silent** on that regime:
  it swaps across model families, and cites API volatility only to Barrie, Palmer and Spirling
  (2024).
- The paper **does not pose the share-of-published-conclusions question and prints no denominator of
  studies.** Its only printed denominator is 8 models inside one case study, and it says of itself
  "We focus on two reasoning benchmarks and two empirical applications". So the routing row cannot
  rest on this source for a *rate* at which published conclusions reverse — the source demonstrates
  that reversal is possible and names two models that produce it; it does not rate how often.

If the ledger's un-asked question is "what share of published conclusions reverse under annotator
substitution, with a denominator", this source **leaves that question open rather than answering
it** — which strengthens the gap the entry records, while weakening any numeric routing figure
sourced to it.
