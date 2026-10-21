# VERIFY — Yao, arXiv:2606.00997v1

Checker: fresh context. Date of check: 2026-10-21.

## CLAIM

As the ledger ENTRY cites it:

- (a) Source is Yao, "Decoding in Order-Agnostic Language Models: Chain-Rule
  Deviation and Uniform Spreading", arXiv:2606.00997v1. Verify identity and
  front matter as served, including the FULL author list (the entry's short
  form names only one author).
- (b) The paper records "a spread of about 0.49 nats per token over six reveal
  orders on one checkpoint, **in Section 4.2**".
- (c) Is any ELBO or autoregressive baseline in frame in that section?
- (d) What it measures: unit, endpoint, comparator, estimand.
- (e) Regime: model, scale, corpus.

## READ LEVEL

**Full text.** Abstract/front matter read at https://arxiv.org/abs/2606.00997;
body read at https://arxiv.org/pdf/2606.00997v1, including Section 4
(4.1, 4.2, Table 1), the Figure 1 caption, the Introduction and Appendix A.1.

Caveat on the read: all reading went through the WebFetch summariser. It
returned short verbatim fragments but **refused** a request to return the
Finding 1 / Figure 1 caption / Appendix A.1 passages as ordered consecutive
segments ("that would recreate the full text"). I therefore offer **no
reconstructed full sentences** — only the fragments it served, marked as such.
Nothing below is completed by inference across a cut.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter (claim a)

- Title, as served: **"Decoding in Order-Agnostic Language Models: Chain-Rule
  Deviation and Uniform Spreading"** — matches the entry exactly.
- Author list, as served on the abs page: **Lin Yao, sole author.** The
  page-1 affiliation line gives School of Computer Science, Shanghai Jiao Tong
  University (Shanghai, China) and Zhongguancun Academy (Beijing, China).
  A contact email appears on page 1; not reproduced here.
- Identifier: **arXiv:2606.00997v1**. Submission date of v1: **2026-05-31**.
  Primary and only subject category: **cs.CL**. No comments field, no
  journal-ref.
