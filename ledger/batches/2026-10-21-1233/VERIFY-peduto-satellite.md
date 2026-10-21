# VERIFY — Peduto et al., satellite displacement data and building damage in Dutch municipalities

Checker note. Fresh context. Reports what the source says; does not adjudicate the question.

## Citation as the source itself serves it

Taken from the PDF's own front matter (title block and running footer), not from any short form:

> Dario Peduto, Mandy Korff, Gianfranco Nicodemo, Antonio Marchese, Settimio Ferlisi (corresponding author).
> "Empirical fragility curves for settlement-affected buildings: analysis of different intensity parameters
> for seven hundred masonry buildings in The Netherlands."
> *Soils and Foundations* **59** (2019) 380–397. DOI 10.1016/j.sandf.2018.12.009.
> Received 17 April 2018; revised 29 October 2018; accepted 3 December 2018; available online 6 March 2019.

Affiliations as served: Peduto, Nicodemo, Marchese, Ferlisi — University of Salerno, Department of Civil
Engineering, Italy. Korff — Deltares, Delft, and Delft University of Technology, Faculty of Civil Engineering
and Geosciences.

Issue number is **not stated** on the served front matter (volume and page range are). Do not invent one.

Note the venue: **Soils and Foundations** (Elsevier / Japanese Geotechnical Society). It is NOT any of the four
venues the task guessed (Engineering Geology, BoEGE, Structure and Infrastructure Engineering, JPCF). The
author set, the Dutch municipalities and the ~700-building sample all match, so this is the paper meant, but
anyone who recorded the venue from memory got it wrong.

## Read level

**Full text**, read through WebFetch's summarising reader on the open-access author copy in the University of
Salerno institutional repository (IRIS):

- https://www.iris.unisa.it/bitstream/11386/4721876/2/Peduto%20et%20al_2019_S%26F.pdf (full text, served)
- https://www.iris.unisa.it/handle/11386/4721876 (record page; gave title, authors, year, DOI only — it does
  NOT state journal, volume or pages, so front matter was taken from the PDF per the front-matter rule)

### Routes that failed

None. No fetch or search was refused, no host blocked, no paywall encountered. I went straight from one search
to the repository PDF; doi.org, sciencedirect.com, Crossref, PMC and Europe PMC were never needed and were not
tried. Budget used: 1 search, 5 fetches (cap reached — this is why no second independent copy was cross-read).

### Read-level caveats that qualify every quotation below

1. I read the PDF **through the summarising reader**, not with my own eyes on the glyphs. Verbatim strings
   below are as that reader served them. They are consistent across calls and grammatically continuous, but
   they are second-hand transcription of a PDF text layer.
2. **OCR damage is present and I am reproducing it rather than correcting it.** The text layer renders
   "façades" as `fac¸ades`, and the reader reported that **some exponents in Table 3 came through garbled**.
   Any Table 3 number below carrying an exponent should be re-read off the published PDF before use.
3. The **abstract was not obtainable verbatim**: the reader refused it against its ~125-character quotation
   cap and served a paraphrase instead. I did not spend a further fetch on segmenting it, because no lettered
   claim turns on abstract wording. Treat the abstract as unquoted, not as unquotable.
4. Table 3 was read as a summary of selected rows, not transcribed in full.

## (a) Full citation from its own front matter

**Holds, with one correction and one gap.**

Authors in order: Peduto, Korff, Nicodemo, Marchese, Ferlisi — five authors; Ferlisi is corresponding author
and is the one most often dropped from short forms. Exact title as served (note the lower-case "analysis" in
the PDF's own title block; the IRIS record page capitalises it as "Analysis" — the two disagree, and the PDF
is the front matter): "Empirical fragility curves for settlement-affected buildings: analysis of different
intensity parameters for seven hundred masonry buildings in The Netherlands".

Journal *Soils and Foundations*, volume 59, pages 380–397, 2019, DOI 10.1016/j.sandf.2018.12.009. Issue number
not served. Venue is **not** Engineering Geology or any of the other guessed venues.

## (b) Join to surveyed damage at the individual-building unit, and n

**Yes, at the individual-building unit, n = 706.**

The paper's own statement of the total, as an **ordered two-fragment reconstruction** (2 fragments, consecutive,
junction verified by the clause break after the comma):

