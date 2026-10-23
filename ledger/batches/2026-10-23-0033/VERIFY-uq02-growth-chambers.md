# VERIFY - PMC4578792 (Porter et al. 2015, Plant Methods) does NOT contain limb (b)'s estimator: no variance partition, no measured 24-h environmental component
Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

The entry asserts that one of the two surviving legs rests on a document "returned by two adversaries and opened by neither": PMC4578792, *How well do you know your growth chambers?*, described as a paper in which limb (b)'s estimator — the share of between-chamber (or between-laboratory) spread attributable to the chamber — is an ESTABLISHED NAMED QUANTITY for plant traits.

What turns on it (restated, not defended): if the paper partitions between-chamber variance for a trait AND attributes part of that variance to a measured 24-hour environmental component, limb (b) has a plant-literature template. If it tests chamber effects on traits without ever instrumenting a periodic environmental component, the gap holds.

Sub-claims (a)-(f) are answered separately below, in order, inside **WHAT THE SOURCE SAYS**.

## READ LEVEL

**Source, recorded by DOI + first author + year + journal + title from here on:**
DOI **10.1186/s13007-015-0088-0** · first author **Amanda S. Porter** · **2015** · ***Plant Methods*** vol. 11, article number 44, published 22 September 2015 · title ***"How well do you know your growth chambers? Testing for chamber effect using plant traits"***.
Other identifiers: PMID 26396588, PMCID PMC4578792. These three identifiers name **ONE document**, not three sources.

**Front-matter author list as printed** (Authors and Affiliations section, requested explicitly and returned twice identically): "Amanda S. Porter, Christiana Evans-Fitz.Gerald, Jennifer C. McElwain, Charilaos Yiotis & Caroline Elliott-Kingston". Five authors. Taken from the article's own front matter, not from any short form.

**Read level: PARTIAL, via the WebFetch summariser on the publisher's full-text HTML (link.springer.com).** Sections actually reached and reported on: title and front matter; complete abstract (Background / Results and discussion / Conclusion); the caption of Table 1 and the full captions of Figures 1, 2 and 3; Methods, including the complete "Statistical analysis" subsection and the chamber-monitoring/instrumentation passages; the Results-and-discussion passages on resolvable and unresolved chamber effects; Conclusions.

**Not reached:** the *body* of Table 1 ("Plant growth chamber parameter settings") — the summariser stated explicitly that the table body was not in the page content it received. So Table 1's per-chamber rows are COULD NOT READ, not NOT FOUND. I also did not obtain the per-trait p-value numerals printed inside Figure 1's panels (they are rendered in the figure image, and the caption says only that "corresponding p values displayed"). Those are COULD NOT READ.

All quotations below are as served by the summariser, which caps verbatim strings at roughly 125 characters. Where a sentence had to be assembled, it is labelled a reconstruction with the fragment count, and I never completed a cut string by inference.

**Routes: see ROUTES THAT FAILED.** No WebSearch was needed; the citation resolved to the document directly.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The conversion result

One call to the idconv endpoint returned, verbatim:

> "records":[{"doi":"10.1186/s13007-015-0088-0","pmcid":"PMC4578792","pmid":26396588,"requested-id":"PMC4578792"}]

Resolving that DOI gives: **Porter, A. S.; Evans-Fitz.Gerald, C.; McElwain, J. C.; Yiotis, C.; Elliott-Kingston, C. (2015), "How well do you know your growth chambers? Testing for chamber effect using plant traits", *Plant Methods* 11:44, DOI 10.1186/s13007-015-0088-0.**

**Citation correction to the entry's front matter:** the entry carries the title as the bare question *"How well do you know your growth chambers?"*. The printed title continues: **"... Testing for chamber effect using plant traits"**. That dropped subtitle is the whole of the paper's stated object — *plant traits*, not environmental time series — and the entry's shortened form is precisely the form under which the paper could be mistaken for an environmental-variance study. The entry also carries no author, year, journal or DOI for this leg; it carries a PMCID, which is an identifier to convert, not a route.

### (b) Read level and routes

See READ LEVEL above: **PARTIAL full-text read** (front matter, complete abstract, all figure/table captions, Methods including the complete Statistical analysis subsection, the resolvable/unresolved Results-and-discussion passages, Conclusions), via link.springer.com through the summariser; Table 1's body and Figure 1's in-panel p-values COULD NOT READ.

### (c) Does the paper MEASURE an environmental variable inside the chambers over time, and does it report a 24-hour / diurnal periodic component in it?

