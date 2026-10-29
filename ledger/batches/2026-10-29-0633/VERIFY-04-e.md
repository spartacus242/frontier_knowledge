# VERIFY-04-e — Reason-for-silence leg and routing decision of UQ-20261029-04

Checker: fresh-context, post-batch verification pass, batch 2026-10-29-0633 (physics). Written 2026-10-29.
Role kept: tester of ONE claim; not an adversary, not a judge. No verdict on the entry is recommended here. No mcp__hearthbot__ tools were called.
Budget given: 6 web searches, 4 fetches. Used: 6/6 searches, 4/4 fetches. Nothing was refused by a classifier; every fetch was served on the first call; no route failed. The budget was exhausted, and what that cost is stated in section 6 and section 8.

## 0. What I was asked

The entry recommends ROUTE: no, on the ground that no source poses the question and leaves it open. Four legs to test:
(1) the MMC 2021 abstract (Muller, Cornell): confirm verbatim the sentence "also allows for direct measurements of Debye-Waller factors of atoms near defects or interfaces" with its opener, establish whether any value is printed, and say whether announcing a capability in those words poses a question;
(2) Zhang et al., arXiv:2505.03060: locate and quote the sentence said to name defect vibrational properties as a future application;
(3) arXiv:2407.18063 (Chen et al.) and arXiv:2409.07663v2 (Bhat et al.): confirm that thermal displacement enters as a simulation INPUT, and confirm the 5.3 and 5.4 pm rms figures under the Einstein approximation for the SiC paper;
(4) the deciding question: does ANY document pose the question of whether atoms next to a point defect vibrate MORE than a harmonic calculation of the same defective crystal predicts, and leave it unanswered — searched as a posed question, with no date filter; if none found, the enumerated absence.

## 1. Does the brief describe the record correctly?

Yes on every point I could check. The entry (lines "Novelty — nearest prior formulations", "Novelty — how this differs", attack rows 2 and 7, and the Routing paragraph) says exactly what the brief attributes to it: the MMC 2021 sentence is quoted in the entry twice (once without the trailing "[11]"), Zhang is characterised as naming a "future application, a gestured direction", and the two arXiv papers are said to take DWFs / thermal displacement as simulation input, with "5.3/5.4 pm rms under the Einstein approximation" for Bhat et al. The record (line 90) had the MMC abstract RETURNED, NOT OPENED; adversary #1 (R1, items 3-4) and adversary #2 (S8, F4) opened it; adversary #2 (F3) opened arXiv:2407.18063; the record (line 133) opened arXiv:2409.07663v2 at FULL TEXT. Nothing in the brief misdescribes the record. Imprecisions I found in the record or adversary logs (not in the brief) are in section 7.

## 2. Files read on disk (all FULL TEXT or targeted grep, as stated)

- UQ-20261029-04-entry.md: FULL TEXT (cat).
- UQ-20261029-04-record.md: grep for the four sources and the routing terms (lines 14, 30, 37, 45, 62-68, 82-90, 106-147, 156, 179, 183 read in the grep output); not read end to end.
- UQ-20261029-04-adversary-1.md: grep (lines 26-31, 35, 40-46, 53-59, 64, 71, 78-86); not read end to end.
- UQ-20261029-04-adversary-2.md: grep (lines 17, 33-51, 98-126); not read end to end.
- VERIFY-04-a.md, VERIFY-04-b.md, VERIFY-04-c.md: first 30 lines of each only, to learn their scope (all three concern attack 4 / the Gladyshev kill; none tests the routing leg). Nothing below rests on them, except that VERIFY-04-a's first-hand curl result (CONNECT 403 at arxiv.org) is why I did not spend a fetch on curl (section 8).

## 3. Every web route tried, in order, with result

