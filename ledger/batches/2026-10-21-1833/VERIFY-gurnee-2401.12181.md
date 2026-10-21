# VERIFY — Gurnee et al., "Universal Neurons in GPT2 Language Models" (arXiv:2401.12181)

Checker: fresh context, 2026-10-21. Query budget used: 5 WebFetch (cap 5, one of them a
failed fetch), 1 WebSearch (cap 6), plus 2 curl attempts (both refused at this proxy).
Budget exhausted at the point noted under ROUTES THAT FAILED; stopped rather than
working around the refusals.

## CLAIM

As the ENTRY cites the source: Gurnee et al., "Universal Neurons in GPT2 Language Models",
TMLR 2024, arXiv:2401.12181. The entry records:

- that the design is independently seeded runs of one recipe;
- that "1-5% of neurons are universal";
- an excess-correlation threshold above 0.5;
- a RANDOM ROTATION baseline;
- and (the candidate question) that the paper does not address whether universal units
  recur at the SAME INDEX across seeds, or that index identity is meaningless under
  permutation symmetry.

Sub-claims (a)-(f) as handed to me are answered in order below.

## READ LEVEL

**Full text**, read through the arXiv HTML rendering at
`https://arxiv.org/html/2401.12181v1` (three separate reads, each one a prompt against the
whole document). Front matter read separately at `https://arxiv.org/abs/2401.12181`.

