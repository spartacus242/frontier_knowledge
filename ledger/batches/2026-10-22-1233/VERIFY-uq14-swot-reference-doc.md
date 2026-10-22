# VERIFY - SWOT's mean-tide EGM2008 statement holds; but SWOT supplies the tide transformation and prints the 12.9 cm itself
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261022-14, as carried: that SWOT's reference document states heights are referenced to the
mean-tide EGM2008 geoid and **assigns the transformation to any other vertical reference to the
data user**; and that the mean-tide geoid exceeds the tide-free geoid by about 12.9 cm at the
equator, **which the entry labels as its own algebraic consequence** of the stated tide convention.

Two legs are at issue, and they come apart. The geoid/tide-convention leg holds verbatim. The
"assigns the transformation to the user" leg and the "our own arithmetic" label both fail against
the document.

## READ LEVEL

**Source actually read - FULL TEXT (as served by the summariser, three passes):**
"SWOT Reference Frame, Geodetic Coordinates, Reference Surfaces, and Tides", National Aeronautics
and Space Administration / Jet Propulsion Laboratory / California Institute of Technology,
Pasadena, California. Dated **May 19, 2025**. **No document number and no named authors in the
front matter** - the front matter names only the issuing organisations. It is a **slide deck**,
cited by slide-footer page number below.
URL: https://archive.podaac.earthdata.nasa.gov/podaac-ops-cumulus-docs/web-misc/swot_mission_docs/SWOT_ReferenceFrameAndSurfaces_20250519.pdf
Pages 10, 11, 12, 15 and 21 were read closely and quoted; the remainder at summary level, so call
the deck PARTIAL-to-FULL and the five quoted pages FULL TEXT.

No DOI exists for this item (NASA/JPL mission documentation, not a journal article). The only
author-bearing citation inside it is its own reference for EGM2008: "[Pavlis et al., 2012]" (p. 10).

**SWOT User Handbook and the L2_HR_RiverSP Product Description Document / ATBD - COULD NOT READ.**
Routes attempted and failed are listed below. This is COULD NOT READ, **not** NOT FOUND: the deck
itself cites a User Handbook section (see the junction warning below), so the handbook exists and
may well carry further material. Nothing below should be read as a finding about the handbook's or
the PDD's contents.

**Quotation caveat (reconstruction).** All quotations are as the summariser served them under a
~125-character verbatim cap, requested as ordered consecutive segments. The segments on pages 10,
11 and 15 are assembled only from consecutive returns. The summariser stated it "rejoined [bullets
split across lines] with single spaces", so line-level whitespace is reconstructed, not original.

## WHAT THE SOURCE SAYS (quotations as served)

**(a) Geoid and tide convention - CONFIRMED.**

- p. 10, slide title: "Reported Geoid Height on SWOT Products is in Mean-Tide System"
- p. 10: "Mean-Tide Geoid height is always used on SWOT products."
- p. 10: "SWOT adopts Mean-Tide EGM2008 through Version D products."
- p. 10: "Follows convention adopted by altimetry products."
- p. 15: "Reported WSE on SWOT products through Version D referenced to mean-tide EGM08 geoid."

Note the hedge that the entry's phrasing drops: the commitment is scoped **"through Version D
products"**, twice. It is not stated as an open-ended mission-wide convention.

Supporting tide statements, p. 12: "Models for solid Earth and ocean tide heights on SWOT products
do not include contribution from the permanent tide." / "Reported solid Earth and ocean tide
heights on SWOT products have zero mean over time at a particular position."

**(b) Who owns the transformation - CLAIM TOO STRONG. The document supplies the transformation.**

The user-responsibility sentences do exist:

- p. 15: "If necessary, adjust independent data to use consistent reference static surface."
- p. 21 (slide title "Conclusions"): "User may need to convert or transform one or both data sets
  to reach this common representation."
- p. 21: "Users are responsible for determining the representations of their independent data to
  which SWOT is compared."

But read the grammar on both sides of that cut. What the user is made responsible for is
**"determining the representations of their independent data"** - i.e. knowing what surface their
own data sits on. It is not the transformation arithmetic, because the deck hands that over
explicitly, with equations:

- p. 10: "Mean-Tide Geoid Height = Tide-Free Geoid Height + 𝛥h"
- p. 10: "𝛥h = (1.0 + k2)*Hperm*sqrt(5/(4*𝜋))*(1.5*sin(𝜃)*sin(𝜃) - 0.5)"
- p. 10: "Hperm = -0.31460 m, k2 = 0.3, 𝜃 = geocentric latitude."
- p. 10: "NOTE: Has been applied using geodetic latitude in SWOT products through Version D, which"
  / "results with < 1.3 mm error."
- p. 15, under "Examples:": "If independent WSE data referenced to GeoidX, say WSE(GeoidX):" /
  "WSE (mean-tide EGM08 geoid) = WSE (GeoidX) + GeoidX – Mean-Tide-EGM08"
- p. 15: "If independent WSE data referenced to Tide-Free EGM2008:" /
  "WSE (mean-tide EGM08 geoid) = WSE (tide-free EGM08 geoid) - 𝛥h"
