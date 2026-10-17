# UQ-20261017-24 - Adversary 3 (late, from-scratch inspection)

Provenance key: [OPENED-ABSTRACT] = abstract page opened, read through the fetch summariser (a third-party summary, not verbatim full text). [OPENED-RECORD] = the Gate 0-3 record or the entry on disk. [OWN] = my own reasoning or arithmetic. [UNREAD] = could not be read, which is not the same as absent. I did not read any adversary log. I did not re-read Gabrielli 2008, per instruction. No hearthbot tools were called.

## Budget
Searches: 10 of 10, none refused. Fetches: 6 of 6. All 10 searches served attack 2.

## Restated question [OWN]
Spacecraft reentry now injects metals into the middle atmosphere and stratosphere at rates that rival or exceed the natural meteoric input for some elements. Two things follow.
1. Does that anthropogenic input shift the numerical estimates of how much extraterrestrial mass reaches Earth? Concretely, for each published influx constraint built on metal abundances (stratospheric particles, mesospheric layers, meteoric smoke, polar snow/ice), what is the percentage error in the inferred influx, and at what reentry mass or date does it exceed that method's own quoted precision?
2. Can the meteoric and spacecraft components be told apart, per particle and per layer, with a known error rate, tested on material from before the space age?

I read this as a bias-propagation question plus a separation-rate question. It is not the question "what fraction of particles is spacecraft", which is a composition question.

## Sources opened
1. /tmp/.../UQ-20261017-24-record.md [OPENED-RECORD]
2. /tmp/.../UQ-20261017-24-entry.md [OPENED-RECORD]
3. EGU26-7192, Mitchell, "Understanding the Atmospheric Effects of Spacecraft Re-entry" [OPENED-ABSTRACT, summariser]. Re-entry metal emissions "approaching the natural meteoritic influx for specific elements". No method for separating the two and no discussion of bias in influx estimates.
4. EGU26-8332, Murphy, Schill, Lawler, "Spacecraft, Ablation Processes, and Metals in the Stratosphere" [OPENED-ABSTRACT, summariser]. Reentry metals are incorporated into natural sulfuric-acid particles. "the measurements can separate how much of a given metal came from meteoroids and how much from spacecraft", but only "in many cases". Al/Fe in meteor-derived particles constrains Al's ablation fraction. The separation is used to constrain ablation, not to correct an influx. It does not discuss bias to influx estimates.
5. EGU25-4490, Taupin, Lasue, Maattanen, Zolensky, "Origins of stratospheric particles through an updated automated classification: revisiting the 1981-2020 period of the NASA Cosmic Dust Collections" [OPENED-ABSTRACT, summariser]. About 5,500 preliminary classifications are being reanalysed with PCA and clustering. "at least 20% of them remain ambiguously classified". Anthropogenic injection is put at about 263 t in 2019. It frames the work as a classification goal, not a bias correction.
6. arXiv 2510.21328v1 (Schulz et al.), fetched at offset 30000 [OPENED, partial]. The window covered launch scenarios and composition tables only. Results, discussion and conclusions were again NOT reached. This is [UNREAD], so whether Schulz et al. raise the bias limb is still unverified. Four agents have now missed that section, so it should be fetched by a section anchor or the PDF next time.
7. EGU26-13101, Hoepfner et al., Al2O3 aerosol detection by IR limb sounding [OPENED-ABSTRACT, summariser]. Debris aerosol "may interact with natural meteoric smoke". The focus is on detecting the human-made aerosol, not on distortion of natural flux estimates.
8. Gayathri et al. 2025, Environ. Monit. Assess. 197(9), East Antarctic Cu record [OPENED-ABSTRACT, summariser]. Cu roughly doubled after 1985 and is attributed to Chilean copper mining. Neither spacecraft nor cosmic dust is mentioned. This is a live confounder for the Antarctic copper limb: the Murphy remark about reentry doubling Cu in snow meets a documented mining signal of similar size.

