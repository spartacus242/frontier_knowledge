# VERIFY - Garcia-Torres et al. 2025 (Beilstein J. Nanotechnol. 16:86): does it print a repetitive-indentation count or a failure probability, and is its own quantitative content self-consistent?
Checker: fresh context. Budget used: 3 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

The entry carries a PUBLISHED-IS-NOT-PERFORMED claim with four limbs:

1. The source ANNOUNCES that cells "can withstand repetitive indentations in the range of 500 pN";
2. It ANNOUNCES that "applying repetitive compressions ... led to the destruction of previously imaged bacteria";
3. It prints no number of indentations, no cycles-to-failure and no failure probability;
4. Its only rupture figure is the scalar "2.1 +/- 0.5 nN", which DISAGREES with "about 2.5 nN" in its own Fig. 5C, alongside a 10^3 kPa/MPa discrepancy in its moduli.

The entry nominated this source as its own demotion trigger: a printed repetitive-indentation COUNT or a failure probability, anywhere including the Supporting Information, fires it.

Verdict in one line: limbs 1 and 2 hold verbatim and the trigger does NOT fire on anything I could read; limb 3 is **too strong as written** (a grid density of indentation points IS printed) though correct in substance; and limb 4 is **half wrong** - the moduli discrepancy is real and serious, but the 2.1 vs 2.5 nN "disagreement" is not a disagreement at all.

### Citation front matter, corrected

Taken from the article's own front matter, not from a short form:

- García-Torres, Lizeth; De Alba Montero, Idania; Kolosovas-Machuca, Eleazar Samuel; Ruiz, Facundo; Bhatia, Sumati; Cuellar Camacho, Jose Luis; Ruiz-García, Jaime (2025). "Mechanical stability of individual bacterial cells under different osmotic pressure conditions: a nanoindentation study of *Pseudomonas aeruginosa*." *Beilstein Journal of Nanotechnology* **16**, article 86, **pages 1171-1183**. DOI 10.3762/bjnano.16.86.
- Corrections to the entry's form: the first author's name carries the accent (**García-Torres**, not Garcia-Torres); the entry's "16:86" is the **article number**, and the **page range 1171-1183** is missing (the Supporting Information file's own running head prints "Beilstein J. Nanotechnol. 2025, 16, 1171-1183"). Volume, year and DOI as carried are correct. The SI filename the entry names, 2190-4286-16-86-S1.pdf, resolves and is correct.

## READ LEVEL

**Article (DOI 10.3762/bjnano.16.86): FULL TEXT**, via the publisher's own HTML at https://www.beilstein-journals.org/bjnano/articles/16/86, read twice (abstract, Experimental/Methods, Results, Discussion, Conclusion, Table 1, all figure captions). Served through the WebFetch summariser, so all quotations below are **as served**, and any string over roughly 125 characters arrived in consecutive segments - each such reconstruction is labelled with its fragment count.

**Supporting Information File 1 (2190-4286-16-86-S1.pdf): PARTIAL.** What I read: the file's title block and running head, and the captions of all six figures (the file numbers them Figure 1-6; the article cites them as S1-S6), plus whatever text layer the PDF carries. Page labels S2 through S5 were served. What I did **not** read: the raster content of the six figure panels themselves - embedded axis labels, tick ranges and in-panel annotations. That is a **COULD NOT READ on the figure rasters**, not a NOT FOUND. See ROUTES THAT FAILED.

The same limitation applies to the main article's own figure panels: I read every figure **caption** in full, but not text burned into the figure images. This matters in exactly one place, named under DEFECTS FOUND: the histogram "counts" axes of Figure 4C/4D and SI Figure S4.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) The two quoted strings, each whole in its sentence, with neighbours and scoping openers

**String 1 - "can withstand repetitive indentations in the range of 500 pN". CONFIRMED VERBATIM.** It sits in the **Abstract**. Reconstruction from 2 consecutive segments, verified at the junction after "and can":

