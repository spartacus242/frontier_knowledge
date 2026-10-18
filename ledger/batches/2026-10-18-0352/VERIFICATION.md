# Verification pass — batch 2026-10-18 03:52 UTC (other STEM, UQ-20261018-06 … -10)

Twenty-seven fresh-context readers, each handed ONE source and no reviewer reasoning, each
required to declare its read level, its search and fetch counts and every route it tried.
Twenty-seven returned; none failed.

Every brief was written from the full citation the ENTRY carries, not from a label in the
adversarial log, and no brief asked a narrower question than its entry claims. That rule was
written after the 2026-10-18 01:30 medicine batch, where three briefs broke it and
manufactured a false "cannot be located" finding plus two false title defects. Every reader
preamble also forbade putting any personal identifier into a URL, query string, header or
form, naming Unpaywall as the API to skip — written after a reader on that same batch put the
user's email into an Unpaywall courtesy parameter.

**No verdict moved.** Gate 5's 2 Provisional / 3 Rejected stands. What the pass did change:
four grounds or legs demoted, three author-order defects, five quotations found to be
paraphrases, one cited arXiv identifier found to name a paper about something else, two new
priors nobody had, and one six-times-failed retrieval whose mechanical cause is now known.

---

## UQ-20261018-06 — measurand-dependent instrument loss in extremes (Rejected)

Six readers. Verdict unchanged: Gate 2 novelty Low, with attack 2 (Disguise) Unresolved from
both adversaries. All three legs of the kill survive first-hand reading, and one is now
stronger than the batch could show.

### P4, the prior that occupies limb (a): author recovered, all three quotes verbatim, still abstract-only

The entry records this paper with its "authors field blank". **Its author is recoverable, and
two readers recovered it independently: Collette M. Blessing, with Forrest J. Masters as
contributor, Paper No. 102, Proceedings of the Tenth Americas Conference on Wind Engineering
(10ACWE), Baton Rouge, 31 May – 4 June 2005, American Association for Wind Engineering.** The
HTML record at invenio.itam.cas.cz/record/4269 shows the author field empty; the BibTeX export
(`export/hx`) gives "Blessing, Collette M." and the MARC export (`export/hm`) gives Blessing
as author with Masters as contributor. Whether Masters is a co-author, an advisor or an editor
is not determinable from the MARC "contributor" label. No affiliations appeared anywhere.

All three quoted strings appear in the abstract, each checked on its own:

- "almost 25% of the stations failed to report" — verbatim, in "Records available in the
  National Climatic Data Center indicate that at the onset of tropical storm force winds,
  almost 25% of the stations failed to report."
- "over 90% of the stations ceased to communicate" — verbatim, in "At Saffir-Simpson Category
  1 wind speeds, over 90% of the stations ceased to communicate."
- "All stations that experienced Saffir-Simpson Category 2 wind speeds failed." — verbatim and
  complete.

**One wording correction that must not propagate: the second figure is AT Category 1, not
"above Category 1".** A MARC-based summary paraphrased it as "above Category 1"; the source
says "At Saffir-Simpson Category 1 wind speeds".

**Three qualifications the abstract itself imposes.** The denominator is "the stations" and is
never defined — stations in the storm's path, stations experiencing that wind, or all stations.
The level of aggregation (per station, per storm, or pooled) is not stated. And the count of
stations in the Category-2 bin is not given, so "All stations ... failed" may rest on few.
The twelve cyclones are named: Bonnie, Earl, Bret, Floyd, Irene, Lili, Claudette, Isabel,
Charley, Frances, Ivan, Jeanne (1998–2004), on ASOS and its "predecessor" AWOS, from NCDC
records.

