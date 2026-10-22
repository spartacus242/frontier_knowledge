# VERIFY - HITRAN2024/HITRAN2020 merge policy: no single-source rule is stated anywhere, and the "lowest uncertainty" sentence is cut mid-clause

Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-22.

Budget overage declared up front: the brief allowed 5 fetches. Six WebFetch calls were issued. Four returned document text; one (`https://hitran.org/media/refs/HITRAN2020.pdf`, a path guessed before the search) returned a site `client_error` with nothing retrieved; one (offset 150000 on the 2024 PDF) returned only the notice that the page text is 85,320 characters long, which is itself the finding that fixes my read level. The one search was spent recovering the correct HITRAN2020 filename (`HITRAN-2020.pdf`, with a hyphen).

## CLAIM

That the compilation's merge policy selects a single source per parameter ("n=1 by construction"), and whether that policy is stated for more than one molecule.

Sub-claims as put to me: (a) read level and route per source; (b) does the 2024 document state a merge policy per molecule, quoted for as many molecules as it gives; (c) is a single-source selection policy stated for molecules other than H2O; (d) confirm the HITRAN2020 select/average/scale quotations and the 1.1217 factor with locations; (e) does either document print an AGGREGATE count or distribution of sources per parameter - the candidate's quantity; (f) does either resolve a per-parameter reference index end-to-end to a primary source.

## READ LEVEL

**Source 1 - the 2024 release document, which the entry carries only as "HITRAN-2024.pdf at hitran.org/media/refs/".**

Front matter as printed, which the entry does not carry and should: I.E. Gordon, L.S. Rothman, R.J. Hargreaves, F.M. Gomez, T. Bertin, C. Hill, R.V. Kochanov, Y. Tan, P. Wcislo, V. Yu. Makhnev, P.F. Bernath, M. Birk, V. Boudon, A. Campargue, A. Coustenis, B.J. Drouin, R.R. Gamache, J.T. Hodges, D. Jacquemart, E.J. Mlawer, A.V. Nikitin, V.I. Perevalov, M. Rotger, S. Robert, J. Tennyson, G.C. Toon, H. Tran, V.G. Tyuterev, E.M. Adkins, et al. (approximately 100 authors), "The HITRAN2024 molecular spectroscopic database", Journal of Quantitative Spectroscopy and Radiative Transfer **353 (2026) 109807**, DOI **10.1016/j.jqsrt.2026.109807**, available online 15 January 2026. I.E. Gordon is corresponding author. Authors taken from the article's own front matter, not from a short form.

READ LEVEL: **PARTIAL.** Route `https://hitran.org/media/refs/HITRAN-2024.pdf` via WebFetch succeeded, but the extracted text served by this route is **85,320 characters in total** - confirmed by the tool itself when I requested offset 150000: "Nothing left to read from offset 150000: this page's text is 85320 characters long." That is a small fraction of a full HITRAN release paper. What I read, across three windows (offsets 0, 14000, 60000): front matter and author list; the Section 1 introduction; the Section 2 preamble (uncertainty and reference indices, abundances, Table 2 discussion); Section 2.1 and subsections 2.1.1, 2.1.1.1, 2.1.1.2, 2.1.1.3, 2.1.2, 2.1.3 (H2O); Section 2.2 with 2.2.2, 2.2.3, 2.2.4, 2.2.5 (CO2); Section 2.3 (O3); Section 2.4 with 2.4.1-2.4.4 (N2O); and the opening of Section 2.5 (CO), where the served text breaks off.

**COULD NOT READ, by this route: CH4, O2, NO, SO2, NH3, HNO3, OH, HF, HCl and every molecule section after CO; Sections 3 onward (including the cross-sections section); and the entire reference list.** CH4 appears in my read only as a row in Table 1. This is COULD NOT READ, not NOT FOUND: the silence of those sections is not evidence in either direction, and sub-claims (b) and (c) are answered **only over H2O, CO2, O3, N2O and the start of CO**. Anyone relying on this note must not upgrade "absent in my window" to "absent in the paper".

**Source 2 - Gordon, Rothman, Hargreaves et al., "The HITRAN2020 molecular spectroscopic database", JQSRT 277 (2022) 107949.** Front matter confirmed as printed: title and journal as the entry carries them, volume 277 (2022), article 107949; received 12 March 2021, revised 15 September 2021, accepted 17 September 2021, online 25 September 2021; DOI **10.1016/j.jqsrt.2021.107949** - note the DOI string carries **2021**, not 2022, and the entry carries no DOI at all.

