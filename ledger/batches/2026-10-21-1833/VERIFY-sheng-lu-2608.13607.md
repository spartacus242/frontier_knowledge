# VERIFY — Sheng & Lu, arXiv:2608.13607

Checker run: 2026-10-21. Fresh context. Query budget: 6 searches / 5 fetches.
Spent: 0 searches, 5 fetches (cap reached), 1 curl attempt (refused).

## CLAIM

As the ENTRY cites it: Sheng & Lu, "No Universal Signal Predicts Sample-Level LLM
Regression under Version Updates", arXiv:2608.13607, "read in full by both
adversaries via a mirror."

Sub-claims handed to me:

- (a) Identity and front matter as served, authors in order.
- (b) Negative flip rate defined as the probability that a sample correct under the
  old version is incorrect under the new one, in Section 3.1 Equation 2. Quote it.
- (c) Tables A4-A6 print: MMLU-Pro 24.7-29.3%, GPQA 41.5-47.2%, GSM8K 2.6-23.6%,
  MATH-full 5.2-55.2%, HumanEval 10.4-25.4%, MBPP 10.1-14.0%, with denominators.
- (d) Are the version pairs open-weight checkpoints of one family with both still
  runnable, or a retired commercial snapshot and its vendor-designated successor?
  Any within-version repeat-run control?
- (e) Does the paper measure any share of published CONCLUSIONS reversing?
- (f) Regime: model families, benchmarks, binary correctness or declared distance.

## READ LEVEL

**Split, and the split is the main thing this note reports.**

- **Body: read (indirectly).** Abstract page read as served. Main body read through
  the arXiv HTML rendering at `https://arxiv.org/html/2608.13607v1`, whose converted
  text is **81,825 characters** in total — a figure the fetcher stated outright when
  I asked for an offset past it. Within that text I obtained Section 3.1, the model
  and benchmark setup, the decoding protocol, and Section 4 results.
- **Appendix Tables A4-A6: COULD NOT READ.** Not "not found" — **could not read.**
  The arXiv HTML text ends partway through a main-text Section 4 table (markup id
  `S4.T1`), before even that table's HumanEval and MBPP rows, and contains no
  Appendix Table A1-A8 body. The paper *references* Table A1 and Table A8, so the
  appendix exists in the document; the HTML rendering I could reach does not carry
  it. The PDF returned no machine-readable text through this fetcher. My fetch cap
  was then exhausted and, per instruction, I stopped rather than working around it
  (no mirror attempted — ar5iv, alphaXiv, Semantic Scholar all untried for want of
  quota).
- **Quote fidelity caveat, applying to every quotation below.** I never saw raw
  source text. Every string below reached me through the fetcher's summarising
  layer, which I asked for short consecutive fragments. They are reproduced as
  served. I did not see the LaTeX of Equation 2 itself, only the prose that
  introduces it. Treat these as high-confidence paraphrase-free fragments, not as
  a certified verbatim transcription.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity / front matter

From the arXiv abstract page as served:

- Title: **"No Universal Signal Predicts Sample-Level LLM Regression under Version
  Updates"** — matches the entry's citation exactly.
- Authors in order: **Jia Sheng, Yiwei Lu** (two authors).
- Identifier as shown: **arXiv:2608.13607v1**
- Submitted: **2026-08-11**

Opening sentence of the abstract, as served: "Frontier LLMs are updated frequently
and typically outperform their predecessors in aggregate."

**Front-matter caveat (defect-check 7).** These are arXiv's *metadata* fields, not
the PDF title page. I could not read the PDF, so I have not taken authors,
affiliations or any venue line from the printed front matter. No affiliations
obtained. Author order is as arXiv lists it. Nothing contradicts the entry's
short form, but the front-matter check is incomplete.

### (b) The NFR definition — SUPPORTED, with a denominator nuance

Section 3.1 defines the per-sample negative-flip label and then the Negative Flip
Rate. The fetcher reports Equation 2 as **the probability that the new model is
wrong given that the old model was right.** Two sentences, as served (these are two
separate sentences, not consecutive segments of one, so I present them separately
rather than as a single reconstruction):

