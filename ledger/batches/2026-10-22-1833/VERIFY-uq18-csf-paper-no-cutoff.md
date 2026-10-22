# VERIFY - UQ-20261022-18 Prior 1: the CSF paper prints no cutoff, no per-model peak number, no patch quantity
Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That Hernandez-Camara et al. (2025), arXiv:2508.10367v2, defines and prints NO cutoff
frequency, no per-model peak frequency (only the human 4-6 cpd in prose), and no
patch-normalised quantity, and never mentions patch size, resize kernel, tiling policy,
aliasing or Nyquist; that its endpoint is the proportion of "yes" responses and never a
correct/incorrect score; that its prediction test is Imagenette under frequency filtering
and adversarial noise on two InternVL3 models in Figure 6, not fine-detail tasks, with no
comparison against input resolution or patch count; and that it carries three internal
inconsistencies (25 vs 10 samples per cell, Weibull CDF read at 50% with no stated
transform, an unnamed "proprietary model included for illustrative comparison").

Verdict in one line: the claim HOLDS on its load-bearing parts - no cutoff is printed, no
per-model peak NUMBER is printed, patch/Nyquist/alias/resize/tiling/interpolat are all
absent, the endpoint is the yes-proportion, Figure 6 is as described, and two of the three
inconsistencies are real. Three narrowings are needed, one of them to a word the entry
leans on ("never"), and one claimed inconsistency is mislabelled.

## READ LEVEL

FULL TEXT of arXiv:2508.10367v2 via the route the entry used,
https://arxiv.org/html/2508.10367v2, read in four passes by WebFetch (front matter and
structure; keyword sweep; Methods 2.1-2.4; Section 5 / Figure 6 / Table 1). All sections
reached, including appendices A and B. Two passes independently returned the same
sentences for every contested point, the second pass having been given an explicit licence
to answer ABSENT rather than construct a plausible sentence; I treat the agreeing returns
as reliable and say below where a quotation is a reconstruction.

Front matter, taken from the document itself and not from any short form:
Pablo Hernandez-Camara (corresponding, Image Processing Lab, Universitat de Valencia);
Alexandra Gomez-Villa (Computer Vision Center; Universitat Autonoma de Barcelona);
Jose Manuel Jaen-Lorites (Center for Biomaterials and Tissue Engineering, Universitat
Politecnica de Valencia); Jorge Vila-Tomas; Valero Laparra; Jesus Malo (all Image
Processing Lab, Universitat de Valencia). Title as printed: "Contrast Sensitivity in
Multimodal Large Language Models: A Psychophysics-Inspired Evaluation". Front-matter date
15 October 2025. The HTML rendering carries no arXiv id or version in the body and no DOI
appears in it; "no DOI located" in the entry is consistent with what I could see.

COULD NOT READ, kept strictly distinct from NOT FOUND: the companion CCN 2025 abstract
"Contrast Sensitivity Function of Multimodal Vision-Language Models" was never opened. I
had fetches left but no URL for it, and locating one would have cost the single permitted
search for a document none of sub-claims (b)-(h) are about. Its silence is evidence in
neither direction. Nothing below rests on it.

## WHAT THE SOURCE SAYS (quotations as served)

(a) Front matter and read level: above. No failed routes on the HTML; see ROUTES THAT
FAILED for curl.

(b) Keyword sweep over the entire text, including captions and appendices. Each string
reported as the sweep returned it:

  cutoff        ABSENT
  cut-off       ABSENT
  patch         ABSENT
  Nyquist       ABSENT
  alias         ABSENT
  resize        ABSENT
  tiling        ABSENT
  interpolat    ABSENT
  peak frequency  PRESENT, Section 5.2: "adversarial noise at CSF peak frequencies causes
                  substantially". Opening words scope a RESULT about what the adversarial
                  perturbation does; the clause ASSERTS that peaks exist and matter, and
                  does NOT print a number for any model's peak.
  resolution    PRESENT, Section 2.1: "Stimuli were generated at a resolution of
                $256 \times 256$ pixels, corresponding to a visual field". The opener
                scopes the STIMULUS, not the model input pipeline.
  pixel         PRESENT, Section 2.1: "We used a sampling resolution of 64 pixels per
                degree, typical of modern displays."
  cycles per degree / cpd  PRESENT, Section 2.1: "logarithmically spaced between 0 and 32
                cycles per degree (cpd)".
  4-6 cycles    Present only with an en dash, Section 3.1: "peak sensitivity around 4-6
                cycles per degree (cpd)" - and this is the HUMAN Standard Spatial Observer
                reference, which is exactly how the entry characterises it.

