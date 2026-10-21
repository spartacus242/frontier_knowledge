# VERIFY — Messing, arXiv:2604.11581v6

Checker run: fresh context, 2026-10-21. Query budget used: 5 WebFetch, 0 WebSearch (cap 5 / 6).
No mcp__hearthbot__ tool called. No personal identifier placed in any URL, header or form; Unpaywall skipped by policy.

## CLAIM

As the ENTRY (UQ-20261021-13) cites it:

> PRIOR 2 — Messing, S., "Hidden Measurement Error in LLM Pipelines Distorts Annotation, Evaluation,
> and Benchmarking", arXiv:2604.11581v6; summariser-mediated targeted read, text truncated, SI not
> read. Unit: a scored output under one configuration; endpoint: a benchmark grand mean and its
> interval; estimand: expected score over exchangeable items, prompts, replicates. Prints 43.8% of
> Var(theta-hat) for the AILuminate judge panel.

Sub-claims handed to this checker: (a) identity / front matter; (b) name the 43.8% number, its
location, its denominator and the component it is attributed to; (c) are the facets all MACHINE
configurations, with humans only as ground truth, or is there a HUMAN ANNOTATOR facet; (d) does it
form a design effect / effective sample size for a training corpus, or is its endpoint a benchmark
mean and its interval; (e) read level and dependence on the unread supplement.

## READ LEVEL

**FULL TEXT of the main paper and Appendices A–D plus E.1–E.2, summariser-mediated; TRUNCATED
mid-sentence inside E.3; appendices lettered beyond E exist only as cross-references in the text I
could reach and were NOT read.**

- Reader: WebFetch (small-model summariser) over `https://arxiv.org/pdf/2604.11581v6`, plus the abs
  page `https://arxiv.org/abs/2604.11581`.
- Last heading visible: "E.3 Scoring Method Recovery Under Judge Heterogeneity"; last readable
  words: "Getting the D-study r". The reader states the document is truncated for it.
- Appendix bodies readable: A (Quickstart Guide), B (Uncertainty Reporting in Current LLM Evaluation
  Practice), C (Full Framework: Assumptions, Derivations, and Extensions, C.1–C.9), D (G-Theory
  Connection and EMS Tables), E.1–E.2 (Monte Carlo Simulations).
- Cross-referenced only, body NOT read: G (LPM vs GLMM robustness), H (Likert vs pairwise scoring),
  I (political-affinity demo, pilot validation, propaganda audit), J (MMLU design details),
  L (pilot thresholds, reporting checklist), M (DSL connection), N (nonlinear temperature effects),
  O (model identifiers and prompt texts), P (SUT×judge interactions), R (Arena design details).
  F, K and Q were not mentioned at all in the reachable text.
- The paper uses the phrase "SI Appendix" (and not "Supplementary Information"); e.g. "Formal
  assumptions and Monte Carlo validation appear in SI Appendix."

This is a BETTER read level than the entry records ("text truncated, SI not read"): the entry's
truncation sat before the appendices, whereas this read reaches the end of C and D, which is where
the 43.8% figure is re-derived.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity and front matter, from the title page

- Title: "Hidden Measurement Error in LLM Pipelines Distorts Annotation, Evaluation, and Benchmarking"
- Author as printed: "Solomon Messing", with a corresponding-author asterisk. Single author.
- Affiliation lines as printed: "Center for Social Media, AI, and Politics, New York University"
  and "ML Commons". **The entry records no affiliation; ML Commons is the maintainer of AILuminate,
  which is the paper's first empirical demonstration — worth carrying in the entry.**
- No email or ORCID printed.
- Footer: "Preprint. Under review." arXiv stamp: "arXiv:2604.11581v6 [cs.CL] 13 May 2026."
- abs page: Submitted 2026-04-13; this version v6, 2026-05-13; Subjects: cs.CL; no DOI, no journal
  reference, no Comments field.
- Type: a PRIMARY METHODOLOGICAL study introducing a framework ("Total Evaluation Error", TEE) and
  validating it on four empirical demonstrations. Not a review, not a position paper, not a
  protocol. Appendix A is a quickstart guide, which is the only tutorial-shaped part.

### Abstract — NOT reconstructible; four isolated fragments only

