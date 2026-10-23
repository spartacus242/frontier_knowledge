# VERIFY - UQ-20261023-03 C5: does a repeated fixed-amplitude downshock protocol necessarily deliver an equal-and-opposite upshock, and is that upshock mechanically comparable?

Checker: fresh context. Budget used: 7 WebFetch, 3 WebSearch. Date 2026-10-22.

## CLAIM

C5, carried as the FATAL GROUND of the rejection, reached by adversary 3 alone after two Provisionals. As the entry states it: a protocol of repeated fixed-amplitude hypo-osmotic downshocks **cannot have one sign**, because each further downward step of equal size from a bounded osmolarity range requires an intervening upward step of equal size; therefore every cycle also delivers a hyperosmotic **upshock of the same magnitude**, and damage per cycle **cannot be attributed to the downshock limb**.

The entry concedes two things, and I tested both: (i) no source in its record reports a repeated-downshock experiment in which the counter-sign excursion was held fixed, absent or measured; (ii) no source reports that the intervening upshock does mechanical work on the sacculus in this regime.

The claim has three load-bearing joints, and they do not stand or fall together:
1. **Geometric** - a two-level square wave of amplitude A delivers A in both signs.
2. **Modal** - no repeated same-sign design is available ("cannot have one sign").
3. **Mechanical** - the two limbs are comparable, so per-cycle damage is unattributable.

Joint 1 is confirmed by both protocols I opened. Joint 2 is **not** what the opened protocols show, and is false for a finite descending staircase on the claim's own premises. Joint 3 is **contradicted in direction** by the one mechanics statement I could open, and is the joint on which the entry's own concession (ii) bites hardest.

## READ LEVEL

**(1) Duveau F. et al. (2024), 'Yeast cell responses and survival during periodic osmotic stress are controlled by glucose availability', eLife 12:RP88750 - PARTIAL.**
Served: Results, figure legends (Figs 1, 3, 4, 5, 6, 7), Discussion, and the opening of Materials and methods. **The Materials and methods text served stops inside the yeast-strain and oligonucleotide tables in both of my two passes** (a plain read and a second read at `offset: 40000`). The microfluidic-device / media-switching / osmotic-stress-delivery subsection was **never served**. So every waveform figure below is quoted from **Results and figure legends, not from Methods** - which matters, because sub-claim (b) asks for the methods sentence and I cannot supply it.
Front matter, authors as printed: **Fabien Duveau, Céline Cordier, Lionel Chiron, Matthias Le Bec, Sylvain Pouzet, Julie Séguin, Artémis Llamosi, Benoit Sorre, Jean-Marc Di Meglio, Pascal Hersen**. eLife, vol. 12, article RP88750; Version of Record 3 April 2024; DOI as served on the article page: **10.7554/eLife.88750**.
I did **not** get the title string back from the front matter, so the entry's rendering of the title is **unverified by me**, not confirmed.

**(2) bioRxiv 2024.07.02.601668 - PARTIAL (body), and RESOLVED TO A PUBLISHED PAPER.**
The bioRxiv `.full` HTML served Introduction-level material, Results, model sections and figure captions, but **no front matter at all** - no title, no authors, no DOI. I resolved it: it is the preprint of

> **Ye Y., Wang Q. & Lin J. (2024/2025), 'Physical constraints and biological regulations underlie universal osmoresponses', eLife 102858, DOI 10.7554/eLife.102858**; Reviewed Preprint v1 13 December 2024, Version of Record 16 July 2025. The eLife version history lists the preprint DOI **10.1101/2024.07.02.601668**.

**ONE DOCUMENT, TWO IDENTIFIERS.** The entry cites only the bare bioRxiv number, with no authors and no title - so the entry does not inflate its prior list, but it does cite the un-refereed identifier of a paper that has been through eLife review and has a Version of Record. A reader of the entry cannot tell that source (2) is a peer-reviewed eLife paper by Ye, Wang and Lin.
One discrepancy I record as served and do not resolve: the eLife version history gives the preprint posting date as **28 August 2024** while the bioRxiv identifier encodes **2024.07.02**.
Read level on the eLife reviewed-preprint page: **PARTIAL** - front matter, the shock-mechanics statements, the Fig. 4 protocol lines and the scope statements. Not the full Methods.

