# VERIFY — PEBS, arXiv:2606.27578

Checker: fresh-context, 2026-10-21. Budget used: 0 searches, 3 WebFetch reads (cap 6/5), plus one
non-budget curl attempt that failed tool-scoped.

## CLAIM

Source as the ENTRY cites it: Raj, A., "PEBS: Per-rater Empirical-Bayes Shrinkage for RLHF
Reward-Model Calibration", arXiv:2606.27578 (Pluralistic Alignment Workshop at ICML 2026).

Claims handed to me:
- (a) IDENTITY — does the identifier exist; title, single-author line, venue as recorded.
- (b) NUMBERS AND WHERE — tau^2_alpha = 26.2 and tau^2_beta = 115.7 in Appendix B for PRISM, with
  an internal mismatch against 23.2 used in a Section 3.6 simulation.
- (c) WHAT THE VARIANCES ARE OF — between-rater variances of CALIBRATOR PARAMETERS on a rating
  instrument, or variance components of a preference LABEL model? Any ICC / design effect /
  effective sample size?
- (d) CLUSTER-SIZE FACTS — PRISM (entry records a filter of >= 6 labels per rater) and PluriHarms
  (recorded as 100 raters x 150 items); per-rater label counts if printed.
- (e) Any arm varying the NUMBER of annotators at fixed total labels?
- (f) Regime and read level.

## READ LEVEL

**Full text, summariser-mediated. Not a raw-byte read.**

All reading went through WebFetch (page converted to markdown, questions answered by a small
model) against `https://arxiv.org/abs/2606.27578` and `https://arxiv.org/pdf/2606.27578`. I made
three targeted reads of the PDF, each asking different questions, and the answers were mutually
consistent on every figure and on the presence/absence word searches.

I attempted an independent raw read to get verbatim bytes:
`curl -sS -L https://arxiv.org/pdf/2606.27578` → `curl: (56) CONNECT tunnel failed, response 403`.
Per the established routing this is **tool-scoped, not a host block** — WebFetch answers the same
host — so it is not a "could not read" finding. It does mean **I could not independently verify
quotations below the summariser**, and the summariser **refused a segmented full-sentence
transcription** on my second read (it would serve only sub-125-character fragments). So:

- Figures, labels, locations and word-presence: **confirmed by three independent passes.**
- Wording: **short exact fragments as served only.** No full sentence in this note is a verbatim
  reproduction, and I have reconstructed nothing from inference. Everything not inside quotation
  marks is the summariser's paraphrase, marked as such.

This is the same read level Gate 2 had (summariser-mediated targeted PDF read). I have **not**
upgraded it; I have corroborated it across three passes, which the two adversaries could not do.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity — HOLDS, with one correction to where the venue lives

Front matter from the abs page, as served:

- Title: **PEBS: Per-rater Empirical-Bayes Shrinkage for RLHF Reward-Model Calibration**
- Author line: **Arnav Raj** — single author, as recorded.
- Identifier: **arXiv:2606.27578v1**, submitted **2026-06-25**, subjects cs.LG, cs.AI.
- Affiliation, from the PDF first-page footnote: Department of Computer Science and Engineering,
  Indian Institute of Technology Delhi, New Delhi, India.

Venue: the **abs page carries no journal-ref and no comments field** — nothing on arXiv's metadata
names a workshop. The venue appears only on the **PDF front-page footer**, served exactly as:

> "Pluralistic Alignment Workshop @ ICML 2026, Seoul, South Korea. Copyright 2026 by the author(s)."

So the venue as recorded is correct **but is a self-declared footer on the preprint, not arXiv
metadata and not a publisher record of acceptance.** Anyone re-deriving the citation from the abs
page alone will find no venue. That is a provenance note, not a defect in the entry.

### (b) The numbers, where each is printed, and the mismatch — MISMATCH IS REAL

**Appendix B, paragraph headed "Base-model training details"** — running text, **no table number**:

> "PRISM MoM: $\hat{\tau}_{\alpha}^2=26.2$ (slope)"

> "$\hat{\tau}_{\beta}^2=115.7$ (offset)"

