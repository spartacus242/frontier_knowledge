# VERIFY — Jiang & Ding, measurement errors in the binary IV model

## Citation, as the source itself serves it

**Preprint front matter (arxiv.org/abs/1906.02030, as served):**
Title: "Measurement errors in the binary instrumental variable model".
Authors: Zhichao Jiang, Peng Ding.
Identifier: arXiv:1906.02030v1. Subject: stat.ME. Submitted 2019-06-05; one version (v1) listed.
Journal-ref / DOI on the arXiv page: **none listed**.

**Published version (academic.oup.com/biomet/issue/107/1 table of contents, as served):**
Zhichao Jiang and Peng Ding, "Measurement errors in the binary instrumental variable model",
*Biometrika*, Volume 107, Issue 1, March 2020, Pages 238-245, under the heading **Miscellanea**
(not "Articles"). DOI https://doi.org/10.1093/biomet/asz060. No day-level date shown.

Paper type: **primary methods/theory paper** (identification results, sharp bounds, sensitivity
formulas). Not a review, protocol, guideline or editorial.

## Read level

**FULL TEXT** of arXiv v1 (https://arxiv.org/pdf/1906.02030), read through WebFetch with
ordered-consecutive-segment extraction. The **Supplementary material was NOT read**; §8.1 defers
the asymptotic-variance claim to it (§S6.1), so that one point is full-text-attested only as a
forward reference.

Long passages below are labelled **reconstruction** where they were assembled from ordered
consecutive segments returned under the summariser's ~125-character quotation cap (abstract: 8
consecutive segments; §8.1 + Theorem 1 block: 23 consecutive segments). Nothing is completed by
inference.

**Routes that failed:** `curl https://arxiv.org/abs/1906.02030` -> `curl: (56) CONNECT tunnel
failed, response 403` (tool-scoped at this proxy, not a host block; WebFetch to the same host
succeeded immediately). No other route failed. Query use: 2 searches, 5 fetches.

---

## (a) Does the identifier name that paper, those authors, that title?

**Yes.** arXiv:1906.02030 serves exactly "Measurement errors in the binary instrumental variable
model" by Zhichao Jiang and Peng Ding. A published journal version exists and is recorded above;
the arXiv page carries no journal-ref pointing to it, so the preprint record alone would not
reveal it.

Two bookkeeping notes. The ledger's SOURCE line records a stray second identifier, "arXiv:2501";
that fragment resolves to nothing relevant and only 1906.02030 is the paper. The ledger records no
journal version, though one exists (Biometrika 107(1):238-245, Miscellanea, 2020).

---

## (b) The three quoted strings

### b1 — "the measurement error of the instrumental variable does not bias the estimate"

**Found verbatim — in the ABSTRACT, not the body.** Whole sentence (reconstruction, segments 4-6
of the 8-segment abstract reconstruction):

> "We show that the measurement error of the instrumental variable does not bias the estimate, the
> measurement error of the treatment biases the estimate away from zero, and the measurement error
> of the outcome biases the estimate toward zero."

The quoted string is a **mid-sentence slice cut before a comma**. The sentence continues with two
contrasting clauses about D and Y.

Sentence immediately before (abstract segments 3-4): "We first consider non-differential
measurement errors, that is, the mis-measured variable does not depend on other variables given
its true value." — this is the **only stated condition** on the no-bias result in the abstract, and
the quoted string carries none of it.

Sentence immediately after (segments 6-7): "Moreover, we derive sharp bounds on the causal effects
without additional assumptions."

**The paper states the result three times** (per test 4):
1. Abstract, as above — the clause itself is unqualified, qualified only by the preceding sentence.
2. Body, immediately after Theorem 1: **"The measurement error of Z does not bias the estimate."**
   Preceded by "Theorem 1 shows that measurement errors of Z, D and Y have different consequences."
   and followed by "The measurement error of D biases the estimate away from zero."
3. §8.1, the **most precise and most hedged** formulation: "Theorem 1 shows that the
   non-differential measurement error of Z does not affect the large-sample limit of the naive
   estimator." — this names both the error type and the estimator functional.
None of the three carries an external citation; all are the paper's own result.

### b2 — "All measurement errors are non-differential"

**Found verbatim, and it IS Assumption 2** — but it is the **colon-introduced label line**, not the
assumption's content. As served:

> "Assumption 2 All measurement errors are non-differential:"
> "pr(D' | D, Z', Z, Y, Y') = pr(D' | D),"
> "pr(Y' | Y, Z, Z', D, D') = pr(Y' | Y), and"
> "pr(Z' | Y, Y', Z, D, D') = pr(Z' | Z)."

The string ends at a **colon** in the source. The three displayed conditional-probability
equalities are the substance. Note the assumption is **joint over D, Y and Z**, not a condition on
Z alone, and the Z-condition is stated for a **binary** Z.

