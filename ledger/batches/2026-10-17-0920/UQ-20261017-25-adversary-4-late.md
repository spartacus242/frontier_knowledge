# UQ-20261017-25 - adversary 4 (late, cold run)

Budget: 10 web searches (none refused), 5 fetches (1 returned only an Anubis access-denied page). Read only the record and entry; no adversary files.
Provenance tags: [OPENED-FULL-PAGE] = page text returned by fetch summariser (not verbatim PDF reading by me); [ABSTRACT] = abstract-level only; [TITLES] = search result titles only, nothing opened; [MINE] = my own reasoning/arithmetic, unsourced.

## Restated question
Take a set of dated, officially issued design numbers for wind, river discharge and wave height, each with a stated annual exceedance probability p. Count how often they were exceeded across all the site-years since each was issued, pool over sites with a stated dependence model, and report the ratio to p. Then split any gap into: (a) the old estimator's error (old method vs modern method on the same old data), (b) ordinary sampling uncertainty at issue, (c) real change in the climate since issue.

## Queries run (all web searches)
1. testing flood hazard maps against observed exceedances: observed vs expected number of gauges exceeding 100-year design flood -> [TITLES] USGS Iowa flood-profile summaries, EGU2016-13617, nothing on pooled scoring.
2. ex post evaluation of design wind speed map: anemometer exceedances of 50-year design speed since code issue -> [TITLES] Polimi airport-anemometer vs code comparison, Taiwan design wind speed, ASCE JSDEAG.0005399, South Africa strong winds mapping. Comparisons of code values to re-estimates; no count-vs-nominal seen (not opened).
3. snow load map 50-year exceeded since code issuance -> [TITLES] Turkish code snow-load evaluation, Structure magazine on roof collapse and codes. Not opened.
4. researchsquare rs-10798894 (lookup of an ID surfaced in query 1) -> nothing identifying; wasted.
5. forecast verification of return levels / prospective evaluation of FFA -> [TITLES] South African SDF evaluation, NR Kobierska FFA evaluation preprint (opened, below), EGU2009-5034.
6. are 100-year floods occurring more often than expected ... Bulletin 17B -> [TITLES] Zhao et al 2024 GRL frequency bias (opened via DOAJ), USGS record-length paper.
7. NOAA Atlas 14 tested against subsequent observations -> [TITLES] par.nsf.gov 10457531 Delaware rain-gage network vs Atlas 14 (opened, below), NRC items.
8. hazard map validation across hazards, observed exceedance Poisson consistency -> [TITLES] Italy seismic multi-site testing (PLOS ONE 2023), Mak & Schorlemmer 2016 (opened), Tasan 2014, Beauval 2008/2010. All seismic.
9. Atlas 14 Delaware rain gage frequency of exceedance -> [TITLES] same paper plus NWS HDSC single-event AEP reports.
10. FEMA 1% discharge retrospective check -> [TITLES] USGS SIR 2009-5108 (previously cleared by others; I did not open it), Colorado CWCB flood study pages.

## Fetches
A. publications.nr.no FFAevaluation (Kobierska) [OPENED-FULL-PAGE]: bootstrap resampling of 30-90 yr records, scored "against the full original record" ("The complete original flood data at each station was used for evaluation"), criteria KS, AD, Brier score on "predicted probability of the exceedance of a threshold", quantile score; no exceedance counts vs nominal; not out-of-sample for issued values. Evaluates estimators, not issued products.
B. pure.iiasa.ac.at/19959 - Access Denied (Anubis). Not read.
C. par.nsf.gov Delaware vs Atlas 14 [ABSTRACT]: compares a statewide mesonet to Atlas 14 10-yr values, reports Atlas 14 "underestimates the number and magnitude of extreme precipitation events" at 360-1440 min, closer agreement at 5-240 min; suggests climate change. Abstract gives no counting method or numbers.
D. Mak & Schorlemmer 2016 (GFZ PDF) [OPENED-FULL-PAGE via summariser]: four issued USGS NSHM vintages (1996, 2002, 2008, 2014) vs ground motions since 2000, return periods 10-400 yr, count of sites with at least one exceedance, Poisson-binomial 5-95% interval, declustering 25/50 km with 400 Monte Carlo samples (distances "fundamentally arbitrary"), power computed (~3x forecast at 400 yr now, ~2.2x with 30 yr). Attribution "partial and mostly qualitative". Does not address wind, flood or other non-seismic hazards.
E. DOAJ Zhao et al 2024 GRL [ABSTRACT]: estimating 100-yr flood frequency change from short records introduces a "frequency bias" that can exceed 100% for a 50-yr base period, shrinks with record length; "floods may exceed local defenses designed based on short historical records more often than expected, even without climate change."

## Eight attacks

### 1 Triviality
Objection: Part is known theory: a plug-in quantile from a short record is exceeded more often than nominal (Zhao 2024 abstract [ABSTRACT]; also my own recollection of classical predictive-vs-plug-in results [MINE]). So limb (b) and much of (a) could be computed by simulation in a paragraph and the sign predicted.
Best response: The theoretical sign does not give the realized pooled rate for actual issued values, which depends on the real estimators used, real record lengths, dependence, and measurement change; no source I opened reports that number for wind, flood or wave values. The seismic precedent needed multi-author papers and two decades (D).
Status: Partial. The theory part is sourced (E, abstract level); that the empirical number is not derivable is unevidenced.