> "$\hat{\tau}_{\varepsilon}=23.5$ (residual SD of the population-calibrator fit"

(the last fragment is served with its parenthesis unclosed; that is how it came back, flagged not
corrected.)

So, each figure as printed:

| Figure | Symbol as printed | Printed label | Location | Variance OF |
|---|---|---|---|---|
| 26.2 | tau-hat^2_alpha | "(slope)" | App. B text | between-rater variance of the per-rater **slope** alpha_j |
| 115.7 | tau-hat^2_beta | "(offset)" | App. B text | between-rater variance of the per-rater **offset** beta_j |
| 23.5 | tau-hat_epsilon | "residual SD" | App. B text | **a standard deviation, not a variance** |

Two things the entry does not record and should:

1. **23.5 is an SD, not a variance**, and it is given the symbol tau rather than sigma in Appendix B
   while **Appendix A prints the same quantity as `$\hat{\sigma}_{\varepsilon} = 23.5$`**. The paper
   uses two symbols for one quantity.
2. **Units/denominator are not pinned.** 115.7 is an offset variance on the stated 0–100 rating
   scale. 26.2 is the variance of a dimensionless multiplicative slope on `r̂_φ(x)`, and the paper
   does not state the scale or spread of `r̂_φ` output, so the slope variance has **no stated
   denominator**. Any SD you may have seen quoted for these (≈5.1, ≈10.8) is **somebody's
   arithmetic, not printed in the paper** — the paper prints variances only.

**The 23.2 — the mismatch is real, but the entry misplaces it.**

The value is printed in **Appendix A, paragraph headed "Empirical validation"**, served as:

> "resampling $n_j$ from the empirical PRISM pool with the fitted $\hat{\tau}^2 = 23.2$."

and in the same paragraph, the sweep setup:

> "$J \in \{100, 200, 400, 800, 1394\}$ with 100 seeds each (500 cells), resampling $n_j$ from the
> empirical PRISM pool."

Findings on the mismatch:

- **It is NOT in Section 3.6.** §3.6 is where the simulation's claim is made, but §3.6's main text
  **prints no numerical value for the simulation inputs**. The entry's "a Section 3.6 simulation"
  is right about which result the number feeds and **wrong about where the number is printed**.
- **The 23.2 is written bare — `$\hat{\tau}^2$` with no alpha subscript.** The paper never says
  which variance component it is.
- **The mismatch survives either reading of the bare symbol**, which is the strongest available
  formulation: if 23.2 is meant as the slope variance it contradicts Appendix B's 26.2; if it is
  meant as the offset variance it contradicts Appendix B's 115.7. **It matches neither.**
- **The paper nowhere reconciles, footnotes or acknowledges the difference.** Confirmed by direct
  question on two separate passes.
- The paper also does not show how `M ≈ 4` follows from the stated `n_j` range (see (c)).

### (c) What the variances are of — CALIBRATOR PARAMETERS ON A RATING INSTRUMENT

**Model specification, §2.2, Eq. (3)**, as served in plain text:

> s_ji = α_j · r̂_φ(x_ji) + β_j + ε_ji

introduced by the clause served as "we model the user's continuous preference score as". The
summariser notes the PDF text extraction renders one subscript as "ii" where indices j (rater) and
i (utterance) are intended — an extraction artefact, flagged not corrected.

The modelled quantity is **a scalar rating, not a pairwise preference label.** Algorithm 1 (§2.2)
is served as: "s_ji ∈ [0, 100] is the rated score." The paper's own prose calls s a "preference
score," but the variable is a **0–100 rating**. Pairwise preference data enter **only upstream**,
through the training of the base reward model `r̂_φ` (§2.3, 26,876 preference pairs).

**So (c) resolves in favour of the first option: these are between-rater variances of CALIBRATOR
PARAMETERS (slope and offset of a per-rater affine map) on a 0–100 rating instrument. They are not
variance components of a preference-label model.** Note the paper's own word "preference score" is
the trap here — the name says preference, the instrument is a rating.

**ICC / design effect / effective sample size — PLAINLY ABSENT.** Word-searched on a dedicated pass:

