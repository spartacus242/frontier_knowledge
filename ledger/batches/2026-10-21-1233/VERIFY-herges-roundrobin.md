# VERIFY — Herges et al., "Machine learning for the classification of macroscale fracture surfaces" (round-robin check)

## Citation, as the source itself serves it

The De Gruyter Brill document page (`https://www.degruyterbrill.com/document/doi/10.1515/pm-2023-1042/html`)
serves, on the openly visible portion:

- Title: **Machine learning for the classification of macroscale fracture surfaces**
- Authors, in order as served: **A. Herges, L. Ulrich, S. Scholl, M. Müller, D. Britz, F. Mücklich**
- DOI: **10.1515/pm-2023-1042**
- Published Online: **2023-06-11**; Published in Print: **2023-06-27**
- Access label: **"Licensed / Unlicensed Requires Authentication"**

**The visible publisher page does not print a journal name, volume, issue or page range.**
Journal/volume/issue/pages below therefore come from publisher-deposited metadata, NOT from the
article's own front matter (see Defect 1).

From OpenAlex record `W4380203063` (DOI lookup, publisher-deposited metadata):

- `primary_location.source.display_name`: **"Practical Metallography"**, host organization **"De Gruyter"**
- `volume`: **60** · `issue`: **6** · `first_page`: **352** · `last_page`: **362** · `publication_year`: **2023**
- `open_access.is_oa`: **false** · `primary_location.is_oa`: **false** · `best_oa_location`: **null**
- `has_fulltext`: **false** (`has_content`: pdf false, grobid_xml false) · only one location, the DOI landing page, `pdf_url: null`, `license: null`

Consistent with this, the publisher's own issue index for the journal key `pm` volume 60 issue 6
(`degruyterbrill.com/journal/key/pm/60/6/html`) was returned by search as the containing issue.

## Read level, and the routes that failed

**READ LEVEL: ABSTRACT ONLY.** English abstract read in full (reconstructed verbatim below).
Acknowledgements read only through the fetch summariser (one verbatim fragment obtained).
**The BODY was COULD NOT READ — not "not found".** The article exists, is correctly identified, and
is paywalled with no open deposit discoverable within the query budget.

Routes attempted and their outcomes:

1. `degruyterbrill.com/document/doi/10.1515/pm-2023-1042/html` — **served abstract + acknowledgements + references only**; body withheld behind "Licensed / Unlicensed Requires Authentication". (Matches the handoff; the `/pdf` route was already established as paywalled.)
2. **OpenAlex** `api.openalex.org/works/doi:10.1515/pm-2023-1042` — **no open route exists in the metadata**: `is_oa` false, `best_oa_location` null, `has_fulltext` false, single non-OA location, no `pdf_url` on any location.
3. **Saarland University repository (SULB)** `publikationen.sulb.uni-saarland.de/handle/20.500.11880/40767` — **wrong item.** This handle, which search engines return repeatedly for queries naming this article, is a *different* paper: "An automated Machine Learning based approach for a reproducible and efficient evaluation of industrial Charpy V-notch specimens", Herges, Bachmann, Scholl, Mücklich, *Materials & Design* vol. 257 (2025), doi 10.1016/j.matdes.2025.114424, repository doi 10.22028/D291-46509, bitstream `1-s2.0-S0264127525008445-main.pdf` (11.35 MB, CC licence, openly downloadable). It is NOT doi 10.1515/pm-2023-1042. No SciDok/SULB record for the 2023 PM article surfaced.
4. **DGM media library** `dgm.inventum.de/app/medialibrary/show/documentItem/b5cec913-45e1-4abb-a7b6-ff28669a39f4` (titled "PM Artikel" in search results) — **content-free**: no article text, no PDF, no download or file URLs, only `meta-theme-color` and `meta-viewport` lines. Confirms the handoff's JavaScript-shell finding.
5. **Searches for an author preprint, ResearchGate deposit, CORE / Semantic Scholar / Scilit full text, DVM or DGM proceedings, German-language repository copy** — five searches, **no deposit of this article surfaced** at all. Hits were the paywalled publisher page, the content-free DGM item, the wrong SULB handle, and unrelated fracture-mechanics papers.
6. **Unpaywall: deliberately not used**, per the instruction forbidding any personal identifier in a URL.
7. PMC / Europe PMC not applicable (not indexed there; not a biomedical paper) — not attempted.

Query budget consumed: **5 searches, 5 fetches** (fetch cap reached). No further route attempted.

## Reconstructed English abstract (VERBATIM, reconstruction from 17 consecutive segments)

Assembled only from ordered consecutive returns under the summariser's ~125-character quotation cap;
no words supplied by inference; junctions verified as consecutive. Labelled a **reconstruction from
17 fragments**:

> "The characterization of fractographic surfaces typically requires experts to evaluate the
> characteristics of fracture surfaces. However, these evaluations are influenced by human factors,
> such as subjectivity, and suffer from a lack of reproducibility. In this context, machine learning
> (ML), which has been established in various disciplines within materials science over the past few
> years, is a promising field enabling a more objective and reproducible evaluation. This study will
> evaluate the use of ML for the evaluation of fracture surfaces of notched Charpy specimens based on
> digital camera images. Image sections of the two reference regions "upper shelf" (ductile) and
> "lower shelf" (brittle) will serve as the database. In a first step, data visualization will be
> performed and data separability will be verified using unsupervised ML. On this basis, supervised ML
> will be used to train models to distinguish brittle and ductile fractures. These models will then be
> applied to determine ductile und brittle portions in mixed fracture modes, with the results being in
> good agreement with the expert consensus achieved in the round robin test."

"ductile und brittle" is reproduced **as served** (German "und" inside the English abstract); see Defect 3.

## (a) Journal name, volume, issue, pages — and the status of "Practical Metallography"

**"Practical Metallography" is NOT confirmed from the article's own front matter. It remains an
inference from publisher-deposited metadata.**

- The openly served publisher page for this article prints **no journal name, volume, issue or pages**.
- "Practical Metallography", vol. **60**, issue **6**, pp. **352–362** (2023) comes from the OpenAlex
  record of the DOI (`primary_location.source.display_name`, `volume`, `issue`, `first_page`,
  `last_page`) and from the journal-key URL path `pm/60/6`. This is De Gruyter's deposited metadata —
  strong, and internally consistent, but it is **not** the printed front matter, which sits inside the
  paywalled PDF.
- *Practical Metallography* is the English face of a bilingual journal (*Praktische
  Metallographie*): the article carries a German abstract as well as the English one. Which title
  string the printed front matter of **this** article bears — and in which order — **could not be
  verified**. Volume, issue and page range are therefore reported as publisher metadata, flagged, not
  as front matter.

## (b) THE ROUND ROBIN — the only thing this check is for

**Finding: the accessible text of this source establishes almost nothing about the round robin, and
reports NO examiner-performance statistic of any kind.**

The entire accessible mention of the round robin is one dependent clause at the end of the abstract:

> "with the results being in good agreement with the expert consensus achieved in the round robin test."

The German abstract carries the same claim with the German term, reported by the fetch as:

> "im Ringversuch ermittelten Expertenkonsens"

The acknowledgements are the only other accessible mention of participants. One verbatim fragment
obtained:

> "all fractography experts at AG der Dillinger Hütten-werke"

(the hyphenation "Hütten-werke" is as served — a line-break artefact; see Defect 4). Per the fetch
summary, the acknowledgements thank these fractography experts **and** university staff who took part
in a fracture surface analysis survey, and thank the German Federal Ministry for Economic Affairs and
Climate Action (BMWK) for funding a project on heavy plate for monopile foundations.

Point by point against what was asked:

- **How many experts took part:** **NOT STATED anywhere in the accessible text.** No count, no range,
  no "n =". The acknowledgements imply participants from at least two bodies (an industrial steel
  producer, AG der Dillinger Hüttenwerke, and university staff), i.e. **≥ 2 institutions**, but give
  **no number of people**.