**Still ABSTRACT ONLY after two more readers and about fourteen further routes.** The record is
marked restricted and the PDF blocks robots; `record/4269`, `export/xm` and `record/4178` each
returned ROBOTS_DISALLOWED. The MARC export states that a PDF of the contribution is hosted on
ITAM Invenio, but exposes no URL. Untried routes for a later pass, logged so nobody repeats
the failures: the AMS 32nd Hurricane Conference paper 293983 ("Standardization and
Assimilation of Surface Wind Observations During Land-falling Tropical Cyclones"), the Masters
dissertation PDF at fcmp.ce.ufl.edu, and Semantic Scholar.

**The finding that strengthens attack 2.** A second reader was given the TOPIC and no
identifier, and told not to search for any title. It surfaced Blessing & Masters on its first
try. Disguise asks whether a question is already asked under other words; a paper that a
subject-first sweep finds immediately is not hidden.

Two ancillary sources neither adversary had, both unconditioned and so not priors but useful
for the routing row: NIST/ICAMS slides giving event counts without wind speeds (Irma: 34 of 66
ASOS and C-MAN stations failed; Harvey: the 3 ASOS stations near Rockport TX failed) with the
qualitative "The bigger and more intense the storm, the less hazard data available"; and
Powell, Houston & Reinhold 1996 (Weather and Forecasting 11:304-327), whose Table 1 lists
causes of Hurricane Andrew site failures with no failure rate against wind speed.

The stream-gauge and tide-gauge side of the absence is weak and is now recorded as such: those
searches returned titles only, and no USGS document was opened.

### P1: the posing sentence is verbatim at full text, and the paper has since been published

Read at full text (arxiv.org/html/2512.15429v1). Simpson, E. S. & Northrop, P. J.,
"Accounting for missing data when modelling block maxima", arXiv:2512.15429v1, submitted
17 Dec 2025. **New: the abs record carries DOI 10.1002/env.70075, so the paper has since
appeared in Environmetrics.** The entry cites it as arXiv-only.

All four strings found verbatim, each checked alone:

- "river flow gauges being damaged by fast-running water" and "there is a need to be able to
  capture such phenomena" — **both in ONE sentence of §6, so they are not two independent
  confirmations**: "It is easy to imagine situations where the most extreme events are the ones
  that are the hardest to reliably record, e.g., river flow gauges being damaged by
  fast-running water, and there is a need to be able to capture such phenomena."
- "one could attempt to explicitly model the missingness mechanism and incorporate this into
  the GEV model" — §6, preceded by "It is also quite likely for informative missingness to
  occur in environmental applications, but this is not accounted for in our current approach."
- "missing completely at random in each block" — **in §3.2, not in the Discussion.**

**The paper does NOT model measurand-dependent missingness.** "but this is not accounted for in
our current approach" settles it; the simulations impose MCAR within each block with the
per-block missing proportion drawn from U(0, 0.2). So P1 poses limb (b) as an open need and
leaves it open, exactly as the entry says.

Data confirmed: 162 years of Brest surge (1846–2007, ~9% missing, 113 complete years, nine
empty) and 27 years of Plymouth daily-maximum ozone (1998–2024, ~10% missing).

Comparator corrections: there are **two** McVittie–Murphy weighting variants, not one (w = n/n̄
and an EDF-power form); "unattainable" is **not** the paper's word for Full — it says Full
"is, of course, impossible in practice"; and the applications do not use Full at all.

### P2: executes limb (b), and its censoring probability is imputed exactly as the entry says

Read at full text (arxiv.org/pdf/2506.15970). James H. McVittie (Regina) and Orla A. Murphy
(Dalhousie). Stations and spans: Saint John 1941–2023 (83 years, 60 with missing data),
Yarmouth 1965–2023 (59, 45), Port-aux-Basques 1959–2023 (64, 56).

All three quotes verbatim:

- "a failure of the equipment was attributed to the high intensity waves" — §2.2.
  **Demotion: this is a HYPOTHETICAL MNAR scenario (its scenario III), not a documented
  failure at a named station.** The entry calls it "the candidate's causal story in the paper's
  own words", which is true of the words and not of their status.
- "predict a 20-year return level almost 1m higher" — §5, Saint John.
- "In all cases, there was no evidence that the missing data mechanisms were MCAR" — §5, after
  Little's test at each station.

**The central methodological point is confirmed exactly.** The censoring probability is
estimated from the data and from nothing else: the unconditional soft estimator uses the
within-block non-missing proportion ("do not utilize any information from the random variables
within each of the blocks"); the conditional soft estimator uses the empirical CDF of observed
values raised to the number missing; EM uses the fitted GEV CDF at the observed block maximum,
iterated. **No external information about instruments, the network or failure rates enters
anywhere.** And the paper never reconstructs the realized block maximum at a failed station —
the observed maximum is treated as a censored lower bound and the censoring indicators are
latent variables, not values to be filled in.

The figure, with its denominators: Table 4, Saint John 20-year levels — obs 1.73 m (SE 0.241,
CI 1.35–2.29), hard 6.26 m (SE 137.66), softUC 1.88, softC 2.95 (SE 0.752, CI 1.90–4.83), EM
2.65 m (SE 0.689, CI 1.77–4.37). **"Almost 1m" fits EM (+0.92 m) better than softC (+1.22 m),
though the sentence names both, and the comparison is against the observed-likelihood estimate,
not against a true value.** The hard-censoring estimate at Saint John is unusable (SE 137.66).

Two bibliographic corrections: **the paper does not cite arXiv:2506.15964**, so "companion to"
is the entry's inference; and 2506.15964's own title is "Weighted Parameter Estimators of the
Generalized Extreme Value Distribution in the Presence of Missing Observations". The 10–15%
block-discard rule is attributed to Beck et al. (2020), which the paper's simulations "appear
to support" rather than derive.

### P5: the quotation is a paraphrase, and the prior is a PROPOSAL where the entry calls it guidance

Read at PDF level (the open-access journal PDF at asistent.ceon.rs). Dokic, Blagojević &
Mihailović, J. Appl. Eng. Sci. 2021;19(2):432-438, doi 10.5937/jaes0-28902, confirmed in full.

**The quoted string is not verbatim.** The entry quotes "a lower perception threshold bound at
the value of the highest observed flow in the available series". The abstract reads "setting a
lower perception threshold bound at the value of the highest peak flow in the available –
incomplete dataset", and the Conclusion reads "TY,lower is set to value of the largest flood
within the remaining (incomplete) data record". Checked piece by piece: "highest observed
flow" absent, "available series" absent, "highest peak flow in the available" present.

**The substantive correction: the entry calls P5 "limb (b) method 2 … operational US
flood-frequency guidance with a published evaluation, not a proposal." It is both, and the
half that matters is the proposal.** The perception-threshold concept is established
B17C/HEC-SSP machinery, quoted in the paper as "the perception thresholds do not depend on the
actual peak discharges that have occurred". Using it to represent missing values inside the
systematic record is **the authors' own proposal**: the Introduction "introduces the concept of
Perception threshold that can be used for missing data representation", and the Conclusion
notes that "perception thresholds are primarily intended for unobserved historic flood
representation". **The paper also finds the B17C-recommended option (iv in dataset 1A) is not
the best-performing choice**, which cuts further against reading it as settled guidance.

Design correction: **15 BASE datasets plus 56 threshold variants**, not "15 artificially gapped
versions". Reference is the complete 1931–2016 annual-peak record (86 years) at HS Senta on the
Tisza. Gaps are one continuous block each at 1 year, 5%, 10%, 15% and three larger gaps around
1991, with A/B/C variants centring the gap on the minimum, maximum or average peak year; the 56
come from four lower-bound options with the upper bound at infinity. Percentage error is mostly
within ±5%, underestimated to −8.5% in datasets 2A-iv, 4A-iv and 4B-iv. CI widths are given
only qualitatively in text; the numbers are in image figures that could not be read.
An internal inconsistency in the source: the Table 1 period labels for datasets 5–7 do not
match the stated 12/17/23% gaps.

**And P5 has no magnitude-dependent probability model either.** Gaps are magnitude-dependent
only by construction (the A/B/C scenarios choose which years to drop by their peak), with no
stochastic mechanism.

### P3: year now read rather than inferred, but its load-bearing characterisation is UNVERIFIED

Bragato, P. L., BSSA 2004;94(4):1369-1378, doi 10.1785/012003083 — **the year is now read from
Crossref, the OGS repository record and the ISC catalogue, three agreeing metadata sources,
rather than inferred from the volume number.** The entry flags it as inferred.

**But the paper is still ABSTRACT ONLY, and the entry's characterisation of it is not
verified.** The OGS repository PDF returned a login page and GeoScienceWorld errored. The entry
says "the missingness probability is deliberately never modelled". That is **COULD NOT READ,
not NOT FOUND**: the methods were never opened. Worse for the entry's reading, the abstract
introduces "randomly truncated regression" for thresholds that change over time and says the
method "does not need to know which stations did not trigger" — which leaves open whether the
truncation point is modelled, and makes this prior's treatment of the missingness probability
MORE open rather than settled. The low-end direction of truncation is confirmed only as an
inference from how triggering works; no sentence stating it was read.

This does not disturb the verdict: P3 grounds nothing in the kill. It is cited to show the
method family is mature in a sibling field, and the entry should say that its internal
treatment of truncation probability is unread.

---

## UQ-20261018-07 — lithium isotope drift in the industrial pool (Rejected)

Five readers. **Verdict unchanged, but the rejection now rests on attack 4 ALONE.** Adversary 1
graded both attack 1 (Triviality) and attack 4 (Presupposition failure) Unresolved; adversary 2
graded both Partial and returned Provisional. Attack 1's ground falls on first-hand reading.
Attack 4's ground survives verification of its own source, so under the ledger's rule a ground
that survives its own sources has not fallen, and **no late Gate 4 is owed** — but the entry
must now say which ground carries the verdict.

### Attack 1's ground falls: the arithmetic is not short, because its inputs are not a route table

Desaulty et al. 2022 read at PDF level (nature.com/articles/s41467-022-31850-y.pdf, three
passes). Both adversaries judged limb (i) to be "short arithmetic over P1's published domain
IQRs and per-process Δ7Li". The domains are there. **The per-process values are not a table.**

What the paper actually publishes, per process, every figure a one-off:

1. hydroxide − spodumene concentrate = **+5.5‰**, one Keliber sample pair on the sulphate-free
   alkaline route (the Conclusion says "up to +5.5");
2. leaching, Li⁺ − β-concentrate = **+0.2 to +0.4‰**, a Rayleigh-MODEL estimate from the ore
   (+1.1), the analcime by-product (−0.9) and an 84–94% yield;
3. ion-exchange purification = **over +8‰ at 95% yield**, from the authors' own LABORATORY
   experiments;
4. SQM − Leverton = **+1.0 to +1.4‰**, measured products from Salar de Atacama brine;
5. hydroxide − carbonate = **+0.4 to +0.8‰**, read by the paper as no significant fractionation.

**There is no route-by-route table across the industry.** One measured sample pair, one model
estimate and one bench result do not constitute per-process fractionation factors for the
routes a production-weighted pool mean would need. A reader judging limb (i) trivial is
judging an arithmetic whose inputs the source does not supply.

The deposit domains hold, with a caveat the entry does not carry: **both are third quartiles
and probabilistic cut-offs, not bounds.** Hard-rock "below +6‰" is the third quartile of n=20
spodumenes (IQR −0.3 to +6.0, median +2.8) from West Kunlun and the Yilgarn and Pilbara
cratons. Brine "over +11.3‰" is the third quartile of n=103 Li-triangle salar brines (IQR +7.9
to +11.3, median +9.8). Between +6 and +11.3‰ the paper declares an "unknown origin domain",
and Chinese Qaidam brines (n=20) sit far higher (IQR +16.1 to +31.4). **A hard-rock domain
resting on the upper quartile of twenty samples is a thin input for a weighted pool mean.**

The quotation is a near-miss: **the paper says "the database", not "the reference database".**
Its sentence is "This approach is only possible if robust data on within-deposit variations are
available; moreover, the database must be active, as new orebodies of deposit are exploited,
new extraction sites are open, and new mining/refining companies enter the market."

Confirmed absences, which support the entry: **no time index and no production weighting**
anywhere (the 2020 country production and reserve shares in Fig. 1 are never combined with
δ7Li data), and **no δ7Li for recycled feedstock**. Also **the article number 4172 was not seen
in anything read** — the record gives vol. 13(1) with no article number — so that element of
the citation is unconfirmed. The hydroxide count differs between Methods (10) and the Fig. 4
caption (11), an inconsistency in the source.

### Attack 4's ground holds, and its timing decoration falls

Choi et al. 2019 read at full text (the nature.com article page). The entry's attack-4 ground
is that the index-case apportionment measured its own endmember, so substituting a global
production-weighted pool mean into it is invalid.

**What holds.** The figure is exactly as quoted: "their δ7Li values are low (14.5 ± 4.3‰, 1σ,
n = 6)", a mean across six WWTP effluent samples with 1σ as the spread across the six. And the
effluents are the authors' own: "The wastewater going in (influent) and going out (effluent) of
these plants was collected to estimate the impact of water treatment protocols on dissolved
Li." Nothing attributes any wastewater value to the literature. So the endmember is **locally
measured**, which is all the attack needs.

**What falls.** The entry says it is "a locally measured WWTP effluent value from the same July
2015 campaign". **The same-campaign part is not stated anywhere in the paper.** The July 2015
sentence covers the river transect only — "We collected 27 samples in July 2015 from 22 sites
along a 422 km downstream transect" — and the paper gives no collection date for the wastewater
and never says the six effluent samples are among the 27.

**And one finding cuts against the entry's framing while strengthening the attack's
conclusion.** The main text carries **no numeric anthropogenic fraction and no mixing
equation**: binary mixing is named only qualitatively ("Altogether Li concentration and Li
isotope composition show a binary mixing between a natural end-member … and an anthropogenic
end-member, consistent with isotopically light and strongly enriched wastewater"), and the text
calls the anthropogenic endmember "consistent with" wastewater rather than setting 14.5‰ as
the endmember used. Any quantitative mixing would be in the Supplementary Information, which
was not read. So Choi is a weaker "named propagation target" than the entry describes — which
makes limb (ii)'s want of an identified valid target **worse**, not better.

### The borrowed-endmember absence: a third sweep agrees, and all three are thin

A topic-first reader found **no δ7Li apportionment that borrows a literature or industry-average
anthropogenic endmember.** Every study it could open measured locally:

- Choi et al. 2019 — the authors' own effluent and materials.
- **New, and nobody had it: Millot, R. & Desaulty, A.-M., "The impact of waste waters in a
  small watershed: a view through Lithium isotopes", Goldschmidt 2016 abstract 2085** — the
  hospital WWTP effluent of l'Egoutier (~15 km², Loire basin near Orléans), measured on site,
  wastewater endmember about +4‰, river water about −0.5 ± 1‰ (n=7). A conference abstract, not
  a paper.
- Ryu, Choi, Shin & Vigier, EGU2020-1368 — the conference version of Choi 2019; no numeric
  endmember and no stated source.

**The absence is weakly graded and the entry should say so.** HAL-BRGM returned Anubis
"Access Denied" on both attempts, hiding the Ebro (hal-04077240) and Loire (hal-03113284,
hal-01281906) papers, which are the likeliest places for a borrowed endmember; a coal/CCR
lithium-isotope paper (hal-03699877) was seen only as a title; no forward-citation search of
Choi 2019 was run; and no compilation or review of anthropogenic δ7Li endmember values was
found that a later study could borrow from. The only literature-borrowed endmembers seen were
Li/Ca ≈ 1.5×10⁻⁵ and Li/Na = 3×10⁻⁵ in Liu-Lu et al. 2022 (Min Jiang, Front. Earth Sci.
10:838867), for NATURAL carbonate and evaporite sources — concentration ratios, not δ7Li, and
not anthropogenic.

### The element-swap disguise is now a real, identified paper — and still unread

The entry records the boron paper as "the same question with an element swap [that] could not
be read on either HAL route, so an element-swap disguise is an open risk rather than a verified
ground." **It is now identified in full, from the Crossref record:**

> Guinoiseau, D., Louvat, P., Paris, G., Chen, J.-B., Chetelat, B., Rocher, V., Guérin, S. &
> Gaillardet, J., "Are boron isotopes a reliable tracer of anthropogenic inputs to rivers over
> time?", **Science of the Total Environment 2018;626:1057-1068, doi
> 10.1016/j.scitotenv.2018.01.159**, PMID 29898514.

**The title alone poses the candidate's question in another element**, and that much is verified
from Crossref. Everything about its CONTENTS is not: the read level is RECORD/LANDING PAGE
ONLY. HAL sits behind Anubis, doi.org redirects to linkinghub.elsevier.com which returns empty,
ScienceDirect is robots-disallowed, PubMed errored, and Semantic Scholar reports no open-access
PDF. The abstract reached the reader only as a summariser's PARAPHRASE of a Semantic Scholar
record, and the reader flagged every figure in it as unverified: that the study compares Seine
River boron and δ11B for 1994–95 against 2006–12, that the urban δ11B endmember shifted from
about −10‰ to +1.5‰, that the authors attribute the shift mainly to reduced perborate in
detergents rather than treatment upgrades, and that urban sources supply an estimated 60–100%
of basin boron. **None of that may be quoted or relied on until the full text is read.**

So the entry's grading should change in one direction only: from "an element-swap disguise is
an open risk" to "an element-swap disguise is a named, dated, peer-reviewed paper whose TITLE
poses this question for boron, with its contents unread after seven routes". Both adversaries
graded attack 2 (Disguise) Resolved; neither had the citation. This does not reverse anything —
the entry is already Rejected — but it is the kind of finding that would have mattered had the
verdict gone the other way, and it belongs in the record.

### Qi 1997: confirmed, with three qualifications the entry should carry

Read at ABSTRACT ONLY, on the USGS record (pubs.usgs.gov/publication/70019577); the ACS page
and the DOI could not be fetched. Qi, H.P., Coplen, T.B., Wang, Q.Z. & Wang, Y., Anal. Chem.
1997;69(19):4076-4078, doi 10.1021/ac9704669 — citation confirmed.

- The δ7Li range is verbatim: "δ7Li, reported relative to L-SVEC lithium carbonate, ranged from
  −11 to +3013‰". The four-digit upper figure exists.
- **But only SEVEN of the 39 were artificially depleted**: "Isotopic analysis of 39 lithium
  reagents from several manufacturers indicates that seven were artificially depleted in 6Li."
  So the −11 to +3013‰ range spans ordinary and depleted reagents together. The entry's reading
  of lab reagents as "an enrichment-contaminated corner of the pool" is right in direction and
  overstated in degree.
- The paper's wording is "reagents" and "samples", never **"bottles"** as the entry has it, and
  it does not say which lithium compounds were analysed.
- **It derives no recommended atomic-weight interval.** It reports a measured range — "The
  atomic weight of lithium in analyzed reagents ranged from 6.939 to 6.996" — and its
  atomic-weight claim is that a 1993 IUPAC statement (6.94 to 6.99) "has been found to be
  incorrect", with two of the 39 exceeding 6.99.
- **The paper does not attribute the depletion to industrial enrichment.** The abstract says
  only "artificially depleted in 6Li" and "6Li-depleted reagents are now found on chemists'
  shelves"; "isotope separation", "nuclear" and "industrial" do not appear. The
  weapons/tritium explanation comes from secondary sources (a USGS isotopes page, IUPAC
  Chem. Int. 2010), not from this paper. The entry's presupposition narrative leans on
  enrichment entering the market; this prior does not supply that, at least not in its
  abstract.

---

## UQ-20261018-08 — realized fire outcomes by design route (Provisional)

Four readers. Verdict unchanged at Provisional, and **promotion item (ii) is NOT discharged**:
the paper it names could not be read at any level. Two of the entry's four priors are
mis-cited by author order, one prior's endpoint description is wrong, and one leg of the
strongest remaining objection is unverified while the other is confirmed and stronger than
described.

### P1 is MAIWORM et al., not Hammann et al. — and its central absence is confirmed at full text

Read at full text (the Springer PDF, every section from Abstract to References). **The authors
printed on the first page are Björn Maiworm, Moritz Goldner, Kilian Mannl and Claudius
Hammann, in that order. Hammann is the LAST author, so "Hammann et al." is a mis-citation and
the entry should read "Maiworm et al."** Fire Technology 2024;60(3):2041-2065, doi
10.1007/s10694-024-01560-6, confirmed.

**The central question is answered as the entry needs: the study records NO design route for
any building.** The variables it names and uses are building use (13 categories), building
class bc 1–5, age, height or storeys, floor of origin, smoke and fire limitation and paths of
spread, injuries and fatalities, self-rescue, extinguishing attempts, and intervention time.
The terms "deviation", "Sonderbau", "approval", "building permit" and "fire protection concept"
do not appear. **The honest limit, which the entry should carry: the questionnaire has 105
items and the paper does not list them all, so what is established is that the text records and
uses no design-route variable — not that no unlisted item touches it.** The Introduction's own
framing supports the gap: it says it "remains unclear" to what extent prescriptively designed
buildings meet legal acceptance criteria.

Sample confirmed with one refinement: 900 fires, 123 fire departments, **24.7%** of the German
population (the abstract rounds to about 25%), inspected after extinguishing — usually the next
day — on a 105-item questionnaire, data collected August 2016 to July 2022 and ongoing.

**Endpoint list corrections.** Reported endpoints are smoke spread beyond the unit (about half
of fires), fire spread beyond the unit (15.7%, n=141) and to other buildings (3.6%, n=32),
injured persons (37.5%, n=807), fatalities (6.6%, n=854) and self-rescue before fire-department
arrival (60.1%, n=898), all per incident. **"Multiple-casualty risk" is not a named endpoint**
— the nearest items are a count of simultaneous injuries and an F-N societal-risk curve for
Munich — and **"response time" is called "intervention time"** (arrival to start of
extinguishing, by floor).

The performance-based code appears only as a policy suggestion, which is the role the entry
gives it. Verbatim from the abstract: "authorities could in the future establish a
performance-based building code instead of the current prescriptive code."

An internal inconsistency in the source, single-sourced and worth flagging rather than relying
on: the text says Munich contributed 42% of records while Table 1 reportedly lists 481 of 900
(about 53%).

### P2 is MA & GERNAY, with a different title and a different endpoint set — and still unread

The entry has this as "Gernay & Ma, Engineering Structures 2025 … simulated time to failure
under a two-hour standard fire, plus whole-life cost", characterised from a Johns Hopkins press
release. **Every element of that needs correction except the journal and year.**

> **Chenzhi Ma and Thomas Gernay, "Economic impact of performance-based fire design of
> composite steel frame structures", Engineering Structures 2025;338:120542, doi
> 10.1016/j.engstruct.2025.120542.**

**Ma is the first author** (the press release lists Gernay first, which is where the entry's
order came from). The press-release headline is not the paper's title and the release gives no
title at all.

**The paper itself is COULD NOT READ.** ScienceDirect is robots-disallowed and no open copy
surfaced. What a reader could open instead: the JHU project pages and an October 2024 slide
deck from the same project. From those:

- The unit is modelled prototype buildings with steel-concrete composite floors, validated
  against NIST full-scale tests. **The archetype list is wrong: the deck gives 8 typologies
  across 4 occupancies — office, APARTMENT, HOTEL, hospital — and 130 prototypes, with an
  11-storey ~475,200 sq ft case study. "Multi-family" does not appear and "hotel" is missing
  from the entry's list.**
- **The endpoint description is wrong.** The deck's endpoints are damage states DS1–DS4 from
  slab deflection ratio, direct/indirect/human losses, CO₂, and 50-year present-value lifetime
  cost. **Time to failure appears only for the physical NIST tests** (prescriptive test
  integrity failure at about 90 min; the PBD test reached 120 min and was stopped at 142 min),
  **not as a simulated endpoint**, and the analysis is not framed around a two-hour fire as a
  design endpoint.
- The prescriptive-versus-performance comparison does exist: Design 1 prescriptive (all beams
  protected, 60 mm²/m reinforcement), Design 2 (all protected, 230 mm²/m), Design 3 PBD
  (central beam unprotected, 230 mm²/m, 24% of beams unprotected), with PBD costing more
  initially and less over 50 years, favourable above about 600 MJ/m² mean fire load, SFRM at
  0–1.20% of construction cost.

**On the question promotion item (ii) turns on — whether the paper has any realized-incident
arm — the answer is COULD NOT READ, not NOT FOUND.** The related material shows none: the
press release uses real data only to validate the model against NIST LAB tests, the project
page lists fire fragility functions and a construction cost database, and the deck's only
realized figures are national aggregates used as motivation (2022: ~500,000 fires, 2,860
deaths, $14.5bn losses; 2014 total cost of fire $57bn), with fire frequency 0.0276 per million
m² per year and fire load mean 780, SD 234 MJ/m² as model INPUTS. **So nothing contradicts the
entry's exclusion of P2, and nothing verifies it.** Promotion item (ii) stands open, and its
wording should now name the correct paper.

**A trap worth recording: the press release says the model was validated against real NIST fire
tests.** Those are laboratory experiments, not realized fires in occupied buildings. A reader
skimming the release could mistake them for an observed-outcomes arm, which is how a false
discharge of this promotion item would happen.

### The two-arm exposure: the VBA leg is confirmed and better than described; Shergold-Weir is unverified

**Document 2 is the VICTORIAN BUILDING AUTHORITY, not an auditor-general.** Precisely: VBA,
"Building Documentation Audit, Volume 2 – Class 1 & Volume 1 – Multi-Disciplinary Audit", audits
run March to August 2024, copyright 2025.

- **The string "DtS, performance solution, or a combination of these" is FOUND verbatim, in
  §1.6 (Audit process)** — and its context is better evidence than the entry claims, because it
  is the audit's own record field: "What compliance solution was used, e.g., DtS, performance
  solution, or a combination of these." **The approval-route field itself admits a combination,
  which is exactly what defeats a clean two-arm split.**
- **"13 Fire Engineering Reports (FERs) were reviewed which contained approximately 100
  Performance Solutions" is FOUND.** The denominator is not established: it is a count of
  performance solutions INSIDE 13 reports in an audit sample, not a count of buildings.
- Supporting, from the earlier VBA volumes: "in 12 of the audits a performance solution was
  used for at least one of the exits" (Jan–Jun 2022), "in 27 of the audits…" (2021), and a
  "mixture of performance solutions and DtS solutions". **Note that the "combination" wording
  and the 13/100 figures are in the 2024 volume only, not in the 2021 or 2022 volumes.**

**Document 1 is UNVERIFIED, and the way it failed is instructive.** Every industry.gov.au copy
of the Shergold-Weir report returned ROBOTS_DISALLOWED. A third-party Australian Institute of
Architects summary was opened instead, and its summariser "confirmed" the Recommendation 14
phrase **by echoing the prompt string back** — which is not a confirmation at all. So "the
circumstances in which performance solutions have been used and for what purpose" is
unverified, and Recommendation 14's full text was never obtained. The entry says both
adversaries found this "independently and from opened regulator sources"; for this leg that is
not established.

**The ground holds on the VBA leg alone**, which is the stronger of the two, and the entry's
objection should be rewritten to rest on it and to mark the Shergold-Weir phrase as unverified.

### P3 Lundin: the central finding holds; the endpoint and the cross-method variance claim do not

Read at PDF level but **PARTIALLY**: both the SBUF final-report PDF and the Lund thesis PDF
reach the summariser as only about 118,500 characters — front matter, summary, contents and
early chapters to roughly §2.1.1. §4.3.3, §5.4.1 (p.125) and Chapter 10 (pp.295-302) were
never reached, and lup.lub.lu.se is blocked to direct fetching.

- **It is a DOCTORAL thesis, 446 pages, defended 15 Dec 2005**: Johan Lundin, "Safety in Case
  of Fire – The Effect of Changing Regulations", Lund University, Dept of Fire Safety
  Engineering and Systems Safety, Report 1032, ISRN LUTVDG/TVBB--1032--SE, ISBN
  91-628-6679-6, supervisor Sven Erik Magnusson, opponent Ben Ale. The SBUF 11011 report
  carries the identical title as its running header, refers to itself as "this thesis" and has
  the same summary text, so the two are strongly indicated to be one document — **but that is
  not confirmed**, since the SBUF title page and project number were not seen and the Lund
  record does not mention SBUF.
- **Material confirmed**: documentation from 46 projects, plus an extensive risk analysis of one
  building class, which appears to be assembly halls.
- **The central finding is FOUND**, in the Summary: "One dilemma identified is that no
  unambiguous acceptance criteria have been stated in the building regulations." Probable
  verbatim (under 125 characters, seen once through a summariser). The work is in English, so
  no translation question arises.
- **The endpoint is NOT CONFIRMED.** The entry says "modelled occupant fatality risk (CFAST)
  and its dispersion". CFAST is certainly used — Appendix B compares CFAST with FDS, Appendix D
  gives a CFAST input file, Appendix E replaces CFAST with a response surface — but §4.3.3
  "Measures of risk" was never read, so **"occupant fatality risk", and its unit and
  denominator, must not be treated as confirmed.**
- **The variance claim needs correcting.** What was found is a statement about PRESCRIPTIVE
  design within one building class — prescriptive design "leads to great variation in risk
  level within a class of buildings" — **not a comparison of variance across design methods**,
  which is what the entry's "level and variance of modelled risk by design method" asserts. The
  numbers live in §5.4.1 and Chapter 10, neither reachable.
- Realized outcomes appear only as background in §2.1.1 (Swedish Rescue Services Agency
  statistics: "Each year, about 100 people die in Sweden as the result of fires in buildings";
  yearly fatalities by accident type 1991–2000; multi-fatality accidents in the 1970s and
  1990s), with the 1998 Göteborg dance-hall fire and the 2001 World Trade Center fires named as
  examples and not analysed. **No use of realized outcomes as endpoint or validation was seen,
  but the analysis chapters were unread, so that absence is not established.**

---

## UQ-20261018-09 — auditing pre-encounter small-body strength predictions (Rejected)

Five readers. Verdict unchanged: attack 4 (Presupposition failure) Unresolved from adversary 1,
fatal under the Gate 4 rule, with adversary 2 at Provisional. **The ground survives and is
strengthened; three decorations fall and the novelty grade narrows.**

### The ground holds, from three directions

The entry's attack-4 ground is that containment and a signed log error — the question's
distinctive estimand — are undefined for the reference standard that actually exists. Every
reader that could reach a text confirms it:

- **Rivkin et al. 2024: NO containment statement.** Three separate targeted prompts found none.
  What the paper calls "predictions for the strength of the Dimorphos surface and the size of
  the DART crater" are values obtained by matching simulated β to the DART OUTCOME — post-hoc
  calibration, not pre-encounter predictions tested against later data. Only
  calibration-consistency language appears.
- **Raducan et al. 2024: NO comparison with any pre-encounter prediction.** No β prediction, no
  Stickle 2022 or Raducan 2022 result, no signed error, no ratio. Agreement is stated
  qualitatively ("most consistent with observations"). Stickle et al. appears only as a
  background citation.
- **Groussin et al. 2019: no signed error, no remote-to-in-situ ratio, no containment
  statement** in §1 to the start of §3.3. (Unrelated ratios exist: E/σc ≈ 100–400, σc/σT ≈ 10
  assumed for brittle material.)
- **And the topic sweep found no pooled audit anywhere**: no study pools across bodies, and
  none reports a containment rate. More on what it did find below.

**Every strength figure in both Didymos papers is a one-sided upper bound**, which is the
entry's other load-bearing claim. Raducan: "less than a few pascals" (best fit), "probably
lower than ~50 Pa", "must not exceed ~500 Pa"; two-sided intervals exist only for other
quantities (β 2.2–4.9, ejecta mass 1.3–2.2×10⁷ kg, opening angle 115–139°, macroporosity 38±3%
and 34±4%), and bulk density is itself an upper bound (<2400 kg/m³). Rivkin's abstract figures
are confirmed verbatim: "Didymos has a surface cohesion ≤ 1 Pa and an interior cohesion of
∼10 Pa"; Dimorphos "has a surface cohesion of <0.9 Pa".

### Decoration 1, and the largest correction: the "~50–500 Pa sliding bound" does not exist

The entry says the in-situ bound is "less than a few Pa" with "that bound sliding to ~50-500 Pa
on assumed friction and porosity". **That misdescribes three distinct figures as one sliding
bound.**

- "less than a few pascals" is the best-fit cohesive strength.
- "probably lower than ~50 Pa" is a separate conditional result for a target with f = 0.4 and
  φ₀ = 45% (Fig. 1c,d), where f is varied 0.4–0.7 and φ₀ 35–65%, and the paper notes
  "f = 0.4 is a lower limit for geological materials".
- "must not exceed ~500 Pa" is a separate ceiling from the ejecta cone.

**The paper gives NO number for how much higher porosity or lower density would raise the
required cohesion.** What it says is directional only: "lower bulk densities (ρ_B < 2000 kg/m³)
or higher matrix porosities (φ₀ > 55%) would require higher cohesion to match the observations",
with no figure attached, and "Multiple possible combinations of cohesion, coefficient of
internal friction, and bulk density could result in the observed deflection." The dependence on
assumed friction and porosity is real and is the entry's point; the numeric range it is said to
slide across is not in the paper.

### Decoration 2: Rivkin's self-disqualification is narrower than the entry claims

The string is **FOUND verbatim**, inside a longer sentence in "Implications for Didymos and
Dimorphos surface ages": "We note these values for Y reflect input parameter values for the
strength scaling relationships, rather than a physically measured value of the strength of
Dimorphos at the DART impact site."

**But "these values" are the crater-scaling Y values 1300, 40 and 5 Pa, which correspond to
assumed DART crater diameters of 30, 60 and 80 m run through the scaling relationships. The
caveat does NOT apply to the headline <0.9 Pa surface cohesion**, which comes from a different
derivation (DART momentum-transfer modelling, with surface C ≤ 0.9 Pa for a 15 m layer and a
stronger interior Y > 500 Pa). The entry says the paper "disqualifies its own Dimorphos
numbers"; it disqualifies its crater-scaling Y inputs.

**The entry's conclusion survives on corrected ground**: the <0.9 Pa is still a model-derived
upper limit rather than a measurement, so the reference standard remains model-dependent and
one-sided — which is what attack 4 needs. Only the citation of the self-disqualification has to
be narrowed.

Related narrowing: the Y = 10 to 10⁵ Pa range is confirmed — "using cratering strengths from
Y=10-10⁵ Pa based on experimental data" — and it is explicitly an INPUT range for crater-scaling
used to compute surface ages, not a measurement, as the entry says. And the Bennu "good match"
is attributed to the **Factor-of-Safety METHOD** as applied at Bennu with TAG-derived estimates
as comparator — "This FS analysis provided a good match to surface cohesion estimates derived
from analyzing interactions between…" — not to a numerical cohesion match; no Bennu numeric
value was returned.

### Decoration 3: five quoted strings, three of them paraphrases

- Raducan, "less than a few Pa" — **the paper says "less than a few pascals"**. Two summariser
  passes disagreed on whether the abbreviation appears, so it is recorded as unverified rather
  than as a defect.
- Raducan, "similar to Ryugu and Bennu" — **not a string in the paper**. The nature.com abstract
  reads "like asteroids (162173) Ryugu and (101955) Bennu"; the arXiv version reads "similar to
  asteroids (162173) Ryugu and (101955) Bennu". The quoted form omits "asteroids" and the
  designations, and the published and preprint wordings may themselves differ.
- Groussin, "about 10 kPa or less" — **not in the paper**. Its wording is "the uniaxial
  compressive strength of the material is unlikely to exceed ~10 kPa", attributed to Biele et
  al. 2015.
- Groussin, compressive 3.5–12 kPa — verbatim: "a compressive strength between 3.5 kPa and 12
  kPa could be derived from +Y-foot data".
- Groussin, MUPUS "at least 2 MPa" — verbatim: "an uniaxial compressive strength of the
  material of at least 2 MPa is required to frustrate the penetration of MUPUS" (Spohn et al.
  2015). **It is a LOWER bound at the MUPUS penetration site, not a bulk value.**

### Groussin: one figure attributed to the wrong source, and the framing is the adversary's inference

**The "cohesion 1-2 Pa" in the entry's remote-derived set is Vincent et al. 2017's
cliff-collapse cohesion "at tens of metre scales globally" — not Groussin et al. 2015's
cohesion, which is 4–30 Pa for holding metre-sized boulders on slopes.** Attree 2018a's
overhangs give 0.02–1.02 Pa. The tensile 3–15 Pa and compressive 30–150 Pa at 5–30 m figures
are confirmed and are Groussin 2015's, reviewed in §3.1.2.1. The paper also gives an average
compressive strength of 2 kPa and a synthesis tensile range of typically 1.8–980 kPa.

**And the entry's framing of prior 3 needs two honest weakenings.** First, "the strength is a
scale dependent parameter" IS in the paper — "Finally, it is important to note that the strength
is a scale dependent parameter, i.e. the same material has a different strength at the
macroscopic and microscopic scale", followed by "The general trend is a decreasing of the
strength with increasing scale" — **but it sits in the general pre-Rosetta §3.1.1, and the paper
does not tie it to the remote-versus-in-situ gap in the sections that were read.** That link is
the adversary's inference. Second, **the paper does not set the remote and Philae numbers
against each other in §3.1.2 at all**; the comparison is implicit, through its layering and
bulk-versus-shallow discussion, so "compiles the remote and in-situ numbers side by side" is
too strong. What the abstract does say verbatim is "The properties of the top layer (the first
meter) are not representative of that of the bulk nucleus."

