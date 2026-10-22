# VERIFY — ProteinGym substitutions: per-replicate fields and the "74 of 217" count

Checker: fresh-context, 2026-10-22. Budget used: 1 WebSearch, 3 WebFetch (cap 6 / 5).
Primary route that worked: `curl` against `raw.githubusercontent.com` (bypasses the summariser),
plus GitHub code search. Primary route that failed: the data host `marks.hms.harvard.edu`.

## CLAIM

The ledger candidate rests on four sub-claims about the ProteinGym substitutions branch:

(a) The substitutions benchmark contains **217 assays**.
(b) The curation table `reference_files/DMS_substitutions.csv` has **about 47 columns**, and
    **none** of them is a per-replicate field.
(c) **74 of 217 ingested score columns** are named as aggregates or fits (means, scores, fitted
    coefficients) rather than per-replicate measurements.
(d) For some assay, the **released** files carry **two or more independently selected replicate
    columns** from which a test-retest reliability could be computed.

Standing distinction applied throughout: *a column that exists in the upstream publication is not
a column shipped in ProteinGym's released files.*

## READ LEVEL

Mixed, and the parts must not be merged.

| Object | Read level | Route |
|---|---|---|
| `reference_files/DMS_substitutions.csv` | **FULL TEXT** (208,734 bytes, all 217 rows, all 46 columns) | `raw.githubusercontent.com/OATML-Markslab/ProteinGym/main/...`, HTTP 200 |
| `README.md` (repo) | **FULL TEXT** (26,106 bytes) | same host, HTTP 200 |
| `reference_files/reference_files_description.md` | **FULL TEXT** (4,332 bytes) | same host, HTTP 200 |
| Repo-wide occurrences of "replicate" | **FULL** (GitHub code search, `total_count: 2`) | `mcp__github__search_code` |
| `proteingym.org` | **FETCHED BUT EMPTY** — JavaScript shell; served text is a viewport meta tag and the title `ProteinGym` | WebFetch, 200 |
| **contents listing of `substitutions_raw_DMS.zip`** | **COULD NOT READ** | both routes refused — see ROUTES THAT FAILED |
| Processed per-assay DMS files inside `DMS_ProteinGym_substitutions.zip` | **COULD NOT READ as files**; their **schema read at FULL TEXT** from the README | README |

`COULD NOT READ` here is not `NOT FOUND`. The raw zip exists and is named in the repo's own
Resources table; it would not open at this proxy.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) 217 — CONFIRMED, and stated in one place

`README.md`, Overview section, single sentence (served verbatim, line 22):

> "Both the DMS assays and clinical variants are divided into 1) a substitution benchmark which
> currently consists of the experimental characterisation of ~2.7M missense variants across 217 DMS
> assays and 2,525 clinical proteins, and 2) an indel benchmark that includes ∼300k mutants across
> 74 DMS assays and 1,555 clinical proteins."

Independently re-derived from the artefact rather than from the prose: `DMS_substitutions.csv` has
**exactly 217 data rows** below the header and **217 distinct `DMS_id` values**. The two agree.

`proteingym.org` states no count — it served no prose at all.

**Note for the ledger, because it is the likely source of the disputed figure in (c): the number
74 does appear in this very sentence — as the assay count of the *indel* benchmark, not as
anything about score columns.**

### (b) Column count and per-replicate fields

The served header has **46 columns, not ~47**. Full list in the appendix below.

**There is no per-replicate field among them.** No column name contains `replicate`, `rep`,
`n_rep`, `n_replicates`, `rep1`, `rep2`, `sd`, `se`, `stderr`, `CI`, or any count-of-measurements
field. The table carries exactly one score-provenance triple per assay — `raw_DMS_phenotype_name`,
`raw_DMS_directionality`, `raw_DMS_mutant_column` — i.e. **one ingested score column per assay, by
construction of the schema**.

Corroboration independent of my own reading of the header: GitHub code search for `replicate`
across the whole repository returns `total_count: 2`, and neither hit is a field or a column:
one is prose in `assays.bib` about viruses replicating in host cells, the other is the *cell value*
`replicates_mean_brightness` inside `DMS_substitutions.csv`. There is no replicate-handling code in
ProteinGym at all.

