# VERIFY-05-c — UQ-20261029-05, post-batch verification: the strongest objection's FIRST LEG (Libbrecht arXiv:1910.09067)

Checker: fresh-context checker (not adversary, not judge). Date: 2026-10-29.
Budget: 4 web searches of 4 used. Fetch attempts: 6 of 6 counting one failed curl at the egress proxy; 5 WebFetch calls, of which one returned no content (my own offset mis-estimate, counted anyway). If the judge counts neither the failed curl nor the empty return, I had two fetches left and did not use them; I stopped at the conservative count. No search or fetch was refused by a classifier. No mcp__hearthbot__ tool was called. The egress proxy was not inspected. I recommend no verdict for the entry.

## 1. What I was asked

Test the first leg of the entry's Strongest remaining objection: that the field's leading kinetics account (Libbrecht 2019, "A Quantitative Physical Model of the Snow Crystal Morphology Diagram", arXiv:1910.09067) pins its own transition structure to premelting, so that a measured D2O habit-transition shift matching a computed premelting threshold would adjudicate nothing. The entry quotes the paper as stating "the position of the dip is determined by the onset of surface premelting on the relevant facet surface" and "it is not yet possible to calculate step energies at any temperature on any ice surface", and records the paper as opened by adversary 1 (A1) with a dedicated isotope sweep run clean. Items: (1) both quotations verbatim with section, grammar on both sides of the cut, scope of the opening words, and whether the first ASSERTS, hedges, or records a modelling choice; (2) physical-world statement or model-construction statement; (3) any isotope dependence predicted, with a dedicated sweep; (4) any statement of what would distinguish premelting control from step-kinetics control; (5) remaining searches on whether any published step-kinetics or attachment-kinetics model of ice habit makes an isotope-independent prediction, reported as an enumerated absence if none.

Brief checked against the record: the brief is right that the entry quotes those two strings (entry: Prior 2 and the Strongest remaining objection), right that A1 opened the paper ("READ LEVEL: full text via summariser, targeted") and ran the sweep ("D2O / heavy water / deuterium / deuter / isotope / isotopic: no occurrence"), and right that the entry's own words say "the verdict stands on the first [leg]". One nuance the brief flattens: the entry's Scores paragraph gives three reasons for Well-posedness 2/3, and the third, "its second arm is attributed to no model", is leg TWO, so the cap does not rest on leg one alone. Reported under section 10.

## 2. Every route tried, in order, with the exact result

| # | Tool | Target | Result |
|---|---|---|---|
| c1 | curl (Bash) | https://arxiv.org/pdf/1910.09067 | `curl: (56) CONNECT tunnel failed, response 403`; HTTP 000, 0 bytes. Tool-scoped per the route facts; moved to WebFetch. Counted as fetch attempt 1. |
| F2 | WebFetch | https://arxiv.org/pdf/1910.09067 | SUCCESS. Summariser reported the text complete through the reference list, about 6,000-7,000 words over 17 page-image placeholders; printed page numbers and date not visible. Returned both target sentences with neighbours as consecutive fragments, section headings, first isotope sweep, front matter. |
| S1 | WebSearch (extended) | `ice crystal habit "step nucleation" OR "attachment kinetics" OR "step kinetics" model D2O OR deuterium OR "heavy water" OR isotope prediction transition temperature` | 9 results, listed in section 8. No title names an isotope-dependent or isotope-independent kinetics prediction for ice habit. |
| S2 | WebSearch (extended) | `"snow crystal" OR "ice crystal" growth from vapor isotope effect D2O habit plate column model prediction` | 9 results, listed in section 8. Returned the Caltech PDF of Libbrecht 2005 (Rep. Prog. Phys.), opened at F4. |
| F3 | WebFetch | https://arxiv.org/pdf/1910.09067 (second pass, same URL, cached) | SUCCESS. Abstract, the "placement of the SDAK dips" sentence with neighbours, the sentences defining the dip, the "enough disorder" sentence with neighbours, a keyword sweep (distinguish / discriminat / test / falsif / verif / confirm / would be / future measurement / additional measurement), a second isotope sweep with alternative spellings, final paragraph. |
| F4 | WebFetch | https://www.its.caltech.edu/~atomic/publist/rpp5_4_R03.pdf | SUCCESS, TRUNCATED. Front matter confirmed on the page: Libbrecht, "The physics of snow crystals", Rep. Prog. Phys. 68 (2005) 855-895, doi:10.1088/0034-4885/68/4/R03. Summariser saw roughly the first 30 of 41 printed pages; cut mid-sentence in section 4.2; sections 4.3, 4.4, 5 and the references not seen. Isotope sweep over the seen portion: ONE sentence, quoted in section 9. |
| S3 | WebSearch (extended) | `Nelson Knight "layer nucleation" snow crystal habit changes basal prism step free energy D2O OR deuterium OR "heavy water" OR isotope` | 9 results, listed in section 8. No title names an isotope term. |
| F5 | WebFetch | rpp5_4_R03.pdf, offset 150000 | `Nothing left to read from offset 150000: this page's text is 117166 characters long.` My mis-estimate; nothing retrieved; counted. |
| F6 | WebFetch | rpp5_4_R03.pdf, offset 80000 | SUCCESS, PARTIAL. Portion begins mid-word in section 4 ("der conditions where σsurf  σcrit...") and ends mid-sentence in Section 5 ("...as a function of temperature and supers"). Reference list NOT REACHED, so reference [22] NOT REACHED. Isotope sweep over this portion: none. Sections 4.3 and 4.4: no sentence on deciding the habit mechanism. |
| S4 | WebSearch (extended) | `"heavy water" OR D2O ice crystals grown from vapour habit changes temperature shifted "melting point" Hallett Mason 1958 diffusion chamber Proceedings Royal Society` | 9 results, listed in section 8. Did not return the primary D2O habit measurement; returned the same review on ResearchGate and, notably, an OSTI full-text route for the Drori 2017 PNAS paper (PMC5676873) that VERIFY-05-a did not reach. |

