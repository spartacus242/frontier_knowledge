# VERIFY - DeSimone 2023 and Epah 2022: do either reach the candidate's estimands, and what is the 2005 Transfusion item?

Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch (one of the two searches was rejected by the proxy and ran no query). Date 2026-10-23.

## CLAIM

The entry's UQ-20261023-07 line 53 states what would survive if the Atilla leg fell. Two sub-claims are under test:

1. **DeSimone 2023** "shares L2's shape (single-unit episodes, subsequent-transfusion endpoint) but differs in population (VLBW infants, where one unit is a multiple of total blood volume rather than a ~10% increment, a different question), in exposure (donor-level metadata, no grams in the bag) and in that it prints no variance figure" (entry line 27, restated at lines 23 and 42).
2. **Epah 2022** "PREDICTS the exposure and ANNOUNCES a dosing application without measuring any recipient outcome, and an announcement is not an evaluation" (entry line 53, restated at line 24).

Plus: the 2005 Transfusion item, of which the entry says "the 2005 item is title-level to everyone and its author list was never served" (line 53).

**VERDICT IN ONE LINE: both legs HOLD on the parts that bear weight — neither document measures a recipient outcome against a measured per-unit haemoglobin mass, so the rejection gains no second leg — but the DeSimone characterisation needs three corrections, one of which (the physiological gloss) is false of the paper, the Epah leg is confirmed only at an ABSTRACT-AS-PARAPHRASED read level and its load-bearing quotation could not be checked verbatim, the 2005 author list IS now served, and the entry's priors 2 and 3 are ONE GROUP, not two.**

## READ LEVEL

**DeSimone 2023 — FULL TEXT.** Served via the eScholarship content PDF (`https://escholarship.org/content/qt0c40s2bf/qt0c40s2bf.pdf`): front matter, Methods (episode definition, models, software), Table 1 (descriptive donor/component/recipient characteristics), Table 2 (adjusted models), Results and the Limitations paragraph. This is the first full-text read of this document on this entry: the entry records it at "ABSTRACT + FRONT MATTER (eScholarship 0c40s2bf)" for adversary 2 and unopened by the other two readers.

**Epah 2022 — ABSTRACT ONLY, and the abstract was served to me as a PARAPHRASE, not verbatim.** Front matter is FULL and came from two independent front-matter sources (Crossref record; Tübingen repository record). The abstract came only through the DOAJ record, and the summariser declined verbatim reproduction in these words: "I can't reproduce the full abstract verbatim, since that would mean quoting the whole text. Here is the front matter, followed by a summary." **So I hold no verbatim sentence of Epah 2022 at all.** Every Epah wording below that looks like a quotation is the summariser's paraphrase and is labelled as such. Full text COULD NOT READ at two routes, and the third route I would have tried next was foreclosed by my spent fetch budget, not by the paper.

**Davenport 2005 (the 2005 Transfusion item) — FRONT MATTER ONLY, from Crossref.** Full front matter resolved including the author list. The two-page text itself: **NOT ATTEMPTED — my fetch budget was spent.** That is a budget exhaustion recorded as such, not a route failure and not a property of the document. Do not log this item as unreadable.

**Atilla 2017 — NOT OPENED BY ME.** Outside this check's named sources; I took its byline only from the entry for the group count at (f), and I say so there.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) FRONT MATTER, from the front matter and not from any short form

**DeSimone 2023** — Crossref and the article PDF agree exactly:
> DeSimone RA, Plimier C, Goel R, Hendrickson JE, Josephson CD, Patel RM, Sola-Visner M, Roubinian NH. "Associations of donor, component, and recipient factors on hemoglobin increments following red blood cell transfusion in very low birth weight infants." *Transfusion* 2023;**63(8):1424–1429**. DOI 10.1111/trf.17468. Publisher Wiley. Online 2023-06-30, print 2023-08.

Printed order, with given names as the front matter prints them: Robert A. DeSimone; Colleen Plimier; Ruchika Goel; Jeanne E. Hendrickson; Cassandra D. Josephson; Ravi M. Patel; Martha Sola-Visner; Nareg H. Roubinian. **The byline is EXACTLY these eight authors. There is no ninth.**

