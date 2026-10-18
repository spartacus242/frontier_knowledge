# UQ-20261017-54 verify metalation (Foster et al., bioRxiv 2022.05.06.490408)

Read level: PDF (bioRxiv full.pdf, via summariser; Methods/Results/Discussion text available, equation and figures were images and NOT read). Published version read at ABSTRACT/record level only (Durham repository record).

## Calls
Searches (1 of 6): "metalation calculator E. coli JM109(DE3) ..." -> found bioRxiv PDF, PMC (blocked, not fetched), Durham repository, Durham calculator pages.
Fetches (4 of 6):
1. biorxiv .../2022.05.06.490408v1 -> opened; no title/authors in text; intro/discussion summary only.
2. biorxiv .../490408.full.pdf (Q-set prompt) -> opened; answers below.
3. durham-repository worktribe output 1197108 -> citation/publication status/abstract.
4. biorxiv full.pdf (second prompt: measured occupancy) -> opened; no measured occupancy.

## Findings
1. Foster AW, Clough SE, Aki Z, Young TR, Clarke AR, Robinson NJ (2022) Metalation calculators for E. coli strain JM109 (DE3): aerobic, anaerobic and hydrogen peroxide exposed cells cultured in LB media. Metallomics 14(9), mfac058, doi:10.1093/mtomcs/mfac058; accepted 24 Jul 2022, online 1 Sep 2022, CC BY. Peer-reviewed version exists (from Durham record; not full-text read).
2. Combines: protein metal affinity (K_D, user-entered), intracellular labile metal availability (free energies, from qPCR of 7 metal-responsive genes via sensor DNA occupancy), and competition (inter-metal, plus intracellular buffer; max one metal per site). Summariser did not give an explicit "three quantities" sentence; this is its reconstruction. Yes: K_D + availability -> predicted occupancy (web calculators).
3. NOT FOUND (two passes over the preprint). No measured in-cell protein occupancy. ICP-MS only for stock solutions. HypB (57.4% Ni, 2.6% Zn) and SodA are simulations from literature affinities. czcD riboswitch Fe2+ response (ref 23) is a prior reporter response, "supported" qualitatively. SodA mis-metalation by Fe under H2O2 compared qualitatively to literature (refs 28, 29). Caveat: equation/figures not read; supplement not read.
4. FOUND: 3.4% Fe2+ SodA aerobic calculator output; compared with H2O2 calculator 0.5%?? -- NOTE summariser says H2O2 predicts 0.5% and calls this "only slightly increased" (odd: 0.5 < 3.4; possible summariser error, unverified). Inputs are thermal-unfolding affinities (ref 32), which do not follow Irving-Williams. Section "Simulated metalation of E. coli HypB, SodA and selected riboswitches". Prediction, not measurement.
5. Only availability: SDs from triplicate buffered-concentration determinations shown as error bars on free energies (Fig 3); no propagation to occupancy described in text (figure/equation images not read).
