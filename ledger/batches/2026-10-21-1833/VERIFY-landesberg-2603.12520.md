# VERIFY — Landesberg, arXiv:2603.12520

Checker: fresh context. Budget used: 1 WebSearch, 5 WebFetch (cap reached). No mcp__hearthbot__ calls.

## CLAIM

As the ENTRY cites it: Eddie Landesberg, "When LLM Judge Scores Look Good but Best-of-N Decisions Fail",
arXiv:2603.12520 (2026). Recorded as read in full at Gate 2 (chars 0–100,000 of 101,821), re-opened by
adversary 2. Sub-claims checked: (a) identity/front matter; (b) Table 3 and Table 12 variance numbers,
captions as served, and the DENOMINATOR of the percentages; (c) the instrument — reward model vs
absolute-rubric LLM judge, the string "no additional Bradley-Terry refit", what the oracle is;
(d) the load-bearing absence — a between-prompt variance share for a PAIRWISE-TRAINED REWARD MODEL, and
any mention of Bradley-Terry identifiability / shift invariance / within-prompt centring; (e) Appendix C
strings and whether the margin is within- or across-prompt; (f) regime.

## READ LEVEL

**Full text, chars 0–100,000 of 101,821 — the same window the entry records at Gate 2. The final 1,821
characters were NOT read** (tail of Appendix Q and the reference list); every one of my four PDF fetches
returned the same truncation notice, and my fetch cap was exhausted before I could read the tail with
`offset: 100000`. Nothing I report below depends on that tail, but a string said here to be absent is
absent **from chars 0–100,000**, not from the whole file.

Routes that worked: `https://arxiv.org/abs/2603.12520` (front matter), `https://arxiv.org/pdf/2603.12520`
and `.../pdf/2603.12520v1` (full text, via WebFetch's summariser). All quotations below are as the
summariser served them; long ones were requested as ordered consecutive ≤100-character segments and are
labelled as reconstructions with the fragment count.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) IDENTITY — confirmed, front matter as served

- Title: "When LLM Judge Scores Look Good but Best-of-N Decisions Fail" — exactly as recorded.
- Author line: **Eddie Landesberg**, single author — as recorded.
- Identifier: arXiv:2603.12520v1, submitted **12 March 2026**; subjects cs.LG, cs.AI, cs.CL.
- The abs page serves normally; this is not a stub or a withdrawal.
- Abstract: the summariser declined to reproduce it verbatim and paraphrased it. Paraphrased headline
  figures: 5,000-prompt best-of-4 benchmark from Chatbot Arena; global r = 0.47; recovery 21.0%;
  within-prompt r = 0.27; ties in "67% of pairwise comparisons"; matched-pair best-of-2 audit raising
  recovery from 21.1% to 61.2% with explicit pairwise judging. **The 67% tie figure is unverified** (see
  DEFECTS, item 6): I have it only from a paraphrase, and Table 4 prints 59.8% for the pointwise tie rate
  on the matched-pair set.
- Type of source: **primary study** — a single-author empirical measurement paper with a large appendix
  (29 numbered tables, Appendices A–Q), not a review, protocol, guideline or editorial. Its headline
  claims are its own measurements, not attributions to others. PPE-MATH is the one dataset it takes from
  another group: "a 512-prompt MATH/correctness slice from the PPE release introduced by Frick et al.
  [11]" (Appendix B.1).

### (b) THE NUMBERS, AND WHERE THEY ARE PRINTED

**Table 3 exists and prints exactly the recorded numbers.** Caption as served, reconstruction from **2
consecutive fragments**, junction verified on "within-context " + "components":

> "Table 3: Variance decomposition of judge and oracle scores into between-context and within-context "
> "components (prompt is the context in this dataset)."

The recorded caption is therefore **verbatim correct**.

Table 3, columns `Component | Judge | Oracle`:

| Component | Judge | Oracle |
|---|---|---|
| Between-context variance (prompt-level) | 74% | 81% |
| Within-context variance (candidate-level) | 26% | 19% |

Row labels and values match the record exactly. The same four percentages are reprinted in an
**Appendix L** table under the heading "Empirical Variance Decomposition (This Paper)".

