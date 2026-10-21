# VERIFY — retirement census (arXiv:2609.04699, 2604.07530, 2607.24032)

Checker: fresh-context. Date: 2026-10-21. Budget used: 0 WebSearch, 4 WebFetch (cap 6/5). One raw-curl attempt (tool-scoped 403, as documented).

## CLAIM

As the ENTRY cites it:

- **arXiv:2609.04699** censuses retirement exposure with "42% of 8,931 paper-model mentions exposed, median 538 days to retirement".
- **arXiv:2604.07530** is cited as a second census.
- **arXiv:2607.24032** is recorded at abstract level as giving "7 of 40" records with a dated identifier and "3 of 40" showing refreshed-model evidence, over a purposive corpus.

Sub-claims checked: (a) front matter + the three numbers of 2609.04699, named with locations and denominators, plus the paper's own definition of "exposed"; (b) front matter and measurement target of 2604.07530; (c) the 7/40 and 3/40 figures and how the 40 were selected; (d) whether any of the three prints a share of published CONCLUSIONS reversing on migration; (e) read level per source.

## READ LEVEL

| Source | Read level | Basis |
|---|---|---|
| arXiv:2609.04699 | **Full text** (arXiv HTML v1), read through a summariser | abs page + two segment-wise reads of `arxiv.org/html/2609.04699v1`; Table 1 and Figure contents NOT inspected cell-by-cell |
| arXiv:2604.07530 | **Abstract only** | abs page only; no full-text read attempted (fetch cap) |
| arXiv:2607.24032 | **Abstract only** | abs page only; no Methods or Results read (fetch cap) |

All three identifiers **resolve and exist**. None is a NOT FOUND. Nothing was refused by the search/fetch tools.

---

## WHAT THE SOURCE SAYS (quotations as served)

### (a) arXiv:2609.04699 — front matter as served

- **Title:** "Model Retirement Creates Reproducibility Risk in Biomedical AI Publications"
- **Authors (front matter, as served):** Nathan Wolfrath, Meghan Conroy, Thomas Kosten, Dave Bell, Bhabishya Neupane, Jonah Kindel, Anjishnu Banerjee, Priya Deshpande, Bradley Taylor, Anai N. Kothari
- **Identifier:** arXiv:2609.04699v1 — **v1 is the only version listed**
- **Submitted:** 2026-09-04
- **Category:** cs.AI
- **Type:** **primary quantitative bibliometric study** (preprint). Not a review, editorial or commentary. It excludes reviews from its corpus by filter. No journal, volume or pages exist to take from front matter — it is an unrefereed arXiv preprint, so any journal attribution in the entry would be wrong.
- **Section headings in order:** ABSTRACT; INTRODUCTION; METHODS (Literature Search, Model Mention Extraction, Name Normalization, Lifecycle Data, Analysis); RESULTS (Corpus Characteristics, License and Vendor Distribution, Reproducibility Risk Due to Model Retirement); DISCUSSION; DATA AVAILABILITY; CONFLICT OF INTEREST; AI DISCLOSURE; TABLES; FIGURE LEGENDS; REFERENCES. **There is no Limitations section**; limitations sit inside DISCUSSION.

#### NAMING THE NUMBERS

**8,931 — PRINTED, repeatedly, as a count of paper-model mentions.**

Reconstruction from 5 consecutive segments (Abstract, Results sentences):

> SEG1 "We identified 8,931 paper-model mentions spanning 5,242 unique publications after restricting the analysis" / SEG2 "to the 50 most frequently used models. Among these mentions, 77.7% cited a commercial closed-weight model." / SEG3 "Overall, 42% involved a model that was already retired by the time of official publication or is scheduled" / SEG4 "to retire within two years of publication. The median interval from publication to model" / SEG5 "retirement was 538 days."

(Reconstruction, 5 fragments, assembled only from ordered consecutive returns; junctions verified by clause continuity — "analysis|to the 50", "scheduled|to retire", "model|retirement". No word completed by inference.)

