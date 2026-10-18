# UQ-20261018-05 verify Manrique-Rodriguez 2021

Read level: FULL TEXT of the Springer article page, read through a summariser (no abstract text returned; Key Points only; no verbatim long quotes). Bibliographic data from Crossref API. Not read as PDF.

## Calls
Searches (1 of 6): "Manrique-Rodriguez Drugs in R&D 2021 21:39-64 intravenous admixtures pH osmolarity" -> found UPF repository, PMC (blocked, not opened), ivteam, CUN.
Fetches (6 of 6):
1. repositori.upf.edu item -> Access Denied.
2. ivteam.com summary page -> secondary summary: says 112 drugs, 307 admixtures, 123 (40%) high risk; thresholds >600 mOsm/L, pH <4 or >9, vesicant. (secondary; 112 contradicted by primary which says 106)
3. link.springer.com/article/10.1007/s40268-020-00329-w -> full text via summariser: methods, thresholds, no outcomes.
4. api.crossref.org/works/10.1007/s40268-020-00329-w -> bibliographic metadata.
5. doi.org/10.1007/s40268-020-00329-w -> fetch error.
6. Springer again, targeted prompt -> 106 drugs/183 concentrations/307 admixtures; instruments; 123 (40.0%) high risk; no limitations section, no outcome data.

## Findings
1. Exists. Silvia Manrique-Rodriguez, Irene Heras-Hidalgo, M. Sagrario Pernia-Lopez, Ana Herranz-Alonso, M. Camino del Rio Pisabarro + 27 more (32 authors). "Standardization and Chemical Characterization of Intravenous Therapy in Adult Patients: A Step Further in Medication Safety". Drugs in R&D 21(1):39-64, March 2021 (online 21 Dec 2020). DOI 10.1007/s40268-020-00329-w. PMID 33346878 (per ivteam).
2. MEASURED. Osmolality by freezing-point depression, Fiske Model 210 Micro Osmometer, 3 measurements per admixture; density by pycnometer; osmolarity calculated = osmolality x density. pH by Crison 2006 meter, mean of 3 readings. Paper states no label/literature values existed for these admixtures; literature used only for concentrations/compatibility. Vesicant status was NOT measured (from labelling/literature).
3. Yes, 307. Sentence: "The characteristics of the 106 drugs, corresponding to 183 different concentrations and 307 different admixtures, are shown in Table 2." Counts distinct admixtures (drug concentration x diluent, NS or D5W, plus 0.45% NaCl for some; brand variants). Exact definition of "admixture" not stated explicitly (summariser). Note: ivteam says 112 drugs; Springer text says 106 (111 initial list, 98 entered Delphi). 123 (40.0%) admixtures high risk.
4. NOT FOUND. Read the full article body via summariser; no patient outcome data. Phlebitis only as background ("31 per 100 catheters" from other literature). No extravasation/catheter failure outcomes. Algorithm for vascular access is proposed, not validated; caution statements only.
5. FOUND, discussed and adopted as tiers. Risk tiers <450 low, 450-600 moderate, >600 mOsm/L high (expert panel; attributed to other authors, refs 55-57 for 450-600; refs 11, 32, 36 for ~600 as peripheral limit). Infusion Therapy Standards of Practice (ref 5) current 900 mOsm/L for central access; earlier edition (ref 33) 600 mOsm/L and pH 5-9 for central. pH: not lower than 6.5 tolerated by peripheral veins (experimental, ref 58); pH <4 or >9 (refs 59, 60); authors themselves consider pH 5-7.5 potentially suitable peripherally (plasma buffering). Summariser paraphrase; ref numbers from summary, not independently checked against reference list.
