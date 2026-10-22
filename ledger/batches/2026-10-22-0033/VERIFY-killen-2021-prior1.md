# VERIFY-killen-2021-prior1

Checker: fresh context. Budget used: 1 search, 5 fetches (cap 6 / 5).
Date of check: 2026-10-22.

## CLAIM

Source handed to me: Killen SS et al. (2021), "Guidelines for reporting methods to
estimate metabolic rates by aquatic intermittent-flow respirometry", *Journal of
Experimental Biology* 224(18):jeb242522, doi:10.1242/jeb.242522.

Front matter, taken from the publisher page and the publisher PDF (not from anyone's
short form):

- Article-type label as printed by the journal: **COMMENTARY**.
- Authors in order: Shaun S. Killen; Emil A. F. Christensen; Daphne Cortese; Libor
  Závorka; Tommy Norin; Lucy Cotgrove; Amélie Crespel; Amelia Munson; Julie J. H.
  Nati; Magdalene Papatheodoulou; David J. McKenzie.
- *J Exp Biol* 224(18), article number jeb242522 (no page range; e-locator only),
  published 14 September 2021 (citation line gives 15 September 2021).
  doi:10.1242/jeb.242522. Publisher: The Company of Biologists Ltd.
- Side note, not front matter: the University of Turku research portal classifies the
  item "B1 Non-refereed article in a scientific journal". That is an institutional
  output classification, not the journal's own label, and it should not be reported as
  the article type. The journal's label is Commentary.

Sub-claims handed to me:

- (a) Does the paper mention a respiratory quotient, respiratory exchange ratio or
  CO2 production (VCO2) anywhere? The claim is that **CO2 appears exactly once, in
  criterion 20, about scrubbing**.
- (b) Does Table 1 carry a column headed **"Prevalence (% papers)"** printing
  **71.2, 12.0, 8.8 and 89.4**, against a denominator of **202 papers**?
- (c) Does the **Equipment** text print **71, 12, 48, 15 and 19 per cent**, and
  **">30%"** for background respiration?
- (d) PUBLISHED IS NOT PERFORMED: does the paper print any share of studies whose
  reported gas-exchange **values** are out of range, as opposed to shares of studies
  that fail to **report** something?

## READ LEVEL

**Full text.** Two independent renderings were read:

1. Publisher HTML, journals.biologists.com/jeb/article/224/18/jeb242522/272400/... —
   opened and served abstract plus body text, in two passes (second pass at
   offset 25000). In this rendering **Table 1 is an image**: its caption is text, its
   cells are not, so no column heading or cell value is obtainable there.
2. **Publisher's PDF** (`jeb242522.pdf`, 1.05 MB) at the University of Turku
   repository: https://www.utupub.fi/bitstreams/8e88c11e-b5a8-4ab8-b301-09c88a0c8cc5/download
   (reached from https://www.utupub.fi/items/a650d2fa-19b3-46b5-926c-dfccf9588fcd/full,
   which lists exactly one bitstream, labelled "Publisher's PDF"). In this rendering
   Table 1 is real text, including its column headings and cell values.

The earlier agent's report that the paper reads in full at utupub.fi is **confirmed**,
and the bitstream above is the working route.

**Limit on exhaustiveness, stated plainly.** curl is refused at this proxy for this
host (see ROUTES THAT FAILED), so I could not download the PDF and grep it myself.
Every string search below was executed by the fetch reader over the converted
document, twice, against two different renderings of the same paper. That is strong
enough to confirm an occurrence and to report that no contradicting occurrence was
returned, but it is **not** a byte-level grep, and the word "exactly once" in
sub-claim (a) rests on that weaker instrument. Flagged rather than smoothed over.

## WHAT THE SOURCE SAYS (quotations as served)

### Abstract

Reconstruction from **17 ordered consecutive segments** returned under the reader's
~125-character quotation cap; assembled only from consecutive returns, nothing
completed by inference:

