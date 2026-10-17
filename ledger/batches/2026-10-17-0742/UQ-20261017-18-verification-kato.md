# Kato & Nakagawa arXiv:2604.06116 verification notes

## Fetches (6 of 6 used)
1. arxiv.org/abs/2604.06116 -> OPENED. Shows v1 only (7 Apr 2026), title "Sequential Audit Sampling with Statistical Guarantees". No v2 shown.
2. arxiv.org/pdf/2604.06116 -> NOT OPENED, proxy HTTP 429.
3. arxiv.org/html/2604.06116 -> OPENED but text truncated at Sec 4.3 (v1). No appendices visible.
4. arxiv.org/abs/2604.06116v2 -> NOT OPENED, proxy HTTP 429.
5. arxiv.org/html/2604.06116 offset 40000 -> headings 3.2-4.3 only; nothing later.
6. alphaxiv.org/abs/2604.06116.md -> OPENED (summariser output, title matches the claimed v2 title "...for Finite Populations with Exact and Simulation-based Guarantee"). Reports CMS CERT, App D.6, eq (8), Thm 3.1, escalation quote.
Not tried: PMC/EuropePMC/doi.org (arXiv paper, no DOI), econpapers hit (budget of fetches spent).

## Searches (4 of 8 used, none refused)
1. Kato Nakagawa Sequential Audit Sampling ... -> found alphaxiv .md and econpapers RePEc link for the paper.
2. RLA shrinkage/hierarchical/empirical Bayes -> titles only (mismatch-based RLA 2503.16104, ClipAudit, Stark/Rivest items); nothing about shrunken estimates seen; snippets not read.
3. RLA weighted mean / ratio / model-based / non-additive -> ALPHA 2201.02707, SHANGRLA 2207.03379, Springer chapter; titles only, not opened.
4. Auditing CMS risk-standardized mortality hierarchical + sequential audit -> only hospital-profiling papers (Normand/Hospital Compare 1510.00842, etc.), none an audit-sampling treatment.

## Strings checked (as reported by the summarisers, not by my reading of full text)
- HTML v1: "the number of observed deviations follows a hypergeometric law"
- alphaxiv: "gives an illustration using CMS CERT claims"; heading "Illustration Using CMS CERT Claims", Tables 6,7, Figures 13,14
- alphaxiv: "If no earlier decision is reached, the auditor inspects all n items." (Sec 3.1)
- alphaxiv: "The values α and β limit the probabilities of the two incorrect sampling conclusions."
- Eq (8) sup over population counts; Thm 3.1 reduces to m_H, m_K (paraphrase; the exact sup-formula strings were not seen verbatim)

## Conclusion
Q1 all four elements confirmed (hypergeometric exact boundaries, binary X_i, sup guarantees, escalation) - secondhand for sup/escalation via alphaxiv summary. Q2 CMS CERT in App D.6 present per alphaxiv only; content of D.6 beyond tables/figures NOT read. Q3 estimand is deviation rate m/n of binary indicators = additive count; no shrunken/hierarchical estimand discussed. Q4 nothing found, but only titles scanned.
