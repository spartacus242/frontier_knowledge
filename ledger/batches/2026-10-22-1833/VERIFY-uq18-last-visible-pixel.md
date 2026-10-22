# VERIFY - UQ-20261022-18: the full text of "The Last Visible Pixel" IS readable, and it prints criterion-defined per-model thresholds (RT50) for 18 models
Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That Li L. et al. (2026), "The Last Visible Pixel: Probing Fine-Scale Perception in Vision-Language Models", arXiv:2606.07861v1, was read at ABSTRACT ONLY (abstract reconstructed from eleven ordered consecutive exact fragments); that it sweeps rendered target size 4 to 48 px and reports an aggregate "perception saturates around 12px" with a perception/reasoning dissociation, with **no contrast or frequency axis, no criterion and no per-model number**; and that its full text **COULD NOT BE READ**, the HTML route having returned RATE_LIMIT_EXCEEDED twice while the PDF and mirror routes "were never tried because the budget was spent."

Verdict in one line: the read-level limb and the "no criterion / no per-model number" limb are **struck**. The ar5iv mirror - one of the routes the entry itself listed as UNTRIED - served the full text on the first attempt.

## READ LEVEL

**FULL TEXT**, via the ar5iv mirror, for: Li L., Sleem L., Gentile N., Xu Y., Song Y., Wu W., State R. (2026), "The Last Visible Pixel: Probing Fine-Scale Perception in Vision-Language Models", arXiv:2606.07861v1, submitted 5 June 2026. No DOI is assigned (arXiv preprint); identifier is arXiv:2606.07861v1. Comments field: "25 pages."

Routes, in order, with what each returned:

1. `https://arxiv.org/abs/2606.07861` - **200, served**. Front matter, submission date/version/size, comments field, abstract (in summary plus short exact fragments).
2. `https://arxiv.org/pdf/2606.07861v1` - **RATE_LIMIT_EXCEEDED from the target.** Not retried; the mirror made it unnecessary.
3. `https://ar5iv.labs.arxiv.org/html/2606.07861` - **200, served, full body including Table 1, Eq. 3, Sections 1-5 and Appendices A-C.**
4. Same ar5iv URL, second pass - **200, served**, for ordered consecutive exact fragments of the load-bearing sentences.

Read level by section: Abstract, 1 Introduction, 2 Background and Related Work, 3 (3.1 Motivation and Method Design, 3.2 Dataset Construction, 3.3 Evaluation Protocol incl. Eq. 3), 4 Results (4.1 Average Performance, 4.2 Failure Mode Analysis, 4.3 Ablation Study), 5 Conclusion and Limitations, Appendix A, Appendix B, Appendix C.1 - all read. Appendix C.2 (Inference Settings) is cited in the served text but its body did not come through; that one subsection is **PARTIAL/COULD NOT READ** and nothing below rests on it.

Note on discipline: the entry's "COULD NOT BE READ" was a correct description of the reviewer's *read*, not of the document. It is now superseded. Two rate-limit returns from one arXiv host are not a document failure, and the entry said as much.

## WHAT THE SOURCE SAYS (quotations as served)

Quotations below are short exact fragments as the summariser served them (its verbatim cap is ~125 chars); where I join fragments I say so and mark the junction. I never completed a cut string by inference.

**(b) Front matter.** Authors as printed, in order: **Lujun Li, Lama Sleem, Niccolo Gentile, Yangjie Xu, Yewei Song, Wenbo Wu, Radu State** - seven, confirming the entry's "Li L., Sleem L., Gentile N., Xu Y., Song Y., Wu W., State R." in both count and order. First author's given name is Lujun. Submitted **5 June 2026** (v1, posted Fri, 5 Jun 2026 21:49:34 UTC, 6,400 KB). **Date and author list: CONFIRMED, no correction needed.**

**(c) Is "perception saturates around 12px" verbatim?** Yes, in the **abstract**, and nowhere else in that exact form. Whole clause with its scope-setting opener, as three consecutive fragments:

> "Through comprehensive experiments and detailed failure mode analysis on state-of-the-art models," | "we reveal a sharp dissociation: perception saturates around 12px," | "while reasoning remains limited even at larger scales, with persistent numeracy and sequence errors."

What the opening words scope: **"on state-of-the-art models"** (plural, unquantified) - the clause is an **aggregate over the evaluated model set, not one model**, and it **ASSERTS** the quantity (it is a finding claim, not a denial and not a move away from it). The entry's reading of the abstract sentence as an aggregate is correct.

The hedged, in-body formulation - which is the one to grade on - is in **Section 4.1**, and it is weaker than the abstract:

> "in 12px, perception tasks are already close to saturation," | "and the main differences between models are largely determined by whether they still exhibit weaknesses" | "in the most challenging perception subtask."

And the paired reasoning sentence: > "even at 12px, it is far from saturated, and substantial variation exists across different reasoning subtasks."

**Section 5 Conclusion** restates it as "12 pixels", not "12px". Grammar checked on both sides of the cut: before - "First, a clear gap exists between perception and reasoning: basic perceptual performance"; quoted - "...basic perceptual performance saturates around 12 pixels,"; after - "while reasoning remains far from saturation at all scales." The opener **"First, a clear gap exists between perception and reasoning:"** scopes the clause as the first of an enumerated list of conclusions, and it **ASSERTS**.

**Design axis, confirmed:** sizes swept are **4, 8, 12, 16, 24, 32, 48 px - seven levels**, so the entry's "4 to 48 pixels" is right but the sweep is seven discrete levels, not a continuous or finely-spaced ramp. **18 models** evaluated (18 rows in Table 1; N=18 in Appendix A).

**(d) What the 12px is measured against.** For the 12px claim itself: **no criterion is given.** Section 4.1 says only "already close to saturation"; no accuracy threshold, no chance floor, no fitted-curve inflection, no psychometric fit is attached to the number 12. On the face of the served text the 12px figure is an **eyeballed plateau over the seven size levels**, and the entry is right about *that specific number*.

But the entry's wider limb - "no criterion" - is **false for the paper**, because the paper defines one and reports it. **Equation 3, Section 3.3**, in three consecutive fragments:

> "Given a target accuracy threshold X in (0,100), we define RT_X as the smallest target size at which the accuracy reaches X%:" | "with RT_X = s_1 if Acc(s_1) >= X, and RT_X = s_max+1 if X is never reached." | "Smaller values indicate better fine-grained visual sensitivity."

The reported instantiation is **X = 50, i.e. RT50**. The accuracy is **strict (exact-match) accuracy in absolute terms; chance is not mentioned and the threshold is not chance-corrected.** So the paper DOES print a criterion-defined threshold - it just does not route the 12px headline through it.

**(e) Patch units / patch-size normalisation: ABSENT.** All target sizes are in pixels throughout. Patch sizes (16x16, 14x14, 12x12) appear only as **background in Section 2**, not as a normaliser of any reported result. Nothing is expressed in patch units. The entry is **correct** here. (Worth flagging: the coincidence that 12px is also a named patch size is not exploited or even remarked on by the authors in the served text.)

**(f) Contrast or spatial frequency: NO systematic manipulation.** The controlled variables are **size, colour, category, and position**. "Color contrast" is named only as a *source of difficulty* in the text-in-the-wild set, not as a manipulated axis. The BLR task uses blurred backgrounds, but **no blur parameters and no frequency analysis are given**, so it is not a frequency axis. The entry is **correct**: there is no contrast or frequency axis.

**(g) Rival predictors: NO.** The paper does not set a measured perceptual limit against input resolution or token count as competing predictors of downstream failure. Section 2 treats input resolution as background only; Section 4.2 analyses failures against **target size**, not input resolution; Section 4.3 ablates **scoring and decoding**, not resolution. The entry is **correct**.

**(h) Per-model thresholds: YES - PRINTED, and this is the finding.** Table 1, the "FineSightBench leaderboard", has an **RT50 (px) column, one row per model, 18 models**. Caption, as consecutive fragments:

> "FineSightBench leaderboard. Per-task strict accuracy (%), mean AUC over pixel sizes, mean RT50 (px, lower is better)," | "and JSON hallucination rate (%). Bold on green = best per column; underline on yellow = second best."

Column groups as extracted: Model | FineSightBench Perception | FineSightBench Reasoning | Metrics, with sub-headers AUC(up), RT50(down), Hall.(down), Mean(up), H@4px(down).

RT50 in px, lower is better, as served (18 rows): Gemma-4-31B **7.3**; Gemma-4-26B-A4B **11.1**; Gemini-2.5-Flash **13.1**; GPT-4o **14.0**; GLM-4.6V-Flash **14.8**; InternVL3.5-38B **16.4**; InternVL3.5-30B-A3B **17.7**; Qwen3-VL-30B-A3B **17.8**; InternVL3.5-8B **18.9**; Qwen3-VL-8B **19.1**; InternVL3.5-14B **19.2**; Qwen3-VL-4B **21.3**; InternVL3.5-2B **22.0**; InternVL3.5-1B **22.8**; Gemma-4-E2B **22.9**; InternVL3.5-4B **23.8**; Gemma-4-E4B **24.3**; Qwen3-VL-2B **24.8**.

**NUMERATOR CLASS AND DENOMINATOR of RT50, against the near neighbours it is not.** Numerator class, quoting the definition with its exclusions: "the smallest target size at which the accuracy reaches X%", where the accuracy is **strict exact-match** accuracy - so it excludes partial credit, excludes any chance correction, and is evaluated only at the **seven discrete swept sizes** (4/8/12/16/24/32/48), with the floor convention "RT_X = s_max+1 if X is never reached", i.e. a censored value of 49 stands in for failure rather than the series being left empty. Denominator: the caption says **"mean RT50"**, so each printed number is a **mean over tasks for that model**, not a single-task threshold; the served caption does **not** state which task set is averaged (all twelve subtasks, or the perception subtasks only), and I did not reach a sentence that fixes it. That denominator ambiguity is a **residual on my read, not a defect I can assert.**

**Overlap in both directions, 12px vs RT50.** What RT50 **misses** that the claim's "12px" includes: RT50 is a 50%-strict-accuracy crossing, whereas "saturation" is a plateau at the top of the curve - these are different points on the same curve, and a 50% crossing cannot be read as a saturation point. What RT50 **includes** that the claim's "12px" excludes: per-model resolution (18 values spanning 7.3 to 24.8 px, a better-than-3x spread), a censoring convention, and - if the mean is over all tasks - reasoning subtasks that the 12px perception claim explicitly excludes. **So RT50 is not the 12px number measured properly; it is a different quantity that occupies the same limb of the candidate.** That distinction is what matters here, and it does not rescue the entry: the entry's stated rejection condition was that the full text *prints a criterion-defined threshold per model*, not that it prints the 12px figure criterion-defined.

## REGIME

In the source's own words and structure: the unit of analysis is a **model x task x rendered-target-size cell**, scored by **strict exact-match accuracy** with a JSON-formatted response (hence the separately reported "JSON hallucination rate"). The population is **18 vision-language models**, mixing API models (GPT-4o, Gemini-2.5-Flash, GLM-4.6V-Flash) with open-weight families (InternVL3.5 1B-38B, Qwen3-VL 2B-30B-A3B, Gemma-4 E2B-31B). The instrument is **FineSightBench**, "a new benchmark that systematically probes this limit", with twelve subtasks keyed in the Table 1 caption (LTR, SHP, ANM, BLK, CBL, TXT, CHR, CMP, CNT, BLR, TRD, TCT) split into a **perception** group (letters, shapes, objects at pixel scale) and a **reasoning** group (spatial reasoning, counting, ordering). The operating condition is **synthetic rendering of targets at seven discrete pixel sizes, 4 to 48**, with colour, category and position controlled and **contrast and spatial frequency not manipulated**. The threshold category is **RT_X, instantiated at X=50**, absolute and not chance-corrected.

