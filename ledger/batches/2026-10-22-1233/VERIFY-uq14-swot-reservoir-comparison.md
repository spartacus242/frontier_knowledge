# VERIFY - the -0.18 m "candidate frame shift" in the Recentino Lake SWOT paper explains the UAV difference, not the SWOT residual

Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That in the only published SWOT-versus-reservoir-operator comparison, the gauge's reference frame was
not available and had to be assumed, with a candidate frame shift of -0.18 m against a residual of
-0.08 m.

The claim has three separable legs, and they do not stand or fall together:

- L1 "the gauge's reference frame was not available and had to be assumed" - HOLDS, verbatim.
- L2 "a candidate frame shift of -0.18 m against a residual of -0.08 m" - FAILS as worded. Both
  numbers are printed, but the paper does not set them against each other. The -0.18 m is offered as
  a possible explanation of a DIFFERENT number, the -0.17 m UAV-DEM-minus-gauge difference.
- L3 "the only published ... comparison" - NOT CHECKED (a uniqueness claim over a population I did
  not enumerate; see DEFECTS FOUND, item 5). Not a negative finding.

As the entry carries it at line 37: "the candidate frame shift flagged in that paper (-0.18 m) is
larger than the residual it would explain (-0.08 m)". The clause "the residual it would explain" is
the error. The residual the paper offers -0.18 m to explain is -0.17 m.

## READ LEVEL

One source, located from the entry's own citation stub (no search needed).

**Hamoudzadeh et al. (2026)** - PARTIAL, via the WebFetch summariser on the publisher PDF and HTML.
Sections reached: Abstract (reassembled complete from consecutive segments); Section 4 Results and
discussion (the two paragraphs at issue, in ordered consecutive segments); Section 5 Conclusions (the
two sentences at issue, plus one hedge sentence); Table 3 (all cells, as relayed). NOT reached:
Sections 2 and 3 (study area, data and methods) beyond incidental facts; Table 1; Table 2; all
figures; the reference list. I did not reach FULL TEXT and do not claim it.

The entry's source list (line 18) records this paper as "Full text read". My read was weaker than
that. I flag the discrepancy but it is not a defect in the entry: a weaker read of mine is a fact
about my read, not about theirs.

Two summariser refusals are material and are recorded in ROUTES THAT FAILED: the HTML landing page
served only the abstract, and on the final call the summariser declined to reproduce the two
paragraphs in full and gave me the antecedent plus short quotes instead. The pronoun antecedent in
(A)/(B) below therefore rests on the summariser's explicit statement of it plus one short quoted
sentence, not on my own reading of the unbroken paragraph. It is corroborated independently by the
Conclusions sentence and by the arithmetic (-0.18 explains -0.17, not -0.08), but a reader who wants
this airtight should open the PDF.

### Front matter (sub-claim (a))

- First author, from the front matter: **Alireza Hamoudzadeh** (not a short form; the entry gives
  only "Hamoudzadeh et al.").
- Full author list as printed, in order: Alireza Hamoudzadeh, Lorenza Ranaldi, Alessandra Maria De
  Pace, Veronica Laici, Valeria Belloni, Roberta Ravanelli, Mattia Crespi. Seven authors.
- Title: "Issues and potentials of multi-sensor water level monitoring: lesson learned at Recentino
  Lake, Italy".
- Journal: The International Archives of the Photogrammetry, Remote Sensing and Spatial Information
  Sciences, Volume XLIX-M-1-2026, pages 19-26.
- Published 02 July 2026.
- DOI: 10.5194/isprs-archives-XLIX-M-1-2026-19-2026
- URL read: https://isprs-archives.copernicus.org/articles/XLIX-M-1-2026/19/2026/

Note the title itself: "lesson learned at Recentino Lake, Italy". The paper presents itself as a
single-site case study, not as a validation over a frame.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) The "not available" sentence, with both flanking sentences

