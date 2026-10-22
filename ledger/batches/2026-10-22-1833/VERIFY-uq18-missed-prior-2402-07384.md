# VERIFY - arXiv:2402.07384 is a real close neighbour on patch boundaries, but its "sampling-rate threshold" is a pixels-per-glyph legibility knee, not a contrast-and-frequency cutoff

Checker: fresh context. Budget used: 7 WebFetch (2 of them rate-limit failures, 1 a site client_error), 1 WebSearch. Date 2026-10-22.

## CLAIM

That Gate 2 MISSED this prior and the adversaries found it, and that arXiv:2402.07384 prints a sampling-rate threshold, tabulates patch sizes, and measures a patch-boundary effect - making it a closer neighbour than any of the three priors the record names.

Two parts of that are not checkable from the documents and I did not try to check them: (i) whether Gate 2 missed it and the adversaries found it is a process fact about the batch, not a fact about the paper; (ii) "closer neighbour than any of the three priors the record names" cannot be graded, because the task did not give me the three priors and I did not open them. I grade the three printable predicates (threshold / patch-size table / patch-boundary effect) and the candidate's four limbs.

## READ LEVEL

- **arXiv:2402.07384, the arXiv version: FULL TEXT (PDF), via https://arxiv.org/pdf/2402.07384.** Front matter, Sections 1-5, Table 1-3 and Figure 1-13 captions, Appendices A-E all reached. Two targeted passes over the same PDF.
- **arXiv:2402.07384 abstract page: FULL** (https://arxiv.org/abs/2402.07384). It reports `arXiv:2402.07384v1`, "This version: v1", submitted 2024-02-12, subjects cs.CV / cs.AI / cs.LG, and **no journal reference and no DOI**. So the entry's third route, `https://arxiv.org/html/2402.07384v2`, names a version the abs page does not list; I could not confirm a v2 exists.
- **The TMLR published version: COULD NOT READ.** `https://openreview.net/pdf?id=D8MjYW8m35` failed with a site client_error and nothing was retrieved; budget then ended. I read its BibTeX only. **Its silence on contrast and spatial frequency is therefore not evidence** - the published version carries a revised title and I cannot rule out added analyses. This is COULD NOT READ, not NOT FOUND.
- Routes I did not try for want of budget: Semantic Scholar, the ISI publication pages, alphaxiv.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are from the arXiv PDF unless marked. The summariser caps verbatim quotation near 125 characters; every string below arrived inside one return and none is assembled across returns. Where I give a scope reading I say which.

**(a) Front matter.** Title as printed: *Exploring Perceptual Limitation of Multimodal Large Language Models*. Authors in printed order: **Jiarui Zhang\*, Jinyi Hu\*, Mahyar Khayatkhoei, Filip Ilievski, Maosong Sun** (\* equal contribution). Affiliations: University of Southern California; Tsinghua University; Vrije Universiteit Amsterdam. Venue line on the arXiv version: "Preprint under review." No DOI. Submitted 2024-02-12.

The paper has since been published, under a **different title**, per the TMLR BibTeX served at `https://jmlr.org/tmlr/papers/bib/D8MjYW8m35.bib`:

> `title={Exploring Perceptual Limitations of Multimodal {LLM}s on Small Visual Objects}`
> `author={Jiarui Zhang and Jinyi Hu and Mahyar Khayatkhoei and Filip Ilievski and Maosong Sun}`
> `journal={Transactions on Machine Learning Research}`, `issn={2835-8856}`, `year={2026}`, `url={https://openreview.net/forum?id=D8MjYW8m35}`

No volume field, no DOI (TMLR issues none). Author list is identical in both; the 2026 entry drops the equal-contribution marking.

**(c) The "sampling-rate threshold".**

Definition, Section 4 (Object Quality): *"We define quality as the original sampling rate of an object (in pixels per inch, or pixels per vector graphic range)."* And: *"we use the terms 'sampling rate' and 'quality' interchangeably."*

Operationalisation for the synthetic task, Section 4.1: *"the 'sampling rate' is defined in terms of the font size used during text creation"*, *"which correlates with the vertical pixel count of the text characters."*

The threshold sentence, Section 4.2: *"Remarkably, the threshold of a sampling rate of 8 is consistently observed across all MLLM models."* **Scope reading:** the opening word is the adverb "Remarkably," which scopes the clause as a cross-model observation rather than as a derivation. The clause **ASSERTS** the quantity (threshold = 8) and additionally asserts its invariance across models. It is not a denial and not a move away.

Figure 4 caption: *"from the sampling rate of 8 (marked as red), the image starts to become fully recognizable."*

**No accuracy criterion is declared.** The supporting text is *"the performance stabilized with increasing sampling rate"* - a knee read off the curve, with no stated percent-correct level at which the threshold is taken.

On human perception, the **hedged formulation in the body**: *"it becomes hard to read text below this threshold for our own eyes."* **Scope reading:** the trailing qualifier "for our own eyes" scopes the claim to the authors' own introspection while composing the stimuli. The clause asserts informal agreement with human legibility; it is **uncited** and reports no human experiment. The **bare** formulation is the section heading, *"The threshold is universal and aligns well with human perception"*, also uncited. Per quotation discipline the hedged body sentence is the one to carry.

Related, Section 1: *"Object quality (sampling rate) higher than a certain threshold does not affect MLLMs' performance."* Section 4.2: *"MLLMs' response to object quality is threshold-dependent."*

**(d/e) Frequency vocabulary.** The words **Nyquist, spatial frequency, cycles per degree and cycles per patch do not appear** in the arXiv version as served across two full passes. The paper never calls the sampling rate a frequency.

**(f) The patch-boundary effect.** Section 4.5.2, "Local Patch Boundary Cut". Procedure: *"We construct a dataset where the generated digital text gradually crosses an image boundary."* Vertical cuts hold the text at a fixed vertical position and slide it horizontally; horizontal cuts do the reverse. Digit-string length is set by *"the maximum digit capacity for a single image patch, specifically setting at six digits for Fuyu-8B and three digits for the remaining models."* Trial count: *"We include 100 random numbers for each experiment."*

Direction of the effect, Section 4.5.2: *"Model's performance is lower when target objects remain undivided by patch boundaries."* And: *"small objects seem to be more recognizable by MLLMs when they are divided into different image patches."* Section 5 restates it: *"MLLMs are good at recognizing small objects that are divided into more image tokens."*

The one printed scalar: *"Qwen-VL-Chat still presents an around 10 percent gap between different patch boundary cuts."* **Scope reading:** "still" marks this as a residual that survives something earlier in the argument; I could not determine from the served text what it survives (most likely the 28x28 patch-merging manipulation of 4.5.1, but I did not confirm that and will not assert it). The clause **ASSERTS** the gap, for **one model only**.

**Patch sizes tabulated - Table 3** (served as a table; reproduced as served):

| Model | Patch Number | Patch Size | Resolution |
|---|---|---|---|
| BLIP-2 | 16x16 | 14x14 | 224x224 |
| InstructBLIP | 16x16 | 14x14 | 224x224 |
| LLaVA-1.5 | 24x24 | 14x14 | 336x336 |
| Qwen-VL-Chat | 32x32 | 14x14 | 448x448 |
| Fuyu-8B | 10x10\* | 30x30 | 300x300\* |

\*Table 3 footnote: *"Fuyu-8B has a fixed patch size of 30x30 but does not have a fixed patch number. We set it to 10x10 in our experiment."* Section 4.5.1 also reports a merge manipulation: *"we amalgamate every four adjacent 14 x 14 image patches"* into a single 28x28 patch.

**(h) Contrast.** Absent as a manipulated or measured variable. The only stimulus statement touching it is that the text is *"overlaid on plain white backgrounds."* The word "contrast" did not appear in either pass.

**Manipulated variables, for the record:** object quality (sampling rate, digits at rates 2 to 20 in steps of 2); object size (1x to 5.5x in steps of 0.5, at fixed quality); number of same-type distractors (0 to 9); location (global position in the image; and cut / uncut by a patch boundary, vertically or horizontally). Dependent measure: answer accuracy - synthetic digit and text tasks scored by **Gestalt Pattern Matching**, GQA and TextVQA by inclusion match in the main text and exact match in Appendix B.

## REGIME

**In the source's own words.** Population: five open multimodal large language models - BLIP-2, InstructBLIP, LLaVA-1.5, Qwen-VL-Chat, Fuyu-8B (Table 1 and Table 3) - plus API models on the dataset experiments, whose vision encoders "divide the input image into patches and feed them into Transformer blocks sequentially in a raster-scan order" (Section 2). Unit of analysis: one question-image pair - one rendered digit string for the synthetic studies, one VQA item for GQA and TextVQA. Operating condition: natural images "unified to size 224x224" for the dataset studies; for the synthetic studies, machine-rendered digits and text "overlaid on plain white backgrounds", 100 random numbers per experiment, at native model resolutions of 224 to 448 px. Instrument: the model's own text answer, scored by Gestalt Pattern Matching (synthetic) or inclusion / exact string match (datasets) - **no human observers and no psychophysical apparatus anywhere**. Threshold: a sampling rate of 8, where "sampling rate" is a *sampling density* - "pixels per inch, or pixels per vector graphic range", operationalised as rendering font size, "which correlates with the vertical pixel count of the text characters". Category: sensitivity of small-object perception to quality, size, distractors and location.

**Is the candidate inside it?** Partly, and the part that matters sits outside. The candidate and this paper share the population (patch-tokenising vision encoders), the unit (one image per trial) and one whole mechanism (the patch grid as a cause of fine-detail failure). They do **not** share the instrument or the threshold. The candidate's threshold is a behavioural contrast-and-frequency cutoff: a criterion level of performance located on a **frequency** axis with **contrast** as a second manipulated axis. This paper's threshold lives on a **pixels-per-glyph** axis with no contrast axis at all, and is located by eye rather than by criterion. A sampling density and a spatial frequency are reciprocally related in principle, but a result established on rendered-font legibility at one fixed contrast is **silent** about a contrast-dependent frequency cutoff, not supportive of it.

## DEFECTS FOUND

Answering the sub-claims in order.

**(a) Front matter - CORRECTION OWED.** The entry carries this as an arXiv preprint. It is now **Jiarui Zhang, Jinyi Hu, Mahyar Khayatkhoei, Filip Ilievski, Maosong Sun, "Exploring Perceptual Limitations of Multimodal LLMs on Small Visual Objects", Transactions on Machine Learning Research, 2026, ISSN 2835-8856, OpenReview D8MjYW8m35** - a **different title** from the arXiv one the entry's routes point at. No DOI. Also: the entry lists `html/2402.07384v2` as a route, but the abs page reports only v1; I could not confirm v2.

**(c) The threshold is printed, but it is the wrong kind of threshold - and it is not criterion-defined.** The number is **8**. Units: **rendering font size, correlating with the vertical pixel count of a character** - i.e. pixels per glyph, a sampling *density*; the general definition gives "pixels per inch, or pixels per vector graphic range". Location: **Section 4.2 text and Figure 4** (marked in red on the figure). Criterion used to define it: **none is declared** - the justification offered is that "the performance stabilized with increasing sampling rate", so it is an eyeballed knee in an accuracy curve.

Of the three kinds the task asks me to separate: it is **none of them cleanly**, and I will not let it pass as any one.
- Not an **analytic Nyquist limit**: the paper never derives it, never writes Nyquist, and the value is empirical.
- Not a **detection threshold**: nothing is detected against a null; the task is identification of a rendered digit string.
- Not a **behavioural threshold from a forced-choice task**: the response is an **open-ended generated string** scored by Gestalt Pattern Matching, there is no alternative set, no chance level and no fitted psychometric function, and no criterion percent-correct is named. It is best described as **an eyeballed legibility knee in open-report accuracy, from a machine observer**. Calling it a "behavioural threshold" without that qualification would be the ledger's familiar error.

**Numerator / denominator check on the number 8, both directions.** The quantity's *numerator class* is a rendered font size in pixel-height terms, with the paper's own exclusions: it is defined only for machine-rendered text and vector graphics ("pixels per vector graphic range"), it is manipulated by a downsample-then-upsample pipeline (Figure 3) that reduces quality "sixfold at fixed size and position", and it is varied with **size held fixed** - the companion size study (Figure 5) varies size at fixed sampling rate, so quality and extent are explicitly orthogonalised. Its *denominator* is **one character's vertical extent in pixels**, checked against its near neighbours it is not: not the image (that is Table 3's 224-448 px resolution), not the patch (that is Table 3's 14x14 or 30x30), and not a degree of visual angle (no viewing geometry exists in the paper).
- What the source's class **MISSES** that the candidate's cutoff includes: any contrast dimension; any periodic or broadband stimulus; any frequency denominated per patch or per image; any criterion-anchored threshold with an uncertainty; any non-text spatial structure.
- What the source's class **INCLUDES** that the candidate's cutoff excludes: font rendering and anti-aliasing artefacts of the resample pipeline; glyph-identity confusability; tokeniser and language-prior effects on reading digit strings; and the one-fixed-contrast white-background regime.
These are two different quantities. The number 8 is one word away from the claim's and is not the claim's.

**(d) Spatial-frequency cutoff at a declared criterion - ABSENT.** Explicitly absent: no spatial-frequency axis exists, and no criterion is declared for the one threshold the paper does print. **ABSENT, from a full-text read**, not COULD NOT CHECK.

**(e) Cycles per patch, or any frequency normalised by the patch grid - ABSENT.** The nearest thing is *"the maximum digit capacity for a single image patch, specifically setting at six digits for Fuyu-8B and three digits for the remaining models."* That is a **count of glyphs per patch, chosen as an experimental-design parameter**, with no derivation printed. Numerator class: rendered decimal digits. Denominator: one image patch. Against a cycles-per-patch quantity: it **MISSES** every periodic, contrast-bearing or non-glyph frequency component, and carries no notion of cycles; it **INCLUDES** a stimulus-authoring decision about string length, which a frequency measure excludes. It is a design parameter, not a measured frequency. The paper **DEFINES** a per-patch quantity and does not **MEASURE** one.

**(f) The patch-boundary effect, with numerator and denominator.** The measured quantity is **reading accuracy as a function of the target's offset relative to the patch grid**, swept in two separate conditions, vertical cut and horizontal cut (Figures 8 and 9; complete results in Appendix A). Numerator: digit strings scored correct by **Gestalt Pattern Matching** against the ground-truth string - note this is a string-similarity ratio, not plain fraction correct, so the numerator is not a clean count. Denominator: **100 random numbers per experiment**; per-offset-condition counts are not stated separately. **Direction is the opposite of the naive expectation**: performance is *lower* when the object is *undivided*, i.e. being cut across patches *helps*. The only printed scalar effect size is **"around 10 percent"**, for **Qwen-VL-Chat alone**, and prefaced by "still". Everything else is plotted, not tabulated: Figures 8, 9 and Appendix A carry **no numeric values** in what was served. So on this limb the paper **MEASURES and PLOTS** the effect but **prints almost no numbers** - one approximate gap for one model. That is enough to count the limb as occupied in substance, and not enough to call it quantified.

**(g) A measured cutoff against input resolution versus patch count as rival predictors of a downstream task - ABSENT.** This is the candidate's limb (iv) and the paper does not do it. Table 3 **tabulates** patch number, patch size and resolution per model, so the ingredients are on the page, but **no sentence regresses, correlates or otherwise contests the threshold against them**. The nearest statement is the consistency claim - *"the threshold of a sampling rate of 8 is consistently observed across all MLLM models"* - which is a qualitative invariance observation across five models spanning 224 to 448 px and 10x10 to 32x32 patches, with no test statistic, no effect size and no model of the comparison. If anything it reports that the threshold **does not** vary with resolution or patch count, which is a different finding from adjudicating them as rival predictors. **ABSENT, from a full-text read.**

**(h) Contrast - ABSENT as a manipulated variable.** Stimuli are "overlaid on plain white backgrounds"; contrast is held fixed and never varied or measured.

**Tally against the entry's three predicates.** *Prints a sampling-rate threshold* - **TRUE but materially mislabelled**: the number is 8, in rendering-font-size pixels, eyeballed, machine observer, no criterion. *Tabulates patch sizes* - **TRUE**, Table 3. *Measures a patch-boundary effect* - **TRUE**, Section 4.5.2 / Figures 8-9 / Appendix A, with one printed scalar. So the entry's description of the paper is **accurate in all three of its surface predicates** and the adversaries were right that this is a real neighbour. The entry's inference from them is where it fails.

**Tally against the candidate's four limbs.** (i) criterion-defined cutoff frequency - **not published here**. (ii) cycles-per-patch quantity - **not published here**. (iii) patch-boundary effect - **substantially occupied here**, though thinly quantified. (iv) cutoff versus resolution and patch count as rival predictors - **not published here**. One of four limbs is occupied, and it is the limb least dependent on the frequency-and-contrast instrument.

**One defect of my own read to carry forward:** the TMLR 2026 version is COULD NOT READ. The arXiv version is from February 2024 and the published version is two years later under a revised title; a revision could have added a frequency or contrast analysis. I have no evidence that it did, and no evidence that it did not. **Anyone relying on this note to move the entry to Rejected would first have to open OpenReview D8MjYW8m35.** On the nomination discipline: the kind of document that could settle whether the candidate's limbs (i), (ii) and (iv) are published by *these* authors is the camera-ready of this same paper - a full text, not a listing page or a citation record - and OpenReview D8MjYW8m35 **is** that kind. That nomination is justified by kind, not a guess.

## ROUTES THAT FAILED

- `https://arxiv.org/html/2402.07384v2` - WebFetch returned RATE_LIMIT_EXCEEDED twice in succession. Abandoned. The abs page lists only v1, so this route may name a version that does not exist.
- `curl https://arxiv.org/html/2402.07384v2` via Bash - CONNECT tunnel failed, 403 at the agent proxy (`connect_rejected`). Tool-scoped, as documented; WebFetch reached arxiv.org fine. TLS verification was not touched and HTTPS_PROXY was not unset.
- `https://openreview.net/pdf?id=D8MjYW8m35` - WebFetch: failed at its site, `client_error`, nothing retrieved. Fetch budget ended here, so I did not try the forum page.
- Unpaywall - **not attempted at all**, by rule: its API requires a contact email and no person's address goes into a URL.

Searches: 1 of 2 used, on the title plus three front-matter author surnames, to establish the venue. No search was refused by the classifier. Note that the title surfaced at several result rows (arxiv.org, isi.edu twice, paperswithcode, alphaxiv, mlanthology) - **that is one document returning repeatedly, counted as one title match and as zero corroboration**. The only result I treated as evidence is the jmlr.org TMLR BibTeX, which I then opened.

## BEARING ON THE LEDGER ENTRY

**NARROW the entry, do not strike it. Novelty stays at MEDIUM. The entry needs rewriting to name this prior properly, and limb (iii) should be struck or converted.**

The entry's factual description of arXiv:2402.07384 survives: it does print a "sampling-rate threshold", it does tabulate patch sizes, and it does measure a patch-boundary effect. What does not survive is the inference the entry's stakes rest on. The threshold of 8 is a **pixels-per-glyph legibility knee, eyeballed from open-report accuracy with no declared criterion, at a single fixed contrast on white, with no frequency axis anywhere** - exactly the case the task flagged as leaving the candidate alive at Medium. Taking the three disqualifying conditions in turn: a criterion-defined cutoff frequency is **absent**; a cycles-per-patch quantity is **absent** (the per-patch digit capacity is a design parameter, not a measured frequency); and a regression of fine-detail failure against a measured cutoff versus input resolution and patch count is **absent** - Table 3 holds the ingredients and no analysis uses them that way. Contrast is never manipulated.

Concretely, for the rewrite:
1. Cite it as **Zhang, Hu, Khayatkhoei, Ilievski & Sun (2026), "Exploring Perceptual Limitations of Multimodal LLMs on Small Visual Objects", TMLR, OpenReview D8MjYW8m35**, noting the arXiv:2402.07384 preprint carried a different title. Drop the unconfirmed `html/...v2` route.
2. Promote it to the **nearest named prior** on the patch-grid mechanism and say what it occupies: the patch-boundary sweep, with the **counter-intuitive direction** that *uncut* targets read **worse** - "Model's performance is lower when target objects remain undivided by patch boundaries" - and one printed scalar, "around 10 percent" for Qwen-VL-Chat on 100 items.
3. **Strike limb (iii)**, or convert it to a promotion condition: the candidate can only claim this limb by quantifying what the prior plots, e.g. a per-model boundary-phase effect with an interval over more than 100 synthetic strings, outside rendered text on white.
4. Keep limbs (i), (ii) and (iv) as the entry's live novelty, and say in the entry that the prior's threshold is a sampling *density* in glyph pixels, not a contrast-dependent frequency cutoff, so the two thresholds are different quantities despite the shared word.
5. Carry the open condition: **the TMLR camera-ready is unread here.** If it added a contrast or spatial-frequency analysis, limbs (i) and (ii) fall and this becomes a Reject. That check is one fetch of OpenReview D8MjYW8m35 and should be done before the entry is closed either way.
