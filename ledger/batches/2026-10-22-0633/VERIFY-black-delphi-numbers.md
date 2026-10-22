# VERIFY — Black et al., DELPHI data provenance (IJPDS 2023;8(5):2177)

## CLAIM

As handed to me, the source is cited for: (a) a front-matter string; (b) 36.4% of patients in
the new software's database matched to the previous software's, 5,807 matched / 10,166
unmatched; (c) procedure records 2–3× higher in 2012–13 with none before 2012, and antibiotic
prescriptions falling from ~1,601 to 475 per year at similar encounter volumes; (d) that the
authors abandoned a planned interrupted time-series analysis; (e) a regime description;
(f) that matching was probabilistic, without a common identifier; (g) that the paper measures,
per fact class, the fraction of the pre-cutover record never brought into the new system;
(h) that it states a materiality bound or pre-registers something.

The entry uses this paper as the closest prior to a Provisional candidate, so its unit of
analysis and estimand set the novelty cap.

## READ LEVEL

**Full text**, read through WebFetch's summariser against the publisher-hosted HTML full text:
`https://ijpds.org/index.php/ijpds/article/view/2177/4931` (open access, IJPDS / Swansea
University). Front matter, Abstract, Background, Methods, Results, Tables 2 and 3, Key
Features and ethics statement were all reachable and answered.

Caveat on the read: the summariser would not emit whole sentences verbatim. Every quotation
below is therefore either (i) a fragment returned whole, or (ii) a **reconstruction** assembled
only from ordered, overlapping consecutive fragments, labelled as such with the fragment count
and the overlap used. Nothing below is completed by inference. Line and page positions are not
available from the HTML rendering, so locations are given as section / table.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter, as the article's own first page prints it

- Title, as printed: **"Understanding data provenance when using electronic medical records
  for research: Lessons learned from the Deliver Primary Healthcare Information (DELPHI)
  database"**
- Authors, in printed order, with printed affiliation superscripts:
  **Jason Edward Black¹; Amanda L. Terry¹²³; Sonny Cejic¹; Tom Freeman¹; Dan Lizotte²³⁴;
  Scott McKay¹; Mark Speechley²³; Bridget Ryan¹²³.**
  Affiliations: 1 Family Medicine, Western University; 2 Epidemiology and Biostatistics,
  Western University; 3 Schulich Interfaculty Program in Public Health, Western University;
  4 Computer Science, Western University.
- Journal: International Journal of Population Data Science. Volume **8**, issue **5**,
  article number **2177**. Published **27 September 2023**.
  DOI **10.23889/ijpds.v8i5.2177**.
- Article type: no type banner is printed in the body. The subject heading on the page is
  "Population Data Science"; the Key Features section calls the piece **"this Data Note"**;
  the article XML tags it `research-article`. So: a **data note / descriptive methods report**
  on one database — not a primary study of a clinical effect, not a review, not a protocol,
  not a guideline.

### (b) The 36.4% and the two counts

Printed, and in the Results, not the abstract.

- Results, first paragraph: `"we were able to match 36.4% of patients within the database
  produced by current EMR software"` (fragment returned whole; the sentence continues past it).
- The two counts appear **only as Table 2 column headers**: `"Matched patients (n=5,807)"` and
  `"Unmatched patients (n=10,166)"`.

Arithmetic. 5,807 / (5,807 + 10,166) = 5,807 / 15,973 = **36.355%**, which rounds to 36.4%,
so the handed figure is consistent with the handed counts. But two things about how the paper
states it:

1. **The paper never prints 15,973**, and never prints the ratio in that form. The denominator
   is stated in words — "patients within the database produced by current EMR software" — and
   the total is only the implied sum of two Table 2 column headers. The fraction
   5,807/15,973 is the ledger author's arithmetic on the source's numbers, not a figure the
   source itself prints.
2. The 36.4% is the **percentage of patients in the new-software database that linked back**,
   i.e. a *linkage* proportion over patients. It is not a proportion of records, encounters,
   or any fact class.

### (c) Procedures and antibiotic prescriptions

Both printed, both in the Results.

- Procedures, Results (paragraph beginning "Next, we considered"):
  `"the years 2012 and 2013 contained 2-3 times more procedures recorded than subsequent
  years"` and `"no procedures were recorded before 2012"` (two fragments, each returned whole;
  they are separate statements, not spliced).
  Table 3 carries the per-year counts: **2009, 2010, 2011 = 0; 2012 = 17,171;
  2013 = 12,867; … 2019 = 761.**
  Note the comparator the author chose: 2–3× more **than subsequent years**, with zero
  before 2012. The handed phrasing "2-3 times higher in 2012-13 with none before 2012" keeps
  both halves and is faithful.
