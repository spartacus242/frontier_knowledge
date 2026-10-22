# VERIFY — within-enzyme between-report variance of log10 kcat

Checker: fresh context. Date 2026-10-22. Caps observed: 5 WebFetch (all used), 4 WebSearch (of 6).

## CLAIM

From UQ-20261022-02-entry.md line 12, closing sentence of the MANDATORY "already computed and published" check on limb (b):

> "On limb (b) the denominator itself has no published value."

The denominator in question: the variance (or SD) of log10 kcat across INDEPENDENT PUBLISHED REPORTS of the SAME enzyme — within-enzyme between-report dispersion. Not across-enzyme dispersion, not a predictor's error.

Supporting sentences in the same line, also checked: "DLKcat prints only its own predictor r.m.s.e. (1.06 log10, Fig. 2a); Chen & Nielsen print only agreement (R2 0.28 / 0.41 / 0.12); RealKcat prints a count of 1804 curation inconsistencies, not a measured between-report scatter".

Verdict in brief: the claim HOLDS for every source the entry names, and FAILS as the universal negative it is written as. A directly measured within-pair between-study dispersion of log10 kcat is published, in a paper the entry's own adversary #3 recorded surfacing and never opened on this point.

## READ LEVEL

| Source | Route | Read level |
|---|---|---|
| Gygli, "On the reproducibility of enzyme reactions and kinetic modelling", arXiv:2110.10419 | https://arxiv.org/pdf/2110.10419 (WebFetch) | FULL TEXT |
| RealKcat, bioRxiv 2025.02.10.637555 | https://www.biorxiv.org/content/10.1101/2025.02.10.637555v1.full (WebFetch) | FULL TEXT, front matter NOT served (title/authors/date absent from the served body) |
| Li et al. 2022, DLKcat, Nature Catalysis | https://web-test.research.chalmers.se/publication/530988/file/530988_Fulltext.pdf (WebFetch) | FULL TEXT of main article + Methods; supplementary not served. Repository mirror, "Published: xx xx xxxx" placeholder in served text |
| Chen & Nielsen 2021, PNAS | https://research.chalmers.se/publication/525387/file/525387_Fulltext.pdf (WebFetch) | FULL TEXT |
| Kroll et al. 2023, TurNuP, Nature Communications (NOT in the entry's source list; reached by search) | https://docserv.uni-duesseldorf.de/servlets/DerivateServlet/Derivate-73129 (WebFetch) | FULL TEXT of main article (Results + Discussion). Supplementary Fig. 4 NOT served |

nature.com was not attempted for DLKcat or TurNuP: the access routing handed to me states it fails both ways even for open access. Both were read at repository / institutional-server routes instead. No source in this check was COULD NOT READ.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Does any of the four print a within-enzyme between-report variance or SD of log10 kcat?

NO. None of the four prints such a number. Established source by source, unprimed (I searched each for the quantity before deciding what it supported):

**Gygli, arXiv:2110.10419.** Self-described type, as served: "This review discusses how reproducibility can be ensured for enzyme reactions..." — a REVIEW, sole author Gudrun Gygli (Institute for Biological Interfaces (IBG 1), KIT) as printed. No journal, DOI or date in the served front matter; the only dates are reference access dates ("Accessed: 15 October 2021"), so the year is unverified from front matter and is not relied on here. It prints NO numerical quantity on cross-publication kcat variability of any kind. The only numbers near the topic are its own Gre2p example and a simulation: a Gre2p K_m of 2.4 mM against the "around 1 mM" K_m previously reported by Burgahn et al. (2020), and a simulated K_m = 100 µM in the Figure 3 caption. Causes of variation are given qualitatively: "Enzyme reactions are highly dependent on reaction conditions." (Abstract); "It appears that ERPs are reported without all experimental conditions"; "Incompletely reported experimental conditions hinder all three of these levels."

**RealKcat, bioRxiv 2025.02.10.637555.** NO within-enzyme between-report dispersion statistic anywhere. What it prints instead, as served: "cross-checked 2,158 source articles to resolve 1804 inconsistencies in catalytic parameters" (Results, Dataset Curation), broken down in Methods as inaccuracies corrected in "K_M (788 instances), k_cat (618 instances)" plus 18 mutant and 240 substrate instances; a worked example in which *Lactobacillus pentosus* D-lactate dehydrogenase (Y52A) k_cat was changed from 0.7 to 102 s-1; and a duplicate rule that retains "maximum k_cat and minimum K_M". These are counts of curation corrections against source articles, i.e. database-entry-versus-source errors — not a dispersion across independent reports. Its printed metrics are classification accuracies on order-of-magnitude classes (test accuracy 88.72% kcat / 85.08% K_M; e-accuracy 94.72% / 97.16%; PafA mutant test accuracy 53% kcat / 93% K_M), unit of analysis individual enzyme–substrate records on random 80/10/10 splits, "not reported per enzyme or per publication".

**Li et al. 2022, DLKcat.** Front matter as served: Feiran Li, Le Yuan, Hongzhong Lu, Gang Li, Yu Chen, Martin K. M. Engqvist, Eduard J. Kerkhoven, Jens Nielsen, *Nature Catalysis* 5(8):662–672, 2022, DOI 10.1038/s41929-022-00798-z, "Accepted: 2 May 2022". NO within-enzyme between-report variance. Every dispersion number it prints is model error or sampling width: r.m.s.e. = 1.06 on the test set (Results, "Deep learning model performance", and Fig. 2a), with predictions "overall within one order of magnitude"; "the r.m.s.e. (which is 1 in the log10 scale)" used as mean and variance of a lognormal prior N(kcat, 1) in Methods, "Posterior-mean-ecGEM reconstruction"; phenotype r.m.s.e. < 1 on growth/exchange rates; proteome r.m.s.e. reduced "by 30%" (Fig. 5e). Fig. 4d–e and Supplementary Fig. 11d–e carry the axis label "kcat variance in log10 scale", but that is the variance of the Bayesian posterior over the model's own kcat parameters, and the text reports only COUNTS of enzyme–substrate pairs whose variance changed (e.g. 1,057 for *S. cerevisiae*), not numeric variances. On duplicates and variability, as served: "experimentally measured kcat values have considerable variability due to varying assay conditions" (Introduction); "redundant entries were filtered out to ensure a dataset of unique entries" (Results); "to help filter redundant entries obtained from different databases" (Methods). The text does not say how conflicting values for the same enzyme–substrate pair were aggregated beyond removing redundancy.

**Chen & Nielsen 2021.** Front matter as served: Yu Chen and Jens Nielsen, *Proceedings of the National Academy of Sciences of the United States of America*, 2021, vol. 118, no. 32, e2108391118, DOI 10.1073/pnas.2108391118, labelled "Systems Biology Brief Report" — a primary research report, not a review. NO variance, SD or spread of log10 kcat across independent sources for the same enzyme. It also contains NO sentence on how duplicate or conflicting kcat values were handled (no maximum, median or averaging described) and does not discuss disagreement between reported values; the only split described is "we divided the in vitro kcat dataset into two groups, i.e., heterologous and homologous expression." All its statistics are agreement statistics, dimensionless, on the log10 scale: kmax vs in vitro kcat R2 = 0.28 for *S. cerevisiae* (Fig. 1A, against R2 = 0.62 for *E. coli* quoted from its ref. 2); heterologous group "there was no correlation" with no number (Fig. 1B); homologous R2 = 0.41 (Fig. 1C); after removing reactions whose kmax could differ by more than one order of magnitude from flux variability, R2 = 0.27 (all) / 0.12 (heterologous) / 0.39 (homologous); using the second-largest kapp, 0.25 / 0.1 / 0.39. The number of enzymes behind each R2 is not stated in the text. No RMSE for kcat vs kapp; RMSE appears only in Fig. 2, on proteomics predictions.

So the entry's three characterisations quoted above are accurate, with one labelling caveat recorded under DEFECTS: the entry's "R2 0.28 / 0.41 / 0.12" mixes two of Chen & Nielsen's series (0.28 and 0.41 are the unfiltered Fig. 1A/1C values, 0.12 is the heterologous value AFTER the flux-variability filter, whose companion figures are 0.27 and 0.39).

### A SOURCE OUTSIDE THE ENTRY'S LIST DOES PRINT THE QUANTITY

Kroll, A., Rousset, Y., Hu, X.-P., Liebrand, N. A., & Lercher, M. J. (2023), "Turnover number predictions for kinetically uncharacterized enzymes using machine and deep learning", *Nature Communications* 14, Article 4139 (front matter as served at the docserv route; the served document identified itself as this published article, not as the thesis its search title suggested).

Printed, in the Discussion, as served:

> "the variance of kcat measurements for the same enzyme-reaction pairs between different studies can be high."

and, with the number:

> "an average deviation of 5.7-fold (mean deviation on log10-scale = 0.75) between two kcat measurements"

for the same enzyme-reaction pair. A second formulation is printed alongside it: comparing a single measurement against the geometric mean of all other measurements for the same pair gives a 3.3-fold average deviation, "mean deviation on log10-scale = 0.52". The Results carry a third, hedged, formulation with no number attached in the served main text — "substantial variance even between measurements for the same kcat value" — pointing to Supplementary Fig. 4, which this route did not serve. Both numbers are used as a benchmark against the model: TurNuP's own mean absolute deviation is 0.69 on the log10 scale (4.8-fold), test-set R2 = 0.44, MSE = 0.81 (log10 scale), Pearson r = 0.67, and the authors conclude that "using predictions calculated with the TurNuP model may lead to similar deviations and error rates" as performing experiments.

NAMING THE NUMBER, per the published-is-not-performed rule: 0.75 log10 units, mean deviation between two kcat measurements of the same enzyme-reaction pair from different studies, printed in a Discussion sentence (not a table), with 5.7-fold as its antilog; and 0.52 log10 units (3.3-fold) for one measurement against the geometric mean of the rest of that pair's measurements. The denominator (how many pairs) is NOT stated in the served main text — it is carried only by the unserved Supplementary Fig. 4.

Kroll et al. also print across-dataset variances — 1.07 for membrane-associated enzymes and 1.46 for the others — which describe the spread of kcat values ACROSS DIFFERENT ENZYMES in the dataset, not repeated measurement of one. No SD, CV or R2 between repeated measurements of the same kcat is printed.

### (b) The ~1.4 log units over ~130 enzymes

That figure appears in NONE of the four sources I read. It is not in Gygli (no numbers of that kind at all), not in RealKcat, not in DLKcat, not in Chen & Nielsen. The entry attributes it to PRIOR 2, Davidi & Milo, Curr Opin Biotechnol 2017;46:81–89, and records that adversaries #1 and #2 each established first-hand that it is the dispersion ACROSS roughly 130 different *E. coli* enzymes. I did not re-open Davidi & Milo — my last fetch went to the TurNuP route instead — so that attribution is UNVERIFIED BY ME and inherited, not confirmed here.

What I can add first-hand is a collision warning: there are now at least four numerically similar log10 figures in play attached to four different units, and three of them sit within 0.1 of each other.

| Number | Unit it is attached to | Source, as read here |
|---|---|---|
| ~1.4 log units | spread ACROSS ~130 different *E. coli* enzymes | Davidi & Milo (inherited, not re-read) |
| variance 1.46 (and 1.07) | spread ACROSS DIFFERENT ENZYMES in the TurNuP dataset (non-membrane / membrane-associated) | Kroll et al. 2023, read first-hand |
| r.m.s.e. 1.06 | a PREDICTOR'S test-set error over many different enzymes | Li et al. 2022, Fig. 2a, read first-hand |
| 0.75 (and 0.52) | WITHIN one enzyme-reaction pair, BETWEEN studies | Kroll et al. 2023, Discussion, read first-hand |

Only the last row is the quantity limb (b) needs. The first three are across-enzyme or across-model quantities and are silent on it.

### (c) The three phrases in Gygli — searched SEPARATELY

- "active site titration" — DOES NOT APPEAR.
- "active enzyme concentration" — DOES NOT APPEAR.
- "active fraction" — DOES NOT APPEAR. ("It does not use the term 'active fraction'.")

### (d) Attribution of kcat scatter to an active-fraction / incompetent-protein mechanism

- **Gygli** — NAMES the mechanism once, quantifies nothing. As served: "HES can indicate if inactive enzyme in present in the sample, which can lead to overestimation" (typo "in present" reproduced as served, not corrected). Read at its own grain: this sits inside a single sample's quality-control discussion, as a reason one measurement may be biased high, NOT as an explanation of scatter across publications. SDS-PAGE purity is discussed only for identifying contaminating proteins. No unit, endpoint, comparator or estimand attaches to it.
- **RealKcat** — none of purity, active fraction, active-site titration, inactive protein or active enzyme concentration appears. The nearest string, "effectively labeling them as catalytically inactive", is about in silico alanine mutants, not protein preparations.
- **DLKcat** — none of those terms appears. It attributes variability to assay conditions: "experimentally measured kcat values have considerable variability due to varying assay conditions", and notes "the overall majority of kcat values reported in BRENDA and SABIO-RK do not specify their assay conditions" (Methods) and "DLKcat did not consider the effect of environmental factors such as pH and temperature" (Discussion). PTMs are not mentioned.
- **Chen & Nielsen** — no attribution to purity, inactive protein, active fraction or titration, and none to assay conditions either. It attributes the heterologous-expression mismatch to missing PTMs: "This might be due to the lack of natural posttranslational modifications (PTMs) in the expression organism", "these PTMs could functionally affect enzyme activity (11)."
- **Kroll et al. 2023** — I did not ask it this question and have no fetch left; unchecked.

So on (d): exactly one of the four names an inactive-protein mechanism, once, as a single-sample QC caveat, and no source quantifies the attribution.

## REGIME

The regime of the only on-target published number, Kroll et al.'s 0.75:

- **Population**: enzyme-reaction pairs in a kcat dataset assembled from the kinetics databases (the served text names BRENDA/Sabio-RK-derived data for the model), restricted to pairs with more than one measurement. Taxonomically unrestricted — NOT the *E. coli* panel of the 1.4 figure, and not any pre-declared panel of titratable families.
- **Unit of analysis**: the enzyme-REACTION pair, i.e. enzyme plus reaction/substrate — NOT the enzyme. Two reports of the same enzyme on different substrates are different units here.
- **Estimand as printed**: a MEAN DEVIATION on the log10 scale, in two forms — pairwise between two measurements (0.75), and one measurement against the geometric mean of the rest (0.52). It is an average absolute discrepancy, not a variance and not a standard deviation, and it is not decomposed into components.
- **Comparator**: the model's own prediction error (0.69 log10, 4.8-fold), which is what the number was computed to benchmark. It was produced as a noise floor for a predictor, not as a metrological estimate of between-laboratory reproducibility.
- **Threshold / uncertainty**: no uncertainty interval, no n, no distribution printed in the served main text; the supporting Supplementary Fig. 4 was not served at this route.

Does the claim handed to me sit inside that regime? Partly, and the mismatch is a statistic-and-grain mismatch, not a topic mismatch. The claim concerns "the variance (or SD) of log10 kcat across independent published reports of the same enzyme". Kroll et al. supply a dispersion of log10 kcat across different studies of the same enzyme-reaction pair, which is the same quantity class and the same within-unit regime. They do NOT supply a variance or an SD, and they do not supply per-enzyme or per-route variance components, which is what limb (b) of the canonical question asks the denominator to be. Converting 0.75 to a variance is arithmetic NOBODY IN THE SOURCE PERFORMED: it needs a distributional assumption (for a normal, SD ~ 1.2533 x mean absolute deviation) and a further factor to go from the deviation between two measurements to the dispersion of one (the difference of two independent draws has sqrt(2) times the SD of one). I have not performed that conversion and the entry must not treat 0.75 as a published SD.

## DEFECTS FOUND

1. **The universal negative is false as written.** "On limb (b) the denominator itself has no published value" is contradicted by Kroll et al. 2023 *Nat Commun* 14:4139, which prints 0.75 log10 units (5.7-fold) as the mean deviation between two kcat measurements of the same enzyme-reaction pair from different studies, and 0.52 (3.3-fold) against the geometric mean of the others, both in the Discussion, both used as a noise floor against the model's 0.69. A directly measured within-unit between-study dispersion of log10 kcat IS published.

2. **A prior nobody opened on the point that mattered.** UQ-20261022-02-adversary-3.md line 19 records, for search N4, "Surfaced the RealKcat preprint (OPENED, full text) and the Nat Commun 2023 TurNuP supplementary PDFs" — and then reports a finding only about RealKcat. TurNuP was surfaced by the entry's own adversary and never read on the one question it answers. The entry nonetheless states the universal negative. This is the same failure mode the checker brief flags: the record's own named route carried the number.

3. **Statistic conflated with quantity, in the entry's favour.** The narrow form of the entry's claim survives — no source I read prints a VARIANCE or SD of within-enzyme between-report log10 kcat — but the entry does not distinguish "no published variance/SD" from "no published value of this dispersion", and asserts the broader form. A reader of the entry would conclude, wrongly, that nothing is published about the magnitude of between-report kcat scatter within an enzyme.

4. **Grain mismatch not recorded in either direction.** Kroll et al.'s unit is the enzyme-REACTION pair, not the enzyme, and their estimand is a pairwise mean deviation with no variance components and no per-route term. So the published number does NOT satisfy limb (b) as the canonical question defines it (which asks for a variance share with residual assigned to assay conditions under a declared exchangeability assumption). This is a GRANULARITY gap short of limb (b)'s grain, not an absence — and the entry currently records it as an absence. Both halves of that correction matter: the entry is too strong about the absence, and limb (b) remains un-answered because the published statistic is the wrong shape, not because nothing is published.

5. **Numerically adjacent figures attached to four different units.** 1.4 (across ~130 enzymes, Davidi & Milo), 1.46/1.07 (across different enzymes, Kroll et al.), 1.06 (predictor test error, DLKcat), 0.75/0.52 (within pair, between studies, Kroll et al.). The entry already corrected one scope transfer of the 1.4; the Kroll 1.46 is a fresh opportunity for exactly the same error and should be labelled before it is cited.

6. **"1.06 log10" is the entry's label, not the source's.** DLKcat's served text gives "r.m.s.e. 1.06" at Fig. 2a with the gloss "overall within one order of magnitude", and separately states "the r.m.s.e. (which is 1 in the log10 scale)" in Methods; its Eq. 3 defines r.m.s.e. on kcat values, not log10 values. The log10 reading of 1.06 is almost certainly right but is an inference from the adjacent Methods sentence, not a served label. Minor, and it does not change the entry's point, which is that 1.06 is a PREDICTOR error either way.

7. **The R2 triple is mixed across two series.** The entry's "R2 0.28 / 0.41 / 0.12" takes 0.28 and 0.41 from Chen & Nielsen's unfiltered comparison (Fig. 1A, 1C) and 0.12 from the post-flux-variability-filter heterologous value, whose companions are 0.27 and 0.39. The entry's use of them — that Chen & Nielsen print only agreement statistics — is unaffected, but the triple as printed is not one series. Also: Chen & Nielsen do not state the number of enzymes behind any R2, so none of these figures carries a denominator.

8. **No defect at RealKcat's 1804.** The entry's "a count of 1804 curation inconsistencies, not a measured between-report scatter" is exactly what the source says, and the figure is a count of corrections against 2,158 source articles. Confirmed.

9. **No defect at Gygli.** The entry's "Prior 1 DECLARES the mechanism as a kcat bias and measures nothing ... the phrases active site titration / active enzyme concentration / active fraction appear nowhere in it" is confirmed first-hand on all four counts, and the single served mechanism sentence is a within-sample QC caveat about overestimation, which is weaker than "declares the mechanism as a kcat bias" but not inconsistent with it.

## ROUTES THAT FAILED

- `curl -L https://arxiv.org/pdf/2110.10419` — "curl: (56) CONNECT tunnel failed, response 403". TOOL-SCOPED, as the brief predicted: the same URL served full text through WebFetch on the next call. No host block. The egress proxy was not probed.
- nature.com — NOT ATTEMPTED for either DLKcat (10.1038/s41929-022-00798-z) or TurNuP (10.1038/s41467-023-39840-4), on the established routing that it fails both ways. Both papers were read in full at other routes, so neither is COULD NOT READ.
- PubMed Central / Europe PMC — not attempted; PMCIDs appeared in search results (PMC10338564 for TurNuP) and were treated as identifiers only.
- Supplementary Fig. 4 of Kroll et al. 2023, which carries the n and the distribution behind the 0.75 — NOT SERVED at the docserv route and not fetched (fetch cap reached). The springernature ESM PDF surfaced in search (`media.springernature.com/.../41467_2023_39840_MOESM2_ESM.pdf`) and is the obvious next route for it. COULD NOT READ for lack of budget, not for lack of a route; and NOT FOUND does not apply to anything in this check.
- Davidi & Milo 2017 (`weizmann.elsevierpure.com/ws/files/111308597/rm_COBIOT_LessonsonEnzymeKinetics_AM2017.pdf`) surfaced in search and was NOT re-opened — fetch budget spent on TurNuP instead. The 1.4-over-~130-enzymes reading is therefore inherited from adversaries #1 and #2, not confirmed here.

## BEARING ON THE LEDGER ENTRY

The entry's sentence should be narrowed, and adversary #1's Unresolved attack 5 should be re-scoped rather than dropped.

**What stands.** Every source the entry names is correctly characterised. None of Gygli, RealKcat, DLKcat or Chen & Nielsen prints a within-enzyme between-report variance or SD of log10 kcat; none of them quantifies an active-fraction attribution; and the three active-site phrases are genuinely absent from Gygli. The entry's earlier correction of the 1.4 scope transfer was right and is reinforced here.

**What must change.** "On limb (b) the denominator itself has no published value" is too strong and should become something like: no source in the entry's corpus prints a within-enzyme between-report variance or SD of log10 kcat, and the nearest published value — Kroll et al. 2023, *Nat Commun* 14:4139, Discussion — is a mean deviation of 0.75 log10 units (5.7-fold) between two measurements of the same enzyme-REACTION pair from different studies, with 0.52 (3.3-fold) against the geometric mean of the rest, n not stated in the main text, computed as a noise floor for a predictor and not decomposed into per-enzyme or per-route components.

**Direction of the effect on the entry's verdict.** It cuts both ways and, on balance, I read it as weakening the Unresolved status of attack 5 while strengthening the entry's underlying well-posedness.

- Against attack 5: the attack said limb (b)'s denominator has no published value in either direction. It now has a published scalar of the right quantity in the right within-unit regime. Attack 5 in its stated form does not survive first-hand checking.
- For the entry: a published 0.75 log10 mean deviation gives limb (b) a usable anchor it did not have, so the candidate question becomes MORE answerable, not less. It also gives limb (b) a sharper target — the variance-budget share would now be computed against a known-magnitude scatter rather than an unmeasured one.
- Still missing, and this is the honest residue of attack 5: the published figure is the wrong SHAPE for limb (b). No variance, no SD, no per-enzyme or per-route components, no exchangeability statement, unit of analysis the enzyme-reaction pair rather than the enzyme, and no uncertainty on the 0.75. Limb (b)'s variance-components denominator remains unpublished as a variance decomposition. That is a granularity gap, and it should be recorded as one, replacing the absence claim.
- The MANDATORY "already computed and published" check on limb (b)'s SHARE is unaffected: nothing I read computes the share of between-report kcat variance attributable to an active fraction. Kroll et al. attribute their scatter to nothing in particular in the served text, DLKcat attributes it to assay conditions, Chen & Nielsen to missing PTMs, RealKcat to curation error, Gygli names inactive enzyme once without a number. Limb (b)'s share is still uncomputed.

**Cheapest next read, named for whoever picks this up.** `media.springernature.com/original/springer-static/esm/art%3A10.1038%2Fs41467-023-39840-4/MediaObjects/41467_2023_39840_MOESM2_ESM.pdf`, for Supplementary Fig. 4 of Kroll et al. 2023 — it should carry the n behind the 0.75 and the shape of the distribution, which is what converts the published mean deviation into (or rules it out as) a bound on limb (b)'s denominator. Second cheapest: re-open Davidi & Milo to put the inherited 1.4 attribution on a first-hand footing, since the entry leans on it.
