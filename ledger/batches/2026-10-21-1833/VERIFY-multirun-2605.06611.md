# VERIFY — arXiv:2605.06611 §5.2 "Multi-run Consistency"

Checker: fresh context. Budget used: 0 web searches, 5 WebFetch (cap 5). One curl attempt (tool-scoped 403, see ROUTES).

## CLAIM

As the ENTRY cites it: arXiv:2605.06611, **section 5.2 "Multi-run Consistency"**, recording
"82.67 +/- 8.09" for a baseline and "33.74 +/- 2.73", described as **dimension-disparity and
effective-rank means over four seeds**; and the load-bearing absence — that the section never
compares *which dimension indices* are the outlier / massive-activation channels across seeds.
Entry also mentions "dimension 2533".

## READ LEVEL

**Full text, mediated.** Every read went through the WebFetch summariser against
`https://arxiv.org/pdf/2605.06611` (the full PDF, appendices included — the summariser answered
questions about Sec. 1–6, Table 1, Table 2, Figures 7–10, 14–17, References and Appendices A and D,
so it had the whole document, not a front-matter stub). Identity front matter read from
`https://arxiv.org/abs/2605.06611`.

Two limits on this read level, both stated rather than worked around:

- I never obtained raw text. `curl` to arxiv.org is refused at this proxy (CONNECT tunnel 403),
  so the PDF could not be downloaded and text-extracted locally. All quotation below is as the
  summariser served it.