- p. 15: "Where 𝛥h is as shown on slide 10. See section 11.3.1 of User Handbook."

So SWOT does **not** assign "the transformation to any other vertical reference" to the user. It
publishes the closed-form permanent-tide transformation, its constants, its error bound
(< 1.3 mm), and two worked conversion identities, and points to a handbook section for more.

**Junction warning on that last quote.** An earlier pass over the same page returned the handbook
pointer as "User Handbook Sections 3.1.24 and 3.1.25"; the verbatim pass returned "section 11.3.1
of User Handbook". The two passes disagree and I could not open the handbook to adjudicate. Treat
the section number as UNRESOLVED; the existence of a handbook pointer is what is established.

**(c) The 12.9 cm figure - IT IS PRINTED IN THE SOURCE. The entry's "own arithmetic" label is wrong.**

- p. 11, slide title: "Difference Between Mean-Tide and Tide-Free Geoid Height"
- p. 11: "At equator:"
- p. 11: "Mean-Tide Geoid height larger than Tide-Free Geoid height by 12.9 cm."
- p. 11, next bullet: "Water surface elevation relative to mean-tide geoid smaller than relative to
  tide-free geoid."

Named, with location: **12.9 cm, printed as a bullet on slide 11**, units centimetres, no stated
uncertainty. This is a PUBLISHED number in the cited document, not a derivation the ledger owns.

Numerator class and denominator, as the rules require. **Numerator class:** the difference of two
**geoid heights** - mean-tide geoid height minus tide-free EGM2008 geoid height. It is a difference
of *static reference surfaces*, and it expressly **excludes** the time-varying solid-Earth and ocean
tide heights, which p. 12 says carry no permanent-tide contribution and "have zero mean over time
at a particular position". **Denominator / evaluation point:** the **equator only** (𝜃 = 0), a
single latitude, not a global mean and not an RMS over the swath. Overlap in both directions: the
source's quantity **misses** everything off the equator - the printed 12.9 cm is the extremum of a
latitude-dependent function, so any claim stated as a flat offset is wrong away from 𝜃 = 0; and it
**includes** a pure reference-surface bookkeeping term that the claim's phrase "about 12.9 cm"
could be mistaken for a water-surface-elevation *error* or bias, which it is not - p. 11's own next
bullet converts it into a signed statement about WSE, in the opposite direction.

MY OWN ARITHMETIC, for completeness only: substituting the printed constants at 𝜃 = 0 gives
𝛥h = 1.3 x (-0.31460 m) x sqrt(5/(4𝜋)) x (-0.5) = +0.1290 m, i.e. 12.9 cm, reproducing the printed
value. Carrying the source's stated uncertainty: the deck's only stated error on this quantity is
the "< 1.3 mm" from applying 𝛥h with geodetic rather than geocentric latitude. So the figure is
both printed and independently derivable - but it is printed, and that is what governs.

**(d) Conversion to a national levelling datum - ABSENT FROM THIS DOCUMENT; UNCHECKED ELSEWHERE.**

Across three passes the document supplies **no** conversion, offset table or transformation to any
national or local levelling/vertical datum - no NAVD88, no EGM96, no country-specific
geoid-to-orthometric-height conversion. The deck "does not mention a national or local levelling
datum" at all. Its conversions stay inside SWOT's own surfaces: WGS84 ellipsoid, mean-tide EGM2008
geoid, ITRF14, mean sea surface, and the permanent-/solid-Earth-tide treatments. Note also that the
p. 15 identity "+ GeoidX – Mean-Tide-EGM08" is a *schema*: the user must obtain the GeoidX field
themselves, and the deck supplies no such field.

I cannot extend this to "SWOT nowhere supplies one", because the User Handbook and the RiverSP PDD
are COULD NOT READ.

## REGIME

The source's regime, in its own words: the unit of analysis is **SWOT product variables** - reported
geoid height, reported water surface elevation (WSE), and reported solid-Earth/ocean/load/pole tide
heights. The operating condition is scoped twice to **"SWOT products through Version D"**. The
reference frames are WGS84 geodetic coordinates and ITRF14; the geoid is "Tide-Free EGM2008
distributed by National Geospatial-Intelligence Agency (NGA)" "[Pavlis et al., 2012]", converted to
mean-tide. The purpose of the operative slides is stated on p. 15: "Comparing SWOT Measurements to
Independent Data: Use the Same Reference Static Surface" - i.e. inter-comparison of SWOT against
other geodetic/altimetric data.

Does the claim sit inside that regime? The geoid-and-tide-convention leg: **yes, squarely**, except
that the claim drops the "through Version D" scope. The 12.9 cm leg: **yes**, and it is printed. The
"assigns the transformation to any other vertical reference to the data user" leg: **it sits
outside the regime in the direction that defeats it**. The deck is about reconciling static
geodetic surfaces, and within that scope it *supplies* the transformations; it is simply silent on
national levelling networks. A document silent on national datums has not "assigned" them to the
user - and its explicit user-responsibility sentence is about identifying one's own data's
representation, not about performing an unsupplied conversion.

## DEFECTS FOUND

