# C1 record (Gates 0–3)

**ID:** UQ-XXXX (placeholder)

**Domain(s):** Food studies / culinary anthropology; cultural evolution; macroecology (island biogeography); quantitative social science (scaling laws).

**Question (canonical, reformulated at Gate 1):** Across comparably delimited regions, does the count of distinct traditional dishes D scale with area A (and, separately, historical population N) as D = cA^z, and is z for islands systematically different from z for nested mainland subregions, after controlling for documentation effort?

- Original intake (kept for the record): "Does the number of distinct traditional dishes in a regional cuisine scale with the region's land area (or historical population) as a power law analogous to the species-area relationship, with isolated regions (islands) showing the steeper, island-like exponent?"
- Why reformulated: the original presupposes the direction ("steeper"). In ecology, isolated-island SARs are steeper than nested mainland SARs, but this varies with the sampling design. The reformulation asks whether z differs and in which direction, makes area and population separate predictors, and names documentation effort as a required control.

**Alternative formulations:**
1. Is there a "cuisine-area curve" D = cA^z, and what is z?
2. Do larger, less isolated regions accumulate dishes at the rates island biogeography predicts for species? (This is the immigration/extinction framing: trade contact acts like immigration and loss of dishes acts like extinction.)

**Motivating gap:** Cultural evolution has taken over ecological and statistical-physics models of cuisine: ingredient rank-frequency and copy-mutate models (Kinouchi et al. 2008), and Heaps/Zipf laws in recipe corpora (2026). Separately, "culture-area" relations have been studied for languages, and repertoire-size-vs-population relations for toolkits. We found no study that fits dish richness against regional area or population, or that compares islands with mainland regions.

**Presuppositions:**
1. Dishes can be individuated consistently across regions. *Contested*: lumping and splitting of variants is a real problem, comparable to the species-concept problem.
2. Regional units are comparable and either nested or isolated. *Defensible*: islands and administrative regions give both designs.
3. Dish counts are not dominated by documentation effort (cookbook output, tourism, the Wikipedia/TasteAtlas editor base). *Contested*: this is the main confound and must be controlled with a rarefaction / sampling-effort covariate.
4. "Traditional" is pinned to a time window or a registry (for example pre-1950 sources, EU PDO/PGI-type registries, national dish lists). *Needs stipulation.*
5. Area is a meaningful driver in its own right, distinct from population. *Open*: the question tests this rather than assuming it.

**What would count as an answer:** A dataset of dish counts for at least about 50 regions spanning several orders of magnitude of area, including true islands and nested mainland subregions, built from a standardized source and controlled for sampling effort (rarefied or estimated with Chao-type estimators). The fit is log D vs log A and log N. Required outputs:
- z with confidence intervals;
- a model comparison of power law vs logarithmic vs saturating forms;
- an island-vs-mainland interaction term on z.

A "yes" is a stable power-law fit with z outside the effort-only null. A "no" is no area effect once population and effort are included, or a better log/saturating fit. Either result settles the question.

**Novelty — queries run (18):**
1. `"cuisine" "species-area relationship" dishes area power law`: only ecology SAR papers; nothing on cuisine.
2. `number of dishes regional cuisine scales with population size`: cuisine network papers (flavor network, Chinese regional cuisines, culinary evolution models); none on dish count vs size.
3. `island biogeography cultural diversity recipes islands fewer dishes`: island food webs (ecological), a Faroese ballad "biocultural island" paper, language island biogeography blog; no cuisine.
4. `culinary evolution recipe ingredients copy-mutate model Kinouchi cuisine size`: Kinouchi 2008; Jain/Bagler Indian and world cuisine evolution models. All are about ingredient statistics, not region size.
5. `Kline Boyd 2010 population size predicts technological complexity Oceania islands toolkit`: Kline & Boyd 2010 (opened). Toolkit size vs island population, the closest structural analogue.
6. `language diversity area relationship species-area curve languages power law exponent`: Barbosa & Fontanari, culture-area relation in Axelrod's model (opened); languages C ∝ A^0.5.
7. `Heaps' law recipes number of ingredients grows with number of recipes cuisines`: 2026 "Universal statistical laws governing culinary design" (Heaps/Zipf vs corpus size; opened summary). Its only size variable is corpus size.
8. `gastronomy richness of dishes per country land area population cross-national analysis`: recipe-data bias and web culinary habits papers; no area fit.
9. `"cultural macroecology" food cuisine diversity area isolation`: European food cultures from Wikipedia, macroecology (Brown & Maurer), language latitudinal gradient; nothing on dish richness vs area.
10. `"dish diversity" OR "culinary diversity" island isolation population size cultural evolution`: Rapa Nui population structure and cultural diversity (artifacts), lizard diets; no cuisine.
11. `ethnobotany number of useful plants species-area relationship cultural knowledge area`: ethnobotanical knowledge structure papers; not on point.
12. `"traditional food products" count per region area Europe registered PDO number regression area population`: PDO statistics and Italian PDO counts by region; descriptive, no scaling fit.
13. `urban scaling number of distinct cuisines restaurants city population diversity`: Youn et al. 2014, urban business diversity (opened). Business types grow logarithmically with city population. Restaurants are mentioned only as a finer-resolution example. Also Schiff's restaurant-variety work (not opened).
14. `"cuisine-area" OR "recipe-area" OR "dish-area" relationship`: no such term exists. The top hit was Zhu et al. 2013 (opened), which has no area/population analysis.
15. `Hawaii Pacific islands cuisine fewer traditional dishes isolation founder effect food culture anthropology`: descriptive food-culture books only.
16. `regional cuisines China dishes number province area Zhu 2013 geography similarity`: Zhu et al. 2013 confirmed to study similarity vs distance and climate, not richness vs area.
17. `TasteAtlas number of dishes per country correlation population area analysis`: Wunderlich & Kohler 2022 national-dishes dataset (similarity and trade; not opened). Could serve as a data source; no area fit seen.
18. `Nettle linguistic diversity area relationship languages island size cultural species-area`: Nettle, *Linguistic Diversity* (1999). An established language-area/ecology literature.

