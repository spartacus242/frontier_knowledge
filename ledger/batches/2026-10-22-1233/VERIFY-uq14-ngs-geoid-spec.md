# VERIFY - GEOID18 is a hybrid NAVD 88 model on NGS's own words, but NGS prints the NAVD88-to-geopotential magnitude the entry says nobody stated
Checker: fresh context. Budget used: 4 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261022-14, leg (c) of the fatal attack, in two parts:

1. DEFINITIONAL: a hybrid geoid model (GEOID18) is fitted to levelled bench marks and therefore
   returns NAVD 88 heights rather than a geopotential surface, so it cannot close a geopotential
   comparison.
2. EVIDENTIAL: nobody has stated the magnitude of the NAVD88-to-geopotential difference, and the
   entry's only source for the leg is trade press (GPS World), with no primary NGS document opened.

Part 1 is CONFIRMED on NGS's own words (with one wording caveat, DEFECT 1). Part 2 is FALSE as to
the literature: NGS prints the magnitude three times over, in two documents, one of which is the
GEOID18 technical report itself.

## READ LEVEL

Source A - NOAA Technical Report NOS NGS 72, "GEOID 18". Front matter authors, in printed order:
Kevin Ahlgren, Galen Scott, David Zilkoski, Brian Shaw, Nagendra Paudel. May 2020. No DOI (NOAA
technical report series); NOAA Institutional Repository item 55450,
https://repository.library.noaa.gov/view/noaa/55450/noaa_55450_DS1.pdf
READ LEVEL: **PARTIAL**, via the summarised WebFetch route against the repository PDF (two calls,
different prompts). Sections reached: front matter; S1 Executive Summary; S2 Purpose; S4.1 (tilt/bias
removal); S6.1.1 and Table 13 (raw residuals, p. 38-39); S6.1.2 and Table 14; S7.1 and Table 15;
S8 and the Figure 58 discussion. NOT reached: the gravimetric chain chapters (S3, S5), the regional
chapters, the appendices. I did not have raw PDF text - everything below came through the
summariser, which caps verbatim return at roughly 125 characters, so every sentence longer than that
is labelled a reconstruction from ordered consecutive segments.

Source B - "GEOID18 Technical Details", NGS web page,
https://geodesy.noaa.gov/GEOID/GEOID18/geoid18_tech_details.shtml
READ LEVEL: **FULL TEXT of the page** (summarised route). It is a model-description page, not a
technical report; I treat it as corroboration, not as the primary.

Source C - NOAA Technical Report NOS NGS 64, "Blueprint for 2022, Part 2: Geopotential Coordinates",
National Geodetic Survey, dated November 13, 2017. NO INDIVIDUAL AUTHORS ARE PRINTED in the front
matter; the report's own bibliography cites it as "National Geodetic Survey, 2017". No DOI.
https://geodesy.noaa.gov/PUBS_LIB/NOAA_TR_NOS_NGS_0064.pdf
READ LEVEL: **PARTIAL**: front matter; S4 pp. 8-10 (NAVD 88 vs. geopotential comparison, Fig. 4-1,
Fig. 4-2); S5 pp. 12-13 (hybrid geoid definition); S14.3 p. 38. NOT reached: S1-S3, S6-S14.2.

NOT READ AT ALL, and therefore silent in both directions: any NAPGD2022-specific release document
or GEOID2022 model description. See DEFECT 4. This is COULD NOT REACH ON BUDGET, not NOT FOUND.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Read level and route - answered above.

### (b) Does NGS state GEOID18 is a HYBRID model fitted to GPS-on-bench-mark observations, and that it converts to NAVD 88?

YES, repeatedly, in the technical report's own Executive Summary and Purpose.

NOS NGS 72, S1 Executive Summary, as served in two consecutive segments (RECONSTRUCTION, 2 fragments,
junction after "model,"):
  "GEOID18 is the National Geodetic Survey's (NGS) latest hybrid geoid model, which enables GPS users
   to access orthometric heights that are consistent with official vertical datums"