> frag1: "A negative flip only occurs when the old model is correct and the new
> model is incorrect"

> frag2: "The Negative Flip Rate (NFR) is the corresponding aggregate rate within
> the M_old-correct subset:"

frag2 ends on a colon that introduces Equation 2. The equation body itself I did
not see.

**Verdict on (b): the entry's definition holds.** "Probability that a sample correct
under the old version is incorrect under the new one" is the paper's quantity.

**But flag the denominator, because it is load-bearing for (c).** The paper's NFR is
explicitly a **conditional** rate — "within the M_old-correct subset." The entry's
phrasing ("the probability that a sample correct under the old version is incorrect
under the new one") is *compatible* with that, but it is also readable as a **joint**
rate over all samples (old-correct-and-new-incorrect divided by the full benchmark).
Those differ by a factor of the old model's accuracy, which on GPQA is large. Anyone
reading the entry's recorded percentages — MATH-full up to 55.2%, GPQA 41.5-47.2% —
must read them against the **old-model-correct subset**, not the benchmark. A reader
who takes 47.2% as "47% of GPQA regressed" has inflated it by roughly 1/accuracy.
The entry should carry the conditioning explicitly in the definition line.

### (c) THE NUMBERS — COULD NOT READ. NOT confirmed, NOT contradicted.

**I cannot name a single number from Tables A4-A6, and I cannot name a caption.**
I therefore cannot report where the figures are printed, in what units, or against
what denominator — which is exactly what I was asked to do and exactly what I am
reporting I failed to do.

What I *can* say about the quantitative layer, from the body I did read:

- The main-text table I reached (`S4.T1`, no caption visible in the rendering) is
  **not an NFR table.** Its columns are version transitions; its rows are
  (task, signal) pairs — e.g. MMLU-Pro with `conf_new`, and a likelihood-drift
  signal. Its cells hold **paired** values, e.g. **0.85 -> 0.63** for MMLU-Pro
  `conf_new` under Qwen2.5 -> Qwen3. These are confidence and likelihood figures,
  **not negative flip rates.** Anyone skimming the main text for "the numbers" could
  mistake this table for the NFR table; it is not.
- No per-benchmark NFR minimum or maximum appears anywhere in the body text I read.
  The NFR ranges the entry records are, on my read level, **appendix-only figures.**

**Consequence for the entry's provenance claim.** The entry states both adversaries
"read in full ... via a mirror." That is a claim about a route I could not take. It
is not impeached — a mirror carrying the appendix is entirely plausible — but it is
also **the only support the six recorded ranges now have.** They rest on a source
route no independent checker in this run could reproduce. The ranges should be
marked in the ledger as resting on adversary reads of a mirror, unverified here.

**Also unverified, and a distinct question:** whether the tables print **denominators**
at all. The entry records the ranges "with denominators." Whether Tables A4-A6 print
the size of the old-model-correct subset per pair per benchmark, or only the
percentage, I could not establish. If they print only percentages, then any
back-computed count is the entry author's arithmetic, not the source's — and the
ledger must say so.

### (d) THE REGIME QUESTION — the paper answers it, and the answer favours the entry

**Open-weight, every pair.** The paper says the models are **"all open-weight"**, and
gives its own reason, as served:

> "these signals require white-box access to hidden states, attention weights, and
> output logits."

That is a method-driven constraint, not an incidental one: the signals under study
are *not computable* on a commercial API snapshot. So the paper's design **excludes**
the retired-commercial-snapshot regime by construction. **None of the pairs is a
vendor-designated successor to a retired API model.**

Version pairs, as served — **six update pairs across four model families**, described
as five same-family updates plus one boundary case:

| pair | as served |
|---|---|
| 1 | Qwen2.5 -> Qwen3 |
| 2 | Llama-3 -> Llama-3.1 |
| 3 | Mistral v0.2 -> v0.3 |
| 4 | Qwen2 -> Qwen2.5 |
| 5 | Gemma 1.1 -> Gemma 2 |
| 6 | boundary case, reported as Llama-2 -> Llama-3 — **UNCERTAIN** |

**Two flags on this table.** (i) The fetcher warned the rendering's arrow glyphs are
garbled at the boundary-case entry and said the labels should be checked against
Appendix Table A1 — which I could not read. (ii) Main-text table `S4.T1` carries only
**five** transition columns (pairs 1-5); the sixth appears only in text and the
unread appendix. So the sixth pair's identity, and what makes it a "boundary case"
when Llama-2 -> Llama-3 is itself same-family, is **not established by my read.**

**"Both still runnable" — the paper does not print this, and the distinction matters.**
There is no sentence about the older version's continued availability. What the paper
*does* establish is stronger than availability in one respect and weaker in another:
the stated white-box requirement **entails** the authors ran both checkpoints locally
and extracted internals from each. That is the method, not a claim about today. So:
both versions were runnable by the authors at study time, as a logical consequence of
the stated method; whether they remain available is **silence in the source**, and
silence is not assertion. The ledger should say "open-weight checkpoints the authors
ran locally," not "both still runnable," unless it wants to own that inference.

**Within-version repeat-run control — THERE IS NONE, and the design forecloses one.**
This is the sharpest thing I found and it cuts against a comfortable reading. As
served:

> frag1: "We generate answers using greedy decoding by setting temperature to 0"

> frag2: "As a result, we obtain reproducible answers and our negative-flip labels
> are deterministic."

The fetcher adds that the paper contrasts its **single greedy decode per model** with
repeated sampling used in prior work.

Read that carefully. The paper does not *measure* run-to-run variance and find it
small. It **eliminates** run-to-run variance by fiat — temperature 0, one decode,
deterministic labels — and then reports flips. A within-version repeat-run control is
the thing that would tell you how much of a 24.7% or 55.2% NFR would appear between
**two identical runs of the same checkpoint**. The paper runs no such control and, at
temperature 0 with a single decode, structurally cannot: its own protocol makes that
control degenerate (it would return ~0 by construction, modulo nondeterministic
kernels, which the paper does not discuss). So the paper neither bounds nor rules out
decoding noise as a contributor — it defines it away. **Any use of this paper as
evidence about the magnitude of "real" regression under stochastic or
production-temperature decoding is outside its regime.**

### (e) SHARE OF PUBLISHED CONCLUSIONS REVERSING — ABSENT. Stated plainly.

**No. The paper measures no share of published conclusions, findings, scientific
claims or paper results reversing.** Nothing of the kind appears in the body I read,
and the paper's unit of analysis is incompatible with it (see REGIME below): the unit
is a **benchmark sample**, not a published conclusion. The nearest thing in the paper
is the aggregate-hides-sample-level argument in the abstract, which is about
benchmark items, not about literature.

**Read-level honesty on this one:** this absence is established over the body text
only. I could not read the appendix. An appendix table of per-benchmark flip rates
would not be a share-of-conclusions figure regardless, so I am confident in the
negative — but I state it as a body-level negative, not a whole-document one.

**And invoke defect-check 9 against over-reading this.** The paper's silence on
conclusion-reversal is not a finding about conclusion-reversal. If the ledger entry
leans on this source for anything about published conclusions flipping, the source is
**silent**, not supportive, and silence is not a prohibition either.

## REGIME

Stated as precisely as my read level allows.

- **Population / unit of analysis:** the individual **benchmark sample** (question,
  problem or programming task). NFR's denominator is the **M_old-correct subset** —
  samples the old checkpoint answers correctly — not the full benchmark.
- **Model regime:** **open-weight checkpoints only**, four families (Qwen, Llama,
  Mistral, Gemma), six update pairs, predominantly **same-family successive
  versions**, run locally with white-box access to hidden states, attention weights
  and output logits. **Not** commercial API snapshots. **Not** vendor-designated
  successors to retired models.
- **Operating condition:** **greedy decoding, temperature 0, one decode per model.**
  Deterministic labels. No repeated sampling, no seed variation, no within-version
  control.
- **Endpoint:** **binary correctness**, 0 or 1 per sample per model; the negative-flip
  label is an **indicator**. **No declared distance, no graded or continuous
  correctness metric.** Grading: option matching for MCQ, answer extraction with
  normalisation for math, unit-test pass/fail for code.
- **Comparator:** old checkpoint vs new checkpoint of (mostly) the same family.
- **Estimand:** P(new incorrect | old correct), per benchmark per pair; plus the
  predictive value of candidate signals for the per-sample flip label. The signals
  (confidence, KL, likelihood drift, etc.) are **continuous**; the thing they predict
  is binary.
- **Benchmarks (six):** MMLU-Pro (MCQ), GPQA Main (MCQ, described as a secondary
  robustness benchmark), GSM8K (math), MATH-full (math), HumanEval (code), MBPP
  (code).

**Note on GPQA, bearing on (c).** The body describes GPQA Main as a **secondary
robustness benchmark**. If the entry's GPQA range (41.5-47.2%) is being used as a
headline figure, it is drawn from a benchmark the paper itself positions as
secondary — and from the subset-conditional denominator discussed under (b). Both
qualifiers travel with the number.

**Does the claim sit inside the regime?** For (a), (b), (d), (e), (f): yes, and the
answers are as above. For (c): the claim is *about* a part of the document I could
not reach, so the regime question cannot be posed for it here.

## DEFECTS FOUND

1. **(c) is unverified at this read level, and this is the headline.** Six numeric
   ranges attributed to Tables A4-A6 — the entry's entire quantitative content — rest
   solely on two adversary reads "via a mirror." I reached the paper by two routes and
   neither carried the appendix. Not contradicted; **not confirmed.** The ledger must
   not present these ranges as independently checked.

2. **Denominator ambiguity in the entry's own definition line.** The paper's NFR is
   conditional on the **old-model-correct subset**; the entry's phrasing is readable
   as a joint rate over the whole benchmark. Under the joint reading the percentages
   are badly inflated in meaning. Fix the entry's wording to carry the conditioning.

3. **"With denominators" is itself unverified.** Whether Tables A4-A6 print subset
   sizes, or only percentages, I could not establish. If only percentages are
   printed, any sample count in the ledger is **the entry author's arithmetic**, not
   the source's, and must be labelled as such (published-is-not-performed: a rate
   printed is not a count printed).