Not reached for want of budget: the RPP reference list (one more WebFetch of the same URL at offset about 105000 would reach it); the arXiv version of the review, cond-mat/0411662, as an alternative route to the same reference list; the primary document the review cites as [22]; every unopened title in section 8. Not attempted on principle: PMC and Europe PMC (hard-blocked), ResearchGate pages (not a publisher or repository of record).

## 3. Source register, read levels, regimes

- Libbrecht, arXiv:1910.09067, "A Quantitative Physical Model of the Snow Crystal Morphology Diagram". Front-matter author line as served: "Kenneth G. Libbrecht, Department of Physics California Institute of Technology Pasadena, California 91125". READ LEVEL: FULL TEXT via WebFetch summariser, two passes (F2, F3); all sweeps below are the summariser's reports on the whole text, not a local grep, and I say so wherever I lean on them. REGIME: H2O ice grown from water vapour in laboratory chambers; semi-empirical model of the attachment coefficient as a function of temperature, supersaturation and facet width ("mesostructure"); the modelled quantity is the nucleation parameter σ0(T) per facet; premelting enters as per-facet assumptions; no isotope, mixture or pressure-dependence term. The candidate (D2O vs H2O transition shifts) is OUTSIDE this regime: the model has no isotopic variable.
- Libbrecht, "The physics of snow crystals", Rep. Prog. Phys. 68 (2005) 855-895, Caltech-hosted PDF. READ LEVEL: SECTION READ via summariser: roughly pages 1-30 (F4) plus a portion from section 4 to mid-section 5 (F6); the last part of section 5 and the reference list NOT READ. Author line as printed: "Kenneth G Libbrecht, Norman Bridge Laboratory of Physics, California Institute of Technology 264-33, Pasadena, CA 91125, USA". It is a REVIEW. REGIME of its one isotope sentence: vapour-grown D2O crystal morphology versus temperature, reported second-hand with a single aggregate shift of "approximately four degrees", no uncertainty, no supersaturation, no per-transition breakdown, cited to [22], which I did not reach. The candidate's estimand (three per-transition shifts to ±0.5 K in one chamber at matched supersaturation) is INSIDE the same object but at finer resolution than the review states.
- Everything else in section 8: title level only, NOT OPENED.

## 4. Item (1): the two quotations, verbatim, located, grammar on both sides of the cut

### Quotation 1

Full sentence, RECONSTRUCTED from 3 consecutive fragments returned in one call (F2); junction check: fragment 1 ends "on the relevant", fragment 2 begins "facet surface (the prism facet"; word count 35:

"The position of the dip is determined by the onset of surface premelting on the relevant facet surface (the prism facet in Figure 7), which is somewhat constrained by other measurements, but not tightly so."

