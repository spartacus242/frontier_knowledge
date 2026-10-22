# VERIFY - ISO 4259-3:2020 defines PT-vs-published monitoring, not a two-ILS comparison; no completed ILS pair found
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it, in two parts:

1. That **ISO 4259-3:2020 (also EN ISO 4259-3, IP 367 Part 3)** defines a per-method
   monitoring procedure and publishes no distribution of achieved-against-published
   reproducibility ratios.
2. That **at least one COMPLETED pair of independent interlaboratory studies of the same
   standard method on comparable materials exists**, with both published reproducibility
   limits and both design counts retrievable.

Part 1 is read at SCOPE level only and the entry's grade turns on the standard DEFINING a
per-method comparison while publishing no ratio distribution (a definition-is-not-an-
evaluation move). Part 2 is promotion condition (i).

Sub-claims as assigned: (a) read level, scope quotation, does it define a comparison, does
it publish a ratio distribution or cross-method aggregate; (b) critical values, and did I
reach them; (c) the pair, named, with both R values and both design-count triples; (d) if
not found, what was searched; (e) does a precision statement print design counts at all.

## READ LEVEL

**ISO 4259-3:2020 - ABSTRACT / CATALOGUE LEVEL ONLY, from two independent servers.**
- `https://www.iso.org/standard/65961.html` - the ISO catalogue page itself. Served the full
  published abstract, title, status, edition, page count, ICS and committee. This is the
  authoritative free text ISO publishes for this standard. **Not a reseller page.**
- `https://www.sis.se/en/produkter/petroleum-and-related-technologies/petroluem-products-general/ss-en-iso-4259-32020/`
  - the Swedish national adoption, SS-EN ISO 4259-3:2020. Served scope text **word-for-word
  identical** to the ISO abstract. Two independent routes, same wording, so the wording below
  is not one site's paraphrase.
- **Normative body: COULD NOT READ.** No clause text, no annex, no table, no critical value
  was served by any route. ISO OBP returned a JavaScript stub; GlobalSpec returned a client
  error. See ROUTES THAT FAILED.
- Neither page shows a table of contents. The only internal structure named anywhere I read
  is "Annex B".

**ASTM E177-14, "Standard Practice for Use of the Terms Precision and Bias in ASTM Test
Methods" - PARTIAL (Section 10 and its worked examples, plus 10.1.1).** Read from a
third-party hosted PDF copy
(`https://www.africanfoodsafetynetwork.org/wp-content/uploads/2021/09/Use-of-the-Terms-Precision-and-Bias-in-ASTM-Test-Methods_ASTM-E177-%E2%88%92-14.pdf`),
through the summariser, not from ASTM's own server. I did not verify this copy against the
ASTM original and did not see its front matter, so treat the clause numbers as the copy's.
**ASTM E691 (the practice that governs ILS design) is not in this document and I did not
open it.** ISO 4259-1 / ISO 4259-2, which govern the ISO-side precision statement, were
**not opened at all**.

**The ILS pair: NOT FOUND, which is distinct from COULD NOT READ.** No candidate document
was located, so nothing was opened and nothing was read at any level. I am not reporting an
unread document's silence as evidence.

## WHAT THE SOURCE SAYS (quotations as served)

### ISO 4259-3:2020 - front matter

Title, as the ISO catalogue page prints it in two parts:

> "Petroleum and related products - Precision of measurement methods and results"
> "Part 3: Monitoring and verification of published precision data in relation to methods of test"

Status: `"Published"` (2020-01), `"International Standard confirmed [90.93]"`. Edition `"1"`.
ICS `"75.080"`. Technical committee `"ISO/TC 28"`. Page count: the catalogue page shows the
value `14` without a label, so **"14 pages" is an inference from an unlabelled field**, not a
quoted figure. Note the entry's alternate designations: the ISO and SIS pages I read confirm
**EN ISO 4259-3** (via the SS-EN adoption) but **neither page mentioned IP 367 Part 3**. I did
not confirm the IP identity.

### ISO 4259-3:2020 - scope, assembled from ordered consecutive segments

