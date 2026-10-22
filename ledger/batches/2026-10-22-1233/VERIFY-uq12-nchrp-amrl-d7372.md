# VERIFY - UQ-20261022-12: is a cross-method achieved-vs-published precision aggregate already in print in the NCHRP/AMRL, ASTM D7372 and ASTM ILS titles?
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

That no cross-method aggregate comparing achieved precision against a method's published precision is already in print in the NCHRP/AMRL proficiency-sample cluster, ASTM D7372, or the ASTM Interlaboratory Studies Program material.

What turns on it: promotion condition (iii). These are the titles nobody opened. If one of them prints a cross-method aggregate of achieved against published precision, the entry is a disguised known.

## READ LEVEL

**(a) Source by source: full citation, read level, route.**

**S1. National Academies of Sciences, Engineering, and Medicine (2009).** *Precision Estimates for AASHTO Test Method T 104, Determined Using AMRL Proficiency Sample Data.* NCHRP Web-Only Document 141. Washington, DC: The National Academies Press. DOI 10.17226/23020.
- Front matter names **no individual authors**; the page's suggested citation credits the National Academies of Sciences, Engineering, and Medicine as author. Report number taken from the page's own metadata: "NCHRP Web-Only Document 141" — a web-only document, not a printed NCHRP Report.
- **Read level: PARTIAL.** Obtained: bibliographic front matter and the complete table of contents with page ranges (Front Matter i-vi; Ch. 1 Introduction and Research Approach 1-3; Ch. 2 Results of Analysis and Estimates of Precision 4-14; Ch. 3 Conclusions and Recommendations 15-16; References 17; Appendices A-N 18-115). **COULD NOT READ: the body text of Chapters 1, 2 and 3 and of Appendices A-N.** The NAP reader page served navigation, citation boilerplate and the TOC only; it returned no body prose for Chapter 2.
- Route: `nap.edu/read/23020` → HTTP 302 → `www.nationalacademies.org/read/23020/chapter` (metadata + TOC); then `.../read/23020/chapter/3`, which identified itself as Chapter 2 but again served no body.

**S2. ASTM D7372-12,** *Standard Guide for Analysis and Interpretation of Proficiency Test Program Results.* ASTM International, Committee D02, Subcommittee D02.94. The store page states the active version is **D7372-25a**; the page I read is the historical -12 ("Standard Historical Last Updated: Nov 02, 2017").
- **Read level: PARTIAL** — Scope §1.1 and an excerpt of Significance and Use, as served by the public store page, plus the page's list of document sections. **COULD NOT READ: the body of the standard** (paywalled). Noted while reading S3: the ASTM site carries the notice "Using Artificial Intelligence (AI) on ASTM standards and related intellectual property is prohibited. Violations will result in suspension of access." I did not attempt to obtain the standard's text.
- Route: `store.astm.org/d7372-12.html` via WebFetch (located by WebSearch 1).

**S3. ASTM International,** *Interlaboratory Studies Program* (undated programme leaflet, PDF, `astm.org/v3/assets/blt5eb0a2cb04534832/blt820438b726d0d2ed/68e565ff2c436572e3ee1ccb/Interlaboratory_Studies_Program.pdf`), **and** the programme web page *Interlaboratory Study Program* (`astm.org/get-involved/technical-committees/interlaboratory-studies-program.html`).
- **Read level: leaflet — FULL TEXT in substance, PARTIAL verbatim** (the summariser returned an ordered condensation of all ten sections plus two short verbatim strings, not the full wording). Web page — **FULL TEXT**; it is short.
- Route: both via WebFetch; the leaflet URL came from WebSearch 2.

## WHAT THE SOURCE SAYS (quotations as served)

**(b) Does any of them print a distribution, ratio or aggregate comparing achieved precision against published precision ACROSS methods?**

**None does, in anything I could read — and in S1 the comparison is structurally excluded.**