- Locations of 8,931: Abstract/Results; RESULTS → Corpus Characteristics ("8,931 mentions from 5,242 papers remained"; "8,931 paper-model mentions across 5,242 unique publications (Figure 1)"); RESULTS → Reproducibility Risk ("Among all 8,931 in-scope mentions"). The licence shares 77.7% / 12.2% / 10.1% correspond to counts 6,936 + 1,089 + 906, which sum to 8,931.
- **Denominator/unit: paper-model MENTIONS, not papers.** 8,931 mentions arise from 5,242 publications — roughly 1.7 mentions per paper. It is also **post-restriction**: 8,931 is what "remained" after the corpus was cut to the 50 most frequently used models, out of 61,077 abstracts searched.
- 8,931 does not appear in Methods, Discussion, Table 1 or the figure legends.

**42% — PRINTED IN THE ABSTRACT ONLY. The body prints 41.6%, under a differently worded definition.**

- Abstract: SEG3+SEG4 above — "Overall, 42% involved a model that was already retired by the time of official publication or is scheduled to retire within two years of publication." The abstract does **not** restate the denominator in that sentence; the preceding "Among these mentions" ties it to the 8,931 mentions.
- Body, RESULTS → Reproducibility Risk Due to Model Retirement, reconstruction from 2 consecutive segments:
  > SEG8 "Among all 8,931 in-scope mentions, 3,715 (41.6%) involved a model with a confirmed retirement" / SEG9 "date falling within 730 days of the citing paper's publication date."
  (Reconstruction, 2 fragments; junction "retirement|date".)
- The next sentence, as served: "At publication, 256 mentions (2.9%) cited a model that had already been retired."
- Re-derived at the author's own threshold: 3,715 / 8,931 = **41.60%**, which rounds to 42% only by rounding up a 41.6. **3,715 + 256 = 3,971 = 44.5%**, not 42%. So the abstract's "already retired ... **or** is scheduled to retire within two years" cannot be the union of the two body figures; either the 256 already-retired mentions are counted inside the 3,715 (i.e. "within 730 days **of**" is being read as an absolute distance in either direction), or the abstract's disjunctive wording overstates what 41.6% measures. The paper does not print a figure for the union.
- No other overall figure near 42% appears. Table 1's per-model "% <2yr to retire" values (e.g. 62%, 54%, 67%) are per-model shares of papers, not the overall share.
- **No uncertainty is carried** on 41.6% or 42% — no CI, no sensitivity analysis at an alternative cutoff.

**Median 538 days — PRINTED IN THE ABSTRACT ONLY. The body prints a MEAN of 546 days.**

- Abstract: SEG4+SEG5 — "The median interval from publication to model retirement was 538 days."
- Body, as served: SEG11 "The mean interval between publication and retirement across all retired and scheduled mentions" / SEG12 "was 546 days (approximately 17.9 months; Table 1)." (Reconstruction, 2 fragments; junction "mentions|was".)
- **The 538 median is not repeated anywhere in the body text**, and no IQR, CI, range or other dispersion measure is given for it anywhere. Measured from the citing paper's publication date to the model's vendor-announced retirement date. The denominator for the median is not stated in the abstract; the body's mean is explicitly over "all retired and scheduled mentions", i.e. the ~3,715-ish subset, **not** all 8,931.
- So on the ledger's "published is not performed" test: the median is **ANNOUNCED in the abstract and not printed in the body**. I could not verify cell-by-cell whether Table 1 carries a median column (I read Table 1 only through the summariser's section-level report, which placed the mean's citation at Table 1 and reported no 8,931 there). Treat "the median is printed in Table 1" as **unverified**, not as refuted.

#### The paper's own definition of "exposed"

**"Exposed" and "exposure" do not occur in the paper.** The nearest defining sentence is in METHODS → Analysis:

> SEG1 "We use a cutoff of model retirement within two years of publication date to define a subset of papers" / SEG2 "which are rapidly outdated shortly after publication."

(Reconstruction, 2 fragments; junction "papers|which".)

So the paper's construct is a **two-year retirement cutoff** on a vendor-announced retirement date, labelled "rapidly outdated", applied at the level of a paper-model mention. "Exposed" is the ledger's word, not the paper's.

### (b) arXiv:2604.07530 — front matter as served, abstract level