NOS NGS 72, S2 Purpose. This is the HEDGED, OPERATIONAL formulation and the one to quote
(RECONSTRUCTION, 3 consecutive fragments; junctions after "combined with" and "produce values
consistent with the"):
  "The purpose of the GEOID18 hybrid geoid model is to provide geoid heights that can be combined
   with GPS-derived NAD 83 (2011) epoch 2010.00 ellipsoid heights to produce values consistent with
   the official vertical datum published orthometric heights on NGS Data Sheets."

NOS NGS 72, S2 Purpose, the definitional sentence - this is the sentence leg (c) needs
(RECONSTRUCTION, 2 consecutive fragments, junction after "published heights"):
  "Hybrid geoid models are created by constraining a gravimetric geoid model to published heights
   using GPS observations on leveled bench marks."

Corroboration, GEOID18 Technical Details page (RECONSTRUCTION, 2 consecutive fragments, junction
after "fit"):
  "In the second (hybridization) step, the gravimetric geoid model is warped to fit the existing GPS
   on bench mark data using least squares collocation (Moritz, 1980)."

And, on the same page (RECONSTRUCTION, 2 consecutive fragments, junction after "the published"):
  "The purpose of GEOID18 is to return a geoid height that is consistent with the published NAVD 88
   orthometric heights on NGS Data Sheets when used with GPS-derived NAD 83 (2011)"

Blueprint Part 2 (NOS NGS 64) S5, pp. 12-13, gives NGS's own definition of the term
(RECONSTRUCTION, 2 consecutive fragments, junction at the line break after "NAD 83 and"):
  "modified to fit data from GNSS, and leveling in NAD 83 and NAVD 88. This modified geoid would be
   called a \"hybrid geoid.\""
and, p. 13:
  "Hybrid geoids have served many NSRS users well, yielding accurate NAVD 88 heights from GNSS"

So: hybrid - yes, NGS's own word. Fitted to GPS on LEVELED bench marks - yes, NGS's own words
("constraining... to published heights using GPS observations on leveled bench marks", "warped to
fit"). Returns NAVD 88 - yes, that is stated as the model's PURPOSE, not an incidental property.

### (c) Does NGS state or print the MAGNITUDE of the NAVD 88 to geopotential/geoid difference?

YES. Three printed figures in two documents. Named, with units, denominator and location:

NUMBER 1 - 56.2 cm, NOS NGS 72 S6.1.1, p. 38, in the running text, and 56.22 cm in Table 13, p. 39.
(RECONSTRUCTION, 2 consecutive fragments, junction after "mostly driven by the offset"; the
report's own grammatical slip "which is a mostly driven" is preserved as served):
  "There is also a 56.2 cm bias present in the raw residuals, which is a mostly driven by the offset
   between the NAVD 88 datum and the W0 value for xGEOID19B."
  NUMERATOR CLASS: the MEAN of the RAW RESIDUALS at the GPSBM18 passive bench marks - i.e. published
  vertical-datum orthometric height minus (NAD 83(2011) ellipsoid height minus xGEOID19B GRAVIMETRIC
  geoid height), BEFORE the planar tilt-and-bias surface is removed and before hybridisation. It is
  therefore a NAVD 88 minus (gravimetric geoid referenced to xGEOID19B's W0) quantity. Units cm.
  DENOMINATOR: 32,357 BENCH MARKS in "CONUS, Canada, and Mexico" (Table 13, column "Number"). It is
  a count-weighted mean over marks, NOT an area-weighted mean over CONUS, and NOT a single-point
  offset. Near neighbours it is not: the CONUS-only row of the same table, 31,580 marks, mean
  56.05 cm, std. dev. 29.13 cm; and the PRVI row, 127 marks, mean MINUS 42.74 cm, std. dev. 2.99 cm.
  Table 13 headings as served: Number | Residuals | Min. [cm] | Max. [cm] | Mean [cm] | Std. Dev. [cm].

NUMBER 2 - 55 +/- 2 cm, NOS NGS 72 S6.1.1, p. 38. This is the HEDGED, CITED formulation and is the
one to quote in preference to the bare 56.2 cm (RECONSTRUCTION, 2 consecutive fragments; the cut
falls INSIDE the unit, between "m2" and "/s2", and the junction was verified there):
  "This agrees with one estimate for the separation, which puts NAVD 88 55 +/- 2 cm below the
   W0 = 62 636 856.0 m2/s2 surface (Bursa, et al 2004)."
  Note the hedges NGS itself uses: "one estimate", and the +/- 2 cm. The figure is ATTRIBUTED to
  Bursa et al. (2004), not measured by this report; the report's own measurement is NUMBER 1, and the
  report's claim is only that the two "agree".

NUMBER 3 - 50 cm bias and about 1 m tilt, Blueprint for 2022 Part 2 (NOS NGS 64), S4, p. 8, with
Figure 4-1 (RECONSTRUCTION, 2 consecutive fragments, junction after "and were tilted"):
  "This revealed that NAVD 88 heights were, on average, biased by 50 centimeters in CONUS and were
   tilted about 1 meter from the Pacific Northwest to the Southeast of CONUS."
  NUMERATOR CLASS: NAVD 88 published heights compared against GNSS ellipsoid heights minus an
  EXPERIMENTAL gravimetric geoid model built on GRACE/GOCE satellite gravity - i.e. NAVD 88 minus a
  geopotential-referenced surface. DENOMINATOR: the 50 cm is an AVERAGE OVER CONUS; the 1 m is a
  CORNER-TO-CORNER RANGE across CONUS (Pacific Northwest to Southeast), NOT a standard deviation and
  NOT a per-point difference. Near neighbour it is not: the Alaska figure in Figure 4-2, which NGS
  explicitly disclaims - "the directionality and degree of the tilt in Alaska is a byproduct of
  over-extrapolation in a data-sparse region" (S4, p. 10).

A fourth number exists and is NOT the claim's quantity. NOS NGS 72 S6.1.1 footnote 1
(RECONSTRUCTION, 4 consecutive fragments; junctions after "NAD83(2011)", "has been removed",
"to a NAD83(2011) version."):
  "There is also a continental tilt in the ellipsoid heights between IGS08 and NAD83(2011) that is
   similar to the NAVD 88 tilt; however, this geometric tilt has been removed with the transformation
   of xGEOID19B to a NAD83(2011) version. If not removed, the combined tilt is even more severe and
   approximately 2.4 m across CONUS."
  The 2.4 m is the COMBINED NAVD 88 tilt PLUS the IGS08-to-NAD83(2011) GEOMETRIC ellipsoid tilt. It
  is not the NAVD88-to-geopotential tilt and must not be cited as one.

Also printed, and also not the claim's quantity: the 29.4 cm standard deviation of the raw residuals
(S6.1.1; Table 13 gives 29.43 cm), which NGS attributes to the tilt - "For the CONUS-area, the raw
residuals have what first appears to be a very large standard deviation of 29.4 cm; however, this is
almost completely an artifact of the continental tilt in NAVD 88" (RECONSTRUCTION, 2 consecutive
fragments, junction after "29.4 cm;"). And the fit statistics, which measure the hybrid model's
agreement with the bench marks and NOT any datum separation: S7.1 Table 15, "The CONUS-wide standard
deviation of this residual is 1.39 cm", 1.27 cm CONUS-only (31,580 marks), 1.67 cm PRVI (127 marks),
mean 0.00 cm in each region.

### (d) Does NGS describe NAVD 88 as having a known offset or tilt relative to the geoid?

YES, in both reports, in NGS's own voice.

NOS NGS 72 S6.1.1, p. 38:
  "The raw residuals are most significantly influenced by the continental tilt present in the
   vertical datum."
  "...the offset between the NAVD 88 datum and the W0 value for xGEOID19B."
  "...this is almost completely an artifact of the continental tilt in NAVD 88."
NOS NGS 72 S4.1, on the method (as served, partial sentence):
  "the residuals obtained in (1) are contaminated with a continental tilt and bias that is estimated
   and removed"
Blueprint Part 2 S4, p. 8: "NAVD 88 heights were, on average, biased by 50 centimeters in CONUS".
Blueprint Part 2 S4, p. 9: "Therefore, it includes both the error in the NAVD 88 definition AND any
regional subsidence".

The S4.1 sentence is the load-bearing one for leg (c)'s mechanism: NGS states that the tilt and bias
between NAVD 88 and the gravimetric geoid are ESTIMATED AND REMOVED with a planar surface before
the gravimetric model is warped onto the bench marks. That is the hybridisation absorbing the datum
offset by construction.

### (e) Is the entry's definitional argument correct on NGS's own words, and does any NGS document supply a magnitude?

Definitional argument: CORRECT, with one wording caveat. NGS states the construction ("constraining
a gravimetric geoid model to published heights using GPS observations on leveled bench marks",
"warped to fit the existing GPS on bench mark data"), states the output ("return a geoid height that
is consistent with the published NAVD 88 orthometric heights on NGS Data Sheets"), and states that
the NAVD 88-to-gravimetric offset and tilt are removed by a fitted planar surface before that warp.
Nothing further is needed to get leg (c).

Magnitude: YES, and this is the finding that matters. The entry says no magnitude was asserted. The
GEOID18 technical report itself - the very document the entry says was never opened - prints
56.2 cm (S6.1.1; Table 13 mean 56.22 cm over 32,357 marks) and the hedged, cited 55 +/- 2 cm below
W0 = 62 636 856.0 m2/s2 (Bursa et al. 2004). Blueprint for 2022 Part 2 prints 50 cm average bias in
CONUS and about 1 m tilt Pacific Northwest to Southeast (S4, p. 8, Fig. 4-1).

## REGIME

NOS NGS 72, in its own words. POPULATION: GPSBM18, "A network of passive bench marks", where both an
ellipsoid height and a published vertical-datum orthometric height exist. UNIT OF ANALYSIS: the
individual bench mark; all statistics are counts of marks (32,357; 31,580; 127). OPERATING
CONDITION: NAD 83(2011) epoch 2010.00 ellipsoid heights, published NAVD 88 Data Sheet heights, and
the xGEOID19B gravimetric model transformed to a NAD83(2011) version. INSTRUMENT: GPS/GNSS
occupations on levelled marks, plus the gravimetric model; the hybridisation is least squares
collocation (Moritz, 1980). REGION: CONUS, Canada and Mexico marks in the main statistics; PRVI
reported separately; the regime is the official vertical datum of the NSRS, NAVD 88 in CONUS.
DOES THE CLAIM SIT INSIDE IT? For the definitional leg, yes - the regime IS "a hybrid model fitted
to levelled bench marks returning the datum's heights". For the magnitude, PARTLY: the 56.2 cm is
inside the regime but is specific to xGEOID19B's W0 and to the GPSBM18 mark population in
CONUS/Canada/Mexico.

NOS NGS 64 Blueprint Part 2. POPULATION/UNIT: CONUS as a whole and Alaska as a whole, by region, not
by mark. OPERATING CONDITION: a comparison of NAVD 88 against GNSS heights and an EXPERIMENTAL
gravimetric geoid built on GRACE/GOCE satellite gravity, made in or before 2017. THRESHOLD CATEGORY:
the report is a PLAN - it defines the forthcoming geopotential datum, its W0, and a 2.0 m2/s2
(about 20 cm GMSL) replacement trigger in S14.3. The 50 cm and 1 m ARE derived from data, not merely
announced; but they are derived against a 2017 experimental geoid, not against NAPGD2022 as
released. The claim sits inside the regime for the sign and order of magnitude, and OUTSIDE it for
any assertion about the released NAPGD2022/GEOID2022 numbers.

## DEFECTS FOUND

DEFECT 1 (narrows the entry's wording, not its substance). NO NGS SENTENCE SAYS GEOID18 "cannot
close a geopotential comparison", and I found no NGS sentence saying GEOID18 is "not an equipotential
surface" or "not a geopotential surface" in the sections I read. The negative is the ENTRY'S
INFERENCE from NGS's positive statements of construction and purpose. The inference is sound - a
surface warped onto NAVD 88 bench marks with the NAVD88-to-gravimetric tilt and bias removed cannot
also be the geopotential surface it was warped away from - but the entry should present it as an
inference from the quoted construction, not as an NGS assertion. Likewise I found NO sentence saying
the hybrid model "inherits" or "absorbs" NAVD 88's distortions; the report's framing is the opposite
in tone - the tilt and bias are "estimated and removed", with the removal applied to the GRAVIMETRIC
residuals so the final surface lands on NAVD 88.

DEFECT 2 (strikes part 2 of the claim). "Nobody has stated the magnitude" is FALSE as to the
literature. The magnitude is printed in the GEOID18 technical report itself (56.2 cm; 55 +/- 2 cm
below W0 = 62 636 856.0 m2/s2, Bursa et al. 2004) and in Blueprint for 2022 Part 2 (50 cm bias,
about 1 m tilt across CONUS). The claim can survive only in the much weaker form "neither adversary
stated a magnitude", which is a fact about the exchange, not about what is knowable.

DEFECT 3 (number hygiene, both directions, for whoever now cites a figure). The four printed numbers
are four DIFFERENT quantities and are one word apart in phrasing:
  - 56.2 cm: mean raw residual over 32,357 bench marks, NAVD 88 vs. xGEOID19B's W0. What it MISSES:
    any area not densely levelled (it is mark-count-weighted), Alaska, and PRVI - where the same
    table prints MINUS 42.74 cm, i.e. the OFFSET REVERSES SIGN outside CONUS. What it INCLUDES that
    a bare "NAVD 88 to geopotential" claim excludes: Canada and Mexico marks, and all NAVD 88
    levelling error and local subsidence at those marks, which Blueprint S4 p. 9 says explicitly is
    mixed in - "it includes both the error in the NAVD 88 definition AND any regional subsidence".
  - 55 +/- 2 cm: a third party's (Bursa et al. 2004) estimate of the datum-to-W0 separation that NGS
    quotes as agreeing with its own residual mean. Not an NGS measurement.
  - 50 cm / 1 m: regional average and corner-to-corner range over CONUS against a 2017 EXPERIMENTAL
    geoid. The 1 m is a range, not a dispersion; Alaska's apparent tilt is explicitly disclaimed as
    "a byproduct of over-extrapolation in a data-sparse region".
  - 2.4 m: NAVD 88 tilt PLUS the IGS08-to-NAD83(2011) geometric ellipsoid tilt, combined. NOT a
    NAVD88-to-geopotential figure. Anyone quoting 2.4 m for leg (c) would be wrong.
  And one trap: the 1.27 cm / 1.39 cm figures are the hybrid model's FIT to the bench marks. They
  are the smallest and most quotable numbers on the page and they say nothing about datum separation.

DEFECT 4 (limit of my check, not a negative finding). I did not open a NAPGD2022- or
GEOID2022-specific release document, so I cannot say what magnitude, if any, NGS prints for NAVD 88
against the AS-RELEASED geopotential datum. COULD NOT REACH ON BUDGET. The numbers above are against
xGEOID19B's W0 (2020) and a 2017 experimental geoid. That is sufficient for order of magnitude and
sign; it is not a citation for a NAPGD2022-specific figure.

DEFECT 5 (route provenance). Every quotation in this note arrived through the WebFetch summariser,
which caps verbatim return at roughly 125 characters. Each sentence longer than that is labelled a
RECONSTRUCTION with its fragment count and junction. I did not obtain raw PDF text, so a transcriber
should re-verify the two longest reconstructions (the S2 Purpose sentence, 3 fragments, and footnote
1, 4 fragments) against the PDF before they go into the entry as quotations.

## ROUTES THAT FAILED

None. One WebSearch restricted to noaa.gov located both technical reports from the entry's citation,
and all four WebFetch calls returned content on the first attempt: the NOAA Institutional Repository
PDF for NOS NGS 72 (two calls, different prompts, same URL - the 15-minute cache served the second),
the geodesy.noaa.gov GEOID18 Technical Details page, and geodesy.noaa.gov/PUBS_LIB for NOS NGS 64.
No Unpaywall, no PMC, no DOI resolution was needed - NOAA technical reports carry no DOI and are
served open from NOAA hosts. Budget remaining when I stopped: 1 WebFetch, 1 WebSearch.

## BEARING ON THE LEDGER ENTRY

SPLIT THE ENTRY. The two parts of the claim go opposite ways.

HOLD, and upgrade the sourcing, on the definitional part. Leg (c) is correct, and it no longer rests
on GPS World. Replace the trade-press citation with NOAA Technical Report NOS NGS 72, "GEOID 18",
Ahlgren, Scott, Zilkoski, Shaw and Paudel, May 2020, S2 Purpose - "Hybrid geoid models are created
by constraining a gravimetric geoid model to published heights using GPS observations on leveled
bench marks" - together with S4.1 on the planar tilt-and-bias removal, and NOS NGS 64 S5 for NGS's
own definition of "hybrid geoid". NARROW the wording per DEFECT 1: NGS nowhere says the model
"cannot close a geopotential comparison", so state that as the entry's inference from NGS's quoted
construction and purpose rather than as an NGS assertion. A reviewer who grants the construction
must grant the inference, so the narrowing costs the attack nothing.

STRIKE the evidential part. "Nobody has stated the magnitude of the NAVD88-to-geopotential
difference" is wrong about the literature and should be struck, not narrowed, because the magnitude
is printed in the same report that grounds the definitional leg. Convert it to a RESOLVED CITATION
carrying the hedged formulation: NAVD 88 sits roughly half a metre below the geopotential surface,
with NGS's own residual mean 56.2 cm (NOS NGS 72, S6.1.1, Table 13, 32,357 bench marks) agreeing
with "one estimate for the separation, which puts NAVD 88 55 +/- 2 cm below the
W0 = 62 636 856.0 m2/s2 surface (Bursa, et al 2004)", and with a continental tilt of about 1 m
Pacific Northwest to Southeast across CONUS (NOS NGS 64, S4, p. 8, Fig. 4-1), 50 cm average CONUS
bias in the same sentence. Carry the +/- 2 cm and the word "one estimate" through; do not round
56.2 to "about half a metre" without saying which number you rounded.

NO PROMOTION CONDITION IS NEEDED for the magnitude - it is answered. One narrow promotion condition
survives from DEFECT 4: whether NGS has since printed a NAVD88-to-NAPGD2022 figure for the datum as
released, rather than against xGEOID19B's W0 and the 2017 experimental geoid. That is a one-fetch
question for whoever next opens the NAPGD2022 pages.

AND A WARNING for the entry's margins, from DEFECT 3: the sign of the offset is not national. The
same Table 13 that prints +56.22 cm for CONUS/Canada/Mexico prints MINUS 42.74 cm for Puerto Rico
and the U.S. Virgin Islands. Any version of the attack that cites "a ~50 cm bias" as a property of
NAVD 88 everywhere is overreaching its own source, and the 2.4 m footnote figure is a combined
NAVD88-plus-ellipsoid tilt that must not be cited for leg (c) at all.
