# VERIFY — FLIGHTED "need to be corrected" string, and what the paper actually completes

Checker: fresh context. Date: 2026-10-22.
Source: Sundar V, Tu B, Guan L, Esvelt K. "FLIGHTED: Inferring Fitness Landscapes from Noisy
High-Throughput Experimental Data." bioRxiv, DOI 10.1101/2024.03.26.586797, article id
2024.03.26.586797, 2024; version v2 exists on bioRxiv. Front matter (title, four authors in that
order, year, DOI, article id) taken from the bioRxiv HighWire citation record, not from any short
form written by someone else. No volume or pages (preprint). Whether a peer-reviewed journal
version exists was NOT established and is not asserted here.

Genre: a primary methods paper (preprint) presenting a new Bayesian noise model and its
application. Not a review, protocol, guideline, editorial or column.

## CLAIM

Four sub-claims were handed to me:

(a) Its Discussion contains the words that FLIP and ProteinGym "need to be corrected to account
for noise inherent in single-step selection".

(b) PUBLISHED IS NOT PERFORMED: does the paper itself perform that correction on ProteinGym or
FLIP — printing a corrected correlation, a per-assay reliability, or a re-ranked leaderboard?

(c) That its own completed result is a label-correction effect on its own 45 models on one library.

(d) Does it print any per-assay test-retest reliability for any ProteinGym assay?

## READ LEVEL

