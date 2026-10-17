# UQ-20261017-25 verification notes
Searches run: 5 of 10. Fetches run: 6 of 6 (counting the robots-refused isterre.fr attempt and the 302 redirect follow; cap not exceeded).

## Routes
1. WebFetch isterre.fr/IMG/pdf/tasan-etal-gji2014.pdf (no www): ROBOTS_DISALLOWED.
2. WebSearch Tasan et al: returned www.isterre.fr URL, Hacettepe record, IRD records.
3. WebFetch www.isterre.fr/IMG/pdf/tasan-etal-gji2014.pdf: OPENED (author-accepted manuscript text; read through the page summariser). Source A.
4. WebSearch Stirling & Petersen: USGS pubs page, SCEC, no publisher page URL.
5. WebFetch pubs.usgs.gov/publication/70028695: abstract only (DOI 10.1785/0120050176). BSSA publisher page and ResearchGate NOT tried (fetch cap). Source B = ABSTRACT ONLY.
6. WebSearch Stein/Salditch hazard map testing: found Stein's site PDFs (srlmaptesting-17ewcej.pdf = Stein, Geller, Liu 2011 SRL "Bad Assumptions or Bad Luck").
7. WebFetch sites.northwestern.edu srlmaptesting: 302 redirect; followed to bpb-us-e1.wpmucdn.com copy: OPENED via summariser. Source C.
8. WebSearch Rey, Beauval, Douglas 2018: strathprints PDF found.
9. WebFetch strathprints Rey et al PDF: OPENED via summariser.
10. WebSearch for Stein/Geller/Liu "cannot distinguish" sentence: only links, no snippet text.
No PMC, Europe PMC, doi.org, ScienceDirect, GJI publisher page attempted (budget).

## Findings
A Tasan et al 2014 (GJI): tests issued French models (MEDD2002, AFPS2006) and SHARE for Turkey against later accelerometric records (RAP 1995-2011; Turkey 1976-2013), BUT not cleanly: Turkey test period not split pre/post issue; French GMPE chosen for fit to same RAP records used in the test. Decomposition into issue-time bias vs later hazard change: NOT FOUND in the summariser's account of the text (it says the paper does not attempt it). Statement of impossibility: NOT FOUND (countable negative, text read via summariser, not by me line by line).
 Closest hedged sentences reported by summariser (lines 793-794): "the discrepancies between observations and predictions can generally have more than one explanation"; (lines 114-115) "Understanding the impact of the uncertainties of PSH components on the final output is not straightforward"; (765-766) "the observations available do not permit to discriminate between these models".
 NOT independently re-checked one string at a time (no fetch left). Treat as summariser-reported quotes, probably verbatim, unconfirmed.
 Unit: sites pooled across a network (space substituted for time). Endpoint: count of sites with >=1 exceedance of fixed acceleration over observation window. Comparator: predicted distribution of exceedance counts from median/mean hazard curves, 2.5-97.5 percentile. Estimand: expected number of exceeding sites for a virtual network of same size and lifetimes.

B Stirling & Petersen 2006 BSSA 96(5):1978-1994: ABSTRACT ONLY. Compares historical record at 78 sites (NZ + conterminous US) with national PSH models "constructed with similar methodologies and data"; abstract does not say whether the record was a model input (so cannot answer Q1; likely not independent but unverified). Decomposition / impossibility: abstract has none; full text NOT READ. Hedged attribution in abstract: "may have led to the higher-than-historical levels of hazard"; "may be largely due to site conditions not having been considered". Unit: site (town/city). Endpoint: hazard level at given probability from historical felt intensity record vs PSH. Comparator: PSH model hazard. Estimand: agreement of model hazard with historical hazard at each site (not formally an estimand in abstract).

C Stein, Geller, Liu 2011 SRL 82(5):623-626 (summariser read): argues testing needed; no formal test; no decomposition; no impossibility statement ("no explicit statement"). Quotes reported: "In testing, it is important to avoid biases due to new maps made after a large earthquake that earlier maps missed." ; "have never been objectively tested". Salditch supercycle paper NOT located/opened; the Salditch, Stein et al 2020 / Stein et al 2013 "Limitations of testing" candidates not opened.
 Unit: map regions; Endpoint: max shaking after publication; Comparator: map vs null (uniform/random); Estimand: not formally defined.

D Rey, Beauval, Douglas 2018 (J Seismology): no dated-vintage test (applies ESHM13 mean rate to historical windows 1350-2007); no decomposition into issue-time bias vs later change; no impossibility statement. Closest hedged: "Another reason for the discrepancy could be due to epistemic uncertainty in the choice of the equation" (summariser-reported). That is a candidate explanation, not a posing of non-separability.
 Unit: 24 French municipalities; Endpoint: count of exceedances of intensity IV/V/VI (converted to PGA) within completeness window; Comparator: ESHM13 expected counts with Poisson 2.5-97.5% interval; Estimand: expected exceedance count = annual rate x window length.

## Conclusion
No source yields an "impossible/non-identifiable" statement (negative in A, C, D by summariser; B unread beyond abstract). Best posed-open candidate: Tasan et al "can generally have more than one explanation" (unverified verbatim; hedged). All quotes are summariser-mediated.
