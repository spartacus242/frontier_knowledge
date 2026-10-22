# VERIFY — Sweeney et al., α-amylase active site titration reagent

Checker: fresh-context, no access to the ledger entry's reasoning. Budget used: 1 search, 3 fetches.

## FRONT MATTER (taken from the article's own running header, not from a short form)

Ryan P. Sweeney, Phillip M. Danby, Andreas Geissner, Ryan Karimi, Jesper Brask, Stephen G. Withers,
"Development of an active site titration reagent for α-amylases", *Chemical Science* (Chem. Sci.),
**2021, 12, 683–687**. DOI 10.1039/d0sc05380e. Received 28 September 2020; accepted 3 November 2020;
first published 3 November 2020. Open Access, CC BY-NC 3.0 Unported.

Note on the short form handed to me: the ledger's citation gives the title with "alpha-amylases";
the article prints "α-amylases". Immaterial, but recorded. Issue number is not printed in the
running header; the header carries only volume, year and pages. Volume/pages above are from the PDF
header, **not** from the landing page (the HTML landing page prints no volume or pages at all, and
does not even name the journal — anyone reading only the HTML route would have to infer it).

## CLAIM

That this paper (a) titrates some number of enzyme preparations and prints, for each, a ratio of
titrated active sites to a listed or nominal concentration; (b) that two of those ratios exceed 1,
specifically 1.02 and 1.16; (c) with some particular denominator; (d) declares each preparation's
purification route or provenance; (e) reports a distribution of active fractions and/or links the
active fraction to disagreement among published kcat values.

## READ LEVEL

**FULL TEXT**, at two independent routes, both open:
- https://pubs.rsc.org/en/content/articlehtml/2021/sc/d0sc05380e (open-access HTML)
- https://pubs.rsc.org/en/content/articlepdf/2021/sc/d0sc05380e (open-access PDF)

The earlier agent's report of reading it in full is corroborated. pubs.rsc.org is not among the
hosts flagged as blocked and behaved normally. No route failed.

## WHAT THE SOURCE SAYS (quotations as served)

### Article type

A **primary research paper** (Edge Article / communication-length, 5 pages) reporting a synthesis
and its application. Not a review, protocol, guideline or editorial. Nothing load-bearing here is
attributed to a third party; the kinetics and titrations are the authors' own measurements.

### The one table that compares titration to a listed concentration — Table 3

Caption, as served:

> "Concentrations of several amylases determined by titration with reagent 5, compared with
> manufacturers' listed concentration"

Column headings and every cell, as served:

| Enzyme | [Manufacturers] (nM) | [Titration] (nM) |
|---|---|---|
| AOA | 91 | 93 |
| EPA | 100 | 116 |
| PPA | 610 | 164 |
| Yeast α-glucosidase ^b | 8800 | 7500 |

Footnotes, as served:

> "^a Determined by declared activity measurements."

> "^b Substrate 3 was used for titration of this enzyme. The manufacturer's concentration was
> determined by measuring the enzyme activity with PNP-Glc (V_max) and using their reported units of
> activity vs. PNP-Glc."

There is no footnote c. **No cell carries a ± or any other stated uncertainty, and no replicate n is
given in the table.**

### The text around Table 3 (reconstruction from consecutive returned segments — 9 fragments,
### junctions verified by overlap; no gap filled by inference)

> "The values we obtained in this way are shown in Table 3 … compared with the concentrations
> claimed by the manufacturers: agreement was excellent for EPA and AOA."

> "To explore a case in which total protein concentration was likely to be different from active
> concentration, we titrated a commercial porcine pancreatic amylase (PPA) that was purchased from
> Sigma-Aldrich several years prior to this set of experiments. The concentration of the active
> enzyme was found to be almost 4-fold lower than the original stated value. This discrepancy is
> likely due to the degradation of the enzyme over the long storage period. Indeed, such
> discrepancies in active enzyme concentration and total protein concentration are exactly what the
> titration agent is designed to detect."

### The crude-batch passage (reconstruction, 4 consecutive fragments)