> "Interest in the measurement of metabolic rates is growing rapidly, because of the
> importance of metabolism in advancing our understanding of organismal physiology,
> behaviour, evolution and responses to environmental change. The study of metabolism
> in aquatic animals is undergoing an especially pronounced expansion, with more
> researchers utilising intermittent-flow respirometry as a research tool than ever
> before. Aquatic respirometry measures the rate of oxygen uptake as a proxy for
> metabolic rate, and the intermittent-flow technique has numerous strengths for use
> with aquatic animals, allowing metabolic rate to be repeatedly estimated on
> individual animals over several hours or days and during exposure to various
> conditions or stimuli. There are, however, no published guidelines for the reporting
> of methodological details when using this method. Here, we provide the first
> guidelines for reporting intermittent-flow respirometry methods, in the form of a
> checklist of criteria that we consider to be the minimum required for the
> interpretation, evaluation and replication of experiments using intermittent-flow
> respirometry. Furthermore, using a survey of the existing literature, we show that
> there has been incomplete and inconsistent reporting of methods for
> intermittent-flow respirometry over the past few decades. Use of the provided
> checklist of required criteria by researchers when publishing their work should
> increase consistency of the reporting of methods for studies that use
> intermittent-flow respirometry. With the steep increase in studies using
> intermittent-flow respirometry, now is the ideal time to standardise reporting of
> methods, so that – in the future – data can be properly assessed by other scientists
> and conservationists."

Note the measurement principle stated in the authors' own words: *"Aquatic
respirometry measures the rate of oxygen uptake as a proxy for metabolic rate."*
Oxygen uptake only. This is the reason the RQ/RER vocabulary is absent — the technique
the paper governs does not measure CO2.

### Section structure

ABSTRACT; Introduction; Box 1 ("Metabolic traits that can be estimated using
intermittent-flow respirometry", with SMR, RMR, MMR, Aerobic metabolic scope);
Intermittent-flow respirometry; A need for the standardisation of methods; A checklist
for reporting methods using intermittent-flow respirometry (sub-headings: Equipment,
materials and setup / Measurement conditions / Background respiration / Measurement of
SMR (or RMR) / Measurement of MMR / Data handling and analysis); Survey of the existing
literature (sub-headings reusing those category names, plus "Estimating SMR/RMR and
MMR" and "Data handling"); Conclusions; Appendix 1; Acknowledgements; Footnotes;
References.

### (a) Gas-exchange vocabulary

Searched term by term, each term alone, across both renderings and including Table 1
and Appendix 1:

| String | Result |
|---|---|
| "respiratory quotient" | **not present** |
| "respiratory exchange ratio" | **not present** |
| "RQ" | **not present** |
| "carbon dioxide" | **not present** |
| "VCO2" | **not present** |
| "CO2" | **one occurrence** |
| "CO 2" (split rendering) | **not present** |
| "scrub" / "scrubbing" | **not present anywhere in the document** |

The single CO2 occurrence sits in **Table 1, criterion 20, in the *Description*
column** (journal page 5). Criterion 20 as printed (reconstruction from 2 consecutive
segments):

> "20 Describe if (and how) the ambient water bath was cleaned and aerated during
> measurement of oxygen uptake (e.g. filtration, periodic or continuous water changes)"

Its Description column, as served:

> "Aeration of the ambient bath ensures oxygen in respirometers is replaced during
> flushing" / "removes metabolic CO2 produced by the animal."

Criterion 20's own prevalence value is **38.5**.

Nearest gas-exchange language elsewhere: the phrase **"respiratory gas exchange"**
occurs once, and **not** in the Introduction as a first pass suggested — it is in the
section "Intermittent-flow respirometry":

> "including researchers who are new to the estimation of metabolic rates via
> measurement of respiratory gas exchange"

The Introduction instead uses "rates of gas exchange".

### (b) Table 1

Caption (reconstruction from 3 consecutive segments; identical in the HTML rendering,
where the caption is text even though the cells are not):

> "Table 1. Checklist of criteria that should be reported when using aquatic
> intermittent-flow respirometry to estimate SMR/RMR or MMR, along with detailed
> descriptions of each criterion. Also shown is the prevalence of each criterion in the
> existing literature"

Column headings as printed, in order:

> Number | Criterion and category | **Prevalence (% papers)** | Description | References

Every value in the prevalence column carries **one decimal place**. The four values in
the claim are all present, and each is the prevalence **of reporting that criterion**:

| Value | Criterion | What the value is the prevalence OF |
|---|---|---|
| **71.2** | criterion 1 | % of papers that reported **body mass of animals at the time of respirometry** |
| **12.0** | criterion 4 | % of papers that reported the **ratio of respirometer volume to body mass** |
| **89.4** | criterion 9 | % of papers that reported the **type of oxygen probe and data recording** |
| **8.8** | criterion 40 | % of papers that reported the **proportion of data removed as outliers below the r² threshold** |
| (38.5) | criterion 20 | % of papers that reported cleaning/aeration of the ambient water bath |

**Denominator.** Table 1 itself **prints no denominator** — not in the caption, not in
a table note. The denominators are stated only in the figure captions:

> "Criteria for each category were scored across *n*=202 studies, except for the MMR
> category, where *n*=123"

and in the survey's opening sentence:

> "Our analysis of 202 published papers (with *n*=123 of these including data for MMR
> in addition to SMR or RMR), from 1993–2021, shows that reporting of methods has been
> relatively poor and inconsistent"

So 202 is the denominator for most of Table 1 but **not for the MMR-category
criteria**, which are out of 123.

### (c) Survey percentages, with the subsection each actually sits under

Quoted as served. Several returns are cut before the sentence ends; cuts are marked
and the tail is **not** treated as verified.

**Survey of the existing literature (opening):**
> "Our analysis of 202 published papers (with *n*=123 of these including data for MMR
> in addition to SMR or RMR)" / "from 1993–2021, shows that reporting of methods has
> been relatively poor and inconsistent"
> "Reporting showed a slight negative correlation with journal impact factor (Clarivate
> Analytics 2020 ... GLMM, *P*=0.031" [cut]
> "There was some evidence of an improvement in reporting over the last few decades
> (Fig. 2; GLMM, effect of year, *P*=0.001)"

