# VERIFY - Thompson 2016 (Anal. Methods 8, 742-746): the four printed figures, the ratio's denominator, and the "about double" sentence
Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM
UQ-20261022-12 asserts of M. Thompson, "The comparison between reproducibility standard deviations from
collaborative trials and proficiency tests: a preliminary study from food analysis", DOI 10.1039/C5AY02890F:

1. It prints median 1.01 with SD 0.53 for mass fractions 10^-7 to 10^-1, and median 1.16 with SD 0.55 below 10^-7.
2. Over 907 FAPAS rounds in 2014, with a median of 41 participants.
3. Its comparator is the Horwitz function fitted across methods and eras, not any method's own earlier study.
4. Its Conclusions announce the doubling in words, with no number, and no confidence intervals anywhere.

Verdict in one line: the four figures, the round count and the participant median are all CONFIRMED as printed, the
comparator point is CONFIRMED for the Horwitz region and WRONG below 10^-7, the "no number / no CI" point is
CONFIRMED and is stronger than the entry says (the doubling carries a reference marker), and "over 907 rounds" is a
denominator error - 907 is the whole 2014 qualifying set across three regions, and no per-region n is printed.

## READ LEVEL
- **Thompson, DOI 10.1039/C5AY02890F - FULL TEXT**, via the author version named in the entry,
  https://pubs.rsc.org/om/content/getauthorversionpdf/C5AY02890F (4 fetches, 4 differently-targeted passes over the
  same 11-page document: front matter/abstract/numbers; "double"/"twice"/"small number" plus the whole Conclusions;
  the scaling definition, region headings, Horwitz provenance, figure captions; per-region counts, every occurrence
  of "confidence", high-region statistics, method-choice sentences). Every pass is served through the summariser,
  which caps verbatim quotation at ~125 characters, so all long quotations below are labelled reconstructions from
  ordered consecutive segments. **I did not see the plotted figures themselves** (vector graphics are not served as
  text), so statements about what is or is not inside Figs 1-8 rest on captions and running text only.
- **Front matter / publication year - FULL RECORD**, via the RSC article landing page
  https://pubs.rsc.org/en/Content/ArticleLanding/2016/AY/C5AY02890F (1 fetch, located by 1 WebSearch because the
  author-version PDF prints no year, volume or pages anywhere).
- **Thompson and Wood, "The 'Horwitz ratio'", DOI 10.1039/C4AY02020K - NOT READ.** Budget exhausted on the primary
  document. This matters for exactly one thing: the Conclusions' doubling sentence carries reference marker 5, and
  the reference list entry "Anal. Methods, 2015, 7, 377-379" is where that marker points. I identify that entry as
  Thompson and Wood by year/volume/pagination match ONLY - that identification is unverified, and ref 5's content is
  COULD NOT READ, not absent.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter (sub-claim a, the year)
Landing page, as served: title as the entry carries it; author "M. Thompson"; **Anal. Methods, 2016, 8, issue 4,
pages 742-746**; DOI 10.1039/C5AY02890F; **Submitted 02 Nov 2015, Accepted 02 Dec 2015, First published 17 Dec 2015**.
The author-version PDF itself prints **no** year, received/accepted date, volume or page number - it names the journal
only as "Analytical Methods", which is why a previous reader inferred "2015/16". **That flag can come off: cite 2016
(issue year), online 17 Dec 2015.** Author name from the front matter is "Michael Thompson", School of Biological and
Chemical Sciences, Birkbeck University of London (the landing page shortens it to "M. Thompson").

### The four figures (sub-claim a)
All four are in **running text, under section headings that set the mass-fraction range. The paper contains no tables**,
and none of the four numbers appears in any of the eight figure captions.

Section heading, as served: "Mass fractions between 10-7 and 10-1 (the 'Horwitz region')". Within it:
- "The median observed value was 1.01, showing a close relationship between the trends" / "of the precisions of the
  two sources of interlaboratory information." (reconstruction, 2 consecutive fragments)
- "However, the dispersion of the scaled values was considerable, with a standard deviation of 0.53." (1 fragment)

Section heading, as served: "Mass fractions smaller than10-7 (the 'low' region)". Within it:
- "The trend of the scaled standard deviations in proficiency tests is here somewhat higher than unity," / "at an
  almost constant level, with a median of 1.16 and a standard deviation of 0.55." (reconstruction, 2 fragments)

So: **1.01 / 0.53 for 10^-7 to 10^-1, and 1.16 / 0.55 below 10^-7 - confirmed exactly as the entry carries them,
including which pair goes with which range.** Units: both medians and both SDs are dimensionless (ratios of a
relative SD to a predicted relative SD).

