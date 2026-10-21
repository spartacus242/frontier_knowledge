# VERIFY — Puccetti, Rogers, Drozd, Dell'Orletta, arXiv:2205.11380 / Findings EMNLP 2022

Checker: fresh context. Date of check: 2026-10-21.
Budget used: 1 WebSearch, 5 WebFetch (at the 5-fetch cap; no further probing).

---

## CLAIM

As the ENTRY cites the source: Puccetti, Rogers, Drozd, Dell'Orletta, "Outlier Dimensions that
Disrupt Transformers are Driven by Frequency", Findings of EMNLP 2022, arXiv:2205.11380.
Recorded as OPENED.

Sub-claims handed to me:

- (a) Front matter as served.
- (b) Table 4 gives outlier dimension indices per model, with "bert-base-uncased 308/381" and
  "multiberts-seed-1 218/674".
- (c) Outliers individuated by a magnitude criterion (2–3 standard deviations) plus a
  downstream-damage ratio of at least 5x.
- (d) LOAD-BEARING ABSENCE: does the paper compute any cross-run agreement statistic over those
  index sets (overlap, intersection, Jaccard, rank correlation) between models or seeds?
- (e) The three self-trained BERT-medium models varied TOKENIZATION rather than seed, from one
  shared initialisation.
- (f) Regime: which models, which layers, which corpora.

---

## READ LEVEL

**FULL TEXT**, read through WebFetch's summariser over the publisher PDF at
`https://aclanthology.org/2022.findings-emnlp.93.pdf` (18 pages of body + appendices, pp. 1286–1304),
in three passes with targeted transcription prompts. Front matter additionally from the ACL
Anthology landing page and from `https://arxiv.org/abs/2205.11380`.

Two honesty qualifications on the read level:

1. I did not render the PDF myself; every quotation below is **as the summariser served it** from
   the PDF. Where I asked for ordered consecutive segments with junction overlap, I say so and label
   the result a reconstruction.
2. The **abstract was not obtained verbatim**. The arXiv page fetch returned a summarised abstract
   and offered the verbatim text only on a further call; I was at the fetch cap. So (a) is answered
   for bibliographic front matter but NOT for the abstract text, and nothing below rests on abstract
   wording.

The negative finding in (d) rests on a term-targeted search of the full text including appendices
(see the term list in DEFECTS), not on an unaided reading of all 19 pages. It is a strong negative,
not an exhaustive one, and I label it that way.

---

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter

From the ACL Anthology landing page (the published version, and the form the entry cites):

- Title: "Outlier Dimensions that Disrupt Transformers are Driven by Frequency"
- Authors, in order: Giovanni Puccetti, Anna Rogers, Aleksandr Drozd, Felice Dell'Orletta
- Booktitle: "Findings of the Association for Computational Linguistics: EMNLP 2022"
- Editors: Yoav Goldberg, Zornitsa Kozareva, Yue Zhang
- Month/year: December 2022. Publisher: Association for Computational Linguistics.
  Address: Abu Dhabi, United Arab Emirates.
- Pages: **1286–1304**
- DOI: 10.18653/v1/2022.findings-emnlp.93 — Anthology ID 2022.findings-emnlp.93
- BibTeX key as served: `puccetti-etal-2022-outlier`

From arXiv:2205.11380 (same four authors, same order):

- Title **as served on arXiv v3**: "Outliers Dimensions that Disrupt Transformers Are Driven by
  Frequency" — note "**Outliers** Dimensions" and "**Are**", which differ from the ACL title.
- arXiv version v3, submitted 2022-05-23, v3 dated 2022-10-22. Subjects cs.CL, cs.AI. The arXiv
  record carries the Findings DOI.

**Type of source**: a **primary empirical study** — a replication plus extension, published as a
Findings (peer-reviewed, non-main-track) conference paper. It is not a review, protocol, guideline
or editorial. Several load-bearing elements are **attributed to others**: the outlier definition and
the "disabling 48 parameters wrecks MNLI" finding to Kovaleva et al.; the multiBERTs checkpoints to
Sellam et al. (2022); the BERT-medium architecture to Turc et al. (2019). The paper's own
contributions are the frequency account, the vertical-attention account, and the three BERT-medium
pre-trainings.

