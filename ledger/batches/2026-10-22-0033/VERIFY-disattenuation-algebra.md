# VERIFY — disattenuation algebra

## CLAIM

For one assay `a` with test-retest reliability `r_a ∈ (0,1]`, a predictor `p` has an observed
rank correlation `ρ(p,a)` against that assay's measured scores. The disattenuation under
examination replaces `ρ(p,a)` by `ρ(p,a)/√r_a`. Sub-claims handed to me:

- (a) Within a single assay, does the transformation preserve the ORDERING of predictors by
  correlation? Under what condition, and does it hold for any `ρ/g(r_a)` with `g>0` and
  independent of the predictor?
- (b) Is `share = (ρ/√r − ρ)/(1 − ρ)` correct as the share of the gap to 1.0 that
  disattenuation closes? Derive it; say what each term means.
- (c) Does the invariance extend to a CROSS-ASSAY AGGREGATE (mean of `ρ_a/√r_a` over assays)?
  Two-assay numerical counterexample.
- (d) Under what estimator would within-assay invariance FAIL?

## READ LEVEL

**Other — no external source was handed to me and none was retrieved.** This check is closed-form
mathematics on an estimator stated in full in the task text. I ran **no searches and no fetches**
(cap was 6 / 5; used 0 / 0). Nothing was refused. This is therefore neither "full text" nor
"could not read" nor "not found": there is no document in question. Every number below is **my own
arithmetic**, computed in a local `python3 -I` session and reproducible by hand.

## WHAT THE SOURCE SAYS (quotations as served)

No source text to quote. The only strings under examination are the two expressions quoted from the
task itself, reproduced verbatim: `rho(p,a)/sqrt(r_a)` and
`share = (rho/sqrt(r) - rho)/(1 - rho)`.

### (a) Within-assay ordering — EXACT ALGEBRAIC IDENTITY, invariance HOLDS

Fix the assay `a`. Then `r_a` is a **constant with respect to the predictor**, so the map is

    T(ρ) = ρ · c ,   c = 1/√r_a ,   and r_a ∈ (0,1] ⟹ c ∈ [1, ∞) , c > 0 .

Multiplication by a strictly positive constant is a strictly increasing bijection of ℝ. Hence for
any two predictors `p, q` evaluated on the same assay:

    ρ_p > ρ_q  ⟺  c·ρ_p > c·ρ_q
    ρ_p = ρ_q  ⟺  c·ρ_p = c·ρ_q

The ordering is preserved **exactly**, strictly, and in both directions (it is an order
isomorphism, so it is order-preserving *and* order-reflecting: no pair is reordered and no pair is
newly tied or newly separated). This holds for correlations of either sign — positive scaling
preserves order on all of ℝ, not just on [0,1] — and also for ranking by magnitude, since
`|ρ/√r_a| = |ρ|/√r_a`.

**Generalisation.** For any estimator `ρ ↦ ρ/g(r_a)` with `g > 0` and `g` **not a function of the
predictor**, the divisor is again a single positive constant within the assay, so the identical
argument applies: ordering is preserved for *any* such `g`. The specific choice `g = √r_a` plays no
role whatsoever in part (a); `g = r_a`, `g = r_a^3`, `g = 1 − r_a/2` would all preserve the same
ranking. More broadly, a within-assay ranking is invariant under **any strictly increasing
transformation** of `ρ`, of which positive scaling is a special case.

**The condition, stated precisely.** Invariance requires exactly two things:
1. `g(r_a) > 0` (satisfied: `√r_a > 0` because `r_a > 0`), and
2. the divisor is **common to all predictors being ranked** — one assay, one reliability figure,
   one denominator.

Nothing else is needed, and nothing about the magnitude or accuracy of `r_a` matters. A *wrong*
`r_a` yields the same ranking as the right one. **Corollary worth putting in the ledger:** within a
single assay, this disattenuation cannot change which predictor wins, by how many places, or
whether two predictors tie. It changes only the absolute level and the gap-to-ceiling narrative.
Any claim that disattenuating *reorders* predictors within one assay is false as algebra.

