# VERIFY — Tousset et al., PAGE 15 (2006), abstract 1008

## Citation as the source itself serves it

Front matter as served on `page-meeting.org/?abstract=1008`:

- Abstract number: **1008**
- Meeting: **PAGE 15 (2006)**
- Category as served: **Methodology – Other topics (poster)**
- Title: **"Relation between patients' variable compliance and office blood pressure in treatment-resistant hypertension"**
- Authors, as served (initials-first, not given names): **E. Tousset(1), H. Figueiredo(2), M.P. Schneider(2), O. Bugnon(2), B. Vrijens(1)**
  - (1) Pharmionic Systems Ltd., Visé, Belgium
  - (2) University Outpatient Medical Clinic, Lausanne, Switzerland
- A PDF poster is linked from the abstract page. It was **not** opened (fetch cap reached).

A PAGE abstract has no journal, volume or page numbers. Any citation giving them for this item would be inventing them.

## Read level

**Full text of the abstract**, with one gap, stated precisely:

- **Verbatim**: the whole Methods section, the whole Results section, the whole Conclusions section.
- **Paraphrase only**: the Objectives/Background section. Of it I hold one verbatim fragment, `"results in variable exposure to the treatment"`, and otherwise only the summariser's paraphrase ("Assess how variable dosing histories affect blood pressure in hypertensive patients who don't respond to multi-drug treatment"). That paraphrase is **not** quotable and is not relied on below.
- **Not read**: the linked PDF poster.

### Routes that failed

- The first `WebFetch` of the abstract page **refused verbatim reproduction** of the abstract and returned a summary instead. The host was never blocked and the page served fine; this was a summariser refusal, not an access failure.
- Worked around as the batch protocol prescribes: ordered consecutive segments, each short enough to return whole. **Nothing below is completed by inference.** Two junctions are confirmed by independent overlap:
  - `"...and drug exposure"` + `"summary statistics (sigmoid Emax relation, p<0.0001)."` — a separate query independently returned the junction whole as `"and drug exposure summary statistics (sigmoid Emax relation, p<0.0001)."`
  - `"...SBP collected over time and drug"` + `"exposure recorded prior to the corresponding visits."` — a separate query independently returned `"drug exposure recorded prior to the corresponding visits."`
- No DOI, PMCID, Crossref, doi.org, PMC, Europe PMC or Unpaywall route was needed or attempted. No personal identifier was placed in any URL.
- Budget used: 0 searches, 5 fetches (cap reached). The one open question below (what the brackets denote) is therefore recorded as **unchecked**, not worked around.

## What kind of source this is

A **conference meeting abstract (poster)** — primary analysis, not a review, protocol, guideline or editorial. It reports the authors' own nonlinear mixed-effects model fitted to pooled data from two settings. It attributes no finding to anyone else; there are no citations in the served abstract. It carries no sample-size justification, no model equations and no parameter table — it is an abstract, and the figures below are all it serves.

---

## (a) Existence, authors, title, number, year — front matter only

**Confirmed as served.** Abstract 1008 exists at `page-meeting.org/?abstract=1008`, under PAGE 15 (2006), with that exact title and those five authors in that order.

Two notes on the front matter, neither a contradiction:

1. The page serves **initials only** ("E. Tousset", "B. Vrijens"). The ledger's "Tousset E ... Vrijens B" is consistent with it; no given names are recoverable from this page.
2. The front matter above was read through the summariser's structured reading of the header, **not** captured as a verbatim string, because the refusal landed on that call. The title and author list are high-confidence; I did not re-spend a fetch to quote the header character-for-character.

## (b) The figures

### The 24 mmHg

Verbatim, one whole sentence, uncut:

> "It estimated a 24 mmHg [11-37] decrease in SBP for a typical patient achieving a 100% drug exposure."

Independently confirmed by a separate query returning the tail fragment `"for a typical patient achieving a 100% drug exposure."` whole.

- **Which blood pressure**: **systolic**, and **office**. "SBP" is defined in the Methods as the endpoint of the analysis (`"the impact of variable dosing histories on systolic"` + `"blood pressures (SBP)."`), and the only blood pressure the abstract measures is office: `"Office blood pressures were measured at each clinic visit."` **No ambulatory blood pressure appears anywhere in the abstract.**
- **Direction**: a **decrease** — the abstract's own word. It is the Emax parameter, i.e. the modelled reduction in office SBP at full exposure. The abstract does **not** state the comparator the 24 mmHg is measured against; it says only that the model `"was adjusted for baseline blood pressures (linear relation, p<0.0001)"`. "At 100% exposure" is the abstract's phrasing; "relative to 0% exposure" is Emax convention, not text.
- **The bracket is unlabelled.** The abstract prints `[11-37]` with no statement anywhere in Methods, Results or Conclusions of what the brackets denote. The ledger's "95% CI" is **an interpretation added by whoever wrote the short form, not the abstract's word.** The numbers 11 and 37 are correct as served.

