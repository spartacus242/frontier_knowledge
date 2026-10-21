# VERIFY — arXiv:2603.01367v2 (DUEL)

## CLAIM

Ledger entry cites: Turok, De Sa, Kuleshov, "Exact Likelihood for Masked Diffusion via
Deterministic Unmasking" (DUEL), arXiv:2603.01367v2, ICML 2026. Recorded as read in full at
Gate 2 and by adversary 2, 8B figures reproduced identically. The entire rejection rests on
this paper. Sub-claims checked: (a) identity; (b) Table 5 numbers; (c) the "gap shrinks by up
to 32% / 82%" string; (d) the "ELBO measures p_theta^{pi^unif}" string plus "LLaDA-8B-Base"
and L=2048; (e) whether perplexity is the only unit and whether the ELBO-to-DUEL difference is
decomposed into variational slack vs. change of scored distribution; (f) regime.

## READ LEVEL

**Full text**, via WebFetch on https://arxiv.org/abs/2603.01367 (front matter, abstract,
version history) and three reads of https://arxiv.org/pdf/2603.01367 (abstract, Sec. 5.1,
Sec. 6.1, Thm. 4.3, Tables 1–7 with captions and cells, Appendix D.1 Models).
One gap in the read: **Table 8 ("Full zero-shot perplexities") was named in the table list but
its cells were not served.** Everything reported below about units, dispersion and
decomposition therefore carries that one caveat, and it is the only part of the paper I did
not see. 4 fetches, 0 searches; no fetch or search was refused.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) IDENTITY — exists, with one mismatch

Identifier resolves. Front matter as served on the abs page:

- Title: **"DUEL: Exact Likelihood for Masked Diffusion via Deterministic Unmasking"**
  (the entry drops the "DUEL:" prefix and restores it parenthetically — same paper)
- Authors, in order: **Gilad Turok, Chris De Sa, Volodymyr Kuleshov** — matches the entry's
  three authors in the recorded order
- v1 submitted 2026-03-02; **this version v2, 2026-03-10** — version matches
- Subjects: cs.LG
- **Journal/venue comment: none listed.**
- PDF running header as served: **"Preprint. March 11, 2026."** No mention of ICML or any
  venue or acceptance anywhere in the PDF — not in a header, footnote or acknowledgements.

So: identifier, title, authors, order and version are as recorded. **"ICML 2026" is not
supported by the document.** The paper presents itself as a preprint.

### (b) THE NUMBERS AND WHERE THEY ARE PRINTED

**Table 5**, caption as served:

> "Zero-shot perplexity (↓) for 8B models. **Bold**: better of ELBO/DUEL."

Columns: Model | Method | Wikitext | Lambada | AG News. Rows and cells as served:

| Model | Method | Wikitext | Lambada | AG News |
|---|---|---|---|---|
| Llama3 | Exact | 7.94 | 32.40 | 41.29 |
| LLaDA | ELBO | ≤15.29 | ≤39.04 | ≤85.17 |
| LLaDA | DUEL | **14.50** | **36.00** | **78.91** |

**Every figure recorded in the entry appears in Table 5, in the recorded cell.** Wikitext
7.94 / ≤15.29 / 14.50; Lambada 32.40 / ≤39.04 / 36.00; AG News 41.29 / ≤85.17 / 78.91.
DUEL cells are bolded as the better of the two LLaDA estimates.

Two differences from the recorded form, both small:
1. The recorded caption, "Zero-shot perplexity for 8B models", omits the served "(↓)" and
   the second sentence "Bold: better of ELBO/DUEL."
2. The entry carries "at most" on the Wikitext ELBO (15.29) only. **The served table marks
   all three ELBO cells with ≤** (≤15.29, ≤39.04, ≤85.17). The entry's Lambada 39.04 and AG
   News 85.17 are printed as upper bounds, not point estimates.

Worth stating because the rejection rests here: in Table 5 **DUEL does not bring LLaDA level
with Llama3 in any column** (14.50 vs 7.94; 36.00 vs 32.40; 78.91 vs 41.29).