RECONSTRUCTION. Assembled from ordered consecutive summariser segments: 3 segments for the sentence
itself, 3 for the sentence before, 3 for the sentence after. Junctions verified; nothing completed by
inference. Section 4, Results and discussion, opening paragraph.

Sentence BEFORE (segments 1-3):

> "In this section, we present the results of the comparisons between the time series of the water
> levels measured by the gauge station and: (i) the single-epoch water level derived from the
> UAV-based DEM; (ii) the time series of the water level measured by SWOT."

The sentence ITSELF (segments 4-6):

> "Firstly, although information on the height reference frame of the gauge station was not
> available, it was assumed that its water level measurements were referenced to the RDN2008 +
> ITALGEO05 official Italian height reference frame."

Sentence AFTER (segments 7-9):

> "Therefore, to ensure consistency among the three water level datasets in terms of the reference
> frame, we converted the gauge station measurements to the RDN2008 + EGM2008 height reference,
> considering the difference between the Italian geoid ITALGEO05 and the global model EGM2008."

**Grammar at the cut.** The string "was not available" sits inside a concessive subordinate clause
introduced by "although", whose main clause is "it was assumed that...". So the cut is safe for the
entry's "had to be assumed" - the assumption is in the same sentence, asserted by the authors in
their own voice. One word of drift: what the paper says was not available is "**information on** the
height reference frame of the gauge station", not the frame itself. The entry's phrasing ("the
gauge's reference frame was not available") is a tolerable compression and I do not score it as a
misquotation, but a note that quotes the paper should carry "information on".

**What the flanking sentences add, and it cuts the entry's way.** The sentence after shows the
authors had to supply the geopotential bridge themselves - "we converted the gauge station
measurements to the RDN2008 + EGM2008 height reference, considering the difference between the
Italian geoid ITALGEO05 and the global model EGM2008". No operator-stated conversion is used at any
point. This is direct support for attack 4's clause about "the operator's OWN stated conversion": in
the one comparison of the candidate's kind, the operator's chain did not reach SWOT's datum and the
authors assumed the near end of it and modelled the far end.

### The hedged formulation, Section 5 Conclusions

Per the rule that the hedged, cited formulation is the one to quote:

> "In case future checks on gauge height reference frame will confirm its present misalignment"

The misalignment is, in the paper's own words, unconfirmed and awaiting future checks.

### (c) The two numbers

**-0.08 m.** Printed in three places plus Table 3.

- Table 3, Section 4. The caption (as relayed) describes the Pearson correlation coefficient and the
  statistics of the differences between SWOT and gauge surface water level time series. Full table as
  served, three columns - Combined Orbits / Ascending Orbit / Descending Orbit:

  | | Combined | Ascending | Descending |
  |---|---|---|---|
  | Pearson (unitless) | 0.69 | 0.65 | 0.76 |
  | Mean (m) | **-0.08** | -0.12 | -0.04 |
  | Median (m) | **-0.08** | -0.08 | -0.06 |
  | SD (m) | **0.15** | 0.16 | 0.14 |
  | NMAD (m) | 0.12 | 0.10 | 0.16 |
  | RMSE (m) | **0.17** | 0.19 | 0.15 |
  | MAE (m) | 0.13 | 0.15 | 0.12 |

- Section 4 text: "The mean difference between SWOT (combined ascending and descending passes) and
  gauge measurements is -0.08 m, with an RMSE of 0.17 m (Table 3)".
- Abstract: "a mean/median difference of - 0.08 m."
- Section 5 Conclusions: "a mean difference (SWOT - gauge levels) of -0.08 m."

What it is a figure FOR: the mean (and, separately, the median) of SWOT-minus-gauge water surface
elevation differences, in metres, on ONE reservoir, combined over ascending and descending passes.
Unit of analysis: one SWOT epoch matched to the gauge. Sample: 48 SWOT scene epochs selected, 38
retained as inliers after a two-step outlier removal, **36** matched to gauge data, spanning
**30 July 2023 to 11 December 2024**. Stated uncertainty: none on the mean itself. The dispersion
printed beside it is SD 0.15 m, NMAD 0.12 m, RMSE 0.17 m, MAE 0.13 m (combined). No standard error of
the mean is given, and the per-orbit epoch counts are not stated.