- **S1 is a single-method report by its own title.** "Precision Estimates for AASHTO Test Method T 104, Determined Using AMRL Proficiency Sample Data." Its denominator is one AASHTO method and its variants: the fourteen appendices run sodium sulfate / magnesium sulfate × coarse / fine aggregate × sieve fraction (19.0-9.5 mm, 9.5-4.75 mm, finer than 1.18 mm / 600 µm / 300 µm) plus weighted averages. The fetch of Chapter 2 reported, of the material it could see: "The material covers only T 104 ... The page doesn't present any aggregate across multiple test methods." Whatever Chapters 2-3 print, a population of *methods* is not among the things this document ranges over. **I name no number from it, because I read none: the body was not served.**
- **S2 prints no data at all; it is a guide.** The scope, in its own words (reconstruction from three consecutive summariser fragments of §1.1, junctions verified at the comma and at "and for"): "For the committees responsible for the test methods included in interlaboratory proficiency testing programs," / "this guide describes procedures for assessing industry's ability to perform test methods" / "and for potentially identifying needs for method improvement." A guide **PRESCRIBES** a procedure; it does not **PERFORM** one. The Significance and Use excerpt says the data can "monitor analytical measurement system precision and bias" and are "useful for updating standard test methods" — again a stated use, no printed quantity.
- **S3 prints no counts whatsoever.** The web page's substantive content is a services list ("identifying potential samples; soliciting volunteer laboratories; ... producing a draft precision statement; compiling information for the Research Report"). No statistics: no count of ILS studies, research reports or methods. The leaflet's only quantitative content is design guidance — "a minimum of 6 labs for a full ILS" — and the Form and Style requirement it quotes: "Every test method shall contain: (1) a statement regarding the precision".

**(c) Does any print such a comparison for a SINGLE method?**

This is the weaker finding, and it is the one that is live.

- **S1 is precisely the place a single-method achieved-vs-published comparison would be printed, and I could not read it.** Chapter 2 "Results of Analysis and Estimates of Precision" (pp. 4-14) and Chapter 3 "Conclusions and Recommendations" (pp. 15-16) derive precision for one method from AMRL proficiency-sample data. **I cannot name a number, a table or a sentence from them.** On title and TOC the document measures achieved precision; whether it sets that beside T 104's published precision statement is **COULD NOT CHECK**, and its silence in my read is a fact about my read. Treat a single-method precedent here as likely and unverified, not as found and not as absent.
- **S2 names a comparison whose referent I could not resolve.** The store page lists, among the document's sections/tools, "**PTP and Site Precision Comparisons**". The excerpt served does not say what is compared against what. My inference — labelled as inference, not a read — is that in D02 usage "site precision" is a laboratory's own precision (cf. D6299/D6300), so a PTP-vs-site comparison would set one *achieved* precision against another *achieved* precision, not against a *published* statement. **That inference is not a check. The referent is unresolved and should not be scored as cleared.**
- **S3: no.** The nearest thing is a teaching example in the leaflet's precision material, where two results differing by more than the published repeatability range are marked "Suspect". Numerator class: one illustrative pair of results constructed to demonstrate the rule, with no stated provenance. Denominator: n = 2 results in a worked example. What it misses relative to the claim: all of measured practice, every real laboratory, and any method other than the example's. What it includes that the claim excludes: a hypothetical pair used for instruction. It is one word away from the claim's quantity and is a different quantity. This source **DEFINES** the achieved-vs-published test; it does not measure it.

**(d) Does any of them POSE the candidate's question without answering it?**

**Not as a cross-method question, in anything I read.** The nearest formulations, both hedged and institutional rather than interrogative:

- S2 §1.1, the hedged and addressed formulation quoted above: the guide "describes procedures for assessing industry's ability to perform test methods and for potentially identifying needs for method improvement." That hands the assessment to each method's own committee, method by method. It does not ask whether published precision statements are met in aggregate, and it answers nothing.
- S3's Form and Style quotation — "Every test method shall contain: (1) a statement regarding the precision" — is a drafting requirement, not a question about whether the statement holds.
- The ILS web page's meta description, "Learn how to meet the precision statement requirements in ASTM International test methods," refers to satisfying the *drafting* requirement, not to laboratories meeting a published number.

No posing sentence to quote. On my read, nothing here makes the candidate routable.

## REGIME

