# VERIFY - The entry cites the wrong resolution: CGPM 2022 Res 5 is about the second; UTC is Res 4, which sets no ceiling at all
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it: "That CGPM Resolution 5 (2022) sets a ceiling on |UT1-UTC| and that its
operative paragraphs neither address UTC-TAI nor explicitly say leap seconds cease."

Three separable assertions: (i) the document is Resolution 5 of the 27th CGPM (2022), "On the use
and future development of UTC"; (ii) it *sets a ceiling* on |UT1-UTC|; (iii) its operative
paragraphs are silent on UTC-TAI and on leap seconds ceasing.

Verdict in one line: (i) is a MISCITATION - Resolution 5 (2022) is "On the future redefinition of
the second"; the UTC resolution is **Resolution 4** of the 27th CGPM (2022). (ii) is FALSE of both:
Resolution 4 *defers* the maximum value, it does not set one, and the 3,600 s figure appears
nowhere in it. (iii) HOLDS, verbatim and for the right document.

## READ LEVEL

1. **Resolution 4 of the 27th CGPM (2022), "On the use and future development of UTC"**, BIPM,
   DOI https://www.doi.org/10.59161/CGPM2022RES4E, served from
   https://www.bipm.org/en/cgpm-2022/resolution-4
   - **Operative part: FULL TEXT**, as a RECONSTRUCTION from **12 ordered consecutive fragments**
     returned by the summariser under its ~125-character quotation cap. Junctions verified; no
     fragment completed by inference. Fragments 3, 5, 8, 10-12 begin with a space so that
     concatenation reproduces the text exactly.
   - **Preamble: PARTIAL** - returned to me in summary, not verbatim. I did not spend a fetch
     reconstructing recitals, because the claim is about operative paragraphs.
2. **Resolution 5 of the 27th CGPM (2022), "On the future redefinition of the second"**, BIPM,
   DOI https://www.doi.org/10.59161/CGPM2022RES5E, served from
   https://www.bipm.org/en/cgpm-2022/resolution-5
   - **PARTIAL**: title (front matter), recalling/noting recitals in summary, and the operative
     "encourages the CIPM" / "invites Member States" clauses in summary with short verbatim
     snippets. Sufficient to establish subject matter and to establish the absence of UTC
     operative content; NOT a verbatim read of its operative paragraphs.
3. **"Draft Resolutions - CGPM 2026"**, BIPM, https://www.bipm.org/documents/20126/284836054/CGPM-2026-Draft-Resolutions.pdf
   (version 4.0 of the served file), **Draft Resolution C "On the technical actions needed to ensure
   the continuity of UTC"**
   - **Operative part: FULL TEXT**, as a RECONSTRUCTION from **12 ordered consecutive fragments**.
     **Recitals: PARTIAL** (two recitals quoted in short form by the summariser).
4. **Decisions of the 115th meeting of the CIPM, Session I (2026)**, BIPM,
   https://www.bipm.org/documents/20126/288573692/CIPM2026-Session-I-Decisions-EN/b9584b8e-f856-efe8-c42d-7178ee819f3f
   - **PARTIAL**: Decisions CIPM/115-05 (2026) and CIPM/115-06 (2026) only.
5. **The official PDF of the 27th CGPM resolutions** (the entry's second cited route for the 2022
   resolution): **COULD NOT READ - not attempted.** Budget was spent on the per-resolution HTML
   (which carries the resolution DOI and served the verbatim operative text) and on the 2026
   material. This is a gap in my read, not a negative finding about the PDF.
6. **A CCTF report on Draft Resolution C** as a standalone document: **COULD NOT READ.** I reached
   the *CIPM decision endorsing* the CCTF's proposal, and the *draft resolution itself*, but not a
   CCTF report. Its silence is therefore not evidence in either direction; however, the two
   documents I did reach are the ones that would carry the operative statement, and see (e).

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The operative paragraphs, verbatim, in order, with the route

**Route:** WebFetch of https://www.bipm.org/en/cgpm-2022/resolution-4, with the prompt asking for
ordered consecutive fragments of at most 110 characters covering everything from "decides that"
onward. **This is of Resolution 4 (2022), not Resolution 5** - see DEFECTS FOUND.

RECONSTRUCTION from 12 consecutive fragments. Fragment boundaries shown as `|`:

> decides that the maximum value for the difference (UT1-UTC) will be increased in, or before, 2035,
> `|` requests that the CIPM consult with the ITU, and other organizations that may be impacted by
> this decision in `|` order to
> - `|` propose a new maximum value for the difference (UT1-UTC) that will ensure the continuity of
>   UTC for at least `|` a century,
> - `|` prepare a plan to implement by, or before, 2035 the proposed new maximum value for the
>   difference (UT1-UTC),
> - `|` propose a time period for the review by the CGPM of the new maximum value following its
>   implementation, so `|` that it can maintain control on the applicability and acceptability of
>   the value implemented,
> - `|` draft a resolution including these proposals for agreement at the 28th meeting of the CGPM
>   (2026),
>
> `|` encourages the BIPM to work with relevant organizations to identify the need for updates in
> the different `|` services that disseminate the value of the difference (UT1-UTC) and to ensure
> the correct understanding and `|` use of the new maximum value.

Three operative verbs, in order: **decides**, **requests**, **encourages**. The source renders the
four items under "in order to" as a bulleted list; the summariser stripped the bullet markers and I
have restored them as list structure, which is formatting, not wording.

**Grammar on both sides of the cut, checked.** The single most quotable string here -
"the maximum value for the difference (UT1-UTC) will be increased" - is *governed by* "decides
that" on the left and closed by "in, or before, 2035," on the right. Cut it short of "will be
increased in, or before, 2035" and it reads as a ceiling being fixed. It is not. The verb is
*increased*, with no value, at an outer date.