### The half-maximal exposure

Verbatim, one whole sentence, returned identically by two independent queries:

> "Fifty percent of the maximal reduction in SBP was achieved at a drug exposure level of 51 % [26-76]."

- Note the served typography: **"51 %"** with a space. Brackets `[26-76]`, again unlabelled.
- The abstract does **not** use the term EC50 or ED50.

### The sample

Verbatim, reconstructed from **four** consecutive fragments (junctions grammatical, none inferred):

> "The study involved 89 patients coming from two different settings: 1) 44 resistant hypertensive patients treated with at least three anti-hypertensive drugs and recruited in a clinical trial aiming at improving patients' clinical outcome and compliance. 2) 45 uncontrolled patients followed by general practitioners in a clinical practice."

- 44 + 45 = 89. **Confirmed.**
- **But**: only the 44 are described as "resistant hypertensive ... treated with at least three anti-hypertensive drugs". The 45 are **"uncontrolled patients followed by general practitioners"** — the abstract does **not** call them treatment-resistant or state a drug count for them. The title's "treatment-resistant hypertension" therefore does not characterise all 89 patients, and the pooled 24 mmHg is **not** an estimate in a purely treatment-resistant population.

### The model

Verbatim, reconstructed from **two** consecutive fragments, junction confirmed by independent overlap:

> "A sigmoid Emax model was selected to describe the relation between SBP collected over time and drug exposure recorded prior to the corresponding visits."

The sigmoid Emax relation is stated **twice** — once in Methods (above, unhedged, a statement of model choice) and once in Results as a fit statistic: `"and drug exposure summary statistics (sigmoid Emax relation, p<0.0001)."` Neither formulation carries a citation. Neither is hedged.

## (c) How exposure is defined, verbatim

Verbatim, reconstructed from **two** consecutive fragments:

> "The daily indicators were used to define the average number of days with correct dosing in a window of 10 days prior to the measurement of blood pressure."

**Window length: 10 days. Confirmed exactly.** Three things the ledger's short form drops, all material:

1. **This sentence sits in the RESULTS section, not the Methods.** The Methods section contains no day count at all. Anyone re-deriving the exposure definition from the Methods alone will not find the window.
2. **"Correct dosing" means at least one drug, not all of them.** The "daily indicators" the sentence refers back to are defined in the Methods, verbatim (reconstructed from **two** consecutive fragments):

   > "Daily compliance with the treatments was summarised by a binary variable indicating whether the patient took at least one of the drugs as prescribed by the physician."

   In a population on three or more antihypertensives, a day on which one of three drugs was taken as prescribed counts as a day with correct dosing. The exposure variable is therefore **permissive**, and the ledger's bare "correct dosing days" conceals that.
3. **The served quantity is a count of days; the model is reported in percent.** The definition gives "the average number of days with correct dosing" out of 10, while the results are stated at "100% drug exposure" and "51 %". The abstract never states the mapping from days-out-of-10 to percent, nor what "average" is averaged over.

Dosing was recorded electronically, verbatim (reconstructed from **two** consecutive fragments):

> "Antihypertensive drug dosing histories were compiled electronically by medication event monitors (MEMS®), one monitor for each prescribed antihypertensive drug."

## (d) Randomised-arm comparison, and attribution to visit timing

**No randomised-arm comparison. None whatsoever.** The abstract reports no randomisation, no allocation, no arms, no intervention contrast. The 44 patients were `"recruited in a clinical trial aiming at improving patients' clinical outcome and compliance"` — a trial is named as the *recruitment source*, and nothing about its design, arms or results is reported.

**It nowhere estimates how much of a measured treatment effect is attributable to the timing of dosing relative to the visit.** No decomposition, no sensitivity analysis, no bias term, no white-coat-compliance estimate.

What it does instead, in three parts:

1. **A between-setting comparison of compliance** — not of blood pressure, and not between randomised arms. Verbatim, reconstructed from **two** consecutive fragments:

   > "The average proportion of patients who complied with at least one of the prescribed dosing regimens was stable over time and significantly higher in the clinical trial setting (92% vs 81%,p=0.0004)."

   Note the served text has no space in `"81%,p=0.0004"`. The unit here is the proportion of *patients* complying, and the abstract explicitly says it was **"stable over time"**.
2. **An exposure-response model**, fitted across pooled patients, linking office SBP to the 10-day pre-visit exposure summary, adjusted for baseline. Verbatim, reconstructed from **two** consecutive fragments, junction independently confirmed:

   > "The model was adjusted for baseline blood pressures (linear relation, p<0.0001) and drug exposure summary statistics (sigmoid Emax relation, p<0.0001)."
