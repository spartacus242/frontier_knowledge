# VERIFY — per-molecule predictions (two sources)

Checker: fresh context. Date: 2026-10-22.
Budget used: 2 WebSearch of 6. WebFetch: 5 content-bearing calls of 5, plus one
call that returned only a 302 redirect notice with no content and an instruction
to re-call at the redirect URL; the redirect pair is counted as one fetch and
the accounting is stated here so the reader can discount it if they count
differently. No further queries were made after the cap.

---

## CLAIM

Two sources are each cited on this ledger as **printing a number that is a
PREDICTION under an assumption rather than a MEASUREMENT**. The task is to say
which, and at what grain.

Source 1 — Landerer C., Pöhls J., Toth-Petroczy A., "Evolutionary impact of
codon specific translation errors at the proteome scale", bioRxiv
2022.10.11.511697. Sub-claims:
- (a) does it print ">15% of all proteins contain at least one" error, and what
  is the grammar on both sides of the cut;
- (b) is that figure MEASURED or COMPUTED under site-independence;
- (c) what is its unit of analysis, and does it anywhere print a per-molecule
  error distribution or a fraction of molecules carrying two or more errors.

Source 2 — Gomes A.C. et al., "A genetic code alteration generates a proteome of
high diversity in the human pathogen *Candida albicans*", Genome Biology 8:R206
(2007). Sub-claims:
- (d) does Figure 4c plot a per-molecule count distribution (0,1,2,3) for
  three-CUG genes, and what are the plotted values;
- (e) is that distribution MEASURED or computed under a binomial model;
- (f) what error class is it — programmed sense-codon ambiguity or
  misincorporation.

---

## READ LEVEL

**Source 1 (Landerer et al., bioRxiv 2022.10.11.511697): FULL TEXT.**
Route that worked: `https://www.biorxiv.org/content/10.1101/2022.10.11.511697.full.pdf`
(and the mirror `.../content/biorxiv/early/2022/10/13/2022.10.11.511697.full.pdf`).
Both served body text, section headings and the reference list. No route failed.
Front matter as served: Cedric Landerer, Jonas Pöhls, Agnes Toth-Petroczy; Max
Planck Institute of Molecular Cell Biology and Genetics / Center for Systems
Biology Dresden / Cluster of Excellence Physics of Life, TU Dresden; posted
13 October 2022; DOI 10.1101/2022.10.11.511697; **no journal — bioRxiv preprint,
"not certified by peer review" as served.** The reference list is **alphabetical
author–year**, and in-text citations are author–year, not bracketed numbers.

**Source 2 (Gomes et al. 2007): FULL TEXT for body, Methods, Results,
Discussion and all figure CAPTIONS. For the Figure 4c PLOT ITSELF: COULD NOT
READ.** Routes that worked for text: the BMC per-figure page
`https://genomebiology.biomedcentral.com/articles/10.1186/gb-2007-8-10-r206/figures/4`
and, after a 302, `https://link.springer.com/article/10.1186/gb-2007-8-10-r206`.
Both served the Figure 4 caption in full and neither served the figure image —
the Springer page offers only a "Full size image" link. Article type as the page
labels it: **"Research"** (primary research article, not a review).

Correction to the prior agent's routing note, which matters for the ledger: the
prior agent reported Figure 4c "not served" at link.springer.com and that is
confirmed, **but there is a second, un-tried route that the search index exposes
directly — a dedicated per-figure page at BMC, `.../figures/4`.** That page was
fetched here and it serves the complete Figure 4 caption including the panel (c)
description. So the caption is fully readable; what remains unreadable is only
the plotted pixel data. **This is a COULD NOT READ at the grain asked, not an
absence**, and it is not a NOT FOUND: Figure 4c exists, is described, and its
panel (c) is exactly about the 0/1/2/3 distribution.

---

## WHAT THE SOURCE SAYS (quotations as served)

### Source 1 — Landerer et al.

**(a) The ">15%" sentence. It is in the INTRODUCTION and it carries a
citation.**