For Resolution 5 (2022), "On the future redefinition of the second", the operative clauses as
served (PARTIAL, summariser's rendering, short snippets verbatim) are that the CGPM **encourages**
the CIPM "to promote the importance of achieving the objectives in the roadmap for the redefinition
of the second" and "to bring proposals to the 28th meeting of the CGPM (2026) for the choice of the
preferred species", plus further steps for adoption at the 29th CGPM (2030), and **invites** Member
States "to support research activities, and the development of national and international
infrastructures". Nothing operative about UTC. The word "UTC" occurs in that resolution once, in a
*noting* recital, where the summariser reports the advances "will improve time scales, particularly
'Coordinated Universal Time (UTC)'".

### (b) Does it name a maximum value of |UT1-UTC|, or defer it?

**It DEFERS.** No numeric maximum appears anywhere in Resolution 4 (2022).

Deciding words, verbatim (fragment 1):

> decides that the maximum value for the difference (UT1-UTC) will be increased in, or before, 2035,

and the delegation, verbatim (fragments 4-5):

> propose a new maximum value for the difference (UT1-UTC) that will ensure the continuity of UTC
> for at least a century,

A clause that *requests the CIPM propose a new maximum value* is the opposite of a clause that sets
one. Resolution 4 fixes **when** (in, or before, 2035), **who** (CIPM, consulting ITU and others),
and **a design criterion** ("continuity of UTC for at least a century"). It fixes no number.

**On the 3,600 s figure the entry calls 'now in play'.** I asked explicitly. In Resolution 4 (2022)
the strings "3600", "3 600", "one hour" and "100 s" **do not appear**. The only numbers in it are
"0.9 seconds" - and that is in a *recital*, describing the existing ITU-R TF.460-6 practice of
applying a leap second when UT1-UTC is predicted to approach that value - plus "at least a century"
as the continuity goal, and the years 2035, 2026, 2018. **3,600 s is not in the 2022 resolution.
It enters only with the later proposal** - see (e).

### (c) Does any operative paragraph mention TAI-UTC, the leap count, or leap seconds ceasing?

**ABSENT, on all three, in the operative part of Resolution 4 (2022).** I checked the reconstructed
operative text above word by word. It contains:

- no occurrence of "TAI" at all - neither "TAI-UTC" nor "UTC-TAI";
- no occurrence of "leap second", singular or plural;
- no statement that leap seconds cease, stop, or are no longer inserted;
- no mention of a count, a number of seconds, an offset, or an integral number of seconds.

Every operative reference to a quantity is to "the difference (UT1-UTC)" - that phrase, five times.

TAI and leap seconds *are* discussed, but only in the **recitals** (read PARTIAL, in summary): that
UTC runs at the same rate as TAI but offset by an integer number of seconds; that a leap second is
applied under ITU-R TF.460-6 when UT1-UTC approaches 0.9 s; that leap-second discontinuities could
disrupt GNSS, telecommunications and energy systems; that operators insert leap seconds by
differing uncoordinated methods; and that recent Earth-rotation observations suggest a first
negative leap second may be needed, which has never been tested. None of that is operative, and
none of it says leap seconds will cease.

### (d) Does it name a date?

**Yes, three.** Verbatim from the operative part: **"in, or before, 2035,"** (the decides clause),
**"to implement by, or before, 2035"** (the plan), and **"the 28th meeting of the CGPM (2026),"**
(where the draft resolution is due). The preamble additionally cites the 26th CGPM (2018).

Note what kind of date 2035 is: an **outer bound on implementation**, not a scheduled date. And
see (e) - it has since been overtaken.

### (e) The CGPM-2026 Draft Resolution C material

I did not reach a CCTF *report*. I reached the two documents where the statement would live.

**Decisions of the 115th meeting of the CIPM, Session I (2026)**, Decision CIPM/115-05 (2026): the
CIPM endorses the CCTF's proposal to update **Draft Resolution C "On the technical actions needed
to ensure the continuity of UTC"** for the 28th CGPM, and the update **"fixes 20 May 2027 as the
implementation date of the new maximum value"**. That document states no value, and says nothing
about UTC-TAI, TAI-UTC, or the offset or leap count being frozen.

**Draft Resolution C itself**, from the served "Draft Resolutions - CGPM 2026" PDF (version 4.0).
Operative part, RECONSTRUCTION from 12 consecutive fragments, boundaries as `|`:

> decides that `|` continuous UTC will become effective on 20 May 2027, `|` the maximum value for
> the difference |UT1-UTC| will be 3 600 seconds (1 hour), ensuring the `|` long-term continuity
> for UTC for several centuries, requests the BIPM to continue to collaborate `|` with the
> International Telecommunication Union (ITU), International `|` Astronomical Union (IAU),
> International Union of Geodesy and Geophysics (IUGG), IERS, and other `|` organizations that may
> be impacted by this decision in order to
> - `|` inform users and support the application of this decision,
> - `|` continue to monitor the value of UT1-UTC, its estimated evolution and modelling as
>   determined by the IERS,
> - `|` inform the CIPM regularly on the evolution of the value of UT1-UTC,
> - `|` and to continue to work with the Regional Metrology Organizations, the NMIs, and users to
>   promote `|` the understanding of the importance of a continuous UTC and its prompt and
>   efficient provision to the users.

**So: the answer to (e) is NO.** Draft Resolution C states nothing explicit about UTC-TAI under a
continuous UTC. It does not use the string "UTC-TAI" or "TAI-UTC" anywhere. Its operative part says
nothing about the offset becoming constant or the leap-second count being frozen. The only mention
of TAI is a **recital** (read PARTIAL), which as served states that UTC differs **"from TAI only by
an integral number of seconds"** - a statement of the existing relation, carrying no claim that the
integer stops changing.

It also does **not** say leap seconds cease. The nearest language is a **recital**, not a decision,
that industrial users require UTC **"to be continuous without any future adjustment."** Per the
hedged-formulation rule, that is the formulation to quote: it is a *stated user requirement*
attributed to users, not an operative decision about leap seconds.

**PUBLISHED IS NOT PERFORMED, on the 3,600 s.** The number is printed in Draft Resolution C's
operative "decides that" clause, in the sentence **"the maximum value for the difference |UT1-UTC|
will be 3 600 seconds (1 hour)"**. Units: seconds, written with a thin-space thousands separator -
the unspaced form "3600" does not appear, nor does the lower-case phrase "one hour"; the source
writes "(1 hour)". This document **DECIDES a BOUND**; it measures nothing. A ceiling is not an
evaluation.

**Numerator class and denominator, both directions.** What is bounded is "the difference |UT1-UTC|"
- the magnitude of the offset between UT1 (Earth-rotation time) and UTC, taken in absolute value,
with the bound being a maximum excursion rather than an observed value. What is *not* bounded, and
is the near neighbour it must be checked against, is **TAI-UTC**: the integral-second offset between
atomic time and UTC, which is a running count, not an Earth-rotation discrepancy. The two quantities
share a term - UTC - and nothing else. What the source's class **misses**: any statement of the
value, behaviour, or constancy of TAI-UTC; the quantity never appears. What the source's class
**includes that a TAI-UTC claim excludes**: the entire Earth-rotation residual, which depends on
IERS-determined length-of-day variations and which the resolution explicitly asks the BIPM to
"continue to monitor". A 3,600 s ceiling on |UT1-UTC| is one word away from, and a different
quantity than, any figure about TAI-UTC.

## REGIME

**Resolution 4 of the 27th CGPM (2022)**, in its own words: it is addressed to the CIPM, the ITU
"and other organizations that may be impacted by this decision", and to the BIPM; its unit of
analysis is "the difference (UT1-UTC)"; its operating condition is the interval up to "in, or
before, 2035"; its instrument is a request for a *proposal* plus a *plan*, to be settled by a
"resolution including these proposals for agreement at the 28th meeting of the CGPM (2026)". Its
threshold is unspecified by design - that is the thing being delegated.

Does the claim sit inside that regime? **Only in part.** The claim's silence half (iii) sits
squarely inside: the operative text is about UT1-UTC and nothing else. The claim's ceiling half
(ii) sits **outside**: the 2022 resolution is a mandate to propose a ceiling, so a claim that it
*sets* one asks the document for something it explicitly declines to do.

**Resolution 5 of the 27th CGPM (2022)** regime: redefinition of the SI second; unit of analysis
the caesium frequency and candidate optical species; actors CIPM and Member States; horizon the
28th CGPM (2026) for the preferred species and the 29th CGPM (2030) for adoption steps. The claim
does not sit inside this regime at all; it concerns a different resolution.

**Draft Resolution C, CGPM 2026** regime: a *draft*, not an adopted resolution, carried in the
served "Draft Resolutions - CGPM 2026" PDF at version 4.0 and endorsed for update by Decision
CIPM/115-05 (2026); it decides an effective date of 20 May 2027 and a maximum |UT1-UTC| of 3 600 s
"ensuring the long-term continuity for UTC for several centuries". Its unit of analysis is again
"the difference |UT1-UTC|" and "the value of UT1-UTC ... as determined by the IERS". A claim about
TAI-UTC or the leap count sits **outside** this regime: the quantity is not in the document.

## DEFECTS FOUND

1. **The entry cites the wrong resolution number.** "CGPM Resolution 5 (2022)" paired with the
   title "On the use and future development of UTC" does not exist. Resolution 5 of the 27th CGPM
   (2022) is **"On the future redefinition of the second"** (DOI 10.59161/CGPM2022RES5E). The
   resolution carrying the title the entry quotes is **Resolution 4 of the 27th CGPM (2022)**
   (DOI 10.59161/CGPM2022RES4E). The entry's own title string is the correct one; the number is
   wrong. Every downstream statement attributed to "Resolution 5" must be re-attributed to
   Resolution 4, and anyone who checked Resolution 5 by number would have found a document with no
   UTC operative content and concluded the entry was fabricating.
2. **"Sets a ceiling" is false of the 2022 resolution.** It is the central factual error. Resolution
   4 *defers*: "decides that the maximum value for the difference (UT1-UTC) will be increased in, or
   before, 2035," and "requests ... propose a new maximum value". No number is set. A reader of the
   entry would believe the 2022 CGPM fixed a bound; it fixed a deadline and a delegate.
3. **The 3,600 s figure is misattributed to 2022 by implication.** It is absent from Resolution 4.
   It appears in **CGPM-2026 Draft Resolution C**, a draft before the 28th CGPM, in the sentence
   "the maximum value for the difference |UT1-UTC| will be 3 600 seconds (1 hour)". The entry's
   phrase "now in play" is defensible; attaching the figure to the 2022 resolution is not.
4. **The entry's date is superseded and it does not say so.** 2035 is Resolution 4's outer bound.
   Draft Resolution C decides "continuous UTC will become effective on **20 May 2027**", and
   Decision CIPM/115-05 (2026) records that the update "fixes 20 May 2027 as the implementation
   date of the new maximum value". Anything in the entry reasoning from a 2035 horizon is working
   from a stale date.
5. **The entry's record of what was obtained is now wrong in the entry's favour and against it at
   once.** The note that "nobody obtained the operative paragraphs verbatim" is correct as a record
   of the batch, and I have now obtained them for both documents. They refute assertion (ii) and
   confirm assertion (iii).
6. **No defect in the silence half.** Assertion (iii) is confirmed verbatim, and confirmed a second
   time against the newer document: neither Resolution 4 (2022) nor Draft Resolution C mentions
   TAI-UTC or UTC-TAI anywhere, and neither says leap seconds cease. In Draft Resolution C the only
   TAI content is the recital that UTC differs "from TAI only by an integral number of seconds",
   and the only continuity-of-count-adjacent language is the recital that industrial users require
   UTC "to be continuous without any future adjustment" - a user requirement, not a decision.

## ROUTES THAT FAILED

None failed. All five fetches returned. Routes used, in order:

1. https://www.bipm.org/en/cgpm-2022/resolution-5 - returned, and returned the *wrong subject*,
   which is the finding, not a failure.
2. https://www.bipm.org/en/cgpm-2022/resolution-4 - returned (summary).
3. https://www.bipm.org/en/cgpm-2022/resolution-4 - returned (12-fragment verbatim operative part).
   Note the 15-minute per-URL WebFetch cache did not block a second differently-prompted call.
4. CIPM 2026 Session I Decisions (EN) - returned.
5. CGPM-2026 Draft Resolutions PDF, version 4.0 - returned; the PDF parsed and Draft Resolution C
   was located and transcribed in fragments.

Searches: 2 of 2. Neither was refused by the classifier. The first ("CCTF report CGPM 2026 Draft
Resolution C ...") surfaced the CIPM decisions document; the second, domain-restricted to bipm.org,
surfaced the Draft Resolutions PDF.

**Not reached, and marked COULD NOT CHECK rather than treated as negative:** the official combined
PDF of the 27th CGPM resolutions (route 5 of the entry's citation); the French official text of
Resolution 4, which the BIPM page notes is the authoritative version; the verbatim recitals of
Resolution 4 and of Draft Resolution C; and any standalone CCTF *report* on Draft Resolution C.
Their silence proves nothing either way.

## BEARING ON THE LEDGER ENTRY

**The claim does not hold as written, and it fails in the half the entry treated as settled while
holding in the half the entry hoped a document would overturn.** That inverts the expected result.

**Strike the first half.** "Resolution 5 (2022) sets a ceiling on |UT1-UTC|" is wrong twice over -
wrong resolution number, and the right resolution sets no ceiling. Correct the entry to
**Resolution 4 of the 27th CGPM (2022)** and replace "sets a ceiling" with what the document does:
decides the maximum "will be increased in, or before, 2035" and requests the CIPM "propose a new
maximum value". Anywhere the entry pairs the 3,600 s figure with 2022, move it to **CGPM-2026 Draft
Resolution C**, which is where it is printed, and label it a draft before the 28th CGPM. Update
2035 to **20 May 2027**.

**Hold the second half, now on verbatim text and for two documents.** The operative paragraphs of
Resolution 4 (2022) contain no "TAI" at all and no "leap second", and do not say leap seconds
cease. Draft Resolution C likewise never writes "UTC-TAI" or "TAI-UTC" and never says the offset
becomes constant or the count is frozen.

**For leg (b) of the fatal attack specifically - the leg the entry says a document could overturn:
the documents did not overturn it, and they did not establish it either.** Leg (b) asserts that
under continuous UTC the leap count is frozen, so a 3,600 s ceiling never reaches a TAI-UTC field.
I can now report that the operative text of the document that actually sets 3,600 s bounds
**|UT1-UTC|** and says **nothing whatever** about TAI-UTC. So:

- The adversary's label on leg (b) is **confirmed as correct**: it remains the adversary's own
  inference from what "continuity" means. No operative paragraph in either document states it.
  Do not re-label leg (b) as document-supported.
- But the inference is **not contradicted** either. Nothing in either document says the count keeps
  changing. The entry should record leg (b) as an inference that survived a verbatim check of the
  only two documents that could have settled it, rather than as a gap awaiting a document.
- **Convert the entry's "a document could overturn this" note to a promotion condition** with a
  named target, because the two obvious targets are now exhausted: the condition should be that an
  operative paragraph, or an explicit statement in the CCTF's report to the 28th CGPM or in the ITU-R
  TF.460 successor, names TAI-UTC under continuous UTC. I did not reach a CCTF report, so that
  branch is COULD NOT CHECK and stays open; the CIPM decision and the draft resolution are now
  closed as sources of such a statement.
- **Narrow the quantity language throughout the entry.** The ceiling is on the magnitude of the
  Earth-rotation residual |UT1-UTC|, a quantity the resolution asks the BIPM to "continue to
  monitor ... as determined by the IERS". It is not a bound on the atomic-minus-civil integral
  offset TAI-UTC. Any step in the entry that slides from one to the other on the shared token "UTC"
  should be flagged, and leg (b) is precisely the step that does so - which is why it needs a
  document and does not have one.

One further caution for the entry's reader: Draft Resolution C is a **draft**, served at version
4.0 and endorsed for further update by Decision CIPM/115-05 (2026). Its 3,600 s and its 20 May 2027
are not yet adopted CGPM text. The entry should not grade anything as established CGPM policy on
the strength of it.