**Monitoring is asserted; no time series and no periodic component is reported.** What is printed:

- Results, on the experimental set-up: "where light, temperature, humidity and atmospheric gases were controlled and monitored (Table 1)." The only pointer given is to Table 1, whose caption is **"Plant growth chamber parameter settings"** — a settings table, by its own caption, not a record of measurements over time.
- Methods, CO2 instrument: "Atmospheric CO2 concentration within the chambers was monitored using a PP-systems WMA-4 IRGA". An instrument is named; **no data from it are reported** anywhere I reached.
- Methods, light: the light spectrum "in all chambers was measured using a light spectrometer", done "to ensure that light quality was not a cause of chamber effect" — a one-time spectral check, by the stated purpose, not a time course.
- Methods, set points (reconstruction from 1 served fragment): "temperature 25 °C at midday and 15 °C at night; 390 ppm CO2; 65 % humidity (Table 1)", with a "16/8 h photoperiod".

**On the 24-hour question specifically.** The only 24-hour structure in the paper is *programmed*: a day/night temperature schedule (25 °C midday / 15 °C night) and a 16/8 h photoperiod. **SCOPE-SETTING CHECK:** these words sit in a Methods clause describing what the chambers were *set to simulate* ("All chambers simulated the same conditions: ..."). That opening phrase scopes everything after it as the **intended, identical, nominal** condition. The clause therefore **ASSERTS a set point and says nothing about a measured diurnal waveform**; it is not an assertion that a 24-hour component was instrumented, and it would be a misquotation to cut "25 °C at midday and 15 °C at night" out of "All chambers simulated the same conditions" and present it as a measurement.

**No figure or table in this paper plots an environmental variable against time.** The three figures are: Fig. 1, boxplots of *plant traits* by chamber; Fig. 2, traits ranked by detection ability vs. time cost of analysis; Fig. 3, a stepwise decision procedure for detecting chamber effects from fresh weight and flower count. Table 1 is chamber *parameter settings*. There is no diurnal, circadian, day/night-resolved or any other periodic analysis of a measured environmental channel.

The Conclusions instead **RECORD A MOVE AWAY** from having such data:

> "we recommend that independent environmental sensors for CO2, O2, light and temperature be used on a regular basis."

**SCOPE CHECK:** the clause's opening words are "we recommend that" — a forward-looking recommendation to future experimenters. It asserts that such monitoring *should* be done; it is evidence that the paper did **not** report it, and it is the hedged formulation, so I rely on it rather than on any bare claim that conditions were "monitored".

### (d) Does it partition variance in a trait into chamber and residual components, and what is the estimator called? Printed numbers?

**No. There is no variance partition in this paper, and therefore no estimator to name.** The complete "Statistical analysis" subsection, assembled from 7 consecutive served fragments (labelled: **reconstruction, 7 fragments**, junctions verified at the semicolons):

> "Statistical analysis was performed in R (v.3.1.1). Where data was normally distributed, one-way ANOVA was performed. Kruskal–Wallis test for equal medians was performed for non-parametric data. Post hoc tests included: Tukeys pairwise multiple comparison test; Dunnett-Tukey–Kramer pairwise multiple comparison test; and Mann–Whitney pairwise test; each with a false discovery rate (FDR) adjustment to account for multiple comparisons."

That is the whole statistical apparatus: **fixed-effect one-way ANOVA and Kruskal–Wallis, plus FDR-adjusted pairwise post hoc tests.** A targeted sweep for "variance component", "intraclass", "random effect", "mixed model", "heritability" returned **one** matching sentence in the paper — "Where data was normally distributed, one-way ANOVA was performed" — and nothing else.

**PUBLISHED IS NOT PERFORMED — the number I was asked to name does not exist here.** Asked directly whether any sentence states what fraction, proportion or percentage of between-chamber variation is due to the chamber, the answer from the document was that **no such fraction, proportion or percentage is printed**. The quantities the paper actually prints per trait are **p-values** (Fig. 1: "Shaded boxes display a significant difference after post hoc testing (FDR) with corresponding p values displayed") and a **count of affected chambers** ("Four of the eight chambers exhibited a chamber effect"; "Fresh weight and flower count detected a chamber effect in three chambers"). A p-value and a count of significant chambers are **detection** statistics. They have no numerator-and-denominator structure of the limb-(b) kind at all.

Relative to limb (b)'s estimator, this paper **does not DEFINE, BOUND, PREDICT or ANNOUNCE a variance share either** — the concept is simply absent from its statistics. Its question is "which chambers differ, and which trait detects that cheapest", not "how much of the spread is the chamber".

