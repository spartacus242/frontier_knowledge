# VERIFY — arXiv:2510.24088, "Information-Theoretic Discrete Diffusion"

## CLAIM

As the ledger entry cites it: arXiv:2510.24088, "Information-Theoretic Discrete
Diffusion". The entry had this source marked COULD NOT READ (fetch budget
exhausted; curl to arxiv.org and export.arxiv.org CONNECT-rejected at the proxy).

Sub-claims handed to this check:

- (a) IDENTITY — does it exist; title, authors, date as served; abstract as served.
- (b) THE DECIDING QUESTION — does it PRINT a figure for the GAP between a masked
  diffusion model's ELBO and its true / exactly-evaluated log-likelihood, in
  nats/token, bits/token or perplexity, for any model, and at what scale?
- (c) Does it evaluate any shipped 7-8B masked-diffusion checkpoint?
- (d) What it MEASURES: unit, endpoint, comparator, estimand.

## READ LEVEL

**PARTIAL FULL TEXT — body prose read, floats (tables/figures) never served.**
Not "abstract only", and emphatically not NOT FOUND: the paper exists and its
running text was served.

Precisely:

- The paper EXISTS. The arXiv HTML full text at
  `https://arxiv.org/html/2510.24088v1` was served and is **71,312 characters
  long** (the server stated this length when an offset past the end was
  requested).
- I read that text in two windows: offset 0 (front matter, abstract, table of
  contents, introduction, Section 2.1) and offset 42,000 to end (Section 2.2
  onward, equations (5) and (6)).
- Across the whole 71,312 characters **not one table caption and not one figure
  caption was returned**, and no numeric result of any kind was returned. For a
  NeurIPS-length paper whose own table of contents lists Sections 5.1-5.3 of
  experiments plus appendices D.2-D.5, that is far more likely to be the
  markdown conversion dropping the floats than the paper having none. So the
  results floats are **COULD NOT READ**, not shown to be absent.
- The `https://arxiv.org/abs/2510.24088` landing page was **never served** (two
  rate-limit refusals, see ROUTES THAT FAILED). Consequence: the submission
  date, revision history, subject categories and comments field were **not
  served to me at all**. I do not report them.
- The **abstract was not obtained as served.** The fetch summariser declined to
  reproduce it, stating it could not do so within its ~125-character quotation
  cap, and returned a paraphrase instead. The segment-reconstruction technique
  that beats that cap requires further fetches, and the fetch budget was spent.
  What appears below under "abstract" is therefore **the summariser's
  paraphrase, not the authors' words**, and is labelled as such.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter (as printed on the HTML full text)

- Title: **"Information-Theoretic Discrete Diffusion"**
- Authors, in order, with affiliations as printed:
  - **Moongyu Jeon** — Department of Artificial Intelligence, Yonsei University
  - **Sangwoo Shin** — Department of Artificial Intelligence, Yonsei University
  - **Dongjae Jeon** — Department of Computer Science, Yonsei University
  - **Albert No** (corresponding; `albertno@yonsei.ac.kr`) — Department of
    Artificial Intelligence, Yonsei University
- Date / version: **NOT SERVED.** The abs page was refused both times. The
  identifier block `2510` and a NeurIPS 2025 poster listing in search results
  are consistent with October 2025 and with NeurIPS 2025, but neither was read
  from the source's front matter, so per rule (7) I do not state a date.

### Abstract — PARAPHRASE BY THE FETCH SUMMARISER, NOT THE SOURCE'S WORDS

The summariser reported, in its own words, that the paper "presents an
information-theoretic framework for discrete diffusion models that gives
likelihood estimators built on score-matching losses"; introduces an "I-MDSE
relation linking mutual information to the minimum denoising score entropy
loss", and an "I-MDCE relation for masked diffusion linking cross-entropy losses
to mutual information"; that these "yield a time-integral decomposition of
log-likelihood"; that the authors argue "DSE and DCE losses are tight estimators
rather than just variational bounds"; that the framework "also supports a
time-free formula, conditional likelihood estimation, and coupled Monte Carlo
estimation of likelihood ratios"; and that "Experiments on synthetic and
real-world data are reported, and code is stated to be public."

