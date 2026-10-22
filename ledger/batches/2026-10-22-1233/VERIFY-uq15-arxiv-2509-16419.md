# VERIFY - arXiv:2509.16419 does not test cross-mission common-mode spectroscopic bias; it has no spectroscopic error term at all

Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That a shared spectroscopic parameter error produces same-signed bias across satellite missions.

Source cited by the entry as the single unopened document most likely to settle presupposition 5:
arXiv:2509.16419, "An Error Model for Evaluating the Accuracy of Satellite-Based XCO2 Products".

## READ LEVEL

**FULL TEXT, via the summariser** - https://arxiv.org/html/2509.16419v1, read in four passes
(front matter; term/component sweep; verbatim-segment pass on Secs. 3.2, 3.3.6-3.3.7, Tables 2-3
captions and rows; a targeted pass on the GOSAT product's role and on any interpretation of the
shared bias sign). No route failed. The PDF was not needed.

Caveat on the read, not on the paper: every quotation below came through the summariser's
~125-character verbatim cap, so the longer passages are **reconstructions from ordered consecutive
segments**, labelled as such with the fragment count. Nothing is completed by inference; where a
junction was not served consecutively I have left the sentence short rather than bridged it.

Front matter, taken from the arXiv abstract page (not from any short form):

> Yadav, Vineet; Hobbs, Jonathan; Nguyen, Hai M.; Kulawik, Susan S.; Liu, Junjie; Baker, David F.;
> Morino, Isamu; Ohyama, Hirofumi; Velazco, Voltaire A.; Vrekoussis, Mihalis; Dubey, Manvendra K.
> (2025). "An Error Model for Evaluating the Accuracy of Satellite-Based XCO2 Products."
> arXiv:2509.16419v1 [stat.AP], submitted 2025-09-19. **No DOI and no journal reference are listed**
> on the abstract page; it is a preprint.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Citation and read level

Answered above. Eleven authors; first author **Vineet Yadav**; 2025; v1; stat.AP; **no DOI**.
The entry should carry it as a preprint with no DOI, not as a published paper.

### (b) Does it decompose error into components, and is a spectroscopic / line-parameter term among them?

It decomposes error, extensively. The named components of the hierarchical model, with where they
are defined:

- global (overall) bias mu - Eqs. (16), (19), Sec. 3.2; estimated Sec. 3.3.1, Eq. (23)
- station-specific bias alpha_j - Eqs. (16)-(17), Sec. 3.2
- daily overpass error gamma_jk - Eqs. (16)-(17), Sec. 3.2
- single-retrieval random error epsilon_ijk - Eqs. (16)-(17), Sec. 3.2; Eqs. (35)-(37)
- co-location error - Eq. (19), Sec. 3.2; quantified Secs. 3.3.2-3.3.4, Eqs. (28)-(32), using CarbonTracker
- validation error and local aggregation error kappa_ijk - Eqs. (18)-(19), Sec. 3.2; validation error 0.4 ppm, Sec. 3.3.5
- systematic error s_s - Sec. 3.3.6, Eq. (34)
- random error s_r - Sec. 3.3.7, Eq. (37)
- prior error - Sec. 3.3.9

**No spectroscopic or line-parameter term is among them.** The sweep for "spectroscop",
"line parameter", "absorption cross-section" and "ABSCO" returned exactly one hit in the whole
document, and it is in the reference list: the title of Hobbs et al. (2020), on spectroscopic
uncertainty impacts on OCO-2/3 retrievals. That reference is cited in the body only inside a
general clause about forward-model misspecification. Reconstruction from 5 consecutive segments,
Sec. 3.2:

> "Instrument measurement errors and retrieval error cross-correlations, termed interference errors,
> contribute substantially to the variability in XCO2 error for individual measurements ...
> In addition, retrieval forward model misspecifications contribute to errors that are often coherent
> for local areas within a single coincidence but vary at larger spatiotemporal scales
> (Connor et al., 2016; Hobbs et al., 2020)."

