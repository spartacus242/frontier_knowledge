# VERIFY - Duveau et al. 2024 (eLife 88750) does not vary osmotic amplitude, prints no cycle count, and reports a population-normalized death rate attributed to glycerol accumulation
Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261023-03 asserts five things about its closest neighbour, Duveau F. et al. (2024), 'Yeast cell responses and survival during periodic osmotic stress are controlled by glucose availability', eLife 12:RP88750, DOI 10.7554/eLife.88750.3:

1. amplitude is held FIXED at 1 M sorbitol, so no stress-life curve is constructible;
2. the paper prints NO cycle count anywhere, and the ~25 and ~7 cycle figures in adversary 1's log are that adversary's own arithmetic from the stated periods, labelled as such;
3. it sweeps PERIOD, which the candidate fixes;
4. it reports a CHAMBER-AVERAGED death rate rather than a per-cell hazard;
5. it attributes repetition-dependent bursting to osmolyte accumulation rather than wall damage.

I re-tested legs 1, 2, 4 and 5, and the Duveau half of leg 3, from the documents. I was not shown the candidate, so the half of leg 3 that says "which the candidate fixes" is OUT OF MY SCOPE and I do not grade it.

## READ LEVEL

One source, opened four times at two routes.

Duveau F. et al. (2024), eLife 12:RP88750, DOI 10.7554/eLife.88750.3 — **PARTIAL**.
- Sections reached: Results (body text), all figure legends served on the article page for Figures 1-7, and the Materials and methods subsections covering media composition, manual death annotation, and the division-rate / death-rate calculation.
- Routes used: `https://elifesciences.org/articles/88750` (default offset, then offset 15000 and offset 40000) and `https://elifesciences.org/articles/88750v1.pdf` (default offset, then offset 30000).
- **NOT reached, and therefore silent in both directions:** the front-matter author block, volume and title as printed; the individual figure-supplement panels; the Source Data files; the reviewed-preprint assessment and public reviews. In particular I never saw an author list in the front matter, so I assert no correction to "Duveau F. et al." - see CITATION FRONT MATTER below.
- All quotation below is **summariser-served**, and this summariser caps verbatim quotation at roughly 125 characters. Where I needed a longer passage I requested ordered consecutive segments and say so at the point of use. I completed no cut string by inference.
- The first article-page fetch reported that "The page text cuts off partway through the Materials and methods section, after the strain tables" - which is why the Methods facts below come from the PDF route, not the article page. That is a COULD NOT READ on one route, not a NOT FOUND.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Read level and routes
Answered above: PARTIAL, two routes, four fetches on the paper plus one on axis labels. Nothing here is an abstract-only read; the Methods media sentence and the death-rate construction both came back.

### (b) Is the osmotic amplitude varied anywhere, or fixed? - FIXED, and the Methods sentence is binary, not graded

Methods, media composition (PDF route):

> "This base was complemented either with 2% glucose, 0.1% glucose, or no glucose and with 1 M sorbitol or no sorbitol."

with the base itself:

> "6.7 g/L Yeast Nitrogen Base without amino acids (BD Difco) and 0.8 g/L CSM of amino acids (MP Biomedicals) in ddH2O."

Check the grammar on both sides of the cut: the sorbitol clause is "**with 1 M sorbitol or no sorbitol**" - a two-state switch. The disjunction that *is* graded in the same sentence is the glucose one ("2% glucose, 0.1% glucose, or no glucose"). So the sentence that would carry an amplitude sweep if one existed instead carries a glucose sweep and an osmotic on/off.

Corroborating uses in Results and legends: "fluctuations between 1 M sorbitol and no sorbitol"; Figure 1 legend "hyperosmotic stress (1 M sorbitol)"; Figure 5 legend "fluctuations of 2% glucose and 1 M sorbitol at a period of 24 min".

Three separate fetches, asked directly whether any second sorbitol concentration appears, each returned none. Every osmotic condition I read is 1 M or zero.

**Verdict: leg 1 HOLDS on the osmotic axis.** One narrowing: the entry's bare "holds amplitude FIXED" should read "holds *osmotic* amplitude fixed", because the paper does grade a second stressor's amplitude (glucose 2% / 0.1% / none). A reader of the entry could otherwise take "amplitude fixed" to mean nothing continuous is varied in the paper, which is false.