`reference_files/reference_files_description.md` defines the provenance columns in the project's own
words:

> "- raw_DMS_phenotype_name (str): Name of the column in the raw DMS that we used as fitness score."

> "- raw_DMS_mutant_column (str): Name of the column in the raw DMS that indicates which mutants
> were assayed."

> "- raw_DMS_directionality (int): Sign of the correlation between the DMS_phenotype column values
> and protein fitness in the raw DMS files."

### (c) The "74" count — DOES NOT REPRODUCE; corrected to 96

**Column counted:** `raw_DMS_phenotype_name` (column 38 of 46). This is the right column: the
project itself defines it as "Name of the column in the raw DMS that we used as fitness score",
i.e. it *is* the ingested score column. Unit of counting: **one row per assay**, 217 rows.

**First correction, prior to any classification.** There are 217 assay *rows* but only **94
distinct** `raw_DMS_phenotype_name` *values*. So "217 ingested score columns" is not a count of
columns at all. Any statement of the form "N of 217 score columns" is already mixing two units.

**Count under an explicit, auditable criterion.** Word-stem match on the served value:
- aggregate stems: `mean`, `avg`, `average`, `ave`, `median`
- fit stems: `ddG_ML_float`, `coef`/`coeff`/`coefficient`, `linear`, `prediction`, `T50`, `stat`, `ddg`

| Criterion | distinct names | assay rows |
|---|---|---|
| aggregate stems only | 18 | **23** |
| fit stems only (ML/coef/linear/prediction/T50/stat/ddG) | 8 | **77** |
| **union: aggregate or fit** | **26** | **96 of 217** |
| union, excluding the 64 Tsuboyama `ddG_ML_float` rows | 25 | 32 |
| names matching *neither* | 68 | 121 |

**The answer is 96 of 217, not 74.** The single largest block is `ddG_ML_float`, which is the
ingested column for **64** assays (all `Tsuboyama2023_Dataset2_DatasetNN`, paired with
`raw_DMS_mutant_column = mut_type`, 64 rows) — a maximum-likelihood **fitted** ΔΔG, not a
measurement. The explicit aggregates are:

```
  3 | avg_score                          3 | replicates_mean_brightness
  2 | sel_coeff_mean                     1 | mean
  1 | mean_prediction                    1 | mean_on
  1 | mean_medianBrightness_per_aaseq    1 | score.ave
  1 | Avg Growth - WT TYMS               1 | Kan18_avg
  1 | DOX_Average                        1 | average_growth
  1 | Functional Score Weighted Mean     1 | H_GFP_mean_scaled
  1 | L_GFP_mean_scaled                  1 | avg_MYC
  1 | bind_avg                           1 | expr_avg
```
and the explicit fits, besides `ddG_ML_float`:
```
  2 | coef        (CASP3_HUMAN_Roychowdhury_2020, CASP7_HUMAN_Roychowdhury_2020)
  2 | linear      (BLAT_ECOLX_Firnberg_2014, PABP_YEAST_Melamed_2013)
  1 | Selection Coefficient            1 | selection_coefficient
  1 | PlusLon_selection_coefficient    1 | ddG_stat  (BLAT_ECOLX_Deng_2012)
  1 | T50         (ESTA_BACSU_Nutschel_2020)
  1 | mean_prediction (A0A247D711_LISMN_Stadelmann_2021)
```
One match was rejected as a false positive and is excluded from the 96: `0.031ug_mL_MEM_37C`,
where `mL` is a volume unit, not maximum likelihood.

**No criterion I tested yields 74.** The nearest values any defensible rule produced were 76
(distinct names *not* matching the aggregate-only stems), 77 (fit stems, assay rows) and 96
(the union). The figure 74 is almost certainly the README's indel-benchmark assay count, carried
across into a sentence about substitution score columns.

The claim's *direction* nevertheless survives and strengthens: **more** of the ingested score
columns are named as aggregates or fits than the claim asserted — 96, not 74 — and once names
like `score`, `fitness`, `DMS_score`, `screenscore`, `Function Score`, `nscore`, `funcScore`,
`log2_score` are also read as derived summaries rather than raw measurements, essentially none of
the 217 is a per-replicate measurement. I report 96 as the count under explicit stems, and flag
that the looser reading the claim's own parenthesis invites ("for example means, scores, fitted
coefficients" — **scores**) would push the count far past 96 toward ~217, which is a third,
different number. The claim needs its criterion stated, not just its total.