4. **"Both still runnable" is an inference, not a printed claim.** The paper prints
   "all open-weight" and a white-box-access requirement; it prints nothing about
   continued availability. The runnability follows from the method, but the ledger
   should attribute it to the method, not quote it as the paper's statement.

5. **No within-version repeat-run control, and the paper's design precludes one.**
   Temperature 0, single greedy decode, deterministic labels. Run-to-run variance is
   **defined away, not measured**. The entry should not let this source stand for any
   claim about regression magnitude under stochastic or production decoding — that is
   outside the regime.

6. **Sixth/boundary version pair is not established.** The rendering's arrows are
   garbled there; main-text `S4.T1` shows only five transitions; Appendix Table A1,
   which the paper itself points to for the list, was unreadable. Do not state the
   six pairs as settled; five are solid, the sixth is uncertain.

7. **Trap in the main text.** Table `S4.T1` is a (task, signal) x transition table of
   confidence and likelihood values with paired cells like `0.85 -> 0.63`. It is
   **not** an NFR table. A future checker skimming the body for "the numbers" will
   land on it. Flagging so nobody records a confidence value as a flip rate.

8. **GPQA qualifier.** The paper calls GPQA Main a secondary robustness benchmark.
   The qualifier should travel with the GPQA range wherever the entry uses it.

