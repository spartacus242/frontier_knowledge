# VERIFY — Weller 2016, "Quality Issues of Research Antibodies"

Checked 2026-10-22. Fresh-context checker. Budget used: 2 of 6 searches, 4 of 5 fetches.

## CLAIM

The ledger entry rests on Weller M, "Quality Issues of Research Antibodies",
*Analytical Chemistry Insights* (2016), for four sub-claims:

- (a) that the review discusses whether vendors print a STOCK CONCENTRATION on
  antibody datasheets, and in what form (scalar / range / lower bound /
  lot-dependent / absent);
- (b) that it prints a NUMBER on documentation completeness — a share of products
  or datasheets missing a concentration, or a share of papers failing to state a dose;
- (c) that it discusses whether a published antibody DOSE can be computed from a
  paper plus a datasheet;
- (d) that it is a review, and whether any finding attributed to it is in fact
  attributed by it to someone else.

## READ LEVEL

**FULL TEXT**, via the SAGE route, as the task predicted.

Route that served: `https://journals.sagepub.com/doi/pdf/10.4137/ACI.S31614`
(open-access PDF, served through WebFetch; full body plus 53 references present —
not an abstract page, not a landing page).

I did not need the `opus4.kobv.de` repository PDF and did not try it. I did not
try PMC (PMC4803150 appeared in search results and is an identifier to convert,
not a route).

### Front matter, taken from the article itself

- Title: "Quality Issues of Research Antibodies"
- Author: Michael G. Weller (single author)
- Affiliation: "Bundesanstalt für Materialforschung und -prüfung (BAM),
  Division 1.5 Protein Analysis, Richard-Willstätter-Strasse 11, 12489 Berlin, Germany."
- Journal: *Analytical Chemistry Insights*, 2016, volume 11, pages 21–27
- DOI: 10.4137/ACI.S31614
- Article type as labelled by the journal: **Review**
- Received January 11, 2016 / accepted February 21, 2016

### Structure, in order

Abstract; Introduction; **The Status Quo** with eleven numbered subsections —
(1) Development and production of antibodies, (2) Traceability of antibodies,
(3) Concentration and activity of antibodies, (4) Affinity constants,
(5) Cross-reactivities or selectivity, (6) Application tests,
(7) Reference materials and standards, (8) Long-term availability,
(9) Antibodies as a subject in publications, (10) Antibodies as a commercial
product, (11) Academic sources — then **What Could be Done?** (nine numbered
items), Conclusions, Author Contributions, References (53 entries).

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Stock concentration on datasheets — YES, discussed; one sentence, as a SCALAR, and the review's point is that the scalar is the WRONG quantity

Subsection 3 is titled "Concentration and activity of antibodies". Its eleven
sentences, quoted as served (the summariser capped single quotations near 125
characters, so sentences over that length are given as consecutive labelled parts;
each part below was returned whole and the junctions are sentence-internal —
**this is a reconstruction from 2 or 3 consecutive fragments where labelled a/b/c**):

1. (1a) "The aging of an antibody is highly dependent on the transport and storage conditions,"
   (1b) "and hence, this aspect is difficult to control."
2. **"Usually, the manufacturer states a protein or IgG concentration on the label or data sheet."**
3. **"However, this is only a substitute for the relevant information, the concentration of active antibody."**
4. (4a) "For polyclonal antibodies, the determination of a concentration is particularly difficult,"
   (4b) "since even the IgG content is nearly irrelevant in this context."
5. (5a) "Antigen-affinity-purified antibodies also show this problem, since it is not guaranteed that all"
   (5b) "antibodies contained in such a preparation have the same or even any activity in a specific assay or application."
6. **"Hence, the current concentration or activity of the reagent might be not as high as expected."**
7. "The precision and accuracy of spectrophotometric protein determination methods are poor anyway."
8. "Most of these methods should be considered as semiquantitative."
9. (9a) "Only by relatively laborious methods, such as amino acid analysis or isotope dilution mass spectrometry"
   (9b) "with the respective tryptic peptides, a quantitative determination of the antibody concentration might be achieved."
10. (10a) "Unfortunately, these methods are not showing any difference between active and denatured antibodies"
    (10b) "and may be sensitive to impurities."
11. "In addition, they are rarely used for research antibodies due to the relatively high cost and effort involved."

Reading the form question against sentence 2 alone and unprimed: the review says
the manufacturer states "a protein or IgG concentration" — grammatically a single
stated value (a scalar), on "the label or data sheet". The review does **not**
say it is a range, a lower bound, a lot-dependent value, or absent. It does not
say what units are printed, does not give an example value, and does not
distinguish scalar from range anywhere. The word "Usually" is the review's only
hedge on prevalence, and no number stands behind it.