**Treat none of the above as a quotation.** The only abstract-level phrase I can
report as the source's own words, because it came back inside the quote cap, is
that the losses are described as **"tight"** estimators rather than merely
variational bounds.

### Section 2.1 — the bound, as an inequality with no values

Served as an inequality only:

> −log p₀^θ(x₀) ≤ 𝓛_DSE^T(x₀) + D_KL(…)

No numeric value accompanies it in the served text.

### Section 2.2 — masked diffusion, and the single LLaDA mention in the body

The one mention of LLaDA in the body text served to me, in Section 2.2:

> "recent large-scale masked diffusion language models such as LLaDA"

cited to Nie et al., 2025. No parameter count, no checkpoint name, no numbers
accompany it there.

Also in Section 2.2, of the relation between the two losses:

> "equivalent to the DSE loss in the full-noise limit"

stated as T→∞ (Eq. 6).

### The paper's own table of contents and introduction (served) — what it says it does

- Section 5.1 — reliability of likelihood estimation on toy data, unconditional
  and conditional likelihood.
- Section 5.2 — variance reduction for the time-free likelihood estimator and
  for the coupled likelihood-ratio estimator.
- Section 5.3 — "Auditing via conditional likelihood estimation:
  out-of-distribution detection", and **"Application to a large open-source
  model, LLaDA (Nie et al., 2025)"**.
- Appendix headings exist, including **D.5 "Evaluating NLL on a Pretrained
  Language Model"** (and D.2, D.4). Their bodies were not served.
- Data described in the served text only as "synthetic datasets with known
  ground-truth distributions" and "real-world data".

### (b) THE DECIDING QUESTION — answered at my read level

**No such number was served, and I cannot state plainly that the paper does not
print one.** Distinguish the two findings:

1. In the 71,312 characters of running text served, there is **no value in nats,
   bits, nats/token, bits/token or perplexity**, and no printed difference
   between an ELBO and an exact or tight log-likelihood, for any model at any
   scale. The bound appears only as the Section 2.1 inequality above.
2. But **every table and figure in the paper was absent from the served
   conversion**, and the paper's own contents list three experiment subsections
   and five appendix subsections including one titled "Evaluating NLL on a
   Pretrained Language Model". A number of exactly the kind asked about would
   most plausibly live in those floats or in Appendix D.5.

So, in the vocabulary the ledger asks for: on the evidence I hold, the paper
**DEFINES** the bound (Section 2.1 inequality), **ARGUES** analytically that the
DSE/DCE losses are "tight" rather than loose variational bounds — i.e. it treats
the gap as characterised in closed form rather than as something to be measured
— and **ANNOUNCES** an NLL evaluation on a pretrained language model in an
appendix heading. Whether it **MEASURES** and **PRINTS** a gap figure with units
and a denominator is **COULD NOT READ**, because the floats were not served.
Anyone converting this to a verdict must either re-read with the floats (PDF, or
segment-wise HTML reads) or leave the cell open. Do not record "the paper does
not print it" on my read.

### (c) A shipped 7-8B masked-diffusion checkpoint

**Qualified yes on the model, NO on the scale as served.** The paper's own
contents announce "Application to a large open-source model, LLaDA (Nie et al.,
2025)" in Section 5.3, and an appendix "Evaluating NLL on a Pretrained Language
Model". LLaDA is a released open-weights masked diffusion language model, so the
entry's "shipped checkpoint" element is satisfied in kind. But **the served text
never prints a parameter count, a checkpoint name, or a size** for it. "8B" is
external knowledge, not this source's words; writing "7-8B" into the ledger on
the strength of this read would be importing a figure the source did not serve.
Which LLaDA checkpoint, at what size, on what corpus, with what numbers, is
**COULD NOT READ**.

### (d) What it MEASURES — unit, endpoint, comparator, estimand

In the served text's own terms:

- **Unit of analysis:** a sequence **x** = x¹…x^L of L tokens drawn from a
  vocabulary of size N, with masked positions under the absorbing process.
