# C1 — Adversary 2 (second, harsher pass)

## Restatement (my own words, not the generator's)

Take a set of regions (true islands and nested chunks of mainland). For each, count how many distinct "traditional dishes" it has. Does that count grow with the region's land area (and/or its historical population) as a power law like the species–area curve, and is the exponent different for islands than for mainland pieces, once you have discounted the fact that some regions simply get written about more? Put more bluntly: is a cuisine's size an island-biogeography quantity?

Stripped of the SAR notation, this is: "does the size of a food repertoire on an island track the island's area, population and isolation?" That is how I searched.

## Queries run (29; none duplicates the record's 18)

| # | Query | Result |
|---|---|---|
| 1 | number of traditional dishes per country correlation population land area regression | Nothing on point; surfaced Wunderlich & Kohler 2022 national-dishes dataset (171 countries, 350 dishes; no count analysis). |
| 2 | "cultural trait" richness scales with area power law "species-area" analogue human culture repertoire size | Only Barbosa & Fontanari (already in record). |
| 3 | ethnobiological knowledge "number of species used" scales with population size community area power law | Caatinga medicinal-plant knowledge paper (HDI, forest loss; respondents as offset); no area scaling. |
| 4 | foodways folklore regional food item inventory island isolation smaller repertoire comparative study | Newfoundland foodways; qualitative only. |
| 5 | number of cheese varieties per country area population scaling | Trade stats only. |
| 6 | recipe database number of recipes per cuisine scales with population "allometric" OR "power law" OR "Heaps" | Known computational-gastronomy papers; corpus-size only. |
| 7 | Ark of Taste / "traditional food products" number per region determinants area population Italy | Descriptive PAT counts; no fit. |
| 8 | "island biogeography" applied to culture folklore tales motifs islands species-area | **Acerbi, Kendal & Tehrani 2017 (Evol. Hum. Behav.)**: number of folktale types vs population size (positive), motifs (negative). Population only, no area. |
| 9 | (German) Anzahl regionaler Gerichte Fläche Bevölkerung Zusammenhang kulinarische Vielfalt | Zhu 2013, flavour-region papers; nothing. |
| 10 | "cultural diversity" "species-area" humans religions languages ethnic groups power law | Language population–area papers (PLoS ONE 2012), Zanette; languages only. |
| 11 | Cámara-Leret medicinal plant knowledge languages number of plant services | Knowledge-per-language, not area. |
| 12 | (Italian) numero piatti tipici regionali superficie popolazione correlazione PAT per regione | Campania 569 PAT, Italy >5000; popular explanations, no regression. |
| 13 | restaurant menu item diversity scales with city population Schiff urban scaling cuisines | Schiff 2015 (restaurant cuisine variety vs city size, contemporary, not traditional). |
| 14 | "culinary biogeography" OR "gastronomic biogeography" OR "food biogeography" | Term unused; food-web biogeography only. |
| 15 | Wikipedia cuisine articles count per country correlates population GDP "number of dishes" | **Mining 31 European food cultures (arXiv 1411.4484)**: cuisine-article count ∝ Wikipedia edition size, ρ=0.82. **World Wide Dishes (arXiv 2406.09496)**: scraped dish counts per country track internet penetration. |
| 16 | dialect diversity area relationship number scales with area population isolation islands | Language-diversity models only. |
| 17 | Polynesia island food repertoire size number of dishes population contact isolation | Kline & Boyd (in record); no dishes. |
| 18 | useful plants island area "species-area" ethnobotany islands biocultural | **Łuczaj et al. 2019, J. Ethnobiol. Ethnomed. 15:18**; **Insular Pharmacopoeias (Front. Pharmacol. 2021)**; Cabo Verde useful plants. See Disguise. |
| 19 | (Japanese) 郷土料理 数 都道府県 面積 人口 相関 | Nothing (one hit was a demography thesis). |
| 20 | TasteAtlas dishes per country ranking analysis population area | Press rankings only. |
| 21 | "trait richness" ethnographic atlas D-PLACE area population "species-area" | D-PLACE description only. |
| 22 | "cultural evolution" "cuisine" island "population size" dishes isolation Tasmania analogy | Henrich 2004, Vaesen 2016, Collard et al. 2013 (toolkits of food-producing societies vs population: no effect). |
| 23 | (French) nombre de plats traditionnels par région superficie population inventaire patrimoine culinaire | The 24-volume CNAC Inventaire du patrimoine culinaire de la France exists (a usable standardized source); no analysis. |
| 24 | "gastronomic diversity" OR "culinary richness" index per region number of dishes determinants | Nothing. |
| 25 | Geographical Indications number per country determinants regression area population | Flinzberger et al. 2022 (638 EU PDOs correlated with 13 social-ecological indicators at NUTS-3); Firenze WP 2017 (GI index as treatment). Neither fits counts to area. |
| 26 | cumulative culture recipes repertoire size population size "number of recipes" | Derex/Durham group-size experiments; Collard 2013. |
| 27 | (extended) "species-area" OR "island biogeography" + "cuisine" OR "dishes" OR "recipes" | Nothing with the cuisine word. |
| 28 | Łuczaj Adriatic islands wild vegetables island area population isolation "island biogeography" | Confirmed; PMC6440087. |
| 29 | "wild food plants" number used "island area" OR "species-area" Mediterranean islands correlation | Same two Adriatic papers; nothing further. |