A third region exists that the entry does not mention: "Mass fractions greater than 10-1" (the high region, Figs 6-8).
**No median and no SD of the scaled values is printed for it** - only a trend, "As expected, the points show a strong
downwards trend as mass fractions exceed 0.4."

### The round count and the participants (sub-claim a, denominator)
Reconstruction, 4 consecutive fragments:
> "The statistics used in this comparison are the robust means and standard deviations from all of the qualifying
> tests provided in the year 2014 by the FAPAS proficiency testing scheme. The total number of qualifying tests was
> 907, encompassing a wide range of analyte types, matrices and mass fractions. The minimum number of laboratories
> participating in any of these tests was 27 and the median 41."

**907 and median 41 confirmed, with the year 2014.** Two cautions. (i) The paper's word is "qualifying tests", not
"rounds"; for FAPAS these are the same objects, but 907 is the count of *tests*, and the paper does not define
"qualifying". (ii) **907 is the total across all three mass-fraction regions.** I asked directly for per-region
counts: **no count or n is printed for the Horwitz region, the low region or the high region.** The figures further
state that outliers were omitted from the plots (eleven high outliers in the Horwitz-region figure, three in the low
region, four in the high region), so even the plotted n is not the regional n.

### The ratio's numerator and denominator, in the paper's own words (sub-claim b)
Reconstruction, 2 consecutive fragments:
> "Each standard deviation from FAPAS was scaled to (that is, divided by) the value predicted by the Horwitz function
> for the corresponding concentration of the analyte."

So **numerator = one FAPAS proficiency-test round's robust reproducibility standard deviation; denominator = the
Horwitz-function prediction at that analyte concentration.** Nowhere is the denominator a collaborative trial's own
published R, and nowhere is it the same method's earlier published R.

**But the denominator changes below 10^-7, and the entry does not say so.** As served:
> "At mass fractions below about 10-7 the Horwitz function predicts standard deviations that are inconsistent with
> detection capability, and in practice we find in that region a tendency for the observed relative reproducibility
> standard deviation to stabilise at a lower value, centred on 0.22 regardless of concentration." (reconstruction,
> 4 fragments) ... "It was therefore used in this study to scale the RSDR values from the proficiency test
> statistics." (1 fragment)

That is: **in the low region the denominator is the flat constant 0.22 relative SD, not the Horwitz function.** The
1.16 / 0.55 pair is therefore a ratio to a constant, and only the 1.01 / 0.53 pair is a ratio to the fitted function.

Provenance of the Horwitz function, as served (reconstruction, 4 fragments):
> "The Horwitz function is an important generalisation of this type, describing the trend of [...] This function,
> based on statistics published between the 1930s and 1977, was shown to express the trend of the collaborative trial
> statistics rather closely at mass fractions between 10-7 and 10-1 [...] Moreover, no substantial improvement in
> precision was visible in a more recent (1990-2000) collection of statistics."

So "fitted across eras" is the paper's own content ("published between the 1930s and 1977", checked against a
1990-2000 collection). "Across methods" is **not** stated in those words: the paper says the function describes the
trend of collaborative trial statistics in general, and separately that each collaborative trial uses "a single
carefully-defined analytical procedure", from which pooling across methods follows - but the inference is the
reader's, not a printed phrase. **The paper does not state how many collaborative trials the function was fitted to.**

### Confidence intervals and standard errors (sub-claim c)
**No confidence interval, no standard error, no "+/-", and no interval bounds are printed anywhere - not for the two
medians, not for the two standard deviations, not for the LOWESS trends.** The word "confidence" occurs five times,
and all five are either qualitative or bare significance verdicts:
- opening section: "the resultant standard deviations therefore would have wide confidence intervals and might give"
  [rise, without significant lack of fit, to a variety of possible models, some inappropriate] - a statement about
  *collaborative trials in general*, with no interval printed;
- Horwitz region: "This trend is small in relation to the dispersion of the individual values but is significant at
  95% confidence";
- Horwitz region: "one-way analysis of variance showed no differences among the Series that was significant at 95%
  confidence.";
- low region: "analysis of variance shows that the variation among the means is significant at 95% confidence.";
- high region: "analysis of variance shows no variation among the means significant at 95% confidence."

No F statistic, no p value, no degrees of freedom accompanies any of those four ANOVA/trend verdicts.

### The Conclusions sentence about doubling (sub-claim d)
**Reconstruction from 3 ordered consecutive fragments, verified at both junctions ("individual values" / "around the
Horwitz function", and "attributed" / "to the random variation"):**
> "Moreover, studies of collaborative trial statistics alone show considerable scatter of individual values around
> the Horwitz function and its modifications, about double the variation that could be attributed to the random
> variation inherent in small-number statistics.5"

The superscript "5" is served attached to "statistics", i.e. **the sentence is a cited attribution to reference 5**,
not a finding of this paper. The next sentence, as served, is "That alone would inject considerable variation into the
scaled values considered in this paper." - so the doubling enters as an *explanation for* this paper's dispersion,
not as something this paper measured. Reference 5's list entry is "Anal. Methods, 2015, 7, 377-379" (my match to
Thompson and Wood, "The 'Horwitz ratio'", unverified - see READ LEVEL).