### (d) Two independently selected replicate columns — NONE FOUND at this read level

**The processed released files cannot support a test-retest reliability.** `README.md` states their
complete schema (served verbatim):

> "Each processed file in each benchmark corresponds to a single DMS assay or clinical protein, and
> contains the following variables:
> - mutant (str): describes the set of substitutions to apply on the reference sequence to obtain
> the mutated sequence ...
> - mutated_sequence (str): represents the full amino acid sequence for the mutated protein.
> - DMS_score (float): corresponds to the experimental measurement in the DMS assay. Across all
> assays, the higher the DMS_score value, the higher the fitness of the mutated protein. ...
> - DMS_score_bin (int): indicates whether the DMS_score is above the fitness cutoff ..."

Four variables, **one scalar `DMS_score` per variant**. There is no second score column, no
replicate index, no variance, no read count. For the branch that *is* the benchmark — the one every
model is scored against — the answer is a flat no, and it is documented, not inferred.

**The only place ProteinGym ingests more than one score column from one raw file is condition
pairs, never replicates.** 217 assays draw on 193 distinct `raw_DMS_filename` values. Eleven raw
files feed more than one assay, and in every case the second column is a *different phenotype,
gate or treatment*:

```
CP2C9_HUMAN_Amorosi_2021.csv    -> 'abundance_score'            / 'activity_score'
VKOR1_HUMAN_Chiasson_2020.csv   -> 'abundance_score'            / 'activity_score'
SPIKE_SARS2_Starr_2020.csv      -> 'bind_avg'                   / 'expr_avg'
KCNE1_HUMAN_Muhammad_2023.csv   -> 'TrafScore'                  / 'funcScore'
Figure_2.xlsx                   -> 'activity fitness'           / 'expression fitness'
543963_file04.xlsx              -> 'GFP_score'                  / 'SM73_1_score'
P53_HUMAN_Giacomelli_2018.csv   -> 'A549_p53NULL_Etoposide_Z-score' / 'A549_p53NULL_Nutlin-3_Z-score'
                                   / 'A549_p53WT_Nutlin-3_Z-score'
(blank raw filename)            -> 'H_GFP_mean_scaled'          / 'L_GFP_mean_scaled'   [Li_2019 high/low gate]
HXK4_HUMAN_Gersing_2022.csv     -> 'score' (activity)           / 'score' (abundance)
kras_fitness.xlsx               -> 'fitness' (abundance)        / 'fitness' (binding-DARPin_K55)
41587_2021_1201_MOESM3_ESM.xlsx -> 'Function Score' x3          [three cell lines / genes]
```
Abundance against activity is a discriminant-validity comparison, not a reliability one. A high
expression gate against a low expression gate is two different selections. These are **not**
independently selected replicates of one measurement, and a correlation between them is not a
test-retest coefficient.

**For the raw zip: COULD NOT READ.** I cannot say whether `substitutions_raw_DMS.zip` carries
per-replicate columns for any assay, because the archive would not open at either route. Two
observations bound what is at stake:

1. Some ingested column names *announce* that replicates existed upstream and were collapsed before
   ProteinGym read them — `replicates_mean_brightness` (3 assays, Somermeyer 2022 GFP),
   `sel_coeff_mean` (2), `Functional Score Weighted Mean` (1), `mean_medianBrightness_per_aaseq` (1).
   ProteinGym ingests the mean. Whether the per-replicate columns travel alongside it inside the
   raw zip is exactly the unread question. **A name that says "mean of replicates" is evidence the
   replicates existed, not evidence they shipped.**