READ LEVEL: **PARTIAL.** Route `https://hitran.org/media/refs/HITRAN-2020.pdf` (filename recovered by search; the un-hyphenated guess failed). Covered: front matter; the Section 2 preamble; Section 2.1 and subsections including 2.1.1 and 2.1.6 (H2O); Section 2.2 (CO2) including 2.2.4, running out partway through Section 2.2.9. The summariser gave the excerpt length only as "roughly 80,000 characters ... an approximation rather than an exact count", so I do not state it as a figure. **COULD NOT READ: the remainder of Section 2.2, all molecule sections after CO2, and Sections 3-7 and appendices.**

Quotation hygiene for this note: fragments below are as served, each under the summariser's roughly 125-character verbatim cap. Where I give a clause before and a clause after a target fragment, I obtained them as separate returns and I say so; **I have assembled no cut string by inference, and I label as a reconstruction anything built from more than one fragment.** Nothing below is a reconstruction of more than three consecutive fragments.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Does the 2024 document state a merge policy per molecule?

**It states source-handling decisions molecule by molecule, but it states no merge policy - general or per-molecule - in the sense the claim needs.** There is no database-wide rule for choosing or merging line-parameter sources in the Section 1 introduction or the Section 2 preamble within my window. The only general sourcing statement in the preamble is about abundances, not parameters: "The molecular abundance values in HITRAN are calculated based on the terrestrial atomic abundances selected from Ref. [31]."

What is given per molecule is a set of individually worded replacement, rejection and scaling decisions, each justified against validation data rather than deduced from a policy. For as many molecules as my window gives:

- **H2O, Sec. 2.1.1.1** (positions): "the CW2024 line positions and assignments were employed whenever possible, except for the 6600-7500 cm-1region."
- **H2O, Sec. 2.1.1.1** (fallback): "in place of the remaining variational line positions, we used the line positions from the newly-calculated ab initio line list."
- **H2O, Sec. 2.1.1.2** (intensities): "For HITRAN2024, these bands were scaled to match the experimental values, while for the 1+42 and 42 bands, experimental intensities were used wherever possible."
- **H2O, Sec. 2.1.1** (reversion): "The shifts that affected the quality of the residuals have been reverted back to the HITRAN2016 values", "or replaced with those from the AER list 'aer3.8.1' [34]." (two consecutive returns)
- **H2O, Sec. 2.1.1.3** (air broadening - the nearest thing in the 2024 paper to a selection rule, quoted in full in (c) below).
- **H2O, Sec. 2.1.2**: "For transitions involving these states in the 2-5000 cm-1region, we have updated the line positions to those calculated by Coudert et al. [60]."
- **H2O, Sec. 2.1.3**: deuterated isotopologues "are based on the line list from Kyuberis et al. [63]".
- **CO2, Sec. 2.2.2**: "these bands with intensities from Yurchenko et al. [106] have been replaced by intensities provided in AI-3000K".
- **CO2, Sec. 2.2.3**: "We therefore have scaled these isotopologue values accordingly." (gamma-0 values, about 0.4%)
- **CO2, Sec. 2.2.4**: H2-broadening used a scaling factor of 1.577 applied to air-broadening coefficients.
- **O3, Sec. 2.3**: "The HITRAN2024 16O3 data below 273.2 cm-1 is essentially based on the line list of Tyuterev et al. [140]".
- **O3, Sec. 2.3**: "we have replaced 56 calculated line positions with very accurate observed MW" values; and "we have scaled the variational intensities to agree with the experimental data from Birk et al.", by a stated factor of 1.0073.
- **N2O, Sec. 2.4.1**: "The 4200-0000 and 5000-0000 bands ... replace the intensities from Adkins et al. [174]".
- **N2O, Sec. 2.4.2** (rejection, two consecutive returns): "The residuals in the PNNL comparisons with TYM were larger than those with ABG-IMRHT." followed by "Therefore, the TYM line list was not used for HITRAN2024."
- **N2O, Sec. 2.4.2**: "the Huang et al. [169] intensities have been scaled to agree with the lower J values in the JPL catalogue".
- **N2O, Sec. 2.4.3**: only the most abundant isotopologues from Huang et al. [169] were used to update existing lines.
- **CO, Sec. 2.5**: "this line list was supplemented with new line position measurements where available."

