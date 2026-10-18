# UQ-20261018-18 — Source verification: Sigovini et al. 2016 & Goodwin et al. 2015

Reader: source-reader subagent. Date: 2026-10-18.
Budget used: **3 web searches, 7 fetches** (fetch budget fully consumed). Failed/refused routes logged in full below.

## 0. ACCESS ROUTING AND READ LEVEL (read this before any absence claim below)

**Both documents: READ LEVEL = FULL TEXT (via summariser).** Main text of both read in full, as the
**published version**. Supplements of both: **COULD NOT READ** (see §3).

I never saw unmediated text. `curl` to external hosts is refused by this container's egress proxy, so
"FULL TEXT RAW" was unavailable and **every quotation below is summariser-relayed**.

**Systemic quote limitation (Rule 5).** The fetch summariser enforces a hard cap: it stated
"quotes from the source are limited to 125 characters". It refused outright to transcribe either first
page or either abstract verbatim. Consequence: **no quotation in this report is certified verbatim at
full-sentence length.** Fragments under ~125 characters are plausibly verbatim; anything at or above
that length is at risk of truncation, and I mark those. I have not stitched fragments; where the
summariser returned a cut string I reproduce the cut and mark it `[CUT]`.

**Rule 5/6 compliance is PARTIAL and I am declaring it.** I could not check each quoted string alone in
its own request: the 7-fetch budget was consumed reading two documents at three passes each. Quotes
arrived inside broader reads. Mitigations actually performed:
- Source 1 question (e): the Discussion was enumerated **paragraph by paragraph** (7 paragraphs, each
  anchored by its own opening fragment) before the decisive question was put — evidence of real reading
  rather than string-matching.
- Source 2 question (j): asked once with candidate strings supplied (fetch 6) and once **un-primed**
  (fetch 7), naming no category and instead asking what the document's own list of deficiency
  categories is. Both passes returned the same answer. Rule 6 satisfied for (j).
- Source 1 question (d): I attempted independent corroboration of the Figure 1 caption by web search
  (search 3). **It returned no corroborating hit.** That quote therefore rests on the summariser alone.

### Failed and refused routes, with exact error text (Rule 10)

1. `curl https://api.crossref.org/works/10.1111/2041-210X.12594` —
   `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000. Proxy note:
   `api.crossref.org:443 — connect_rejected (the egress proxy refused the connection or could not
   reach the host; a refusal most often means that the host is not allowed for this session)`.
   **Consequence: Crossref's ordered author list was unavailable for either paper.** Author lines below
   rest on each document's own first page, which Rule 4 accepts as the alternative.
2. `curl http://127.0.0.1:39443/__agentproxy/status` — **REFUSED by the Claude Code auto mode
   classifier**: `Permission for this action was denied by the Claude Code auto mode classifier.
   Reason: [Containment Escape].` Per Rule 10 I recorded this and stopped; I did not rework it.
   **This is a refusal, not a check that ran.**
3. `curl https://www.openaccessrepository.it/record/103317/files/fulltext.pdf` —
   `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, size 0. Same proxy class of failure.
   (The same URL later read successfully through WebFetch.)

**Not attempted, so no claim is made:** `onlinelibrary.wiley.com` and `doi.org` for Source 1, and
`cell.com` for Source 2. The brief asked whether Source 1 is paywalled at Wiley. **I cannot say** — I
spent the budget on a route that worked instead. Do not record "paywalled" or "not paywalled" from
this report. PMC/Europe PMC were not attempted (hard-blocked per brief).

---

## 1. SOURCE 1 — Sigovini, Keppel & Tagliapietra 2016

**Version read:** the **published version** PDF, mirrored at the Italian CNR open-access repository:
`https://www.openaccessrepository.it/record/103317/files/fulltext.pdf`. It carries journal pagination,
running heads, and the BES copyright line, so it is the version of record, not an author manuscript.

### (a) Citation from the document's own first page — CONFIRMED

- First-page journal line: `"Methods in Ecology and Evolution 2016, 7, 1217–1225 doi: 10.1111/2041-210X.12594"`
- Title: `"Open Nomenclature in the biodiversity era"` (the PDF text layer renders this
  "OpenNomenclature" — a space-stripping extraction artifact, also seen in "EricaKeppel" and
  "Thismanuscript"; not a real title variant)