**Is a number for it printed anywhere? No.** I asked for any variance ratio, percentage or SD for the excess of
collaborative-trial scatter over small-number expectation: **no number printed anywhere in the paper.** "about double"
is the whole of it - a word-factor, hedged by "about", with no numerator, no denominator and no uncertainty.
The near-neighbour number that *is* printed in the same Conclusions paragraph is a different quantity: "with a
standard deviation of about 0.5" (reconstruction with its clause: "However, there is considerable variation among
individual values around median levels of the scaled standard deviations, with a standard deviation of about 0.5,
showing that case-by-case comparisons ... might give rise to a different outcome."). That 0.5 is the scatter of
*this paper's* PT-to-Horwitz ratios, not the CT-scatter-to-small-number-expectation ratio. Anyone reading 0.5 as the
doubling figure has crossed quantities.

For the record, the Conclusions' leading finding, as served (reconstruction, 3 fragments):
> "This preliminary comparison between collaborative trials and corresponding proficiency tests has shown that,
> contrary to expectations, the overall [tendency] is for the two types of interlaboratory study to provide rather
> similar reproducibility standard deviations at the same concentration of the analyte."
(The served text reads "the overall is for" - a word appears to be dropped by the extraction at that point; the
abstract's parallel sentence reads "the general tendency is for proficiency tests to provide slightly smaller
standard deviations". I have not completed the cut string by inference; the bracket marks where I cannot vouch.)

### One designated method or their own procedures (sub-claim e)
Opening section, the contrast as served:
- collaborative trial: "selected laboratories analyse the same suite of test materials while using a single
  carefully-defined analytical procedure";
- proficiency test: "In a proficiency test, however, laboratories are usually free to use any analytical procedure "
  / "or method that seems appropriate." (reconstruction, 2 fragments)
- abstract: "the various procedures used by the participants will each introduce an extra uncertainty".

**Answer: the proficiency-test participants use their own procedures, not one designated standard method.** The
hedged, cited-style formulation is the one quoted above and it carries "usually"; and the paper makes this statement
about *proficiency tests in general*, **not specifically about FAPAS** - I found no sentence saying FAPAS participants
in particular may use any method. The candidate's unit therefore rests on a general-PT sentence plus the abstract's
"various procedures used by the participants", which is about this study's data and is the better support.

## REGIME
One line, in the paper's own terms: **all 907 "qualifying tests" provided in the year 2014 by the FAPAS food-analysis
proficiency testing scheme (minimum 27, median 41 participating laboratories per test, participants "usually free to
use any analytical procedure or method"), unit of analysis = one test's robust reproducibility standard deviation
scaled by division by the Horwitz-function prediction at that concentration (or, below mass fraction 10^-7, by the
constant relative SD 0.22), reported separately for three mass-fraction regions, as an explicitly "preliminary"
study with no case-by-case analyte/matrix resolution.**

Does the candidate sit inside it? **Partly, and not on the axis that matters.** On population and unit it does: PT
rounds with tens of participants using their own procedures, in food analysis. On the **comparator** it does not -
this paper's denominator is a cross-era fitted function (or a constant), never "the same method's own earlier
published R", so the paper is silent about that ratio rather than supporting or contradicting it. And on sector and
year it is narrow: food, 2014, FAPAS, one scheme.

## DEFECTS FOUND
1. **"over 907 FAPAS rounds" is a denominator error as attached.** 907 is the total 2014 qualifying set spanning
   three mass-fraction regions. **No per-region n is printed**, so neither the 1.01/0.53 pair nor the 1.16/0.55 pair
   is computed over 907; each is computed over an unprinted subset, with outliers additionally dropped from the
   corresponding figures. The entry must say "drawn from 907 qualifying FAPAS tests in 2014 (per-region n not
   printed)".
2. **The comparator claim is right for one pair and wrong for the other.** Below 10^-7 the denominator is the flat
   constant 0.22, not the Horwitz function: "It was therefore used in this study to scale the RSDR values from the
   proficiency test statistics." The entry's "its comparator is the Horwitz function" must be narrowed to the
   Horwitz region, with the low-region denominator named as the 0.22 constant.
3. **"fitted across methods and eras" overstates the printed words.** "Eras" is printed ("statistics published
   between the 1930s and 1977", plus a 1990-2000 check). "Across methods" is an inference; the number of trials
   fitted is not printed. Keep the eras clause, mark the methods clause as inference.
4. **"rounds" is the entry's word; the paper says "qualifying tests".** Harmless for FAPAS but worth matching.
5. **The entry undersells sub-claim 4 in one way and overstates it in another.**
   - Undersells: the doubling sentence **carries reference marker 5** and is followed by "That alone would inject
     considerable variation into the scaled values considered in this paper." It is an attribution to prior work used
     as an explanation, so the paper **ANNOUNCES AND CITES** the doubling; it neither measures nor estimates it here.
     That is a stronger published-is-not-performed finding than "announces in words".
   - Overstates: "no confidence intervals anywhere" is true of printed intervals, but the paper does assert
     significance "at 95% confidence" four times and uses the phrase "wide confidence intervals" once. Word it as
     "no interval, standard error or +/- is printed for any statistic; four bare 95%-confidence significance verdicts
     with no F, p or df".
6. **Front-matter correction.** Anal. Methods, **2016, 8 (4), 742-746**; submitted 02 Nov 2015, accepted 02 Dec 2015,
   first published online 17 Dec 2015. The author version prints no year, so the "2015/16" flag is resolvable and
   should be replaced, not carried. Author in full: Michael Thompson, Birkbeck University of London.
7. **Overlap check, both directions, on the printed 1.01.** What the paper's class MISSES relative to a
   "PT-R vs that method's own published R" ratio: every method-specific comparison - the denominator is a function
   fitted to other people's trials from the 1930s-1977, so a method whose own trial R differs from the Horwitz
   prediction contributes a ratio that says nothing about its own R. What the paper's class INCLUDES that such a
   ratio excludes: all 2014 FAPAS tests whose analyte/matrix has **no** collaborative trial at all (the great
   majority - only one collaborative trial appears anywhere in the paper, in Fig 1 for aflatoxins), plus all
   between-method and between-era drift folded into the denominator. The two quantities are one word apart and are
   not the same ratio.
8. Also unmentioned by the entry, and relevant if anyone leans on it: **the high region (>10^-1) prints no median
   and no SD at all.** Only two of three regions carry the headline statistics.

## ROUTES THAT FAILED
None. The author-version PDF named in the entry served in full on the first attempt and on three further targeted
passes; the landing page served on the first attempt. The one WebSearch was spent only because the author version
prints no year, volume or pages. No search was refused.
Not attempted for want of budget: Thompson and Wood, DOI 10.1039/C4AY02020K (reference 5, where the doubling
figure would have to be looked for). That is **COULD NOT READ, not NOT FOUND** - its silence is not evidence, and
if the entry wants to say whether the doubling is *quantified anywhere*, that paper still has to be opened.

## BEARING ON THE LEDGER ENTRY
**HOLD with narrowing, on both legs of the hinge.**

Leg 1 - prior 1 measures a different ratio. **Confirmed and strengthened** for the Horwitz region: numerator is one
FAPAS round's robust reproducibility SD, denominator is the Horwitz-function prediction, a trend fitted to
collaborative-trial statistics published between the 1930s and 1977. Nowhere is any method's own earlier published R
the denominator; the paper shows exactly one collaborative trial anywhere (Fig 1, aflatoxins). **Narrow** the entry
to say the Horwitz-function denominator holds for 10^-7 to 10^-1 only, and that below 10^-7 the denominator is the
constant relative SD 0.22. Keep "eras"; mark "across methods" as inference.

Leg 2 - published is not performed. **Confirmed, and the entry should be upgraded from "announces in words" to
"announces in words and attributes to reference 5".** Printed sentence: "about double the variation that could be
attributed to the random variation inherent in small-number statistics.5". **No number for the doubling is printed
anywhere in the paper** - no variance ratio, no percentage, no SD, no interval. The only nearby printed number, "a
standard deviation of about 0.5", is this paper's own PT-to-Horwitz scatter and must not be read as the doubling.

**Strike** the phrase "over 907 FAPAS rounds" as the denominator of the two medians; replace with "drawn from 907
qualifying FAPAS tests in 2014, median 41 participants, per-region n not printed". **Strike** the 2015/16 flag and
print 2016, 8 (4), 742-746. **Narrow** "no confidence intervals anywhere" to "no interval, SE or +/- printed for any
statistic; four bare 95%-confidence verdicts".

**Convert to a promotion condition:** before the entry's novelty grade rests on "nobody has quantified the
collaborative-trial excess scatter", open Thompson and Wood, DOI 10.1039/C4AY02020K (reference 5), and check whether
the doubling is quantified *there*. If it is, the published-is-not-performed point survives only as a statement about
*this* paper, which is a much smaller claim.