- Antibiotics, Results (paragraph after Table 2):
  `"475 prescriptions per year after vs. 1,601 prescriptions per year before the change"`
  (fragment returned whole). The source states the *after* value first; encounter volumes are
  described in the surrounding text as roughly the same across the change. The abstract does
  not carry either number.

### (d) The abandonment

The authors do not use the word "abandoned". What they print is a suitability verdict:

> **Reconstruction from 2 consecutive fragments, junction verified by the 3-word overlap
> "the DELPHI database":**
> "This inspection of data provenance and quality determined that the DELPHI database was not
> suitable to assess the impact of the CWC recommendations."

(Fragment 1, returned whole: `"This inspection of data provenance and quality determined that
the DELPHI database"`. Fragment 2, returned whole: `"the DELPHI database was not suitable to
assess the impact of the CWC recommendations."`)

The planned analysis is described in Background and Methods as an **interrupted time series**
over four Choosing Wisely Canada recommendations, five years either side of April 2014, with
the Pap-smear recommendation dropped for an unrelated billing change. The ITS was planned and
**not carried out**; the printed reason is the suitability verdict above, plus qualitative
statements such as the authors being `"not confident"` in the medication data (Results).
So: "abandoned" is a fair gloss of what happened, but it is the ledger's word, not the
paper's, and the paper's own sentence is about the database's *suitability for the CWC
question*, not about the ITS method.

### (e) Regime, in one line

Nearly **65,000** consenting primary-care patients in the DELPHI research database (launched
2004), contributed by **60 practitioners at 18 practice sites** in **Southwestern Ontario,
Canada**; an **unnamed** EMR software change during **2012 and 2013** (the old and new products
are not named for DELPHI — Accuro, Med Access and PS Suite appear in the Introduction only as
general Canadian examples); data inspected **January 2009 to March 2019**; and yes — the
authors worked inside a **de-identified research extract**, not the live clinical systems: the
database `"stores deidentified records of nearly 65,000 primary care patients"` and records are
`"extracted on a regular basis"` (both fragments returned whole, Methods). Ethics Project ID
108976.

### (f) Probabilistic linkage, no common identifier

> **Reconstruction from 2 consecutive fragments, junction verified by the 3-word overlap
> "we conducted probabilistic":**
> "No common unique identifier existed between software; as such, we conducted probabilistic
> matching based on patient characteristics."

(Fragment 1: `"No common unique identifier existed between software; as such, we conducted
probabilistic"`. Fragment 2: `"we conducted probabilistic matching based on patient
characteristics."`)

The Methods sentence does **not** name the variables; the **Results** name them as age,
sex/gender, geographic region, and primary-care encounter date. No linkage weights, match
thresholds, clerical review, or sensitivity analysis on the match rule are reported.

### (g) What the paper actually measures — its estimand

**It does not measure, for any fact class, the fraction of the pre-cutover record that was
never brought into the new system.** No such quantity is printed, in the text, in Table 2 or
in Table 3. What it reports instead:

1. **A patient-level linkage proportion** (unit of analysis = patient): 36.4% of new-software
   patients matched to the old-software database under probabilistic matching on four
   attributes. Comparator: the old-software database. No estimand in the causal sense; no
   uncertainty interval.
2. **A descriptive matched-vs-unmatched comparison** (Table 2): mean age (SD), sex/gender,
   rural/urban, for matched (n=5,807) vs unmatched (n=10,166). Descriptive only.
3. **Annual record counts by data type** (Table 3 for procedures; narrative for antibiotic
   prescriptions and for laboratory volumes) — counts and per-year rates in the new-software
   database, with the discontinuity at the cutover pointed out in words.

So the paper **MEASURES** a linkage rate and prints per-year counts; it **DESCRIBES and
DIAGNOSES** migration damage qualitatively; it does **not** quantify a per-fact-class
non-migration fraction. That is a unit gap and a granularity gap at once: counts exist per data
type, but the non-migrated share does not exist at any grain.

### (h) Materiality bound, pre-registration, tests

None of the three. No threshold, materiality bound or acceptable-error criterion for calling
the data unusable is stated — the verdicts are qualitative ("not confident", "not suitable").
No pre-registration or protocol registration is mentioned; the only registration-like item is
ethics Project ID 108976. Table 2 carries means, SDs, counts and percentages with **no test
names and no p-values**.

## REGIME

The source establishes what it establishes in this regime: **one Canadian primary-care EMR
research database** (DELPHI, Southwestern Ontario), **~65,000 consented patients, 60
practitioners, 18 sites**, observed as a **de-identified periodic research extract** across
**one unnamed vendor-to-vendor EMR migration in 2012–2013**, over **2009–2019**, with the
unit of analysis being **the patient** for the linkage figure and **the record-year count**
for the volume figures. Its instrument for continuity is **probabilistic matching on four
weak attributes** (age, sex/gender, region, encounter date) because no shared identifier
existed. No threshold, no uncertainty, no test.