Note the grammar on both sides of the cut, because it is load-bearing here. The coherence claimed
is **"for local areas within a single coincidence"**, and the same sentence's second half says such
errors **"vary at larger spatiotemporal scales"**. That is the opposite of a common-mode claim: the
sentence asserts local coherence and large-scale variability. It is also the hedged, cited
formulation ("often coherent", with two citations), and there is no barer restatement elsewhere to
prefer it over.

So: this is where spectroscopy *would* enter the model, and it does not enter as a term. The paper
**cites** a spectroscopy paper under a generic forward-model heading. A definition citation is not
an evaluation.

### (c) Does it state or test whether such a component is common-mode across missions, or mission-specific?

Neither. It assumes independence and never raises the cross-mission question. Verbatim, Sec. 3.2:

> "In the decomposition shown in Eq. (21), it is assumed that all the terms are independent."

The two definitions that do the partitioning work are about **averaging within a coincidence**, not
about missions. Reconstruction from 2 consecutive segments each, Secs. 3.3.6 and 3.3.7:

> "Systematic errors are those that remain unchanged when averaging observation errors
> within a single station/day coincidence."

> "Random errors are those remaining errors for individual XCO2 observations that do partially decay
> when multiple observations are averaged."

The operative scope of "systematic" in this paper is therefore **a single station/day coincidence**.
That is a far smaller object than "same-signed across missions". No number, and no statement, speaks
to cross-mission commonality.

Missions present: OCO-2 throughout. GOSAT only as **one of two inputs** to a fused product -
Sec. 2 says the MEaSUREs fused product "combines OCO-2 LtXCO2 v11.1 and ACOS-GOSAT XCO2 v9.0 to
create a fused product." OCO-3 appears only in the abstract phrase "OCO-2 & 3", the introduction
(via Taylor et al., 2023) and the references. TanSat, TROPOMI and Sentinel are absent.

### (d) Does it print any cross-mission correlation or bias-sign result?

**No cross-mission correlation coefficient is printed anywhere.**

There *are* printed biases that share a sign, and this is the number most likely to be mistaken for
the claim's, so I set out its classes. Table 2, caption (reconstruction from 3 consecutive segments):

> "Error statistics of different XCO2 products over Land derived from comparison with 20 TCCON sites.
> Note that MEaSUREs products generally have fewer observations than OCO-2 and OCO-2 10-sec products
> as they are gridded spatially at 1 deg x 1 deg resolution."

Table 2 (Land), Overall Bias column, ppm: MEaSUREs OCO-2 and GOSAT -0.19; MEaSUREs OCO-2 -0.2;
MEaSUREs OCO2-fused-2020 -0.18; OCO-2 LtXCO2 -0.12; OCO-2 10-sec -0.29; OCO-2 10-sec* -0.31;
MEaSUREs OCO-2 Prior 0.00.

Table 3 (Ocean), caption (reconstruction from 3 consecutive segments):

> "Error statistics of different XCO2 products over Ocean derived from comparison with 12 TCCON sites.
> Out of these 12 sites, only 11 were available for comparison for MEaSUREs products as MEaSUREs data
> does not have water observations near Park Falls (over the Great Lakes), which are found in the other products."

Table 3 (Ocean), Overall Bias, ppm: MEaSUREs OCO-2 and GOSAT -0.1; MEaSUREs OCO-2 -0.12;
MEaSUREs OCO2-fused-2020* -0.1; OCO-2 -0.16; OCO-2 10-Second -0.19; OCO-2 10-Second** -0.19;
MEaSUREs OCO-2 Prior 0.32.

**Numerator class.** Each figure is an *overall bias of a product against TCCON*, estimated as the
average of station biases (Eq. 23), with the exclusions the captions state: land = 20 TCCON sites,
ocean = 12 sites falling to 11 for MEaSUREs, and MEaSUREs rows gridded to 1 deg x 1 deg so they
carry fewer observations than the swath-level rows beside them.

