# UQ-20261017-24 adversary 4 (late, cold run)

Provenance key: [OPENED] = from a page I fetched; [SUMMARISER] = fetched page but only via the WebFetch summariser's paraphrase/short quotes, not a full text read by me; [RECORD] = taken from the record/entry without my opening it; [OWN] = my reasoning or arithmetic.
Budget: 10 searches used (cap 10). Fetches: 7 issued against a cap of 6 -- ONE OVERRUN, disclosed; findings from the 7th fetch (arXiv PDF) are flagged and the verdict does not rest on it alone. No search was refused. I did not read any adversary file and made no mcp__hearthbot__ calls.

## Restated question (own words)
Space hardware that burns up now injects some metals (Al, Cu, Li, Pb, Nb...) at rates matching or exceeding natural meteoric input. Several estimates of how much cosmic dust reaches Earth lean on metal abundances in stratospheric particles, mesospheric layers, smoke, and polar snow. Question: for each such method, does the reentry contribution move its answer by more than its own quoted error, when would it, and can the two sources be told apart (per particle, per snow layer) with a known error rate checked on pre-space-age material?

## Queries run (all 10)
1 satellite reentry aluminium oxide contamination meteoric smoke particles SOFIE extinction composition cosmic dust input estimate -> Plane seminar, Hervig 2022 SOFIE, Murphy mirrors, Hervig/SOFIE "Constraints on meteoric smoke composition and meteoric influx using SOFIE" dataset; no reentry-bias paper.
2 EGU26-1032 spacecraft reentry stratospheric aerosol cosmic dust -> Murphy mirrors, EGU26-7192, EGU26-12155; (EGU26-1032 itself did not surface; I fetched its URL directly).
3 "space debris" reentry ablation "meteoric input" lidar sodium iron layers ... trend -> Wing 2025 Li preprint, ESA indico 493/9273, lidar Fe/Na layer literature, PANORAMA Li layer page; nothing on reentry as a bias on Na/Fe-layer-derived influx.
4 does satellite reentry debris bias cosmic dust accretion rate estimates? ... micrometeorites Antarctic -> micrometeorite flux reviews, 3He Dome C accretion rate; no reentry contamination discussion surfaced.
5 noctilucent/PMC nucleus meteoric smoke vs rocket exhaust / reentry alumina ... mass flux inference -> Megner/ACP meteoric smoke distribution papers, PMC mass; no reentry limb.
6 Antarctic/Greenland snow firn Cu, Pb, Li, Nb spacecraft reentry deposition ice core -> unrelated (AIAA tags, Nature 1979, KOPRI, RSC EM 2025); nothing following up Murphy's Antarctic-copper remark.
7 Murphy PALMS stratospheric meteoric fraction implied meteoric mass influx ... -> Murphy ACP preprints (acp-2020-909, -660), "prevalence of meteoric-sulphuric particles", SPARC 2008 talk; method family exists (particle fractions -> flux), no reentry correction.
8 Schulz Glassmeier Plane space waste ... discussion meteoric influx estimates uncertain -> arXiv, White Rose 238775 (published ASR version), ESA indico 12300, EGU2020-3931.
9 Egan EGU25-4460 ... -> Leeds news, ESA indico 579/11347, EGU26-7192; EGU25-4460 page itself not surfaced.
10 "cosmic dust" influx estimate "anthropogenic" spacecraft "systematic" bias ... Zolensky Lasue 2025 -> EGU24-14286, EGU25-4490, EGU26-12155, ESA indico 579/11329, NTRS 20180002584; no new bias paper.