RECONSTRUCTION from 2 consecutive fragments (the summariser's ~125-char cap was
beaten by requesting ordered consecutive segments; the first part was returned
independently a second time on a separate fetch and matched, which is the
junction check):

> "These error rates imply that more than 15% of all proteins contain at least
> one, potentially harmful," + "wrong amino acid ([12])."

Grammar on both sides of the cut, as served:

- **Before** the phrase stands the subject "**These error rates imply that**".
  "These error rates" are not this paper's. The two immediately preceding
  sentences, as served, are:
  > [1] "Translation error rates are often measured for individual constructs"
  > [2] "Only one study measured translation error rates proteome-wide and found
  > stark differences between codons"
  So the referent of "these error rates" is **other people's measurements**, and
  the verb is **"imply"** — an inference, hedged, not an observation.
- **After** the phrase the sentence continues "**, potentially harmful, wrong
  amino acid**" and then closes with a **citation marker**. The ledger's cut at
  "...at least one" drops both the object ("wrong amino acid") and the citation.
- The sentence immediately following, as served:
  > [4] "Translation error could thus lead to a large variation in the
  > population of any type of protein"
  — "could", again hedged.

**Unresolved on the citation's identity, and I am not asserting it.** The first
fetch rendered the in-text marker as "([12])". A second fetch of the reference
list reports the bibliography is **alphabetical with author–year in-text
citations and no printed numbers**, and then offered "[12] = Drummond & Wilke
(2009), *The evolutionary consequences of erroneous protein synthesis*, Nature
Reviews Genetics 10:715–724" **by counting entries in the alphabetical list**.
That count is the reader-model's own arithmetic on an unnumbered list, not front
matter, and it contradicts its own statement that the citations are author–year.
**I therefore record only that the 15% sentence carries a citation, and that the
cited work was not reliably identified.** Anyone relying on the attribution must
re-read the sentence in the PDF directly.

**(b) The paper's own model statement, and what the model outputs.** The
site-independence assumption is stated in the **Results**, under "Error free
translation probability", not in the Introduction where the 15% sits:

RECONSTRUCTION from 2 consecutive fragments:
> "The explicit site independence assumption of our model allows us to calculate
> the probability of error free" + "translation until codon i as the cumulative
> product of error free translation probabilities until codon i."

Other assumption statements as served (fragments, each returned whole):
> "We assume that tRNAs move through a cell by diffusion only, making expected
> arrival times" / "of tRNAs at the ribosome proportional to their abundance"
> "Assuming exponentially distributed arrival times, the probability that tRNA i
> will arrive before tRNA j" / "is given by their expected arrival times λ:"
> "We assumed that the incorporation of an amino acid follows a multinomial
> distribution, where the" / "incorporation probability is a function of tRNA
> abundance and codon/anticodon binding affinity."
> "We assume that most amino acid misincorporations observed via mass
> spectrometry result from translation" / "rather than transcription errors."

**The output of that independence model, where it is stated in the Results
("Translation machinery is nearly optimal"), carries NO number:**
> "Most proteins can be expected to carry at least one amino acid
> misincorporation."
Its neighbours as served: preceding, "Only 0.11 % of proteins impose a
significant burden due to amino acid misincorporations in *S. cerevisiae*";
following, "It is, therefore, important to understand the impact amino acid
misincorporation have on protein function".