Read level: the arXiv PDF cut off mid-word ("Figu") in §3.3, so §4 and any conclusions are
unread. Journal details come from the arXiv record because the publisher page failed: Space
Science Reviews 215 (2019), doi 10.1007/s11214-019-0594-x, 66 pages, 13 figures.

### Rivkin is the LAST author

Crossref's ordered author list for 10.1038/s41467-024-50146-x begins Barnouin, then Ballouz,
Marchi, Vincent, Agrusa, Zhang … Raducan, Jutzi … **with Rivkin last.** The entry's "Rivkin,
Barnouin, Ballouz, Marchi, Vincent et al." misorders it. The paper read is 50146-x, not the
sibling 50147-w: Nature Communications 15:6202, published 30 July 2024.

Raducan's full citation, which the entry gives only as "Raducan et al. 2024 Nat Astron":
**"Physical properties of asteroid Dimorphos as derived from the DART impact", Nature Astronomy
2024;8(4):445-455, doi 10.1038/s41550-024-02200-3, arXiv:2403.00667**, published 26 Feb 2024,
open access.

### Walsh 2022 is now identified — and still abstract-only

The entry lists this among papers "NOT READ, grounding no grade". It is now cited properly:

> **Walsh, K.J., Ballouz, R.-L., Jawin, E.R., … Lauretta, D.S. (31 authors), "Near-zero cohesion
> and loose packing of Bennu's near subsurface revealed by spacecraft contact", Science Advances
> 2022;8(27):eabm6229, 7 July 2022, doi 10.1126/sciadv.abm6229.**

