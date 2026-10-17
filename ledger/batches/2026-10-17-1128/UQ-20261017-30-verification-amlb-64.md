# UQ-20261017-30 — verification: AMLB section 6.4

Target: Gijsbers et al., "AMLB: an AutoML Benchmark", JMLR 25:101 (2024). arXiv 2207.12560. JMLR id 22-0493.
Prior reader: JMLR PDF, ar5iv, arXiv PDF all truncated ~80,389 chars, inside section 6.3. Do not repeat.

## Tool constraint
- Direct `curl` to arxiv.org / jmlr.org: BLOCKED by egress proxy (CONNECT 403, connect_rejected).
  Also previously rejected for this session: export.arxiv.org, doi.org, openaccess.thecvf.com.
  => Only WebFetch/WebSearch (+ mcp github) usable.

## Searches
1. WebSearch: "AMLB: an AutoML Benchmark" Gijsbers JMLR 2024 arXiv
   -> arXiv id = 2207.12560 CONFIRMED; jmlr.org/papers/v25/22-0493.html; ar5iv; mlanthology; sotaverified.

## Fetches
1. https://alphaxiv.org/abs/2207.12560.md  offset=70000 -> SUCCEEDED (page exists) but page TEXT ENDS ~74,115 chars,
   last visible heading "6.2 Bradley-Terry Trees", Figure 5 legend. Source itself is short/cut; 6.3, 6.4, 7 ABSENT.
   Only failure-adjacent line found: Fig 4 caption "Only frameworks which have evaluations on all tasks for both time constraints are shown."
2. https://mlanthology.org/jmlr/2024/gijsbers2024jmlr-amlb -> SUCCEEDED, landing page only, no full text.
   Gives PDF: https://jmlr.org/papers/volume25/22-0493/22-0493.pdf
3. GitHub route CLOSED: mcp__github__get_file_contents is scoped to spartacus242/frontier_knowledge only
   ("openml/automlbenchmark is not configured for this session"). Global code search works but found no
   LaTeX source of the paper: `"Bradley-Terry" "AutoML" extension:tex` -> only jd-coderepos/sota (other paper);
   `"an AutoML Benchmark" Gijsbers extension:tex` -> only mlr-org/mlr3book references.tex. repo search "amlb automl benchmark paper" -> 0.
4. https://arxiv.org/html/2207.12560v3 (offset 0, TOC request)  -> FAILED: PROXY_REJECTED HTTP 429, rate limited,
   instructed not to re-fetch. NOT READ.
5. https://arxiv.org/html/2207.12560v3 (offset 84000)          -> FAILED: same 429. NOT READ.
   => arxiv.org host unusable this session. ar5iv.arxiv.org likely same, and prior reader already failed it.
Remaining budget: 2 fetches. Choosing: jina reader over the JMLR PDF (bypasses WebFetch's PDF text cap),
and alphaxiv .md pinned to v3 (the v1 md ran out at ~74k; JMLR/v3 text is longer).
6. https://r.jina.ai/https://jmlr.org/papers/volume25/22-0493/22-0493.pdf  offset=76000
   -> FAILED: INVALID_URL (WebFetch rejects the nested-URL reader form). NOT READ.
7. https://www.alphaxiv.org/abs/2207.12560v3.md  offset=70000
   -> FAILED: CLIENT_ERROR (no versioned .md at alphaxiv). NOT READ.

## Searches 2-3 (no snippets returned, only URLs — cannot recover heading text this way)
2. "AMLB" ... section "6.4" results Bradley-Terry  -> URLs only (arxiv pdf, ar5iv, jmlr, deepai, sotaverified, mlanthology)
3. AMLB ... "framework failures" imputation failed runs rankings -> URLs only, same set.
   The web search tool in this session returns titles+URLs with NO text snippets, so it cannot be used
   as a substitute reader for exact strings.

## Exact strings checked, one at a time, in the ONE body excerpt actually read
(alphaxiv.org/abs/2207.12560.md, chars 70,000 -> ~74,115 = approx. 4.1k chars of body text)
- "6.4"                      -> NOT FOUND (excerpt does not reach it)
- "6.3"                      -> NOT FOUND
- heading "6.2 Bradley-Terry Trees" -> FOUND (last heading in that source's text)
- failure / error / crash / imputation / dropped run / sensitivity / robustness of rankings -> NOT FOUND in excerpt
- FOUND (Figure 4 caption): "Only frameworks which have evaluations on all tasks for both time constraints are shown."

## CONCLUSION
COULD NOT READ section 6.4. Budget exhausted (6 WebFetch attempts: 2 succeeded, 4 errored).
- Section 6.4's heading and body: NOT READ. No claim either way about its contents.
- Q3 (sensitivity analysis of rankings under alternative failure-handling conventions): NOT READ,
  which must NOT be recorded as "absent from the paper". The only text I reached (4.1k chars inside 6.2)
  contains no such analysis, but that window is far too small to support an absence claim.
- Q4 (headings 6 -> end): UNOBTAINABLE here. I never reached a table of contents; the JMLR/arXiv article
  has no TOC in the portion I read, and the LaTeXML nav TOC at arxiv.org/html was exactly what the 429 blocked.
  Only heading confirmed in the 6.x range: "6.2 Bradley-Terry Trees". 6.3 exists per the prior reader
  (their truncation at 80,389 chars fell inside it). 6.4's existence is an assumption of the task, unverified by me.
- Routes still untried for a future reader with fresh budget: arxiv.org/html/2207.12560v3 after the 429 window
  (the LaTeXML single-page HTML with its nav TOC - the best route, merely rate-limited today);
  ar5iv.labs.arxiv.org/html/2207.12560; jmlr.org/papers/volume25/22-0493/22-0493.pdf via a reader that
  does full PDF text extraction; sotaverified.org/papers/amlb-an-automl-benchmark; deepai mirror;
  and openml/automlbenchmark on GitHub if the session's repo allowlist is widened (get_file_contents is
  currently restricted to spartacus242/frontier_knowledge).
