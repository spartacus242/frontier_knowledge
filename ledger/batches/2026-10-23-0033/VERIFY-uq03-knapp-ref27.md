# VERIFY - Knapp et al. (Ref. 27 of bioRxiv 2024.07.02.601668) does print a counted osmotic-cycle axis in single S. pombe cells, but the endpoint is a growth-rate gain, not a failure hazard
Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it, two things at once:

1. That the single unopened source the entry names as most likely to settle its fatal ground **has never been opened by anyone**: "Knapp et al., cited as Ref. 27 of bioRxiv 2024.07.02.601668", said to deliver oscillatory osmotic shock to single *Schizosaccharomyces pombe* cells with **amplitude, period AND number of periods** varied.
2. That it is **the only document in the whole record** known to deliver a COUNTED osmotic cycle series to identified walled cells.

Both parts are universals. Part 1 is a universal over readers; part 2 is a universal over the record. Neither is enumerated in the entry.

## READ LEVEL

**Citing paper - bioRxiv 2024.07.02.601668v1: PARTIAL.** The served `.full` page is 38,394 characters. I read three windows of it (offset 0, offset 30,000; offset 40,000 returned "Nothing left to read"). **The numbered bibliography is not in the served text at all** - the markdown conversion begins at the Introduction and ends inside the Discussion. So:

**(a) THE REFERENCE AS PRINTED: COULD NOT READ.** I cannot give ref. 27 verbatim. This is COULD NOT READ, not NOT FOUND: the reference list exists on the article, it was simply not served.

What the citing paper's **in-text** handling of [27] says (served, and recorded here only to show how I identified the document - I grade nothing on it): first author "Knapp et al."; fission yeast *S. pombe*; oscillatory osmotic shock; growth slowed during shock; a supergrowth phase after removal; "measured growth rate peaks against oscillation amplitude, period length, and number of periods"; Bgs4 repolarization.

**Identification of ref. 27 is therefore INFERENTIAL, not read off the printed reference.** On that description I located and opened **bioRxiv 10.1101/498600, "Decoupling of rates of protein synthesis from cell expansion leads to supergrowth" (Knapp et al.)**, whose content matches on every one of those seven points. Strong match; still an inference.