**RECONSTRUCTION, from 13 consecutive summariser fragments, verified at each junction, and
corroborated fragment-for-fragment by the SIS page's independent return of the same text.**
The summariser caps verbatim quotation near 125 characters, so this is assembled only from
consecutive returns; no cut string was completed by inference.

> "This document specifies the methodology for the regular monitoring of the test method
> precision achieved / versus the precision published in the standard test method using data
> from proficiency testing schemes (PTSs) / supported by the regular users of standard test
> methods.
>
> The procedures in this document are designed specifically for proficiency testing (PT)
> conducted on standard test methods, / having a published reproducibility, for petroleum and
> petroleum-related products, / which are presumed to be homogeneous, and where the data
> distribution is approximately normal. / In addition, it is applicable to properties of
> interest that are (known to be) stable over time and transport.
>
> This document specifies the methodology for the statistical comparison of standard
> deviation / under reproducibility conditions achieved in PT programmes versus that
> published. / The purpose of this comparison is to find out if the published reproducibility
> precision is representative / of that achievable by the regular participants in the PT
> programmes.
>
> This document also provides guidance on how to use a PT z-score to monitor an individual
> participant's performance / over time (see Annex B)."

(The `/` marks are my fragment junctions, not punctuation in the source.)

**GRAMMAR ON BOTH SIDES OF THE CUT.** The clause that matters most cannot be cut short
without changing the claim. "the methodology for the statistical comparison of standard
deviation" on its own reads as a comparison of any two standard deviations. The surrounding
clause fixes both arms: "**under reproducibility conditions achieved in PT programmes**
versus **that published**". The achieved arm is a **proficiency-testing** standard deviation.
Likewise "the methodology for the regular monitoring of the test method precision achieved"
is completed by "**using data from proficiency testing schemes (PTSs)**". Quoting either
clause to its comma yields the entry's reading; quoting it whole does not.

Where the document states the comparison twice, the **hedged, conditioned** formulation is
the second one, and it is the one quoted above in full: the procedures are "designed
specifically for" PT, on methods "having a published reproducibility", on materials "presumed
to be homogeneous", with data "approximately normal", for properties "(known to be) stable
over time and transport". The parenthesis "(known to be)" is the source's own hedge and is
reproduced.

### (a) Does it DEFINE a comparison procedure?

**Yes, at scope level.** Twice over: "specifies the methodology for the regular monitoring"
and "specifies the methodology for the statistical comparison of standard deviation under
reproducibility conditions achieved in PT programmes versus that published". "Specifies the
methodology" is definitional language. Both arms of the comparison are named, and its purpose
is named: "to find out if the published reproducibility precision is representative of that
achievable by the regular participants in the PT programmes".

**Per-method, yes:** the comparison is run on "standard test methods, having a published
reproducibility", one method's published R against that method's PT-achieved precision. There
is no cross-method pooling anywhere in the scope.

### (a) Does it publish a ratio distribution, or any aggregate across methods?

**PUBLISHED IS NOT PERFORMED, and I cannot name a number either way.** Nothing in the title,
abstract, scope or status fields I read reports a single achieved-against-published ratio, let
alone a distribution of them or an aggregate across methods. There is no table, figure or
sentence I can point to that carries such a quantity. On the read I achieved, the document
**DEFINES** the comparison - it "specifies the methodology" - and does not measure anything.

But say exactly what that is worth. **A scope that announces a methodology is not proof that
the body contains no worked table.** I did not read the body. So:
- "ISO 4259-3 defines a per-method comparison" - **CONFIRMED at scope level, from ISO's own
  catalogue page.**
- "ISO 4259-3 publishes no distribution of achieved-against-published ratios" -
  **UNVERIFIED. COULD NOT READ at body level.** It is consistent with everything I read, and
  the document's self-description is purely methodological, but it is an absence I did not
  check in the place where it would have to be checked.

### (b) Critical values

**COULD NOT CHECK / COULD NOT READ - I did not reach them.** No route served any annex,
table or numeric value. What I can say from the catalogue text alone: the abstract names
"Annex B" as carrying the z-score guidance, which implies at least an Annex A exists, but
**no page I read names Annex A, names any table, or uses the words "critical value"**. A
variance-comparison procedure of this kind would normally need critical values or a formula
for them; that is my expectation, not a finding, and I am not recording it as one. Whether
ISO 4259-3 supplies them is **unresolved on this check**.

