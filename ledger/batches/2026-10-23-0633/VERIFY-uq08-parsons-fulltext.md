# VERIFY - Parsons 2001 open-vs-blind blood lead PT: does it print the signed arm difference?
Checker: fresh context. Budget used: 8 WebFetch, 2 WebSearch (1 search unspent; fetch budget exhausted). Date 2026-10-23.

## CLAIM

UQ-20261023-08, THE KILL leg: that Parsons et al. 2001 prints the candidate's primary
estimand - the signed difference between a laboratory's error rate on DECLARED EQA samples
and its error rate on identical material submitted BLIND through the routine patient
workflow - with units and denominators, on the candidate's unit, endpoint, comparator and
sign, in accredited clinical laboratories, with the same pairing and submission design.

Note the logical form of the leg I am checking: it is an EXISTENCE claim about what a
document prints. Per the instance-it rule I name below exactly what I opened, and I do not
write it as established or as refuted from a search's silence.

## READ LEVEL

**ABSTRACT ONLY**, plus front matter. One source (one document, one author group).

Parsons P.J. et al., Clin Chem 2001;47(2):322-330, DOI 10.1093/clinchem/47.2.322,
PMID 11159782.

What I reached:
- academic.oup.com **article-abstract** page (reached by following the 302 from doi.org):
  complete front matter + the structured abstract, served as summary with short verbatim
  quotes. Paywalled below the abstract: the page states the full article is available only
  to subscribers.
- scholarlyworks.lvhn.org/pediatrics/777 - an **institutional-repository METADATA record**
  (Lehigh Valley Health Network, for co-author Esernio-Jenssen). Front matter + the
  structured abstract, but **the served abstract is truncated mid-Results at "(P"**. No PDF
  attached in what was served; it links out to PubMed only.
- dbpia.nl.go.kr mirror of the same OUP item: **abstract only**, confirmed by direct
  question. It is a mirror of the same page, not an independent read.

What I did NOT reach: **Materials and Methods, Results body, and every table and figure.**
I never saw a clean full text.

**Why**: the publisher route is genuinely paywalled - that is a property of the source. But
no repository or author copy was tried to exhaustion, and my **fetch budget ran out** before
I could try one. Per the budget rule: sub-claims (c) in part, (d) in part, and (g) in whole
are **COULD NOT CHECK**, and that is a fact about my read, not a finding about the paper.
I also wasted one fetch on a guessed OUP article id (5639880) that resolved to an unrelated
2004 book review - my error, logged below.

I state plainly: **I ran no full-text keyword sweep of any kind**, because I had no full
text to sweep. So nothing below may be read as "term X does not appear in the paper."

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Front matter - CONFIRMED, from the OUP front matter itself

Printed author order, full given names as the front matter prints them:

> Patrick J Parsons, Andrew A Reilly, Debra Esernio-Jenssen, Lloyd N Werk,
> Howard C Mofenson, Noel V Stanton, Thomas D Matte

Title: *Evaluation of Blood Lead Proficiency Testing: Comparison of Open and Blind
Paradigms*. Clinical Chemistry, Volume 47, Issue 2, pages 322-330, published 1 February
2001. DOI 10.1093/clinchem/47.2.322. PMID 11159782.

The LVHN record prints the same seven names in the same order. **No correction of substance
to the entry's citation.** The entry carries initials-only forms (Parsons P.J., Reilly A.A.,
...); the front matter prints full given names. Order, count, title, journal, volume, issue,
pages, year and DOI in the entry are all correct as carried.

### (c) THE ARM CONTRAST - the abstract prints TWO RATES AND A P VALUE, not a signed difference

The load-bearing sentence, as served:

> "We found that 17.7% of all blind PT results were classified as unacceptable compared
> with only 4.5% of open PT results"

followed by "(P" in the LVHN serving, which truncated there; the OUP serving reports the
test as **P <0.001**.