> "In the present study, 706 masonry buildings with shallow and (mainly wooden) piled foundations," +
> "belonging to four municipalities, are analysed (Fig. 4)."

So the "roughly 700" in the title ("seven hundred masonry buildings") is **706** in the text. Per-area counts as
served: Zaanstad 81, Rotterdam 183, Schiedam 310 (104 shallow / 206 piled), Dordrecht 132 (76 shallow / 56
piled). Those sum to 706. Foundation split overall: 180 shallow, 526 piled.

Unit of analysis is the individual building on both sides of the join:

- Damage side: one severity level per building, from visual survey — "only one level was assumed for a single
  building", and the level "refers to the damage visible only from the outside on building fac¸ades"
  (OCR as served).
- Displacement side: persistent-scatterer points within a **2 m buffer** of the building perimeter are
  "associated with that building", and settlement is interpolated over each building on a 2 m × 2 m grid, from
  which a settlement profile is extracted per building.

Timing of the two sides differs and this matters for the join: DInSAR covers **2009–2014**, the damage surveys
were carried out in **2015–2016**. The damage is therefore observed after the displacement window, not
contemporaneously with it.

## (c) Skempton–MacDonald measurand, and Burland–Wroth at its own definition

**Partly. Both pairs are cited; only Burland and Wroth is used at the pair's own definition, and even then the
paper runs a second, deliberately simplified variant alongside it.**

The paper's three subsidence-related intensity parameters (it calls them SRI parameters), in its own words
(short fragments as served):

1. "differential settlement dq is computed along the profile as the difference between the maximum" +
   "and the minimum values of the recorded settlements" (2 fragments, consecutive)
2. "the rotation (h), or slope, is assumed as h = dq/Lq" — "where Lq indicates the distance at the foundation
   level between the two points where dq was computed"
   (`dq` and `h` are the reader's rendering of the Greek symbols δ and θ; read as δρ/Δρ-style differential
   settlement and rotation θ.)
3. "the deflection ratio is obtained as D/L according to the definitions provided by Burland and Wroth (1974)"
   — "where D is the displacement of a point relative to the line connecting two reference points"

Burland and Wroth is used **twice over, at two different definitions**, and the paper is explicit that only one
of them is theirs:

- "the standard/original approach for the deflection ratio – according to the definition provided by Burland
  and Wroth" — this is D2/L2, taken at the **inflection points** of the settlement profile.
- "In the simplified approach, the deflection ratio is given by D1/L1" — taken at the **intersection points**
  of the settlement profile, which is the paper's own simplification, not Burland and Wroth's definition.

On Skempton and MacDonald (1956): it **is cited**, in Section 2 among the limiting-value literature, and again
in the Discussion alongside Grant et al. (1974) and Polshin and Tokar (1957) as a source of literature limiting
values. But the paper's measurand is a **DInSAR-derived profile slope over the building footprint**
(θ = δ/L between the max and min settlement points inside a 2 m buffer), not Skempton and MacDonald's angular
distortion between adjacent foundation points of a frame. Anyone citing this paper as applying the
Skempton–MacDonald measurand is outside the regime the paper establishes.

Damage classification is **Burland et al. (1977)**, not Skempton–MacDonald and not Burland–Wroth:

> "The LTSM involves classifying the damage severity according to the system proposed by Burland et al. (1977)"
> "the damage severity level assigned on the basis of the classification system provided by Burland et al. (1977)"

Categories D0 negligible, D1 very slight, D2 slight (aesthetic); D3 moderate, D4 severe (loss of
functionality); D5 very severe (stability compromised). **D4 and D5 were merged into a single D4-D5 class
because too few buildings fell in each.** Boscardin and Cording (1989) and Burland (1995) are cited as the
basis of the LTSM. Rankin does not appear.

## (d) Discrimination statistics or fragility parameters

**Fragility parameters only. No discrimination statistics of any kind.**

Fragility: lognormal cumulative form (Eq. 1) — the probability of reaching or exceeding damage level Di is the
standard normal CDF of (1/βi)·ln(SRI/SRIi). Parameters fitted by **maximum likelihood** (Eqs. 2–3) following
Shinozuka et al. (2003). The paper constrains the dispersion: "a unique b value is adopted in order to have
coherent probabilities for the different damage levels" (`b` = β as served).