**Table 12 exists**, caption "Comparison of evaluation regimes", columns `Our Study | PPE-MATH`:

| Metric | Our Study | PPE-MATH |
|---|---|---|
| Global r | 0.47 | 0.38 |
| Within-prompt r | 0.27 | 0.30 |
| Gap (inflation) | 43% | 22% |
| Recovery | 21.0% | 30% |
| Reference-label variance: between-context | 81% | 30% |
| Reference-label variance: within-context | 19% | 70% |

So the recorded "Table 12 for PPE-MATH giving 30%/70%" is **correct but needs its row label carried**: the
30%/70% split is for the **reference label (oracle) only**, not for the judge. Table 12 prints **no**
judge-side variance split for PPE-MATH. Note also that "30%" appears twice in the PPE-MATH column — once
as Recovery and once as the between-context variance share — so a bare "30%" lifted from this table is
ambiguous.

**DENOMINATOR — the real gap.** The paper **prints the percentages and never states their denominator or
their estimator.** Two independent reads agreed:
- No body sentence states the percentages at all. The nearest sentence, Section 5.2, carries no numbers:
  "Most variance is context-level (prompt in this dataset)."
- Appendix L reprints the four numbers with no computation described.
- The variance-components model in Eqs. 3–4 *implies* a prompt-mean vs residual split, but the paper never
  says over what set the variance is pooled, whether the shares are of the total variance of that score
  across all 20,000 prompt–candidate rows, whether candidate counts are balanced in the pooling, or which
  estimator (ANOVA / REML / plug-in) produced them.

In the ledger's own vocabulary: on the between/within shares the paper **MEASURES and PRINTS the two
numbers per score** (Table 3, repeated in Appendix L) but **DEFINES neither the estimand nor the
estimator**. The columns sum to 100%, which is the only internal evidence that each column is a share of
that score's own total variance. Any statement of the form "74% of the judge's variance across the
benchmark" is **the reader's reading of an undefined denominator**, not the paper's stated one.

No uncertainty is carried on any of the four percentages: Table 3 prints bare integers, no CI, no SE.
(The paper does bootstrap elsewhere — "Bootstrap CIs resample prompts as the clusters" (Appendix F) — but
not, as served, on the variance decomposition.)

### (c) THE INSTRUMENT

**The scorer is an absolute-rubric LLM judge, not a reward model.**

- Judge model and temperature: **GPT-5 (gpt-5-2025-08-07) at temperature 0**, with "0–100 outputs".
- Scale sentence as served: "Rate the quality of the following response to a user query on a scale from 0
  to 100."
- The pointwise prompt is an **absolute rubric** — helpfulness, accuracy, clarity, completeness, **no
  reference answer**. A separate **pairwise** prompt (A / B / TIE plus a 1–5 confidence) is used for
  Table 4 and the calibration experiments.
- Framing sentence: "Large language models are often used as judges to score candidate responses."
- Reward models appear **only** in the introduction, related work and discussion, as background. No reward
  model is run anywhere in the paper.

**The oracle is a stored upstream scalar taken as given.** Defining sentence as served: "Each released
response row carries an already-normalized reference score." The paper does not describe how that score
was produced, and **never calls it a Bradley-Terry reward model, or a reward model of any kind.**

**"no additional Bradley-Terry refit" — the string is present, once, in Section 4 (Data).** Full sentence,
reconstruction from **3 consecutive fragments**:

> "This is the upstream response-level comparison target bundled with the released rows;"
> "in this paper, we take that released scalar as given and use it directly as O_{x,i}"
> ", with no additional Bradley-Terry refit, vote reconstruction, or post-hoc relabeling."

Read the grammar on both sides of the cut: the clause is a **disclaimer about the paper's own procedure**.
It tells you (i) the upstream scalar is a *comparison target*, so something Bradley-Terry-shaped plausibly
sits behind it upstream, and (ii) **this paper did not fit or refit any such model**. It is not a
characterisation of the oracle as a Bradley-Terry reward model, and it is not a claim about what the
upstream pipeline did. **This sentence is the only occurrence of "Bradley-Terry" in chars 0–100,000**, and
"BT" never appears as an abbreviation.

### (d) THE LOAD-BEARING ABSENCE