- So the entry's short form is NOT a truncation of a longer list: this paper
  genuinely has one author. The flag in the task ("a short form may name only
  one author") does not fire here.
- Second-route verification of the author list was attempted and failed
  (see ROUTES THAT FAILED). A web search surfaced no listing with a different
  author list.

### Section 4.2 and the number (claim b)

Section heading as served: **"4.2 Uniform-Spreading Validation: Oracle
Orderings on Fixed Sequences"**, under "4 Experiments".

What §4.2 **prints**, in a sentence in "Finding 1" that refers the reader to
Fig. 1a — fragment as served:

> "log P/n ranges from -3.00 (Forced-AR) to -3.49 (Oracle min-q)."

and it characterises that gap, as served, as:

> "a $\sim 0.5$-nat-per-token spread"

**The string "0.49" does not appear in Section 4.2.** The summariser, asked
directly, reports it appears in three other places:

- the **Abstract**: "up to 0.49 nats/token";
- the **Introduction**: the reveal order "shifts log P/n by up to 0.49 nats
  per token";
- **Appendix A.1**, fragment as served: "changes $\log P/n$ by up to 0.49
  nats/token across reveal orders."

So, answering the task's NAME THE NUMBER instruction precisely:

| question | answer |
|---|---|
| Does the paper print 0.49? | **Yes** — Abstract, Introduction, Appendix A.1. |
| Does **Section 4.2** print 0.49? | **No.** §4.2 prints `-3.00`, `-3.49` and "~0.5-nat-per-token spread". |
| Units | nats per token (mean log P/n). |
| Where printed | A **sentence** (Finding 1) pointing at **Fig. 1a**. No table prints it. Table 1 does sit inside §4.2 but reports *generated-sequence* diagnostics (e.g. "Mean log q" of -0.631), not the fixed-sequence spread. |
| Over how many orders | **Six strategies**, each yielding one reveal order, plotted in Fig. 1a: FORCED-AR, REVERSE-AR, RANDOM, ORACLE MAX-q, ORACLE MARGIN, ORACLE MIN-q. The 0.5/0.49 figure is the **range between two of them** (Forced-AR at the top, Oracle min-q at the bottom), not a dispersion statistic computed over six values. |
| On which checkpoint | **LLaDA-2.1-mini**, one checkpoint. Named in §4.1 and in the Fig. 1 caption, **not** in the §4.2 body. |
| Is 0.49 someone's arithmetic? | It is **exactly** the difference of the two printed endpoints: 3.49 − 3.00 = 0.49. But the paper performs that subtraction itself and prints 0.49 (Abstract, Intro, App. A.1). So 0.49 is **the paper's own figure**, stated elsewhere in the paper; it is not a third party's arithmetic on §4.2's endpoints. §4.2 itself rounds it to "~0.5". |
| The paper's own hedge | "**up to** 0.49" — an upper bound over the orders tried, not a typical or expected spread. |

Second quantity in the same Finding set, for completeness: a **Spearman
rho approximately -0.77** between Var_pi and log P/n. That is a correlation,
not a spread, and should not be confused with the 0.49.

### ELBO / autoregressive baseline (claim c)

**Stated plainly: absent.** Asked to search the whole paper, the read reports
that **"ELBO", "evidence lower bound" and "variational" appear nowhere in the
paper**, and the phrase "autoregressive baseline" appears nowhere.

- "Autoregressive" does appear — Introduction ("arbitrary-order autoregressive
  models"), Related Work, Section 3, and the reference list.
- In §4.2 there is **no separate autoregressive model**. FORCED-AR is a
  **left-to-right reveal order imposed on the same diffusion LLM**, and §3
  explicitly notes it is **not** equivalent to a true causal AR model.
- Consequently §4.2 contains **no ELBO, no variational bound, and no external
  AR likelihood** against which the per-order log P/n values are anchored. The
  comparison is internal: the same model's teacher-forced likelihood of the
  same fixed target under different reveal paths.
- Per the task's rule (9): the paper not mentioning an ELBO is **silence**, not
  a flag; the paper does not itself identify this as a gap.

### What it measures (claim d)

In the paper's own terms, as served:

- **Unit of analysis**: one C4 example's **fixed 128-token target
  continuation** x*, conditioned on a **32-token prefix**, with block size 32.
  **1,000 C4 examples** in §4.2.
- **Endpoint**: mean **log P/n in nats per token**, where n = 128 and
  log P = sum over reveal steps t of log q_t, with
  q_t = p_theta(x*_{pi(t)} | R_{t-1}, c) — the model's conditional probability
  of the **target** token at the position revealed at step t, given the already
  revealed tokens R_{t-1} and the prompt c. This is **teacher-forced scoring of
  a fixed sequence**, not generation.
- **Comparator**: the six reveal strategies against **each other**, on the
  **same** fixed target sequences. No external model, no human reference, no
  bound.
- **Estimand**: the **across-order range (max minus min) of a
  length-normalised log-likelihood of one and the same fixed target**, used as
  evidence that "the learned conditionals are not exact factorizations of a
  coherent joint distribution" (abstract fragment as served). Under an exact
  joint, that range would be zero; the measured quantity is the **deviation
  from order-invariance**, not a quality score.
- RANDOM uses a **single fixed seed**; the paper does not state how many random
  orders are sampled per example beyond that one seeded order.

### Regime (claim e)

- **Model**: LLaDA-2.1-mini — a masked discrete-diffusion / order-agnostic LM.
  One checkpoint. **Parameter count is not stated in the text.** Vocabulary
  size 32,000 (Appendix A.1).
- **Corpus**: C4, 1,000 examples for §4.2's fixed-sequence experiment.
- **Operating condition**: 32-token prefix, 128-token target continuation,
  block size 32, teacher-forced scoring of a held-fixed target.
- The paper's wider claims also draw on C4 plus four downstream benchmarks, but
  the 0.49 / ~0.5 figure is **C4 fixed-sequence only, one checkpoint**.

## REGIME, and whether the claim sits inside it

The 0.49 figure is established in this regime: **one checkpoint
(LLaDA-2.1-mini), one corpus (C4, 1,000 examples), fixed 128-token targets,
teacher-forced scoring, six hand-specified reveal orders, two of which are
TARGET-AWARE ORACLES.**

The decisive regime point: the **lower endpoint (-3.49) is ORACLE MIN-q** — an
ordering constructed **with knowledge of the target** so as to reveal
low-probability tokens. The upper endpoint is FORCED-AR, left-to-right. So
0.49 nats/token is the gap between a **left-to-right path and a deliberately
adversarial target-aware path**. It is **not** the spread among orders a
deployed order-agnostic decoder would actually produce — the paper's own
Finding 2 is that confidence-first decoding stays close to left-to-right, i.e.
near the *top* endpoint.

- A ledger entry using 0.49 as "how much the reveal order can shift
  log-likelihood on this model, at worst, including oracle orders" **sits
  inside** the regime, and matches the paper's own "up to".
- A ledger entry using 0.49 as "how much practical decoding-order choice shifts
  log-likelihood" **sits outside** it. The paper is silent on that; its own
  evidence points the other way.

## DEFECTS FOUND

1. **Section misattribution (the specific figure).** The entry says the
   0.49 nats/token spread is recorded "in Section 4.2". **§4.2 does not print
   0.49.** It prints the endpoints -3.00 and -3.49 and the rounded phrase
   "~0.5-nat-per-token spread". The exact 0.49 is printed in the Abstract, the
   Introduction and Appendix A.1. The *measurement* is §4.2's; the *number as
   quoted* is not in §4.2. This is a locator defect, not a fabrication.
2. **"over six reveal orders" misdescribes the statistic.** Six orders are
   compared, but 0.49 is a **two-point range** between Forced-AR and Oracle
   min-q. It is not a spread computed over six values (no SD, no IQR, no
   variance over orders is printed for log P/n). "Range across six orders" is
   defensible; "spread over six reveal orders" invites reading it as a
   dispersion measure over all six.
3. **Regime defect, the one most likely to move a verdict: the min endpoint is
   a target-aware oracle.** Detaching 0.49 from the qualifier "including
   target-aware oracle orderings" converts a worst-case probe into an apparent
   operating-condition sensitivity. This is the "pressure logged during a
   deliberate test cited as an operating value" failure mode.
4. **The paper's hedge is dropped.** The paper says "**up to** 0.49"; the entry
   says "**about** 0.49". "Up to" is an upper bound over the orders tried;
   "about" reads as a central value. §4.2's own wording is the even softer
   "~0.5".
5. **Checkpoint identification is correct but not sourced where the entry puts
   it.** "One checkpoint" is right — LLaDA-2.1-mini — but §4.2's body does not
   name it; it comes from §4.1 and the Fig. 1 caption. The Abstract says only
   "LLaDA-2.1".
6. **Not a defect, recorded to pre-empt one:** the absence of an ELBO or an
   autoregressive baseline in §4.2 is real and total (the words do not occur in
   the paper at all), but the paper nowhere flags this as a limitation. Per
   rule (9), silence is not a prohibition — any ledger claim that the paper
   *acknowledges* this gap would be unsupported.
7. **Single-seed RANDOM.** The RANDOM order is one fixed seed per example. No
   uncertainty is carried on any of the six per-order means; no error bars or
   CIs are printed for log P/n in §4.2. Re-deriving 0.49 at the author's own
   stated precision is therefore possible (3.49 − 3.00) but carries **no stated
   uncertainty** — the paper publishes none.

## ROUTES THAT FAILED

1. `http://export.arxiv.org/api/query?id_list=2606.00997` — **WebFetch
   ROBOTS_DISALLOWED**. Intended as an independent machine-readable confirmation
   of the author list. Not retried, not worked around.
2. **Summariser refused segmented quotation reconstruction.** A request for the
   Finding 1 sentence, the Fig. 1a caption and the Appendix A.1 sentence as
   ordered consecutive sub-125-character segments was declined as reproducing
   the full text. Short fragments were served instead. Consequence: the
   quotations above are **fragments as served**, and **no reconstruction is
   offered**; the grammar on the far side of each cut is therefore unverified
   for the Finding 1 sentence beyond the clause quoted.
3. No other route was attempted; PMC/Europe PMC/doi.org are irrelevant to an
   arXiv preprint and were not tried. Query budget used: 1 search, 4 fetches.

## BEARING ON THE LEDGER ENTRY

The source is **real, open, and reads at full text**, and the substance of the
entry survives: this paper does measure, on one order-agnostic checkpoint, that
changing only the reveal order moves a length-normalised log-likelihood of a
fixed target by up to 0.49 nats per token, and it does so with **no ELBO and no
autoregressive baseline anywhere in frame** — those terms do not occur in the
paper. Claim (c) is confirmed as a plain absence.

Three corrections the entry needs:

- Move the locator. The exact figure 0.49 is printed in the **Abstract,
  Introduction and Appendix A.1**; **Section 4.2 prints -3.00, -3.49 and
  "~0.5"**. Cite §4.2 for the measurement and Appendix A.1 (or the Abstract)
  for the number.
- Restore the qualifier. Write "**up to** 0.49 nats/token, between a
  left-to-right order and a **target-aware oracle** (Oracle min-q) order",
  not "a spread of about 0.49 over six reveal orders". Without the oracle
  qualifier the entry states a worst-case probe as an operating-condition
  spread, and the paper's own Finding 2 (confidence-first decoding hugs
  left-to-right) cuts against that reading.
- Note that the paper **publishes no uncertainty** on these per-order means,
  so 0.49 carries none.

If the ledger entry's un-asked question concerns whether order-agnostic
decoding papers quantify chain-rule deviation **against a likelihood anchor**
(ELBO or AR), this source is good evidence that this one does not — but the
entry must not imply the paper notices the omission. It does not discuss it.

Sources consulted:
- https://arxiv.org/abs/2606.00997
- https://arxiv.org/pdf/2606.00997v1