- **What task they performed:** **NOT STATED in the body-level sense.** The acknowledgements call it a
  "fracture surface analysis survey" (summariser's wording, not verbatim-verified); the abstract calls
  its output an "expert consensus". Whether the task was assigning a label per specimen, estimating a
  percentage of ductile area, marking regions on an image, or something else, is **unreadable from the
  abstract.** The paper's own ML task — "determine ductile und brittle portions in mixed fracture
  modes" — is the model's task, **not** demonstrably the experts' task, and must not be transferred to
  them.
- **What label set they used:** **NOT STATED.** The abstract's own categories are "upper shelf"
  (ductile) and "lower shelf" (brittle) as the *image database* for ML, plus "mixed fracture modes"
  as the application set. Whether the experts worked to those same two labels, to a continuous percent-
  ductility scale, or to a third scheme, is **not recoverable** from the accessible text.
- **What reference standard their determinations were scored against:** **NONE is stated — and the
  direction of comparison in the abstract is the reverse of the question.** In the only accessible
  formulation, the experts ARE the reference ("the results being in good agreement with the expert
  consensus"): the ML output is the thing scored, and the expert consensus is the comparator. The
  abstract nowhere scores the experts against anything.
- **Any per-examiner accuracy, false-attribution rate, inconclusive rate, or inter-examiner agreement
  statistic:** **NONE appears anywhere in the accessible text.** No percentage, no kappa, no
  concordance figure, no confusion matrix, no spread across examiners, no uncertainty on the "good
  agreement" claim. The claim "in good agreement" is **qualitative and unquantified** as served.
  Whether such a statistic exists in the paywalled body is **COULD NOT READ**, not "absent".

Scope / regime, as the source establishes it: the ML work is pinned to a narrow regime —
**notched Charpy specimens**, imaged by **digital camera** at **macroscale**, with the training
database drawn from **image sections** of the **upper-shelf and lower-shelf reference regions**, and
the application to **mixed fracture modes**. The material context in the acknowledgements is **heavy
plate for monopile foundations**. Any use of this source as evidence about examiner reliability
outside that regime — other specimen geometries, microscale/SEM fractography, other materials, or
fracture-cause attribution rather than ductile/brittle discrimination — is outside what even the
abstract claims.

Grammar on both sides of the cut: in "the expert consensus achieved in the round robin test", the
round robin appears **only** as the provenance of the comparator. The grammatical subject of the
agreement claim is "the results" (the ML models'). Quoting that phrase to support a claim that the
round robin *measured* expert performance cuts the phrase away from its clause and reverses what is
being evaluated.

## (c) Are examiners' determinations compared against a mechanism known BY CONSTRUCTION?

**No such comparison is anywhere in the accessible text; and the accessible text points the other
way.** Two things must be kept apart here:

1. **For the ML training data**, the ground truth is construction-like: the "two reference regions
   'upper shelf' (ductile) and 'lower shelf' (brittle)" are regimes of the Charpy transition curve,
   i.e. the label follows from how the specimen was tested, not from anyone's reading of it. That is
   a construction-known label — **but it labels the images for the model, and the abstract does not
   say any examiner was scored against it.**
2. **For the mixed fracture modes**, which is where the human comparison actually occurs, the
   standard invoked is explicitly **"the expert consensus achieved in the round robin test"** — a
   consensus of readers, not a mechanism fixed by construction. There is no accessible statement of a
   specimen set whose ductile/brittle proportion is known independently of expert reading and against
   which examiners were then scored.

So, on the accessible text: **the human determinations are the reference, not the thing referenced**,
and the only construction-known labels in sight are applied to the model's database. Whether the
paywalled body reports anything further is **COULD NOT READ**. Silence in an abstract is not a finding
about the body.

## Source type

**Primary study**, reporting the authors' own application of unsupervised and supervised ML to their
own image database — not a review, protocol, guideline, editorial or column. The round-robin/Ringversuch
is **the authors' own undertaking** as far as the acknowledgements indicate (participants thanked
directly, not cited), so the round robin is not a finding attributed to a third party; but **no
citation or separate publication for the round robin is visible in the accessible text**, so whether
it is reported in full here or elsewhere is unknown.

## What the source MEASURES, in its own words

Unit of analysis: **"Image sections"** of **"notched Charpy specimens"**, from **"digital camera
images"**. Database: **"the two reference regions 'upper shelf' (ductile) and 'lower shelf' (brittle)"**.
Methods, in order: **"data visualization ... and data separability ... using unsupervised ML"**, then
**"supervised ML ... to train models to distinguish brittle and ductile fractures"**. Endpoint of the
application step: **"determine ductile und brittle portions in mixed fracture modes"** — i.e. a
*portion* (a proportion of fracture area), not a per-specimen category. Comparator for that endpoint:
**"the expert consensus achieved in the round robin test"**. Estimand and uncertainty: **none stated**;
the only result statement is the qualitative **"in good agreement"**. No threshold, no confidence
interval, no error rate appears in the accessible text, so there is nothing to re-derive at the
authors' own threshold.

## Defects

1. **Front matter unverified.** The publisher's open page prints no journal title, volume, issue or
   pages; "Practical Metallography 60(6) 352–362" rests on De Gruyter's deposited metadata via
   OpenAlex, not on the article's own front matter. Reported as an inference, as required.
2. **The abstract is written entirely in the future tense** ("This study will evaluate", "will serve
   as the database", "will be performed", "will be used", "will then be applied"). The sole result
   statement is a trailing dependent clause. An abstract in this form carries no quantified result,
   and should not be read as reporting one.
3. **"ductile und brittle"** — a German "und" inside the English abstract, reproduced as served and
   not silently corrected.
4. **"Hütten-werke"** — hyphenation artefact in the acknowledgements as served; reproduced, not
   corrected.
5. **A search trap worth recording for the ledger:** SULB handle `20.500.11880/40767` is returned by
   multiple distinct queries naming this 2023 article, but holds a **different, open-access 2025
   Materials & Design paper** by an overlapping author set (Herges, Bachmann, Scholl, Mücklich, doi
   10.1016/j.matdes.2025.114424). Anyone checking this claim could easily read that paper's body and
   believe they had read this one. They are different sources, different years, different journals.
   That 2025 paper is a **lead**, not evidence, for anything asserted about this 2023 article.
6. **The DGM media-library item is content-free** (no text, no PDF, no file URLs) and should not be
   recorded as an access route.
7. **The body is COULD NOT READ, not absent.** Every statement above about what the round robin does
   or does not report is a statement about the **abstract and acknowledgements only**. The absence of
   examiner-performance statistics in the abstract is **not** evidence that the body lacks them.