### 2 Disguise
Objection: The estimand type is a named, executed genre: observed-vs-expected exceedance counts for dated issued hazard maps (D, opened; Tasan 2014 and Beauval titles seen in query 8 but not opened by me). It has also crossed to precipitation: the Delaware vs Atlas 14 study counts exceedances of the issued 10-yr depths (C, abstract only). And the estimator-evaluation neighbour (A) uses exceedance-indicator Brier scoring. So the rate limb is not new.
Best response: Across 10 searches in seismic, precipitation, snow-load, wind-code, FEMA, finance-free verification and estimator-evaluation vocabularies I found no study that scores issued wind speeds, 100-yr discharges or wave heights by pooled exceedance rate, and none, in any hazard, that attempts the (a)/(b)/(c) split with issue-era estimator re-run; D says attribution is "partial and mostly qualitative", C gives climate as an unquantified suggestion. Search tool returned titles only for most hits, so absence is "not seen", not "not present".
Status: Partial. Rate-limb genre is established (so novelty is in the corpus swap and the decomposition, not the statistic); the specific variant was not found but my coverage is thin on the unopened wind and snow hits (queries 2, 3 and USGS hits not opened). Not Unresolved because no source shows the wind/flood/wave variant itself done, and I cannot source the claim that a corpus swap alone is disqualifying.

### 3 Combinatorial novelty
Objection: Coverage testing x design values with the interface already built in seismology; hydrology only adds data entry.
Best response: Real interface problems differ: storm-footprint and river-network dependence (A-adjacent overdispersion evidence in Kjeldsen and Prosdocimi per record, not re-opened by me), averaging-time and rating-curve changes, and the issue-era estimator re-run, none of which seismic testing has. D's declustering is described by its authors as arbitrary, which is a gap the hydrological dependence structure could address.
Status: Partial. Differences are plausible but not shown to be more than engineering obstacles.

### 4 Presupposition failure
Objection: Presupposition 5 (estimator bias at issue separable from post-issue trend) is the load-bearing one. My own reasoning [MINE]: limb (a) as defined, issue-era estimator vs modern estimator on the same record, measures disagreement between two estimators, not bias against truth; the modern estimator also carries bias and parameter error, so (a) and (b) overlap and (a) is not identified without a truth benchmark. Seismic experience (D) shows attribution unresolved. Also presupposition 4 (nominal rate = frequency) fails for many issued values (record concedes).
Best response: The primary rate-ratio estimand does not depend on (5); only the decomposition does, and the question declares the structure. Restriction to values with explicit p handles (4) by classification. Limb (a) could be redefined as estimator difference, which is a well-defined quantity even if not "bias".
Status: Partial. My overlap argument is unsourced, so it cannot be Unresolved; the candidate's defence is plausible but unevidenced.

### 5 Vagueness
Objection: With few expected exceedances per site and dependence model choice, nearly any ratio can be absorbed; the null may be low power.
Best response: Pre-declared frame and model; power can be computed as D does. My own arithmetic [MINE]: expected exceedances = p x site-years, e.g. 1000 sites x 30 yr x 0.01 = 300 before dependence deflation; an effective sample size after clustering is unquantified.
Status: Partial.

### 6 Significance inflation
Objection: The seismic statistic ran for ~20 years with no sourced evidence that it changed an issued map (not checked by me; record says so); the Delaware authors only recommend faster Atlas 14 updates (C). Audience may already have what it needs, i.e. a revise-on-longer-record habit.
Best response: Zhao (E) shows the consequence (defences exceeded more often than expected) is live; a calibrated baseline would separate statistics from climate in the stationarity dispute; named bodies are plausible users.
Status: Partial. Demand is argued, not shown.

### 7 Reason for silence
Objection: Record's three mechanisms are undercut by seismic precedent (D: issuing-body maps tested, dependence handled) and by C (a precipitation-frequency product tested). So "nobody tests issued products" is not true, and silence needs a different mechanism.
Best response [MINE, unsourced]: Testing has stayed inside communities that treat the map as a forecast (earthquake hazard, CSEP-style); engineering code communities for wind, flood and waves treat values as design inputs, and the single-event AEP reports (NWS HDSC, USGS) are routine but not pooled. The silence is partial rather than total, and the credible reason is disciplinary habit, which the Delaware study shows is not absolute.
Status: Partial. The earlier mechanisms are weakened by sources I opened (D, C), the replacement is my reasoning.

### 8 Dissolution
Objection: The question splits into (i) pooled rate ratio, a known genre; (ii) limb (b), standard uncertainty propagation; (iii) limb (c), a trend estimate under assumptions; (iv) limb (a), an estimator comparison. Each is done or routine except the combination.
Best response: The question is the combined, pre-declared pipeline on a new corpus with a reconstructed issue-era estimator; the combination and the reconstruction are the work and have not been done in any source I opened.
Status: Partial.

## Refused objections
- I refuse to assert that the wind/flood/wave variant "has been done": I found no source showing it, and most search hits were not opened. I also refuse "a corpus swap is not a question": no source I opened states that rule, and it is the register's rule rather than evidence.
- I refuse to claim the seismic testing programme never changed a map; I did not check.
- I did not verify Tasan et al. 2014 or the Italy PLOS ONE paper myself.

## Verdict
Provisional. No attack is Unresolved. Novelty: Medium. The statistic and its dependence-aware testing are an established genre (seismic, opened) with at least one precipitation instance (abstract only); the decomposition and the wind/flood/wave corpus were not found. The weakest point is presupposition 5 / limb (a) identification, which is unevidenced either way.
