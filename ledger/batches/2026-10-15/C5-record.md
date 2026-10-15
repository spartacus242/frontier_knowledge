# C5 record — Gates 0–3

**ID:** UQ-C5 (placeholder)

**Domain(s):** Reliability engineering / maintenance optimisation (OR); neighbours: imperfect-maintenance theory, RCM, aviation maintenance human factors, safety-instrumented-system proof testing, nuclear PM optimisation.

**Question (canonical, Gate 0 original):** Do standard PM-interval optimisation models systematically choose intervals that are too short because they omit maintenance-induced failures (MIF), and by how much in real industrial data?

**Reformulation (Gate 1, the one permitted):** Across real multi-asset industrial maintenance records, what is the distribution (sign and size) of the gap between the cost-optimal PM interval from a perfect/minimal-repair age-replacement model and the optimum from the same data fitted with a model that includes a post-maintenance failure-intensity spike? Is the gap systematically positive (true optimum longer)?

**Alternative formulations:**
1. When maintenance itself introduces failures, how far are classic age-replacement optimal intervals from the true optimum?
2. Does accounting for maintenance-induced defects lengthen the optimal PM interval in practice?

**Motivating gap:** Classic age/block replacement treats PM as perfect or improving; field reports describe "infant mortality" after maintenance.

**Presuppositions:**
- P1 MIF occur at measurable rates. ESTABLISHED (Waddington, WWII Coastal Command; Nowlan & Heap 1978; GA post-inspection accident-risk studies).
- P2 "Models in use omit MIF." PARTLY FALSE for the literature (worse-than-old repair, ineffective PM, human-error-in-maintenance, post-maintenance intensity models all exist); plausibly true for *practice* (CMMS/Weibull age-replacement tools). Flag: contested/ambiguous.
- P3 "Systematically too short" — directional claim. Theoretically near-trivial: adding a per-PM failure cost raises PM's cost, so the optimum lengthens in any monotone model. Only the empirical magnitude is non-trivial.
- P4 Real data can separate MIF from early-life/ burn-in failures of replaced parts. Contested (identifiability).

**What would count as an answer:** A multi-dataset study (several industries, >= tens of asset classes) fitting nested models (with/without post-PM intensity term) to time-since-PM failure data, reporting the ratio T*_MIF / T*_classic with CIs, plus a test of whether the classic model's interval is significantly shorter. A theoretical sign result alone does not suffice (it is essentially known).

**Novelty — queries run (18):**
1. "preventive maintenance optimal interval maintenance-induced failures model" — generic PM optimisation papers; BUAA, MATEC, NASA NTRS hits; no direct answer.
2. "imperfect maintenance 'worse' maintenance model optimal replacement policy" — "worse than old repair" optimal replacement (RESS 2018); Cha et al. delayed worse-than-minimal repair.
3. "maintenance-induced failures aviation human factors percentage" — ATSB human-factors-in-maintenance reports; incident shares, not interval optimisation.
4. "'maintenance-induced' defects age replacement policy optimal interval longer" — age-replacement vs N minimal repairs; no MIF-interval quantification.
5. "does fixing equipment too often cause breakdowns ... overmaintenance" (lay) — vendor blogs (UpKeep "too much PM?") asserting over-maintenance causes failures.
6. "PM model 'maintenance-induced failure' probability optimal PM interval" (extended) — DIRECT HIT title: "Post-servicing failure rates: Optimizing PM interval and quantifying maintenance induced failure in repairable systems" (IEEE RAMS, ieeexplore 6517681); Coria et al. RESS 2015.
7. "imperfect PM 'probability p' maintenance damages system Nakagawa" — Jung/Park/Yum 1999 "ineffective PM"; Nakagawa imperfect-PM chapters.
8. "RCM Nowlan Heap infant mortality after overhaul intrusive maintenance" — RCM literature; AIN 2026 "Is too much maintenance reducing aircraft reliability?"
9. "maintenance quality errors installation defects optimal PM interval empirical field data" — cross-industry interval studies, none on MIF bias.
10. "nuclear power plant maintenance-induced failures PM optimization" — EPRI/IAEA PM optimisation; KAIST 2010 model of human maintenance error vs optimal PM frequency.
11. "'Post-servicing failure rates' ..." — Louit, Pascual, Banjevic 2009 (post-maintenance intensity rise, optimal interval, field case).
12. "Scarpazza Hutter general aviation accident risk after inspection" — GA post-maintenance risk (AOPA, GA News 2025, helicopter PMC study).
13. "optimal PM interval underestimated ignoring maintenance errors 'human error' sensitivity" — KAIST 2010; Emami-Mehrgani et al. JQME 2014 (human error + PM).
14. "'post-servicing' failure rate MIF repairable systems RAMS" — Selvik & Lohne 2022 (MIF in RCM, oil & gas); IEEE record of the post-servicing paper.
15. "optimal PM interval 'maintenance induced' failure intensity jump ... non-monotonic case study" — Louit et al. again; ARI-type models.
16. "'Post-servicing failure rates' 2013 RAMS abstract" — no abstract retrieved; Accendo webinar "All your failures could be caused by maintenance" (2026).
17. "optimal test interval SIS 'test-induced failures' too frequent testing" — Kenexis/NTNU proof-test interval work; test-induced failure is a known SIS trade-off.
18. "'Waddington effect' PM interval optimization" (historical term) — Reliability Academy "The Waddington Effect" (2023); Inficon "Waddington effect on wafer fabs" (Ignizio).