### (c) The pair - NOT FOUND

**I did not find a completed two-study pair for any designated method.** I therefore cannot
name:
- a method,
- two studies,
- two published R values with units and levels,
- or two (laboratories, materials, replicates) triples with where each is printed.

No partial instance either: not one study with a retrievable design triple plus a second
study of the same method on comparable materials. Nothing to grade, nothing to half-credit.

### (d) What I searched - this is the finding

Two WebSearch queries, which was the whole search budget. Neither was refused by the
classifier.

1. `ISO 4259-3:2020 petroleum products precision "monitoring" scope standard test method`
   - returned only catalogue and reseller pages for the standard (ISO store mirrors at
   bsmd.moic.gov.bh and ysmo.gso.org.sa, dps.gov.al, isme.me, scc-ccn.ca, three GlobalSpec
   listings, and the SIS page I used). No ILS material.
2. `repeated interlaboratory study same ASTM petroleum test method revised precision statement "reproducibility" "number of laboratories" samples replicates pdf`
   (extended mode) - returned **no pair candidate at all**. What came back was the
   *machinery* of precision work, not instances of it: ASTM E691's store page, ASTM's own
   article "What Is the Proper ILS Design?", ASTM E177-14 as a hosted PDF, ISO 5725-2:2025 on
   a reseller, a PSTC conference slide deck on uncertainty statements, two NIST Dataplot
   reference pages, a NIST firedoc record, and one unrelated single-ILS paper on pavement
   density profiling (doi:10.3390/ndt2030011 - one study, not a pair, and not a designated
   petroleum method).

Routes the task named as "good places", and why each went unsearched or unreached inside
budget: **ASTM research reports cited in a precision statement** are sold separately by ASTM
and were not reachable; **two successive editions of one method** needs two paywalled
editions of the same ASTM or ISO document, and a store page's document history prints
designations and dates, not precision values; **a published round-robin repeated on the same
method** produced nothing on query 2; **an IP/EI precision re-determination** was never
reached, because the search budget was gone.

So the honest state of promotion condition (i) after this check: **the frame is neither shown
non-empty nor shown empty.** My two searches did not locate a pair. That is a fact about a
two-search budget against a literature whose primary artefacts (ASTM research reports, CEN
and EI ILS reports, successive paid editions) sit behind paywalls - it is **not** evidence
that no such pair exists. An unfound document's silence is not evidence in either direction,
the same discipline as an unread one's.

### (e) Does a precision statement print the design counts at all?

**In the governing ASTM practice: yes, they are listed - but under "should", not "shall".**
From ASTM E177-14, Section 10, as served:

- **10.3.1**, the governing sentence for the list: a precision statement
  > "should include, as a minimum, the elements specified in this section."
- **10.3.1.1**, the minimum description of the interlaboratory programme, lists
  > "(2) number of laboratories, (3) number of test results per laboratory per material"
  with the materials tested covered by "(1) what materials were tested".
- **10.1.1.1**, the one place the modal is mandatory, and note what it governs:
  > "these shall be stated in the precision statement of the test method."
  The summariser's reading, which I accept on a partial read: this "shall" attaches to the
  **repeatability and reproducibility standard deviations**, and **does not mention the
  counts**.
- **10.3.1.4** gives an imperative with no modal: "Report the repeatability and
  reproducibility standard deviations." Counts not mentioned.
- **10.3.2**, for added conditions: "report the number of operators or days per laboratory."
- **10.1.1** recommends a sample size for the estimate itself: "at least 30 is recommended".

And the practice's own worked examples **do print the counts**:
> Ex.3.1: "Each report covers two materials with each of approximately 16 laboratories
> testing 5 specimens of each material."
> Ex.5.1: "in eight laboratories with five materials, with each laboratory obtaining three
> test results for each material"
> Ex.1.1: "each laboratory testing two sets of five specimens of each material"

