# UQ-20261017-51 verify Hatton et al. PNAS 2023 (doi 10.1073/pnas.2303077120)

Read level: FULL TEXT of main text + Methods (SI Appendix and Datasets NOT seen), via the summariser at pnas.org/doi/10.1073/pnas.2303077120.

## Calls (1 search, 5 fetches)
- F1 pnas.org/doi/10.1073/pnas.2303077120 (prompt listing all 5 sentences): OK. Summariser said all 5 appear. Prompt was leading, so treated as unverified.
- F2 doi.org/10.1073/pnas.2303077120: error.
- S1 WebSearch title query: found PMC links (blocked, not opened), Columbia bibliography, MPI-MiS press release. No text.
- F3 pnas.org/doi/full/...: error.
- F4 pnas.org/doi/pdf/...: error.
- F5 bibliography.cumc.columbia.edu/node/38122: citation only, no abstract.
- F6 pnas.org/doi/10.1073/pnas.2303077120 (non-leading string-search prompt, cache): OK. Gave section-located quotes below.

## Findings
1. "A similar pattern may hold across the bodies of mammal species." Reported present verbatim by F1 only; not re-confirmed in F6 (not searched for) and section not stated. Treat as probable, location unverified.
2. "...a similar inverse cell size-count relation to hold in other mammals": FOUND, main text, "A Recurrent Pattern". Full sentence: "If we assume that the ratios of different cell types in different tissues are constant across species, we should expect a similar inverse cell size-count relation to hold in other mammals." It is conditional.
3. "the ratios ... constant across species": FOUND, same sentence, as an ASSUMPTION ("If we assume"), not a finding.
4. Salamanders: FOUND, "A Recurrent Pattern": "This size-count trade-off maintains overall tissue biomass, as has been observed in salamanders (34), compartments of the Drosophila wing (35)..."
5. "a dataset of cell size for 33 cell types across mammal species spanning the size range from mouse to elephant": FOUND in Materials and Methods (Supporting data), "we include a dataset of cell size for 33 cell types across mammal species" ... "from mouse to elephant shown in SI Appendix, Fig. S1". Intro also: "highly constrained across mammals from mouse to elephant (5, 6) (SI Appendix, Fig. S1)".
6. Slope: FOUND. Results "Cell Size Is Near Inverse to Count": exponents "near the value of -0.97 and within the 95% CI reported in Fig. 3 (-1.09 to -0.87". Methods "Whole-Body Cell-Size Distribution": "a power law with a slope near -0.97 with a 95% CI of -1.09 to -0.87." Caveat: the slope is of the whole-body CCDF/ count vs size distribution (power law), not obviously a regression of per-cell-type count on cell mass; confirm against Fig. 3 caption (not read) before using the "count on mass" wording. The -0.97 (-1.09 to -0.87) figure exists.
7. Scope: abstract says "some 1,200 cell groups" (F6 saw first part only); F1 reported 1,264 cell groups, ~400 major cell types, 60 tissues, 924 in a secondary classification, with totals ~36/28/17 trillion; these F1 numbers NOT re-verified. Bodies per F1: 70 kg male (176 cm, 20-50 y), 60 kg female (163 cm, 20-50 y), 10-year-old child (F1 said 32 kg). Body details unverified by F6; check before relying.
8. Non-human whole-body census: NOT FOUND in main text/Methods. Only cross-species content is the SI Fig. S1 dataset of CELL SIZE for 33 cell types, mouse to elephant, sizes only (no counts, per F1); not a whole-body census. The mammal count-size pattern is an expectation under an assumption. F1 also mentioned 10 model systems for size distributions (unverified). SI Appendix unread.
