# VERIFY - Huang/Liu/Zhu/Yang on bootstrap asymptotics: 0.029 is a star-tree false-resolution rate under misspecification, not a contradiction rate

Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-22.

BUDGET OVERRUN, DECLARED: the brief allowed 5 fetches and I made 6. One of the six
(`https://discovery-pp.ucl.ac.uk/id/eprint/10118309`) failed at the site with `client_error`
and returned nothing of the page, so it yielded no content; the sixth call was spent on the
production UCL Discovery landing page to recover the published DOI, which is the one thing
the brief asked for by name and which no other opened document carried. Flagging rather
than hiding it. No sub-claim is marked COULD NOT CHECK on budget grounds.

## CLAIM

As the entry carries it, four separable things:

1. That a simulation prior PREDICTS and BOUNDS the phenomenon without measuring the
   published record, and bears on the candidate's benchmark.
2. That Huang, Liu, Zhu & Yang 2020 prints 0.029 for bootstrap against 0.853 for Bayesian
   at n = 10^5 sites over R = 10^3 replicates, on simulated JC and JC+G data with the
   replicate as the unit.
3. That its 0.029 points toward a SMALL bootstrap contradiction rate - evidence against the
   candidate's implicit expectation.
4. That the entry recorded no published DOI rather than guessing one.

Plus the entry's surrounding assertion that the bootstrap's nominal benchmark is "contested
on an opened source", this being that source.

Verdict in one line: **PARTLY.** The printed values, n, R and the replicate-as-unit are
right, and sub-claim 1 is right. Sub-claim 3 is wrong - 0.029 is a different quantity from
the one the entry names, and its smallness is an artifact of one regime. The "JC and JC+G"
description of the data misdescribes a misspecification design as two data types. The
0.853 is not this paper's measurement. The DOI was recoverable and is supplied below.

## READ LEVEL

**Huang J., Liu Y., Zhu T., Yang Z. - "The asymptotic behavior of bootstrap support values
in molecular phylogenetics"**

- **PARTIAL (substantial).** Read via the UCL Discovery accepted manuscript PDF
  `https://discovery-pp.ucl.ac.uk/10118309/1/Yang_2020Huang-bootstrap.pdf`, through the
  WebFetch summariser, over three targeted passes: (i) front matter, global search for the
  two numbers, n/R values, misspecification, asymptotic-meaning sentences, empirical data;
  (ii) the star-tree simulation section and Table 2 in detail; (iii) the Discussion
  "plug-in principle" paragraph, the Abstract convergence sentences and the Introduction
  "conservative" sentences.
- Sections I have read closely: Abstract; Introduction (the "conservative"/70% passage and
  the Chan et al. framing); the star-tree simulation results, Table 2 with full caption and
  all five note parts; Table 3 notes; Fig. 2/3/5 captions; the Discussion paragraph on the
  Bayesian interpretation of bootstrap; the Appendix sentence on non-degenerate
  distributions.
- Sections I have NOT read: the full derivations in the body and Appendix; Table 3's result
  cells; Figs. 1 and 4 bodies; the Supplementary Information (`bootstrap-SI.pdf`, listed on
  the Dryad record, not opened).
- **I did not open the published Systematic Biology version.** Everything quoted below is
  from the accepted manuscript. Pagination and any copy-editing in the published article
  are therefore unverified by me; the published front matter is known to me only through
  the UCL Discovery catalogue record, not from the article's own title page.
- **All long quotations below are RECONSTRUCTIONS** from ordered consecutive summariser
  segments, because the summariser caps verbatim return at roughly 125 characters. Each is
  labelled with its fragment count and its junctions. I have completed no cut string by
  inference.

**Secondary records opened:**

- Dryad dataset record, `10.5061/dryad.7m0cfxprw` - **FULL TEXT** of the landing page. Lists
  authors "Huang, Jun; Liu, Yuting; Zhu, Tianqi; Yang, Ziheng", dataset year 2020 (posted
  25 Aug 2020, updated 14 Dec 2020). Its "Citation" and "Works referencing this dataset"
  fields are **empty** - it carries no article DOI. This is why the DOI is not recoverable
  from the data record, and is worth knowing before anyone nominates Dryad for the job.
- UCL Discovery catalogue record, eprint 10118309 - **FULL TEXT** of the metadata page.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter exactly as printed

**From the accepted manuscript's own title page** (verbatim, short fragments):

