# VERIFY - the LeaveOneGroupOut docstring is a statement of what one class returns, not a definition of the device; the four quotations are verbatim with two citation drifts

Checker: fresh context. Budget used: 0 WebFetch, 0 WebSearch (6 raw-route `curl` fetches, which I count against the 6-fetch budget: 4 named files + `doc/modules/cross_validation.rst` + `sklearn/frozen/_frozen.py`). Date 2026-10-23.

## CLAIM

That every external quotation the kill uses was read by one reader (adversary #3) over a free route from moving branches and verified by nobody; and, substantively, that the four quoted strings say what the attack-4 objection cell uses them for — (i) the scikit-learn `LeaveOneGroupOut` docstring makes a training step intrinsic to leave-one-study-out as a DEVICE, (ii) ESPEI's per-dataset `weight` key is an assessor-set input living outside the parameter set, (iii) the ESPEI README's AICc shows the field's tooling has noticed overfitting.

Headline: the characters hold. **The logical form of the load-bearing quotation does not.** The sentence the entry cuts into is a statement of what one scikit-learn class *provides* (indices), and the clause the entry quotes is the `such that` tail of that provision. The support the entry needs does exist — one file over, in `doc/modules/cross_validation.rst`, which no reader on this entry opened — so this is a re-citation, not a collapse.

## READ LEVEL

- **scikit-learn `sklearn/model_selection/_split.py`, branch `main` — FULL TEXT.** `curl` raw.githubusercontent.com, HTTP 200, **111,854 bytes — byte-identical in size to adversary #3's read**, so no content drift on the moving branch between his read and mine.
- **scikit-learn `doc/modules/cross_validation.rst`, branch `main` — FULL TEXT** (42,081 bytes). HTTP 200. *New to this entry: opened by nobody before me.* This is the file the brief's sub-claim 3 names as "its cross-validation documentation".
- **scikit-learn `sklearn/frozen/_frozen.py`, branch `main` — FULL TEXT** (4,987 bytes). HTTP 200. *New to this entry.* Opened to test sub-claim 3's "already-fitted-estimator evaluation path".
- **ESPEI `docs/reference/dataset_schema.qmd`, branch `master` — FULL TEXT**, 15,053 bytes, **size-identical to #3's read**.
- **ESPEI `docs/tutorials/cu-mg-example/input-data/zpf/bagnoud1978-twophase.json`, branch `master` — FULL TEXT**, 1,760 bytes, 43 lines.
- **ESPEI `README.rst`, branch `master` — FULL TEXT**, 7,265 bytes, **size-identical to #3's read**.
- **M. Stone, 'Cross-Validatory Choice and Assessment of Statistical Predictions', J. R. Stat. Soc. B 36(2) 111-147 (1974), DOI 10.1111/j.2517-6161.1974.tb00994.x — COULD NOT READ: BUDGET, NOT ROUTE.** I did not spend a fetch on it; no route was tried, so no route failed. Adversary #3's budget stop is still a budget stop. I judged the sklearn user guide the better buy because the brief names it explicitly in sub-claim 3 and because it is the document whose *own* framing the entry's premise needs. Stone 1974 remains the untried stronger primary. By kind it IS the right kind of document for sub-claim 2 (a primary statistical statement of the device, as against a library's API description).

On the claim's own "verified by nobody": **enumerated.** I opened all four files, over the same free route, and confirmed all four strings. The four-file universal is now TRUE OVER THE INSTANCES I OPENED as to characters (4/4), and the "verified by nobody" clause is **false as of this check**. The "moving branch, not a commit" worry is real in form but did not bite: three of the four byte-sizes are identical to #3's recorded sizes.

## WHAT THE SOURCE SAYS (quotations as served)

### Sub-claim 1 — do the four files still carry the quoted strings at or near the stated lines?

**Yes, all four, word for word. Two drifts, both in the citation rather than the text.**

**R1 — `_split.py` lines 171-176, as served, with line numbers:**

```
171	class LeaveOneOut(_UnsupportedGroupCVMixin, BaseCrossValidator):
172	    """Leave-One-Out cross-validator.
173	
174	    Provides train/test indices to split data in train/test sets. Each
175	    sample is used once as a test set (singleton) while the remaining
176	    samples form the training set.
```

The entry's R1 string — 'Each sample is used once as a test set (singleton) while the remaining samples form the training set.' — is verbatim across the line wraps at 174-176. **Drift (scope):** the quotation starts mid-line-174, dropping the sentence that opens the paragraph it is cut from: **"Provides train/test indices to split data in train/test sets."** See sub-claim 2.

**The load-bearing quotation — `_split.py` lines 1309-1315 as served:**

```
1309	class LeaveOneGroupOut(GroupsConsumerMixin, BaseCrossValidator):
1310	    """Leave One Group Out cross-validator.
1311	
1312	    Provides train/test indices to split data such that each training set is
1313	    comprised of all samples except ones belonging to one specific group.
1314	    Arbitrary domain-specific group information is provided as an array of integers
1315	    that encodes the group of each sample.
```

**DRIFT 1 (citation span).** The entry cites "class LeaveOneGroupOut docstring at lines 1312-1314". The quoted sentence occupies **1312-1313**. Line 1314 begins a different sentence ("Arbitrary domain-specific group information is provided as an array of integers / that encodes the group of each sample."), which is not in the quotation. The quoted string also drops the sentence's closing period. Harmless to the argument; recorded because the entry promised to report drift on a moving branch.

**R3 — `dataset_schema.qmd` lines 379-390, as served:**

```
379	## Common Mistakes and Notes
...
387	4.  All types of data can have a `weight` key at the top level that will
388	    weight the standard deviation parameter in MCMC runs for that
389	    dataset. If a single dataset should have different weights applied,
390	    multiple datasets should be created.
```

Verbatim and complete, including the second sentence. Item 4 of 4 under `## Common Mistakes and Notes`, as cited. File path as cited: `docs/reference/dataset_schema.qmd`.

**R4 — `bagnoud1978-twophase.json` lines 39-43, as served:**

```
39	    "reference": "Bagnoud (1978)",
40	    "bibtex": "bagnoud1978",
41	    "comment": "solubility lines from Fig 3",
42	    "weight": 10.0
43	}
```

**DRIFT 2 (silent omission inside a cited contiguous span).** The entry quotes lines "39-42" as `'"reference": "Bagnoud (1978)", "comment": "solubility lines from Fig 3", "weight": 10.0'` — three keys where the cited span holds four. **Line 40, `"bibtex": "bagnoud1978",`, is dropped with no ellipsis.** Every character the entry prints is in the file; the span is presented as contiguous and is not. Nothing in the argument turns on it, and the omitted line in fact strengthens the per-study reading (the dataset carries a bibliographic key). Recorded as a quotation-discipline defect, not a substantive one.

**R2 — `README.rst` lines 19-24, as served (lines 22-24 in full, per sub-claim 6):**

```
19	Parameter generation
20	~~~~~~~~~~~~~~~~~~~~
21	
22	ESPEI can be used to generate model parameters for CALPHAD models of the Gibbs energy that follow the temperature-dependent power series expansion of the Gibbs energy within the compound energy formalism (CEF) for endmembers and for binary and ternary Redlich-Kister interaction parameters with Muggianu extrapolation.
23	This parameter generation step augments the CALPHAD modeler by providing tools for data-driven model selection, rather than relying on a modeler's intuition alone.
24	Model generation is based on a linear regression of enthalpy, entropy, and heat capacity data, using the corrected Akiake Information Criterion (AICc) to prevent overfitting.
```

Line 24 verbatim, including the source's own misspelling "Akiake" (sic; Akaike) — which the entry reproduces, a good sign the string was transcribed and not recalled.

### Sub-claim 2 — modality and logical form of the load-bearing quotation

**It is a statement of what this class returns. It is not a definition of the device, and it does not make a training step necessary.**

The full class docstring is reproduced above plus, in full, its remaining sections:

- a second paragraph, lines 1317-1318: "For instance the groups could be the year of collection of the samples / and thus allow for cross-validation against time-based splits."
- line 1320: "Read more in the :ref:`User Guide <leave_one_group_out>`."
- **`Notes` (lines 1322-1326), in full:** "Splits are ordered according to the index of the group left out. The first / split has testing set consisting of the group whose index in `groups` is / lowest, and so on."
- `Examples` (1330-1349): a four-row toy array printing `Train: index=[2 3]` / `Test: index=[0 1]` — **index arrays, no estimator, no `fit` call**.
- **`See also` (1351-1353), in full:** "GroupKFold: K-fold iterator variant with non-overlapping groups."
- **There is no `Parameters` section on the class docstring at all** — the class is parameterless. The only `Parameters` sections are on the two methods, `get_n_splits` (1375-1387) and `split` (1402-1413).

Four things settle the form:

1. **The grammatical subject and verb.** "**Provides train/test indices** to split data such that each training set is comprised of all samples except ones belonging to one specific group." The verb is *provides*; the object is *indices*. The clause the entry quotes is the `such that` tail — a property of the **partition**, not a step in a procedure. The entry's cut removes the words that scope it ("Provides train/test indices to split data such that"), and what remains reads as a definition of the device because the words naming the deliverable have gone. **The clause ASSERTS a property of the index arrays. It does not assert that anything is fitted.**
2. **"training set" is a name for one of two returned arrays**, fixed by `split`'s own `Yields` block at lines 1415-1421: "**train : ndarray** / The training set indices for that split. / **test : ndarray** / The testing set indices for that split." The word "training" labels an ndarray.
3. **The file never fits anything.** Dedicated sweeps over the 111,854-byte file: `grep -c "\.fit("` → **0**; `grep -c -i "estimator"` → **1** (and that one is not a fit call); `grep -i -E "frozen|refit|already.fitted|prefit|pre-fitted"` → **no hits**; `grep -i -E "is trained|trains |fitting a model|fit the (model|estimator)"` → **no hits**. `LeaveOneGroupOut._iter_test_masks` (1356-1370) does exactly one thing: `for i in unique_groups: yield groups == i`. It yields boolean masks.
4. **The sibling class's wording confirms the genre.** `LeavePGroupsOut`, line 1429: "Provides train/test indices to split data according to a third-party / provided group." Same opener, same object. These are API descriptions of splitters.

**So: sufficient-for-this-class, not necessary-to-the-device.** The sentence tells you what you get if you call `LeaveOneGroupOut().split(...)`. It is silent on whether a caller re-fits. Modality: flat declarative, no hedge, no disjunction; it is a *description of a return value*, and reading it as a necessary condition on the device is precisely the necessary/sufficient inversion the batch rules warn about.

**But the support the entry wants exists, one file over.** `doc/modules/cross_validation.rst` — which this entry's record shows nobody opened — states the training step directly, and in its hedged general form:

- lines 83-92, the canonical procedure, with its scope opener and its hedge: "**In the basic approach, called *k*-fold CV**, / the training set is split into *k* smaller sets / **(other approaches are described below, / but generally follow the same principles)**. / The following procedure is followed for each of the *k* "folds": / * **A model is trained using** :math:`k-1` **of the folds as training data**; / * the resulting model is validated on the remaining part of the data / (i.e., it is used as a test set to compute a performance measure / such as accuracy)."
- the LOO section, lines 421-424, scoped to model selection: "**Potential users of LOO for model selection** should weigh a few known caveats. / **When compared with** :math:`k`**-fold cross validation, one builds** :math:`n` **models / from** :math:`n` **samples** instead of :math:`k` models, where :math:`n > k`. / Moreover, **each is trained on** :math:`n - 1` **samples** rather than :math:`(k-1) n / k`."
- the LOGO section, line 763: "we create a training set using the samples of all the experiments except one".
- and the reason, at lines 10-14: "Learning the parameters of a prediction function and testing it on the / same data is a methodological mistake: a model that would just repeat / the labels of the samples that it has just seen would have a perfect / score but would fail to predict anything useful on yet-unseen data. / This situation is called **overfitting**."

Per discipline, the hedged formulation is the one to carry: the training step is stated for *k*-fold and extended to other approaches with "**generally** follow the same principles" — a hedge, not a definition, and the hedge is in sklearn's own words, not mine.

### Sub-claim 3 — does scikit-learn contain a no-refit leave-one-out / leave-one-group-out usage?

**Not in either file, on two dedicated sweeps each. But scikit-learn does ship a no-refit wrapper, and its existence is a document finding; the composition is my own.**

- Sweep over `cross_validation.rst` for `frozen|already fitted|pre-?fit|refit|clone|predefined`: the only hits are `predefined scorer names` (230, 242) and the **`PredefinedSplit`** section (613-621). That section is **not** a no-refit path: "For some datasets, a pre-defined split of the data into training- and / validation fold or into several cross-validation folds already / exists. Using :class:`PredefinedSplit` it is possible to use these folds / **e.g. when searching for hyperparameters**." Its `_split.py` docstring (2500-2503) is the same genre as the others: "Provides train/test indices to split data into train/test sets using a / predefined scheme specified by the user with the ``test_fold`` parameter." A splitter, consumed by a search that fits.
- Second, aimed sweep over `_split.py` for the same terms: **zero hits** (above).
- **Counter-instance, and it is a real one: `sklearn/frozen/_frozen.py` line 28, class `FrozenEstimator`.** As served, lines 28-37: "**Estimator that wraps a fitted estimator to prevent re-fitting.** / / This meta-estimator takes an estimator and freezes it, **in the sense that calling / `fit` on it has no effect**. `fit_predict` and `fit_transform` are also disabled. / All other methods are delegated to the original estimator and original estimator's / attributes are accessible as well. / / **This is particularly useful when you have a fitted or a pre-trained model as a / transformer in a pipeline**, and you'd like `pipeline.fit` to have no effect on this / step." Its `fit` method (line 89-90) is documented "No-op.", and its example prints `>>> frozen_clf.fit(X, y)  # No-op`.

What that does and does not establish. **Document finding:** scikit-learn's own API contains a first-class object whose entire purpose is that `fit` does nothing, so "re-fitting" is not an assumption baked into the library's evaluation machinery. **MY OWN REASONING ABOUT THE API, NOT A SOURCE FINDING:** `cross_validate(FrozenEstimator(clf), X, y, cv=LeaveOneGroupOut(), groups=study_id)` would score a *fixed* fitted model group by group with no re-fitting — a no-refit leave-one-group-out evaluation built entirely from scikit-learn parts. **I did not find that composition printed anywhere.** `FrozenEstimator`'s stated use case is a pipeline transformer; its `See Also` reads, in full, "None: No similar entry in the scikit-learn documentation."; and `cross_validation.rst` contains **zero** occurrences of "frozen". What would ground the composition is scikit-learn's `FrozenEstimator` user-guide page or the 1.6 release notes — the right kind of document, and I did not open one (budget).

So the premise "a training step on the remaining studies is intrinsic to it" is: **weaker than the quotation the entry cites can bear** (sub-claim 2); **supported by the user-guide prose the entry does not cite** (lines 89, 422-424, 763), hedged with "generally"; and **not a property of the library's machinery**, which ships an explicit object for freezing a fit. UNENUMERATED as a claim about the device in general: I opened scikit-learn's two relevant files and no statistical primary.

### Sub-claim 4 — does `weight` attach to a dataset, and does it live outside the parameter set?

**Yes to both. One unit mismatch worth naming, and one direction I did not verify.**

`docs/reference/dataset_schema.qmd`, lines 387-390, item 4 under `## Common Mistakes and Notes`, quoted above in full: the key is "at the top level", it weights "the standard deviation parameter in MCMC runs for that **dataset**", and the second sentence — "If a single dataset should have different weights applied, multiple datasets should be created." — makes the **dataset the atomic unit of weighting**.

`docs/tutorials/cu-mg-example/input-data/zpf/bagnoud1978-twophase.json`, the whole 43-line file, is one such unit, and it is keyed to one source and one data type: `"output": "ZPF"` (line 22), `"reference": "Bagnoud (1978)"` (39), `"bibtex": "bagnoud1978"` (40), `"comment": "solubility lines from Fig 3"` (41), `"weight": 10.0` (42). The schema's own gloss on `reference`, line 22 of the qmd: "Use the `reference` key for bookkeeping the source of the data."

**Outside the parameter set / TDB: yes.** The TDB is the *output*: the qmd's example input YAML prints `output_db: out.tdb` (line 360), and the weighted datasets are hand-written input JSON files under `input-data/zpf/`. The weight is nowhere in a TDB.

**Unit mismatch (precision, not a kill).** The argument's stated need is a *per-study* knob. What the file gives is a **per-dataset** knob, where a dataset is one source **× one output type × one weight** — item 4's second sentence says in terms that varying the weight within a source means *splitting into more datasets*. So the weighting unit is **finer** than the study: a single study's data can be spread over several datasets at several weights. The leg's substance survives (the knob is per-source-ish, hand-set, and outside the TDB), but "per-study weight" is one word away from "per-dataset weight" and the entry should say the latter.

**Direction and magnitude: NOT CHECKED, and the quotation does not settle it.** Item 4 says the key "will weight the standard deviation parameter". It does not say whether a larger number raises or lowers that dataset's influence; on the face of the words, multiplying a standard deviation by 10 would *down*-weight Bagnoud, and dividing by 10 would *up*-weight it. The entry prints `"weight": 10.0` without stating the direction. Settling it needs ESPEI's likelihood code (`espei/error_functions/`), which I did not fetch (budget). **I name this as undetermined by the quoted sources, not as a defect in either direction** — the leg as argued needs only that the knob exists outside the parameter set, which it does.

### Sub-claim 6 — does the README support the use against mechanism (2)?

**Only in the weak sense, and the entry's own gloss of the scope is the correct one.** README lines 22-24 are quoted in full above. Three facts fix what the AICc governs:

1. **The heading it sits under is `Parameter generation` (lines 19-20)**, and line 22's subject is "ESPEI can be used to **generate model parameters**".
2. **Line 23's opener scopes line 24:** "**This parameter generation step** augments the CALPHAD modeler by providing tools for data-driven model selection, rather than relying on a modeler's intuition alone." The phrase "data-driven model selection" is the one phrase in the README that leans the entry's way — and it is scoped by "This parameter generation step", i.e. choosing which power-series / Redlich-Kister terms to include while generating **one** description.
3. **Line 24's object is a regression over three data types:** "a linear regression of **enthalpy, entropy, and heat capacity data**". The qmd fixes which data those are, lines 11-14: "Non-equilibrium thermochemical data is used where the internal degrees / of freedom for a phase are known. **This type of data is the only data / that can be used for parameter generation**, but it can also be used in / Bayesian parameter estimation."

**Numerator / denominator in both directions.** The AICc's class of objects is *candidate term-subsets of one Gibbs-energy expression for one phase, fitted to non-equilibrium thermochemical data*. What the entry's mechanism (2) needs is a class of *published assessments compared against one another*. The AICc class **misses** every published description (it never compares two TDBs) and **includes** things the claim excludes (sub-expression choices inside one phase model), and it **excludes the very data type the weight example sits on** — the Bagnoud file is `"output": "ZPF"` phase-boundary data, which by the qmd's sentence above cannot drive parameter generation at all. So the README sentence is a **within-description regularisation**, and the entry's use of it against "the field's tooling has noticed overfitting" is sound only as: *one tool applies an information criterion to term selection inside one description, and names overfitting as the thing it prevents.* It is not evidence that tooling selects between published descriptions. Note also that the word "overfitting" appears **once** in the README (dedicated `grep -i overfit`: line 24 only) and the word "assessment" appears **nowhere** in it.

## REGIME

**scikit-learn `_split.py` / `cross_validation.rst`, in their own words.** Population: samples in an array `X` with optional labels `y`. Unit of analysis: the *sample* (row), with "arbitrary domain-specific group information ... provided as an array of integers that encodes the group of each sample" (1314-1315) as an optional second level. Operating condition: supervised machine-learning model evaluation and hyperparameter search — "Cross-validation: evaluating estimator performance" (title, line 5), the purpose being to avoid "Learning the parameters of a prediction function and testing it on the same data" (10-11). Instrument: an index generator consumed by `cross_validate`/`GridSearchCV`. **Does the claim sit inside it?** For the *definitional* use — "what is leave-one-group-out?" — partly: the regime is an API, and an API description is evidence about an implementation, not about the device in statistics. For the *claim about published CALPHAD assessments* — no: nothing in either file is about thermodynamic assessment, and nothing should be expected to be.

**ESPEI, in its own words.** README line 7: "ESPEI, or Extensible Self-optimizing Phase Equilibria Infrastructure, is a tool for creating CALPHAD databases and evaluating the **uncertanity** [sic] of CALPHAD models." Line 9: "ESPEI uses `pycalphad`_ for the thermodynamic backend and supports fitting adjustable parameters for any pycalphad model." Line 30: "Optimization and uncertainty quantification is performed using a **Bayesian ensemble Markov Chain Monte Carlo (MCMC) method**." Unit of analysis: the ESPEI *dataset* (one JSON file: components, phases, conditions, one `output` type, one `reference`, one optional `weight`). Threshold/instrument: AICc inside parameter generation; per-dataset sigma weighting inside MCMC.

**Sub-claim 5, overlap in both directions.** *Does anything in these four files bear on traditional PARROT/PanOptimizer assessments?* Dedicated sweep across all three ESPEI files for `parrot|thermo-?calc|pandat|panoptimizer|\bTDB\b|assessment|cross-?valid|leave-one|overfit|holdout|hold-out`: **the only hits in the whole set are `output_db: out.tdb` (qmd 360) and `overfitting` (README 24).** Zero hits for PARROT, Thermo-Calc, Pandat, PanOptimizer, "assessment", "cross-validation", "leave-one", "holdout". **The entry's concession is exact: the weights-irreproducibility leg is sourced in the ESPEI regime only.**

The one bridge, and it points the wrong way for the leg: README line 31, "Any CALPHAD database can be used, including databases generated by ESPEI or **starting from an existing CALPHAD database**." That is ESPEI *consuming* a traditionally assessed database as a starting point. It says nothing about how a traditional assessment chose or reported its weights — which is the proposition the leg needs. **What would settle that is Lukas, Fries & Sundman, *Computational Thermodynamics*, section "Experimental data used for optimization"** — a textbook account of PARROT-era practice, which is the right KIND of document for "how are weights chosen and are they reported", and which this entry's record shows has been returned once and opened by nobody. I did not open it either (budget exhausted on the sklearn question). Naming it is a work item, justified by kind, not a finding.

## DEFECTS FOUND

1. **The load-bearing quotation is a return-value description read as a definition** (sub-claim 2). The entry's cell quotes "each training set is comprised of all samples except ones belonging to one specific group" after cutting "**Provides train/test indices to split data such that**" from the front of the same sentence. The cut is grammatically clean and the characters are exact; it removes the words that scope the clause. With them restored, the sentence says what the class *returns*, "training set" is the documented name of an ndarray of indices (`split`'s `Yields`, 1417-1418), and the file that contains it never calls `.fit(` (0 occurrences in 111,854 bytes). **Sufficient-for-this-class, not necessary-to-the-device** — the same necessary/sufficient inversion the batch rules flag.
2. **Citation span drift:** "lines 1312-1314" for a sentence that occupies 1312-1313; line 1314 starts a different sentence.
3. **Silent omission inside a span cited as contiguous:** the Bagnoud quotation prints three of the four keys on lines 39-42, dropping `"bibtex": "bagnoud1978"` (line 40) with no ellipsis.
4. **Unit slippage, per-study vs per-dataset** (sub-claim 4). The `weight` key is per-*dataset*, and item 4's second sentence makes dataset-splitting the way to vary weights within a source, so the knob is finer than per-study.
5. **Undetermined direction of the weight** (sub-claim 4). "will weight the standard deviation parameter" does not say whether 10.0 raises or lowers Bagnoud's influence. Not checked by me; not stated by the entry.
6. **The README's AICc is cited at the wrong level of aggregation** for mechanism (2) (sub-claim 6) — term selection inside one description, over a data type (non-equilibrium thermochemical) that excludes the ZPF data the weight example sits on. The entry's own characterisation of this is accurate; the defect is in how much work the citation is asked to do.
7. **The best available support for the entry's premise was never opened by anyone on this entry.** `doc/modules/cross_validation.rst` lines 89, 421-424 and 763 state the training step directly; the entry cites only `_split.py`. This is a correctable under-citation, and it is the single most useful thing in this check.
8. **A counter-instance to "intrinsic" exists in scikit-learn itself:** `FrozenEstimator`, "Estimator that wraps a fitted estimator **to prevent re-fitting** ... calling `fit` on it has no effect". Document finding. Its composition with `LeaveOneGroupOut` is **my own reasoning about the API**, printed nowhere I read.

