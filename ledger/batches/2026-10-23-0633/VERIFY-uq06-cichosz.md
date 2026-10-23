# VERIFY - Cichosz medRxiv 2025.02.13.25322196 studies simulated MISSINGNESS, not artifact; the 80% string is verbatim but is a RESULT, not the protocol's completeness requirement

Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

The ledger entry's third nearest prior is claimed to:

1. study the effect of MISSING data and imputation on CGM metric recovery - "the OPPOSITE exposure to artifact presence";
2. print "only a data-completeness requirement";
3. print "no artifact share";
4. print "no arm contrast".

The record read this source at ABSTRACT LEVEL ONLY and says so.

Verdict in one line: **the claim HOLDS on all four legs, and the entry's read-level caveat can now be discharged** - I reached full text. Two narrowings are owed on the wording, one of which matters (leg 2), and one on leg 4.

## READ LEVEL

**FULL TEXT** (main article: Abstract, Introduction, Methods, Results, Discussion, figure legends), reached at
`https://www.medrxiv.org/content/10.1101/2025.02.13.25322196v1.full` in **one fetch, first try**, at exactly the route the entry's citation names. No route to the main text failed.

**NOT OPENED:** the supplementary material (`...v1.supplementary-material`), the `.full.pdf`, and the two revision PDFs attached to the Aalborg VBN record (`Cichosz_R3_-_CLEAN.pdf`, `Cichosz_vR2.pdf`). I did not reach these **because my fetch budget ran out**, not because any route refused them. That is a spent budget, not a property of the source, and I record it as such.

**ONE READ THAT DEGRADED:** the fetch of the v1 landing page
`https://www.medrxiv.org/content/10.1101/2025.02.13.25322196v1` returned the article **body** (Introduction through Discussion plus figure captions) with no masthead metadata; the summariser answered "The text is only the article body... so the landing page metadata isn't in what you shared." No HTTP error - the page served, the metadata block did not survive to the summariser. I recovered the front matter from the `.full` fetch and from the institutional record instead.

**A LIMIT ON MY KEYWORD SWEEPS, stated plainly:** my sweeps ran through the WebFetch summariser over the `.full` HTML. The summariser said in its own words: "I checked these by reading the provided page text. **I did not run a literal search tool.**" So my absence findings in (e) are a careful reader's sweeps over the main text, not a grep. I ran the broad sweep first and then a second, dedicated, one-term-at-a-time sweep (the batch rule), and both agreed. Within the main text I will call the absence TRUE OVER WHAT I OPENED; for the supplementary material I call it UNENUMERATED.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Front matter

Taken from the `.full` front matter and confirmed against the authors' own institutional record at vbn.aau.dk, **not** from any short form.

- **Title:** "Assessing the Accuracy of CGM Metrics: The Role of Missing Data and Imputation Strategies"
- **Authors, printed order:** Simon Lebech Cichosz; Thomas Kronborg; Stine Hangaard; Peter Vestergaard; Morten Hasselstrøm Jensen
- **Affiliations as printed:** Dept. of Health Science and Technology, Aalborg University (Cichosz, Kronborg, Hangaard, Jensen); Steno Diabetes Center North Denmark, Aalborg University Hospital (Kronborg, Hangaard, Vestergaard); Dept. of Endocrinology, Aalborg University Hospital (Vestergaard); Data Science, Novo Nordisk, Søborg (Jensen)
- **Venue:** medRxiv preprint server, version 1
- **Volume / issue / pages:** none exist. The VBN record gives a length of 24 pages and no volume, issue or article number.
- **Year / posted:** 2025; "Published - 14 Feb 2025" per VBN, posting date 2025-02-14 per medRxiv; VBN metadata also carries an online date of 15 February 2025.
- **DOI:** 10.1101/2025.02.13.25322196
- **Record key:** DOI 10.1101/2025.02.13.25322196 + Cichosz + 2025 + "Assessing the Accuracy of CGM Metrics: The Role of Missing Data and Imputation Strategies"

### (c) The quoted string

The entry asks me to verify `at least 80% of the CGM data was required`. **The string is verbatim.** The sentence it sits in, as served:

> "To achieve high accuracy (R2 > 0.95) in representing true metrics, at least 80% of the CGM data was required."

**Where it is printed:** the Abstract, in its Results portion. It is the paper's **only** occurrence of "80%" (broad sweep, then a dedicated sweep for the characters "80%"; the dedicated sweep returned one occurrence plus the same sentence echoed in the page metadata - one occurrence, not two). So the number is **printed, named, and PERFORMED**: it is reported as the outcome of the simulation, not announced as a target.

**Grammar on both sides of the cut.** Clean on the right (the sentence ends at "required."). On the left, the cut drops the purpose clause that **scopes** the whole requirement.

