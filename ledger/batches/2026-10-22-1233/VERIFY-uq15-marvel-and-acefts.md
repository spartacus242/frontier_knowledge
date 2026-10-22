# VERIFY - MARVEL/IUPAC water reports count transitions per source, not sources per level; the ACE-FTS validation paper stayed unread
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM
That neither the MARVEL/IUPAC water task-group reports nor the ACE-FTS validation paper against HITRAN2016 and GEISA2015 prints a sensitivity-weighted or per-parameter count of independent primary determinations.

This is promotion condition (d) in UQ-20261022-15, which says plainly: if any of the named documents prints a sensitivity-weighted or per-parameter source count, the entry goes to Rejected as a disguised known.

## READ LEVEL

**Source 1 - MARVEL/IUPAC water task-group series, the H2(16)O part.**
Front matter as served from the UCL Discovery copy:

- Authors, in printed order: Jonathan Tennyson, Peter F. Bernath, Linda R. Brown, Alain Campargue, Attila G. Csaszar, Ludovic Daumont, Robert R. Gamache, Joseph T. Hodges, Olga V. Naumenko, Oleg L. Polyansky, Laurence S. Rothman, Ann Carine Vandaele, Nikolai F. Zobov, Afaf R. Al Derzi, Csaba Fabri, Alexander Z. Fazliev, Tibor Furtenbacher, Iouli E. Gordon, Lorenzo Lodi, Irina I. Mizus
- Title: "IUPAC critical evaluation of the rotational-vibrational spectra of water vapor, Part III: Energy levels and transition wavenumbers for H2(16)O"
- Journal of Quantitative Spectroscopy & Radiative Transfer 117 (2013) 29-58
- DOI 10.1016/j.jqsrt.2012.10.002

READ LEVEL: **PARTIAL**, via the WebFetch summariser on the repository PDF at https://discovery-pp.ucl.ac.uk/1386424/1/1386424.pdf . What was returned to me: front matter, the Table 2 caption and column definitions, sample Table 2 rows, the aggregate level count, the Table 6 description, the data-source admission criterion, and the reweighting passages. I did NOT see the full body, the full Table 2 (the source-by-source tabulation runs to many rows), or the supplementary material. Every quotation below is a short fragment as the summariser served it; the summariser caps verbatim return at roughly 125 characters and I assembled no reconstructions.

Scope caveat on the claim's wording: the claim speaks of "the MARVEL/IUPAC water task-group reports" in the plural, a series covering several isotopologues (Parts I, II, III, IV). I opened ONE of them, Part III, the H2(16)O part - the largest and the one a disguised-known census would most plausibly live in. The other parts are NOT READ here, and their silence is not evidence.

**Source 2 - "Validation of the HITRAN 2016 and GEISA 2015 line lists using ACE-FTS solar occultation observations".**
READ LEVEL: **COULD NOT READ.** Not one word of the article text, abstract or front matter was served to me. I therefore have NO front matter for it: I decline to name its authors, volume, year, pages or DOI, because taking them from memory or from a search-result label is exactly what this ledger's discipline forbids.

Identifiers I did obtain, and only from the URLs that search returned, not from any front matter I read: HAL identifier insu-02237353, and Elsevier PII S002240731930425X, which places it in a JQSRT volume. Treat both as locators, not as a verified citation.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations are from the MARVEL/IUPAC Part III PDF, as served by the summariser. In the PDF's extracted text the equals sign renders as a broken glyph; I keep it as served and flag it.

(c) What is counted per what. The per-source tabulation, Table 2, column heading and caption definition:

> "Trans."

> "A1/4number of assigned transitions in the original data source, V1/4number of transitions validated in this study."

(the "1/4" in both places is the PDF-extraction rendering of "=", i.e. "A = number of assigned transitions in the original data source, V = number of transitions validated in this study")

A sample row, as served, showing the form of the tabulated quantity:

> "12YuPeDrMa [164] 9.796-694.486 4510/4501."

So the tabulated pair is transitions-per-data-source. The level count appears only as an aggregate:

> "These transitions give rise to 18 486 validated energy levels."

Table 6, as described to me, gives the number of validated rovibrational levels per vibrational band origin - levels per band, not transitions per level and not sources per level. The summariser states explicitly that the paper "counts transitions, not independent sources, and it does not tabulate a per-level count of either."

The admission criterion for a data source - which is the paper's only statement resembling a provenance rule:

> "To be included in our tabulation, data sources must include original experimental line positions with uncertainties and line assignments with labels."

And on the corpus:

> "For H2(16)O, there exists an unusually large number of at least partially assigned experimental spectra."

(b) and (d) Weighting. The paper does reweight, but on uncertainty consistency, not on retrieval sensitivity. The hedged, procedural formulations, which are the ones to quote:

> "We adopted a reweighting scheme [51] where uncertainties for selected line positions are changed (in practice increased) during iterations of the MARVEL procedure."

> "MARVEL may increase, via robust reweighting, the assumed experimental uncertainty of a transition when it is not consistent with the one derived from the MARVEL energy levels."

The nearest thing in the paper to the candidate's worry - and it is a caveat, not a statistic:

> "the MARVEL energy level will be determined by the formally most accurate transition which, in fact, represents an outlier."

Note the grammar on both sides of that cut: the clause is a warning about what MARVEL *will do* when one transition's quoted uncertainty is anomalously small. It is a conditional hazard statement about single-transition dominance. It names no number, no share, and no count of sources.

PUBLISHED IS NOT PERFORMED, applied here: I can name no number in Part III that is a count or distribution of independent primary determinations per parameter or per transition, and none that is sensitivity-weighted. The numbers Part III prints are (i) assigned/validated transition counts per data source, (ii) 18 486 validated energy levels in aggregate, (iii) levels per vibrational band origin. On the candidate's quantity, Part III **DEFINES** a validated-transition substrate and **ANNOUNCES** a critical-evaluation procedure. It does not measure sources per transition.

## REGIME

**MARVEL/IUPAC Part III, in its own words.** Population: the published, at least partially assigned experimental line positions of one isotopologue - "For H2(16)O, there exists an unusually large number of at least partially assigned experimental spectra." Unit of analysis: the transition (input) and the empirical energy level (output). Measurand: experimental line *positions* and the energy levels derived from them, with uncertainties. Admission threshold: a source is in only if it carries "original experimental line positions with uncertainties and line assignments with labels." Instrument: none of its own - it is a literature-compilation and weighted-inversion procedure.

Does the candidate's claim sit inside that regime? Partly, and only on one of six parameters. The candidate's frame is the six HITRAN-format parameters nu_ij, S_ij, gamma_air, gamma_self, n_air, delta_air, over a sensitivity-weighted set of transitions in operational column retrievals. Part III touches ONLY nu_ij, only for H2(16)O, with no retrieval, no Jacobian and no mission in view. Intensities, both half-widths, the temperature exponent and the pressure shift are outside its regime entirely, so on five of six parameters Part III is silent rather than supportive, and silent rather than contradictory.

**ACE-FTS validation paper.** Regime NOT ESTABLISHED, because the document was not read. I will not characterise its population, unit of analysis or weighting from its title.

## DEFECTS FOUND

**Citation front matter.** The entry cites this source group loosely - "the series of papers on MARVEL energy levels for water isotopologues, in JQSRT or the IUPAC task group's own PDFs". The one I opened pins down as: Tennyson, Bernath, Brown, Campargue, Csaszar, Daumont, Gamache, Hodges, Naumenko, Polyansky, Rothman, Vandaele, Zobov, Al Derzi, Fabri, Fazliev, Furtenbacher, Gordon, Lodi, Mizus, "IUPAC critical evaluation of the rotational-vibrational spectra of water vapor, Part III: Energy levels and transition wavenumbers for H2(16)O", JQSRT 117 (2013) 29-58, DOI 10.1016/j.jqsrt.2012.10.002. The entry's label should carry that at least for the part that has now been read. For the ACE-FTS paper the entry carries only a title; I could not improve on that, so no correction is offered and none should be invented.

**Numerator/denominator check on the one number that looks like the claim's.** Part III's "A/V" pair is the number a careless reader could mistake for the candidate's count. Checked both ways:

- Numerator class: "number of assigned transitions in the original data source" / "number of transitions validated in this study". Exclusions carried by the definition and by the admission rule: unassigned lines are out; any source lacking uncertainties or lacking labelled assignments is out of the tabulation altogether; and the quantity is transitions, not determinations of a parameter value.
- Denominator: ONE data source (a labelled literature segment such as "12YuPeDrMa"). Near neighbours it is not: not per transition, not per energy level, not per parameter, not per unit of retrieval sensitivity.
- What the source's class MISSES relative to the claim: sources per transition or per level (the inverse direction); all five non-position parameters; any independence criterion at all - no distinct-apparatus, distinct-calibration, distinct-sample, no-shared-author or distinct-code test appears anywhere I was served; any retrieval or Jacobian weighting; any mission readership.
- What the source's class INCLUDES that the claim excludes: transitions across a range far wider than any GHG fitting window (the sample row alone spans 9.796-694.486 cm^-1, i.e. far-infrared rotational lines no column retrieval reads); laboratory-only levels; and transitions admitted for position work irrespective of whether any retrieval is sensitive to them.

