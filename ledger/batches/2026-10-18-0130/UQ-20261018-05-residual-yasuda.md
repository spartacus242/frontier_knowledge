# UQ-20261018-05 Yasuda 2025 (Emerg Med Int 4457109) working notes

READ LEVEL: ABSTRACT ONLY (via ivteam.com abstract page) plus DOAJ metadata record. Results/methods body NOT opened.

## Routes (8 fetches, 3 searches)
F1 http://hdl.handle.net/10072/436650 -> fetch error
S1 title search -> links to PMC (blocked), ivteam, DOAJ (2022 paper), PLOS One 2025 paper, webvpn mirror (banned)
F2 https://ivteam.com/?p=266455 -> abstract + citation only (full text behind Wiley link)
F3 doaj.org search URL -> fetch error
F4 onlinelibrary.wiley.com/doi/epdf/10.1155/emmi/4457109 -> fetch error
F5 api.semanticscholar.org DOI lookup -> openAccessPdf = Wiley pdfdirect (dead route); PMCID 12074845, PMID 40364916
S2 doaj title search -> same set
F6 doaj.org/api/search/articles/doi:... -> metadata only; no abstract text; fulltext link = dx.doi.org; trial reg UMIN000028019
F7 research-repository.griffith.edu.au search -> fetch error
S3 extended search for variance terms -> no hit on the paper's body text
F8 research-repository.griffith.edu.au/handle/10072/436650 -> fetch error

## Findings (abstract level only)
Q2 abstract: 3,410 PIVCs, 1,351 patients, 23 ICUs Japan; noradrenaline via 91 PIVCs (2.6%) in 70 patients (5.2%). Differs from Front Med 2022 (3,429 catheters).
Q3 abstract: total noradrenaline dose via PIVCs as time-dependent variable (per-catheter wording in body not seen).
Q4 abstract: HR 1.06 (0.93-1.20); spline suggests risk above 6 mg (lower CI >1). Body "post-hoc change point" wording not seen.
Q5 variance component: COULD NOT READ body/supplement. Abstract does not mention one (absence in abstract is not a finding).
Q6 levels: COULD NOT READ methods.
Q7 pH/osmolarity: COULD NOT READ (not in abstract).
Q8 future question: COULD NOT READ (not in abstract).