- **Endpoint:** the losses themselves — the denoising score entropy loss
  𝓛_DSE^T and the denoising cross-entropy loss 𝓛_DCE — recast as likelihood
  estimators via a time-integral decomposition of mutual information (the
  I-MDSE and I-MDCE relations).
- **Comparator:** the finite-T DSE loss against the DCE loss in the full-noise
  limit (Eq. 6, "equivalent to the DSE loss in the full-noise limit"); and, per
  the contents, estimator variants against each other on variance (Section 5.2),
  and in-distribution against out-of-distribution inputs for the audit
  (Section 5.3). No experimental baseline is described in the served prose.
- **Estimand:** the log-likelihood / NLL of data under the model; the
  conditional token distribution p₀(x̂ⁱ | **x**^UM) estimated by the network
  c^θ; a marginal-ratio reparameterisation (Eq. 5); and likelihood **ratios**
  via coupled Monte Carlo.
- **Source type:** a **primary methods / theory paper** with experiments, not a
  review, protocol, guideline or editorial. The theoretical contribution is the
  authors' own; LLaDA is third-party (Nie et al., 2025) and is an object of
  study, not a result of this paper.

## REGIME

What the served text establishes it establishes for **discrete-state diffusion
over a finite vocabulary of size N, on token sequences of length L**, under the
score-entropy / absorbing-masked formulation, with the central objects being
**mutual-information-to-loss identities** (I-MDSE, I-MDCE) and the estimators
built from them. Validation of estimator reliability is announced on **synthetic
data with known ground-truth distributions** — i.e. the regime where a true
likelihood is available by construction, not where a large pretrained model's
true likelihood is available. The large-model appearance (LLaDA) is announced in
the regime of **conditional likelihood estimation for auditing / OOD detection**,
and in an appendix of **NLL evaluation on a pretrained language model** — which
is NLL reporting, not necessarily a published ELBO-minus-exact-likelihood gap.

Does the ledger's claim sit inside that regime? **Partly, and the mismatch is
exactly where a verdict could go wrong.** A paper whose thesis is that the
DSE/DCE losses are *tight* estimators has an incentive to characterise the gap
analytically and never to tabulate it as a bits-per-token number at 8B scale.
"Tight in the T→∞ / full-noise limit, as an identity" and "we measured the gap
to be X nats/token on a released 8B checkpoint" are different regimes; an
identity proved in the first is **silent**, not supportive, in the second. The
synthetic-data regime, where ground truth is known by construction, is likewise
not the released-checkpoint regime. I could not read the floats, so I cannot say
which regime the paper's actual numbers occupy.

## DEFECTS FOUND

Defects in my own read, declared first so they are not mistaken for findings
about the paper:

1. **Abstract not obtained as served.** The summariser substituted a paraphrase,
   citing its ~125-character quote cap, and the segment-reconstruction route that
   beats that cap needs fetches I no longer had. Anything above that reads like
   the abstract is the summariser's wording. Do not quote it as the authors'.
2. **No front-matter date, version, category or comments field.** The abs page
   was refused twice. Per rule (7), I take no date from a secondary short form,
   so the ledger's date field stays unfilled by this check.
3. **Floats missing from the served conversion.** Zero tables and zero figure
   captions across 71,312 characters, against a contents list naming three
   experiment subsections and five appendix subsections. The results layer of
   this paper is unread.

Defects in the ledger entry as handed to me:

4. **"COULD NOT READ" in the previous batch was a routing failure, not a
   property of the source.** The paper is openly available and its full text
   renders as HTML at `arxiv.org/html/2510.24088v1`. The earlier curl CONNECT
   rejections were tool-scoped, exactly as the access note warns; WebFetch
   reaches the host. The entry should not carry any implication that this source
   is inaccessible.
5. **The "7-8B" scale element is not the source's arithmetic.** The source, as
   served, names LLaDA and prints no size. If the ledger entry states a 7-8B
   scale as something this paper reports, that is an external attribution.