Read level ABSTRACT ONLY, from two record pages (Open University ORO and karmaka.de), both
paraphrased. All substantive questions — strength values, any pre-encounter comparison, any
containment statement, any design threshold, any pooling — are **COULD NOT READ, not NOT
FOUND.** Every science.org route errored.

Two notes for a later pass: **the Arizona repository handle that surfaces for this search is
the OTHER TAG paper** (Lauretta et al. 2022, sciadv.abm1018), so the wrong paper is easy to
open; and the Colorado repository lists a public full-text PDF (sciadv.abm6229.pdf) whose URL
was not exposed to the fetcher — an untried route. The 500–700 kg/m³ density figure sometimes
attached to this work is from abm1018, not from Walsh.

### TWO NEW PRIORS NOBODY HAD, and they narrow the novelty grade

The entry already grades novelty "Medium (search record incomplete)". The topic sweep makes the
incompleteness concrete: **the candidate's FORM exists twice more than the entry knew, in the
target field, as formal pre-encounter-versus-in-situ tables.**

1. **Lauretta, D.S. et al., "The unexpected surface of asteroid (101955) Bennu", Nature
   568 (2019).** Its **Table 1 is a "DRA scorecard"** listing pre-encounter against OSIRIS-REx
   values, each with 1σ, for about twenty properties. Sample rows: bulk density 1,260 ± 70 →
   1,190 ± 13 kg/m³; mass 7.8 ± 0.9 → 7.329 ± 0.009 ×10¹⁰ kg; thermal inertia 310 ± 70 → 350 ±
   20; largest boulder (10–20) ± 7.5 m → 30 × 58 m.