**-0.18 m.** Printed twice, both times in running text, **never in a table**.

- Section 4, Results and discussion. RECONSTRUCTION from 3 consecutive segments:

  > "A possible explanation of this difference (to be checked) is the difference (-0.18 m) between
  > the present and the old Italian height reference frame, to which the height of the fundamental
  > leveling benchmark of the dam could still be referred."

- Section 5, Conclusions. RECONSTRUCTION from 2 consecutive segments:

  > "This difference, which requires additional future checks, can be explained considering the
  > difference between the present and the old Italian height reference frame, equal to -0.18 m."

What it is a figure FOR: **the offset between two national Italian height reference frames** - the
present one and the old one - in metres. It is a datum-to-datum constant. Sample: none; it is not a
measurement over any sample. Stated uncertainty: **none**. Source: **none cited** at either
occurrence. On the "published is not performed" test, the paper **POSITS** -0.18 m as an explanatory
constant; it does not measure it, and it does not measure the misalignment it is offered to explain.
Both occurrences hedge it explicitly: "(to be checked)" and "which requires additional future
checks".

**The antecedent of "this difference" - the decisive point.** In both places the pronoun refers to
the **UAV-DEM-minus-gauge difference of -0.17 m**, measured at the single epoch of the UAV survey -
not to the SWOT-minus-gauge residual. Evidence, three strands:

1. Section 4. The sentence immediately preceding the -0.18 m sentence is, as served, "Such a
   difference is significant considering the accuracies of both gauge measurements (1-2 cm)", and the
   summariser states on direct question that this paragraph concerns the UAV-DEM versus gauge
   comparison, not SWOT versus gauge.
2. Section 5. The preceding Conclusions sentence reports that the first comparison "revealed a
   difference (UAV-DEM - gauge) of -0.17 m", and "This difference" follows it.
3. The Abstract orders the two comparisons the same way, UAV first: "Assuming the gauge time series
   as reference, at the epoch of UAV survey, the UAV-derived water level differs from the gauge one
   by -0.17 m, while the SWOT and gauge time series show moderate agreement (Pearson correlation of
   0.69) and a mean/median difference of - 0.08 m." (RECONSTRUCTION, 3 consecutive segments.) The
   "while" marks these as two separate comparisons, and the -0.18 m explanation attaches to the
   first.
4. Arithmetic, MY OWN: |-0.18| - |-0.17| = 0.01 m, against |-0.18| - |-0.08| = 0.10 m. A frame offset
   of -0.18 m accounts for a -0.17 m difference almost exactly. Carrying the source's own stated
   figures: the paper attaches no uncertainty to -0.18 m at all, and attaches none to the -0.17 m
   single-epoch difference either, so this agreement is a bare coincidence of two unhedged numbers,
   not a tested fit. It is nonetheless the pairing the paper makes.

**Numerator class and denominator, both directions of overlap.**

-0.08 m. Numerator class: SWOT L2_HR_Raster water surface elevation minus ENEL gauge water surface
elevation, both carried into RDN2008 + EGM2008 - the gauge by the authors' own ITALGEO05-to-EGM2008
conversion on an **assumed** source frame, and with the explicit exclusion of the 10 epochs dropped by
the two-step outlier removal and the 2 inlier epochs with no gauge match. Denominator: 36 matched
epochs on ONE 0.7 km2 reservoir - checked against the near neighbours it is not, namely the 48 scenes
selected and the 38 inliers. What this class MISSES relative to the candidate's r: it is not computed
through "the operator's OWN stated conversion", which is the clause V2 turns on - the near end is
assumed and the far end is a geoid-model difference the authors applied; and it is a central tendency
over epochs, not a decomposition of the offset into datum-label, transformation, tide-convention,
altimeter-bias and hydraulic-sampling legs. What it INCLUDES that the candidate excludes: SWOT
retracking and hydraulic-sampling scatter at a 0.7 km2 water body, and an author-supplied geoid-model
transformation that the candidate's wording assigns to the operator.

