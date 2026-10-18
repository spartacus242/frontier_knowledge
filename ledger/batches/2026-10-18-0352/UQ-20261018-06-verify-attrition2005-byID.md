# UQ-20261018-06 verify "Attrition of Ground Weather Observations during Hurricane Landfall" (10ACWE 2005)

READ LEVEL: ABSTRACT ONLY (landing record + MARC/BibTeX exports). Full text/PDF NOT reached.

## Routes (7 searches budget used: 5; 7 fetches used: 7)
F1 WebFetch invenio.itam.cas.cz/record/4269 -> ROBOTS_DISALLOWED
S1 WebSearch exact title -> only the ITAM record + exports; no DOI, no other host
F2 WebFetch record/4269?ln=en -> OK. Authors/affiliations blank; abstract; no files; no DOI; created 2014-11-18
F3 WebFetch record/4269/export/hx (BibTeX) -> OK. author = "Blessing, Collette M."; title field empty; no abstract/URL
S2 WebSearch title+Blessing -> nothing new (sister records 4350, 4328, 4178)
S3 WebSearch Blessing/Chowdhury/ASOS -> nothing relevant
F4 WebFetch record/4269/export/hm (MARC) -> OK via summariser (refused verbatim reproduction as "restricted/copyrighted"): author Collette M. Blessing; contributor Forrest J. Masters; Proceedings 10ACWE, AAWE 2005; paper number 102; says a PDF link to the author's contribution is hosted on ITAM Invenio; NO affiliations reported. Exact PDF URL not given.
F5 WebFetch record/4350 (sister record) -> authors blank too; no use
F6 WebFetch record/4269/export/xm -> ROBOTS_DISALLOWED
S4 WebSearch site-restricted invenio.itam.cas.cz -> only proceedings record 4178
F7 WebFetch record/4178 (proceedings) -> ROBOTS_DISALLOWED
S5 WebSearch Collette Blessing Forrest Masters UF -> no author copy; Masters dissertation (fcmp.ce.ufl.edu) and AMS 32Hurr paper 293983 surfaced but NOT opened
S6 WebSearch exact title+Blessing+Masters -> nothing new
Not tried (budget): PDF itself, AMS confex 32Hurr Paper293983, Masters dissertation PDF, Semantic Scholar. Not tried by design: PMC/Europe PMC, Unpaywall.

## Findings
Q1 Exists with that title in 10ACWE proceedings: yes (record, paper number 102 per MARC). Authors: Collette M. Blessing (BibTeX + MARC), Forrest J. Masters (MARC "contributor"; unclear whether coauthor or role). Affiliations: NOT FOUND in anything read. (UF Masters link is my inference only, not read here.) Note: the HTML record shows authors blank; names only in exports, via summariser.
Q3 Abstract (HTML record, summariser returned it in segments, so each string checked on its own):
 (a) "almost 25% of the stations failed to report" -> appears: "...at the onset of tropical storm force winds, almost 25% of the stations failed to report."
 (b) "over 90% of the stations ceased to communicate" -> appears: "At Saffir-Simpson Category 1 wind speeds, over 90% of the stations ceased to communicate."
 (c) "All stations that experienced Saffir-Simpson Category 2 wind speeds failed." -> appears as given.
 All three in the ABSTRACT only; denominators are "the stations" in the study, not defined in the abstract; conditioning is storm wind speed category, aggregate over stations (per-station outcome, pooled).
 Caveat: Bin differs between (a) onset of TS-force winds and (b) Category 1. A MARC summary paraphrased "above Category 1" -- the HTML record wording is "At ... Category 1".
Q4 Frame: 12 cyclones 1998-2004 CONFIRMED (Bonnie, Earl, Bret, Floyd, Irene, Lili, Claudette, Isabel, Charley, Frances, Ivan, Jeanne). ASOS and "its predecessor" AWOS: abstract spells AWOS as "Automated Surface Weather Observing System" (HTML) -- note, usual name is Automated Weather Observing System; MARC summary used that. NCDC: "Records available in the National Climatic Data Center indicate" CONFIRMED. Outcome words "failed to report", "ceased to communicate", "failed": CONFIRMED in abstract. Conditioning: Saffir-Simpson category wind speeds the stations "experienced": CONFIRMED as wording; method not given.
Q5 NOT FOUND in abstract; full text COULD NOT BE READ. How wind speed was assigned at a failed station is unknown from what I read.
Q6 NOT FOUND in abstract; full text COULD NOT BE READ. Nothing in the abstract on a model, CI, design values or return levels.