2. **arXiv:2502.14990, "The Dynamical State of the Didymos System before and after the DART
   Impact."** Its Table 2 gives pre-encounter against DART-era values: Didymos density 2170 ±
   350 (a single value pooled over both bodies) → 2790 ± 140 kg/m³, **+620 or +29%, outside the
   predicted 1σ**; Dimorphos 2170 ± 350 → 2400 ± 300, +230 or +11%, inside. System mass 5.55 ±
   0.42 → 5.3 ± 0.2 ×10¹¹ kg.

**What they do NOT do, which is why the candidate is not dead on them.** Neither has a
signed-error or ratio column — the containment judgements above are the reader's own arithmetic,
not the papers'. Neither reports a containment rate. Neither pools across independent bodies
(Didymos plus Dimorphos is one binary system). And **strength, cohesion and porosity appear in
neither as pre-encounter-versus-in-situ pairs**: Lauretta gives post-encounter statements only
(about 50% macroporosity from density and an assumed CM particle density, "low levels of
internal shear strength or cohesion"), with no pre-encounter value to compare.

**One finding that supports the candidate's significance while narrowing its novelty.**
Lauretta's own text says the rotation period, obliquity and pole are "within the 1σ
uncertainties of the ground-based values", and a footnote says "Most values are well within
1σ" — **but the reader's arithmetic on the paper's own table puts pole declination AND largest
boulder size OUTSIDE the pre-encounter 1σ.** The one existing scorecard misstates its own
containment. That is the gap the candidate points at, found inside the nearest prior.

Other items the sweep placed: Carry et al. 2012 (KOALA shape model validated at (21) Lutetia,
arXiv:1112.5944) — single body, shape and spin, with the abstract's "within 2%" on size against
about 7% (105 vs 98 km) in the body, which the reader could not reconcile; arXiv:2604.22182
(Itokawa, Ryugu, Bennu) — multi-body but qualitative, no pooled statistic, read to 100k of 118k
characters; Barnouin ISAS 2024 — narrative across Bennu, Ryugu and Dimorphos, abstract only,
Ryugu sample macroporosity about 20–30%; Wada et al. 2018 — a pre-arrival review with no audit.
Unopened leads for a later pass: arXiv:1502.04816 (asteroid models from multiple data sources)
and arXiv:2407.21386 (bulk densities of small bodies). Vocabularies never tried: "design
reference asteroid" as a query, planetary-defence/NEO characterisation uncertainty, Vesta/Dawn,
Eros, Phobos, "blind test" and "a priori", and Hayabusa2/Itokawa pre-arrival density
predictions.

---

## UQ-20261018-10 — smart-meter error under realistic waveform mixes (Provisional)

Seven readers. Verdict unchanged at Provisional. **Promotion item (i) is NOT discharged, but
the route is now found and the mechanical cause of six readers' failures is known.** Three of
the entry's supporting legs are demoted, four dates or identities are wrong, and one new
document supplies what the entry was citing a two-page explainer for.

### MeterEMI: the report exists at a known URL that the fetch proxy will not take

The entry's strongest remaining objection is that "the EMPIR 17NRM02 MeterEMI Final Publishable
Report has still not been read by anyone on this ledger, after five failed routes across three
agents". It is still unread after two more readers. **But the failure now has a cause rather
than a mystery: both the Final Publishable Report and the Final Publishable Summary ARE linked
from the EURAMET project page, and WebFetch rejects their download URLs with a proxy 403,
"url exceeds the maximum fetchable length". A curl attempt got a CONNECT tunnel 403.** That is
almost certainly what defeated the earlier readers too.

Untried short-link candidates, logged so the next pass starts there: `euramet.org/project-17nrm02`
and the `euramet-t.bs.ptb.de` mirror. Also unopened: the project's final results page, IEEE
Xplore, TechRxiv, the VSL 2023 slides and the final-workshop presentations. **A request to read
the agent proxy's own status page was refused by the permission classifier and was not
pursued** — recorded, not retried, and not counted as a check that ran.

**Coordinator correction: the project coordinator is NPL (Paul Wright), not VSL.**

**What one reader DID open at first hand is the document PRIOR 1 is actually cited as — the
interim Publishable Summary (M27, 2021,
`empir.npl.co.uk/meteremi/wp-content/uploads/sites/47/2021/01/01_Publishable_Summary_MeterEMI_M27-V2_MSU-approved.pdf`).**
It says a representative selection of EU smart meters "is currently being collected-together"
and that a comparison table "will result" from testing it — **at M27 a PLAN, not a delivered
table** (both phrases at paraphrase level; neither was verified verbatim). **And the scope is
not what the entry assumes: the summary's "representative selection" wording covers "meter
installations and electrical products", which is a different object from a selection of meter
MODELS.** So the entry's reading of MeterEMI as having promised a per-model comparison table
over EU meters is weaker than stated, and item (i) should say so.

Context figures in that summary, none of them MeterEMI measurements: about 200 million smart
meters rolling out in Europe, a €45 billion programme, €220 average per installation, and an
over-billing figure "by some 500%" under certain interference which **the summary attributes to
EARLIER studies, not to MeterEMI**.

Publication counts do not settle it either: the interim summary lists 11 papers and says 19
conference papers were presented, while the NPL project page later lists 29 peer-reviewed
items. **No paper body was read**, so whether any output carries a per-model table is NOT
ESTABLISHED in either direction. The two likeliest carriers, the CPEM 2020 and TEMC 2021
papers, are unread; the EMC Europe 2019 paper's abstract (Zenodo 3580436) says only "several
meters" with no count. **The largest number of distinct meter MODELS in any published MeterEMI
output could not be established at all.**

### arXiv:2601.16612 is a real paper about something else

The entry's presupposition P1 is supported in part by "arXiv 2601.16612 finds it across
manufacturers". **The identifier resolves, and to a genuine smart-meter paper — but not to this
one's subject.**

> Bracale, A. (Naples Parthenope), Janowicz, J., Kuwałek, P. & Wiczyński, G. (Poznań),
> **"Challenges in the Proper Metrological Verification of Smart Energy Meters"**, eess.SY /
> cs.SY, submitted 23 Jan 2026, v2 9 May 2026.

**Its stimulus is a synthesised two-component VOLTAGE signal** — u(t) = √2·U_c·cos(2πf_c t) +
u_i·cos(2πf_i t), with U_c = 230 V, f_c = 50 Hz and one added sub-, inter- or harmonic component
— applied to the meters' voltage inputs. **Its outputs are voltage-based power-quality
indicators: P_st flicker, THD and fundamental frequency.** There is **no current-channel or
distorted-current test and no mention of crest factor** (the paper's own "fc" is the
fundamental frequency in hertz, not a crest factor). The authors call the signal idealised.

It does find discrepancies across manufacturers: 3 manufacturers (EM1–EM3), 3 meters each = 9
meters, each three-phase meter tested per phase. Table I, band [0;100) Hz: P_st maximum absolute
error 15.27 (EM1), 55.17 (EM2), 35.92 (EM3); THD 11.95%, 11.42%, 11.25%; f_c 0.03, 0.03, 50.02
Hz. Models are not named and **the number of distinct models is not stated**; Table I is
per-anonymised-manufacturer, not per model. Reference instrument: a PQ BOX 100 class-A
analyser. No population or fleet figure.

**So this leg of P1 is demoted: the paper supports "errors across manufacturers under
non-ideal conditions", not "error under realistic or distorted CURRENT waveforms", which is the
candidate's exposure.** P1's other two legs — the VSL/UTwente deck and INRIM 2024 — are both
verified below.

### INRIM 2024 identified and read at full text: the contrast holds, the number is a range

> **Cultrera, A., Germito, G., Serazio, D., Galliana, F., Trinchera, B., Aprile, G., Chirulli,
> M. & Callegaro, L., "Active Energy Meters Tested in Realistic Non-Sinusoidal Conditions
> Recorded on the Field and Reproduced in Laboratory", Energies 2024;17(6):1403, pp. 1-12, doi
> 10.3390/en17061403** (INRIM; IRIS handle 11696/82244). Open-access PDF read in full.

**The central contrast is confirmed, and verbatim.** DUT-2 (Table 1: EN class B, three-phase,
I_max 6 A; the text gives its accuracy class as 1%) under the authors' own EN 50470 standardised
5th-harmonic test errs between about +0.0761% and −0.182%, "thus falling abundantly within its
accuracy class (1%)", and under sinusoidal conditions +0.002% to +0.253%. Under the reproduced
field conditions: **"Instead, the error e corresponding to the reproduced distorted conditions
is much larger, taking values between e = 24.35% and e = 25.11%."** Also verbatim: "Except for
one energy meter (DUT-2) even highly distorted conditions are measured within the accuracy
class."

Corrections the entry needs:

- **"+25%" is a RANGE, 24.35% to 25.11%**, not a point. The sign is positive (the meter
  over-registers), derived from the paper's own error definition rather than stated.
- **The paper contradicts itself on the headline**: the abstract says "unacceptable errors (up
  to 25%)" while the Conclusions say "errors up to 20% without warning to the user". The body
  gives 24.35–25.11%, so the Conclusions' 20% is inconsistent with the body.