**The source itself - bioRxiv preprint 10.1101/498600: PARTIAL, approaching full body text.** Read through two routes (`/content/10.1101/498600v1.full` and `/content/10.1101/498600.full.pdf`): Introduction, Results in full, Methods sentences on medium exchange, and the Figure 2 legend lines for panels C and F. **NOT read:** the title page / front matter (so no front-matter author list), the abstract, the reference list, the figures as images (Fig. 2F and Fig. S9 axes were never seen), and the supplementary figures themselves (S3, S6, S9, S11 are known only by the body text's references to them).

**Publisher version: NOT OPENED.** No fetch budget remained. cell.com was never attempted. The published citation I would otherwise give (Cell Systems, 2019, Knapp BD, Odermatt P, Rojas ER, Cheng W, He X, Huang KC, Chang F, 9(5):434-445.e6, doi:10.1016/j.cels.2019.10.001) is **from my own recollection and is UNVERIFIED in this check** - do not promote it into the ledger as resolved. The two things I did see that are consistent with a 2019 journal version are two aggregator URLs returned by search, `busqueda.bvsalud.org/.../mdl-31706948` and `omicsdi.org/dataset/biostudies-literature/S-EPMC6911364`; I opened neither, and a PMCID is in any case an identifier to convert, not a route.

**One work, three identifiers.** bioRxiv 498600**v1** and 498600**v2** and the journal version are the same document. An unopened-prior list that counts them separately is inflated.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are from the bioRxiv 498600 preprint, as served through the summariser (which caps verbatim return at roughly 125 characters). I assembled no string across non-consecutive returns.

**(c) Is the NUMBER of periods varied as an independent variable? YES.**

The source's own summary sentence, Results:

> "In general, the maximal supergrowth rate increased gradually with increasing amplitude, period, or number of periods."

*Scope check.* The opening words "In general," scope a summary over a parameter sweep - they hedge the monotonicity, not the existence of the sweep. The clause **ASSERTS** that number of periods was varied and that an outcome was scored against it.

Baseline, Figure 2 legend:

> panel C: "24 cycles of 0.5-M sorbitol osmotic shock oscillations with 10-min period."
> panel F: "Red circles represent our standard conditions of 24 cycles of 500-mM shocks with 10-min period."

Results, a second cycle count:

> "we applied 24 oscillatory cycles of 0.5 M sorbitol shocks with a 10-min period for 4 hours"
> "over the course of 48 oscillation cycles with 1 M sorbitol"
> "Oscillations with 1 M sorbitol, which caused ~50% volume loss, resulted in a near-cessation of growth."

**PUBLISHED IS NOT PERFORMED, applied in the direction that hurts me here.** The sweep is *performed* - Fig. 2F is the parameter plot and the "standard conditions" marker exists only because other conditions are on the same axes. But **the printed cycle-number values I can name are only two: 24 cycles (standard, 0.5 M, 10-min period) and 48 cycles (1 M)**, units = oscillation cycles. The served legend for Fig. 2F **does not enumerate** the other amplitudes, periods or cycle counts; those are axis values in a figure I did not see as an image. **I also cannot name the denominator** - no per-condition cell count was served. So: the counted-cycle axis is measured, and I can print two of its points and none of its n.

**(d) ENDPOINT: growth rate. Not death, not lysis, not bursting.**

Per-cell quantities measured, as the Methods were served: length, width, volume and surface area (integrated disks of revolution along the centerline), growth rate (dL/dt and a size-normalized rate), fluorescence intensity and concentration, Bgs4 tip intensity, FITC/PI ratio, and cytoplasmic density by quantitative phase imaging.

The quantity plotted against the oscillation parameters is **"the maximal supergrowth rate"** (Fig. 2F; Fig. 4A carries the oscillation-parameter correlation with protein concentration).

**There is no failure probability and no hazard against cycle number.** The one viability statement, as served:

> "cells remained viable and continued to grow and divide"

*Scope check.* This sits inside the oscillation protocol and **ASSERTS survival** - it is a record of a move *away* from any damage endpoint, not a measurement of one.

Death appears once, and in a different arm: "Many cells eventually died," with 45% surviving, under **brefeldin A** treatment. **Numerator/denominator check, both directions:** that 45% is drug-treated cells scored for survival; its numerator class is cells surviving a secretion-pathway block, not cells surviving N osmotic cycles. It **misses** everything the claim is about (cycle count is not a variable in that arm) and it **includes** a cause of death the claim excludes (pharmacological block of secretion). A number one word away from the claim's is a different quantity; this one is several words away.

Honest limit: I did not see the figure panels as images, so I cannot swear no panel anywhere plots survival. What I can say is that the narrative endpoint throughout the Results is growth rate, and the only viability language in the body text is the qualitative sentence above.

**(e) Waveform and return limb: symmetric square wave, step in both directions, equal magnitude.**

> "repeated switches between rich medium (YE5S) and YE5S+0.5 M D-sorbitol"
> Fig. 2 legend: "exposed to cycles of hyperosmotic and hypoosmotic shocks with 500 mM sorbitol, with 5 min between shocks"
> Methods, microfluidics: "media exchange occurred within 10 s"
> Methods, bulk: "the medium was rapidly exchanged (<30 s) for cultures of up to 200 mL"

So each cycle is a **step** up to +0.5 M sorbitol (or +1 M) and a **step** back to 0 M sorbitol. The return limb is a **full hypoosmotic shock of the same magnitude as the hyperosmotic limb**, delivered as a step, not a ramp. Nothing in the served text describes a ramp in either direction. Duty cycle: a 10-min period with "5 min between shocks" implies roughly 5 min hyper / 5 min hypo - **MY OWN ARITHMETIC** from two separately served strings, with the source's own hedge that the 10-s exchange time is a tracer-dye estimate.

**(f) Organism and wall type.** *Schizosaccharomyces pombe*, fission yeast - a **fungal** cell wall (glucan/mannoprotein; Bgs4, the beta-1,3-glucan synthase, is one of the readouts), **not** bacterial peptidoglycan. Single cells, identified and tracked in a microfluidic flow cell. I did not see a strain-background sentence in the served Methods.

**(g) One sentence.** Yes - this paper prints an outcome against osmotic cycle **number** in single walled (fungal) cells, at Fig. 2F, but the outcome is a **growth-rate enhancement** ("maximal supergrowth rate"), not a failure, lysis or hazard probability, and the only cycle-count values I can name as printed are **24** and **48**.

## REGIME

**Source's regime, in its own words:** single *S. pombe* cells in rich medium (YE5S) in a microfluidic flow cell with media exchange "within 10 s", plus bulk cultures with exchange "(<30 s)"; unit of analysis = the single cell, tracked through 4 hours of cycling; operating condition = repeated symmetric square-wave switches between YE5S and YE5S + 0.5 M (or 1 M) D-sorbitol, standard 24 cycles at a 10-min period; instruments = time-lapse fluorescence microscopy, quantitative phase imaging, FITC/PI ratio; threshold/category = growth rate (dL/dt and size-normalized), protein concentration, cytoplasmic density. Viability is reported as a qualitative pass, not a scored category.

**Does the entry's claim sit inside it?**
- The *counted-cycle axis* part: **YES, inside.** Cycle number is an independent variable on identified single walled cells.
- The *fatal-ground* part, if the candidate's claim is a per-cell damage/failure hazard rising with cycle count: **NO, outside.** This regime has no damage endpoint and no scored failure category. A result proved on growth rate is silent on failure, not supportive of it and not against it.
- The *walled* part: inside, but **fungal** wall, not bacterial. The entry already flags this ("in a fungal rather than bacterial wall").
- The *counter-sign* part (uq03-c5): inside, and answered - see DEFECTS.

## DEFECTS FOUND

1. **"Has never been opened by anyone" is an unenumerated universal over readers, and it is not the kind of thing this check can settle.** What I can report: *I* opened it, at the preprint version, in this check. The leg of the entry that rests on the source being unopened is now **struck**. The leg that rests on nobody-has-opened-it was never testable and should not have been written as a finding.

2. **"The only document in the whole record" is an unenumerated universal over the record.** I enumerated nothing. **Instances I opened:** bioRxiv 2024.07.02.601668v1 (citing paper, partial) and bioRxiv 10.1101/498600 (Knapp et al., partial). **Instances I did not open:** the published Cell Systems version of Knapp et al.; refs 19, 22-26, 28-30 of the citing paper (the served text describes 22 as *E. coli* and 23 as *B. subtilis* hypoosmotic work, either of which could carry a cycle count I have not checked); and every other document in the ledger's record. Verdict on this universal: **UNVERIFIED - true over the instances I opened, and silent beyond them.** Not established, and not shown false.

3. **The entry identifies ref. 27 by a short form ("Knapp et al.") and the printed reference could not be obtained.** The bioRxiv served page strips the bibliography. The entry carries no year, title or DOI for ref. 27, so its identification cannot be audited without repeating my inference. **The entry should carry a resolved identifier; right now it carries a guess that happens to look very likely.**

4. **Front-matter discipline violated by necessity.** Every bioRxiv route (landing page, `.full`, `.full.pdf`) served text beginning at "Introduction". **I have no front-matter author list for Knapp et al.** Any author string the ledger prints for this source is currently taken from a short form someone else wrote, including the one in my own recollection above.

5. **Identifier inflation.** bioRxiv 498600v1, 498600v2 and the journal version are **one document**. If the unopened-prior list counts more than one of them, it is inflated.

6. **The counter-sign question (uq03-c5) is answered from a performed experiment, and the answer is unhelpful to the design it was meant to settle.** The performed waveform is a **symmetric square wave**: step up +0.5 M, step back to 0 M, same magnitude, ~50% duty, both limbs steps. So the experiment **does not separate the hyperosmotic limb from the hypoosmotic limb** - it cannot attribute an outcome to one sign. If uq03-c5 needs asymmetric limbs (ramp return, or unequal magnitudes) to be distinguishable, **this paper does not perform that contrast**, and reading the counter-sign off it would be reading off a confound. The entry's hope that c5 "can be read off a performed experiment rather than argued" is **half met**: the waveform is now known; the sign attribution is not available from it.

7. **The novelty collapse the entry anticipates is real on one axis and absent on the other.** Counted-cycle axis in a single walled cell: **exists, performed, plotted (Fig. 2F)** - that part of the candidate's novelty does fall. Outcome scored against cycle number: **growth-rate gain only.** No failure probability, no hazard, no lysis or bursting count. So a candidate claiming a *damage* or *failure* hazard versus cycle number is **not** anticipated in its endpoint, and the drop "possibly to Low" does not follow from what this paper prints.

8. **Two numbers the entry will want and I cannot supply.** The cycle-number values swept beyond 24 and 48, and the per-condition n. Both live in Fig. 2F / Fig. S9 as images or in the published supplement, neither of which I opened.

## ROUTES THAT FAILED

- `https://www.biorxiv.org/content/10.1101/2024.07.02.601668v1.full` - body served (38,394 chars), **bibliography absent** at offsets 0 and 30,000; offset 40,000 past end of text. Ref. 27 verbatim unobtainable by this route.
- `https://www.biorxiv.org/content/10.1101/498600v1` (landing page) - served text began at "Introduction": **no title, no authors, no abstract, no "Now published in" line.**
- `https://www.biorxiv.org/content/10.1101/498600.full.pdf` - same: served text began at "Introduction"; **no title page.** Figure 2 legend lines for C and F were served; the panel axis values were not.
- Publisher (cell.com) and any journal-side route: **not attempted, budget exhausted.** This is COULD NOT READ by budget, not a host block.
- PMC / Europe PMC: not attempted - hard-blocked here. The PMCID-shaped string `S-EPMC6911364` seen in search results was not used as a route.
- Unpaywall: deliberately skipped (it requires a contact email in the query string).
- No search was refused by the classifier. Two searches ran; one search remained unused because, with no fetches left, a search could not have been read.

## BEARING ON THE LEDGER ENTRY

**Strike** the "never been opened by anyone" leg: the document is now opened (preprint version, partial read as declared above), and that leg was in any case an unenumerated universal over readers rather than a finding.

**Hold, and narrow,** the substantive leg: a **counted osmotic-cycle axis in identified single walled cells is a performed, plotted experiment** - 24 cycles standard and 48 cycles at 1 M, in *S. pombe*, with the source's own sentence "the maximal supergrowth rate increased gradually with increasing amplitude, period, or number of periods." The novelty of *varying cycle number on a single walled cell* falls. Narrow the collapse to that axis only.

**Reverse** the inference from that axis to the candidate's endpoint: the entry treats Fig. 2F as potentially fatal to novelty, but **the scored outcome is a growth-rate gain and there is no failure probability or hazard against cycle number anywhere in the body text I read**; the only viability language is the qualitative "cells remained viable and continued to grow and divide", and the one quantitative death figure (45% surviving) belongs to a brefeldin A arm with no cycle-count variable. If the candidate's claim is a per-cell damage or failure hazard versus cycle count, this paper does not anticipate it. Do not drop novelty to Low on this source.

**Convert uq03-c5 (counter-sign) from "open question" to "answered, and the answer is a confound":** the performed waveform is a symmetric square wave, step in both limbs, equal magnitude, roughly 50% duty - so the experiment cannot attribute an outcome to one sign of the osmotic step. Record the waveform as settled; record the sign attribution as still unavailable from a performed experiment.

**Downgrade the entry's identification of ref. 27 to a promotion condition,** since the printed reference was never served: resolve ref. 27 to a DOI from the article's own bibliography or from the journal version, and take the author list from front matter. Treat the Cell Systems citation in READ LEVEL above as unverified recollection until then. Fold bioRxiv 498600v1, v2 and the journal version into **one** prior.

**Open promotion conditions, in priority order:** (1) the published version's Fig. 2F and Fig. S9 as images or tabulated data, for the full swept cycle-number values and per-condition n; (2) the printed ref. 27 for the citation; (3) refs 22 and 23 of the citing paper (*E. coli*, *B. subtilis*) before any "only document in the record" language is restored.
