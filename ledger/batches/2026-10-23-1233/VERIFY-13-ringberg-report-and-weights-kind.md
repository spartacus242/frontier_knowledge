# VERIFY - The Ringberg report is still unopened (both HAL records share one bot-block), and the weights leg's kind premise is unenumerated over zero in-venue traditional assessments
Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

Entry UQ-20261023-13, field 'VULNERABILITY OF THIS REJECTION', verbatim as handed to me:
"SINGLE UNOPENED SOURCE MOST LIKELY TO SETTLE IT: Schmid-Fetzer et al., 'Assessment techniques, database design and software facilities for thermodynamics and diffusion', Calphad 31 (2007) 38-52 ... Nobody opened it: adversary #3's fetch of hal-00162131 returned an Anubis bot-protection interstitial (error code 9e4edb5b6b850c41) and stopped on budget; the untried routes are hal-00474878 and the ScienceDirect article page."

And the weights leg's own falsification condition, verbatim from 'Strongest remaining objection': the weights leg "would not survive a traditional-assessment paper that printed per-dataset weights and its free-parameter list".

Two things were to be tested: (i) whether the named settler opens by an untried route and what it says (sub-claims 1, 2, 3, 6); (ii) whether the KIND premise behind the weights leg is true over actual instances (sub-claim 4), plus the second nominee (sub-claim 5).

## READ LEVEL