**(3) Buda R. et al. (2016), 'Dynamics of Escherichia coli's passive response to a sudden decrease in external osmolarity', PNAS 113(40):E5838-E5846 - COULD NOT READ.**
This is **COULD NOT READ, not NOT FOUND**. The paper plainly exists; I could not get its text through this proxy. Its silence is evidence in neither direction, and the entry's source (3) - the one source that would speak directly to *what the downshock does mechanically and on what timescale* - is therefore **ungrounded in my check**.
The DOI `10.1073/pnas.1522185113` is **from my own recall, not from front matter**. I tried it and got a site error, which neither confirms nor refutes it. Do not propagate it as verified.

**(4) Rojas E.R. / Huang K.C. on turgor and envelope mechanics - NOT OPENED.**
The entry names no specific paper here ("reviews or papers"), so there was no citation to resolve. I did not reach one inside budget. Both searches aimed at it returned PMC article links (hard-blocked here), a **ScienceDaily press release** (a restatement, not the paper - not gradeable), and bibliography-export stubs from Princeton. **Sub-claim (d) is therefore NOT grounded in a Rojas/Huang source.** The mechanics statements I quote below come from Ye, Wang & Lin instead, and that substitution changes the regime - see REGIME.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Documents opened - see READ LEVEL above.

### (b) The actual osmolarity waveform delivered

**Duveau et al. 2024 (quoted from Results and figure legends; the Methods sentence was not served):**

- Two levels: "sorbitol concentration switching between 0 and 1 M". Fig. 1 legend: "hyperosmotic stress (1 M sorbitol)".
- Duty cycle: 1 M sorbitol "half of the time".
- Dwell times: given only as period. "periods ranging from 12 to 480 min". Fig. 3 uses a 24 min period; Fig. 6 a 96 min period. Fig. 5 legend: "Cells were grown under fluctuations of 2% glucose and 1 M sorbitol at a period of 24 min."
- **An asymmetric variant exists.** Fig. 7: "short pulses of 1 M sorbitol for 48 min every 96 min." This is 1 M amplitude with 48 min at the stress level in a 96 min cycle, i.e. the dwell split is settable independently of the amplitude. **Dwell is separable; amplitude is not.**
- Switch time: "rapid transitions (<2 min) from one medium to another."
- **Step or ramp: NOT STATED.** The served text nowhere characterises the return as a step or a ramp. The "<2 min" transition is consistent with a near-step, but **the authors do not say so**, and I will not supply the word.
- Sampling, for scale: "the temporal resolution in our experiments (one image every 6 min)" - i.e. the 12 min shortest period is two frames, and the <2 min transition is **sub-frame and unresolved**.

**Ye, Wang & Lin (bioRxiv 2024.07.02.601668 / eLife 102858):**

- Fig. 4A caption: "24 cycles of 500 mM osmotic oscillations with a 10-minute period".
- "the external osmolarity alternated between two values".
- **Duty split: NOT STATED.** The text varies the period (Fig. 4C) and the number of periods (Fig. 4D) but never prints how a period divides between the two levels.
- Single-excursion limit, Fig. 4E: "the hyperosmotic period persists for 120 min before reverting to the reference medium".
- Idealisation: "the external osmolarity changes abruptly and keeps its value for an infinitely long time".
- **Step, not ramp** - and here the authors *do* commit: "switching from a long hyperosmotic period to the reference growth medium is equivalent to a constant hypoosmotic shock". No ramp is mentioned anywhere I read.

### (c) Is the return limb a hyperosmotic shock of the same magnitude, and do the authors call it that?

Both authors name both limbs as shocks, and in both protocols the two limbs have equal **osmolarity** amplitude by construction, because both are alternations between the same two levels.

Ye, Wang & Lin, **the hedged definitional formulations**, which is what I rely on:
- "Upon a hyperosmotic shock (i.e., a sudden increase of the external osmolarity)"
- "Upon a hypoosmotic shock (i.e., a sudden decrease of the external osmolarity)"

Duveau et al.:
- The up-limb is "hyperosmotic stress (1 M sorbitol)".
- The return limb is named a shock: "suggesting cell lysis occurred due to hypo-osmotic shock following removal of 1 M sorbitol."
  *Scope-setting opener check:* the sentence opens "suggesting" - the clause **does not assert** that lysis occurred by hypo-osmotic shock, it **records an inference** from an observation. Quoting it as "cell lysis occurred due to hypo-osmotic shock" would be verbatim and grammatical and **wrong**, because the cut drops the hedge that is the whole modality of the sentence.