-0.18 m. Numerator class: the difference between two national Italian height datums - a constant,
with no water body, no epoch and no instrument in it. Denominator: none. What it MISSES: everything
the candidate's r is about; it is not a residual, and nothing in it is measured at Recentino Lake.
What it INCLUDES that the claim excludes: a conjecture about where the **dam's fundamental levelling
benchmark** may still be referred - a benchmark-provenance hypothesis on the UAV/levelling leg, which
is a different leg of the problem from the SWOT-minus-gauge comparison. A number one word away from
the claim's is a different quantity, and this is several words away.

### (d) Does the paper compute the candidate's residual distribution, stationarity, or share exceeding an operating margin?

Answering plainly, because a yes here is prior art for the candidate rather than support for its
kill:

- **Residual distribution: PARTLY YES, and the entry should own this.** Table 3 prints dispersion of
  the SWOT-minus-gauge differences - SD 0.15 m, NMAD 0.12 m, RMSE 0.17 m, MAE 0.13 m - split three
  ways by combined, ascending and descending orbit, and the text distinguishes "robust (median, NMAD
  and MAE) and non-robust (mean difference, standard deviation and RMSE) statistics". That is a
  dispersion summary of the residual on one reservoir. No histogram and no percentiles are reported.
  It is a distribution summarised at n=1 water body, which is not a distribution ACROSS a frame of
  water bodies, which is what limb (i) asks for.
- **Stationarity: NO.** No trend test, no step or change-point test. The only temporal operations are
  the per-day change filter used for outlier removal (3NMAD bounds on per-day elevation change) and
  the Pearson correlations in Table 3. Neither is a stationarity test, and the ascending-versus-
  descending split is an orbit-geometry split, not a time test.
- **Share exceeding an operating margin: NO.** The paper notes the reservoir is regulated and the
  gauge data come from ENEL's Terni hydroelectric complex, but no flood-pool, spillway-crest,
  freeboard or maximum-regulation level is named, and no residual is compared to any such threshold.
  The 3NMAD bounds are outlier-removal bounds, not operating limits.

So this paper is partial prior art for the dispersion part of limb (i) on one reservoir, and is silent
on limbs (ii) and (iii). That is what the entry already says at lines 18 and 20, and my read confirms
it.

## REGIME

**(e) In one line, in the paper's own terms:** one small artificial regulated reservoir - Recentino
Lake, central Italy, about 0.7 km2, gauge data from ENEL, operator of the Terni hydroelectric complex
- where SWOT L2_HR_Raster water surface elevations at 48 selected scene epochs (38 inliers after
two-step outlier removal, 36 matched) spanning 30 July 2023 to 11 December 2024, one single-epoch UAV
photogrammetric DEM at 1.6 cm/pixel GSD, and the hourly gauge record are all carried into a common
RDN2008 + EGM2008 height reference frame, the gauge's own source frame being assumed rather than
documented, in order to "quantify discrepancies arising from unknown or inconsistent height reference
frames".

**Does the claim sit inside it?** Split by leg.

- L1 (frame not available, had to be assumed): INSIDE, and quoted verbatim from Section 4. The regime
  is exactly the one the entry describes - a SWOT comparison against a reservoir operator's gauge.
- L2 (-0.18 m against -0.08 m): the numbers are inside the regime, the RELATION is not. -0.08 m lives
  in the SWOT-minus-gauge comparison over 36 epochs; -0.18 m lives in the national-datum constant
  offered to explain the UAV-minus-gauge single-epoch difference of -0.17 m. The entry imports a
  number from the UAV leg and sets it against a residual from the SWOT leg. Nothing in the paper
  licenses that comparison.