- **Title:** "The Shrinking Lifespan of LLMs in Science"
- **Author:** Ana Trišović (sole author)
- **Identifier:** arXiv:2604.07530 — **v1 submitted 2026-04-08; the version served is v3, dated 2026-09-25.** The entry cites it bare, with no version.
- **Categories:** cs.DL (primary), cs.AI, cs.CY, cs.SI
- **What it measures, in one sentence:** it defines **time-to-peak and lifespan** of a model's *adoption in the citing literature* — tracking 62 LLMs across more than 108,000 citing papers, 2019–2025, separating active use from background citation — and reports that "release year predicts time-to-peak and lifespan more strongly than architecture, openness, or scale", with each later release year associated with a 27% shorter time-to-peak and a 23% shorter lifespan (abstract, as served).
- Unit of analysis: the model, with citing papers as the observation stream. Endpoint: the shape and width of an inverted-U adoption curve over time. It is a **bibliometric trend study of citation/use dynamics** — it does not measure retirement dates, and it does not measure reproducibility.

### (c) arXiv:2607.24032 — front matter as served, abstract level

- **Title:** "The Half-Lives of Generative-AI Evidence: A 40-Record Audit, a Claim-Currency Framework, and a Reflexive Case of Frontier-Model-Assisted Research"
- **Author:** Carlo Iacono (sole listed author)
- **Identifier:** arXiv:2607.24032v1; **submitted 2026-07-27**
- **Category:** cs.AI
- **Type:** a **hybrid audit + framework paper with a reflexive methods case**, single-authored, unrefereed preprint. Not a primary experiment and not a review.

**The 7/40 and 3/40 figures.** Both are **printed in the abstract**, as served: "**seven supplied a precise dated identifier**" and "**three clearly refreshed model evidence**". I read this source at abstract level only, so:

- I can confirm they are printed **in the abstract**. I **cannot** say which body section prints them, or whether the body gives the same numbers — that is a COULD NOT READ on the body, not an absence.
- Corpus: 40 empirical records published between **18 July 2025 and 17 July 2026**, described in the abstract as "a maximum-variation purposive corpus of 40 empirical records" (the summariser returned this phrase with its own hedge — "roughly; the phrasing is..." — so treat the exact wording as **served-with-uncertainty**; I did not re-fetch, being at the fetch cap).
- **How the 40 were selected:** the abstract names the sampling logic only as **maximum-variation purposive** sampling. The actual selection mechanism, frame, inclusion criteria and search strategy are in the Methods, which I did not read. The entry's description of the corpus as purposive is therefore **supported at abstract level**, but the basis of variation is unread here.
- Coding dimensions, as served: publication route, timing, model identity, model age, use of superseded model families, and whether records refreshed their evidence. Also printed: **median age of the newest named model at appearance = 281 days**, and six proposed reporting practices separating model age from claim currency.
- The abstract states, as served, that the "half-lives" of the title is **metaphorical** and that **no universal decay rate is estimated**, and that the reflexive two-day AI-assisted production case is "a proof-of-practice, not a controlled test of productivity or quality".

### (d) A share of published CONCLUSIONS reversing on migration

**Stated plainly: none of the three prints such a figure, on the read levels achieved.**

- **2609.04699 (full text):** **no such figure appears.** The paper never re-runs anything and never compares outputs across models. The DISCUSSION notes the opposite-direction limitation — that silent weight updates or endpoint changes behind a stable model name are not observable to it, as served: "These behavior changes are invisible to our analysis." That is the paper flagging a **blind spot in its own exposure measurement**, not a measurement of conclusion reversal. Per the ledger's rule 9, this note is not a flag of the gap being checked.
- **2604.07530 (abstract only):** nothing of the kind in the abstract; it speaks of "costs for reproducibility and migration" qualitatively. Whether the body prints such a share is **unread**.
- **2607.24032 (abstract only):** the "three clearly refreshed model evidence" figure counts records whose authors **re-ran or updated their evidence**, which is a reporting-practice count, not a count of conclusions that changed direction. Nothing in the abstract gives a reversal share. Body **unread**.

---

## REGIME