Two things follow that the claim's wording does not survive. First, **several of these are explicitly two-source hybrids**: an ab initio or variational list scaled to a named laboratory measurement (O3 by 1.0073 to Birk et al.; N2O to the JPL catalogue; CO2 isotopologue gamma-0 by about 0.4%; and in Sec. 2.2.2 the 00031-00001 intensities scaled by **0.99314** - a different factor from the 1.1217 the entry quotes from HITRAN2020, i.e. the 2024 edition **re-scaled the same band**, so the entry's 1.1217 is edition-specific and now superseded; I have 0.99314 as a single served figure within a CO2 Sec. 2.2.2 paraphrase and I have not re-verified it at a clause junction, so treat it as served-once). Second, **none of these sentences is the sentence the claim needs**: not one says that one source is chosen per parameter.

### (c) Is a single-source selection policy stated for molecules other than H2O?

**In HITRAN2020: the "lowest uncertainty" sentence is H2O only - Sec. 2.1.1, H2-16-O transition frequencies - and it is narrower even than that.** As served, with the clause before and the clause after obtained as separate returns:

- before: "We also detected a small number of discrepancies in the transition frequencies"
- the sentence opens with: "In such cases,"
- target: "we chose the source that has the lowest uncertainty associated with it"
- after: "and also considered the type of experiment used to derive the value in the empirical line list."

**In HITRAN2024: ABSENT for every molecule in my window, including H2O.** No sentence anywhere in my read states that a single source is chosen per parameter. The nearest formulation is H2O air broadening, Sec. 2.1.1.3, served as two consecutive returns:

- "For air broadening, the new experimental laboratory data [47,51-55] were pre-filtered using the new 'Diet' and used when available,"
- "unless a lower uncertainty measurement already existed in the database for a particular transition."

Note what this is: a **condition for not replacing** an incumbent value, applied per transition, with six cited new sources pre-filtered by a "Diet" before entry. It is a keep-the-lower-uncertainty rule between an incumbent and a challenger. It is not a statement that the stored value derives from one determination, and the sentence that precedes it in the same subsection shows the opposite being done - the outliers it could not replace "were replaced by the values from the so-called ATM24 line list [56]", a third source in the same parameter class in the same band.

For CO2, O3, N2O and CO the decisions quoted in (b) are stated as **replacement, rejection or scaling against validation data** - PNNL residuals, Birk et al., the JPL catalogue, SOLEIL spectra - never as a lowest-uncertainty selection policy. Some of them do leave one list as the basis for a region ("essentially based on the line list of Tyuterev et al. [140]"), which is a **descriptive** single-basis fact for that region, reached case by case; it is not the policy the claim asserts, and the scaling cases in the same sections are two-source by construction.

### (d) The HITRAN2020 merge modes and the 1.1217 factor - all three CONFIRMED, with locations

**select - CONFIRMED, Sec. 2.1.1, H2-16-O transition frequencies.** Quoted in full in (c) above. Location correction for the entry: this is **Sec. 2.1.1**, inside the H2O section, not a general merge-policy section, and its subject is the resolution of detected discrepancies, not the routine construction of a parameter.

**average - CONFIRMED, Sec. 2.1.6, H2O line-shape parameters.** "average values from the intercomparison of data were determined". As served, this sits in a sentence that also states that transitions with less than 5% standard deviation are retained - i.e. the averaging carries an agreement threshold. The same section was reported to me as containing a **six-tier priority scheme for water line-shape data**; I did not obtain that scheme verbatim and record it as seen-but-unquoted.

**scale - CONFIRMED, Sec. 2.2.4, CO2 line intensities.** Three consecutive returns:
- before: "In the HITRAN2020 line list,"
- target: "the UCL line intensities [137] of the 00031-00001 band were scaled by the factor of 1.1217"
- after: "to match the line intensities measured by Birk et al. [153]."

The entry's attribution of 1.1217 to HITRAN2020 Sec. 2.2.4 and to the band 00031-00001 is exact. The entry's framing of the three as "band-by-band merge modes" is loose: they live in three different sections, govern three different parameter classes, and two of the three are H2O.