- "intraclass" — **absent**
- "design effect" — **absent**
- "effective sample size" — **absent**
- "variance component" — **absent**
- "reliability" — **absent**; "Cronbach" — **absent**
- "cluster" — present but in other senses: §2.1 "estimate a cluster-specific parameter", §3.4
  "stable cluster IDs"; "clustered" appears only inside a reference title (Cameron et al. 2008,
  "...inference with clustered errors").
- "random effects" — present, e.g. §3.6 "under the random-effects assumptions stated below", §3.7
  "Gaussian random-effects"; "mixed effects" only in the Pinheiro & Bates reference title, with
  "mixed model" (§2.2) and "linear-mixed-model theory" (§1) in the body.

**The paper DEFINES two quantities that could be mistaken for a design effect and are not one:**

1. The shrinkage weight **ω = τ²/(τ²+V)** (§2.1). This is a James-Stein shrinkage weight, not an
   ICC, and the paper does not interpret it as one.
2. **M = max_j V_j / τ²_alpha** (§3.6 opening paragraph), served as "$M=\max_j V_j/\tau_\alpha^2$
   for the noise-to-signal bound", used in Eq. (5) and in the constant `c ≤ (64/3)(1+M)²`, and in
   Appendix A Step 4. §3.6 after Theorem 1 serves: "The constant is a conservative worst-case bound
   driven by the sparsest raters (on PRISM, $n_j$ spans 6–144, giving $M\approx 4$)."
   **M is a MAXIMUM over raters of a noise-to-signal variance ratio. It is not a mean or
   harmonic-mean cluster size and not a design effect.** Reading `M ≈ 4` as "average cluster size
   about 4" would be wrong — and would also contradict the stated `n_j` floor of 6.

§5 prints "slope-SNR 15.6 [13.8, 17.5]" — a ratio with an interval, the closest printed thing to a
reliability-type quantity, but **not named or computed as an ICC or a design effect.**

Published-is-not-performed verdict for (c): the paper **DEFINES** ω and **DEFINES and EVALUATES** M
(at one value, ≈4, worst-case). It **never DEFINES, never BOUNDS and never MEASURES** an ICC, a
design effect or an effective sample size. For these three, the right word is **absent**, not
"defined but unmeasured".

### (d) The cluster-size facts

**PRISM.** Appendix D serves "1,500 unique participants", with stable per-annotator IDs. §2.3
serves "26,876 preference pairs from the 1,391 demographic-complete participants" — **those pairs
train the reward model, not the calibrators.**

The calibrator inclusion filter, §2.3, served as the condition **`n_j >= 6`**, retaining
**J = 1,394 of 1,396 extractable participants.** **The entry's "at least 6 labels per rater" is
correct as to the filter.**

Per-rater label counts: the only printed figures are the **range**, §3.6, served as
"on PRISM, $n_j$ spans 6–144". So **min 6, max 144. No mean, no median, no quartiles, no histogram
value, and no total count of s_ji observations is printed anywhere** (confirmed on a dedicated
question: the paper gives the 1,394-user cohort and the `n_j >= 6` filter but **no sum**).

**This is a granularity gap, not an absence:** the paper publishes the support of the cluster-size
distribution and nothing about its shape or total. Any statement of the form "mean labels per
rater on PRISM is X", or any total-label count, is **arithmetic nobody performed in this paper**,
and cannot be derived from 6–144 plus J = 1,394.

**PluriHarms.** Appendix D, served fragment:

> "A harm-rating corpus collecting 15,000 harm ratings on a 0–100 scale"

with the full description paraphrased by the summariser as 15,000 ratings from **100 annotators
across 150 prompts**. **No inclusion filter and no per-rater count are stated for PluriHarms.**

So the entry's "100 raters x 150 items" matches the paper's three printed numbers. But note
carefully: **the paper prints 15,000, 100 and 150 as three separate counts. It does not print a
per-rater label count of 150, and it does not state that the design is complete (every rater rating
every prompt).** 100 x 150 = 15,000 is **the reader's arithmetic and the reader's completeness
assumption**, consistent with the printed totals but not asserted by the source. If another entry's
objection rests on PluriHarms raters having exactly 150 labels each, that objection rests on an
inference the source permits and does not make.