- **"One of six" is right but "six" never appears in the paper** — the count comes from the DUT
  list in Table 1.
- **The waveform is a LABORATORY REPRODUCTION of a field recording, not a field measurement.**
  Voltage and current were recorded one September 2021 morning at the point of common coupling
  of a 50 kW photovoltaic self-production facility at an Italian small factory, with a ZERA
  portable reference wattmeter (model MT310), then reproduced on a phantom power generator by
  setting harmonic amplitudes and phases to the 40th, against a ZERA COM5003 reference.
  Conditions: three-phase, power factor about 0.23 capacitive, RMS currents 0.25–15 A.
- **The meters are ANONYMISED** (DUT-1 to DUT-6, with EN class, I_ref, I_max and phase count
  only), so this paper supports no per-MODEL comparison. DUT-3 to DUT-6 (single-phase DIN) are
  grouped, erring −0.461% to +0.656% under distorted conditions, with only DUT-5 plotted. There
  is no market count or population statistic anywhere, and the paper's explanation for DUT-2 is
  a hedged speculation that it is "a lower marked-price instrument".

### Eversource: the Z1.9 falsification stands, with one real weakening and one unsupported claim

The entry's own correction — that acceptance sampling CAN publish an error distribution, which
falsifies a claim in the Gate 2 record — **holds.** The filing is precisely identified: a cover
letter of 6 January 2022 from Public Service Company of New Hampshire d/b/a Eversource Energy
(Jessica Chiavara, Counsel) to Chair Daniel Goldner, **NH PUC docket DE 18-162 (DE, not IR)**,
enclosing "Sample Testing Program Summary – 2021" (dated 11/1/2021), recounting the 5 December
2018 waiver of Puc 305.03 that allowed ANSI/ASQ Z1.9-2003 sampling.