**What the opening words scope:** "To achieve high accuracy (R2 > 0.95) in representing true metrics," - a purpose adverbial governing the main clause. It scopes the 80% to one and only one job: the completeness needed before the metric computed from the degraded profile agrees with the metric computed from the **complete** profile at R² > 0.95. Strip it and "at least 80% of the CGM data was required" reads as a free-standing data-quality rule, which is not what the sentence says.

**Logical form, which is where this kind of quotation goes wrong:** this is a **NECESSARY** condition, not a sufficient one - 80% completeness is what achieving R² > 0.95 required, and the paper nowhere says 80% completeness delivers R² > 0.95. Its **modality** is a flat past-tense assertion of a measured result, with no hedge to restore. It is **not** a disjunction. The clause **ASSERTS** the quantity.

**The R² threshold it attaches to** is R² > 0.95, and the Methods print the threshold ladder it comes from:

> "'Good alignment' was classified as an R2 > 0.95, 'Alignment' as R2 > 0.90, and 'Acceptable alignment' as R2 > 0.80."

**A trap in this paper, flagged for anyone quoting it:** there are two 80s. One is a **share of data points** (80% completeness) and one is an **R² value** (0.80, "Acceptable alignment"). They are a word apart and are different quantities with different units. Anyone paraphrasing "80%" out of this paper must say which.

**Numerator class and denominator of the 80%.**
- Denominator: the expected number of 5-minute CGM readings in a 14-day profile segment.
- Numerator class: readings **present** after simulated removal. Checked against the near neighbours it is not: it is not the share of readings that are accurate, not the share that are artifact-free, not a share of artifact-affected readings, and not the paper's **inclusion** threshold.
- The inclusion threshold is a different number entirely: "Segments were included if they contained at least 99% of the expected data points."
- Overlap in both directions. What the paper's class **misses** relative to any artifact quantity: every reading that is present but wrong - those are all inside its 80% numerator, counted as good data. What it **includes** that an artifact quantity would exclude: all present readings regardless of fidelity. The two classes are not nested; they are orthogonal.

### (d) The exposure: how readings were removed

Removal is **by position, at random, under three geometric rules**. Methods, "Missing data modeling", as served:

> "MCAR: Data points were randomly removed throughout the time series, mimicking unpredictable loss of CGM readings."

> "Segments: Missing data were introduced in intermittent segments, reflecting scenarios such as temporary device malfunctions."

> "Blocks: Larger, contiguous blocks of data were removed, simulating extended periods of device disconnection, poor adherence or failure."
(assembled from two consecutive summariser segments; **labelled a reconstruction from 2 fragments**, verified at the junction "disconnection," / "poor adherence")

Figure 2 legend, confirming the mechanism:

> "The MCAR (Missing Completely at Random) method introduces missing values randomly across the entire dataset."
> "The Segments method introduces missing values within three randomly selected time segments."
> "The Block method introduces missing values within a single continuous time period."

And the removal **handling** strategy, distinct from the removal **exposure**:

> "periods containing missing data were removed entirely from the analysis."

**Answer to (d): at random AND in blocks - both, as two of three arms - and by NO artifact-like rule.** Nothing selects readings by glucose value, by rate of change, by a dip-and-recover shape, by sleep position, by nocturnal hour, or by anything else that would track a physical artifact. The selection rule is positional and value-blind in all three arms.

### (e) Does it anywhere treat artifact-contaminated or compression-affected readings?

Five sweeps, each run on its own as its own question, after a broad sweep had already reported the same:

| Sweep | Terms | Result |
|---|---|---|
| 1 | "pressure", "pressure-induced", "PISA" | **No occurrence** |
| 2 | "compress", "compression", "compressed" | **No occurrence** |
| 3 | "artifact", "artefact" | **No occurrence** |
| 4 | "attenuat", "attenuation", "attenuated" | **No occurrence** |
| 5 | "erroneous", "noise", "noisy", "outlier", "sensor error", "inaccurate readings", "spurious", "calibration" | **No occurrence** |

The nearest thing in the paper to a cause of bad data is a cause of **absent** data:

> "Missing data is an inevitable challenge in CGM due to sensor malfunctions, signal loss, or patient adherence issues"

**This is a three-member DISJUNCTION**, and it matters that all three members terminate in **absence**: a malfunction, a lost signal, and a non-adherent patient each yield a gap, not a contaminated reading. Nobody may cite this sentence as the paper touching artifact. The second brush is the same:

> "Missing data were introduced in intermittent segments, reflecting scenarios such as temporary device malfunctions."

