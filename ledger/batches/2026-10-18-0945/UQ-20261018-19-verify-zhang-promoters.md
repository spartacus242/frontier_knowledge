# UQ-20261018-19 — Source read: "Zhang et al." Nature Communications 2023, s41467-023-41572-4

## 0. Read level and routes

**READ LEVEL: FULL TEXT (via summariser), targeted — four passes over the Springer mirror.**
Qualifiers that bound every claim below:
- The only working route was WebFetch against `https://link.springer.com/article/10.1038/s41467-023-41572-4`, which carries the complete body (Introduction, Results, Discussion, Methods, references). Read in 4 targeted passes, not as one continuous text.
- The fetch summariser **caps quotations near 125 characters** and twice refused to reproduce longer text on that ground (it declined the Abstract outright). So no full sentence was obtained verbatim in one piece. Per rule 5 I have **not** stitched the clauses together.
- **Abstract: never obtained verbatim** (summariser refused; paraphrase only).
- **Supplementary Note 2 and all supplementary files: COULD NOT READ.** This matters: Supplementary Note 2 is the cited basis for the 936-promoter call, so it is the one plausible home for the per-promoter power analysis asked about in Q5.
- Crossref metadata (`api.crossref.org/works/10.1038/s41467-023-41572-4`) read successfully for the ordered author list.

### Failed routes, with exact error text (rule 10)
| Route | Exact error |
|---|---|
| `curl https://www.nature.com/articles/s41467-023-41572-4` | `curl: (56) CONNECT tunnel failed, response 403` |
| `curl https://link.springer.com/article/10.1038/s41467-023-41572-4` | `curl: (56) CONNECT tunnel failed, response 403` |
| `curl https://api.crossref.org/...`, `curl https://doi.org/...`, `curl https://www.biorxiv.org/` | `curl: (56) CONNECT tunnel failed, response 403` (all three) |
| Agent proxy status for the above | `{"kind":"connect_rejected","detail":"gateway answered 403 to CONNECT (policy denial or upstream failure)","host":"www.nature.com:443"}` |
| `WebFetch https://www.nature.com/articles/s41467-023-41572-4` | `{"error_type":"CLIENT_ERROR","source":"target","message":"There was an error while fetching."}` |
| `WebFetch` same nature.com URL, second parallel call | `Not fetched: ... failed 4s ago in this session (client_error)` — declined as a repeat, not a read |

Policy denials were **not** retried or routed around (proxy README: "do not retry policy denials (403/407) — report them instead"). **No raw-text route exists in this session**: curl is refused for every external host tried, so "FULL TEXT RAW" was unobtainable. PMC/Europe PMC were not attempted (hard-blocked per brief); PMCID PMC10505187 appeared in search results as an identifier only.

Budget: **4 web searches, 7 fetches** (7/7 used — at the cap, not over). Of the 7 fetch calls, 5 returned content.

---

## Q1 — Existence, title, author line, journal, year, article number

**The paper exists.** Title, from the article's own head (identical on Springer and in Crossref):

> Genome-wide promoter responses to CRISPR perturbations of regulators reveal regulatory networks in *Escherichia coli*

**AUTHOR LINE — THE CITATION HANDED TO ME IS WRONG.** Crossref's ordered `author` array (rule 4's sanctioned source), not truncated, **5 authors total**, printed order:

1. Yichao **Han**
2. Wanji **Li**
3. Alden **Filko**
4. Jingyao **Li**
5. Fuzhong **Zhang**

The Springer page's own citation line independently agrees on the head of the list: "Han, Y., Li, W., Filko, A. **et al.**" (collapsed with *et al.*, so the page alone cannot give the count — the count comes from Crossref).

**"Zhang et al." misattributes the paper to its LAST author.** Fuzhong Zhang is author 5 of 5 (the senior/corresponding author, Washington University in St. Louis). The correct short form is **Han et al. 2023**. This is exactly rule 4's failure mode — a senior-author-led record page or press release would reproduce it.

Journal: **Nature Communications**, volume **14**, article number **5757**, **2023**, published **16 September 2023**. DOI **10.1038/s41467-023-41572-4**. Open access.

---

## Q2 — THE UNIT

**The measured object is a PROMOTER** — specifically promoter *activity*, read out as GFP fluorescence from a promoter–GFP reporter, in pooled cells. The method is named **PPTP-seq** (pooled promoter responses to TF perturbation sequencing).