**NUMERATOR/DENOMINATOR CHECK, run in both directions on the nearest thing the paper prints.** The nearest printed quantity is the ANOVA/Kruskal–Wallis significance of a between-chamber difference in a plant trait.
- Its *numerator class* is not a sum of squares reported as a share; nothing is divided by anything. What the printed statistic ranges over is: **one plant trait, eight walk-in chambers, Vicia faba L. 'Aquadulce Claudia'**, tested for equality of means or medians.
- Limb (b)'s estimator needs a **between-chamber variance in the numerator and a total (between + within) variance in the denominator**, for an **environmental channel measured over time**, with a **24-hour periodic part separated out**. None of those three objects is present: no variance components, no total, and no environmental time series.
- What the paper's class **MISSES** relative to the claim: any variance decomposition; any residual/within-chamber variance estimate reported as such; any environmental variable as the response; any periodic decomposition.
- What it **INCLUDES that the claim excludes**: plant physiological and anatomical traits as the response (chlorophyll fluorescence, gas exchange, biomass, flower count, stomatal density, vein density, δ13C), and a methodological cost axis (time to analyse each trait, Fig. 2) that limb (b) has no place for.
Both directions fail. This is not a one-word-away quantity; it is a different kind of statistic.

### (e) Does it attribute any part of the chamber effect to a specific measured environmental channel?

**Partly — as a diagnosed instrument malfunction and a contamination history, inferred from plant traits, never as a measured environmental channel apportioned a share of variance.** Two chambers are given causes:

- **Chamber 3.** "Combined consideration of all measured traits pointed towards a malfunction in the IRGA of chamber 3." **SCOPE CHECK:** the opening words "Combined consideration of all measured traits pointed towards" scope the whole clause as an **inference running from plant traits to a suspected instrument fault** — the direction opposite to limb (b), which runs from a measured environmental channel to trait variance. It ASSERTS a suspected cause; it does not assert a measurement of CO2 that differed. The paper's own further formulations of the same point are hedged, and per the discipline I quote the hedged forms: a malfunction "possibly due to a faulty CO2 sensor", and "An explanation for this could be that additional CO2 from gas canisters was injected into the chambers." The supporting observation is itself a *plant* measurement, not a chamber measurement: "the isotopic ratio (13C:12C) of atmospheric CO2 in chamber 3 was lower compared to other chambers" is inferred from leaf δ13C, and what is attributed to chamber 3 is "a **potential** increased atmospheric CO2 concentration".
- **Chamber 6.** "Corrosion of all metal components in the chamber had occurred due to mixing of SO2 gas with water" — the paper adds "from the overhead misting system in a previous study." This is an equipment-history cause, not a monitored environmental channel.

Asked directly for any sentence reporting **measured** environmental conditions that **differed** between chambers, with numbers and units, the document returned **none**. The set points are stated as identical: "All chambers simulated the same conditions: ... 390 ppm CO2; 65 % humidity." The closest numbers with units in the paper's measurement sections belong to the **gas-exchange cuvette during a single measurement session**, not to chamber monitoring: "average leaf temperature was 24.3 ± 0.7 °C and vapour pressure deficit was 0.85 ± 1.6 kPa" (the paper's own stated uncertainties, carried through).

And the paper's other category of chamber effect is defined by the *absence* of any such channel: "an unresolved chamber effect is caused by unknown factors that can only be mitigated by appropriate experimental design and sufficient replication."

### (f) One sentence: does this paper do limb (b) for an environmental 24-hour component, or only chamber effects on traits?

**Only chamber effects on plant traits: Porter et al. 2015 (DOI 10.1186/s13007-015-0088-0, *Plant Methods* 11:44) tests whether eight nominally identical chambers differ in Vicia faba traits using one-way ANOVA / Kruskal–Wallis with FDR post hoc tests, prints p-values and a count of affected chambers, never decomposes a trait's variance into chamber and residual components, never measures an environmental variable as a time series, and never reports a 24-hour or diurnal component of one — so it does not perform limb (b), and the day/night figures it does print are programmed set points.**

## REGIME