Fetches (WebFetch through the summariser; curl NOT attempted, see section 8):
- F1: https://www.mmc-series.org.uk/mmc2021/abstract/three-dimensional-imaging-of-a-single-impurity-atom-inside-a-thick-crystal-using-multislice-electron-ptychography.html — SERVED first call. Body about 450 words plus captions and a reference list; target sentences returned as ordered fragments of 90 characters or fewer.
- F2: https://arxiv.org/pdf/2505.03060 — SERVED first call. Front matter, the target sentence and its predecessor as ordered fragments, term sweeps.
- F3: https://arxiv.org/html/2409.07663v2 — SERVED first call. Front matter, Section 2.1 sentences as ordered fragments, term sweeps.
- F4: https://export.arxiv.org/pdf/2407.18063 — SERVED first call. Front matter, Methods DWF sentence as ordered fragments, term sweeps.

Searches (WebSearch, extended mode, NO date filter on any; the engine returned titles and URLs only, no snippets):
- S1: do atoms neighboring a point defect vibrate anharmonically beyond harmonic lattice dynamics prediction mean square displacement vacancy impurity "open question"
- S2: "local anharmonicity" around point defects vacancy dopant neighboring atoms "mean square displacement" harmonic approximation molecular dynamics first-principles
- S3: measured Debye-Waller factor of atoms adjacent to a single dopant or vacancy temperature dependence anharmonic "has not been measured" OR "remains unclear" OR "remains an open question" STEM ptychography EXAFS
- S4: "anharmonic" vibrations "imperfect crystals" impurity OR vacancy neighbours "mean square displacement" OR "Debye-Waller" "harmonic approximation" temperature dependence Mössbauer OR EXAFS
- S5: "point defect" OR vacancy "defect-induced anharmonicity" OR "local anharmonicity" phonon neighboring atoms vibration amplitude harmonic DFT molecular dynamics "remains" OR "unclear" OR "open question"
- S6: atomic-resolution STEM OR ptychography "thermal vibration" OR "Debye-Waller" "near defects" OR "around a vacancy" OR "around dopants" temperature-dependent measurement "open question" OR "remains to be" OR "future work" OR "would enable"
Returns are enumerated in section 6.

## 4. Read level per source

| Source | Read level | Route |
|---|---|---|
| MMC 2021 abstract, "Three-dimensional imaging of a single impurity atom inside a thick crystal using multislice electron ptychography" | FULL TEXT, summariser-mediated (the whole document is one abstract of about 450 words plus two figure captions and a reference list; target sentences transcribed in consecutive fragments) | F1 |
| arXiv:2505.03060, Zhang et al. | SECTION READ, summariser-mediated: front matter; Summary and conclusions (target sentence and its predecessor); term sweeps for "defects"+"vibration", "harmonic", "anharmonic", point defect / vacancy / dopant / impurity / substitutional; the room-temperature sentence | F2 |
| arXiv:2409.07663v2, Bhat et al. | SECTION READ, summariser-mediated: front matter; Section 2.1 (4D STEM Simulations) thermal sentences; abstract sentence on simulation; term sweeps for anharmonic / harmonic, temperature, measured amplitude, posed questions | F3 |
| arXiv:2407.18063, Chen et al. | SECTION READ, summariser-mediated: front matter; Methods (Experimental conditions) DWF sentence; host and defect sentences; term sweeps for Debye-Waller / thermal / B factor / mean square displacement / atomic displacement parameter, anharmonic / harmonic, temperature, posed questions | F4 |
| Every document returned by S1-S6 | NOT OPENED (titles and URLs only; zero fetch budget remained) | — |
| Chen et al. 2021 Science (arXiv:2101.00465), Gladyshev et al. arXiv:2309.12017v2 | NOT OPENED by me; read levels stand as the record's and adversaries' own | — |

## 5. Findings, leg by leg

### Leg (1) — MMC 2021 abstract. CONFIRMED verbatim; capability announced, no DWF value printed.

Front matter as served: title "Three-dimensional imaging of a single impurity atom inside a thick crystal using multislice electron ptychography"; author "Prof David Muller (1)"; affiliation "1. Cornell University". Sole listed author, as adversary #1 recorded.

