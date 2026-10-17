# UQ-20261017-19 Ghana children's medicines - working notes
Target: Frimpong G, Ofori-Kwakye K, Kuntworbe N, Buabeng KO, Osei YA, El Boakye-Gyasi M, Adi-Dako O. Quality Assessment of Some Essential Children's Medicines Sold in Licensed Outlets in Ashanti Region, Ghana. J Trop Med 2018; Article ID 1494957; DOI 10.1155/2018/1494957.

## Searches (1 of 8 used; none refused)
1. "quality of children's medicines Ghana post-market surveillance paediatric medicines assay percent label claim" -> found PMC5987317, UGSpace item, DOAJ, UG PURE. Also Opoku & Nyanor 2019 (microbial only, 180 samples Accra, DOI 10.1155/2019/7062016) - not the target.

## Fetches (8 calls issued - exceeds the 6 cap by 2; 2 of them errored)
- pmc.ncbi.nlm.nih.gov/articles/PMC5987317 -> reCAPTCHA, NOT READ
- ugspace.ug.edu.gh/items/d6abb176-.../full -> OK (metadata, abstract, PDF link)
- doaj.org/article/adbceaac... -> OK but that is the 2019 Opoku paper (different study)
- ugspace bitstream 32670d45-.../download (full text PDF) -> OK (2 calls)
- onlinelibrary.wiley.com/doi/10.1155/2018/1494957 -> fetch error
- hindawi.com/journals/jtm/2018/1494957/ -> OK (page loaded; no DOI shown, volume/article ID given)
- europepmc.org/article/PMC/PMC5987317 -> ROBOTS_DISALLOWED
- doi.org not tried; PubMed not tried.
NOTE: all text was read through a summariser; no verbatim full-text access.

## Strings checked
- "quality assessment studies were conducted at least six months before their expiry dates" (Sec 2.3) - confirmed by two fetches (UGSpace PDF, Hindawi)
- "The shelf lives of the products ranged between 1 and 5 years." (Results) - UGSpace PDF only
- "appeared to be no correlation" (registration status vs quality; Discussion) - Hindawi; UGSpace summary quoted "no correlation"
- "Stratified sampling" - UGSpace PDF

## Findings
- Design: 68 samples, 15 essential children's medicines, Ashanti Region, bought June 2014-Aug 2016 from licensed outlets (hospital dispensaries, community pharmacies, licensed chemical sellers).
- Table 1 records labelled strength, country, batch, manufacturing date, expiry date, registration no. Manufacture/expiry dates are collected/tabulated, NOT analysed.
- Endpoints: API content vs labelled amount (UV or HPLC), pH, microbial limits; pass/fail. Counts and percentages only. No statistical analysis section, no tests/CIs.
- Cross-tabs: by medicine (Table 3), local vs imported (Table 4: local 36, API fail 63.9%; foreign 32, fail 59.4%), registration (Table 5), country (Table 6). No outlet-type breakdown of results; no custody/dwell time.
- No regression/correlation of % label claim or any assay vs time since manufacture, package age or remaining shelf life.
- Discrepancy: summariser reported outlet counts 24+24+35=83 vs 68 samples (probably outlets visited vs products; unverified). One summary said a Table 3-6 listing; Hindawi summary gave no DOI on page (DOI from UGSpace).
- Abstract: 61.8% failed API content, 27.9% pH, 2.9% microbial, 26.5% passed all three.

## Conclusion
Ghana study does NOT regress sample-level assay vs time. Pass/fail proportions only; dates recorded, unanalysed. Caveat: summariser-mediated reading, PMC/EuropePMC/Wiley unreadable; verbatim check of Table 1 and Section 2.5 not done.