### (c) Is any CYCLE COUNT printed? - NOT PRINTED in anything I opened; the paper prints DURATIONS instead

I searched for a count four ways: in Results body text, in every figure legend served, in Methods, and specifically against axis labels, table columns and legend text. No count came back on any pass. What is printed in its place is time:

> "at periods ranging from 12 to 480 min"

> Figure 1 legend: "for 12-24 hr depending on the experiment"

> "Over a 10 hr AS experiment with a fluctuation period of 24 min"

> "When hyperosmotic shocks were periodically applied for 48 min every 96 min"

> "short (48 min) and long (10 hr) pulses of 1 M sorbitol"

> "a single pulse of 1 M sorbitol without glucose for 4 hr"

On the axis question specifically, the fifth fetch reported that the served text gives no axis titles verbatim at all, only the plotted quantities: Fig. 2a-b average division rate against frequency of fluctuation; Fig. 2c overlaid Loess regressions; Fig. 2d-f division rate over time; Fig. 3a-b division rates by condition and 3c-d division rate over time within a 96 min period; Fig. 4a division rates by strain and condition, 4b-c over time; Fig. 5c death rates, 5d population growth rates; Fig. 6c Hog1-GFP nuclear enrichment over time, 6d cell area over time; Fig. 7b-c fold change of PSTL1-mCitrine fluorescence over time. **None of those is a cycle index.** Note the honest weakness in this: the axis *titles* were not served, so my evidence against a cycle-count axis is the enumerated list of plotted quantities, not a reading of the axis strings.

**PUBLISHED IS NOT PERFORMED applies in reverse here.** I cannot name a cycle-count number and say where it is printed, because none was served. The paper therefore does not report a cycle count at all - it **ANNOUNCES the periodic protocol by its period and total duration** and leaves the count unstated.

**AN UNENUMERATED UNIVERSAL.** The entry says "prints NO cycle count **anywhere**". That is a universal over the parts of one document. Instances I OPENED: Results body, Methods (media, manual death annotation, rate calculation), figure legends for Figures 1-7, and the enumerated plotted quantities. Instances I did NOT open and cannot speak for: the individual figure-supplement panels, the Source Data files, and the front matter. So the correct grade is **true over the instances I opened, unenumerated over the supplements and source data** - not "established".

**On adversary 1's ~25 and ~7.** The entry's labelling is correct, and I can reproduce both numbers, so here is the check. **THIS IS MY OWN ARITHMETIC, not the paper's:** 10 hr = 600 min at a 24 min period gives 600/24 = **25 cycles**; a 48-min-in-96-min protocol run for the ~11 hr the summariser reported gives 660/96 = **6.875 ~ 7 cycles**. Both fall straight out of printed durations and printed periods, which is exactly what makes them derived rather than printed. Carry the source's own looseness through: the paper's durations are themselves approximate ("for 12-24 hr depending on the experiment"), and the 11 hr figure came to me only as summariser prose, never as a verbatim quotation - so the "~7" rests on a duration I did not see printed. The paper states no uncertainty on these durations, so neither derived count carries an interval.

**Verdict: leg 2 HOLDS, with "anywhere" downgraded to "nowhere in the body text, Methods, or any figure legend or plotted quantity opened; supplements and source data not opened".** The entry's labelling of the ~25 and ~7 as adversary 1's own arithmetic is accurate and should stand exactly as written.

### (d) Unit of the survival/death measurement - per-capita rate built from individually scored cells, then averaged over chambers

Deaths are identified on individual cells, by eye:

> "we manually added to CSV files a parameter indicating when cell death was observed"

> "based on visual inspection of bright-field images"

with the two visual signatures given in Results:

> "some cells suddenly burst with their nucleus staying in the growth chamber"

> "others became opaque and stopped growing with their nucleus remaining completely still"

> Figure 5 legend: "White arrows indicate nuclei of representative dead cells"

But the *reported quantity* is a slope, not a per-cell outcome. Methods (requested as ordered consecutive segments; the formula itself came back garbled in the source text and I therefore do NOT quote it):

> "The average death rate was calculated using a similar approach:"

> "it corresponded to the slope of the linear regression of the cumulative sum"

> "over time where Ndeath(t) was the number of death events observed in the tracking window between t and t + 1."

