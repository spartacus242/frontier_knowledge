# VERIFY — Halling et al. 2018, Biophys. Chem. 242:22–27, Table 3 (the 45%)

Checker: fresh context. Budget used: 2 searches of 6, 5 fetch calls of 5 (one of which, the
publisher page, returned nothing). No mcp__hearthbot__ tool called.

## CLAIM

That the ledger entry UQ-20261022-02's fatal row (attack 4, presupposition failure) rests on a
real printed number in this source: that Table 3 of Halling et al. 2018 prints that **45% of recent
SABIO-RK source papers report no enzyme concentration**, and that the paper additionally (i) prints
the string "STRENDA DB requires enzyme concentration (and also a statement on how this was
measured)", (ii) carries a kcat footnote reaching for "measured active site concentration in the
enzyme preparation used", and (iii) prints **no** active-fraction number — a definition plus a
compliance audit, not an evaluation.

Two earlier readers of the same candidate did not reach the rejection this number carries.

## READ LEVEL

**FULL TEXT** of the accepted author manuscript, at
`https://strathprints.strath.ac.uk/65415/1/Halling_etal_BC2018_An_empirical_analysis_of_enzyme_function_reporting.pdf`,
read through WebFetch (summariser-mediated) in four passes. Table 3, Table 1 and its footnote, the
selection sentences and the term searches were all read first-hand here.

**Front matter: read from api.crossref.org, NOT from the publisher page.** The publisher page
(sciencedirect.com) is `robots_disallowed` at this proxy and returned nothing — see ROUTES THAT
FAILED. Crossref (via WebFetch, which answered where curl is refused) gives:

- Authors in order: **Peter Halling; Paul F. Fitzpatrick; Frank M. Raushel; Johann Rohwer;
  Santiago Schnell; Ulrike Wittig; Roland Wohlgemuth; Carsten Kettner**
- Title: **"An empirical analysis of enzyme function reporting for experimental reproducibility:
  Missing/incomplete information in published papers"**
- Journal: **Biophysical Chemistry**; volume **242**; no issue number (special numbering "C");
  pages **22–27**; year **2018** (print issue November 2018)
- DOI: **10.1016/j.bpc.2018.08.004**

This matches, author for author, what adversary #3 took from the Strathprints record. The front
matter is therefore confirmed, but confirmed from Crossref, not from the publisher page as the
task asked — the publisher page could not be opened at all.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Table 3 and the 45% — read level: FULL TEXT. CONFIRMED, exactly as the entry prints it.

Caption as served: **"Table 3: Statistics for omissions based on recent papers used in SABIO-RK
database"**

The table as served, both columns, every row:

| Missing information | Found in papers (%) |
|---|---|
| No reaction pH | 4 |
| No temperature | 11 |
| States "room temperature" | 5 |
| No information on buffer | 3 |
| **No enzyme concentration** | **45** |
| No substrate concentrations | 11 |
| "Tris buffer" with no counter-ion stated | 22 |

**THE NUMBER, NAMED:** **45**, printed in Table 3, in the column headed **"Found in papers (%)"**,
against the row labelled **"No enzyme concentration"**.

**DENOMINATOR: 100 papers.** Because n = 100, the printed percentage and the paper count coincide:
45% = 45 papers. The source prints the percentage; the count of 45 papers is arithmetically
identical, not a conversion someone performed on it.

**What "recent" means, quoted as served** (reconstruction from 4 consecutive segments, verified by
junction overlap, from the note to Table 3):

1. "The 100 papers analysed for this table were all from one of the 10 journals most represented in the"
2. "SABIO-RK database (J Biol Chem, Biochemistry, Biochem J, Eur J Biochem, Biochim Biophys Acta,"
3. "Arch Biochem Biophys, J Bacteriol, FEBS Lett, Plant Physiol, Proc Natl Acad Sci U S A)."
4. "They are the 100 most recent (as of September 2017), with the earliest dating from 2008."

The Introduction states the same selection (reconstruction, 2 consecutive segments): "For this
purpose we have analysed the 100 most recent papers taken from the 10 journals that are" / "the
most common sources for this database."

So "recent" = **the 100 most recent as of September 2017, earliest 2008, drawn only from the ten
named journals that are SABIO-RK's most common sources.** Not the 100 most recent across the whole
database, and not a sample of the database at large.

Corroborating sentence in the text, verbatim: **"The most common omission is clearly the failure to
report the concentration of the enzyme used."**

### (b) What is actually being counted — read level: FULL TEXT.

The row label is **"No enzyme concentration"**, under a column headed **"Found in papers (%)"**, in
a table captioned **"Statistics for omissions based on recent papers used in SABIO-RK database"**.