### (b) The share identity — ARITHMETIC EXACT; the INTERPRETATION is a modelling choice

Derivation (write `ρ` for the observed correlation, `r` for the assay reliability):

    disattenuated value          D  = ρ/√r
    absolute movement            Δ  = D − ρ = ρ(1/√r − 1) = ρ(1 − √r)/√r
    distance from ρ to 1.0       G  = 1 − ρ
    share                        Δ/G = (ρ/√r − ρ)/(1 − ρ) = ρ(1 − √r) / [√r (1 − ρ)]

So the expression as written **is** `Δ/G` identically — the rearrangement is an exact algebraic
identity, no approximation, requiring only `ρ ≠ 1` and `r > 0`.

Term by term:
- `ρ` — the observed (attenuated) rank correlation of the predictor against the assay's **measured**
  scores; range [−1, 1].
- `r` — the assay's test-retest reliability; `(0, 1]`.
- `√r` — the attenuation factor: under the classical additive-error model, correlating against
  measured rather than error-free scores multiplies the correlation by `√r`.
- `ρ/√r` — the disattenuated correlation; an estimate of the predictor's correlation with the
  **error-free (latent true) assay score**.
- `1 − ρ` — the gap from the observed correlation to perfect prediction (1.0), measured in
  correlation units.
- numerator `ρ/√r − ρ` — the absolute closure of that gap produced by the correction, same units.
- the ratio — the fraction of the observed shortfall-from-1.0 that the correction removes.

So: **yes, correct as arithmetic**, with four caveats that belong in the ledger entry.

1. **Not bounded above; it is a ratio of differences, not a proportion.** It exceeds 1 whenever
   `ρ/√r > 1`, i.e. whenever `ρ > √r`. My arithmetic: `ρ = 0.90, r = 0.64` → `D = 1.125`,
   `share = (1.125 − 0.90)/0.10 = 2.25`, i.e. "225% of the gap closed", and the corrected
   correlation is an impossible 1.125. The boundary case `ρ = 0.70, r = 0.49` gives `D = 1.000`
   exactly and `share = 1.000`. Reporting such a number as a "share" invites reading it as a
   percentage of something when it is not confined to [0,1].
2. **Undefined at `ρ = 1`, and sign-perverse for `ρ < 0`.** At `ρ = 1` the denominator vanishes.
   For `ρ < 0` the correction moves the estimate *away* from 1.0 while `1 − ρ > 1`, so the ratio is
   negative and the words "share of the gap closed" no longer describe it.
3. **The denominator encodes a choice of ceiling, and it is not the only defensible one.** Under
   the same classical model, the maximum attainable correlation of *any* predictor against the
   assay's **measured** scores is `√r`, not 1.0. If the question is "how much of the achievable
   headroom does the correction account for", the denominator is `√r − ρ`. The identity as handed
   to me uses `1 − ρ`, which answers a different question: how much of the distance to *perfect
   prediction of the measured score* the correction covers. Both are coherent; they are not
   interchangeable, and the entry should say which it means. This is the regime point, not an
   arithmetic error.
4. **Both inputs are empirical.** `ρ̂` and `r̂` carry sampling error, and the ratio is a ratio of
   small differences whose denominator shrinks as `ρ̂ → 1`, so the share is numerically unstable in
   exactly the high-correlation regime where it is most often quoted. Its point value is **not** an
   algebraic identity: only the rearrangement is.
5. **Model-domain caveat.** Spearman's correction for attenuation is derived for **Pearson**
   correlations under an additive classical-test-theory error model. Applying `/√r` to a **rank**
   (Spearman) correlation is a step outside that derivation; it is conventional and usually mild,
   but it is an assumption, not an identity. Note this is orthogonal to (a) and (b)'s algebra,
   which hold whatever `ρ` denotes.