The summariser describes the formula as dividing N_death(t) by N_window(t) and summing over time. **Label: that division is the summariser's description of a garbled formula, not a quotation.** The two verbatim fragments above do establish the numerator's definition.

And the plotted bars are replicate means across chambers:

> Figure 5 legend: "(c, d) Death rates (c) and population growth rates (d) of the reference strain and seven deletion mutants under IPS"

> "Bars show mean rates measured in different growth chambers."

> "The initial number of cells analyzed among replicates ranged from 97 to 467 in (c, d)."

Reported magnitude, so the quantity is named rather than gestured at: Results give "2.4x10-3 min-1 for wild-type".

**NUMERATOR CLASS, with exclusions.** "the number of death events observed in the tracking window between t and t + 1" - death events, scored manually from bright-field appearance (bursting, or opacity plus growth arrest plus a motionless nucleus). Excluded by construction: anything outside the tracking window; anything not visually classifiable as death in bright field; and - since the event is a *count in a time bin* - the identity of which cell died.

**DENOMINATOR, checked against the near neighbours it is not.** N_window(t), the nuclei in the tracking window at time t. It is *not* the initial cell count (that is a separate number, "97 to 467"), *not* the chamber (the chamber is the replicate unit for the *mean*, one level up), and *not* a cell-cycle or generation count.

**OVERLAP IN BOTH DIRECTIONS.** Against the entry's phrase "chamber-averaged death rate rather than a per-cell hazard":
- What the paper's quantity **misses** relative to a per-cell hazard: individual failure times, any distribution of failure times across cells, censoring treatment, per-cell covariates, and any survival curve. There is no time-to-event per cell.
- What it **includes that "chamber-averaged" understates**: the rate *is* normalized by the number of tracked nuclei, so it is a per-capita instantaneous rate with units min-1, not a raw per-chamber death count; and the events *are* scored on individually identified cells with individually tracked nuclei. The chamber averaging sits at the replicate level, on top of an already per-capita rate.

So this is an **aggregate per-capita hazard averaged over chambers** - which still denies the per-cell failure endpoint the entry's argument needs, but is a step closer to one than "chamber-averaged" implies.

**Verdict: leg 4 HOLDS in its load-bearing direction, with the wording narrowed.** Recommend: "a population-normalized death rate (death events per tracked nucleus per minute, slope of a cumulative-sum regression), averaged across growth chambers - deaths are scored on individually tracked cells but no per-cell failure times are reported."

### (e) What is repetition-dependent death or bursting attributed to? - glycerol accumulation, hedged; the one cell-wall mention runs the OTHER way

Requested as ordered consecutive segments from the section the source titles "Cell death depends on the dynamics of the two stresses". The six segments returned, in order:

> 1. "We noticed a high proportion of wild-type cells dying under AS (Figure 5a): some cells suddenly burst"
> 2. "suggesting cell lysis occurred due to hypo-osmotic shock following removal of" [1 M sorbitol]
> 3. "We reasoned this could be due to lower intracellular accumulation of glycerol under IPS,"
> 4. "when hyperosmotic stress is applied in the absence of glucose."
> 5. "Under AS, the presence of glucose during hyperosmotic stress could lead to faster intracellular accumulation of glycerol,"
> 6. "resulting in stronger hypo-osmotic shock and cell lysis when the sorbitol concentration suddenly drops."

**This is a reconstruction from six fragments.** Segments 3+4 join into one sentence and 5+6 join into one sentence; I verified each junction reads grammatically and I did not bridge 2 to 3 or 4 to 5, which are separate sentences. Segment 2's trailing object ("removal of ...") was cut by the 125-character cap; the "1 M sorbitol" in brackets is supplied from the first fetch, which served that same clause as "suggesting cell lysis occurred due to hypo-osmotic shock following removal of 1 M sorbitol" - so it is a cross-fetch confirmation, not my inference.

**WHAT THE OPENING WORDS SCOPE, sentence by sentence.** This is where the entry's leg 5 gets both stronger and more qualified.