### (c) "the MDM-autoregressive perplexity gap shrinks by up to 32% on in-domain data and 82% on zero-shot benchmarks"

Checked alone. **Present, once, in the ABSTRACT.** Not in the introduction or results.

Reconstruction from 2 consecutive served segments (the sentence containing the string):

> Seg1: "MDMs are substantially better than previously thought: the MDM-autoregressive perplexity gap"
> Seg2: " shrinks by up to 32% on in-domain data and 82% on zero-shot benchmarks."

Assembled (reconstruction, 2 fragments, junction after "gap"):
"MDMs are substantially better than previously thought: the MDM-autoregressive perplexity gap
shrinks by up to 32% on in-domain data and 82% on zero-shot benchmarks."

Preceding sentence, reconstruction from 2 consecutive segments:
> Seg1: "This proper perplexity is the natural analogue of autoregressive perplexity and lets us revisit key"
> Seg2: " questions about MDMs."

Grammar on both sides of the cut: the entry's quoted string starts at "the MDM-autoregressive",
dropping the lead-in "MDMs are substantially better than previously thought:". That lead-in
does not weaken the string. The load-bearing word inside the string is **"up to"** — these are
maxima over benchmarks, not typical or mean reductions. The per-dataset numbers behind the 82%
live in **Table 4, "Gap closed (%) on zero-shot evaluation"**, which "omits Lambada and
Scientific Papers" from the zero-shot corpora list.

### (d) "the ELBO measures p_theta^{pi^unif}, not the test-time distribution"

Checked alone. **Present, once, in Section 5.1 ("Limitations of Existing Metrics")** — not the
abstract, introduction or results. As served, with symbols as typeset:

> "even if the bound were tight, the ELBO measures $p_{\theta}^{\pi^{\mathrm{unif}}}$ , not the test-time distribution"

The entry's cut begins at "the ELBO measures", dropping the concessive opener **"even if the
bound were tight,"**. The dropped clause does not reverse the claim — it strengthens it — but
it is the one place the paper itself names the two effects as separate, which matters for (e).

A second, looser formulation of the same point appears in the **introduction**: the ELBO
"measures the wrong distribution". That formulation is unhedged and carries no number.

**"LLaDA-8B-Base"** — present, once, **Appendix D.1 (Perplexity Gap Experiments, Models)**:
> "we evaluate LLaDA-8B-Base (Nie et al., 2025) with sequence length L=2048"

**L=2048** — confirmed, in that same sentence, and that is the only occurrence of 2048.

### (e) PUBLISHED IS NOT PERFORMED — units, normalisation, decomposition