**The per-lot table is there**, with sample mean, s (lot standard-deviation estimate), Q_u, Q_l,
P_u and P_l (estimated percent nonconforming above and below the limits), P, M (maximum
allowable) and Pass/Fail, over six lots: Centron 476,038 (200 required / 201 tested; mean
100.001; s 0.0951; M 2.04); Centron Bridge 1P 54,697 (150/151; 100.054; 0.0604; 2.05); Centron
Bridge 3P 15,280 (100/104; 100.035; 0.0653; 2.18); a GE I-210 group 21,423 (100/105; 99.914;
0.0752; 2.18); other solid state 817 (35/40; 99.987; 0.0490; 2.66); electro-mechanical 117
(10/12; 99.944; 0.2720; 3.27). Limits 98–101, and 98–102 for lot 6.

**The weakening: every estimated percent nonconforming (P_u, P_l, P) is ZERO for all six
lots.** So the table publishes a mean and a sigma per lot and no spread of nonconformance
between lots, and **the report nowhere claims to publish an error distribution.** The entry's
"Z1.9 variables plans publish exactly that object annually, by model, from the asset register"
is therefore right in form and generous in substance: what is published here is two moments per
type group, with zero nonconformance throughout.

The quoted row checks out with one correction: **lot size 476,038 ✓, mean 100.001 ✓, s = 0.0951
✓, but n = 201 is the quantity actually TESTED — the Z1.9 plan size (code letter P) and the NH
PUC required size are both 200.** The sum of measurements is 20,100.13, consistent with the
mean. The unit is percent registration (weighted average accuracy) per sampled meter,
aggregated to the lot.

**The lot definition is partly corrected.** Lot size IS "based on the installed meter count for
each Lot as of 1/4/2021, when the samples lots were selected" ✓. **But the lots are TYPE groups,
and "model" and "build year" do not appear anywhere in the document, nor does "asset"** — the
source never says the lots were drawn from an asset register. The entry's "by model, kind and
build year" is not this document's scheme. (Build year IS a stratum in the Dutch scheme; see
below.)

**And one claim the entry makes is unsupported by its own source.** The entry's surviving
novelty rests on "the substituted stimulus (declared realistic high-crest-factor mixes vs
standard registration test points, which the same sources show are sinusoidal or
single-harmonic)". **Eversource names NO test points at all**: "light load", "full load",
"power factor", "harmonic", "sinusoidal", "test point" and "waveform" are all absent from the
document, whose only metric is "Weighted Average Accuracy" with no stated weighting or
test-point definition. It is a cover letter plus a one-page summary with no methods section, so
there is little room for such content to hide. That claim must be re-sourced or withdrawn.

### Netbeheer Nederland: both documents misdated, and the real statistics document is a third one

- **The "2024" Steekproefcontrole document is dated 6 July 2021.** Its footer reads "Kernteam
  Meetketen KV – 6 juli 2021", the string "2024" does not appear in its text, and the 2024 in
  its URL is the upload folder. It is a two-page consumer explainer with no technical content:
  the meter is checked with an "ijkkoffer" and the visit takes about 30 minutes.
- **Stratification is confirmed**, verbatim: "Alle gas- en elektriciteitsmeters zijn verdeeld in
  groepen op basis van soort, type en bouwjaar" — kind, type and BUILD YEAR. The word is
  "type", not "model". **"firmware" and "software" are both absent**, which confirms the entry's
  "firmware strata unevidenced".
- It publishes **conformity verdicts only**: populations are approved or rejected, and the
  Rijksinspectie Digitale Infrastructuur publishes the yearly list of rejected electricity
  meters ("publiceert jaarlijks de lijst met alle afgekeurde elektriciteitsmeters").
- **A NEW DOCUMENT nobody had, and it is the one the entry was citing the explainer for: Kiwa,
  "Statistische controle kWh-meters: Populatiebesluit controlejaar 2024", report GT-250023, 25
  March 2025, for Netbeheer Nederland.** It publishes per-POPULATION statistics — population
  size, outlier count, p/p_max, verdict, mean deviation and standard deviation per control
  point, sample sizes requested and delivered, failure counts — with populations defined by
  manufacturer, metercode, build/revision year, meter type (mechanical or electronic) and
  phase, "gebaseerd op het bouwjaar van de meters". Firmware is not a stratum there either.
  **And it gives the load points the entry wanted**: electronic meters at 0.5 A at cos φ 1, at
  I_ref at cos φ 1 and cos φ 0.5 inductive, and at 30 A at cos φ 1 and cos φ 0.5 inductive;
  mechanical at 10% and 100% I_b (single-phase) or 20% and 100% I_b (three-phase); acceptance
  limits in Tabel 4, class 2 ±4% for electronic; sampling per NEN ISO 3951-2 at AQL 6.5.
  **The WAVEFORM is never stated.** The scheme specifies current and power-factor points only,
  which implies a conventional clean reference — but that is an inference, not a statement, and
  only the first ~34 pages were read (Bijlage IV cut off).
