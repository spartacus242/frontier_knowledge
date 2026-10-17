# Verification notes: Wildfeuer & Lienkamp, eTransportation 2021

Counts: web searches 3 of 8; WebFetch 6 of 6 (cap reached, not exceeded).
Full text NOT read. Read level: THIRD-PARTY SUMMARY (Semantic Scholar abstract summarised by fetch model) plus OpenAlex metadata.

## Routes tried
1. WebSearch title: found twaice page, mediaTUM node 1639696 (not fetched, known walled), unrelated papers. No full-text copy.
2. OpenAlex works search (api.openalex.org, WebFetch): OK. DOI 10.1016/j.etran.2021.100129, eTransportation, 2021, authors Leo Wildfeuer, Markus Lienkamp. OA status closed, no best_oa_location, no repository copy.
3. TUM FIS portal page (found by search): turned out to be a different paper (Rumpf, Naumann, Jossen 2017, J. Energy Storage, 1100 LFP cells). Not relevant, but a possible comparator (reports capacity 0.28%, impedance 0.72%).
4. doi.org/10.1016/j.etran.2021.100129: 302 to linkinghub.elsevier.com/retrieve/pii/S2590116821000278 (PII S2590116821000278). Not followed (fetch budget).
5. sciencedirect.com/science/article/pii/S2590116821000278: ROBOTS_DISALLOWED.
6. api.semanticscholar.org graph API by DOI: OK for metadata; openAccessPdf empty; abstract returned only as a summary (summariser refused verbatim).
7. WebSearch phrase "superimposed by effects of an imperfect measurement setup": no hit containing the phrase; only twaice page, mediaTUM node, unrelated.
8. WebSearch figures: same pages; mediaTUM doc pattern seen for a different paper (Schindler 2021).
9. mediatum.ub.tum.de/download/1639696/1639696.pdf (guessed): Anubis denial page, no content.
Not tried (budget): ResearchGate, Google Scholar, Wildfeuer dissertation, linkinghub redirect.

## Exact strings checked
- "superimposed by effects of an imperfect measurement setup": COULD NOT VERIFY (no readable text). Not found by search. Not a negative.
- resistance ~0.45% after compensation: PARTIALLY supported by third-party summary of the abstract: "resistance variation dropped from roughly 1% to about 0.45%". Original wording not seen. "Halved" is consistent (1% -> 0.45%) but "about 1%" is the summariser's wording.
- capacity 0.17%: NOT CHECKED (not in any text I could read).
- mass 0.11%: NOT CHECKED.

## Answers
1. Citation: Wildfeuer L., Lienkamp M. Quantifiability of inherent cell-to-cell variations of commercial lithium-ion batteries. eTransportation 2021, article 100129. DOI 10.1016/j.etran.2021.100129 (PII S2590116821000278). OA: OpenAlex says closed, no repository copy; Semantic Scholar no OA PDF. (Possibly a mediaTUM copy exists behind Anubis; unverified.)
2. Summary-level only: 600 cells plus a previously published dataset; measured cell-to-cell variation of resistance (and by the earlier user brief capacity, mass) at beginning of life; contrast = temperature-compensated vs uncompensated variation; temperature deviation of 0.5 C can give resistance variation >1.5%. Endpoints "static capacity, resistance, mass at BOL" NOT confirmed from text. Estimand appears to be the spread (std/relative std) of initial parameters across cells, corrected for spatial and temporal temperature inhomogeneity.
3. Channel variance component: NOT ESTABLISHED. The summary describes only correction of temperature inhomogeneity and recommends focusing on "external sources such as temperature inhomogeneity". Nothing in what I saw mentions a channel random effect, rotation or crossing of cells over channels. But I could not read the full text, so I cannot say it is absent. Cannot quote.
4. Cycle life / trajectory shape: the summary mentions only initial parameter variations and recommends tighter initial variations for simulations. Suggests BOL only, but unconfirmed from full text.
5. See strings section.

## Conclusion
Full text unreadable by every route available in budget. Only metadata and an abstract-level summary were obtained. Items 3 and 4 remain open; item 5 only partly supported (resistance).