**Also confirmed, HITRAN2020 Sec. 2 preamble:** "Uncertainty and reference indices are now given for all parameters in HITRAN except for", with the exclusions following being the Einstein-A coefficients, lower-state energies and quantum numbers.

### (e) Does either document print an AGGREGATE count or distribution of sources per parameter?

**NEITHER DOES, anywhere in my window of either document.** Both documents **define** the per-parameter reference-index mechanism that would make such a count computable, and **announce** its coverage; neither **performs** the count. Published is not performed: there is no table, figure or sentence in my read giving a count or distribution of independent sources per parameter, per line or per transition.

The nearest printed number, and why it is a different quantity - the both-directions check the ledger asks for:

**HITRAN2024, Sec. 2.4.1:** "a MARVEL energy level analysis has been carried out using 91 published sources for 14N2 16O".
- NUMERATOR CLASS: published sources feeding one MARVEL **energy-level** analysis. By its own wording this excludes intensities, broadening coefficients, pressure shifts and line-mixing parameters entirely; energy levels are, per the Sec. 2 preamble of both editions, precisely a quantity for which HITRAN carries **no** reference index.
- DENOMINATOR: **one isotopologue** (14N-2 16O) of **one molecule**, analysed once. Checked against the near neighbours it is not: it is not per parameter, not per line, not per transition, and not per molecule.
- What it MISSES relative to the candidate's quantity: every other molecule and isotopologue in the database; every parameter class other than energy levels; and any distribution at all - it is a single total, not a per-parameter tally.
- What it INCLUDES that the candidate excludes: all 91 sources contribute **jointly to one fitted set of levels**. Under the entry's declared rule R-strict a joint multi-source fit scores as n=1 however many laboratories supplied data, so this number is the entry's row-5 vagueness in printed form rather than a measurement of the candidate's quantity. It is also the sharpest available counter-illustration to "n=1 by construction": 91 sources standing behind values that the rule would count once.

Other numbers that must not be mistaken for the quantity: HITRAN2024 Table 1 gives line counts per isotopologue (data points, not sources); HITRAN2024 prints "71 045 line positions, 78 934 intensities" (data points); the HITRAN2024 introduction prints "over 300 molecules have been added (bringing the total number to 644)" (cross-section molecule count, Section 3); HITRAN2020 prints "19,225 empirical levels", "10,782 MCRB rotational transitions" and about 140,000 calculated transitions (dataset sizes). None has sources in its numerator.

### (f) Does either document resolve a per-parameter reference index end-to-end to a primary source?

**NEITHER DOES, in my window.** No worked example traces an index from the line list through the references table to a named original publication. In the HITRAN2024 case the reference list was not in the served text at all, so a trace could not have been completed even had one been begun.

What the 2024 paper does state, in its own Section 2 preamble and as its own statement rather than a back-reference to HITRAN2020 (three consecutive returns):
- before: "The definitions of the uncertainty indices used in HITRAN for spectral parameters in the line-by-line representation"
- core: "Uncertainty and reference indices are now given for all parameters in HITRAN except for the Einstein-A coefficients", "(which usually share the same source and uncertainty as the intensities), lower-state energies, and quantum numbers."
- after: "It should be remarked that the code 0 in Table 2 might lend itself to two different meanings"

Two details here bear on the entry's presupposition 1. The parenthetical is **hedged**: Einstein-A coefficients "**usually** share the same source and uncertainty as the intensities" - so even the format-level mapping is not stated as one-to-one. And the paper itself flags an ambiguity in its own uncertainty coding: code 0 "might lend itself to two different meanings", reported to me as differing between line position and pressure shift. Per the instruction to prefer the hedged, cited formulation, those are the sentences to carry, not a bare "indices are given for all parameters".

## REGIME

**HITRAN2024 (JQSRT 353 (2026) 109807), in its own terms.** Population: the molecular line-by-line and cross-section compilation, molecule by molecule and isotopologue by isotopologue. Unit of analysis in the sections I read: a **band or spectral region of one isotopologue**, with decisions made at that granularity and occasionally per transition ("for a particular transition"). Operating condition: line-by-line parameters at reference temperature with air- and self-broadening, plus specified foreign broadeners (H2 for CO2). Instrument/validation reference: named laboratory campaigns and catalogues - PNNL, SOLEIL, JPL, Birk et al., DLR. Threshold: the uncertainty indices of Table 2, and condition-style criteria ("unless a lower uncertainty measurement already existed").