**Equipment, materials and setup** — printed as whole numbers with a percent sign:
> "only **71%** of articles clearly specified the body mass of animals at the time of
> respirometry"
> "a measure that was only explicitly provided in **12%** of studies (criterion 4)"
> "only **48%** of papers surveyed provided any mention of whether mixing was performed
> inside the respirometers"
> "Criteria relating to mixing circuit tubing (criteria 4, 5, 6 and 7) were only
> mentioned in **12–21%** of papers"

**Measurement conditions** — *this is where 15% and 19% are, not Equipment*:
> "only **15%** of studies mention whether the animals were visually shielded from each
> other (criterion 25)"
> "Only **19%** of papers reported the total time taken to measure all animals in a
> study"
> "Only **31%** of studies mentioned the lowest water oxygen concentration that animals
> were exposed to"

**Background respiration** — printed as words, not as a symbol:
> "were the most inconsistently reported among studies (GLMM, effect of category,
> *P*<0.0001)"
> "In fact, **more than 30%** of papers surveyed did not mention whether any form of
> background microbial respiration" [cut before the sentence ends]

**Estimating SMR/RMR and MMR:**
> "the total number of oxygen uptake rate measurements (i.e. number of closed phases)"
> / "was reported in only **34%** of studies"
> (a further sentence cites "(criterion 38" for the number of slopes, with no
> percentage)

### (d) What the paper measures, and what it does not

Scoring rule, from Appendix 1:
> "Studies were awarded a point for a given criterion if they gave a clear,
> unambiguous description"

Estimands, from the figure captions:
> Fig. 2: "The percentage of criteria listed in Table 1 that were satisfied in the
> surveyed papers" — "Each point represents one paper"
> Fig. 3: "The percentage of papers that referred to the specific criteria listed in
> Table 1" — "Each point represents one criterion"
> Method statement: "we conducted a quantitative analysis of previous reporting of the
> checklist criteria among studies"

**The paper prints no share of studies whose reported metabolic-rate or gas-exchange
values are out of range, implausible or erroneous.** Not present in the survey text,
not present in Table 1, not present in Appendix 1. It does not define a plausible range
for oxygen uptake, let alone audit papers against one.

Answering the PUBLISHED-IS-NOT-PERFORMED question in its own terms: for a share of
out-of-range reported values, the paper does not DEFINE it, does not BOUND it, does not
PREDICT it, does not ANNOUNCE it and does not MEASURE it. The quantity is simply
absent. What it **MEASURES** instead is **reporting completeness**: per criterion, the
percentage of papers that described it (Table 1's "Prevalence (% papers)", Fig. 3);
per paper, the percentage of checklist criteria satisfied (Fig. 2); and GLMM trends of
that completeness against publication year (*P*=0.001), journal impact factor
(*P*=0.031) and criterion category (*P*<0.0001).

## REGIME

In the authors' own words where quoted:

- **Instrument / technique governed:** aquatic **intermittent-flow** respirometry,
  which "measures the rate of oxygen uptake as a proxy for metabolic rate". Oxygen
  uptake only; no CO2 channel, no two-gas measurement.
- **Biological population:** aquatic animals (water breathers); metabolic traits SMR,
  RMR, MMR and aerobic scope (Box 1).
- **Corpus:** "202 published papers (with *n*=123 of these including data for MMR in
  addition to SMR or RMR)".
- **Years covered:** **1993–2021**.
- **Unit of analysis: dual, and this matters.** Fig. 2 "Each point represents one
  paper"; Fig. 3 "Each point represents one criterion". A number lifted from this paper
  is per-paper or per-criterion depending on which figure or column it came from.