Answer-seeking queries (1, 2, 12, 14, 17) found no published dish-vs-area fit.

**Novelty — nearest prior formulations (all opened unless noted):**
1. Barbosa, L.A. & Fontanari, J.F., "Culture-area relation in Axelrod's model for culture dissemination," arXiv:0902.1346 (2009). https://arxiv.org/pdf/0902.1346 . Treats the number of cultures vs area as a culture-area analogue of the SAR. Cites empirical languages-per-country data, C ∝ A^0.5±0.1.
2. Kline, M.A. & Boyd, R., "Population size predicts technological complexity in Oceania," Proc. R. Soc. B (2010). https://pmc.ncbi.nlm.nih.gov/articles/PMC2894932 . Number of marine foraging tool types vs log population and contact, across Oceanic islands.
3. Youn, H., Bettencourt, L.M.A., et al., "The systematic structure and predictability of urban business diversity," arXiv:1405.3202 (2014). https://ar5iv.arxiv.org/html/1405.3202 . Number of distinct business types vs city population, with an ecological "species" framing.
- Also relevant: Kinouchi et al., "The nonequilibrium nature of culinary evolution," arXiv:0802.4393 (2008, opened). This is the intake's anchor, but it covers only ingredient statistics within cookbooks.

**Novelty — how this differs from each:**
1. Barbosa & Fontanari: same culture-area idea, but the unit is whole cultures or languages, not items inside a cultural repertoire (dishes). Their work is a theoretical model, with no island/mainland contrast and no cuisine data. The candidate applies the culture-area idea at the repertoire level and to food. This neighbor is close in concept.
2. Kline & Boyd: same island setting and repertoire-size-vs-population logic, and the repertoire is even food-procurement tools. But the dependent variable is tool types, the predictor is population and contact rather than area, and there is no SAR power-law/z framing. The candidate swaps tools for dishes, adds area, and adds the nested-vs-isolated exponent contrast. This is the closest neighbor.
3. Youn et al.: diversity of types vs size in human systems, but the units are cities and business categories, the predictor is population, the fitted form is logarithmic, and food is mentioned only in passing. The candidate is about traditional (historical) cuisine at regional and island scale.

**Novelty confidence: Medium.** We found no formulation of dish richness vs area/population, or of an island-vs-mainland exponent, for cuisine. However, the general move ("cultural repertoire size scales with area/population, islands as test cases") is well established for languages (Nettle; Barbosa & Fontanari) and toolkits (Kline & Boyd). The candidate is therefore a new application of a known question-template, not a new question-type. It is not an asked-but-open problem, since no source poses it for cuisine.

**Significance:**
- **Consequence:**
  - *Yes, with a stable z:* dish repertoires behave like other cultural repertoires. This gives a quantitative baseline for "how many dishes should region X have", which lets researchers flag culinary hotspots and cold-spots, as SAR residuals are used in conservation.
  - *Island z differs:* this supports a contact/immigration mechanism (trade as immigration) over in-situ invention.
  - *No, once effort is controlled:* the apparent richness of famous cuisines is largely a documentation artefact. That matters for every corpus-based computational gastronomy study that compares cuisines by recipe counts.
- **Audience:**
  - Computational gastronomy (Bagler, Ahn et al. lineage), who would correct their cross-cuisine comparisons.
  - Cultural-evolution researchers (Henrich/Boyd population-size debate), who would gain an independent repertoire type to test the population-size hypothesis on.
  - Intangible-heritage bodies (UNESCO ICH, PDO/PGI registries), who would get an expected-richness baseline for prioritising documentation.
- **Fecundity:**
  - Does dish richness show a latitudinal gradient, beyond the known spice-climate link?
  - Is there culinary "relaxation" (dish loss) after an island loses trade contact?
  - Do dish-area exponents track language-area exponents in the same regions, meaning one shared cultural-diversity process?
  - What does turnover (beta diversity) of dishes with distance look like (a distance-decay curve)?
- **Anchoring:**
  - The contested population-size → cultural-complexity link (Kline & Boyd 2010 and its critics, e.g. Vaesen et al.).
  - The language-area exponent (~0.5) and whether it generalises to other cultural traits.
  - The known corpus-size dependence (Heaps' law) in recipe datasets, which is the effort confound this question must separate from a true area effect.

**Reason for silence (candidate mechanism):** *Disciplinary seam plus a units problem.* Macroecologists do not study food. Food scholars and anthropologists work qualitatively and resist counting "dishes" as species. Computational gastronomists work with ingredient networks inside large web corpora, whose regional labels are national and unbalanced. The basic unit ("a distinct traditional dish") has no agreed definition, and dish counts are visibly driven by documentation effort. So the obvious SAR transplant looks unmeasurable to the people who could measure it, and uninteresting to those who could define the unit.
