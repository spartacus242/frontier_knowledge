# VERIFY - Sardina et al. (16WCEE Paper 193) prints only ABSOLUTE-value magnitude residuals against GCMT, not a signed bias, and no decision-flip share

Checker: fresh context. Budget used: 4 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

That WCEE2017-193.pdf (the 16WCEE paper on two decades of Pacific Tsunami Warning Center operations) prints a signed initial-versus-later magnitude bias over a population of earthquakes.

Verdict: **PARTLY**. A signed *scalar* bias (a signed mean or median residual) is **not printed**. Sign-*resolved* population structure **is** printed - directional counts and shares, a sign-crossover magnitude, and a magnitude-dependent correction formula - and the residual is *defined* with a sign. The aggregate statistics the paper actually prints are explicitly of absolute values.

## READ LEVEL

**PARTIAL.** Sections read in substance via the WebFetch summariser on the publisher PDF: Abstract; the full section-heading list; all nine figure captions verbatim; Section 3.2 "Distribution of PTWC Magnitude Residuals" in detail, including every residual statistic, count and percentage, with cut-grammar checks on four load-bearing sentences; Section 3.3 case examples; the threshold discussion; the numbered Conclusions. **Not read:** continuous verbatim text of any section. A request for ordered consecutive verbatim segments of the Abstract and Section 3.2 was **refused by the summariser** as full-text reproduction, so no reconstruction is attempted here and none of the long sentences below is assembled from fragments. Section 3.1 (epicentral offsets) and 3.4 (latencies) read only at caption/abstract level - not needed for this claim.

Route that worked: `WebFetch` on `https://www.wcee.nicee.org/wcee/article/16WCEE/WCEE2017-193.pdf` (the **www** host). Three fetches on that URL, plus one on the ITAM mirror record for front matter cross-check.

**Full citation from the front matter** (names taken from the paper's own author block, not from any mirror's short form):

> Sardina, V.; McCreery, C.; Fryer, G. (2017). "COMPILATION AND ANALYSIS OF TWO DECADES WORTH OF TSUNAMI BULLETINS ISSUED BY THE PACIFIC TSUNAMI WARNING CENTER." *16th World Conference on Earthquake Engineering, 16WCEE 2017*, Santiago, Chile, 9-13 January 2017. Paper N° 193. Registration Code S-B1463015136. All three authors: Pacific Tsunami Warning Center, NOAA/NWS/DOC (Sardina, Geophysicist; McCreery, Director; Fryer, Senior Geophysicist).

**No DOI.** 16WCEE proceedings papers are not DOI-registered; the paper number plus registration code are the only identifiers. Record it as *Sardina + 2017 + title + Paper N° 193*.

Two front-matter corrections for the entry:
1. The entry's label, "two decades of Pacific Tsunami Warning Center operations," is not the title. The title is about **tsunami bulletins** issued by PTWC - a bulletin-level compilation, which is what fixes the population (see REGIME).
2. The ITAM Invenio mirror (record 18657) renders the title in title case with a trailing "(Ptwc)" and lists **no authors at all** (Contributors field empty). Do not cite from that record; "(Ptwc)" is the mirror's mangling, not front matter.

## WHAT THE SOURCE SAYS (quotations as served)

**(b) The aggregate residual statistics are explicitly ABSOLUTE values.** The decisive sentence, with the words on both sides of the cut checked:

> before: "...with blue indicating an underestimation, and red an overestimation."
> quote: **"The absolute values of these magnitude residuals have a mean of 0.19, a standard deviation of 0.16,"**
> after: "and a median value of 0.2 magnitude units."

The grammar on both sides holds: the subject of "have a mean of 0.19" is "The absolute values of these magnitude residuals." Cutting at "these magnitude residuals have a mean of 0.19" would be verbatim and would be a **misquotation**, because it would drop the absolute-value operator that is the whole question here. And the sentence that follows is the authors' own hedge on these numbers:

> "These general statistics, however, fall short of revealing some significant trends in the data."

That is the hedged, cited formulation and it is the one to carry.

**The Abstract repeats the figure unsigned:**

> before: "...19 km for the epicentral offsets,"
> quote: **"and 0.2 units for the magnitude residuals."**
> after: "A new magnitude dependent correction formula derived from the analysis of the Mwp"

So 0.2 in the Abstract is a median of absolute residuals, with no sign attached.

Asked directly whether a signed mean appears anywhere in the paper, the read returned: **No** - "It does not print a signed mean magnitude bias anywhere." Treat this as the result of a PARTIAL read, not as a full-text negative: it is corroborated by the Abstract and by Section 3.2 both giving the figure unsigned, and by Figs. 4 and 5 handling the two signs as *separate maps* rather than netting them.

**The sign is nevertheless defined, and sign-resolved results ARE printed over the population.** Fig. 3's caption fixes the sign convention:

> Fig. 3: "Spatial distribution of PTWC magnitude residuals calculated by subtracting the catalog moment magnitudes (Mw) shown in Fig. 1 from the magnitudes reported in the PTWC bulletins."

so residual = PTWC bulletin magnitude - GCMT Mw, positive = overestimation. Figs. 4 and 5 then split the population by sign:

> Fig. 4: "Spatial distribution of PTWC negative magnitude residuals (underestimations). Notice the absence of the largest magnitudes in the middle (PTWC) histogram when compared to the one on top (catalog)."
> Fig. 5: "Spatial distribution of PTWC positive magnitude residuals (overestimations). Notice the scarcity of smaller magnitudes in the middle histogram (PTWC) when compared to the one on top (catalog)."

Printed sign-resolved counts and shares over the 647-event population (Section 3.2):

- **160 underestimations, 24% of 647**; of these, **39 of the 57 events with Mw >= 7.6 (68%)**.
- **391 overestimations, 60% of 647**; of these, **379 of the 590 events with Mw < 7.6 (64%)**.
- **12 events (1.8%)** in the Mw 7.6-8.6 band were overestimated, **3** of them by more than 0.3 units.
- Andean South America subset, **n = 48**: **22 (46%) underestimated**, by up to 0.8 units; **15 (31%) overestimated**.
- The 2002 automatic correction "contributes to overestimating over **52%** of moderate earthquakes" - a share of a magnitude band, not a bias statistic.

And a printed sign-crossover point, checked at both cuts:

> before: "...and the GCMT moment magnitudes (Mw)."
> quote: **"The black regression line in Fig. 6a intersects the Y=X line around Mw=7.45,"**
> after: "where the data trend clearly shifts from mostly overestimations to underestimations."

This is the strongest thing in the paper on the claim: a **magnitude-dependent signed bias**, positive below Mw ~7.45 and negative above it. But no slope, intercept, standard error or residual-variance figure for that regression is printed in the text I could read, and no signed mean is computed on either side of the crossover.

**(d) and (e) as served.** On predictability: the paper fits a correction, it does not test efficiency - Fig. 6 is "a) Mwp as reported in PTWC Bulletins, b) After removing 2002 Correction, c) After applying the new Correction Formula shown in b)", i.e. a calibration sequence. Conclusion 8 states a new magnitude-dependent Mwp correction; **its coefficients came back garbled in the served text and I do not report them**. No unbiasedness or efficiency test statistic, and no test of whether the revision is forecastable from the early value, appears. On decision flips: thresholds are discussed (7.6-7.8 regional warning; >= 7.9 expanding warning and watch; a 7.1 Pacific threat criterion) and individual counterfactual narratives are given (how the 2004 Sumatra event would have been handled), but **no share of alerts, warnings or threshold crossings that would change under the later magnitude is computed**. The only percentages in the neighbourhood are the residual-sign shares above.

## REGIME

In the paper's own terms:

- **Population / denominator:** "the 647 earthquakes under consideration in this study" (Fig. 1 caption), PTWC tsunami bulletins **from 1998 to April 2016**. The unit of analysis is the *earthquake*, reduced from the bulletin stream - PTWC issues many bulletins per event, so the paper's own title-level object (bulletins) is collapsed to one preliminary value per event.
- **Numerator (the early value):** the magnitude "reported in the PTWC bulletins" - **Mwp** after about 2002, **Ms** before it, and for at least one case (2011 Japan) a **JMA-sourced** value of 7.9 rather than a PTWC measurement. Mixed instrument, and an instrument that changed mid-population, compounded by a 2002 automatic correction that was in force for part of the window and is explicitly backed out in Fig. 6b.
- **Comparator (the later value):** **GCMT moment magnitude Mw** (Fig. 1, Fig. 3, Fig. 6), with NEIC supplying epicentre and depth. An *external authoritative catalogue*, not PTWC's own later bulletin.
- **Operating condition:** conditioned on PTWC having issued a tsunami bulletin at all, and on a GCMT solution existing to cross-reference.

**Does the claim sit inside this regime?** Only in part, and sub-claim (c) is where it comes apart.

**Numerator class, with its exclusions.** "the magnitudes reported in the PTWC bulletins" - a *warning-centre rapid magnitude*, Mwp or Ms, excluding any PTWC revision issued in a later bulletin for the same event, since no PTWC-later value enters the comparison at all.

**Denominator, checked against the near neighbours it is not.** 647 cross-referenced earthquakes with PTWC bulletins, 1998-2016/04. It is **not** all earthquakes in the window; **not** all PTWC bulletins (many per event); **not** all GCMT events; **not** all PTWC-detected events.

**Overlap in both directions.**
- What the paper's class **MISSES** relative to the claim: any comparison of *one agency's own successive published vintages*. There is no PTWC-first-bulletin-versus-PTWC-later-bulletin number anywhere in what I read. It also misses events below bulletin-issuance threshold, so the population is selection-conditioned on an alert having been issued - precisely the events where a decision-flip analysis would bite are the only ones present, and the sub-threshold complement is absent.
- What it **INCLUDES that the claim excludes**: a magnitude-type change inside the population (Ms -> Mwp), an administrative correction change (the 2002 automatic correction) that the authors themselves treat as a confound and remove, and at least one numerator value sourced from a *different* agency (JMA). A number drawn from this population is not a single-instrument, single-vintage revision statistic.

This is the "one word away" case the ledger keeps hitting: *rapid operational magnitude vs. independent final catalogue* is a different quantity from *an agency's first published magnitude vs. that agency's own later published magnitude*, even though both are "initial versus later."

## DEFECTS FOUND

1. **The claim's central term fails.** No **signed** bias statistic is printed. The headline residual numbers - mean **0.19**, sd **0.16**, median **0.2** magnitude units, Section 3.2, repeated unsigned in the Abstract - are of **absolute values**, stated as such in the sentence itself. An absolute mean residual is a *spread*, not a bias: it cannot distinguish a centred estimator from one offset by 0.19 units. Anyone citing "0.2" from this paper as a bias is citing a different quantity.
2. **But the claim is not simply false either**, and a flat "no signed bias" would be the mirror-image error. The paper prints the sign convention (Fig. 3), separates the population by sign (Figs. 4, 5), gives directional counts and shares over n = 647 (160 / 24% low, 391 / 60% high), and prints a **magnitude-dependent sign reversal at Mw ~ 7.45**. That is a signed bias *over a population*, expressed as counts and a crossover rather than as a signed mean.
3. **Comparator mismatch (c).** Numerator = PTWC rapid bulletin magnitude (Mwp/Ms, one JMA value); comparator = **GCMT Mw**. This is a warning-centre-vs-external-catalogue comparison, **not** successive published vintages from one agency. Sub-claim (c) therefore resolves *against* the reading that this paper pre-empts a same-agency-revision result.
4. **No efficiency or unbiasedness test (d).** What the paper does is *adjacent and not nothing*: a magnitude-dependent correction formula fitted to Mwp against GCMT is, in substance, a demonstration that the error is **a predictable function of the early value**. But it is presented as calibration, not as a test - no test statistic, no standard errors, no out-of-sample check, and the fitted coefficients came through garbled so I cannot even report the function. The paper **announces and applies** a correction; it does not **measure** predictability as such.
5. **No decision-flip quantity (e).** Thresholds are **defined and discussed** (7.6-7.8, >= 7.9, 7.1) and illustrated with single-event counterfactuals. No share of alerts or threshold crossings that would change under the later magnitude is computed. On this limb the paper **defines and bounds**; it does not evaluate.
6. **Mirror hazard.** The ITAM Invenio record lists no authors. If the entry's citation came from there, the author list in the entry is unsourced.