- Separately, and this one **does** assert: "the frequency of hypo-osmotic shock was the same in the two conditions."

**THE ORIENTATION PROBLEM, which the entry does not flag.** In *both* protocols I opened, the stress under study is the **hyperosmotic** step and the counter-sign limb is the **hypo-osmotic** one. The claim's geometry is the **mirror image** - repeated *downshocks* with intervening *upshocks*. So:
- Joint 1 of the claim (a square wave of amplitude A delivers A in both signs) is **confirmed by both opened protocols**, but confirmed in the mirror orientation.
- **Neither opened source is a repeated-downshock protocol at all.** Neither speaks to the claim's own regime of repeated hypo-osmotic excursions on a bacterial sacculus. The source that would have (Buda et al. 2016) is the one I could not read.

And the equality the authors establish is equality of **osmolarity magnitude**, not of mechanical effect. That distinction is sub-claim (d), and it is where the claim breaks.

### (d) Mechanically: does a hyperosmotic upshock increase or decrease wall tension and turgor?

**It decreases turgor.** From Ye, Wang & Lin (eLife 102858) - *not* from Rojas/Huang, which I could not open:

Hyperosmotic shock:
- "the cell volume of a microbial cell shrinks within milliseconds due to water efflux"
- "leading to a decreased turgor pressure"
- "the immediate water efflux leads to an instantaneous drop in turgor pressure and a rise in protein density"
- extreme case, plasmolysis: "the turgor pressure is zero"

Hypo-osmotic shock:
- "the turgor pressure increases immediately due to the sudden water influx"
- "the dramatic water influx stretches the cell wall"
- "The phenomena are essentially the opposite for a constant hypoosmotic shock"

Wall tension is **not** stated for the hyperosmotic case. The paper's only link from turgor to the wall is a **model relation**: turgor "which is proportional to the cell-wall strain".

*Scope-setting openers, each checked:*
- "Upon a hyperosmotic shock (i.e., a sudden increase of the external osmolarity)" - the opener scopes the clause to **the moment of a sudden increase**, not to the steady state afterwards. The clause **ASSERTS** the turgor drop.
- "The phenomena are essentially the opposite for a constant hypoosmotic shock" - the opener scopes this as a **mirroring statement relative to the constant-hyperosmotic case just described**, and carries the hedge "essentially". It **ASSERTS** the mirror, hedged.

**PUBLISHED IS NOT PERFORMED.** I can name no printed number for wall tension, wall stress, or mechanical work in either opened document. There is no table, figure or sentence in what I read that gives a tension in N/m or a work in J for either limb. On the question *does the intervening upshock do mechanical work on the sacculus*, Ye, Wang & Lin **DEFINE and PREDICT** (turgor proportional to wall strain; turgor falls on upshock) and **do not MEASURE**. The entry's concession (ii) survives my check - and is in fact stronger than the entry makes it, because the opened source says the upshock does the **opposite** of loading.

### (e) Any experiment holding the counter-sign excursion fixed, absent, slowed or measured?

Nearest instances, named, with what each actually does:

- **Duveau et al. 2024 - counter-sign limb held FIXED IN FREQUENCY, not in amplitude, and not the variable of interest.** "the frequency of hypo-osmotic shock was the same in the two conditions." This holds the counter-sign limb's *frequency* equal across a comparison in which the **varied factor is glucose availability**, not the counter-sign excursion. It is a control on the counter-sign limb; it is **not** a design that removes, slows or amplitude-fixes it.
- **Duveau et al. 2024 - dwell asymmetry.** "short pulses of 1 M sorbitol for 48 min every 96 min" shows the **dwell time** at each level is independently settable at fixed amplitude. Duration separable; amplitude not.
- **Ye, Wang & Lin - counter-sign aftermath MEASURED, not removed.** "cells grew unusually fast after the osmotic oscillation was removed", with the peak about 20 minutes after the end of the oscillation. For *S. pombe* under oscillation, "cell growth was almost inhibited during the perturbation". And Fig. 4E's 120 min hyperosmotic period before reverting **isolates a single** counter-sign event rather than removing it. They also vary period (4C) and number of periods (4D).
- **Nothing I opened removes the counter-sign limb, ramps it, or holds its amplitude fixed while varying the other limb.**

