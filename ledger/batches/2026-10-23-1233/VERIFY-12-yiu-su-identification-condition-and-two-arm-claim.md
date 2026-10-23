# VERIFY - Yiu & Su arXiv:2305.16018 opened at full text: the visiting-at-random anchor and the sensitivity parameter are there, the "variation not determined by covariates" premise is not, and the selected-healthy arm is the paper's own only arm
Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

Four verbatim strings from the entry were handed to me:

1. Strongest remaining objection: "SINGLE UNOPENED SOURCE MOST LIKELY TO SETTLE IT: the full text of Yiu & Su, arXiv:2305.16018, for its stated identification condition for informative observation times (visiting-at-random anchor and the sensitivity parameter) - nominated by kind and read by nobody past a 16-fragment abstract reconstruction."
2. Fecundity (c): "are overdue arrivals a selected-HEALTHY arm ... CONTESTED AND UNSOURCED ON BOTH SIDES ... both label the claim their own reasoning and neither ran the search that would settle it."
3. Attack 3 response: "the observation RESETS the state (as-left adjustment, a renewal structure with no clinical analogue)".
4. Novelty vs Prior 3: "a dedicated term sweep found calibration, instrument, equipment, machine, industrial and engineering absent from it, so its silence is silence under a regime that excludes the question."

Verdict in one line: **(1) HOLDS and over-delivers** - the nomination was correct by kind and the document settles the leg; **(2) PARTLY FALLS** - adversary 1's side is now sourced from the paper's own selection function and the two sides turn out not to conflict; **(3) HOLDS against this source but is an UNENUMERATED universal**; **(4) HOLDS and strengthens at full text**. Two premises carried inside leg (1) are **FALSE against the document**: see DEFECTS.

## READ LEVEL

- **Yiu, S. & Su, L., "Accommodating informative visit times for analysing irregular longitudinal data: a sensitivity analysis approach with balancing weights estimators", arXiv:2305.16018v1, submitted 25 May 2023 - FULL TEXT**, via three WebFetch passes on `https://arxiv.org/pdf/2305.16018v1` with dedicated prompts: (pass A) identification/assumptions section; (pass B) selection function, visit mechanism, application; (pass C) dedicated nine-term sweep plus figure/table captions and the simulation denominator. Served content covered Sections 1.1, 1.2, 2.1, 2.2, 3.1, 3.2, 3.3, 4.1, 4.2, 4.3, 5, Figures 1-2 captions, Table 3 caption and column structure, and the reference list. Quotations are summariser-served and capped at ~125 characters; where I needed a longer sentence I assembled it only from **ordered consecutive** fragments and have **labelled every such string a reconstruction with its fragment count**.
- **arXiv abs page `https://arxiv.org/abs/2305.16018` - FULL (front matter page)**. One fetch. The route the prior record called dead for curl is fine for WebFetch; it opened on the first call.
- **University of Cambridge Apollo repository record `https://www.repository.cam.ac.uk/items/3d814ef7-dc97-434d-ae3a-1017b0ee94de` - FULL (bibliographic record only, not the file)**. One fetch. This is where the venue the prior record said it could not get actually is.
- **Journal of the Royal Statistical Society Series C: Applied Statistics version, DOI 10.1093/jrsssc/qlaf002 - COULD NOT READ. My budget ran out; the route was never tried.** `doi.org/10.1093/jrsssc/qlaf002` and the OUP article page are untried, not failed. My full-text findings below are therefore findings about **arXiv v1 of 25 May 2023**, not about the published version.
- **arXiv v2 - COULD NOT READ, budget.** The WebSearch result list returned a URL `https://arxiv.org/abs/2305.16018v2` while the abs page I opened reported "Only v1 is listed, dated 2023-05-25". I did not open v2 and cannot resolve which is right. Flagged, not settled.
- I opened **no other source in the entry**. Every statement below about NCSL/NCSLI RP-1, Castrup, ILAC-G24/OIML D 10, the GE Vernova dictionary, Beamex, or the NRC letters is absent from this note because I did not read them; their read levels stand as the brief carries them.

## WHAT THE SOURCE SAYS (quotations as served)

### Sub-claim 1 - does the paper state an identification condition, and what is it verbatim? YES.

