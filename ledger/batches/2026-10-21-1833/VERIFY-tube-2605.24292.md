# VERIFY — TUBE, arXiv:2605.24292

## CLAIM

Source as the ENTRY cites it: Ivanov, Kholkin, Gromadskii, Ksenofontov, Oseledets, Korotin,
"Tangent Upper Bound on Evidence for Discrete Diffusion Language Models" (TUBE),
arXiv:2605.24292 v1 2026-05-22, ICML 2026.

Claims handed to me:
(a) identity / front matter, authors in order;
(b) two quoted strings — "Our empirical study is limited to BM" and
    "In every configuration the AO-ARM/MDM PPL lies strictly above the ARM" — plus what "BM" denotes;
(c) what Table 2 prints: models, corpora, bounds, parameter scale; largest model; whether any
    shipped 7–8B checkpoint (LLaDA-8B, Dream-7B) is evaluated;
(d) whether the paper's ± are standard deviations over 10 ordering subsets rather than standard errors;
(e) whether the interval is printed in PPL, nats/token or bits/token, and whether the sandwich
    WIDTH is printed or must be computed;
(f) regime: model class, scales, what the upper bound requires.

## READ LEVEL

**Full text**, read through the WebFetch summarising reader at `https://arxiv.org/html/2605.24292v1`
(four prompts against the same document: limitations/takeaway strings, Table-2 contents and ± semantics,
setup/theorem/assumptions, full Table-2 transcription). Front matter (title, author order, date)
additionally read at `https://arxiv.org/abs/2605.24292`.

Qualification on the read level, stated because it bears on every number below: the paper could not be
fetched raw. `curl https://arxiv.org/html/2605.24292v1` was refused at the egress proxy
(`CONNECT tunnel failed, response 403`, `connect_rejected`) — a tool-scoped refusal, since WebFetch
served the same host immediately. Everything here therefore passed through the summariser, whose
numeric rendering was *not* stable across calls: an early call described the ELBO→TUBE endpoints as
"≥ 21.55" and "≤ 27.40" and reported the rightmost-column gap as "about 5 to 1 PPL", which looks
inconsistent with the later full transcription until you notice the gap sentence covers only the
NFE ≥ 2 rows. The two readings of the critical cells agree, so I treat the transcription as sound,
but a cell-level re-read against the PDF is warranted before any number below is quoted downstream.
This is **full text**, not COULD NOT READ and not NOT FOUND — the paper is real and open.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter

Title as served on the abs page: **"TUBE: Tangent Upper Bound on Evidence for Discrete Diffusion
Language Models"**. The entry drops the "TUBE:" prefix; otherwise the title matches.

Authors, in the order served: **Arseny Ivanov, Sergei Kholkin, Vladislav Gromadskii,
Grigoriy Ksenofontov, Ivan Oseledets, Alexander Korotin** (six). The entry's surname list matches
this order exactly.

arXiv:2605.24292v1, submitted **2026-05-22**. Confirmed.

ICML 2026: **not verified from the paper's front matter.** I did not see a journal-ref or venue line in
what the abs page returned, and I did not spend a call on it. A web search returned two ICML 2026
virtual-session pages carrying this exact title (icml.cc/virtual/2026/70497 and /74312), which is
consistent with the entry but is a conference index, not the paper's front matter. Treat the venue as
*probable, unconfirmed at source*.

Kind of source: a **primary methods paper** — it introduces an estimator (TUBE), proves a bound, and
runs its own evaluation. Not a review, not a protocol, not an editorial.

### (b) The two strings, each checked alone

**String 1 — "Our empirical study is limited to BM" — occurs VERBATIM.** §6, "Potential impact and
limitations", under the bold "Limitations." label. Reconstruction of the containing sentence from
**3 consecutive served fragments**:

> "Our empirical study is limited to BM [Arriola et al., 2025] which is the dominant inference-time
> paradigm of large-scale MDMs such as LLaDA 2.0 [Bie et al., 2025] and Mercury [Khanna et al., 2025]."

Nothing precedes it in the paragraph but the "Limitations." label. The next sentence, as served:

> "However, applying TUBE to non-block MDM may be challenging."

**String 2 — "In every configuration the AO-ARM/MDM PPL lies strictly above the ARM" — occurs
VERBATIM.** It is the "Takeaway" of §5.1 (Likelihood comparison). Reconstruction from
**3 consecutive served fragments**:

> "In every configuration the AO-ARM/MDM PPL lies strictly above the ARM, so ARM is dominant in
> likelihood across all block sizes and generation regimes we consider."