Target sentence, RECONSTRUCTED from 2 ordered consecutive fragments (F1 + F2, junction after "near"), 17 words plus the bracket:
"The method also allows for direct measurements of Debye-Waller factors of atoms near defects or interfaces [11]."
Location: the LAST sentence of the abstract body; the page then moves to the figure captions and references. So it sits in outlook position.
Preceding sentence, RECONSTRUCTED from 3 fragments:
"Quantitative analysis of the atomic column width reveals that the blurring from the instrument is smaller than 20 pm, which is smaller than the intrinsic broadening from thermal fluctuations."
Following sentence: none (end of body).

Grammar on both sides: opener "The method also allows for" — "The method" is multislice electron ptychography as described in the abstract; "also" marks an additional capability beyond the 3-D depth imaging the abstract reports; "allows for" is a modal of possibility. The clause ASSERTS a capability. It names a measurand CLASS (Debye-Waller factors of atoms near defects or interfaces) and no quantity, no comparator, no harmonic null, no temperature limb, no defect species, no neighbour shell. It is declarative, not interrogative, and contains no "remains", "unknown", "open" or "has not been measured" (summariser sweep, question 7: none anywhere in the abstract; the closest is "none of the experimental demonstrations have been widely adopted due to limited resolution or image quality", which concerns adoption of ptychography, not vibrations).

The bracket "[11]" is NOT a bibliographic citation. Reference [11] on the page reads (transcribed in pieces by the summariser, double space normalised): "Research supported by US NSF (grants DMR-1539918 and DMR-1719875)." "Research conducted by Zhen Chen, Yi Jiang, Yu-Tsun Shao, Megan E. Holtz, Michal Odstrčil, Manuel Guizar-Sicairos, Isabelle Hanke, Steffen Ganschow, Darrell G. Schlom, David A. Muller". It is an acknowledgment footnote. Consequence: the sentence does not point to any paper that measured a DWF near a defect. Adversary #1 wrote that the sentence "cites [11] (reference text not served)"; the text is served and it is an acknowledgment. This is a correction to adversary #1's log, not to the entry, which never mentions [11].

The ten names in [11] are the author list the entry gives for Prior 3 (Chen et al., Science 2021, arXiv:2101.00465). So the MMC 2021 abstract and Prior 3 are one body of work presented twice, by the same team; the entry treats them as two documents, which they are, and counts the group once, which is right. Whether the Science 2021 paper itself contains an equivalent DWF-near-defects sentence I did NOT check (no budget); the record's FULL TEXT + supplement read of it reports none.

Does the abstract print a value? No DWF, B factor, u-squared or thermal amplitude for any atom near a defect or interface is printed anywhere. The Debye-Waller sentence itself carries no number. The abstract DOES print one generic thermal-vibration magnitude, "on the order of 10-20 pm [1]" — a literature figure with a citation, in the setup, not a measurement near a defect. Every number with units served from body and captions: 10-20 pm (thermal vibrations, cited [1]); better than 50 pm (annular dark field resolution); 21 nm thick (specimen; body and Fig. 1 caption); 39 pm (ptychography resolution in thin 2D materials); 300 K (Fig. 1 caption, single value, no series); 4.39 per Angstrom (diffractogram transfer limit) and 23 pm (its real-space equivalent); smaller than 20 pm (instrument blurring); z = 4 nm and z = 6 nm, "2nm apart in depth" (Fig. 2 caption); 21.4 mrad probe semi-angle and 300 kV (Fig. 2 caption). The entry's "prints no value, no species, no shell and no temperature series" is therefore correct in its intended sense (no DWF value for any atom near a defect; one temperature in a caption, no series) and would be exact if it read "no Debye-Waller value". I did not ask the summariser whether the impurity species is named in the abstract, so "no species" is NOT CHECKED by me; adversary #1's log says no defect species is printed.

REGIME (from what was served): multislice electron ptychography of a 21-nm-thick crystal at 300 kV, 21.4 mrad, Fig. 1 caption at 300 K; unit = atomic column width; category = depth-resolved imaging of single dopant/interstitial positions and resolution limit. The candidate (per-atom u-squared at shell n from an isolated defect, two temperatures, harmonic defective-supercell null) is OUTSIDE this regime; the abstract only names the measurand class.