- Segment 2, opener **"suggesting"**: scopes the mechanism as an *inference drawn from the observed bursting*, attached to the preceding observation clause. The clause **ASSERTS** hypo-osmotic shock on sorbitol removal as the proximate cause, but assertorically weakly - "suggesting", not "showing".
- Segments 3+4, opener **"We reasoned this could be due to"**: scopes everything after it as the authors' *hypothesis*, and the trailing "under IPS, when hyperosmotic stress is applied in the absence of glucose" restricts it to the IPS arm. The clause **ASSERTS** the glycerol mechanism only hypothetically.
- Segments 5+6, opener **"Under AS,"**: scopes the whole claim to the *alternating-stress condition*, i.e. to the case where glucose is present during hyperosmotic stress. It makes no claim about IPS, and none about osmotic cycling in general. "**could lead to**" hedges the causal step. The clause **ASSERTS** glycerol accumulation as the cause, inside that condition, hedged.
- **"these observations are consistent with cell death being due to glycerol accumulation"**, opener **"these observations are consistent with"**: scopes the mechanism as *compatible with* the data. This clause neither asserts nor denies the quantity; it **RECORDS A CONSISTENCY CHECK**. Per the discipline on preferring the hedged formulation, this and segment 5 - not any barer restatement - are the ones the entry should carry.
- **"since it takes time for cells to accumulate an amount of glycerol sufficient to cause bursting after hypo-osmotic shock"**, opener **"since"**: scopes the clause as *the reason offered for an observed time dependence*. Read what the dependence is on: accumulation **time within a pulse**. This is a *pulse-duration* dependence, not a *repetition-count* dependence. The clause **ASSERTS** a duration mechanism and says nothing about cumulative damage across cycles.
- Cell wall, the only mention, two segments: **"Under this condition, the particularly low division rate of sic1(T173A) cells may lead to strengthened cell wall,"** / **"decreasing the probability of cell bursting after hypo-osmotic shocks."** Opener **"Under this condition,"** scopes it to one condition and one mutant, sic1(T173A); "**may lead**" hedges. Direction matters: this invokes wall **strengthening as protective**, not wall damage as accumulating injury. The clause therefore **RECORDS A MOVE AWAY** from a wall-damage account of bursting.

**Verdict: leg 5 HOLDS and is stronger than the entry states on the wall half** - wall damage is not merely absent as a proposed cause; the single wall sentence runs opposite, treating the wall as protective when strengthened. **But leg 5 is overstated on the repetition half.** The paper's mechanism is indexed to *time under stress within a pulse*, and the entry's "repetition-dependent bursting" imports a cycle-count dependence the paper does not claim. Narrow to "duration-dependent bursting".

### (f) Which variable is swept - PERIOD. Duty cycle fixed at 50%. Pulse duration varied only in one-off experiments.

Swept:

> "at periods ranging from 12 to 480 min"

Values served: Figure 2 at 12, 24, 48, 96 and 480 min, with 192 and 384 min also mentioned in Results ("at a fluctuation period T=384 min"); dual-stress experiments at 24 and 96 min. One caution carried from the third fetch: "A 26 min period appears only as a calculated intersection point in Figure 2c, not as a tested condition" - so 26 min is not a swept value.

Held fixed:

> "cells were exposed to 1 M sorbitol half of the time in all conditions"

> "glucose depletion and 1 M sorbitol were applied alternatively for half a period each"

> "for half a period followed by the addition of 2% (or 0.1%) glucose"

So duty cycle is 50% throughout, including "periodically applied for 48 min every 96 min", which is also 50%.

Varied, but only as single non-periodic exposures: "a single pulse of 1 M sorbitol without glucose for 4 hr" and "short (48 min) and long (10 hr) pulses of 1 M sorbitol".

**Verdict: the Duveau half of leg 3 HOLDS.** Period is the swept axis; duty cycle is fixed at 50%; pulse duration moves only in one-off pulse experiments, not as a periodic-protocol sweep. Whether the candidate fixes period I cannot check - the candidate was not supplied to me, and I decline to infer it.

### (g) Does this paper supply a cycle-count axis with a per-cell failure endpoint?

No: it supplies a **period** axis (12-480 min) against division rate, and its death measurement is a **population-normalized rate in min-1 averaged over growth chambers**, so neither the cycle-count axis nor the per-cell failure endpoint is present in anything I opened.

## REGIME

Duveau et al. 2024, in the paper's own terms.