**UNENUMERATED UNIVERSAL - this is the important bookkeeping.** The entry's concession is of the form *no source reports X*. Over the instances I actually opened - **Duveau et al. 2024** and **Ye, Wang & Lin 2024/2025** - it is **TRUE**. Over the instances I did **not** open - **Buda et al. 2016** (could not read) and **any Rojas/Huang paper** (not opened) - it is **UNENUMERATED**. So the correct status of the concession is: **true over two opened instances, unenumerated over two unopened ones.** Not established.

### (f) Any published design delivering repeated same-sign excursions to one identified cell?

**NOT FOUND IN WHAT I OPENED, and the check the task specified was NOT RUN.** Both opened designs are symmetric two-level square waves. I found no descending staircase and no sawtooth with a slow return.

But I must be exact about why: my three searches all went to **locating the named documents**, which is the use the budget permits, and the task's suggested method-words search ('alternating hypoosmotic hyperosmotic shock single cell microfluidic repeated cycles protocol') **was never run**. So (f) is **COULD NOT CHECK for the wider literature** - an unreached check, not a negative finding. Nobody should read my (f) as evidence that no such design exists.

What I *can* say from the opened documents, as a statement about the apparatus: nothing in either paper forbids a ramp or an asymmetric return. Duveau's device exchanges media in "<2 min", Ye et al. idealise the switch as abrupt "and keeps its value for an infinitely long time" - an idealisation chosen for tractability, not a constraint reported as physical. Neither paper reports attempting a ramped return.

*What kind of document could settle (f)?* A single-cell microfluidic **methods** paper or a figure legend that prints a non-square osmolarity waveform - amplitude per step, step count, and return ramp rate. Neither of my two unread sources is reliably that kind: Buda et al. 2016 is a single-downshock biophysics paper, and a Rojas/Huang review is a synthesis. **I nominate neither as the document that would settle (f). I have no lead here, and I am calling that a gap rather than dressing it as one.**

### (g) One sentence

On the opened protocols the counter-sign limb is **unavoidable in amplitude for a two-level square wave but not for a bounded descending staircase, and it is not mechanically equivalent**: the only mechanics statements I could open say the hyperosmotic limb **drops** turgor toward zero while the hypo-osmotic limb "stretches the cell wall", so the two limbs are opposite in the sign of wall strain and equal only in osmolarity.

## REGIME

**Duveau et al. 2024.** Organism: *S. cerevisiae*. Unit of analysis: single cells in microfluidic growth chambers - "the mean division rate measured in different growth chambers of the microfluidic chip". Operating condition: periodic alternation 0 M / 1 M sorbitol, 50 % duty (and one 48-in-96 min pulse variant), periods 12-480 min, transitions <2 min, imaged once per 6 min, with **glucose availability as the manipulated variable**. Instrument: microfluidics plus time-lapse microscopy. Measured outcomes: division rate, survival, lysis.
**Is the claim inside it?** On geometry, yes - this is a fixed-amplitude periodic protocol, and it demonstrates that the two limbs come as a pair. On everything else, **no**: wrong orientation (the hyperosmotic step is the stress), wrong organism for a sacculus claim (yeast, not a bacterial sacculus), and **no mechanical quantity measured at all** - the readouts are division rate, survival and lysis.

**Ye, Wang & Lin 2024/2025.** A **modelling** paper with data comparisons. Organisms named: *E. coli*, *B. subtilis*, *S. cerevisiae* ("the data of *S. cerevisiae* is from our own experiments") and *S. pombe*. Range, in the paper's words: "with the external osmotic pressure varying over an order of magnitude"; specific magnitudes printed are "a constant 500 mM hyperosmotic shock" (Fig. 3A), 500 mM oscillation amplitude at a 10 min period for 24 cycles (Fig. 4A), and "around 2 M extra external osmolarity" (Fig. 2C discussion). Timescales: milliseconds for water flux, tens of minutes for growth recovery. Unit of analysis: cell volume, protein and dry-mass density, growth-rate traces.
**Is the claim inside it?** Partly. The **organisms** (*E. coli*, *B. subtilis*) and the **osmolarity scale** (hundreds of mM up to ~2 M) do overlap a bacterial-sacculus claim at the hundreds-of-mM scale. But the paper's wall statement is a **constitutive model relation** - turgor "proportional to the cell-wall strain" - not a sacculus measurement, and the paper measures **no** mechanical quantity. A relation derived inside a growth model is **silent** on whether an upshock performs work on a sacculus; it is not support for the claim and it is not a refutation by measurement either. It is a prediction, and I am grading it as one.