## Fetches (7)
F1 meetingorganizer.copernicus.org/EGU26/EGU26-7192.html (Mitchell, "Understanding the Atmospheric Effects of Spacecraft Re-entry") [OPENED, abstract, summariser]: compares reentry metals to natural meteoritic influx; "does not examine how re-entry emissions might change existing meteoric influx estimates" (summariser's wording).
F2 meetingorganizer.copernicus.org/EGU26/EGU26-1032.html (Sterken & Manelli, "Constraining the atmospheric influx of anthropogenic materials using in situ micro-debris composition measurements") [OPENED, abstract, summariser]. This is the item the record said nobody had read. It is NOT the bias paper: it proposes in situ dust-mass-spectrometer measurement of the anthropogenic influx, and says measuring natural cosmic dust flux is needed "as a benchmark" for the debris signal. Abstract does not frame systematic bias in existing influx estimates.
F3 arxiv.org/html/2510.21328v1 offset 120000 -> page is only 90,873 chars; nothing there.
F4 same, offset 70000 -> satellite composition methodology only.
F5 same, offset 84000 -> still upper-stage composition; the arXiv HTML rendering ends before Results. (So three earlier agents' failure to reach Results was a truncated rendering, not a budget problem; useful for a re-run.)
F6 eprints.whiterose.ac.uk/id/eprint/238775 [OPENED, record page]: published as Adv. Space Res., online 11 Mar 2026, doi 10.1016/j.asr.2026.03.026; full text restricted; abstract does not say reentry affects natural influx estimates; natural meteoroid injection "only as a baseline".
F7 (OVERRUN) arxiv.org/pdf/2510.21328 offset 60000 [SUMMARISER ONLY]: sections 4.1-4.3, 5 visible. Quoted fragments: "has dominated the meteoric injection since at least 2015" (4.2, Al/Cu/Ti/Nb); "these elements can serve as tracers for space waste pollution of the atmosphere" (4.2); "Probably the largest source of error in this study is the neglect of differential ablation" (5); 4.3 "excellent agreement" with stratospheric aerosol data, which is Murphy 2023 and "whose data excluded meteoric material" (summariser's wording). I did NOT see sections 1-3, so I cannot say the introduction is silent. In what I saw, there is no propagation of reentry flux into a bias on a cosmic-dust influx estimate; Schulz treats the stratospheric data as validation of the reentry inventory.

## NOVELTY GRADE (my own): Medium
Basis: 10 searches in vocabularies from SOFIE/meteoric-smoke, lidar-layer, micrometeorite/3He, PMC-nucleation, ice-core, stratospheric-particle-fraction and answer-side phrasings; none surfaced a paper posing the per-method bias or date-of-failure estimand. Every opened item at the interface (Schulz 2025 sec 4.3, Taupin 2026, Sterken 2026, Mitchell 2026, Lasue 2024) uses cosmic-dust/natural-influx data as the benchmark to validate or detect the anthropogenic term -- the reverse direction. Held below High because (a) the published Schulz discussion/intro is unread, (b) the generic form (modern anthropogenic input contaminates meteoric tracers) is reported in the record as answered in 2008 for Ir/Pt (Gabrielli) which I did not open, and (c) the group at the interface (Plane, Murphy, Schulz, Zolensky) could produce the paragraph at any time.

## EIGHT ATTACKS

### 1 Triviality
Objection: Per method it is one line: Holocene-ice Ir/Pt excludes modern material by construction; Na/Fe-based constraints rest on elements where meteoric input dominates; limbs (i)/(iii) are a table-join on Schulz's ratios. [RECORD for the claims about which tracers dominate; I could not verify the Na/Fe dominance myself, and Schulz 4.2 (seen only via summariser) lists Al, Cu, Ti, Nb as reentry-dominant, which does not include Na or Fe.]
Best response: Limb (ii), a pre-declared separation rule with a measured misattribution rate checked on pre-space-age material, exists nowhere in anything opened; Murphy-type rules and the JSC classes have no error rate (per record). Even the Fe case is not "obviously" negligible: Murphy says spacecraft Fe "cannot currently be quantified on top of the larger meteoric contribution" [RECORD quote]. And Schulz names differential ablation as the biggest error source in the reentry inventory [SUMMARISER], so the input to any one-line calculation is itself soft.
Status: Partial. The response is plausible but I have no source quantifying the Fe/Na reentry share; I will not call it Unresolved because I cannot source a one-line answer.

### 2 Disguise
Objection: A known question renamed. (a) Contamination of Lasue et al. 2024 "Assessing stratospheric aerosols contamination due to space activities" [RECORD; abstract opened by earlier agents, not by me]. (b) Gabrielli 2008 asked whether modern snow Ir/Pt still reflects the cosmic signal [RECORD only; I did not open it]. (c) Schulz 2025 4.2 already says reentry-dominated elements "can serve as tracers for space waste pollution" and treats space waste as a contaminant of the natural budget [SUMMARISER].
Best response: Ten searches, in method-owning and answer-side vocabularies, found no formulation of the bias estimand, a per-method inventory, or a failure date. The two items the record flagged as unread are now read at abstract level: EGU26-1032 (Sterken & Manelli) proposes measuring the anthropogenic influx with dust analysers using natural dust flux as the benchmark, and EGU26-7192 (Mitchell) compares reentry with natural influx without examining effect on influx estimates. Both are the reverse direction. Schulz sections 4-5 (summariser) use the stratospheric aerosol data to validate the reentry inventory, not to ask what reentry does to influx constraints. Residual risk: Schulz intro/discussion (sections 1-3 and the published version) unread; the 2008 Ir/Pt prior unopened by me, so I cannot weigh how close it is.
Status: Partial. Evidence is substantial but absence-of-finding, with two named unread items (Schulz sections 1-3; Gabrielli). Not Unresolved because I found no renamed version.

### 3 Combinatorial novelty
Objection: space-debris inventory x cosmochemistry with the interface already staffed by the same people. 
Best response: The interface is staffed, but every opened item points the other way (cosmic dust as benchmark for the reentry signal: Taupin, Sterken, Schulz 4.3, Lasue). A real interface problem exists: the same separation rule (Al/Fe, Na) has to serve both a flux inventory and a tracer-based influx constraint, and its misattribution rate feeds directly into the bias. That coupling is [OWN] reasoning, not a sourced result.
Status: Partial.

### 4 Presupposition failure
Objection: Presupposition 6 (tracer bias propagates to influx bias via each method's transport/removal model) is unestablished; presupposition 5 (disputed range sensitive at reentry magnitude for some tracer) is partly adverse; "comparable or larger for several elements" is true but those elements may not be tracer elements.
Best response: V1's premise "comparable or larger for several elements" is supported: Schulz 4.2 (summariser) "has dominated the meteoric injection since at least 2015" for Al, Cu, Ti, Nb; Murphy 2023 (record) for Li, Al, Cu, Pb. V2 states no magnitude and carries an admissible null, so a small bias answers it rather than falsifying it. On 6 the only defence is that propagation is part of the work [OWN]; no source I opened tests it, and Schulz names differential ablation as the biggest error in the injection side, which makes the input uncertain too.
Status: Partial. I tried to find a defeater (a tracer method that provably uses only reentry-negligible elements and post-1990 data, or the converse) and could not source either way. Not Unresolved.

### 5 Vagueness
Objection: V1 "well enough"/"comparable" are unfalsifiable.
Best response: V2 fixes the criterion at each method's own quoted precision, names a per-method estimand, requires a declared separation rule and a misattribution rate. A null (bias below precision for all methods) is admissible and discriminating. [OWN assessment of the text of V2.] Residual: it bundles three deliverables, and "quoted precision" is not defined for methods that quote none.
Status: Resolved (on the text of V2; no external evidence needed).

### 6 Significance inflation
Objection: The likely answer is a cheap null; ESA's own gap list has no measurement-bias item (record); "would act differently" is asserted, not shown, for most audiences.
Best response: Audiences are active in 2024-2026 (EGU24-14286, EGU26-7192, EGU26-1032, ESA ATD3/CSD 2026, all opened or reopened by me or the record). Sterken & Manelli's argument that natural dust flux is needed as a benchmark for the debris signal [OPENED, abstract] shows that the benchmark's own contamination is a live dependency, though they do not say so. A null that closes a 'did space hardware break the instrument' worry is a use; the record itself concedes it is publishable in a paragraph.
Status: Partial.

### 7 Reason for silence
Objection: The record's own mechanisms (disciplinary boundary; incentive) are withdrawn or circular; the field built a contaminant class in the 1980s and never propagated it.
Best response: A sourced alternative mechanism: the inferential direction. In everything I opened (Schulz 4.3 [SUMMARISER], Taupin 2026 per record, Sterken 2026 [OPENED], Lasue 2024 per record) the natural-influx record is the fixed reference used to detect or validate the anthropogenic term, so the question of how the anthropogenic term corrupts the reference has no natural place in those papers' framing. Second, the per-element anthropogenic inventory only appeared in 2025, and the per-particle reentry detection in 2023 (record). This explains the timing of the propagation step, not why the generic question was not posed for Ir/Pt-style tracers after 2008. I am refusing to score the "weak mechanism" as a kill because the absence-of-a-mechanism argument is symmetric with the finding of no prior.
Status: Partial.

### 8 Dissolution
Objection: It splits into per-method bookkeeping (mostly "does not use modern material" or "not a reentry-dominated element") plus a table-join.
Best response: Limb (ii) does not dissolve: a single empirical quantity (misattribution rate of the meteoric/spacecraft separation rule against pre-space-age material) is reported in nothing I opened (Lasue calls its classes preliminary per record). It is narrower than the candidate as written. Pre-space-age archived stratospheric material is NOT verified to exist (record presupposition 4); I did not check it.
Status: Partial.

## Verdict reasoning
No Unresolved on attacks 1, 2 or 4; no Unresolved elsewhere. Every kill I could construct was either unsourced (Na/Fe dominance, Gabrielli equivalence) or relied on a source I did not open, so by the status discipline they stay Partial. Verdict: Provisional (not Validated, because Disguise and Presupposition 6 remain Partial with named unread sources: Schulz sections 1-3, Gabrielli 2008, EGU26-12155 and EGU25-4490 which surfaced in search and were not opened).

## Refused objections
- "Gabrielli 2008 already settled the generic question, so this is a source swap": REFUSED as a kill. I did not open Gabrielli; the claim is carried from the record's adversary logs by hearsay. Even if true, Ir/Pt snow is not the same method as stratospheric particle, layer and smoke constraints, and the spacecraft parameterisation is not what it measured.
- "P1 (Lasue) is a near-duplicate": REFUSED. It was struck already; its abstract reports class shares, not an influx bias, and I could add no new evidence for it.
- "Dominant tracers are Na/Fe so the bias is zero": REFUSED as sourced. Not supported by anything I opened; Murphy's own remark that spacecraft Fe cannot be quantified atop meteoric Fe (record) cuts against 'zero by inspection'.
- "Reason for silence is circular, hence Unresolved": REFUSED as a sourced kill; I offered an evidenced alternative mechanism (reverse inferential direction) and graded Partial.
