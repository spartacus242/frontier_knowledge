# VERIFY — Rochman et al. 2018, "Monte Carlo nuclear data adjustment via integral information"

Checker note. Fresh context. Source read via the PSI offprint route supplied in the task.

## Citation as the source itself serves it

From the article's own front matter (not from any short form):

> D. Rochman(1,a), E. Bauge(2), A. Vasiliev(1), H. Ferroukhi(1), S. Pelloni(1),
> A.J. Koning(3), J.Ch. Sublet(3),
> "Monte Carlo nuclear data adjustment via integral information",
> Eur. Phys. J. Plus (2018) 133: 537. DOI 10.1140/epjp/i2018-12361-x

Affiliations as printed: (1) Paul Scherrer Institut, Villigen, Switzerland; (2) CEA, DAM, DIF, Arpajon, France; (3) Nuclear Data Section, International Atomic Energy Agency, Vienna, Austria. (a) corresponding author.

Article type label as printed: **Regular Article**. Dates as printed: received 15 March 2018; revised 22 October 2018; published online 20 December 2018.

EPJ Plus uses article numbers, not page ranges, so "133: 537" is the complete volume/article locator; there is no page range to report.

## Read level

**Full text** — section headings, section 8.3 body, Table 1 caption, Table 7 caption and body, and the reference list were all served.

Routes used and failed:

- **Served the full text:** `https://tendl.web.psi.ch/bib_rochman/epjp1800496-offprints.pdf` via WebFetch. Five WebFetch reads of this URL (the task's cap), zero WebSearch calls.
- **Failed:** `curl -L` on the same PSI URL returned `curl: (56) CONNECT tunnel failed, response 403`. Per the task's own access routing this is a **tool-scoped curl refusal at the proxy, not a host block** — the same URL answered WebFetch on all five calls. I attempted it only to get the PDF onto disk for first-hand `pdftotext` grepping; `pdftotext` is installed but had no file to work on.
- **Not attempted:** doi.org, link.springer.com, PMC/Europe PMC (no PMCID involved), Unpaywall (would require supplying a contact address — skipped by instruction).

**Consequence to carry into every section below: every string in this note is summariser-mediated.** I never held the raw text. Verbatim strings are reported as the summariser returned them, and the term-absence list in section (e) is a summariser-reported absence, not a first-hand grep. Where that distinction could change a verdict I say so in the defects list.

---

## (a) Front matter

**Holds, in full.** Every element of the handed citation matches the front matter as served.

| Element | Handed to me | Front matter as served | Match |
|---|---|---|---|
| Authors, in order | D. Rochman, E. Bauge, A. Vasiliev, H. Ferroukhi, S. Pelloni, A.J. Koning, J.Ch. Sublet | identical, same order, 7 authors | yes |
| Title | Monte Carlo nuclear data adjustment via integral information | identical | yes |
| Journal | Eur. Phys. J. Plus | The European Physical Journal Plus | yes |
| Volume | 133 | 133 | yes |
| Article number | 537 | 537 | yes |
| Year | 2018 | 2018 (online 20 Dec 2018) | yes |
| DOI | 10.1140/epjp/i2018-12361-x | 10.1140/epjp/i2018-12361-x | yes |

No defect. Note the author-initial forms are the paper's own: "A.J. Koning" and "J.Ch. Sublet" are printed with those exact initial clusters, and "J.Ch." is not a typo to be normalised to "J.C.".

---

## (b) The four recorded strings, each checked alone

I asked for each string by itself and asked for the sentence around it, so each was located before being asked to support anything.

### (b1) "not included in the updating procedure" — PRESENT, verbatim, in section 8.3

Reconstruction from **3 consecutive overlapping segments**, assembled only across verified word overlaps ("posterior nuclear data files with" at junction 1, "in the updating procedure" at junction 2):

> "The final question studied here concerns the testing of the posterior nuclear data files with integral quantities not included in the updating procedure (so-called "target experiment")."

Clause before: "...but it also allows a reduction of calculated uncertainties."
Clause after: "Different ENDF-6 files will be tested with a new set of criticality benchmarks..."

**Grammar on both sides of the cut:** clean. The fragment is a restrictive modifier on "integral quantities", and the governing verb is "the testing of the posterior nuclear data files with". Cutting at "not included in the updating procedure" does not change what is excluded or by whom. One thing the fragment loses: what is held out is *integral quantities*, and the paper immediately names them "target experiment". The same phrase also appears, in near-identical wording, in the **Table 7 caption** — "additional benchmarks not included in the adjustment procedures" — note *adjustment procedures* (plural) there versus *updating procedure* (singular) in the body. These are two distinct formulations, not one string quoted twice.

### (b2) "the best performances are obtained for the prior nominal file 0" — PRESENT, verbatim, in section 8.3

Returned whole in one segment, so no reconstruction:

> "As observed, the best performances are obtained for the prior nominal file 0."

Clause before: "Results are presented in table 7 for different categories of benchmarks."
Clause after: "The adjustment methods as well as the best random file lead to larger chi-squared and biases."

**Grammar on both sides of the cut: this is where the string is most exposed.** Dropping the two leading words "As observed," detaches the sentence from "Results are presented in table 7", i.e. from the *specific* 51-benchmark, five-file table it is reporting. Quoted bare, it reads as a general finding about adjustment; in place, it is a reading of one table. The paper then hedges it twice over — see (b3) and (b4) — and then explicitly declines the strong reading: "Such observations do not discard the advantages of the presented methods for the uncertainty reduction...".

### (b3) "larger chi2 and biases" — PRESENT in substance, but **not character-for-character verbatim**

The paper writes the chi-squared **symbol**, not the ASCII "chi2". The sentence as served:

> "The adjustment methods as well as the best random file lead to larger [chi-squared] and biases."

So the recorded string "larger chi2 and biases" is a **transliteration** of "larger X^2 and biases", not a quotation. It should not be presented between quotation marks as the paper's own characters. The words "larger", "and biases" and the ordering are the paper's; "chi2" is the ledger's rendering of a glyph.

Clause before: "As observed, the best performances are obtained for the prior nominal file 0."
Clause after: "Such conclusion is dependent on the selection of benchmarks and on the type of random files used..."

**Grammar on both sides of the cut:** the fragment omits its own subject, which carries real content — "The adjustment methods **as well as the best random file**". The degradation is not unique to the adjustment methods; the best single random file (file 1834) degrades too on the held-out set relative to file 0 overall. Quoting only "larger chi2 and biases" loses that the comparator class includes a non-adjusted file, which is what makes the finding about *fitting to a benchmark set* rather than about *the three adjustment methods specifically*. The Table 7 numbers complicate it further: on the pmf and "Other" categories file 1834 actually scores **better** than file 0 (pmf absolute bias 227 vs 300 pcm; "Other" 323 vs 373 pcm), so "larger" holds across the board only for the adjusted files, not for file 1834 in every category.

### (b4) "any use of the adjusted nuclear data outside this selection has to be checked" — PRESENT, verbatim, in section 8.3

Reconstruction from **4 consecutive overlapping segments**, assembled only across verified overlaps ("random files used," / "a given" / "outside this selection"):

> "Such conclusion is dependent on the selection of benchmarks and on the type of random files used, but it still demonstrates that an adjustment is firstly valid for a given number of systems, and that any use of the adjusted nuclear data outside this selection has to be checked."

Clause before: "The adjustment methods as well as the best random file lead to larger [chi-squared] and biases."
Clause after: "Such observations do not discard the advantages of the presented methods for the uncertainty reduction..."

**Grammar on both sides of the cut:** the fragment is grammatically clean and the meaning survives — it is the second limb of a "demonstrates that X, and that Y" construction, and Y stands alone. But the *modality* changes with the cut. In place, the sentence opens by hedging ("Such conclusion is dependent on the selection of benchmarks and on the type of random files used") and then asserts the limb anyway ("but it still demonstrates"). The fragment alone reads as an unhedged rule; in place it is the authors' considered conclusion carried **through** a stated hedge. That is arguably stronger, not weaker, than the bare fragment — the hedge is on the Table 7 ranking, while "has to be checked" is what survives the hedge.

### Repetition and hedging across formulations (defect-class 4)

The paper states the domain-of-validity point in **three distinct formulations**, of differing strength:

1. **Section 8.3, hedged-then-asserted, no citation:** "Such conclusion is dependent on the selection of benchmarks and on the type of random files used, but it still demonstrates that an adjustment is firstly valid for a given number of systems, and that any use of the adjusted nuclear data outside this selection has to be checked." — this is the strong, general statement.
2. **Section 8.3, as a table reading, no citation:** "As observed, the best performances are obtained for the prior nominal file 0." + "The adjustment methods as well as the best random file lead to larger [chi-squared] and biases." — narrow, tied to Table 7.
3. **Section 8.3 immediately after, a counter-hedge, no citation:** "Such observations do not discard the advantages of the presented methods for the uncertainty reduction..." — this explicitly limits how far (1) and (2) may be pushed.

None of the four recorded strings carries a citation to another work; all four are the authors' own statements about their own results. Anyone quoting (2) without (3) is quoting selectively against the authors' own stated intent.

---

## (c) What section 8.3 actually DOES

Section 8.3 is titled **"Predictive power"** and sits inside section 8, "Results". It is the paper's own held-out test.

**Benchmarks entering the adjustment:** 12 criticality benchmarks supplying **14 integral quantities** (Table 1). Table 1 caption as served: "List of the considered experimental values (14) from 12 criticality benchmarks." The 14 quantities are keff for the 12 systems plus spectral indices F28/F25 for pmf1 and pmf6 and F49/F25 for hmf1. By class the 12 are 5 pmf (pmf1, pmf2, pmf6, pmf8, pmf22), 3 imf (imf1, imf2, imf7), 2 hmf (hmf1, hmf28), 2 mmf (mmf1, mmf3).

**Benchmarks held out:** **51**, none overlapping the 12. The Table 7 caption gives the class breakdown verbatim: "51 benchmarks are used: 18 hmf, 18 pmf, 7 imf, 3 mmf, 4 mcf and 1 icf." That sums to 51 (18+18+7+3+4+1), so the caption is internally consistent.

- Re-derived at the paper's own categorisation: Table 7 reports four row-groups — "All benchmarks", "hmf benchmarks", "pmf benchmarks", "Other benchmarks". **"Other" must therefore be imf+mmf+mcf+icf = 7+3+4+1 = 15**, since 51 - 18 - 18 = 15. (An earlier read of this paper in my own session initially reported "Other (11)"; that is wrong and the arithmetic above is the correction. Flagged in defects.)
- The held-out classes include two categories **absent from the adjustment set entirely**: mcf (4) and icf (1). The adjustment set has no mcf and no icf at all. So part of the held-out test is extrapolation to unseen benchmark classes, not just unseen benchmarks within seen classes.
- The individual names/identifiers of the 51 were not served in any of my five reads. I can give the class codes and counts but **not** the per-benchmark identifiers.

**Split design:** a **single in-set / out-set split**, not leave-one-out and not k-fold. The posterior files are produced once from the 14 quantities and then scored once against the disjoint 51. Section 8.1 ("Single benchmark") does run benchmark-by-benchmark, but that is an *adjustment-on-one* study inside the fitting set, not a cross-validation of the held-out kind.

**Unit of analysis: whole evaluated ENDF-6 files — five of them, named individually.** This is the single most important thing about section 8.3 and the thing most likely to be misdescribed.

1. **file 0** — the prior nominal file, "from the set of nominal model parameters, without random variations"
2. **BMC** posterior file
3. **BFMC** posterior file
4. **Mocaba** posterior file
5. **file 1834** — the single best-scoring member of the paper's own random ensemble, labelled "Best" in Table 7

It is **not** a distribution over random-file realisations (no spread, no ensemble percentile, no sampling uncertainty on the held-out score), and it is **not** released evaluated libraries. The linear-combination method (14 files) was **excluded** from the held-out scoring, and the paper says why: "This is expected as this method is a simple fit without any predictive power." — i.e. one of the paper's five methods is removed from the predictive test by the authors' own judgement, and the surviving comparison is four-method.

**Endpoint:** three estimators per file per category, as served in Table 7's row labels (extraction damaged — see below):

- an **absolute mean bias**, `Sigma|C-E| / N`, in pcm
- a **signed mean bias**, `Sigma(C-E) / N`, in pcm
- a **chi-squared per benchmark**, `chi^2 / N`

Caption as served: "Results are expressed in pcm, except for the chi-squared."

**NOT in the endpoint set:** no P-value for the held-out comparison, no **bias uncertainty**, no confidence or tolerance interval, no C/E scatter for the held-out 51 (the C/E figure, Fig. 8, covers only the adjustment set). The estimand is a point summary statistic per file per class — a mean over benchmarks — with **no stated uncertainty on it**. So defect-class 8 ("carry the stated uncertainty") cannot be satisfied here: there is no uncertainty stated on any Table 7 number to carry.

**Table 7 as served — extraction is DAMAGED, reproduced uncorrected.** The column header line came through broken: the labels "0" and "1834" are detached from their column names and land after "Best", and "File" does not line up over the five data columns. The row-label sigma signs came through as "P". Reproduced as served:

```
File BMC BFMC Mocaba Best
0 1834

All benchmarks
P ||/P    311   627   493   470   423
P /P     +117  +153   +19   -37  -162
X2/P      3.2  13.3   9.2   8.4   7.5

hmf benchmarks
P ||/P    272   654   605   654   702
P /P     -105  -641  -590  -641  -702
X2/P      2.4  14.3  12.9  14.3  16.0

pmf benchmarks
P ||/P    300   639   413   369   227
P /P     +190  +639  +370  +344  +159
X2/P      3.3  11.8   6.1   4.8   2.2

Other benchmarks
P ||/P    373   582   449   371   323
P /P     +296  +468  +351  +230  +101
X2/P      4.1  14.2   8.4   5.6   3.4
```

Two damage flags I am **not** silently correcting:

- The column order (file 0, BMC, BFMC, Mocaba, best=1834) is an **inference** from the detached "0 ... 1834" labels plus the body text's conclusion that file 0 wins. I did not see an intact header. Any claim that depends on telling BFMC from Mocaba should be treated as unverified.
- In the **hmf** group, the BMC and Mocaba columns are **identical across all three rows** (654/654, -641/-641, 14.3/14.3). That is either a genuine coincidence or a column-duplication artifact of extraction. I cannot tell which without the raw text, and I am not resolving it by inference.

Direction of the result, which does survive the damage because the body text states it independently: on the held-out 51, file 0 has the lowest absolute bias overall (311 pcm) and the lowest chi-squared per benchmark (3.2), and all three adjusted files are worse overall (627, 493, 470 pcm; chi-squared 13.3, 9.2, 8.4).

---

## (d) Does the paper name ICSBEP as the source of those benchmarks?

**Yes for the benchmarks generally; NOT at the point where the 51 held-out benchmarks are introduced.** This distinction matters and should not be collapsed.

Named explicitly, three times, all in sections 1 and 2.2:

1. Section 1 (Introduction): "as included in the ICSBEP collection [2]"
2. Section 2.2: "Each benchmark name follows the usual nomenclature of the ICSBEP database"
3. Section 2.2: "directly come from the ICSBEP evaluation database" (said of the uncertainties)

Table 1 caption (the **adjustment** set) attributes the measured values to the reference rather than naming ICSBEP in words: "The measured values are the ones reported in ref. [2]."

Reference [2] as printed in the reference list:

> J.B. Briggs (Editor), International Handbook of evaluated Criticality Safety Benchmark Experiments (Organization for Economic Co-operation and Development, Nuclear Energy Agency, 2004) NEA/NSC/DOC(95)03/I.

What section 8.3 and Table 7 say about where the 51 come from — the full extent of it:

- Body: "Different ENDF-6 files will be tested with a new set of criticality benchmarks"
- Table 7 caption: "Predictive power with additional benchmarks not included in the adjustment procedures."

Neither names ICSBEP, and neither cites ref. [2]. The acronym "ICSBEP" does not appear in section 8.3 or the Table 7 caption at all. The ICSBEP provenance of the 51 is therefore **inferable** — the class codes hmf/pmf/imf/mmf/mcf/icf are ICSBEP nomenclature, and section 2.2 says benchmark names follow it — but it is **not stated** at that point. Also note the paper never spells out the acronym "International Criticality Safety Benchmark Evaluation Project" anywhere; it uses "ICSBEP" bare, with ref. [2] carrying the full handbook title.

---

## (e) Criticality-safety bias, bias uncertainty, USL, ANSI/ANS-8.24

**Reported ABSENT (summariser-mediated term search), and the absence is plain:**

- "bias uncertainty" — ABSENT as a phrase. The paper uses "average bias" and "uncertainty" separately and never combines them.
- "upper subcritical limit" — ABSENT.
- "USL" — ABSENT.
- "subcritical" — ABSENT (the word does not occur at all).
- "ANSI" — ABSENT.
- "ANS-8" — ABSENT.
- "8.24" — ABSENT.
- "safety margin" — ABSENT. "margin" — ABSENT.
- No criticality-safety standard of any body is cited anywhere in the reference list.
- "criticality safety" — PRESENT **only** hyphenated and only as one item in a list of application areas in the Introduction: "(criticality-safety, spent fuel management, core simulation)". Plus "criticality-benchmarks" in the Introduction. The unhyphenated phrase does not occur.

**Does it report a BIAS? Yes — but not a criticality-safety bias.** Table 7 reports a signed mean bias `Sigma(C-E)/N` and an absolute mean bias `Sigma|C-E|/N`, in pcm, of calculated keff against the benchmark experimental keff, averaged over benchmarks within a class. That is a calculation-minus-experiment summary statistic over a benchmark set. It is **not** a validation bias in the ANSI/ANS-8.24 sense: there is no area of applicability argument, no trending, no normality or tolerance-limit treatment, no bias **uncertainty** attached to it, and no subcritical limit derived from it. The two senses of "bias" must not be swapped.

**Stated plainly, as instructed:** the paper neither reports a criticality-safety bias uncertainty nor an upper subcritical limit, and cites no criticality-safety standard. This is an absence, not a prohibition — the paper is a nuclear-data-adjustment methods paper in a physics journal and simply does not operate in the validation-standard frame. Defect-class 9 applies in reverse here: the paper **does** note an absence, but of something else — "This is expected as this method is a simple fit without any predictive power" is a statement about the linear-combination method, not a flag about criticality-safety validation. It must not be read as the paper flagging a safety-standard gap.

---

## (f) Scope: in what regime is the held-out result established?

**The regime, in the paper's own terms:**

- **Nuclides adjusted:** U-235, U-238, Pu-239 only.
- **Spectrum / population:** fast neutron spectra. Both the fitting set and the held-out set are fast-spectrum criticality benchmarks (hmf/pmf/imf/mmf/mcf/icf — all "f" = fast). No thermal, no epithermal-dominated, no reactor-physics or burnup application in the held-out test.
- **Observables fitted:** 14 integral quantities = 12 keff plus 3 spectral indices (F28/F25 twice, F49/F25 once).
- **Observables tested:** keff on 51 fast benchmarks.
- **Transport instrument:** MCNP.
- **Methods:** BMC, BFMC, Mocaba (plus TMC single-selection and a linear combination; the linear combination is excluded from the held-out test by the authors).
- **Unit of analysis:** five individual ENDF-6 files, as listed in (c).
- **Threshold / estimand:** no threshold is set. The comparison is a ranking of five files on three unthresholded summary statistics with no stated uncertainty.

**Does it address RELEASED evaluated libraries as distinct from its own random-file ensembles? No — not in the held-out test.**

Released libraries are named only in passing, never scored on the 51:

1. Introduction: "general-purpose libraries (JEFF, ENDF/B or JENDL)"
2. Introduction: "they could continue using new library versions such as JEFF"
3. Section 3.3: "as one can find in a nuclear data library"
4. Section 6: "provide users a unique updated library"
5. Section 8.2.1: "will eventually be given a nuclear data library"
6. Section 8.2.2: "many of them are believed to be well known in the libraries such as JEFF, JENDL of ENDF/B" (the "of" is as served; apparent typo for "or", flagged not corrected)
7. Section 9: "this is already the case in most of the general-purpose libraries"
8. Section 9: "the 238U(n, inl) reaction included in the ENDF/B-VIII library"

Table 7 — the entire held-out comparison — contains **no released library**. Its five columns are file 0, BMC, BFMC, Mocaba and file 1834, all of them the paper's own objects. The paper does **not** say that file 0 is derived from a released library; it describes file 0 as coming "from the set of nominal model parameters, without random variations" and characterises it as the kind of best-estimate one would find in a library — "as one can find in a nuclear data library". That is an analogy about what file 0 resembles, not a statement that it *is* ENDF/B or JEFF or JENDL. File 1834 is explicitly a member of the paper's own random ensemble.

**Therefore, on the regime test:** the held-out result is established for *the prior nominal file of this paper's own TALYS-style random ensemble, versus posterior files adjusted from 14 fast-spectrum integral quantities on 3 actinides, scored on 51 fast-spectrum criticality benchmarks by unthresholded mean keff bias and chi-squared per benchmark, as single files with no sampling uncertainty.*

A claim of the form "this paper shows adjusted nuclear data generalise worse than released evaluated libraries", or "than ENDF/B", would sit **outside** that regime: the paper's winning comparator is its own unperturbed prior file, not a released library, and the paper is silent on released libraries' held-out performance. Likewise a claim about criticality-safety bias or bias uncertainty sits outside the regime, since the paper's "bias" is an unthresholded C-E mean with no uncertainty and no applicability argument. A claim restricted to "the paper's own held-out test found its adjusted files scored worse than its unadjusted prior on 51 fast benchmarks it did not fit, and the authors concluded adjustment validity is set-specific" sits **inside** it.

---

## Defects

1. **"larger chi2 and biases" is a transliteration, not a quotation.** The paper prints the chi-squared glyph, not ASCII "chi2". The string should not be presented inside quotation marks as the paper's characters.
2. **The string "the best performances are obtained for the prior nominal file 0" is cut off its hedges.** Its own sentence opens "As observed," (tying it to Table 7), the next sentence hedges it ("dependent on the selection of benchmarks and on the type of random files used"), and the sentence after that explicitly refuses the strong reading ("Such observations do not discard the advantages of the presented methods for the uncertainty reduction..."). Quoting it bare inverts the authors' own stated limit on it.
3. **"larger chi2 and biases" drops a load-bearing subject.** The full subject is "The adjustment methods **as well as the best random file**", and the Table 7 numbers show file 1834 beating file 0 on pmf (227 vs 300 pcm) and on "Other" (323 vs 373 pcm). The degradation is not uniformly "larger" for the best random file in every category.
4. **ICSBEP is named for the benchmarks generally but NOT where the 51 held-out benchmarks are introduced.** Section 8.3 says only "a new set of criticality benchmarks"; the Table 7 caption names no source and cites no reference. Attributing the 51 to ICSBEP is an inference from shared class-code nomenclature, defensible but not stated. COULD-NOT-CONFIRM, not confirmed.
5. **Table 7 extraction is damaged and the column mapping is inferred.** The header came through with "0" and "1834" detached and "File" misaligned; row sigma signs came through as "P". The order (file 0, BMC, BFMC, Mocaba, 1834) rests on the detached labels plus the body text. Any claim distinguishing BFMC from Mocaba is unverified. Additionally the hmf group shows BMC and Mocaba identical on all three rows (654/-641/14.3 twice), which may be a duplication artifact; not resolved.
6. **"Other benchmarks" is 15, not 11.** My own first read of section 8.3 returned "Other (11)"; re-derived from the paper's own caption breakdown, 51 - 18 hmf - 18 pmf = 15 = 7 imf + 3 mmf + 4 mcf + 1 icf. The 11 was wrong.
7. **No uncertainty exists on any held-out number.** Table 7 gives point summary statistics with no interval, no P-value and no bias uncertainty. Any downstream use that attaches an uncertainty to a Table 7 figure is adding something the source does not contain.
8. **The held-out set contains classes the adjustment set never saw** (4 mcf, 1 icf — zero of each in the 12). Part of the "predictive power" test is extrapolation to unseen benchmark classes; describing it as prediction within the fitted regime would be wrong.
9. **One of the five methods was dropped from the predictive test by the authors.** The linear combination (14 files) was not scored, reason given: "This is expected as this method is a simple fit without any predictive power." The held-out comparison is four-method, not five.
10. **"bias" in this paper is not a criticality-safety bias.** It is an unthresholded mean C-E over benchmarks in pcm. "bias uncertainty", "upper subcritical limit", "USL", "subcritical", "ANSI", "ANS-8", "8.24", "safety margin" and "margin" are all reported absent, and no criticality-safety standard is cited. Swapping the two senses of "bias" would move a verdict.
11. **No released evaluated library is in the held-out comparison.** JEFF, JENDL and ENDF/B are named only in the Introduction, 8.2.2 and the Discussion, never scored on the 51. File 0 is the paper's own nominal file, described only as resembling what "one can find in a nuclear data library". The paper is silent on released-library held-out performance.
12. **Every string in this note is summariser-mediated.** `curl` on the PSI URL returned a proxy 403 (CONNECT tunnel failed) — tool-scoped, not a host block, and WebFetch answered the same URL five times — so I could not get the PDF onto disk for a first-hand `pdftotext` grep. The absence list in (e) and the exact glyph-level forms are therefore reported at summariser confidence. A first-hand grep is the one thing that would upgrade (e) from "reported absent" to "verified absent"; it needs one route that returns raw bytes.
13. **"validation" was reported ABSENT**, which is surprising for a paper doing a held-out test and is the single term I most distrust in the mediated list. Treat as unverified rather than as an established absence.
