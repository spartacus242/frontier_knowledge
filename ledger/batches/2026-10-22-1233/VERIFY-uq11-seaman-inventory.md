# VERIFY - Seaman's IRAF UTC inventory prints 1312/11,600 files and no representation-level quantity

Checker: fresh context. Budget used: 3 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That Seaman's IRAF UTC-dependency inventory prints 1312 of 11,600 files (about 11%) as containing
a UTC-related search term, and publishes no field width, no encoding, no maximum representable
offset and no failure share at any offset magnitude.

Verdict: **HOLDS**, with one word-level caveat on "maximum representable offset" (see DEFECTS) and
one correction to a secondary reading that is not the entry's (see DEFECTS, item 4).

## READ LEVEL

**FULL TEXT** of Rob Seaman, "An Inventory of UTC Dependencies for IRAF", arXiv:1112.0067 (2011),
via `https://arxiv.org/pdf/1112.0067` (three WebFetch passes through the summariser: one whole-paper
pass, one passage-targeted pass, one fragment-level pass for the load-bearing sentence). Front matter
and version history separately confirmed from `https://arxiv.org/abs/1112.0067`.

Qualification on the read, which matters for quotation discipline: the PDF was reached in full and
every section was served, but **the summariser caps verbatim quotation at roughly 125 characters and
twice refused to return long consecutive segments** ("I can't reproduce these passages verbatim in
consecutive segments, since that would rebuild most of the article"). So the section headings, the
Table 1 row counts and the narrative content below are a full read; the quotations are short served
fragments. The one sentence the ledger turns on was therefore re-requested as two consecutive
sub-125-character fragments and is labelled a two-fragment reconstruction below. No string anywhere
in this note was completed by inference.

Citations on the page: arXiv:1112.0067, v1 only, submitted 2011-12-01. Subjects astro-ph.IM, cs.SE.
**No DOI and no journal reference are listed**, so there is no DOI to record for this source.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The sentence carrying 1312 and 11,600, and where it sits

The two numbers are **not in the same sentence**. The entry's phrasing ("prints 1312 of 11,600")
is a correct statement of the pair, but the pair is assembled from a sentence and a table caption.

The 1312 sentence - RECONSTRUCTION FROM 2 CONSECUTIVE FRAGMENTS, junction verified at
"...search terms" / ", about 11%", no inferred characters:

> "There are 1312 total files that contain one or more of these search terms" + ", about 11% of the
> entire IRAF codebase (excluding documentation and other non-source files)."

Where it sits: section **"A BRIEF UTC INVENTORY OF IRAF"**, in the first paragraph after the lists
of search terms. The grammar on both sides of the cut was checked. The preceding sentence points at
Table 1 and concedes the final inventory may need additional terms; the following sentence opens the
Y2K comparison (~124 files). So the clause on either side does not reverse the sentence - but note
what the surround does do: the number arrives flanked by a caveat that the term list is incomplete
and by a comparison, not by any verification step.

The 11,600 appears in the **Table 1 caption**:

> "The total number of source files searched is about 11,600."

and again as Table 1's final row, which the first pass served as: Total | 1312 (out of 11,600).

### (b) Unit of analysis and endpoint, in the paper's own words

**Unit: the file.** Table 1 counts, per the caption, the number of files in the IRAF core system
(including NOAO packages) containing each search term. Counting rules as served:

> "The total only counts a single time files that have hits from multiple terms."

> "Each term is case-independent and must occur at the beginning of a token."

**Endpoint: a file-count of candidates for review, not a defect count.** The caption's own endpoint
sentence is:

> "At least 11% of the IRAF source tree must be vetted for UTC dependencies."

and the relevance criterion is explicitly a judgement call, not a test:

> "A "good" hit is a file with a plausible connection to timekeeping."

> "this requires human review to comprehend the intent of the algorithms in each file."

The paper does **not** report how many of the 1312 files were actually inspected. (The "files that
were reviewed" phrasing in the paper attaches to the 1990s Y2K project, not to the UTC pass.) It also
concedes undercounting in the other direction:

> "there can be no guarantee that a particular module is secure from implicit dependencies."

Table 1's 16 rows, as served: UT 250; UTC 23; GMT 38; JD 158; MJD 63; LST 67; Second 857; Minute 66;
Hour 145; Day 156; Month 68; Year 100; Sidereal 20; Solar 65; Calendar 10; Clock 73; Total 1312
(out of 11,600). "date" and "time" were judged too general to use; "leap second" and "intercalary"
did not occur at all.

### (c) Field width, encoding, type, maximum representable offset, failure share - each separately

- **Field width: NOT PRINTED.** The only width discussion in the paper is the Y2K two-digit vs
  four-digit year, i.e. about the 1990s remediation, not a measurement of UTC-offset fields.
- **Encoding: NOT PRINTED.** ISO-8601 is named, but as a standard a *future* interface and
  fieldnames should follow - a recommendation, not a measured encoding census.
- **Type: NOT PRINTED.** No data type is reported for any time field.
- **Maximum representable offset: NOT PRINTED as a representation limit.** One number in this
  vicinity *is* printed and must be named so the entry is not over-credited: software that already
  carries a DUT1 correction would need to be "vetted for proper operation under values of DUT1"
  beyond **±0.9 s**. That is the bound the *current UTC standard* places on |DUT1|, cited as the
  threshold past which existing code is untested. It is not a measured maximum that any IRAF field,
  buffer or type can represent, and no artifact is characterised against it.
- **Share of artifacts failing at a stated offset magnitude: NOT PRINTED.** Nothing in the paper
  pairs a failure fraction with an offset magnitude. The ±0.9 s figure carries no associated failure
  share, and the 90% figure (below) carries no offset magnitude.

On the PUBLISHED-IS-NOT-PERFORMED test: for field width, encoding, type and per-offset failure
share the paper does not even bound or predict the quantities - it **ANNOUNCES the need to measure
them** ("must be vetted"). For the maximum representable offset it **ANNOUNCES a threshold taken
from the UTC standard** (±0.9 s) and predicts that behaviour beyond it is unverified. No evaluation.

### (d) Y2K comparison

**Yes, the paper compares against the Y2K inventory**, and the author states he was IRAF's Y2K lead
in the late 1990s. Printed Y2K figures:

- "roughly 124 files (including documentation), or less than 1% of the codebase"
- "Approximately two-thirds of the files surveyed required no changes"
- Y2K remediation at NOAO ran "for three calendar years, perhaps totaling 1.5-2.0 FTE-years overall
  at NOAO"
- global Y2K remediation cost "in excess of 300 billion U.S. dollars", citing Mitchell (2009)
- the paper's forward estimate for the UTC case: at least 3-5 FTE-years for the IRAF core system

Two comparative magnitudes are printed and they differ. The abstract's hedged form says the UTC
search found **"several times as many files"** as the Y2K inventory; the body says the UTC count is
roughly **ten times** the Y2K candidate count. Per the instruction to prefer the hedged formulation,
"several times as many files" is the one to quote.

### (e) Is the 90%-irrelevant scenario an estimate or a measurement?

**Neither. It is an explicit counterfactual, and it is the weakest of the three possible readings.**
As served:

> "Even if 90% of the files identified using the current UTC search terms were to turn out not to
> require direct modification, the remaining file count would still represent four times as many
> files as were modified for Y2K."

"Even if ... were to turn out not to" is a hypothetical robustness check on the author's own
conclusion, not his point estimate of the false-positive rate and certainly not a measurement. The
paper reports **no** measured false-positive rate: a review of a sample of files is mentioned, with
no numbers attached. So the ledger should not describe 90% as "the author's estimate" either - it is
a figure chosen to make the argument survive a bad case.

### (f) Regime in one line, and whether the candidate's frame sits inside it

See REGIME below. One line: **a 2011 lexical file-count census of the IRAF core source tree -
population ~11,600 source files, unit the file, instrument a case-independent token-initial match
against 16 timekeeping terms, threshold one-or-more occurrences counted once per file, category
"candidate requiring human vetting" rather than "confirmed defect"**. The candidate's frame sits
**OUTSIDE** it.

## REGIME

- **Population:** source files of "the IRAF core system (including NOAO packages)", ~11,600, as of
  late 2011. Explicitly **excludes** documentation and other non-source files. Also excludes the
  "many dozens" of external packages layered on IRAF by other projects, which the paper mentions but
  does not inventory.
- **Unit of analysis:** one file. Not a line, not a task, not a package, not a field. The paper
  prints **no line-of-code count and no task or package count**.
- **Operating condition:** static text search of a source tree at one moment. No execution, no test
  vector, no injected offset, no instrumented run.
- **Instrument:** a case-independent string match that "must occur at the beginning of a token",
  over 16 terms, de-duplicated to one hit per file.
- **Threshold:** one or more occurrences of any term. Relevance threshold for a "good" hit is
  "a plausible connection to timekeeping" - a human judgement the paper says has not yet been
  applied at scale.
- **Category:** files to be *vetted*. The caption's verb is "must be vetted"; the endpoint is an
  effort forecast (3-5 FTE-years), not a defect rate.

**Numerator class, with its exclusions:** files containing >=1 token-initial, case-insensitive match
to {UT, UTC, GMT, JD, MJD, DUT, LST, second, minute, hour, day, month, year, sidereal, solar,
calendar, clock}, counted once per file. Excluded by construction: "date" and "time" (judged too
general); "leap second" and "intercalary" (absent); everything outside the core tree + NOAO packages.

**Denominator, checked against its near neighbours:** ~11,600 = *source* files *searched* in the
core system + NOAO packages. It is **not** all IRAF files (documentation excluded), **not** the
IRAF ecosystem (external packages excluded), and **not** the denominator behind the Y2K "less than
1%" figure, which counted 124 files "including documentation" and so ran against a larger base.
So "about 11%" is 11% of the searched core source tree, not of IRAF as a shipped system.

**Overlap in both directions, between this class and "artifacts with a UTC dependency":**

- *What the source's class MISSES:* implicit dependencies the author concedes he cannot see ("no
  guarantee that a particular module is secure from implicit dependencies"); anything expressed only
  via "date"/"time" vocabulary, deliberately dropped; documentation, scripts and non-source files;
  all external layered packages; and any dependency with no lexical fingerprint at all (e.g. an
  arithmetic assumption about day length with no timekeeping word near it).
- *What the source's class INCLUDES that a UTC-dependency claim excludes:* every non-timekeeping use
  of a common English word at token start. This is not a marginal contaminant - **"Second" alone
  contributes 857 of the 1312 files, 65.3% of the total (YOUR OWN ARITHMETIC: 857/1312 = 0.653)**,
  and "day", "hour", "year", "month", "minute", "solar" and "clock" add 673 more raw hits before
  de-duplication. The author himself does not defend these as dependencies; that is precisely why
  the 90% counterfactual exists.

**Does the candidate's frame sit inside this regime?** No. Field width, encoding, type, maximum
representable offset, and failure share at a stated offset magnitude are all **representation-level
properties of individual artifacts evaluated under an applied offset**. Seaman's regime has no
artifact-level representation measurement and no applied offset of any magnitude - it is a lexical
file census whose own stated next step ("must be vetted", "requires human review") is the work the
candidate's quantities would belong to. A result proved under a file-count census is silent about
field widths, and this one is.

## DEFECTS FOUND

1. **The two numbers are not co-located.** 1312 is in a body sentence in "A BRIEF UTC INVENTORY OF
   IRAF"; 11,600 is in the Table 1 caption and the table's Total row. The entry's "1312 of 11,600"
   is substantively right but should not be presented as one printed sentence if the ledger ever
   quotes it as such.

2. **"No maximum representable offset" is one word away from something the paper does print.** The
   paper prints **±0.9 s** as the DUT1 bound past which existing code is unvetted. The entry's claim
   survives - that is a standards-derived threshold for *future* vetting, not a measured
   representation limit of any field or type, and no artifact is characterised against it - but the
   ledger should carry the ±0.9 s figure explicitly rather than assert bare silence, or a reader
   with the PDF open will think the claim was made without reading it.

3. **"Prints no failure share at any offset magnitude" is correct, and the 90% figure is the thing
   most likely to be mistaken for one.** It is not a failure share: it is a hypothetical
   false-positive rate with no offset magnitude attached. If the entry anywhere describes 90% as the
   author's estimate, that should be softened to the counterfactual ("Even if 90% ... were to turn
   out not to require direct modification").

4. **A correction to an arithmetic objection that is *not* the entry's, recorded so the entry is not
   later weakened by it.** It is tempting to read the 90% sentence as internally inconsistent: 10% of
   1312 is ~131, against ~124 Y2K files, which is ~1x and not "four times". But the sentence's
   denominator is files **"modified for Y2K"**, not files in the Y2K inventory, and the paper
   separately prints that "[a]pproximately two-thirds of the files surveyed required no changes" -
   so files modified is about one third of 124, i.e. **~41, giving 131/41 = 3.2x** (YOUR OWN
   ARITHMETIC, from two printed figures each given as approximate - "roughly 124", "approximately
   two-thirds" - so the ratio inherits that imprecision and 3.2 is consistent with a stated "four
   times"). Likewise the apparent mismatch in "124 files ... less than 1% of the codebase" against
   124/11,600 = 1.07% (YOUR OWN ARITHMETIC) is reconciled by the 124 counting documentation while
   the 11,600 excludes it, so the Y2K percentage runs against a larger base. **The paper is not
   demonstrably inconsistent on either point, and the ledger should not lean on a claim that it is.**

5. **Read-level honesty about the quotations.** No defect in the paper, a limit on this check: the
   summariser refused long consecutive verbatim segments twice, so apart from the fragment-level
   reconstruction of the 1312 sentence and the short caption/definition quotes, the section-by-section
   content above is a faithful full read rather than a verbatim transcript. Anyone wanting the full
   paragraphs verbatim needs the PDF itself, not this note.

## ROUTES THAT FAILED

None, in the sense of a host or transport failure. `https://arxiv.org/pdf/1112.0067` served the full
text on the first attempt, so the `arxiv.org/html/1112.0067v1` fallback named in the citation was
never needed. `https://arxiv.org/abs/1112.0067` served front matter and version history.

Two **tool-scoped refusals**, which are not host failures and not negative findings about the paper:
the summariser declined to return long consecutive verbatim passages (PASSAGES A-G as a block) and
declined to reproduce the abstract verbatim, in both cases citing its ~125-character quotation cap.
The 1312 sentence was recovered by re-requesting it as two sub-cap consecutive fragments.

No search classifier refusals: **zero searches were run**, since the citation located the document
directly. Budget remaining at exit: 2 WebFetch, 2 WebSearch.

## BEARING ON THE LEDGER ENTRY

**HOLD the entry, and hold Prior 1 and novelty Medium, with two wording repairs.**

On the half of the claim that grounds the prior: the inventory figure is real, printed, and reads as
the entry carries it. 1312, ~11%, ~11,600, Table 1 with 16 terms - all confirmed, and the entry's
"read in full" is corroborated by this independent full read.

On the half that grounds novelty: confirmed in all four limbs. No field width, no encoding, no type,
no per-offset failure share. The paper's unit is the file and its endpoint is "must be vetted" plus
an FTE-year forecast; it announces the need for exactly the measurement the candidate would supply
and does not perform it. The candidate's frame sits outside the paper's regime, so "nearest thing
anyone has published" and "does not publish the candidate's quantity" are both sustained - and the
*reason* is sharper than the entry states: Seaman's number is a lexical candidate count whose own
author says human review has not yet been applied, with 65.3% of it contributed by the single term
"Second". It is not a weaker measurement of the candidate's quantity; it is a different quantity, in
a different unit, at a prior stage of the same work.

Two repairs, neither of which changes the grade:

- **Narrow** the "no maximum representable offset" limb to name the ±0.9 s DUT1 threshold the paper
  does print, and say why it is not the quantity (standards bound for future vetting, no artifact
  characterised against it). Left bare, this limb is the one an informed critic can embarrass.
- **Narrow** any description of the 90% scenario to the counterfactual it is ("Even if 90% ... were
  to turn out not to"), not the author's estimate and not a measurement.

Nothing here converts to a promotion condition and nothing is struck or reversed. One addition worth
carrying in the entry's front matter: arXiv:1112.0067 is **v1 only, submitted 2011-12-01, with no
DOI and no journal reference**, so a DOI should not be sought or invented for it.
