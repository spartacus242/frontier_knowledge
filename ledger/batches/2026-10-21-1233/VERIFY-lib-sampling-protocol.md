# VERIFY — LIB sampling protocol / variance budget

Checker note, fresh context. Query budget used in full: 6 searches, 5 WebFetch calls. No further probing after the cap.

## Routes that failed (shared)

- `https://www.sciencedirect.com/science/article/pii/S0892687521002545` — WebFetch refused: `ROBOTS_DISALLOWED` (target). Recorded, not worked around; no curl attempt.
- `https://www.impopen.com/subs/tosf/v20/S10_0102.pdf` — this URL was returned by a WebSearch on the string `"10.1255/tosf.166"`, but it is NOT that paper. Fetching it served the **TOS Forum Issue 10 (2020) Editorial, DOI 10.1255/tosf.113** (Esbensen as editor). Spurious search hit; the fetch was spent for nothing.
- No publisher landing page for `10.1255/tosf.166` was read (impopen abstract page not fetched — budget exhausted).

---

## (i) Vanderbruggen et al., Minerals Engineering 169 (2021) 106924

### Citation as the source serves it

> Anna Vanderbruggen, Eligiusz Gugala, Rosie Blannin, Kai Bachmann, Rodrigo Serna-Guerrero, Martin Rudolph, "Automated mineralogy as a novel approach for the compositional and textural characterization of spent lithium-ion batteries", *Minerals Engineering* **169** (2021) 106924. DOI 10.1016/j.mineng.2021.106924. Online 27 May 2021.

Front matter cross-checked two ways: Crossref deposit (`api.crossref.org/works/10.1016/j.mineng.2021.106924`, which gives Elsevier BV, journal-article, vol. 169, article 106924, 2021, no issue number — `special_numbering: "C"`) and the accepted-manuscript PDF title page at Aalto ACRIS.

### Read level

**FULL TEXT**, but of the *accepted manuscript*, not the publisher's typeset version:
`https://acris.aalto.fi/ws/portalfiles/portal/65184344/CHEM_Vanderbruggen_et_al_Automated_Mineralogy_2021_Minerals_Engineering.pdf`
Publisher route (ScienceDirect) was refused by robots. Page numbers in the typeset article were therefore not seen; the article number 106924 is from Crossref.

### What it is and what it does

A **primary study / method-application paper** (not a review, protocol, standard or guideline). It introduces automated mineralogy (SEM-EDS particle mapping) as a characterisation tool for lithium-ion battery recycling streams.

**Regime it establishes anything in:** one lot of **black mass already produced by thermo-mechanical processing** — vacuum pyrolysis at 500–600 °C, dry crushing, sieving at 1 mm — from Accurec Recycling GmbH, feed a mix of NMC and LCO. Unit of analysis: **the individual particle** on a polished grain mount. Endpoints: particle classification into LIB components (Al foil, Cu foil, graphite, lithium metal oxides, casing alloys), LCO/NMC categorisation, degree of liberation as a mass fraction, size-fraction distributions, and TIMA-derived chemistry compared against XRF. Instruments: TESCAN TIMA3 GMU (FEG, SDD-EDS, TIMA 1.6.73), Niton XL3t 980 handheld XRF, LECO carbon after acid leaching, fluorine by Na2O2 fusion + ion-selective electrode.

**Sample handling it reports** (for that single black-mass lot): 9.6 kg lot, manual homogenisation, coning and quartering, 4.8 kg subsample riffle-split to 200 g, sieved into 500–1000 / 125–500 / 63–125 / <63 µm, each fraction rotary-split to 1.5 g (automated mineralogy), 10 g (XRF), 1 g (carbon assay).

### Does it set out a sampling protocol for an arriving end-of-life battery stream, with a declared variance budget?

**No, on both halves.**

- It contains a **sample-preparation and splitting sequence for one already-shredded/pyrolysed black-mass lot**, not a sampling plan for a stream of arriving end-of-life batteries at a plant gate.
- It declares **no variance budget**: no fundamental sampling error, no nominal/minimum sample mass calculation, no Gy heterogeneity-invariant computation, no sampling-variance decomposition. Gy appears **once**, as a generic appeal to representativity.

Verbatim strings found in the paper where sampling or representativeness is discussed (each checked for itself before being read as support):

> "The reliability of characterization results is highly dependent on the representativity of the samples (Gy, 1994)."

> "The sampling of black mass is challenging due to the heterogeneity of the particles in terms of both shape and density."

> "Consequently, the sampling procedure was carefully designed to obtain the most homogenous sample for this" / "characterization study (Fig. 2B)." *(two consecutive returned segments; junction is mid-sentence and joins to "…for this characterization study (Fig. 2B).")*

> "This study reveals the importance of sample preparation for black mass to reduce stereological bias" / "and the need to have sufficient amount of particles to analyze in the coarser size fraction."