**"BM" in the paper's own words:** **block models**. The defining phrase served is "Block models (BM)",
the heading of §2.4. Abbreviations defined around it: "masked diffusion models (MDMs)",
"any-order autoregressive models (AO-ARMs)", "Autoregressive models (ARM)",
"evidence lower bound (ELBO)", "Tangent Upper Bound on Evidence (TUBE)". "BAO" does not appear.

### (c) Table 2 — naming the numbers

Caption, reconstructed from **8 consecutive served fragments** (LaTeX as served):

> "**Test perplexity** (↓) **on OWT.** We report PPL = exp(−log p_model(x)). The ± values denote
> standard deviations over 10 random subsets of orderings, with all estimators in a row computed using
> the same total number of sampled orderings. The reference column reports ELBO_K, which is exact for
> L'=4 (marked with *) and Monte Carlo-estimated for L'∈{8,16}. **Color coding:** coral background
> marks biased estimators, and red text marks cells where the value exceeds ELBO_K, violating the
> expected bound relation."

Table 3 (Appendix A) carries the identical caption with "**on LM1B**" in place of "on OWT".

- **Corpus:** Table 2 is **OWT only**. LM1B is Table 3.
- **Columns, left to right:** CUBO_{β=2} | TVO_U | IS-VG-B | **TUBE** | ELBO_K | ELBO | Gap: TUBE−ARM.
  The first three are marked biased; ELBO_K / ELBO are the reference lower bounds on log p
  (upper bounds on PPL).
- **Rows:** an exact ARM baseline printed as **"Exact ARM baseline: 17.54 PPL"**, then for each
  block size L' ∈ {4, 8, 16} one MDM row per NFE (L'=4: 1,2,4; L'=8: 1,2,4,8; L'=16: 1,2,4,8,16)
  and one AO-ARM row.
- **Models:** the **block models of Arriola et al. (2025)** (BD3-LM family) only — block MDM and
  block AO-ARM — plus the ARM baseline and the ψ_ARM surrogate (incl. a fine-tuned variant).
  §5 as served: "All evaluations are done with BMs [Arriola et al., 2025] at block sizes L' ∈ 4, 8, 16."
  On OWT the authors "use the available pretrained checkpoints"; on LM1B they train from scratch
  (MDLM at BD3-LM defaults, fine-tuned per block size; ARM baseline trained with the same
  architecture, tokenizer and sequence length).
- **Parameter scale: THE PAPER PRINTS NONE.** Two independent passes found no parameter count,
  no "M parameters", no model-size figure anywhere in the document. So Table 2's parameter scale is
  not a number this paper publishes; it is inheritable only from Arriola et al. (2025), i.e. from
  someone else's front matter.
- **Largest model evaluated:** cannot be named by parameters, because none are stated. By
  description, the largest thing evaluated is a block-diffusion (BD3-LM-family) checkpoint on OWT
  at block size 16.
- **Shipped 7–8B checkpoints: NO. The paper evaluates none.** Stated plainly: **LLaDA-8B is not
  evaluated and Dream-7B is not evaluated.** "LLaDA 2.0" and "Mercury" appear only in §6 as named
  examples of the large-scale MDM paradigm; "Dream 7B" appears only in the introduction and
  references. GPT-2 Large is mentioned in related work as the gen-PPL reference model and is not
  used in this paper's evaluation. (Note also that the entry writes "LLaDA-8B" where the paper names
  "LLaDA 2.0".)

Transcribed body of Table 2 (OWT; PPL; ARM baseline 17.54):