2. **13 of 217 assays have an empty `raw_DMS_filename`** — `ACE2_HUMAN_Chan_2020`,
   `B2L11_HUMAN_Dutta_2010_binding-Mcl-1`, `CBS_HUMAN_Sun_2020`, `CCR5_HUMAN_Gill_2023`,
   `HEM3_HUMAN_Loggerenberg_2023`, `HSP82_YEAST_Cote-Hammarlof_2020_growth-H2O2`,
   `KCNJ2_MOUSE_Coyote-Maestas_2022_function`, `KCNJ2_MOUSE_Coyote-Maestas_2022_surface`,
   `Q53Z42_HUMAN_McShan_2019_binding-TAPBPR`, `Q53Z42_HUMAN_McShan_2019_expression`,
   `Q837P5_ENTFA_Meier_2023`, `RPC1_LAMBD_Li_2019_high-expression`,
   `RPC1_LAMBD_Li_2019_low-expression`. For these the released curation table does not name the raw
   source file at all, while still naming a phenotype column. That provenance gap is readable from
   the served CSV and does not depend on opening the zip.

So: **found none** at the read level reached, with the raw-archive branch explicitly unread rather
than negative.

## REGIME

The regime in which this source establishes what it establishes:

- **Population / unit of analysis.** 217 deep mutational scanning *assays* (rows of
  `DMS_substitutions.csv`); within each assay, one row per *variant* (~2.7M missense variants in
  total). The unit of the curation table is the assay; the unit of the processed data file is the
  variant. **Neither unit is the measurement or the replicate.** ProteinGym has no replicate-level
  object anywhere in its released schema.
- **Endpoint / estimand.** `DMS_score`: one scalar per variant, sign-normalised so that higher is
  fitter (`raw_DMS_directionality`), plus `DMS_score_bin` against a per-assay cutoff
  (`DMS_binarization_cutoff`, method `manual` or `median`). The estimand ProteinGym is built to
  serve is the **rank correlation between a model's prediction and that one scalar**, per assay.
  Test-retest reliability of the assay itself is outside the designed estimand.
- **Comparator.** Model score against `DMS_score`. There is no within-assay comparator.
- **Instrument / threshold.** Heterogeneous by construction: `selection_assay` and `selection_type`
  vary across the 217 (Growth, FACS, Activity, cDNA display proteolysis, ...). `coarse_selection_type`
  bins them (Stability, Activity, OrganismalFitness, ...). This is a **granularity** classification
  of assay type, not of measurement replication.
- **Versioning.** `ProteinGym_version` is `1` for 132 assays and `0.1` for 85. Latest release per
  the README is `v1.3`. The 46-column header and 217 rows I read are `main` as of 2026-10-22.

**Does the claim sit inside this regime?** Sub-claims (a) and (b) do, and are answerable from the
served artefact. Sub-claim (c) does, and is answerable — but its number is wrong. Sub-claim (d)
sits **partly outside**: for the *processed benchmark branch* it is answerable and the answer is no;
for the *raw archive branch* it is inside the regime but the artefact did not open, so the source is
**silent**, which is neither support nor refutation.

## DEFECTS FOUND

1. **Column count off by one.** The claim says "about 47 columns". The served header has **46**.
   The hedge "about" absorbs this, but the ledger should state 46, since an exact count is available.
2. **The "74" does not reproduce, and collides with a different number in the same README.** My
   count on `raw_DMS_phenotype_name` under explicit aggregate/fit stems is **96 of 217 assay rows**
   (23 aggregate, 77 fit, union 96). 74 is the README's **indel**-benchmark assay count
   ("an indel benchmark that includes ∼300k mutants across 74 DMS assays"). This looks like a
   number transplanted across benchmarks. **Direction of the error favours the claim's thesis**:
   the true count is larger, not smaller.
3. **Unit confusion in the claim's own phrasing.** "74 of 217 ingested score columns" treats 217 as
   a count of columns. There are 217 *assay rows* and only **94 distinct** ingested column names.
4. **The claim's criterion is unstated and its own example list is self-inconsistent.** Its
   parenthesis offers "means, scores, fitted coefficients" — but counting `score`-family names as
   aggregates would push the figure from 96 toward ~217. The claim cannot be scored without naming
   the rule. I have named mine.
5. **Documentation does not match the served header** (a defect in the source, not the claim).
   `reference_files_description.md` documents only 27 of the 46 served columns, and two of those
   under names the CSV does not use: it says `DMS_binarization_cutoff_ProteinGym` where the header
   says `DMS_binarization_cutoff`, and `MSA_N_eff_L` where the header says `MSA_Neff_L`. Nineteen
   served columns are undocumented, including `jo`, which — read against the data — holds the
   assay's **DOI** (e.g. `10.1038/s41586-023-06328-6` for the Tsuboyama rows), i.e. an apparently
   truncated or mislabelled header.