**Units.** Every result in the paper is printed as **perplexity**. No table and no sentence
reports **nats per token or bits per token**. The paper **does not state a log base** and
**does not state a per-token normalisation** for the reported perplexities; the ELBO is
described as a K-sample Monte Carlo estimate without stating the normalisation. (Caveat:
Table 8's cells were not served.)

**Decomposition — none appears.** The paper prints **one combined difference** and never
splits it into (i) variational slack against the uniform-order marginal and (ii) the change of
scored distribution induced by the deterministic unmasking policy. Specifically:

- Tables 2 and 3 (in-domain, OWT and LM1B): ELBO bound (≤) and DUEL value side by side, with a
  **"Gap Closed"** column from **Eq. (7)** — a single combined ratio.
- Table 4: combined gap closed (%) per dataset and model only.
- Table 5: ELBO and DUEL side by side; no separation.
- Table 6 (DUEL by unmasking rule, OWT): ELBO given as a single bound (≤23.52) and described as
  invariant to rule and NFE — this shows the ELBO does not move, it does not isolate slack.
- Table 7 (oracle, AG News, BD3-LM L'=4): compares rules and an oracle; no ELBO-to-DUEL
  decomposition at fixed ordering.
- Section 5.1: states qualitatively that the "variational gap... can be substantial" —
  **no tightness or slack measurement**.
- Section 6.1: notes that "Δ_ELBO may overestimate the true gap" — again **no number**.
- **The paper never computes an exact likelihood under the uniform ordering**, so the
  variational slack against p_theta^{pi^unif} is never measured.

Using the required vocabulary: on the slack/policy split the paper **DEFINES** and
**DISCUSSES** the distinction (Sec. 5.1, Sec. 6.1) and **MEASURES** only the combined
ELBO-vs-DUEL difference and its "gap closed" ratio. It does not measure either component.

### (f) REGIME

**Exactness claim.** Abstract, as served: "We prove that DUEL samplers admit exact likelihood
computation under the test-time distribution". **Theorem 4.3**: "Let (x_θ, F) be a DUEL
sampler. Algorithm 2 computes" the log-likelihood exactly. The distribution the likelihood is
exact for is **p_theta^{pi^F}, the test-time distribution induced by the deterministic
unmasking policy pi^F** — explicitly *not* the uniform-random training distribution
p_theta^{pi^unif}. Exactness is a property of the sampler-induced distribution, conditional on
a deterministic position-selection rule.

**Checkpoints and corpora.**
- Small-scale / in-domain, **110M**: ARM baseline, SEDD, MDLM, BD3-LM with L' ∈ {4, 8, 16};
  "All 110M models", 12-layer DiT, hidden dim 768, 12 heads. No public checkpoint names given.
  Corpora: **OpenWebText (OWT)** and **LM1B**. Zero-shot (trained on OWT): PTB, Wikitext,
  LM1B, Lambada, AG News, Scientific Papers (PubMed, ArXiv) per Appendix D.1.
- Large-scale / 8B zero-shot: **LLaDA-8B-Base** (Nie et al., 2025) and **Llama3-8B-Base**, at
  **L=2048**, on **Wikitext, Lambada, AG News** — that and only that is Table 5.
- The 7.94 Wikitext baseline is labelled **Llama3-8B-Base**, but the paper's only citation for
  it is **Touvron et al. (2023)**, the LLaMA paper, which is not Llama 3. The precise
  checkpoint is not identifiable from the text.

**Dispersion.** **No standard errors, confidence intervals or any dispersion measure are
printed with the perplexity numbers** — not in Table 5 and not elsewhere in the text served.
Three seeds, bootstrap intervals, Monte Carlo error on the K-sample ELBO estimate: none
reported. (Caveat: Table 8 unseen.)

**A second regime in the abstract that is not Table 5's.** The abstract also reports that
oracle search over position orderings lets MDMs surpass autoregressive models on AG News,
**36.47 vs. 52.11**. That is **Table 7**: **BD3-LM with L'=4**, oracle search over all 4!
block permutations, at the 110M scale, and the oracle **requires ground-truth tokens**, which
the paper acknowledges. Its AR comparator is 52.11, whereas the 8B AR comparator on the same
corpus in Table 5 is 41.29. The "MDMs surpass AR" result and the 8B figures are different
regimes and different comparators.

## DEFECTS FOUND

1. **Venue is unsupported.** The entry records "ICML 2026". The arXiv page lists no journal
   reference and the PDF header reads "Preprint. March 11, 2026."; ICML appears nowhere in the
   document. This is a front-matter attribution the source does not carry.
2. **Dropped inequality on two of three ELBO cells.** The entry carries "at most" on 15.29 only.
   Table 5 prints ≤ on all three ELBO figures (≤15.29, ≤39.04, ≤85.17). Any arithmetic the
   ledger performs on 39.04 or 85.17 as point values is arithmetic on an upper bound.
3. **Caption recorded short.** Served caption includes "(↓)" and "Bold: better of ELBO/DUEL."
4. **The 32% / 82% figures are abstract-only maxima.** The string is verbatim and occurs once,
   in the abstract, and the governing qualifier is "up to". Any use of 82% as a general or
   typical zero-shot effect is outside the qualifier. The per-dataset basis is Table 4, which
   omits Lambada and Scientific Papers.
5. **(d)'s cut removes "even if the bound were tight,".** Not a reversal — but that clause is
   the paper's own statement that bound-looseness and distribution-mismatch are two separate
   things, which bears directly on defect 6.
6. **PUBLISHED IS NOT PERFORMED: the decomposition the entry's kill would need is not printed.**
   The paper defines and discusses the slack-vs-policy distinction (Sec. 5.1, Sec. 6.1) and
   measures only the combined ELBO-to-DUEL difference plus a "gap closed" ratio (Eq. 7, Tables
   2–5). No exact likelihood under the uniform ordering is computed, so variational slack is
   never measured; neither component number exists anywhere in the paper.
7. **No nats/bits per token, no log base, no stated per-token normalisation.** If the ledger
   quotes a nats- or bits-per-token figure derived from these perplexities, that is the
   ledger's arithmetic, not the source's: the source prints perplexity only.
8. **No dispersion anywhere.** The 8B figures are single numbers with no error bar, and the
   ELBO is a Monte Carlo estimate with no reported MC error. "Reproduced identically" by two
   readers is reproduction of printed digits, not evidence of stability.
9. **Source-internal citation defect, carried forward.** "Llama3-8B-Base" is cited to Touvron
   et al. (2023) (LLaMA 1). The identity of the 7.94 "Exact" baseline is not pinned down by
   the paper.
10. **Regime hazard in the abstract's headline.** The only result where an MDM beats an AR
    model (36.47 vs 52.11, AG News) is a 110M BD3-LM with an oracle that uses ground-truth
    tokens (Table 7), not the 8B setting of Table 5, and its AR comparator differs (52.11 vs
    41.29). A rejection that leans on "MDMs surpass AR" would be using a result proved in a
    regime it was not used for.
11. One read gap, declared: **Table 8's cells were not served.** It is cited in the text as
    "Full zero-shot perplexities".

## ROUTES THAT FAILED

None. Both recorded routes worked on first attempt:
- https://arxiv.org/abs/2603.01367 — served front matter, version history, abstract summary
- https://arxiv.org/pdf/2603.01367 — served abstract, Thm. 4.3, Sec. 5.1, Sec. 6.1, Appendix
  D.1, and Tables 1–7 with captions and cells (three reads)
No search or fetch was refused. No DOI, publisher, PMC or Europe PMC route was needed. No
personal identifier was placed in any URL, header or query; Unpaywall was not used.
Budget used: 0 of 6 searches, 4 of 5 fetches.

## BEARING ON THE LEDGER ENTRY

The source is **real, open, and says what the entry says it says on the facts the entry
quotes**. It is a **primary methods paper** (theory plus experiments), self-presented as a
preprint, not a review and not a guideline; the exactness result is its own (Thm. 4.3), not
attributed elsewhere. Identity, authors, order, version, Table 5's caption subject, and all
nine Table 5 figures check out. Both quoted strings are verbatim and locatable, and
"LLaDA-8B-Base" and L=2048 are confirmed in Appendix D.1.

What moves is the **narrowness of the kill, and the venue line**. Two things the entry should
be corrected on:

- Strike "ICML 2026" or mark it unverified. The document is a preprint with no venue.
- Restore ≤ on all three ELBO cells.

And one thing the entry should be tested against, because it is the live question: **if the
rejection requires the paper to have separated variational slack from the change of scored
distribution, the paper does not do that.** It names the distinction in prose, twice, without
numbers ("the variational gap... can be substantial"; "Δ_ELBO may overestimate the true gap"),
and prints only the combined ELBO-vs-DUEL difference and a "gap closed" ratio. It never
computes an exact likelihood under the uniform ordering. So a kill that only needs "the ELBO
scores the wrong distribution, and DUEL's numbers are lower" is fully supported here. A kill
that needs "and here is how much of the difference is slack and how much is distribution
change" is **not** supported: that quantity is defined and discussed in this paper, not
measured. Likewise, any nats- or bits-per-token restatement of these results, and any claim
about the stability of the 8B figures, go beyond what is printed — the paper reports perplexity
only, with no log base, no stated normalisation and no dispersion.