Pages opened: Acerbi 2017 (publication page); arXiv 2406.09496; arXiv 1411.4484; ar5iv 1610.08469; Wunderlich & Kohler 2022 data paper; Dissapore (Campania PAT); Cabo Verde useful plants (AGRIS); Łuczaj et al. 2019 (PDF and PMC); Insular Pharmacopoeias 2021 (Frontiers; results table not retrievable); Flinzberger 2022 (abstract); Firenze WP14/2017; Nanzan thesis (irrelevant).

## Key evidence the record missed

**Łuczaj, Jug-Dujaković, Dolina, Jeričević & Vitasović-Kosić (2019), "The ethnobotany and biogeography of wild vegetables in the Adriatic islands", J. Ethnobiol. Ethnomed. 15:18.** 15 largest Croatian islands, 15 informants each, 89 taxa. Dependent variable: number of wild vegetable taxa used per island (these are prepared as named dishes: mišanca / divlje zelje / gruda). Predictors: island area, population, distance from mainland, flora size. Framed explicitly through "the island biogeography theory". Results (Table 4): area rs=0.09 (p=0.75); population r=0.34 (p=0.21); isolation r=-0.15 (p=0.57); flora r=-0.26 (p=0.37). Conclusion: "cultural and historical factors ... are stronger"; inter-island differences attributed to speed of abandonment of the old tradition, local publications (documentation effort) and a phylloxera famine.

**"Insular Pharmacopoeias: Ethnobotanical Characteristics of Medicinal Plants Used on the Adriatic Islands" (Front. Pharmacol. 2021).** 29 islands; hypotheses 2 and 4 "directly test the island biogeography theory" (area, isolation); population and flora tested as indirect predictors. Same template, larger n.

**Cabo Verde useful plants (biogeographic and conservation perspective).** Number of useful taxa per island correlates with altitude, agricultural area and rural-population indicators, "not correlated with total population or socio-economic indicators such as GDP".

**Acerbi, Kendal & Tehrani 2017.** Folktale-type richness vs population size: positive for tale types, negative for motifs. Shows the "repertoire-size vs demography" template has already been run on a non-technological, narrative domain with mixed results.

**Documentation-effort evidence.** Wikipedia cuisine coverage ∝ edition size (ρ=0.82); World Wide Dishes: scraped dish counts per country rise with internet penetration, while the community-collected set has Nigeria 88 dishes vs USA 30, i.e. counts follow recruitment networks.

## Attack table