- **The "2023" grid-operators' response is almost certainly from 2017.** The PDF copy sits at
  `westlandinfra.nl/wp-content/uploads/2023/11/`, but the text is undated and concerns late
  2015, all of 2016 and installation "tot en met 2020", and a Radar page of 9 October 2017
  carries Netbeheer Nederland's response to the same topic. Its title is "Toelichting voor
  consumenten", headed "Netbeheer Nederland: slimme energiemeters in huis correct en
  nauwkeurig".
- The figures are verbatim and slightly different from the entry's: **"Enkele tientallen cases
  (uit de meer dan 8 miljoen huishoudens) zijn ons toen voorgelegd"** — SEVERAL tens, not simply
  tens, and the 8 million is the base the cases are drawn from; a separate "bij 3 miljoen
  huishoudens" refers to meters already installed.
- **The response is not purely an assertion.** It rests on three things: individual review of
  the submitted cases ("In ieder van die gevallen zijn plausibele verklaringen gevonden: en de
  meter was correct"), an independent repeat of the University of Twente lab findings by Van
  Swinden Laboratorium which confirmed them ("een onafhankelijk onderzoek overgedaan – en dit
  bevestigde de resultaten"), and home testing over extended periods ("In deze gevallen testen
  we de meter bij mensen thuis en indien nodig over een langere tijdsperiode"). **The 79
  home-control-meter figure appears only on the Radar 2017 page — "In 79 gevallen is bij mensen
  thuis een controlemeter opgehangen" — not in the response PDF, where "controlemeter" is
  absent.** So "an assertion of absence in practice with no measurement design" is right about
  the design and wrong to imply no empirical basis at all.

### The VSL/UTwente deck: the selection method the entry's novelty rests on is NOT DOCUMENTED

> **Hartman, T. (University of Twente) & van den Brom, H. (VSL), "From Susceptible Static Energy
> Meters to Electromagnetic Compatible Energy Measurements"**, 37 slides, at
> `fhi.nl/app/uploads/sites/42/2023/11/VSL_EMC-ESD-event-2023-Static-electricity-meters.pdf`.
> Same title as Hartman's PhD thesis (University of Twente, 21 April 2023, doi
> 10.3990/1.9789036556033, which could not be read).

**Event correction: this is the "EMC-ESD event 2023" of 21 November 2023 at Hotel Vianen,
organised by KIVI's electrical-engineering department with FHI credited as registrar** — not
simply "an FHI deck". The deck itself names neither event nor date; both come from a KIVI page.

Confirmed:

- **"24 static energy meters"** on slide 11, with the sub-line **"representing the installed
  base of static energy meters throughout the Netherlands"** — the quoted string is verbatim.
- Reference and source: **"Reference: Yokogawa WT500"** and **"140-TMX AC Power Supply"**
  ("Ideal grid at 50 Hz, 230 V RMS"), with meter self-consumption compensated. The TEMC 2022
  paper independently names a Yokogawa WT500 at 0.1% power accuracy and a Pacific Power Smart
  Source 140-TMX.
- **"Impact study in the Netherlands based on statistics"** is on slide 35 verbatim, in a
  status-and-future list, **with no result, number, method or date** — confirming the entry's
  "unreported", and leaving it undecidable whether the study is planned, running or unpublished.

Corrections and one demotion:

- **">70 meters" is a separate programme status line on slide 35 ("Investigated and tested > 70
  meters"), and the deck never links it to the 24.** Whether the 24 are a subset of the 70 is
  not stated. The entry presents them as nested.
- **THE DEMOTION: how the meters were selected is NOT FOUND, in all 37 slides.** No sampling
  frame, no asset register, no probability sampling, no per-type counts, no source of the
  meters — only the assertion of representativeness quoted above. The TEMC 2022 paper likewise
  says its three meters represent "part of the installed base in Europe" without describing how
  they were chosen. **So the entry's novelty difference "vs PRIOR 2, lab convenience selection
  of types vs probability sample from a register" is an assertion on both sides: neither
  convenience nor probability sampling is documented.** The thesis may document it and could
  not be read, so absence from the deck is not evidence the thesis lacks it.
- **There are no per-specimen error magnitudes in the deck.** Slides 23 and 30 give a four-case
  table (S1–S4) with the SIGN only — rising edge below 90° negative, falling edge below 90°
  positive, rising edge above 90° positive, falling edge above 90° negative — and the "Error
  [W]" column is graphic, with no readable numbers. The mechanism is on slide 25 ("Simplified
  Pulse", "Differentiated", "Clipped", "Distorted current waveform after integration") and
  slide 35 ("The root-cause for Rogowski coil meter errors was found" → "Phase and di/dt"). The
  only quantified example is slide 16: a constant consumption of around 250 W dropping after a
  switch was connected, "Reaching negative values!" — one field case. The entry's "per-specimen
  conditional error" as PRIOR 2's estimand is therefore not supported by the deck.
- **No energy-weighted or population-weighted figure anywhere**, in the deck or the TEMC paper,
  which confirms the entry. The TEMC paper's "up to 2675%" is quoted from prior field studies
  and is not population-weighted.

---

## Read levels, by source

| Source | Entry | Read level reached |
|---|---|---|
| Blessing & Masters 2005 (10ACWE) | 06 | ABSTRACT ONLY (2 readers, ~14 further routes) |
| Simpson & Northrop, arXiv:2512.15429 | 06 | FULL TEXT |
| McVittie & Murphy, arXiv:2506.15970 | 06 | FULL TEXT (PDF) |
| Dokic et al. 2021 | 06 | PDF (figures are images, unread) |
| Bragato 2004 (BSSA) | 06 | ABSTRACT ONLY |
| Choi et al. 2019 | 07 | FULL TEXT (supplements unread) |
| Guinoiseau et al. 2018 (boron) | 07 | RECORD ONLY — identified, contents unread |
| Desaulty et al. 2022 | 07 | PDF (3 passes) |
| Qi et al. 1997 | 07 | ABSTRACT ONLY |
| Ma & Gernay 2025 | 08 | COULD NOT READ (project material only) |
| Maiworm et al. 2024 | 08 | FULL TEXT (PDF) |
| Shergold-Weir Rec 14 | 08 | COULD NOT READ (third-party summary only) |
| VBA Building Documentation Audit 2024 | 08 | PDF |
| Lundin 2005 | 08 | PDF, PARTIAL (~118.5k chars; §4.3.3, §5.4.1, ch.10 unread) |
| Raducan et al. 2024 | 09 | FULL TEXT |
| Barnouin … Rivkin et al. 2024 | 09 | FULL TEXT |
| Groussin et al. 2019 | 09 | PDF, PARTIAL (cuts off in §3.3) |
| Walsh et al. 2022 | 09 | ABSTRACT ONLY |
| Lauretta et al. 2019 | 09 | FULL TEXT (new prior) |
| arXiv:2502.14990 | 09 | FULL TEXT (new prior) |
| MeterEMI Final Publishable Report | 10 | COULD NOT READ (6 readers; cause now known) |
| MeterEMI Publishable Summary M27 | 10 | PDF |
| Cultrera et al. 2024 (INRIM) | 10 | FULL TEXT |
| arXiv:2601.16612 | 10 | FULL TEXT — and it is a different subject |
| Eversource DE 18-162 filing | 10 | PDF (garbled OCR, summariser-reconstructed fields) |
| Steekproefcontrole + Reactie netbeheerders | 10 | FULL TEXT (both); Kiwa Populatiebesluit PARTIAL |
| Hartman & van den Brom deck 2023 | 10 | PDF (some slides graphic-only) |

## Notes on this pass's own conduct

- **Two readers overran their fetch budget**: the Walsh reader used 8 fetches against 7, and the
  MeterEMI-deliverables reader used 9 against 7. Both self-reported. Neither affected a verdict,
  and the overrun is recorded rather than quietly kept.
- **One permission-classifier refusal**: the MeterEMI reader's request to read the agent proxy's
  status page was denied. It was not retried and is not counted as a check that ran.
- **Every brief was written from the entry's own full citation**, and no brief asked a narrower
  question than its entry claims. That rule exists because three briefs on the previous batch
  broke it and manufactured findings.
- **No reader put any personal identifier into a URL, query string, header or form.** The
  prohibition was in every preamble, naming Unpaywall as the API to skip.
- **Almost every read passed through a page summariser rather than raw text.** Where a long
  quotation's whole-string match rests on the summariser's report rather than on a short string
  checked alone, the section above says so. No quotation here is stitched from fragments.