Qualification that matters for how much weight each line below carries: every read passed
through the fetch tool's summarising reader. Two of the three reads returned **ordered
consecutive fragments** that I was able to join into continuous sentences — those are
marked **[verbatim, as served]** below. The third read **refused** to return the Abstract
and Appendix A.2 as fragments ("I can't reproduce ... word-for-word as consecutive
fragments, since that would reconstruct the full text") and returned numbered paraphrase
instead. Everything sourced only from that third read is marked
**[reader paraphrase, NOT verbatim]**. I did not get a verbatim Abstract. I never
completed a cut string by inference, and nothing below is assembled from
non-consecutive returns.

I did **not** open the TMLR / OpenReview record of record (see ROUTES THAT FAILED and
DEFECTS FOUND #1).

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter as served

From the arXiv abstract page, as served:

- Title: **Universal Neurons in GPT2 Language Models**
- Authors, in order: **Wes Gurnee, Theo Horsley, Zifan Carl Guo, Tara Rezaei Kheirkhah,
  Qinyi Sun, Will Hathaway, Neel Nanda, Dimitris Bertsimas** (8 authors)
- Identifier and version: **arXiv:2401.12181v1**, submitted **2024-01-22**; v1 is the only
  version the page lists
- Subjects: **cs.LG, cs.AI, cs.CL**
- **Journal reference: none listed. DOI: none listed. Comments: none listed.**

So the arXiv front matter as served does **not** carry the "TMLR 2024" attribution the
entry uses. It is not contradicted either — a web search returned a TMLR-pathed mirror
(`.../ml-papers-txt/TMLR/2024/universal_neurons_in_gpt2_language_models__8a2e0a4e.txt`)
and an `mlanthology.org/tmlr/2024/gurnee2024tmlr-universal` page, both consistent with
TMLR 2024 — but I could not open either (proxy refusals), so the venue is **unverified
first-hand in this check**, not disproved. Note the discipline point: front matter is to
be taken from the front matter, and this front matter is v1 preprint front matter, which
is silent on the venue. Volume, issue and page numbers of the TMLR version are therefore
**not** established here.

### (b) The design — five models, one recipe, differing in seed

Section 3.2 "Models", **[verbatim, as served]**, assembled from 8 consecutive fragments:

> "We focus on a replication of the GPT2 series of models (Radford et al., 2019) with some
> supporting experiments on the Pythia family (Biderman et al., 2023). For a GPT2-small and
> GPT2-medium architecture (see § A.3 for hyperparameters) we study five models trained from
> different random seeds, referred to as GPT2-{small, medium}-[a-e] (Karamcheti et al.,
> 2021). For all models we study, σ is the GeLU activation function (Hendrycks and Gimpel,
> 2016). We refer the reader to (Elhage et al., 2021) for a full description of the
> transformer architecture."

So: **five seeds per architecture, two architectures (GPT2-small and GPT2-medium), one
recipe each**, taken from the Karamcheti et al. (2021) GPT-2 replication; plus Pythia-160M
as a supporting, not primary, model. The entry's reading — independently seeded runs of one
recipe rather than different models — is what the paper says, for the GPT2-small and
GPT2-medium families.

Two precision points.

1. The sentence says "same architecture ... different random seeds". It does **not**, in
   §3.2, say "same data" or "same hyperparameters" or anything about **data order**. The
   reader's section-level read reported §3.2 "does not mention data order or the training
   dataset" and pointed to the Appendix A.3 table for dataset and hyperparameters. The
   seeds are therefore same-architecture-and-recipe by citation to Karamcheti et al.,
   not by a sentence in §3.2 enumerating what is held fixed.
2. The paper names its own variation dimension. Section 3.1, **[verbatim, as served]**,
   assembled from consecutive fragments:

   > "Universality must be measured over some independent dimension of variation, that is,
   > some change in the model, data or, training. Assuming that changing random seed is the
   > smallest change, this work primarily focuses on initialization universality in an
   > attempt to bound the degree of similarity expected when studying larger changes."

   The paper's own term is **"initialization universality"**. It treats the seed as the
   smallest available change and frames its result as a **bound** on the similarity to
   expect under larger changes.

### (c) NAME THE NUMBER

Three distinct quantities are in play and the entry collapses them.

**The threshold.** Printed, in Section 4.1, as excess correlation `ϱᵢ > 0.5`. Accompanied,
in the same sentence, by the paper's own disclaimer — **[verbatim, as served]**:

> "While there is no principled threshold at which a neuron should be deemed universal,
> only 1253 out of the 98304 neurons in GPT2-medium-a have an excess correlation greater
> than 0.5."

So the threshold is real, printed, and **explicitly disavowed as principled by its own
authors in the same clause that uses it**. The grammar on both sides of that cut matters:
a quotation of "excess correlation greater than 0.5" that drops the "no principled
threshold" opener inverts the authors' hedge into a criterion.

**The counts and percentages, with locations.** Section 4.1, **[verbatim, as served]**:

> "A rather surprising finding is that while the percentage of universal neurons (ϱᵢ > 0.5)
> within GPT2-medium and Pythia-160M are quite consistent (1.23% and 1.26% respectively),
> the number in GPT2-small-a is far higher at 4.16%."

Locations, as the reader reported them: **1253 / 98304**, **1.23%**, **1.26%** and
**4.16%** are all printed **in running sentences in Section 4.1**. None of them is in a
table or a figure caption; the reader checked the §4.1 figure captions (Figures 2, 12, 13)
and Table 1 and reported no such values there — Table 1 is hyperparameters.

**The denominator.** All neurons in the model, across all layers: 98,304 for GPT2-medium-a
(24 layers × 4096 MLP neurons). The percentage is **a share of the model's MLP neurons**,
not a share of some already-interpretable subset and not a share of activations.

**The "1-5%" figure the entry records.** This is the **Abstract and Introduction** figure,
not a Section 4.1 figure — the reader stated this explicitly ("The '1-5%' range is not in
Section 4.1. It appears in the abstract and introduction"), and both of my other reads
independently reported the Abstract as saying roughly 1-5% of neurons are universal. I
was **unable to obtain "1-5%" as a verbatim string** (the reader refused the Abstract).
So: the entry's "1-5%" is the paper's own abstract-level rounding of its range, and it is
honestly attributed — but the numbers the paper actually prints in its results section are
**1.23% (GPT2-medium), 1.26% (Pythia-160M), 4.16% (GPT2-small-a)**, which is a 1-to-4%
spread across two architectures and one outside family, not a 1-to-5% spread within one
recipe.

**Arithmetic that is mine, not the paper's.** 1253 / 98304 = **1.2746%**. The paper prints
**1.23%** for GPT2-medium. These are not the same number, which is consistent with 1.23%
being a figure for the GPT2-medium family (plausibly a mean over the five seeds) while
1253/98304 is the single model GPT2-medium-a. **The paper does not print the conversion of
1253/98304 into a percentage**, and it does not, in anything I read, state that 1.23% is a
mean over seeds or carry a spread or uncertainty on it. Likewise 4.16% of GPT2-small's
36,864 neurons (12 × 3072) would be ≈1,534 neurons — **my arithmetic, not printed**. No
confidence interval, standard deviation across seeds, or sensitivity curve over the
threshold is reported for any of these percentages in what I read.

**The random rotation baseline.** Printed, Section 4.1, **[verbatim, as served]**,
assembled from 5 consecutive fragments:

> "For a set of models M we define the excess correlation of neuron i as the difference
> between the mean maximum correlation across models and the mean maximum baseline
> correlation in the rotated basis: [equation] In other words, we compute the correlation
> between neurons and elements within a random (approximate) rotation of a layer of neurons
> to establish a baseline correlation for the case where there does not exist a privileged
> basis (Elhage et al., 2021; Brown et al., 2023) to verify the importance of the neuron
> basis."

The baseline is therefore (i) real, (ii) printed, (iii) **a rotation of a layer of
neurons**, used as a null for "no privileged basis". The first read reported the rotation
as implemented with "a random Gaussian matrix R" — hence "approximate" rotation. The
excess correlation is a **difference of two means of maxima**, not a correlation.

Location discipline: both the definition of excess correlation and the random-rotation
baseline sit in **Section 4.1**, not in Section 3.1. My first read's section-level
attribution was loose here and the fragment read corrected it; an entry citing §3 for the
measure would be citing the wrong section.

### (d) The unit, and how units are matched

**Unit: MLP neurons.** The post-activation MLP (feed-forward) neurons — the paper's §3.2
"Anatomy of a Neuron" run-in sets this up, and the 98,304 count for GPT2-medium is
24 × d_mlp 4096, which is the MLP neuron count, not the residual width (1024). **Not
residual-stream dimensions.**

**Matching: by activation correlation, over a maximum, NOT by index.** The printed
definition above does the work: excess correlation is the mean over models of the
**maximum** correlation, i.e. for each neuron the best-matching partner in each other model
is found by correlation. The reader also reported, from Section 4.1 **[reader paraphrase,
NOT verbatim]**: Pearson correlations of each neuron against every neuron in each of the
other four models, each model contributing its maximum; and that **matching is not
restricted to the same layer** — every neuron in every layer of the other models is a
candidate. I flag the same-layer point as paraphrase: I could not get it as a quotation,
and it should not be entered as one.

Measurement conditions, **[reader paraphrase, NOT verbatim]**, Appendix A.2 "Correlation
Computations": correlations over a **100-million-token subset of the Pile test set**,
context length **512**, with **padding, beginning-of-sequence and newline tokens
excluded**; activations too large to store, so a **streaming algorithm** keeping running
means, running sums of squares and running sums of pairwise products, with correlations
computed at the end.

### (e) THE QUESTION THAT MATTERS: same index across seeds? permutation symmetry?

This is the finding of the check, and it is a clean one.

**The paper nowhere reports whether universal units recur at the same index across seeds,
and nowhere states that index identity is meaningless because of permutation symmetry.**

Word-level check, as the reader reported it on an explicit search of the document:

- **"permutation" does not occur.**
- **"permute" does not occur.**
- **"same position" does not occur.**
- **"corresponding neuron" does not occur.**
- **"index"** does not occur as a standalone word. The plural **"indices"** occurs once, in
  the Appendix A intro, and in an entirely unrelated housekeeping sense — as served:
  > "Most of our plots in the main text (and therefore neuron indices) correspond to the
  > HuggingFace model..."
  That is a note about which model's numbering the plots use. It is not a statement about
  index identity across seeds.

What the paper **does** say in the vicinity is about the **basis**, not the index. The only
relevant material is the baseline motivation already quoted — **[verbatim, as served]**:

> "...to establish a baseline correlation for the case where there does not exist a
> privileged basis (Elhage et al., 2021; Brown et al., 2023) to verify the importance of the
> neuron basis."

And, from the first read's account of Related Work, the paper cites **Brown et al. (2023)**
for networks that "do not converge to a unique basis" (reported as a quotation by the
reader; I treat it as **[reader paraphrase, NOT verbatim]** since it came from the
unsegmented read).

Read that carefully, because it is a near-miss that must not be scored as a hit. The
privileged-basis sentence asks **whether the neuron basis is special at all, within one
model**, by comparing against a rotated basis. It does **not** ask whether neuron *k* in
seed a corresponds to neuron *k* in seed b. Those are different questions: one is about
the basis being axis-aligned, the other about the labelling of the axes being shared
across runs. The paper's method **sidesteps** the index question by construction — it
maximises over all candidate neurons, so index identity never has to be assumed or tested
— but **sidestepping is not reporting**. The paper neither measures index recurrence nor
declares it meaningless.

One discipline point in the other direction: this silence is **silence**, not a
prohibition, and the paper citing Brown et al. on non-unique bases is a note about a
**different** thing (basis uniqueness) than the gap being checked (index identity across
seeds). It should not be presented as the paper flagging the gap.

### (f) REGIME

- **Models and scale:** GPT2-small (12 layers, d_mlp 3072 → 36,864 MLP neurons, ~124M
  params) and GPT2-medium (24 layers, d_mlp 4096 → 98,304 MLP neurons, ~355M params), from
  the Karamcheti et al. (2021) replication; **Pythia-160M** in a supporting role. Nothing
  above ~355M parameters.
- **Seeds:** **five** per GPT2 architecture, labelled `[a-e]`. The Pythia-160M figure
  (1.26%) implies multiple Pythia seeds, but the paper's own framing of Pythia is "some
  supporting experiments", and I did not find a sentence stating the Pythia seed count.
- **Layers:** **all** layers of each model are in scope — the 98,304 denominator is the
  whole model, and matching is reported (paraphrase) as unrestricted across layers. The
  paper separately discusses depth, including a **run-in on depth specialization** and
  **§6.1 Cosine and Activation Frequency**, **§6.2 Duplication and Universality**,
  **§6.3 Scale and Universality**.
- **Data / instrument:** 100M tokens of the Pile test set, context 512, pad/BOS/newline
  excluded; Pearson correlation of post-activation MLP neuron activations; null = random
  approximate rotation of a layer.
- **Scale extrapolation, as the paper itself hedges it** **[reader paraphrase, NOT
  verbatim]**, §6.3: the authors suggest the number of universal neurons **may decrease**
  in larger models, citing Bills et al. (2023), and note that confirming this would
  **require more experiments on larger models trained from random seeds**. So the paper
  does not claim its percentages transfer upward; it says the opposite is plausible and
  untested.
- **Document type:** a **primary empirical study** (with a substantial exploratory /
  taxonomic component: neuron families, functional roles, "Additional Mysteries"). Not a
  review, protocol, guideline or editorial. Its §7 carries an explicit **Limitations**
  run-in. The attention-deactivation and entropy-neuron results are its own findings, not
  findings it attributes to others.

Section structure as served, for citation: 1 Introduction; 2 Related Work; 3 Conceptual and
Empirical Preliminaries (3.1 Universality, 3.2 Models); 4 The Search for Universal Neurons
(4.1 How Universal are Individual Neurons?, 4.2 Properties of Universal Neurons, 4.3
Universal Neuron Families); 5 Universal Functional Roles of Neurons (5.1 Prediction
Neurons, 5.2 Entropy Neurons, 5.3 Attention Deactivation Neurons); 6 Additional Mysteries
(6.1-6.3); 7 Discussion and Conclusion; Acknowledgments; Author Contribution; References;
A Additional Empirical Details (A.1 Weight Preprocessing, A.2 Correlation Computations,
A.3 Model Hyperparameters); B Additional Results.

## DEFECTS FOUND

Numbered by what an entry built on this source could get wrong. Defects 1-5 are in the
entry's or a prior reader's handling of the source; 6-8 are in my own read and are declared
so they are not mistaken for findings.

1. **"TMLR 2024" is not in the front matter I read.** The arXiv abs page serves v1 with no
   journal reference, no DOI and no comments field. The venue is plausible and
   search-consistent but **unverified here**, and no volume or page numbers exist in this
   check. An entry that cites "TMLR 2024" is citing a short form someone else wrote, not
   front matter. Fix by opening the TMLR record, or by citing the arXiv preprint as the
   arXiv preprint.

2. **"1-5%" is an abstract rounding presented as a result.** The results section prints
   1.23%, 1.26% and 4.16%. The 1-5% range is the Abstract/Introduction figure and it spans
   **two different architectures plus a different model family** — GPT2-medium at the low
   end, GPT2-small at the high end. Carrying "1-5% of neurons are universal" as if it were
   a within-recipe seed-variability range misstates where the spread comes from. The spread
   is **across scales and families**, not across seeds.

3. **The threshold's own disavowal is droppable, and dropping it changes the claim.** The
   0.5 threshold appears inside the clause "While there is no principled threshold at which
   a neuron should be deemed universal". Every percentage in the paper is a percentage *at
   an admittedly arbitrary cut*, and I found **no threshold-sensitivity figure, no
   uncertainty, and no across-seed spread** reported alongside any of them. An entry
   stating "excess-correlation threshold above 0.5" without the hedge reports a criterion
   the authors declined to claim.

4. **Published is not performed, in one specific place:** the paper **prints** the raw count
   1253/98304 and **prints** the percentages 1.23/1.26/4.16, but **does not print the
   conversion** of 1253/98304 to a percentage, and 1253/98304 = 1.2746% ≠ the printed
   1.23%. Anyone who writes "1253 of 98304, i.e. 1.27%" is doing their own arithmetic and
   is also, silently, mixing a single-model count with what is most likely a family-level
   percentage. The paper, in what I read, never states the denominator convention behind
   1.23%.

5. **Section attribution drift.** The excess-correlation definition and the random-rotation
   baseline are in **§4.1**, not §3.1. §3.1 "Universality" is conceptual — it defines
   implementation universality and initialization universality and nothing numeric. My own
   first, unsegmented read mis-placed them in §3.1 and the fragment read corrected it,
   which is exactly the error an entry would inherit from a loose read.

6. **My own read is reader-mediated, and one read refused.** I could not obtain the
   **Abstract** verbatim, so the string "1-5%" is attested here only by reader paraphrase —
   consistently, across two independent reads, but not verbatim. Appendix A.2 and §6.3 are
   likewise paraphrase. Everything I marked **[verbatim, as served]** came back as ordered
   consecutive fragments and joins into continuous sentences; everything else is marked.

7. **A quotation the first read offered that the fragment read did not support.** My first
   read reported the paper describing the models as "models of the same architecture trained
   on the same data". The fragment-level read of §3.2 returned no such phrase and reported
   that §3.2 does not mention the dataset. **Do not enter that string as a quotation from
   §3.2.** It may well be in the Abstract or Introduction; I could not confirm it. What
   §3.2 verifiably says is "the same architecture ... five models trained from different
   random seeds", with hyperparameters deferred to §A.3.

8. **Negative word checks are reader-performed, not grep.** "permutation does not occur",
   and the companions, come from the reader searching the document on my instruction, not
   from me grepping a local copy — the two routes that would have given me a greppable
   local copy were both refused (below). I rate this finding **high confidence but not
   mechanically verified**: it is corroborated by the structure of the paper (a
   maximum-over-all-neurons matching procedure has no occasion to discuss indices) and by
   the fact that the one surviving occurrence, "indices", turned up in an unrelated
   plotting note, which is the kind of detail a reader inventing an absence would not
   produce.

## ROUTES THAT FAILED

- `curl https://arxiv.org/pdf/2401.12181v2` → **curl (56) CONNECT tunnel failed, response
  403**. Tool-scoped refusal, exactly as the routing brief predicts for curl; not a host
  block — the same host answered WebFetch immediately afterward.
- `https://arxiv.org/html/2401.12181v2` via WebFetch → **CLIENT_ERROR, "There was an error
  while fetching."** There is no v2; v1 is the only version. Counted against the fetch cap.
- `curl https://object.cloud.sdsc.edu/.../TMLR/2024/universal_neurons_in_gpt2_language_models__8a2e0a4e.txt`
  → **curl (56) CONNECT tunnel failed, response 403**, with the proxy reporting
  `object.cloud.sdsc.edu:443 — connect_rejected`. This was the route that would have given
  me a greppable plain-text TMLR copy and so a verbatim Abstract and a mechanical word
  search. **Refused, and the WebFetch cap (5) was already exhausted, so I stopped here
  rather than working around it.** The consequence is declared as defects 6 and 8.
- **Not attempted, and why:** the OpenReview/TMLR record and `mlanthology.org` (both
  returned by search) would have settled the venue and given a verbatim Abstract — no fetch
  budget remained. `ar5iv.labs.arxiv.org/html/2401.12181` likewise. PubMed Central and
  Europe PMC are irrelevant to this source. Unpaywall not used (it would require supplying
  a contact address).

## BEARING ON THE LEDGER ENTRY

**The entry's characterisation of the source is substantially right, and the candidate gap
it hangs on the source is real.**

On the design (b): confirmed, verbatim. Five models per architecture, one recipe, differing
in random seed. The paper's own name for the regime is **initialization universality**, and
it explicitly frames the result as a **bound** on what to expect under larger changes —
which, if anything, strengthens an entry that uses it as a seed-level reference point.

On the threshold and baseline (c): both confirmed as printed, in **§4.1**, with the
random-rotation null confirmed verbatim including the words "privileged basis". Two
corrections the entry should absorb: cite **§4.1**, not §3, and carry the authors' own
"no principled threshold" hedge whenever the 0.5 is quoted.

On the percentage (c): the entry's "1-5%" is the paper's own abstract figure, so it is not
fabricated — but it is **the wrong granularity for what an entry usually wants it to do**.
The printed results are 1.23% (GPT2-medium), 1.26% (Pythia-160M), 4.16% (GPT2-small-a),
all as a share of the model's **MLP neurons** across all layers. The 1-to-5 spread is
**across architecture and family**, not across seeds. If the entry uses "1-5%" to say "seed
to seed, only a small and somewhat variable minority of neurons recur", the first half is
supported and the "variable" half is attributing to seeds a spread the paper gets from
scale.

On the unit and matching (d): confirmed, and this is where the entry is on firmest ground.
The units are **MLP neurons**, and matching is **by maximum activation correlation**, with
index playing no role in the procedure.

On the candidate question (e): **the gap holds.** The paper does not report index
recurrence across seeds, and it does not state that index identity is meaningless under
permutation symmetry. "permutation", "permute", "same position" and "corresponding neuron"
do not occur; "indices" occurs once, about which HuggingFace model the plots number against.
The nearest thing in the paper — the random-rotation baseline motivated by "the case where
there does not exist a privileged basis ... to verify the importance of the neuron basis" —
answers a **different** question: whether the neuron basis is axis-privileged within a
model, not whether axis *k* means the same thing in two runs. An entry must not cite the
privileged-basis sentence as the paper addressing index identity; and equally must not read
the paper's silence as the paper denying that indices matter. The honest statement is:
**the paper's method makes the index question unnecessary by maximising over all candidate
neurons, and the paper never asks or answers it.** That is a methodological sidestep, which
is a weaker and more defensible thing to record than either "the paper says indices are
meaningless" or "the paper overlooked permutation symmetry".

On scope (f): the entry should carry the ceiling. **≤355M parameters, five seeds, two GPT2
architectures plus Pythia-160M, 100M Pile-test tokens at context 512.** §6.3 itself
suggests the universal fraction **may fall** at larger scale and says confirming it needs
experiments not yet run. Any use of "1-5% of neurons are universal" as a property of
language models in general is outside the regime the paper proved it in, and the paper says
so first.

One standing caveat on this note itself: the venue line ("TMLR 2024") and the verbatim
Abstract remain unverified here, and the negative word checks are reader-performed rather
than grepped, because two routes to a greppable copy were refused and the fetch budget was
spent. A single successful fetch of the TMLR/OpenReview record would close all three.