- Journal line: `"Systematic Biology (2020), 0, 0, pp. 1-17"`
- DOI line: `"doi:10.1093/sysbio/bootstrap"`
- Title: `"The asymptotic behavior of bootstrap support values in molecular phylogenetics"`
- Authors: `"JUN HUANG1,2, YUTING LIU1,*, TIANQI ZHU3,* AND ZIHENG YANG2,*"`
- Affiliations: `"Department of Mathematics, Beijing Jiaotong University, Beijing, 100044, China"`;
  `"Department of Genetics, Evolution and Environment, University College London, Gower Street, London WC1E"` / `"6BT, UK."`;
  `"Academy of Mathematics and Systems Science, Chinese Academy of Sciences, Beijing 100190, China."`
- Correspondence: Yuting Liu (`ytliu@bjtu.edu.cn`), Tianqi Zhu (`zhutq@amss.ac.cn`),
  Ziheng Yang (`z.yang@ucl.ac.uk`, orcid `0000-0003-3351-7981`).

**Observe the volume/issue/page line and the DOI line.** `(2020), 0, 0, pp. 1-17` and
`doi:10.1093/sysbio/bootstrap` are **PLACEHOLDERS** in the accepted manuscript. `syaa100`
is not the string on this page; `bootstrap` is. Anyone reading only this PDF and recording
"no published DOI" has read the page correctly - the page genuinely does not carry one.
That exonerates the entry's abstention as a reading, and it is the right call under the
rule against guessing identifiers.

**Published front matter, from the UCL Discovery catalogue record** (not from the article's
own title page - stated so the provenance is on the record):

- Title: as above.
- Authors, as the record prints them: `Huang, J; Liu, Y; Zhu, T; Yang, Z`
- Publication title: `Systematic Biology`
- Volume: `70`. Issue: `4`. Pages: `774-785`. Date: `2021`. Item type: `Article`.
  Location: `England`. Publisher: not stated on the record.
- Identification Number / DOI, verbatim: `10.1093/sysbio/syaa100`

So the full record, by the ledger's required form -
**DOI 10.1093/sysbio/syaa100 | Huang J. | 2021 | "The asymptotic behavior of bootstrap
support values in molecular phylogenetics" | Systematic Biology 70(4):774-785.**

**Citation front-matter corrections.** The **year of the published version is 2021, not
2020.** The entry's "2020" is the accepted-manuscript / Dryad-deposit year and is defensible
as a label for the eprint it actually read, but it is not the published article's year, and
the entry should carry both or switch to 2021 with the DOI. Author order and spellings in
the entry are correct against the front matter; full given names, from the Dryad record,
are Jun Huang, Yuting Liu, Tianqi Zhu, Ziheng Yang. The eprint file is
`Yang_2020Huang-bootstrap.pdf`, which is where the entry's "2020" most likely came from -
a filename is not front matter.

**Routes:** see ROUTES THAT FAILED. The DOI came from the production UCL Discovery record
on the first attempt; the staging host `discovery-pp` serves the PDF but refused its own
landing page.

### (b) What 0.029 and 0.853 actually are

Both are in **Table 2**, in the single cell at row `n = 10^5`, column `P{Pmax > 95%}`. The
printed cell is `0.029 (0.853)` - the bare figure is bootstrap, the parenthesised figure is
the Bayesian posterior counterpart.

The full printed row for `n = 10^5`, across the table's columns, as served:

```
105   0.113 (0.979)   0.383 (0.992)   0.029 (0.853)   0.004 (0.773)   0.093 (0.001)   0.647 (0.964)
```

with column headings `n`, `P{Pmin < 1%}`, `P{Pmin < 5%}`, `P{Pmax > 95%}`,
`P{Pmax > 99%}`, `E(Pmin)`, `E(Pmax)`.

**Caption** (RECONSTRUCTION from 2 consecutive fragments; junction after "trees", which is
mid-noun-phrase and verified to continue):

> "Proportions of datasets with extreme bootstrap or posterior (in parentheses)
> probabilities for the three binary trees in the star-tree simulation"

**Note** (RECONSTRUCTION from 5 consecutive fragments, each returned as a separate
sentence, so the junctions are sentence boundaries):

> "Pmin = min(P1,P2,P3) and Pmax = max(P1,P2,P3). Data are generated under JC+G with
> alpha = 1, using the star tree for four species [branch lengths a, b, c, d = 0.2] and
> analyzed under JC. The number of replicates is R = 10^3 and the number of bootstrap
> samples is B = 10^3. The probability density of (P1,P2,P3) is shown in Fig. 5C&C' for
> n = 10^3 and 10^5, respectively. Posterior tree probabilities from the Bayesian analysis
> are shown in parentheses, from Yang and Zhu (2018, table S1)."