Scope-setting check on this quotation. Its opening words are "We found that" - the clause
**ASSERTS** the quantity (it does not deny it or record a move away from it). But the words
that scope the denominator are "of **all blind PT results**" / "of **open PT results**": the
population is the **pooled set of individual PT results**, not a laboratory.

- **Numerator class**: results "classified as unacceptable" against the CLIA '88 criterion,
  quoted as served: "+/- 0.19 umol/L (+/- 4 ug/dL) or +/- 10%, whichever is greater". The
  **exclusions are not readable** - that definition lives in Methods, which I did not open.
  So I cannot write out the numerator class with its exclusions as the rule requires, and I
  say so rather than supplying one.
- **Denominator**: "all blind PT results" and "open PT results". **No N is printed in the
  abstract** - not a count of blind results, not a count of open results, not a count of
  aliquots per laboratory.
- **Signed difference**: 17.7% - 4.5% = **13.2 percentage points. THIS IS MY OWN ARITHMETIC,
  NOT A PRINTED FIGURE.** The abstract does not print it. It carries no stated uncertainty
  on either rate, so I can carry none through.

The paper does print a **laboratory-level contrast, but as a count of significance verdicts
rather than as a signed quantity**:

> "13 of 22 laboratories (60%) exhibited a statistically significant difference"

between blind and open performance in phase 1; and, per the OUP serving, seven laboratories
met the aggregate acceptability threshold under open testing but not under blind, two of
those with gross discrepancies that prompted further investigation.

Logical-form check on "13 of 22 laboratories (60%)": this is a **count of laboratories whose
paired open-vs-blind difference passed a significance test**. It is not a signed difference,
not a mean signed difference, and it carries no magnitude and no units. It establishes
**that** a per-laboratory paired contrast was computed; it does not show that its **value**
was printed.

**Whether the Results tables print per-laboratory signed differences with denominators is
COULD NOT CHECK.** A paper with this design plausibly does. I can neither rule it in nor
rule it out, and I decline to do either from the abstract's silence.

### (d) THE SUBMISSION DESIGN - asserted in the abstract, mechanism unreadable

Methods, as served:

> aliquots from up to 72 blood lead performance pools were **"disguised as routine patient
> specimens"** and submitted in two phases to up to 42 certified laboratories

and

> "The same laboratories also received the samples through the open program."

The abstract's Background calls the comparator **"double-blind testing"**, against an open
design "where performance samples are identified and shipped on an announced schedule".
Scope check on that Background sentence: its opening words are "Most proficiency testing
programs ...", which scope a **background generalization about PT programs**; the next
clause ("This study compares open testing with double-blind testing for blood lead")
**ASSERTS** that this study performs the comparison.

So: **the paired-on-identical-material design and the disguise-as-routine-patient-specimens
arm are both asserted in the abstract**, and on that much the candidate's design is matched.
What is **NOT** readable is the clause the candidate's design actually turns on: who
submitted the specimens, under what requisition, whether they entered accessioning and the
routine patient workstream indistinguishably, or whether a courier/collaborating-clinic
route differed from a true walk-in patient specimen. "Disguised as routine patient
specimens" is the authors' own characterization, not a procedural description.
**PARTIAL / COULD NOT CHECK on the mechanism.**

### (e) THE POPULATION - the entry's "42" verified, but the entry drops a hedge

Printed as **"up to 42 certified laboratories"**. The entry carries "42 blood-lead-certified
laboratories" and **drops "up to"**. Per the hedged-formulation rule, the hedged form is the
one to carry: *up to* 42, with phase 1 analysed on **22** laboratories.

They are clinical laboratories performing patient blood lead testing, "certified" - but the
abstract **does not name the certifying program** (CLIA, New York State permit, or both) and
**does not state the study years**. So "accredited clinical laboratories in the candidate's
sense" is **PARTLY verified**: clinical, certified, patient-testing - yes; the specific
accreditation and the years - not readable.

### (f) THE ANALYTE - ONE analyte

