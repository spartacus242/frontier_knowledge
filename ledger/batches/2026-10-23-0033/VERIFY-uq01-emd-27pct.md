# VERIFY - the EMD tracker's 27% is an integrated fit, not a measured false-match rate; and the 99%/95% sit on a 29% reference subset the paper itself says cannot be extrapolated

Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-23 (the template line in my task read "Date 2026-10-22"; I am recording the date I actually ran).

## CLAIM

Entry UQ-20261023-01 characterises Prior 2 (the EMD neuron-tracking paper) as follows:

1. The 27% figure is a threshold CONVERTED through a fitted distribution, with the paper's own words "integrated up to any given z-threshold value", computed over all KSgood units.
2. Its 99% and 95% accuracies sit on a non-generalising reference subset that is 29% of units (a visual-receptive-field subset).
3. The unit is the cross-day unit pair among KSgood units at z = 10 um.
4. The paper's own sentence expects tuning-independence to fail - load-bearing because the entry's triviality-attack propagation identity assumes it.

What turns on it (stated so the reader knows the stakes, not defended here): if 27% were a measured false-match rate against an independent label, a published cross-day false-match rate at an operating point would exist and half the candidate would be answered; if 99%/95% were measured on all units, the entry's regime claim would be wrong.

## READ LEVEL