**The source's regime, in its own words.** Population and unit: *Vicia faba* L. 'Aquadulce Claudia' (broad bean) plants "grown in eight walk-in chambers"; the unit the statistics compare is the **chamber**, with plants as replicates within it. Object of study, per the title: **"Testing for chamber effect using plant traits."** Operating condition: all eight chambers set to the same nominal environment — "All chambers simulated the same conditions", 390 ppm CO2, 65 % humidity, 25 °C midday / 15 °C night, 16/8 h photoperiod; this is a *null* design, with no treatment contrast. Instruments: chlorophyll fluorescence, gas exchange, biomass and reproductive-yield counts, leaf anatomy (stomatal density, vein density), leaf stable carbon isotopes; plus a PP-systems WMA-4 IRGA and a light spectrometer for one-off equipment checks. Threshold and category: significance at "α = 0.05" after FDR adjustment, and a two-way taxonomy the paper itself coins — "'resolvable' or 'unresolved'", the first "caused by malfunctioning components of a chamber", the second "caused by unknown factors". Outcome measure: which chambers differ, and which trait detects a difference most cheaply (Fig. 2's detection-vs-time-cost axes).

**Does the claim sit inside that regime? No, on three counts.** (1) The response variable: the paper's response is a *plant trait*; limb (b)'s response is an *environmental channel measured inside the chamber*. (2) The statistic: the paper's statistic is a hypothesis test for equality of means/medians; limb (b)'s is a ratio of variance components. (3) The time axis: the paper has no environmental time axis at all, so a 24-hour periodic component has nowhere to be estimated. A result established for FDR-adjusted trait-difference detection under identical set points is **silent** about the share of environmental variance attributable to the chamber, not supportive of it.

## DEFECTS FOUND

1. **The entry's characterisation of the source is wrong on its central word.** The entry says this paper is one in which the limb-(b) estimator "is an ESTABLISHED NAMED QUANTITY for plant traits." The paper names no such quantity. Its entire statistical vocabulary is "one-way ANOVA", "Kruskal–Wallis test for equal medians", "Tukeys pairwise multiple comparison test", "Dunnett-Tukey–Kramer pairwise multiple comparison test", "Mann–Whitney pairwise test", and "false discovery rate (FDR) adjustment". No variance component, no intraclass correlation, no random effect, no mixed model, no heritability. **No fraction, proportion or percentage of between-chamber variation attributable to the chamber is printed anywhere in this paper.** The entry attributes to the source a quantity the source does not contain.

2. **Title truncation that does the misleading work.** The entry carries the title as the bare question "How well do you know your growth chambers?", dropping "Testing for chamber effect using plant traits". The dropped half states the paper's object and is exactly what distinguishes it from the paper the entry imagines.

3. **An unopened source was graded.** Per the entry, two adversaries returned this document and neither opened it. Opened, it supports neither the reading that it caps the candidate's novelty nor any claim that it establishes a named estimator. **Both adversaries' return of the same title is ONE document surfacing twice — a title match, not corroboration.**

4. **Monitoring asserted is not monitoring reported.** It would be easy to read "where light, temperature, humidity and atmospheric gases were controlled and monitored (Table 1)" as evidence of an environmental time series. Table 1's caption is "Plant growth chamber parameter settings"; its body is COULD NOT READ here, but a settings table is not a time course, and the Conclusions' recommendation that "independent environmental sensors for CO2, O2, light and temperature be used on a regular basis" is the paper recording that such routine independent monitoring was not in hand.

5. **Direction of inference is inverted relative to limb (b).** Where the paper does reach a cause — "Combined consideration of all measured traits pointed towards a malfunction in the IRGA of chamber 3" — it reasons *from traits to a suspected instrument fault*, hedged ("possibly due to a faulty CO2 sensor"; "could be"). Limb (b) reasons from an instrumented environmental channel to variance in an outcome. Citing this sentence as an environmental-channel attribution would be a scope error even though the string is verbatim.

6. **An unenumerated universal, flagged rather than relied on.** My finding is about **one** document: DOI 10.1186/s13007-015-0088-0. **Instances I opened: exactly this one.** Instances I did **not** open, and therefore cannot speak for: Table 1's body in this same paper; the paper's cited prior chamber-effect literature; and the wider plant-phenotyping literature on growth-chamber variance (where mixed-model partitioning of chamber/block effects is routine in other papers I have not opened here). So the proposition "no plant paper partitions between-chamber variance and attributes part of it to a measured 24-hour environmental component" is **UNENUMERATED, not established** — it is true over the one instance I opened and I name the rest as unchecked. Nothing in this note should be read as closing that universal.