(c) Per-model cutoff or peak spatial frequency: ABSENT as a printed number. PUBLISHED IS
NOT PERFORMED applies in the entry's favour here. The paper PLOTS model CSFs (Figure 3,
Figure 6 left column) and DESCRIBES per-model peaks qualitatively (Figure 6 caption: "the
largest accuracy reductions occur at frequencies where the model shows peak sensitivity"),
but it never NAMES a frequency for any model. The only cpd figures printed anywhere are
the stimulus range (0 to 32 cpd), the sampling resolution (64 pixels per degree), and the
human 4-6 cpd. There is no table or sentence from which a reader could lift
"model X peaks at Y cpd" or "model X cuts off at Y cpd".

(d) Endpoint. Section 2.2/2.3: "we computed the proportion of affirmative responses (i.e.,
yes answers)." The opener scopes the DEPENDENT VARIABLE of the psychophysical procedure
and ASSERTS the yes-proportion. Equation 1 fits a Weibull cumulative distribution to that
proportion; Equation 2 inverts the threshold, CSF(f) = 1/C_threshold(f). So the
psychophysical endpoint is the yes-proportion, as claimed. But see DEFECTS: a
correct/incorrect score DOES appear in the paper, in Section 5.

(e) Figure 6's prediction test. Dataset: Imagenette, named in Section 5 as "on a standard
image dataset, Imagenette [18]". Perturbations: TWO, not one - Section 5.1 removes
information at specific frequencies by bandpass suppression in the Fourier domain, and
Section 5.2 adds bandpass-filtered (frequency-specific adversarial) noise; in both the
perturbation strength is calibrated to constant RMSE against the original images. Models:
TWO, InternVL3-2B and InternVL3-8B. Figure 6 caption, reconstruction assembled from nine
ordered consecutive returned segments, verified at each junction and completed by
inference nowhere: "Figure 6: Relationship between model contrast sensitivity (left) and
classification accuracy degradation under different frequency perturbations (center,
right) for Intern VL3-2B (top) and Intern VL3-8B (bottom): The contrast sensitivity
function (CSF) reflects each model's estimated sensitivity across spatial frequencies. The
middle column shows the relative change in classification accuracy when noise of different
frequencies is added to the input images, and the right column shows the relative change
in accuracy when information from specific frequencies is removed through filtering.
Accuracy values are reported relative to performance on unaltered images. Both models
exhibit a clear inverse relationship between contrast sensitivity and robustness: the
largest accuracy reductions occur at frequencies where the model shows peak sensitivity."
No fine-detail task appears anywhere in the paper. The entry's description of (e) is
accurate.

(f) Comparison against input resolution or patch count as a predictor: NO. The paper prints
a stimulus resolution (256x256, 64 px/deg) but never uses resolution, patch count or token
count as a predictor of anything, and never contrasts its CSF against such a predictor.
Confirmed.

(g) The three claimed inconsistencies, one at a time, in DEFECTS FOUND below.

(h) Table 1, reproduced as printed. Headers as printed: "Model", "$\rho_{Pearson}
\uparrow$", "RMSE $\downarrow$", with the rows grouped under "3B Scale" and "7B Scale".

  3B Scale
    Qwen 2.5VL (3B)    0.86   131.6
    InternVL 2.5 (4B)  0.69   125.2
    InternVL 3 (2B)    0.59   125.3
  7B Scale
    Llava 1.5 (7B)     0.54   109.8
    Qwen 2.5VL (7B)    0.31   130.6
    Magma (8B)         0.76   131.2
    InternVL 2.5 (8B)  0.84   131.6
    InternVL 3 (8B)    0.37   126.4

