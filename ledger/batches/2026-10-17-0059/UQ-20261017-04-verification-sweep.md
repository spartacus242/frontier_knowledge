# UQ-20261017-04 prior-art sweep (2026-10-17)

Budget note: task text asks for 8 searches but caps at 7. Ran 7. NOT run: (6) German-language terms, (8) generative-model stability screening. Query 1 was a general core-question query.
Search results returned titles/URLs only (no snippets); judgements below rest on titles unless a page was fetched.

## Searches
1. General core question ("imaginary phonon modes experimental crystal structure database erroneous ... MLIP screen"): top hit Kamath et al 2026 / arXiv 2602.07295 (spurious imaginary modes in MOFs). Does NOT do it (opened).
2. (1) checkCIF/ADDSYM/missed symmetry: top hit Acta A 2018 "Forty years of Marshing: is the missed symmetry problem now solved?" Symmetry-based, no dynamics (opened, excerpt only).
3. (3) High-throughput phonon DBs, fraction unstable: results incl. arXiv 2605.27162 (MatterSim phonons, synthesizability windows), C2DB, Petretto 2018. Opened 2605.27162: 20% of 398 binaries imaginary; treated as possible artefact, not as structure error.
4. (5) Polymorphous vs monomorphous: arXiv 1905.09141 "polymorphous nature of cubic halide perovskites" (title only, NOT opened). Frames high-symmetry average structures as physically different from local structure, not as deposited errors; no database screen inferred from title.
5. (4) MLIP training-data cleaning: arXiv 2602.08849 on-the-fly outlier detection (opened). Loss z-score down-weighting; no phonons, no crystallographic validation, molecules/water.
6. (2) "Revisited/redetermination" + phonon: arXiv 1211.6948 Mg(BH4)2 (opened). Single compound; phonon-unstable P42nm; closest in logic, not a screen.
7. (7) Mineralogy/soft modes: arXiv 1902.03828 CaSiO3 perovskite anharmonic; 2203.01244 "Physical significance of imaginary phonon modes" (title only, NOT opened). No evidence of database screen.

## Fetches (6 of 6 used)
- arxiv.org/html/2602.07295v2 : opened. 
- arxiv.org/html/2602.08849v1 : opened.
- arxiv.org/pdf/2605.31303 (MOF-5 imaginary-mode guide): COULD NOT READ (PDF returned empty). Not read; its content unknown to me.
- arxiv.org/pdf/1211.6948 : opened.
- journals.iucr.org/a/issues/2018/a1/00/a56582/a56582.pdf : opened, excerpt/abstract-level only; result of the CSD analysis not in the text returned.
- arxiv.org/pdf/2605.27162 : opened.

## Exact strings (as returned by summariser)
- 2602.07295: "spurious imaginary modes are ubiquitous in MOFs, arising from numerical artifacts such as insufficient structural relaxation"; "In principle, imaginary phonon modes signal true dynamical instabilities"
- 1211.6948: "our phonon calculations showed the P42nm structure (δ phase) to be dynamically unstable at ambient pressure"; "either density functional theory calculations are inaccurate for this system, or experimental structure determination was incorrect"
- 2605.27162: "79 compounds (20 % of the total) exhibit imaginary phonon modes in the calculation"; "may be an artifact of the computational setup rather than an indication of true physical dynamic instability"
- Marshing: "One would assume that, given the readily available tools, missed symmetry and Marshed structures are no longer an issue"; unit = CSD entries 2013-2017, tool = ADDSYM in PLATON
- 2602.08849: "such as atoms with overlapping van der Waals radii" (found by inspection)
Quotes are via a summariser, not verified against page text.

## Conclusion
No source found that uses a dynamical-stability calculation (imaginary phonons / MLIP force constants) as an automatic screen over a structure database to flag deposited structures as probably wrong, and none compared such a flag against checkCIF/PLATON alerts. Closest: Mg(BH4)2 (single-compound, phonon instability used to argue experimental assignment wrong); Marshing (database-wide missed-symmetry audit, no dynamics); 2605.27162 and 2602.07295 (imaginary modes tallied but attributed to computation). Absence is from 7 searches, 6 fetches, titles-only for several hits; not proof of nonexistence.