**Instancing the universal, as required.** The claim on this leg is a universal ("does not anywhere treat artifact"). Instances I **opened**: the main text at `.full` - Abstract, Introduction, Methods, Results, Discussion, figure legends. Instances I **did not open**: the supplementary material, the `.full.pdf`, `Cichosz_R3_-_CLEAN.pdf`, `Cichosz_vR2.pdf`. So: **TRUE OVER THE INSTANCES I OPENED** for the main text, **UNENUMERATED** for the supplement and the revision files. Given that no artifact term survives five sweeps of the main text and the whole design is value-blind positional deletion, I expect no reversal in the supplement - but **that expectation is MY OWN REASONING ABOUT THE DESIGN, NOT A SOURCE FINDING**, and the thing that would ground it is a sweep of `...v1.supplementary-material`, which my budget did not reach.

### (f) Published version

**None found.** The authors' **own** institutional record at Aalborg (vbn.aau.dk), which is the kind of document that would carry a journal citation the moment one existed, classifies it as type **"Working paper/Preprint"**, status **"Published - 14 Feb 2025"**, publisher medRxiv, no volume, no issue, no article number, DOI 10.1101/2025.02.13.25322196. The medRxiv page carries **no "Now published in" banner**.

Two searches (title + first author; then all five surnames + plausible journals) returned **the same single document at every hit** - medRxiv `.full`, `.full.pdf`, `v1`, `.full-text`, `.article-info`, `.supplementary-material`, the refworks citation stub, and the VBN record. **Those are repeated title returns on one document: title matches, never corroboration, and not eight sources.**

One lead I will name as a lead and not dress up: the VBN record carries attached files named `Cichosz_R3_-_CLEAN.pdf` and `Cichosz_vR2.pdf`. **MY OWN INFERENCE, NOT A SOURCE FINDING:** "R2"/"R3" in a repository filename usually means revision rounds at a journal, so a peer-reviewed version may be in process. I did not open either file (budget), and I resolve both to the **same** record and the same DOI - one document under several filenames, not extra sources. What would settle (f) properly: a Crossref or PubMed record carrying a journal DOI for this title, or a medRxiv "Now published in" banner. I found neither.

## REGIME

The source's regime, in its own words:

- **Population:** people with type 1 and type 2 diabetes. Data from the **DiaMonT trial** (type 2 diabetes) and the **Insulin-Only Bionic Pancreas Pivotal Trial** (type 1 diabetes). "933 profiles from 468 individuals were analyzed."
- **Unit of analysis:** the **14-day CGM profile segment**, admitted only when nearly complete: "Segments were included if they contained at least 99% of the expected data points."
- **Operating condition:** **simulated** degradation of otherwise near-complete profiles. Missingness imposed at 5%, 10%, 20%, 30%, 40%, 50%, under three geometries (MCAR / Segments / Blocks), then handled by six strategies (removal, linear interpolation, mean imputation, PCHIP, temporal alignment imputation, random forest).
- **Instrument:** CGM at a 5-minute sampling interval; metrics computed with **QoCGM**.
- **Threshold / category:** agreement with the complete-profile metric, graded R² > 0.95 "Good alignment", > 0.90 "Alignment", > 0.80 "Acceptable alignment".

**Does the ledger's question sit inside this regime?** No. The regime's exposure variable is the **fraction and geometry of absent readings**. Artifact presence is not a variable in it, is not measured in it, and cannot be recovered from it: a paper that admits only >=99%-complete segments and then deletes points at value-blind random positions has defined artifact out of its design space. A result proved here is **silent** on artifact contamination, not supportive and not contrary.

## DEFECTS FOUND

**On the entry's four legs:**

1. **"studies the effect of MISSING data and imputation on CGM metric recovery" - CORRECT**, and this is now full-text confirmed rather than inferred from an abstract. Title, Methods and Results all carry it.

2. **"the OPPOSITE exposure to artifact presence" - CORRECT, and stronger than the entry claims.** It is not merely a different exposure; the removal rule is **value-blind and positional** in all three arms, so an artifact-shaped selection is excluded by construction. Worth adding to the entry, because it closes the door the "why it matters" note leaves open ("missing data and artifact are handled by the same machinery and a paper can do both"): this paper's machinery operates on **positions**, not on **values**, so it could not do both without a different design.

3. **"prints only a data-completeness requirement" - the one wording defect that matters. NARROW IT.** Two problems:
   - The 80% is a **RESULT**, not a requirement the protocol imposed. The protocol's completeness requirement is a different number: **99%**, for segment inclusion. An entry that calls the 80% "a data-completeness requirement" invites the next reader to take it for an inclusion criterion, which is exactly the slip the 99% sentence refutes.
   - The 80% is a **NECESSARY** condition for R² > 0.95 agreement with complete-data metrics, scoped by the purpose clause "To achieve high accuracy (R2 > 0.95) in representing true metrics,". Quoted without that opener it becomes a free-standing rule. The entry should carry the opener.
   - Also: "**only**" is true of the completeness figure but understates the paper's output. It prints a full R² grid across six missingness levels × three geometries × six handling strategies, plus the threshold ladder. None of that is an artifact quantity, so the entry's point survives - but "only" should read "only a completeness figure, and no artifact quantity".

