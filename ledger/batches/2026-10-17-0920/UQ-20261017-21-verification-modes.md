# UQ-20261017-21 Mode-S / ADS-B / AMDAR provenance check
Counts: 6 searches run (of 8; the last 2 returned link lists only, no new text, so not used further), 6 fetches run (cap reached).
Read level: summariser-mediated reading of full texts (WebFetch summaries), not verbatim PDF reading. No page was opened in a browser; all text via the fetch summariser.

## Routes
1. S1 Mode-S EHS derived winds (KNMI) -> TR336, TR338, AMT links.
2. S2 AMDAR position source -> community.wmo.int/node/36074 etc.
3. F1 cdn.knmi.nl TR336.pdf (KNMI technical report, Mode-S EHS logging, ~2013): READ (summary). Position from ADS-B DF17 type 9-18 in that setup; time = receiver PC time stamp ("external time-stamp"); gsp, tan = BDS5.0; mhd, mac = BDS6.0; "Temperature is deduced from the Mach number and airspeed"; BDS4.4 not interrogated by ATC NL.
4. F2 amt.copernicus.org/articles/9/1/2016/ : WASTED, wrong paper (Calbet collocation). Nothing learned.
5. S3, S4 (de Haan; shares) -> links only.
6. F3 amt.copernicus.org/articles/18/3341/2025/ (de Haan et al. 2025, EMADDC R2.2): READ (summary). Position from ATC radar for radar-fed EHS; local receiver decodes CPR from ADS-B; timestamp created at reception; ADS-B onboard sensed position; heading magnetic then converted to true; temperature derived from Mach+TAS; BDS4.4 <5% of aircraft; totals ~75e6 surveillance obs/day, >55e6 wind, 32e6 temperature; no ADS-B/EHS/AMDAR share breakdown.
7. F4 ecmwf.int newsletter 184: Global Mode-S via Flightradar24 (UK Met Office); no position/time source; no shares. Used winds/day 691K -> 1,695K in trial.
8. S5, S6 (AMDAR navigation; ADS-B GNSS fields) -> links only (patents, ICAO slides, JTECH GNSS-temperature paper title). Not opened (fetch cap).
9. F5 community.wmo.int/node/36074 AMDAR Observing System Description: READ (summary). Lists latitude, longitude, time as additional parameters; does NOT state GPS vs IRS vs blended. No share.
10. F6 amt 18 3341 PDF: Table 1 per summary: gs BDS5.0, true track BDS5.0, magnetic heading BDS6.0, Mach BDS6.0, IAS BDS6.0, TAS BDS5.0, position ADS-B (1e-5 deg, 0.5-2 s) or radar echo (2-5e-5 deg, 5-20 s); timestamp created at reception; "onboard sensed position (through GPS and inertial systems)".
Not tried (cap): ICAO Doc 9871, DO-260B text, ICAO Annex 10 Vol IV, EUROCONTROL docs, JTECH ADS-B GNSS paper, PMC, doi.org.

## Exact strings checked
Summariser returned these in quotes (not independently re-verified by character-level search): "the position is determined by ATC radar"; "The timestamp is created at the moment of reception of the information"; "Temperature is deduced from the Mach number and airspeed"; "onboard sensed position (through GPS and inertial systems)"; "Lat Latitude in degrees DF17, type 9-18". No separate one-at-a-time exact-string verification was run (no fetch budget).

## Conclusions
Q1: position = radar-assigned (radar-fed EHS) or ADS-B (local receiver); time = ground receiver/radar at reception; GS+track BDS5.0 (not stated in sources read whether GNSS- or IRS-sourced); mag heading BDS6.0 (magnetic sensor/IRS; not stated); Mach BDS6.0 air data; SAT derived from Mach+TAS (air data). Not documented in what I read: GNSS vs IRS origin of BDS5.0 GS/track. Inference only.
Q2: ADS-B position onboard-sensed "through GPS and inertial systems" (3rd hand via de Haan 2025; Doc 9871/DO-260 field names not read). Message fields (airborne position TC 9-18 CPR lat/lon; velocity TC19) from background knowledge only, NOT verified here.
Q3: NOT ESTABLISHED. WMO page read does not say. COULD NOT CONFIRM GNSS/IRS/blended.
Q4: Own inference: radar-fed EHS observation's position and time do not depend on aircraft GNSS; Mach, TAS-based temperature, magnetic heading not GNSS. Possibly affected: ground speed/track (BDS5.0) if the avionics source is GNSS-aided, and ADS-B-sourced position when local receiver uses it; source of BDS5.0 not documented in what I read. So claim "positions and time stamps are GNSS-derived" is not supported for radar-based EHS.
Q5: No published share found. Only totals (EMADDC 2025) and Mode-S Global trial counts.