- L3 (uniqueness): outside what one paper can establish. A single case study cannot certify that it is
  the only one of its kind.

One further regime caution for the entry's use of this paper at all: n=1 reservoir, 0.7 km2, in Italy,
under one national datum history, with the operator's frame assumed. Any generalisation from it to a
population of operators is the entry's own extrapolation, not the paper's.

## DEFECTS FOUND

1. **MISPAIRED NUMBERS - the substantive defect.** The entry's line 37 says "the candidate frame
   shift flagged in that paper (-0.18 m) is larger than the residual it would explain (-0.08 m)".
   The residual -0.18 m is offered to explain is **-0.17 m**, the UAV-DEM-minus-gauge difference at
   the UAV survey epoch, not -0.08 m. Against its actual comparand the frame shift is not "larger" in
   any argumentative sense - it is the same size to within 0.01 m (MY OWN ARITHMETIC; the paper
   states no uncertainty on either figure), which is why the authors propose it as the explanation.
   The entry's line 30 is the softer version of the same error: "left a -0.18 m candidate frame shift
   beside its own -0.08 m residual". "Beside" is literally true - both numbers are in the paper - but
   the juxtaposition is what carries the inference, and the juxtaposition is the entry's, not the
   paper's.

2. **A dropped leg caused the mispairing.** The entry's source note (line 18) describes this paper as
   "ONE regulated 0.7 km2 Italian reservoir, SWOT L2_HR_Raster vs ENEL hourly gauge" and never
   mentions the UAV photogrammetric survey, which is the paper's first comparison and the one the
   -0.18 m attaches to. With the UAV leg absent from the entry's description of the paper, -0.18 m
   had no home but the SWOT residual.

3. **A posited constant reported as a measurement.** -0.18 m is uncited, carries no uncertainty,
   appears only in running text, and is hedged twice - "(to be checked)" and "which requires
   additional future checks" - with the Conclusions adding "In case future checks on gauge height
   reference frame will confirm its present misalignment". The entry's word "flagged" is fair; but
   nothing in the entry conveys that the misalignment is unconfirmed by the paper's own statement, and
   the entry should quote the hedge.

4. **An overstated read, noted not scored.** The entry records "Full text read" for this paper. I
   could not reach full text through either publisher route; the HTML served the abstract only and the
   summariser declined the full paragraphs on the PDF. This may be a difference in what the
   summariser served on different days rather than an error by the original reader.

5. **UNIFORMITY CLAIM NOT CHECKED, and not refuted.** "the only published SWOT-versus-reservoir-
   operator comparison" is an absence claim over a population I did not enumerate; I spent my budget
   on reading the named document, per instruction. COULD NOT CHECK, and specifically NOT a negative
   finding. Two things make it worth a flag rather than a pass: the paper's own title frames it as a
   single-site "lesson learned", and the entry's own record (line 29) states that about 20 returned
   titles went unopened and that a population-scale Indian reservoir altimetry paper could not be
   read. "The only published comparison nobody could find another of" is the honest wording.

6. **Minor front-matter gaps.** The entry carries no title, no DOI and no first-name initial for this
   source, giving only "Hamoudzadeh et al. (2026), isprs-archives XLIX-M-1-2026/19/2026". See
   READ LEVEL for the full front matter.

**What is NOT a defect, and should be said plainly:** the "was not available ... it was assumed" leg
is sound, correctly attributed, and the flanking sentence makes it stronger than the entry claims. The
authors not only assumed the gauge's source frame, they supplied the ITALGEO05-to-EGM2008 bridge
themselves. On the specific clause attack 4 turns on - whether the operator's OWN stated conversion
reaches SWOT's geopotential datum - this paper is a clean negative instance, independent of the
-0.18 m error.

## ROUTES THAT FAILED