**Full text** of the body, via the bioRxiv PDF (https://www.biorxiv.org/content/10.1101/2024.03.26.586797.full.pdf),
read in three separate passes with different prompts. The body (Introduction, Results, Discussion,
Methods, figure captions) was served.

Two things inside the paper I could NOT read, and they are COULD NOT READ, not NOT FOUND:
- **Front matter and abstract** were not served by either the PDF route or the v2 landing page: both
  began at "Introduction". Author list, title and DOI were recovered from the HighWire citation
  record; the **abstract was never obtained verbatim** — the citation route returned an admitted
  paraphrase and declined verbatim reproduction, so no abstract wording is quoted below.
- **Extended Data Tables 1–2**, which the Results say hold the raw per-model GB1 correlations, were
  referenced in the served text but their contents were not served. So the per-model numbers behind
  the "37 of 45 / 41 of 45" counts are unread.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The string, checked alone and unprimed

The exact phrase "need to be corrected" occurs **once** in the paper, in the **Discussion**. The
whole sentence, reconstructed from 2 consecutive served fragments (junction verified: fragment 1
ends "or ProteinGym", fragment 2 begins " [10] need to be corrected"):

> "Our results on FLIGHTED-Selection suggest that common ML benchmarks like FLIP [6] or ProteinGym
> [10] need to be corrected to account for noise inherent in single-step selection."

(Bracketed reference numerals as served; the PDF text renders them doubled, "[[6]]", "[[10]]".)

**Grammar on both sides of the cut.** Both sides change the claim and both are cut away by the short
form the ledger has been carrying ('FLIP and ProteinGym "need to be corrected to account for noise
inherent in single-step selection"'):

- **Left of the cut** the sentence is doubly weakened. The subject is not the authors asserting but
  "Our results on FLIGHTED-Selection **suggest that**" — a hedge, carrying no citation beyond the
  paper's own results. And the objects are "**common ML benchmarks like** FLIP [6] or ProteinGym
  [10]" — FLIP and ProteinGym are named as *examples of a class*, not as the exhaustive target, and
  the ledger's "FLIP and ProteinGym" silently converts the authors' "or" into "and".
- **Right of the cut** the recommendation is **confined**, not general: the correction called for is
  "to account for **noise inherent in single-step selection**". It is not a general recommendation
  to correct benchmarks for assay noise, measurement error or test-retest unreliability. The
  confinement is in the sentence itself, not inferred.

Preceding sentence (2 consecutive fragments), which is about a different use of FLIGHTED:

> "FLIGHTED results can also be used to combine fitness readouts from different experiments and
> optimize experimental design by maximizing signal-to-noise."

Following sentence (2 consecutive fragments) — and this one is a **prediction**, not a result:

> "Correcting these benchmarks will change downstream evaluations of protein models and should
> improve performance on average."

"will change ... and **should** improve performance on average" is forecast in the future tense
about work not done here. Nothing in it is a measured ProteinGym quantity.

The only other appearance of the stem in the paper is in Methods, descriptive of GB1: "To compute
the corrected GB1 landscape with FLIGHTED-Selection".

### (b) PUBLISHED IS NOT PERFORMED

**ProteinGym: the correction is NOT performed.** ProteinGym is named once in substance — in the
Discussion sentence above — and otherwise only inside a citation range in the Introduction. There is
no ProteinGym result anywhere in the paper: **no corrected correlation, no reliability or
test-retest coefficient, no disattenuated score, no re-ranked leaderboard, no per-assay table.** On
the taxonomy you asked for, the paper **RECOMMENDS** the correction for ProteinGym and **PREDICTS**
its effect ("will change ... should improve"). It does not DEFINE, BOUND, MEASURE or EVALUATE
anything on ProteinGym.

**FLIP: partially, and only through one task.** The paper uses FLIP's **GB1 splits** (two-vs-rest,
three-vs-rest) and benchmarks models on them with and without FLIGHTED-corrected labels. That is
the only benchmark correction actually carried out, and it is GB1-only — not FLIP's other landscapes
(AAV, thermostability, meltome and the rest are not corrected here).

**What it completes instead, with its numbers.** Reconstruction of the counting sentence from
consecutive served fragments; the junction here is **damaged by an overlap** — fragment 1 ended
"41 of the 45 models " and fragment 2 began "of the 45 models on the three-vs-rest split", so
"of the 45 models" was served twice. I report the overlap rather than silently smoothing it; the
non-duplicated reading is:

> "37 of the 45 models on the two-vs-rest split and 41 of the 45 models on the three-vs-rest split
> had statistically significant improvements. We saw an average improvement of 0.15 on the
> two-vs-rest split and 0.05 on the three-vs-rest split."
> — reconstruction from 4 consecutive fragments, with a duplicated "of the 45 models" at one
> junction; treat the exact token order at that junction as unverified.

Printed numbers, with where they sit:
- **37/45** and **41/45** models with statistically significant improvement, in a **Results
  sentence**. The served text **does not name the significance test** and prints **no uncertainty**
  on these counts.
- **average improvement of 0.15** (two-vs-rest) and **0.05** (three-vs-rest) in the same Results
  sentence. Units: these are improvements in **weighted Spearman rho on the test set**. The served
  text prints **no standard deviation or interval on either figure**; one read reported models run
  in triplicate with mean and SD, and the Results defer raw values to Extended Data Tables 1–2,
  which I could not read. So the stated uncertainty on 0.15 and 0.05 is, as served, absent.
- Fig. 4 caption (3 consecutive fragments): "(b) FLIGHTED changes model ranking on the GB1 dataset,
  indicating the importance of denoising when benchmarking ML models. FLIGHTED also modestly
  improves model performance on the GB1 dataset."
- Weighted Spearman rho is used because it "accounts for variance on the test set"; 100 Monte Carlo
  replicates are mentioned in connection with it.

So: a **re-ranking** result is printed, but **on GB1 via the FLIP splits**, not on ProteinGym, and
the re-ranking is of the authors' own model set, not of a published leaderboard.

### (c) The claim about its own completed result

**Confirmed, with two corrections of emphasis.**

- The **45 models are the authors' own.** The introducing sentences, as served: "The models we chose
  to benchmark are outlined in [Fig 4]." and "Our models are inspired by but go beyond the models
  proposed in FLIP". So they are *inspired by* FLIP's models, not FLIP's published model set. A
  ledger wording of "FLIP's 45 models" would be wrong; "its own 45 models" is right.
- The **library is GB1**, described as "a 4-site landscape for the GB1 protein that measures
  stability and binding to IgG via an mRNA display single-step selection assay" (2 consecutive
  fragments). The served text gives the **4-site** composition but **does not state the number of
  variants** in the GB1 library. The 45 models are evaluated on **two splits** of it.