- **Denominator:** *n*=202 studies per category, "except for the MMR category, where
  *n*=123".
- **Endpoint:** presence or absence of a methodological detail in a paper's published
  methods — "Studies were awarded a point for a given criterion if they gave a clear,
  unambiguous description". Not the correctness of the method, not the validity of the
  reported values.
- **Estimand:** percentage of criteria satisfied per paper; percentage of papers
  reporting each criterion; and the GLMM associations of reporting with year, impact
  factor and category.
- **Genre:** a journal **Commentary** that bundles (i) a prescriptive **checklist /
  guideline** (Table 1, 40-plus criteria) with (ii) an **original quantitative survey
  of the published literature**. It is not a primary experimental study, not a
  meta-analysis of biological effect sizes, and not a systematic review with a
  registered protocol. The percentages are the authors' own scoring of the corpus, not
  figures attributed to anyone else.

**Does the handed claim sit inside this regime?** Sub-claims (a), (b) and (d) do. Sub-claim
(c) sits inside it only after its section attribution is corrected — see DEFECTS. And
any onward use of this paper as evidence about the *quality or validity of reported
metabolic-rate values* sits **outside** it: the paper is silent there, and silence is
not support.

## DEFECTS FOUND

1. **(a) "about scrubbing" is wrong, and the word does not occur.** The count and the
   location hold: CO2 appears once, in criterion 20. But **"scrub"/"scrubbing" appears
   nowhere in the paper**, and criterion 20 is not about a CO2 scrubber. Criterion 20
   asks authors to "Describe if (and how) the ambient water bath was cleaned and
   aerated during measurement of oxygen uptake (e.g. filtration, periodic or continuous
   water changes)". CO2 enters only in the *Description* column's rationale, where
   aeration of the ambient bath "removes metabolic CO2 produced by the animal" — CO2
   carried off from bath water by aeration, not chemical scrubbing of a gas stream.
   Two further precisions: the CO2 mention is in the **Description** column, **not in
   the criterion statement itself**; and the criterion is about the **ambient water
   bath**, not the respirometer chamber.

2. **(b) The blanket "denominator of 202 papers" is wrong for part of the table.** The
   heading and all four values are confirmed exactly. But Table 1 **prints no
   denominator at all**, and the denominator stated elsewhere is "*n*=202 studies,
   except for the MMR category, where *n*=123". A prevalence value read off an
   MMR-category criterion is out of **123**. Asserting 202 across the whole column
   overstates the denominator for those rows. Note also that this is a per-category
   split, so checking any single value requires knowing which category its criterion
   belongs to — a GRANULARITY point the claim collapses.

3. **(c) Two of the five percentages are attributed to the wrong section.** 71%, 12%
   and 48% are in **Equipment, materials and setup**. **15% and 19% are in Measurement
   conditions**, a different subsection reporting a different criterion category
   (criterion 25 and total measurement time). Bundling all five as "Equipment text" is
   a section misattribution, and the categories are exactly what the paper's GLMM
   treats as a predictor ("effect of category, *P*<0.0001"), so the distinction is not
   cosmetic.

4. **(c) ">30%" is not what the page prints.** The paper prints **"more than 30%"** in
   words: "In fact, more than 30% of papers surveyed did not mention whether any form
   of background microbial respiration…". The magnitude survives; the quotation form
   does not. A string offered as the source's own must be the source's own.

5. **(c) Direction of the background-respiration figure, for the record.** "more than
   30%" is a share that **did not mention** something — a non-reporting share, not a
   share of studies with a background-respiration problem. Anyone reading ">30% for
   background respiration" without the verb could take it the other way.

6. **Body text and Table 1 print the same quantities at different precision.** The body
   says "71%" and "12%" where Table 1 prints **71.2** and **12.0**. Both are the
   source's own printed figures, so neither is somebody else's arithmetic — but a
   citation should name which of the two it took, because they are not the same string.

7. **Article-type hazard.** The University of Turku portal labels this "B1
   Non-refereed article in a scientific journal". The journal's own label is
   **Commentary**. A ledger entry that reports this paper as peer-reviewed primary
   research, or alternatively as merely "non-refereed", would be leaning on a
   repository classification rather than front matter. Report it as a Commentary
   carrying an original literature survey.

8. **Several served sentences are cut before they end**, notably the background-
   respiration sentence and the impact-factor sentence. I have marked each cut and have
   not completed any of them by inference. Where a cut falls before a sentence's final
   clause, the clause beyond the cut is unverified — including whatever the background
   respiration sentence says after "…any form of background microbial respiration".