Both numbers the entry carries VERIFY exactly: Qwen2.5VL-3B rho = 0.86 (printed as
"Qwen 2.5VL (3B)") and LLaVA-1.5-7B RMSE = 109.8 (printed as "Llava 1.5 (7B)"). Units are
NOT stated, for the RMSE column or for any column - the entry is right about that too.

Numerator class and denominator for Table 1, since these are the numbers most likely to be
mistaken for the candidate's quantity. NUMERATOR: rho is the Pearson correlation between
one model's average CSF and the human Standard Spatial Observer CSF across the sampled
spatial frequencies - it grades SHAPE agreement only, and excludes absolute scale by
construction. RMSE grades absolute sensitivity difference in sensitivity units
(reciprocal contrast threshold), which is why its magnitudes are in the hundreds and why
the missing units matter. DENOMINATOR: each value is over the sampled frequency grid,
averaged over the prompt variants of Section 2.2 - not over images, not over trials, and
not per frequency. OVERLAP IN BOTH DIRECTIONS against a cutoff frequency: what Table 1
MISSES is every frequency-resolved quantity - no peak, no cutoff, no half-height point,
nothing from which a cutoff could be recovered, because both columns collapse the whole
curve to one scalar. What Table 1 INCLUDES that a cutoff claim excludes is the low- and
mid-frequency limb and the absolute sensitivity scale, which a cutoff says nothing about. A
high rho and a cutoff are not one word apart; they are different quantities over different
supports.

## REGIME

In the paper's own terms. Population: eight named open-weight MLLMs at two nominal scales
(3B: Qwen2.5VL-3B, InternVL2.5-4B, InternVL3-2B; 7B: Qwen2.5VL-7B, LLaVA-1.5-7B, Magma-8B,
InternVL2.5-8B, InternVL3-8B), plus contrastive CLIP and SigLIP in Appendix B. Unit of
analysis: a contrast-frequency-prompt cell, aggregated to one psychometric function per
frequency per prompt and then to one CSF per model. Operating condition: synthetic
bandpass-filtered noise stimuli at 256x256 px, 64 px/deg sampling, frequencies
logarithmically spaced from 0 to 32 cpd, behavioural black-box access only, no internal
access. Instrument: a structured yes/no prompt; the dependent variable is the proportion of
affirmative responses. Threshold: the contrast giving 50% detection probability, read off a
fitted Weibull CDF; sensitivity is its reciprocal. Category: human alignment graded by
Pearson rho (shape) and RMSE (scale) against the Standard Spatial Observer.

Does the claim sit inside this regime? Yes, and that is the point. The claim is a claim
about ABSENCE within exactly this regime - and the regime explains the absence rather than
being embarrassed by it. A behavioural CSF built from a 50%-detection criterion on
synthetic noise at a fixed 64 px/deg stimulus sampling has no notion of the model's own
input pipeline, so patch size, resize kernel and tiling simply never arise as variables.
The candidate's cutoff, by contrast, is a property the candidate wants read off the model's
sampling architecture. These are different instruments pointed at different objects, and
the paper's silence on patches is structural, not an oversight it could have corrected
within its own design.

## DEFECTS FOUND

Two defects in the entry's claim, one mislabelling, and one of the entry's own
inconsistencies that is stronger than it says.

DEFECT 1 - "never a correct/incorrect score" is too strong, and the word doing the damage
is "never". The PSYCHOPHYSICAL ENDPOINT is the yes-proportion, as the entry says. But
Section 5 and the whole of Figure 6 run on CLASSIFICATION ACCURACY on Imagenette:
"Accuracy values are reported relative to performance on unaltered images." So the paper
does use a correct/incorrect score - as the downstream application metric that the CSF is
tested as a predictor OF, not as the quantity the CSF is built from. The entry should say
"its psychophysical endpoint is the proportion of yes responses; correctness appears only
in Section 5 as the predicted variable". As written, the sentence is falsifiable by the
figure the entry itself cites two clauses later, which is an avoidable wound.

