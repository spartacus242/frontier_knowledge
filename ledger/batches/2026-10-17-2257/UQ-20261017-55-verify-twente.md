# UQ-20261017-55 verify Twente thesis (essay.utwente.nl/85570)

READ LEVEL: COULD NOT READ (record body never opened). Only a search-result title snippet was seen.

## Calls (3 searches, 5 fetches; budget 6/6)
Fetches
1. WebFetch https://essay.utwente.nl/essays/85570 -> generic landing page "Essay - UT Student Theses"; "please enable JavaScript"; no record content.
2. WebFetch https://essay.utwente.nl/85570/ -> same JS shell, no record.
3. WebFetch https://essay.utwente.nl/85570/1/ (directory guess) -> fetch error.
4. WebFetch https://essay.utwente.nl/cgi/export/eprint/85570/Text/utwente_essays-eprint-85570.txt (guessed export route) -> fetch error.
5. WebFetch http://essay.utwente.nl/85570/ (http variant) -> same JS shell, no record.
Searches
1. "essay.utwente.nl chondrocytes temperature oxygen in vitro in vivo thesis" -> returned essay.utwente.nl/essays/85570 with title only.
2. exact-title search -> same title again at /essays/85570; no abstract text, no PDF link.
3. extended topical search -> http://essay.utwente.nl/85570/ listed with same title; no abstract/body.

## Findings
- Existence: a record at /essays/85570 and /85570/ exists and carries the title "The Influence of Hydrogel, Temperature, Oxygen, and Cytokines on Human Chondrocytes using in vitro Culture-Based Models" (from search-result titles only, not from an opened page).
- Author, year, degree: COULD NOT READ.
- Factorial temperature x oxygen design, levels: COULD NOT READ. (Title lists four factors: hydrogel, temperature, oxygen, cytokines, so it is not temperature/oxygen only; whether crossed is unknown.)
- Cell type (human chondrocytes per title), endpoints, in vivo reference: endpoints and in vivo reference COULD NOT READ.
- Share of in-vitro/in-vivo difference attributable to temperature vs oxygen: COULD NOT READ (not "not found").

## Do not repeat
essay.utwente.nl/essays/85570, /85570/ (https and http), /85570/1/, the eprint export txt guess: all fail or return JS shell.
Untried: a PDF filename (unknown; needs a browser-rendered page), research.utwente.nl, Semantic Scholar/CORE/BASE for the title, Google Scholar cache.
Unrelated hit seen but not opened: research.utwente.nl "molecular profiling of oxygens impact on chondrocytes..." (a different item).