This is the same inversion the entry already charges against P1 (the PriSpecTemp literature study): determinations per source, not sources per determinand. A number one word away from the claim's is a different quantity, and this is that case.

**The unreached leg.** Sub-claim (d) - whether the ACE-FTS paper weights any comparison by retrieval sensitivity - is **COULD NOT CHECK**. I reached no page of it. The entry's "COULD NOT READ via HAL" is confirmed, and the suggested repair (the ScienceDirect route) is now also recorded as failed at this proxy, for a tool-scoped reason rather than a paywall. An unread document's silence is not evidence in either direction, so this is not a negative finding and it is not a clearance either: promotion condition (d) is still unsatisfied on this source, exactly as before, now with one more route eliminated.

## ROUTES THAT FAILED

- https://hal-insu.archives-ouvertes.fr/insu-02237353/file/S002240731930425X.pdf - Anubis bot-protection page, "Oh noes!", "Access Denied: error code 9e4edb5b6b850c41." No article content.
- https://www.sciencedirect.com/science/article/pii/S002240731930425X - not fetched: failed at the site with robots_disallowed; nothing of the page retrieved. This is the route the entry suggested trying; it does not work from here.
- https://hal-insu.archives-ouvertes.fr/insu-02237353v1 (HAL landing page) - same Anubis page, same error code. So Anubis covers the record page and not only the file.
- https://hal.science/insu-02237353/document - same Anubis page, same error code 9e4edb5b6b850c41. The newer HAL host is behind the same protection.

Budget exhausted at that point: 5 of 5 fetches, 2 of 2 searches. Routes still untried for the ACE-FTS paper, for whoever picks this up: a university repository copy (the ACE-FTS and GEISA teams span Waterloo/York and LMD, so ORFEO/Belnet, UWSpace or a Caltech/NASA mirror are candidates), the authors' own group page, or an institutional subscription. doi.org was never tried because I never obtained a verified DOI and declined to construct one.

## BEARING ON THE LEDGER ENTRY

On the MARVEL/IUPAC leg, the claim **HOLDS**, with its scope narrowed to what was read. In IUPAC Part III, read PARTIAL, there is no count and no distribution of independent primary determinations per parameter or per transition, and no sensitivity weighting of anything. Sub-claim (c) resolves cleanly and in the claim's favour: MARVEL counts **measured transitions per source**, per the Table 2 caption - "A = number of assigned transitions in the original data source, V = number of transitions validated in this study" - and the only per-level numbers are levels in aggregate ("These transitions give rise to 18 486 validated energy levels") and levels per vibrational band origin. It does not count sources per level, which is the direction the candidate's quantity runs. That is the inverse of the candidate's quantity, on one of six parameters, for one isotopologue, with no independence rule and no retrieval in the frame. No census is printed anywhere I was served, so there is nothing to quote under "if a census is printed, quote it."

On the ACE-FTS leg, **COULD NOT CHECK**. Sub-claims (b) and (d) are unanswered for that paper, and (a) is answered for it only to the extent of two locators that are not front matter. Nothing about it is cleared and nothing about it is impeached.

Net bearing: **HOLD the entry's claim, with two narrowings, and strike nothing.** Narrowing one: the MARVEL finding is established for Part III (H2(16)O) only; Parts I, II and IV remain unopened, so the plural "reports" in promotion condition (d) is not yet satisfied in full. Narrowing two: condition (d) should now record that the ACE-FTS paper has resisted four distinct routes, including the one the entry itself suggested, and should say what a checker would accept as a read of it. No disguised known was found. Attack 2 (Disguise) is, if anything, marginally relieved rather than strengthened: the one newly opened on-point title turns out to tabulate the same inverted quantity the entry already charges against P1, which is consistent with the entry's own reasoning rather than a correction to it. Novelty stays at Medium; the unopened-title residue shrinks by one part of one series and is otherwise unchanged.