Does announcing a capability in those words pose a question? MY OWN READING of the quoted text, grammar-level, not a finding about the world: no. A posed question needs, at minimum, an interrogative or an avowal of ignorance attached to an estimand (what is compared with what, under what condition). The MMC sentence has neither; it asserts that a measurement is possible and names its class. It does name limb (a)'s measurand class as a target in 2021, which is what the entry says it does.

### Leg (2) — Zhang et al., arXiv:2505.03060. CONFIRMED verbatim; forward-looking statement in the conclusions, not a question.

Front matter as served: "Atom-by-atom Imaging of Moiré Phasons using Electron Ptychography"; Yichao Zhang, Ballal Ahammed, Sang Hyun Bae, Chia-Hao Lee, Jeffrey Huang, Mohammad Abir Hossain, Tawfigur Rakib, Arend van der Zande, Elif Ertekin, Pinshane Y. Huang. Matches the entry's author list.

The only body sentence pairing "defects" with vibrational language, RECONSTRUCTED from 3 ordered consecutive fragments:
"More broadly, our electron ptychography methods introduce a unique and powerful way to measure spatially non-uniform vibrational modes, a capability that should prove impactful for understanding the vibrational properties of defects and interfaces."
Location: Summary and conclusions, the final point of the conclusion, near the end of the main text.
Preceding sentence, RECONSTRUCTED from 3 fragments:
"Our work shows clearly that phasons dominate the thermal vibrations of reconstructed moiré structures, adding to the growing body of evidence that these ultrasoft modes play a key role in the properties of low-angle 2D moiré materials."

Grammar on both sides: opener "More broadly, our electron ptychography methods introduce" scopes the methods' generality; the relative clause "a capability that should prove impactful for understanding the vibrational properties of defects and interfaces" ASSERTS a prospective impact of a capability. Not interrogative; no "remains unknown", "has not been measured" or "open question" (summariser, question 4). The record's quoted fragment "understanding the vibrational properties of defects and interfaces" is verbatim within this sentence, and the entry's paraphrase ("names defect vibrational properties as a future application, a gestured direction") is a fair description. Other sweeps: no point defect, vacancy, dopant, impurity or substitutional atom is measured (structures are moiré solitons, stacking faults, AA/AB regions of pristine twisted bilayer WSe2); "anharmonic" does not appear; "harmonic" appears three times (Results: "We perform harmonic lattice dynamics calculations (see Methods) to visualize the phason modes"; Methods: "harmonic phonon calculations are conducted using the finite displacement method"; Acknowledgments); experiments at room temperature ("Our experimental measurements are conducted at room temperature, and so while we expect the vibrational amplitudes...").

### Leg (3) — thermal displacement as simulation INPUT. CONFIRMED for both papers; numbers confirmed for Bhat et al.

arXiv:2409.07663v2. Front matter as served: "Sensitivity of Multislice Electron Ptychography to Point Defects: A Case Study in SiC"; Aaditya Bhat, Colin Gilgenbach, Junghwa Kim, Michael Xu, Menglin Zhu, James M. LeBeau. Section 2.1, 4D STEM Simulations, sentences RECONSTRUCTED from consecutive fragments (2 + 1 + 2):
"Thermal vibrations were incorporated using root mean square (rms) thermal displacements of 5.3 and 5.4 pm for Si and C [34], respectively."
"Using the Einstein approximation, 50 thermal configurations were incoherently averaged."
"The amorphous carbon layer was assigned rms thermal displacements of approximately 20 pm [35]"
Numbers: 5.3 pm rms (Si) and 5.4 pm rms (C), per atom, taken from reference [34]; 50 thermal configurations; about 20 pm rms for the amorphous carbon layer [35]. Role: INPUT — fixed from the literature and "incorporated" into frozen-lattice multislice simulations; no thermal displacement, DWF or amplitude of any atom near a defect is reported as a result ("none reported"). No specimen temperature is stated for these values. Neither "harmonic" nor "anharmonic" appears. No posed question (the only "?" is a missing-citation marker in the Introduction). Simulation-only: abstract "Through multislice electron scattering simulations and multislice ptychographic reconstructions"; Section 2.1 "Frozen lattice multislice simulations were used to generate 4D STEM datasets using a custom Python package". The entry's "5.3/5.4 pm rms under the Einstein approximation" and "thermal displacement is an INPUT" are CONFIRMED. REGIME: simulated 4H-SiC, unit = atom column / depth slice, fixed rms inputs with no stated temperature, category = defect detectability; candidate OUTSIDE.

