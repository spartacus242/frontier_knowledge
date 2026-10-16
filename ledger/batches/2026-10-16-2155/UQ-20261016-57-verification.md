# UQ-20261016-57 verification: de Visser & Lenski 2002 BMC Evol Biol 2:19

## Searches (1 of 6 used)
- "Wiser Ribeck Lenski 2013 ... marked 40,000-generation clone" -> returned an MSU-hosted PDF of the Science paper plus PMC links (not opened).

## URLs
- https://doi.org/10.1186/1471-2148-2-19 -> NOT opened (fetch error).
- https://bmcecolevol.biomedcentral.com/articles/10.1186/1471-2148-2-19 -> opened twice (2 fetches).
- https://directory.natsci.msu.edu/media/Directory/Profiles/2013, Scie20260121115305.pdf -> opened (Wiser 2013).
- PMC links from search: not opened (blocked).
Fetches used: 4 of 5.

## Strings checked (summariser output; paraphrase possible)
- "the ANOVA tests all forms of non-transitivity." (fragment; full sentence not returned because of quote cap)
- "< 2% of the overall variation", P > 0.5
- "Twenty-one evenly spaced samples (generations 0, 1,000, 2,000, ..., 20,000)"
- Wiser: "competed samples from all 12 populations and up to 41 time points against the ancestor."

## Findings
1. Test = two-way ANOVA on ln relative fitness, sample (21 levels) x clone (5 levels); the interaction term tests non-parallelism, which authors treat as testing all forms of non-transitivity. Interaction non-significant, P > 0.5, <2% of variation. Main effects P<0.0001, >93%; residual ~5%. Also a cumulative-gain test (predicted vs observed, jackknife CI).
2. It is an ANOVA interaction test, NOT a rate of intransitive triples against an assay-error null. No count of intransitive triples reported.
3. Design: single population Ara-1; 21 Ara- population samples (every 1,000 gen to 20,000) vs 5 Ara+ marked clones (gen 0, 5k, 10k, 15k, 20k), 3 replicates = 315 competitions. Sample x clone crossing, not a full round robin among clones. (Summariser's claim; the 12-population Fig 1 data are from earlier work.)
4. Wiser 2013: yes, both. 108 competitions of 9 populations at 40k and 50k gen against marked 40k clones; plus all 12 populations up to 41 time points against the ancestor.

## Conclusion
Claim "<2%, P>0.5" confirmed. Characterisation as a rate of intransitive triples is refuted; it is an ANOVA interaction test.
