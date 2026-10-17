# Verification notes: Fox et al. 2026 AI scribe omissions

## Searches (3 of 6 used)
1. "Fox 2026 ambient AI scribe notes omissions transcript encounter" -> generic blogs, no hit.
2. "Fox et al. AI-generated clinical notes omit information ... transcript versus note" -> Sebastian Fox (Composo) talk, arXiv 2610.08585 (unopened), others.
3. "Fox ambient AI scribe omissions transcript note later diagnosis predict 2026 preprint" -> arXiv 2608.31016 (Fox) and NeurIPS 2026 page 177237 (Fox).

## URLs
- https://arxiv.org/html/2610.08585v1 : NOT READ. WebFetch proxy HTTP 429 rate limit; not retried. Unknown relevance (surfaced as "Results", not shown to be by Fox).
- https://arxiv.org/pdf/2608.31016 : opened (summariser output; page possibly truncated).
- https://neurips.cc/virtual/2026/177237 : opened (abstract page only; OpenReview full paper not opened).
- Not tried: doi routes, OpenReview, ai.engineer talk page.

## Strings checked
Questions put to summariser, not exact-quote checks; no verbatim quotes were verified at <=125 chars. Quotes below are the summariser's paraphrase/echo of titles and abstracts.

## Conclusion
Two Fox et al. papers found (same author list: Fox, Markham, Lail, Karotsieris).
A) arXiv 2608.31016, 31 Aug 2026, "LLM Judges Verify Presence, Not Absence": judge-benchmark, 500 note pairs with constructed omissions; omission-detection by LLM judges. Category breakdown by surviving trace and severity. No transcript-vs-note diagnosis prediction. No interpreter/LEP/speech/accent breakdown.
B) NeurIPS 2026 "One note in three": audit of 3 scribes, 142 consultations, 565 notes; 31.3% [27.0,35.6] notes with >=1 verified failure; omission 23.1% of errors; failures cluster in allergy/medication, invented identity, history-as-exam in phone consults. No diagnosis-prediction comparison; no language/accent breakdown (abstract only).
Neither shows the transcript-vs-note predictive gap (caveat: B is abstract only, A page possibly truncated).
