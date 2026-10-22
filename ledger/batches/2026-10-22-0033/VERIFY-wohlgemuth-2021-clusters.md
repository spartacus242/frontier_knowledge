# VERIFY — Wohlgemuth et al. 2021, "Translation error clusters induced by aminoglycoside antibiotics"

Checker: fresh-context. Date 2026-10-22. Budget used: 2 searches, 5 WebFetch (cap reached).

## FRONT MATTER (taken from the article's own header, not from a short form)

- Title as printed: Translation error clusters induced by aminoglycoside antibiotics
- Authors as printed: Ingo Wohlgemuth, Raffaella Garofalo, Ekaterina Samatova, Aybeg Nafiz Günenç, Christof Lenz, Henning Urlaub, Marina V. Rodnina
- Journal / citation as printed: Nature Communications (2021) 12:1830. Article number 1830; **no page range is printed** (the ledger's "12:1830" is the article number, which is correct usage for this journal).
- DOI as printed: https://doi.org/10.1038/s41467-021-21942-6
- Dates: received 2 July 2020; accepted 8 February 2021.
- Article type: header reads "ARTICLE". Headings present: Results, Discussion, Methods, Data availability, References. It is a **primary research article reporting its own experiments** — not a review, protocol, guideline, editorial or column. The findings below are the authors' own; none of the five sub-claims is a finding it attributes to someone else.

## CLAIM (as handed to me)

That this paper (a) prints an observed-over-expected error enrichment reaching 60,000-fold; (b) prints a conditional probability of a next error in the range 0.05–0.25; (c) states clusters are absent in untreated cells, or in untreated ram-mutant cells; (d) contains the authors' own statement that their clusters may exceed their observation window, i.e. that the tryptic peptide they observe is shorter than the clustering length scale; (e) has some identifiable unit of analysis (peptide / protein / site).

## READ LEVEL

**Full text**, via the Göttingen repository mirror the ledger named:
`https://publications.goettingen-research-online.de/bitstream/2/86738/1/document.pdf`
Reached through WebFetch. The route opens and serves the whole article including Abstract, Results, Discussion and Methods. Supplementary files (Supplementary Fig. 6b, Supplementary Table 1, Source data file) were **not** in the served document and were not read — several numbers below are cited by the article to those files and I could not inspect them.

A reading constraint, stated so it is not mistaken for an access failure: the fetch summariser **refused bulk verbatim reproduction** of whole sections (twice), citing a copying limit, and enforces a ~125-character cap per quotation. Short quotes and bounded consecutive-fragment requests were honoured. So the quotations below are short direct quotes as served; where a sentence needed two fragments I say so and label the result a reconstruction. Where I could obtain only the summariser's paraphrase, I mark it **[paraphrase, not quotable]** and do not treat it as the source's words.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The 60,000-fold figure — PRINTED, in the Results, and it is an observed-over-expected ratio

Location: Results, subsection "Probability of making successive errors", body text.

> "The measured error frequency for clusters is up to 60,000-fold higher than that predicted"

The expectation is computed from **stochastic independence** — the product of the single-position error frequencies:

> "is a product of individual Ef values for each position"  (preceding sentence, Results)

and in Methods, "Quantification and statistical analysis":

> "estimated as the product of the error frequencies of the individual misreading events."

[paraphrase, not quotable] The summariser reports the independence-expected cluster frequency as being below 10⁻⁶ to 10⁻⁵ in most cases, and the 60,000-fold statement as holding across detection methods and proteins. I could not obtain that clause verbatim.

**The source states the enrichment more than once, with different comparators, and the second formulation is the headline one.** The Abstract does *not* print 60,000-fold. It prints:

> "up to 10,000-fold more frequent than the first error"

and

> "as many as four amino acid substitutions in a row"

The Abstract's 10,000-fold is **a downstream error compared with the first error**, not observed-over-expected. The two numbers are different estimands against different denominators, and (per the first read) the text does not reconcile them. The 60,000-fold observed/expected figure appears **only in the Results**, not in the Abstract.

### (b) Conditional probability of the next error — PRINTED, but the quoted range is neither the floor nor the ceiling

The quantity is Enext (printed as "Enext f" in the running text). Conditioning event, in the paper's words:

> "provides an estimate for the error frequency of the second misreading event."

i.e. the probability that the next codon is misread **given that a first misreading has already occurred in the same peptide**, defined so that E1st × Enext ≈ Ecluster, with Enext estimated from the slope of Ecluster against E1st.

Values, with locations:

| Value | Drug | Location |
|---|---|---|
| 0.09 and 0.05 | "for Par and Str, respectively" | Results, running sentence |
| 0.25 | Apr — "but is much higher, 0.25, for Apr." | Results, running sentence |
| 0.04–0.18 (Str), 0.02–0.09 (Par) | ranges | Results, distance subsection [paraphrase] |
| slope 0.08 (text); 0.085 / 0.074 in figure labels | Str time course / titration | Results, Fig. 4b [low confidence, figure OCR] |
| 0.4 | Sis, E241D–E242D | Results, Fig. 5c [low confidence, figure OCR] |
| 0.36 and 0.40 | "reaching 0.36 and 0.40, respectively" — KanA and Sis | **Discussion**, running sentence |
| 0.18 | "The error frequency of consecutive errors in the cluster reaches 0.18." — Str | **Discussion**, running sentence |

**No table of Enext values appears in the served text.** The values live in running sentences in Results and Discussion and in figure labels (Fig. 4b, 4d, 5a, 5c). The paper points to Supplementary Table 1 and a Source data file, which I did not read.

Hedging: the Results values are stated flatly; the "up to"/"reaching" constructions in Abstract and Discussion are the hedged maxima.

### (c) Absence of clusters — the printed sentence is about ram cells, and the ram cells are UNTREATED

Location: Results, "Error clusters as a hallmark of AGA action", body text:

> "Error clusters appear only in Str-treated samples and are absent in ram cells (Fig. 2b)."

Figure 2b legend title:

> "Error clusters induced by Str are absent in the ram strain."

Discussion:

> "but are not found in the ram proteome."

That the ram cells carry no drug is established elsewhere in the paper, not in that sentence:

> "untreated ram (ribosomal ambiguity) E. coli cells"  (Results)
> "error-prone ram cells without AGA"  (Fig. 1 legend)

A separate, distinct absence statement, for a drug and not for a no-drug condition:

> "spectinomycin (Spc), which is bacteriostatic, does not induce error clusters."

**On untreated wild-type cells the paper is silent about clusters.** It reports no cluster frequency for untreated wt. Non-treated wt cells appear in Methods as the *false-positive filter*, not as a measured no-cluster condition:

> "controls of non-treated cells were performed to exclude false-positive identifications"

with misreading signals filtered against the untreated wt cells. So "clusters are absent in untreated cells" **is not a sentence this paper prints**, and by construction it could not easily print it: untreated wt is the baseline that misreading signals are subtracted against.

### (d) Clusters possibly exceeding the observation window — THE AUTHORS DO SAY IT, in the Discussion, once, qualified, and with no number

Location: **Discussion**, body text, in the paragraph contrasting Apr with Str (the immediately preceding sentence is about translocation rates, AGA dissociation rates and AGA-induced ribosome conformation determining prevalence and size of clusters; the following sentence turns to clinical implications).

Reconstruction from **two** consecutive fragments, junction verified by the overlap "…supersede the length" / "of average tryptic peptides.":

> "Str introduces milder, but far longer error clusters, some of which are likely to supersede the length of average tryptic peptides."

The full sentence as served (the lead clause obtained as a paraphrase-level quote on a second pass and consistent across two reads) begins "Apr induces pronounced error hot spots, whereas …". The operative wording is confirmed as **"supersede"**, not "exceed", and the hedge is **"are likely to"**.

Adjacent window statements in the same Discussion:

> "individual misreading events can be separated by as much as 13 correct"
> "elongation cycles (Supplementary Fig. 6b and Source data file)."

(reconstruction from two consecutive fragments; the 13-cycle figure is cited to a supplementary figure and the source data, which I did not read)

> "Str remains bound to the ribosome for at least ten elongation cycles"

**No number is printed for tryptic peptide length.** The paper gives no average and no maximum peptide length in amino acids, and no fraction of clusters estimated to be truncated by the peptide boundary. On this point the paper **ASSERTS qualitatively**; it does not MEASURE. There is also no separate methodological statement anywhere that the MS observation window limits detectable cluster length — this one Discussion clause is the whole of it.

### (e) Unit of analysis — the tryptic peptide, and a cluster is by construction a within-peptide object

> "identified peptides that had more than one amino acid substitution in the sequence."  (Results — the operative cluster criterion)
> "Only error clusters with net delta mass ≠ 0 and different from known PTMs and peptide derivatizations were considered."  (Methods filter)
> "calculated Ef as a ratio of an incorrect peptide to the corresponding correct parental peptide."  (Results)
> "Error frequencies were calculated as the ratio of the integrated intensities of the substituted peptide"  (Methods; sentence continues with the correct parental peptide)

Methods give **no formal cluster definition by error count or by span in residues**. The criterion is ">1 substitution in one identified peptide".

Protein- and site-level language appears only as framing, in the Abstract:

> "clusters of errors in full-length proteins in vivo"
> "located close to each other in the protein sequence"

## REGIME

- **Organism / strains:** *E. coli*. "E. coli reference strain MG1655" (Methods). ram strain "UD 131 (Xac rpsD12)", described in Results as carrying "a C-terminal truncation in ribosomal protein S4". An EF-Tu-His strain "based on the W3110 (K12) strain".
- **Drugs and doses:** aminoglycosides, 2 h exposure — "treated with AGA for 2 h". "If not stated otherwise, the Str concentration was 8 µM". "Spc was used at a concentration of 64 µM". Apr 16 µM. Also Par, KanA, Sis. Doses are described as maximum-misreading doses.
- **Mutant condition:** ram (ribosomal ambiguity), **without drug**.
- **Unit of analysis:** the tryptic peptide. Endpoint: error frequency Ef = substituted peptide intensity / correct parental peptide intensity. Derived estimands: Ecluster, E1st, Enext (Enext from the slope of Ecluster vs E1st). Comparator for the 60,000-fold figure: the cluster frequency predicted under positional independence.
- **Detection:** data-dependent acquisition mass spectrometry, validated by Parallel Reaction Monitoring; the QRAS method ("Quantification of Rare Amino acid Substitutions"); untreated wt cells used as the false-positive filter.
- **Observation window:** one tryptic peptide. Largest intra-cluster separation reported: 13 correct elongation cycles (cited to Supplementary Fig. 6b / Source data).

**Does the handed claim sit inside this regime?** Sub-claims (a), (b), (d) and (e) do. Sub-claim (c) sits inside only in its ram-mutant form; in its "untreated cells" form it sits outside — that condition is the paper's filter, not a reported measurement.

## DEFECTS FOUND

1. **Two different fold figures with two different comparators, and the ledger's number is not the headline one.** 60,000-fold is observed cluster frequency over independence-predicted, printed in the Results only. The Abstract prints 10,000-fold, which is a downstream error against *the first error*. Citing "60,000-fold" to the abstract would be wrong; calling the abstract's 10,000-fold an observed/expected enrichment would be wrong about the estimand. Both are "up to" maxima, not central estimates, and I could not recover a stated uncertainty for either.
2. **"0.05 to 0.25" misstates the range in both directions.** 0.25 is the Apr value, not a ceiling: the Discussion prints 0.36 (KanA) and 0.40 (Sis). The Results' lower bounds go to 0.04 (Str) and 0.02 (Par). A claim that the paper's conditional next-error probability lies in 0.05–0.25 is true of the three headline Results values and false as a description of the paper's printed span (≈0.02 to 0.40).
3. **The absence claim is condition-specific and gets broader in retelling.** The printed sentence is "absent in ram cells" — untreated ram cells. There is no printed sentence that clusters are absent in untreated wild-type cells, and the paper reports no cluster measurement there. Treating the paper's silence on untreated wt as a finding of absence would be reading a prohibition into silence; worse, the silence is structural, because untreated wt is the subtraction baseline. Note also the adjacent Spc sentence ("does not induce error clusters") describes a *drugged* condition and is not evidence about any no-drug condition.
4. **Sub-claim (d) is real but thinner than "the authors state their clusters exceed their window."** It is one Discussion clause, hedged with "are likely to", scoped to **Str specifically** (explicitly contrasted with Apr, which makes hot spots), and phrased against "average tryptic peptides". **Published is not performed:** the paper never prints a tryptic-peptide length distribution, never prints the fraction of clusters truncated at a peptide boundary, and never states the window as a methodological limit anywhere outside this clause. Anyone converting it into a number (e.g. "clusters exceed ~N residues") would be doing their own arithmetic on figures the source does not print.
5. **A 0.25 collision I could not resolve inside the query cap.** In the Results, 0.25 is Apr's Enext. In the Discussion, the 0.18 Str in-cluster figure was reported to me as being compared with a 0.25 maximum misreading value measured *in vitro* at saturating Str. If both readings are right, two distinct 0.25s are in play (an Apr Enext and an in-vitro Str misreading maximum) and must not be conflated. Flagged, not resolved.
6. **A possible text-vs-figure disagreement, flagged at low confidence.** The running text assigns "0.09 and 0.05 for Par and Str, respectively"; the summariser read Fig. 4d labels as Str 0.09 / Par 0.05 — i.e. swapped. This rests on OCR of figure labels through a summariser and I do **not** assert it. It needs eyes on Fig. 4d. The direction matters for any claim about which drug has the higher next-error probability between Par and Str.
7. **Unit-of-analysis slippage between Abstract and measurement.** The measurement is peptide-level ("more than one amino acid substitution" in one identified peptide); the Abstract frames it as "full-length proteins in vivo" and residues "located close to each other in the protein sequence". A cluster in this paper is by construction an object that fits inside one tryptic peptide — which is exactly why defect 4's clause exists.
8. **Supplementary not read.** The 13-elongation-cycle separation and the per-drug Enext tabulation are cited by the article to Supplementary Fig. 6b, Supplementary Table 1 and the Source data file, none of which were in the served PDF. Any statement about the full distribution of inter-error distances is unverified here.
9. **Summariser copying refusal, not an access failure.** Two requests for whole-section verbatim text were refused on copying grounds. This limits how much surrounding grammar I could check on each side of a cut. For sub-claim (d) I verified the junction by overlap across two consecutive fragments; for sentence 1 of (a) I have the clause up to "than that predicted" verbatim and the independence basis from the preceding sentence and from Methods, but I do **not** have the words immediately following "predicted" verbatim in a single served quote.

## ROUTES THAT FAILED

- `curl` to `publications.goettingen-research-online.de` — "CONNECT tunnel failed, response 403". **Tool-scoped proxy refusal, not a host block**: the same file served fine to WebFetch. Recorded so the next checker does not re-derive it.
- Not attempted, by routing policy: nature.com (fails both ways even for open access); PMC / Europe PMC (hard-blocked; PMC7987974 is an identifier only); doi.org (429 risk); Unpaywall (would require a contact address — skipped entirely).
- Nothing was NOT FOUND. The article exists and opened in full at the first route tried. No COULD NOT READ for the article body. Supplementary files: not served at this route, and not separately pursued within the query cap.

## BEARING ON THE LEDGER ENTRY

The source is real, open, and reads in full at the route the ledger already named. All five sub-claims land somewhere in the paper, but two of them land in a narrower place than the claim puts them.

**The decisive point for the unstressed full-chain question — sub-claim (d) — holds, with a caveat that cuts against over-reading it.** The authors do say, in their own voice, that some of their Str-induced clusters are "likely to supersede the length of average tryptic peptides". That is a genuine authorial acknowledgement that their observation window can be shorter than the thing they are measuring, and it is enough to establish that the paper's cluster-length findings are window-limited by the authors' own account. But it is a single hedged clause, Str-specific, and carries **no number**: the paper does not quantify peptide length, does not quantify how many clusters are truncated, and nowhere else treats the window as a limit. So it licenses "the authors acknowledge their window may truncate clusters" and does **not** license any quantitative statement about the clustering length scale.

**An unstressed full-chain question sits outside this paper's regime on two axes at once**, and the entry should say both. First, drug: every cluster measurement here is in AGA-treated cells at maximum-misreading doses for 2 h. Second, grain: the cluster is defined as >1 substitution within one tryptic peptide, so full-chain clustering is not an endpoint this design has.

**The one place the two regimes touch should be stated plainly rather than resolved in either direction.** The paper's only no-drug cluster measurement is the untreated **ram** mutant, and there it reports absence — "absent in ram cells", "not found in the ram proteome". That is the closest the paper comes to an unstressed condition, and it reports no clusters. Against that: ram is an error-prone mutant, not a wild-type baseline, so it is not the unstressed wild-type condition either; and for untreated **wild-type** cells the paper reports nothing about clusters at all, because that sample is the false-positive filter. An entry that cites this paper as showing clusters are absent without drug is over-claiming (it is one mutant, not untreated cells generally); an entry that cites it as showing nothing about the no-drug case is under-claiming (the ram result is a measured absence). Both halves belong in the entry.

Finally, if the entry carries the 60,000-fold number, it should carry it as a Results figure with an independence-product expectation, "up to", no stated uncertainty recovered — and should not let it sit next to the Abstract's 10,000-fold as though they were the same quantity.