Table 3 gives median SRI and β per parameter, per foundation type, per damage level. Selected rows as served
(**exponent-bearing entries in this table were reported garbled — re-read the published PDF before quoting
any rotation or deflection-ratio median**):

- Differential settlement, **shallow** foundations: β = 0.99; medians D1 9.04 mm, D2 25.06 mm, D3 41.53 mm.
- Differential settlement, **piled** foundations: β = 0.57; medians D1 12.57 mm, D2 23.26 mm, D3 36.81 mm,
  D4-D5 48.60 mm.
- Rotation and the two deflection ratios (D1/L1, D2/L2) also appear in Table 3, with β between 1.50 and 6.04.

Explicitly searched for and **absent** from the paper: "ROC", "AUC", "sensitivity", "specificity",
"predictive value", "false positive", "confusion matrix". The word "accuracy" appears only for **DInSAR
measurement accuracy** against levelling (Section 3), never for classification performance — a different
quantity, and a reader who sees "accuracy" here and reads it as diagnostic accuracy has misread it.

No goodness-of-fit statistic is reported either: no maximised log-likelihood, R², chi-square, K-S, or AIC. The
only reported dispersion-type quantities are descriptive (means, standard deviations, coefficients of variation
in Table 2) plus the DInSAR-vs-levelling check (mean 0.85 mm/yr, SD 0.55 mm/yr), which validates the **input
data**, not the fitted curves.

## (e) Free continent-scale service or bespoke processing, and how many municipalities

**Bespoke commercial processing. Four municipalities.**

- Sensor: **TerraSAR-X**, stripmap mode. (COSMO-SkyMed is mentioned as suitable for this kind of monitoring;
  the analysed data are TerraSAR-X.)
- Technique: **Persistent Scatterer Interferometry (PSI)**, processed with the "commercial chain 'Antares'"
  of **SkyGeo Netherlands B.V.** External DEM: SRTM90.
- Stack as served: **285 images, 2009–2014** (133 ascending, 162 descending). *Internal inconsistency flagged,
  not resolved:* the Zaanstad text was read as giving its 162 images as ascending-only, which conflicts with
  the Section 3 split. I could not re-check this within the fetch cap; verify against the published PDF.
- Levelling data (the accuracy comparator) start in 2004. Damage surveys 2015–2016.
- **No free continent-scale product is used.** No EGMS, no Copernicus displacement service. This is expected
  and not a criticism: the paper is from 2019 and EGMS first published in 2022, so EGMS was not available to
  these authors. A claim that this paper demonstrates what EGMS can do is outside its regime.

Municipalities: **four** — Zaanstad, Rotterdam (two sub-areas), Schiedam (a ~2 km² neighbourhood), Dordrecht.

## (f) Scope — the regime the result is established in

Type of source: **primary empirical study** (a case-study-based derivation of empirical fragility curves). Not
a review, protocol, guideline or editorial. The damage classification and the LTSM are **attributed by this
paper to others** (Burland et al. 1977; Boscardin and Cording 1989; Burland 1995), and the fitting method to
Shinozuka et al. (2003); none of those is this paper's contribution.

Regime in which the result is established:

- **Population / building stock:** 706 **low-rise masonry** buildings, 2–3 floors, mainly brick with lime
  mortar, "ages of which date back to the beginning of the 19th century up to about the 1980s".
- **Foundations:** 180 shallow, 526 piled, the piles "mainly wooden". Zaanstad and Rotterdam entirely piled;
  Schiedam and Dordrecht mixed. Curves are fitted **separately by foundation type**, so a parameter set is
  specific to shallow or to piled.
- **Country / setting:** four Dutch urban municipalities on **soft soils** (subsidence-affected). Not a
  general statement about European or global building stock.
- **Period and instrument:** TerraSAR-X PSI displacement 2009–2014; exterior visual damage survey 2015–2016.
- **Endpoint / estimand:** probability of **reaching or exceeding** a Burland et al. (1977) damage severity
  level, as a lognormal function of one subsidence-related intensity parameter. Comparator is between
  **intensity parameters** (which of δ, θ, D1/L1, D2/L2 best organises the observed damage) and between
  foundation types — **not** a treatment comparison and not a comparison against a reference standard.
- **Damage ascertainment limit:** exterior façades only, one level per building, D4 and D5 merged.