Sub-claims (a)–(f) sit inside that regime. Sub-claim (g) sits **outside** it: a per-fact-class
non-migration fraction is a different unit (records within a class, with the pre-cutover
record as denominator) measured by a different instrument (reconciliation against the source
system, which the authors never had — they were inside the extract). The source is **silent**
there, not supportive and not contrary.

## DEFECTS FOUND

1. **(g) is false as stated, and this is the one that bears on the novelty cap.** The paper
   does not measure the per-fact-class share of the pre-cutover record that never arrived. Its
   estimand is a patient-level linkage proportion plus descriptive per-year counts. Published
   is not performed: the migration damage is *diagnosed* and *illustrated*, never *quantified
   as a loss fraction*.
2. **The unmatched 10,166 are not non-migrated records.** Under probabilistic matching on four
   weak attributes with no common identifier, an unmatched patient may be a genuine new
   patient, a patient whose attributes changed, or a linkage failure — the paper itself reports
   no match-rule sensitivity analysis, so "unmatched" cannot be read as "the new system never
   received it". Any ledger sentence that treats 63.6% as data loss commits exactly this
   substitution.
3. **The 15,973 denominator and the ratio 5,807/15,973 are the ledger's arithmetic, not the
   paper's.** The paper prints 36.4%, and separately the two column headers. It never prints
   the total or the fraction in that form.
4. **(h) is false in the affirmative direction:** no materiality bound, no pre-registration,
   no significance testing. (And the paper's silence on a materiality bound is not the paper
   flagging a gap — it simply does not take that question up.)
5. **Front matter, minor.** The handed short form writes "Freeman TR" and "Lizotte DJ"; the
   article's own front matter prints **"Tom Freeman"** and **"Dan Lizotte"**, with no middle
   initials, and **"Jason Edward Black"** rather than "Black JE". The handed title also drops
   the expansion the title itself carries: the printed title is "…Lessons learned from the
   **Deliver Primary Healthcare Information (DELPHI)** database", not "…from the DELPHI
   database". Volume, issue, article number, year and DOI in the handed form are correct.
   There are no page numbers — IJPDS uses the article number 2177.
6. **(d) wording.** "Abandoned an interrupted time-series analysis" is a correct account of
   events but is not the paper's language, and the sentence usually quoted for it is a verdict
   on the database's suitability for the Choosing Wisely question, not on the ITS method.
   Quote it as the suitability sentence, not as an abandonment sentence.
7. **Type attribution.** The piece calls itself a "Data Note" in its Key Features and is
   tagged `research-article` in the XML; it is a single-database experience report. A finding
   cited from it is one database's provenance history, not a generalisable estimate.

## ROUTES THAT FAILED

- No host or route failed. The publisher HTML full text at
  `https://ijpds.org/index.php/ijpds/article/view/2177/4931` opened on the first attempt and
  served everything asked of it. doi.org, PMC and Europe PMC were not needed and not tried.
- One **prompt-level refusal**, recorded as instructed: the summariser declined a request to
  reproduce two whole sentences as numbered consecutive segments, citing the ~125-character
  quotation cap. Re-asking for short overlapping fragments, per the stated method, returned
  them; both affected sentences appear above as labelled 2-fragment reconstructions with the
  overlap named. No fetch, search or host was refused, and no route was worked around.
- Budget used: 1 search, 5 fetches (at cap).

## BEARING ON THE LEDGER ENTRY

The source is real, open, and says most of what the entry attributes to it — but **not the
part that sets the cap**. As the closest prior, Black et al. 2023 establishes that a
vendor-to-vendor EMR migration can silently deform a research extract, and it demonstrates
this with one linkage rate (36.4% of patients) and some per-year count discontinuities
(procedures 0 before 2012 then 17,171 and 12,867; antibiotics 1,601 → 475 per year at similar
encounter volumes). It does **not** produce a per-fact-class non-migration fraction, states no
materiality bound, pre-registers nothing, and performs no test — and its unmatched patients are
linkage failures under a four-attribute probabilistic rule, not records demonstrably never
received.

So this prior **does not cap** a candidate whose unit is "fraction of the pre-cutover record,
per fact class, absent from the post-cutover store", nor one that supplies a materiality
threshold or an auditable reconciliation against the source system. It **does cap** any
candidate whose novelty is merely "EMR software migrations damage longitudinal research data,
and you should check provenance before a time-series analysis" — that is precisely this paper's
stated lesson, and it should be cited as such, by its own numbers and in its own unit.

Record the entry's (b), (c), (e), (f) as confirmed; rewrite (d) to quote the suitability
sentence; strike (g) and (h); correct the front matter to the printed names and full title; and
stop describing the 10,166 unmatched patients as unmigrated records.