**Blood lead only.** Title, Background ("for blood lead"), Methods ("blood lead performance
pools"). There is no second analyte anywhere in the served abstract. The candidate declares
a **multi-analyte set**. This is a clean, checkable mismatch and it does not depend on my
read level.

### (g) BIAS / IMPRECISION as separate estimands, and a CONCEALMENT AUDIT

**COULD NOT CHECK - both.** Neither appears in the served abstract, and the abstract is all
I opened. I explicitly refuse to record this as absence: the design (multiple aliquots of up
to 72 pools per laboratory, scored against a two-sided +/- criterion) is precisely the design
that **would** support a bias/imprecision decomposition, so a Results table doing exactly
that is entirely plausible and unopened.

On concealment, note what the abstract does instead: its Conclusions state

> "About 60% of laboratories make special efforts on open samples"

which is **an inference the authors draw from the observed performance gap** (it tracks
13/22 = 59%), **not the report of an audit** asking laboratories whether they spotted the
blind specimens. Whether a concealment audit exists in Methods is unread.

### Modality and logical form of the Conclusions - this cuts against the entry

> "in most cases the differences are clinically insignificant and would not likely affect
> cumulative PT performance"

> "Occasional use of blind PT **may** deter the inclination to treat performance samples
> more carefully."

Both are the **hedged** formulations and both are the ones to carry. The second is a
**possibility claim ("may")**, not an assertion of effect; read as an assertion it would be
a modality error of exactly the kind this ledger has already shipped once. The first is
scoped by "in most cases" and **qualifies the magnitude** of the very gap the entry's kill
leans on: the authors themselves say the open/blind differences are mostly clinically
insignificant. A reader who cites the 17.7%-vs-4.5% gap as a clean large arm effect is
citing past the authors' own hedge.

## REGIME

In the source's own words, as served: **population** - up to 42 certified clinical
laboratories performing blood lead testing (phase 1 analysed n=22); **unit of analysis** -
the individual **PT result** for the 17.7%/4.5% rates, with a secondary **laboratory**-level
unit used only for counts of significance verdicts and of aggregate-threshold failures;
**operating condition** - open PT (samples "identified and shipped on an announced
schedule") versus double-blind PT (same pools, "disguised as routine patient specimens"),
run in two phases; **instrument** - not stated in the abstract (blood lead is measured by
GFAAS, ASV or ICP-MS and the mix is unreadable); **threshold / category** - binary
acceptable/unacceptable against CLIA '88, "+/- 0.19 umol/L (+/- 4 ug/dL) or +/- 10%,
whichever is greater"; **analyte** - blood lead, single.

**Is the candidate inside it?** Mixed, and the failures are on conjuncts I can check:
- Pairing and arm structure: **INSIDE**. Same laboratories, identical material, declared
  arm and blind arm.
- Submission design: **INSIDE as characterized** ("disguised as routine patient specimens"),
  mechanism unverified.
- Unit: **OUTSIDE as printed**. The candidate's estimand is *a laboratory's* error rate
  difference; the printed rates are pooled result-level. Overlap in both directions: the
  paper's class **MISSES** the laboratory as the unit (it gives no per-lab signed rate gap
  at the read level I reached) and **INCLUDES** every individual aliquot result across all
  labs and both phases pooled, which a laboratory-level estimand excludes.
- Analyte: **OUTSIDE**. One analyte versus the candidate's declared multi-analyte set.
- Denominators: **NOT PRINTED** at abstract level, so "with units and denominators" is
  unmet on the evidence reached.

## DEFECTS FOUND

1. **The entry's kill is stated as an existence claim about a printed quantity, and the
   quantity is not printed where anyone has looked.** INSTANCED, per the existence-claim
   rule: I opened the OUP article-abstract page, the LVHN repository metadata record, and
   the dbpia mirror. Over those instances the premise is **FALSE** - the two rates and a
   P value are printed; the signed difference with units and denominators is not. Over the
   full text, which **nobody in this record has opened** (the entry says three opens, all at
   abstract plus partial Methods/Results), the premise is **UNENUMERATED**. It is not
   refuted. It is unestablished.
2. **The signed difference the kill rests on is the reader's own subtraction.** 13.2
   percentage points is MY OWN ARITHMETIC and would be any reader's. The entry should not
   carry it as a printed figure.
3. **Unit substitution.** A pooled result-level unacceptability rate is being read as "a
   laboratory's error rate". These are different quantities one word apart, exactly the
   failure mode the numerator/denominator rule targets.
4. **Analyte mismatch, checkable and decisive on its own.** Single analyte (blood lead) vs
   a declared multi-analyte set. This defect survives any read level.
5. **A dropped hedge in the population figure.** "Up to 42 certified laboratories" carried
   as "42"; and phase 1, which supplies the only per-laboratory contrast, has 22.
6. **The authors' own hedge cuts against the entry's use of the gap**: "in most cases the
   differences are clinically insignificant". And the Conclusions' operative sentence is a
   **may** - a possibility claim, not an effect.
7. **The record's read level is overstated.** The entry logs "abstract plus partial
   Methods/Results". I reached **abstract only** in eight fetches including the publisher
   route the citation names. If a previous reader genuinely saw Methods or Results text,
   that route is not recorded and should be; if they did not, the entry's read level is
   inflated.
8. **Bias/imprecision and concealment audit are unread, not absent** (sub-claim g). No sweep
   ran because there was no text to sweep.

**What KIND of document could settle (c), (d) and (g)**, stated before I nominate anything:
only the **full published article body - its Materials and Methods and its Results tables**.
The publisher PDF of Clin Chem 47(2):322-330 at academic.oup.com **is** that kind of
document, and that is my nomination. By contrast,
`https://scholarlyworks.lvhn.org/pediatrics/777` is a **metadata record with a truncated
abstract and no attached PDF in what was served** - it is NOT the kind of document that
could settle this, and naming it as a lead would be a guess, so I am not naming it as one.
PubMed (PMID 11159782) is also the wrong kind: abstract-level by construction.

## ROUTES THAT FAILED

- `https://academic.oup.com/clinchem/article/47/2/322/5639880` - **my own error**, a guessed
  article id. Served a *different* paper: Remaley's 2004 book review, Clin Chem 50(7):1276,
  DOI 10.1373/clinchem.2003.021816. No error returned; it simply is not this article. One
  fetch wasted.
- `https://www.clinicalchemistry.org/content/47/2/322.full.pdf` - WebFetch error:
  `{"error_type":"SERVER_ERROR","source":"target","message":"There was an error while
  fetching."}`
- `https://doi.org/10.1093/clinchem/47.2.322` - **302 Found**, cross-host redirect returned
  not followed; Location: `academic.oup.com/clinchem/article-abstract/47/2/322/5639113
  ?redirectedFrom=fulltext`. Followed on the next call and it worked. Worth recording: the
  citation's own doi.org route **does** open in two calls. (Note the redirect lands on
  *article-abstract*, i.e. the publisher itself routes `fulltext` to the abstract.)