7. **What KIND of document could settle the universal, and whether I can name one.** It would have to be a paper whose *response variable is an environmental channel recorded as a time series inside multiple chambers or laboratories*, fitting a variance decomposition across chambers, with a periodic (24-hour) term separated out — i.e. a controlled-environment metrology or phenotyping-platform reproducibility paper, not a chamber-effect-on-traits paper. **Porter et al. 2015 is not that kind of document.** I did not open a candidate of the right kind, so I nominate none; naming one from memory here would be a guess, and I am calling it that rather than dressing it as a lead.

## ROUTES THAT FAILED

- `https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=PMC4578792&format=json` — 302 to `https://pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?format=json&ids=PMC4578792`; the redirect target then succeeded under WebFetch. (Fetch 1 spent on the redirect notice, fetch 2 on the conversion.)
- `curl` to that same idconv endpoint — **CONNECT tunnel failed, response 403** at the proxy. Tool-scoped, as documented: WebFetch reached what curl could not. TLS verification was not touched and HTTPS_PROXY was not unset.
- `https://plantmethods.biomedcentral.com/articles/10.1186/s13007-015-0088-0` — 302 to `link.springer.com/article/10.1186/s13007-015-0088-0?code=...&error=cookies_not_supported`; that target then served the full text. (Fetch 3 spent on the redirect notice, fetches 4 and 5 on the article.)
- PubMed Central and Europe PMC were not attempted: hard-blocked here per the brief. Their silence is not evidence.
- Unpaywall was **not** used: its API requires a contact email, and no personal identifier was put into any URL, query string or header.
- No WebSearch was issued, so no search classifier refusal arose. Searches used: **0 of 2**. Fetches used: **5 of 5**.
- Budget consequence: Table 1's body and Figure 1's in-panel p-values were not retrieved. Both are **COULD NOT READ**, not negative findings. Neither could supply a variance share — Table 1 is "parameter settings" by its caption and Fig. 1's panels carry p-values by their caption — but I note the gap rather than claiming to have excluded them.

## BEARING ON THE LEDGER ENTRY

**The claim as the entry states it does not hold: NO.**

The entry's limb-(b) leg does **not** rest on this document in the way the entry says it does. Porter, Evans-Fitz.Gerald, McElwain, Yiotis & Elliott-Kingston (2015), *Plant Methods* 11:44, DOI 10.1186/s13007-015-0088-0, does **not** establish, name, or print the share of between-chamber spread attributable to the chamber, for plant traits or for anything else. It tests eight nominally identical walk-in chambers for differences in *Vicia faba* traits with one-way ANOVA and Kruskal–Wallis plus FDR-adjusted post hoc tests, and reports p-values and the count "Four of the eight chambers exhibited a chamber effect". It never measures an environmental variable inside the chambers as a time series, and it reports no 24-hour or diurnal component of one; the day/night values it prints are programmed set points inside the clause "All chambers simulated the same conditions".

**Action on the entry — strike the attribution, hold the gap, and narrow what the gap claims.**

1. **STRIKE** the sentence attributing an established named variance-share estimator to PMC4578792. It is false of this document, and the entry should record what the paper actually prints (p-values, affected-chamber counts) and its correct front matter (Porter 2015, *Plant Methods* 11:44, DOI 10.1186/s13007-015-0088-0, full title including "Testing for chamber effect using plant traits").

2. **The gap, as against this source, HOLDS, and the leg closes in the candidate's favour** on the entry's own stated test: the paper partitions nothing, and instruments no periodic environmental component. The second half of the "why it matters" disjunct is what obtains — chamber effects on traits, never an instrumented periodic environmental channel — except that even "partitions chamber effects" overstates it: the paper *detects* chamber effects without partitioning anything.

3. **NARROW the leg's own wording.** Whatever the entry claims about the plant literature must now be stated as a universal over an **enumerated** list, because I opened exactly one instance. The entry should not carry "no plant paper does limb (b)". It should carry: "not done in Porter et al. 2015 (DOI 10.1186/s13007-015-0088-0), the one plant-literature instance opened; the broader plant-phenotyping variance-partitioning literature is unenumerated."

4. **CONVERT the remainder to a promotion condition.** Before this leg is promoted, open a document of the kind that could actually close it — a controlled-environment or phenotyping-platform reproducibility paper whose *response is an environmental channel recorded over time across chambers or laboratories*, fitting a chamber/laboratory variance decomposition with a 24-hour term. Porter et al. 2015 is not that kind of document, and this check nominates no substitute.

**Net:** the entry's factual claim about this source is false and should be struck; the gap it was meant to support survives against this source but must be restated as unenumerated rather than established.