So: the entry's premise that the design-count fields **are not mandatory** is **CORRECT on
the modal verb** - 10.3.1 says "should include, as a minimum", and the only "shall" I found
covers the precision values, not the counts. But the premise is **misleading if it is used to
suggest the counts are typically absent**: E177 puts labs and test-results-per-lab-per-
material in a *prescribed minimum-content list*, and all three of its model precision
statements print labs, materials and replicates. The gap between "not mandatory" and "not
printed" is where this premise could mislead a reader.

## REGIME

**ISO 4259-3:2020, in its own words.** Population: "standard test methods, having a published
reproducibility, for petroleum and petroleum-related products". Unit of analysis: one standard
test method, monitored within a proficiency testing programme. Data source: "data from
proficiency testing schemes (PTSs) supported by the regular users of standard test methods".
Operating condition: materials "presumed to be homogeneous"; data distribution "approximately
normal"; properties "(known to be) stable over time and transport". Participants: "the regular
participants in the PT programmes". Comparison: PT-achieved reproducibility standard deviation
versus published reproducibility.

**Does the entry's claim sit inside that regime? Part of it does not, and this is the main
defect.** Two different things are being conflated:

- **What the standard defines:** achieved-in-PT standard deviation vs published R. One
  method, PT data, regular users, homogeneous material, normal data, stable property.
- **What the entry's second half is about:** two independent **interlaboratory studies** of
  the same method on comparable materials, each with its own published R and its own
  (laboratories, materials, replicates) design.

**NUMERATOR CLASS, both directions.** ISO 4259-3's achieved arm is a **PT-derived**
reproducibility standard deviation. Its exclusions, quoted: methods without "a published
reproducibility" are out; non-petroleum products are out; inhomogeneous materials are out
("presumed to be homogeneous"); non-normal data are out ("approximately normal"); properties
unstable in time or transport are out. Against the claim's class of an **ILS-derived
reproducibility limit R**:
- What ISO 4259-3's class **MISSES** that the claim includes: a designed interlaboratory
  study, which is a different animal from a PT round - a planned design with a fixed lab
  count, a fixed material set and a fixed replicate count per lab, run to *establish*
  precision. PT rounds are routine, open-enrolment, with lab counts that drift round to
  round and typically one sample per round. The claim's "both design counts" field has no
  counterpart in the PT regime at all.
- What ISO 4259-3's class **INCLUDES** that the claim excludes: routine PT programme data
  from "the regular users", and an individual participant's z-score trajectory over time
  (Annex B) - neither of which is an interlaboratory study of a method and neither of which
  yields a second published R.

**DENOMINATOR, checked against the near neighbours it is not.** ISO 4259-3's denominator is
"the precision published in the standard test method" - the single published R for that
method. The near neighbours: *not* a second ILS's R (that is the claim's denominator); *not*
a pooled cross-method figure (the standard pools nothing); *not* a per-laboratory bias or
z-score (that is Annex B's separate denominator, an individual participant against the
programme). The claim and the standard share the word "reproducibility" and the phrase
"achieved versus published", and still denote different quantities. **A number one word away
from the claim's is a different quantity** - here it is a *procedure* one word away, and the
same rule applies.

**ASTM E177-14's regime:** ASTM test methods generally, under ASTM's own terminology
practice. It is **silent on ISO and on EI/IP precision statements**, which are governed by
ISO 4259-1/-2 and IP conventions respectively - neither opened. So sub-claim (e)'s premise is
about "a kind of document" and I tested it on **one** of the relevant kinds. Petroleum methods
are exactly where ISO 4259 rather than E177 may govern, so the untested kind is the one
closest to this entry's subject.

## DEFECTS FOUND

1. **The standard's comparison is PT-versus-published, not ILS-versus-ILS.** If the entry
   leans on ISO 4259-3 as defining a comparison between two interlaboratory studies, or as
   the natural home for promotion condition (i)'s pair, that is a **misreading of the scope**.
   The scope says "using data from proficiency testing schemes (PTSs)" and "achieved in PT
   programmes". This leg needs rewording or striking. If instead the entry only claims the
   standard defines *a per-method achieved-vs-published comparison*, the claim survives - but
   the entry must say the achieved arm is PT data, because that is what makes it unable to
   supply condition (i)'s second R and second design triple.