### (b) Table 4 — THE NUMBERS AND WHERE THEY ARE PRINTED

Table 4 sits in **Appendix A, "Outliers For Each Model."** Caption as served:

> "Table 4: The outliers identified for each model used in the paper"

Column headers as served: **"Model name" | "Outlier 1" | "Outlier 2"** — exactly two index columns.
Rows as served:

| Model name | Outlier 1 | Outlier 2 |
|---|---|---|
| bert-base-uncased | **308** | **381** |
| roberta-base | 77 | 588 |
| multiberts-seed-1 | **218** | **674** |
| google/vit-095base-patch16-224-in21k | 187 | 759 |
| BERT-medium (ours) | 281 | 378 |

**All four index numbers in the entry appear exactly as recorded**: 308 and 381 against
`bert-base-uncased`, 218 and 674 against `multiberts-seed-1`. They are also used throughout the body
as O308, O381, O218, O674, and in Table 1's column labels ("w/o 308", "w/o 381"). 218 and 674 appear
in §3.3 on the multiBERTs seed-1 checkpoints ("O218 and O674", "O218 + O674").

OCR damage flagged rather than corrected: the ViT row was served as
`google/vit-095base-patch16-224-in21k`. The published name is almost certainly
`google/vit-base-patch16-224-in21k`; I reproduce the damaged string as served and flag it.

Table captions, for numbering context, as served:

- Table 1: "Average BERT scores over 5 runs on GLUE benchmarks with the effect of outlier removal."
- Table 2: "Outlier removal effect for Visual Transfromer." (misspelling in the source)
- Table 3: "Accuracy on MNLI-matched for each pretraining setting of BERT-medium."
- Table 5: "Full RoBERTa scores on GLUE benchmarks with outlier effects."

### (c) The selection rule, in the paper's own words

Reconstruction from consecutive served segments (§2, p. 1287), 3 fragments, junctions checked:

> "In this work the term outlier dimension refers to the dimensions with parameters meeting the
> magnitude criteria across layers and having at least 5x more damaging effect on accuracy on a
> representative downstream task, for which we choose MNLI (see §3.1)."

The magnitude criterion itself is inherited, not original (§2), reconstruction from 5 served
fragments:

> "According to Kovaleva et al., outliers are parameters (both weights and biases) in the final
> element of a Transformer layer (LayerNorm for BERT family, final MLP for GPT-2), which have
> unusually high magnitude within the layer."
> "Outlier dimensions are those dimensions at which outlier parameters are found consistently across
> the model layers."

The authors state that the 5x damage condition is **their own addition** to the definition
(reconstruction, 2 fragments):

> "Since not all parameters that can be identified by magnitude and position criteria have that
> effect, we add this property to the definition."

The standard-deviation numbers are in **footnote 1**, not in the criterion sentence. Reconstruction
from 3 served fragments:

> "The original definition of outliers is not entirely formal, and needs to be further specified for
> particular models: the magnitude of the outliers was within 2 standard deviations from the mean for
> RoBERTa, and within 3 for BERT."

Reproduced as served, including the counter-intuitive preposition "**within** 2 standard deviations
from the mean", which one would expect to read "beyond"/"more than" for an outlier threshold. I do
not correct it; I flag it.

This is the second, hedged formulation of the criterion. The main-text sentence is the unhedged one
and carries no SD figure; footnote 1 carries the SD figures and explicitly says the original
definition "is not entirely formal".

### (d) THE LOAD-BEARING ABSENCE

**No cross-run agreement statistic over the index sets appears anywhere in the paper.** A targeted
search of the full text and appendices for "overlap", "intersection", "Jaccard", "rank correlation",
"Spearman", "agreement", "coincide", and phrasings of "same dimensions across seeds/models" returned
no statistic comparing index sets between models or between seeds. The terms "overlap",
"intersection", "Jaccard", "Spearman", "rank correlation" and "agreement" do not occur.