The second observation, from elsewhere in the paper, is the review's blunt
instruction in item 8 of "What Could be Done?" ("Validate each antibody you get
in the laboratory"):

> "Do not believe the statements on the datasheet.17"

Immediately before it, closing item 7: "In the study by Baker,17 it was described
that severe consequences can occur, if access to your former antibody stops."
Immediately after it: "It is necessary to do the right test before any new
antibody is used for research." Then: "This advice is not popular and will be
ignored frequently."

So the review states the datasheet-concentration point in **two formulations**:
sentences 2–3 and 6 of subsection 3 (unhedged as to whether vendors print a
figure, hedged with "Usually" on prevalence, no citation), and the
"Do not believe" imperative in item 8, which **carries citation 17** — Baker M,
"Blame it on the antibodies", *Nature*, 2015. The imperative is written as the
author's own recommendation supported by that citation, not as a quotation from Baker.

### (b) A number on documentation completeness — NONE on concentration or dose

I enumerated every numeral and quantity in the body text. The review prints these
(section in brackets; each quoted as served):

- [Introduction] "it was estimated that more than 300 companies offer more than
  2 million antibodies for research." — attributed to "a recent paper," ref. 17 (Baker, *Nature* 2015)
- [Introduction] "a large bioinformatics company independently tested more than
  6,000 commercial antibodies" and "More than 75% of these antibodies were
  nonspecific or did not work at all." — attributed to an unnamed company
  reported in "a comment to this article"; **no reference number on either sentence**
- [Introduction] "the consortium Human Protein Atlas examined more than 5,000
  commercial antibodies,18" / "from which more than 50% could not be used in the
  anticipated application." — ref. 18 (Berglund L et al., 2008)
- [Introduction] "by far the largest fraction of about 36% is assigned to
  biological reagents,8" / "which amounts to losses of about 10 billion US$
  annually." — ref. 8 (Freedman, Cockburn, Simcoe, *PLoS Biol* 2015)
- [2. Traceability] "According to a recent publication,20 only 44% of all
  antibodies mentioned in publications can be identified at all." — ref. 20
  (Vasilevsky NA et al., *PeerJ* 2013); the text does not name the authors inline
- [7. Reference materials] "(in relation to the 2 million commercial antibodies)"
- [10. Commercial product] "a polyclonal antibody may cost about 1,000 US$, a
  monoclonal one about 10,000 US$," / "and a recombinant antibody up to 50,000 US$"
  / "This is about 105 times less!" [i.e. 10^5] / "One company claims to have
  discarded about one-third of its catalog"
- [What Could be Done?] "Today, less than 50% of all antibodies mentioned in
  publications are identifiable at all." / "which already holds a collection of
  1,200 hybridomas."

**No number in the article is a share of products or datasheets missing a
concentration. No number is a share of papers failing to state a dose.** On the
specific quantity the ledger asks about, the review **ASSERTS** ("Usually, the
manufacturer states…") and **ARGUES** that the stated figure is the wrong
quantity; it does not DEFINE, BOUND, PREDICT or MEASURE a completeness rate. It
publishes no such number anywhere — not in a table, not in a figure (the article
has no data table or data figure of its own), not in a sentence.

The nearest-looking numbers, 44% and "less than 50%", are about **identifiability
(traceability) of antibodies named in publications** — whether the reader can tell
*which reagent* was used — and are Vasilevsky et al.'s finding, not Weller's, and
not about concentration, dose or datasheet completeness. The 75%/50%/36% figures
are about **functional performance** (nonspecific / did not work / share of
irreproducibility spend), again not documentation.

The closest the review comes to a documentation-completeness claim is a
**qualitative, unquantified** sentence in subsection 9:

> "Even in highly reputable journals and in highly cited papers, the description,
> characterization, and validation of research antibodies are nearly always insufficient."

"nearly always insufficient" is the whole of it. No denominator, no sample, no
count of papers, no endpoint.

### (c) Computing a published dose from paper + datasheet — NOT DISCUSSED

The review contains no sentence on whether a reader could calculate or reconstruct
the amount or concentration of antibody used in a published experiment, from the
paper, the datasheet, or the two together. I searched for "working dilution",
"titer", "titre", "µg", "ug/mL", "mg/ml", "mg/mL", "nM", "molar", "unit",
"amount of antibody", "how much antibody", "concentration used", "dose",
"specification" — **none of these strings appears in the article.** "dilution"
appears once, in "isotope dilution mass spectrometry" (sentence 9 above), which
is a measurement method, not a working dilution.

What the review says instead, adjacent to the question: the printed concentration
is "only a substitute for the relevant information, the concentration of active
antibody," and "the current concentration or activity of the reagent might be not
as high as expected." Those sentences bear on whether a *stated* concentration is
*trustworthy*. They are silent on whether a dose is *reconstructible* from
published information. The review's publication-reporting arguments (subsection 2,
subsection 9, item 1 of "What Could be Done?") concern **disclosure of reagent
identity**, not disclosure of amounts used.

### (d) Article type and misattribution risk

It is a **review**, so labelled by the journal, and by its own abstract an
explicitly synthetic/consolidating one, with no primary data of its own:

> (segments, consecutive, reconstruction from 10 fragments)
> "ABSTRACT: According to several recent studies, an unexpectedly high number of
> landmark papers / seem to be not reproducible by independent laboratories.
> Nontherapeutic antibodies used for research, / diagnostic, food analytical,
> environmental, and other purposes play a significant role in this matter. /
> Although some papers have been published offering suggestions to improve the
> situation, they do not / seem to be comprehensive enough to cover the full
> complexity of this issue. In addition, no obvious / improvements could be
> noticed in the field as yet. This article tries to consolidate the remarkable
> variety of conclusions and suggested activities into a more coherent conception.
> It is concluded that / funding agencies and journal publishers need to take
> first and immediate measures to resolve these / problems and lead the way to a
> more sustainable way of bioanalytical research, on which all can rely / with confidence."

Findings a reader might wrongly attribute to Weller, which Weller attributes to
others: the **44%** identifiability figure (Vasilevsky et al., ref. 20); the
**>5,000 antibodies / >50% unusable** figure (Human Protein Atlas, Berglund et al.,
ref. 18); the **36% / 10 billion US$** figures (Freedman, Cockburn & Simcoe, ref. 8);
the **>300 companies / >2 million antibodies** estimate (Baker, ref. 17); and the
**>6,000 antibodies / >75% nonspecific** figure, which Weller attributes to "a
large bioinformatics company" named nowhere, reported in "a comment to this
article" (i.e. a comment on Baker's *Nature* piece) and **carrying no reference
number at all** — the weakest-sourced number in the paper.

## REGIME

- **Population:** commercial, **nontherapeutic** antibodies — "antibodies used for
  research, diagnostic, food analytical, environmental, and other purposes" — in
  the global catalogue the review characterises as ">2 million antibodies" from
  ">300 companies". Therapeutic antibodies are explicitly outside the frame
  (subsection 10 contrasts them to make a price argument).
- **Vendors:** commercial antibody developers and resellers as a class. Not named,
  not sampled, not enumerated. No vendor's datasheets were inspected for this paper.
- **Papers:** the research literature as a class, including "highly reputable
  journals" and "highly cited papers". No sample, no journal list, no year range.
- **Unit of analysis / endpoint / comparator / estimand: NONE.** This is the
  decisive scope fact. The review measures nothing. It has no cohort, no sampling
  frame, no endpoint, no comparator and no estimand; every quantity in it was
  measured by somebody else and is carried in with (or in one case without) a
  citation. Its own output is an argument plus a nine-item programme addressed to
  funding agencies and journal publishers.
- **Where the claim sits relative to that regime:** sub-claim (a) sits **inside**
  the regime — subsection 3 is squarely about vendor-stated concentration on the
  label or datasheet, as a general assertion about commercial research antibodies.
  Sub-claim (b) sits **outside** it: the review publishes no documentation-
  completeness quantity, and asking it for one asks a review with no measurements
  for a measurement. Sub-claim (c) sits **outside** it: the review is silent on
  dose reconstructibility.

## DEFECTS FOUND

1. **(b) is unsupported as a quantity. The review prints no number on
   documentation completeness.** If the ledger entry cites Weller 2016 for a share
   of datasheets missing a concentration, or a share of papers failing to state a
   dose, that figure is not in this paper. Report the review as ASSERTING, not
   measuring.
2. **Wrong-gap substitution risk on 44% / "less than 50%".** These are about
   whether a named antibody can be *identified* from a publication — traceability
   of reagent identity. They are not about concentration, dose, or datasheet
   completeness. A source noting the absence of reagent *identity* is not evidence
   about the absence of reagent *amount*. Anyone who reached for 44% as a
   documentation-completeness number for dose has imported the wrong gap. Both
   formulations are others' work (Vasilevsky et al., ref. 20) and the review states
   the same fact twice at two different roundings ("only 44%" in subsection 2;
   "less than 50%" in What Could be Done) — the second is the hedged restatement
   and carries no citation at the point of use.
3. **Attribution leakage on 75%.** "More than 75% of these antibodies were
   nonspecific or did not work at all" is Weller reporting an unnamed
   bioinformatics company's unpublished test of >6,000 antibodies, sourced to a
   comment thread, with no reference number. It is not Weller's finding and it is
   not a citable primary figure. Treat any ledger use of 75% from this route as
   third-hand.
4. **(c) is COULD-NOT-BE-SUPPORTED-BECAUSE-SILENT, not refuted.** The review never
   addresses dose reconstructibility from paper + datasheet. Its silence here is
   not a prohibition and not a denial — it is simply outside what the paper
   discusses. Do not record it as the review saying a dose cannot be computed.
5. **Form of the datasheet concentration is under-determined, and should not be
   sharpened.** Sentence 2 of subsection 3 supports "vendors usually print a
   protein or IgG concentration". It does **not** support any of "as a scalar
   rather than a range", "as a lot-dependent value", "with units stated", or "with
   a lower bound". The grammar reads as a single stated value, but the review never
   contrasts the forms, so inferring "scalar, not range" from this sentence is
   reading past the text.
6. **Cut-grammar hazard on the most quotable sentence.** "Usually, the manufacturer
   states a protein or IgG concentration on the label or data sheet." is verbatim
   and complete, but the very next sentence reverses its force: "However, this is
   only a substitute for the relevant information, the concentration of active
   antibody." Quoting sentence 2 alone, to establish that vendors do document
   concentration, inverts the author's point, which is that what they document is
   the wrong quantity. The pair must travel together.
7. **Two earlier agents' "could not read" was route-specific, not a property of the
   source.** The paper is open access and opens cleanly at the SAGE PDF route. The
   earlier `opus4.kobv.de` bot interstitial was COULD NOT READ at one route, never
   NOT FOUND, and should not have propagated as an unreadable source.
8. **One number not independently re-derivable.** "This is about 105 times less!"
   is served as plain "105" where the article means 10^5 (the preceding sentence
   gives "billions (109)" for 10^9 and "some thousands (104)" for 10^4). The PDF's
   superscripts flatten in extraction. Flagged as served rather than silently
   corrected; it does not bear on any sub-claim here.

## ROUTES THAT FAILED

None. The first route I tried served the full text.

Not attempted, deliberately: `opus4.kobv.de` repository PDF (known bot
interstitial from two prior agents); PMC / Europe PMC (hard-blocked here —
PMC4803150 appeared in search results and was treated as an identifier only);
Unpaywall (would require supplying a contact address, so skipped entirely).

One partial refusal inside a working route: the WebFetch summariser declined a
request for the complete verbatim text of subsection 3 as a block ("I can't
reproduce the full subsection verbatim"). This was worked around within the rules
by requesting ordered consecutive sentence-level segments, which were returned;
the reconstructions above are labelled as such with their fragment counts.

## BEARING ON THE LEDGER ENTRY

**(a) HOLDS.** The review does discuss vendor-printed stock concentration, in
subsection 3, and the two load-bearing sentences are quoted above. Cite it as:
vendors "usually" state a protein or IgG concentration on the label or data sheet,
and the review's point is that this figure is a substitute for the quantity that
matters, the concentration of *active* antibody. Do not sharpen the form beyond
"a stated concentration"; the review does not characterise it as scalar vs range
vs lot-dependent.

**(b) DOES NOT HOLD.** No number. If the entry needs a documentation-completeness
quantity, this source cannot supply it, and the 44% traceability figure is not a
substitute. Weller 2016 is usable as an authoritative *assertion* that vendor
datasheets should not be trusted and that antibody description in papers is
"nearly always insufficient" — qualitative, by a single author, in a review with
no primary data.

**(c) DOES NOT HOLD — by silence, not by contradiction.** The question of whether
a published dose is computable from paper plus datasheet is not in this paper.
Record it as a genuine gap in this source, which is consistent with (and does not
by itself establish) the un-asked question the ledger is tracking.

**(d) HOLDS.** It is a review, journal-labelled and self-described as a
consolidation. Four of its seven headline figures belong to other studies and one
belongs to an unnamed company with no citation; the entry must carry those
attributions rather than crediting Weller.

Net: the entry may lean on this source for the *existence and framing* of the
datasheet-concentration problem, and must not lean on it for any *number* about
documentation, nor for anything about dose reconstruction. The strongest single
line the entry can take from it is the item-8 imperative with its citation intact:
"Do not believe the statements on the datasheet.17" (ref. 17 = Baker M,
*Nature*, 2015).
