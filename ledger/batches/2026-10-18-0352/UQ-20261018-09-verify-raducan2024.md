# UQ-20261018-09 verify Raducan 2024 (Dimorphos strength)

Read level: FULL TEXT, but only through a summariser (nature.com article page and arXiv PDF 2403.00667). No raw text seen; quoted strings are summariser outputs.

## Route log (1 search, 7 fetches; budget used up)
1. Search "Raducan 2024 Nature Astronomy Physical properties ... DART impact": OK. Gave arXiv 2403.00667, UC3M e-archivo, HAL hal-04668497, Imperial Spiral.
2. Fetch doi.org/10.1038/s41550-024-02200-3 (DOI recalled from memory, not given in task): 302 redirect to nature.com (cross-host, not followed).
3. Fetch nature.com/articles/s41550-024-02200-3 (bare): error.
4. Fetch arxiv.org/pdf/2403.00667: OK, full text.
5. Fetch HAL record: blocked by Anubis. Nothing read.
6. Fetch nature.com URL with the redirect's ?code=...&error=cookies_not_supported: OK, full article (open access).
7. Fetch nature.com same URL, verbatim-focused prompt: OK.
8. Fetch arXiv pdf, verbatim-focused prompt: OK.

## Citation
Raducan, S.D., Jutzi, M., Cheng, A.F., Zhang, Y., Barnouin, O., Collins, G.S., Michel, P., Rossi, A., May, B.H. et al. (36+ authors; full list not seen). "Physical properties of asteroid Dimorphos as derived from the DART impact". Nature Astronomy 8(4), 445-455 (2024), published 26 Feb 2024, open access. DOI 10.1038/s41550-024-02200-3. arXiv:2403.00667. (Pages, not an article number.)

## Findings
- Strength values (Pa): best fit "less than a few pascals" (Abstract; ejecta-cone section; binary-formation section). Y0 ~4 Pa = threshold of gravity-dominated regime (Intro), not a best fit. "probably lower than ~50 Pa" for f=0.4, phi0=45% (Results). "must not exceed ~500 Pa" (ejecta-cone section). Simulated range explored 0-50 Pa (Results) / 0-500 Pa matrix cohesion (Table 1 per arXiv pass). Boulder tensile strength ~10 MPa (not matrix cohesion). Didymos "10s Pa" (not Dimorphos).
- Quote (a) "less than a few Pa": NOT FOUND in nature.com pass; actual wording "less than a few pascals". First arXiv pass claimed "less than a few Pa" appeared verbatim; the two later verbatim-focused passes (one nature.com) said it does not. CONFLICT among summariser outputs; likely abbreviation by summariser. Treat as not verified verbatim.
- Quote (b) "similar to Ryugu and Bennu": NOT FOUND. nature.com abstract per verbatim pass: "like asteroids (162173) Ryugu and (101955) Bennu". arXiv pass: "similar to asteroids (162173) Ryugu and (101955) Bennu". Wording differs between versions or summariser; neither equals the string.
- Central question: yes, the 50 Pa figure is conditional: "the cohesion on the surface of Dimorphos is probably lower than ~50 Pa" with f=0.4, phi0=45% as assumed inputs (arXiv: "likely lower than ≈50 Pa (Fig. 1c, d)"; "f=0.4 is a lower limit for geological materials"). Also "lower bulk densities (rho_B < 2000 kg/m3) or higher matrix porosities (phi0 > 55%) would require higher cohesion to match the observations" (no number attached). Baseline cohesionless case f=0.55, rho_B=2200. Sweep f 0.4-0.7, phi0 35-65%. The ~500 Pa is a ceiling from ejecta cone/mass, "must not exceed ~500 Pa"; Y0=500 Pa case has beta=2.26±0.28 (arXiv Fig. 2 caption). I did NOT see text saying the friction/porosity dependence moves the bound from ~50 to ~500; the two figures are separate statements. Which f/phi0 attach to 500 Pa: arXiv pass says not stated in that sentence; nature pass says suite with assumed packing/porosity/grain density. UNRESOLVED.
- One-sided: all strength values are upper bounds ("less than", "lower than", "must not exceed"); 0-50 / 0-500 Pa are explored input ranges, not result intervals. Two-sided intervals exist only for other quantities (beta 2.2-4.9, ejecta mass, opening angle, macroporosity).
- Pre-encounter prediction comparison: NOT FOUND in the text read (no signed error/ratio). Only pre-impact axis ratio 1.02±0.02, and bulk density 2400 kg/m3 best estimate; agreement with observations stated qualitatively.
