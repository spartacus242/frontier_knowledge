# UQ-20261018-09 verify Groussin et al. 2019

Read level: PDF (arxiv.org/pdf/1905.01156 via summariser), covering abstract and Sect 1 to start of 3.3 only (cut at "Figu"). Sect 4 (structure, dielectric) and conclusions NOT seen.

## Calls
1. WebFetch arxiv.org/abs/1905.01156 (no scheme): invalid URL, no result.
2. WebFetch arxiv.org/pdf/1905.01156: OK, strength sections.
3. WebFetch https://arxiv.org/abs/1905.01156: OK, title/authors/DOI; no journal ref shown.
4. WebFetch arxiv pdf (framing question): OK, text truncated at Sect 3.3.
5. WebFetch doi.org/10.1007/s11214-019-0594-x: error.
6. WebFetch arxiv pdf offset 60000: OK, confirms coverage ends in 3.3.
7. WebSearch (title query): found mirrors (oro.open.ac.uk, stir, INAF), not opened.
8. WebFetch export.arxiv.org/abs/1905.01156: journal ref "Space Science Reviews 215 (2019)"; 66 pages.

## Findings
1. Confirmed. Title as given; authors Groussin, Attree, Brouet, Ciarletti, Davidsson, Filacchione, Fischer, Gundlach, Knapmeyer, Knollenberg, Kokotanekova, Kuhrt, Leyrat, Marshall, Pelivan, Skorov, Snodgrass, Spohn, Tosi. SSRv 215 (2019); DOI 10.1007/s11214-019-0594-x. Volume/year from arXiv record, not from Springer.
2. Remote (Sect 3.1.2.1), attributed to Groussin 2015: tensile 3-15 Pa, compressive 30-150 Pa at 5-30 m scales (both confirmed); boulder cohesion 4-30 Pa (Groussin 2015). Vincent 2017: cliff collapse cohesion 1-2 Pa at tens-of-metre scales globally (so "cohesion 1-2 Pa" is right but is Vincent 2017 cliffs, not Groussin 2015). Attree 2018a overhangs 0.02-1.02 Pa. Abstract: global tensile strength under 100 Pa.
3. In-situ: "a compressive strength between 3.5 kPa and 12 kPa could be derived from +Y-foot data" present. "about 10 kPa or less" NOT verbatim; actual: "the uniaxial compressive strength of the material is unlikely to exceed ~10 kPa" (Biele 2015). MUPUS: "at least 2 MPa is required to frustrate the penetration of MUPUS" present (Spohn 2015). Also "an average compressive strength of 2 kPa"; synthesis "tensile strength of typically 1.8-980 kPa".
4. Framing: leans (a), physics. Sentence "the strength is a scale dependent parameter" present but in Sect 3.1.1 (pre-Rosetta general), followed by "The general trend is a decreasing of the strength with increasing scale." Abstract: "The properties of the top layer (the first meter) are not representative of that of the bulk nucleus." Layering (2-3 subsurface layers, Sect 3.2.2; harder shallow layer 10s of cm, Sect 3.3), temporary sintering hardening. Paper never explicitly compares remote vs Philae numbers in the sections read, and never calls the remote method wrong. Caveat: the sentence on scale dependence is not tied by the paper to the 67P remote/in-situ gap in the text I saw; that link is inference.
5. NOT FOUND (in ~Sect 1-3.3). Ratios present are unrelated (E/sigma_c ~100-400; sigma_c/sigma_T ~10).
6. NOT FOUND. Nearest is the MUPUS penetration limit, an instrument result.