DEFECT 2 - "no per-model peak frequency" needs the word NUMBER in it. The phrase "peak
frequency" IS present (Section 5.2), per-model peaks ARE discussed qualitatively, and the
Figure 6 caption turns per-model peak sensitivity into the paper's central result ("the
largest accuracy reductions occur at frequencies where the model shows peak sensitivity").
What is absent is any printed numeric value of any model's peak. The entry's parenthetical
"only the human 4-6 cycles per degree in prose" is right about the numbers and misleading
about the concept: the paper does not merely fail to print per-model peaks, it builds an
argument on them without printing them. Narrow to: "prints no numeric per-model peak or
cutoff, though it argues from per-model peaks qualitatively and plots them in Figures 3 and
6." This narrowing does not weaken the novelty argument - arguably it sharpens it, since it
shows the paper reaching for a per-model frequency landmark and stopping short of naming
one.

DEFECT 3 - "no patch-normalised quantity" survives, but the entry should not let a reader
believe the paper prints no resolution quantity at all. Section 2.1 prints "a sampling
resolution of 64 pixels per degree, typical of modern displays" and a stimulus "resolution
of $256 \times 256$ pixels". These are STIMULUS-side, display-referred quantities, not
normalised to anything about the model, so the entry's actual words are correct. Worth
recording as MY OWN ARITHMETIC and not the paper's: 64 px/deg puts the sampling Nyquist
limit at 32 cpd, which is exactly the top of the paper's stated frequency range (0 to 32
cpd). The paper therefore bounds its own stimuli at Nyquist without ever using the word -
consistent with the entry's "never mentions ... Nyquist", and a point in the entry's favour
if anyone argues the paper implicitly handles sampling. It handles it in the stimulus
generator, silently, and never for the model.

Now the three claimed inconsistencies.

(g1) 25 versus 10 samples per cell - CONFIRMED, and stronger than the entry states.
Section 2.1: "we created 25 statistically independent samples for each frequency-contrast
pair." Section 2.2: "Each contrast-frequency-prompt combination was tested with 10
independently generated noise images." Section 2.3 then also says the fit uses "10 repeated
stimulus presentations per condition." So 10 appears TWICE and 25 once, and the paper never
reconciles them. The entry's "25 in 2.1 against 10 in 2.2" is right; it undercounts by
omitting the 2.3 corroboration of 10, which makes 25 the likelier stray. Real defect in
the paper, and it does bear on matching the paper's numbers to anything, since the trial
denominator behind every psychometric fit is ambiguous by a factor of 2.5.