6. **Risk of reading "tight estimator" as "measured gap".** The source's
   strongest served formulation is a claim of tightness, i.e. a statement about
   the bound's structure. A citation to that claim is a citation to a
   characterisation, not to an evaluation. Treating it as a published gap figure
   would be the published-is-not-performed defect.

Not a defect, recorded so it is not re-litigated: the absence of a bits/token
gap figure in the prose I read is **not** evidence of absence in the paper, and
the paper's silence on an ELBO gap in its theory sections is not a prohibition
on its having measured one in Section 5 or Appendix D.5.

## ROUTES THAT FAILED

1. `WebFetch https://arxiv.org/abs/2510.24088` — refused. Exact error text:
   `{"error_type":"RATE_LIMIT_EXCEEDED","source":"target","message":"This fetch
   was rate limited, most likely because several pages of one site were fetched
   at once. Fetch this page once more, one page at a time. If that fails too, go
   on without it and tell the user which page you could not read."}`
2. `WebFetch https://arxiv.org/abs/2510.24088` — retried once exactly as that
   message instructed, one page at a time, no other fetch in between. Refused
   again with the identical `RATE_LIMIT_EXCEEDED` payload. Per its own
   instruction I went on without it. **The abs landing page could not be read.**
3. `WebFetch https://arxiv.org/html/2510.24088v1` with `offset: 95000` — no
   content: `"Nothing left to read from offset 95000: this page's text is 71312
   characters long."` Not a refusal; it is how the page length was established.
4. Not attempted, and deliberately: curl to arxiv.org or export.arxiv.org (the
   previous batch's dead end, tool-scoped at this proxy); `https://arxiv.org/pdf/2510.24088`
   (fetch budget exhausted before it could be tried — **this is the route that
   would most likely surface the missing tables**); Unpaywall (skipped entirely,
   as it requires a contact address and no personal identifier goes into a URL);
   PMC / Europe PMC (not applicable, and hard-blocked here regardless).
5. Budget state at stop: **5 of 5 fetches used** (two of them spent on the two
   refusals above, one on an out-of-range offset that returned no content),
   **1 of 6 searches used**. Searches were not pursued further because the search
   tool returns titles and URLs only at this proxy, with no snippets, so it
   cannot supply source content.

## BEARING ON THE LEDGER ENTRY

- **Identity: CONFIRMED.** The source exists, is open, and is what the entry says
  it is: "Information-Theoretic Discrete Diffusion", by Moongyu Jeon, Sangwoo
  Shin, Dongjae Jeon and Albert No, all Yonsei University. The entry's
  "COULD NOT READ" status should be struck and replaced with the read level above.
  Date, version and venue remain unfilled by this check.
- **The deciding question: STILL OPEN, and it must not be closed in either
  direction on this read.** No ELBO-versus-exact-likelihood gap figure in nats,
  bits, bits/token or perplexity was served to me, at any scale. But the paper's
  tables, figures and appendix bodies were never served, and the paper itself
  announces an appendix "Evaluating NLL on a Pretrained Language Model". The
  honest cell is COULD NOT READ at the grain asked, with the partial evidence
  recorded.
- **The cheap next step is one fetch of `https://arxiv.org/pdf/2510.24088`**,
  or a segment-wise re-read of `arxiv.org/html/2510.24088v1` between roughly
  offset 42,000 and 71,312 asking only for table and figure contents. One
  unspent fetch would very likely settle (b) and (c) outright.
- **On scale (c): soften the entry.** The paper does apply its estimator to
  LLaDA, a released open-weights masked diffusion LLM, so the "shipped
  checkpoint" element holds in kind. The "7-8B" number is not served by this
  source; carry it, if at all, as external attribution.
- **On direction of support: the entry should expect a tightness argument, not a
  gap measurement.** The paper's thesis as served is that the DSE and DCE losses
  are "tight" estimators rather than mere variational bounds. If the ledger entry
  leans on this source for a *measured* ELBO-to-true-likelihood gap at 8B scale,
  the likely finding on a fuller read is a regime mismatch — an identity and a
  tightness claim, validated where ground truth is synthetic, plus an NLL
  evaluation on a pretrained model — which is silent on, not supportive of, a
  quantified gap at that scale.