What the paper has instead, and what each thing actually is:

1. **A within-model constancy assertion**, §2, p. 1287, served as consecutive segments:
   "Since outlier indices are a constant for a / given model, in this study we will also discuss
   hidden state outlier dimensions..." — an assertion about one model, with no statistic.
2. **Consistency across layers**, §2: "Outlier dimensions are those dimensions at which outlier
   parameters are found consistently across / the model layers." — across *layers of one model*,
   which is part of the definition, not a cross-run comparison.
3. **Consistency across checkpoints of one seed**, §3.3, p. 1288, served as two segments:
   "we find that this BERT also has two outliers, O218 and O674, the same for all the checkpoints /
   for this seed." — the closest thing in the paper to a cross-run statement. It is **qualitative,
   within a single seed, across training checkpoints**. No number is attached.
4. **Table 4 prints five models' index pairs side by side and computes nothing over them.** It is a
   listing, not a comparison.
5. **The Pearson correlations the paper does compute correlate something else entirely**:
   - §4.2, p. 1289, Fig. 4 (and Fig. 16 for fine-tuned BERT, App. F): token pre-training frequency
     against hidden-state magnitude at the outlier dimensions, per layer, on Wikitext-v2. Appendix B
     as served: "we measure the Pearson correlation coefficient between this two lists of values."
   - §4.3, p. 1291, Fig. 7 (and Fig. 11 for RoBERTa): reconstruction from 3 served fragments —
     "measure the Pearson correlation between average vertical attention value of each token (the
     average over attention columns in the encoded sequence), and the magnitude of the hidden state
     parameters corresponding to the outlier dimensions."
   - "Correlation" is also used for Figs. 9, 16, 17; Pearson is named explicitly for Fig. 4. No
     Spearman anywhere.

   Neither correlation is over index sets. Both correlate a *per-token scalar* against a *per-token
   magnitude at an already-fixed outlier dimension*.

Two structural facts that bear on how the absence should be read:

- The paper uses **one** multiBERTs seed (seed 1). With a single seed in hand, a cross-seed
  agreement statistic is **not computable from this paper's data** — the absence is structural, not
  an unperformed analysis on available material.
- The authors' own three-run family (the BERT-medium models) appears in Table 4 as **one row**,
  "BERT-medium (ours) 281 / 378". Per-variant index sets for the three BERT-medium models are not
  printed. So even where three comparable runs exist, the grain needed for an overlap statistic is
  not published. That is a **granularity gap**, not an absence of the runs.

Per instruction (9): this silence is not a prohibition. The paper nowhere claims that index sets do
or do not agree across runs, and nowhere flags the question.

### (e) The three BERT-medium models

Introducing sentence, reconstruction from 3 served fragments (§4.4, p. 1292):

> "we pre-train[13] from scratch 3 versions of BERT-medium as defined by Turc et al. (2019), with the
> following tokenization schemes:"

Initialisation sentence, reconstruction from 3 served fragments with one-word junction overlap
("initialization", "data") verified at both junctions (§4.4):

> "All three models started from the same initialization but were fed different data according to the
> tokenization schemes."

The three schemes as served:

- **SENTENCE**: "We split sentences using a Spacy / sentencizer[14], and add a '[SEP]' token at the
  end of each sentence and at the end of / each encoded sequence. This is similar to the 'full
  sentences' tokenization used to train / RoBERTa (Liu et al., 2019b)."
- **CHUNK**: "We add a single '[SEP]' token at the end of each sequence of 256 tokens rather than
  each sentence."
- **SENTENCE_FREQ**: "Each sentence is followed by the '[SEP]' token, but we replace 50% of
  occurrences of regular tokens / with frequency above 1.e-5 in the training corpus with a random
  token with a frequency below 1.e-5 / in 50% of their occurrences."

Footnote 13 on the training setup, reconstruction from 5 served fragments:

> "Except for the tokenization strategy, the training for each model is similar to the original BERT
> (Devlin et al., 2019) with two exceptions: (a) the Wikipedia corpus is a more recent version, from
> 01/03/2022, (b) the max sequence length is 256 (instead of 512) and batch size 128 instead of 256
> due to computational constraints (these appear to have limited effect on the MNLI benchmark). All
> models were trained for 327,500 steps."

Appendix B as served: "The scores in Table 3 are obtained as for Table 1 on three instances of
bert-medium architecture pre-trained with different tokenization strategies."

**No random seed is mentioned for these three models.** Corpus size is not stated; only the
Wikipedia dump date (01/03/2022) is.

### (f) Regime, in the paper's own terms

**Models.** BERT-base-uncased (the main model); RoBERTa-base; a Vision Transformer
(`google/vit-base-patch16-224-in21k`), for the outlier check only; the multiBERTs BERT-base
checkpoints for **seed 1** only (Sellam et al., 2022), used for pre-training dynamics; three
BERT-medium models the authors pre-trained. ESM (protein) and Wav2Vec (audio) were checked for
outliers and **none were found**. GPT-2 is mentioned in §2 (as the "final MLP" case in Kovaleva
et al.'s definition) and is not studied.

**Layers.** BERT-base: all layers (Figs. 4, 5, 7; Appendix B: the procedure is "repeated for each
layer in the model"); Fig. 6 shows layer 10 only. RoBERTa-base: all layers (Figs. 9–11). Fine-tuned
BERT-base on MNLI: all layers (Figs. 16–17). **ViT, BERT-medium and multiBERTs get no layer-wise
analysis** — Tables 2 and 3 are whole-model results.

**Corpora.** Token-frequency estimation: Wikipedia (1 November 2021 dump) and BookCorpus
(Zhu et al., 2015) for BERT (footnote 10); Wikipedia + BookCorpus + an open-source OpenWebText for
RoBERTa, with Stories and CC-news noted as not openly available (footnote 16). BERT-medium
pre-training: Wikipedia, 01/03/2022 version. Correlation/MLM-loss/attention analysis: the
**Wikitext-v2 validation set**. MLM prediction-frequency analysis (§4.1): ~200,000 Wikipedia
sentences. Downstream: GLUE — CoLA, SST, MRPC, STS-B, MNLI (matched and mismatched), QNLI, RTE, with
QQP in Tables 1 and 5; footnote 6 says "8 GLUE tasks" but names seven, excluding WNLI. ViT: CIFAR-10
and CIFAR-100 (Table 2). SQuAD appears only in footnote 8, as a citation of Sellam et al.'s reported
results, not as an evaluation performed here.

**Unit of analysis / endpoint / comparator.** The outlier-damage endpoint is **GLUE task score,
MNLI-matched accuracy for the definitional 5x test**, averaged over 5 runs (Table 1), with the
comparator being the same fine-tuned model with the dimension zeroed and the control being
"1 random removed" / "2 random removed" rows. The frequency endpoint is a **Pearson correlation
coefficient, per layer, over tokens**, between a token's pre-training frequency and the magnitude of
that token's hidden state at the outlier dimension. The attention endpoint is a Pearson correlation,
per token, between average vertical attention and outlier-dimension hidden-state magnitude.

---

## REGIME

The source establishes its outlier-identification claims in this regime: **encoder Transformers of
the BERT/RoBERTa family at base scale (plus one ViT and one 8-layer BERT-medium family), outlier
*parameters* in the final LayerNorm of each layer, with the damage threshold evaluated on
MNLI-matched fine-tuning accuracy averaged over 5 runs, and one model instance per configuration
except for the multiBERTs seed-1 checkpoint series and the authors' three BERT-medium
pre-trainings.**

The claim the entry makes of Table 4 — that it prints per-model outlier indices, and these four
numbers — **sits squarely inside that regime**. Table 4 is exactly a per-model index listing and the
numbers are as recorded.

The claim the entry makes about the *absence* of a cross-run agreement statistic also sits inside the
regime, with one scope correction the entry should carry: the paper has **one seed** of multiBERTs
and **one aggregated row** for its own three BERT-medium runs, so the paper is not in a position to
compute cross-seed index agreement. Its silence is the silence of a design that never set up the
comparison, not of a design that set it up and declined to report it.

The regime does **not** extend to: decoder-only models (GPT-2 is cited, not measured); large-scale
models; protein and audio Transformers beyond the bare observation that no outliers were found in
ESM and Wav2Vec; per-layer behaviour of ViT, BERT-medium or multiBERTs; or any seed-variation
account of outlier indices.

---

## DEFECTS FOUND

Ordered most to least consequential for the ledger entry.

1. **"2–3 standard deviations" flattens a model-specific pair into a range.** The paper does not
   state a 2–3 SD band. Footnote 1 gives **2 SD for RoBERTa and 3 SD for BERT**, as a
   model-by-model specification of a definition it calls "not entirely formal". Writing it as
   "2–3 standard deviations" reads as a tolerance band applied generically; as printed it is two
   discrete per-model thresholds. Minor, but it is exactly the kind of regime flattening this ledger
   has been burned by.
2. **The entry's criterion omits where each half lives and who owns it.** The SD figures are in a
   **footnote** and are **inherited from Kovaleva et al.**; the **5x damage ratio is in the main
   text and is the authors' own addition** ("we add this property to the definition"). The entry
   presents the two halves as co-equal parts of one criterion. The 5x is also not free-floating: it
   is "**at least 5x more damaging effect on accuracy on a representative downstream task, for which
   we choose MNLI**". Detached from the MNLI qualifier it becomes a different, broader claim — the
   same shape of defect as the "seven checks in combination" case.
3. **"within 2 standard deviations from the mean"** is what footnote 1 serves, where an outlier
   threshold would normally read "beyond" or "more than". Reproduced as served and flagged, not
   corrected. Anyone re-deriving the magnitude criterion from this footnote should expect to have to
   resolve this.
4. **Table 4 has only two index columns and one row per model**, including a single "BERT-medium
   (ours)" row for what were three distinct pre-trainings. If the entry treats Table 4 as a record
   of *runs*, it over-reads it: it is a record of **model configurations**, at most two indices each.
   This is a **granularity gap** in the source, not an absence.
5. **"multiberts-seed-1" is one seed.** If the entry's surrounding argument implies the paper had
   seed variation available, that is wrong. §3.3's statement that O218/O674 are "the same for all
   the checkpoints for this seed" is **within-seed across checkpoints**, and qualitative.
6. **The paper does compute Pearson correlations, and they are easy to mistake for the missing
   statistic.** Fig. 4 (frequency vs hidden-state magnitude, per layer) and Fig. 7 (vertical
   attention vs hidden-state magnitude) are correlations *over tokens at an already-chosen outlier
   dimension*. Neither is a correlation or overlap *between index sets*. An entry that says "the
   paper computes no correlation" would be wrong; "no cross-run agreement statistic over index sets"
   is right.
7. **Title drift between versions.** arXiv v3 serves "**Outliers** Dimensions that Disrupt
   Transformers **Are** Driven by Frequency"; the ACL Anthology published version is "**Outlier**
   Dimensions that Disrupt Transformers **are** Driven by Frequency". The entry uses the ACL form,
   which is correct for the version of record — but anyone searching the arXiv string will find a
   mismatch, so the entry should carry pages 1286–1304 and the Anthology ID to disambiguate.
8. **SENTENCE_FREQ is labelled a tokenization scheme but is a frequency intervention.** It replaces
   50% of occurrences of tokens above 1e-5 frequency with random tokens below 1e-5. The entry's
   "varied TOKENIZATION rather than seed" follows the paper's own label and is defensible, but one
   of the three variants is a data-distribution manipulation, not a segmentation change. Worth a
   half-sentence in the entry so the claim is not later read as "three segmentation variants".
9. **Front-matter hygiene note, not an entry defect**: the ViT model name was served with OCR damage
   (`vit-095base`), and footnote 6 says "8 GLUE tasks" while naming seven. Both are the source's or
   the extraction's problem, recorded here so a later reader does not treat them as my corrections.
10. **My own read's limits**: the abstract was not transcribed verbatim (fetch cap), and the
    (d) negative rests on a term-targeted full-text search rather than an unaided page-by-page read.
    Neither limit touches (b), (c), (e) or (f), all of which rest on transcribed passages.

---

## ROUTES THAT FAILED

- `curl -sS -L https://arxiv.org/pdf/2205.11380` → **curl: (56) CONNECT tunnel failed, response 403**,
  zero bytes. Per the routing brief this is **tool-scoped at the proxy, not a host block**: the same
  publisher host answered WebFetch immediately afterwards. No conclusion about arxiv.org or
  aclanthology.org availability should be drawn from it. I did not probe the proxy.
- No other route failed. `arxiv.org/abs/2205.11380`,
  `aclanthology.org/2022.findings-emnlp.93/` and `aclanthology.org/2022.findings-emnlp.93.pdf` all
  served through WebFetch on the first attempt. PMC, Europe PMC, doi.org and Unpaywall were **not
  used**: the paper is open access at the publisher and no DOI resolution or contact address was
  needed.
- Nothing was refused on policy grounds. No personal identifier was placed in any URL, query string
  or header.

---

## BEARING ON THE LEDGER ENTRY

**The entry's factual record of this source holds, with two wording corrections and one scope
correction.**

- (a) Front matter **confirmed**, and now complete: Findings of ACL: EMNLP 2022, December 2022,
  Abu Dhabi, pp. **1286–1304**, DOI 10.18653/v1/2022.findings-emnlp.93, Anthology ID
  2022.findings-emnlp.93. Flag the arXiv title variant.
- (b) **Confirmed, and the numbers are printed where the entry says.** Table 4, Appendix A,
  "The outliers identified for each model used in the paper", columns Model name / Outlier 1 /
  Outlier 2. `bert-base-uncased 308 / 381` and `multiberts-seed-1 218 / 674` appear verbatim, as do
  three further rows (roberta-base 77/588, ViT 187/759, BERT-medium (ours) 281/378). This is a
  **printed quantity**, not a defined-but-unmeasured one.
- (c) **Substantively confirmed, two wording corrections.** Correct the entry to: magnitude criterion
  across layers, with footnote-1 thresholds of **2 SD for RoBERTa and 3 SD for BERT** (not a
  "2–3 SD" band), **plus the authors' own added condition of "at least 5x more damaging effect on
  accuracy" on MNLI specifically**. Keep the MNLI qualifier attached to the 5x.
- (d) **The absence is real.** No overlap, intersection, Jaccard, rank correlation or any other
  cross-run agreement statistic over outlier index sets appears, for models or for seeds. The
  closest thing is a qualitative sentence that O218/O674 hold across all checkpoints of multiBERTs
  seed 1. **Scope correction the entry must carry**: the paper has one multiBERTs seed and prints a
  single aggregated row for its own three BERT-medium runs, so the statistic was never computable
  from its design. The gap is structural — and, for the three BERT-medium runs, a **granularity**
  gap, since the runs exist but their per-run index sets are not printed. If the entry's question is
  "did anyone measure whether outlier indices agree across runs?", this source is **silent, not
  contrary**, and its silence should not be cited as a flag of the gap, since the paper nowhere
  notes it.
- (e) **Confirmed, with one nuance to add.** Reconstructed from the paper: "All three models started
  from the same initialization but were fed different data according to the tokenization schemes",
  three versions of BERT-medium per Turc et al. (2019), no seed mentioned, Wikipedia 01/03/2022,
  327,500 steps, max length 256, batch 128. Add that one of the three variants (SENTENCE_FREQ) is a
  token-frequency substitution rather than a segmentation change.
- (f) **Regime recorded above.** The entry is safe to cite this source for *the existence and indices
  of outlier dimensions in base-scale BERT/RoBERTa-family encoders, under an MNLI-accuracy damage
  threshold, one instance per configuration*. It is **not** support for anything about seed
  variation, decoder-only models, scale, or per-layer behaviour in ViT / BERT-medium / multiBERTs.