4. **"no artifact share" - CORRECT, and I can say what the paper does instead.** No share of artifact-affected readings is printed anywhere in the main text. The percentages it prints (5/10/20/30/40/50%) are **imposed experimental manipulations**, i.e. the paper **DEFINES and CONTROLS** those shares rather than measuring any observed contamination rate. Five dedicated sweeps found no artifact term at all, so there is nothing even to confuse with a share.

5. **"no arm contrast" - CORRECT in the sense the entry means, but the bare phrase is wrong on its face. NARROW IT.** The paper is nothing but contrasts: three missingness geometries, six missingness levels, six handling strategies, and two cohorts (T1D vs T2D). What it has **no** arm contrast on is **artifact presence versus artifact absence**, which is the contrast the ledger cares about. The entry should say so in those words, or a reader who opens the paper and sees Figure 2's arms will think the entry got it wrong.

**On the entry's own read-level caveat:** "ABSTRACT LEVEL ONLY" is now **superseded**. I read the main text in full at the first route tried. The caveat was honest when written, but it should be lifted rather than carried forward, because carrying it forward understates how firmly the exclusion is grounded: the Methods, not the abstract, are what rule artifact out.

**No defect found in:** the entry's citation (DOI stem, server and year are right), the verbatim characters of the quoted string, or the directional reading of the exposure.

## ROUTES THAT FAILED

- **No route refused the main text.** `https://www.medrxiv.org/content/10.1101/2025.02.13.25322196v1.full` served in one fetch on the first attempt. There is no COULD NOT READ to log on this source.
- **`...v1` (landing page) - degraded, not failed.** Returned the article body with no masthead; the summariser reported "The text is only the article body (Introduction through Discussion, plus figure captions), so the landing page metadata isn't in what you shared." No HTTP error. Front matter recovered from `.full` and VBN instead. Anyone needing the "Now published in" banner should try `.article-info` rather than `v1`.
- **Not attempted, budget exhausted, NOT a property of the source:** `...v1.supplementary-material`; `...v1.full.pdf`; `...v1.article-info`; `https://vbn.aau.dk/ws/files/780005185/Cichosz_R3_-_CLEAN.pdf`; `https://vbn.aau.dk/ws/files/815367848/Cichosz_vR2.pdf`. All five are reachable-looking URLs returned by search that I simply did not have fetches left for.

**Sub-claims not fully reached:** (e) is complete for the main text and **COULD NOT CHECK** for the supplementary material. (f) is answered to the limit of two searches and the authors' own repository record; a Crossref/PubMed confirmation was not run.

## BEARING ON THE LEDGER ENTRY

**HOLD the entry's use of this prior, and strengthen it; correct two phrases.**

The prior does exactly what the entry says: it degrades near-complete 14-day CGM profiles by deleting readings at value-blind positions, and asks how well metrics survive. Artifact never appears in it - not as a word, across five dedicated sweeps of the main text, and not as a design element. The competitive risk the entry flagged ("it is the prior that would most directly compete if it turned out to treat artifact-contaminated readings rather than absent ones") **does not materialise**, and full text lets me say why rather than merely that: the exposure is positional and value-blind, so a present-but-wrong reading is inside the paper's "good data" by construction. On the shared-machinery worry - this paper's machinery acts on positions, not values, and it admits only >=99%-complete input, so it is not set up to do both.

**Two corrections to carry into the entry, both on wording, neither on direction:**

- Replace "prints only a data-completeness requirement" with something like: *prints one completeness figure as a RESULT - "To achieve high accuracy (R2 > 0.95) in representing true metrics, at least 80% of the CGM data was required" (Abstract) - a NECESSARY condition for complete-data agreement, not an inclusion rule; the inclusion rule is a separate 99%.* Keep the purpose clause attached whenever the 80% is quoted, and never let the completeness 80% stand next to the R² 0.80 threshold unlabelled.
- Replace "no arm contrast" with "**no artifact-presence arm contrast**". The paper contrasts geometries, levels, strategies and cohorts; it simply has no artifact arm.

**One upgrade:** strike the entry's "ABSTRACT LEVEL ONLY" flag on this source. It reads in full at the route the entry already names.

**One residual, named so it is not mistaken for a closed question:** the supplementary material was not swept. If anyone wants the no-artifact finding to be a closed universal rather than one true over the main text, that is the one fetch that would close it.