Design, as the paper reports it:
- **Promoters: 1,372** in the assayed library (abstract level — paraphrase, not verbatim). The variable/constant analysis in Results uses a *different, smaller* denominator: **1,323 "measured promoters"** (see Q3). **My arithmetic:** 1,372 − 1,323 = **49** promoters not carried into that analysis; *I did not read the text explaining the 49* — do not report this as QC exclusion without checking.
- **How the promoters were chosen: NOT ESTABLISHED.** I reached the library's size at abstract level but never read the selection/design criteria. This is a genuine gap, not an absence.
- **Organism / strain:** *Escherichia coli* strain **FR-E01 (Addgene #118727)**, a derivative of *E. coli* **MG1655**, carrying an aTc-inducible dCas9 cassette.
- **Perturbations: 183 TF genes**, knocked down by **CRISPRi** (dCas9, sgRNA-directed) — i.e. TF knockdown, abbreviated **TFKD** throughout. Knockdown of regulators, not knockout.
- **Media / conditions: 3** — **M9 minimal glucose (0.4%)**, **M9 minimal glycerol (0.5%)**, and **LB**; all with kanamycin, M9 also with thiamine.
- **Scale:** "over 200,000 TF-gene responses" (abstract, paraphrase); Results states **201,433 measured promoter activities**.

**LEVEL OF AGGREGATION (rule 8) — this is the crux of this check.** The paper reports at **two different levels**, and they must not be conflated:
- **Per TF-promoter pair**: the 201,433 measured activities, and the main response counts — "From the 201,433 measured promoter activities, single TFKDs led to upregulation in 3720 TF-promoter pairs and downregulation in 338 pairs" (marked quotation as returned; may be cut). **My arithmetic:** 3,720 + 338 = **4,058 responsive pairs = 2.01% of 201,433**.
- **Per promoter**: the 936 / 71% figure, and the variable/constant classification.

**My arithmetic, flagged as mine (rule 9):** 183 TFs × 1,372 promoters = **251,076** possible pairs; 201,433 / 251,076 = **80.2%**. That is consistent with 201,433 being **one medium's** TF×promoter matrix after QC, not a three-media total (three media would be ~600k). The fetch reported the 3720/338 counts as pooled across single TFKDs **in minimal glucose medium**. Treat the single-medium reading as inference, not as the paper's printed statement. The paper states no uncertainties on these counts (they are counts); the only stated error control is the q-value threshold below.

---

## Q3 — The two strings, checked UN-PRIMED

**Method note (rule 6, important):** I never supplied "936", "71%", "1323", "29%", "q<0.01" or "1.7-fold" in any prompt. I asked only for "every number and percentage in that paragraph, exactly as printed, with its denominator", and (separately) for what the paper concluded about the promoters that showed no change. Every figure below was **volunteered by the document**, so this is an un-primed confirmation, not a handed-back list.

### (a) "936 (71% of 1323 measured promoters) variable promoters with significant activity change under at least one TFKD condition"
**VERBATIM at clause level — confirmed un-primed.** The paper's own class names are **"variable promoters"** and **"constant promoters"**. The returned quotation of the governing clause:

> "variable promoters with significant activity change under at least one TFKD condition"

and the paragraph's numbers came back as: **936** (absolute count of variable promoters), **71%** (of **1323** measured promoters), **1323** (total measured promoters, the denominator), **29%** (constant). Section heading: **"Genome-wide TF-dependent promoter responses"**. The paragraph also cites **Supplementary Note 2** as the basis for the 936 call.

**Caveat I cannot discharge:** because the summariser caps quotations near 125 characters, I never saw the *whole* sentence in one piece. The parenthetical "(71% of 1323 measured promoters)" was reported as numbers-with-denominators rather than inside a quotation, so I can confirm the figures and the clause but **not** the exact punctuation/ordering of the full supplied string. Not stitched.

**My arithmetic:** 936 / 1,323 = **70.75%**, which rounds to the printed 71%. Internally consistent.

### (b) "the other 29% of the promoters were considered as constant promoters"
**VERBATIM — confirmed un-primed.** Returned as a marked quotation:

> "and the other 29% of the promoters were considered as constant promoters."

The supplied string matches from "the other 29%" onward; the paper's text carries a leading **"and"**, which indicates this is a **continuation clause of the same sentence** as (a), not a free-standing sentence. So (a) and (b) are almost certainly two clauses of one sentence. **I did not see them joined** and have not joined them.

**Surrounding passage:** the preceding sentence notes that single regulation was the most common pattern; the following sentence reports COG enrichment — "Genes expressed by constant promoters are enriched in 'inorganic ion transport and metabolism'" — which the authors read as housekeeping roles.

**My arithmetic:** 1,323 − 936 = **387** constant promoters; 387 / 1,323 = **29.25%** → the printed 29%.

### Thresholds — CONFIRMED as reported elsewhere
- **Significance: q < 0.01**, printed in Results. Methods: q values derived from the P-values of Z tests, controlling the false discovery rate.
- **Effect size: > 1.7-fold** in promoter activity, printed in Results. Methods add a stricter construction: fold change must exceed 1.7 **relative to both the negative control and the median promoter activity**.

Both match the values reported elsewhere (q<0.01, >1.7-fold). The two-reference-point detail in Methods is an addition worth carrying.

---

## Q4 — The estimand's shape: UNION, and single-medium

**It is a UNION over perturbations** — the fraction of promoters moved by **at least one** of the 183 TF knockdowns. The settling clause:

> "variable promoters with significant activity change under at least one TFKD condition"

Not a per-perturbation average, not per-condition, not a clustering output.

**A scope qualification the headline figure drops (rule 7).** The fetch reported that this paragraph **does not name a growth medium**, that the surrounding section's analysis is in minimal glucose, and that the text **does not say the classification was repeated separately** in glycerol or LB, nor does the later three-medium comparison use it. So: the 71% is most likely a union over 183 TFKDs **within one medium (M9 glucose)** — but "computed in M9 glucose" is the summariser's inference from section context, **not a printed statement I verified**. Flagging it as an open point rather than a fact.

---

## Q5 — Unresponsive vs merely underpowered: **NOT FOUND in the main text** (read level stated)

Having read Results, Discussion and Methods via the summariser in targeted passes: the main text contains **no per-promoter power, detection-limit or sensitivity analysis for the constant class**, and **does not separate** promoters that genuinely failed to respond from promoters where a response could not have been detected. The fetch states this explicitly: "The paper does not analyze whether constant promoters truly failed to respond or were simply hard to measure."

The nearest material, all of which addresses something else:
- Methods impose a **global** detection window on mean GFP intensity, excluding variants "not within our detection limits" (**10^1.5 to 10^5** in M9 glucose). This is a library-wide inclusion filter, not a per-promoter power statement.
- Five promoter-sgRNA combinations were dropped as "missing in all three replicates due to their low read counts."
- The **Limitations** section says CRISPRi "did not work well for weakly expressed TF genes, leading to false negatives." This is false-negative risk on the **perturbation (TF) side**, not on promoter detectability — a different axis, though it does mean the union in Q4 is a **lower bound**.

**NOT FOUND ≠ absent (rule 3).** **Supplementary Note 2 — the cited basis for the 936 figure — COULD NOT BE READ.** If a per-promoter sensitivity argument exists anywhere, that is where it would be. This question is therefore **not closed**: the main text does not do it; the supplementary note is unchecked.

---

## Q6 — Recurrence across conditions: YES, but at pair level

The paper does test recurrence, **across its three media**, and the key sentences returned are:

> "867 TF-promoter pairs appeared in all three conditions"

> "suggesting TF-promoter responses are highly condition-specific"

**Aggregation level (rule 8): the recurrence test is per TF-promoter PAIR, not per promoter.** It asks whether the same TF→promoter *response* recurs, not whether the same promoter is responsive-to-something in each medium. The per-promoter variable/constant split was not reported as repeated per medium. Illustrative case named: *metE* regulation by MetR, present in glucose and glycerol but not LB.

**No cell types and no strain panel**: one strain (FR-E01) throughout. Recurrence is across media only.

---

## Q7 — Setting: **entirely bacterial. Plainly.**

Nothing mammalian and nothing single-cell. *E. coli* MG1655-derivative FR-E01, CRISPRi (dCas9) knockdown of 183 TF genes, read out as **pooled** promoter-GFP activity by sequencing (PPTP-seq) — a pooled-population bacterial assay, not single-cell. Any ledger entry that places this 71% in a mammalian single-cell CRISPRi setting has the wrong object.

---

## Q8 — Does the paper pose the no-perturbation-moves-it question as open? **NOT FOUND**

Read level for this: Discussion and Conclusion via summariser, one targeted pass. The Discussion **does not** raise, as an open question, the fraction of promoters responding to no perturbation, nor the existence of regulators it did not perturb. The nearest passage concerns binding sites rather than non-responders:

> "only a small fraction of such interactions cause promoter activity change when perturbing TF expression level"

The Discussion instead attributes many observed responses to indirect mechanisms and proposes extending the method to other perturbation types. Reported as NOT FOUND at the read level stated, not as verified absence — and note the 29% constant class is characterised functionally (COG enrichment) rather than treated as an open question.

---

## Bottom line for the ledger

1. **Fix the citation: Han et al., not Zhang et al.** (Han, Li, Filko, Li, Zhang — 5 authors; Zhang is last.) Nat Commun 14:5757 (2023).
2. **Both quoted strings are verbatim at clause level, confirmed un-primed**, and they are very probably two clauses of **one** sentence. Thresholds **q < 0.01** and **> 1.7-fold** are correct as reported, with Methods adding a dual reference point.
3. **The unit is genuinely a PROMOTER** for the 71% figure, and the 71% is genuinely a **union over at least one of 183 CRISPRi TF knockdowns**. The estimand's shape matches.
4. **Two scope limits ride with it:** the union is over TF knockdowns only in **one organism/strain**, and apparently **one medium**; and the paper's other headline counts (201,433 measured activities; 3,720 up / 338 down) plus its entire cross-media recurrence test are **per TF-promoter pair**, not per promoter. Mixing levels would turn a 2.01%-of-pairs number into a 71%-of-promoters claim or vice versa.
5. **The underpowered-vs-truly-constant distinction is NOT made in the main text** — and the one place it could live, **Supplementary Note 2, was unreadable here.** Leave that as unchecked, not as settled either way.
6. **Setting is entirely bacterial and pooled**, not mammalian single-cell.