- `curl` to the publisher PDF: `CONNECT tunnel failed, response 403`, 0 bytes. Tool-scoped at this
  proxy as documented; WebFetch reached the same URL. No proxy settings touched, no TLS verification
  disabled, nothing probed.
- Publisher HTML full-text URL
  (`.../isprs-archives-XLIX-M-1-2026-19-2026.html`): resolved, but the summariser returned abstract
  content only and reported that the page "covers only the abstract, not the full article". Not a
  host block - the landing page and PDF both worked.
- Summariser verbatim cap, hit twice. On the abstract and on the Section 4 / Section 5 sentences the
  ordered-consecutive-segment workaround succeeded, and every quotation above built that way is
  labelled a RECONSTRUCTION with its fragment count. On the final call the summariser declined to
  reproduce the two full paragraphs at all ("I won't reproduce the full paragraphs verbatim") and
  substituted a direct statement of the antecedent plus one short quote. That is the one place where I
  am relying on the summariser's reading rather than my own; see READ LEVEL.
- Not attempted, and so not evidence either way: Sections 2-3, Tables 1-2, the figures, and the
  reference list; and any search for other SWOT-versus-operator comparisons (defect 5).
- No search classifier refusals: I ran no searches, because the entry's citation stub located the
  document directly.

## BEARING ON THE LEDGER ENTRY

**STRIKE one number-pairing; HOLD the leg it was decorating.**

1. **Strike, at line 37:** "and the candidate frame shift flagged in that paper (-0.18 m) is larger
   than the residual it would explain (-0.08 m)". This is a misstatement of the source and should not
   survive in any form. If a replacement is wanted, the accurate sentence is: *in that comparison the
   authors proposed an uncited, unquantified -0.18 m offset between the present and the old Italian
   height reference frame, hedged "(to be checked)", as a possible explanation of a -0.17 m
   UAV-DEM-minus-gauge difference, while separately reporting a SWOT-minus-gauge mean and median of
   -0.08 m (SD 0.15 m, RMSE 0.17 m, n = 36 epochs).*

2. **Narrow, at line 30** (attack 3, Combinatorial novelty): "left a -0.18 m candidate frame shift
   beside its own -0.08 m residual" should lose the juxtaposition. The seam attack 3 documents is
   real without it: a 2026 paper in the candidate's own regime could not obtain the operator gauge's
   height reference frame, assumed RDN2008 + ITALGEO05, bridged to EGM2008 with a geoid-model
   difference of its own, and left the gauge's alignment to "future checks". Attack 3's grade does not
   depend on the struck figure.

3. **Hold, and strengthen, attack 4 at line 34 and the verdict leg at line 37.** The clause the
   verdict stands on is "the operator's OWN stated conversion", and this paper is evidence for it
   independent of the struck pairing - on the quoted sentence after the "not available" sentence, the
   operator supplied neither frame nor conversion, and the authors had to assume the one and model the
   other. The strike removes a quantitative flourish, not the leg. **The verdict does not reverse on
   this check.**

4. **Convert to a promotion condition, do not treat as settled:** line 37's parenthetical "the only
   published SWOT-versus-reservoir-operator comparison". Before this entry is relied on as a
   precedent, the uniqueness should be either sourced or reworded to "the only one found", given that
   the entry's own record leaves about 20 titles unopened and one on-point population-scale paper
   unread. This is a wording condition, not a finding against the entry.

5. **Also hold, because it cuts against the entry and was asked:** Table 3's SD 0.15 m, NMAD 0.12 m,
   RMSE 0.17 m and MAE 0.13 m are a dispersion summary of exactly the candidate's residual - at n=1
   reservoir, with no stationarity test and no threshold comparison. This is prior art for a sliver of
   limb (i), consistent with what the entry already concedes at lines 18 and 20. It does not reach
   limb (ii) or limb (iii), and the entry's statement that those limbs are unoccupied in everything
   anyone opened survives this check.