**First, a correction to the question's own shape: the paper has no numbered assumptions at all** - no "A1", no "Assumption 1". The pass-A read reports: "The paper has no numbered assumptions (no A1/A2 or 'Assumption 1'). The identification conditions are unnumbered text in Sections 2.1 and 2.2, apart from equation (2)." So the entry's singular "**its** stated identification condition" is **a conjunction of three unnumbered conditions**, printed in **Section 2.1 at and after equation (2)**.

Printed location: **Section 2.1, equation (2)**, which is served as two parts:

> S3: `E{dN*(t) | H(t), Y(t), Y_under(t)} = E{dN*(t) | H(t), Y(t)}`
> S4: `= E{dN*(t) | O(t), Y(t)},   (2)`

*(RECONSTRUCTION from 2 ordered consecutive fragments.)* The underlined `Y` in S3 is the future-outcome path; I render it `Y_under(t)` because the summariser served it as `\underline{Y}(t)`.

The prose gloss, **Section 2.1**:

> "The first equality in (2) is the non-future dependence assumption, which means that conditional on the process history H(t), and the (possibly unobserved) current value of the outcome process Y(t), the uncensored visit process is independent of future outcomes beyond time t."

*(RECONSTRUCTION from 3 ordered consecutive fragments S5-S7; junction verified at "conditional"/"on the process history" and at "beyond time t".)*

> "The second equality requires that the uncensored visit process be independent of past unobserved values of the outcome and covariates given observed history O(t) and the current outcome Y(t)."

*(RECONSTRUCTION from 2 ordered consecutive fragments S8-S9; junction verified at "past unobserved values"/"of the outcome".)*

Third condition, **Section 2.1**:

> "We further make the positivity assumption for the visit intensity that `lambda{t, O(t), Y(t)} > 0` when `xi(t) = 1`."

*(RECONSTRUCTION from 2 ordered consecutive fragments S10-S11.)*

Also served, **Section 2.1**: "We assume that **Z**(t) is known at all times (Bůžková and Lumley, 2009)." and "we make the non-informative censoring assumption for the marginal mean of the outcome".

**Both named parts the entry relies on are present and the entry has them right.**

*The visiting-at-random anchor at phi = 0* - four printed statements, and I quote the one that states the anchor most explicitly rather than the bare abstract form:

> **Section 1.1:** "When the sensitivity parameter is set at zero, visiting at random is assumed."
> **Section 4.3:** "assuming the visiting at random assumption was satisfied (i.e., `phi = 0`)"
> **Section 2.2:** when `q{O_i(t), Y_i(t); phi} = 0`, equation (7) reduces to equation (4) "under the visiting at random assumption"
> **Abstract:** "Our sensitivity analysis is anchored at the visiting at random assumption"

*The sensitivity parameter itself* - **Section 2.2, equation (6)**:

> "a known selection function with a known sensitivity parameter vector `phi`"

with the worked instantiation, **Section 2.2**: `q = phi * log{Y(t)+1}`, described as "a single sensitivity parameter" capturing residual dependence on the current log-transformed outcome. `gamma` is the Cox regression coefficient vector (`gamma_s0`, `gamma_b0`), **not** the sensitivity parameter.

**Scope check on the anchor quotation.** "When the sensitivity parameter is set at zero, visiting at random is assumed." The opening words scope a *stipulation about the analyst's choice*, and the clause **ASSERTS** the identity between `phi = 0` and the visiting-at-random assumption. It does not assert that visiting at random holds. The surrounding sentences cut the other way and must travel with it: **Section 1.1** "the visiting at random assumption is **unverifiable from the observed data**" and **Section 2.1** "the visiting at random assumption **which does not allow the visit process to depend on the current outcome**".

### Sub-claim 2 - does the condition require variation in observation timing NOT determined by the conditioning covariates? NO. No such assumption is printed.

The only related condition in the document is positivity, quoted above. Its verbatim form with its opener:

> **Section 2.1:** "We further make the positivity assumption for the visit intensity that `lambda{t, O(t), Y(t)} > 0` when `xi(t) = 1`."