**Schmid-Fetzer et al., Calphad 31 (2007) 38-52 - COULD NOT READ (one route FAILED, one route NOT REACHED on budget).**
- hal-00474878 (the entry's first "untried route"): TRIED by me at https://hal.science/hal-00474878/document. **Route failure.** The server returned the same Anubis bot-protection interstitial as hal-00162131, with the **identical error code 9e4edb5b6b850c41**, page title "Oh noes!", robots `noindex, nofollow`. No front matter, no headings, no body. This is a **host-level block on hal.science**, not a property of either record - so hal-00474878 was never an independent route, and the entry's two-route hope was one route.
- ScienceDirect article page: **NOT REACHED - budget stop, not a route failure.** I could not establish a DOI or PII for the article within budget. The entry carries no DOI (an intake defect in the entry itself: it nominates a settler it cannot address). A Calphad vol. 31 iss. 1 contents listing at https://ibl.kb.nl/articles/0000000010576/31/1 confirms the article exists at **pp. 38-52**, first author listed as **"Schmid-Fetzer, R."**, but that page **prints no DOI and no link**. A metadata lookup at api.semanticscholar.org/graph/v1/paper/search returned `client_error` with **nothing of the page retrieved**.
- Consequence, stated plainly: **sub-claims 2, 3 and 6 are COULD NOT CHECK.** The document's silence is not available to either side. Nobody - the record, three adversaries, or me - has read a word of its body.

**Lukas, Fries & Sundman, "Experimental data used for optimization" - SUMMARY/ABSTRACT ONLY.** Served at https://www.cambridge.org/core/books/abs/computational-thermodynamics/experimental-data-used-for-optimization/C11C5ADE63877FDBD87936B2DD6CA9AF (reached by a 302 from the entry's resolve.cambridge.org URL, which I followed). Summary text only; chapter body behind a purchase/login wall.

**Paulson, Zomorodpoosh, Roslyakova & Stan, "Comparison of statistically-based methods for automated weighting of experimental data in CALPHAD-type assessment" - FULL TEXT** (accepted manuscript) via https://www.osti.gov/pages/servlets/purl/1592101. **No front matter on that manuscript**: journal name, volume, pages, year and DOI are NOT printed on the file I read, so I cannot confirm from the document that it is in Calphad. Treat its venue as NOT ESTABLISHED.

**In-venue traditional assessment papers (Calphad or J. Phase Equilib. Diffus.) opened by me: ZERO.** Budget was exhausted locating the named settler.

## WHAT THE SOURCE SAYS (quotations as served)

**Lukas, Fries & Sundman - the whole of what is served.** Two consecutive-sense excerpts from the chapter summary, as returned:
> "For numerical use the parametric functions described in chapter 5 must be assessed using experimental data."

Scope check: the opening words "For numerical use" scope the necessity to numerical application. The clause **ASSERTS** a requirement to use experimental data. Modality: bare, normative ("must"). It is a **necessary** condition on numerical use, not a sufficient one, and it says nothing whatever about weights.

> "Since experiments are expensive and time-consuming, all data available in the literature should be sought"

Scope check: "Since experiments are expensive and time-consuming" scopes a **reason**; the clause that follows is a **RECOMMENDATION** ("should be sought"), bare not hedged, about data *gathering*. It **records no quantity** and is not about weighting. The grammar on the right of the cut is incomplete as served ("should be sought" - the object clause continues), so I rely on it only for its modality, not its content.

The summary served **contains no sentence on how weights are chosen, assigned, or reported.** Sub-claim 5 is therefore NOT ANSWERED: the nominee is still unopened at the level the question needs.

**Paulson, Zomorodpoosh, Roslyakova & Stan (full text) - what it prints.** It prints all three of the things the weights leg says are not printed:
- **Per-dataset numerical weights.** Table 4, caption as served: "Comparison of dataset weight rankings (pure Al)." Printed values: dataset **51MAE [23]** - frequentist weight **0.000246**, Bayesian (normalized) weight **0**; dataset **62ROR [37]** - frequentist weight **1**, Bayesian **0.999659**. Table 6 (Al, cross-validation) gives 62ROR [37] a weight of **1** from an RSE of **0.001041**. Weights are **dimensionless**, frequentist range [0, 1], rescaled Bayesian range [0, 1]. Denominator: one weight **per literature dataset** of a **pure element's heat capacity**. Tables 5 and 7-9 carry the same for Al and Hf. Figure 3 plots the weights but prints no values.
- **The free-parameter list.** Tables 2 and 3 list the fitted segmented-regression parameters **theta_D, beta_1, beta_2, alpha, tau** for Al and Hf, with and without weights, under both methods; theta_D in **Kelvin**, no units stated for the rest.
- **The list of included studies.** Tables 4-9 carry reference codes (51MAE [23], 63KNE [49], ...) resolved by refs. 23-49.
- On traditional practice it states, as served: "each dataset will be assigned a weight based on the knowledge and intuition of the expert". The paper **does not say** whether such expert weights are normally reported. I ran only the one aimed request at this document for a "normally reported" statement; I did not get a second sweep, so I record this as a one-sweep result, not an absence.

**Calphad vol. 31 iss. 1 contents (ibl.kb.nl), as served.** The issue carries, besides the nominated paper: Zinkevich, "The Ringberg workshop 2005 on Thermodynamic Modeling and First-Principles Calculations"; Turchi, "Interface between quantum-mechanical-based approaches, experiments, and CALPHAD methodology"; Hallstedt, "Thermodynamic models for crystalline phases. Composition dependent models for volume, bulk modulus and thermal expansion"; plus ordinary assessments (Zoro, "Thermodynamic assessment of the Ag-Au-Bi system"; Guo, "A thermodynamic description of the Gd-Mg-Y system"; Wang, "Thermodynamic description of the Ca-Ga system"; Nakano, "A full thermodynamic optimization of the Zn-Fe-Al system ..."). This **corroborates the entry's characterisation** of the nominee as a Ringberg-2005 group report in a Ringberg issue. **No title in the issue names a round-robin or inter-comparison.** That is a TITLE-LEVEL observation about one issue's contents and is **not** a finding about what the nominated paper's body does or does not describe.

## REGIME

**Paulson et al. (the only full text I read).** Population: **two pure elements**, Al and Hf. Unit of analysis: **one literature dataset of low-temperature/standard heat capacity per weight**. Instrument/model: a **segmented regression** Cp model with parameters theta_D, beta_1, beta_2, alpha, tau. Operating condition: weights computed **algorithmically**, by a frequentist criterion and by a Bayesian criterion, with a cross-validation variant. Threshold: weights normalised to [0, 1].

Does the claim sit inside that regime? **No.** The weights leg's falsification condition names "a traditional-assessment paper". Overlap in both directions, as the discipline requires:
- What Paulson et al.'s class **MISSES**: expert-assigned per-dataset weights inside a conventional multicomponent phase-diagram/thermochemical optimisation - the exact class the premise is about. Its own sentence puts expert weighting outside what it does: weights there are "based on the knowledge and intuition of the expert", which the paper's methods replace.
- What it **INCLUDES that the claim excludes**: machine-derived statistical weights for a unary Cp regression. A number one word away - "weight" - is a different quantity here.

**Lukas, Fries & Sundman.** Regime not establishable: only the chapter summary was served.

**Schmid-Fetzer et al.** Regime not establishable: never opened by anyone.

## DEFECTS FOUND

1. **The entry's two "untried routes" were one route.** hal-00474878 returns the identical Anubis error code (9e4edb5b6b850c41) as hal-00162131. The block is on hal.science. Adversary #3's description of hal-00474878 as the "second HAL record of the same paper" is consistent with what I saw, but a second record behind the same bot wall is not a second route.
2. **The entry nominates a settler it carries no address for.** No DOI, no PII. With HAL walled, the ScienceDirect route cannot be constructed from the entry's own citation. That is an intake defect, and it is why the ScienceDirect attempt is a **budget stop** rather than a route failure: I never got an address to try.
3. **The full author list of the nominated paper is still NOT ESTABLISHED.** The one listing I opened prints "Schmid-Fetzer, R." alone (a first-author-only convention). The entry's "et al." is unverified front matter; I did not guess the rest.
4. **Citation defect in the second nominee, and it has a DOI the entry says it lacks.** Front matter as served: **Hans Lukas** (Max-Planck Institute, Stuttgart), **Suzana G. Fries** (SGF Scientific Consultancy), **Bo Sundman** (Royal Institute of Technology, Stockholm); *Computational Thermodynamics - The Calphad Method*, Cambridge University Press, print publication **2007**, online 03 February 2011. "Experimental data used for optimization" is **CHAPTER 4, pp. 58-78**, not a "section"; chapter **DOI 10.1017/CBO9780511804137.005**. The entry's "(no DOI or ISBN in the entry)" is now correctable: use that DOI.
5. **The record applies its own venue rule inconsistently.** Adversary #2 ruled arXiv:2508.01028 out of the frame because it is an "arXiv/MLIP paper, not Calphad or JPED". By that same rule **arXiv:2601.11899 is also not Calphad or JPED**, yet the record carries it as "the record's one in-frame document-kind instance". On the record's own rule the count of in-venue traditional assessment instances opened by anyone is **zero**, not one.
6. **Sub-claim 4 is UNENUMERATED, in both directions.** I opened **no** traditional assessment paper in Calphad or JPED. So:
   - the premise "per-dataset weights and the free-parameter list are not printed" is **(c) UNENUMERATED** - not true-over-instances, and not shown false;
   - and no counter-instance was found, so **the weights leg does not fail today** on its own written condition.
   Paulson et al. is **not** the counter-instance: it prints all three items but is an automated-weighting methods paper on two pure elements, not a traditional assessment, and its venue is not even printed on the text I read.
7. **Group count, not citation count.** Paulson et al. shares **Zomorodpoosh and Roslyakova** with the record's PRIOR 4 (Zomorodpoosh, Bocklund, Obaied, Otis, Liu & Roslyakova, Calphad 71 (2020) 101994, DOI 10.1016/j.calphad.2020.101994). These are companion papers from **one group** (ICAMS Bochum plus Argonne/Penn State collaborators). If the record ever leans on both, it is leaning on one group twice.
8. **Sub-claim 5 is still open at the level that matters.** The chapter summary says nothing about weights. A **full-text PDF of the whole book** surfaced in my search results at a third-party host (vyunov.pp.ua, "2007-Lukas-Computational thermodynamics.pdf"). I did **not** fetch it - budget was spent, and it appears to be an unauthorised copy of a Cambridge book. I record it as an untried route with that caveat, not as a recommendation.
9. **No step of this note rests on my own reasoning in place of a document**, with one exception I label as such: **MY OWN REASONING, NOT A SOURCE FINDING** - the inference that the identical Anubis error code across two HAL ids means the block is host-level rather than record-level. What would ground it: a successful fetch of any third hal.science record in this session, which I had no fetch left for.

## ROUTES THAT FAILED

- `https://hal.science/hal-00474878/document` - Anubis bot-protection interstitial, "Access Denied", **error code 9e4edb5b6b850c41**, title "Oh noes!", robots `noindex, nofollow`. Nothing of the document served. **Route failure.**
- `https://api.semanticscholar.org/graph/v1/paper/search?query=Assessment+techniques+database+design+and+software+facilities+for+thermodynamics+and+diffusion&fields=...` - **`client_error`; nothing of the page retrieved.** This was my attempt to obtain the missing DOI. **Route failure.**
- `https://resolve.cambridge.org/core/books/computational-thermodynamics/experimental-data-used-for-optimization/C11C5ADE63877FDBD87936B2DD6CA9AF` - **HTTP 302** to `https://www.cambridge.org/core/books/abs/...`. I **followed it** (the batch-before-last's lesson about an unfollowed 302 applied). The target serves **summary only**; body behind purchase/login wall. **Not a route failure - a paywall.**
- **ScienceDirect article page for Calphad 31, 38-52 - NOT ATTEMPTED. Budget stop plus no address.** This is a spent budget and a missing identifier, **not a property of the document.**
- Routes NOT re-spent, as instructed: hal-00162131.
- Searches: 2 of 2 used, both served, **neither refused by the classifier**.

Sub-claims I did not reach: **2, 3 and 6 - COULD NOT CHECK** (the document was never opened). Sub-claim **5 - partially reached**: front matter and read level established, the substantive question unanswered.

## BEARING ON THE LEDGER ENTRY

**On the 'VULNERABILITY' field: HOLD, and strengthen it.** "Nobody opened it" is confirmed, and it is now harder to fix than the entry thought. Both HAL ids are behind one bot wall with one error code; the entry's "untried routes" reduce to the ScienceDirect page, which the entry cannot address because it carries no DOI. **NARROW the field's wording**: strike "the untried routes are hal-00474878 and the ScienceDirect article page" and replace with "hal-00474878 is tried and dead (same Anubis code 9e4edb5b6b850c41 - the block is host-level); the only live route is the publisher page, and the entry must first obtain a DOI or PII for Calphad 31 (2007) 38-52."

**On attack 4 and on P7: no movement, in either direction.** Sub-claims 2, 3 and 6 are COULD NOT CHECK. P7's "not operational / not a defined operation" framing has still **never been tested against the field's own words**, and the Ringberg report's silence is not available as support for it either. The verdict's reliance on the "definitional-plus-algebraic leg" - an argument, labelled by all three adversaries as their own reasoning - is therefore **unchanged and still unexternalised**. My check neither props it up nor knocks it down.

**On the secondary weights leg: STRIKE the universal and CONVERT it to a promotion condition.** The leg's premise - that traditional assessment papers do not print per-dataset weights or their free-parameter list - is **UNENUMERATED**: zero in-venue traditional instances opened by me, and **zero by anyone once the record's own venue rule is applied consistently** (which disqualifies arXiv:2601.11899 exactly as it disqualified arXiv:2508.01028). The leg does **not** fail today - I found no counter-instance - but it is an unenumerated universal resting on an unopened nominee, which is the defect this ledger has shipped twice.

Promotion condition, written so the next reader can discharge it in three fetches:
1. Open **two** traditional assessment papers in **Calphad or J. Phase Equilib. Diffus.** - the Calphad 31/1 issue itself offers in-venue candidates whose titles I now have (Zoro, "Thermodynamic assessment of the Ag-Au-Bi system"; Guo, "A thermodynamic description of the Gd-Mg-Y system"; Wang, "Thermodynamic description of the Ca-Ga system"; Nakano, "A full thermodynamic optimization of the Zn-Fe-Al system within the 420-500 C temperature range") - and classify per-dataset weights and the free-parameter list as printed or not printed, naming the table.
2. Get the **DOI** for Calphad 31 (2007) 38-52 from a metadata service, then open the publisher page once.
3. For the Lukas chapter, the legitimate address is now known: **DOI 10.1017/CBO9780511804137.005, ch. 4, pp. 58-78**.

**One caution for whoever discharges it.** Do not let **Paulson, Zomorodpoosh, Roslyakova & Stan** be entered as the counter-instance. It prints per-dataset weights (Table 4: 0.000246 and 1 frequentist; 0 and 0.999659 Bayesian, dimensionless, one per literature Cp dataset of a pure element), the free-parameter list (Tables 2-3) and the included studies - but it is an automated-weighting **methods** paper on **pure Al and pure Hf**, its venue is not printed on the open-access manuscript, and it shares two authors with the record's PRIOR 4. It satisfies the condition's words and not its regime.