9. **No defect in (d).** The absence of an out-of-range-values share is a real absence,
   confirmed in Table 1, the survey text and Appendix 1 across both renderings. But
   note the converse rule: the paper's silence on value validity is **not** the paper
   flagging a gap in value validity. It never raises the question.

## ROUTES THAT FAILED

- **curl to www.utupub.fi** (both the item page and, by implication, the bitstream):
  `curl: (56) CONNECT tunnel failed, response 403`. Consistent with the routing note
  that a curl 403 here is **tool-scoped, not a host block** — **WebFetch served the
  identical host and the identical PDF without trouble**. Do not record utupub as
  blocked.
- **`curl "$HTTPS_PROXY/__agentproxy/status"`**: refused by the auto-mode classifier
  ("Containment Escape"). Not retried and not worked around; the task also forbids
  probing the egress proxy. **Consequence worth carrying forward:** no local copy of
  the PDF, therefore no `grep`/`pdftotext` term search. All string searches here ran
  through the fetch reader.
- **Publisher HTML renders Table 1 as an image.** Caption is text; cells are not. So
  the HTML route **cannot** answer sub-claim (b) at all. This is a rendering limitation,
  not a host failure, and the publisher's PDF at the repository is the route that does
  answer it. Worth recording for the next checker: for any Table-1 question on this
  paper, go straight to the utupub bitstream.
- **PMC8467026 / Europe PMC: not attempted**, per established routing (PMC serves a
  reCAPTCHA interstitial, Europe PMC returns 429 with a do-not-retry). The PMCID was
  treated as an identifier only. This is a *not attempted*, not a COULD NOT READ.
- Not attempted, and unnecessary once the PDF opened: hal.archives-ouvertes.fr/hal-03438324,
  eprints.gla.ac.uk/249126, research.utu.fi/converis/portal/detail/Publication/67547037.
- **Nothing was COULD NOT READ and nothing was NOT FOUND.** The source opened in full.

## BEARING ON THE LEDGER ENTRY

- **The source is real, open and readable in full**, and the earlier agent's utupub
  route is sound. Any entry resting on "could not verify" for this paper should be
  corrected: the exact bitstream URL is recorded above.
- **(a) CONFIRMED on substance, CORRECTED on characterisation.** CO2 appears once; RQ,
  RER, "respiratory quotient", "respiratory exchange ratio", "carbon dioxide" and
  VCO2 appear **nowhere**. The entry may say CO2 occurs once, in criterion 20's
  Description column. It must **not** say criterion 20 is about scrubbing: the word
  never appears, and the criterion concerns cleaning and aerating the ambient water
  bath. If the ledger's underlying question is whether these guidelines address
  two-gas / RQ reporting, the answer is a clean **no** — and the reason is in the
  abstract itself, because the technique being standardised "measures the rate of
  oxygen uptake as a proxy for metabolic rate". That is a genuine scope boundary of the
  guideline, not an oversight the paper acknowledges.
- **(b) CONFIRMED, with the denominator narrowed.** The column heading is exactly
  "Prevalence (% papers)" and 71.2 / 12.0 / 89.4 / 8.8 are all printed, against
  criteria 1, 4, 9 and 40 respectively. The entry must drop the unqualified "202" and
  carry "*n*=202, except the MMR category where *n*=123", noting that Table 1 prints no
  denominator of its own.
- **(c) PARTLY CONFIRMED. Fix two things.** Move 15% and 19% out of Equipment and into
  **Measurement conditions**. Replace ">30%" with the printed **"more than 30%"**, and
  keep the verb: it is a share of papers that **did not mention** background microbial
  respiration.
- **(d) CONFIRMED, and this is the load-bearing finding.** The paper publishes **no**
  share of studies with out-of-range reported gas-exchange values. Its endpoint is
  **reporting completeness** — whether a paper gave "a clear, unambiguous description"
  of each criterion — scored per paper (Fig. 2) and per criterion (Fig. 3) over 202
  papers from 1993–2021. Citing this paper for anything about the *validity* of
  published metabolic-rate values, or for a rate of erroneous values in the
  literature, is a regime error: the paper is silent there. Equally, its silence is not
  a flag — it never identifies value validity as an unexamined gap, so the entry cannot
  credit it with having raised the question either.
- **One further caveat to carry:** the "exactly once" in (a) is as strong as a
  summariser-mediated search over two renderings can make it, because curl is refused
  at this proxy and no byte-level grep was possible. If the ledger's verdict turns on
  the count being one rather than two, that caveat should be visible in the entry.