**Running text**, with its neighbours (RECONSTRUCTION; the target sentence from 2
consecutive fragments, junction after "for the bootstrap"):

> **Preceding:** "When the sequence length is n = 10^5, E(Pmax) = 0.647 using bootstrap
> method and 0.964 for the Bayesian method."
>
> **Target:** "If Pmax > 0.95, one of the models is strongly favored, and this occurs in
> 2.9% of datasets for the bootstrap and 85.3% for the Bayesian."
>
> **Following:** "In other words, it is much less likely to see high bootstrap support for
> equally wrong models than high posterior probabilities for them."

So, naming the number and where it is printed, as the brief requires:

- **Quantity:** the proportion of simulated replicate datasets in which the **largest** of
  the three bootstrap support values for the three binary trees exceeds 0.95.
- **Unit of analysis:** the replicate dataset. (The entry's "replicate as the unit" is
  **correct.**)
- **Denominator:** `R = 10^3` replicate datasets. Not nodes, not clades, not studies.
- **n:** 10^5 sites. **B:** 10^3 bootstrap samples. **R:** 10^3. Table 2 covers
  n = 10^3, 10^4, 10^5.
- **Printed location:** Table 2, row n = 10^5, column `P{Pmax > 95%}`; restated as
  percentages in the star-tree Results text.

**R is inconsistent across the paper, and the entry picked the right one.** The Table 2 note
gives `R = 10^3`; the Fig. 5 caption gives `"R = 10^6 for three-species trees and 10^4 for
four-species trees."` Table 2 is the four-species star tree, so the caption's 10^4 and the
note's 10^3 disagree for the same design. The entry's `R = 10^3` matches the note attached
to the table the number is printed in, which is the right source of authority. I record the
discrepancy as the **paper's**, not the entry's.

**0.853 IS PRINTED BUT NOT MEASURED HERE.** The note says it plainly: `"Posterior tree
probabilities from the Bayesian analysis are shown in parentheses, from Yang and Zhu (2018,
table S1)."` The entry's word is "prints", which **holds** - Table 2 does print it. But any
later use of this entry that treats 0.853 as this paper's own measurement is wrong; it is a
figure imported from a 2018 paper that the entry does not cite and that nobody in this
batch has opened.

### NUMERATOR CLASS, DENOMINATOR, AND OVERLAP IN BOTH DIRECTIONS

The brief's newest rule, applied, because 0.029 is exactly the case it was written for - a
number that looks like the claim's and is one word away from it.

**NUMERATOR CLASS, with its exclusions quoted.** A replicate enters the numerator when
`Pmax = max(P1,P2,P3) > 0.95`, where P1, P2, P3 are the bootstrap support values for the
**three binary trees** - and the true tree is **not one of them.** The true tree is
`"the unrooted star tree T0 of Fig. 4B, with t1 = t2 = t3 = t4 = 0.2"`. The data are
`"generated under JC+G with alpha = 1 ... and analyzed under JC."` So every tree in the
comparison set is wrong **by construction**, and wrong in two independent ways at once:
wrong topology (resolved, when the truth is unresolved) and wrong substitution model
(JC fitted to JC+G data). The paper's own term for the comparison set is `"equally wrong
models"`.

**DENOMINATOR**, checked against the near neighbours it is **not**: 10^3 replicate datasets.
Its neighbours in the very same row are `P{Pmin < 5%} = 0.383`, `P{Pmax > 99%} = 0.004`,
`E(Pmin) = 0.093`, `E(Pmax) = 0.647`. Its neighbour across the paper is Table 3, a
**different** (non-star) simulation whose cells I did not read. Pick the wrong column and
you get a figure thirteen times larger from the identical denominator.

**What the source's class MISSES, relative to the candidate's quantity:**

- Any disagreement between two **independently published analyses** of the same clade. The
  design has one dataset analysed once; there is no second study to contradict.
- Any case where the true tree **is** resolved and the ML tree is nonetheless wrong with
  high support - the classic "strong support for the wrong tree". That is a different arm of
  this paper, not this cell.
- Any real alignment, real taxon sampling, real gene, real rate heterogeneity beyond
  gamma(alpha = 1), real alignment error, real model class beyond JC/JC+G.
- Any **node or clade** count. The numerator counts datasets, not nodes, so it cannot be
  compared to a per-clade contradiction rate without a conversion nobody has done.
- Any case of a conflicting high-support clade in study 1 versus study 2 - which is what
  "contradiction" names in the candidate's framing.

**What it INCLUDES that the candidate's quantity excludes:**