2. **"Publishes no ratio distribution" is a body-level absence asserted from a scope-level
   read.** Mine too: I could not read the body either. State it as COULD NOT READ, not as
   verified. The defensible form is: the document's own self-description is methodological
   throughout and announces no results.
3. **Critical values: unresolved, and the entry should not assume either way.** I did not
   reach them. The abstract names Annex B only.
4. **Promotion condition (i) is untouched.** No pair found in two searches. Non-emptiness of
   the candidate frame remains open.
5. **The (e) premise is right on the modal and loose on the implication.** "Not mandatory" is
   correct for E177-14 ("should include, as a minimum"); "therefore often absent" is not
   supported and is contradicted by E177's own examples, all three of which print counts.
6. **A citation-identity gap.** The entry carries "IP 367 Part 3" as an alternate
   designation. The ISO catalogue page and the SIS page I read **do not mention IP 367**. EN
   ISO 4259-3 is confirmed; the IP identity is not, on this check.
7. **Provenance of the E177 read.** A third-party hosted PDF, not ASTM's server, read through
   the summariser, section 10 only. Clause numbers and the scope of the 10.1.1.1 "shall"
   should be re-verified against an authentic copy before the entry rests weight on them.

## CITATION CORRECTIONS

- **ISO 4259-3:2020** - full title, from the ISO catalogue front matter: "Petroleum and
  related products - Precision of measurement methods and results - Part 3: Monitoring and
  verification of published precision data in relation to methods of test". Edition 1,
  published 2020-01, status "International Standard confirmed [90.93]", ICS 75.080,
  committee ISO/TC 28. Catalogue page: `https://www.iso.org/standard/65961.html` (ISO
  project id 65961). **Cite the ISO catalogue page, not a reseller catalogue page** - the
  entry's current support can be upgraded for free, and the national adoption SS-EN ISO
  4259-3:2020 (SIS) corroborates the identical scope wording.
- **"IP 367 Part 3"** - unconfirmed on this check; neither page I read names it.
- **ASTM E177-14**, "Standard Practice for Use of the Terms Precision and Bias in ASTM Test
  Methods", An American National Standard. Author attribution is corporate (ASTM
  International, Committee E11); **I did not see this copy's front matter**, so designation
  year "14" is taken from the document's running title as served.
- **ASTM E691** - cited by E177 as governing the study design; **not opened**. Any claim
  about mandatory ILS design reporting belongs to E691, not E177, and is unchecked.
- No DOI applies to any standards document here. The one DOI that appeared in search,
  `doi:10.3390/ndt2030011` (pavement density profiling, 2025), is **not used** and is not
  part of any pair.

## ROUTES THAT FAILED

- **ISO OBP**, `https://www.iso.org/obp/ui/#iso:std:iso:4259:-3:ed-1:v1:en` - returned only a
  stub saying JavaScript must be enabled for a Vaadin application. No foreword, no table of
  contents, no scope, no annex titles. The OBP is a client-rendered app, so WebFetch cannot
  reach the preview text; this is a **tool/route failure, not a host block**.
- **GlobalSpec**, `https://standards.globalspec.com/std/14256098/en-iso-4259-3` - failed at
  the site with a client error; **nothing of the page was retrieved**. This was my last
  fetch, aimed at a table of contents and an annex list for sub-claim (b).
- **Not attempted, for want of budget**: the other reseller mirrors from query 1
  (bsmd.moic.gov.bh, ysmo.gso.org.sa, dps.gov.al, isme.me, scc-ccn.ca, the two further
  GlobalSpec listings), any standards.iteh.ai preview PDF for ISO 4259-3 (no URL in hand - I
  had only their ISO 5725-2 page, and I will not construct a URL by editing a seen one),
  ASTM's "What Is the Proper ILS Design?" article, ASTM E691, ISO 4259-1 and ISO 4259-2, and
  any EI/IP precision re-determination.
- **PMC and Europe PMC**: not used; hard-blocked here. Unpaywall: **not used at all**, since
  its route requires a contact email address and no personal identifier goes into a URL.
