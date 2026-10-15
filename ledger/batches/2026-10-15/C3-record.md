# C3 — Gates 0–3 record

**ID:** UAQ-C3 (placeholder)

**Domain(s):** Urban climatology (canopy-layer UHI); crowdsourced meteorology (PWS/Netatmo, CrowdQC); transport geography (commuting flows, daytime population); urban scaling.

## Gate 0 — Intake

**Question (canonical, reformulated at Gate 1):** Across many cities, is the weekday-minus-weekend difference in canopy-layer UHI intensity, measured with quality-controlled crowdsourced private weather stations (PWS), predicted by the city's net inbound-commuter share (daytime/night-time population ratio), after controlling for city size, background climate and weather regime?

**Original intake version:** Does the UHI intensity measured by PWS networks show a weekday-weekend cycle whose amplitude, across cities, scales with the city's share of inbound commuters?

**Alternative formulations:**
1. Is the urban "weekend effect" on air temperature a commuter-inflow signal, testable cross-city now that PWS give dense coverage of hundreds of cities?
2. Does the daytime-population surplus of a city set the size of its weekly anthropogenic-heat fingerprint in near-surface air temperature?

**Motivating gap:** Weekly UHI cycles are documented in single cities or one national set (Melbourne/Australia, Hong Kong, Tokyo/Osaka), and attributed to anthropogenic heat in general. No study found compares weekly UHI amplitude across many cities against a mobility metric. Dense PWS networks (CrowdQC-filtered Netatmo) now make a cross-city sample of tens to hundreds of cities possible with one instrument type.

**Presuppositions:**
- P1: A weekly UHI cycle exists and can be detected above synoptic noise. *Established for some cities* (Earl et al. 2016; Kikegawa et al. 2011). Effect is small (~0.1–1 °C), so detection in each city is *uncertain*.
- P2: The weekly signal in the urban–rural *difference* is local (anthropogenic heat), not a regional aerosol/circulation weekly cycle. *Contested in part*: large-scale weekly cycles are debated and attributed to aerosols (Forster & Solomon 2003; Sanchez-Lorenzo et al. 2008, who found rural cycles as strong as urban ones). Differencing urban minus rural removes much of this, but not all.
- P3: PWS sample the commuter-receiving areas. *Flagged*: PWS are mostly in residential gardens and balconies, so CBDs, where commuter heat concentrates, are under-sampled. This may bias the signal low or reverse its sign (residential districts empty on weekdays).
- P4: Commuter-share data are comparable across countries (census OD flows, Eurostat LAU/FUA, global OD datasets). *Mostly established*; city definitions (core vs FUA) matter.
- P5: CrowdQC-type filtering removes enough radiative and indoor bias for differences of about 0.1 °C. *Plausible, not established* at that precision.
- P6: Commuter share is not simply a proxy for city size or CBD density. *Must be controlled*; it is collinear with both.

## Gate 1 — Well-posedness

**What would count as an answer:** A sample of at least about 30 cities with PWS coverage and a rural reference. For each city, estimate the weekday–weekend UHI difference by hour, under calm and clear conditions, with confidence intervals; use holidays as extra "weekend" controls. Regress or rank-correlate that amplitude on net inbound-commuter share, with city population, density, latitude/climate and building energy mix as covariates. A significant positive partial slope that holds out of sample would answer **yes**. A null result with adequate power (amplitude CIs narrow enough to rule out a slope of the predicted size) would answer **no**. A natural experiment would confirm it: the same cities' amplitude falling during COVID-19 lockdowns or remote-work shifts, in proportion to the loss of commuters.

**Verdict:** Well-posed after reformulation. The original version left the confounders and the measured quantity unstated; the reformulation names them. It is a question, not a thesis: either sign of the result is informative.

## Gate 2 — Novelty

**Ledger check:** no existing ledger entry overlaps (C1–C5 batch are unrelated).

