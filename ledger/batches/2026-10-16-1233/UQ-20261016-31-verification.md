# UQ-20261016-31 — verification of the rejection ground

Date: 2026-10-16. Budget: 14 searches / 6 fetches — both fully used.

## Claim under check

> "The motivating anomaly behind the candidate question is explained in the anchor paper itself.
> Grigg et al. 2025 (arXiv:2506.02831) attribute the non-redetection of the 68 satellites reported
> by Di Vruno et al. to frequency non-overlap between the campaigns and to EDA2 sensitivity, rather
> than to any change in the satellites' own emission. And Bassa et al. 2024 reports that Starlink
> unintended electromagnetic radiation is stable at the hardware-version level on the same
> instrument about two years apart."

Candidate question it was used to reject: does an individual LEO satellite's UEMR vary over its
operational life, so that a satellite detected emitting in one campaign can be genuinely below
detection in a later one?

## Verdict: PARTLY_CONFIRMED

Leg 2 (what Grigg says) is accurate. Leg 1 ("explained") and leg 3 (Bassa "stable at the
hardware-version level") both overstate their sources in ways that matter to the rejection.

---

## (a) Grigg et al. 2025, arXiv:2506.02831 — Section 3.2 "Comparison with Other Studies"

Paper: "The Growing Impact of Unintended Starlink Broadband Emission on Radio Astronomy in the
SKA-Low Frequency Range". Instrument: EDA2, 256 dual-pol dipoles, 35 m footprint, SKA-Low station
prototype. ~76 million all-sky images over ~29 days; 112,534 detections of 1,806 unique Starlink.

Verbatim clauses (confirmed independently from the HTML and from the PDF conversion):

- "In the first paper by Di Vruno, F. et al. (2023), 68 Starlink satellites are detected."
- "Of these, 12 were model v1.0 (both \"Initial\" and \"Visorsat\" models)" ... "the other 46 were
  v1.5 satellites."
- "None of these 68 satellites were detected in our work even though 55 of them were still in
  orbit during this survey."
- "the narrowband emission at 125, 135, 143, 150, and 175 MHz does not overlap any of the
  frequencies in our work"
- the v1.5 broadband emission "being ~1 Jy, which is below the EDA2's sensitivity level in these
  observations."

Mechanism, in the paper's own words: TWO INSTRUMENTAL mechanisms, split by model class —
frequency non-overlap for the v1.0 narrowband lines, EDA2 sensitivity for the v1.5 broadband
(~1 Jy). The paper nowhere proposes that the satellites' own emission changed, switched off, or
varied with time as a cause of the non-redetections. On that narrow point the claim is correct.

Does it account for all 68? NO, on two counts:
1. MY ARITHMETIC: 12 + 46 = 58. The printed model breakdown leaves 10 of the 68 with no stated
   model class and therefore no stated mechanism. (46 verified twice, from two independent
   conversions of the paper — HTML and PDF — so this is not a single-read OCR artefact. I could
   not check the A&A published version: aanda.org is blocked to this session.)
2. No formal upper limit or detection threshold in Jy is given for any of the 55 still-in-orbit
   non-redetected satellites. The only Jy figure is the ~1 Jy ESTIMATE of the expected v1.5
   signal. So the sensitivity mechanism is an unquantified plausibility argument, not a
   measurement that places each satellite below a stated limit.

Frequency-overlap check (my own, from Table 1): the eleven observed centres are 100.00, 110.16,
120.31, 130.47, 140.63, 150.78, 161.72, 170.31, 180.47, 190.63, 200.00 MHz, each ~0.90–0.926 MHz
wide. The nearest to Di Vruno's 150 MHz line is 150.78 MHz, i.e. a band of roughly 150.32–151.24
MHz, which excludes 150.0 MHz. The non-overlap statement is therefore internally coherent.

Load-bearing logical point: both mechanisms assert that the two campaigns are NOT COMPARABLE.
Non-comparability makes the non-redetection uninformative about emission change — it does not
establish that the emission was unchanged. The anomaly is defused as evidence, not resolved
against the candidate hypothesis.

Incidental Grigg sentences on time variation (NOT offered as an explanation for the Di Vruno
non-detections):
- "Figure 1 also shows that the spectral structure changes in time, with the frequency gap between
  peaks staying similar."
- on the v2-mini DTC structure: "additionally see that it varies with time."
- Discussion/conclusions, about satellites at operational altitude vs orbit-raising: "the observed
  character of the emission is constant." (Subject is the emission's character across mission
  phase, not per-satellite flux stability over years, and it singles out no model.)