> "As a consequence, at least two grain mounts for the fraction 500–1000 µm would be recommended" / "to increase the number of analyzed particles."

Note the grammar on both sides of these cuts: "the sampling procedure was carefully designed to obtain the most homogenous sample" is about **making one analytical sample homogeneous enough to characterise**, i.e. preparation of a specimen, and the recommendation that follows is for **more grain mounts**, not for a larger or differently structured primary sample. Read whole, these sentences are the opposite of a variance budget: the only quantitative representativeness check in the paper is a qualitative TIMA-vs-XRF comparison (Fig. 6), with deviations of roughly 20 wt% Al and 12 wt% Cu in the coarse fraction attributed to stereological bias and polishing, **not** derived from any sampling-error model.

### Abstract (RECONSTRUCTION — assembled from 23 ordered consecutive segments returned by the summariser; no gap filled by inference)

"Mechanical recycling processes aim to separate particles based on their physical properties, such as size, shape and density, and physico-chemical surface properties, such as wettability. Secondary materials, including electronic waste, are highly complex and heterogeneous, which complicates recycling processes. In order to improve recycling efficiency, characterization of both recycling process feed materials and intermediate products is crucial. Textural characteristics of particles in waste mixtures cannot be determined by conventional characterization techniques, such as X-ray fluorescence and X-ray diffraction spectroscopy. This paper presents the application of automated mineralogy as an analytical tool, capable of describing discrete particle characteristics for monitoring and diagnosis of lithium ion battery (LIB) recycling approaches. Automated mineralogy, which is well established for the analysis of primary raw materials but has not yet been tested on battery waste, enables the acquisition of textural and chemical information, such as elemental and phase composition, morphology, association and degree of liberation. For this study, a thermo-mechanically processed black mass (<1 mm fraction) from spent LIBs was characterized with automated mineralogy. Each particle was categorized based on which LIB component it comprised: Al foil, Cu foil, graphite, lithium metal oxides and alloys from casing. A more selective liberation of the anode components was achieved by thermo-mechanical treatment, in comparison to the cathode components. Therefore, automated mineralogy can provide vital information for understanding the properties of black mass particles, which determine the success of mechanical recycling processes. The introduced methodology is not limited to the presented case study and is applicable for the optimization of different separation unit operations in recycling of waste electronics and batteries."

The word "sampling" does not occur in the abstract at all.

---

## (ii) DOI 10.1255/tosf.166

### Citation as the source serves it (Crossref deposit)

> Laurance Donnelly, Duncan Pirrie, Matthew Power, Ian Corfe, Jukka Kuva, Sari Lukkari, Yann Lahaye, Xuan Liu, Alan Butcher, "The sampling and phase characterisation of black mass", *TOS Forum* **2022**, issue 11, p. 397. Published online 27 May 2022. DOI 10.1255/tosf.166. Type: journal-article.

Two front-matter cautions: (a) Crossref names the publisher **"BD-Verlag"**, which does not match TOS Forum's usual imprint (IM Publications / impopen.com) — reported as served, not corrected; (b) "volume 2022, issue 11" is the TOS Forum numbering for the **WCSB10 proceedings** issue, i.e. this is a **conference-proceedings paper**, not a journal research article in the ordinary sense.

### Read level

**ABSTRACT ONLY**, and only as deposited in Crossref metadata. No publisher page and no full text were read (the one impopen URL a search offered for this DOI turned out to be a different document — see shared routes above — and the fetch budget then ran out). **Verbatim abstract text was not obtained**: the summariser declined to reproduce it in full against the ~125-character quotation cap, and I had no calls left to re-request it in consecutive segments. So no verbatim string from this source is reported here. This is COULD NOT READ at full-text level, and abstract-only-paraphrase at metadata level — it is **not** NOT FOUND: the record exists and is unambiguous.

### What it supplies, per the deposited abstract (paraphrase, flagged as such)

Characterisation of **black mass** — described as a crushed battery-cell e-waste intermediate — for morphology, grain size, composition and texture, using optical microscopy, SEM-EDS (automated), X-ray computed tomography, and LA-ICP-MS. Reported findings: automated SEM-EDS can identify and quantify phases and tie most particle types back to battery components; LA-ICP-MS detects lithium where the other methods cannot; some phases remain unassigned and more samples are needed.

**Regime:** black mass, i.e. **after shredding/crushing**. The word "sampling" is in the title, but on the abstract the work is phase characterisation of that material; nothing in the deposited abstract indicates a declared variance budget, fundamental sampling error, heterogeneity test or nominal sample mass, and nothing indicates whole cells/modules/packs at a plant gate. Because the full text was not read, the presence or absence of an FSE calculation **inside the paper** is formally unverified — but its stated subject matter is already outside the plant-gate regime.

---

## (iii) Does a plant-gate representative-sampling protocol with a declared variance budget exist for end-of-life LIB feedstock?