- Budget at stop: **2 of 2 WebSearch, 5 of 5 WebFetch** (the GlobalSpec failure consumed the
  fifth). **Sub-claim (b) was not reached and is marked COULD NOT CHECK. Sub-claim (c) was
  reached and is a genuine NOT FOUND within the search budget** - the two are different and
  must not be merged in the ledger.

## BEARING ON THE LEDGER ENTRY

**Overall: MOSTLY holds, with one leg needing to be narrowed and one needing to be struck or
reworded.**

**Prior 2, the definition-is-not-an-evaluation move.** Two separate adjustments.
- *Strengthen the support.* The DEFINES half is confirmed from **ISO's own catalogue page**
  plus an independent national adoption with identical wording, not from a reseller page.
  The entry should swap its citation and drop the "rests on a reseller catalogue page"
  weakness. "Read at SCOPE level only" stays accurate - that is all ISO publishes free - but
  the scope is now quoted whole, from the authoritative server.
- *Narrow what is defined.* Reword to: ISO 4259-3:2020 specifies a per-method procedure for
  comparing a method's **proficiency-testing-achieved** reproducibility standard deviation
  against its **published** reproducibility. Do **not** let the entry's wording imply a
  comparison between two interlaboratory studies - the scope says PT data, twice, and
  "per-method monitoring procedure" unqualified invites exactly that misreading.
- *Hold the no-evaluation half, but demote its status.* "Publishes no distribution of
  achieved-against-published ratios" is **consistent with everything readable and verified
  nowhere**: I can name no table, figure or sentence carrying such a quantity, and I did not
  read the body. The entry should carry it as a scope-level inference flagged **COULD NOT
  READ at body level**, not as a confirmed absence. On my read the standard **DEFINES** the
  comparison; it does not measure. The "definition is not an evaluation" conclusion survives,
  because its force comes from the document's self-description as a methodology, not from a
  verified empty-table check.
- *New consequence worth recording.* Once the achieved arm is identified as PT data, ISO
  4259-3 becomes **structurally incapable of supplying promotion condition (i)'s pair**: a PT
  round yields no second published R and no second (laboratories, materials, replicates)
  design triple. So this standard is not where condition (i) will be satisfied, and anyone
  hunting a pair should be pointed at ILS reports instead. That tightens the entry rather
  than weakening it.

**Promotion condition (i): HOLD, unchanged, with the search record attached.** Two searches
located no completed two-study pair. **Well-posedness stays 2/3.** Nothing here shows the
frame empty - the primary artefacts (ASTM research reports, CEN and EI ILS reports,
successive paid editions of a method) are paywalled and were unreachable, and an unfound
document's silence is not evidence. Recommend **converting (i) into a sharper, route-named
promotion condition** so the next attempt is not another blind search: name the candidate
routes explicitly (an ASTM research report purchased and read alongside the precision
statement that cites it; two successive editions of one ASTM or ISO method held side by side;
an EI/IP precision re-determination report), and give it a fetch budget that can actually
clear a paywall or reach a library copy. As it stands the condition is well-posed but not
reachable at two searches and five fetches.

**The (e) premise - "design counts are not mandatory": HOLDS, narrow the gloss.** ASTM
E177-14 clause 10.3.1 says a precision statement "should include, as a minimum" the listed
elements, and 10.3.1.1's list does contain "(2) number of laboratories, (3) number of test
results per laboratory per material"; the only mandatory "shall" I found (10.1.1.1) covers
the precision values, not the counts. So **not mandatory is right**. But the entry must not
slide from that to *not printed*: the counts sit in a prescribed minimum-content list and all
three of E177's model statements print them. And the premise is tested on **ASTM only** -
ISO 4259-1/-2, which govern petroleum methods on the ISO side and are the closer neighbour
for this entry, were not opened. Mark the premise **holds for ASTM E177-14, untested for
ISO 4259-1/-2**.

**Sub-claim (b), critical values: COULD NOT CHECK.** Do not let the entry assume either that
ISO 4259-3 supplies critical values or that it does not. One readable preview or an
authentic copy settles it.

**Minor: the "IP 367 Part 3" designation is unconfirmed** by either page I read. Either
source it or drop it from the citation line.