6. **Single vs double correction.** Dividing by `√r_a` alone corrects for unreliability in the
   **criterion only**. The double correction is `ρ/√(r_p r_a)`. The estimator under examination is
   the single one; its target estimand is "correlation between the predictor as measured and the
   assay's true score".

### (c) Cross-assay aggregate — invariance DOES NOT EXTEND. Counterexample below.

Let the aggregate be the mean over `n` assays of the per-assay corrected correlations:

    A(p) = (1/n) Σ_a ρ(p,a)/√r_a      versus the uncorrected      U(p) = (1/n) Σ_a ρ(p,a)

`A` is not a positive multiple of `U` unless all `r_a` are equal. It is a **weighted** mean with
assay-specific weights `w_a = 1/√r_a`, so the correction silently **reweights the aggregate toward
low-reliability assays**. With `d_a = ρ(p,a) − ρ(q,a)`:

    U(p) − U(q) ∝ Σ_a d_a            A(p) − A(q) ∝ Σ_a d_a/√r_a

These two sums can carry **opposite signs** whenever the `d_a` are of mixed sign and the weights
are non-constant. Two sufficient conditions for ordering to be preserved:
- **homogeneous reliability**: all `r_a` equal ⟹ `A = cU`, `c > 0` ⟹ (a) applies, ordering safe; or
- **assay-wise dominance**: `d_a ≥ 0` for every `a` ⟹ `Σ d_a w_a ≥ 0` for *any* positive weights
  ⟹ ordering safe.

Outside those two cases reversal is possible, and here it is. **All numbers in this section are my
own arithmetic.**

**Counterexample 1 (wide reliability spread).** Two assays, `r_A = 1.00` (`√r = 1.0`),
`r_B = 0.25` (`√r = 0.5`).

| predictor | ρ on A | ρ on B | uncorrected mean | corrected on A | corrected on B | corrected mean |
|---|---|---|---|---|---|---|
| P | 0.60 | 0.20 | **0.4000** | 0.60 | 0.40 | 0.5000 |
| Q | 0.30 | 0.45 | 0.3750 | 0.30 | 0.90 | **0.6000** |

Uncorrected ranking: **P > Q** (0.4000 vs 0.3750). Corrected ranking: **Q > P** (0.6000 vs 0.5000).
The ordering reverses. Every input is admissible (`ρ ∈ [0,1]`, `r ∈ (0,1]`) and every corrected
value stays ≤ 1, so no overshoot is doing the work.

**Counterexample 2 (mild reliability spread, same predictors).** `r_A = 1.00`, `r_B = 0.64`
(`√r = 0.8`, a multiplier of only 1.25):

| predictor | uncorrected mean | corrected mean |
|---|---|---|
| P | **0.40000** | 0.42500 |
| Q | 0.37500 | **0.43125** |

Still a reversal. A reliability gap as ordinary as 1.00 vs 0.64 suffices; nothing pathological is
required. The mechanism is simply that `d_A = +0.30` and `d_B = −0.25` have opposite signs, so
reweighting can flip the sum.

**Consequence for the ledger.** The within-assay invariance of (a) is real but **local**. It does
not license the sentence "disattenuation cannot change the ranking" when the ranking is computed on
a mean (or any non-trivially-weighted aggregate) across assays with differing reliabilities. In the
aggregate the correction is not a relabelling: it changes the estimand from "mean observed
correlation" to "reliability-weighted mean correlation", and can change who wins.

### (d) Estimators under which within-assay invariance FAILS

Invariance in (a) rests on exactly one hinge: the multiplier is **common to every predictor being
compared**. Break that and it fails. All numbers below are **my own arithmetic**.