- **A between-prompt variance share for a pairwise-trained reward model: absent.** The paper publishes
  exactly two between-context shares, 74% and 81%, for (i) a GPT-5 absolute 0–100 rubric judge and (ii) an
  upstream already-normalized reference scalar used as given. **No pairwise-trained reward model is
  evaluated anywhere in the paper** — "All pairwise results come from LLM judges (GPT-5 and
  GPT-4.1-mini) prompted to compare two responses." Table 4's pairwise arm is a *prompted* pairwise LLM
  judge, e.g. "Pairwise judging reduces ties (3.9% vs 59.8%)", not a trained reward model.
- **Bradley-Terry identifiability: not discussed.** Absent.
- **Shift / translation invariance: not named.** The nearest thing is **Lemma 6 (Appendix M)**, which
  covers **strictly monotone transforms** preserving the argmax; the paper never calls this shift
  invariance, and a monotone-transform lemma is a different statement from invariance of a BT fit under a
  per-prompt additive shift.
- **Centring / normalising scores within a prompt: not proposed as a method.** Per-prompt mean removal
  appears only as an **analysis step** used to compute the within-prompt correlation: "After removing
  context-level baseline effects, this measures alignment on relative candidate quality." Per-prompt mean
  subtraction appears in that same analytic role and nowhere else.

So the absence the entry leans on is **real and plain**, and I verified each string on its own before
deciding what it supports. Two cautions, both from the ledger's own defect list:
- **Silence is not a prohibition.** The paper not discussing BT identifiability or within-prompt centring
  is not the paper saying they do not matter.
- **A source noting the absence of a different thing is not a flag of your gap.** What the paper *does*
  say is missing from the literature is per-prompt reporting of judge audits (within-prompt signal, tie
  rates, recovery). It does **not** note any absence concerning reward models, BT identifiability or
  score centring.

### (e) APPENDIX C — both strings are verbatim present

Both queried strings were searched for as words, before deciding what they support, and both are present
in **Appendix C.1**. Surrounding text as served (segments; the target sentence is a **2-fragment**
reconstruction):

> Preceding: "We test this by comparing margin-based allocation (query lowest-margin prompts)"
> "against random allocation at fixed oracle budgets."
> Target: "Margin-based routing captures almost none of the available gain"
> "(headroom $\approx 92-101\%$ )."
> Following: "In this setting, random allocation is essentially as good as margin-only routing."

Grammar at the cut, which matters here: the recorded string stops **immediately before a parenthetical
that quantifies it** — "(headroom ≈ 92–101%)". Quoting the string without that parenthetical loses the
paper's own figure, and "In this setting," is likewise load-bearing on the second string. Neither cut
reverses the sense, but both drop the qualifier.

**Margin: computed WITHIN a prompt, then compared ACROSS prompts.** The operational definition is given in
a **Table 22 footnote**, not in Appendix C.1, which does not restate it: "the top-1 margin (max score –
second max) is zero 99% of the time." So the margin is the gap between the best and second-best judge
score **inside one prompt's candidate set**; routing then ranks prompts by that within-prompt quantity to
decide which prompts to spend oracle budget on.

That footnote also supplies the mechanism, and it should travel with the Appendix C quotations: on this
instrument the within-prompt top-1 margin is **degenerate — zero 99% of the time** — because a coarse
0–100 pointwise rubric ties. Margin routing failing here is evidence about a **near-always-zero** margin
on a coarse absolute scale, not evidence that a within-prompt margin is uninformative in general.

Supporting tables as served:

Table 17 (Budget | Random | Margin | Gain-Optimal | Headroom) — "Proxy oracle routing results:
margin-based vs random allocation":
- 10%: 0.785, 0.785, 0.814, 101%
- 25%: 0.795, 0.796, 0.834, 97%
- 50%: 0.812, 0.814, 0.845, 92%

Table 24, variance ratio vs random, 200 simulations (Budget | Random | Margin | Optimal):
- 25%: 1.00, 1.20, 0.55
- 50%: 1.00, 2.00, 0.23

Appendix C's closing recommendation (C.5) is **about uncertainty, not routing** — 2-fragment
reconstruction: "Point estimates hide uncertainty that can be recovered" / "with explicit elicitation or
resampling."