**Buda et al. 2016 and Rojas/Huang.** No regime to state. Not read.

## DEFECTS FOUND

1. **The claim's modal joint is false as stated, on the claim's own premises.** The argument says each further downward step of equal size "from a bounded osmolarity range requires an intervening upward step of equal size". That is true only of repeated steps taken **from the same starting level**. A **descending staircase** - say 1 M -> 0.75 -> 0.50 -> 0.25 -> 0 - delivers **four** downward excursions of equal size and **zero** upward ones, and a bounded range is exactly what makes such a staircase finite rather than impossible. So "cannot have one sign" holds only in the limit of **unbounded** repetition, where the step count exceeds what the range admits. **THIS IS MY OWN REASONING ABOUT THE CLAIM'S LOGIC, NOT A SOURCE FINDING** - I opened no paper that performs a descending staircase, and (f) above records that I never ran the search that could have found one. The defect is in the claim's argument, not in a document.

2. **Equal osmolarity is silently upgraded to equal mechanics.** The claim moves from "an upshock of the same magnitude" to "damage per cycle cannot be attributed to the downshock limb". The opened source says the two limbs are **opposite in the sign of wall strain** - "leading to a decreased turgor pressure" and at the extreme "the turgor pressure is zero" on the upshock, against "the dramatic water influx stretches the cell wall" on the downshock. On these statements, the upshock **unloads** the wall. Equal magnitude in osmolarity therefore does not license unattributability of **mechanical** damage. This is the single largest defect, and it goes directly to the fatal ground.

3. **The entry's concession (ii) is corroborated and then some, in a direction that cuts against the claim.** The entry concedes no source reports the upshock doing mechanical work on the sacculus. Correct over what I opened - and the opened source states the upshock does the opposite of loading. An argument from design that needs the upshock to be mechanically comparable is resting on a quantity that is not merely unmeasured but **predicted to have the wrong sign**.

4. **Neither opened protocol is in the claim's orientation.** Both study the hyperosmotic step with the hypo-osmotic limb as the return. The claim concerns repeated **downshocks**. Confirmation of the square-wave geometry transfers; nothing about the mechanics or the damage attribution does.

5. **Source (3) is the load-bearing source and I could not read it.** Buda et al. 2016 is the only source in the entry's record that would speak to what a downshock does mechanically and on what timescale. **COULD NOT READ.** The fatal ground rests on a mechanical comparison whose one direct source went unverified in my check.

6. **Source (4) is not a citation.** "Rojas E.R. and Huang K.C. reviews or papers on turgor and envelope mechanics" names no document - no title, no year, no DOI. An entry cannot be graded against a source described by author and topic alone, and I could not open one. The mechanics quotations above come from a **substitute** source with a different regime (a growth model, not envelope mechanics), and that substitution should be visible to anyone reading the entry.

7. **Source (2) is cited by bare preprint identifier.** It is **Ye Y., Wang Q. & Lin J., 'Physical constraints and biological regulations underlie universal osmoresponses', eLife 102858, DOI 10.7554/eLife.102858**, with a Version of Record of 16 July 2025. The entry cites "bioRxiv 2024.07.02.601668" with no authors and no title, so a reader cannot tell it is a refereed paper, and the entry grades a preprint when a VOR exists.

8. **The methods sentence sub-claim (b) explicitly asks for is unquoted, for both protocols.** For Duveau the Methods subsection was never served to me; for Ye et al. the duty split is not printed anywhere I read. Everything I quote on the Duveau waveform is from **Results and figure legends**. The entry should not record a Methods quotation from this check, because I have none.

9. **Nothing printed on the return limb's shape in either protocol.** No ramp rate, no transition profile, no dwell split for Ye et al. "<2 min" in Duveau is a **bound on the exchange**, not a waveform, and it is sub-frame against the 6 min imaging interval. The claim treats the return as a step; the opened sources support that for Ye et al. ("equivalent to a constant hypoosmotic shock") and **leave it unstated** for Duveau.

10. **Title-return bookkeeping.** My three searches returned the Buda paper under four distinct URLs (a blocked PMC record, an APS meeting abstract, an academia.edu posting, a Peking University listing) and the Rojas/Huang target under repeating PMC and Princeton stubs. **These are repeated title returns, one document each, and no corroboration.** One of the returned items, the ScienceDaily release, is a **press restatement of a paper and not a paper**; I did not grade it.