- **Population / unit of analysis:** *S. cerevisiae*; a reference strain plus "seven deletion mutants", plus sic1(T173A), and reporter strains carrying Hog1-GFP and PSTL1-mCitrine. The analysed unit is the tracked nucleus, aggregated to a per-capita rate, then averaged: "Bars show mean rates measured in different growth chambers." Cohort size "ranged from 97 to 467" initial cells per replicate; a separate single-cell measurement is "measured for 30-65 cells from four or five fields of view" (Figure 7).
- **Operating condition:** periodic switching in a microfluidic device between media drawn from "either with 2% glucose, 0.1% glucose, or no glucose and with 1 M sorbitol or no sorbitol"; periods "ranging from 12 to 480 min"; 50% duty cycle; experiments run "for 12-24 hr depending on the experiment".
- **Instrument:** time-lapse bright-field plus fluorescence microscopy of microfluidic growth chambers, with nucleus tracking and CSV-level annotation.
- **Threshold / category:** death is a manual visual category - "based on visual inspection of bright-field images" - with two recognised appearances, sudden bursting and opacity-plus-arrest-plus-motionless-nucleus. No automated or fluorescent viability threshold was served.
- **Rate construction:** slope of a linear regression of a cumulative sum whose per-bin term has numerator "the number of death events observed in the tracking window between t and t + 1" and denominator the nuclei in that window; reported in min-1, e.g. "2.4x10-3 min-1 for wild-type".

**Does the claim sit inside this regime?** Yes - uniquely so, because the entry's claim is a claim *about this paper's design*, not a claim graded against its results. Each of legs 1, 2, 4, 5 and the Duveau half of 3 is a question about what the regime contains, and all five are answerable inside it. Nothing here needed transporting outside the paper's assumptions.

## DEFECTS FOUND

1. **"holds amplitude FIXED at 1 M sorbitol" - right axis, missing qualifier.** True of the osmotic axis, and the Methods sentence is explicitly two-state ("with 1 M sorbitol or no sorbitol"). But the same sentence grades glucose ("2% glucose, 0.1% glucose, or no glucose"). Insert "osmotic" so the leg cannot be read as "the paper grades nothing".

2. **"prints NO cycle count anywhere" - an unenumerated universal.** True over Results, Methods, every figure legend served, and the enumerated plotted quantities for Figures 1-7. Not enumerated over the figure-supplement panels or the Source Data files, which I did not open. Also worth recording: the axis *titles* were never served verbatim, so the no-cycle-axis finding rests on the list of plotted quantities rather than on reading the axis strings. Downgrade "anywhere" accordingly.

3. **"reports a CHAMBER-AVERAGED death rate rather than a per-cell hazard" - directionally right, quantitatively imprecise.** The rate is normalized by tracked nuclei, so it is per-capita with units min-1, and the death events are scored on individually tracked cells. The chamber average sits above that. The entry's load-bearing point survives - no per-cell failure times, no survival curve - but "chamber-averaged" understates the construction by one level.

4. **"attributes repetition-dependent bursting to osmolyte accumulation" - "repetition-dependent" is the entry's word, not the paper's.** The paper's time dependence is glycerol accumulation *time within a pulse* ("since it takes time for cells to accumulate an amount of glycerol sufficient to cause bursting"), and the pulse experiments that ground it are "short (48 min) and long (10 hr) pulses", i.e. duration contrasts. Replace with "duration-dependent".

5. **The attribution's hedging is dropped.** Every formulation of the glycerol mechanism is hedged: "We reasoned this could be due to", "could lead to", "consistent with cell death being due to glycerol accumulation". An entry that says the paper "attributes" bursting to osmolyte accumulation should carry at least one of those hedges, and should carry the "Under AS," scope, which restricts the strongest formulation to the alternating-stress arm.

6. **One finding that strengthens rather than weakens the entry.** The entry says the paper attributes bursting to osmolyte accumulation "rather than wall damage". The only cell-wall sentence served is better than neutral for the entry: it proposes a *strengthened* wall as protective in one mutant under one condition, which records a move away from wall damage as a mechanism rather than merely omitting it.