## ROUTES THAT FAILED

- `WebFetch` on `https://wcee.nicee.org/wcee/article/16WCEE/WCEE2017-193.pdf` (no `www`): `client_error`, nothing retrieved. The **www** host works; the bare host does not. This is a path/host fault, not a block.
- `curl -L` on the same URL: `curl: (56) CONNECT tunnel failed, response 403` at the agent proxy. Tool-scoped per `/root/.ccr/README.md`; WebFetch reached the same host fine. Not routed around, not retried.
- Ordered-consecutive-verbatim-segment transcription of the Abstract and Section 3.2: **refused by the summariser** as full-text reproduction. Consequence: long sentences are reported as served, and nothing here is reconstructed from fragments.
- The ITAM Invenio record page carries **no direct PDF link** and no author list; usable only as a title/date cross-check.

## BEARING ON THE LEDGER ENTRY

**Narrows the entry. Does not close the efficiency limb, and does not reject.**

- **Against the entry (real erosion).** The entry treats the printing of a signed population-level early-vs-later magnitude bias as the event that would move **Disguise** from Partial toward Unresolved and novelty toward **Low**. Sardina et al. (2017) does not print a signed mean, but it does print, over n = 647, that 60% of rapid magnitudes ran high and 24% ran low, that 68% of the Mw >= 7.6 events ran low, and that the sign flips at Mw ~ 7.45 - plus a correction formula built on exactly that structure. Any version of the entry's weakest leg that asserts *nobody has shown directional, magnitude-dependent early-magnitude bias over an earthquake population* is **struck**. Novelty on that formulation goes to Low.
- **For the entry (the leg that survives).** Two things the entry needs are absent here and the absence is from a read good enough to assert it: (i) the comparator is **GCMT**, so nothing in this paper speaks to *one agency's own successive published vintages* - sub-claim (c) resolves in the entry's favour; (ii) **no decision-flip share** is computed, so the quantity that converts a bias into an operational cost is unmeasured. The paper's thresholds are a **definition citation, not an evaluation**.
- **Recommended disposition: hold at Provisional, narrowed, with a promotion condition.** Rewrite the efficiency limb so its numerator and comparator are explicit - same-agency successive published vintages, and/or a computed share of alerts or threshold crossings that flip under the later value. Cite Sardina et al. (2017) in the entry as prior art that **already prints** the rapid-vs-catalogue directional structure, and state the 0.19 / 0.16 / 0.2 figures as **absolute-value** statistics wherever they appear, never as a bias. Promotion condition: the entry advances only if it carries a quantity of a kind this paper does not print - a signed mean over a stated population, a same-vintage revision series, or a decision-flip rate.
- **Read-level caveat on the negatives.** Sub-claims (d) and (e) are negatives from a **PARTIAL** read with full-text transcription refused. They are corroborated by the Abstract, the complete heading list, all nine figure captions and the Conclusions, which is strong, but a full-text read could still surface a signed mean or a flip rate in Section 3.3 or 3.4 prose. If this entry's disposition is going to turn on (e) alone, get the PDF onto disk and grep it before acting.
