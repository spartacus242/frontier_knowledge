# Verification: Kang, "Ranking Under Biased Missingness" (NeurIPS 2026 workshop poster)
Read level: ABSTRACT ONLY (neurips.cc virtual page; no full text obtained). Page text passed through a summariser.

## Calls (2 searches, 4 fetches)
- Fetch 1 neurips.cc/virtual/2026/178314: OK. Title/author/venue/abstract; links to OpenReview forum JiCv1bYasi and workshop page 137525; no arXiv/PDF link.
- Search 1 (exact title + Kang): neurips.cc page is top hit; no arXiv version found.
- Fetch 2 openreview.net/forum?id=JiCv1bYasi: blocked by browser verification screen. COULD NOT READ.
- Fetch 3 openreview.net/pdf?id=JiCv1bYasi: fetch error. COULD NOT READ.
- Fetch 4 neurips.cc page again (targeted): confirmed r, "reporting mechanism" sentence, 58-position rank interval, absent terms.
- Search 2 (author + topic terms): no mirror/arXiv of this paper; only unrelated papers.
- Fetch 5 neurips.cc page again (verbatim fragments): OK.
(Actual tally: 2 searches, 5 fetches.)

## Findings
1. EXISTS. Author Jung Min Kang; exact title as given. It is a POSTER at the NeurIPS 2026 workshop "Can We Trust AI Evaluation? Robustness, Causality, and Risk in Modern AI Assessment", not a main-conference paper. Read: neurips.cc page only (abstract).
2. FOUND in abstract: "162 deduplicated models, 18 benchmark items, and 781 observed scores (26.8% density)". Benchmarks: LIBERO, CALVIN, Meta-World, LIBERO-Plus (robotics/embodied).
3. FOUND in abstract: "Reporting coverage is negatively correlated with fitted item difficulty (r=-0.639)". Variables: reporting coverage (per benchmark item) and fitted item difficulty from the penalized 2PL IRT fit. Exact definition of coverage (share of models reporting that item?) not given in the abstract.
4. ENDPOINT is model RANK: latent-trait vs average-based rank divergence (max delta=77; that model's rank interval spans 58 positions), 36.4% of model pairs unresolved by the pairwise criterion on unmasked matrix; masking at 50%/90% (e.g. "At 90% masking these rates are 91.6% and 45.6%"). Not a trend level/slope.
5. TIME: NOT FOUND in the abstract (no entry/exit dates, cohorts, doubling time). Abstract only; full text not read, so cannot rule out in body.
6. FOUND (abstract): "this association does not identify the reporting mechanism." (the association = coverage/difficulty correlation).
7. MNAR machinery: selection model NOT FOUND; pattern-mixture NOT FOUND; sensitivity bounds NOT FOUND (abstract names none; says bootstrap intervals (B=1000) reflect "pipeline sensitivity, not coverage-guaranteed uncertainty"). All based on abstract only; body unread.