Does the claim sit inside this regime? **Partly, and on the wrong side.** The regime is the right one for asking the question - this is the document that decides sourcing - but the claim is pitched at the level of a database-wide policy, and the document's unit of analysis is the band of one isotopologue. A policy claim about the whole compilation is **outside** what per-band decision sentences can support, in either direction.

**HITRAN2020 (JQSRT 277 (2022) 107949), in its own terms.** Same population and unit. The specific regime of the "lowest uncertainty" sentence, in the document's own words, is narrower still: **"a small number of discrepancies in the transition frequencies"** of H2-16-O, resolved "in such cases" by a two-criterion judgment - the lower-uncertainty source **and** "the type of experiment used to derive the value". The claim "n=1 by construction" for the compilation's parameters sits **well outside** that regime. A rule proved for discrepancy resolution in one molecule's frequencies is silent about the construction of broadening coefficients in another molecule, not supportive of it.

## DEFECTS FOUND

1. **The load-bearing quotation is cut where the grammar on both sides changes the claim.** "we chose the source that has the lowest uncertainty associated with it" is verbatim, but the cut drops three things that each narrow it: the opening "In such cases," which scopes it to discrepancy resolution; the preceding sentence's "**a small number of** discrepancies in the transition frequencies", which scopes it to a minority of one parameter class of one molecule; and the trailing "**and also considered the type of experiment** used to derive the value in the empirical line list", which makes it a two-criterion judgment rather than a selection rule. A one-source-per-parameter algebra cannot be run off this sentence. By this ledger's own standard that is a misquotation, not merely a thin citation.

2. **"n=1 by construction" is not a policy either document states.** No sentence in either document, across my window, says that a single source is selected per parameter. The phrase is the adversary's algebra applied to a sentence that is not a policy statement. The entry was right to call it algebraic; the stronger finding is that the premise it is algebra over does not exist in the documents as a policy at all.

3. **The 2024 document - named by the entry as "the one document that would restate merge policy per molecule" - states no general merge policy and no single-source rule, including for H2O.** It states per-molecule handling decisions, several of which are explicitly two-source (ab initio scaled to a named measurement). The expectation the entry pinned on this document is therefore answered in the negative on the policy question, within my window.

4. **The entry's 1.1217 is edition-specific and has been superseded for the same band.** HITRAN2020 Sec. 2.2.4 scaled the UCL 00031-00001 intensities by 1.1217 to Birk et al. [153]; HITRAN2024 Sec. 2.2.2 reports the 00031-00001 intensities scaled by 0.99314 (served once, not re-verified at a junction). Carrying 1.1217 without the edition tag invites the reader to treat it as the current value.

5. **The MARVEL "91 published sources" number is one word away from the candidate's quantity and must not be allowed to drift into it.** Its numerator is sources feeding one isotopologue's **energy-level** analysis - a quantity for which HITRAN carries no reference index - and its denominator is one analysis, not a parameter. It is a counter-illustration to the claim, not a census.

6. **Presupposition 1 is not moved, and is slightly dented.** No end-to-end resolution of a reference index to a primary source appears in either document; presupposition 1 stays at format level exactly where the entry has it. Two new hedges work mildly against it: Einstein-A coefficients "**usually**" share the intensities' source, and uncertainty "code 0 in Table 2 might lend itself to two different meanings".

7. **My own read is the main limit on defects 2 and 3.** CH4 and O2 - the two molecules that matter most to the entry's declared retrieval frame - are **COULD NOT READ** by the only route that served this document. If a single-source selection policy is stated anywhere in HITRAN2024, those are plausible places, and I cannot exclude it. This is a cap on my finding, not a finding.

## ROUTES THAT FAILED

- `https://hitran.org/media/refs/HITRAN2020.pdf` (filename guessed by editing the 2024 path): WebFetch returned "failed at its site (client_error), and nothing of the page was retrieved". The correct filename carries a hyphen: `HITRAN-2020.pdf`. One WebSearch recovered it.
- `https://hitran.org/media/refs/HITRAN-2024.pdf` at offset 150000: "Nothing left to read from offset 150000: this page's text is 85320 characters long." Not a failure of the host but of the extraction: this route serves only about 85 kB of text for a release paper that runs to many times that, and it truncates partway into Section 2.5 (CO). **Anyone continuing this work needs a different route to the later sections of HITRAN2024** - the ScienceDirect article page for DOI 10.1016/j.jqsrt.2026.109807, or an institutional repository copy. I did not try either; my budget was spent.
- No search classifier refusals occurred. The one search ran and returned.
- Unpaywall was not used, by rule: it requires a contact-email parameter and no personal identifier goes into a URL.