### (e) Varying the number of annotators at fixed total labels — PLAINLY ABSENT

**There is no experiment or ablation that holds the total number of labels fixed while varying the
number of annotators.** Confirmed on two separate passes. What the paper does instead:

- **Appendix A / §3.6 J sweep:** `J ∈ {100, 200, 400, 800, 1394}`, 100 seeds each, 500 cells, and
  critically **`n_j` is resampled from the empirical PRISM pool** at each J. So **total labels grow
  with J** — this is a raters-and-labels-together sweep, the opposite of the fixed-budget design.
  (The paper also does not state whether τ̂² and σ̂_ε are held fixed across J, nor how the simulated
  raters' ratings are generated.)
- **§3.8:** "random user subsamples", with **no fixed-label constraint.**
- **§3.9:** ablations vary **estimator components and corruption levels**, not annotator count.

### (f) What the paper measures — unit, endpoint, comparator

- **Unit of analysis:** the per-rater (per-user) held-out score prediction. Table 1 is served as
  "Held-out score-prediction RMSE for N=1,394 users". The PluriHarms result is served in §3.4 as a
  "within-cluster-RMSE evaluation".
- **Endpoint:** held-out RMSE. §3.1 serves the headline as a "relative within-user RMSE reduction
  over the pop-slope baseline". **The paper does not write this ratio as a formula.**
- **Comparator:** §3.1, "a single global affine calibrator ($\alpha_{\rm pop},\beta_{\rm pop}$) fit
  by pooled OLS".
- **Headline figures:** 8.58% relative within-user held-out RMSE reduction on PRISM; the abstract
  serves "+9.66% RMSE reduction over the same population-slope baseline" for PluriHarms harm
  ratings with Qwen-2.5 as base model. These are **relative reductions in RMSE, not absolute RMSE
  values**, and the base reward model is not retrained.
- **Type of source:** a **primary methods study** (closed-form post-hoc estimator, theory in
  §3.6/Theorem 1 with Appendix A proof steps, plus two empirical datasets). **Not a review, not a
  protocol, not a guideline.** Single-author workshop preprint.

## REGIME

The paper establishes what it establishes in this regime, and the boundaries matter:

- **Population:** human annotators in two rating corpora — PRISM (1,394 retained participants after
  `n_j >= 6`) and PluriHarms (100 annotators, 150 prompts).
- **Instrument:** a **0–100 scalar rating** (`s_ji ∈ [0,100]`), harm ratings in the PluriHarms case.
  **Pairwise preference labels are upstream only**, inside the frozen base reward model.
- **Unit of analysis:** rater-by-item rating; results aggregated **within user**.
- **Estimand:** between-rater variance of the **slope and offset of a per-rater affine
  recalibration** of a fixed reward-model score; and the RMSE gain from James-Stein shrinkage of
  those per-rater estimates toward the population values.
- **Comparator:** one global affine calibrator fit by pooled OLS.
- **Cluster sizes:** PRISM `n_j ∈ [6, 144]`; **the floor is 6 by construction of the filter, not by
  nature.** The theory constant is driven by the **sparsest** raters via `M = max_j V_j/τ²_alpha`.
- **Assumptions:** Gaussian random effects (§3.7), random-effects assumptions stated at §3.6.

**Where a claim handed from this paper sits OUTSIDE the regime:**

1. **Any use of 26.2 or 115.7 as variance components of a PREFERENCE-LABEL model** (Bradley-Terry
   or pairwise logistic) is outside the regime. They are calibrator-parameter variances on a
   rating instrument. The paper is **silent** about label-model variance components, not supportive.
2. **Any use of these numbers to compute an ICC, a design effect or an effective sample size** is
   the reader's construction. The paper forms none of the three, and the slope variance has **no
   stated denominator** (the scale of `r̂_φ` is never given), so a dimensionless ratio cannot be
   formed from the printed figures alone.
3. **Any statement about mean per-rater cluster size, or total labels**, on either dataset, is
   outside what is printed — range only for PRISM, three marginal totals only for PluriHarms.
4. **Any claim that the paper studies the annotators-vs-labels budget trade-off** is outside the
   regime: the J sweep moves both together.
5. **`M ≈ 4` is a worst-case noise-to-signal maximum**, logged as a bound constant. Citing it as an
   average cluster size, a design effect, or an operating value is a regime error — and it would
   contradict the `n_j >= 6` floor.

## DEFECTS FOUND

Defects in the ENTRY's record of this source:

1. **LOCATION — the 23.2 is in Appendix A, not Section 3.6.** The entry records "a value of 23.2
   used in a Section 3.6 simulation". The number is printed in **Appendix A's "Empirical
   validation" paragraph**; §3.6's main text prints **no numerical simulation inputs**. The
   simulation's *claim* is in §3.6; its *number* is not. Anyone checking §3.6 will not find 23.2
   and may wrongly conclude the mismatch is fabricated.
2. **LABEL — the entry treats 23.2 as directly comparable to tau^2_alpha.** The paper prints it as
   a **bare `$\hat{\tau}^2$` with no subscript**, so the paper never states which component it is.
   The mismatch should be recorded in the form that survives this: **23.2 matches neither 26.2
   (slope) nor 115.7 (offset), on either reading of the bare symbol, and the paper nowhere
   reconciles it.** The entry's narrower framing is defensible but weaker than the facts support,
   and is attackable on the subscript.
3. **MISSING — the entry does not record that tau_epsilon = 23.5 is a standard deviation**, printed
   in Appendix B as "residual SD", and that the paper gives the same quantity **two symbols**
   (tau_epsilon in Appendix B, sigma_epsilon in Appendix A). This is a second, independent notation
   defect in the source, in the same neighbourhood as the one the entry flags.
4. **MISSING — no table number exists.** All three Appendix B figures are in **running text** under
   the heading "Base-model training details". An entry that cites "Appendix B, Table ..." would be
   citing something that does not exist.
5. **UNPINNED DENOMINATOR — the entry reports a slope variance with no scale.** The paper never
   states the scale or spread of `r̂_φ(x)`, so 26.2 is a variance of a slope **in unstated units**.
   Any SD or coefficient-of-variation derived from it is the reader's arithmetic.
6. **PLURIHARMS COMPLETENESS IS INFERRED.** The entry's "100 raters x 150 items" is consistent with
   the paper's three printed totals (15,000 / 100 / 150) but the paper **does not state a per-rater
   count and does not state the design is complete.** If another entry's "strongest objection"
   needs 150 labels per PluriHarms rater, that is a permitted inference, not a printed fact, and
   should be labelled as such.

Defects in the SOURCE itself, as found:

7. **Real, unreconciled internal numeric inconsistency** between Appendix B (26.2 / 115.7) and
   Appendix A (23.2), never acknowledged.
8. **Inconsistent notation** for the residual term (tau_epsilon vs sigma_epsilon), and an unclosed
   parenthesis in the Appendix B figure list as served.
9. **`M ≈ 4` is asserted but not derived** — the paper does not show how it follows from
   `n_j ∈ [6,144]`.
10. **Simulation under-specified** — the paper does not say whether τ̂² and σ̂_ε stay fixed across
    the J sweep, nor how the simulated raters' ratings are generated.
11. **Text-extraction artefact** in Eq. (3)'s subscripts (rendered "ii"), flagged not corrected,
    per the rule about serving damaged OCR as-is.

Non-defects I checked and will not count against anyone:

- The absence of an ICC/design effect/ESS is a **genuine absence**, not a granularity gap — none of
  the three words appears and none of the three quantities is defined. But the paper's **silence on
  clustered-inference adjustment is silence, not a prohibition**; it cites Cameron et al. (2008) on
  clustered errors in its reference list without computing a design effect.
- The curl 403 is **tool-scoped**, not a host block, so this is not a COULD NOT READ.

## ROUTES THAT FAILED

1. `curl -sS -L https://arxiv.org/pdf/2606.27578` → **`curl: (56) CONNECT tunnel failed, response
   403`**, zero bytes. **Tool-scoped at this proxy, not a host block** — WebFetch reads the same
   host and URL successfully. This is why no raw-byte verbatim read exists; it is not a read
   failure for the source.
2. **Segmented verbatim transcription via WebFetch was refused.** My second read asked for ordered
   consecutive segments of seven sentences; the summariser declined on the ground that assembling
   them would amount to verbatim transcription, and served sub-125-character fragments instead. Per
   instruction I **recorded the refusal and did not work around it** — I did not retry with
   disguised framing, and I have **reconstructed no sentence**. Every quotation in this note is a
   single fragment as served, never an assembly.

   Consequence: the quotation cap is **not** the limiting factor here — a **refusal** is. Short
   fragments are available on request; full sentences are not, by the summariser's choice.
3. No route was tried for arXiv metadata beyond the abs page; the abs page's **absence of a
   journal-ref/comments field is a positive finding**, not a failed route.

Budget unspent: 6 searches, 2 fetches. I stopped because three consistent passes had settled every
question asked, not because I ran out.

## BEARING ON THE LEDGER ENTRY

**Claim status: MOSTLY HOLDS.** Every substantive thing the entry records about this source is
true of the source; two recording defects need fixing, and one load-bearing qualifier needs adding.

Item by item:

- **(a) Identity — HOLDS.** Identifier exists, title exact, single author (Arnav Raj, IIT Delhi),
  venue line present. **Add:** the venue is a **self-declared PDF footer**; arXiv metadata carries
  no journal-ref or comments field, so the workshop is not independently evidenced by the record.
- **(b) Numbers — HOLDS, and the mismatch is REAL.** 26.2 (slope) and 115.7 (offset) are printed in
  Appendix B running text for PRISM; 23.2 is printed and conflicts, unreconciled. **Fix the
  location to Appendix A's "Empirical validation" paragraph**, and **restate the mismatch in the
  form that survives the bare symbol: 23.2 matches neither printed value.** Add that 23.5 is an SD
  carrying two different symbols.
- **(c) What the variances are of — RESOLVES CLEANLY in favour of calibrator parameters on a 0–100
  rating instrument.** Eq. (3) is an affine recalibration of a frozen reward score; preference
  pairs are upstream only. **No ICC, no design effect, no effective sample size — plainly absent.**
  This is the item most likely to be mis-cited, because the paper's own phrase is "preference
  score" while the instrument is a rating, and because `M` and `ω` look like design-effect
  quantities and are not.
- **(d) Cluster-size facts — the PRISM filter `n_j >= 6` is CONFIRMED**, and the range 6–144 is
  printed. **But the entry should not be read as supplying mean cluster size or total labels for
  either dataset: neither is printed.** For PluriHarms, 100 / 150 / 15,000 are printed as three
  marginal totals; **the per-rater count of 150 is inference.** If another entry's strongest
  objection rests on PluriHarms cluster size, it rests on a permitted inference from marginals, and
  **that objection should be downgraded from "the paper says" to "the paper's totals imply, if the
  design is complete."**
- **(e) Annotator-count-at-fixed-labels arm — ABSENT, stated plainly.** The J sweep varies raters
  and labels together; §3.8 subsamples users without a budget constraint; §3.9 varies estimator
  components. **Nothing in this paper speaks to the fixed-budget annotators-vs-labels trade-off.**
  If the ledger uses this paper to support or oppose a claim about that trade-off, the paper is
  **silent**, and silence is not support in either direction.
- **(f) Read level — do not record this as independently confirmed at raw-byte level.** It is
  **full text, summariser-mediated, corroborated across three independent targeted passes**, with
  a documented refusal of verbatim sentence transcription and a documented tool-scoped curl block.
  That is materially stronger than Gate 2's single unconfirmed pass and materially weaker than a
  raw read. **Record it as that, and not as either neighbour.**

Net effect on the entry: the gap the entry identifies — that a paper publishing between-rater
variance components forms **no ICC, no design effect and no effective sample size**, and runs **no
fixed-label annotator-count arm** — **stands on the source as read.** The entry's internal-mismatch
observation also stands, and is in fact stronger than recorded. The corrections needed are to the
**location** of 23.2, the **form** of the mismatch statement, and the **inference flag** on
PluriHarms cluster size.