**Queries run (18):**
1. `weekly cycle urban heat island weekday weekend`: Earl, Simmonds & Tapper 2016 ERL (Australia) and media coverage. Single country, no driver comparison.
2. `Netatmo crowdsourced urban heat island weekend effect`: PWS UHI studies (Milan thesis, Birmingham, Cardiff). No weekly analysis.
3. `anthropogenic heat flux weekday weekend difference commuters city temperature`: Kikegawa et al. 2011 (Tokyo/Osaka), SUEWS AHF weekday/weekend profiles, Sci Am "workweek" piece.
4. `"weekend effect" temperature cities commuting population inflow`: mobility–heat *exposure* papers (Lin & Manoli; arXiv 2603.24782). Reverse causal direction.
5. `weekly cycle urban heat island multiple cities comparison population size drivers`: multi-city UHI driver studies (Zhao 2014 etc.). Annual/seasonal UHI, not weekly.
6. `day-of-week variation surface urban heat island MODIS hundreds of cities`: Peng 2012 (419 cities SUHI). No day-of-week analysis.
7. `COVID lockdown urban heat island reduction anthropogenic heat Netatmo private weather stations`: lockdown UHI studies (Canada canopy UHI; India LST). Official stations or satellites.
8. `CrowdQC private weather stations many cities urban heat island Europe analysis`: CrowdQC, heat advection, ESSD datasets. No weekly/mobility analysis.
9. `daytime population commuter inflow urban heat island intensity relationship`: Lin & Manoli EGU24 (80 EU cities, mobility → exposure). Not mobility → UHI.
10. `weekly periodicity "heat island" weekday weekend Sunday Tokyo traffic anthropogenic heat observation`: Kikegawa 2011; Tokyo Metro Univ report; Li et al. 2026 AHF review.
11. `"weekly cycle" temperature Forster Solomon 2003 diurnal temperature range weekend`: Forster & Solomon PNAS 2003; KIT review of large-scale weekly cycles (aerosol attribution).
12. `"citizen weather stations" weekly cycle air temperature weekday weekend anthropogenic`: Ouyang, Shi & Ng 2018 ICUC10 (Hong Kong, official AWS); Sanchez-Lorenzo 2008 GRL.
13. `hebdomadal cycle urban temperature anthropogenic heat multi-city statistical analysis`: Earl 2016 again; Tsinghua campus AHF. Nothing cross-city.
14. `weekday weekend urban heat island difference larger in cities with more commuters central business district` (extended): generic UHI pages; "Bigger cities have larger heat islands" preprint (size, not weekly). No answer found.
15. `transport geography commuting ratio daytime population index weekly anthropogenic heat emission inventory cities`: global commuting OD dataset (arXiv 2505.17111), AHF inventories. Not linked to observed weekly UHI.
16. `Netatmo weekday weekend temperature difference city study` (extended): PWS QC/forecasting papers. No weekly analysis.
17. `global analysis weekly cycle canopy urban heat island intensity stations many cities 2023 2024 2025` (extended): global CUHI datasets/drivers (PNNL, 216-city ML). Annual/seasonal only.
18. `human activity weekly rhythm urban heat island "weekend" cities "anthropogenic heat" scaling city size`: Earl 2016 cluster; Li et al. 2026 review (arXiv 2608.17782), which by its abstract does not cover weekly cycles. Two further checks (COVID lockdown with PWS; 19th-century "Sunday" London observations) returned Hamdi et al. EGU22 (Ghent lockdown, MOCCA network) and nothing historical on point.