- `https://academic.oup.com/clinchem/article-abstract/47/2/322/5639113?redirectedFrom=fulltext`
  - **SUCCEEDED**, abstract + front matter. Paywalled below. A second call asking for the
  abstract as ordered consecutive verbatim segments was **declined by the summariser**
  ("I can't reproduce the full abstract verbatim"), so my quotations are the short fragments
  it did release, not a reconstruction. **I have assembled no reconstruction and completed
  no cut string by inference.**
- `https://dbpia.nl.go.kr/clinchem/article/47/2/322/5639113` - **SUCCEEDED** but abstract
  only; same underlying item, so **one document, not a second source**.
- `https://scholarlyworks.lvhn.org/pediatrics/777` - **SUCCEEDED**, metadata + abstract
  truncated mid-Results at "(P". No PDF.
- `https://pubmed.ncbi.nlm.nih.gov/11159782/` - **failed at its site (client_error)**,
  nothing retrieved.
- `https://corpora.tika.apache.org/base/docs/govdocs1/221/221454.pdf` - fetched; it is a
  **different Parsons document**: "Appendix C.1, The Lead Laboratory", Patrick J. Parsons and
  J. Julian Chisolm Jr. Surfaced on both searches on title keywords - a **title-keyword
  coincidence, counted as zero sources**, not corroboration.