## Queries run (10)
Q1 "EGU26-1032 spacecraft reentry meteoric cosmic dust": EGU26-1032 itself did not surface (the record's unread item). It returned EGU26-7192 and Murphy mirrors.
Q2 "satellite reentry ablation contribution to mesospheric iron sodium layers lidar meteoric input function uncertainty": lidar Na/Fe layer literature and Wing 2025. No paper on reentry bias in layer-derived influx.
Q3 "Antarctic snow micrometeorites cosmic dust flux future contamination by spacecraft reentry debris": Dome C 5,200 t/yr flux items. No contamination-by-reentry item.
Q4 "anthropogenic space debris reentry nickel iron deep-sea sediment osmium cosmic dust accretion rate interference": sediment tracer reviews (Os, Fe-60). Nothing on anthropogenic space material.
Q5 "can stratospheric aerosol metals still be used to measure meteoric ablation flux given spacecraft reentry" (answer-side phrasing): only the Murphy 2023 mirrors.
Q6 "EGU26 meteoric smoke particles versus spacecraft reentry particles stratosphere sampling influx estimate": EGU26-7192, EGU26-8332, EGU25-7114, ESA indico 579/11333 and /11346. The closest hits are the Murphy group's own inverse-direction abstract.
Q7 "Schulz Glassmeier space waste ... implications for cosmic dust influx measurements Ni Mn Fe": Schulz 2025, EGU24-3860, ESA 493/9258. No bias paper.
Q8 "NASA stratospheric dust collector extraterrestrial particle fraction decline anthropogenic particles increase ...": Lasue EGU24-14286, Taupin EGU25-4490, 1980s NTRS reports (method-owning curation field).
Q9 "aluminium oxide satellite reentry particles confound meteoric smoke extinction SOFIE composition retrieval": EGU26-13101 and EGU26-7078, GRL ozone papers. No MSP-retrieval contamination paper surfaced.
Q10 "Antarctic firn ice core copper aluminium lithium post-1990 increase space launch reentry deposition record": the Gayathri mining-Cu paper plus press coverage of Murphy. No ice-core reentry record.

## The eight attacks

### 1. Triviality
Objection: For most methods the answer is nearly one line. Holocene Ir/Pt ice excludes modern material by construction, and lidar Na/Fe and Mg/Fe are meteor-dominated per Murphy. Limbs (i) and (iii) are a table-join between Schulz's ratios and published precisions.
Best response: [OWN] Triviality needs the answer to be known, and I found no source giving it. Murphy 2023 says reentry Fe "cannot currently be quantified on top of the larger meteoric contribution" [OPENED-RECORD quoting the paper], so the Fe-based answer is not "zero", and the Egan et al. paper reportedly puts Ni and Mn in the exceeds-natural set. The separation misattribution rate is an empirical number, not a calculation. The only sourced ambiguity figure is Taupin's "at least 20% ... ambiguously classified" [OPENED-ABSTRACT]. That is an ambiguity rate on unlabelled particles, not a misattribution rate against ground truth.
Status: Partial. I cannot source that the answer is trivial, and I cannot source that it is not.

### 2. Disguise
Objection: This is a known question under another name. Candidate sources are the Gabrielli-type "restrict to pre-industrial material" logic, the JSC AOS/TCA contaminant classes, and Murphy/Lasue fractions.
Best response: 10 searches in new vocabularies: sediment Os/Fe-60, lidar layers, micrometeorite/Dome C, SOFIE composition retrieval, ice-core Cu/Al/Li, the curation field's own terms, and answer-side phrasing. None gave a bias estimate on an influx constraint or a date-of-failure projection.
- Murphy 2023 and Lasue 2024 publish composition fractions. Neither propagates a fraction into an influx bias (record, plus the Taupin abstract, which describes its goal as constraining injection per material type and its trend, not correcting influx).
- Murphy EGU26-8332 [OPENED-ABSTRACT] goes the OPPOSITE way: it uses the separation to constrain meteoric ablation fractions. That is evidence the separation is treated as largely achievable "in many cases", and it sits adjacent to the candidate's limb (ii). I would call that adjacency, not a duplicate, but it shows the Murphy group is closest to the answer.
- The Gabrielli generic form is excluded from my attack per the brief. I do not re-derive it.
- Two relevant items are still unread: Schulz 2025 results/discussion, and EGU26-1032, which never surfaced in Q1. Absence in what I read is not absence.
Status: Partial. This is not Unresolved, since no source found poses the estimand. It is not Resolved, because two items sit exactly where a prior formulation would sit and are unread.

### 3. Combinatorial novelty
Objection: Space-debris engineering crossed with cosmochemistry is a pastiche, and the interface is already staffed (Murphy, Plane, Schulz, Zolensky, Mitchell).
Best response: [OWN] There is a real interface problem: converting an apportioned tracer fraction into an influx error bar needs each method's transport and removal model plus the quoted precision. That is not a join of two abstracts. The staffed interface is evidenced only by 2026 abstracts, which describe the problem as emerging ("approaching the natural meteoritic influx for specific elements") rather than solved. I opened abstracts only, so I cannot rule out that a full talk covers it.
Status: Partial.

### 4. Presupposition failure
Objection: The question presupposes that reentry material biases the tracer-based influx constraints at all. The constraint elements are Na, Fe, Mg, Si, Ni, Ir, Pt and Os, where meteoric input dominates, while the reentry-dominated elements are Li, Al, Cu, Pb and similar. It also presupposes that tracer bias propagates to influx bias (presupposition 6), which is unverified.
Best response: The presupposition that reentry is "comparable to or larger" for several elements is sourced: Mitchell EGU26-7192 [OPENED-ABSTRACT] and the record's Murphy/Affentranger figures. The presupposition of bias to a specific constraint is not asserted. V2 asks for it to be computed and allows a null. Nothing I opened shows the Fe or Ni limb is safe. Murphy 2023's own caveat on Fe, and "in many cases" in EGU26-8332, argue against a clean null. I could not source the claim that the dominant tracers are unaffected, so my objection is a plausible prior, not a demonstrated failure. The canonical wording is V1 ("by how much does it bias"), which does carry the presupposition; V2 does not. Presupposition 6 stays unevidenced.
Status: Partial. A kill I cannot source is at most Partial.

### 5. Vagueness
Objection: "well enough" and "comparable" in V1 are answerable whichever way the data come out.
Best response: V2 names an estimand per method (fractional bias in inferred influx), a discriminating test (bias versus the method's own quoted precision), a declared separation rule, and a pre-space-age validation set. An admissible null is stated. V2 is falsifiable on its face [OPENED-RECORD]. The entry's canonical question is V1, which is vague; the fix is to state V2 as canonical.
Status: Resolved (for V2).

### 6. Significance inflation
Objection: The audience is asserted, not shown, and the record itself says the probable answer is a null that changes no decision. ESA's own gap list has no measurement-bias item.
Best response: Evidence of an active audience: four 2026 and 2025 abstracts opened here (Mitchell, Murphy et al., Taupin et al., Hoepfner et al.), all concerned with separating or quantifying reentry material. Nothing I opened shows any group stating a need for a bias figure on influx constraints. Whether anyone would act on the result is [OWN] and unevidenced. A dated projection of when each method loses precision is a decision-relevant output only if some method depends on post-1990 material in a reentry-sensitive element, which I could not establish.
Status: Partial.

### 7. Reason for silence
Objection: The record's two mechanisms, disciplinary boundary and incentive, are respectively withdrawn and self-defeating. The curation community made a contaminant class forty years ago, so the field had the issue in front of it.
Best response: A credible timing mechanism is sourced: the per-particle reentry detection (Murphy 2023), the per-element inventory (Schulz 2025), and the 2026 abstracts, all recent, with the CAIRT and ESA observational work still at the "potential detection" stage (EGU26-13101). The bias propagation could not have been posed with data before roughly 2023. That explains why the specific propagation is absent, not why the generic question was never asked, but the generic form is not what this candidate claims. I cannot source the claim that the silence is circular. "The answer changes no decision" would be a significance issue, which is attack 6, and not novelty.
Status: Partial.

### 8. Dissolution
Objection: The question dissolves into per-method bookkeeping plus one arithmetic note (a "work order" rather than a question).
Best response: Limb (ii), the misattribution rate of a pre-declared separation rule validated against pre-space-age material, is one empirical question with one number. I found no source that supplies it; Taupin's 20% ambiguity figure is the nearest and is not it. Limbs (i) and (iii) are largely bookkeeping once limb (ii) and the transport models exist. The question is therefore narrower than the canonical wording.
Status: Partial.

## Judgement on the record's other grounds
- Murphy 2023 and Lasue 2024 publish a spacecraft fraction of particles. They do not propagate it into a BIAS on a published influx constraint, which is what the candidate's first limb asks. On what I could read (abstracts, plus the record's account of Murphy's full text), that propagation is not published. Murphy's own group is now doing the inverse: using the separation to constrain ablation.
- The fraction limb of the candidate ("what fraction of the tracer signal is spacecraft") is published for particle composition. It is not published per snow/ice layer. I found no ice-core reentry record, and the one new Antarctic Cu record I opened attributes the post-1985 rise to mining (a confounder).
- Novelty grade, my own: Medium. The propagation, the misattribution rate and the date-of-failure projection were not found in 10 searches in 8+ vocabularies, but the nearest group is active, and two items remain unread.

## Verdict basis
No Unresolved status on any attack. Attacks 1, 2, 3, 4, 6, 7, 8 are Partial and attack 5 is Resolved. Two unread items (Schulz results/discussion, EGU26-1032) leave Disguise short of Resolved. Verdict: Provisional.