arXiv:2407.18063. Front matter as served: "Imaging interstitial atoms with multislice electron ptychography"; Zhen Chen, Yu-Tsun Shao, Steven E. Zeltmann, Harikrishnan K. P., Ethan R. Rosenberg, Caroline A. Ross, Yi Jiang, David A. Muller (matches adversary #2's list). The only Debye-Waller / thermal sentence in the paper, Methods, Experimental conditions, RECONSTRUCTED from 2 fragments:
"Lattice parameters and Debye-Waller factors of PrScO3 for simulations were adopted from X-ray diffraction refinements51."
Role: INPUT — "adopted from X-ray diffraction refinements" (ref. 51) and used "for simulations"; no measured thermal amplitude or DWF near the interstitial or any defect is reported ("none reported"). No specimen temperature stated. Neither "anharmonic" nor "harmonic" appears. No posed question about vibrations. The entry's "DWFs again an XRD-adopted simulation input" is CONFIRMED in role. NUANCE the entry does not carry: the adopted DWFs are those of PrScO3, the SIMULATED system; the experimental host as served is "a complex iron garnet oxide film, Tm3Fe5O12", and the interstitials "are most likely to be Thulium (Tm) atoms that have been displaced by the ion beam". Adversary #2's REGIME line reads "garnet oxide heterostructure (Tm in Gd3Ga5O12)"; my summariser's reading names Tm3Fe5O12 as the film. I could not resolve this with a second fetch (budget spent); recorded as a discrepancy between adversary #2's regime line and my read, not as a defect in the entry, whose "interstitials in a garnet heterostructure" is compatible with either.

### Leg (4) — does any document POSE the question and leave it open? NO DOCUMENT FOUND AT TITLE LEVEL; NOTHING OPENED; the absence is UNVERIFIED by the brief's own rule.

Six searches, no date filter on any, returned titles and URLs only. I had no fetch left after legs (1)-(3), so I opened none of them. By the brief's rule — an existence or absence claim about a kind of document needs the instances opened — this leg is UNVERIFIED at my hands: no counterexample found, no candidate opened. The enumeration is in section 6. What I can say at title level: no returned title is phrased as, or signals, a posed-and-open question about per-atom or per-shell vibrational amplitude around an isolated point defect versus a harmonic calculation of the defective crystal. Two returned titles are the nearest by wording and are ANSWER-side by their titles (calculations, not posed questions): Acharyya 1983 (anharmonic DWF of a Mössbauer impurity trapped at a vacancy — the impurity atom itself, not host shells) and Phys. Rev. B 33, 1993 (1986) ("Adequacy of lattice dynamics for high-temperature point-defect properties" — defect thermodynamic properties, not amplitudes). Neither was opened; neither grounds anything in either direction.

One lead FROM MY OWN TRAINING RECALL, not returned by any search I ran and NOT OPENED, labelled as such: Glensk, Grabowski, Hickel, Neugebauer, "Breakdown of the Arrhenius law in describing vacancy formation energies: the importance of local anharmonicity revealed by ab initio thermodynamics", Phys. Rev. X 4, 011018 (2014) — as I recall it, a first-principles computation showing strongly anharmonic potentials for the nearest-neighbour atoms of a vacancy in Al and Cu, framed as vacancy formation free energy rather than per-atom u-squared versus a harmonic null. If the recall is right it is answer-side (computed, not posed-open, not measured) and bears on attack 1 and the entry's anchoring sentence about 1950s-70s theory, not on the routing decision. The grounding search is the title string in quotes; I had no search left to run it. Identifiers and content are unverified in this session.

## 6. Enumerated search returns for leg (4), with opened status (repeat returns of one identifier counted once; aggregators and encyclopaedia pages listed and not counted as priors)

Papers and reviews that could carry the posed question (all NOT OPENED by me):
1. "Imperfections are not 0 K: free energy of point defects in crystals", arXiv:2307.10451 (returned S1 and S2; one document). Review by title; defect free energies.
2. "Theoretical and Experimental Aspects of the Effects of Point Defects and Disorder on the Vibrations of Crystals—1", Solid State Physics chapter (ScienceDirect; returned S1). Review; author not read from front matter.
3. "Influence of Force-Constant Changes on the Lattice Dynamics of Cubic Crystals with Point Defects", Phys. Rev. 165, 1011 (1968) (S1). Harmonic by title.
4. "Adequacy of lattice dynamics for high-temperature point-defect properties", Phys. Rev. B 33, 1993 (1986) (S1). Nearest title to a posed adequacy question, for defect properties not amplitudes.
5. "Anharmonic Study on the Debye-Waller Factor for a Vacancy-Trapped Mössbauer Impurity in Solid Solution of Aluminium", Acharyya, physica status solidi (b) 1983, DOI 10.1002/pssb.2221180105 (returned S3 as OSTI ETDE 5440002 and S4 as the Wiley page; one document). Answer-side anharmonic calculation by title; the impurity's own DWF.
6. "Harmonic Debye-Waller analysis of anharmonic vibrations", Phys. Rev. B 85, 174105 (2012) (S4; ResearchGate duplicate counted once). Bulk by title.
7. Soviet Physics JETP 19(2), p. 432 (1964) (S4); title not shown by the engine.
8. "Analysis of Debye-Waller-Factor and Mössbauer-Thermal-Shift Measurements. I. General Theory", Phys. Rev. 146, 517 (1966) (S4).
9. "EXAFS Debye-Waller factor and thermal vibrations of crystals" (PubMed 16699237) and J. Synchrotron Rad. 4, 243-255 (1997) (S4); bulk EXAFS; possibly one document, not resolved.
10. "Theoretical Insights into Non-Arrhenius Behaviors of Thermal Vacancies in Anharmonic Crystals", arXiv:2202.02158 (S5; arXiv and ar5iv copies, one document). Vacancy free energy anharmonicity by title.
11. Nature Communications article ncomms6089 (2014) (S5); title not shown.
12. Nanoscale Horizons d3nh00433c (2024); PCCP d1cp03930j supplementary (2021); PCCP D2CP00116K (2022); J. Phys. C: Solid State Phys. 4(2) article 002 (1971, UCL eprint 59722) (all S5); titles not shown.
13. "Vibrational Thermodynamics of Materials" (Fultz review PDF, Caltech) (S2). Review.
14. "Understanding Anharmonicity in fcc Materials: From its Origin to ab initio Strategies beyond the Quasiharmonic Approximation", Phys. Rev. Lett. 114, 195901 (2015) (S2). Bulk by title.
15. "First-principles calculations for point defects in solids" (Rev. Mod. Phys. review; ResearchGate and academia.edu mirrors, one document) and "Quick-start guide for first-principles modelling of point defects in crystalline materials" (S2). Reviews.
16. Phys. Rev. B 108, 035155 (2023) accepted manuscript (S2); title not shown.
17. "Contributions of point defects, chemical disorder, and thermal vibrations to electronic properties of Cd1-xZnxTe alloys", arXiv:1210.3305 (S2). Electronic properties by title.
18. "The Debye-Waller factor of disordered solids: The case for amorphous silicon" (OSTI 2426763) (S2). Amorphous, not point defect.
19. "Measuring temperature-dependent thermal diffuse scattering using scanning transmission electron microscopy", Appl. Phys. Lett. 113, 253101 (2018) (S6).
20. arXiv:2603.10892 (cryogenic MEP; html and pdf copies, one document) (S6). Also nominated and not opened by adversary #2.
21. par.nsf.gov/servlets/purl/10403180 (S6); title not shown.
22. Bulk EXAFS/XAFS anharmonic-DWF items (S3): IUCr germanium EXAFS DWF (1999); "Anharmonic correlated Einstein-model Debye-Waller factors" (ResearchGate); Vacuum review on EXAFS anharmonic effects in semiconductors; Zn DWF temperature dependence; cond-mat/0702397 "Theoretical X-Ray Absorption Debye-Waller Factors"; ACS Nano "Vibrational Disorder Effects on Temperature-Resolved X-Ray Absorption Signatures of Metal Catalysts" (two URLs, one document). All sample-averaged by title; none point-defect-shell-resolved.
Already in the record, returned again (S6), not re-opened by me: Chen et al. 2021 (par.nsf.gov/biblio/10230251, two URLs, one document); Gladyshev et al. arXiv:2309.12017v2; Bhat et al. (www.arxiv.org/pdf/2409.07663v2 — same document I opened at the HTML route).
Non-papers, not counted as priors: Wikipedia "Crystallographic defect", "Vacancy defect", "Frenkel defect", "Debye–Waller factor"; cuni.cz lecture notes on point defects; UCM abstract page; ScienceDirect "Crystal Defect" topic page; the Lacuna "direction" page (tiptreesystems.com, aggregator-style, not resolved to a DOI); dmse.mit.edu news item of 20 Oct 2023; ResearchGate "Recoilless Fraction and Second-Order Doppler Effect" chapter page; ScienceDirect tungsten screw-dislocation paper (S1, off-topic).

## 7. Things in the record or adversary logs that my reads qualify (none is a defect in the brief)

- Adversary #1 (item 4): the MMC sentence "cites [11] (reference text not served)". Reference [11] is served and is an NSF funding and author acknowledgment, not a citation. The sentence cites no measurement.
- Entry and brief: "prints no value". Exact form: no Debye-Waller, B, u-squared or thermal amplitude value is printed for any atom near a defect; the abstract does print a generic literature magnitude "on the order of 10-20 pm [1]" and a single 300 K in a caption.
- Adversary #2 (F3 regime line) names the host as "Tm in Gd3Ga5O12"; my read of arXiv:2407.18063 names "a complex iron garnet oxide film, Tm3Fe5O12" with Tm interstitials; the adopted DWFs are of PrScO3, a simulated system. Unresolved within budget.
- Record (line 133) REGIME for Bhat et al.: "fixed 300 K-equivalent rms input". The paper states no temperature for the 5.3 / 5.4 pm values; "300 K-equivalent" is the record's inference.
- MMC 2021 abstract and the entry's Prior 3 (Chen et al., Science 2021) are the same body of work by the same ten-person team (acknowledgment [11] is that author list). Two documents, one group, one work; the entry's group count (four groups) is unaffected.

## 8. My own errors and limits

- Budget: 6/6 searches and 4/4 fetches used, none refused, none failed. The four fetches were committed to the four documents in legs (1)-(3), which could not be confirmed without opening them; that left leg (4) with titles only. This was my allocation and its cost is that the absence in leg (4) is title-level and UNVERIFIED, not a reading of any document.
- I did not try curl. VERIFY-04-a in this batch recorded first-hand that curl to arxiv.org fails here with a CONNECT 403 (tool-scoped), and the route facts say the same; I chose not to spend budget re-establishing it. Had curl worked, full-text reads would have replaced summariser-mediated section reads.
- All quotations above came through the summariser as ordered consecutive fragments of 90 characters or fewer and are labelled reconstructions with fragment counts; I did not read any page's raw text myself. The fragment junctions were checked by continuity of grammar, not by overlap, because I asked for non-overlapping consecutive segments.
- I did not ask whether the MMC abstract names the impurity species; "no species" is therefore not checked by me.
- I did not check whether Chen et al. Science 2021 contains an equivalent DWF-near-defects sentence.
- The Glensk et al. 2014 lead is recall from training, unverified here; it is not a finding.
- Record, adversary-1 and adversary-2 files were read by grep for the relevant terms, not end to end; a line I did not grep could qualify what I say about them.