**Does it anywhere evaluate the classical thresholds as a screening TEST? No.**

The nearest thing is a **qualitative** remark in the Discussion that the fitted curves saturate at
implausible intensity values relative to literature limits:

> "the probability of reaching or exceeding a given damage severity level can attain the unit value (certainty)"
> "with respect to the limiting values proposed in the literature"
> "This adversely affects the use of the obtained fragility curves for forecasting purposes."

That is the paper observing a **limitation of its own curves** by reference to literature limits (Grant et al.
1974; Polshin and Tokar 1957; Skempton and MacDonald 1956). It is not a test evaluation: no threshold is
applied as a classifier, no building is scored as a true/false positive, and no sensitivity, specificity, PPV
or ROC is computed anywhere (see (d)). The only other external comparison is with the Zhang and Ng (2005)
curves. Burland and Wroth (1974) is cited for the **deflection-ratio definition**, not as a threshold under
test.

So on (f): the gap — classical limiting thresholds never evaluated as a screening test, with discrimination
statistics, on a building-level damage-surveyed sample — is **genuinely not closed by this paper**, and the
paper's silence here is silence, not denial. What the paper does supply is the ingredients such a test would
need (706 buildings, per-building intensity, per-building surveyed damage, by foundation type).

## Defects

1. **Venue.** The paper is in *Soils and Foundations* 59:380–397 (2019), not in Engineering Geology, BoEGE,
   Structure and Infrastructure Engineering or JPCF. Any ledger entry carrying one of those venues is wrong.
2. **Author count.** Five authors; **Ferlisi** (corresponding) is the one dropped by short forms. Cite all five.
3. **n is 706, not 700.** The title's "seven hundred" is a round number; the text says 706. Per-area 81 / 183 /
   310 / 132.
4. **Skempton–MacDonald is cited, not applied as a measurand.** The paper's rotation is a DInSAR profile slope
   δ/L across a building footprint, not S–M angular distortion between adjacent frame points. Treating this
   paper as validating the S–M measurand is a regime error.
5. **Burland–Wroth is used at two definitions, one of which is not Burland–Wroth's.** D2/L2 at inflection
   points is "according to the definition provided by Burland and Wroth"; D1/L1 at intersection points is the
   paper's own "simplified approach". A claim about "the Burland–Wroth deflection ratio" in this paper must say
   which.
6. **Damage criteria are Burland et al. (1977), with D4 and D5 merged** for want of cases. A claim that
   distinguishes D4 from D5 using this paper is unsupported.
7. **No discrimination statistics exist in this paper.** ROC, AUC, sensitivity, specificity, PPV, false
   positives, confusion matrix: all absent. The word "accuracy" in Section 3 is *DInSAR measurement* accuracy
   against levelling, not classification accuracy — an easy and consequential misread.
8. **No goodness-of-fit statistic** is reported for the fragility fits, and β is **constrained to a single
   value per parameter/foundation set** by the authors' own choice, so the dispersions are not free estimates.
9. **No EGMS, no free continent-scale service** — bespoke TerraSAR-X PSI via SkyGeo's "Antares" chain. EGMS did
   not exist in 2019, so citing this paper for what a free continent-scale service can deliver is outside its
   regime.
10. **Displacement and damage are not contemporaneous**: PSI 2009–2014, surveys 2015–2016. A per-building join
    across that offset is the paper's design, and any causal reading should carry it.
11. **Damage is exterior-façade-only, one level per building.** Interior and foundation damage are outside the
    ascertainment.
12. **OCR damage in the served text layer, reproduced not corrected**: "fac¸ades"; exponents in **Table 3**
    reported garbled. Re-read Table 3 off the published PDF before quoting any rotation or deflection-ratio
    median.
13. **Unresolved internal inconsistency on the image stack**: Section 3's 133 ascending / 162 descending split
    versus the Zaanstad text's 162 ascending. Flagged, not resolved — fetch cap reached.
14. **Checker-side limit**: read through a summarising reader at a ~125-character quotation cap, so all
    "verbatim" strings here are that reader's transcription; the **abstract was not obtained verbatim at all**
    (paraphrase only), and Table 3 was read as selected rows rather than transcribed whole. Nothing was
    cross-read against a second copy (ScienceDirect) because the fetch cap was spent.
