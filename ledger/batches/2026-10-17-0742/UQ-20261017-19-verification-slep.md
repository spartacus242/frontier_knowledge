# UQ-20261017-19 verification notes (SLEP / Carter-Heinemann / DSCSA)
Budget used: 5 searches (of 8), 6 fetches (of 6). No search refused. Fetch pool exhausted before DSCSA primary source could be opened.

## Fetches
1. https://onlinelibrary.wiley.com/doi/10.1002/jps.20636 -> CLIENT_ERROR (not read)
2. https://www.sciencedirect.com/science/article/pii/S0022354916322985 -> ROBOTS_DISALLOWED (not read; PII was guessed from memory, may be wrong anyway)
3. https://zenodo.org/record/1229249 -> OPENED; record carries the Lyon 2006 ABSTRACT only (authors field blank).
   Strings: "This report summarizes extended stability profiles for 122 different drug products (3005 different lots)."
            "88% of the lots were extended at least 1 year beyond their original expiration date" ; "for an average extension of 66 months"
4. https://pharmacy.wisc.edu/.../m1270pswc-aaps2010webmmrs_0.pdf -> opened; cites Lyon 2006 only in passing; no 3005/88%/66; own regression is not Lyon's.
5. https://opus.bibliothek.uni-wuerzburg.de/files/18069/Zilker_Markus_The_stability.pdf -> opened; secondary review. "In 2006, Lyon et al. reported the results of 122 different drug products that had participated in SLEP since 1986." ; SLEP: "Calculation to determine the new expiry date is carried out by means of individual statistical extrapolations." (this is about SLEP generally, not attributed to Lyon). Nothing on Lyon's fit or storage conditions.
6. https://pmc.ncbi.nlm.nih.gov/articles/PMC6134310 -> opened (PMC answered). Carter & Heinemann, J Diabetes Sci Technol 2017 online Dec 21 (issue 2018;12(4):839-841), doi 10.1177/1932296817747292.

## Searches
1. Lyon title + 3005 lots -> Zenodo record, Wuerzburg thesis, Wisconsin pdf found
2. Lyon SLEP storage/pass-fail query -> no new primary source (Zenodo again; trade/blog pages not used)
3. Carter Heinemann 2018 insulin -> PMC links, none identified without opening
4. Carter Heinemann J Diabetes Sci Technol -> PMC6134310 etc.
5. DSCSA dispenser TI/TH/TS (allowed domains fda.gov, cornell, govinfo, congress) -> returned links only: law.cornell.edu/uscode/text/21/360eee-1 ; govinfo USCODE-2024 sec360eee-1 pdf ; fda.gov/media/171666/download ; FDA dispenser compliance-policy guidance. NONE OPENED (fetch pool gone).

## Conclusions
Q1a: abstract confirms 122 products, 3005 lots, 88% extended >=1 yr, mean 66 months (abstract read via Zenodo). Full text NOT read.
Q1b: COULD NOT READ full text, so cannot quote what the analysis fits. Abstract describes "extended stability profiles"; no evidence seen of per-lot degradation-slope model. Undetermined.
Q1c: Storage conditions NOT established from any source I read. Not stated in the abstract or secondary sources opened.
Q2: Carter & Heinemann is JDST 2017/2018 (not SAGE-year 2018 online; issue 2018), cross-sectional single-time-point concentration measurement; no model of storage time or temperature. Source: PMC page summary via fetch tool (summariser), not verbatim full text.
Q3: NOT answered from primary source; links found but unopened. Statement from memory flagged as unverified.