Location, as served: Section 3, "STRUCTURE DEPENDENT ATTACHMENT KINETICS", unnumbered subsection "SURFACE DIFFUSION AND SURFACE PREMELTING". Printed page number not visible.

Sentence before (2 fragments): "The dip would be deepest on narrow facets closely flanked by two corners, as shown in Figures 6 and 7."
Sentence after (1 fragment): "Neither the width nor depth of the dip structure in Figure 8 is well constrained by measurements."

Grammar on both sides of the entry's cut. Left side: the entry's string begins at the sentence's first word, with "The" lowered to "the"; a case change only. Right side: the entry's string stops after "facet surface" (17 of 35 words) and drops "(the prism facet in Figure 7), which is somewhat constrained by other measurements, but not tightly so." The dropped relative clause is a HEDGE on how well the quantity is pinned down empirically; its antecedent is either the premelting onset on the facet or the dip position itself (the next sentence, about width and depth, favours the latter reading; either way the hedge concerns empirical constraint, not the stated relation). The entry's span is 102 characters, which sits under the summariser's ~125-character cap; A1 reported the same truncated string "as served", so the cut most probably originated in the cap and was carried into the entry without a reconstruction label. Verbatim for the span quoted; TRUNCATED before its hedge.

Scope of the opening words: "The position of the dip" refers to the "SDAK dip", a feature of this model's σ0(T) curve for narrow facets (Figure 8), not to a measured habit transition. As served (F3): "The proposed 'SDAK dip' in Figure 8 applies only to narrow facet surfaces, and over a fairly narrow range of temperatures just below the onset of surface premelting." and "Over a limited temperature range, over-corner surface diffusion lowers σ0(T) compared to that on broad facets."

Does the clause ASSERT? Within the model, yes: "is determined by" is an unhedged present-tense assertion of a relation between two model elements. It is not a hedge and not a denial. But the surrounding text shows it is a statement of how the model is built, see section 5.

### Quotation 2

Full sentence, RECONSTRUCTED from 3 consecutive fragments (F2); junction check: fragment 2 ends "calculate step energies", fragment 3 begins "at any temperature"; word count 38:

"We are still far from a full physical understanding of surface premelting and ice crystal growth as a function of temperature, and it is not yet possible to calculate step energies at any temperature on any ice surface."

Location, as served: Section 2, under the heading "ICE GROWTH IN NEAR VACUUM". Page number not visible.

Sentence before (4 fragments; LaTeX rendered by the summariser as $\sigma_{0,basal}$ etc., given here in plain form): "In this picture, the nonzero plateau seen in σ0,basal reflects basal faceting in ice/water solidification, while the fact that σ0,prism → 0 as T → 0 C reflects the lack of prism faceting when liquid water freezes."
Sentence after (3 fragments): "But the overall trends in the step energy behavior, as indicated by the σ0(T) measurements in Figure 4, can at least be qualitatively understood from this basic physical picture."

Grammar on both sides of the cut: the entry quotes the second independent clause of a compound sentence, cutting at the coordinating "and"; the cut is clean on the left (clause boundary) and the string runs to the full stop on the right. The omitted first clause broadens the statement ("far from a full physical understanding") rather than hedging it; the following "But..." sentence qualifies it (trends qualitatively understood). Opening words "We are still far from" scope a statement about the state of theory in the field, and the clause ASSERTS a present impossibility. The entry's use ("step energies cannot yet be calculated on any ice surface") is faithful.

### Independent confirmation of A1's clause-1 finding (not asked, found en route)
As served (F3), the sentence before the "placement" sentence: "We see thin plates near -2 C, columns near -5 C (with narrow basal facets, which is the case for observations in air), thin plates near -15 C (with narrow prism facets, which is the case in air), and columns again below -30 C." This is the four-member enumeration A1 reported.

## 5. Item (2): physical-world statement or model-construction statement?

Model construction. Four located sentences decide it:

(a) Abstract, as served (F3; the summariser flagged OCR garble "An mesostructure" and "vears", reproduced as served): "By incorporating several reasonable assumptions regarding the surface premelting behavior on basal and prism facets, this model can explain the overarching features of the snow crystal morphology diagram, which has been an enduring scientific puzzle for nearly 75 vears." Premelting behaviour enters as ASSUMPTIONS.

(b) Same subsection as Quotation 1, as served, reconstructed from 3 fragments: "Of course, the placement of the SDAK dips was chosen to achieve this match with the morphology diagram, but the model makes many additional predictions that can be tested in future experimental investigations." The dips are PLACED to match the H2O diagram.