| L' | regime | CUBO_{β=2} | TVO_U | IS-VG-B | TUBE | ELBO_K | ELBO | Gap TUBE−ARM |
|---|---|---|---|---|---|---|---|---|
| 4 | NFE=1 | 97.78 | 97.78 | 97.78 | 97.78 | 97.78 | – | 80.24 |
| 4 | NFE=2 | 24.34 ± 0.01 | 27.68 ± 0.01 | 29.11 ± 0.03 | ≥ 21.55 ± 0.03 | ≤ 27.40 | – | 4.01 |
| 4 | NFE=4 | 19.78 ± 0.01 | 21.89 ± 0.01 | 22.52 ± 0.01 | ≥ 19.16 ± 0.02 | ≤ 21.63 | – | 1.62 |
| 4 | AO-ARM | 17.50 ± 0.00 | 18.55 ± 0.00 | 18.76 ± 0.01 | ≥ 17.74 ± 0.01 | = 18.46* | ≤ 21.36 ± 0.21 | 0.20 |
| 8 | NFE=1 | 221.54 | 221.54 | 221.54 | 221.54 | 221.54 | – | 204.00 |
| 8 | NFE=2 | 29.04 ± 0.01 | 33.41 ± 0.02 | 34.95 ± 0.03 | ≥ 24.32 ± 0.06 | ≤ 32.63 | – | 6.78 |
| 8 | NFE=4 | 20.90 ± 0.01 | 23.54 ± 0.01 | 24.15 ± 0.01 | ≥ 20.23 ± 0.03 | ≤ 23.25 | – | 2.69 |
| 8 | NFE=8 | 18.85 ± 0.01 | 20.83 ± 0.01 | 21.17 ± 0.01 | ≥ 19.15 ± 0.02 | ≤ 20.67 | – | 1.61 |
| 8 | AO-ARM | 17.95 ± 0.00 | 19.31 ± 0.00 | 19.46 ± 0.00 | ≥ 18.67 ± 0.01 | ≤ 19.24 | ≤ 22.18 ± 0.58 | 1.13 |
| 16 | NFE=1 | 398.63 | 398.63 | 398.63 | 398.63 | 398.63 | – | 381.09 |
| 16 | NFE=2 | 35.80 ± 0.01 | 39.80 ± 0.01 | 41.93 ± 0.06 | ≥ 22.50 ± 0.15 | ≤ 38.43 | – | 4.96 |
| 16 | NFE=4 | 22.89 ± 0.02 | 25.21 ± 0.01 | 25.96 ± 0.02 | ≥ 19.03 ± 0.08 | ≤ 24.75 | – | 1.49 |
| 16 | NFE=8 | 19.59 ± 0.01 | 21.38 ± 0.01 | 21.77 ± 0.01 | ≥ 18.44 ± 0.04 | ≤ 21.14 | – | 0.90 |
| 16 | NFE=16 | 18.44 ± 0.01 | 19.98 ± 0.00 | 20.26 ± 0.01 | ≥ 18.22 ± 0.03 | ≤ 19.83 | – | 0.68 |
| 16 | AO-ARM | 18.08 ± 0.00 | 19.39 ± 0.00 | 19.56 ± 0.01 | ≥ 18.47 ± 0.01 | ≤ 19.30 | ≤ 22.81 ± 0.61 | 0.93 |

### (d) What the ± means

The paper states it **twice**.

1. Table 2 caption (and identically Table 3), as served: **"The ± values denote standard deviations
   over 10 random subsets of orderings, with all estimators in a row computed using the same total
   number of sampled orderings."** Unhedged, no citation.
2. Appendix D.3, as served: they are **"computed across 10 MC re-seeds, each drawing a fresh per-row
   subset of size B from the bank."** This is the operational formulation; it is the one that tells
   you the dispersion is over *Monte Carlo re-seeding of the ordering bank*, not over test data,
   not over training seeds.

So the entry's record is **correct**: standard deviations over 10 ordering subsets, explicitly not
standard errors and not confidence intervals. What that dispersion covers is estimator noise from
ordering sampling only.

### (e) Units, and the sandwich width

- **Units: perplexity.** Both tables are headed "Test perplexity (↓)" and define
  "PPL = exp(−log p_model(x))". Figures 3 and 4 likewise report test perplexity. The paper **never**
  names nats per token or bits per token as a unit.
- Direction, since the sign matters: TUBE is an upper bound on **log p(x)**, hence a **lower bound on
  PPL** — printed with "≥". ELBO/ELBO_K are lower bounds on log p, hence **upper bounds on PPL** —
  printed with "≤". So in PPL the sandwich reads [TUBE, ELBO_K], e.g. L'=4 NFE=2: [21.55, 27.40].