- **Not tried, for want of fetches**: the OUP `article-pdf` route, a Wadsworth Center /
  NYSDOH author copy, and any other institutional mirror. **PMC and Europe PMC are
  hard-blocked here and were not attempted.**
- Searches: 2 of 3 used, both returned the same cluster of title matches (OUP, its dbpia
  mirror, the two LVHN records, CLSI C40 citing documents, the govdocs PDF). **Repeated
  title returns counted as title matches, never as corroboration.** The third search was
  left unspent deliberately: with zero fetches remaining, locating a further mirror could
  not have opened it.

## BEARING ON THE LEDGER ENTRY

**The kill weakens from a match to a near neighbour, and Gate 4 is incomplete.** But it is
weakened, not overturned, and the distinction matters.

What survives, and it is not trivial: Parsons et al. 2001 **is** a real paired open-versus-
blind study in certified clinical laboratories on identical material, with the blind arm
characterized in the authors' own words as "disguised as routine patient specimens", and it
**does** print two arm error rates and a significance verdict on the within-laboratory
contrast. On design and comparator the candidate is close to inside.

What does not survive as the leg is worded:
- The leg says the paper prints the signed difference **"with units and denominators"**.
  At every read level anyone in this record has reached, it prints **17.7% and 4.5%
  separately with P <0.001** and **no printed denominators**. The 13.2-point gap is the
  reader's subtraction. On the leg's own terms, that is a **failure of the leg**, not a
  match.
- The leg says **"on the candidate's unit"**. The printed rates are **result-level pooled**;
  the candidate's estimand is **laboratory-level**. Different quantity.
- The candidate declares a **multi-analyte set**; this paper is **blood lead alone**. This
  one defect is checkable without any further reading and is sufficient on its own to make
  the paper a near neighbour rather than a match on regime.

What is genuinely open, and what to do about it: **whether the Results tables print
per-laboratory signed differences, a bias/imprecision decomposition, or a concealment audit
is COULD NOT CHECK** - unopened, by me and, on the record's own account of three
abstract-level opens, by everyone before me. If those tables do print per-laboratory signed
gaps, the first two bullets above partly reverse and the kill regains ground on the
estimand (though never on the analyte). **So the leg should not be left as a confirmed kill
and should not be struck either.**

**BEARING: NARROW the kill, and CONVERT the remainder into a promotion condition.**
Narrow it to what is verified - a single-analyte, result-level, paired open/blind PT study
whose printed output is two rates plus a significance test, not the candidate's estimand -
which demotes it from match to near neighbour and means it no longer carries a Rejection on
this leg alone. Convert what is left to a promotion condition discharged by **one fetch of
the published full text** (OUP `article-pdf` for Clin Chem 47(2):322-330, or an ILL copy),
checking three things: (i) does any table print a per-laboratory **signed** open-minus-blind
difference with its N; (ii) does Methods describe the blind specimens entering the **routine
patient accessioning workflow** indistinguishably, or by a separate route; (iii) is there a
**concealment audit** and a **bias/imprecision** split. The two Gate 4 adversaries were each
Unresolved on attack 2 against an abstract-level read of the one document the leg turns on;
on that basis the Gate 4 confirmation should be reopened rather than treated as having
tested the leg.

One further note for the record: **the entry rests on a single document from a single author
group** (the NYSDOH/Wadsworth blood lead PT program, Parsons first author). There is no
independent corroboration in play here and none was claimed; the repeated appearance of this
title across my searches is one document surfacing many times.