**Logical form, as asked.** Positivity is a **NECESSARY** condition the authors **adopt** (it is an assumption imposed for the estimator's validity, not a claim derived or tested), it is **BARE - no hedge, no modal** ("We further make"), and it is **not a disjunction**. Equation (2) is a **CONJUNCTION of two conditional-independence equalities** - not a disjunction, and its two limbs are separately glossed as "non-future dependence" and independence of past unobserved values. Both limbs are likewise **bare and necessary**. "We assume that **Z**(t) is known at all times (Bůžková and Lumley, 2009)" is the hedged-and-cited formulation of a separate condition and carries a citation; I quote it in that form per the discipline.

The pass-A read states the negative directly: "**Variation not explained by conditioning covariates:** The paper does not state this as a separate condition. Positivity is the only related requirement, and it concerns the visit intensity given O(t) and Y(t). The paper does not discuss overlap of the visit process beyond that." I ran a second, dedicated look for it in the same pass - prompt item (4) asked specifically "whether any assumption requires variation in visit times not explained by the conditioning covariates" - and it returned nothing. **Two sweeps, both negative.**

**Numerator/denominator discipline on the near-neighbour number.** Positivity and "residual variation in timing" are **different quantities one word apart**, and the entry's leg needs the second. Positivity's object is the **intensity `lambda` evaluated at `(t, O(t), Y(t))` while the patient is uncensored (`xi(t) = 1`)**; its requirement is **strict positivity**, nothing about dispersion. The leg's object would be the **conditional distribution of visit times given the conditioning covariates**, and its requirement would be **non-degeneracy**. Overlap in both directions: positivity **MISSES** any requirement that timing vary within a covariate stratum - it is satisfied by an intensity that is a smooth deterministic function of `O(t)` with no residual variation whatever; and positivity **INCLUDES** a requirement on the **unobserved current outcome `Y(t)`** as a conditioning argument, which the leg's claim does not mention at all. They are not the same condition and neither implies the other in the direction the leg needs.

### Sub-claim 3 - is there a test of limb (i)'s form (within-stratum contrast of the outcome across observation-timing categories after conditioning)? NO. Informativeness is handled ONLY through the model-based sensitivity parameter.

Pass A, prompt item (5), asked for exactly this and returned: "No. The paper offers no test or diagnostic for informative visit times. Informativeness is handled only through the sensitivity parameter `phi`." The printed ground is an **identifiability** statement, not a power or design statement:

> **Section 2.2:** "In our setting with informative visit times, however, `lambda{t, O(t), Y(t)}` cannot be identified and estimated from the observed data because Y(t) is only observed when a visit is made."
> **Section 2.2:** "We instead propose a sensitivity analysis approach by assuming that"
> **Section 1.1:** "the visiting at random assumption is unverifiable from the observed data"
> **Section 5:** "the specification of the selection function and the choice of the values of the sensitivity parameter need to be anchored at the observed information" - which the paper says "warrants further research".

**Scope check on the Section 2.2 sentence.** Opening words: "In our setting with informative visit times, however," - these scope the clause to **the informative-visit regime specifically**, and mark a **contrast with the preceding (visiting-at-random) case where the intensity *is* estimable**. The clause **DENIES** identifiability, in that regime only. Read without the opener it would falsely assert that the visit intensity is never estimable.

### Sub-claim 4 - does the visit-intensity model permit a HEALTHIER latent state lowering observation intensity, and does it also permit the opposite? BOTH, and the first is the paper's own and only instantiated arm.

Served specification and mechanism quotations:

> **Section 2.2:** selection function `q{O(t), Y(t); phi}`, worked form `q = phi * log{Y(t)+1}`
> **Section 3.1:** "those patients with larger outcome values are more likely to make a visit regardless of their observed histories"
> **Section 4.2:** "patients currently having a larger number of active joints were more likely to make a clinic visit"
> **Section 1.1:** "patients with poorer health outcomes have more frequent visits and shorter gap times between their visits"
> **Section 1.1:** "patients' visits to clinics could be partly driven by ongoing disease activities"
> **Section 1.2:** "patients could visit the clinic due to a PsA flare at non-scheduled times"
> **Section 4.3, fitted observed-history model:** "patients with more active joints at the previous visit were more likely to visit"
> **Section 4.3:** "those with more damaged joints at the previous visit were less likely to visit"
> **Section 4.3:** "Patients with longer median previous inter-visit gap times were less likely to visit."
> **Section 4.3:** "visits occurred more frequently as time elapsed since baseline"

**Direction, healthier-lowers-intensity: YES - MY OWN DERIVATION FROM THE SERVED SELECTION FUNCTION, LABELLED.** The outcome is the active joint count, so *healthier* means *smaller Y(t)*. The selection function `q = phi * log{Y(t)+1}` is **monotone increasing in Y(t) for phi > 0**. "Patients currently having a larger number of active joints were more likely to make a clinic visit" is therefore, by contraposition over a monotone single index, the statement that **patients currently healthier were less likely to make a clinic visit**. That is the selected-healthy arm, and it is the paper's **primary and only instantiated** arm: `phi = 0.15-0.6` in the simulations, `phi = 0, 0.5, 1` in the PsA analysis, all non-negative.

**Two honest limits on that derivation.** (a) The paper **never writes "healthier"** and never frames the mechanism as healthy-patient selection; it frames it as worse-outcome-drives-visits. My pass-B prompt asked in the paper's own vocabulary whether a "BETTER/healthier latent outcome state LOWERS visit intensity" and the read answered "No ... The paper does not describe a case where a better current outcome state lowers visit intensity." That answer is about the paper's **framing and wording**; the monotone identity above is about its **mathematics**. Both are reported here; the second is mine. (b) The read correctly noted the one *printed* lowering effect is a different variable: "Damaged joints are a progression measure from prior visits, not the current outcome Y(t) that the selection function targets."

**Direction, suspicion-driven: YES, and printed.** "patients' visits to clinics could be partly driven by ongoing disease activities" and "patients could visit the clinic due to a PsA flare at non-scheduled times" are exactly the suspicion-driven arm, and the **fitted** observed-history intensity in Section 4.3 prints coefficients of **both signs simultaneously** - active joints at the previous visit positive, damaged joints at the previous visit negative, long previous gap times negative. So the model class accommodates arms in both directions at once.

**On the sign of phi itself: UNENUMERATED.** The pass-B read states: "The paper does not explicitly say `phi` can take either sign. It only considers non-negative values." So nothing printed forbids `phi < 0`, and nothing printed permits it. I will not write a universal from that silence in either direction.

### Sub-claim 5 - does an observation RESET or alter the outcome state? NO. Adversary 3's interface fact survives against this source.

> **Pass-B read, verbatim:** "The paper describes no mechanism in which treatment is given at visits or the outcome state is reset or altered by being observed. Biologics use appears only as a covariate and as a baseline definition."
> **Section 4.1:** "a PsA patient who started his/her first course of biologics on a specific calendar day"

And the dedicated sweep in pass C: **"renewal" ZERO occurrences** in the whole document, references included.

So on this document, observation is pure measurement: `Y(t)` exists at all `t` and is merely *revealed* at visits ("Y(t) is only observed when a visit is made", Section 2.2). Nothing is administered or reset at the visit. **This source does not falsify the "renewal structure" interface fact - it is consistent with it.** But see DEFECTS for what that is and is not worth.

### Sub-claim 6 - the dedicated term sweep, re-run at FULL TEXT. The record's finding is CORRECT, and it strengthens.

Dedicated nine-term sweep over the whole document including the reference list:

| Term | Occurrences at full text | Location |
|---|---|---|
| calibration | **ZERO** | - |
| calibrate / calibrating | **ZERO** | - |
| instrument | **ZERO** | - |
| equipment | **ZERO** | - |
| machine | **ZERO** | - |
| industrial | **ZERO** | - |
| engineering | **ZERO** | - |
| renewal | **ZERO** | (my addition) |
| recalibration | **ZERO** | (my addition) |
| **calibrated** | **2, both in reference titles only** | Yiu and Su (2022), "Joint calibrated estimation of inverse probability of treatment and censoring weights for marginal structural models"; Tan (2020), "Regularized calibrated estimation of propensity scores with model misspecification and high-dimensional data" |

The read adds: "'calibrated' appears only in reference titles. It does not appear in the body text, where the paper uses 'balancing weights' and 'covariate balancing' instead."

**The record's exact claim - that the only related string is "calibrated" inside two reference titles (Yiu and Su 2022; Tan 2020) - is CORRECT at full-text level**, including the two attributions. Which sweep I ran: a **dedicated** per-term sweep naming each of the nine strings and demanding occurrence counts and locations, i.e. the second kind of sweep the discipline asks for, not a broad one.

**Group count, per the rule.** Of the two calibration-adjacent references, one - **Yiu and Su (2022)** - is **the same two authors as the paper**. So the paper's only calibration-vocabulary contact is half self-citation. That is one group, not two supports.

### Sub-claim 7 - the regime, item by item, and the no-numeric-bias claim.

- **Population:** CONFIRMED. **Section 1.2:** "The University of Toronto PsA clinic is one of the largest cohorts of PsA patients in the world." **Section 4.1:** "This sub-cohort contained 414 patients". So "clinic-based psoriatic-arthritis cohort, n = 414 sub-cohort" is right, and the clinic is **Toronto**, which the entry does not name.
- **Unit = patient with visit-level records:** CONFIRMED IN SUBSTANCE, not verbatim. The paper does not print the phrase "unit of analysis"; this is my characterisation of the setup (marginal regression over patients, counting process `N*(t)` per patient, `Y(t)` revealed at visits). **MY OWN CHARACTERISATION, LABELLED.**
- **Endpoint:** CONFIRMED VERBATIM. **Section 4.2:** "we specified a negative binomial model with the log link for the active joint count".
- **Estimand "marginal regression coefficients":** CONFIRMED IN SUBSTANCE, **with a wording discrepancy to record**. Section 2.2 refers to "the marginal regression model in (1)" and its correct specification. But **Table 3's own caption calls the quantities "the conditional associations"**: "Estimates (EST) and jackknife standard errors (SE) of the conditional associations between biologics use". The entry's "marginal regression coefficients" is not the word the paper's results table uses. Both are defensible of a covariate-conditional, visit-process-marginal coefficient, but the entry should not quote-or-imply "marginal" as the paper's label for the reported quantity.
- **Comparator, simulation:** CONFIRMED VERBATIM, and the entry's exact phrase is **located**. **Section 3.2:** "For comparison, we also perform the analysis that uses the complete data at all possible visit times and the naïve analysis..." Note the sentence carries **two** comparators conjoined; the entry quotes one member.
- **Comparator, application:** CONFIRMED. **Section 4.2:** "(1) the GEE estimators without weighting (the naïve estimator)".
- **The record's no-numeric-bias claim - CONFIRMED IN ITS MAIN PART, ONE CLAUSE REFUTED.**
  - CONFIRMED: no numeric bias magnitude is printed anywhere. **Figure 1 caption** begins "Empirical bias and root mean squared error (RMSE) of the IIWEs with the MLE weights and the balancing weights estimators"; **Figure 2** begins identically. Both plot empirical bias and RMSE for `beta_1` and `beta_2`. The read states: "No numeric bias value is printed in the text or tables. The text describes bias and RMSE only qualitatively." The only numbers that look adjacent are **weights**, not bias - "MLE weights with minimum 0.24, median 0.63, maximum 4.56". So on bias the paper **PLOTS and DESCRIBES** the quantity; it does not **PRINT** it. Per the discipline: I cannot name the number, therefore the source **displays graphically** rather than tabulating it.
  - CONFIRMED: **Table 3** "reports estimates with jackknife standard errors, not bias" - columns `beta_1` through `beta_6`, each split EST/SE; rows the naïve estimator, IIWE `phi = 0` (MLE and balancing weights), IIWE `phi = 0.5`, IIWE `phi = 1`.
  - **REFUTED: "with no denominator stated" is wrong.** The denominator **is** printed. **Section 3.1:** "We simulate 1000 data sets with different sample sizes (n = 200, 500, 1000) for each scenario". And the figure captions print their own cells: **Figure 1** `n = 200`, `gamma_z = 1.25` ("the highly dependent setting"); **Figure 2** `n = 200`, `gamma_z = 0.5` ("the moderately dependent setting"). So the empirical bias in Figures 1 and 2 is **over 1000 replicates at n = 200**, with the dependence strength named. The record recorded a stated denominator as absent.
  - Also printed and worth carrying: both captions "note that complete-data results are not visible because their values are close to zero" - the comparator's bias is characterised qualitatively as near zero, still with no number.

### Sub-claim 8 - the front matter the record could not get. OBTAINED, and it changes the citation.

From the **arXiv abs page**: submitted **25 May 2023**; subject class **stat.ME**; **"Journal reference / DOI: None is listed on the page"**; **"Only v1 is listed, dated 2023-05-25"**; **affiliations are NOT listed on the abs page**; the only format link offered is the PDF.

From the **Cambridge Apollo repository record**:

> Title: "Accommodating informative visit times for analysing irregular longitudinal data: a sensitivity analysis approach with balancing weights estimators"
> Authors: "Yiu, Sean" and "Su, Li" (ORCID https://orcid.org/0000-0003-0919-3462)
> Venue: "Journal of the Royal Statistical Society Series C: Applied Statistics"
> Publisher DOI: "https://doi.org/10.1093/jrsssc/qlaf002"; repository DOI: "https://doi.org/10.17863/CAM.114649"
> Metadata date: "2025-01-04T00:30:40Z"
> Volume, issue, pages: not stated on the page. Affiliations: not stated on the page.

**So: year = 2023 for the arXiv preprint (v1, 25 May 2023) and 2025 for the journal version; venue = arXiv preprint, stat.ME, published in JRSS Series C: Applied Statistics, DOI 10.1093/jrsssc/qlaf002.** The record's "Front matter gave no year or venue on the fetched page" was a property of the page it fetched (the PDF body), not of the document: the year is on the abs page in one fetch and the venue is in the repository record.

**One document or two?** The full title with subtitle and the entry's shortened form ending "...irregular longitudinal data" are **the same title truncated at the colon**, printed identically on the arXiv abs page and the repository record, with identical authors. **ONE WORK.** It now carries **four identifiers**: `arXiv:2305.16018`, the `arxiv.org/pdf` URL, `doi:10.1093/jrsssc/qlaf002`, and `doi:10.17863/CAM.114649`. Any unopened-prior count must treat these as one.

**Caveat on that linkage, labelled as mine.** The repository page "does not mention arXiv:2305.16018 or state that this is a published version of it." The arXiv-to-JRSS-C identity is **MY OWN INFERENCE from the identical full title and identical author pair**, not an assertion either page makes. I did not open the JRSS-C version, so I cannot confirm the published text matches v1.

**Author names from front matter, per the discipline.** The abs page gives "Sean Yiu and Li Su"; the repository gives "Yiu, Sean" and "Su, Li". **Neither page I opened served the affiliation "MRC Biostatistics Unit, Cambridge"** that the entry and record attach to them. The Cambridge repository holding the item is consistent with it but is not a statement of it. Treat the affiliation as **unconfirmed at front-matter level**.

## REGIME

**The regime of arXiv:2305.16018v1, in its own words.** Population: patients at "The University of Toronto PsA clinic ... one of the largest cohorts of PsA patients in the world" (Section 1.2), with a sub-cohort defined from "a PsA patient who started his/her first course of biologics on a specific calendar day" (Section 4.1) and containing "414 patients". Unit: the patient, with irregularly spaced clinic visits generated by a counting process `N*(t)`; outcome `Y(t)` defined at all `t` but, in the paper's words, "only observed when a visit is made" (Section 2.2). Operating condition: observational clinic follow-up where "patients' visits to clinics could be partly driven by ongoing disease activities" (Section 1.1) and "patients could visit the clinic due to a PsA flare at non-scheduled times" (Section 1.2). Endpoint and threshold: "a negative binomial model with the log link for the active joint count" (Section 4.2) - a count outcome, no threshold. Instrument: none; there is no measuring device anywhere in this document. Simulation regime: 1000 replicates, `n` in {200, 500, 1000}, `gamma_z` = 1.25 (highly dependent) and 0.5 (moderately dependent), `phi` in 0.15-0.6; application `phi` in {0, 0.5, 1}.

**Does the claim sit inside that regime?** For sub-claims 1-5 and 7-8, **yes** - those ask what this statistical method assumes, permits and prints, and the answers are inside the paper's own frame. For the ledger's wider subject, **no**: this is a clinic-visit method paper with **zero** occurrences of instrument, equipment, machine, calibration, industrial or engineering. Its silence on the calibration-interval regime is silence **under a frame that never contemplates the question**, exactly as the entry's novelty leg says. A result proved for informative clinic visits in a PsA cohort is **silent** about as-left adjustment of instruments, not supportive and not contrary.

## DEFECTS FOUND

1. **The entry's premise that the identification condition requires timing variation not determined by the conditioning covariates is FALSE against the document.** Two dedicated sweeps found no such assumption. The only related condition is positivity of the intensity, `lambda{t, O(t), Y(t)} > 0` when `xi(t) = 1`, which is a different quantity (see the overlap analysis in sub-claim 2). The brief says this is "the premise adversary 3 said the grounding search for was never run": the search has now run, and the premise does not survive it.
2. **"its stated identification condition" (singular) misdescribes the document.** There are no numbered assumptions. There is a **conjunction** of non-future dependence, independence of past unobserved values given `(O(t), Y(t))`, and positivity, all unnumbered, in Section 2.1 at equation (2). An entry that cites "the condition" has not said which limb it means.
3. **"identification condition" is the wrong genus for what the paper does.** The paper says the object in question **cannot be identified**: "`lambda{t, O(t), Y(t)}` cannot be identified and estimated from the observed data" and "the visiting at random assumption is unverifiable from the observed data". Identification is obtained by **stipulating** a known selection function with a known `phi`. So the entry's phrase names a stipulation, not a checkable condition.
4. **Fecundity (c)'s "CONTESTED AND UNSOURCED ON BOTH SIDES" no longer holds, and the contest itself dissolves.** Adversary 1's mechanism is now grounded on the paper's own and only instantiated arm (`q = phi*log{Y(t)+1}`, `phi > 0`, "patients currently having a larger number of active joints were more likely to make a clinic visit" - contrapositive: healthier patients visit less). Adversary 2's two-arm point is **not** refuted, because the fitted observed-history intensity in Section 4.3 prints coefficients of **both signs at once**. The paper supports both adversaries. The label to strike is "unsourced", not either position.
5. **The record's "with no denominator stated" is a stated denominator recorded as absent.** Section 3.1 prints 1000 replicates and n in {200, 500, 1000}; the Figure 1 and 2 captions print `n = 200` and their `gamma_z` values. This is the same class of error the discipline warns about - a property of the reader's pass written down as a property of the document.
6. **The record's "Front matter gave no year or venue on the fetched page" was generalised into "no year asserted".** The year is on the arXiv abs page (25 May 2023) in one fetch, and the venue is JRSS Series C: Applied Statistics, DOI 10.1093/jrsssc/qlaf002, in the Cambridge repository record in one more. A spent budget was recorded as an absent fact.
7. **Three identifiers of the same work were not consolidated.** Beyond `arXiv:2305.16018` and the `arxiv.org/pdf` URL, the work also carries `doi:10.1093/jrsssc/qlaf002` and `doi:10.17863/CAM.114649`. Four identifiers, one document.
8. **The affiliation "MRC Biostatistics Unit, Cambridge" is not confirmed from any front matter I opened.** Neither the abs page nor the repository record lists affiliations. It may be right; it is currently taken from a short form someone else wrote.
9. **"no clinical analogue" is an UNENUMERATED UNIVERSAL.** I opened **one** informative-visit method paper and it has no reset-at-observation mechanism and zero occurrences of "renewal". The instances I did **not** open include every other informative-visit and irregular-longitudinal method paper - among them the Lifetime Data Analysis document at DOI 10.1007/s10985-015-9339-7 that the brief tells me not to substitute, the Waterloo thesis "Advances in the Analysis of Irregular Longitudinal Data Using Inverse Intensity Weighting" that my one search surfaced, and the JRSS-C published version of this same paper. Classification: **true over the one instance I opened; unenumerated as a universal.**
10. **Table 3's caption calls the reported quantities "the conditional associations"**, while the entry's regime line calls the estimand "marginal regression coefficients". Not a contradiction, but the entry is not using the paper's own word for the numbers in its results table.
11. **A possible v2 is unresolved.** My full-text read is of `arxiv.org/pdf/2305.16018v1`. A search result returned `arxiv.org/abs/2305.16018v2`, while the abs page I opened reported only v1. Route untried, budget.

## ROUTES THAT FAILED

- `https://arxiv.org/pdf/2305.16018v2` - **RATE_LIMIT_EXCEEDED** from the target, verbatim: "This fetch was rate limited, most likely because several pages of one site were fetched at once. Fetch this page once more, one page at a time." **Cause: my own parallel fetch of two arxiv.org pages in one block.** This is a fact about my request, not about the host. Fetched one at a time thereafter and every subsequent arXiv call succeeded.
- **Nothing else failed.** The abs page and the PDF both opened on the first serial call by WebFetch, and the Cambridge repository record opened on the first call. **The prior record's abstract-only read was not caused by a failed route**: the brief says adversaries 1, 2 and 3 each logged a spent budget, and the record's own WebFetch "served only short consecutive fragments" - which is the summariser's 125-character quotation cap, not a limit on reading the document. Three dedicated passes with per-item prompts got Sections 1 through 5, the figure and table captions, the simulation denominator and the whole reference list. **The full text of this paper costs three fetches and has done so all along.**
- **Not tried, budget only, named so they are not re-recorded as failures:** `doi.org/10.1093/jrsssc/qlaf002` and the OUP article page for the published version; `arxiv.org/abs/2305.16018v2`; the Apollo repository's attached file (bitstream) for the accepted manuscript's title page and affiliations.

## BEARING ON THE LEDGER ENTRY

**On the "Strongest remaining objection" leg - the nomination was sound and is now DISCHARGED.** The entry named a kind of document (a method paper stating an identification condition for informative observation times) and named an instance of exactly that kind. It was right. The document states the condition, states the `phi = 0` visiting-at-random anchor in four places, and defines the sensitivity parameter vector `phi` with a worked selection function. **Convert promotion condition (b) from "open Yiu & Su" to CLOSED**, carrying the findings above rather than the nomination.

**On attack 3's two interface facts - one HOLDS, one must be NARROWED.**
- *"The observation RESETS the state"*: **HOLDS** against this source. No treatment at visits, no reset, "renewal" zero occurrences; in this paper observation is pure revelation of a state that exists regardless. The leg is not falsified and is now tested at full text against one instance instead of against nobody's read.
- *"with no clinical analogue"*: **NARROW it** to "no analogue in the one informative-visit method paper now read at full text". As written it is an unenumerated universal over a kind, and the entry has one instance.
- Attack 3's **split status** (Partial for adversaries 1 and 3, Resolved for adversary 2) should now rest on a read rather than on a nomination. The read supports keeping the reset fact and does not support the universal attached to it.

**On fecundity (c) - STRIKE the "UNSOURCED ON BOTH SIDES" label; the two sides are not in conflict.** The paper's own `phi > 0` arm is the selected-healthy arm in the monotone sense (my derivation, labelled), so adversary 1's "healthier patients visiting less often is the standard informative-visit mechanism" is **grounded on one opened instance** - and the entry's "no clinical analogue" phrasing about *that* mechanism is overstated exactly as adversary 1 said. Simultaneously adversary 2's two-arm interface point survives, because Section 4.3's fitted intensity carries both signs at once. Record fecundity (c) as **grounded on one instance, both directions representable, no longer contested-and-unsourced** - and do not promote "the standard mechanism" to a universal from one paper.

**On the vs-Prior-3 novelty leg - HOLD, and upgrade its read level.** The dedicated term sweep's finding is **correct at full text**: calibration, instrument, equipment, machine, industrial, engineering all ZERO; "calibrated" twice, both in reference titles (Yiu and Su 2022; Tan 2020), with renewal and recalibration also zero. The leg stands and its read level moves from ABSTRACT ONLY to FULL TEXT. Note, though, that when the entry wrote it, an abstract-only sweep could not have carried it; it happens to have been right.

**On attack 5 / the cap - the CONCLUSION survives but on a different ground than adversary 3's.** The paper offers **no** within-stratum contrast of the limb (i) form and handles informativeness **only** through the model-based `phi`. So "limb (i) collapses into limb (ii)'s model-based estimand" is **this method's own position**, not an overreach - over this one instance. But the paper reaches it by **unidentifiability** ("Y(t) is only observed when a visit is made"), not by adversary 3's algebraic identity "actual minus due = elapsed time minus interval", and its stated reason for having no within-stratum test is that the needed conditional intensity is not estimable at all. **Replace adversary 3's self-labelled unsourced algebra with the paper's Section 2.2 identifiability sentence as the leg's ground.** Adversary 3's own premise - that the method requires timing variation not determined by the conditioning covariates - **falls** (Defect 1), so the cap should not continue to rest on that derivation even though its conclusion is now independently supported.

**Net effect on the entry's disposition:** the entry's own nomination was its best move and it pays off. The leg survives, better grounded and on a different mechanism; one of its premises is refuted; one of its universals must be narrowed to the single instance now opened; the novelty leg strengthens; and five citation and read-level facts the record recorded as unobtainable are obtainable in three fetches.
