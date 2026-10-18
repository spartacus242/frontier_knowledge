# UQ-20261018-06 verify Bragato (2004) BSSA 94(4)

## Read level
ABSTRACT ONLY (abstract read at three independent records: seismosoc.org, ricerca.ogs.it, ISC manuscript inventory, plus Crossref metadata). Full text / methods section: COULD NOT READ.

## Searches (3 of 7 used)
1. Title + author search -> found seismosoc.org abstract page, ricerca.ogs.it record, ISC record. OK.
2. Keyword search (truncated regression, STA/LTA etc.) -> titles only, no new full text. 
3. Extended search (Bragato 2004 non-triggered stations...) -> titles only; GeoScienceWorld article-abstract URL surfaced; no text snippets of methods.

## Fetches (7 of 7 used)
1. seismosoc.org/Publications/BSSA_html/bssa_94-4/03083.html -> OK. Abstract only; says vol 94 issue 4; no year, pages or DOI on page.
2. ricerca.ogs.it/handle/20.500.14083/964 -> OK. Record: year 2004, vol 94, issue 4, pp. 1369-1378, DOI 10.1785/012003083, WoS:000223945300012. PDF listed as "non disponibili"/request-a-copy.
3. ricerca.ogs.it/retrieve/.../Bragato2004.pdf -> FAILED (returned login/"Errore" page, no paper).
4. doi.org/10.1785/012003083 -> 302 redirect to chooser.crossref.org; not followed (budget).
5. api.crossref.org/works/10.1785/012003083 -> OK. Volume 94, issue 4, page 1369-1378, published-print and issued [2004, 8, 1] (1 Aug 2004).
6. pubs.geoscienceworld.org/bssa/article/94/4/1369-1378/120984 -> FAILED (fetch error).
7. manuscript.isc.ac/Inventory/10/63754.htm -> OK. Catalogue record: year 2004, start page 1369; page range garbled, keywords wrong (unrelated to seismology). Abstract only.

## Findings
Q1 FOUND (metadata, not from the paper's own page): 2004, vol 94, issue 4, pp. 1369-1378, August 2004 issue (Crossref). Year 2004 is therefore CONFIRMED from Crossref and OGS repository, not merely inferred. The ISC record gives 1369 as start page only. The seismosoc page itself gives no year.
Q2 PARTLY FOUND (abstract level): abstract says the paper analyses distortion due to stations that fail to trigger and uses STA/LTA-triggered stations. The abstract does not itself state "low end"/direction; that follows logically from triggering but I did not read it stated. Mechanism = station triggering: CONFIRMED at abstract level. "Low end of ground motion": NOT READ.
Q3 COULD NOT READ the methods text. Abstract only says the method "does not need to know which stations did not trigger" and introduces "randomly truncated regression" for trigger thresholds that vary over time. This hints the threshold is not a single known constant, but whether the paper models truncation probability or conditions on a known truncation point is NOT settled by what I read. No methods quote available.
Q4 PARTLY FOUND: abstract frames the problem as "attenuation laws" with parameters biased by truncation; no coefficient list or the word "coefficients" read. Endpoint = attenuation-relation parameters is a reasonable abstract-level reading, not confirmed from methods/results.
Q5 COULD NOT READ (not "NOT FOUND"): only the abstract was seen. Abstract does not mention estimating a failure probability as function of ground motion, but the body is unread. Note: the abstract's "randomly truncated" wording means the body might treat the threshold as a random variable; unverified.

## Caveats
- Abstract text was returned through a summariser; no verbatim quotes are reproduced here.
- OGS PDF (Bragato2004.pdf) is the best route to full text but failed from here; GeoScienceWorld failed too.