(c) Same subsection, the sentence following the "enough disorder" sentence, as served, 2 fragments: "Unfortunately, our understanding of surface premelting is especially rudimentary in this 'onset' regime, so there is no way to calculate what is going on with any meaningful accuracy." The onset the dip is tied to is not computed.

(d) The sentence after Quotation 1: "Neither the width nor depth of the dip structure in Figure 8 is well constrained by measurements."

Reading (mine, marked as my own reasoning): Quotation 1 says which model input fixes the model's dip position: the assumed per-facet premelting onset temperature. It does not report an observation that the habit transitions coincide with premelting onsets, and it does not identify "onset of surface premelting" with any thermodynamic quantity such as the fixed-Δp threshold V2 computes. So the inference the entry builds on it ("the leading kinetics account pins its transition structure to premelting, so a premelting-matching shift adjudicates nothing") is a fair reading of the MODEL'S STRUCTURE: if the assumed onsets moved, the dips would move. But it is an inference about an input the paper says it cannot calculate, not a prediction the paper makes, and whether Libbrecht's per-facet "onset" and MacDowell's Δp threshold are the same temperature is stated nowhere I read. A measured isotope shift matching a computed premelting threshold would therefore be consistent with Libbrecht's model only under an added identification the paper does not supply. What would ground this: a source that computes premelting onset per facet and compares it to Libbrecht's assumed dip positions; I did not search for one (budget).

## 6. Item (3): does the paper predict any isotope dependence?

Two dedicated sweeps, both the summariser's over the full served text:
- Sweep 1 (F2), case-insensitive: "D2O" none; "heavy water" none; "deuter" none; "isotop" none.
- Sweep 2 (F3), alternative spellings: "heavy" 0; "D 2 O" and "D₂O" 0; "nuclear" 0; "quantum" 0; "substitut" 0; "hydrogen" 0; "mass" 2, both in Section 2 "Basic Theory" formulae: "in which m_mol is the mass of a water molecule, c_ice = ρ_ice/m_mol is the number..." and "ρ_ice is the mass density of ice".

NOT FOUND: no isotope dependence is predicted in either direction. The only isotope-sensitive quantity printed is the molecular mass in the kinetic prefactor. My own arithmetic, not a source finding: a Hertz-Knudsen velocity scales as m^(-1/2), and sqrt(18.015/20.028) = 0.948 using standard molar masses from background knowledge, a ~5% change in the prefactor, which is not a transition-temperature prediction. A1's clean sweep is confirmed.

## 7. Item (4): does the paper say what WOULD distinguish premelting control from step-kinetics control?