1. **Any multiplier that depends on the predictor — e.g. the DOUBLE correction.**
   `ρ ↦ ρ/√(r_a r_p)` divides by the predictor's own reliability, which varies by predictor.
   With `r_a = 1`: P has `ρ = 0.50, r_P = 1.00` → 0.5000; Q has `ρ = 0.45, r_Q = 0.64` →
   `0.45/0.8 = 0.5625`. Uncorrected P > Q; corrected Q > P. Reversed.
2. **Correction stratified by heteroscedasticity (or by score band, concentration range, subgroup).**
   If reliability is estimated per stratum `s` with values `r_s`, the effective divisor for a
   predictor is a predictor-specific average, `√(Σ_s w_{s,p} r_s)`, because the weights `w_{s,p}`
   depend on where that predictor's signal and samples sit. Two strata, `r_1 = 1.00`, `r_2 = 0.25`:
   predictor P whose correlation lives entirely in stratum 1 is divided by 1.0; predictor Q whose
   correlation lives entirely in stratum 2 is divided by 0.5. Pooled `ρ_P = 0.50`, `ρ_Q = 0.45` →
   corrected 0.5000 vs 0.9000. Reversed. This is formally the same failure as (c), relocated inside
   one assay: heterogeneous weights times mixed-sign differences.
3. **Any correction whose multiplier depends on the predictor's own sample size, standard error, or
   shrinkage factor** — `ρ̂_p · λ(n_p, SE_p)`. Predictors measured on different numbers of items get
   different `λ`, so the map is no longer a common scaling.
4. **Ceiling-capped corrections, `min(ρ/√r, 1)`.** Monotone but **not strictly** monotone: it is
   order-preserving in the weak sense yet destroys strict ordering by fusing every predictor with
   `ρ > √r` into a tie at 1.0. In the `r = 0.64` regime, `ρ = 0.85` and `ρ = 0.95` both land on
   1.000 and become indistinguishable. So invariance of the *strict* order fails even though no
   pair is inverted.
5. **Corrections with a predictor-dependent additive term** (e.g. a bias offset estimated per
   predictor): `ρ + b_p` is not a common scaling and reorders freely.
6. **The practical case that looks safe and is not: `r̂_a` estimated separately per predictor
   evaluation.** If each predictor is scored on its own overlap subset of samples, or reliability is
   re-estimated on each predictor's available pairs, then `r̂_a` is *de facto* predictor-specific
   even though the underlying `r_a` is one number. Theory says invariance; the implementation
   violates its own premise. Worth checking in any pipeline that claims (a).

## REGIME

- **(a)** holds in the regime "one assay, one reliability constant shared by all compared
  predictors, divisor strictly positive". Unit of analysis: a pair of predictors scored against the
  same assay. Fully general in `g`, in the sign of `ρ`, and in the value of `r_a`. **Empirical
  content: none.**
- **(b)** holds as arithmetic for all `ρ ≠ 1`, `r > 0`. Its *interpretation* as "share of the gap"
  is in-regime only when the intended ceiling is 1.0 (perfect prediction of the measured score) and
  `0 ≤ ρ < 1`. It is out of regime when the intended ceiling is the reliability-imposed `√r`, when
  `ρ < 0`, when `ρ ≈ 1` (instability), or when the number is presented as a bounded percentage.
  **Empirical content: the value itself, via `ρ̂` and `r̂`.**
- **(c)** The aggregate regime is where the invariance of (a) **expires**. Preserved only under
  homogeneous `r_a` or assay-wise dominance; otherwise reversible, as shown.
- **(d)** Failure regimes are exactly those where the multiplier is not predictor-independent, plus
  the capped estimator where strictness (not order) fails.

## DEFECTS FOUND

These are defects in how the claim bundle can be *used*, since there is no source document to
misquote.