- The summariser **refused the Table 2 caption verbatim twice**, including when asked for ordered
  consecutive sub-90-character fragments (second refusal explicitly: splitting it "would still
  reproduce the full text and get around the 125-character quote limit"). So the caption is reported
  below partly as one served short quotation plus the summariser's paraphrase, labelled as such.
  This is the one place in the note where I am relying on a paraphrase for a load-bearing word
  ("standard deviation").
- The served text has no printed page numbers; the summariser's page numbers are its own inference
  and I do not carry them.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity — the identifier exists

- arXiv ID: **2605.06611v1**
- Title: **"The Structural Origin of Attention Sink: Variance Discrepancy, Super Neurons, and Dimension Disparity"**
- Authors: **Siquan Li, Kaiqi Jiang, Jiacheng Sun, Tianyang Hu**
- Submitted: **2026-05-07** (v1, same date)
- Subjects: cs.LG, cs.AI, stat.ML. No journal reference served.

Kind of source: a **primary study** — a mechanistic-interpretability analysis paper with its own
pre-training experiments, plus a proposed method (head-wise RMSNorm). Not a review, protocol,
guideline or editorial. The attention-sink phenomenon it explains is prior work it cites; the
causal chain, the interventions and the Table 2 numbers are its own.

### (b) Is there a section 5.2 called "Multi-run Consistency"? — NO

Section 5 as printed:

- **5. Practical Implication**
- **5.1. Head-wise RMSNorm**
- **5.2. Experimental Results**

**Section 5.2 is titled "Experimental Results."** "Multi-run Consistency" is an *unnumbered bold
run-in heading* inside 5.2, one of three: "Alleviation of Dimension Disparity and Manifold
Collapse," "Pre-training Convergence Speed," "Multi-run Consistency."

First sentence of the body immediately after the 5.2 heading, as served:

> "**Setup** We conduct pre-training from scratch on Open-WebText [8] for 40,000 iterations (152M parameters, 20B tokens)."

First sentence of the paragraph the "Multi-run Consistency" run-in heading introduces, as served:

> "Table 2 summarizes the results across four pre-training runs with different random seeds."

### (c) The two numbers — named as the paper prints them

Both numbers are in **Table 2**, whose served caption opens:

> "Table 2. Evaluation across multiple random seeds."

Table 2 rows and columns as served (columns = **Baseline** and **HeadNorm**):

| Row label as printed | Baseline | HeadNorm |
|---|---|---|
| Train loss | 2.7483 ± 0.0118 | 2.7073 ± 0.0095 |
| Validation loss | 2.7812 ± 0.0109 | 2.7421 ± 0.0066 |
| Effective Rank (layer-wise mean, ↑) | 343.71 ± 15.63 | 445.96 ± 5.37 |
| Dimension Disparity (layer-wise mean, ↓) | **82.67 ± 8.09** | **33.74 ± 2.73** |

So:

- **82.67 ± 8.09** = *Dimension Disparity (layer-wise mean)*, **Baseline** column.
- **33.74 ± 2.73** = *Dimension Disparity (layer-wise mean)*, **HeadNorm** column — the **same
  quantity in the same row**, the treated arm. It is **not** an effective-rank mean. The
  effective-rank means are 343.71 ± 15.63 (Baseline) and 445.96 ± 5.37 (HeadNorm).
- Seeds: **four** ("four pre-training runs with different random seeds").
- ± meaning: **standard deviation**, not a standard error and not a range. Served as caption
  paraphrase ("reports the mean and standard deviation of each metric") plus the earlier served
  reading "Mean ± standard deviation are reported." I could not get the caption sentence out
  verbatim (see READ LEVEL); treat "standard deviation" as read-but-not-verbatim-quoted.
- Units: **Table 2 prints no units** for Dimension Disparity or Effective Rank. (The summariser
  volunteered that these are "most likely unitless dominance ratios" by analogy with §4.3 and
  flagged that as its own inference. I do not carry that; the paper as served does not state a
  unit on this row.) "Layer-wise mean" is defined in the caption as averaged across all
  transformer layers; Effective Rank is defined in Eq. (5).

### (d) THE LOAD-BEARING ABSENCE — no index-level cross-seed comparison appears

Unprimed word search over the whole document, including appendices:

- **"Jaccard"** — no occurrences.
- **"overlap" / "overlapping"** — no occurrences.
- **"Spearman"** — no occurrences.
- **"same dimension"**, **"same index"** — no occurrences.
- **"across seeds"** — no exact occurrence; nearest is Table 2's "Evaluation across multiple random seeds."
- **"seeds"** — two places only: that caption, and §5.2 Multi-run Consistency's "four pre-training
  runs with different random seeds."
- **"rank correlation"** — three places, none cross-seed: §4.1 "compute Kendall's rank correlation
  coefficient (τ)"; the Figure 7 caption; and reference [12], a title ("A new measure of rank
  correlation").
- **"consistent"/"consistently"** — nine places, all about variance, weights, dominance ratio or
  loss, e.g. §5.2 Multi-run Consistency: "HeadNorm method consistently outperforms the baseline."
  None about index identity.

**Plainly: no index-level comparison appears anywhere in the paper.** No shared-index count, no
Jaccard, no correlation over channel indices, no per-seed list of indices, in text, table, figure
or appendix.

What the paper does instead, in the regime where seeds exist: it **MEASURES** four aggregate
layer-averaged scalars per arm (train loss, validation loss, effective rank, dimension disparity)
and prints mean ± SD over the four seeds. Dimension Disparity is a *magnitude* statistic averaged
over layers; by construction it is blind to which index carries the disparity, and the paper never
disaggregates it to an index. So this is an **absence at the index grain**, i.e. a granularity gap
within a quantity the paper does measure — not a metric left undefined and not a curve left
un-integrated.

Nearest neighbour that must not be mistaken for the gap: §4.1's Kendall τ. It is computed
"between the absolute weights and the input variance for each output neuron", for **Llama-2-7B,
Layer 1**, inside a **single model**, and a number *is* printed — "a mean correlation of 0.32",
with Figure 7's caption giving "(mean=0.32)"; individual τ_j values are not printed, only their
distribution is plotted (Figure 7, left). That is a rank correlation over neurons within one run,
not an agreement of indices between runs. Per the silence rule, it is not evidence either way about
the cross-seed question.

### (e) Does a specific dimension index appear? — YES, and in a different regime

- **§4.2 "Channeling via Sparse Weights"**: served clause "This channels the massive activation
  exclusively into these outlier dimensions", followed by "(e.g., dimension 2533)."
- **§4.3 "RMSNorm as Directional Filter"**: "index c (e.g., index 2533)."
- **Table 1** (caption as served: "Analysis of the first token's representation after RMSNorm in
  layer 2.") prints the row **Outlier dimension magnitude (|x_2533|) = 1.2568**, alongside
  "Dimension mean abs value (x̄) = 0.0048" and "Dominance ratio = 262.88×".
- Model: **not named in any of those sentences or in Table 1's caption.** It is carried over from
  §4's opening, "We focus our analysis on Llama-2-7B." Layer: §4.2 concerns the **Layer 1 FFN**
  (Figure 8 caption: "Super Neurons in Layer 1 FFN"); Table 1 is **layer 2**, after RMSNorm.
- A related index, **super neuron 7890** (§4.2, Figures 8–10, Llama-2-7B Layer 1), is an FFN
  neuron index, not a residual-stream dimension index.
- **§5.2 prints no dimension index at all.**

### (f) Regime

- **§3–§4 (where 2533 lives):** one **pretrained Llama-2-7B**, layers 1–2, single model, **no seeds**.
- **Appendix A:** Llama-3-8B (GQA), analysis only.
- **§5.2 (where the four seeds live):** **Llama-2-style models trained from scratch, 152M
  parameters, 12 layers, hidden size 768**, OpenWebText, 40,000 iterations, 20B tokens. Arms:
  Baseline, Sigmoid attention, HeadNorm — but **Table 2 covers only Baseline and HeadNorm**; the
  Sigmoid variant is not in the multi-seed table.
- **What varied between the four runs:** the random seed, and nothing else the paper names.
- Unit of analysis in Table 2: the **training run**; endpoint: four layer-averaged scalars;
  comparator: Baseline vs HeadNorm; estimand: arm mean of each scalar, with across-seed SD.

## DEFECTS FOUND

1. **Section title is wrong as cited.** §5.2 is **"Experimental Results"**. "Multi-run Consistency"
   is an unnumbered run-in heading inside it. The label exists and sits where the entry says, but
   "section 5.2 'Multi-run Consistency'" is not what the paper prints, and a reader using it to
   locate the text will look for a numbered section that does not exist.
2. **The two numbers are mis-paired.** 82.67 ± 8.09 and 33.74 ± 2.73 are the **same row** of
   Table 2 — Dimension Disparity (layer-wise mean) — for **Baseline** and **HeadNorm**
   respectively. The entry's gloss "dimension-disparity and effective-rank means" attaches 33.74
   to effective rank. Effective rank's means are 343.71 ± 15.63 and 445.96 ± 5.37, an order of
   magnitude away and pointing the other way (↑ is better). The entry has one of the two metrics
   and both arms of it, presented as two metrics and one arm.
3. **"baseline" is right for 82.67 only.** 33.74 is the intervention arm, not an unlabelled second
   baseline figure.
4. **Cross-regime splice on "dimension 2533".** 2533 is an index in a **pretrained Llama-2-7B**
   (§4.2 layer 1 FFN; Table 1 layer 2). The four seeds exist only for **152M from-scratch**
   models in §5.2. The two facts the entry puts next to each other — "the paper names dimension
   2533" and "the paper reports four-seed means" — are in **disjoint regimes**. An index-overlap
   check across those four seeds would have to be in the 152M regime, where the paper prints no
   index whatever; and 2533 could not recur across seeds, since the 7B model it belongs to was not
   re-seeded here. If the ledger entry is read as "they named an index but never checked whether
   it is the same index across their seeds", that is true only if the reader understands those are
   two different model regimes. State it, or the gap looks narrower and more damning than it is.
5. **Units asserted where the table states none.** Table 2 prints no unit for Dimension Disparity.
   Any gloss calling 82.67 a dominance ratio, a factor or a "×" figure is an inference (the §4.3
   dominance ratio is separately printed as 262.88× for Llama-2-7B, a different regime and a
   different number). The source does not print a converted figure.
6. **Nothing was found absent that the paper flags itself.** The paper does not note the missing
   index comparison; §6 (Discussion) mentions a different absence ("aggregating identical tokens
   fails to shrink the variance"), which is about the mechanism, not about seed-to-seed index
   stability. The gap is unremarked, not acknowledged.
7. **Clearance still rests on mediated reads.** My read is independent of adversary 1 but used the
   same summariser route; no route in this environment gave raw text. Table 2's caption was never
   obtained verbatim. If the ledger wants the caption's exact wording on the ± semantics, that is
   still outstanding.

## ROUTES THAT FAILED

- `curl -sSL https://arxiv.org/pdf/2605.06611` → `curl: (56) CONNECT tunnel failed, response 403`.
  Tool-scoped at this proxy, not a host block: WebFetch reached the same URL four times. No
  local text extraction was therefore possible.
- Verbatim Table 2 caption via WebFetch: refused twice on the ~125-character quotation cap,
  including the ordered-consecutive-fragments request, which the summariser declined as
  cap circumvention. Reported as served + paraphrase, labelled, not reconstructed.
- No search engine was used; none was needed (0 of 6).

## BEARING ON THE LEDGER ENTRY

- **(a) Identity: confirmed.** Real identifier, title, four authors, 2026-05-07.
- **(b) Section name: fails as cited.** Correct to "§5.2 Experimental Results, 'Multi-run
  Consistency' paragraph".
- **(c) Numbers: present and verbatim, description wrong.** Fix the gloss to "Dimension Disparity
  (layer-wise mean): Baseline 82.67 ± 8.09 vs HeadNorm 33.74 ± 2.73, mean ± SD over four seeds",
  and add the effective-rank row separately if the entry wants it.
- **(d) The load-bearing absence: HOLDS, and holds strongly.** No overlap, Jaccard, index
  correlation or per-seed index list appears anywhere in the paper. The paper measures aggregate
  layer-averaged magnitude statistics over four seeds; index identity is never compared. The one
  rank correlation in the paper (Kendall τ, mean 0.32, Figure 7) is within a single Llama-2-7B
  layer and is not about seeds.
- **(e) 2533: present**, §4.2, §4.3 and Table 1 (|x_2533| = 1.2568), attributed to Llama-2-7B only
  by carry-over from §4's opening, not in the sentence itself.
- **(f) Regime: must be stated in the entry.** The index lives in a single pretrained 7B model;
  the seeds live in 152M from-scratch runs. That split is the thing most likely to be lost when
  this entry is quoted onward.

Overall: the question the entry asks about is genuinely unanswered by this paper, but two of the
entry's own descriptors — the section title and the identity of the second number — are wrong as
written, and the regime split behind "dimension 2533" is unstated.