NOT FOUND, after the F3 keyword sweep (distinguish 1 hit, irrelevant: "the admolecules on facet surfaces are distinguishable from ice lattice molecules, in contrast to the rough-surface case", Section 2; discriminat 0; test 1; falsif 0; verif 0; confirm 4; "would be" 4; "future measurement" 0; "additional measurement" 0) and the F2/F3 reads of the relevant subsection and the Discussion. The closest sentences, as served:
- "Of course, the placement of the SDAK dips was chosen to achieve this match with the morphology diagram, but the model makes many additional predictions that can be tested in future experimental investigations." (Section 3)
- Section 4 "Discussion", reconstructed from 3 fragments: "The model thus suggests a host of targeted ice-growth experiments than can be used to confirm (or reject) the model's many detailed predictions, and to further refine the shapes of the SDAK dips and other model features." ("than" as served.)
- Section 3, start possibly cut by the summariser: "...narrow measurements are needed to confirm these results, but the model proposed here naturally explains width-dependent attachment kinetics."
None names an observable that would separate premelting control from step-kinetics control, and none mentions isotopes. The paper does not pose that dichotomy: in its framework premelting acts INSIDE the attachment kinetics by changing step energies ("As the QLL develops, the ice/vapor step energy transforms into an ice/QLL step energy", A1's quotation; I did not re-request it). The proposed tests are facet-width-dependent growth measurements.

## 8. Item (5): enumerated search for a step-kinetics or attachment-kinetics habit model that makes an isotope-independent prediction

Titles returned by S1-S4, deduplicated, with whether I opened each:
- arXiv:1910.09067 Libbrecht 2019 (S1, S3) — OPENED, FULL TEXT via summariser. No isotope term; no isotope prediction either way.
- Libbrecht 2005, Rep. Prog. Phys. 68, 855 (S2 Caltech PDF; S4 ResearchGate copy) — OPENED, SECTION READ. Contains ONE isotope sentence (section 9). It is a review reporting a measurement, not a model prediction.
- arXiv:1302.1231 Libbrecht, "Toward a Comprehensive Model of Snow Crystal Growth Dynamics: 2..." (S1 twice as PDF and ar5iv, S3 twice) — NOT OPENED; four returns, one document.
- arXiv:1211.5555 Libbrecht, "...1. Overarching Features and Physical Origins" (S1, S2 via ResearchGate, S3) — NOT OPENED; three returns, one document.
- arXiv:2011.02353 (S1) — identity not confirmed on any page; NOT OPENED.
- core.ac.uk/works/78122590 (S1) and core.ac.uk/works/4227345 (S3) — titles not shown; NOT OPENED.
- Nelson, "Growth mechanisms to explain the primary and secondary habits of snow crystals" (S2, S3, ResearchGate only) — NOT OPENED. This is a layer-nucleation (step-kinetics) habit model and is the single unopened document most likely to carry what leg two needs. My recollection, not from any page I fetched: Philosophical Magazine A 81 (2001); I did not resolve its DOI.
- Wölk & Strey, "Homogeneous Nucleation of H2O and D2O in Comparison: The Isotope Effect", pubs.acs.org/doi/10.1021/jp0115805 (S1) — NOT OPENED; adjacent object (vapour-to-liquid droplet nucleation, not ice habit).
- "Brief Overview of Ice Nucleation", PMC7828621 (S1) — PMC, never a route; nucleation, not habit; NOT OPENED.
- "Two-step crystal nucleation kinetics: Solution of the master equation" (S1, ResearchGate) — not ice habit; NOT OPENED.
- NASA NTRS 19800015442, "Ice Crystal Growth in a Dynamic Thermal Diffusion Chamber" (S2) — NOT OPENED.
- Gravner & Griffeath 2009, Phys. Rev. E 79, mesoscopic model (S2) — NOT OPENED.
- Llombart, Noya & MacDowell 2020, Sci. Adv. (S2) — the entry's Prior 1; not reopened.
- Stull, LibreTexts 7.5 (S2) — textbook; NOT OPENED. science.gov topic page (S2) — aggregator, no prior.
- Cambridge Annals of Glaciology, "formation mechanisms of snow crystals at low temperature" (S3) — NOT OPENED (also unopened by A2).
- UCL discovery eprint 10204971 RIS export (S3) — title not shown; NOT OPENED.
- PMC5676873 (S3, S4) — Drori et al. 2017 PNAS per VERIFY-05-a; never a route; NOT OPENED. S4 also returned https://www.osti.gov/pages/servlets/purl/1540260, titled "CHEMISTRY Dynamics and unsteady morphologies at ice interfaces", which looks like an OSTI public-access full text of that paper; NOT OPENED; a route for the judge, since VERIFY-05-a found only the OSTI biblio page.
- S4 also: Cambridge J. Glaciol. "The Growth and Deformation of Ice Crystals"; Wikipedia "Heavy water"; Xu et al. PNAS 2016 "Growth rate of crystalline ice and the diffusivity of supercooled water from 126 to 262 K" (PNAS and PNNL copies; adjacent object); a UIUC Q&A page; ScienceDirect "Deformation of polycrystalline D2O ice..." — none a habit model; NOT OPENED.

Result: among the TWO documents I opened, no step-kinetics or attachment-kinetics model of ice habit makes an isotope-independent prediction; neither makes any isotope prediction at all. The absence is enumerated over two documents only, and the list above names what I did not open. The universal "nothing in print predicts a near-zero isotope shift for step kinetics" therefore remains unenumerated beyond these two. Separately, the one isotope sentence I did find (section 9) reports a NON-ZERO measured shift of about four degrees, which, if the primary source bears it out, is evidence against the near-zero outcome the entry's kinetics arm posits, regardless of mechanism.

## 9. Finding outside my check, reported because it bears on the entry's foundations

Libbrecht 2005, Rep. Prog. Phys. 68, 855-895, SECTION READ, as served (F4), RECONSTRUCTED from 3 consecutive fragments; section not located to a heading by the summariser (it lies in the first ~30 pages; my inference from its content, labelled as such, is the morphology-diagram discussion in section 2):

"Growth of heavy water (D2O) crystals from the vapour phase produces similar morphologies as a function of temperature, except shifted by approximately four degrees, in keeping with the isotopic shift in the freezing point between D2O and H2O [22]."

What this is: a REVIEW sentence attributing to reference [22] a measurement of vapour-grown D2O crystal morphology versus temperature with an aggregate shift of about four degrees, read by the review's author as the freezing-point offset (3.82 K per the entry's own figure). Reference [22] NOT REACHED (F6 ended before the reference list). My recollection, which is not a finding and which the judge should not rely on: Hallett and Mason, Proc. R. Soc. A 247, 440 (1958) reported heavy-water crystals; one WebFetch of the Caltech PDF at offset about 105000, or of cond-mat/0411662, would settle it.