6. **One substitutions row points at an indels file.** `raw_DMS_filename` for one substitutions
   assay is `MS_BL_BB_indels_processed_data.tsv`. Flagged as served; I did not chase it.
7. **A near-miss I avoided.** `replicates_mean_brightness` is a *cell value* in
   `raw_DMS_phenotype_name`, not a column name. It is the only string in the entire repository that
   could be mistaken for a per-replicate field, and it is the opposite — a field whose name states
   that the replicates were averaged away before ProteinGym read it. Anyone grepping the repo for
   "replicate" will hit it; it must not be reported as a per-replicate column.
8. **PUBLISHED IS NOT PERFORMED, applied to the gap itself.** ProteinGym *defines* a provenance
   trail (`raw_DMS_filename`, `raw_DMS_phenotype_name`, `raw_DMS_directionality`) and *names* a
   binarization method per assay. It **nowhere measures, reports or audits** the reliability,
   replicate count, or measurement error of any of the 217 assays. There is no column, figure,
   table, notebook or sentence in the repository that prints such a quantity. The classification it
   does ship (`selection_assay`, `selection_type`, `coarse_selection_type`) stops well short of the
   grain the candidate question asks about — a **granularity** gap, not an absence of classification.
9. **Silence is not prohibition.** Nothing in ProteinGym forbids a reliability analysis or claims
   one is unnecessary. The documentation simply does not address replication. I report the absence
   of the quantity, not an assertion by the project that it does not matter.

## ROUTES THAT FAILED

1. `curl -sSI https://marks.hms.harvard.edu/proteingym/ProteinGym_v1.3/substitutions_raw_DMS.zip`
   → `curl: (56) CONNECT tunnel failed, response 403` / `HTTP/1.1 403 Forbidden`. Per the routing
   brief a curl 403 here is tool-scoped, so I escalated to WebFetch rather than concluding a host
   block.
2. `WebFetch` on the same zip URL → `Not fetched: ... failed at its site (client_error), and
   nothing of the page was retrieved.`
3. `WebFetch https://marks.hms.harvard.edu/proteingym/ProteinGym_v1.3/` (directory index) → same
   `client_error`. No index is served.
4. `mcp__github__get_file_contents` on `OATML-Markslab/ProteinGym` → `Access denied: repository
   "oatml-markslab/proteingym" is not configured for this session. Allowed repositories:
   spartacus242/frontier_knowledge.` Worked around *within policy* by using
   `raw.githubusercontent.com` (an explicitly sanctioned route) and `mcp__github__search_code`
   (which is not repo-scoped). No repository was added to the session.
5. `WebFetch https://www.proteingym.org/` → HTTP 200 but no content: a JavaScript shell whose served
   text is a viewport meta tag and the title `ProteinGym`. **FETCHED BUT EMPTY**, not blocked.
6. Range-request reading of the zip's central directory was *considered* and **not attempted**:
   with CONNECT refused to the host there was nothing to range over, and the brief directs me to
   record a refusal rather than work around it. I did not probe the egress proxy.

Not attempted by design: no personal identifier was placed in any URL, query string, header or
form; Unpaywall was skipped entirely.

## BEARING ON THE LEDGER ENTRY

**The candidate question is measurable, and three of its four sub-claims are now verified
first-hand from served artefacts. One figure must be corrected and one sub-claim must be
downgraded from "no" to "unread".**

- **Measurability: YES, at the curation-table level.** The earlier reader's "unverified" mark can be
  lifted for (a), (b) and (c). `DMS_substitutions.csv` opens cleanly at
  `raw.githubusercontent.com` and gives exact, re-derivable numbers: 217 assays, 46 columns, 94
  distinct ingested score-column names, zero per-replicate fields.