### (f) REGIME

- **Prompt set:** "a 5,000-prompt sample drawn from Chatbot Arena prompts and response rows" (Section 4).
  The paper does **not** describe how the sample was filtered or drawn. Reference labels are "the stored
  upstream response-level scores" (`metadata.oracle_label`), used as given.
- **Candidate-generating models — a narrow, deliberately heterogeneous mix, all Llama-family:** per prompt,
  "two from the same Llama-3.3-70B helpful policy", one from the same 70B model "with a different system
  prompt", one from "a larger Llama-405B helpful policy", and one "deliberately bad 70B control". The
  best-of-4 analysis uses the four **non-control** candidates.
- The paper itself marks the contrast with true single-policy best-of-N: "a within-policy fresh-draw audit
  (multiple samples from one generator)" (Section 2) — but that pilot is **one generator, Llama-3.3-70B,
  on 24 prompts** (Appendix B.3, Table 14).
- **Unit of analysis:** the **prompt**, with four candidates nested within it. N = 5,000 prompts
  (≈20,000 candidate responses) for the main result. "Bootstrap CIs resample prompts as the clusters"
  (Appendix F).
- **Endpoint / estimand:** recovery, Eq. 1 —
  `Recovery = (E[O_judge] − E[O_random]) / (E[O_oracle] − E[O_random])`, with the defining gloss
  "Recovery = 0% means judge is no better than random; 100% means judge matches oracle." (Section 3.2).
  **Comparators: random selection (floor) and oracle-best selection (ceiling).**
- **Other regimes in the paper:** 7,000 matched best-of-2 pairs (Table 4); 3,741 prompts
  (label-strategy ablation, Table 5); a 500-prompt shared sample (multi-judge, Tables 8 and 28); a
  512-prompt PPE-MATH slice (Tables 12 and 15); 24 prompts (within-policy pilot, Table 14).

## DEFECTS FOUND