- The effect is a **training-label** correction: "we also observe a general performance improvement
  upon using FLIGHTED data for the training set", alongside "We present correlations with FLIGHTED
  on the test set here". Methods: "To compute the corrected GB1 landscape with FLIGHTED-Selection,
  we took the guide and ran inference on the released GB1 landscape data." Whether test labels are
  also corrected is **ambiguous in the served text** and I do not resolve it.
- **Scope correction to "one library":** true of *this* result, but the paper's completed work is not
  confined to one library. FLIGHTED-Selection is validated on **simulation** ("on a randomly
  generated fitness landscape with 20^4 variants", mean log likelihood -0.97), and a separate model,
  FLIGHTED-DHARMA, is fitted to DHARMA base-editing data. So the correct ledger wording is: the
  *benchmark label-correction and re-ranking* result is on one library (GB1); the paper's completed
  results overall span a simulated landscape, GB1, and DHARMA.

### (d) Per-assay test-retest reliability for a ProteinGym assay

**No — none, for any ProteinGym assay.** The paper prints no per-assay reliability of any kind for
ProteinGym, and no test-retest coefficient anywhere. Its goodness-of-fit style numbers are on
simulations (FLIGHTED-Selection mean log likelihood -0.97) and on DHARMA/FACS data. Note the
distinction the ledger should preserve: the paper's silence about ProteinGym reliability is silence,
not a prohibition, and its remarks about single-step-selection noise are not a flag of missing
test-retest data.

## REGIME

In the authors' own words where quoted:

- **Selection scheme modelled:** single-step selection. The generative model: "a library of variants
  is produced, a selection step occurs to select fitter variants", and the model "select[s] a
  post-selection population based on the provided fitnesses, and randomly sample[s] and sequence[s]
  post-selection". Named exemplars in the paper's framing are phage display / SELEX-type assays.
- **Training regime of the noise model:** simulated experiments "on a randomly generated fitness
  landscape with 20^4 variants" — i.e. the noise model is fitted to simulation, not to replicate
  measurements of a real assay.
- **Unit of analysis (explicit, and unusual):** "Each data point for the FLIGHTED-Selection model
  consists of an experiment or simulation, not the outcome of a single variant within an
  experiment." The unit is the **experiment**, not the variant.
- **Application regime:** the GB1 4-site landscape, "measures stability and binding to IgG via an
  mRNA display single-step selection assay"; inference run on "the released GB1 landscape data".
- **Output / estimand:** a posterior over fitness — "The guide predicts the fitness mean for a given
  experiment" with a separately predicted variance ("The variance is predicted by a linear model
  with 2 inputs"). FLIGHTED "predicts fitness with error from experimental results."
- **Downstream endpoint and comparator:** **weighted Spearman rho on the test set**, 100 Monte Carlo
  replicates; comparator is the same model architecture trained on uncorrected labels; splits are
  FLIP's **two-vs-rest** and **three-vs-rest**.

**Does the handed claim sit inside this regime?** Sub-claims (a), (b) and (d) sit inside it and are
answerable as stated. Sub-claim (c) sits inside it once "one library" is read as "the GB1 library,
for the benchmarking result". The regime boundary that matters for the ledger is the one in the
quoted sentence itself: the recommendation is established for **single-step selection noise**, on
evidence from **a simulated 20^4 landscape plus GB1**, with the **experiment** as unit of analysis.
Outside single-step selection — for ProteinGym's DMS assays generally, for replicate-based
test-retest reliability, for disattenuation of reported correlations — this paper is **silent, not
supportive**.

## DEFECTS FOUND

1. **The short form in circulation cuts the hedge and the attribution.** The ledger's string 'FLIP
   and ProteinGym "need to be corrected to account for noise inherent in single-step selection"' is
   verbatim in its quoted part, but the cut removes "Our results on FLIGHTED-Selection **suggest
   that**" and "**common ML benchmarks like**", and converts "or" to "and". The quoted words are
   accurate; the sentence they come from is weaker and more exemplary than the short form reads.
2. **The recommendation must not be generalised.** It is confined, in its own words, to "noise
   inherent in single-step selection". Citing it as a general call to correct benchmarks for assay
   noise or measurement unreliability is outside the regime.
3. **Prediction cited as performance.** The immediately following sentence ("will change downstream
   evaluations ... should improve performance on average") is a forecast. Nothing on ProteinGym is
   performed, measured or printed. RECOMMENDS and PREDICTS; does not MEASURE.
4. **Model provenance.** The 45 models are the authors' own, "inspired by but go beyond the models
   proposed in FLIP". Any entry crediting them to FLIP is wrong.
5. **"One library" needs its qualifier.** Correct for the benchmarking/re-ranking result (GB1), but
   the paper also completes a simulated-landscape validation (20^4 variants) and a DHARMA model.
6. **Uncertainty not carried, because the source does not print it.** 0.15 and 0.05 appear with no
   interval or SD in the served text, and the significance test behind "37 of the 45" and "41 of the
   45" is not named. The raw per-model values are deferred to Extended Data Tables 1–2, unread here.
   Do not attach an uncertainty to 0.15/0.05 in the ledger.
7. **A damaged junction in my own reconstruction**, reported rather than smoothed: the counting
   sentence was served with "of the 45 models" duplicated across the fragment boundary.
8. **GB1 library size is not printed** in the served text — only "4-site". Any variant count in the
   ledger came from somewhere else and is that author's arithmetic, not this paper's print.
9. **Correction locus** is stated for the **training set**; test-label treatment is ambiguous as
   served. An entry asserting one or the other goes beyond the text.

Nothing in the source contradicts the earlier agent's report that the full PDF opens; it opened for
me at the same route, three times.

## ROUTES THAT FAILED

- `https://www.biorxiv.org/content/10.1101/2024.03.26.586797v2` — returned the article **body only**;
  no title, author list, posting dates, version history, DOI or abstract were served. COULD NOT READ
  the front matter at this route (the page exists and rendered).
- `https://www.biorxiv.org/content/10.1101/2024.03.26.586797.full.pdf` — body served in full, but
  the served text **begins at "Introduction"**: no title block, no authors, no abstract. Extended
  Data Tables 1–2 not served.
- `https://www.biorxiv.org/highwire/citation/4076019/medlars` — served title, four authors, year,
  DOI and article id, but **declined to reproduce the abstract verbatim** and returned an admitted
  paraphrase instead. No abstract wording is quoted in this note as a result.
- No route was refused by a host, and no 403/429 was encountered. PMC / Europe PMC / doi.org were
  not attempted (per routing). Unpaywall not used. No search or fetch was refused.
- Query budget used: 1 search, 4 fetches (caps 6 and 5).

## BEARING ON THE LEDGER ENTRY

- **Sub-claim (a): holds, verbatim, in the Discussion** — with the hedge and the "benchmarks like"
  framing restored. The entry should carry the whole sentence, not the fragment.
- **Sub-claim (b): holds.** The paper does **not** perform the correction on ProteinGym at all, and
  performs it on FLIP only through FLIP's **GB1** splits. No corrected ProteinGym correlation, no
  reliability, no re-ranked leaderboard exists in the paper. This is the PUBLISHED-IS-NOT-PERFORMED
  finding and it is clean.
- **Sub-claim (c): holds, with the wording tightened.** Completed result = training-label correction
  on the authors' own 45 models, GB1 4-site mRNA-display library, two FLIP splits, weighted Spearman
  rho on the test set: 37/45 and 41/45 models significantly improved, average +0.15 and +0.05, plus
  a ranking change shown in Fig. 4. Say "its own 45 models" (not FLIP's), and say the one library is
  GB1 **for this result** while noting the simulation and DHARMA work alongside it.
- **Sub-claim (d): holds.** No per-assay test-retest reliability for any ProteinGym assay, and none
  anywhere in the paper.
- **Net:** the source supports the ledger entry's use of this paper as a *recommendation without an
  executed correction* — the gap the entry points at is real in this paper. What the entry must not
  do is (i) read the recommendation as general rather than single-step-selection-specific, (ii) let
  "should improve performance on average" stand as a result, or (iii) credit the 45 models to FLIP.
  The one thing I could not verify at all is the abstract's wording; if the entry quotes the
  abstract, that quotation is unchecked.