> "Finally, the sensitivity and linearity of the response of our titration reagent 5 were tested
> using a crude, commercial batch of EPA (5 mg mL⁻¹; 66.7 µM). After initial dilution of this batch
> of EPA to 100 nM, a series of 2× dilutions gave a reliable and detectable fluorogenic response
> down to enzyme concentrations as low as 3 nM (Fig. 4B and C)."

**Unit rendering is damaged and inconsistent across routes and I am flagging it rather than
correcting it.** The HTML route served the molar figure as "66.7 μM"; the PDF route served it as
"66.7 mM" and reported the Fig. 2 caption as "66.7 nM". 5 mg mL⁻¹ of an ~75 kDa amylase is ~67 µM,
so µM is the only arithmetically coherent reading, but **I did not get a single clean route that
prints it unambiguously** and I am not silently settling it. Nothing in the sub-claims turns on it.

### Words that are absent

**"active fraction" does not appear anywhere in the paper. "nominal" does not appear anywhere in the
paper. No sentence in the paper uses the word "ratio".** I searched for these strings on their own,
before deciding whether anything supported anything.

## REGIME

- **Enzyme family.** Table 3's first three rows are α-amylases (EC 3.2.1.1): AOA (*Aspergillus
  oryzae*), EPA (*Effusibacillus pohliae*), PPA (porcine pancreatic). The fourth row is a **yeast
  α-glucosidase — a different enzyme, exo-acting, and the paper says so explicitly by titrating it
  with a different compound.** It is in the table as a positive control for the simpler monosaccharide
  titrant, not as an amylase. The caption nonetheless calls the whole table "several amylases",
  which is the paper's own loose labelling.
- **Titrant.** Reagent **5** (a pseudo-trisaccharide, 2-deoxy-2-fluoro type mechanism-based
  inactivator with a fluorogenic leaving group) for AOA, EPA, PPA. Substrate/compound **3** for the
  yeast α-glucosidase. So the table is not four measurements with one instrument; it is three with
  reagent 5 and one with compound 3.
- **Unit of analysis.** One enzyme stock solution per row. Not batches, not lots, not replicates.
- **Endpoint.** Molar concentration of catalytically competent active sites in nM, read off a
  fluorogenic burst/stoichiometric-inactivation titration.
- **Comparator.** The manufacturer's concentration for that same stock.
- **Estimand presented by the authors.** The authors present **two concentrations side by side and
  comment on agreement or disagreement in prose.** They do **not** present an active fraction, a
  ratio, a yield, a percentage or a normalised quantity for any row.
- **Scale regime.** Titrations are at ~0.1 µM enzyme; the sensitivity demonstration runs 100 nM down
  to 3 nM. The PPA stock was years old at ambient storage history unknown.

## DEFECTS FOUND

**1. (a) and (b): PUBLISHED IS NOT PERFORMED — the paper prints the two concentrations, not the
ratio. The ratio is the claim-author's arithmetic, not the paper's.**
Table 3 **MEASURES** two concentrations per row and the paper **DISCUSSES** their agreement in
words. It never **PRINTS** a quotient for any row. The only quotient-like statement anywhere in the
paper is prose, for PPA only: *"almost 4-fold lower than the original stated value"* — which is the
reciprocal direction and is unnormalised. So a claim phrased as "it prints, for each, a ratio of
titrated active sites to a listed concentration" is **false as to printing**: it prints the inputs
to that ratio, for four rows, and the ratio for none. Anyone citing "1.02" or "1.16" as a figure
from this paper is citing their own division.