| # | Attack | Objection | Best response | Status |
|---|---|---|---|---|
| 1 | Triviality | The population-size → repertoire-size literature already predicts the answer: Collard 2013 (food-producing societies' toolkits: no population effect), Łuczaj 2019 (island food-plant repertoire: no area, isolation or population effect), Cabo Verde (no population effect), Acerbi 2017 (mixed). A page could say "expect null or weak, effort-dominated". | A prediction from neighbours is not an answer; no dish-level fit exists, and a null across 50 regions with effort control would itself be new. The record cannot be refuted from an armchair. | Resolved (not trivial), but the prior is now strongly toward null |
| 2 | Disguise | In ethnobotany vocabulary the question is already asked and answered: "does island area/isolation/population predict the size of an island's food-plant repertoire?" Two Adriatic studies (2019, n=15; 2021, n=29) test island biogeography theory on food/medicinal-plant repertoires explicitly and find nothing. The record's Gate 2 claim ("we found no study ... that compares islands") is false in the neighbouring vocabulary: the island half of the design has been run and reported null. In folklore vocabulary, Acerbi 2017 runs the same template on tale-type richness. | "Wild plant taxa are not dishes; a Pearson correlation is not a z estimate; there is no nested-mainland arm or Chao-type effort control." | **Unresolved.** The response amounts to "same template, different unit, more statistics", and the record itself concedes the unit (a distinct traditional dish) is undefined (Presupposition 1, contested). The only thing separating the candidate from an asked-and-null-answered question is the one term it cannot operationalize. Record admits it is "a new application of a known question-template"; the template has now been found applied to food. |
| 3 | Combinatorial novelty | SAR × cuisine. The interface "problem" is manufactured: the SAR exponent is meaningful in ecology because species are discrete, countable and sampled by standard protocols; none of that holds for dishes. | There is a genuine mechanism question (trade-as-immigration vs in-situ invention, Kline & Boyd's contact term), and dish loss on isolated islands is real. | Partial |
| 4 | Presupposition failure | (a) Assumes "traditional dishes" are a countable unit comparable across regions; (b) assumes any available dish source (TasteAtlas, Wikipedia, PAT/PDO registries, CNAC Inventaire) carries signal beyond documentation effort. Evidence: Wikipedia cuisine coverage ∝ edition size (ρ=0.82); scraped dish counts ∝ internet penetration; Campania 569 PAT reflects, among other things, regional registration activity. Chao-type estimators presuppose incidence sampling that registries do not have. | The record names both as contested and demands an effort covariate and stipulated time-window/registry. Łuczaj shows that with controlled fieldwork (15 informants per island, saturation checked on Krk) a comparable repertoire count is achievable. | Partial — acknowledged but not defused; the record offers no concrete individuation rule, and the effort covariate may be collinear with D itself |
| 5 | Vagueness | "Yes" = stable power law; "no" = no area effect given population and effort, or better log/saturating fit. But with n≈50, a loosely individuated unit and a confound that may explain most variance, the realistic outcome is an unstable z with wide CIs: neither branch fires and the question survives any dataset. | The falsification criteria are explicit and the record requires model comparison, not a bare fit. | Partial |
| 6 | Significance inflation | Computational gastronomists already know their counts are imbalanced and rebalance by subsampling (Kissing Cuisines samples 100 recipes per cuisine; World Wide Dishes documents the bias) — they do not compare cuisines by recipe count, so there is little to "correct". UNESCO/PDO bodies using an expected-richness baseline is fanciful. | Cultural-evolution researchers in the population-size debate would plausibly take another repertoire type, as they did folktales. | Partial |
| 7 | Reason for silence | Claimed mechanism: disciplinary seam plus units problem. But ethnobotanists sat on the same seam and asked the island-biogeography question about food repertoires in 2019 and 2021; the seam did not silence them. What is unasked is the *dish*-level version, and the only reason offered is that dishes cannot be counted — i.e. the dependent variable is not operationalizable. That explains why no one could answer, not why no one asked; it is a reason to suspect the question is ill-posed, not an incentive, instrument, bridge or taboo gap. Per gate rule, suspect novelty and return to Gate 2. | A genuinely standardized dish inventory (e.g. CNAC's 24-volume Inventaire, EU registries) is recent-ish and under-used, which is a weak "new data" mechanism. | **Unresolved** |
| 8 | Dissolution | On analysis "number of traditional dishes" reduces to "number of dish names present in some documentation corpus", so D becomes a function of corpus size, and the question collapses into Heaps' law plus "does documentation scale with area/population" (already known from Wikipedia and web-scrape studies). | If dishes are elicited by field protocol (Łuczaj-style) rather than scraped, D is not corpus size. | Partial |

## Recommended verdict

**Rejected** (Unresolved on attack 2; also Unresolved on 7, which under the gate rule sends the candidate back to Gate 2).

Grounds: the island-biogeography-of-food-repertoire question has been posed and tested in ethnobotany (Łuczaj et al. 2019; Insular Pharmacopoeias 2021; Cabo Verde useful plants), with explicit area/isolation/population predictors and null results. The record's novelty finding rested on searching cuisine vocabulary only. The candidate's residual novelty (dishes rather than plant taxa; a fitted z rather than a correlation; a nested-mainland arm) hangs on a unit the record admits it cannot define, and the reason-for-silence offered is that very indefinability.

If resurrected: re-run Gate 2 with the ethnobotany literature cited above; reframe as an *extension* of the Adriatic island tests (named dishes elicited by field protocol, islands plus matched mainland coastal comarcas, effort fixed by design rather than covariate). That would be Provisional at best, and its prior from the neighbours is null.