1. **(b) The denominator is not in the source.** Table 3 and Appendix L print 74/26 and 81/19 as bare
   integers; the paper states **no estimator and no pooling set**, and no body sentence states the
   percentages at all. Any entry wording that attaches a specific denominator ("of total judge-score
   variance across the benchmark", "of variance pooled over prompt–candidate rows") is supplying what the
   paper leaves undefined. The columns summing to 100% is the only internal clue. **No uncertainty is
   printed on any of the four shares.**
2. **(c)/(d) Instrument mismatch — the headline risk.** The 74% is a **GPT-5 absolute 0–100 rubric judge**;
   the 81% is an **upstream already-normalized reference scalar taken as given**. Neither is a
   pairwise-trained reward model, and the paper never calls the oracle one. If the ledger entry treats
   either share as a reward model's between-prompt variance, or treats the paper as evidence about
   Bradley-Terry score behaviour, it is **outside the regime the paper measures in** — a cardinal 0–100
   rubric has no per-prompt additive gauge freedom for a shift-invariance argument to bite on.
3. **(c) The one Bradley-Terry sentence is a procedural disclaimer, and it is easy to misread in the
   direction the entry needs.** "with no additional Bradley-Terry refit" says *this paper fitted nothing*;
   it is not a statement that the oracle is a BT reward model, and it is not a claim about the upstream
   pipeline. It is the sole occurrence of the term in chars 0–100,000.
4. **(b) Table 12's 30%/70% is a REFERENCE-LABEL row, and "30%" is ambiguous in that column.** Table 12
   prints no judge-side split for PPE-MATH, and the same column prints 30% as Recovery. A bare "30%/70%"
   citation needs the row label "Reference-label variance: between/within-context" to be safe.
5. **(e) Both Appendix C strings are verbatim, but each is cut immediately before its qualifier** —
   "(headroom ≈ 92–101%)" on the first, and "In this setting," opening the second. More consequentially,
   **the mechanism sits in a Table 22 footnote, not in Appendix C**: the within-prompt top-1 margin is
   "zero 99% of the time". Citing "margin-based routing captures almost none of the available gain" as a
   general result about margin-based routing, rather than about a **near-always-zero margin from a coarse
   pointwise 0–100 judge**, is a regime over-reach. Appendix C.5's own closing line is about uncertainty
   elicitation, not routing.
6. **(a) An unresolved internal number I could not adjudicate.** The abstract (paraphrased, not read
   verbatim) gives ties in "67% of pairwise comparisons"; Table 4 prints the pointwise tie rate as 59.8%
   on the 7,000 matched best-of-2 pairs. These are plausibly different denominators (main benchmark vs
   matched-pair audit), but I spent my fetch cap and **did not verify the abstract verbatim**. Flagged as
   unchecked, not as an error.
7. **(f) Generator-mix artefact.** The between/within split is measured on a candidate set that
   **deliberately contains a bad control and a larger model**, with two of five draws from one policy.
   Between-prompt vs within-prompt shares are a property of that mix. The paper itself distinguishes this
   from within-policy fresh draws and backs the distinction with only **24 prompts**. A 74%/26% figure
   used as a general property of best-of-N candidate sets travels outside its regime.
8. **Extraction gap, not a source defect:** the Table 2 caption did not survive PDF-to-text extraction;
   its values (r = 0.471, within r = 0.267, recovery 21.0%) appear in the text under Section 5.1.

## ROUTES THAT FAILED

- `curl -sSL https://arxiv.org/pdf/2603.12520v1` → `curl: (56) CONNECT tunnel failed, response 403`.
  **Tool-scoped, not a host block**, exactly as the routing brief predicted: the same host answered
  WebFetch four times in this session. No conclusion about arxiv.org availability is drawn from it. The
  proxy was not probed further.
- `WebSearch "arXiv 2603.12520"` returned no record of the paper — only daily arXiv listing mirrors and
  unrelated bioRxiv pages. **This is a search-index miss, not a NOT FOUND**: the abs page serves the paper
  normally. Recorded so nobody re-spends a query on it.
- The abs-page read **would not reproduce the abstract verbatim** (summariser declined), so the abstract is
  paraphrase-level only.
- **Not attempted, cap exhausted:** `offset: 100000` on the PDF, which would have read the final 1,821
  characters. Also not attempted: an HTML (`arxiv.org/html/...` / ar5iv) route that might have given
  cleaner table markup and a verbatim abstract.

## BEARING ON THE LEDGER ENTRY

**Claim status: mostly holds, with one scope correction that bears on the entry's load-bearing point.**

Holds as recorded: the identifier, title and single-author line (a); the existence, caption, row labels and
all six numbers of Table 3 and Table 12 (b); and both Appendix C strings verbatim (e).

Three corrections the entry should carry:

1. **The absence in (d) is real and is the entry's strongest footing.** The paper publishes **no**
   between-prompt variance share for a pairwise-trained reward model, evaluates no reward model at all,
   and nowhere mentions Bradley-Terry identifiability, shift invariance, or within-prompt centring as a
   method. Stated plainly, that stands.
2. **But the 74% and 81% cannot be used as the reward-model side of that gap.** They belong to an absolute
   0–100 GPT-5 rubric judge and to an upstream normalized reference scalar used as given. The paper's only
   Bradley-Terry sentence **declines to refit** such a model. An entry that reads the 81% as a BT reward
   model's between-prompt share, or that reads the paper as evidence about BT gauge freedom, is using a
   result **outside the regime it was established in** — and on a cardinal rubric scale the invariance
   argument has nothing to act on.
3. **The (b) gap is a definition gap, not a missing measurement.** The paper **prints** the quantity, in
   Table 3 and again in Appendix L; what it never prints is the **denominator or the estimator**. If the
   entry's un-asked question is "what is the denominator of the 74%?", the answer is: the source does not
   say, and the entry should say so in those words rather than supplying one.

Smaller carries: label Table 12's 30%/70% as the **reference-label** row; keep "(headroom ≈ 92–101%)" and
"In this setting," attached to the Appendix C quotations; and keep the Table 22 footnote fact — the
within-prompt top-1 margin is **zero 99% of the time** — next to any use of the routing-failure result.
Finally, the read level: **chars 0–100,000 of 101,821 on both the Gate 2 read and mine; the last 1,821
characters remain unread by anyone on this entry.**
