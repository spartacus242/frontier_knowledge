# VERIFY - IRIS (arXiv:2608.05122) measures orientation selectivity in ViT ACTIVATIONS, not behaviour, and prints no cardinal-vs-oblique asymmetry and no cutoff frequency
Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261022-18 claims that no published source already measures the candidate's limbs - a BEHAVIOURAL spatial-frequency cutoff of a shipped VLM's image pathway - and in particular that the ORIENTATION-dependence limb (cardinal-versus-oblique asymmetry as a signature of the patch lattice) is unoccupied. Entry is Provisional at the floor of Medium. Gate 2's pre-declared trigger: a prior **defining a criterion-based threshold** moves the grade to Low. This is the third source against that trigger, nominated by the entry's second adversary as the most likely unopened carrier of the orientation limb.

Sources as the entry carries them:
- "IRIS: A Visual Cortex-Inspired Framework for Analyzing Orientation Selectivity in Vision Transformers", arXiv:2608.05122.
- Secondary: arXiv:2104.11222 "On Aliased Resizing and Surprising Subtleties in GAN Evaluation".

## READ LEVEL

**IRIS, arXiv:2608.05122 - FULL TEXT, summariser-mediated (three routes, all served).**
- `https://arxiv.org/pdf/2608.05122` - SERVED. Front matter, abstract, methods, model list.
- `https://arxiv.org/html/2608.05122v1` - SERVED (twice: once for front matter, once for targeted sentences). This route returned v1; the current version is v2.
- `https://arxiv.org/abs/2608.05122` - SERVED. Dates, identifier, subject class.
No route failed. The two independent routes (PDF and HTML) agree on every point below, which is corroboration of my *read*, not of the paper's claims - it is one document.
Caveat that bears on quotation: everything reached me through the summariser, which caps verbatim quotation at roughly 125 characters. Every quotation below is a single served fragment unless explicitly labelled a reconstruction.

**arXiv:2104.11222 - PARTIAL (front matter, Sec. 1, Sec. 3.1, Sec. 4.1 / Table 1, figure captions, appendix references), one route.**
- `https://arxiv.org/pdf/2104.11222` - SERVED. The stamp read is v3, 21 Jan 2022.
I did not read its full appendix. Its silence on any point I did not reach is COULD NOT CHECK, not absence.

(a) **Front matter of IRIS, as printed.** Title: *IRIS: A Visual Cortex-Inspired Framework for Analyzing Orientation Selectivity in Vision Transformers*. Authors in printed order: **Vaishnavi B Mohan** (University of Washington, USA; starred, corresponding, vbmohan@uw.edu), **Vijayakrishna Naganoor** (Microsoft, USA), **Yashas Annadani** (TU Munich, Germany), **Shashank Hegde** (Nvidia, USA). Identifier **arXiv:2608.05122v2**, cs.CV. Submitted **2026-08-05**; v2 **2026-08-06**. **No DOI. No journal-ref. No venue. No comments field.** Taken from the front matter / listing page, not from any short form.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) UNIT OF ANALYSIS - internal activations, not model output. This is the answer that decides the entry.

Sec. 3.2 defines three readout bases, each an internal quantity:

> "We treat each (patch token, channel) coordinate of the residual stream as a unit ("

(served fragment; the parenthetical continues "$D = d_{\text{model}}$ channels, one per patch)")

> "We also treat each post-nonlinearity MLP neuron as a unit."

> "Each dictionary feature is treated as a unit, averaged over all patch tokens except the class token;"

and, on the same sentence's far side of the semicolon:

> "this is our primary readout, since the learned features are the closest thing to a true monosemantic unit."

The settling sentence is the aggregation rule:

> "For all readout bases, responses are averaged over patch tokens to obtain a single response per stimulus."

**Scope-setting opener check.** The opening words "For all readout bases," scope the clause to *every* unit definition in the paper - they do not carve out an exception for a behavioural readout; they close the set. The clause **ASSERTS** that the measured quantity is an activation averaged over patch tokens. It does not deny it and does not record a move away from it. Grammar on both sides of the cut is intact: the sentence begins at "For" and ends at the printed period.