**Novelty — nearest prior formulations (opened unless stated):**
1. Waddington effect — Hupjé, "The Waddington Effect", Reliability Academy, 2023, https://reliabilityacademy.com/articles/preventive-maintenance/the-waddington-effect (reporting C.H. Waddington's WWII RAF Coastal Command OR work, via Ignizio). Found PM too frequent, failures spiking after inspection; intervals were extended.
2. Louit, Pascual, Banjevic, "Optimal interval for major maintenance actions in electricity distribution networks", Int. J. Electr. Power & Energy Syst. 31(7–8):396–401, 2009 (abstract opened via https://www.ing.uc.cl/?p=47598). Post-maintenance failure-intensity rise built into interval optimisation, with a field case study.
3. Selvik & Lohne, "Modelling the Effect of Maintenance-Induced Failures from Periodic Testing of Safety-Critical Equipment as Part of RCM Analysis in the Oil and Gas Industry", WCEAM 2021 proceedings (Springer LNME, 2022), https://link.springer.com/chapter/10.1007/978-3-030-96794-9_19. MIF built into interval choice for downhole safety valves.
Also close (title seen in two searches, abstract NOT retrievable, so not counted as opened): "Post-servicing failure rates: Optimizing preventive maintenance interval and quantifying maintenance induced failure in repairable systems", IEEE RAMS, https://ieeexplore.ieee.org/document/6517681 (c. 2013). Supporting: RESS 2018 "worse than old repair" (https://zaguan.unizar.es/record/129450); Jung/Park/Yum 1999 "ineffective PM"; KAIST 2010 human maintenance error vs optimal PM frequency.

**Novelty — how this differs from each:**
1. Waddington: one fleet, one era, an empirical OR finding with no model comparison. The candidate asks for a systematic, multi-dataset bias estimate against standard models. The core idea (PM too frequent because of MIF, so lengthen intervals) is the same.
2. Louit et al.: one application (tree trimming) with the effect included. The candidate asks for the cross-industry size of the omission bias. Same mechanism, same decision variable.
3. Selvik & Lohne: one equipment class. Their result goes against the candidate's directional presupposition (the longest interval was worst), so "systematically too short" is not guaranteed. The candidate's only new element is aggregation across many datasets.
The RAMS "post-servicing" paper's title states the candidate's question almost verbatim: optimise the PM interval and quantify MIF.

**Novelty confidence: LOW.** The question has been asked, and partly answered, since WWII (the Waddington effect). Formal models exist (worse-than-old, ineffective PM, human-error PM, post-maintenance intensity), as do applied case studies (Louit 2009; Selvik & Lohne 2022; RAMS post-servicing paper). The only possibly unasked residue is a meta-analytic estimate of the bias across industries. That is an empirical, data-access follow-up to an asked question, not a new question. Verdict: disguised known / asked. It is not an open problem in the ledger's sense. No source found frames the cross-industry magnitude as an open problem.

**Significance (argued, for the record although Gate 2 fails):**
- Consequence: Yes plus a large magnitude would justify routinely adding a post-PM intensity term to CMMS/RCM interval tools and extending intervals, cutting labour and downtime. No, or a small magnitude, would mean classic models are good enough and MIF matters only for intrusive tasks. The sign is largely settled in theory, so the decision value lies in the magnitude.
- Audience: reliability engineers, RCM/MSG-3 practitioners, regulators who set TBO/overhaul intervals (FAA, SACAA), SIS proof-test designers.
- Fecundity: which task types (intrusive vs non-intrusive) carry most of the MIF; whether MIF can be identified separately from burn-in of new parts; how condition-based maintenance changes the trade-off. All of these are already discussed in RCM.
- Anchoring: Nowlan & Heap's age-reliability patterns; the TBO debate in piston aviation; the proof-test-interval trade-off in IEC 61511 practice; how to identify imperfect-maintenance parameters from field data.

**Reason for silence (candidate):** No real silence. The topic is folklore in practice (Waddington, RCM) and handled piecemeal in theory. A cross-industry bias estimate is missing because failure-plus-maintenance records are proprietary and fragmented across CMMS vendors and operators, and because MIF is hard to identify separately from replacement-part infant mortality. That residue is a data-access gap, not an unasked question.

**Gate outcome:** Reject at Gate 2 as asked / disguised known (Low novelty).
