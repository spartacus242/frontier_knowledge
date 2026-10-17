# Verification: Luck et al. 2020, Nature 580:402-408, doi 10.1038/s41586-020-2188-3 (HuRI)

## Verdict: COULD NOT READ the published Nature paper. A bioRxiv PREPRINT (not the published text) was read through a summariser; answers below are provisional.

## Searches (2 of 7 used; none refused)
1. "A reference map of the human binary protein interactome" Luck 2020 Nature full text -> links only (PMC, Pasteur, MedChemExpress, Harvard DASH, IRB Barcelona). No text.
2. Luck 2020 HuRI "weak, more transient" ... -> links only (DASH, PubMed mirrors, BioGRID). No text; the exact string was not confirmed by search.

## Fetches (6 of 6 used)
1. https://doi.org/10.1038/s41586-020-2188-3 -> NOT OPENED (client error)
2. https://www.nature.com/articles/s41586-020-2188-3 -> NOT OPENED (client error)
3. https://dash.harvard.edu/entities/publication/dcd56797-e22c-416a-90c8-578dc945f232 -> OPENED (record page only). Lists "Luck et al Text.pdf" (991 KB) at https://dash.harvard.edu/bitstreams/7676acd3-d5c5-42ae-bc34-138090597c49/download, but Terms of Use says "Metadata Only". Summariser's DOI link there ends "-2188-x", not "-3" (likely summariser error; not verified).
4. https://www.biorxiv.org/content/10.1101/605451v1.full -> OPENED (preprint v1, 52,569 interactions, HI-III-19). Not the published version. Summary has no abstract.
5. DASH PDF download URL (WebFetch) -> NOT OPENED (client error)
6. bioRxiv v1 again with targeted prompts -> OPENED, quotes below.
Also tried: curl on DASH PDF -> proxy CONNECT 403. PMC (PMC7169983) was in search results but is blocked; not tried. Nothing from Europe PMC / PubMed fetched.

## Strings (from the PREPRINT via summariser; verbatim as relayed, NOT checked against the Nature text)
Q1 size/fraction: summariser says no explicit estimate of total interactome size. Only: "doubles HI-II-14's coverage of the proteome and quadruples its interactome coverage" and "screening about 90% of the protein-coding genome". Mentions detectability affecting "estimates of interactome size" without giving one. (Absence is the summariser's report, not my reading of full text.)
Q2 sensitivity: "Limitations in PPI assay sensitivity can be overcome by employing different PPI assays." / "identification of a PPI in a screen is impacted by interaction strength." Summariser: Kd/affinity and concentration not discussed; expression appears only as a confounder in degree analyses. No detection limit in affinity or concentration units reported to me. Empirical sensitivity percentages vs reference sets were NOT checked in either text.
Q3 undetectable: "the protein interactome might be dominated by weak, more transient PPIs, that are harder to detect"; "new PPI assays capable of identifying PPIs for the proteins still absent from HuRI"; "limited sampling and assay sensitivity resulted in incomplete interactome coverage" (about HI-II-14). A qualitative statement only; no mapped region of affinity-by-abundance space seen.
Q4 complementarity: "The Y2H assay versions were complementary"; "complementary sets of PPIs"; union: "Combining HuRI with all previously published systematic screening efforts at CCSB yields 64,006 binary PPIs involving 9,094 proteins". That is a union of Y2H screens from one lab, not a union across assay types, and not a coverage fraction.

## Unit / endpoint / comparator / estimand (from preprint description; provisional)
Unit: protein pair (binary PPI) among ~8,275 proteins (ORFeome space ~17,500 ORFs). Endpoint: reproducible Y2H growth, confirmed by sequencing and validated in orthogonal assays. Comparator: other Y2H versions, earlier map HI-II-14, literature-curated binary sets. Estimand: set of detected pairs (map content) and assay sensitivity/precision against reference sets; NOT a Kd detection limit nor an interactome size.

## Conclusion
Published paper unread. Preprint-based answers: (1) no total-size estimate or fraction stated (per summariser); (2) sensitivity discussed qualitatively ("interaction strength") with no Kd or concentration range; (3) qualitative mention of weak/transient PPIs being hard to detect, no systematic invisible-region analysis; (4) complementarity among Y2H versions stated; union of 64,006 PPIs is CCSB-only. Do not cite as from the Nature text. Nothing here is a finding that the published paper lacks these; text differences between preprint and publication were not checked. Next route to try: the DASH PDF or PMC7169983 if reachable by another session.