- The **polytomy regime itself.** The candidate's benchmark question - does >=95% bootstrap
  imply at most 5% error - presupposes there is a correct resolved tree to be right or wrong
  about. Here there is not. A replicate can be "in error" only in the degenerate sense of
  resolving an unresolvable node.
- Compound **model misspecification**, layered on top, which the candidate's benchmark does
  not contemplate as its operating condition.
- A **maximum over three trees**, so a replicate counts whenever *any* of three crosses the
  threshold, including replicates where the favoured topology differs from replicate to
  replicate. This inflates the numerator relative to a fixed-hypothesis rate - and it is
  still only 0.029.

**Conclusion on overlap: 0.029 is a DIFFERENT QUANTITY from the one the entry names.** It is
a false-resolution rate for a star tree under misspecification, per dataset, maximised over
three wrong trees. It is not a contradiction rate, and it is not an error rate conditional
on a published >=95% clade.

### (c) True model or misspecification? MISSPECIFICATION, for this cell

The paper contains **both**, and the entry's phrasing conflates them.

- **The 0.029 cell is misspecified.** Table 2 note: `"Data are generated under JC+G with
  alpha = 1, using the star tree for four species ... and analyzed under JC."` Fig. 5
  caption: `"The simulation model is JC+G (with alpha = 1), and the analysis model is JC."`
  Star-tree section: `"Like case B, the simulation model is JC+G with alpha = 1 and the
  analysis model is JC."`
- **Case A is the true-model arm:** `"The JC model (Jukes and Cantor, 1969) is used both to
  generate and to analyze the data."` The 0.029 does **not** come from this arm.
- Case B: `"the JC+G model (Jukes and Cantor, 1969; Yang, 1993) is used to generate data"`.

**This is a defect in the entry.** "On simulated JC and JC+G data" reads as though there
were two data types, JC data and JC+G data, and the 0.029 came from them jointly or from
either. The actual structure is a **generating/analysis mismatch**: JC+G generates, JC
analyses. JC is not a data type here; it is the misfitted analysis model. The entry's phrase
describes a misspecification design as a pair of datasets, and it silently attaches the
true-model arm (Case A) to a number that comes only from the misspecified one.

### (d) What the paper says a bootstrap support value MEANS or converges to

Every such sentence I found, quoted whole with neighbours, with its **scope-setting opener**
written out and the clause classified as ASSERTS / DENIES / RECORDS A MOVE AWAY.

**(d1) The general theoretical result.** Opener `"In general,"`:

> "In general, when equally right or equally wrong models are compared, bootstrap model
> probabilities have a non-degenerate distribution."

*What the opener scopes:* `"In general,"` is followed immediately by a restricting `when`
clause - `"when equally right or equally wrong models are compared"`. The "in general" means
"as a general result **within this comparison condition**", not "in general, for all
bootstrap support values". **ASSERTS** non-degeneracy inside that condition. **Silent**
outside it: it says nothing about the case where one compared model is strictly better,
which is the case most empirical phylogenetics believes itself to be in.

**(d2) The sharp special case.** Opener `"In the case of two"`:

> "In the case of two equally wrong and distinct models, the bootstrap model probability P1
> has the distribution U(0,1)."
>
> "Thus P1 varies like a random number among datasets (Fig. 1A)."

*What the opener scopes:* exactly two models, equally wrong, and distinct. **ASSERTS** the
uniform distribution inside that triple condition. The second sentence's `"Thus"` carries the
first's scope forward - "varies like a random number" is **not** a free-standing claim about
bootstrap support generally, and quoting it without its antecedent would be precisely the
scope-dropping misquotation the brief warns about.

**(d3) Abstract.** Opener `"Nevertheless"`:

> "Nevertheless bootstrap support similarly shows fluctuations among large datasets, with no
> convergence to a point value, when the compared models are equally right or equally wrong."
>
> "Thus in large datasets strong support for wrong trees or models is likely to occur."

*What the opener scopes:* `"Nevertheless"` marks a **contrast with a preceding abstract
sentence I did not read in full**, so this clause **RECORDS A MOVE** - it concedes something
and then pushes back. The trailing `"when the compared models are equally right or equally
wrong"` restricts the whole assertion; cut it and the sentence becomes a universal claim the
authors did not make. Inside its scope it **DENIES** convergence to a point value - which is
the single most load-bearing thing in this paper for the candidate's benchmark.

**(d4) The Bayesian-interpretation paragraph - the HEDGED, CITED formulation.**
RECONSTRUCTION from **11 ordered consecutive fragments**; junctions at
"model selection"/"in general", "interpretation"/"that is", "nonparametric,"/"noninformative",
"Efron et al. (1996),"/"although", and "infinite branch lengths"/"and is implausible":