Does the claim sit inside this regime? The claim's *descriptive* limbs do: size sweep 4-48, aggregate 12px saturation, perception/reasoning dissociation, no contrast/frequency axis, no patch normalisation, no rival-predictor comparison - all inside, all confirmed. The claim's *absence* limbs do not: "no criterion and no per-model number" is contradicted inside the regime by Eq. 3 and Table 1, and "full text could not be read" is contradicted by the mirror.

## DEFECTS FOUND

1. **The read-level limb is wrong, and it was wrong for a recoverable reason.** The entry listed ar5iv as UNTRIED. ar5iv served the complete body on the first call. One fetch would have changed the entry's grade. The arXiv PDF route did independently return RATE_LIMIT_EXCEEDED for me too, so the entry's diagnosis of the *arXiv host* was fair - but the mirror is a different host and the entry's own route list knew it.
2. **"No per-model number" is false.** Table 1 prints RT50 in px for all 18 models, 7.3 to 24.8.
3. **"No criterion" is false as stated about the paper.** Eq. 3 defines RT_X for a stated accuracy threshold X and the paper reports RT50. It is true *only* of the 12px headline itself, which is attached to no threshold ("already close to saturation").
4. **Three limbs of the claim survive intact and should be recorded as surviving, not quietly dropped:** no patch-unit normalisation (e); no contrast or spatial-frequency manipulation (f); no rival-predictor comparison against input resolution or token count (g).
5. **A defect in the paper, not the entry, worth carrying forward:** the 12px headline and the criterion-defined metric are disconnected. The abstract and conclusion lead with an uncriterioned plateau ("saturates around 12px"/"12 pixels") while the only threshold the paper actually defines is a 50%-accuracy crossing whose per-model values are mostly **well above 12px** (16 of 18 models have mean RT50 > 12.0; median around 18.4 - **YOUR OWN ARITHMETIC** from the Table 1 column above, carrying no stated uncertainty because the table prints none: no CIs, no error bars, no seeds).
6. **Residual I could not close:** the denominator of "mean RT50" - which of the twelve subtasks are averaged - is not stated in the served caption. Marked residual, not asserted.

## ROUTES THAT FAILED

- `https://arxiv.org/pdf/2606.07861v1` - **RATE_LIMIT_EXCEEDED, source: target.** Consistent with the entry's experience on the arXiv HTML route. Not retried; superseded by the mirror.
- No search was run; none was needed, since the citation resolved directly. **0 of 2 searches used, 4 of 7 fetches used.** No search classifier refusal to record.
- Nothing was attempted at PMC or Europe PMC (hard-blocked here, and irrelevant to an arXiv preprint). Unpaywall was not used at all, per the no-personal-identifier rule.

## BEARING ON THE LEDGER ENTRY

**Strike, and move the entry to Rejected.** The entry set its own condition: "If the full text prints a criterion-defined threshold per model ... the candidate's limbs are occupied and the entry should move to Rejected." It does. Equation 3 defines RT_X against a stated accuracy threshold X, and Table 1 prints mean RT50 in pixels for each of 18 models (7.3 to 24.8 px). The first disjunct of the entry's rejection test is satisfied; the other two are not (nothing in patch units, no rival-predictor comparison), but the test was disjunctive.

This is below "Low" rather than "Low held", so I am not reporting the entry's offered choice of "Low, or Medium held". The honest answer to sub-claim (i) is **neither: Reject.**

What a narrowed successor candidate could still stand on, if the ledger wants to keep the territory: the paper has **no contrast axis, no spatial-frequency axis, no patch-size normalisation, no chance correction, no error bars on Table 1, and no comparison of a perceptual limit against input resolution or token count as rival predictors of downstream failure.** Those are confirmed absences on a FULL TEXT read, not artefacts of a thin read. A successor should also note the live tension inside the paper (defect 5): the headline plateau and the only defined threshold disagree by roughly a factor of 1.5 in the median. But the limb the current entry was actually resting on - "no criterion and no per-model number" - is occupied, and the entry's own grading note makes a budget failure that a single untried mirror would have fixed a finding against the entry rather than a residual.

Sub-claims reached: (a) through (i), all answered. **None marked COULD NOT CHECK.**