> "Imaging and mechanical testing showed that bacteria are highly resilient to deformation and can withstand repetitive indentations in the range of 500 pN."

Neighbour before (3 segments): "Nanomechanical maps to test the mechanical response of the outer envelope of Pseudomonas aeruginosa were obtained utilizing atomic force microscopy in force-volume mode in the low range of loading forces when exposed to hypotonic (Milli-Q water), isotonic (PBS), and hypertonic (0.5 M NaCl) solutions."

Neighbour after (3 segments): "Analysis of force spectra revealed that although there are differences in the mechanical response within the first stages of nanoindentation, similar values in the slopes of the curves reflected a stable stiffness of about kB = 20 mN/m and turgor pressures of Pt = 12.1 kPa."

**What the opening words scope.** "Imaging and mechanical testing showed that" scopes the whole clause as an **inference drawn from two modalities** (imaging, and FV-mode force curves), not as a dedicated durability experiment. The trailing qualifier "in the range of 500 pN" scopes the **LOAD**, and only the load. It does not scope, bound or imply a number of repetitions. "highly resilient" is a bare qualitative predicate with no threshold.

**Does the clause assert, announce or deny a measurement?** It **ANNOUNCES a capability**. It asserts a qualitative survival outcome at a stated load. It asserts **no count, no cycle number and no probability**, and there is no hedged-and-cited rival formulation of this sentence elsewhere in the paper to prefer over it - the Discussion's nearest relative is the equally countless "the results presented here test the mechanical resilience of bacteria as a whole under different conditions of external osmotic pressure with repetitive nanoindentations."

**String 2 - "applying repetitive compressions ... led to the destruction of previously imaged bacteria". CONFIRMED VERBATIM, but the entry's ellipsis removes the scoping.** The whole sentence sits in **Results**, immediately before Figure 5. Reconstruction from 2 consecutive segments, verified at the junction after "via nanoindentations":

> "Finally, in Figure 5A and 5B, it was demonstrated how applying repetitive compressions via nanoindentations at high loading forces in hypertonic solution led to the destruction of previously imaged bacteria."

Neighbour before (2 segments): "Opposite to the Young's modulus, the mean maximal induced deformation upon compression δmax increases in the presence of a higher salt concentration."

Neighbour after (2 segments): "In Figure 5A, a region heavily coated with PA was mapped in 0.5 M NaCl with FV with 500 pN as the maximum loading force, and in Figure 5B, the same region was imaged under the same conditions but with a maximal loading force of 3000 pN."

**What the opening words scope.** "Finally, in Figure 5A and 5B, it was demonstrated how" scopes the claim to **two specific panels showing one scanned region**, and frames it as a demonstration, not a measurement. The interior words the entry's ellipsis drops - "via nanoindentations **at high loading forces in hypertonic solution**" - are the ones that scope the **condition**: 3000 pN load, 0.5 M NaCl only. The destruction claim is therefore **not** a claim about the 500 pN regime of String 1; the two strings describe different loads, and reading them together as one durability finding would be an error the paper itself does not make.

**Does the clause assert, announce or deny a measurement?** It **ANNOUNCES a qualitative, image-based outcome** for one region under one condition. The matching caption line is equally qualitative: "The image clearly shows the entire destruction of previously mapped bacteria." No cell count destroyed, no fraction, no survivor count.

The ellipsis is openly marked, so the entry's quotation is not a forgery - but a reader of the entry alone cannot see that the destruction was at 3000 pN in hypertonic solution in two panels. **The entry should carry the condition inside the quotation.**

### (c) Is any NUMBER of indentations or compressions printed anywhere?

**A number IS printed, and the entry's limb 3 is wrong at the letter.** In the Experimental/Methods section:

> "Nanoindentations were performed using a maximum loading force of 500 pN for each nanoindentation" / "applied in a pre-programmed grid of 48 points per line to quantify surface interactions" (2 consecutive segments; the junction after "for each nanoindentation" is verified)