Responses are taken from frozen ViTs at **nine relative depths**. Task performance enters only in Sec. 5, and there as validation of depth predictions, not as the measurand.

**Verdict on (b): the paper does not reach the candidate's measurand.** The candidate is a behavioural threshold on a shipped VLM's *output*; IRIS measures tuning of internal units. These are neighbouring quantities, and the word "orientation" is common to both - exactly the ledger's recurring error.

### (c) Gratings YES; measured cutoff NO.

Sine gratings are used, and spatial frequency is a parametric axis. Sec. 3.1, served as ordered consecutive segments (RECONSTRUCTION from three consecutive served fragments, junctions verified at "phase from" / "and spatial frequency" and at "(cycles per image)" / "$f \in$"):

> "The battery samples orientation uniformly over $[0,\pi)$ at 36 evenly spaced values, phase from..." + "and spatial frequency at five logarithmically spaced values (cycles per image)" + "$f \in [1,0.75\frac{P}{2}]$ , where P is the model patch size and the upper bound is kept below the patch-wise Nyquist frequency to avoid aliasing."

Stimuli are sinusoidal gratings under a Gaussian envelope (Eq. 1), contrast fixed at 1.

**No cutoff or criterion threshold frequency is printed anywhere.** The words "cutoff" and "acuity" do not appear in the paper. "Contrast sensitivity" appears once, in Related Work, as a citation to someone else:

> "such as contrast sensitivity (Akbarinia et al., 2023)"

(This is the hedged, cited formulation - the paper attributes contrast sensitivity to prior work and does not measure one.)

**PUBLISHED IS NOT PERFORMED.** What IRIS does on the frequency axis is **BOUND** (and, prior to that, **DEFINE** the stimulus battery). The thresholds it does print are not frequencies: significance level **alpha = 0.05** for ORS, and V1-like orientation tuning bandwidths of **15 deg - 40 deg** (Figure 2) - a bandwidth in *degrees of orientation*, not a spatial frequency.

**Numerator/denominator audit of the one number that looks like the claim's: 0.75 * P/2 cycles per image.**
- NUMERATOR CLASS, with its exclusion quoted: the authors' *upper sampling bound for stimulus generation*, defined so that "the upper bound is kept below the patch-wise Nyquist frequency to avoid aliasing." The exclusion is explicit and is the whole point: everything at or above patch-wise Nyquist is excluded by construction.
- DENOMINATOR: per **image** ("cycles per image"), parameterised by patch size P. Checked against the near neighbours it is **not**: not cycles per patch, not cycles per degree of visual angle, and not a per-trial behavioural criterion.
- OVERLAP, both directions. What the source's class MISSES: the entire band at and above patch-wise Nyquist - which is precisely the band where a patch-lattice-induced behavioural cutoff would have to live. IRIS designs that band out of the experiment. What it INCLUDES that the claim excludes: an author-chosen generator bound with no criterion, no psychometric fall-off, and no model output in the loop, applied to frozen-backbone activations.
This number is one word away from the claim's and is a different quantity.

### (d) Cardinal-versus-oblique asymmetry: NOT PRINTED.

The paper does not mention cardinal orientations, the oblique effect, or horizontal/vertical bias. Orientation is sampled uniformly at 36 values over [0, pi) - the sampling would *permit* the analysis, and it is not done. The nearest thing in the paper is App. A.5, where equivariance probes are run

> "under horizontal flip, 90° rotation, translation, and their mean"

and these are used as *predictors*, not as an anisotropy analysis.

Nor is the lattice interaction analysed. Patch size enters at only two places: the grating frequency cap quoted above, and a contrastive control in which

> "patch size, the main residual confound, is bounded by including both patch-14 and patch-16 models."

Note the opener "patch size, the main residual confound," - the clause **RECORDS A MOVE AWAY** from patch size as an object of study. It treats the lattice as a nuisance to be bounded, not as a mechanism to be measured.