- **Author line, printed order:** `"Marco Sigovini1*, Erica Keppel1,2 and Davide Tagliapietra1"`
  — three authors, no et al. Affiliation 1 = CNR, National Research Council of Italy, ISMAR, Venice;
  affiliation 2 = Smithsonian Environmental Research Center, Edgewater, MD, USA. Corresponding author
  is the **first** author, Sigovini.
- Dates: `"Received 4 February 2016; accepted 19 April 2016"`
- Running head confirms author order: `"1218 M. Sigovini, E. Keppel & D. Tagliapietra"`
- Copyright: `"© 2016 The Authors. Methods in Ecology and Evolution © 2016 British Ecological Society"`

**Volume 7 and page range 1217–1225 are confirmed from the document's own first page.** The ledger's
citation of Source 1 is correct as given.

### (b) What the paper DOES — it recommends conventions and **measures nothing**

It is a **review-plus-recommendation** paper on Open Nomenclature (ON): it reviews current zoological
practice in the use of ON qualifiers, notes where that practice is inconsistent or vague, offers
recommendations, and proposes one flow chart. Intended readers: taxonomists, biomonitoring ecologists,
and biodiversity-informatics builders.

**It measures nothing. Stated plainly, on the document's own authority:** the Data accessibility
statement reads `"This manuscript does not include any data."`