**This is the second formulation of the claim, and per the "state it more than
once" rule both are recorded: the Introduction formulation (15%, hedged by
"imply", with a citation) and the Results formulation ("Most proteins can be
expected to...", hedged by "can be expected", no number, no citation).** The
paper does **not** print a number as the output of its own independence model.
Asked directly whether any other numeric fraction of proteins carrying at least
one misincorporation appears, the answer as served was **no**; the other
percentages measure different things — "Only 0.11 % of proteins impose a
significant burden" (Results; fitness burden, not error count) and "Only about
8.6 % of codon sites appear to impose a significant fitness burden"
(Discussion; **codon sites**, not proteins).

**(c) Unit of analysis.** Per codon and per site, with protein-level numbers
obtained by **summing** site contributions. As served:
> "We calculated the error rate of a codon i by dividing the number of times
> codon i was observed to be" / "mis-translated by the total number of times
> codon i was observed in a peptide."
> "Protein burden was calculated as the sum of individual site contributions"

What it **measures** by mass spectrometry is a per-codon detection frequency
across PRIDE datasets:
> "We identified at least one amino acid substitution in 180 datasets of the 283
> S. cerevisiae datasets," / "we obtained from PRIDE"
Note the unit of that sentence: **datasets**, not molecules.

**Per-molecule distribution, and the two-or-more fraction: NOT PRESENT.** No
distribution over 0/1/2/3+ errors per molecule, and no fraction of molecules
carrying two or more errors, appears anywhere in the served full text.

### Source 2 — Gomes et al. 2007

**(d) Figure 4c — what the caption says, and what is and is not served.** Panel
(c) is exactly the object asked about. Caption fragments as served:
> "The impact of various leucine mis-incorporation levels on the probability of
> synthesis" / "proteins with 0, 1, 2, or 3 leucines at CUG positions, for genes
> containing three CUGs."

(These two fragments were returned on two separate fetches with the same
wording. I did **not** verify an overlap at their junction and the first appears
to end mid-construction, so **I do not assert the joined string** — the panel-c
caption is recorded as two fragments, not as one reconstructed sentence. No word
was supplied by inference.)

Caption overall line: "The Candida albicans proteome has a statistical nature."

**The plotted VALUES of panel (c) are NOT served.** Neither route rendered the
image, and the page text carries no axis labels and no numbers for panel (c).
**Reported here as COULD NOT READ at the grain asked.** What the panel plots
(probability of 0/1/2/3 leucines, three-CUG genes, swept over
mis-incorporation level) is established from the caption; the specific heights
are not.

Served numbers from the other panels, for the record: (a) "In *C. albicans*, 33%
of the genes do not have CUG codons and 57% have between one and five codons";
(b) "Ambiguous CUG decoding results in exponential expansion of the proteome",
"allowing the 6,438 C. albicans genes to generate 2.8379 × 1011 different
proteins" (exponent served unsuperscripted — reproduced as served, read 10^11);
(d) "The total number of novel proteins within a cell was estimated as being of
6.7 × 106 in cells grown at 30°C" (read 10^6), with 8.7 × 10^6 at 37°C,
10.9 × 10^6 at pH 4.0, 9.0 × 10^6 with hydrogen peroxide and 40 × 10^6 in
highly ambiguous cells, and "0.01% indicates background decoding error."

**(e) MEASURED or COMPUTED: computed, under an explicit binomial model, and the
paper says so in both Results and Methods.** As served:
> Results: "This effect results from the binomial probability of one gene with
> *n* CUG codons having *i* leucines"
> Methods: "was calculated using the binomial distribution (b(*i*,*n*,*P*))"
> Methods: "The number of novel proteins arising (*N novel*) for each gene was
> given by the following equation:"
> Results: "we estimated that for CUG mis-translation levels of 2.9% and 28.1%"
> Discussion: "arrays of proteins are generated from single mRNAs creating a
> statistical proteome"

So the chain is: the **per-codon leucine level is measured** by MS, and the
**per-molecule 0/1/2/3 distribution is then computed from it by a binomial**,
i.e. under an assumption of **independence across the three CUG sites within a
molecule** (that is what b(i,n,P) with a single P encodes). The measured inputs,
as served: wild-type leucine incorporation at CUG "2.96% at 30°C, 3.9% at 37°C,
4.03% with H2O2, 4.95% at pH 4.0", and from the Figure 3 caption for the
engineered strain:
> "28.1% ± 1.17 of the peptides incorporated leucine and 71.9% ± 1.17
> incorporated serine at the CUG codon position."
Carrying the stated uncertainty: ±1.17 on both. **Wild-type serine percentages
are not printed**; the complement of the leucine values is arithmetic nobody in
the paper performed, and the reader-model that fetched it flagged that
explicitly as its own inference. Do not cite a wild-type serine figure to this
paper.

**(f) Error class: programmed sense-codon ambiguity, in this paper's own
words, with "mis-incorporation" used for the minor Leu fraction.** Terms served:
"CUG ambiguity", "ambiguous CUG decoding", "codon ambiguity", "statistical
proteome", alongside "leucine mis-incorporation" and "decoding error". Abstract:
> "Such codon ambiguity expands the proteome of this human pathogen
> exponentially"
Results: "the levels of leucine mis-incorporation at the CUG codons were then
quantified". The caption also separates out "0.01% indicates background decoding
error" — i.e. the paper itself distinguishes background decoding error from the
CUG ambiguity it is measuring.

**The class is a single reassigned sense codon decoded dually by a dual-identity
tRNA (Ser majority, Leu minority) at CUG positions only.** It is **not**
genome-wide stochastic misincorporation. The two are different error classes and
the paper's own numbers live in the first.

---

## REGIME

**Source 1.** Population: *S. cerevisiae* (with a tree-of-life comparison
elsewhere in the paper). Instrument: mass spectrometry datasets mined from PRIDE
(283 *S. cerevisiae* datasets, 180 with ≥1 substitution). Unit of analysis:
**codon and site**, with protein-level values formed by **summation** over
sites. Estimand of the model: **probability of error-free translation up to
codon i, as a cumulative product** — i.e. the model's native output is a
survival probability along a single chain under site independence, which yields
P(zero errors) and hence P(≥1 error), and **nothing above that: no P(exactly k)
and no P(≥2)**. Thresholds: "significant burden" at the protein level (0.11%)
and at the site level (8.6%) — two different denominators, both stated.

Where the ">15%" sits in that regime: **outside the model.** It is an
Introduction-level implication drawn from **cited** proteome-wide error rates,
hedged with "imply", with a citation attached. It is not presented as an output
of the site-independence model, and the model's own corresponding statement in
the Results is **qualitative** ("Most proteins can be expected to carry at least
one"). A ledger entry that reads the 15% as the printed output of the
independence model is importing a number from one regime (another group's
measured rates, as the Introduction frames them) into another (this paper's
model).

**Source 2.** Population: *C. albicans*, 6,438 genes, plus an engineered
high-ambiguity strain. Operating conditions actually tested: 30°C, 37°C, pH 4.0,
H2O2, and the engineered strain. Instrument: MS quantification of Leu vs Ser at
CUG peptide positions. Unit of analysis for the **measurement**: the **CUG codon
position within peptides** (a per-site occupancy fraction). Unit of analysis for
**Figure 4c**: the **protein molecule from a three-CUG gene**, counting how many
of its three CUG positions carry Leu. Estimand of 4c: **a binomial probability
mass function** b(i, n=3, P), swept over P. Category restriction: **three-CUG
genes only**, which the caption states; panel (a) shows 57% of genes have one to
five CUGs, so three-CUG genes are a slice, not the proteome.

**Both sources therefore sit on the same side of the published-is-not-performed
line, but at different grains**, and the difference is the whole point of the
check:

| | prints a per-molecule count distribution? | measured or computed? |
|---|---|---|
| Landerer et al. | **No.** Only P(≥1), and only as a cited Introduction figure; the Results version has no number. No P(≥2), no 0/1/2/3. | The 15% is an **implication from cited rates**; the model's own output is **COMPUTED** under stated site independence and is printed **without a number**. |
| Gomes et al. | **Yes** — panel 4c is exactly a 0/1/2/3 distribution, for three-CUG genes. Values **COULD NOT READ** (image not served at either route). | **COMPUTED**, explicitly "using the binomial distribution (b(i,n,P))", from a **measured** per-codon Leu occupancy. |

Neither source **MEASURES** a per-molecule error-count distribution. Gomes
**COMPUTES** one and plots it; Landerer **neither computes nor plots** one
beyond the zero/non-zero dichotomy.

---

## DEFECTS FOUND

1. **Mis-located inference (Source 1, the defect that bears on the entry).** The
   ledger record states the 15% is "Printed in the text as a consequence of
   literature per-site rates" and pairs it in the same breath with the paper's
   "explicit site independence assumption", producing the reading that the
   independence model yields 15%. As served, the 15% is in the **Introduction**,
   its subject is "**These error rates**" referring to **other people's**
   proteome-wide measurements, its verb is "**imply**", and it ends in a
   **citation**. The independence-assumption sentence is in the **Results**,
   under a different heading, and the number it produces in the text is **no
   number at all**. The record's two quotations are individually accurate; their
   **juxtaposition** attributes to this paper's model a figure the paper attaches
   to a citation. Per the attribution rule, this must be recorded as a finding
   the source attributes to someone else.

2. **An unidentified citation reported as if resolved (Source 1).** The marker
   rendered as "([12])" cannot be squared with a reference list that the same
   PDF serves as **alphabetical author–year with no printed numbers**. The
   candidate attribution (Drummond & Wilke 2009, Nat Rev Genet 10:715–724) was
   produced by **counting entries in an unnumbered alphabetical list** — the
   reader-model's arithmetic, not front matter. **Left unresolved here.** It
   matters because if the 15% traces to a 2009 review, the ledger is citing a
   2022 preprint for a figure that is a review's restatement of still earlier
   work — two attribution hops, not zero.

3. **Quote cut that drops the object and the citation (Source 1).** ">15% of all
   proteins contain at least one" ends mid-noun-phrase. The served continuation
   is ", potentially harmful, wrong amino acid ([12])." The cut is verbatim as
   far as it goes and the record's own longer version restores the object, but
   the entry-level short form loses both the object and the citation marker, and
   the citation marker is the load-bearing part.

4. **Prior routing note incomplete (Source 2).** "Figure 4c was not served at
   link.springer.com" is true but led to the wrong conclusion. The BMC
   **per-figure page** `.../gb-2007-8-10-r206/figures/4` serves the complete
   Figure 4 caption including the panel-(c) description, and that page is in the
   search index. The caption was recoverable and was recovered here. Only the
   plot's values remain unread. **COULD NOT READ at the grain asked ≠ the
   figure does not show what was asked about.** Panel 4c demonstrably does show
   a 0/1/2/3 per-molecule distribution for three-CUG genes.

5. **Error-class conflation risk between the two sources (Sources 1 and 2).**
   Landerer's class is stochastic amino-acid misincorporation across the
   proteome; Gomes's class is **programmed dual decoding of one reassigned sense
   codon** by a dual-identity tRNA, restricted to CUG positions, with background
   decoding error separately labelled at 0.01% in the same caption. A ledger
   entry that treats Gomes's 4c as precedent for "the distribution of
   translation errors per molecule" is crossing error classes. Gomes's binomial
   is over **three known, pre-specified sites in one gene**; Landerer's regime is
   **every site in every protein**. The binomial-over-three-known-sites result
   is **silent** on the proteome-wide per-molecule distribution.

6. **A denominator slip available to anyone reading Source 1 quickly.** "at
   least one amino acid substitution in 180 datasets of the 283 ... datasets" is
   a count of **datasets**, not of proteins or molecules. It sits near the
   protein-level language and is easy to misread as a per-protein fraction. It
   is not one.

7. **OCR damage in Source 1, reproduced not corrected.** The prior record
   flagged garbled exponents ("1.51 × 10!# to 4.8 × 10!%"). This read did not
   rely on any per-codon exponent and none is reproduced here. In Source 2,
   superscripts came through flattened ("2.8379 × 1011", "6.7 × 106"); these are
   reproduced as served with the intended reading marked separately, not
   silently corrected.

8. **No defect found where one might be alleged (recorded so it is not
   re-litigated).** Source 1's silence on P(≥2) is **silence**, not a denial that
   errors cluster. And Source 1 does separately **assert** randomness — the prior
   record's quotation "Amino acid misincorporations are rare events randomly
   distributed across the proteome" was not re-served to me in this read's
   targeted queries and I therefore neither confirm nor dispute its wording; the
   budget was spent on the sub-claims actually asked.

---

## ROUTES THAT FAILED

- `https://genomebiology.biomedcentral.com/articles/10.1186/gb-2007-8-10-r206`
  — **HTTP 302** to `link.springer.com/article/10.1186/gb-2007-8-10-r206` with
  `error=cookies_not_supported`. Not a block: re-calling at the supplied
  redirect URL served the full article text. Recorded as a redirect to follow,
  not a failure of the host.
- **Figure 4 image (Source 2) at both working routes** — the BMC per-figure page
  and the Springer article page each serve caption text only; the image is
  behind a "Full size image" link and is not rendered to the reader. This is the
  one genuine COULD NOT READ in this note, and it is scoped to the **plotted
  values of panel 4c**, nothing else.
- **Reference-number resolution in Source 1** — the bibliography is served, but
  unnumbered and alphabetical, so the in-text marker could not be resolved to an
  entry with confidence. Not a route failure; a structural one.
- Not attempted, by instruction: PubMed Central (PMC2246281 appeared in search
  results and is an identifier to convert, not a route), Europe PMC, Unpaywall
  (would require supplying a contact address — skipped entirely), and any
  inspection of the egress proxy. No curl was used; no host was declared blocked
  on a curl result.

---

## BEARING ON THE LEDGER ENTRY

**The ledger's headline verdict survives, and survives in a stronger form than
it was written: neither source measures a per-molecule error-count distribution.
But the supporting reasoning for Source 1 needs rewriting, and Source 2 needs
promoting from "figure unavailable" to "figure identified, values unread".**

On Source 1, the entry (UQ-20261022-04) currently reads as though Landerer et
al. print a per-molecule "at least one error" fraction **as the output of their
independence model**. They do not. The number is an **Introduction-level
implication, hedged with "imply", drawn from error rates the paper attributes to
earlier work, and closed with a citation**; the model's own Results-level
statement of the same thing is **unquantified**. For the entry's purpose this
*deepens* the gap it is documenting rather than closing it: the quantity is not
merely "computed but not measured", it is **not even computed by the source most
often cited for it**. The claim "the quantity has been computed under the null
but never measured" should become: *the zero-error/non-zero dichotomy has been
computed under an independence null (Gomes, binomially, for three known sites in
one gene) and separately asserted without a number (Landerer, Results); the
15% figure most often attached to Landerer is an inherited, cited implication in
that paper's Introduction; no source opened measures or computes a full
per-molecule distribution at proteome scale, and none prints a P(≥2).*

On Source 2, the correction cuts the other way and is the more consequential of
the two. Figure 4c **is** a per-molecule 0/1/2/3 count distribution for
three-CUG genes — the caption says so in the paper's own words — and the
Methods **name the binomial** that produces it. So a published per-molecule
count distribution under an explicit independence assumption **does exist**, in
2007, and the ledger must now treat it as prior art for the *construct* even
while the *regime* differs sharply: three pre-specified CUG sites in one gene
under programmed sense-codon ambiguity, versus every site in every protein under
stochastic misincorporation. The regime difference is the reason the entry's
candidate is not simply anticipated. **The honest position is: the construct is
old, the proteome-wide instance is not, and the measurement has never been
performed in either regime.** Per the "prior nobody opened is not prior art"
rule, note also that this figure was dismissed in the prior pass as unavailable
when its caption was in fact one documented route away.

Two residual items a future pass should close, neither reachable within this
note's cap: (i) resolve Source 1's citation on the 15% sentence by reading the
reference list directly rather than by counting, since it determines whether the
ledger is citing a preprint for a review's figure; (ii) obtain the Figure 4c
image itself, which would convert the one remaining COULD NOT READ into plotted
values and settle whether Gomes prints a numeric P(≥2) for three-CUG molecules
or only a curve. On present evidence Gomes **PLOTS** that distribution and the
text prints no tabulated P(exactly k) — which is itself an instance of the
published-is-not-performed pattern: a curve drawn, its values never stated in
prose.