So the counted item is the **absence of any stated enzyme concentration**. It is **not** active
enzyme concentration, **not** total protein specifically, and **not** a statement of the method
that produced the figure. The method-of-measurement requirement appears elsewhere in the paper
(see (c)) and is a *different* item from the Table 3 row. The entry's own characterisation — "a
requirement pitched at concentration rather than active concentration" — is correct for this row.

### (c) The STRENDA string — read level: FULL TEXT. Present verbatim, but MISLOCATED by the entry.

The string appears **once**, and it is **not** prose: it is a cell in the right-hand column of
**Table 1, against Paper 8** — i.e. an assessment note on one of the eleven individually audited
papers, not the paper's general statement of what STRENDA DB requires.

As served (2 consecutive segments): "STRENDA DB requires enzyme concentration" / " (and also a
statement on how this was measured)."

**Grammar on both sides of the cut.** The string is a complete sentence in itself, so the quotation
is not cut mid-clause. Its neighbours are **adjacent table cells in Paper 8's row block, not
running prose**: before it, "STRENDA DB requires concentrations for all assay" / " components as
well as a defined assay temperature"; after it, "STRENDA DB requires concentrations of all
substrates." Quoting it as the paper's definitional requirement therefore reads a per-paper audit
note as a general norm. The requirement it reports is real either way; its standing in the source
is lower than the entry implies.

### (d) The active-site footnote — read level: FULL TEXT. Present in full, but ATTRIBUTED TO A REVIEWER.

Location: **the footnote to Table 1**, labelled in the manuscript "Footnote to table".

Full footnote, **a reconstruction assembled from 8 ordered consecutive segments** (junction
overlaps verified; nothing completed by inference):

> "Footnote to table: A reviewer has pointed out that the IUBMB Recommendations for 'Symbolism and
> Terminology in Enzyme Kinetics (Recommendation 1981)'
> http://www.sbcs.qmul.ac.uk/iubmb/kinetics/index.html imply that kcat should only be used where it
> can be calculated using the measured active site concentration in the enzyme preparation used.
> This would imply that the presentation of results as kcat in papers 2, 3 ,4 and 8 is wrong. Since
> papers 2-4 do make clear the way protein concentration has been measured, their experiments are
> reproducible in this respect. However, their reported kcat values may only set a minimum for the
> true microscopic rate constant."

Two things the entry does not record:

1. **The attributing words are "A reviewer has pointed out that the IUBMB Recommendations ... imply".**
   The reach for measured active-site concentration is attributed to a *reviewer* citing *IUBMB
   1981*. It is not the authors' own requirement, and it is not a STRENDA DB requirement. (Per
   check (5): a finding attributed to someone else.)
2. **The footnote states a direction of bias with no magnitude:** "their reported kcat values may
   only set a minimum for the true microscopic rate constant." That is a one-sided, hedged,
   unquantified bound — the only place in the paper that gestures at the candidate's mechanism at
   all, and it carries no number.

### (e) PUBLISHED IS NOT PERFORMED — read level: FULL TEXT. NO active-fraction number anywhere.

Term search, each checked alone and unprimed:

| string | present? |
|---|---|
| "active site" | **once only** — the Table 1 footnote above |
| "active site concentration" | **once only** — same footnote |
| "active fraction" | absent |
| "actively folded" | absent |
| "catalytically competent" | absent |
| "specific activity" | absent |
| "active enzyme" | absent |

**The paper prints no number for the share of any enzyme preparation that is catalytically
competent or active-site-titratable — not in a table, not in a figure, not in a sentence.**

Which of the verbs applies: the paper does **not** measure, audit, bound, predict or even *define*
an active fraction. What it does is **report a normative requirement, at second hand** (a reviewer's
reading of IUBMB 1981 that kcat should be computed on measured active-site concentration) and
**state an unquantified direction of bias** ("may only set a minimum"). What it *audits* with
numbers is a different thing: the presence or absence of reporting items, enzyme concentration
among them. So: a compliance audit of a reporting item, plus a second-hand normative statement.
Not an evaluation of any active fraction.

### (f) Article type and who counted — read level: FULL TEXT.

**A primary empirical audit**, with a position-paper frame (it advocates STRENDA DB, and is
co-authored by the STRENDA/Beilstein coordinator and the SABIO-RK curator). Self-description: the
title's "An empirical analysis of enzyme function reporting for experimental reproducibility", and
in the text "We present a detailed examination of 11 recent papers."

**The count is the authors' own.** Two distinct audits, different methods and different samples:

- **Table 1 — 11 papers**, from two journals, each examined in detail against the STRENDA Reporting
  Guidelines. Selection: "Having arbitrarily chosen a recent date, we worked backwards to find all
  papers" and "No further selection was made." Listed anonymously by sequence number. Qualitative;
  **no counts or percentages**. Text: "all 11 papers were found to have some issues."
- **Table 3 — 100 papers**, the ten-journal SABIO-RK recency sample above, scored for omissions.
  This is the only table that prints prevalences, and the only source of the 45%.
- **Table 2** lists omissions in three papers the authors themselves co-authored (Cianci 2010,
  Hall 2010, Schäfer 2004) plus one row referring back to Table 1. **No denominator.**

No part of the counting is taken from another source.

## REGIME

**Population of the 45%:** the 100 most recent papers as of **September 2017** (earliest **2008**)
drawn **only from the ten journals that are SABIO-RK's most common source journals** (J Biol Chem,
Biochemistry, Biochem J, Eur J Biochem, Biochim Biophys Acta, Arch Biochem Biophys, J Bacteriol,
FEBS Lett, Plant Physiol, PNAS). It is **not** all SABIO-RK source papers, **not** a random sample
of the database, and **not** stratified or restricted by enzyme class.

**Unit of analysis:** the published paper — one paper, one observation.
**Endpoint:** presence/absence of a named reporting item in that paper.
**Comparator:** none. There is no control group, no time trend, no cross-journal contrast.
**Estimand:** a prevalence, printed as a percentage of the 100.
**Uncertainty:** none stated. No confidence interval, no inter-rater agreement, no statement of how
many assessors scored each paper.

**BY ENZYME FAMILY — the crux, and the answer is nothing.** The paper reports **no** breakdown of
reporting completeness by enzyme class, family or type. Table 1's eleven papers are listed
anonymously by number. The paper **never mentions** stoichiometric active-site titrants, titration
reagents, or whether any family can or cannot be titrated — the single occurrence of "active site"
is the reviewer footnote. So on the question of whether reporting is better or worse inside the
mechanistically best-studied, titratable families, **this source is silent, and its silence is not
a finding in either direction.**

Does the claim handed to me sit inside this regime? **The printed number does, exactly.** The
entry's fatal row uses the 45% as a statement about "recent SABIO-RK source papers", and the source
establishes it for a ten-journal recency window of SABIO-RK source papers — narrower than the
entry's shorthand, but the same corpus class, and the direction of the narrowing (the database's ten
most-represented journals, which are mainstream biochemistry journals) does not favour the
candidate. The entry's *transfer* of the 45% to the P3-constrained titratable-family subset is
**outside** this regime, and the entry already says so in its own vulnerability section. Verified
first-hand: that stated limit is accurate.

## DEFECTS FOUND

1. **SIGN INVERSION in the entry's own support text (material).** The entry's attack-4 row writes
   "and the protein-measurement method itself flagged as a deficiency in Papers 2-4 of the 11-paper
   STRENDA-assessed set." The source says the **opposite**: "Since papers 2-4 do make clear the way
   protein concentration has been measured, their experiments are reproducible in this respect."
   The footnote cites papers 2-4 as the case where the method *was* clear. This is a corroborating
   clause in the fatal row, not the load-bearing number, so it does not by itself move the verdict —
   but as written the entry misstates the source, and it misstates it in the direction that
   flatters the entry's own argument. **It must be struck or reversed.**
2. **MISSING ATTRIBUTION (per check 5).** The entry presents the active-site footnote as the paper
   "reaching for" measured active-site concentration. The source attributes it to "A reviewer
   [who] has pointed out that the IUBMB Recommendations ... imply". It is a reviewer's reading of a
   1981 IUBMB recommendation, not the authors' position and not a STRENDA requirement. Direction of
   effect: this makes the paper **weaker** as prior art on the candidate's axis, so correcting it
   does not threaten the rejection — but the entry's phrasing overstates the paper's own commitment.
3. **MISLOCATION.** The string "STRENDA DB requires enzyme concentration (and also a statement on
   how this was measured)" is a **Table 1 cell assessing Paper 8**, not a prose statement of the
   STRENDA DB requirement. The entry uses it as the paper's definitional reporting item. The string
   is verbatim and its clause is complete, so this is not a misquotation by cut — it is a
   misreading of where the sentence sits and what it is doing.
4. **REGIME DETAIL OMITTED.** The entry twice calls the population "the 100 most recent SABIO-RK
   source papers" / "recent SABIO-RK source papers". It omits (i) the restriction to the ten
   most-represented journals and (ii) the date window (2008 – September 2017). "The 100 most recent
   SABIO-RK source papers" reads as the 100 most recent across the whole database, which is not
   what the source sampled.