**Denominator.** Not missions. The denominator is **products of one retrieval lineage** - OCO-2
LtXCO2 v11.1, OCO-2 10-second averages, and three MEaSUREs gridded/fused derivatives of it. Checked
against its near neighbours: this is *not* a set of independent missions, *not* a set of independent
retrieval algorithms, and *not* a set of independent spectroscopic inputs.

**Overlap, both directions.** What the source's class **misses**: any standalone mission bias other
than OCO-2's. ACOS-GOSAT v9.0 has **no row and no bias figure of its own** anywhere in the paper -
I checked specifically. Its only appearance is as an input, and the fused product's record ends in
December 2019 because that is "the last month the ACOS-GOSAT v9.0 product is available". So the one
row whose name contains "GOSAT" is a product that *contains* OCO-2, not an independent mission. The
class also misses OCO-3, TanSat, TROPOMI and any European sensor. What the source's class
**includes that the claim excludes**: gridded and fused *derivatives of a single mission*, plus a
prior-only row (MEaSUREs OCO-2 Prior) whose sign is 0.00 on land and **+0.32 on ocean** - the one
row that breaks the sign pattern, and it is not a satellite retrieval at all. Reading same-sign
agreement among five OCO-2 derivatives as evidence about missions is the error this number invites.

**And the paper itself draws no such inference.** I asked for it directly: there is no sentence
interpreting the shared negative sign, and no attribution of a common bias to spectroscopy, the
a priori, airmass or the forward model. The only nearby passage is the generic Sec. 3.2 clause
quoted in (b), which the paper never links to the table values.

### (e) Does it print a sensitivity-weighted or per-parameter source count?

**No.** Absent in both senses. Averaging kernels and the pressure weighting function appear only in
the profile convolution (Eqs. 15, 26-27) - used to put TCCON and satellite on a common footing, not
to weight error sources. Sec. 3.2 lists error sources qualitatively (instrument measurement error,
interference errors, forward-model misspecification) and never quantifies them per parameter or
weights them by sensitivity.

**So the entry does not become a disguised known.** I state this plainly because sub-claim (e) was
posed as a trapdoor: the trapdoor does not open. There is no per-parameter table here to have been
overlooked.

## REGIME

In the paper's own words: a **hierarchical statistical model** for comparing satellite XCO2 against
**ground-based reference data**. Stated purpose, reconstruction from 2 consecutive segments
(Introduction):

> "The first is to formalize and document a hierarchical statistical model to underlie the methodology
> ... where the reference XCO2 data are those available from ground-based sensors."

- **Population / unit of analysis:** individual satellite soundings nested in station/day
  coincidences, nested in TCCON stations. The unit at which "systematic" is defined is the
  **single station/day coincidence**.
- **Reference instrument:** TCCON direct solar spectra; 20 land sites, 12 (effectively 11) ocean sites.
- **Products graded:** OCO-2 LtXCO2 v11.1, OCO-2 10-second, and MEaSUREs gridded/fused products
  (one of which ingests ACOS-GOSAT v9.0). The Introduction says "three products" while Sec. 2 says
  "four satellite-based data products" - the paper is internally inconsistent on this count, which
  is worth noting if anyone cites the figure.
- **Operating split:** land vs ocean, separately tabulated.
- **Explicit assumption:** all terms of the Eq. (21) decomposition independent.

**Does the claim sit inside this regime? No.** The claim's unit of analysis is a *mission*, its
mechanism is a *shared spectroscopic parameter*, and its quantity is *correlation of bias sign
across missions*. This paper's unit is a station/day coincidence, its error list has no
spectroscopic term, and it assumes its components independent rather than testing their
covariance. A result proved under these assumptions is silent outside them.

## DEFECTS FOUND