7. **CITATION FRONT MATTER - not verified, no correction asserted.** I never reached the front-matter author block, title line, or volume/article designation, because the budget went on the Methods and Results passages the sub-claims required. I therefore make **no** correction to "Duveau F. et al. (2024) ... eLife 12:RP88750, DOI 10.7554/eLife.88750.3". The DOI and the article number resolved to a document whose content matches the entry's description, which confirms the identifier routes correctly but is not a front-matter read of the authors. Treat the author list, volume and title as UNCHECKED, not as confirmed.

## ROUTES THAT FAILED

- `https://elifesciences.org/articles/88750` at default offset: served Results and figure legends but **truncated inside Materials and methods** - reported as cutting off "partway through the Materials and methods section, after the strain tables". Offset 40000 on the same URL also failed to reach the microfluidics/media subsection, returning only the "Yeast strains" subsection. This is a route limitation, a COULD NOT READ on that route, and not evidence that the paper lacks a media Methods subsection - the PDF route then served exactly that sentence.
- The death-rate **formula** came back garbled in the source text on the PDF route; the summariser declined to quote it and described it instead. I treat the description as description, not quotation, and rely only on the two verbatim fragments defining the numerator.
- No route failed outright: no 403, no TLS problem, no proxy refusal. I used no WebSearch, because the DOI and article number located the document on the first attempt.
- Not attempted, for want of budget: the figure-supplement panels, the Source Data files, and the front matter. **These are COULD NOT CHECK, not negative findings.**

## BEARING ON THE LEDGER ENTRY

**HOLD the entry, with four narrowings and one unchecked front matter.**

The neighbour does what the entry says it does, and does not do the thing that would make the candidate a disguised known. Concretely: the osmotic amplitude is a two-state switch in the Methods media sentence, so no stress-life curve can be built from it; no cycle count was served anywhere I looked; the swept axis is period over 12-480 min at a fixed 50% duty cycle; and the death endpoint is a per-capita rate in min-1 averaged over growth chambers, with no per-cell failure times. Sub-claim (g) therefore answers no on both halves at once - no cycle-count axis, no per-cell failure endpoint. The entry's disqualification of this neighbour stands.

Narrow these four pieces of wording in place:

- Leg 1: "amplitude" -> "**osmotic** amplitude", since glucose amplitude is graded in the same Methods sentence.
- Leg 2: "prints NO cycle count **anywhere**" -> "prints no cycle count in its body text, Methods, or any figure legend or plotted quantity; figure supplements and Source Data not opened". The universal is true over what was opened and **unenumerated** beyond it.
- Leg 4: "chamber-averaged death rate" -> "population-normalized death rate (death events per tracked nucleus per minute, as the slope of a cumulative-sum regression), averaged across growth chambers". The entry's conclusion is unaffected; its description was one level too coarse.
- Leg 5: "repetition-dependent bursting" -> "duration-dependent bursting", and carry a hedge plus the "Under AS," scope. The paper's glycerol mechanism is indexed to accumulation time within a pulse, never to a number of repetitions - which, note, is itself further support for the entry, since it means the neighbour does not even possess a repetition-indexed failure account to compete with the candidate's.

**Leave leg 2's labelling of adversary 1's arithmetic exactly as written.** The ~25 and ~7 are not printed in the paper, and both reconstruct directly from printed periods and durations (my own arithmetic: 600/24 = 25; 660/96 = 6.875). The entry's decision to label them as that adversary's own arithmetic is correct and is the right way to carry them. One caveat for the record: the 11 hr duration behind the "~7" reached me only as summariser prose, never as a verbatim quotation, so that derived count is the softer of the two.

**One thing this check does not settle.** The clause "sweeps PERIOD, **which the candidate fixes**" is half about a document I was not given. I verified the Duveau half and decline the candidate half rather than infer it. If the ledger wants that half closed, the kind of document that could close it is the candidate's own protocol specification - which is not this paper, and I name no substitute for it.

**And one promotion condition, if the entry's authors want the neighbour's disqualification made unfalsifiable rather than merely unrefuted.** The remaining soft spot is defect 2: a cycle count could in principle sit in a figure-supplement panel or a Source Data column that nobody has opened. Converting leg 2 from "unenumerated" to "enumerated" needs the figure supplements and Source Data files for Figures 2 and 5 opened and listed. That is a bounded, nameable task on a document kind that would genuinely settle it - the paper's own supplementary files - and until it is done, leg 2 should read as true-over-what-was-opened.
