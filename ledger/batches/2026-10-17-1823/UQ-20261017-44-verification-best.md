# UQ-20261017-44 verification: Best, "Automatically Generalizing Theorems Using Typeclasses"

Read level: PDF (ceur-ws.org/Vol-3377/fmm12.pdf), opened via WebFetch summariser, 2 fetches. Direct curl download blocked (403 proxy). Not read by me line by line; absence findings rest on summariser passes over the whole PDF, so they are moderately, not fully, strong.
Searches run: 0. Fetches run: 2 (plus 1 failed curl).

1. Citation: Alex J. Best (Vrije Universiteit Amsterdam), "Automatically Generalizing Theorems Using Typeclasses", FMM 2021 (5th Workshop on Formal Mathematics for Mathematicians, 30-31 July 2021), CEUR-WS Vol-3377 (copyright line 2022). Tool: a Lean metaprogram that inspects typeclass assumptions in a statement/proof and reports where they are stronger than needed. Algorithm 1 (Sec 4) builds a graph of typeclass instances, takes head classes of maximal instance chains, and returns meets of strongly connected components.
2. Scale: FOUND. Sec 6: "which contains around 80,000 declarations" (mathlib, commit 29b63a7e..., footnote 3, core Lean excluded). Single pass ("we simply apply a single pass in our test"). "Around", not exact; it is mathlib declarations excluding core Lean.
3. Counts: FOUND. Sec 6: "In total the current implementation produces 2877 results". Single-file: "This checks 475 declarations and reports 183 results currently." File topology/ordered/basic.lean (second longest in mathlib by line count). Caveat: Sec 6 says "some of these are false positives" (flagged, not quantified). 183/475 is the single-file run, a subset of the 2877 presumably. Note: 2877 is results (not declarations).
4. Comparator: the declaration's own elaborated proof term/statement. Abstract: "from the elaborated proof terms when typeclass assumptions are stronger than necessary." Sec 3: "the weakest possible typeclass assumptions for the proof of". Sec 7: "By only inspecting the existing proof of a theorem" (limitation). No comparison of a mathlib statement against a published paper/textbook found. Ref 6 (Pons) and ref 12 (Mizar property omission) are related work citations only, no quantitative comparison.
5. Fraction/rate of over-hypothesized declarations: NOT FOUND. Only raw counts; no %, "percent", "proportion" in text (summariser search). 2877 results is not a declaration count, so 2877/80000 is not a valid rate.
6. Axioms: NOT FOUND. Only typeclass assumptions. No occurrence of "axiom".
7. Published mathematics literature: NOT FOUND. No "textbook" or "literature" in the text; the tool is about the library only. (Related-work references are on proof assistants/typeclasses.)

Surprises: none; the quoted figures all exist with the stated units. Quotes are short fragments individually returned, not stitched.