1. **The source does not address the claim's mechanism.** There is no spectroscopic or
   line-parameter error component in the model. The one occurrence of "spectroscop" in the entire
   document is a reference-list title (Hobbs et al., 2020), cited under a generic forward-model
   clause. Whoever nominated this paper as the document most likely to settle presupposition 5
   appears to have matched on "error model for satellite XCO2 products" rather than on content.
   Four returns across two adversaries' sweeps is consistent with title-level matching.

2. **The source does not address the claim's unit of analysis.** It has one mission's retrievals
   plus derivatives, and one fused product in which GOSAT is an ingredient. There is no standalone
   GOSAT or OCO-3 bias to compare signs with.

3. **It assumes away the very structure the claim asserts.** "it is assumed that all the terms are
   independent." A paper that assumes independence cannot be read as having found correlated
   same-signed error.

4. **The near-miss number is a trap, and should be flagged in the entry.** Tables 2 and 3 do print
   a column of same-signed negative biases, -0.1 to -0.31 ppm. Anyone skimming could cite this as
   "same-signed bias across products". It is same-signed bias across **derivatives of one retrieval
   lineage against TCCON**, the sign is never interpreted by the authors, and the one row that
   breaks the pattern (+0.32 ppm, MEaSUREs OCO-2 Prior, ocean) is a prior, not a retrieval.

5. **Front-matter correction:** the entry should carry this as **arXiv:2509.16419v1, preprint, no
   DOI, no journal reference, 2025-09-19, first author Yadav, eleven authors**. If the entry
   records a DOI or a journal, that is wrong as of today.

6. **Not a defect, stated to keep the categories clean:** none of this is COULD NOT READ. I read
   the full text. The paper's silence on cross-mission common-mode is a genuine absence in a
   document I opened, not an unread document's silence.

## ROUTES THAT FAILED

None. https://arxiv.org/abs/2509.16419 served the front matter and
https://arxiv.org/html/2509.16419v1 served the full text on first request, three times. No PDF
fallback, no version hunting, no search, no proxy refusal. 0 of 2 searches and 4 of 5 fetches used.

## BEARING ON THE LEDGER ENTRY

**(f) Presupposition 5 remains UNVERIFIED, and this source cannot settle it in either direction.**

Specifically, and this is the part that matters for the ledger's bookkeeping: opening this document
does **not** convert presupposition 5 from UNVERIFIED to refuted. The paper is silent on the
question, under a regime that excludes it. Silence under an inapplicable regime is not negative
evidence. The honest status is unchanged.

What *does* change is the entry's own claim about itself. The entry names arXiv:2509.16419 as "the
single unopened source most likely to settle presupposition 5". That nomination is now **refuted**:
the document has no spectroscopic error term, no second standalone mission, and an explicit
independence assumption. **Strike the nomination**, and do not re-queue this document under
presupposition 5.

Recommended bearing: **strike this source from presupposition 5** (it stays perfectly good support
for anything about OCO-2/TCCON validation error structure, which is not what it was queued for),
and **hold presupposition 5 as UNVERIFIED with its source list now empty**. Since the entry records
that the item was returned four times by two adversaries and opened by nobody, the four returns
should be recorded as **title-level matches, not independent corroboration** - otherwise the entry
carries a false signal of convergence.

If the ledger wants presupposition 5 converted to a promotion condition rather than left open, the
condition should name what would actually settle it, which this paper shows is a different kind of
document: a study that (i) grades two or more *independent* missions or retrieval algorithms, (ii)
perturbs a *named* spectroscopic or line parameter, and (iii) prints the sign and correlation of the
resulting bias per mission. Hobbs et al. (2020), "Spectroscopic uncertainty impacts on OCO-2/3
retrievals" - cited in this paper's Sec. 3.2 and present in its reference list - is the lead worth
chasing on (ii), though its title scopes it to OCO-2/3, which is one instrument family and so may
not reach (i). I did not open it; it is outside this check's scope, and I flag it as a lead, not a
finding.