## (b) Bassa et al. 2024, arXiv:2409.11767 (A&A 2024, 10.1051/0004-6361/202451856)

"Bright unintended electromagnetic radiation from second-generation Starlink satellites."

- Epoch: two one-hour LOFAR observations on 19 July 2024 — one LBA "covering frequencies from 10
  to 88 MHz", one HBA 110–188 MHz.
- Versions: v1.0 and v1.5 (first generation); v2-Mini and v2-Mini DTC (second generation).
- The ONLY earlier-epoch comparison is for first-generation v1.0/v1.5 in the HBA band against the
  2022 LOFAR observation: the 2024 first-generation detections are "consistent in flux density and
  spectral properties to those of the satellites" ... "we detected in the analysis of the 2022
  observation".
- Interval: 2022 -> July 2024, i.e. about two years, same instrument and same band. The claim's
  "on the same instrument about two years apart" is right.
- LEVEL: this is a SAMPLE / POPULATION-DISTRIBUTION consistency remark about the first generation
  as a group. It is not a per-version stability measurement with an uncertainty budget, and it is
  not per spacecraft. The paper does not state that any individual spacecraft (NORAD ID) was
  observed in both 2022 and 2024. Generation comparisons are explicitly per version — e.g. "is, on
  average, 15 dB and 7 dB brighter than that of the first-generation"; Fig. 2 gives cumulative
  distributions by version. Tables B.1–B.3 list individual NORAD/COSPAR IDs with measured values,
  but as a single-epoch census.
- Counter-weight in the same paper: brightness "varies in brightness from satellite to satellite."
  Large within-version scatter blunts any inference from population consistency to individual
  constancy.
- SENSITIVITY: no numerical rms noise, system temperature or gain is given in the text I read;
  noise was measured off-source and used in the radiometer equation. The only stated limit is LBA
  "below $S_\nu$ < 10 Jy (3 sigma)" at 50 and 75 MHz. Detected range "15 Jy to 1300 Jy, between 56
  and 66 MHz"; second generation "up to a factor of 32 stronger" after range correction. So the
  consistency is demonstrated only at the bright end. A satellite falling from ~1 Jy to well below
  that in HBA is outside anything this comparison constrains.

## (c) Any published per-satellite longitudinal UEMR comparison, same spacecraft, epochs
months-to-years apart, with upper limits for non-detections?

NOT FOUND in anything I was able to read.
- Grigg 2025: 55 of the 68 were in orbit during the survey and went undetected, but NO upper
  limits are reported for them — this is exactly the missing study, and the anchor paper declines
  to do it.
- Bassa 2024: population-level 2022 vs 2024 consistency; no per-NORAD cross-epoch tracking; no
  non-detection upper limits for first-generation satellites in the earlier epoch.
- Dong 2026: cross-INSTRUMENT, not cross-epoch — six DTC satellites also appear in Bassa's
  July 2024 LOFAR sample, which the authors call "best read as a sample-membership consistency
  test", agreeing only "consistent in order of magnitude". Analysis uses stacked detections only;
  no upper limits for non-detections, so detection fractions and flux ratios are not corrected for
  non-detection censoring.

COULD NOT READ (fetch budget exhausted; these are candidates, not negatives — "not found" and
"could not read" are being kept distinct):
- arXiv:2608.12999 — SNIFFLES I, LEO satellites 1–26 GHz
- arXiv:2603.07631 — 21 cm Array attempt to search for Starlink UEMR
- arXiv:2512.07341 — Limits on unintended radio emission from GEO/GSO satellites in SKA-Low range
- arXiv:2608.11659 — per-satellite emission and radiation limits, 1–14 GHz
- A&A published versions of Grigg and Bassa (aanda.org blocked to this session)