**2. (b): the two numbers are arithmetically right but are a rounding of the claim-author's own
division, and the claim's "two of those" silently re-scopes the table.**
Re-deriving at the authors' own printed figures:
- AOA 93 / 91 = **1.0220** → 1.02 (claim's figure reproduces at 3 s.f. rounding)
- EPA 116 / 100 = **1.16** (claim's figure reproduces exactly)
- PPA 164 / 610 = **0.2689** → 0.27 (and 610/164 = 3.72, consistent with the authors' "almost 4-fold")
- Yeast α-glucosidase 7500 / 8800 = **0.8523** → 0.85

So **two of the four rows do give quotients above 1, and they are 1.02 and 1.16.** That part of the
claim survives the arithmetic. But note the scoping: it is two of **four** rows, or two of **three**
α-amylase rows — and if the entry's "how many enzyme preparations does it titrate" is answered as
"four α-amylases", that is wrong, because one of the four is an α-glucosidase.

**3. (b): no uncertainty is carried, and the authors do not treat >1 as a finding.**
Table 3 prints bare integers with **no error bars, no ±, no n**. A quotient of 1.02 on two
two-significant-figure integers (93 and 91) is indistinguishable from 1.00 at any plausible
precision, and 1.16 has no stated uncertainty either. The authors' own characterisation of both
rows is *"agreement was excellent for EPA and AOA"* — i.e. **they read these as agreement, not as
excess.** Treating 1.02 and 1.16 as the paper observing more active sites than enzyme is a reading
the authors do not make and the table's precision cannot support. Reporting these ratios without
the authors' own "agreement was excellent" gloss detaches them from a qualifier.

**4. (c): the denominator is none of the four options offered, and this is the substantive finding.**
The denominator is **not** a vendor-listed nominal mass or molar concentration, **not** a measured
total protein, and **not** an absorbance. It is a concentration **back-calculated from the
manufacturer's declared catalytic activity**. The paper's own description is footnote a in full:

> "Determined by declared activity measurements."

and, for the α-glucosidase row, footnote b:

> "The manufacturer's concentration was determined by measuring the enzyme activity with PNP-Glc
> (V_max) and using their reported units of activity vs. PNP-Glc."

This matters because an activity-derived denominator is **not independent of activity**: both
numerator and denominator are activity-based quantities, which is precisely why "agreement was
excellent" for two rows is unsurprising, and it is why a quotient from this table is **not** an
active-site-per-total-protein figure. Anyone who read "[Manufacturers] (nM)" as a nominal or
protein-mass concentration has mis-set the denominator.

**5. (c): the paper's own prose does not match its own denominator.**
The authors motivate PPA as *"a case in which total protein concentration was likely to be different
from active concentration"* and close with *"such discrepancies in active enzyme concentration and
total protein concentration are exactly what the titration agent is designed to detect."* But
**Table 3's comparator is not total protein** — it is a declared-activity-derived concentration
(footnote a), for every row including PPA. No total protein assay (Bradford, BCA, A280, amino acid
analysis) is reported for any preparation. So the paper **invokes** the active-vs-total-protein
comparison in prose and **does not perform** it in the table. This is an internal mismatch in the
source itself, not in the claim, and any ledger entry treating Table 3 as an active-fraction-of-
total-protein measurement inherits it.

**6. (d): provenance is declared for one preparation out of four, and purification route for none.**
- **PPA:** the only supplier named — *"purchased from Sigma-Aldrich several years prior to this set
  of experiments"*.
- **EPA:** described only as *"a crude, commercial batch of EPA (5 mg mL⁻¹; …)"*. No supplier named
  in the main text. ("Crude" is itself an explicit statement that it is **not** purified.)
- **AOA:** no provenance at all in the main text.
- **Yeast α-glucosidase:** no provenance at all; the only thing said about its sourcing is the
  footnote describing how the manufacturer's number was derived.
- **HPA** (which is *not* in Table 3 — it appears only in the inactivation/kinetics data) is
  acknowledged: *"We thank Ms Emily Kwan for the sample of HPA."*

**No expression host, no purification protocol, and no lot or catalogue number is given for any
Table 3 preparation in the main text.** Caveat on scope of my read: I read the article in full but
**did not fetch the ESI** (https://www.rsc.org/suppdata/d0/sc/d0sc05380e/d0sc05380e1.pdf), which is
the usual home of enzyme sourcing details. So "the paper does not declare it" is established for
the article; a claim of absolute absence would need the ESI, and I am naming that as an unchecked
surface rather than asserting absence.

**7. (e): no distribution, and no link to kcat disagreement — not even a mention of such
disagreement.**
There is **no** distribution, histogram, spread, variance or range of active fractions across
preparations or batches. There is **no** sentence anywhere discussing variation, scatter or
disagreement among published kcat or other kinetic values in the literature.
What the paper does **instead**, precisely:
- It **MEASURES** four single-stock concentrations (Table 3).
- It **MEASURES** its own inactivation kinetics (k_on, K_i, k_on/K_i, k_off) for its own enzyme
  panel in Table 1 — its own numbers only, with no comparison to literature values.
- It **DESCRIBES** one qualitative discrepancy, for PPA, and **ATTRIBUTES** it to a cause it marks as
  conjecture: *"This discrepancy is likely due to the degradation of the enzyme over the long storage
  period."* That is hedged ("likely") and carries **no citation**.
- It **ANNOUNCES**, in the general case, that active-vs-total discrepancies are *"exactly what the
  titration agent is designed to detect"* — a statement of the reagent's purpose, i.e. a
  **PREDICTION about utility**, not a measured distribution.
A single aged-sample discrepancy is an anecdote in n = 1, not a distribution. And the paper's
silence about literature kcat disagreement is **silence**: it is not the paper noting a gap, and it
cannot be cited as the paper flagging one.

**8. Minor: the table's own label over-reaches.**
Caption says *"several amylases"*; one of the four rows is a yeast α-glucosidase. If a downstream
record counted "four amylase preparations" from this table, it copied the caption rather than the
rows.

## ROUTES THAT FAILED

None. Both publisher routes (open-access HTML and open-access PDF at pubs.rsc.org) opened and
served the full text, including Table 3 with its footnotes. No DOI resolution was needed; no
PMC/Europe PMC route was attempted; no 403, 429 or paywall was encountered. Unpaywall was not used
and no personal identifier was placed in any URL, query string, header or form.

**Surface not read (not a failure, a declared limit):** the electronic supplementary information,
d0sc05380e1.pdf. Statements above about what the paper does *not* say are scoped to the article.

## BEARING ON THE LEDGER ENTRY

Partly holds, and the part that fails is the part that makes the entry interesting.

**What survives.** The source is real, open, readable at two routes, and is a primary research
paper, not a review. It does titrate enzyme preparations and does compare each to a manufacturer's
number. The two arithmetic quotients above unity are **1.02 and 1.16** exactly as the sub-claim
states, re-derived at the authors' own printed figures. PPA's quotient is 0.27 and the authors' own
"almost 4-fold" is consistent with it.

**What fails.**
1. **The paper prints no ratios.** It prints paired concentrations. 1.02 and 1.16 are the ledger
   author's division, and must be labelled as such. A quantity nobody printed cannot be cited as a
   published figure.
2. **The denominator is an activity-derived concentration, not a nominal/listed protein amount and
   not total protein.** Both sides of the quotient are activity-based, so the quotient is not an
   active fraction in the sense the ledger appears to want. If the un-asked question is "why does
   nobody report active fractions as a distribution", this paper is **not** an instance of a reported
   active fraction — it is an instance of two activity numbers agreeing.
3. **Regime mismatch on the count.** Three α-amylases plus one α-glucosidase, titrated with two
   different compounds. "Four amylase preparations with one titrant" is not the paper's regime.
4. **The >1 values are not a finding in the source.** The authors call them "excellent agreement".
   No uncertainty is printed, and at two significant figures 1.02 is not distinguishable from 1.00.
   Any entry that leans on "ratios exceed 1" as evidence of something anomalous is reading against
   the authors' own stated interpretation, on numbers with no error bars.
5. **No distribution and no kcat-disagreement link — and the source does not note the absence
   either.** The gap, if it is one, is genuinely un-asked here: the paper neither fills it nor flags
   it. Do not record this paper as having noticed it.

**Net.** The arithmetic sub-claim (b) is sound; sub-claims (a) and (c) are wrong on what the paper
prints and on what the denominator is; (d) is wrong for three of four preparations; (e) is correctly
negative but must be written as silence rather than as the paper acknowledging a gap. If the entry
uses this paper as its prior art for "ratios of titrated sites to listed concentration are published
and sometimes exceed unity", it needs rewriting to say: this paper publishes paired
activity-derived and titration-derived concentrations for three α-amylases and one α-glucosidase, from
which two quotients above unity can be computed, and it publishes no ratio, no active fraction, no
total protein, and no distribution.