9. **Front-matter check incomplete (defect-check 7).** Title/authors taken from
   arXiv metadata, not the printed title page; no affiliations obtained. Nothing
   suspicious — but the check per the protocol was not completed.

10. **All quotations are summariser-mediated.** No raw text was ever seen; the
    Equation 2 body was never seen. Fragments are as served.

**Not a defect:** the paper is a **primary empirical study** (its own measurements on
its own runs), not a review, protocol, guideline or editorial, so far as the body
shows. I found no finding attributed to it that it attributes to someone else.

## ROUTES THAT FAILED

1. `curl https://arxiv.org/html/2608.13607v1` -> `curl: (56) CONNECT tunnel failed,
   response 403`. **Tool-scoped, not a host block** — exactly as the routing brief
   predicted; the same host answers WebFetch. Recorded, not treated as evidence about
   arxiv.org. Not retried, and the egress proxy was not probed.
2. `WebFetch https://arxiv.org/html/2608.13607v1` (offset 0) -> succeeded for body,
   but the fetcher reported Appendix Table A1 "not in the page text."
3. `WebFetch` same URL, offset 70000 -> read to end of document; **no Appendix Tables
   A4-A6**; main-text table `S4.T1` truncated before its HumanEval/MBPP rows.
4. `WebFetch` same URL, offset 135000 -> `Nothing left to read from offset 135000:
   this page's text is 81825 characters long.` This is what **establishes** the HTML
   rendering ends before the appendix rather than merely my having missed it.