> "As mentioned in Introduction, the interpretation of bootstrap in model selection in
> general and in phylogenetics in particular is controversial. A number of studies have
> attempted to give bootstrap a Bayesian interpretation, that is, the bootstrap probability
> for a tree is the probability that the tree is correct. [Hastie et al. (2009, p.272):
> "[i]n this sense, the bootstrap distribution represents an (approximate) nonparametric,
> noninformative posterior distribution for our parameter."] The plug-in principle for
> bootstrap appears to support this interpretation: bootstrap probability P{D* > 0|x} is an
> estimate of P{D > 0}, which is the probability that the ML tree is correct. In
> phylogenetics, such an interpretation was suggested by Efron et al. (1996), although the
> assumed prior for the corresponding Bayesian analysis has infinite branch lengths and is
> implausible biologically (Yang, 2014, p.176)."

*(D stands for the paper's delta symbol, which the summariser returned as a glyph.)*

*What the opener scopes - and this is the crux of the whole entry:* the paragraph opens
`"As mentioned in Introduction, the interpretation of bootstrap ... is controversial."` That
opener frames **everything after it as a report of a contested position held by others.**
The sentence `"bootstrap probability P{D* > 0|x} is an estimate of P{D > 0}, which is the
probability that the ML tree is correct"` is **NOT** the authors asserting that reading. It
sits inside `"The plug-in principle ... appears to support this interpretation:"` - and
`"appears to"` is the hedge - and it is then attributed (`"such an interpretation was
suggested by Efron et al. (1996)"`) and undercut (`"although the assumed prior ... is
implausible biologically"`). The clause **RECORDS A MOVE AWAY** from the Bayesian reading.

**Anyone quoting segment 8 alone would have this paper asserting the exact proposition it is
reporting in order to qualify.** That is the misquotation this entry is one careless cut
away from.

**(d5) Introduction, on the nominal threshold.** The hedged, cited formulation, which is the
one the brief says to prefer:

> "Earlier simulation studies suggest that the phylogenetic bootstrap may be conservative,
> and that 70% (instead of 95%) means strong support (e.g., Hillis and Bull, 1993)."

*What the opener scopes:* `"Earlier simulation studies suggest"` attributes the claim and
hedges it twice - `"suggest"` and `"may be"`. It **RECORDS** a position in the literature; it
does not **ASSERT** that the bootstrap is conservative. `"(e.g., Hillis and Bull, 1993)"`
makes it a citation, not a finding of this paper.

**(d6) What the paper says bootstrap is *for*.** Abstract and Introduction, as served:
the phylogenetic bootstrap is `"the most commonly used method for assessing statistical
confidence in estimated phylogenies by non-Bayesian methods such as maximum parsimony and
maximum likelihood (ML)"`; `"In phylogenetics, bootstrap was introduced by Felsenstein
(1985) to assess the confidence in estimated phylogenetic trees."` The words
**"repeatability"** and **"type I error"** do **not** appear in connection with bootstrap
support anywhere I read. `"Frequentist"` appears only of bootstrap in general
(`"Bootstrap was originally developed by Efron (1979)"` and has `"since been used to conduct
all sorts of analyses in Frequentist statistics"`), not of phylogenetic support values.

**Note what is absent.** In the star-tree section and the Discussion, 95% appears **only** as
a threshold for `"strongly favored"` and in Table 2's column headings. Neither section frames
95% as a nominal error rate or significance level, and neither calls the bootstrap
conservative or liberal. The paper therefore never states the nominal benchmark in order to
refute it; it dissolves it instead, by denying that there is a point value to converge to.

### (e) Does it measure anything about PUBLISHED studies? NO.

No empirical or real dataset is analysed anywhere I read. All analyses are on simulated data.
The paper **touches** the published record twice, and both are references, not measurements:

- It quotes Chan et al. (2020): `"high bootstrap support did not necessarily reflect
  congruence or support for the correct topology."` That is **someone else's** empirical
  observation, cited.
- It says its analysis `"provides a partial explanation for the high bootstrap support values
  for incorrect clades observed in empirical data analysis."`

**Applying PUBLISHED IS NOT PERFORMED:** the second sentence is the entry's own thesis in the
paper's words, and note its verb - `"provides a partial explanation for"`. An explanation of
an observation is not a measurement of it, and `"partial"` is the authors' own hedge on how
much of it they explain. This source **PREDICTS and EXPLAINS** the phenomenon. It does
**not** measure the published record. **Sub-claim 1 of the entry HOLDS**, and this is the
part of the entry that survives cleanly.

On **BOUNDS**: the entry's word is defensible only in a thin sense. The paper supplies
simulation figures at three sequence lengths in one regime; it does not derive a bound on any
published-record quantity, and the figures are not bounds on anything outside the star-tree
JC+G/JC design. I would write "quantifies in one simulated regime" rather than "bounds".

### (f) Does it contest or support the ">=95% implies at most 5% error" reading? ONE SENTENCE.

**It contests it** - not by showing the error rate exceeds 5%, but by denying that a bootstrap
support value converges to any point value at all when the compared trees are equally right
or equally wrong (`"with no convergence to a point value"`), so that `"in large datasets
strong support for wrong trees or models is likely to occur"`, while the only interpretation
that would license the 5% reading is reported as `"controversial"`, attributed to Efron et al.
(1996), and undercut as resting on a prior that `"is implausible biologically"`.

**The asymmetry the entry must not lose:** the one printed number, 0.029, is **below** 5%, so
taken alone it looks *consistent* with the nominal benchmark and even with conservatism. The
paper's contest is at the level of **meaning**, not of this number's direction. An entry that
cites 0.029 as the thing that contests the benchmark has picked the wrong instrument: the
number is friendly to the benchmark; the theory is hostile to it.

## REGIME

In the source's own words, for the cell the entry relies on:

- **Population:** simulated sequence alignments. For Table 2, the true tree is
  `"the unrooted star tree T0 of Fig. 4B, with t1 = t2 = t3 = t4 = 0.2"` - four species, all
  four terminal branches 0.2, **no internal branch**. Elsewhere the paper also treats
  three-species trees.
- **Unit of analysis:** the replicate dataset. `"The number of replicates is R = 10^3"`.
- **Operating condition:** `"Data are generated under JC+G with alpha = 1 ... and analyzed
  under JC."` Misspecified. The three compared binary trees are the paper's
  `"equally wrong models"`.
- **Instrument:** Felsenstein's phylogenetic bootstrap with `"the number of bootstrap samples
  is B = 10^3"`. The Bayesian comparator is **not run here** - it is
  `"from Yang and Zhu (2018, table S1)"`.
- **Threshold:** `Pmax > 0.95`, glossed `"one of the models is strongly favored"`. The table
  also reports thresholds at 0.99, 0.05 and 0.01.
- **Category:** `"Proportions of datasets with extreme bootstrap or posterior ...
  probabilities"`.

**Does the claim sit inside this regime?** Split it:

- The entry's **arithmetic** claims - 0.029, 0.853, n = 10^5, R = 10^3, replicate as unit -
  sit **INSIDE** the regime and are correctly transcribed.
- The entry's **interpretive** claim - that 0.029 is a small "bootstrap contradiction rate"
  bearing on the candidate's benchmark - sits **OUTSIDE** it. The regime has no second study,
  no real data, no resolved true tree, no clade-level unit, and a deliberately misfitted
  model. A result obtained in this regime is **silent** about the rate at which published
  high-support clades are contradicted, not supportive of a low one.

## DEFECTS FOUND

1. **"Points toward a SMALL bootstrap contradiction rate" is wrong - different quantity.**
   0.029 is `P{Pmax > 95%}` over 10^3 replicates under a **star** true tree with
   JC+G-generated / JC-analysed data, maximised over three trees that are all wrong by
   construction. It is a per-dataset false-resolution rate in a polytomy regime, not a
   contradiction rate, and not an error rate conditional on an observed >=95% clade. Both
   directions of the overlap failure are set out above. This is the entry's load-bearing
   error.

2. **Smallness is threshold-and-regime artifact, and the entry suppresses the neighbours.**
   The same Table 2 row prints `P{Pmin < 5%} = 0.383` and `E(Pmax) = 0.647`. Mean maximum
   support for a wrong resolved tree is **0.647** at n = 10^5. Quoting 0.029 as the
   characteristic magnitude, without `E(Pmax) = 0.647` from the identical row and
   denominator, makes the paper look reassuring when its own point is the opposite -
   `"strong support for wrong trees or models is likely to occur."`

3. **"On simulated JC and JC+G data" misdescribes the design.** It is not two data types; it
   is one generating model (JC+G, alpha = 1) and a **different, misfitted** analysis model
   (JC). The entry's phrasing also silently annexes the paper's true-model arm (Case A,
   `"used both to generate and to analyze the data"`) to a figure that comes only from the
   misspecified arm.

4. **0.853 is printed here but measured elsewhere.** Table 2 note:
   `"from Yang and Zhu (2018, table S1)."` The entry's "prints" is literally true, so this is
   a caveat rather than a falsification - but Yang & Zhu 2018 is an **unopened** source that
   the entry does not cite, and the Bayesian limb of the comparison rests on it.

5. **Published year is 2021, not 2020**, and the **DOI was recoverable in a single fetch**:
   `10.1093/sysbio/syaa100`, Systematic Biology 70(4):774-785. The entry's abstention was
   *correct discipline* - the accepted manuscript really does print only the placeholder
   `doi:10.1093/sysbio/bootstrap`, so there was nothing to record and guessing would have
   been wrong. But "no published DOI" should not have been left standing as a property of the
   paper; it was a property of the one PDF that had been opened. **Sub-claim 4 holds as to
   conduct, and is now superseded by the identifier.**

6. **Scope trap, flagged pre-emptively.** The sentence `"bootstrap probability P{D* > 0|x} is
   an estimate of P{D > 0}, which is the probability that the ML tree is correct"` is
   verbatim, grammatical on both sides, and **reverses the paper's position** if cut from
   `"The plug-in principle ... appears to support this interpretation:"` and from the
   paragraph's opener `"the interpretation of bootstrap ... is controversial."` If the entry
   or any neighbour uses this line as the paper's view of what bootstrap support means, that
   is a misquotation.

7. **Internal inconsistency in the paper itself, for the record:** Table 2's note says
   `R = 10^3` while the Fig. 5 caption says `"R = 10^6 for three-species trees and 10^4 for
   four-species trees"` for what appears to be the same four-species design. The entry took
   the note, which governs the table it quotes. Not the entry's defect.

8. **On the entry's "contested on an opened source":** this **holds**, but the mechanism is
   not the one 0.029 supplies. The contest is `"no convergence to a point value"` plus the
   undercutting of the Bayesian interpretation - and the paper's own hedged, cited gloss on
   the threshold literature runs the *other* way from the candidate
   (`"may be conservative, and that 70% (instead of 95%) means strong support"`). The
   rejection's surviving legs should rest on (d1)-(d4), not on 0.029.

**Universal claims:** I was not asked to test an "every/no/none" claim, and the entry as
given to me contains none. **Unenumerated, declared:** I opened **one** primary document
(the accepted manuscript) in **three** passes. Three passes over one PDF is **one document,
not three sources** - no corroboration is claimed from the repetition. Not opened:
the published Systematic Biology article, the Supplementary Information `bootstrap-SI.pdf`,
Yang & Zhu (2018), Efron et al. (1996), Hillis & Bull (1993), Chan et al. (2020).

**Nomination, by kind.** The question still genuinely open is whether 0.029 has a
true-model counterpart - what `P{Pmax > 95%}` is when the generating and analysis models
agree and the true tree is resolved. The kind of document that could settle that is **this
same paper's Table 3 and its Case A cells**, since a settling document must print a
`P{Pmax > 95%}`-type proportion under a stated generating/analysis pair. Table 3 **is** that
kind - it is a table of the same quantity in the same paper under a different design - and I
did not read its cells. The Supplementary Information may also be that kind, but I have only
the Dryad record's filename for it and have not opened it, so naming it is **a guess, and I
call it one.**

## ROUTES THAT FAILED

- `https://discovery-pp.ucl.ac.uk/id/eprint/10118309` - **FAILED**, `client_error` at the
  site; nothing of the page retrieved. The staging host serves the PDF under
  `/10118309/1/...` but refuses its own eprint landing page. Cost one fetch for zero content.
- `https://datadryad.org/dataset/doi:10.5061/dryad.7m0cfxprw` - **reachable and read**, but
  its "Citation" and "Works referencing this dataset" fields are **empty**, so it does not
  carry the article DOI. Recording this so the next checker does not spend a fetch there
  expecting the published citation.
- **WebSearch 2 of 2** (`"asymptotic behavior of bootstrap support values" Systematic Biology
  2021 Huang doi 10.1093/sysbio`) **did not return the DOI.** It returned the same UCL eprint
  and Dryad records already in hand plus unrelated papers - including an
  `academic.oup.com/sysbio/article/72/6/1280/7240218` hit that is the **transfer-bootstrap**
  paper, not this one. **Counting discipline:** the UCL eprint and Dryad records surfaced on
  **both** searches; that is the same two documents twice, **title matches, not
  corroboration**.
- **What worked:** `https://discovery.ucl.ac.uk/id/eprint/10118309/` - the **production**
  UCL Discovery host, first try, carrying journal, volume, issue, pages, year and the
  Identification Number field with the DOI. Worth remembering: for a UCL-authored paper whose
  eprint PDF prints a placeholder DOI, the production Discovery catalogue record is the cheap
  route to the published front matter.
- No search classifier refusal occurred. No publisher paywall was encountered, because I did
  not reach the OUP article page. `doi.org` was not used.

## BEARING ON THE LEDGER ENTRY

**NARROW the comparison limb sharply, and STRIKE the "contradiction rate" reading. HOLD
sub-claim 1. CORRECT the citation.**

- **HOLD** the entry's first limb: this source **PREDICTS and EXPLAINS** the phenomenon
  without measuring the published record. The paper's own words -
  `"provides a partial explanation for the high bootstrap support values for incorrect
  clades observed in empirical data analysis"` - are the entry's thesis, with the authors'
  own hedge `"partial"`. No empirical dataset is analysed. Sub-claim (e) is clean.
  Replace "bounds" with "quantifies in one simulated regime"; nothing here bounds a
  published-record quantity.

- **STRIKE** the inference that 0.029 points toward a small bootstrap contradiction rate, and
  with it the suggestion that the candidate is "partly answered in simulation". The number is
  a per-dataset false-resolution rate for the max of three equally-wrong binary trees under a
  **star** true tree with **misspecification**. The candidate's quantity concerns the
  published record and a resolved truth. **The comparison limb does not acquire a referent
  from this source** - 0.029 is a different quantity, and the regime is silent on the
  candidate's, not supportive of a low value for it.

- **NARROW** the data description: the 0.029 cell is JC+G(alpha = 1)-generated and
  JC-analysed - a misspecification design, not "JC and JC+G data". Say so, and stop
  attaching the true-model Case A to this figure.

- **CARRY** `E(Pmax) = 0.647` from the same Table 2 row and the same R = 10^3 denominator
  wherever 0.029 is quoted. Without it the entry reports the reassuring tail of a
  distribution whose mean the paper uses to argue the opposite.

- **FLAG** 0.853 as imported: `"from Yang and Zhu (2018, table S1)"`. The entry's "prints"
  survives; "measures" would not. Yang & Zhu 2018 is unopened and uncited by the entry.

- **CONVERT TO A PROMOTION CONDITION:** before this source is used again on the comparison
  limb, read **Table 3 and the Case A cells** of this same paper for a `P{Pmax > 95%}` under
  **matched** generating and analysis models with a **resolved** true tree. That, not 0.029,
  is the figure that would bear on a benchmark about error given high support. Second
  condition: open Yang & Zhu (2018) if the Bayesian comparison is to carry any weight.

- **HOLD, with its mechanism rewritten,** the entry's claim that the bootstrap's nominal
  benchmark is contested on an opened source. It is contested here - but by
  `"no convergence to a point value"` under equally-right-or-equally-wrong comparison, by
  `"Thus in large datasets strong support for wrong trees or models is likely to occur"`, and
  by the reporting-and-undercutting of the only interpretation that would license the 5%
  reading (`"controversial"`; `"appears to support"`; `"implausible biologically"`). **Not by
  0.029, which is below 5% and reads as friendly to the benchmark.** Any surviving leg of the
  rejection that cites 0.029 as the contest should be re-pointed at (d1)-(d4). And the
  paper's hedged, cited gloss on the threshold literature points **away** from the candidate:
  `"Earlier simulation studies suggest that the phylogenetic bootstrap may be conservative,
  and that 70% (instead of 95%) means strong support (e.g., Hillis and Bull, 1993)."`

- **CORRECT the citation** to: Huang J., Liu Y., Zhu T., Yang Z. (**2021**), "The asymptotic
  behavior of bootstrap support values in molecular phylogenetics", *Systematic Biology*
  **70**(4):774-785, DOI **10.1093/sysbio/syaa100**. Keep a note that the UCL Discovery
  accepted manuscript (eprint 10118309, `Yang_2020Huang-bootstrap.pdf`) is what was read, that
  it prints the placeholder `"Systematic Biology (2020), 0, 0, pp. 1-17"` and
  `"doi:10.1093/sysbio/bootstrap"`, and that the Dryad data DOI is `10.5061/dryad.7m0cfxprw`.
  The entry's refusal to guess a DOI was right; the gap is now closed from the front-matter
  record rather than from memory.

- **WATCH** the scope trap in defect 6. The single most quotable sentence in this paper
  reverses its meaning when cut from its opener.
