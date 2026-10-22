# VERIFY - UQ-20261022-15: PriSpecTemp tabulates transitions PER SOURCE with no n<=1 share; Fleurbaey's "only source" sentence carries a time qualifier the entry drops
Checker: fresh context. Budget used: 4 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

That the PriSpecTemp literature study tabulates determinations as transitions per source with no independence rule, no sensitivity weighting and no share at n<=1; and that the cavity ring-down paper's Introduction prints "Benner et al. [10] was the only source of reference intensities for the 2.06 um band".

Verdict: MOSTLY HOLDS. (b), (c), (d), (f) confirmed. (e) is verbatim as a string but cut at a junction that changes its force: the printed sentence opens "At the time of the Oyafuso article publication," and the entry's quote begins after that comma. The entry must carry the qualifier or mark the cut.

## READ LEVEL

(P1) Luttschwager [front matter: **Lüttschwager**], Berezkin, Li, Castrillo, Lisak, Vainio, Uotila, Seppa [front matter: **Seppä**], "PriSpecTemp report: literature study on experimental line intensity of CO, CO2 and O2", 2025, DOI 10.7795/120.20250221, Physikalisch-Technische Bundesanstalt, 24 pp., CC BY 4.0.
**PARTIAL**, through the WebFetch summariser on the publisher's own PDF. What I have served to me: complete bibliographic front matter; the number, full caption and complete column headings of all seven tables; targeted quotations from Secs. 3.3, 3.4, 3.6, 3.7 and the Fig. 0-2/0-3 captions; and the passage on pp. 14-15 returned as ordered consecutive segments. What I do NOT have: a continuous page-by-page reading of all 24 pages. Route: landing page https://oar.ptb.de/resources/show/10.7795/120.20250221 -> PDF https://oar.ptb.de/files/download/683ff1cb9527f5255509c543 (two WebFetch calls).

(P2) Fleurbaey, Yi, Adkins, Fleisher, Hodges, "Cavity ring-down spectroscopy of CO2 near 2.06 um: Accurate transition intensities for the OCO-2 strong band", arXiv:2002.09584.
**PARTIAL (Introduction, front matter, and scope statements)**, through the summariser on https://arxiv.org/html/2002.09584v1 (two WebFetch calls). Not read: the experimental, fitting and results sections in continuous form; I take their scope from the served statements, not from my own reading of them.

Nothing here is COULD NOT READ. Both documents opened on the first route tried.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) P1 counts TRANSITIONS PER SOURCE

The unit of a row is one literature publication. The settling evidence is the pairing of a reference column with a transition-count column:

- Table 4 (Sec. 3.4, p. 9) columns, verbatim: "Ref. | Year | Technique | Bands | **Number of transitions** | Iso. | S/S, %" - caption: "Summary of the experimental works performed in the proximity of 4.3 m band," / "in which the line strengths of CO2 transitions have been determined." (The "4.3 m" is a dropped mu in the PDF-to-text conversion; read 4.3 um.)
- Table 5 (Sec. 3.5, p. 11) columns: "Reference | Year | Technique | Number of Bands | **Number of transitions** | Isotopologue* | u(S)/S (%)**"
- Table 6 (Sec. 3.6, p. 13) columns: "Ref. | Year | Technique | Bands | **Number of transitions** | Iso. | S/S, %" - caption: "Summary of the experimental works reporting the intensity data for the triad of CO2 (2 m)."
- Table 7 (Sec. 4.1, p. 18) columns: "Ref. | Published | Technique | **Number of transitions** | Isotopologues | Notes on the measured line intensity"
- Tables 1-3 (CO fundamental, first overtone, second overtone; pp. 5, 6, 8) columns: "Reference | Year | Technique | Transitions/Bands | Isotopologue | u(S)/S (%)" - caption pattern: "Summary of the experimental works, focused on the intensity measurements in the fundamental band of CO."

So every summary table is keyed on "Reference"/"Ref." - i.e. a row is a work - and the transition count is an attribute OF that work. "Summary of the experimental works" in the captions says the same thing. No table in the report has a transition as its row with a count of how many works measured it. **Transitions per source, confirmed; sources per transition is nowhere tabulated.**