5. `WebFetch https://arxiv.org/pdf/2608.13607v1` -> `[This PDF is empty or contains
   no machine-readable text]`. No front matter, no tables, nothing.
6. **Fetch cap (5/5) reached. Stopped per instruction rather than working around it.**
   Untried for want of quota: ar5iv, alphaXiv, Semantic Scholar, OpenReview, any
   mirror. **A checker with quota should go straight to a mirror for Tables A4-A6 —
   that is the single open question.** Unpaywall deliberately not used (it requires a
   contact email; no personal identifier was placed in any URL, header or form in
   this run). 0 of 6 searches used.

## BEARING ON THE LEDGER ENTRY

**The regime question (d) resolves in the entry's favour, and resolves firmly.** The
entry's position — that this paper is a **corroboration rather than the kill** because
its version pairs are open-weight same-family checkpoints rather than a retired
commercial snapshot and its vendor-designated successor — is **confirmed by the
paper's own words and, more tellingly, by its method.** "All open-weight," with
white-box access to hidden states, attention weights and output logits stated as the
*reason*. A commercial API snapshot cannot supply those. The paper's central object
of study is therefore **not computable** in the regime the kill would require. This is
not a near-miss of regime; the regimes are disjoint by construction. Keep the entry's
downgrade from kill to corroboration.

**A second, independent reason to keep the downgrade, which I do not think the entry
has yet claimed.** The paper runs at **temperature 0 with a single greedy decode and
deterministic flip labels.** It therefore has **no within-version repeat-run control**
and cannot have one. So even within open-weight pairs it does not establish how much
sample-level churn is attributable to the update versus to decoding — it removes the
latter by fiat. Any inference from this paper to production behaviour, where decoding
is stochastic, is **outside its regime**. That strengthens the corroboration-not-kill
reading and should be added to the entry.

**The entry's quantitative spine is, as of this run, unverified.** All six NFR ranges
and the "with denominators" qualifier come from Tables A4-A6, which I **could not
read** — a different finding from their being absent, and it must not be recorded as
absence. Mark them "adversary read via mirror; appendix unreachable on arXiv HTML and
PDF routes at this proxy; independent confirmation outstanding."

**Two wording fixes the entry needs regardless of the above.** (i) The definition line
must say the rate is conditional on the **old-model-correct subset**, or readers will
take 55.2% for a share of MATH-full. (ii) "Both still runnable" should be attributed
to the method (open-weight checkpoints the authors ran locally) rather than quoted as
the paper's own statement, which it is not.

**On (e), state it without hedging in the entry:** this paper measures **no** share of
published conclusions reversing. Its unit of analysis is the benchmark sample. If the
entry reaches for it on that question, the source is **silent** — and its silence is
neither support nor prohibition.

**Confidence.** High on (a), (b), (d), (f) and on the (e) negative. **Nil on (c).**