- **Correction required to the entry.** Replace **74 of 217** with **96 of 217 assay rows**, and
  state the criterion (explicit aggregate or fit word-stems on `raw_DMS_phenotype_name`). Note in
  the entry that 74 is the indel benchmark's assay count, so that the number is not reintroduced.
  Replace "about 47 columns" with **46**. Replace "217 ingested score columns" with "217 assay rows
  drawing on 94 distinct ingested column names".
- **The entry's core gap claim holds and gets stronger.** ProteinGym ships **one scalar per
  variant** (`mutant`, `mutated_sequence`, `DMS_score`, `DMS_score_bin`) and **no replicate-level
  object anywhere** — not in the processed files, not in the curation table, not in the code. The
  repository contains no replicate handling at all (`replicate` appears twice repo-wide, neither a
  field). So the measurement-reliability of the 217 assays is **not auditable from the benchmark as
  released**, and every model ranking computed on it inherits an unquantified ceiling.
- **Downgrade (d) from a negative to an unread.** For the processed branch, a firm no, documented.
  For `substitutions_raw_DMS.zip`, **COULD NOT READ** — both routes refused. The entry must not
  claim the raw archive lacks replicate columns. It is unexamined here. **A prior nobody opened is
  not prior art**: before this entry asserts anything about the raw archive, someone must open it
  from a route where `marks.hms.harvard.edu` resolves, and read the actual per-file headers.
- **Concrete next step that would close the gap.** Download
  `https://marks.hms.harvard.edu/proteingym/ProteinGym_v1.3/substitutions_raw_DMS.zip` (500MB
  unzipped) and read the headers of the four files whose ingested column name already announces
  collapsed replicates — the Somermeyer 2022 GFP pair (`replicates_mean_brightness`), the Fernandes
  2016 pair (`sel_coeff_mean`), and `Functional Score Weighted Mean`. If per-replicate columns
  travel with the mean in those files, a test-retest coefficient is computable for at least those
  assays and the question becomes answerable rather than merely well-posed. The 13 assays with a
  blank `raw_DMS_filename` cannot be chased even then, and that gap is readable today.
- **Scope warning to carry forward.** ProteinGym's designed estimand is a per-assay rank
  correlation between model score and one scalar. Reliability of the assay is outside that regime.
  A reliability figure derived from upstream publications is **the upstream study's** measurement,
  not ProteinGym's, and must not be attributed to the benchmark. Likewise, any aggregate or ratio
  computed from the numbers above (a percentage, "roughly half", a per-category share) is **the
  ledger's arithmetic**: ProteinGym prints none of it.

## APPENDIX — served listings

### The 46 column names of reference_files/DMS_substitutions.csv, as served (header row, in order)

```
 1. DMS_index
 2. DMS_id
 3. DMS_filename
 4. UniProt_ID
 5. taxon
 6. source_organism
 7. target_seq
 8. seq_len
 9. includes_multiple_mutants
10. DMS_total_number_mutants
11. DMS_number_single_mutants
12. DMS_number_multiple_mutants
13. DMS_binarization_cutoff
14. DMS_binarization_method
15. first_author
16. title
17. year
18. jo
19. region_mutated
20. molecule_name
21. selection_assay
22. selection_type
23. MSA_filename
24. MSA_start
25. MSA_end
26. MSA_len
27. MSA_bitscore
28. MSA_theta
29. MSA_num_seqs
30. MSA_perc_cov
31. MSA_num_cov
32. MSA_N_eff
33. MSA_Neff_L
34. MSA_Neff_L_category
35. MSA_num_significant
36. MSA_num_significant_L
37. raw_DMS_filename
38. raw_DMS_phenotype_name
39. raw_DMS_directionality
40. raw_DMS_mutant_column
41. weight_file_name
42. pdb_file
43. pdb_range
44. ProteinGym_version
45. raw_mut_offset
46. coarse_selection_type
```

### All 94 distinct values of raw_DMS_phenotype_name, as served (assay-rows | value | my label)