## (d) Dong et al. 2026, arXiv:2605.17150 — does it decline the on-orbit-age estimand?

"A reversed solar illumination dependence of unintended emission from Starlink Direct-to-Cell
satellites at 72–234 MHz with the EDA2."

YES — it names on-orbit age as a NUISANCE CONFOUND and controls it away rather than estimating it:
- "the reversal could in principle reflect satellite age or commissioning state rather than the
  DTC payload"
- it restricts the Ku-only comparison to satellites launched in the same 2024 window as the DTC
  sample, concluding "The reversal therefore is not an artefact of the launch-epoch difference."
- limitations: "any annual or solar-cycle variability in the eclipse-state effect is not testable
  from the present dataset alone", recommending multi-year monitoring "spanning a solar minimum".
- Design is cross-sectional: one catalogue, one observing window. No tracking of individual NORAD
  IDs over months or years; no per-satellite ageing analysis.
- Other reported figures: "DTC satellites emit a range-corrected flux density 1.45x that of the
  Ku-only comparison"; "The DTC population is brighter in eclipse than in sunlight"; the reversal
  "persists across altitude, sub-satellite latitude, frequency, and launch-epoch matching";
  per-satellite DTC subset n = 24 with a confidence interval crossing unity; the 230.469 MHz
  channel was never observed in eclipse.

So Dong neutralises age to isolate the DTC payload effect. It supplies no estimate of an age
effect in either direction, and therefore no negative answer to the candidate question.

## Effect on the claim

- Leg "Grigg attributes non-redetection to frequency non-overlap + EDA2 sensitivity, not to
  emission change": CONFIRMED, with the correction that the two mechanisms are assigned one per
  model class, not jointly to all 68.
- Leg "the anomaly is explained in the anchor paper itself": NOT SUPPORTED as stated. The printed
  breakdown covers 58 of 68 (my arithmetic); no upper limits are given for the 55 still-in-orbit
  non-redetections; and the mechanisms establish non-comparability, which makes the episode
  uninformative rather than explained.
- Leg "Bassa reports UEMR stable at the hardware-version level ... two years apart": the epoch,
  instrument and direction are right, but "stable at the hardware-version level" overstates a
  population-distribution consistency remark about first-generation satellites as a group,
  demonstrated only above a bright detection floor, in a paper that in the same breath reports
  satellite-to-satellite variation and never links a single spacecraft across the two epochs.

Neither cited source licenses the inference that an individual satellite's UEMR is time-invariant,
which is the candidate question's estimand. The rejection's factual spine is partly right; the
inference it carries is not established by these sources.

## Is the residual question posed in print by anyone?

NOT FOUND. No publication I could read poses, in print, the question of whether an individual
satellite's UEMR varies over its operational life such that a prior detection can fall genuinely
below a later detection limit. The nearest printed gestures are Dong's age-as-confound sentence
(which names age only to exclude it) and Dong's recommendation of multi-year monitoring for
solar-cycle variability (a different estimand: illumination-state seasonality, not per-spacecraft
ageing). Caveat: the four arXiv papers listed under (c) remain unread.

---

## Query list (14 searches — query -> one-line result)

1. Grigg 2025 arXiv 2506.02831 EDA2 Starlink unintended electromagnetic radiation -> found arXiv
   HTML/PDF and A&A DOI 10.1051/0004-6361/202554787.
2. Bassa 2024 Starlink unintended electromagnetic radiation LOFAR second generation satellites ->
   mostly press coverage; ASTRON page; no arXiv id yet.
3. arXiv 2605.17150 Dong satellite unintended electromagnetic radiation -> confirmed title:
   reversed solar illumination dependence, DTC, 72–234 MHz, EDA2.
