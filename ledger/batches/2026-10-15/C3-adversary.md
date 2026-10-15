# C3 adversary log

## Restatement
Take a few dozen cities that have dense, QC-filtered crowdsourced air-temperature stations (Netatmo via CrowdQC). For each city, compute how much warmer the urban-minus-rural temperature gap is on weekdays than at weekends. Then ask whether cities that import more daily commuters (daytime/night-time population ratio) show a bigger weekday-weekend gap, once city size, climate and weather are held fixed. The claim is that nobody has run this cross-city, commuter-scaled comparison.

## Extra queries run (beyond the record's 18)
1. weekday weekend anthropogenic heat flux difference across cities commuter inflow daytime population urban air temperature
2. weekly cycle air pollution temperature multiple cities amplitude commuting daytime population ratio weekend effect
3. Netatmo weekday weekend urban heat island intensity cities commuter (extended)
4. Earl Simmonds Tapper 2016 Weekly cycles ... ERL (citation check)
5. weekend effect urban heat island many cities satellite LST weekday weekend difference global
6. COVID-19 lockdown UHI change across cities related to mobility reduction Google mobility anthropogenic heat
7. weekend effect NO2 weekday weekend ratio across cities explained by commuting traffic share multi-city

Fetched: Wu/Xie/Kang 2022 (PMC9510312, Beijing lockdown weekly cycles of pollutants, one city, no UHI); Port Harcourt weekday/weekend UHI paper (one city, ANOVA); MODIS nine Central European cities paper (no weekday analysis). Lee 2025 GRL on traffic congestion and SUHI intensity was found but its page would not load, so I could not check whether it uses day-of-week or cross-city mobility.

## Citation spot-check
- Earl, Simmonds & Tapper 2016 ERL: real. Confirmed by the Melbourne findanexpert listing and the watersensitivecities and Conversation coverage.
- Kikegawa 2011 AMS paper: it appeared in search results. I did not open it.
- Ouyang 2018 ICUC10 (CUHK): real, listed in results.
- Forster & Solomon 2003 and Sanchez-Lorenzo 2008: well-known and not re-verified here.
- Lin & Manoli arXiv 2603.24782 ("Mobility shapes heat exposure inequalities in cities"): real, appeared in results.
- Li et al. 2026 AHF review and the Hamdi EGU22 Ghent paper: not re-checked.

## Attack table

| # | Attack | Objection | Response | Status |
|---|---|---|---|---|
| 1 | Triviality | An expert could say "obviously weekday heat scales with office-commute activity, so yes", or "obviously PWS can't see it, so no". | Neither answer is in the literature. Earl 2016, Kikegawa 2011 and Ouyang 2018 give the weekly cycle in a few cities but no cross-city scaling. The sign is not obvious, because P3 allows PWS in residential areas to show the opposite sign. | Resolved |
| 2 | Disguise | The question is a renamed known one: lockdown studies (mobility down, UHI down), AHF inventories with weekday/weekend profiles, and weekend-effect work on NO2 and ozone. | New searches (queries 1, 2, 5, 6, 7) gave single-city weekly papers, lockdown-UHI papers on one city or on satellites, and pollution weekend effects (Beijing, Warsaw, Jerusalem). None regresses weekly canopy-UHI amplitude on commuter share across cities. The lockdown literature is a near sibling, though: mobility change versus UHI change, not weekly amplitude versus commuter share. The Lee 2025 GRL paper (traffic congestion and SUHI) is unchecked, so a nearby study may exist. | Partial |
| 3 | Combinatorial novelty | It is just PWS data joined to a census commuting table and then regressed, with no problem at the interface. | There is a real interface problem: PWS sit in residences and CBDs are under-sampled (P3), so the commuter signal may be diluted or sign-reversed. The measurement validity question is itself part of the question. Even so, the core remains a data merge plus regression, and the interesting scientific step is small. | Partial |
| 4 | Presupposition failure | (a) It presupposes that commuter share drives the weekday heat, but office energy use, HVAC, freight and delivery traffic and commuter share are all collinear with CBD size. (b) The 0.1–0.5 °C signal may sit below PWS error and below weather-regime noise, and the weekly "signal" in an urban-minus-rural difference can come from regional circulation (P2). (c) Only net commuter inflow is counted, but weekday heat is also driven by internal commuting. | The record flags P2, P3, P5 and P6 openly and treats them as things to test. The question is framed as a test with a null as an acceptable answer, not as an assertion of the mechanism. The weakness is that the quantity named, net inbound share, is only a proxy for weekday activity, so a positive result would not isolate commuting. A residual risk is that the cross-city design lacks power. | Partial |
| 5 | Vagueness | "Predicted by" is loose, and with a small cross-city n a result could be read as yes or no. | The record specifies the outcome: at least about 30 cities, hourly amplitude with CIs, a partial slope, a power criterion for a null, and a lockdown test. That is falsifiable. What is not stated is the effect size needed to count as a yes, or how many cities actually meet the PWS and rural-reference requirements. | Partial |
| 6 | Significance inflation | The claimed audience is mostly AHF modellers, and they already use fixed weekday/weekend profiles. Planners are unlikely to change policy over a 0.1–0.5 °C canopy effect. | The consequence is genuine but modest: a cheap observational constraint on AHF and a test of PWS validity. Both are real, specialist audiences. The remote-work policy angle is weaker than the record says. | Partial |
| 7 | Reason for silence | If it is easy, someone must have tried it. A null or messy result would not get published, so silence could be file-drawer rather than a gap. | Mechanisms are credible: PWS only matured after about 2016, the signal is near the noise floor, and the commuting data sit in transport geography. But PWS have been available for roughly 10 years, and Earl-style weekly analysis is simple. A failed attempt left unpublished is a live alternative the record cannot exclude. | Partial |
| 8 | Dissolution | The question could dissolve: if PWS cannot sample CBDs, there is no measurable quantity. | It would then become a measurement-validity result, which is still an answer, so it does not dissolve. | Resolved |

## Statuses
1 Resolved, 2 Partial, 3 Partial, 4 Partial, 5 Partial, 6 Partial, 7 Partial, 8 Resolved.

## Recommended verdict
Provisional. Nothing is Unresolved on attacks 1, 2 or 4, but novelty is only medium, the Lee 2025 GRL paper is unchecked, the effect may be below the noise floor, and commuter share is a collinear proxy for weekday activity.