- Yuan A.(Xiaoran) et al., "Multi-day Neuron Tracking in High Density Electrophysiology Recordings using EMD", eLife reviewed preprint 92495. **FULL TEXT of v2** (DOI https://doi.org/10.7554/eLife.92495.2, Reviewed Preprint, "Revised by authors", February 27, 2024; eLife vol. 12). Route: https://elifesciences.org/reviewed-preprints/92495 (4 WebFetch calls against the one URL, requesting ordered consecutive segments). Body present: Abstract, Introduction, Results (2.1-2.3), Discussion, Methods (4.1-4.4), Supplement (8.2, 8.4), figure captions including Figure 4 and Figure S9, References. Equations and figure panels are served as images and I **could not read Equation 3's formula itself** - I take its structure from the surrounding prose, which states it explicitly.
- **PARTIAL (targeted spot-check) of v1**, the version the entry cites: DOI https://doi.org/10.7554/eLife.92495.1, Reviewed Preprint, December 12, 2023. Route: https://elifesciences.org/reviewed-preprints/92495v1 (1 WebFetch). I checked six specific strings, listed under DEFECTS. I did **not** read v1 in full.
- **NOT READ:** v3 / the Version of Record (the v2 page states a newer version exists at https://doi.org/10.7554/eLife.92495.3, with Version of Record dated July 10, 2024), and the bioRxiv preprint (posted September 3, 2023). Their contents are unknown to me; that silence is COULD NOT READ, not NOT FOUND.
- Front matter, authors as printed (not from any short form): **Augustine(Xiaoran) Yuan, Jennifer Colonell, Anna Lebedeva, Michael Okun, Adam S. Charles, Timothy D. Harris.**
- Every long quotation below is a **reconstruction** assembled only from consecutive segments returned by the fetch summariser (which caps verbatim quotation near 125 characters). I give the fragment count for each and I did not complete any cut string by inference.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Read level and routes
Answered above. FULL TEXT for v2; PARTIAL (six strings) for v1; nothing read of v3/VOR or bioRxiv. No route failed - the unversioned eLife URL served the body on the first call, so I spent no search.

### (b) The "integrated up to any given z-threshold value" sentence, and what the 27% is

The sentence sits in Results Section 2.3 ("A vertical distance threshold is necessary for accurate tracking"). Whole, with its neighbours - reconstruction from 5 consecutive fragments:

> "We fit the KSgood distribution to Equation 3 to extract the individual distribution parameters and the fraction of true hits (f). **The full distribution can then be integrated up to any given z-threshold value to calculate the false positive rate.** (Figure 4a, top panel, see Sec. 8.4 for details)."

Scope-setting check on this quotation: the sentence's opening words are "The full distribution can then be" - "then" scopes the integration as the step that FOLLOWS the fit of the previous sentence, and "can ... to calculate" asserts a derivation procedure. The clause **ASSERTS that the false positive rate is produced by integrating a fitted distribution.** It does not assert, and nowhere implies, a count of verified errors.

**Where the 27% is printed:** exactly one place in the paper - the **Figure 4 caption**, panel (a). It appears in no other sentence; I asked for every occurrence and got one. Caption in full, reconstruction from 17 consecutive fragments:

> "Recovery rate, accuracy and putative pairs: a. The histogram distribution fit for all KS-good units (top) and reference units alone (middle). False positives for reference units are defined as units matched by EMD but not matched when using receptive fields. **The false positive fraction for the set of all KSgood units is obtained by integration. z = 10um threshold has a false positive rate = 27% for KSgood units.** b. Light blue bars represent the number of reference units successfully recovered using only unit location and waveform. The numbers on the bars are the recovery rate of each datatset, and the red portion indicates incorrect matches. Incorrect matches are cases where units with a known match from receptive field data are paired with a different unit by EMD; these errors are false positives. **The green bars show matching accuracy for the set of pairs with z-distance less than the 10um threshold.** The orange portion indicates incorrect matches after thresholding. The false positives are mostly eliminated by adding the threshold. Purple bars are the number of putative units (unit with no reference information) inferred with z-threshold = 10um."

("datatset" and "10um" are as served; the paper prints the micron sign.)

Note the caption's own two-tier construction, which is the whole answer to sub-claim (b): false positives **for reference units** are *defined* by discordance with receptive fields (a measured discordance, against a functional label); the false positive fraction **for all KSgood units** is "obtained by integration."

**How the integration is set up (Methods 8.4, "Modeling the z-distance distribution for all units").** Reconstruction from 8 consecutive fragments:

> "As shown in Figure 4a, the z-distance distribution of reference pairs differs significantly from that of all pairs. To estimate the false positive rate for all pairs, we need to account for this difference. **We cannot simply extrapolate from the measured false positive rate of the reference units.** The difference arises from a bias in the selection of reference units: Because reference units must be detected in two datasets, they must be easily isolated."

And the fit procedure itself, reconstruction from 8 consecutive fragments:

> "To fit experimental data, we first fit the z-distance distribution of the reference units to obtain the width sigma of the folded Gaussian in the first term of Equation 3. With sigma fixed, we then fit the z-distance distribution of all KSGood units to Equation 3 to obtain the width of the exponential and f. Then we can estimate the false positive rate by integrating P(D|H) and P(D|~H) up to the z-distance threshold. The fraction of false positives as a function of z-distance threshold is shown in Figure 4a, in the bottom panel."

Supporting statements on the model's form (Section 2.3 and Algorithm 2), 3 fragments:

> "The KSgood distribution is a weighted combination of the folded Gaussian and an exponential:" / "Fit the z-distance distribution of all pairs to the sum of a folded Gaussian (for correct pairs) and an exponential (for incorrect pairs)."

The exponential's functional form is itself not measured but learned from simulation (8.4, 4 fragments):

> "To estimate the distribution of P(D|~H), we performed a Monte Carlo simulation. In the simulation, the number of units is 150, the average density of subject AL036. ... From these simulations, we learned that the false positive distribution is well fit by an exponential decay."

**So, naming the quantity (PUBLISHED IS NOT PERFORMED):** the printed number is **27%**, printed in the Figure 4 caption, panel (a); units are a **percent (a dimensionless fraction)**; it is **a value read off an integral of a fitted two-component model**, not a measured error rate against an independent label.

- **Numerator class, with its exclusions quoted:** the modelled mass of "The z-distance distribution of false positive matched neurons", i.e. the fitted exponential component standing for EMD-assigned cross-day pairs that are not true hits, integrated from 0 to z = 10 um. Its exclusion is categorical: no pair's status was checked to produce it.
- **Denominator, checked against the near neighbours it is not:** the fitted total KSgood z-distance distribution over the same 0-10 um interval - i.e. all EMD-assigned **KSgood** cross-day pairs surviving the threshold. It is NOT (i) reference pairs, which is the neighbouring denominator the 99%/95% use; NOT (ii) all Kilosort clusters, since "we only considered the subset of units labeled as 'good' by Kilosort"; NOT (iii) all cross-day pairs regardless of z, which the threshold excludes by construction; and NOT (iv) a counted set of verified pairs, because none exists for this population.
- **Overlap, both directions.** What the paper's class MISSES relative to the candidate's quantity (a measured cross-day false-match rate against an independent label at an operating point): it misses verification entirely for the KSgood population - including every "putative unit (unit with no reference information)", which the caption says is what the threshold is used to infer; and it misses non-KSgood clusters. What it INCLUDES that the candidate's quantity excludes: model error. The true-hit component's sigma is **imported from the reference subset** ("we first fit the z-distance distribution of the reference units to obtain the width sigma ... With sigma fixed"), so the 27% is conditioned on precisely the biased subset the paper says cannot be extrapolated; it also carries the Monte Carlo assumptions (150 units, position error sigma = 5 um, exponential false-positive tail) and the fitted f. A measured rate carries sampling error only; this carries functional-form and transferred-parameter error too. **A number one word away from the claim's is a different quantity:** "obtained by integration" is that word.

The paper does supply a sensitivity check and states the direction of the bias (8.4, 6 fragments):

> "Finally, to test model fitting using no information from the reference units, we fit the same z-distance data allowing the width of the folded Gaussian to vary. Panels a and b show the distribution on the same dataset fit with and without fixing the folded Gaussian distribution width. The resulting false positive rate from the no-reference fit at threshold z = 10um is larger than than that from the fit using reference data, so the procedure gives a conservative estimate of the accuracy."

("larger than than" is as served.)

**Hedged formulation preferred over the bare one.** The bare caption number is "false positive rate = 27%". The hedged, in-text formulation of the same operating point is Section 2.3 (2 fragments):

> "Based on the the estimated false positive rate (Figure 4a, bottom panel), we used a threshold of 10um (Figure 3, black dotted line) to obtain **at least 70% accuracy** in the KSgood units."

("the the" is as served.) Note "estimated" and "at least 70%" - the paper's own in-text statement of its KSgood-level performance is a one-sided bound, not a point estimate of 73%.

### (c) The 29% subset: what it is, how defined, which figures sit on it

The sentence that states the subset size, Results 2.3 - reconstruction from 4 consecutive fragments, whole:

> "**Since reference units only account for 29% of KSgood units** (units with few inter-spike-interval violations that are believed to represent a single unit), and the majority of KSgood units did not show a distinguishable visual response, we need to understand how representative the reference units are of all KSgood units."

Scope-setting check: the opening word is "Since", which scopes the 29% as the **premise** for the modelling exercise that follows. The clause **ASSERTS the 29%** and simultaneously **RECORDS A MOVE AWAY** from treating reference-unit performance as the population's.

Restated in Methods 4.4 ("Reference set"), 2 fragments:

> "Overall, these reference units made up 29% of all KSgood units (Figure S15) across all three animals in our dataset."

**How a reference unit is defined** (Methods 4.4, 3 fragments) - and this is where the entry's shorthand needs correcting:

> "The pool of reference units is established with three criteria: 1) The visual response similarity score of the pair, as described above, is greater than 1 and their physical distance, both before and after drift correction, is smaller than 30um."

Plus, 4.4: "If there are multiple potential partners for a unit, the pair with the highest similarity score is selected as the reference unit." And 8.2 states the same construction compactly (2 fragments): "We identify reference pairs as units that are close in space (peak channels separated by < 30um) and high similarity score (>1)." Yield varies strongly with gap (4.4, 2 fragments): "The portion of units with qualified visual response ranges from 5% to 61%, depending on the time gap between datatets (Figure S13)."

So the reference set is **not** a pure visual-receptive-field subset: selection conjoins a **visual-response similarity score > 1** with a **physical proximity criterion < 30 um, before and after drift correction**. The paper also names the resulting selection bias in its own words: "Because reference units must be detected in two datasets, they must be easily isolated."

**Which accuracy figures sit on it.** The 99%/95% pair, Discussion, whole - 2 fragments:

> "We also achieved 99% accuracy up to one week apart and 95% five to seven weeks apart, when applying a threshold of 10 um (Figure 4b, green bars)."

Scope-setting check: the trailing clauses "when applying a threshold of 10 um" and "(Figure 4b, green bars)" scope the number to the thresholded set **and** point at the Figure 4b green bars. The caption defines those bars as "matching accuracy for the set of pairs with z-distance less than the 10um threshold", and defines the error that accuracy counts as "cases where units with a known match from receptive field data are paired with a different unit by EMD". **"A known match from receptive field data" is the denominator restriction**: accuracy is computed over reference pairs, which are 29% of KSgood units. Numerator class: reference pairs under 10 um whose EMD assignment agrees with the receptive-field assignment. What it MISSES: the 71% of KSgood units with no receptive-field label - which includes, by the caption's own definition, every "putative unit". What it INCLUDES that the candidate's quantity excludes: pairs pre-selected for being within 30 um of each other, i.e. pre-selected on a quantity closely related to the feature EMD is being scored on.

### (d) Any cross-day false-match rate against a ground truth independent of the functional response?

**No - on a full read of v2.** The validation label is the functional response throughout. Abstract: "We verified the same cell identify using measured visual receptive fields." (typo as served). Section 2.1 (2 fragments): "We test the accuracy of the matching by comparing with reference unit assignments based on visual receptive fields". Figure 4's false positives are, verbatim, "units matched by EMD but not matched when using receptive fields".

How I checked, and the three candidates I ran down rather than assumed:
1. **Simulation.** The Monte Carlo of 8.4 is used to choose a functional form for P(D|~H) and to model distributions ("we learned that the false positive distribution is well fit by an exponential decay"), not to score matches. It is never presented as validation of matches.
2. **A non-functional physical check.** Section 8.2 looks like one but is not. Its two sentences (3 fragments): "There is a diagonal line with brighter color blocks, indicating that units with more similar visual responses across days tend to be physically close. This confirms our assumption that neurons are physically stable over time." The evidence for physical stability is itself **visual-response similarity**, so this is not independent of the functional response.
3. **Paired/juxtacellular recording, optical imaging, or a held-out non-functional label.** I queried the full text for these and found none.

Per the unenumerated-universal rule: this is a claim about ONE document, and it is **true over the instance I opened** - v2, read in full. I did **not** open v3/the Version of Record or the bioRxiv preprint, so I cannot extend it there. Were a document to settle whether such an independent ground truth exists elsewhere, the KIND required is a methods paper or a dataset paper that pairs extracellular units with a non-functional per-neuron identity label (hybrid/simulated ground truth, paired juxtacellular recording, or simultaneous imaging). I am **not nominating** any specific unopened document as that - I have not opened one, and naming one would be a guess.

### (e) The paper's own sentence on tuning stability / independence

The entry points at a sentence it says "expects tuning-independence to fail". The paper contains no such sentence. What it contains are statements that **tuning STABILITY fails**, offered as the motivation for building a tuning-INDEPENDENT tracker. Whole, in the hedged and cited formulations where the paper gives one:

Introduction (2 fragments) - the scope-setting opener is a conditional:
> "**When neuronal representations change, e.g., during learning or representational drift,** neural activity statistics became less reliable."

Its opening words scope the clause to the condition of changing representations, and the clause **ASSERTS that activity-statistics-based tracking degrades** - it is a statement against tuning-DEPENDENT methods, not against tuning-independence.

Introduction (2 fragments) - the design goal:
> "We seek to develop a method capable of tracking single units regardless of changes in functional responses for the duration of an experiment spanning one to two months."

Abstract (2 fragments):
> "Here we propose a neuron tracking method that can identify the same cells independent of firing statistics, which are used by most existing methods."

Discussion, the **hedged, cited** formulation of tuning decay (2 fragments) - this is the one to quote rather than any bare version:
> "The visual fingerprint similarity of matched neurons decreased to 60% after 40 days (see reference 7 supplement)."

Its scope is an attribution to another work's supplement, about matched neurons' fingerprint similarity over 40 days; it ASSERTS that tuning similarity decays.

Discussion, the hedged attribution of the paper's own yield loss (3 fragments):
> "This reduction in fraction of reference units **might be partially due to** representational drift as well as the fact that the set of active neurons are slightly different in each recording."

Scope: "This reduction" refers to the falling fraction of reference units with gap; "might be partially due to" hedges causation. It ASSERTS the reduction, and only hedges its cause.

And the paper's positive claim in the opposite direction (Discussion):
> "We show the capability of our method to track neurons with no specific tuning preference (Figure S16)."

This clause **ASSERTS tuning-independence**, scoped to units with no specific tuning preference and evidenced by a supplementary figure I did not open.

### (f) One sentence: does this paper print the candidate's quantity?

No - it prints 27% as a false-positive fraction "obtained by integration" of a fitted two-component model in the Figure 4 caption, and prints 99%/95% as accuracies whose errors are defined by discordance with receptive-field assignments over the 29% reference subset, so the paper **estimates** a cross-day false-match rate under a fitted model and **measures** one only against a functional label, never against an independent one.

## REGIME

The paper's regime, in its own words:

- **Population / instrument:** Neuropixels recordings in three mice ("across all three animals in our dataset"), unit density "150, the average density of subject AL036"; the generalisation check is "an unrelated dataset acquired from mouse prefrontal cortex using a Neuropixels 1.0 probe".
- **Unit of analysis:** the cross-day unit pair. "Our overall strategy is to run spike-sorting once per session, and then to generate a unit-by-unit assignment between pairs of datasets." Pairs are formed by EMD on location and waveform; "The complete pool of reference units includes comparisons of all pairs of recordings for each shank in each animal."
- **Population restriction:** "we only considered the subset of units labeled as 'good' by Kilosort, here referred to as KSgood units"; "KSgood units are mainly determined by the amount of inter-spike-interval violations and are believed to represent a single unit." Detection is itself partial: "we find that only ~60% of units are detected across pairs of days".
- **Operating condition / threshold:** z = 10 um vertical distance threshold, after drift correction.
- **Category of the headline numbers:** 27% = model-integrated false-positive fraction over all KSgood pairs; 99%/95% = measured agreement with receptive-field assignments over reference pairs under the threshold, split by 1 week vs 5-7 weeks.
- **Generalisation claim, hedged:** "The similar shape of the distribution and a 29% false positive rate suggest that this method can be generalized." Opening words scope it to the similarity of the PFC distribution's shape; "suggest" hedges; and **this 29% is a false-positive RATE on the PFC dataset, a different quantity from the 29% reference-unit FRACTION.** Two distinct numbers that happen to coincide.

**Does the candidate's claim sit inside this regime?** The unit of analysis and operating point do (cross-day KSgood unit pairs at z = 10 um). The *measurement* does not: the regime supplies either (i) a modelled rate over KSgood pairs with no verified labels, or (ii) a measured rate over a functionally-labelled 29% subset the paper explicitly declines to extrapolate from. A result established under a fitted-model regime is silent about a measured-against-independent-label regime, not supportive of it.

## DEFECTS FOUND

**In the ledger entry:**

1. **VERSION MISMATCH, and it bites twice.** The entry cites v1 and records it READ IN FULL. My v1 spot-check found that **v1 does not contain the phrase "integrated up to any given z-threshold value"** - its nearest text is "integrating P(D|H) and P(D|~H) up to the z distance threshold." The quoted words the entry presents as "the paper's own words" belong to v2 (which I read in full), not to the cited v1.
2. **The 99% figure is also v2 text.** v1 prints "We also achieved **97%** accuracy up to one week apart and 95% five to seven weeks apart." The entry's "99%" is not in the version it cites. (The 95% is unchanged; 27% and the 29% reference fraction are present in both; "we cannot simply extrapolate from the measured false positive rate of the reference units" is present in both, lowercase "we" in v1 mid-sentence after a semicolon.)
3. **TITLE AS CITED IS NOT THE REVIEWED-PREPRINT TITLE.** The entry cites "Multi-day neuron tracking in high-density electrophysiology recordings using earth mover's distance". Both v1 and v2 are titled "**Multi-day Neuron Tracking in High Density Electrophysiology Recordings using EMD**" - the abbreviation, not the spelled-out phrase, and no hyphen in "High Density". The spelled-out title is the Version of Record's, which I did not read. Not a wrong paper, but the front matter does not say what the entry says it says.
4. **"a visual-receptive-field subset" undersells the selection, in the direction that would have helped the entry.** Reference pairs are selected on visual-response similarity > 1 **and** physical distance < 30 um before and after drift correction. The subset is pre-filtered on proximity, i.e. on a quantity related to the feature EMD scores. The entry should say this: it strengthens the circularity point rather than weakening it.
5. **"non-generalising" is doing two jobs and only one is the paper's.** The paper does say the reference units are selection-biased and that their measured rate cannot be extrapolated - that supports the entry. The paper also claims its *model* generalises: "The similar shape of the distribution and a 29% false positive rate suggest that this method can be generalized" (Fig S9c, mouse PFC). If "non-generalising" is read as the paper disclaiming generalisation, that is contradicted by the text.
6. **Sub-claim (4) is backwards as written.** No sentence in the paper "expects tuning-independence to fail." Every relevant sentence expects **tuning stability** to fail and offers tuning-independence as the remedy; the paper affirmatively claims tuning-independence ("track neurons with no specific tuning preference (Figure S16)"). If the entry's propagation identity needs "the paper expects functional responses to drift, so its own validation label degrades with gap", that is supported - by the Introduction conditional, the cited 60%-after-40-days sentence, and the hedged "might be partially due to representational drift". If it needs "the paper expects its own tuning-independence to fail", that is unsupported.
7. **Risk of conflating the two 29%s.** 29% = reference units as a fraction of KSgood units (2.3, 4.4, Fig S15); 29% = the model-fit false-positive rate on the unrelated PFC dataset (8.4, Fig S9c). Different quantities, same digits.

**In the source, flagged but not leaned on:**

8. As served, 8.4's Bayes step prints "P(~R) = 1 - P(R) = 0.73" immediately after "P(R) can be estimated from the ratio of reference units, which is 0.29." **YOUR OWN ARITHMETIC:** 1 - 0.29 = 0.71, not 0.73. I could not read the equation images, so this may be a summariser transcription artifact rather than the paper's error. **LOW CONFIDENCE; do not cite it without reading the PDF.** I carry no uncertainty from it into anything above.
9. 4.4 announces "three criteria" but only criterion 1) came back in the served text. Probably a summariser truncation; unresolved on my read, not a finding against the paper.
10. Minor typography as served: "identify" for "identity" (Abstract), "datatset"/"datatets", "the the", "larger than than".

## ROUTES THAT FAILED

None. https://elifesciences.org/reviewed-preprints/92495 served the full v2 body on the first call and tolerated three further segment-extraction passes; https://elifesciences.org/reviewed-preprints/92495v1 served v1. I spent **0 of 2 web searches** and 5 of 5 fetches. No fetch was refused, so I had no occasion to read /root/.ccr/README.md. The 15-minute WebFetch cache served repeat calls on the same URL without a re-fetch penalty to content.

**Not reached, and therefore COULD NOT CHECK rather than a negative finding:** v3 / the Version of Record (10.7554/eLife.92495.3, July 10, 2024) and the bioRxiv preprint. In particular I cannot say whether the VOR keeps 99% or 97%, whether it keeps the "integrated up to any given z-threshold value" wording, or whether it adds any validation against an independent label. Anyone revising this entry should open the VOR, since that is the version a reader will cite.

## BEARING ON THE LEDGER ENTRY

**HOLD sub-claim (1), with a citation narrowing.** The 27% is a converted threshold, and the paper's own structure makes this unambiguous: the Figure 4 caption separates "False positives for reference units are defined as units matched by EMD but not matched when using receptive fields" from "The false positive fraction for the set of all KSgood units is obtained by integration", and 8.4 says in terms "We cannot simply extrapolate from the measured false positive rate of the reference units." The entry is stronger than it currently reads - it should quote the "cannot simply extrapolate" sentence and the "obtained by integration" clause, which are present in **both** v1 and v2, instead of leaning on a v2-only phrase while citing v1. Fix the version to v2 (or re-check against the VOR) or swap in v1's "integrating P(D|H) and P(D|~H) up to the z distance threshold."

**HOLD sub-claim (2) on the denominator; NARROW the wording twice.** The 99%/95% do sit on reference pairs, and reference units are 29% of KSgood units, stated twice. But (i) the entry must print 97% if it keeps citing v1, and (ii) "a visual-receptive-field subset" should become "a subset selected jointly on visual-response similarity > 1 and physical distance < 30 um before and after drift correction" - which is the more damaging and more accurate description. Drop or qualify "non-generalising": say the paper calls the subset selection-biased and declines to extrapolate from it, while separately claiming the model generalises.

**HOLD sub-claim (3) as stated.** Cross-day unit pair, KSgood population, z = 10 um threshold - all three confirmed in the paper's own words.

**REVERSE sub-claim (4) as worded; restate it.** The paper nowhere expects tuning-independence to fail; it asserts tuning-independence and expects tuning *stability* to fail. If the triviality-attack propagation identity depends on "the paper itself expects functional-response similarity to decay across the gap, so its own validation label thins", rewrite it that way and cite the Introduction conditional plus the cited 60%-after-40-days sentence - both supported. If the identity genuinely needs the paper to concede that *tuning-independent* tracking fails, **the leg does not survive** and should be struck.

**NO CHANGE to the novelty grade from the two escape hatches the task flagged, and the first half of the candidate is NOT answered.** The 27% is not a measured false-match rate against an independent label, so no published cross-day false-match rate at an operating point exists in this paper. The 99%/95% are not computed on all units. Both counterfactuals that would have cost the entry its grade fail.

**Convert one thing to a promotion condition.** The entry's regime claim rests on a version I could not open. Promotion should be conditional on someone opening the Version of Record (10.7554/eLife.92495.3) and confirming three strings: the headline accuracy (97% vs 99%), the integration wording, and the absence of any validation against a non-functional ground truth. If the VOR adds such a validation, sub-claim (d) and the novelty grade both move; if it does not, the entry is sound once the citation and sub-claim (4) are fixed.