Immediately after, the paper defines the quantities Theorem 1 uses: "We use the sensitivities and
specificities to characterize the non-differential measurement errors: SN_D = pr(D'=1 | D=1),
SP_D = pr(D'=0 | D=0), r_D = SN_D + SP_D - 1 <= 1, SN_Y = pr(Y'=1 | Y=1), SP_Y = pr(Y'=0 | Y=0),
r_Y = SN_Y + SP_Y - 1 <= 1." and "Without measurement errors, r_D = r_Y = 1."

### b3 — "We do not consider the differential measurement error of Z."

**The words are verbatim; the terminal full stop is NOT.** In the source the sentence continues:

> "We do not consider the differential measurement error of Z, because the measurement of Z often
> precedes (D,Y) and its measurement error is unlikely to depend on later variables."

Location: **§6**, "Sensitivity analysis formulas under differential measurement errors".
Sentence before: "In this section, we consider differential measurement errors of D and Y without
requiring strong monotonicity."
Sentence after: "We first consider the differential measurement error of Y."

The cut at the comma removes the paper's stated **reason** (temporal ordering of measurement), which
is the part that would bear on any setting where Z's error does depend on later variables.

---

## (c) THE SCOPE QUESTION — what model is the no-bias result proved for?

**All three variables are binary.** Setup (§2), as served:

> "For unit i, let Z_i denote the treatment assigned, D_i the treatment received, and Y_i the outcome."
> "Assume that (Z_i, D_i, Y_i) are all binary taking values in {0, 1}."

So: **Z binary, D binary, Y binary.** The only continuous-outcome sentence in the paper is a side
remark in §8.3: "For a continuous outcome, it is common to assume that the measurement error of Y is
additive and non-differential, i.e., Y' = Y + U, where U is the error term with mean zero." The
main results are not stated for a continuous Y.

**Identifying assumptions.** Theorem 1 reads, in full: **"Theorem 1 Under Assumptions 1 and 2,
tau_c = tau_c' x r_D / r_Y."**

Assumption 1, as served: "Assumption 1 Under the instrumental variable model, (a)
Z ⟂⟂ (Y_1, Y_0, D_1, D_0), (b) D_1 >= D_0, and (c) pr(Y_1 = 1 | U = u) = pr(Y_0 = 1 | U = u) for
u = a and n."
- (a) randomisation / independence of Z from all potential values. The paper adds: "Assumption 1(a)
  holds in randomized experiments."
- (b) **monotonicity** — the paper: it "means that the treatment assigned has a monotonic effect on
  the treatment received for all units."
- (c) **exclusion restriction**, for always-takers and never-takers.
Assumption 2: non-differentiality of all three measurement errors (b2 above).
(Assumption 3, "For all individual i, D_0i = 0", is one-sided noncompliance used in §5, not needed
for Theorem 1.)

**Which estimand is left unbiased.** tau_c, the **complier average causal effect (CACE / LATE)**,
expressed as a ratio of risk differences. Theorem 1's bias factor is r_D / r_Y: **no r_Z term
appears at all**, which is precisely the form the no-bias statement takes. tau_c' is the same
functional computed from the mismeasured (Z', D', Y'). §8.1 pins the sense of "unbiased": the result
is about "the large-sample limit of the naive estimator".

### (c)(i) Is the result stated to cover a NON-BINARY instrument? — No, and the paper says the opposite for the one case it treats.

The only passage on a non-binary Z is §8.1 (reconstruction, consecutive segments):

> "Practitioners sometimes dichotomize a continuous instrumental variable Z into a binary one based
> on the median or other quantiles. The dichotomized variable based on other quantiles are
> measurement errors of the dichotomized variable based on the median. However, these measurement
> errors are differential and thus our results in §3 and §4 are not applicable."

So where the paper does touch a continuous instrument, it **rules the induced error differential and
declares its §3-§4 results inapplicable**. §8.2 extends to a multi-valued **treatment**
(D in {0,1,...,J}) — not a multi-valued instrument.

### (c)(ii) Is the result stated to cover a provider-level PREFERENCE-RATE instrument with wrong-provider attribution? — Not addressed anywhere.

Keyword sweep for "preference", "provider", "physician", "doctor", "surgeon", "rate", "share":
the only hit is "physicians" in **Example 2** (§7), and there Z is still a binary indicator:

> "In Hirano et al. (2000), physicians are randomly selected to receive a letter encouraging them to
> inoculate patients at risk for flu."
> "Let Z_i be the indicator of encouragement to receive the flu shot, with Z=1 if the physician
> receives the encouragement letter, and Z=0 otherwise."

There is **no sentence** in the paper about an instrument constructed as a provider-level preference
rate, nor about misattribution of the recording provider. This is an **absence, not a result in
either direction**: the paper neither extends the no-bias result to such an instrument nor states
that it fails there. What the paper does state — binary (Z,D,Y), Assumption 2's Z-condition
pr(Z' | Y,Y',Z,D,D') = pr(Z' | Z) over binary Z, and the §8.1 verdict that dichotomisation-induced
Z error is differential — all lies strictly inside the all-binary model.

---

## (d) Does the paper address PRECISION or the FIRST STAGE separately from the point estimate?

**Yes — explicitly, in §8.1, and it is the opposite of silence.** Full §8.1 content on this point
(reconstruction, 23 consecutive segments, heading "8.1 Further comments on the measurement errors
of Z"):

**First stage is attenuated:**
> "If only Z is mismeasured and the measurement error is non-differential, then
> RD_{D|Z'} = r'_Z x RD_{D|Z} where r'_Z = SN'_Z + SP'_Z - 1 with SN'_Z and SP'_Z defined in Lemma 1."

**Weak-instrument conclusion is CONDITIONAL, not unconditional:**
> "If r'_Z and RD_{D|Z} are both constants that do not shrink to zero as the sample size n
> increases, then RD_{D|Z'} does not shrink to zero either. In this case, measurement error of Z does
> not cause the weak instrumental variable problem (Nelson and Startz, 1990; Staiger and Stock, 1997)."

**Finite samples:**
> "Nevertheless, in finite samples, the measurement error of Z does result in smaller estimate for
> RD_{D|Z'}."

**A regime where it DOES create a weak instrument:**
> "If we consider the asymptotic regime that r'_Z = o(n^{-alpha}) for some alpha > 0, then it is
> possible to have the weak instrumental variable problem. In this case, we need tools that are
> tailored to weak instrumental variables (Nelson and Startz, 1990; Staiger and Stock, 1997)."

**Asymptotic variance:**
> "Theorem 1 shows that the non-differential measurement error of Z does not affect the large-sample
> limit of the naive estimator."
> "We further show in the Supplementary material that it does not affect the asymptotic variance of
> the naive estimator either."

The asymptotic-variance statement is a forward reference to the Supplementary material (reported
there as §S6.1); **I did not read the supplement**, so I attest the reference, not the derivation.

---

## Defects

1. **b3 is a misquotation by truncation.** The recorded string ends in a full stop the source does
   not have; the sentence continues ", because the measurement of Z often precedes (D,Y) and its
   measurement error is unlikely to depend on later variables", which is the clause that bears on
   any setting where Z's error could depend on later variables.
2. **b1 is a mid-sentence slice stripped of its governing condition.** Verbatim, but the preceding
   sentence restricting the result to non-differential errors is the only qualifier in the abstract,
   and the quoted fragment carries none of it. Quoted alone it reads unconditional.
3. **b2 quotes a label line as though it were the assumption.** The string ends at a colon; the
   substance is three conditional-probability equalities, and Assumption 2 is joint over D, Y and Z
   for binary variables — not a standalone condition on Z.
4. **Scope overreach is available from the quoted strings but not from the paper.** The no-bias
   result is proved only for all-binary (Z,D,Y) under randomisation, monotonicity and exclusion, for
   the CACE, in the large-sample limit of the naive estimator. The one continuous-Z passage the paper
   contains declares the relevant error **differential** and §3-§4 **"not applicable"**.
5. **Provider-level preference-rate instruments: absence, not result.** No sentence in the paper
   addresses them or the wrong-recording-provider error. Reporting the paper as covering or as
   excluding that case would both misstate it.
6. **The ledger's identifier line carries a stray "arXiv:2501"** beside the correct 1906.02030.
7. **No published version recorded.** Biometrika 107(1):238-245, Miscellanea, March 2020,
   DOI 10.1093/biomet/asz060. The arXiv v1 page carries no journal-ref, so citing the preprint alone
   also hides the Miscellanea (short-paper) status.
8. **A precision/first-stage statement does exist (claim d), with conditions.** Anyone reading the
   no-bias result as silence on precision is wrong: §8.1 gives first-stage attenuation
   RD_{D|Z'} = r'_Z x RD_{D|Z}, a finite-sample shrinkage remark, and an asymptotic regime
   (r'_Z = o(n^{-alpha})) in which a weak-instrument problem **is** possible.
9. **Reconstruction caveat.** The abstract and §8.1 passages above are reconstructions from ordered
   consecutive segments (8 and 23 fragments respectively) returned under the summariser's quotation
   cap; junction continuity was checked, and nothing was completed by inference.
10. **Supplement unread**, so the asymptotic-variance result is attested only as the paper's own
    forward reference.
