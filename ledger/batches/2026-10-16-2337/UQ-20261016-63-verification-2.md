# UQ-20261016-63 verification 2 - working notes

## Searches (4 of 7 used; none refused)
1. Wolff Chong Auffhammer exact title -> found Economic Journal 121(553):843-870 (2011), NBER w16572, IZA/other WP versions.
2. Goes data vintage WDI/PWT/Maddison -> I4R Discussion Paper 023 (Goes, RWI). Also unrelated: Johnson et al. "Is newer better?" (NBER w15455, PWT revisions) - not Goes.
3. Revision analysis of WUENIC/UN IGME/MMEIG vintages -> only IGME methods papers (PMC4094389, PMC3429386), IGME vs IHME comparison, WUENIC notes. No revision/efficiency analysis seen (snippets only).
4. WUENIC vintages revision analysis -> WUENIC country pdfs, WHO notes, IHME vaccination coverage GBD paper (Zumla/Local Burden). No revision analysis seen.

## Fetches (5 of 6 used)
- OPENED ideas.repec.org/a/ecj/econjl/v121y2011i553p843-870.html : abstract summary (health, education, income; 3 error sources; up to 34% misclassified; replicated prior studies, parameters shift up to 100%). Series not itemised on page.
- OPENED rwi-essen.de .../023_I4R_Goes.pdf : Goes, I4R DP 23, March 2023.
- OPENED nber.org/system/files/working_papers/w16572/w16572.pdf (3 calls: components/replication; Section 5 and Table 6 via offset; exact-string check).
- Not opened: PMC/EuropePMC (blocked), publisher DOI page, PubMed, any IGME/WUENIC paper in full.

## Exact strings checked (NBER w16572, via summariser)
- "life expectancy is revised much less" FOUND ("In contrast, life expectancy is revised much less.")
- "Population Division of the UN Department of Economic and Social Affairs" FOUND (footnote 3)
- "up to 34%" FOUND (abstract: "We find that up to 34% of countries are misclassified...")
- "key parameters... vary by up to 100%" reported by summariser (sect. 1/5; not string-checked individually)
Caveat: summariser output; not verified against PDF directly. Working-paper version, not the published EJ text.

## Conclusions
Wolff et al: unit = country(-year) HDI components/index; endpoint = HDI value, rank, development category (low/med/high); comparator = HDI as originally published vs revised vintage (fall 2006 UNDP data, 1999-2005 vs 2006), and original vs adjusted formula/cutoffs; estimand = size/variance of revision (data-update, formula, threshold error), misclassification share, and shift in coefficients of prior regressions. Components: life expectancy (UN Population Division, a modelled demographic series - yes, one is), adult literacy, gross enrolment (UNESCO), GDP per capita PPP (World Bank). So NOT national-accounts/education only. Does re-run: Noorbakhsh (2006) convergence regression (Table 8); also inequality/aid descriptive uses. Not a systematic re-run of many published results; sect 5.1-5.2 are descriptive.
Goes: I4R DP 23 (2023), International Organization 2005-2020; 459 articles, 173 used cross-country macro data; re-ran THREE studies (de Soysa & Neumayer 2005; Vreeland 2008; Goldstein, Rivers & Tomz 2007) with WDI/PWT/Maddison vintages. Unit = country-year (dyad-year for GATT study); endpoint = key coefficient sign/significance; comparator = original vs alternative vintage/source; estimand = sensitivity of regression coefficient to vintage.
Q4: nothing found doing a revision analysis (moments, serial correlation, efficiency test) on WUENIC/IGME/MMEIG release vintages in 2 searches. Absence in 2 searches is weak evidence only.