**2609.04699.** Population: PubMed-indexed **original research in biomedicine** (reviews filtered out), 61,077 abstracts, narrowed to the **50 most frequently used** model names. Unit of analysis: the **paper-model mention** (8,931), not the paper (5,242) and not the finding. Instrument: model names extracted by a **GPT-4o agent (gpt-4o-2024-08-06, Azure OpenAI)**, checked against 50 human-reviewed extractions; lifecycle dates taken from **vendor deprecation pages** (OpenAI deprecations, Anthropic's model deprecation log). Threshold: **730 days** between publication date and announced retirement date. Estimand: the **share of mentions whose named model's vendor-announced retirement falls inside that window** — a scheduling fact about vendor calendars relative to publication dates. Comparator: none; this is a one-arm descriptive census with no control condition and no re-execution.

**Where the claim sits.** "42% of 8,931 paper-model mentions" is **inside** this regime as to denominator and unit — provided the reader keeps *mentions*, not *papers*, and keeps *biomedical PubMed*, not science generally. "Median 538 days to retirement" is inside the regime but its denominator is the **retired-or-scheduled subset**, not all 8,931. The word **"exposed" is outside the paper's vocabulary**: the paper says "rapidly outdated", defined by a vendor calendar, and nothing in it measures whether any result actually failed to reproduce. A claim that 42% of biomedical LLM findings **are** irreproducible, or **will** fail, is **outside** this regime — the paper's own framing is a trajectory, "trending toward computational non-reproducibility", not a measured loss.

Two front-matter regime wrinkles: the **search window is stated inconsistently** — abstract says 2022 through **March 2026**, Methods say January 2022 through **July 2026**; and the 42%/41.6% denominator is **post-restriction** to 50 models, so it is not a share of all LLM-using biomedical papers.

**2604.07530.** Regime: 62 models, >108,000 citing papers, 2019–2025, all of science (cs.DL framing), unit = model-year adoption curve. Its 27%/23% figures are **per-release-year associations** in a regression over models, not retirement intervals. Calling it "a second census" of **retirement exposure** mislabels it: it censuses **citation lifespan**, a different endpoint on a different population with a different unit. It is corroborative of a direction, not a replication of a number.

**2607.24032.** Regime: **40 purposively selected empirical records**, 18 Jul 2025 – 17 Jul 2026, unit = record, coded by hand by a single author. 7/40 and 3/40 are **counts over a deliberately non-probability sample chosen for maximum variation**, so they are **not estimates of a population rate** and carry no sampling uncertainty. Any sentence that reads them as "17.5% of the literature" or "7.5% refresh their evidence" is converting a purposive tally into a prevalence, which this design does not support.

## DEFECTS FOUND

1. **"Exposed" is not the paper's word.** 2609.04699 contains neither "exposed" nor "exposure". Its construct is "a cutoff of model retirement within two years of publication date to define a subset of papers which are rapidly outdated shortly after publication". The entry has substituted an epidemiological term the source does not use, and "exposure" imports a hazard framing the paper does not measure.
2. **The 42% is an abstract figure; the body prints 41.6%, and the two definitions are worded differently.** Body: "3,715 (41.6%) involved a model with a confirmed retirement date falling within 730 days of the citing paper's publication date." Abstract: "already retired by the time of official publication **or** is scheduled to retire within two years." The body reports already-retired separately as **256 (2.9%)**; 41.6 + 2.9 = 44.5, not 42. The abstract's disjunction is therefore either redundant or wrong, and 42% is a round-up of 41.6%. The entry should cite **41.6% (3,715/8,931)** as the printed number.
3. **"Median 538 days" is abstract-only; the body prints a MEAN of 546 days.** The paper's body never restates the median. The entry cites a quantity that the source **announces but does not print in its Results text**, and pairs it with no dispersion — none is given anywhere. Whether Table 1 carries a median column is unverified from here.
4. **Denominator drift on the median.** 538 days is an interval over the retired-or-scheduled mentions, not over all 8,931; the entry's phrasing ("42% of 8,931 ... median 538 days") invites reading both figures against the same 8,931 denominator.
5. **Mentions are not papers.** 8,931 mentions come from 5,242 publications. A "42% of mentions" figure restated as "42% of papers" would be wrong, and the per-paper rate is not printed.
6. **Post-restriction denominator.** 8,931 is what survived narrowing to the 50 most-used models out of 61,077 searched abstracts; it is not a census of all LLM-using biomedical papers.
7. **Internal inconsistency in the source itself:** search window given as 2022–March 2026 in the abstract and January 2022–July 2026 in the Methods. Whichever the entry quotes, it should note the source disagrees with itself.
8. **2604.07530 is miscast as "a second census."** It measures citation lifespan and time-to-peak of model adoption across 62 models and >108,000 citing papers — a different endpoint, population and unit from retirement-date exposure. It is directional corroboration, not a second measurement of the same quantity. The entry also cites it without a version while the served version is **v3 (2026-09-25)**, three versions on from the April v1.
9. **2607.24032's 7/40 and 3/40 are purposive-sample tallies** read at abstract level only. They are correctly recorded as abstract-level in the entry, which is good practice; the risk is any later conversion of them into a rate. Also, the exact wording of the "maximum-variation purposive corpus" phrase came back hedged by the summariser and is reported as served-with-uncertainty rather than silently cleaned.
10. **No conclusion-reversal figure exists in any of the three** at the read levels achieved. 2609.04699's remark that silent behaviour changes are "invisible to our analysis" is a note about a **different** absence and must not be logged as the source flagging the reversal gap.

## ROUTES THAT FAILED

- `curl https://arxiv.org/abs/2609.04699` → **curl: (56) CONNECT tunnel failed, response 403**, HTTP 000, 0 bytes. This is the documented **tool-scoped** proxy refusal of CONNECT to curl, not an arxiv.org block: WebFetch served the same host and the same URL immediately afterwards. Recorded, not worked around further; the proxy itself was not inspected or probed.
- No search or fetch was refused by WebSearch/WebFetch. No DOI, no doi.org, no PMC, no Europe PMC and no Unpaywall route was needed, so none was tried; no personal identifier was placed in any URL, header or form.
- **Not attempted, for budget:** full text of 2604.07530 and of 2607.24032 (fetch cap reached at 4 of 5 after two reads of 2609.04699's HTML; one fetch held in reserve was spent on the verbatim-segment pass). Table 1 of 2609.04699 was not read cell-by-cell. These are **COULD NOT READ / NOT READ**, not NOT FOUND — all three papers exist and resolve.

## BEARING ON THE LEDGER ENTRY

The entry's source base is real, open and correctly identified — three existing arXiv preprints, no phantom citations. The headline shape survives: 2609.04699 genuinely censuses biomedical LLM mentions against vendor retirement calendars and genuinely reports that a little over two in five mentions name a model retiring inside two years of publication, on a denominator of 8,931 paper-model mentions. **Mostly holds.**

Three corrections the entry should take:

1. Replace "42%" with the printed **41.6% (3,715 / 8,931 in-scope mentions, 730-day cutoff)**, noting the abstract rounds to 42% and words the definition as a disjunction the body's arithmetic does not support (already-retired is a separate 256, 2.9%).
2. Mark **"median 538 days"** as an **abstract-announced** figure whose body counterpart is a **mean of 546 days** over the retired-or-scheduled subset, with **no dispersion reported anywhere**.
3. Drop the word **"exposed"**. The paper's own construct is a **two-year vendor-retirement cutoff** labelled "rapidly outdated". Nothing in the paper measures a reproducibility failure; its own claim is a **trajectory** — "trending toward computational non-reproducibility" — so the entry must not let the census carry an outcome it never measured.

On the gap the entry is really about: **no share of published conclusions reversing on model migration is printed by any of these three sources.** 2609.04699 cannot print one by construction — it never re-executes an analysis. 2607.24032's "3 of 40 clearly refreshed model evidence" is the closest thing in the batch, and it counts refresh practice over a purposive 40, not direction changes. The absence is genuine and structural at full-text level for 2609.04699, and **unverified-but-unindicated** for the two read at abstract level. That distinction should be preserved in the entry rather than flattened into "none of the literature reports it".
