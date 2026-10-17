# UQ-20261017-24 verification: Murphy 2023 and Lasue 2024
Counts: searches 3 of 10 (none refused); fetches 6 of 6.

## Routes
F1 meetingorganizer.copernicus.org/EGU24/EGU24-14286.html : OK (abstract page; summariser output, abstract-level)
F2 eprints.whiterose.ac.uk/id/eprint/203372 : OK (record page; PDF link; deposit labelled AM vs Published)
F3 White Rose PDF (murphy-et-al-2023...pdf) : OK, full text via summariser (third-party summariser of full text)
F4 meetingorganizer.copernicus.org/EGU25/EGU25-4490.html : OK. Taupin, Lasue, Maattanen, Zolensky EGU25 follow-up abstract
F5 pnas.org/doi/10.1073/pnas.2313374120 : CLIENT_ERROR (not readable)
F6 White Rose PDF again, string checks : OK
PMC: NOT attempted (fetch cap exhausted; chose full-text verification instead). doi.org not tried.
Searches: S1 Murphy title + whiterose (found eprint URL); S2 Lasue authors full paper (found EGU25-4490, no journal paper found); S3 Murphy influx/snow/baseline (nothing new).

## Strings checked
Murphy (full text PDF via summariser):
- ">20 elements": "Over 20 elements from reentry were detected." appears. Proportions-of-alloy wording is from the abstract summary; not separately string-checked.
- "10±7%": printed: "spacecraft ablation products are present in 10±7% of stratospheric sulfuric acid particles that are larger than about 120 nm diameter" (truncated quote)
- ~20% meteoric iron: summariser: "about 20% of such particles contained enhanced aluminum from spacecraft reentry", referring to particles already containing meteoric iron (roughly half of acid particles at midlatitudes). Appears, but note it is 20% of Fe-containing particles carrying Al, not 20% of all.
- Li, Al, Cu, Pb: abstract: "exceed the cosmic dust influx of those metals" - appears.
- Abstract "About 10% ... larger than 120 nm contain aluminum and other elements from spacecraft reentry" appears.
- pre-industrial / preindustrial / before 1957 / pre-space / background level: none found (one "baseline" hit, a detector electronics sense, irrelevant). This is "not found in a summariser pass of the full text", not proof of absence.
Lasue (abstract via summariser):
- "cosmic dust particles typically represent on average 40% of the collection" (1980-2009): appears.
- TCA roughly doubled to about 60% 2010-2020: appears (summariser says "roughly doubled"; the "doubled to about 60%" wording was paraphrase-level, not verified as a verbatim string).
- 25 catalogs 1981-2020: appears. Also 5,071 particles; TCN and TCA about 30% each in 1980-2009.

## Conclusions
Neither propagates fraction into a bias on an influx constraint.
Murphy: compares reentry mass flux with literature meteoroid flux (Al ~130 t/yr meteoroid, ~20 t/yr ablating; ~210 t/yr from spacecraft; Cu already exceeds). Does not revise influx. No influx uncertainty given. Snow: only speculative statement that reentry Cu could "possibly double the concentration of copper in Antarctic snow"; ice residuals of cirrus (2002). No pre-space-age baseline; earliest data 1998.
Lasue: abstract only; no influx bias, no error rate; "preliminary characterized". EGU25-4490 follow-up: at least 20% of particles ambiguously classified (ambiguity rate, not misattribution rate). No full paper found.
Misattribution rate: neither. Murphy: Al/Fe >0.1 threshold, Na as control, Nb/Ag/Hf tracers, no false positive rate, calibration uncertainty factor 1.5-2 (summariser). Lasue: JSC C/TCN/TCA/AOS classes, no error rate.