1. **Scope overreach between (a) and (c).** (a) is an exact theorem in the single-assay regime; it
   is **silent** on cross-assay aggregates, and in that regime its conclusion is false. Carrying
   "disattenuation is ordering-invariant" from (a) into an aggregate ranking is the classic
   regime-transplant error: true where proved, false where used. My counterexamples 1 and 2 show
   the reversal with ordinary inputs.
2. **`share` presented as a bounded proportion.** It is a ratio of differences, unbounded above,
   exceeding 1 whenever `ρ > √r` (my arithmetic: 2.25 at `ρ = 0.90, r = 0.64`), undefined at
   `ρ = 1`. If the ledger quotes a share as a percentage, it should say that values above 100% are
   attainable and mean the corrected correlation exceeded 1.0.
3. **Ambiguous ceiling in (b)'s denominator.** `1 − ρ` and `√r − ρ` answer different questions and
   give different shares from the same inputs. The entry should name which gap it means.
4. **`√r` vs `r`, single vs double correction.** The estimator as stated corrects the criterion
   only. Any comparison with a figure computed under `ρ/√(r_p r_a)` or `ρ/r_a` is not comparable,
   and the double correction additionally **breaks** (a) — see (d) item 1.
5. **Pearson-model formula applied to a rank correlation.** An assumption carried silently. It does
   not affect (a), (c) or (d) — those are pure order algebra — but it affects whether `ρ/√r` is the
   right estimate of the latent-score correlation at all, which is the only thing (b) is about.
6. **The ranking-irrelevance of (a) can be read as an endorsement.** Because *any* positive
   predictor-independent divisor preserves the ranking, (a) provides **no evidence** that `√r_a` is
   the correct divisor. It establishes that the choice is harmless for ranking, not that it is
   right for levels. A ledger entry citing (a) in support of the *magnitude* of a disattenuated
   figure would be citing a theorem that is silent on the question.
7. **Implementation trap.** Per-predictor re-estimation of `r̂_a` (different overlap subsets) voids
   (a)'s premise while appearing to satisfy it. Not a mathematical defect; a defect in any claim
   that a given pipeline *inherits* (a).

## ROUTES THAT FAILED

None. No retrieval was attempted and nothing was refused: 0 of 6 searches and 0 of 5 fetches used.
This is a **no-source-needed** check, not a COULD NOT READ and not a NOT FOUND.

## BEARING ON THE LEDGER ENTRY

- The within-assay invariance claim **stands as an exact algebraic identity**, and stands more
  broadly than stated: it holds for every positive predictor-independent divisor, so `√r_a` is not
  load-bearing for it. State the condition as "one divisor shared by all compared predictors", not
  as a property of the square root.
- The `share` identity **stands as arithmetic** but should be entered with its ceiling named
  (`1 − ρ`, not `√r − ρ`), with the note that it is unbounded above and undefined at `ρ = 1`, and
  with the flag that its *value* is empirical (depends on `ρ̂`, `r̂`) while its *form* is an
  identity.
- The invariance **does not survive aggregation**. If the ledger entry anywhere ranks predictors by
  a mean of per-assay disattenuated correlations, the invariance argument does not cover it and the
  ranking can reverse — demonstrated at reliabilities as unremarkable as 1.00 and 0.64. Either
  restrict the invariance claim to within-assay comparisons or add the homogeneous-reliability /
  assay-wise-dominance qualifier.
- Known failure modes to record alongside: predictor-dependent multipliers (double correction),
  stratified reliability, per-predictor shrinkage or `n`-dependent factors, ceiling-capping (ties,
  not inversions), and per-predictor re-estimation of `r̂_a`.
- Exactness ledger: (a) exact, no empirical input. (b) rearrangement exact; value empirical;
  interpretation a modelling choice. (c) counterexample is exact arithmetic (mine); whether a
  reversal occurs in any real batch is empirical, depending on the spread of `r_a` and on whether
  one predictor dominates assay-by-assay. (d) exact algebra on the failure conditions; which
  estimator a given pipeline uses is empirical.