## ROUTES THAT FAILED

**None.** Six `curl` reads over `https://raw.githubusercontent.com/...`, all HTTP 200, no proxy refusal, no TLS problem, no summariser in the path. The four files named in the entry returned at 111,854 / 15,053 / 1,760 / 7,265 bytes — the first, second and fourth byte-identical in size to adversary #3's recorded reads.

**Not reached, and the reason is BUDGET, not route:**
- **Stone 1974** (DOI 10.1111/j.2517-6161.1974.tb00994.x). No route tried; no error to report. Still the untried stronger primary, and still the right kind of document for sub-claim 2.
- **`FrozenEstimator`'s user-guide / release-note page**, which would turn finding 8's composition from my reasoning into a documented usage.
- **Lukas, Fries & Sundman, "Experimental data used for optimization"**, which would turn sub-claim 5 from "ESPEI-only, as the entry concedes" into a positive statement about traditional practice.
- **ESPEI's likelihood code**, which would settle the direction of `"weight": 10.0`.

I reached all six sub-claims. None is COULD NOT CHECK; sub-claim 3 is answered with one direction (the no-refit object exists) carrying a labelled inference rather than a printed usage.

## BEARING ON THE LEDGER ENTRY

**NARROW attack 4's definitional half and re-cite it; hold the rest; convert one item to a promotion condition.**