5. **TWO NON-COMPARABLE SAMPLES AGGREGATED.** The entry's Significance section says the paper
   "audits this exact reporting item across 111 papers". 100 + 11 = 111, but the two audits differ
   in journals, method and output: the 11-paper set is a qualitative STRENDA assessment from two
   journals with no percentages, and the 45% comes from the 100-paper set alone. "This exact
   reporting item ... across 111 papers" is not something the source supports.
6. **NOT a defect — confirmed.** The entry's claim that the paper prints **no** active-fraction
   number is correct, and stronger than the entry states: the paper does not even define one, and
   five of the six nearby terms do not occur at all. The entry's "granularity gap short of the
   candidate's grain, not a measurement of it" is an accurate reading of this source.
7. **NOT a defect — confirmed.** The entry's self-stated transfer limit (the 45% is general to
   recent SABIO-RK sources; the titratable-family subset may be better reported; magnitude
   unmeasured) is exactly right. The source prints no by-family breakdown and never mentions
   titratable families, so it neither supports nor refutes the transfer.
8. **Silence is not prohibition.** The source's failure to break results down by enzyme family is
   an absence of evidence about the candidate's subset, not evidence that the subset reports no
   better. Nothing here licenses treating 45% as the rate inside the candidate's population.

## ROUTES THAT FAILED

- **curl to strathprints.strath.ac.uk (the PDF):** `curl: (56) CONNECT tunnel failed, response 403`,
  zero bytes. Tool-scoped, as the routing note predicts — the same file then opened through
  WebFetch four times. Not a host block.
- **WebFetch `https://www.sciencedirect.com/science/article/pii/S0301462218303247`:**
  `robots_disallowed`, nothing of the page retrieved. **COULD NOT READ the publisher page** — this
  is a could-not-read, not a not-found; the article exists there. Consequence: front matter was
  taken from api.crossref.org instead of the publisher page, contrary to the task's instruction,
  and that substitution is flagged under READ LEVEL.
- **PMC / Europe PMC:** not attempted. PMC6258184 exists for this paper and is an identifier to
  convert, never a route to try, per the routing note (reCAPTCHA / HTTP 429 do-not-retry).
- No fetch or search was refused for content reasons. No personal identifier was placed in any URL,
  query, header or form; Unpaywall was not used.

## BEARING ON THE LEDGER ENTRY

**The load-bearing leg holds, and holds exactly as printed.** Table 3 of Halling et al. 2018 prints
**45** in the column "Found in papers (%)" against the row "No enzyme concentration", over a
denominator of **100 papers**, and the text calls that omission "clearly" the most common. The
entry quoted the number, the column heading and the row label correctly, and located them in the
right table. UQ-20261022-02's fatal row (attack 4, presupposition failure) therefore rests on a
real, open, correctly-read published number, in the candidate's own corpus class. The two earlier
readers who did not reach the rejection did not open this source; this check does not vindicate
them.

Four things in the entry around that number need correction, none of which restores the candidate:

- Strike or reverse the clause "the protein-measurement method itself flagged as a deficiency in
  Papers 2-4" — the source says papers 2-4 *did* make the method clear (defect 1).
- Add the attribution: the active-site-concentration reach is a **reviewer's** point citing IUBMB
  1981, not the paper's own requirement (defect 2). This *widens* the gap between this source and
  the candidate.
- Say that the STRENDA-requires-enzyme-concentration string is a Table 1 cell about one audited
  paper, not a prose norm (defect 3).
- Qualify the population as **the 100 most recent (Sept 2017, earliest 2008) from SABIO-RK's ten
  most-represented journals**, not "the 100 most recent SABIO-RK source papers" (defect 4); and
  stop saying "across 111 papers" (defect 5).

On novelty, this source is **not** prior art on either limb of the candidate, and this check makes
that firmer rather than weaker: the paper prints no active-fraction number, defines none, and the
only mention of active-site concentration in it is a hedged, unquantified, second-hand normative
aside whose own conclusion is merely that reported kcat "may only set a minimum for the true
microscopic rate constant."

The entry's own named vulnerability is confirmed verbatim: **the by-family rate is unmeasured
here.** The paper reports nothing by enzyme class, family or type, and never mentions stoichiometric
active-site titrants. So the step from 45% in a general ten-journal sample to the reporting rate
inside the P3-constrained titratable families remains the adversary's inference, not this source's
finding — and the "100-paper SABIO-RK source list and per-paper breakdown" the entry names as the
single unopened source that could settle it is indeed not in this manuscript: the 100 papers are
never listed, only counted.