**Nearest prior formulations (opened):**
1. Earl, Simmonds & Tapper, "Weekly cycles in peak time temperatures and urban heat island intensity", *Environ. Res. Lett.* 11(7), 2016. https://watersensitivecities.org.au/content/weekly-cycles-in-peak-time-temperatures-and-urban-heat-island-intensity/
2. Kikegawa, Ohashi, Ihara & Kondo, "Observed and simulated interactions between electricity consumption and urban surface air temperatures in downtown Tokyo and Osaka", AMS 91st Annual Meeting, 2011. https://ams.confex.com/ams/91Annual/webprogram/Paper181923.html
3. Ouyang, Shi & Ng, "Identifying Weekly Cycles of Air Temperature in Hong Kong: An Alternative Way to Investigate the Influence of Anthropogenic Heat", ICUC10, 2018. https://www.cuhk.edu.hk/research/SED/publication/ICUC10_Wanlu%20Submitted%20Version.pdf
- Adjacent, not nearest: Lin & Manoli, "Assessing the impact of mobility on heat exposure", EGU24-1762, 2024 (https://meetingorganizer.copernicus.org/EGU24/EGU24-1762.html); Hamdi et al., EGU22-7193, 2022 (Ghent lockdown CUHI).

**How this differs from each:**
1. Earl 2016: shows the weekly cycle across 7 Australian cities and in Melbourne's UHI, attributed to human activity in general. It does not relate amplitude across cities to any driver (commuting, size). It uses official stations, not PWS, and covers one country.
2. Kikegawa 2011: closest in mechanism. Business-district anthropogenic heat halves at weekends and the downtown–residential temperature gap shrinks by up to 1 °C. But it covers two cities and is an intra-city contrast with a modelled sensitivity. It does not ask whether commuter inflow predicts amplitude *across* cities.
3. Ouyang 2018: weekly cycles in one city (Hong Kong) from 15 official stations. Commuting and cross-city drivers are explicitly not analysed.
- Lin & Manoli 2024 runs the reverse direction (mobility changes who is *exposed* to a modelled UHI), not mobility changing the UHI itself.

**Novelty confidence:** **Medium.** No cross-city, commuter-scaled formulation was found in any vocabulary tried. However, Kikegawa 2011 already ties the weekday/weekend UHI drop to business-district (that is, commuter-driven) anthropogenic heat, and Earl 2016 measures weekly UHI across several cities. The candidate combines their elements; it does not open new territory. **Not already asked** as far as the search shows. It is not an asked-but-open problem: no source poses it as open.

## Gate 3 — Significance

- **Consequence:** If yes, observed air temperature carries a measurable commuting signature. Two things follow: (a) a cheap observational constraint on the poorly constrained traffic and building components of anthropogenic heat flux (AHF), which the 2026 Li et al. review calls a poorly constrained term; and (b) evidence that remote-work and modal-shift policy has a quantifiable urban-climate co-benefit. If no, the weekly cycle reflects regional aerosol or circulation effects, or residential energy use, rather than commuting. AHF inventories that scale weekday heat by commuter flows would then be overweighting transport, and PWS would be shown blind to CBD heat, which matters for using PWS in UHI monitoring.
- **Audience:** urban-climate modellers who set weekday/weekend AHF profiles (SUEWS, WRF-UCM, AIST-CBM users) would recalibrate them against observed amplitudes. Crowdsourced-meteorology groups (CrowdQC developers, national weather services that ingest PWS) would learn whether PWS capture activity-driven signals. Transport and urban planners making remote-work or congestion-pricing cases would gain or lose a climate argument.
- **Fecundity:** opens (i) whether the post-2020 remote-work shift has measurably reduced weekday UHI; (ii) whether holiday exoduses (August in Paris, Golden Week) give a dose–response test; (iii) whether the commuter effect shows mainly in the evening-transition window (as Hamdi et al. found for Ghent), giving a timing fingerprint for AHF; (iv) whether PWS spatial bias toward residences inverts the signal (dormitory suburbs warmer at weekends).
- **Anchoring:** the unresolved attribution of weekly temperature cycles (aerosol vs local heat; Forster & Solomon 2003, Sanchez-Lorenzo 2008); the poorly constrained AHF term in the urban energy balance; urban-scaling debates on whether UHI tracks size or activity ("bigger cities have larger heat islands, denser ones do not").

## Reason for silence (candidate mechanism)

**Instrument–discipline mismatch plus small effect.** Before dense PWS networks (after about 2016), weekly UHI work was limited to a few cities with paired official urban/rural stations. That allowed only single-city case studies, where a cross-city driver cannot be tested. PWS researchers have spent their effort on QC and static UHI mapping, while commuting data sit in transport geography, which studies heat *exposure* (mobility → exposure) rather than mobility as a heat *source*. The signal (~0.1–0.5 °C) is near PWS error, so the question looked unanswerable until QC methods matured.