**Epah 2022** — front matter served twice, independently:
> Epah J, Gülec I, Winter S, Dörr J, Geisen C, Haecker E [Tübingen record prints **Häcker**], Link D, Schwab M, Seifried E, Schäfer R. "From Unit to Dose: A Machine Learning Approach for Precise Prediction of Hemoglobin and Iron Content in Individual Packed Red Blood Cell Units." *Advanced Science* 2022;**9(36)**, article **e2204077**. DOI 10.1002/advs.202204077. Publisher Wiley (Weinheim). ISSN 2198-3844. Online 2022-11-04, print 2022-12.

Printed order with given names: Jeremy Epah; Ilay Gülec; Stefan Winter; Johanna Dörr; Christof Geisen; Eva Haecker/Häcker; Dietmar Link; Matthias Schwab; Erhard Seifried; Richard Schäfer. Crossref prints no page range ("n/a – n/a" in the DOAJ record); the article number **e2204077** comes from the Tübingen record and the entry carries no article number at all.

**The 2005 Transfusion item** — resolved, and the author list IS served:
> **Davenport R** [Crossref given name: **Robertson Davenport**]. "Blood components should be labeled for content." *Transfusion* 2005;**45(1):3–4**. DOI **10.1111/j.1537-2995.2005.04323.x**. PMID 15647010 (per the entry's adversary-2 file; I did not verify the PMID). Publisher Wiley. Online 2004-12-22, print 2005-01. Crossref `type`: journal-article. **Crossref lists ONE author, sequence "first", with no additional authors.**

A two-page item at pages 3–4 of an issue is consistent with an editorial or commentary, but **that is MY OWN INFERENCE from the pagination, not a source finding** — Crossref's type field says only "journal-article" and I did not open the text.

### (c) DESIMONE 2023, at full text

**Population.** Very low birth weight infants (≤1500 g) who received at least one RBC transfusion, drawn from 7 REDS-III hospitals, 2013–2016. **254 infants, 567 single-unit transfusion episodes.**

**Unit of analysis.** The transfusion episode. Methods define an episode as a single RBC transfusion with informative pre- and post-transfusion haemoglobin values. (The Abstract instead says "567 units"; the analytic unit is the episode.)

**Exposure variables, verbatim labels as served.**
- *Donor:* "Sex (% male)", "Age in years", "(+) Rh status (%)", "ABO status (%)", "Donor smoking (%)", "Hemoglobin level in g/dL". Table 2 adds "Female donor", "Donor age", "Donor Rh positive status", "Donor hemoglobin".
- *Component:* "Apheresis-derived (%)", "Irradiated (%)", "Days from irradiation to transfusion", "Pre-storage leukoreduction (%)", "RBC storage duration in days", "Storage solution (%)", **"Issued aliquot volume in mL/kg"**. Table 2 adds "Apheresis blood collection", "Leukoreduction", "RBC additive solution", "Irradiation", "Storage duration in days", **"Aliquot volume in ml/kg"**.
- *Recipient:* "Sex (% male)", "Gestational age (in weeks)", "Birth weight in grams". Table 2 adds "Male recipient", "Recipient weight in kg", "Recipient Rh positive status", "Pre-transfusion hemoglobin level", "Concomitant plasma transfusion", "Concomitant platelet transfusion".

**Endpoints.** Primary: post-transfusion haemoglobin increment in g/dL, multivariable linear regression. Secondary: **"additional RBC transfusion within 48 hours of the index event"**, multivariable logistic regression. Two-sided p<0.05; Stata 14.1.

**Estimand.** Adjusted mean increment per category level or per unit increase in the covariate, with 95% CIs (linear model); adjusted odds ratio for the 48-hour additional transfusion (logistic model). Associational, covariate-adjusted — no instrument, no randomisation, no decomposition.

**Any variance share?** **NONE, and I name the absence precisely: the paper prints no R², no coefficient of determination, no proportion of variance explained, no ICC and no variance component anywhere.** What it prints instead is coefficients, 95% CIs, p-values and descriptive SDs. Sweep discipline: the targeted sweep I ran was aimed at exactly these six terms, and it returned nothing for any of them. I did **not** get to run a second, independently worded sweep for the same terms, because my fetch budget was spent — so this is a one-sweep negative on a full text, which is stronger than a one-sweep negative on an abstract but still a one-sweep negative.

**Any measured per-unit haemoglobin mass?** **NONE in grams.** Every haemoglobin figure in the paper is a CONCENTRATION in g/dL, not a mass in g. The only donor haemoglobin value printed is a fingerstick concentration: **"donor fingerstick hemoglobin level was 14.4 g/dL (SD: 1.1)"** — units g/dL, denominator the 567-episode donor set, location the descriptive results / Table 1.

**The limitation sentence, as served.** The paper has **no** sentence saying that unit haemoglobin content was not measured. The nearest limitation is about volume: **"Only RBC aliquot volumes issued by the transfusion service were available, and not the actual volume administered."** Opening words "Only RBC aliquot volumes issued by the transfusion service..." scope the clause to *what data the authors had*, and the clause **RECORDS A MOVE AWAY FROM** the delivered quantity: it concedes that even the volume is the issued figure and not the administered one. It asserts nothing about haemoglobin mass in either direction.

### (d) EPAH 2022 — DEFINES and PREDICTS the quantity, ANNOUNCES the application, MEASURES no recipient outcome

**The honest answer first: I cannot quote the settling sentence, because no verbatim sentence of this paper was served to me at any route.** The entry's line 24 and line 42 rely on the bare string "enables reliable pRBC dosing per pharmaceutically active agent". **I could not confirm that string, its modality, or its opening words.** What I can report is the abstract's content as the summariser paraphrased it, and I flag every word of it as paraphrase:

> [PARAPHRASE, NOT VERBATIM] "The study addresses iron overload in chronically transfused patients. Hemoglobin and iron content vary between packed red blood cell units, and they cannot currently be measured for individual clinical units, so transfusion decisions rely on rules of thumb. The authors trained eight machine learning models on 6,058 units using 13 routinely collected features... In an independent set of 2,637 units, the model reached an adjusted R² above 0.9, with mean absolute errors of about 1.43 g hemoglobin and 4.96 mg iron or less. **The authors suggest this could support dosing per active agent and monitoring iron uptake in patients and iron loss in donors.** The model is available in a free, open-source web application."

**What this settles and what it does not.**

- **MEASURES no recipient outcome: TRUE OVER WHAT I OPENED, UNENUMERATED OVER THE FULL TEXT.** The abstract as served names only unit-level quantities and unit-level denominators — 6,058 training units, 2,637 independent units (8,695 in total; **MY OWN ARITHMETIC**, matching the entry's "8,695 units"). No recipient cohort, no episode count, no clinical endpoint, no increment, no dose-response appears anywhere in the abstract. But a universal negative over a full text cannot be established from an abstract, so the entry's "No recipient, no episode, no clinical outcome **anywhere in it**" (line 24) is, on my read, TRUE OF THE ABSTRACT and UNENUMERATED OF THE PAPER. The entry asserts the universal; it is entitled to the abstract-scoped version only.
- **The quantity's grade: DEFINES and PREDICTS, with a stated error; ANNOUNCES the application.** The predictand is per-unit haemoglobin content; the printed performance figures are adjusted R² > 0.9 and MAE ≈ 1.43 g Hb / ≤ 4.96 mg iron, on a denominator of 2,637 independent units. That is a measurement **of the predictor's accuracy**, not of any recipient response. The dosing clause, in the only rendering I hold, is an **announcement of an application, hedged** ("suggest this could support"), and it names patients only as the subject of a proposed future monitoring, not as an observed cohort.
- **A MODALITY FLAG THE ENTRY SHOULD CARRY.** My rendering is hedged ("suggest this could support dosing"); the entry's quotation is bare ("enables reliable pRBC dosing"). I cannot tell which is the paper's wording — a summariser paraphrase is not evidence that the paper hedged. **But the ledger's own rule prefers the hedged, cited formulation, and the batch-before rule names "a hedge deleted with the grammar clean on both sides of the cut" as a recurring failure here.** This is a CHECK NOT COMPLETED, not a defect found. What would settle it: a verbatim abstract or Discussion sentence from the Wiley article HTML (`advanced.onlinelibrary.wiley.com/doi/10.1002/advs.202204077`) or from PMC9798979 — both are the right KIND of document for this, being the paper itself rather than a record about it.
- **A NUMBER THE ENTRY CALLS ESTABLISHED THAT MY READ DID NOT SERVE.** The entry's presupposition (2) is marked ESTABLISHED on "Epah 2022 abstract, 38.5-79.9 g across 6,058 units". **That range was NOT in the abstract as served to me.** I do not contradict it — I record that at my read level it is unconfirmed, and the figure that bears L1's weight (the between-unit spread in grams) therefore rests on one reader's rendering of one record.

### (e) The 2005 item

Resolved to DOI 10.1111/j.1537-2995.2005.04323.x with full front matter above. **Single author: Robertson Davenport.** Text not read — budget spent, no route attempted and therefore no route failed.

### (f) GROUPS, NOT CITATIONS

Checking the four bylines I hold against each other:

- **DeSimone 2023** (DeSimone, **Plimier**, Goel, Hendrickson, Josephson, Patel, Sola-Visner, **Roubinian**) and **Roubinian 2019** — the entry's prior 2, whose byline the entry carries as "Roubinian NH, **Plimier C**, Woo JP, Lee C, Bruhn R, Liu VX, Escobar GJ, Kleinman SH, Triulzi DJ, Murphy EL, Busch MP" — **SHARE TWO AUTHORS: Nareg H. Roubinian and Colleen Plimier.** Both papers run on REDS-III linked vein-to-vein data. **These are ONE GROUP, and the entry's priors 2 and 3 are that group citing itself in two populations (adults, then VLBW infants), not two independent supports.** Roubinian is the eighth author on DeSimone and the first on Roubinian 2019.
- **Epah 2022** (Frankfurt / Tübingen; DRK-Blutspendedienst) shares **no author** with DeSimone 2023, with Roubinian 2019, or with Atilla 2017.
- **Davenport 2005** (single author) shares **no author** with any of the other three.
- **Atilla 2017** (Atilla, Toprak, Civriz Bozdag, Topcuoglu, Arslan — Ankara) shares no author with any of the three documents I checked. **I took that byline from the entry, not from front matter, because Atilla was not one of my named sources** — so this one row of the group table is at entry-level and not front-matter-level, and I say so.

**So the entry's five named priors are FOUR groups: Atilla/Arslan (Ankara), Roubinian/Plimier (REDS-III, two papers), Epah/Schäfer (Frankfurt–Tübingen), Davenport (Michigan).** This cuts both ways and the entry should say which: it means the "nobody printed the share" finding is weaker as a count of independent efforts, and simultaneously sharper as a mechanism claim, because the ONE group that holds the unit-to-recipient linkage published the increment analysis twice and never printed the grams.

## REGIME

**DeSimone 2023, in its own words.** Population: very low birth weight infants, ≤1500 g, who received at least one RBC transfusion, at 7 REDS-III hospitals, 2013–2016. Unit of analysis: the transfusion episode (567), clustered within 254 infants. Instrument: linked donor, component and recipient records plus pre/post haemoglobin concentrations. Exposure: donor demographics and donor fingerstick Hb concentration, component manufacturing attributes, storage duration, and **issued aliquot volume in mL/kg**. Endpoints: increment in g/dL, and additional RBC transfusion within 48 hours. Threshold: p<0.05 two-sided.

**Does the candidate sit inside it?** On the endpoint, **yes, and more tightly than the entry admits** — the candidate's L2 is a 48-hour second-unit hazard and DeSimone's secondary endpoint is "additional RBC transfusion within 48 hours of the index event". Same window, same event class. On the exposure, **no, and decisively** — the candidate's exposure is the haemoglobin MASS IN GRAMS of the specific bag, and that variable does not exist in this paper in any form. On the population, **no** — adults under a documented single-unit-then-reassess policy versus VLBW neonates on a neonatal aliquot protocol.

Overlap in both directions, as the rule requires, on the one DeSimone number that looks like the claim's (the adjusted OR for additional transfusion within 48 hours):
- *What DeSimone's class MISSES that the candidate needs:* the entire exposure. No grams in the bag, measured or predicted. Also no variance decomposition of any kind, so L1's share is not merely unestimated here, it is unestimable from what is printed.
- *What DeSimone's class INCLUDES that the candidate excludes:* neonatal recipients at ≤1500 g; episodes of weight-indexed **aliquots** rather than whole units; repeated episodes within the same infant (567 in 254); a transfusion decision governed by a neonatal threshold protocol rather than an adult single-unit-then-reassess policy; and concomitant plasma and platelet transfusions as covariates.

**Epah 2022, in its own words (paraphrase-level).** Population: packed red blood cell units — 6,058 for training, 2,637 independent. Unit of analysis: **the bag.** Instrument: eight machine-learning models over 13 routinely collected features. Endpoint: predicted haemoglobin and iron content per unit. Threshold/performance: adjusted R² > 0.9; MAE ≈ 1.43 g Hb, ≤ 4.96 mg iron.

**Does the candidate sit inside it?** The candidate's **exposure** sits inside it — this is the instrument that would generate the grams. The candidate's **outcome, estimand, population and unit of analysis all sit outside it**: there is no recipient, no episode and no endpoint in the regime at all. A result proved over bags is silent over episodes.

## DEFECTS FOUND

**On the DeSimone leg — the leg HOLDS on both load-bearing parts, with three corrections, one of which is a false statement about the paper.**

1. **HOLDS: "prints no variance figure."** CONFIRMED at full text, which is a strictly better read than the entry's own. No R², no proportion of variance, no ICC, no variance component.
2. **HOLDS: "no grams in the bag."** CONFIRMED at full text. Every haemoglobin figure is a concentration in g/dL; the only donor haemoglobin printed is the fingerstick 14.4 g/dL (SD 1.1).
3. **CORRECTION — "donor-level metadata" UNDERSTATES the exposure set.** The exposures are donor **and component and recipient** level, as the title itself says. Component-level exposures include apheresis collection, leukoreduction, additive solution, irradiation, days from irradiation, storage duration, and aliquot volume in ml/kg. Calling the exposure set "donor-level metadata" is wrong by the paper's own title and Table 2.
4. **CORRECTION, AND THE SHARPEST ONE — "where one unit is a multiple of total blood volume" is FALSE OF THIS PAPER.** The paper does not transfuse whole units; its component exposure is **"Issued aliquot volume in mL/kg"**, i.e. a weight-indexed aliquot. So the entry's physiological gloss misdescribes the intervention it is grading. The *direction* of the entry's regime point survives — a neonatal aliquot is a far larger fractional exchange than an adult unit — but on a different mechanism. **MY OWN ARITHMETIC, on textbook figures and not on any number this paper printed:** ~15 mL/kg against a neonatal blood volume of ~80 mL/kg is ~19% of circulating volume, versus a ~300 mL adult unit against ~5000 mL at ~6%. I did **not** obtain the paper's printed mean aliquot volume in mL/kg, so I cannot replace the entry's gloss with a sourced figure, only flag it as false as written.
5. **CORRECTION — the endpoint match is EXACT, not a loose "shape" resemblance.** DeSimone's secondary endpoint is additional RBC transfusion **within 48 hours**, the same window as V2(b)'s 48-hour second-unit hazard. The entry's "shares L2's shape" understates this. It does not change the verdict — the exposure is absent, so no second leg arises — but an entry that understates a prior's proximity on the endpoint is understating its own closest neighbour.
6. **FRONT-MATTER CORRECTION — the entry's "et al." is SPURIOUS.** The entry carries "...Sola-Visner M, Roubinian NH, **et al.**" The byline is exactly eight authors in both Crossref and the article PDF. The "et al." came from an eScholarship page that truncated at the eighth author, and it implies an unserved tail that does not exist. The entry also carries no journal, volume, issue or pages for this item: add *Transfusion* 2023;63(8):1424–1429.

**On the Epah leg — the leg HOLDS as far as my read reaches, which is not as far as the entry asserts.**

7. **HOLDS, ABSTRACT-SCOPED: PREDICTS the exposure, ANNOUNCES the application, measures no recipient outcome.** The grade is DEFINES/PREDICTS plus ANNOUNCES, never MEASURES, for any recipient quantity. The published-is-not-performed distinction the entry draws is the right distinction and it survives my check.
8. **DEFECT — the entry asserts a universal ("No recipient, no episode, no clinical outcome anywhere in it") that no reader's read level supports.** All three readers, me included, are at abstract level on this paper. Classify it as **TRUE OVER THE INSTANCE I OPENED (the abstract, whose every denominator is a count of units), UNENUMERATED over the full text.** The entry should carry the abstract-scoped claim.
9. **DEFECT, UNRESOLVED — the load-bearing quotation could not be checked, and the one rendering I hold is MORE HEDGED than the entry's.** Entry: "enables reliable pRBC dosing per pharmaceutically active agent". My paraphrase-level rendering: the authors "suggest this could support dosing per active agent". If the paper hedges, the entry has a deleted modal in a quotation it leans on at lines 24, 42 and 53. I did not establish this; I am flagging an unchecked quotation, not reporting a misquotation.
10. **DEFECT — presupposition (2) is marked ESTABLISHED on a range my read did not serve.** "38.5-79.9 g across 6,058 units" did not appear in the abstract as served to me. Unconfirmed at my read level, not contradicted.
11. **FRONT-MATTER CORRECTIONS.** Add article number **e2204077**. Diacritics per front matter: **Gülec, Dörr, Schäfer** (the entry prints Gulec, Dorr, Schafer). Note a genuine disagreement between two front-matter sources on the sixth author: Crossref prints **Haecker**, the Tübingen record prints **Häcker** — I report both rather than choosing.

**On the 2005 item.**

12. **DEFECT — "its author list was never served" is NO LONGER TRUE, and the entry can stop saying so.** Resolved in one Crossref call: **Davenport R** (Robertson Davenport), sole author, "Blood components should be labeled for content", *Transfusion* 2005;45(1):3–4, DOI 10.1111/j.1537-2995.2005.04323.x. The item remains **text-unread** — but by my spent budget, not by any failed route, and the entry must not promote that into a property of the document.

**On the group count.**

13. **DEFECT — the entry counts two REDS-III papers as two priors.** DeSimone 2023 and Roubinian 2019 share Roubinian and Plimier and the same linked data resource. One group, two populations. The entry's lines 22–23 present them as independent corroboration that the variance share is unprinted; they are one group's two papers.

## ROUTES THAT FAILED

1. `curl https://api.crossref.org/works/<doi>` for all three DOIs → **`curl: (56) CONNECT tunnel failed, response 403`**. Tool-scoped, exactly as the briefing says: WebFetch reached the same host immediately afterwards. Not a host block.
2. `https://onlinelibrary.wiley.com/doi/10.1111/trf.17468` (DeSimone, publisher HTML) → **"Not fetched: ... failed at its site (client_error), and nothing of the page was retrieved."** Recovered in full at the eScholarship PDF, so this is not a COULD NOT READ for DeSimone.
3. `https://advanced.onlinelibrary.wiley.com/doi/10.1002/advs.202204077` (Epah, the correct publisher host for *Advanced Science*) → **"Not fetched: ... failed at its site (client_error), and nothing of the page was retrieved."** This is a different host from the `onlinelibrary.wiley.com` route the entry records as having failed for adversary 1, so **two distinct Wiley hosts have now refused this paper.**
4. `https://publikationen.uni-tuebingen.de/xmlui/handle/10900/157694` (the Tübingen mirror the entry nominates at line 54 as "the cheap route to its full text") → **the record resolved and served metadata, but it carries NO FULL TEXT.** In its own words as served: the page "gives no direct file download. It lists only the DOI link above as the 'Referenz zum Volltext'". **This retires the entry's line-54 nomination: the Tübingen handle is a metadata-only record, not a full-text mirror, and it is therefore not the KIND of document that could settle whether Epah reports a recipient endpoint.** I checked that nomination by kind and it fails by kind.
5. `https://doaj.org/article/d8cf21a3212e476db93119b61a5614a8` → fetched successfully, but the summariser **declined verbatim reproduction** of the abstract: "I can't reproduce the full abstract verbatim, since that would mean quoting the whole text." Front matter served; abstract served only as paraphrase.
6. WebSearch #2, domain-restricted to repository and archive hosts to find any non-Wiley, non-PMC Epah full text → **`PROXY_REJECTED`, "The WebSearch proxy rejected the request (HTTP 400): The request was invalid."** This was a proxy rejection, not a classifier refusal. I recorded it and did **not** rework the query.
7. **PMC9798979 / PMC10530070: NOT ATTEMPTED, by instruction** — PMC and Europe PMC are hard-blocked here. These are identifiers to convert, not routes, and I treated them as such.
8. **Not attempted, budget spent:** the text of Davenport 2005 at any route; a second independently worded sweep of DeSimone's full text for variance terms; any further Epah full-text route. **Each of these is a spent budget and none is a property of the source.**

WebSearch #1 (`"From Unit to Dose" Epah Schäfer Advanced Science 2022 ... full text PDF`) ran and returned **no new open-access surface**: the only Epah-related returns were the DOAJ record (abstract), PMC9798979 (blocked), and a DGTI-2022 congress programme item — which is the **same group's conference abstract, one document and one group, not a corroborating source**. It also re-returned the Atilla cluster (PMC5544044, avesis) — **repeated title returns, counted as title matches and not as corroboration.**

## BEARING ON THE LEDGER ENTRY

**The claim HOLDS, mostly, and the rejection gains NO second leg. Neither document measures a recipient outcome against a measured per-unit haemoglobin mass — which was the precise condition under which the entry conceded a second leg would arise.**

- **DeSimone 2023: the leg holds, and is now better grounded than the entry claims, because I opened the full text and the entry only had the abstract.** No variance figure of any kind; no grams in any bag. It therefore cannot carry L1, and it cannot carry L2 either, because its 48-hour endpoint is regressed on an exposure set that contains no haemoglobin mass. **NARROW the entry's wording on three points:** drop "donor-level metadata" for "donor, component and recipient metadata, none of it grams"; **strike the clause "where one unit is a multiple of total blood volume", which is false of a paper whose component exposure is "Issued aliquot volume in mL/kg"**, and replace it with the sourced regime difference (neonatal weight-indexed aliquots under a neonatal threshold protocol, 567 episodes in 254 infants); and upgrade "shares L2's shape" to the exact-window match it is, since the entry is understating its own nearest neighbour on the endpoint. Correct the front matter: eight authors, no "et al.", *Transfusion* 2023;63(8):1424–1429.
- **Epah 2022: the leg holds at abstract level and the entry over-reaches past it.** The DEFINES/PREDICTS/ANNOUNCES-not-MEASURES grade is correct and is the right distinction. But **CONVERT the entry's universal "No recipient, no episode, no clinical outcome anywhere in it" into the abstract-scoped claim it actually rests on**, and add that three readers have now failed at four distinct routes (two Wiley hosts, the Tübingen record which has no file, and DOAJ which serves no verbatim text) — so the paper is COULD NOT READ at full text for everyone, which is not evidence about its contents. **Retire the entry's line-54 nomination of the Tübingen handle: it is metadata-only and is not the kind of document that can settle the recipient-endpoint question.** Flag the unchecked "enables" quotation as a modality risk.
- **A PROMOTION CONDITION, stated by document kind, since the entry's own cheap check turned out to be no check at all.** What would settle the Epah leg outright is a **verbatim Methods/Results/Discussion read of the paper itself** — the Wiley article HTML at `advanced.onlinelibrary.wiley.com`, or PMC9798979 if the block is ever lifted. Those are the paper; the DOAJ and Tübingen records are records *about* the paper and cannot settle it. Until one of them opens, the Epah leg is abstract-scoped by everyone who has touched this entry.
- **The 2005 item: the entry's statement that its author list was never served is now simply out of date.** Davenport R, sole author. Text still unread, by budget and not by route. One author, Michigan, sharing nobody with anyone else here — so it is a fourth independent group, and the entry's "the programme has been stated in print since at least 2005" survives as a title-and-front-matter claim about a single-author two-page item nobody has read.
- **GROUPS: the entry's five priors are four groups, and two of them are one.** DeSimone 2023 and Roubinian 2019 share Roubinian and Plimier and the same REDS-III resource. **Add a line to the entry saying so**, because it changes what attack 7's mechanism rests on: it is not "two independent teams modelled the increment and neither had the grams", it is "the one team that holds the unit-to-recipient linkage modelled the increment twice, in adults and in neonates, and never had the grams". That is a sharper mechanism and a thinner corroboration base at the same time, and the entry should say which it is relying on.
- **Net effect on the verdict: unchanged.** The entry says at line 53 that if the Atilla leg fell, nothing else kills it and L1+L2 should be re-entered narrowed. My check does not disturb that. It removes one false clause from the DeSimone leg, bounds the Epah leg to the read level that supports it, resolves the 2005 front matter, retires one nominated route, and collapses two priors into one group.