(g2) Weibull CDF read at a 50% threshold with no stated transform - FACTS CONFIRMED,
LABEL WRONG. Equation 1 is a Weibull cumulative distribution, P(c) = 1 - exp(-(c/alpha)^beta),
introduced by "We modelled these functions using a Weibull cumulative distribution", and
Section 2.3 states "The contrast detection threshold was then defined as the contrast level
corresponding to a 50% detection probability." No transform is stated, and no closed form
for the 50% point is given. But reading a Weibull CDF at 50% REQUIRES no transform: the
crossing is at c = alpha*(ln 2)^(1/beta) (MY OWN ARITHMETIC, not the paper's), which is
well defined for all beta > 0. So this is not an internal inconsistency. The real
methodological objection, which the entry should substitute, is that Equation 1 pins
P(0) = 0, i.e. a zero false-alarm rate, and a 50% criterion on a yes/no detection task with
no guess-rate or floor term is an unstated assumption about the model's response bias - and
the paper's own Section 3.2 finding that CSF estimates are sensitive to prompt wording is
precisely evidence that such a bias exists and varies. Recommend: reclassify from
"inconsistency" to "unstated assumption, and one its own prompt-sensitivity result puts
under strain." Keeping it on the inconsistency list is a soft target; moving it makes it a
harder one.

(g3) The unnamed proprietary model - CONFIRMED, and it is a dangling reference, not merely
an omission. Section 2.4, after the eight named models, adds "as well as a proprietary
model included for illustrative comparison." The clause's opener scopes an ADDITION to the
model set and ASSERTS its inclusion in the study. No name, no scale, no vendor appears
anywhere. Table 1 then lists EIGHT rows, all named, with no proprietary row, and the paper
never says whether the proprietary model is in Figure 3's averages. So Methods announces a
ninth model that the results never account for. I re-asked this one neutrally, with the
summariser explicitly licensed to answer ABSENT rather than construct a plausible sentence,
because my first prompt had quoted the phrase and could have seeded it; both the word
"proprietary" and the phrase "illustrative comparison" came back PRESENT in Section 2.4 on
the independent pass. I record that as verified, with the caveat that the quotation reached
me through a summariser and not from raw source bytes.

## ROUTES THAT FAILED

- curl to https://arxiv.org/html/2508.10367v2 : "CONNECT tunnel failed, response 403" at
  the agent proxy. Tool-scoped, as the batch notes warn - WebFetch reached the same URL
  immediately and read the whole document. I did not probe the proxy further and did not
  touch TLS settings or HTTPS_PROXY.
- The arXiv PDF was not attempted; the HTML route the entry records worked first time.
- The companion CCN 2025 abstract: no route attempted, no URL in hand. COULD NOT READ, not
  NOT FOUND. On the discipline about nominating unopened sources: the kind of document that
  could settle whether a per-model cutoff number exists is a results table or a
  frequency-resolved figure caption in a full paper, and a one-page conference abstract is
  NOT that kind of document - so I am not nominating it as the thing that would overturn
  (c). If anything it is likelier to print less than the full paper does.

## BEARING ON THE LEDGER ENTRY

HOLD Prior 1, with three narrowings and one reclassification. The published-is-not-performed
distinction the entry rests on is intact, and it is intact on the strongest possible reading:
the paper does not print a cutoff frequency, does not print a numeric peak frequency for any
model, prints no patch-normalised quantity, and never uses the words patch, Nyquist, alias,
resize, tiling or interpolat anywhere in its full text including appendices. Novelty does not
collapse. Table 1 is a two-scalar summary (shape rho, scale RMSE, units unstated) that
collapses the frequency axis entirely, so no cutoff is recoverable from it even in principle.

Required edits to the entry's wording, in order of how much they matter:

1. Strike "never a correct/incorrect score" and replace with "its psychophysical endpoint is
   the proportion of yes responses; a correctness score appears only in Section 5, as the
   downstream accuracy the CSF is tested as a predictor of." The current wording is refuted
   by Figure 6, which the same sentence cites.
2. Narrow "no per-model peak frequency" to "no printed numeric per-model peak or cutoff",
   and add that the paper nonetheless argues from per-model peak sensitivity qualitatively
   (Figure 6 caption, Section 5.2). This sharpens rather than weakens the contrast with the
   candidate.
3. Reclassify the Weibull item: it is an unstated assumption (zero false-alarm floor, 50%
   criterion on yes/no, no bias term) and not an internal inconsistency, since a Weibull CDF
   needs no transform to be read at 50%. Keep it in the entry, but under the right heading,
   and strengthen it by pointing at the paper's own Section 3.2 prompt-sensitivity result.
   The entry is down to two genuine inconsistencies, not three.
4. Strengthen the 25-versus-10 item by noting that 10 also appears in Section 2.3, so the
   stray value is probably the 25, and the trial denominator behind every psychometric fit
   is ambiguous by a factor of 2.5.
5. Strengthen the proprietary-model item: Table 1 prints eight named rows and no proprietary
   row, so Methods announces a model the results never account for - a dangling reference,
   not just an unnamed baseline.

On the second thing the entry says turns on this: the inconsistencies ARE real (two of
three), and they do bear on matching the paper's numbers to the candidate's class - but the
decisive obstacle is not the inconsistencies. It is the regime. The paper's instrument is
behavioural, its stimuli are display-referred at a fixed 64 px/deg, and its summary
statistics are frequency-collapsed scalars. Even a fully self-consistent version of this
paper would print no quantity that could be compared with a patch-normalised cutoff. That
is the entry's real argument and it should lead with it rather than with the bookkeeping.