1. **The 12.9 cm is published, not the ledger's own algebra.** The entry marks it as "its own
   algebraic consequence of the stated tide convention". It is a printed bullet on slide 11 of the
   cited document. The entry must drop that label and cite the figure. (This makes the number
   *stronger*, but the provenance claim as written is false.)
2. **"Assigns the transformation to any other vertical reference to the data user" is not supported
   and is contradicted in part.** The document gives the mean-tide/tide-free transformation in
   closed form with constants and an error bound (p. 10), plus two worked WSE conversion identities
   (p. 15), plus a handbook pointer. The un-owned thing is narrower: a bridge to a *national or
   local levelling datum*, and the GeoidX field in the p. 15 identity.
3. **Citation front matter is wrong.** The entry cites "The SWOT product description / algorithm
   theoretical basis document or user handbook for the river and lake (or raster) products". The
   statements verified here are in none of those. They are in a separately titled mission deck,
   **"SWOT Reference Frame, Geodetic Coordinates, Reference Surfaces, and Tides", NASA/JPL/Caltech,
   May 19, 2025**, with **no document number, no revision letter and no named authors**, served from
   archive.podaac.earthdata.nasa.gov (not podaac.jpl.nasa.gov). The entry should cite that document
   and page numbers, or else actually verify the PDD/handbook.
4. **Dropped scope hedge.** Both geoid statements are qualified "through Version D products". The
   claim states the convention unconditionally. Per the hedged-formulation rule, the scoped wording
   is the one to carry - it also implies the convention may change after Version D.
5. **Unstated latitude dependence.** "about 12.9 cm at the equator" is correct as far as it goes,
   but the entry should not be read as a constant offset: the printed 𝛥h is a function of latitude
   and the equator is its extremum.
6. **Unresolved internal pointer.** The handbook section cited on p. 15 came back as "11.3.1" in one
   pass and "3.1.24 and 3.1.25" in another. Do not quote either as settled.

## ROUTES THAT FAILED

- `https://archive.podaac.earthdata.nasa.gov/podaac-ops-cumulus-docs/web-misc/swot_mission_docs/`
  - not a browsable index; WebFetch returned `client_error` with nothing retrieved. So I could not
  enumerate the handbook or PDD PDFs sitting beside the deck.
- `https://www.earthdata.nasa.gov/data/catalog/pocloud-swot-l2-hr-riversp-d-d` - reached, but
  carries **no** handbook, PDD or ATBD link; only two sub-collection links. Its own vertical-datum
  text is thin and does not name EGM2008: "Water surface elevations are referenced to the WGS84
  ellipsoid and are corrected for geoid height" / "and solid Earth, load, and pole tides."
- WebSearch for `"SWOT Product Description" "L2_HR_RiverSP" PDF geoid height "EGM2008" vertical
  datum` returned no PDD or handbook PDF - only catalogue and third-party pages.
- Budget exhausted at 5 fetches / 2 searches at this point. I deliberately did not spend the last
  fetch discovering a PDD URL I would then have had no fetch left to read. **The SWOT User Handbook
  and the RiverSP PDD/ATBD are therefore COULD NOT CHECK**, and their silence is evidence in
  neither direction.

## BEARING ON THE LEDGER ENTRY

**Sub-claim (a): HOLDS**, verbatim, with the "through Version D" scope restored.
**Sub-claim (b): FAILS AS WRITTEN.** The document supplies the transformation rather than assigning
it. The user is made responsible for "determining the representations of their independent data",
which is a different and much weaker burden.
**Sub-claim (c): THE ENTRY'S OWN LABEL FAILS.** 12.9 cm is printed on slide 11. Cite it.
**Sub-claim (d): NOT IN THIS DOCUMENT**, and COULD NOT CHECK for the handbook/PDD.
**Sub-claim (e):** the bridging leg is **not** un-owned in SWOT's own words as a whole. It splits
cleanly, and the entry currently asserts the wrong half:

- geoid-to-geoid and tide-free-to-mean-tide: **OWNED by SWOT** - equations, constants, error bound,
  worked examples, handbook pointer.
- **geoid to any national or local levelling datum: not addressed anywhere in the document read.**
  That is the only genuinely un-owned leg, and the deck does not even assign it - it is silent.

So the fatal clause cannot stand on "SWOT assigns the transformation to the data user". It can
stand only on a narrowed form: *SWOT reports WSE on the mean-tide EGM2008 geoid and supplies
conversions among geodetic reference surfaces, but supplies no bridge to national levelling
datums*. Whether even that narrow form survives depends on the User Handbook, which I could not
read - section "11.3.1" (or "3.1.24/3.1.25") is precisely where such material would live.

**Recommendation: NARROW, and convert the residue to a promotion condition.** Strike the "assigns
the transformation to the data user" leg; strike the "own algebraic consequence" label and cite
slide 11 for 12.9 cm; fix the citation to the May 19, 2025 reference-frame deck with page numbers;
restore the "through Version D" hedge. Promotion condition: a read of the SWOT User Handbook at the
cited section establishing that no national-levelling-datum conversion is supplied there either.
Until that read happens, the narrowed clause is supported on this document but not closed.