4. Bassa "Bright unintended electromagnetic radiation" second-generation Starlink arXiv abstract
   2024 -> arXiv:2409.11767; A&A 10.1051/0004-6361/202451856.
5. per-satellite longitudinal UEMR same spacecraft NORAD multiple epochs upper limits
   non-detection -> surfaced 2512.07341, 2608.12999, 2603.07631; no longitudinal study named.
6. Di Vruno 2023 LOFAR Starlink ... how many satellites detected out of 68 -> ADS record only, no
   abstract text in snippets.
7. "same satellites" repeat observations UEMR Starlink temporal variability individual satellite
   -> no longitudinal study; same known papers.
8. "Di Vruno" Starlink LOFAR "47" satellites ... 125 135 143 150 175 MHz -> ADS + arXiv 2309.15672;
   the 47-vs-68 split could not be confirmed from snippets.
9. A&A 676 A75 Di Vruno ... "68" abstract -> Bassa and NenuFAR full-text pages; Di Vruno abstract
   text not returned.
10. Starlink UEMR "varies" satellite lifetime ageing degradation "future work" -> only Grigg and
    Bassa again; no ageing study.
11. satellite constellation unintended emission "repeat observations" OR "multi-epoch" same
    satellites 2026 -> Dong, Bassa, SNIFFLES I, 2603.07631; no multi-epoch per-satellite work.
12. "unintended" emission satellite "evolve" ... "not known" whether emission changes during
    operational lifetime -> Di Vruno preprints 2307.02316 / 2309.15672; no posing of the question.
13. SNIFFLES I 1-26 GHz abstract repeat passes same satellites epochs upper limits -> 2608.12999,
    2608.11659, 2512.07341, 2412.14483 surfaced; abstracts not returned in snippets.
14. "it is not known whether" OR "remains unknown whether" ... unintended EM radiation changes over
    time -> no verbatim posing of the residual question found.

No search was refused by a safety classifier.

## Fetch list (6 fetches)

1. https://arxiv.org/html/2506.02831v1 -> Di Vruno comparison passage; mechanisms; instrument;
   11 frequencies; 0.926 MHz channels.
2. https://arxiv.org/html/2506.02831v1 -> verbatim fragments; 12 / 46; 55 in orbit; the
   "character of the emission is constant" sentence; sub-model refused long verbatim (125-char
   quote cap) — a tool limitation, not a safety refusal.
3. https://arxiv.org/html/2409.11767v1 (Bassa) -> 19 July 2024 epochs; 2022 HBA comparison;
   per-version not per-spacecraft; LBA 10 Jy 3-sigma; 15–1300 Jy; no rms given.
4. https://arxiv.org/pdf/2605.17150 (Dong) -> abstract; age-as-confound and launch-epoch matching;
   limitations; six-satellite cross-instrument check; no non-detection upper limits. (Page is
   105,726 chars; only chars 0–100,000 were read.)
5. https://arxiv.org/html/2506.02831v1 -> Table 1 frequency centres; 12 and 46 confirmed; context
   of "character of the emission is constant".
6. https://arxiv.org/pdf/2506.02831 -> independent PDF-side confirmation of 68 / 12 / 46 / 55, of
   the ~1 Jy figure, of the absence of any formal upper limit, and that emission change is never
   offered as a cause.

## Failures (not counted as fetches — no content returned)

- curl https://arxiv.org/html/2506.02831v1 -> CONNECT tunnel failed, 403 (egress proxy refused
  arxiv.org:443).
- curl https://www.aanda.org/articles/aa/full_html/2025/09/aa54787-25/aa54787-25.html -> CONNECT
  tunnel failed, 403.
- curl http://export.arxiv.org/abs/2506.02831 -> could not resolve host.
Consequence: all source reading went through WebFetch's summarising sub-model, which caps quotes
at ~125 characters. Every quotation above is therefore a short exact fragment, not a full
reproduced paragraph; the 12 / 46 figures were cross-checked across two different URL conversions
to guard against a single OCR slip. No A&A version of-record text was readable.