### (c) No n<=1 share, no independence rule

- Count or share of transitions resting on a single source: **ABSENT** from the served document on a targeted search.
- Independence rule or criterion (shared apparatus, shared reference data, common calibration, non-independent measurements): **ABSENT**. The nearest thing served is Sec. 3.3, p. 7: "it gives a possibility of cross-checking the results" - intercomparison, not an independence test.
- Weighting: the word appears, but never as sensitivity weighting of sources. Served occurrences: Sec. 3, p. 4 "appropriately weighted experimental line intensities in literature"; Sec. 3.4, p. 9 "global weighted fits of spectroscopic parameters" (describing other people's fits); Fig. 0-3 caption, Sec. 3.7, p. 15 "their weighted averages". No weighting scheme of the report's own is defined.
- Keyword check over the pp. 14-15 passage: none of "independent", "independence", "only source", "single source", "one source" occurs there.

**The one near neighbour, and why it is a different quantity.** Sec. 3.6, p. 13 says works in the 2 um triad sometimes report few lines - "sometimes even only one line as in refs. 58, 61 and 62." This is one LINE inside one WORK.
- NUMERATOR CLASS of the report's phrase: publications whose reported line count is one. It excludes transitions entirely as a unit; it says nothing about how many other works also measured that line.
- DENOMINATOR: the publications in Table 6 (works in the 2 um triad), not the transitions in the band.
- OVERLAP, both directions. What the report's class MISSES relative to the claim's quantity: every transition measured by exactly one work where that work reported hundreds of lines - which is the bulk of any n=1 population. What it INCLUDES that the claim's quantity excludes: a single-line publication whose one line was also measured by three other works, i.e. an n=4 transition.
One word apart, a different quantity. The report ANNOUNCES that coverage is thin in places; it does not MEASURE any share at n<=1.

### (d) P1's two traceability quotations - both confirmed, one needs its cut marked

Served as ordered consecutive segments from Sec. 3.7 (which, note, is the section on CO2 **at 1.60 and 1.57 um** - the 30013 and 30012 bands - not the 2 um region):

- SEG1 "Line intensities are referenced to Ref. [70] and have estimated uncertainties below 1% (code 8)."
- SEG2 "The original source of line intensities for 30013 and 30012 bands that serve for an update of HITRAN"
- SEG3 "is Ref. [71] from NIST."
- SEG4 "They were measured with frequency-comb referenced cavity ring-down spectroscopy with a signal-to-noise level"

RECONSTRUCTION (2 fragments, SEG2+SEG3, junction "...HITRAN | is Ref. [71]..." verified as a single subject-verb sentence): "The original source of line intensities for 30013 and 30012 bands that serve for an update of HITRAN is Ref. [71] from NIST." p. 14. **Confirmed.** This is the hedged, cited form - it names the reference number and restricts the scope to the HITRAN update.

- SEG5 "Adopted from Fig. 17 of Ref. [75]." (end of a figure caption)
- SEG6 "The line intensities in the ABSCO 5.1 database [77] for the 30013 band are data from Ref. [78] rescaled by 1.4%"
- SEG7 "and they are 0.4%-0.9% larger than DLR intensities."
- SEG8 "These differences are systematic with rotational quantum number J - they increase with J"

RECONSTRUCTION (2 fragments, SEG6+SEG7, junction "...by 1.4% | and they are 0.4%..." verified as one coordinated sentence): "The line intensities in the ABSCO 5.1 database [77] for the 30013 band are data from Ref. [78] rescaled by 1.4% and they are 0.4%-0.9% larger than DLR intensities." p. 15. **Confirmed**, with the grammar caveat below.

### (e) P2's sentence - verbatim string, defective cut

Served segments from the Introduction:
- SEG1 "Both bands showed a clear discrepancy with the TCCON XCO<sub>2</sub> retrievals."
- SEG2 "Benner et al. [10] was the only source of reference intensities for the 2.06 um band."
- SEG3 "In this paper, we present new measurements of transition intensities in the 20013 \leftarrow 00001 band"

The summariser states explicitly that SEG2 is a clause excerpted from the full printed sentence, which is: **"At the time of the Oyafuso article publication, Benner et al. [10] was the only source of reference intensities for the 2.06 um band."** The 120-character cap is why the leading adverbial was dropped from SEG2, not any property of the source.

So the entry's string does occur, but it occurs as the main clause of a sentence whose opening adverbial restricts it in time. The flanking context is: the preceding sentence reports the TCCON XCO2 discrepancy for both bands, and the paper's own motivation (SEG3) follows. (The sentence between SEG1 and SEG2 - Oyafuso et al. noting that scaling ABSCO v5.0 by the 1.4% offset found for the 1.61 um band would improve XCO2-TCCON agreement - was served to me in paraphrase only, so I do not quote it.)

### (f) P2's coverage

Served scope statements: the paper reports transition intensities for the 20013 <- 00001 band of 12C16O2 near 2.06 um, measured by frequency-stabilised cavity ring-down spectroscopy. Line-shape parameters (collisional broadening, pressure shift, Dicke narrowing) are fitted as part of the spectral fitting but are **not reported as results**; line mixing and line-shape effects are left to future work. No band other than the 2.06 um band is treated as a result; the 1.61 um band appears only as background. **One parameter class, one band, one molecule, one isotopologue - as the entry's separation assumes.**

## REGIME

**P1.** Population: published experimental determinations of line intensity for three sensor molecules, CO, CO2 and O2. Unit of analysis: the publication ("Summary of the experimental works..."), carrying its year, technique, band(s), isotopologue, transition count and relative intensity uncertainty at k=1. Operating condition: a desk review, no measurement of its own; organised by molecule and band region (CO fundamental/1st/2nd overtone; CO2 4.3 um, 2.8 um, 2 um triad, 1.60/1.57 um; O2 A-band). Threshold: accuracy adequate for ab initio comparison and reference-temperature specification, stated qualitatively. **Does the candidate sit inside it? The candidate's descriptive claims about P1 do - they are claims about what P1 tabulates, and the tabulation is exactly as described. A share at n<=1 sits OUTSIDE P1's regime: P1's unit of analysis cannot express it without re-keying the tables on transitions.**

**P2.** Population: individual rovibrational transitions of 12C16O2 in the 20013 <- 00001 band near 2.06 um. Unit of analysis: one transition's intensity. Instrument: frequency-stabilised (comb-referenced) cavity ring-down spectroscopy. Operating condition: laboratory CO2 samples, intensities as reference values for OCO-2 retrievals. **Does the candidate sit inside it? Yes for sub-claim (e) and (f) - these are claims about what the Introduction prints and what the paper covers, and both are confirmed. P2's regime is silent on any cross-parameter, cross-band n=1 census: its n=1 statement is announced for one parameter class of one band as motivation, exactly as the entry says.**

## DEFECTS FOUND

1. **(e) MISQUOTATION BY CUT - the one finding that bites.** The entry carries 'Benner et al. [10] was the only source of reference intensities for the 2.06 um band' as if it were the printed sentence. The printed sentence is "At the time of the Oyafuso article publication, Benner et al. [10] was the only source of reference intensities for the 2.06 um band." The dropped adverbial is load-bearing: with it, P2 says only that Benner was the sole source AS OF a 2017-era retrieval paper; without it, P2 reads as asserting a standing fact about the literature. The ledger's use of P2 ("announces n=1 ... as motivation for a remeasurement") is faithful to the hedged form, so this is a quotation defect, not a reasoning defect. Fix the string or mark the ellipsis.
2. **(d) ABSCO quote cut mid-sentence.** "...rescaled by 1.4%" is followed, within the same sentence, by "and they are 0.4%-0.9% larger than DLR intensities." A cut at the percentage leaves out the comparison the sentence exists to make. Carry the continuation or mark the cut.
3. **(d) Band attribution worth stating.** Both traceability sentences sit in Sec. 3.7, the section on CO2 at **1.60 and 1.57 um** (30013 and 30012 are 1.6 um bands), not in the 2 um section. If the entry implies these quotations bear on the 2.06 um band, that is wrong; if it carries them only as evidence that P1 discusses provenance chains, it is fine.
4. **Front matter, P1.** The printed names are **Lüttschwager** and **Seppä**. Affiliations as printed: Lüttschwager, Berezkin, Li (PTB); Castrillo (Universita della Campania "Luigi Vanvitelli"); Lisak (Nicolaus Copernicus University, Torun); Vainio, Uotila (University of Helsinki); Seppä (VTT). Funder: European Commission, project 22IEM03 (PriSpecTemp). The report **obsoletes DOI 10.7795/120.20250204**, so the DOI the entry cites is the live one - correct as carried.
5. **Front matter, P2.** The printed title is "Cavity ring-down spectroscopy of CO2 near lambda = 2.06 um: Accurate transition intensities for the Orbiting Carbon Observatory-2 (OCO-2) "strong band"". The entry's short title compresses "Orbiting Carbon Observatory-2 (OCO-2) "strong band"" to "OCO-2 strong band" and drops the "lambda =". First author as printed: **Hélène** Fleurbaey; then Hongming Yi, Erin M. Adkins, Adam J. Fleisher, Joseph T. Hodges. I did not check whether a journal version with different pagination exists, so the entry should keep citing the arXiv id unless someone checks.
6. **Read-level honesty on (c).** My ABSENT for the n<=1 share and the independence rule rests on a targeted keyword-and-content query over P1's served text plus a complete inventory of its seven tables, not on a continuous reading of all 24 pages. It is strong - the tables are the report's whole apparatus for counting, and none of them can express the quantity - but a reader should know it is not a line-by-line read.

## ROUTES THAT FAILED

- `curl` to https://oar.ptb.de/files/download/683ff1cb9527f5255509c543 : CONNECT tunnel failed, 403 at the agent proxy (connect_rejected). Tool-scoped, as the route notes predict: WebFetch reached the same URL on the next call without trouble. The proxy was not probed or reconfigured.
- The summariser refused to reproduce P2's Introduction in full on the first call ("I can't reproduce the full Introduction verbatim") and paraphrased the flanking sentences. The ordered-consecutive-segments request on the second call returned exact text. The sentence immediately before SEG2 (the Oyafuso/ABSCO v5.0 1.4% sentence) remains **paraphrase only** in my hands and is not quoted above.
- The 125-character verbatim cap forced both P1 traceability sentences into two fragments each; both are labelled reconstructions above with their junctions verified.

## BEARING ON THE LEDGER ENTRY

**HOLD, with one narrowing to the quotation itself.** The separation from P1 and P2 survives re-testing, and it survives for the stated reason, not an adjacent one.

- Against **P1**: the inverse-direction point is right and now has a column heading behind it. Every summary table is keyed "Reference"/"Ref." with "Number of transitions" as an attribute of the work. P1 therefore cannot print a share at n<=1 without re-keying; it does not print one, states no independence rule, and its uses of "weighted" are other people's fits and plotted averages, not a sensitivity weighting of its own. P1 ANNOUNCES thin coverage in places ("sometimes even only one line as in refs. 58, 61 and 62", Sec. 3.6 p. 13) and MEASURES no such share.
- Against **P2**: confirmed as one parameter class (intensities; line-shape parameters fitted, not reported), one band (20013 <- 00001 near 2.06 um), one molecule and isotopologue (12C16O2), with n=1 announced as motivation and restricted in time to the Oyafuso publication date.
- **Narrowing the entry must absorb:** replace the P2 quotation with the full printed sentence including "At the time of the Oyafuso article publication,", and extend or ellipsise the ABSCO 5.1 quotation at "rescaled by 1.4%". Neither change touches the novelty argument; both are needed for the entry to be quoting rather than paraphrasing in quotation marks.
- Nothing found here converts to a promotion condition, strikes a leg, or reverses anything.