Bearing, stated without recommending a verdict: the entry says "no habit diagram for a second isotopologue surfaced" and that "none of the seven opened documents names the candidate's number"; alternative formulation 1 ("Does heavy-water ice have the same Nakaya habit diagram as ordinary ice, shifted in temperature or not?") is answered at review level by this sentence. The record's own query 11 RETURNED cond-mat/0411662, the arXiv version of this review, and the record lists it neither as opened nor in its returned-not-opened list (record lines 77-82), while naming as its strongest fear (record line 158) exactly this kind of document. The review's statement does NOT print the candidate's V2 estimand at its stated precision (no per-transition values, no uncertainty, no supersaturation control named), so what remains un-asked, if anything, is the per-transition resolution and the Δp-threshold comparison; that is for the judge.

## 10. Brief defects and entry inconsistencies found

- Brief: "the one the verdict's cap stands on" is the entry's own phrasing, but the entry's Scores paragraph grounds Well-posedness 2/3 partly on "its second arm is attributed to no model" (leg two). The cap rests on both legs, not the first alone.
- Entry/A1: Quotation 1 is presented as a complete quotation but ends where the summariser's ~125-character cap would fall, dropping the hedge "(the prism facet in Figure 7), which is somewhat constrained by other measurements, but not tightly so." No reconstruction label. Case of "The" altered.
- Entry: "pins its own transition structure to premelting" paraphrases a model-construction statement as if it were a physical finding; the paper's abstract calls the premelting behaviour "assumptions" and the dips were "chosen to achieve this match with the morphology diagram".
- Record: cond-mat/0411662 returned by query 11 and omitted from the record's honest list of returned-not-opened items.
- VERIFY-05-a (not my check): an OSTI full-text route for PMC5676873 surfaced in my S4 and may be open; not opened by me.

## 11. My own errors

- Budget: 6 fetch attempts counting the failed curl; one WebFetch (offset 150000) returned nothing through my own mis-estimate of the page length and is counted. I did not reach the RPP reference list or reference [22]; I did not open any of the unopened titles in section 8; I did not resolve Nelson 2001 to a DOI.
- All sweeps are the WebFetch summariser's reports, not a local grep of the PDF text; the curl that would have given me the raw text failed at the proxy.
- I did not re-request A1's quotation "As the QLL develops, the ice/vapor step energy transforms into an ice/QLL step energy"; it is A1's, not re-verified here.
- Section location of the review's D2O sentence is my inference, not served.

## 12. Numbers, with units and denominators

- Quotation 1: 35 words, 3 fragments; the entry quotes 17 of 35 words (102 characters). Quotation 2: 38 words, 3 fragments; the entry quotes 16 words, the second independent clause.
- 1910.09067 served length: about 6,000-7,000 words over 17 page placeholders (summariser's estimate). Isotope sweeps: 0 occurrences of 11 strings; "mass" 2 occurrences, both molecular/density mass in Section 2 formulae.
- Transition enumeration in 1910.09067 as served: thin plates near -2 C, columns near -5 C, thin plates near -15 C, columns below -30 C (four members; degrees Celsius; H2O in air).
- RPP review: extracted text 117,166 characters (tool's figure); first pass about 30 of 41 printed pages; second useful pass from character 80,000 to mid-Section 5.
- Review's D2O shift: "approximately four degrees" (unit as printed: degrees; axis: temperature of the morphology diagram, D2O relative to H2O; no uncertainty; no denominator finer than the whole diagram), against a D2O-H2O freezing-point difference the entry gives as 3.82 K.
- sqrt(18.015/20.028) = 0.948 (my arithmetic; molar masses in g/mol from background knowledge).