**Models, by printed name:** OpenCLIP, DeiT III (printed "DeiT3" in Table 1 and Fig. 6), DINOv2, DINOv3, MAE, AIMv2 (also AIMv2-L14 / AIMv2-L/14), MetaCLIP, SigLIP 2 (printed "SigLIP2" in tables). Sizes printed include ViT-S/16, ViT-L/16, ViT-H/14, ViT-L. "DINO" and "DINO family" appear without a further model name.

**All of these are bare vision backbones.** On the vision-language question the read is explicit: models such as SigLIP2 and OpenCLIP are used only as image encoders, and the paper reports no text output, no VQA, and no captioning benchmark. **No shipped VLM is measured, and nothing behavioural is measured on any of them.**

### (e) Regime, in the paper's own words.

Population: frozen ViT image encoders spanning training objectives, probed at nine relative depths. Unit of analysis: activations in one of three readout bases, "averaged over patch tokens to obtain a single response per stimulus." Instrument: a synthetic Gabor/grating battery (36 orientations, 5 log-spaced frequencies in cycles per image, phases, contrast 1), scored by RSS, OSI, ORS and HWHM. Operating condition on frequency: strictly sub-Nyquist with respect to the patch lattice, "to avoid aliasing." Thresholds: alpha = 0.05 (ORS); V1-like bandwidth band 15-40 deg. Downstream section: six L-tier backbones (DINOv3, DINOv2, SigLIP2, MAE, DeiT3, AIMv2) "as frozen encoders on 9 popular, divergently specialized tasks" with a minimal linear or 1x1-conv read-out (Table 3: Tiny-ImageNet-200, ADE20K, NYU Depth V2, panoptic, keypoints, detection, instance segmentation, GLDv2 retrieval, surface normals; MOT16 excluded), plus a LoRA sweep on Taskonomy-tiny. The paper's own stated purpose is "to track biologically-grounded features during ViT training."

**Does a behavioural measurement on a shipped VLM sit inside this regime? No - it sits outside on three independent axes:**
1. Unit of analysis: internal activation vs model output.
2. Population: bare frozen backbone vs shipped vision-language model with a text pathway.
3. Stimulus band: deliberately below patch-wise Nyquist vs the band a lattice-induced cutoff would occupy.
A result proved inside this regime is silent outside it.

### (f) arXiv:2104.11222 - two lines.

Parmar, Zhang & Zhu, *On Aliased Resizing and Surprising Subtleties in GAN Evaluation* (CMU; Adobe Research), arXiv:2104.11222v3, 21 Jan 2022, no DOI printed. **It does not print an aliasing magnitude for a resize kernel.** It prints *score deltas* caused by aliased resizing: Table 1 (Sec. 4.1), real-image deviations against PIL-bicubic - PIL-bilinear FID 0.64 / PSNR 45.7 dB; TensorFlow-bilinear FID 4.34 / PSNR 37.66 dB; PyTorch-bilinear FID 4.36 / PSNR 37.66 dB; Naive nearest FID 7.43 / PSNR 35.16 dB (KID reported x10^3); Table 1 right side, StyleGAN2 FID 2.98 (PIL-bicubic) to 10.67 (Naive nearest); Fig. 4 plots round-trip PSNR at 8x and 64x over 300 FFHQ images without printing the values. Round-trip PSNR is a reconstruction-fidelity proxy, **not** an aliasing magnitude - no energy-above-Nyquist figure and no per-kernel aliasing score appears. Kernels compared by printed name: PIL-bicubic, PIL-bilinear, PIL-lanczos, TensorFlow-bilinear, PyTorch-bilinear, Naive nearest, plus OpenCV/MXNet, TF-FID, PyTorch-FID, Clean-FID and an "area" filter. It measures no spatial-frequency cutoff of any model's behaviour; its instruments are Inception-V3 features and the PIL/PyTorch/TensorFlow resize implementations, on FFHQ, AFHQ, MetFaces, LSUN and StyleGAN2 outputs.

## REGIME