Two separate bulk-transcription requests were refused by the summariser (see ROUTES THAT FAILED), so
there is **no verified consecutive reconstruction of the abstract**. The following are isolated
verbatim fragments with UNMEASURED gaps between them. They are NOT assembled and must not be quoted
as a continuous passage.

- Opening (first 125 chars): "LLM evaluations drive which models get deployed, what safety standards
  get adopted, which research conclusions get published,"
- "Yet standard confidence intervals ignore variability from judge model choice, model temperature,
  and prompt phrasing"
- "producing under-coverage that worsens with more data"
- "The omitted variance can shift results enough to reverse conclusions"
- Closing (last 125 chars): "the answer key at equivalent cost, and raises per-match agreement with
  human votes by 7.9 percentage points on Chatbot Arena."

Summariser-paraphrased headline figures from the abstract (NOT quotations): naive standard errors
40–60% smaller than TEE-corrected ones; TEE-corrected 95% intervals hold coverage on Chatbot Arena
while naive ones do not as N grows; TEE-guided design halves MMLU estimation error at equal cost;
+7.9 percentage points per-match agreement with human votes (this last one IS in the quoted closing
fragment).

### (b) NAME THE NUMBER — 43.8%

**The number is 43.8%. It is a share of Var(θ̂) — the variance of the ESTIMATOR of the AILuminate
safe-response mean — and it is attributed to the JUDGE-MODEL component, σ²_λ (the "judge panel"),
evaluated at a stated operational design.**

Printed in five places:

1. **Section 3 (Framework), introductory paragraph** — "the choice of judge panel contributes 43.8%
   of Var(ˆθ) at the operational design".
2. **Figure 3(a), as a bar label** — "43.8%" labels the σ²_λ (judge model) bar in the panel
   "AILuminate safety: Var(theta_hat) decomposition". Caption line: "Judge-model variance dominates
   the decomposition in (a)."
3. **Section 4.1 ("Safety: Judge Disagreement Dominates")** — reconstruction from TWO consecutive
   fragments, junction verified by the repeated word "contributing":
   > "The decomposition (Figure 3(a)) identifies the judge panel itself as the dominant lever,
   > contributing 43.8% of Var(ˆθ) at the operational design (N=141, V =5, M=3, H=3, R=8)."
   LABEL: reconstruction from 2 fragments. Word-count check: my reconstruction is 27
   whitespace-delimited tokens; the reader stated 26. See DEFECTS.
4. **Appendix C.5 (Per-Observation Variance Decomposition)** — the judge-model term is "0.8% of
   per-observation variance but 43.8% of Var(ˆθ)".
5. **Appendix C.8 (D-Study Formulas: Full Derivation)** — "judge-model design sensitivity dominates
   at 43.8% of Var(ˆθ)".

The nearest confusable figure is **43.4% for MMLU item heterogeneity** (Section 4.2) — a different
benchmark and a different component.

So: the paper MEASURES and PRINTS this quantity, with a named denominator, a named component and a
stated design. This is not a defined-but-unmeasured quantity.

### (c) THE FACET QUESTION — the facets are all machine configurations plus item/category