- **S1.** Population: AMRL proficiency-sample rounds for one AASHTO test method. Unit of analysis: a soundness measurement on a named sieve fraction of coarse or fine aggregate. Operating condition: sulfate soundness, sodium sulfate or magnesium sulfate, per T 104. Denominator: one method and its fourteen reported variants. **The claim's regime is a population of methods. It sits OUTSIDE S1's regime**, which is why no amount of unread body text in S1 could carry a cross-method aggregate.
- **S2.** Population: participants in, and committees responsible for, ASTM D02 proficiency test programs (D02 is petroleum products, liquid fuels and lubricants). Unit: a participant's result in a PT round. Kind of document: a standard guide — a prescription. **The claim asks what is printed; a guide can only define, bound or prescribe. Outside.**
- **S3.** Population: a newly designed interlaboratory study intended to *create* a precision statement — ruggedness study, then pilot (repeatability), then full ILS (repeatability and reproducibility), analysed per ASTM E691, minimum six laboratories. **This runs in the opposite direction from the claim**: it generates published precision rather than auditing achieved precision against it. Outside.

## DEFECTS FOUND

1. **The entry's source ordering is mis-weighted.** It names nap.edu/read/23020 "first", in a position suggesting the cluster's strongest cross-method candidate. That document is a **single-method** report on AASHTO T 104. Whatever else it is, it is not a cross-method aggregate and cannot be read as one.
2. **Citation front matter is thinner than the entry implies.** S1 has no named authors in its front matter; it is NCHRP **Web-Only Document 141** (2009), DOI 10.17226/23020, published by The National Academies Press. Any attribution to individuals should be struck.
3. **Bare "ASTM D7372" is ambiguous across five editions** (-07, -12, -17, -21, -25a appear in catalogue listings; the store page I read was -12 and names -25a as active). The entry should carry an edition.
4. **The programme's own name is inconsistent at the source.** The leaflet is titled "Interlaboratory Studies Program"; the ASTM web page is titled "Interlaboratory Study **Program**". The entry's label should note this rather than pick one silently.
5. **Two things are unresolved, and must not be recorded as cleared:** the body of S1 Chapters 2-3 (unread), and what D7372's "PTP and Site Precision Comparisons" compares against (unresolved from the public excerpt).
6. **Read-vs-absence discipline:** my negative on (b) rests on FULL reads of S3 and on PARTIAL reads of S1 and S2. For S1 the negative is carried by the document's stated subject, not by its body; for S2 by its document kind, not by its text.

## ROUTES THAT FAILED

- `https://www.nap.edu/read/23020` — 302 to `www.nationalacademies.org/read/23020/chapter`; not a failure, but the redirect must be followed manually.
- `www.nationalacademies.org/read/23020/chapter` and `.../chapter/3` — served metadata, TOC, navigation and citation boilerplate only. **No body prose for Chapter 2 was returned by either.** A PDF route to WOD 141, or the per-page NAP reader, was not attempted: budget exhausted.
- D7372 full text: not attempted. Paywalled, and ASTM's own site posts a prohibition on AI use of ASTM standards and related IP.
- Budget ended after 5 fetches and 2 searches. Nothing was left unreached in sub-claims (a)-(e); within (c), the S1 body and the D7372 "PTP and Site Precision Comparisons" referent are **COULD NOT CHECK**.

## BEARING ON THE LEDGER ENTRY

**(e) HOLD, with a narrowing and two conversions.**

- **The cross-method leg holds.** On my read, none of the three titles prints a distribution, ratio or aggregate comparing achieved precision against published precision across methods. For S3 that is a full read. For S1 it follows from the document's own stated subject — one method — not merely from unread pages. For S2 it follows from the document kind: a standard guide prescribes the comparison and prints no data. Promotion condition (iii) survives on this leg.
- **Narrow the entry's wording to the cross-method aggregate, explicitly.** The single-method version of the same comparison is a different and much weaker claim, and S1 is exactly the series in which it would appear. Do not let the entry be read as claiming that no achieved-vs-published comparison exists for any single method; I did not establish that and the structure of S1 suggests the opposite.
- **Convert to promotion conditions, not findings:** (i) open NCHRP Web-Only Document 141, Chapters 2 and 3, and record whether the AMRL-derived precision is set beside T 104's published statement, with the number and its units; (ii) resolve what D7372's "PTP and Site Precision Comparisons" compares — if it turns out to compare achieved PT precision against the method's published precision, the entry's framing (though not its cross-method aggregate claim) needs rewriting.
- **Not a disguised known on the evidence I have.** But the entry is not cleanly clear either: it names as its lead source a document whose subject it has mischaracterised, and two of its three titles I could only read from the outside.