followed by: "This allowed us to simultaneously acquire maps with enough resolution on the sample surface to identify individual bacteria".

Also printed, in Methods: **"At least 20 bacteria were measured for each investigated condition."**

**NUMERATOR CLASS and DENOMINATOR of "48 points per line", with overlap in both directions.** The numerator class is **indentation points at distinct lateral locations within one force-volume scan line**, each one a single approach-retract cycle at a maximum load of 500 pN. The denominator is **one scan line of one FV map** - checked against the near neighbours it is NOT: it is not per bacterium, not per map, not per spot, and not per condition. The paper prints **no number of lines**, no scan size and no total points per map, so "48 points per line" cannot be multiplied up into a per-map or per-cell total; any such product would be my own invention.

- What the source's class **MISSES** relative to the claim's quantity: it contains **zero repeat indentations at the same location**. A grid is a single pass over distinct positions. The quantity the entry says is absent - how many times a given cell or spot was indented before it held or failed - is genuinely absent.
- What it **INCLUDES that the claim excludes**: lateral sampling density, i.e. a count of distinct-location single indentations, which the entry's phrase "no number of indentations" reads as denying outright.

So this is **a number one word away from the claim's number**: 48 indentation points per line is an indentation count, but of a different quantity (spatial density, single pass) than the repetition count the entry means. The entry's substance survives; its wording does not.

**(d) Failure probability or cycles-to-failure.** **None found anywhere I read** - not in the text, not in Table 1, not in any figure caption in the article, and not in the SI captions or text layer. No survival fraction, no fraction of cells destroyed, no n-of-N, no Weibull or fatigue-style treatment, no repeated-load schedule. The destruction result is reported as an image, in words.

### (e) The rupture figures, and the moduli units

**"2.1 +/- 0.5 nN" CONFIRMED**, in Results, immediately after the sentence on loss of integrity:

> "The maximal force that the membrane could withstand before rupture was 2.1 ± 0.5 nN."

Its neighbour before (2 segments): "These results demonstrate the incapacity of PA to maintain the structural integrity of the outer membrane when exposed to larger loads within the time scale of the present experiment, as shown in the force curve in Figure 5C." The opener "These results demonstrate" scopes it to the Figure 5 experiment; "within the time scale of the present experiment" is an explicit hedge on duration that the entry does not carry.

**"about 2.5 nN" CONFIRMED**, in the Figure 5 caption, panel C. Caption in order:

> "Figure 5: Force-volume maps were obtained at low A) and high B) loading forces in the same scanned region."
> "The image clearly shows the entire destruction of previously mapped bacteria."
> "C) A representative force-separation curve on PA where a drastic drop in the force is detected at about 2.5 nN."

**Is the 2.1 vs 2.5 discrepancy real as described? NO.** Two reasons, either sufficient:

1. **They are different quantities.** 2.1 ± 0.5 nN is presented as a central value with a stated spread (the text gives no n for it - see DEFECTS). "about 2.5 nN" is explicitly "**A representative** force-separation curve", i.e. one curve chosen for display. A single representative trace is not expected to equal the mean.
2. **Even taken as the same quantity, they agree.** 2.1 ± 0.5 nN spans **1.6-2.6 nN** (MY OWN ARITHMETIC, carrying the source's stated uncertainty of ±0.5 through unchanged). "about 2.5 nN" falls **inside one stated standard deviation**. There is no numerical conflict to report.

**The moduli discrepancy IS real, and it is the serious one.** Printed in two incompatible unit scales for the same numerals:

- **Abstract, kPa** (2 segments): "Application of a contact mechanics model to account for the minute differences in mechanical behavior upon deformation provided Young's moduli in the range of 0.7-1.1 kPa."
- **Table 1, MPa.** Caption: "Mean values for stiffness and Young´s modulus obtained from distributions in FV maps and from the central region of PA." Headers as printed: "Solutions | k (mN/m) from distributions | **Y (MPa)** from distributions | kPA (mN/m) from the middle region of PA | **YPA (MPa)** from the middle region of PA | δmax (nm) from the middle region of PA". Rows: Milli-Q 8.83 ± 0.46 | 0.51 ± 0.07 | 21.3 ± 4.9 | **1.13 ± 0.38** | 51.74 ± 10.94; PBS 9.32 ± 3.69 | 0.5 ± 0.08 | 17.6 ± 5.28 | **0.93 ± 0.39** | 88.5 ± 17.47; 0.5 M NaCl 7.4 ± 0.17 | 0.14 ± 0.01 | 23.2 ± 5.36 | **0.69 ± 0.44** | 92.15 ± 27.85.
- **Figure 3 colour scale, MPa**: "the offset in the color-coded scales has been set to 0-35 mN/m and 0-5 MPa, respectively".

The Abstract's **0.7-1.1** is the same numeral pair as Table 1's per-cell column **0.69 ± 0.44 to 1.13 ± 0.38**, with the unit prefix changed. 0.7-1.1 kPa = 0.0007-0.0011 MPa; the table says 0.69-1.13 MPa. **Factor 10^3, confirmed, and the article nowhere reconciles it.** The "0.7-1.1 kPa" string appears **only in the Abstract**; the Discussion and Conclusion give no numeric modulus at all (the Discussion says only that Young's modulus values "show a shallow trend to decrease"). Figure captions carry no modulus values and, for Figure 4C/4D's histograms, **no units at all**.

One point in the paper's favour that the entry does not credit: the Abstract's own stiffness and turgor figures (kB ≈ 20 mN/m, Pt = 12.1 kPa) are unit-consistent with Table 1's kPA column (17.6-23.2 mN/m). The defect is localised to the modulus prefix, which makes a typographical slip in the Abstract the most economical reading - but it is an uncorrected slip in the one place most readers stop, and an abstract-only reader takes away a number off by three orders of magnitude.

### (f) Announced or measured?

**Both, in different places: the rupture force 2.1 ± 0.5 nN is MEASURED (a scalar with a stated spread, though with no printed n), while the repetitive-indentation durability of String 1 and the destruction outcome of String 2 are ANNOUNCED - a qualitative capability claim at a stated load and a qualitative image-based observation at 3000 pN in 0.5 M NaCl, with no repetition count, no cycles-to-failure and no failure probability anywhere in the article or in the Supporting Information I could read.**

## REGIME

In the source's own words. Population and unit of analysis: *Pseudomonas aeruginosa* ("PA"), individual cells immobilised on a substrate, "At least 20 bacteria were measured for each investigated condition"; parameters taken from "nanoindentations captured along the middle region of the longer axis of the bacteria in FV maps", with cell length from "A single measurement ... along the length of each bacteria, while three measurements were performed and averaged to take its width."

Instrument and operating condition: AFM "operated in contact mode using MLCT probes from Bruker" in **force-volume mode**; "The deflection set point was adjusted during the measurement to optimize imaging conditions"; maximum loading force **500 pN per nanoindentation** on a grid of **48 points per line** for the mapping regime, and a separate high-load regime described as "about 3 nN" in Methods and as "a maximal loading force of 3000 pN" in Results. Media: "hypotonic (Milli-Q water), isotonic (PBS), and hypertonic (0.5 M NaCl) solutions". Model: Sneddon contact mechanics, fitted "in the NanoScope software" (NanoScope 1.7 per SI Figure 3). Explicit temporal bound: "within the time scale of the present experiment".

**Does the claim sit inside this regime?** The entry's claim is a claim ABOUT what this paper prints, so it sits inside by construction. But two regime facts constrain how the entry may use it: (i) the durability announcement is bounded to **500 pN** and the destruction observation to **3000 pN in hypertonic solution**, so the paper never claims cells survive repeated loading at the load that destroys them; (ii) the whole paper is **single-pass spatial mapping**, not cyclic loading. A repetitive-indentation count is not merely unreported here - the experimental design does not produce one. That makes the absence structural rather than an omission, which is a stronger position for the ledger entry than the entry itself argues.

## DEFECTS FOUND

**In the source:**

1. **Modulus unit error of 10^3, Abstract vs Table 1 and Figure 3.** Confirmed, uncorrected, unexplained. The Abstract is the only place "kPa" is attached to the modulus. Consequence: nothing quantitative in the Abstract's modulus sentence can be leaned on without the table beside it.
2. **No n for the rupture figure.** "2.1 ± 0.5 nN" carries a ± with no stated number of curves or cells behind it, and Methods says only that representative curves "have been selected from nanoindentations captured along the middle region"; it "does not say how many curves were averaged for the reported means". The same gap affects every ± in Table 1.
3. **No number of scan lines**, so "48 points per line" cannot be resolved into a per-map total.
4. **Units missing from figure captions** for stiffness and Young's modulus in Figures 3 and 4 - the very parameters whose units are inconsistent elsewhere.
5. **Methods/Results load mismatch in presentation**: "about 3 nN" vs "3000 pN" for the same experiment. Equal in value, inconsistent in style, and it sits one paragraph from the 2.1/2.5 nN pair where a careless reader will conflate load with rupture.

**In the ledger entry's own claim:**

6. **Limb 3 overreaches.** "printing no number of indentations" is false at the letter: **"a pre-programmed grid of 48 points per line"** is printed in Methods, and "At least 20 bacteria were measured for each investigated condition" is printed too. The entry should say what is actually absent - **no repetition count at a given location, no number of scan lines, and therefore no per-cell or per-map indentation total.**
7. **Limb 4's rupture inconsistency is not an inconsistency.** 2.5 nN lies inside 2.1 ± 0.5 nN (span 1.6-2.6 nN, MY OWN ARITHMETIC on the source's stated uncertainty), and the two figures are different quantities - a central value versus one explicitly "representative" curve. Citing this as a self-consistency failure weakens the entry, because the moduli defect beside it is real and would carry the point alone.
8. **Limb 2's ellipsis drops the scoping condition.** "applying repetitive compressions ... led to the destruction" removes "at high loading forces in hypertonic solution", and the opener "Finally, in Figure 5A and 5B, it was demonstrated how" is dropped entirely. The entry should carry the condition inside the quotation.

**The one hole I could not close, named precisely rather than reported as an absence.** The main article's **Figure 4C/4D** and **SI Figure S4** are histograms of stiffness and Young's modulus; a histogram's counts axis is, by construction, a tally of force curves, so its tick range would reveal the number of indentations behind one map. I read those captions in full but **COULD NOT READ the axis ranges inside the figure rasters**. On the demotion trigger this is immaterial, and I can say why by kind: such an axis would print a count of **distinct-location single indentations per map**, which is the "48 points per line" quantity scaled up - it is not a repetition count at a spot and it is not a failure probability, so it is **not the kind of number that fires the trigger**. I therefore do not nominate the figure rasters as the artifact that would settle the trigger question; nothing in this paper is that kind of artifact, because the design is single-pass.

**On the entry's universal.** The entry's limb 3 is a claim of the form "prints no X anywhere in it, including its supporting information". Instances I **opened**: the article full text at the publisher HTML (all sections, Table 1, all captions) and SI File 1 at caption and text-layer level. Instances I did **not** open: the raster interiors of the article's Figures 1-5 panels and of SI Figures 1-6 (= S1-S6). For **failure probability and cycles-to-failure**, the claim of absence is **true over the instances I opened** and **unenumerated** over the figure rasters - though a failure probability is not the kind of quantity a stiffness histogram or an AFM height map can carry, which makes the residual risk small but not zero. For **"no number of indentations"**, the claim is **FALSE** on the instances I opened, on the Methods sentence quoted above.

## ROUTES THAT FAILED

- **curl to the SI PDF** at https://www.beilstein-journals.org/bjnano/content/supplementary/2190-4286-16-86-S1.pdf: `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, 0 bytes. This is the documented tool-scoped 403 at this proxy, not a host block - WebFetch reached the same URL on the first attempt. Consequence: I could not get the PDF onto disk, so I could not open its pages as images and the figure rasters stayed unread. The proxy was not probed or reconfigured.
- **No route failed for the article itself.** doi.org was not used (the brief warns of 429 with a do-not-retry instruction); the publisher host was queried directly and served full text both times.
- **No WebSearch was run.** Both documents resolved from the citation as the entry carries it, so a search would have been spent for nothing. Budget remaining and unused: 2 WebFetch, 1 WebSearch.
- Noted but not used: PMC and Europe PMC are hard-blocked here; neither was attempted, and this article is publisher-side open access, so neither was needed.

## BEARING ON THE LEDGER ENTRY

**The nominated demotion trigger does NOT fire.** No repetitive-indentation count and no failure probability is printed in the article or in the Supporting Information at the level I read. More than that: the trigger is structurally unlikely ever to fire on this source, because the experiment is **single-pass force-volume mapping on a lateral grid**, not cyclic loading, and such a design does not generate a cycles-to-failure or a survival probability. The entry's novelty is therefore **not reduced** by this source, and the "published is not performed" reading of it **HOLDS**.

**But two legs of the entry must be rewritten, or an adversary will take the entry apart on them.**

1. **NARROW limb 3.** Strike "printing no number of indentations" and put in its place the thing that is true and checkable: *the paper prints a grid density of "48 points per line" and "At least 20 bacteria ... for each investigated condition", but no number of scan lines, no per-map or per-cell indentation total, and no count of repeat indentations at any location.* As written, limb 3 is refuted by one sentence in the Methods, and that is the kind of refutation that discredits the surrounding legs.
2. **STRIKE the rupture half of limb 4.** The 2.1 ± 0.5 nN / "about 2.5 nN" pair is **not** a discrepancy: 2.5 sits inside the stated ± 0.5, and the caption marks its curve as "representative", i.e. a different quantity from a central value. **HOLD the moduli half**: the 10^3 kPa-vs-MPa split between the Abstract ("0.7-1.1 kPa") and Table 1 / Figure 3 ("Y (MPa)", "YPA (MPa)", "0-5 MPa") is real, unexplained, and on its own enough to support the entry's conclusion that the paper's abstract-level quantitative statements cannot be leaned on unchecked. Add the sharper defect the entry missed: **the rupture figure and every ± in Table 1 are printed without an n.**
3. **TIGHTEN limb 2's quotation** so it carries the condition the ellipsis drops: the destruction was at **3000 pN in 0.5 M NaCl**, in two panels of one scanned region, and is reported as an image, not as a rate. The paper does not claim cells survive repeated loading at the load that destroys them, and the entry should not imply that it does.

**CONVERT TO A PROMOTION CONDITION, not a live doubt:** the residual unread material is the figure rasters (article Figures 1-5; SI Figures S1-S6). If the entry wants limb 3's absence stated as a flat universal rather than as "true over what was opened", the condition is that someone open those panels and report the counts-axis ranges of Figure 4C/4D and SI Figure S4. I expect that to change nothing about the trigger, for the reason given under DEFECTS - a counts axis tallies distinct-location indentations, not repetitions and not failures - so this is a tidiness condition on the entry's wording, not a threat to its conclusion.

Overall: the entry's central claim is **MOSTLY** right. Its direction is correct and its trigger is safe; two of its four limbs need surgery, one of them because it is simply false against the Methods.