### What I did

Three searches aimed at this (one standard, two extended), across the Theory of Sampling literature, WCSB proceedings and minerals-engineering sampling papers. Fetch budget was already spent on (i) and on the failed routes, so **none of the candidates below was opened**. Read level for every item in this section: **NOT READ** (titles and metadata only).

### Finding

Within that search depth, **NOT FOUND**: no publication surfaced that sets out a representative-sampling protocol with a declared variance budget (Gy-type fundamental sampling error, heterogeneity invariant, nominal sample mass, or equivalent) for **end-of-life lithium-ion battery feedstock as it arrives at a plant gate** — whole cells, modules or packs, pre-shredding. This is a search-level absence, not a demonstration of non-existence, and it is not COULD NOT READ: the searches returned results, they were simply all downstream of shredding or outside the battery domain.

Everything relevant that surfaced sits in the **black-mass (post-shredding) regime** or in a non-battery regime:

- `10.1255/tosf.166` — item (ii) above: black mass. Title says "sampling", subject is phase characterisation.
- "Overcoming Black Mass Variability: A Statistical Approach to Representative Sampling", Springer chapter, `https://link.springer.com/chapter/10.1007/978-3-032-13596-4_11` — on its title, the closest thing to a declared statistical sampling treatment, but **black mass**, not plant gate. Not read.
- "Methodology for evaluation of lithium-ion black-mass battery recycling", *J. Mater. Cycles Waste Manag.*, `10.1007/s10163-025-02159-x` — black mass. Not read.
- "An Automated Approach to the Heterogeneity Test for Sampling Protocol Optimization", *Minerals* 14(4):434, `10.3390/min14040434` — Gy-type heterogeneity test / FSE machinery, but its regime is ore-type material, **not** end-of-life batteries. Not read.
- "Comprehensive End-of-Life-Battery Composition Analysis from Module to Electrode Level…", *Recycling* `10.3390/recycling11010011` — module-to-electrode **composition** analysis; a teardown/composition regime, nothing in the title indicating a sampling variance budget. Not read.

So, on this evidence: the gap the ledger asks about (plant-gate, whole-battery, declared variance budget) is **not filled by either (i) or (ii)**, and no third source filling it was located.

---

## Defects

1. **Wrong-paper risk on (i) if cited for sampling.** Vanderbruggen et al. 169:106924 is titled "Automated mineralogy as a novel approach for the compositional and textural characterization of spent lithium-ion batteries". It is an automated-mineralogy characterisation paper. Citing it as a *sampling protocol* source misnames what it is.
2. **Regime substitution on (i).** Its material is black mass <1 mm after vacuum pyrolysis, crushing and sieving; its unit of analysis is the individual particle on a grain mount; its lot is a single 9.6 kg sample from one recycler. A claim about **arriving end-of-life batteries at a plant gate** sits entirely outside that regime. The paper is silent there, not supportive.
3. **Variance budget absent in (i).** No FSE, no heterogeneity invariant, no nominal sample mass, no variance decomposition. Gy (1994) is cited once, generically ("The reliability of characterization results is highly dependent on the representativity of the samples"). A single Gy citation is not a variance budget.
4. **Cut-grammar trap in (i).** "the sampling procedure was carefully designed to obtain the most homogenous sample" reads like a sampling plan if cut there; the full sentence ends "…for this characterization study (Fig. 2B)", i.e. specimen preparation for one analysis, and the paper's own recommendation that follows is to mount *more grain mounts*, not to size a primary sample.
5. **Title-vs-content mismatch on (ii).** "The sampling and phase characterisation of black mass" contains "sampling", but the deposited abstract describes phase characterisation by microscopy, SEM-EDS, X-ray CT and LA-ICP-MS. Nothing in the abstract declares a variance budget, and its material is explicitly post-crushing black mass.
6. **Front-matter discrepancy on (ii).** Crossref gives the publisher as "BD-Verlag" for a TOS Forum (WCSB10 proceedings) item. Reported as served; not reconciled.
7. **Read-level limits, stated so they are not mistaken for findings.** (i) read as accepted manuscript only — publisher route robots-refused, so typeset pagination unseen. (ii) read at deposited-abstract level only, with **no verbatim string obtained**; its full text is COULD NOT READ. (iii) is NOT FOUND at search level with every candidate unread.
8. **Spurious DOI route.** A search for the literal string `"10.1255/tosf.166"` returned `impopen.com/subs/tosf/v20/S10_0102.pdf`, which is the TOS Forum Issue 10 (2020) editorial (DOI 10.1255/tosf.113). Anyone repeating that route will read the wrong document.
9. **Absence-of-a-different-thing caution.** (ii) notes that "more samples are needed" and that some phases stay unassigned. That is a remark about its own black-mass dataset, not a flag of the missing plant-gate sampling protocol.