- **The sandwich WIDTH is NOT printed.** The paper prints the two endpoints only. Eq. (10) states the
  relation symbolically ("ELBO(x) ≤ log p(x) ≤ TUBE") and Algorithm 1 returns the interval as its two
  endpoints. No sentence or column gives an ELBO-to-TUBE width as a number. The one printed gap is the
  rightmost **TUBE−ARM** column, which is the distance to the exact ARM baseline, a *different*
  quantity. Any width (e.g. 27.40 − 21.55 = 5.85 PPL for L'=4 NFE=2) is **my arithmetic, not the
  paper's**. The rightmost column is also not defined in the caption or text; it is only referred to
  as "the gap in the rightmost column", and reproduces TUBE − 17.54 on the printed cells.

The only text figure about that column, as served:

> "When comparing MDMs with the ARM baseline, the gap in the rightmost column, decreases from about
> 5 to 1 PPL as NFE increases."

Re-derived at the authors' own threshold: that "about 5 to 1" holds for the **NFE ≥ 2** rows
(L'=4: 4.01 → 1.62; L'=8: 6.78 → 1.61; L'=16: 4.96 → 0.68). It is silent about the NFE=1 rows, whose
printed gaps are 80.24, 204.00 and 381.09 PPL.

### (f) What the bound requires

- The result is **Definition 3.1** plus the tangent-line inequality at eq. (8). As served:
  "Consider positive functions p(x) and ψ(x), where p(x), ψ(x) > 0 for every x ∈ X"; and
  "where the function ψ(x) is a auxiliary function, and equality holds iff ψ(x) = p(x)".
  The construction is introduced with: "Our method of constructing the upper bound on log p(x) rests
  on the concavity of".
- Requirements as stated: strict positivity of p and ψ; no convexity or differentiability condition
  is stated; ψ may be **any** positive function, with tightness governed by its closeness to p. The
  unbiased MC estimator (Proposition B.1) takes ψ(x) > 0 deterministic for fixed x, and its variance
  formula additionally needs finite variance of p_model(x|π) under p(π).
- Model class: latent-variable models **p(x) = E_π[p(x|π)]**, which covers AO-ARMs and MDMs, and
  their block variants via the block decomposition at eq. (7).
- Access requirements: the estimator must evaluate the model's conditionals p_model(x|π) at sampled
  orderings π; the surrogate **ψ_ARM requires an exact-likelihood model**, and ψ_M requires
  evaluating p_model at chosen orders.

## REGIME

The regime in which this paper establishes what it establishes:

- **Model class:** block models (BM) of Arriola et al. (2025) — block MDM and block AO-ARM — against
  an exact ARM baseline. Non-block MDMs are explicitly outside it; §6 says applying TUBE to them
  "may be challenging".
- **Scale:** **unstated in parameters.** Research-scale OWT/LM1B language models of the BD3-LM family.
  No shipped instruction-tuned diffusion LLM is touched.
- **Unit of analysis / endpoint:** test perplexity per sequence, PPL = exp(−log p_model(x)), on OWT
  (Table 2) and LM1B (Table 3), swept over block size L' ∈ {4,8,16} and NFE.
- **Comparator:** an exact-likelihood ARM trained with the same architecture, tokenizer and sequence
  length (17.54 PPL on OWT), and four competing estimators (CUBO_{β=2}, TVO_U, IS-VG-B, ELBO/ELBO_K).
- **Estimand:** a two-sided bracket on log p(x) — ELBO below, TUBE above — reported as PPL bounds.
- **Dispersion:** standard deviation over 10 re-seeded ordering subsets; no data-level or
  training-seed uncertainty.
- **Theory regime:** any latent-variable p(x) = E_π[p(x|π)] with p, ψ > 0. The bound itself is far more
  general than the experiments; the *likelihood-dominance conclusion* is not — it is a statement about
  these checkpoints, at these block sizes, in these generation regimes, as the Takeaway's own
  "we consider" says.

A claim that sits inside this regime: "the paper's ± are SDs over 10 ordering subsets"; "the interval
is reported in PPL"; "no 7–8B checkpoint is evaluated"; "TUBE's bound holds for any positive ψ".
A claim that sits **outside** it: anything asserting a parameter scale for Table 2, anything reading
the Takeaway as a statement about shipped 8B diffusion LLMs, and anything citing a numeric
ELBO-to-TUBE width as the paper's own figure.

## DEFECTS FOUND

1. **Cut-grammar defect on string 1, and it runs against the quoter.** "Our empirical study is limited
   to BM" is verbatim, but the sentence continues "...which is the dominant inference-time paradigm of
   large-scale MDMs such as LLaDA 2.0 and Mercury". Cut at "BM", the string reads as a bare concession
   of narrow scope; in full, the clause is a **defence** of the scope — the authors argue BM *is* the
   operative paradigm. Quoting the fragment alone makes the limitation sound broader than the authors
   say it is.
2. **Cut-grammar defect on string 2.** "In every configuration the AO-ARM/MDM PPL lies strictly above
   the ARM" is verbatim, but the clause ends mid-sentence before "across all block sizes and generation
   regimes **we consider**". The self-limiting qualifier is in the dropped half. "Every configuration"
   means every row of Tables 2–3, not every configuration in the field.
3. **A parameter scale the paper does not print.** The claim-set asks "at what parameter scale?".
   Answer: **the paper states none, anywhere.** Any parameter figure attached to Table 2 downstream is
   inherited from Arriola et al. (2025) — someone else's front matter — and must be labelled as such.
   This also makes "report the largest model it evaluates" unanswerable in parameters from this source.
4. **The sandwich width is a conversion nobody in this paper performed.** The paper prints endpoints
   and a *different* gap (TUBE−ARM). Published is not performed: it **DEFINES** and **BOUNDS** the
   interval (eq. 10, Algorithm 1) and **MEASURES** its endpoints, but it never **PRINTS** the width.
   Reporting e.g. "a 5.85 PPL sandwich" as the paper's number would be attributing the reader's
   arithmetic to the authors.
5. **The rightmost column is undefined in the source.** "Gap: TUBE−ARM" has no caption or text
   definition; its meaning is recoverable only by arithmetic on the cells (97.78 − 17.54 = 80.24).
   Worth flagging if the ledger leans on it.
6. **The NFE=1 rows are degenerate and the Takeaway includes them.** At NFE=1 every estimator prints
   the same value (97.78 / 221.54 / 398.63), with no "≥" and no ±. "In every configuration" is
   therefore partly carried by rows where the comparison is trivial and the dispersion undefined.
7. **One sub-threshold row.** The narrowest margin behind "strictly above" is L'=4 AO-ARM:
   TUBE ≥ 17.74 ± 0.01 against ARM 17.54 — a 0.20 PPL gap. In the same row the biased CUBO_{β=2}
   estimator prints **17.50**, i.e. *below* the ARM baseline. The claim survives only because the
   authors read it off the unbiased-bound column and mark CUBO as biased; that dependence should be
   stated wherever the Takeaway is quoted.
8. **Venue not confirmed at source.** "ICML 2026" is supported by two ICML virtual-session pages
   carrying the title, not by anything I read in the paper's own front matter.
9. **Title short form.** The entry drops the paper's own "TUBE:" prefix. Cosmetic, but front matter
   should be taken from the front matter.
10. **Reader-level caveat, not a defect in the source.** All numbers reached me through a summarising
    reader because the host refused raw curl; the reader's figures were inconsistent between calls
    before the full transcription reconciled them. Flagging rather than silently trusting.

Not defects: the paper's ± claim is stated consistently in two places and the entry records it
correctly; both quoted strings exist verbatim; the paper's silence on 7–8B checkpoints is an explicit,
acknowledged limitation (§6), not an evasion.

## ROUTES THAT FAILED

- `curl https://arxiv.org/html/2605.24292v1` — **failed**: `curl: (56) CONNECT tunnel failed,
  response 403`; agent-proxy reported `arxiv.org:443 — connect_rejected`. Tool-scoped, not a host
  block: WebFetch served the same URL. No workaround attempted beyond switching tool, per instruction.
- §5.1 "Results" paragraph — **not reproduced verbatim**: the reader declined to return it even as
  consecutive fragments, citing near-full copying of the source text. I report its content as the
  reader's summary and do **not** present it as a quotation. The Takeaway sentence inside §5.1 *was*
  returned verbatim.
- Sequence/context length for the experiments — **not stated** in what was served (only a general
  remark that non-block MDMs typically use L ~ 10²–10³).

Query budget used: 1 web search, 5 WebFetch (1 abs page, 4 against the HTML full text). No contact
address, name or email was placed in any URL; Unpaywall was not used.

## BEARING ON THE LEDGER ENTRY

The entry's factual spine **holds**. Identity, author order and date are right; both quoted strings are
verbatim; "BM" is the paper's own abbreviation for block models; the ± are standard deviations over 10
ordering subsets, exactly as recorded, and the paper says so twice; the numbers are perplexities, not
nats or bits; and **no shipped 7–8B checkpoint (no LLaDA-8B, no Dream-7B) is evaluated anywhere in the
paper** — those systems appear only as citations.

Three corrections the entry should absorb:

1. **Delete any parameter scale attributed to Table 2.** The paper prints no parameter count at all.
   If the ledger needs a scale, it must cite Arriola et al. (2025) for it and say so.
2. **Do not credit the paper with a sandwich width.** It prints endpoints plus a TUBE−ARM gap; the
   ELBO-to-TUBE width must be computed by the reader. This is the published-is-not-performed line.
3. **Carry the dropped halves of both quotations.** String 1's continuation defends the BM-only scope
   rather than conceding it; string 2's continuation contains the "we consider" qualifier that bounds
   "every configuration" to Tables 2–3. An entry that quotes either string without its second half
   overstates the paper in opposite directions.

Scope verdict: the entry's use of this source is **inside** the paper's regime for the ± semantics, the
units, the model class and the absence of large checkpoints; it strays **outside** it on parameter
scale and on any numeric interval width.