```
 64 | 'ddG_ML_float'                           |  FIT
 25 | 'score'                                  | 
 14 | 'fitness'                                | 
  4 | 'DMS_score'                              | 
  4 | 'log_fitness_by_syn_mut_fitness'         | 
  4 | 'screenscore'                            | 
  3 | 'avg_score'                              | AGG
  3 | 'Function Score'                         | 
  3 | 'replicates_mean_brightness'             | AGG
  2 | 'abundance_score'                        | 
  2 | 'activity_score'                         | 
  2 | 'coef'                                   |  FIT
  2 | 'Fitness'                                | 
  2 | 'function_score'                         | 
  2 | 'linear'                                 |  FIT
  2 | 'log2_score'                             | 
  2 | 'sel_coeff_mean'                         | AGG FIT
  1 | '0.031ug_mL_MEM_37C'                     | 
  1 | '0.625'                                  | 
  1 | '2500'                                   | 
  1 | '30C'                                    | 
  1 | 'A549_p53NULL_Etoposide_Z-score'         | 
  1 | 'A549_p53NULL_Nutlin-3_Z-score'          | 
  1 | 'A549_p53WT_Nutlin-3_Z-score'            | 
  1 | 'activity fitness'                       | 
  1 | 'Activity_Score'                         | 
  1 | 'average_growth'                         | AGG
  1 | 'Avg Growth - WT TYMS'                   | AGG
  1 | 'avg_MYC'                                | AGG
  1 | 'bind_avg'                               | AGG
  1 | 'CRIPT'                                  | 
  1 | 'ddG_stat'                               |  FIT
  1 | 'diffsel'                                | 
  1 | 'dms'                                    | 
  1 | 'DMS_value'                              | 
  1 | 'DMSO'                                   | 
  1 | 'DOX_Average'                            | AGG
  1 | 'effect'                                 | 
  1 | 'effectCCL141'                           | 
  1 | 'enrichment'                             | 
  1 | 'Experimental function score'            | 
  1 | 'expr_avg'                               | AGG
  1 | 'expression fitness'                     | 
  1 | 'Final NUDT15 activity Score'            | 
  1 | 'Fitness Score'                          | 
  1 | 'Fitness_Effect'                         | 
  1 | 'fitness_rich'                           | 
  1 | 'Fitness_score'                          | 
  1 | 'funcScore'                              | 
  1 | 'Functional Score Weighted Mean'         | AGG
  1 | 'GFP_score'                              | 
  1 | 'H_GFP_mean_scaled'                      | AGG
  1 | 'IL3_withdrawal_score'                   | 
  1 | 'Induction'                              | 
  1 | 'isobutyramide_normalized_fitness'       | 
  1 | 'Kan18_avg'                              | AGG
  1 | 'L_GFP_mean_scaled'                      | AGG
  1 | 'LFC_scaled'                             | 
  1 | 'lnW'                                    | 
  1 | 'LOF score'                              | 
  1 | 'Log2 Fold Change after Positive Selection' | 
  1 | 'log2_ratio'                             | 
  1 | 'log2FoldChange'                         | 
  1 | 'mean'                                   | AGG
  1 | 'mean_medianBrightness_per_aaseq'        | AGG
  1 | 'mean_on'                                | AGG
  1 | 'mean_prediction'                        | AGG FIT
  1 | 'MIC_score'                              | 
  1 | 'nscore'                                 | 
  1 | 'piliation_log2_ratio'                   | 
  1 | 'PlusLon_selection_coefficient'          |  FIT
  1 | 'rel_react'                              | 
  1 | 'RF Index'                               | 
  1 | 'RF_index'                               | 
  1 | 'RFS_H1299'                              | 
  1 | 's (37°C)'                               | 
  1 | 'score.ave'                              | AGG
  1 | 'score_total'                            | 
  1 | 'SEL_C_64h'                              | 
  1 | 'selection'                              | 
  1 | 'Selection Coefficient'                  |  FIT
  1 | 'selection_coefficient'                  |  FIT
  1 | 'SelectionTwo'                           | 
  1 | 'SM73_1_score'                           | 
  1 | 'Standard Conditions'                    | 
  1 | 'surface_score'                          | 
  1 | 'T50'                                    |  FIT
  1 | 'toxicity'                               | 
  1 | 'TrafScore'                              | 
  1 | 'transformed_pref'                       | 
  1 | 'unregulated'                            | 
  1 | 'viral_selection'                        | 
  1 | 'W'                                      | 
  1 | 'Wrel_G17_filtered'                      | 
```

Union of AGG or FIT = 96 assay-rows of 217.