## BEARING ON THE LEDGER ENTRY

**On the claim as put: it does not hold.** The compilation's documents do not state a merge policy that selects a single source per parameter. Answering the two halves separately: the single-source policy is **not stated at all** as a policy, in either document, in my window; and the lowest-uncertainty **sentence** on which the leg rests is stated for **H2O only**, in HITRAN2020 Sec. 2.1.1, scoped by its own grammar to a small number of discrepancies in transition frequencies and carrying a second criterion after the point of the cut. In HITRAN2024 no equivalent sentence appears even for H2O; its nearest analogue is a per-transition do-not-replace condition.

**Bearing on adversary 1's selection-policy leg (row 5, "n=1 by construction"): STRIKE the universal form; NARROW what survives.** What survives is only: *for H2-16-O transition frequencies where HITRAN2020 detected a small number of discrepancies, the lower-uncertainty source was chosen, with the type of experiment also considered.* That is a discrepancy-resolution procedure for one parameter class of one molecule. It cannot carry "the headline share measures curation policy rather than the world", because no stated policy of the required generality exists to do the measuring. The entry's existing hedge on this leg - that it is algebraic, H2O-only, and cut against by averaging and scaling - is **CONFIRMED and should be strengthened on two points**: the sentence is narrower than H2O-wide (it is H2O frequencies, and only the discrepant ones), and the quotation as the ledger carries it is cut mid-clause.

**Bearing on the entry's own vulnerability (iii), which names this document.** Vulnerability (iii) says HITRAN-2024.pdf is "the single unopened source most likely to settle it" and "the one document that would restate merge policy per molecule". It is now **partially opened**, and it settles the policy question in the negative within my window: per-molecule source handling yes, per-molecule single-source policy no, general policy no. Vulnerability (iii) should be rewritten from "unopened" to "partially read (front matter through Sec. 2.5, about 85 kB served; CH4, O2 and Sections 3+ COULD NOT READ), and found to state no single-source merge policy".

**Bearing on promotion condition (d): PARTIALLY DISCHARGED, and no kill.** Condition (d) requires HITRAN-2024.pdf among others to be read and found to print no census, with the entry going to Rejected if any of them prints a per-parameter or sensitivity-weighted source count. **HITRAN2024 prints no such count, and neither does HITRAN2020**, across both my windows. So this document does **not** trigger the Rejected branch. But (d) cannot be marked satisfied for this document, because the read is partial and the unread remainder includes Table-bearing later sections and the whole of Section 3. Record it as: HITRAN-2024 read partially, no census found, condition (d) not yet dischargeable on this document alone.

**Bearing on promotion condition (c) and presupposition 1: NO MOVEMENT.** Neither document resolves a per-parameter reference index end-to-end to a primary source. Presupposition 1 stays VERIFIED at format level, NOT VERIFIED at record level, exactly as the entry has it - now with the added hedges that Einstein-A coefficients "usually" share the intensities' source and that uncertainty code 0 is ambiguous between two meanings. Condition (c) remains entirely undischarged.

**Front-matter corrections to carry into the entry.** The 2024 document should be cited as Gordon, Rothman, Hargreaves, Gomez, Bertin, Hill, Kochanov, Tan, Wcislo, Makhnev et al., "The HITRAN2024 molecular spectroscopic database", JQSRT **353 (2026) 109807**, DOI **10.1016/j.jqsrt.2026.109807**, not as the bare filename "HITRAN-2024.pdf". The HITRAN2020 citation is correct as the entry carries it and should gain DOI **10.1016/j.jqsrt.2021.107949** (the DOI string carries 2021 although the volume year is 2022). The 1.1217 factor should be tagged **HITRAN2020 Sec. 2.2.4** and flagged as superseded in the 2024 edition for the same band.

**Net: hold the entry's status, strike the universal reading of the selection-policy leg, and do not read my silence about CH4 and O2 as absence.**