1. **The claim under check is MOSTLY correct, and its own headline clause is now false.** All four strings are in the files, at or beside the stated lines, over the free route, from moving branches — and they are no longer "verified by nobody": I verified 4/4, and three of the four files are byte-identical in size to #3's read. The branch-drift worry did not bite. Two citation drifts (span 1312-1314; the silent `bibtex` omission) are real and should be fixed in the cell, and neither moves the argument.
2. **The definitional leg cannot stand on the quotation the entry uses.** "Provides train/test indices to split data such that each training set is comprised of all samples except ones belonging to one specific group." is a statement of what one scikit-learn class returns. It is sufficient-for-that-class, not necessary-to-the-device; the file it sits in never fits a model; "training set" is the documented name of an index array. **As the brief anticipated, on this quotation alone the definitional leg weakens to the entry's own admission that the operation is merely undeclared.**
3. **But the leg is rescuable by re-citation, and should be re-cited rather than struck.** `doc/modules/cross_validation.rst` — same repo, same free route, one fetch, opened by nobody on this entry — states the training step as scikit-learn's own account of the procedure: "A model is trained using *k-1* of the folds as training data" (89), "one builds *n* models from *n* samples ... each is trained on *n − 1* samples" (422-424), "we create a training set using the samples of all the experiments except one" (763), with the generalisation hedged ("other approaches ... generally follow the same principles", 85-86). The entry should quote the hedged general form and drop the docstring to a supporting mention. Net: the leg survives at a **documented-convention** strength ("this is what the standard procedure does, generally"), not at the **definitional** strength ("a training step is intrinsic to the device"), and that distinction is exactly the one the verdict rests on.
4. **A counter-instance now sits against "intrinsic".** scikit-learn ships `FrozenEstimator` "to prevent re-fitting", whose `fit` is a documented no-op. The library therefore does not treat re-fitting as inseparable from evaluation. Whether a no-refit LOGO *usage* is documented is open — the composition is my reasoning, not a printed path — so this is a **promotion condition, not a strike**: open `FrozenEstimator`'s user-guide page, or Stone 1974, before the entry asserts that a training step is intrinsic to the device as against standard in the tooling.
5. **The ESPEI half holds, with the unit relabelled.** The `weight` key is per-**dataset** (one source × one output type), it is hand-set in an input JSON (`"reference": "Bagnoud (1978)"`, `"weight": 10.0`), and it is outside the TDB, which is ESPEI's *output* (`output_db: out.tdb`). That is what "an assessor-set input that lives outside the parameter set" needs. Change "per-study" to "per-dataset" in the cell, and either state the direction of the weight or stop printing 10.0 as if it spoke for itself — item 4's words do not say whether 10.0 up- or down-weights Bagnoud, and I did not check.
6. **Sub-claim 5 confirms the entry's concession exactly, which bounds what this leg can carry.** Across all three ESPEI files, zero mentions of PARROT, Thermo-Calc, Pandat, PanOptimizer, or "assessment"; the only contact with traditional practice is README line 31, ESPEI *starting from* an existing database. **So the weights-irreproducibility leg is sourced in the ESPEI regime only and cannot carry the kill for the frame's traditional PARROT/PanOptimizer members.** The document that could is named by kind (Lukas, Fries & Sundman, "Experimental data used for optimization") and has been opened by nobody across this entire record — a work item, not a remark.
7. **Sub-claim 6: hold, at the entry's own reading.** README 22-24 shows AICc governing term selection during parameter generation of one description, over a data type that excludes the ZPF data the weight example uses. It supports "one tool names overfitting and regularises against it inside one description"; it does not support "tooling selects between published descriptions". The entry's gloss is already the accurate one; the citation should not be asked for more.

**Read-level honesty, for the record.** Every substantive finding above rests on a FULL TEXT read of a plain-text file over a route that bypasses the summariser, by me, today, with byte sizes matching. The one proposition on which the entry's definitional leg would be *strongest* — a statistical primary's definition of cross-validatory assessment — **has still been read by nobody on this entry, and that is a budget fact about two readers, not a property of Stone 1974.**