3. **A predictive claim in the Conclusions**, verbatim, reconstructed from **four** consecutive fragments:

   > "This analysis shows a statistically and clinically significant relation between SBP and electronically compiled dosing histories. It allows one to estimate the expected SBP over the entire spectrum of compliance with the prescribed antihypertensive drugs."

### What it measures — unit of analysis, endpoint, comparator, estimand, in its own words

- **Unit of analysis**: the patient-visit. SBP is `"collected over time"` and modelled against `"drug exposure recorded prior to the corresponding visits."` Patients contribute repeated visits; nonlinear **mixed effect** models were used.
- **Endpoint**: office systolic blood pressure. `"Office blood pressures were measured at each clinic visit."` / `"systolic blood pressures (SBP)."`
- **Exposure/regressor**: `"the average number of days with correct dosing in a window of 10 days prior to the measurement of blood pressure."`
- **Comparator**: none in the design sense. The contrast is **within the fitted exposure-response curve** — levels of exposure against each other, adjusted for baseline BP. There is no control group and no untreated group.
- **Estimand**: two model parameters — the Emax (`"a 24 mmHg [11-37] decrease in SBP ... at ... 100% drug exposure"`) and the half-maximal exposure level (`"51 % [26-76]"`), both **associational**, both conditional on baseline BP, both pooled across the trial and general-practice settings. The abstract claims a **"relation"**, not an effect: its own words in the Conclusions are `"a statistically and clinically significant relation"`.

## (e) Anything bounding or discussing the magnitude of a visit-timing effect

**The abstract contains no discussion of visit timing as a source of bias, and nothing that it itself presents as bounding such an effect.** It does not raise the question. Per the batch rule that silence is not a prohibition: the abstract is silent, and its silence should not be read either as denying a visit-timing effect or as flagging one.

The closest material, and exactly how far it reaches:

- The exposure variable is **defined relative to the visit** — `"in a window of 10 days prior to the measurement of blood pressure"` — so the fitted curve does describe how office SBP varies with dosing behaviour in the ten days leading up to the visit. The two parameters (`24 mmHg [11-37]` at full exposure; half-maximal at `51 % [26-76]`) therefore bound the **total exposure-response range over that pre-visit window**.
- That range is **raw material** from which someone could try to derive how much measured office BP could shift if dosing improved just before a visit. But the abstract performs no such derivation, isolates no timing component, and offers no estimate of a visit-proximity or "toothbrush effect" magnitude. Attributing a visit-timing bound **to this abstract** would be attributing an inference to a source that does not make it.
- The one statement adjacent to the question points the other way: compliance was `"stable over time"`. That is about the between-setting compliance proportion, not about a pre-visit ramp-up, and it is not offered as evidence against visit-timing effects.

---

## Defects

1. **"95% CI" is not in the source.** The abstract prints `[11-37]` and `[26-76]` with no label, and nowhere in Methods, Results or Conclusions states what the brackets denote. The ledger's "95% CI" is an added interpretation. **Unchecked, not disproved**: I hit the 5-fetch cap and did not re-read the Objectives section or the linked PDF poster, either of which could define the brackets. Recorded as unresolved rather than worked around.
2. **"Correct dosing days" conceals a permissive definition.** The daily indicator is `"whether the patient took at least one of the drugs as prescribed"` — one of three or more antihypertensives counts as a correct-dosing day. The ledger short form reads as full adherence to the regimen; it is not.
3. **The 10-day window is in the Results, not the Methods.** A reader checking the exposure definition in the Methods will find no day count. Worth recording because it makes the definition easy to mis-locate or report as absent.
4. **"44 trial plus 45 general-practice patients" obscures that only the 44 are resistant.** The 45 are `"uncontrolled patients followed by general practitioners"`, with no drug count and no resistance criterion stated. The pooled estimates are not estimates in a treatment-resistant population, despite the title.
5. **Units mismatch between definition and results, unreconciled in the source.** Exposure is defined as a number of days out of 10 and reported as a percentage (100%, "51 %"); the mapping is never stated.
6. **The source is a conference poster abstract.** No parameter table, no model equations, no sample-size justification, no citations. The figures are unreviewed in the journal sense, and there is no volume or page number to cite.
7. **Claim (d) is clean: the abstract reports no randomised comparison and no visit-timing attribution.** Noted here as a confirmed negative, so it is not later mistaken for something unchecked.
8. **Objectives section read only in paraphrase**, after the summariser refused verbatim reproduction on the first call. Methods, Results and Conclusions are verbatim. The linked PDF poster was not opened.
9. **Every multi-fragment quotation above is a reconstruction** from ordered consecutive segments, with the fragment count stated at each. Two junctions were verified by independent overlapping returns; the rest are grammatical joins of consecutive returns. **No cut string was completed by inference.**