Table 2 caption, truncated at the quotation cap: "Factors in the TEE data-generating process (DGP),
classified as fixed or random. Random factors (item, prompt [...]"

Table 2 row labels, as printed:

- Item
- Category
- Prompt variant
- Temperature
- Model
- Scoring method
- Replication

Equation 1 (data-generating process) as served — **flagged as apparently cut, see DEFECTS**:

> "Y(r)ivhm = µ + αi + ϕv + τh + λm + (αϕ)iv + (ατ )ih + (ϕτ )vh + (αλ)im + (ϕλ)vm"

Component symbols named across Eq. 1, Table 2 and Figure 3: item (α_i), prompt variant (ϕ_v),
temperature (τ_h), model (λ_m), replication (ρ), cell-level error (ε), category (κ, δ), scoring
method (fixed). Interactions: item×prompt, item×temperature, prompt×temperature, item×model,
prompt×model. In the safety demonstration the model facet IS the "judge model".

**There is NO human-annotator and NO human-rater facet in the decomposition.** Humans enter only
outside the variance model:

- as ground truth — Section 4: "pairwise model comparison validated against human votes";
- as a validation baseline — Section 4.3 measures "agreement with the individual human vote";
- as a consensus baseline — Section 5 cites the "9-rater human consensus" in the propaganda
  demonstration;
- Section 4.4 mentions voter sampling as a source of Arena leaderboard noise.

Asked for the most relevant Section 4/5 sentence on human raters, the reader returned: "Recruiting
millions of human voters is slow and expensive, so labs increasingly use LLM judges to score
benchmark items."

**The one place the word "rater" IS a facet name is Table 5, the G-theory mapping, and there it
denotes the machine:** the row reads "Facet (rater) → Model/judge m". G-theory's rater facet is
mapped onto the LLM judge, not onto a human annotator.

### (d) ESTIMAND — a universe score for a benchmark, conditional on fixed design choices

Equation 5 (Appendix C.2) as printed (bracket glyphs mangled by PDF extraction, reproduced as
served and not corrected):

> "θhm = Ei,v,rhY(r) ivhmi = µ + τh + λm (5)"

Appendix C.2 describes it as "the expected value of the scored output conditional on the
researcher's fixed design choices", and identifies it as the "universe score" in generalizability-
theory terms. The expectation averages over items, prompt phrasings and replications, **conditional
on temperature h and model m, which are the FIXED factors.**

Endpoint: the benchmark mean and the width and coverage of its interval. Reported machinery:
variance components, shares of Var(θ̂), D-study SE projections (Eq. 3), per-category SE reductions,
coverage curves (Figures 1, 4, 5) and a cost frontier (Figure 3(b)).

**Design effect / effective sample size / ICC for a training or annotation corpus: NONE FOUND.**
The reader, asked directly, answered no: the paper reports no computed design effect, no N_eff and
no ICC. The only appearance of ICC is a reference-list entry for Nakagawa and Schielzeth (2010) —
a citation, not a computed quantity. Training on Arena labels appears only as motivation in
Section 4.3. This absence is bounded by the read level above (appendices G–R unread).

Structure of the paper as reached: 1 Introduction; 2 Related Work; 3 Framework (3.1 Data-Generating
Process; 3.2 Variance Decomposition; 3.3 D-Study Projections); 4 Empirical Demonstrations (4.1
Safety; 4.2 MMLU; 4.3 Chatbot Arena; 4.4 Single-Configuration Benchmarks); 5 Discussion;
6 Limitations; 7 Conclusion; Acknowledgments; AI disclosure; References; Appendices A–E (see above).
Tables 1–7; Figures 1–8. Table 7 is "D-study projection bias under five scenarios"; Table 6 is
"Expected mean squares for the balanced mixed design"; Table 5 is the G-theory/TEE mapping.

## REGIME

- **Population / sampling frame:** benchmark items drawn from existing evaluation suites —
  AILuminate (safety), MMLU, LMArena/Chatbot Arena — and prompt-variant/temperature/replicate
  configurations over them.
- **Unit of analysis:** one scored output Y(r)_ivhm, i.e. one item under one prompt variant, one
  temperature, one model and one replicate. In the judge layer, a (prompt, SUT-response) pair; in
  Arena, a match.
- **Operating condition for the 43.8%:** the AILuminate safety demonstration at the operational
  design **N=141 items, V=5 prompt variants, M=3 models, H=3 temperatures, R=8 replicates**, with
  panels of LLM judges. The qualifier is printed in the same sentence as the number.
- **Instrument:** a balanced mixed-model variance decomposition (REML; EMS tables in Appendix D)
  plus a generalizability-theory D-study projection.
- **Threshold / metric:** share of Var(θ̂); interval coverage and half-width.
- **Category:** the PRECISION of a benchmark estimate under a researcher's design choices.
- **Estimand:** θ_hm, the universe score, conditional on the fixed temperature and model.

**Does the claim handed to this checker sit inside that regime?** For sub-claims (a)–(d) as
formulated, yes — each is a description of this paper and each is borne out. For the ENTRY's larger
use of the source as a nearest prior formulation about human-annotator variance in an RLHF
preference corpus, **NO: the paper is silent in that regime.** The modelled facet is the LLM judge
(and the item, prompt, temperature, replicate and scoring method); the human appears only as a
ground-truth or consensus comparator; and the endpoint is the precision of an evaluation mean, not
the effective sample size of a label corpus used to fit a reward model. The entry's own "Candidate
OUTSIDE" determination is CONFIRMED by the source.

Two regime boundaries that must travel with the 43.8% or it becomes false:

1. **It is a share of Var(θ̂), not of raw score variance.** Appendix C.5 prints the contrast
   explicitly: the same judge-model term is "0.8% of per-observation variance but 43.8% of Var(ˆθ)".
   Restating it as "judge disagreement accounts for ~44% of the variance in safety scores" is a
   regime error by a factor of about 55.
2. **It is a value at one stated design.** N=141, V=5, M=3, H=3, R=8. The share of Var(θ̂) carried
   by a facet moves with the number of levels sampled per facet, which is the whole point of a
   D-study; the figure is not a design-free property of LLM judges.

## DEFECTS FOUND

1. **The abstract is not reconstructible on this route.** Two bulk verbatim-transcription requests
   were refused by the summariser on copyright grounds, and the fragments it did return have
   acknowledged, unmeasured gaps (it noted "citation brackets omitted" between two of them). I have
   four isolated ≤125-char fragments and no verified junction, so I did not assemble them. Any
   entry text quoting the abstract as continuous prose would be unsupported by this read.
2. **Equation 1 as served appears CUT and was not completed.** The returned line ends at "(ϕλ)vm"
   with no error term and no replicate term, while the same reader, describing Eq. 1 in prose,
   said it includes "a cell-level error term, and within-cell replicate noise", and Table 2 lists
   Replication as a factor. The printed equation therefore almost certainly continues past what I
   was served. I have NOT inferred the missing terms. Treat the quoted Eq. 1 as a prefix.
3. **One-token discrepancy in the 43.8% sentence reconstruction.** My two-fragment reconstruction
   counts 27 whitespace-delimited tokens; the reader stated the full sentence is 26. The junction
   overlap ("contributing") is verified, so the sentence boundary is sound, but the count check does
   not close exactly — most likely from the extraction's spacing inside "V =5," or "(N=141,". Flagged
   rather than silently accepted.
4. **The entry's estimand phrase drops the conditionality.** The entry reads "estimand: expected
   score over exchangeable items, prompts, replicates". Equation 5 is θ_hm = µ + τ_h + λ_m, i.e. the
   expectation is taken over items, prompts and replicates **conditional on the chosen temperature
   and model, which are fixed**. µ alone is the grand mean; θ_hm is not. The entry's companion phrase
   "endpoint: a benchmark grand mean and its interval" is therefore loose in the same direction:
   the target is a universe score for a fixed design cell. This is a precision defect, not a
   contradiction.
5. **The 43.8% as recorded in the entry is denominated correctly but stripped of its design.** The
   entry says "Prints 43.8% of Var(theta-hat) for the AILuminate judge panel" — the denominator is
   right, which is the thing most often got wrong. Missing: the operational design
   (N=141, V=5, M=3, H=3, R=8) and the Appendix C.5 contrast with 0.8% of per-observation variance.
   Without those the figure is detachable into a false regime (see REGIME, points 1 and 2).
6. **A title-level trap.** The paper's own title contains the word "Annotation", and "annotator"
   appears in the Introduction, Related Work (including a discussion of Camuffo et al.'s annotation-
   variance taxonomy), Section 5 (LLM-annotated research) and Appendix B (LLM-as-annotator studies).
   Separately, G-theory's facet name "rater" appears in Table 5 — mapped to "Model/judge m". Either
   could be misread as evidence of a human-annotator facet. There is none. A reader who cites this
   paper from its title or from Table 5 will get the facet question wrong.
7. **Claims of ABSENCE here are bounded, and must stay bounded.** "No design effect, no N_eff, no
   ICC, no human-annotator facet" is established for the main body and Appendices A–D and E.1–E.2.
   Appendices G–R (cross-referenced: LPM/GLMM, Likert/pairwise, political-affinity demo, MMLU
   design, pilot thresholds and reporting checklist, DSL connection, nonlinear temperature, model
   identifiers and prompt texts, SUT×judge interactions, Arena design) were NOT read. These are
   COULD-NOT-READ regions on this route, not confirmed absences.
8. **Not re-derived here:** the entry's "D-study bias (<= 8%)" and "top-intervention accuracy (98%)"
   were not checked in this run. Table 7 ("D-study projection bias under five scenarios") exists and
   is the plausible home of the first; neither number was quoted back to me. Carry them as
   unverified by this checker, not as confirmed.
9. **Front matter addition, not a defect of the claim:** the entry omits the affiliations, one of
   which is ML Commons, the maintainer of the AILuminate benchmark that supplies the 43.8% figure.
   Record it so the entry does not later treat that demonstration as third-party.

## ROUTES THAT FAILED

- `https://arxiv.org/pdf/2604.11581v6`, bulk verbatim transcription (abstract, Eq. 1, Table 2
  caption and rows, the 43.8% sentence with neighbours, Figure 3 caption, Eq. 5 with neighbours,
  every annotator/rater sentence), requested as ordered consecutive ≤100-char fragments —
  **REFUSED** by the WebFetch summariser: it declined on the ground that this "would mean copying
  most of the paper" and returned a paraphrase instead. Tool-scoped refusal, recorded and not
  circumvented; the same reader offered and then honoured a short-excerpt route (≤125 chars each),
  which is how the quotations above were obtained.
- `https://arxiv.org/abs/2604.11581`, segmented verbatim abstract requested as ≤110-char consecutive
  fragments — **REFUSED**: "the page's text is copyrighted and my quotes are limited to 125
  characters." Metadata lines were served.
- NOT ATTEMPTED, by budget or policy: `export.arxiv.org/api/query` (adversary 1's log for this
  entry records ROBOTS_DISALLOWED on that endpoint, so it is a known-refused route); ar5iv or the
  arXiv HTML rendering (budget exhausted at 5 fetches); Unpaywall (skipped by standing policy — it
  requires a contact address); any curl against arxiv.org (not needed; WebFetch served the PDF).
- No host block was encountered. Both failures above are summariser-scoped refusals on the same
  URL that served content on other prompts, and must not be recorded as the source being
  unavailable.

## BEARING ON THE LEDGER ENTRY

1. **arXiv:2604.11581 is REAL, is v6, and is now independently opened.** Promotion condition 2 of
   adversary 1 ("confirm arXiv:2606.27578, 2604.11581, 2607.16195 by WebFetch of their abs pages")
   is **satisfied for 2604.11581**: abs page served, front matter read, title, single author,
   v6/2026-05-13, submitted 2026-04-13, cs.CL, no DOI. The read hole named in the entry's promotion
   requirements for this source is CLOSED, and closed at a better read level than recorded — main
   body plus Appendices A–D and E.1–E.2, not a truncated targeted read.
2. **The number holds as recorded.** "43.8% of Var(theta-hat) for the AILuminate judge panel" is
   printed, five times, with Var(θ̂) as the denominator and the judge-model component σ²_λ as the
   attribution. Add the design (N=141, V=5, M=3, H=3, R=8) and the Appendix C.5 contrast (0.8% of
   per-observation variance) to the entry so the figure cannot travel without them.
3. **The facet question resolves AGAINST any human-annotator reading.** Every facet in Table 2 and
   Eq. 1 is a machine configuration or a benchmark item/category: Item, Category, Prompt variant,
   Temperature, Model, Scoring method, Replication. Humans are ground truth, a per-vote agreement
   baseline and a 9-rater consensus comparator — never a modelled facet. Table 5 maps G-theory's
   "rater" facet to "Model/judge m". The entry's "Candidate OUTSIDE" judgement is CONFIRMED.
4. **The endpoint question resolves AGAINST a corpus design effect.** No Deff, no N_eff, no ICC is
   computed anywhere in what was read; ICC survives only as a bibliography entry (Nakagawa and
   Schielzeth 2010). The endpoint is θ_hm, the universe score, and the coverage and half-width of
   its interval. So the entry may continue to treat this paper as prior art on *evaluation*
   precision and NOT as prior art on the effective sample size of a human-labelled preference
   corpus — which is the gap the entry's question is about.
5. **Two wording fixes for the entry.** (i) Write the estimand as "the universe score θ_hm =
   µ + τ_h + λ_m: the expected score over exchangeable items, prompt variants and replicates,
   *conditional on the fixed temperature and judge model*" rather than as a "benchmark grand mean".
   (ii) Add the affiliation line, including ML Commons, since AILuminate is an ML Commons benchmark.
6. **What this check does NOT license.** It does not confirm the entry's "<= 8%" D-study bias or
   "98%" top-intervention accuracy; it does not license any statement about appendices G–R or the SI;
   and it does not license quoting the abstract as continuous prose. Those remain open at this read
   level.