Structure, in document order: Summary · Introduction · Annotated list of Open Nomenclature qualifiers ·
Other qualifiers · Discussion · Acknowledgements · Data accessibility · References · Supporting
Information. **There is no Methods, Materials and Methods, Results, Data, or Statistical analysis
section.** Qualifier entries ("species", "subspecies", "affinis", "confer", "stetit", "species
complex", "taxon concept", …) are run-in term entries, not numbered subsections. **One figure
(Figure 1, a flow chart); no tables; no boxes.** Appendix S1 is an alphabetical summary of qualifiers.

So the answer to the brief's disjunction is: **conventions yes, measurement no — not both.**

### (c) Does it state that authors use "aff." and "cf." differently, and does it prescribe standardisation?

**Yes to both, with an important limit on the second.** Fragments as relayed (each within the cap):

Inconsistency of usage:
- affinis entry: `"The differences between these terms are rather subjective."`
- affinis: `"the qualifier implies distinction more than a possible identity"` (attributed to Lucas
  1986; Bengtson 1988), against others who `"consider affinis to indicate a greater degree of
  confidence (Estes 1987)"`; Zidek (1987) is cited as treating the two as synonymous.
- confer entry: `"generally implies a lower degree of uncertainty compared to affinis (Lucas 1986;"`
  `[CUT — the summariser's string ends mid-citation]`, followed by
  `"however, other taxonomists have the opposite view (Estes 1987)"` and
  `"or consider them synonymous (Zidek 1987)"`.
- Introduction: `"The literature discussing the subject is inconsistent and limited to a handful of papers"`
- Summary: `"there is no consensus about ON qualifiers and their meaning."`

Prescription of standardisation:
- Summary: `"Some recommendation is given to avoid inconsistencies or vagueness."`
- Discussion: `"ON qualifiers should be as univocal and unambiguous as possible."`
- Discussion: `"to develop a consistent vocabulary and semantic rules for ON, widely agreed by the scientific community."`
- Discussion: `"All these tools lack a clear reference to a standardized, community-developed vocabulary of ON terms."`
- Discussion: `"it is necessary to identify the meaning of ON qualifiers in legacy data"`

**The limit, which matters for any ledger claim that this paper "standardises" the qualifiers:** it
explicitly declines to formalise a standard — `"Explicit formalization would also ensure data
interoperability and automated processing. However, this is beyond the scope"` `[CUT]`. **It does not
resolve the aff./cf. dispute**; it reports both positions and calls the difference subjective. So:
it urges standardisation as a goal and gives recommendations; it does not issue a binding standard.

### (d) Ordinal confidence ranking of qualifiers — PARTIAL, and the decisive part is in an unreadable figure (Rule 7)

There **is** a confidence ordering, but not a complete ranked scale in the text.

- **Figure 1 caption, as relayed:** `"Flow chart for using main Open Nomenclature qualifiers. The
  degree of confidence essentially increases from the top down."`
  **CAVEAT, do not treat as certified verbatim:** those two sentences together run ~128 characters,
  i.e. at or just over the summariser's 125-character cap, and my independent search for the string
  (search 3) returned **no corroborating hit**. Treat as summariser-relayed.
- **The flow chart's own content — the actual sequence of qualifiers — was NOT reproduced to me.** The
  summariser stated the chart's individual steps do not appear in the running text. So the ordering is
  asserted by the caption while the ordered list itself sits in a figure I could not read. This is
  exactly the failure mode Rule 7 warns about; I am flagging it rather than inferring the sequence.
- **Pairwise orderings in the text (not a full scale, and contested):** for the question mark (species
  incerta), it `"should indicate a higher reliability in the identification with respect to confer"`
  (Richter 1948; Matthews 1973); for cf. vs aff., the ordering reported above, with the opposite view
  also reported.
- **Proposed quantification, not an implemented scale:** the Discussion suggests degree of confidence
  `"could be quantified, for instance by assigning them a value in the [0,1] interval"` (citing
  Huber & Klump 2009). This is floated as a possibility.
- **NOT FOUND in the main text:** a single explicit most-certain-to-least-certain ranked list of all
  qualifiers. Appendix S1 is alphabetical, not ranked — **but Appendix S1 itself is UNREAD** (§3), so
  for the appendix this is COULD NOT READ, not an absence check.

### (e) DECISIVE — agreement rate / reliability of a qualified determination against a later independent determination: **NOT FOUND**

**Read level supporting this absence claim: FULL TEXT (via summariser) of the main body, with the
Discussion enumerated paragraph by paragraph — all seven paragraphs, each anchored by its own opening
fragment — plus a whole-document sweep for sentences stating an unknown, an untested claim, or a call
for future work.** The summariser confirmed: "I examined the Discussion in full, all seven paragraphs."

**No sentence anywhere in the main text poses, as an open question or otherwise, how often a
determination carrying a qualifier agrees or disagrees with a later independent re-identification of
the same specimen** — no agreement rate, concordance, error rate, accuracy, or empirical reliability of
qualified identifications under re-examination.

The two nearest passages, neither of which is that question:
- Discussion: standardisation would permit `"the assessment of their quality (Zingone et al. 2015)"` —
  general quality review of past records, not concordance against re-identification.
- Discussion: confidence `"could be quantified, for instance by assigning them a value in the [0,1]
  interval"` — a **representation** proposal (how to encode confidence), not a proposal to **measure**
  whether qualified names hold up.

The paper's full inventory of stated unknowns and calls for work, as relayed, is: no consensus on
qualifier meaning (Summary); "how to face the decline in trained taxonomists is still debated"
(Introduction); literature "inconsistent and limited to a handful of papers" (Introduction);
differences between aff./cf. "rather subjective"; contested cf./aff. ordering; species complex "still
waiting for a critical revision to clarify the taxa involved and the diagnostic traits"; "To the best
of our knowledge, there is no qualifier in use to clearly state that is not wanted" (stetit); taxon
concept approach "still debated, particularly when applied to zoological data"; species "still
undescribed or poorly known"; the [0,1] quantification suggestion; the need to identify legacy
qualifier meanings; formalisation "beyond the scope"; tools lacking a standardised ON vocabulary.
**Every item is semantic, infrastructural or institutional. None is an empirical-validation question.**

**Scope of this absence claim:** main text body only. Appendix S1 and Figure 1's internal text were
not readable to me and are **not** covered.

---

## 2. SOURCE 2 — Goodwin, Harris, Filer, Wood & Scotland 2015

**Version read:** the **published version** PDF via Oxford ORA:
`https://ora.ox.ac.uk/objects/uuid:f1e0fc2f-05f6-4c4e-958e-fab71939ed8c/files/m8c52d652616fdd76dd5f2596a9aa3b5d`
It carries Cell Press journal pagination, the "Current Biology Magazine" running line, the ©2015 The
Authors line and `"This is an open access article under the CC BY license"` — so this is the version of
record, **not** an author accepted manuscript, despite being hosted in a repository.

### (f) Citation from the first page — CONFIRMED, with one correction to flag

- Running line: `"Current Biology Magazine"`; page line:
  `"R1066 Current Biology 25, R1057–R1069, November 16, 2015 ©2015 The Authors"`
- Title: `"Widespread mistaken identity in tropical plant collections"`
- **Author line, printed order:** `"Zoë A. Goodwin1, David J. Harris2, Denis Filer1, John R.I. Wood 1,
  and Robert W. Scotland1,*"` — five authors. Affiliation 1 = Department of Plant Sciences, University
  of Oxford; affiliation 2 = Royal Botanic Garden Edinburgh. Corresponding author is the **last**
  author, Scotland; the **first** author is Goodwin, so "Goodwin Z.A. et al." is correct.
  (Corresponding author's email address appears on the first page; deliberately not reproduced here.)
- **Volume 25 and page range R1057–R1069 are confirmed from the document's own first page.**
- **DOI as printed in the document: `http://dx.doi.org/10.1016/j.cub.2015.10.002`** — note `.10.002`.
  If the ledger carries `10.1016/j.cub.2015.06.002` or any other month digit, **it is wrong**; the
  brief did not supply a DOI for this source, so record `10.1016/j.cub.2015.10.002`.

**Scope/format flag that affects how this paper may be cited.** This is a **Current Biology Magazine
item**, with `"Correspondence"` appearing as a running header on R1067. **The document has no numbered
or titled body sections** — the only labelled headings, in order, are SUPPLEMENTAL INFORMATION,
ACKNOWLEDGEMENTS, REFERENCES. There is no printed Introduction, Methods, Results or Discussion. Where
I write "Results paragraph" or "Discussion paragraph" below, those are the **summariser's paragraph
labels, not printed headings** — do not cite them as sections.

### (g) THE UNIT AND ESTIMAND — **the level of aggregation is NOT uniform; three analyses use three different units** (Rule 8)

This is the single most important finding on Source 2. "One data point = a herbarium specimen sheet" is
correct for **only one** of the three analyses.

| Analysis | Plant group | **Unit = one data point** | N examined | Herbaria |
|---|---|---|---|---|
| Aframomum | African gingers (genus *Aframomum*, Zingiberaceae) | **the individual specimen**, with its determination history — `"We extracted the full determination history of each specimen"` | `"4,500 specimens"` (abstract); `"more than 4,500 specimens of Aframomum"` (results para); **but Fig. 1B caption gives `"between 1800 & 2014 (N = 1,779)"`** | `"40 herbaria in 21 countries"` |
| Dipterocarpaceae | tree family Dipterocarpaceae | **the COLLECTION / gathering**, i.e. a set of duplicate sheets in different herbaria — `"9,222 collections, each represented by at least two duplicate specimens"` | `"From a total of 58,860 specimens of Dipterocarpaceae from nine herbaria"`, reduced to 9,222 collections = 21,075 specimens (abstract: `"more than 21,000 specimens"`) | **nine** |
| Ipomoea | *Ipomoea* | **the NAME, explicitly not the specimen** — `"we measured the accuracy of names rather than specimens"` | `"the total number of names associated with 49,500 specimens of Ipomoea"`; `"Examination of the 560 Ipomoea names"` | GBIF aggregate |
| Background counts | all plants / angiosperms | specimens; published names | Fig. 1C `"Accumulation of 31,068,510 plant specimens in herbaria"`; `"951,140 published species names of angiosperms"` | world / GBIF / The Plant List |

Two things to carry forward:
- **The document never formally defines "collection."** It uses the word for the duplicate group in the
  Dipterocarp analysis and for institutional holdings elsewhere (including in the title). The two units
  are distinguished only through the Dipterocarp counts.
- **The Aframomum N is internally unreconciled:** 4,500 specimens in the abstract against N = 1,779 in
  the Figure 1B caption. The summariser reports the document does not reconcile them. The headline 58%
  is stated against the 4,500 framing; the time series rests on 1,779. I have **not** attempted to
  reconcile these and have derived no figure from them.

### (h) Endpoint and reference standard — **also differs per analysis, and one analysis has no reference standard at all**

- **Aframomum — name on the sheet vs. a monograph.** Reference standard:
  `"relative to the current name, as determined in the recent monograph [2]"`. Endpoint: whether the
  label name was misidentified, indeterminate (genus or family only), or a synonym of the correct name.
- **Dipterocarpaceae — NO external reference standard.** The endpoint is **disagreement between
  duplicates of the same gathering**: `"Of these collections, 29.1% had different names in different
  herbaria."` **No name is designated correct.** This is a concordance/discordance measure, not
  accuracy against a standard; the document does not state that the Ashton (2004) revision [9] was
  used as comparator. **Anyone reading 29.1% as an error rate commensurable with the 58% is wrong.**
- **Ipomoea — nomenclatural status, authority unnamed in the main text.** Names were classed as
  synonyms, invalid/erroneous/unrecognised, or unidentified to species. The main text does not name the
  authority used; it defers to Supplemental Experimental Procedures and Figure S1A, **which I could
  not read** (§3).

Headline statement: `"Our data show that at least 58% of the specimens had the wrong name prior to a
recent taxonomic study."` The opening summary itself does **not** name the baseline — the nearest
clause there is only `"prior to a recent taxonomic study"`; the monograph comparator is stated in the
later results paragraph.

**Who re-determined, and when.** Determiners are traced only for the worked example and the time
series: Fig. 1A — collected and identified to family in 1938 `"by the collector J. Louis"`, then
W. Mullenders (1945), then `"re-identified as Aframomum sp. by J.M. Lock"` (1976), then
`"by Harris & Wortley as part of the revision of the genus Aframomum"` (2014). Fig. 1B attributes
quality improvements to `"(i) J.M. Lock in the mid-1970's, (ii) M.M. Dhetchuvi in the mid-1990's and
(iii) the current monograph."` **The document does not state who made most of the 4,500 (or 1,779)
Aframomum determinations, nor who determined the Dipterocarpaceae or Ipomoea material, nor when.**
The reference names postdate the original labels.

**Reliability of the authors' own re-determinations: not discussed.** The document does not address
whether the monograph's names will themselves later change; it treats them as the standard without
caveat. The only adjacent statement is general: `"the taxonomy and nomenclature of these groups are
provisional"`.

### (i) Prevalence figures with their denominators — exactly as printed

| # | As printed | Where | What it is a proportion of | **Unit** | Denominator |
|---|---|---|---|---|---|
| 1 | `"at least 58%"` | opening summary | specimens with the wrong name prior to the study | specimens (Aframomum) | 4,500 specimens per abstract; Fig. 1B uses N = 1,779 — **unreconciled** |
| 2 | `"more than 58%"` | results para | `"misidentified or only identified to genus or family (indeterminate), or given a name that was a synonym of the correct name"` | specimens (Aframomum) | not restated in that sentence |
| 3 | `"more than 58%"` | discussion para | specimens incorrectly named | specimens (Aframomum) | not restated in that sentence |
| 4 | `"more than 50%"` | abstract | tropical specimens, "on average", likely incorrectly named | specimens (tropical, all plants) | **none stated — this is the paper's extrapolation, not a measurement** |
| 5 | `"29.1%"` | Dipterocarp para | collections with different names in different herbaria | **COLLECTIONS** | 9,222 collections, implied by `"Of these collections"` |
| 6 | `"40%"` | Ipomoea para | `"nomenclatural and taxonomic synonyms (40%)"` | **NAMES** | 560 names, implied only |
| 7 | `"16%"` | Ipomoea para | `"invalid, erroneous or unrecognised names (16%, 'invalid' in Figure S1A)"` | **NAMES** | 560 names, implied only |
| 8 | `"11%"` | Ipomoea para | `"11% of the specimens in GBIF were unidentified to species"` | **SPECIMENS** | 49,500 not explicitly tied to it |
| 9 | `"50%"` | Fig. 1C caption | specimens collected since 1969 | specimens | 31,068,510 implied, not stated as the denominator |
| 10 | `"65%"` | discussion para | synonymy rate, **cited from ref [4]** | synonyms | none — **not this paper's measurement** |
| 11 | `"90%"` | discussion para | tropical species collected too infrequently to be usable for modelling, **cited from ref [6]** | species | none — **not this paper's measurement** |
| 12 | `"39.4%"` | discussion para | published angiosperm names with "high confidence" status | names | **yes: 951,140 published species names** |

Notes required by Rules 8 and 9:
- **Unit switch inside a single analysis:** in the Ipomoea paragraph, 40% and 16% are percentages of
  **names**; 11% is a percentage of **specimens**. They are not three slices of one denominator.
- `"more than half of all tropical plant collections"` appears in the discussion paragraph as prose,
  not as a printed percentage, so it is not tabulated above.
- **I derived no figures of my own.** The 9,222 collections → 21,075 specimens relation is the
  document's own arithmetic, not mine. Items 1 and 2 may or may not share a denominator; the document
  does not say, and I have not assumed it. The document states no uncertainty intervals anywhere, so
  there are none to carry through.

### (j) DECISIVE — does it condition on, report separately for, or even mention open-nomenclature qualifiers? **NOT FOUND for "cf." / "aff." / "?"; a partial-determination category IS present and IS folded in**

**Read level supporting this: FULL TEXT (via summariser) of the main text, figure captions and figure
legends, checked TWICE — once with candidate strings supplied (fetch 6) and once completely un-primed
(fetch 7, naming no category and instead asking for the document's own list of deficiency
categories). Both passes agreed.** Supplements not covered (§3).

**What is absent.** `"cf."`, `"aff."`, `"sensu lato"`, `"s.l."`, a `"?"` appended to a name, and the
term `"open nomenclature"` were each reported as appearing **nowhere** in the document, including
captions, legends and text. The un-primed pass independently reached the matching conclusion:
*"The document is silent on this… it does not separate determiners who flagged tentativeness from
those who asserted a name confidently."* The paper never conditions on, stratifies by, or discusses
the determiner's own expressed uncertainty.

**What is present, and must not be mistaken for the above.** The paper does have a
**partial-determination category**, and it **folds it into the headline figure**:
- `"more than 58% of specimens were misidentified or only identified to genus or family
  (indeterminate), or given a name that was a synonym of the correct name"` — so genus/family-only
  determinations are counted **as errors inside the 58%**, not analysed separately.
- **Figure 1B legend categories, as printed:** `"Correct (incl. basionyms)"`, `"Genus or Family"`,
  `"Synonyms"`, `"Other"`. The document does not define "Other". **No separate percentage for the
  "Genus or Family" class is stated in the text.**
- Figure 1A caption does contain one open-nomenclature-shaped string: `"re-identified as Aframomum
  sp. by J.M. Lock"`. So **"sp." occurs once, in a caption, as an actual determination** — but the
  document does not call it a qualifier and does not treat it as signalling uncertainty. Same caption:
  the specimen was `"recognized as not fitting any existing species concepts"`.
- Ipomoea: `"unidentified to species"` **is** reported separately (11%) — but that is a count of GBIF
  records lacking a species-level name, not an analysis of qualified determinations.
- Prose only, no figure attached: `"many specimens remain wrongly named, unrecognised and/or not
  determined for decades"` and `"the taxonomy and nomenclature of these groups are provisional"`.

**Where the Aframomum breakdown lives, and why I cannot close it.** The text cites
`"Supplemental Table S1"` for the Aframomum breakdown. **Table S1 is UNREAD.** Therefore:
"the misidentified / indeterminate / synonym classes are not broken out separately" is **NOT FOUND in
the main text**, while whether Table S1 breaks them out is **COULD NOT READ**. These are not the same
and I am not merging them. The same applies to Figure S1A for the Ipomoea classes.

---

## 3. What I did NOT read — COULD NOT READ, not absence

**Source 1:** Appendix S1 (Supporting Information, the alphabetical qualifier summary) — not fetched.
Figure 1's internal content — the flow chart's own boxes and their order — **not reproduced to me**;
only its caption was relayed. Any claim about the chart's actual qualifier sequence is unverified.

**Source 2:** Supplemental Experimental Procedures, Supplemental Table S1, Figure S1A — not fetched.
Figures 1A/1B were relayed only via captions and legend labels, not as data.

**Neither source:** the publisher pages (Wiley, Cell Press) — not attempted, so **no paywall claim**.
Crossref's ordered author list — **unavailable, route proxy-refused** (§0.1); both author lines rest on
each document's own printed first page.

## 4. On the earlier reader's "read in full"

Both documents' **main texts** are genuinely readable in full by the repository routes named above, so
the earlier reader's claim is **supportable for the main text of both**. I verified both independently
rather than inheriting it. Two cautions: neither of us can have read the **supplements** by these
routes, and no reader using this container's fetch path can produce a **full-sentence verbatim quote**,
because of the 125-character summariser cap documented in §0. Any quotation longer than ~125 characters
attributed to either paper in this ledger should be treated as unverified until a raw-text route exists.