See (e) above for IRIS and the last sentence of (f) for 2104.11222. Neither regime contains a behavioural threshold measured on a shipped VLM's output. IRIS's regime is activations of frozen backbones under sub-Nyquist gratings; 2104.11222's regime is FID/KID/PSNR of generative-model evaluation pipelines under different resize kernels.

## DEFECTS FOUND

1. **The nomination was the right KIND of document and came back empty.** Before nominating, the kind of document that could settle the orientation limb is: one that applies a parametric orientation x spatial-frequency battery to a transformer vision pathway and reports an orientation anisotropy on the frequency axis. IRIS *is* that kind of document on the stimulus side (36 orientations, 5 log-spaced frequencies, Gabor battery, eight backbone families) - so the adversary's nomination was justified by kind, not a guess. It fails on the measurand side: activations, not output; and it prints no cardinal/oblique comparison at all. This is now an OPENED AND EMPTY result, not an unopened gap.
2. **"Orientation selectivity" in the title is a different measurand from the candidate's orientation limb.** IRIS's orientation quantities are OSI, ORS and HWHM over internal units; the candidate's is an asymmetry in a behavioural frequency threshold. Grading the entry against this title would be the ledger's recurring error.
3. **Citation front matter in the entry is thin and one year is off.** The entry carries both sources without authors. IRIS: add Mohan, Naganoor, Annadani, Hegde; 2026; arXiv:2608.05122v2 (2026-08-05, v2 2026-08-06); cs.CV; **no DOI, no venue** - so it must be carried as a preprint, not a published prior. 2104.11222: add Parmar, Zhang & Zhu; the version served here is **v3, 21 Jan 2022**, so the entry's implicit 2021 is the v1 year only.
4. **One live narrowing against limb (iii), and it is a mechanism-statement narrowing, not a measurement one.** IRIS prints, in its methods, that patch-wise Nyquist is a real operating boundary for grating stimuli on ViTs - "the upper bound is kept below the patch-wise Nyquist frequency to avoid aliasing." The entry should not claim that the *existence* of a patch-lattice aliasing boundary is unremarked in the literature. It remains true that nobody in these two sources measures its magnitude.
5. **Do not count the three IRIS routes as three sources.** PDF, HTML v1 and the abs listing are one document surfaced three ways.

## BEARING ON THE LEDGER ENTRY

(g) **Neither source fires Gate 2's pre-declared Low trigger. HOLD the Provisional grade at the floor of Medium.**

The trigger is a prior **defining a criterion-based threshold**. IRIS defines no criterion-based frequency threshold. Its only frequency number, 0.75 * P/2 cycles per image, is a stimulus-generator cap set explicitly to stay *below* the aliasing regime, with the denominator "per image" and no criterion attached - a BOUND, not a threshold. Its criterion-bearing numbers (alpha = 0.05; 15-40 deg bandwidth) are on other axes. 2104.11222 defines no frequency threshold at all. So the trigger stays unfired at two-of-three sources found; this third one does not move it.

**Two narrowings to record on the entry:**
- **Limb (ii), orientation dependence: STRENGTHEN, by converting an unopened nomination into a checked negative.** IRIS was the adversary's best candidate carrier and is the right kind of document; it prints no cardinal-versus-oblique asymmetry on any axis, on any of OpenCLIP, DeiT III, DINOv2, DINOv3, MAE, AIMv2, MetaCLIP or SigLIP 2. The limb's non-occupancy is now positively checked at the frozen-backbone-activation level. It remains UNCHECKED at the shipped-VLM behavioural level, which no source here touches.
- **Limb (iii), aliasing: NARROW the novelty claim to the magnitude, and convert the rest into a promotion condition.** The entry should carry that the patch-wise Nyquist boundary is already named in print (IRIS Sec. 3.1, as a confound to design around) while no aliasing magnitude per resize kernel exists in 2104.11222 either - that paper prints only score deltas (FID 0.64 to 7.43 against PIL-bicubic, Table 1). **Promotion condition:** limb (iii) is promotable only on a printed aliasing magnitude referred to a stated resize kernel and denominator, which neither source supplies.

No sub-claim was left unreached. Budget remaining at close: 1 WebFetch, 2 WebSearch.