## ROUTES THAT FAILED

- `https://www.pnas.org/doi/10.1073/pnas.1522185113` - failed at site, `client_error`, nothing retrieved.
- `https://www.pnas.org/doi/full/10.1073/pnas.1522185113` - same, `client_error`. PNAS refused both URL forms, so Buda et al. 2016 is unread.
- `https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=PMC5056102&format=json` - **302** to `pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/`, i.e. the converter now redirects **into the hard-blocked host**. The documented PMCID-to-DOI conversion route is **dead at this proxy**; I did not follow the redirect. Buda's DOI is consequently unverified by front matter.
- `https://elifesciences.org/articles/88750` at `offset: 40000` - still truncated inside the strain tables; the microfluidics Methods subsection was not reachable by offset.
- `https://www.biorxiv.org/content/10.1101/2024.07.02.601668v1.full` - body served, **front matter not served**; the authors and DOI had to be recovered from the eLife reviewed-preprint page instead.
- PMC and Europe PMC - hard-blocked here, as the brief states. Every search route to Buda and to Rojas/Huang terminated there.
- Unpaywall - **not attempted**, deliberately: its contact-email parameter would put a personal identifier in a query string.

## BEARING ON THE LEDGER ENTRY

The fatal ground splits, and the split does not fall where the claim assumes.

**What the sources confirm.** The geometric joint holds for the designs actually published in the two papers I opened: both deliver a two-level square wave, both authors name **both** limbs as shocks of the same two levels, and Ye, Wang & Lin state outright that leaving the stress level "is equivalent to a constant hypoosmotic shock". A fixed-amplitude square wave does deliver equal osmolarity excursions in both signs. That much of C5 is sound.

**What the sources do not support.** The mechanical joint. The claim needs the counter-sign limb to be mechanically comparable so that per-cycle damage becomes unattributable. The only mechanics statements I could open say the opposite: the hyperosmotic limb drops turgor - "leading to a decreased turgor pressure", "the turgor pressure is zero" at plasmolysis - while the hypo-osmotic limb "stretches the cell wall". On these statements the upshock **unloads** the wall and the downshock **loads** it, which is precisely the "upshock whose mechanical effect on the wall is known to be small because turgor falls rather than rises" condition the entry itself identifies as the thing that would weaken the ground. I stress the read level: this is a **modelling** paper's prediction, with **no printed tension or work in any units**, from a source substituted for the Rojas/Huang envelope-mechanics papers I could not open. It is not a measurement, and it should not be recorded as one. But it is the only mechanics evidence in the record, and it points away from comparability.

**What the modal joint actually requires.** "Cannot have one sign" is false for a finite descending staircase from a bounded range, which yields N equal downward steps and zero upward ones - my own reasoning, with no document behind it, because the search that could have found such a design was never run. The claim as written needs the unbounded-repetition limit, and does not say so.

**What remains genuinely open, and must not be scored either way.** Buda et al. 2016 - **COULD NOT READ**, and it is the entry's only source on downshock mechanics and timescale. No Rojas/Huang paper opened, so source (4) is unexamined and is in any case not a citation. The method-words search for a same-sign design (f) was **never run**. The entry's concession that no source reports a counter-sign-fixed experiment is **true over the two instances I opened and unenumerated over the two I did not** - and the batch before this one failed exactly here, on universals that were false on the one instance nobody opened. **Gate 4 is incomplete**, and it is incomplete at the two sources that carry the mechanical comparison.

**Net bearing.** C5 cannot carry a rejection on its own as currently argued. Its geometric limb is confirmed; its modal limb is overstated and defeasible by a bounded staircase; its mechanical limb - the one that does the work in "damage per cycle cannot be attributed to the downshock limb" - is unsupported by anything I could open and is contradicted in **direction** by the one source that speaks to turgor. The honest disposition is to **narrow C5 to its geometric content** (a two-level fixed-amplitude square wave does deliver equal-magnitude excursions of both signs, as published protocols confirm) and to **convert the mechanical limb into a promotion condition**: it needs either Buda et al. 2016 read directly, or a Rojas/Huang envelope-mechanics source properly cited and opened, printing a wall-tension or wall-work quantity for the upshock limb. Until one of those is read, the mechanical limb is a prediction with the wrong sign for the claim, not a fatal ground. I am not issuing a verdict on the entry; this is what the documents show.
