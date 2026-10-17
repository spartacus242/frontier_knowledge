# UQ-20261017-23 dual-grade verification: working notes
Counts: 8 searches (cap 8), 6 fetches (cap 6). No search refused. All fetches answered via a page summariser, so quotes are as returned by it (not independently checked against raw text).

## Searches (all standard mode)
1. A36 dual certified A572 Gr50 A992 ... AISC -> titles incl. AISC Steel Interchange May 1994, MSC 2000 editorial (not opened), AWS forum, eng-tips (not opened)
2. ASTM A6 multiple grades certification heat plate ... -> AISC FAQ 1.3 ordering steel (opened)
3. ASTM A6 retests/reheat/ test report -> junk (A27, etc.)
4. EN 10204 3.1 content retest -> only blog/secondary pages; NOT opened (EN 10204 not read at all)
5. ASTM A6 pdf Certification Retests -> bsj.org.jm A6/A6M-17a draft (opened, TOC only)
6. ASTM A992 requirements -> AISC MSC April 1999 Steel Industry (opened)
7. mill downgrade / re-certified ... -> AWS forum threads, SSAB pages; none opened except SSAB A572 Gr50
8. ASTM A6 13.1 retests 16.1 retreatment -> academia.edu results, one opened (turned out to be ASTM A27, wrong doc)

## Fetches
1. aisc.org FAQ 1.3 ordering steel -> OK. FAQ 1.3.7 multi-certification (below).
2. AISC Steel Interchange May 1994 PDF -> OK (OCR). Chaparral "dual grade" A36/A572 Gr50 discussion.
3. bsj.org.jm A6/A6M-17a draft -> only TOC returned: "13 Retests" p12, "14 Test Reports" p12, "16 Retreatment" p13. Clause text NOT obtained.
4. AISC MSC 1999/04 Steel Industry -> OK. A992 requirements (Q3).
5. academia.edu 39348481 -> was ASTM A27, irrelevant. Wasted fetch.
6. ssab.com A572 Gr50 -> OK. "Can be dual certified as A572 Grade 50/CSA G40.21 50W upon request."

## Exact strings (as returned by summariser)
- FAQ 1.3.7: "Certificates of conformance and material test reports for materials that comply completely with more than one standard will indicate those standards." FOUND
- "These materials are considered 'multi-certified.'" FOUND
- "The practice is common and an indication of well-controlled processes." FOUND
- Steel Interchange 1994 (Chaparral, J.H. Temple): "A36/A572 Gr 50 is a steel formulated to meet the overlapping chemical and mechanical specifications" FOUND; "This 'dual grade' capability was achieved by careful selection and control of steel chemistry." FOUND
- MSC 1999: "a specified maximum yield-to-tensile ratio of 0.85"; "a specified maximum carbon equivalent of 0.47%"; "It has an upper limit on yield strength of 65 ksi" FOUND
- FAQ 1.3.1 (MTR content, A6 Section 14): "includes but is not limited to the heat number, steel grade, and nominal sizes supplied" FOUND (summariser paraphrase/quote; A6 clause itself not read)
- Re-certification / downgrade / retest wording in FAQ 1.3, Steel Interchange 1994, MSC 1999: NOT FOUND in those three documents (they were read; this is a negative for those texts only)
- ASTM A6 clause text, A36/A572/A709 clause text, EN 10204 text: COULD NOT READ (not opened). Routes: bsj.org.jm (TOC only), store.astm.org (not fetched), webstore/din.de (not fetched, paywall abstracts).

## Findings by question
Q1 CONFIRMED, and common. AISC FAQ 1.3.7 says materials meeting more than one standard are "multi-certified" and "The practice is common". AISC Steel Interchange 1994: mills (Chaparral) produce A36/A572 Gr50 "dual grade" steel by chemistry control. SSAB: A572 Gr50 / CSA G40.21 50W dual cert on request. Not found: a numerical share of heats. Note the mechanism: dual cert is a property of heats whose properties fall in the overlap of two specs (A36 min yield 36 ksi; A572 Gr50 min 50), i.e. heats are already high-yield; it does not say anything about a heat that fails one grade.
Q2 No primary source found describing downgrading or re-certification of a failed heat to a lower grade. COUNTABLE NEGATIVE, limited: 8 searches, only 4 AISC/producer documents read; A6 body text not read. Related but different: A6/A6M TOC has "Retests" (13) and "Retreatment" (16) clauses; contents unread, but these concern retesting/reheat treating the same material to the same specification, not reassigning grade. Whether A6 permits it is unestablished. Note: dual certification is by definition a test of conformance to multiple grades on one set of results, so a heat meeting the lower grade only is simply certified to the lower grade (inference, not a quote).
Q3 PARTIALLY from secondary-authoritative source (AISC article, not the A992 text): A992 has min yield 50, max yield 65, min tensile 65, max Y/T 0.85, max CE 0.47%, chemistry maxima (C 0.23, P 0.035, S 0.045, Si 0.40, N 0.015). SSAB: A572 Gr50 min yield 50, tensile 65, elongation 21% in 2 in./18% in 8 in. So conformance is multivariate and a heat can fail on Y/T, CE, chemistry, elongation. Charpy: A992/A572 do not mandate it as standard (not verified here); AISC says Y/T and yield ceiling are where A992 differs from A572 Gr50. Specification clauses themselves: not read.
Q4 Not confirmed. AISC FAQ 1.3.1 says A6 Sec 14 governs MTR content (heat number, grade, sizes, tension and chemistry results). No retest or re-certification field found in what was read. EN 10204 3.1: COULD NOT READ.
Q5 No published downgrade/off-grade rate found. COUNTABLE NEGATIVE across the 8 queries above.

## Conclusion
Claim half-supported. Dual/multi-certification is documented and described as common by AISC. Hence, for heats in the overlap, a given heat can carry two grade labels. But no source read says dual certification removes the need to classify failures, and the claim "steel does not have to be downgraded" is not supported or refuted by any source read; downgrading practice is undocumented (negative). The inference that a conformance-driven flow between adjacent grades "cannot be inferred from mass balance" is the proposal reviewer's argument, not a source statement.
