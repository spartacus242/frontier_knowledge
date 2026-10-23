# VERIFY - K200667 Table 13 cells open; pairwise different-operator flip rate is 12/186 = 6.45%, exactly 2/3 of the 1-OA triplet bound
Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-23.

## CLAIM

UQ-20261023-09, the leg the entry is Rejected on:

> THE KILL, AND ITS OWN STATED VULNERABILITY. That Table 13 of this clearance summary prints an inter-operator overall agreement of 90.3% [95% CI 82.3%-96.8%] with denominator 56/62 from a design quoted as '3 different operators using 2 different camera units of the same model' - and that the candidate's quantity, the decision-flip rate, is obtained from it only as 1 minus that agreement, which is an ALGEBRAIC identity and an UPPER BOUND on the pairwise different-operator flip rate, not a measured pairwise result.

The entry nominates Table 13's cell-level contents as the single unopened source most likely to settle its own vulnerability, and sets its own criterion: "If the pairwise different-operator flip rate is materially below the triplet bound, the quantitative leg weakens from a match to a bound."

**Verdict in one line: the descriptive and logical content of the claim is confirmed; the premise that the pairwise result is unobtainable is FALSE. The cells opened in one fetch, the pairwise rate is 6.45%, and Table 13 prints pairwise different-operator agreement statistics directly. The entry's own criterion is met, so the leg weakens from a match to a bound.**

## READ LEVEL

**FDA 510(k) summary K200667, EyeArt, Eyenuk, Inc., 2020 - https://www.accessdata.fda.gov/cdrh_docs/pdf20/K200667.pdf - FULL TEXT, including the cell-level body of Table 13.**

Six WebFetch calls against the FDA-hosted primary, all 200. No search was needed; the citation's URL resolves directly. Budget did not run out: I stopped because the sub-claims were answered, with 2 fetches and 3 searches unspent. Nothing here is a budget-induced absence.

The record carried in the entry - "no summariser served Table 13's cells" - **is false as of this check.** The first fetch declined the cells, replying "I can't reproduce the full table text or every cell under the 125-character quote limit." That is a quotation-limit refusal, not an extraction failure, and it dissolved on the second fetch when I asked for the table **as data** (transcribe row and column headers, then every numeric count with its row and column label) instead of as a quotation. All 27 body cells came back. A third fetch asked for the literal token sequence of the text layer to test whether placement was being guessed; it returned the raw lines, confirming row assignment.

ROUTE THAT FAILED: `curl` to the same URL returned `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, 0 bytes. This is the documented tool-scoped proxy 403, not a host block - WebFetch reached the identical URL six times. I did not route around the proxy and did not touch TLS settings.

## WHAT THE SOURCE SAYS (quotations as served)

**(b) Document identity, from the front matter.** K number **K200667**. Trade name **EyeArt**. Applicant **Eyenuk, Inc., 5850 Canoga Ave., Suite 250, Los Angeles, CA 91367**, contact **Kaushal Solanki, Ph.D.** FDA letter dated **August 3, 2020**; the file does not label that date "decision date". 510(k) Summary p. 1 prints "Date Prepared: August 3, 2020". This is a regulatory clearance summary, not a journal article: **there is no author list, no journal, no volume, no issue, no page range in the bibliographic sense, and no DOI.** The entry's citation front-matter fields are therefore not merely unverified but inapplicable; see DEFECTS.

**(c) Every figure the entry asked me to verify, at its printed location - all confirmed.**

| Quantity | As the entry carries it | As printed | Location |
|---|---|---|---|
| Inter-operator OA, mtmDR | 90.3% [82.3%-96.8%], 56/62 | 90.3% [82.3% - 96.8%] (56/62) | Table 13, p. 21 (also narrated p. 10) |
| Intra-operator OA, mtmDR | 93.9% [89.7%-97.7%], 169/180 | 93.9% [89.7% - 97.7%] (169/180) | Table 10, p. 20 (also narrated p. 10) |
| Intra-operator OA*, deviations as ungradable | 90.9% (169/186) | 90.9% [84.7% - 95.7%] (169/186) | Table 10, OA* row, p. 20 |
| mtmDR sensitivity | 92.9% [87.1%-97.5%] (92/99) | identical | Tables 3 and 8, enrichment-permitted cohort, primary care |
| mtmDR specificity | 85.6% [82.2%-89.1%] (457/534) | identical | Tables 3 and 8, enrichment-permitted cohort, primary care |

Narrated forms, p. 10, Section 5: "an inter-operator OA of 90.3% [95% CI: 82.3% - 96.8%] was achieved" and "observed intra-operator overall agreement (OA) for Cohort P1 was 93.9% [95% CI: 89.7% - 97.7%]". Table 13's caption: "EyeArt reproducibility for mtmDR results with Canon CR-2 AF camera." Table 10's caption: "EyeArt mtmDR and vtDR repeatability (intra-operator) with Canon CR-2 AF across all 3 operator-camera pairings for Cohort P1." Table 10 footnote: "OA* (protocol deviations considered ungradable)".

The two design strings, **both confirmed, and both longer than the entry quotes them.** Section 5a, p. 10, served in consecutive fragments: "3 operator-camera pairings consisting of 3 different operators using 2 different camera units" + "of the same model (each operator operated a given camera unit)." The entry's quotation stops at "of the same model" and drops the parenthetical. Section 5, p. 10: "precision (repeatability and reproducibility) study on 62 subjects at 2 US primary care sites (31 subjects each)."

SCOPE CHECK on these two quotations. The design string's opening words "3 operator-camera pairings consisting of..." scope the whole clause to a **pairing** of operator *with* camera unit, not to operator alone; the dropped parenthetical "(each operator operated a given camera unit)" is the words that make the confound explicit. The clause ASSERTS the design. It is a plain description, neither necessary nor sufficient condition, and not a disjunction. The study-description string's opening "precision (repeatability and reproducibility) study on..." scopes 62 subjects to the **whole precision study across both sites**, which is *not* Table 13's denominator - see REGIME.

**(e) What the agreement is computed on - the printed definitions, p. 19.** Served under the caption "For 3x3 contingency tables, the definitions are as follows:"

- "Overall agreement (OA): (PP+NN+UU) / N"
- "Average Positive Agreement (APA): (2*PP) / (TP + PT)"
- "Average Negative Agreement (ANA): (2*NN) / (TN + NT)"
- "Average Ungradable Agreement (AUA): (2*UU) / (TU + UT)"
- marginals: "TN = NN+PN+UN", "TP = NP+PP+UP", "TU=NU+PU+UN", "PT=PN+PP+PU", "UT=UN+UP+UU", "N=TN+TP+TU"

**The template these definitions sit under is a TWO-rater table**, headers "EyeArt result 2" across the top and "EyeArt result 1" down the side, each Negative / Positive / Ungradable. So the printed OA definition `(PP+NN+UU)/N` is written for a **pair** of results. This matters, and the entry's sub-claim (e) understates it: the definition as printed is pairwise, and its application to the three-operator Table 13 is a generalisation the document performs without restating. (As served, "TU=NU+PU+UN" appears to be a typo for NU+PU+UU - MY OWN READING of the served legend, on the grounds that UN already appears in TN and the Ungradable column requires UU.)

Ungradable handling: ungradable is a **third category carried through the table**, not an exclusion - UU counts toward OA's numerator. Protocol deviations are handled separately and two ways: p. 10, "Because the first images of 6 eyes of 3 subjects were missing due to protocol deviations, these were replaced with the second image in each case"; Table 10 caption, "There were 6 missing pairs due to protocol deviations, leaving 180 pairs that were performed per protocol", with the OA* row recomputing on all 186 by counting those 6 as ungradable.

**Unit of analysis - EYE, and the document settles it numerically.** P. 10, Section 5b: "The reproducibility was measured in Cohort P1 by analyzing the agreement among the EyeArt results for each eye". Table 10's caption gives the construction: "3 operators were to each provide one intra-operator pair per eye for a total of 186 eye pairs (3 intra-operator pairs x 31 subjects x 2 eyes/subject)". So **Cohort P1 = 31 subjects = 62 eyes**, and Table 13's N=62 is 62 EYES from 31 subjects at one site. The device output is eye-level: "For each patient eye, the EyeArt results separately indicate whether more than mild diabetic retinopathy", and the summary distinguishes "EyeArt eye-level output (rather than patient-level output by the predicate)". The CIs "account for the correlation between eyes".

**(d) THE DECIDING QUESTION - the cells. OBTAINED.**

First, as the rule requires, WHAT KIND OF DOCUMENT COULD SETTLE THIS: only a document printing the joint cross-tabulation of the three operators' outputs, because the pairwise rate is not a function of the margins or of OA alone. A 510(k) summary carrying a 3x3x3 contingency table is exactly that kind. The entry's nomination was correct by kind, and it delivered.

Literal text-layer lines as served (fetch 3), caption through AUA:

```
Table 13: EyeArt reproducibility for mtmDR results with Canon CR-2 AF camera.
Cohort P1 reproducibility (mtmDR)
Operator C3 result = Negative | Operator C3 result = Positive | Operator C3 result = Ungradable
 Op C2
Op C1       Neg. Pos. Ung.   Neg. Pos. Ung.   Neg. Pos. Ung.
Negative     37   1    0      1    0    0      0    0    0
Positive      0   1    0      1   19    0      0    0    0
Ungradable    0   0    0      0    0    0      1    1    0
OA  90.3% [82.3% - 96.8%] (56/62)
APA 92.2% [81.4% - 98.3%]
ANA 95.8% [91.9% - 99.1%]
AUA 50.0% [21.5% - 78.5%]
```

Layout: 3 rows (Op C1) x 3 columns (Op C2) within each of 3 blocks (Op C3), 27 body cells, no printed margins or totals. Row assignment is **firm** - each row label sits on the same text-layer line as its nine numbers. Column assignment follows the printed header line and the printed block order Negative, Positive, Ungradable. I treated this as a reconstruction and tested it, rather than accepting it: see the triple check below.

As triplets (C1, C2, C3), the eight non-empty cells: **(N,N,N)=37, (P,P,P)=19, (N,P,N)=1, (P,P,N)=1, (N,N,P)=1, (P,N,P)=1, (U,N,U)=1, (U,P,U)=1.** Sum = 62.

**MY OWN ARITHMETIC** (script at `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/t13.py`):

Triple-concordant = 37+19+0 = 56. OA = 56/62 = 90.32%, matching the printed 90.3%. 1 - OA = 6/62 = **9.68%**.

Pairwise: 62 eyes x 3 operator pairs = **186** different-operator comparisons.
- C1 vs C2: 4 disagreements / 62
- C1 vs C3: 2 / 62
- C2 vs C3: 6 / 62
- **Total 12 / 186 = 6.4516%.** Pairwise agreement 174/186 = 93.5484%.

**Ratio = (12/186) / (6/62) = 0.666667 = exactly 2/3.**

That exactness is structural, not coincidental, and I flag the reasoning as MY OWN: with three raters, if any pair disagrees then at least two of the three pairs must disagree, so the average pairwise disagreement always lies in [(2/3)(1-OA), (1-OA)]. Here **every one of the 6 discordant eyes had exactly 2 of 3 pairs disagreeing** (no eye had all three operators mutually different), so the realisation sits at the **lower limit** of that range. 1-OA is therefore loose here by the maximum factor the geometry permits: 3/2.

**TRIPLE CHECK that the cell grid is right, not guessed.** My pairwise reconstruction reproduces all three *other* printed statistics exactly, using the document's own p. 19 formulas applied over the 186 pairs:

- agreeing pairs by category: NN=113, PP=59, UU=2 (sum 174); discordant pair types: N/P=8, N/U=2, P/U=2 (sum 12)
- APA = 2(59)/(2(59)+10) = 118/128 = 92.1875% -> printed **92.2%**
- ANA = 2(113)/(2(113)+10) = 226/236 = 95.7627% -> printed **95.8%**
- AUA = 2(2)/(2(2)+4) = 4/8 = 50.0000% -> printed **50.0%**

Four printed numbers (OA, APA, ANA, AUA) reproduce from one grid. AUA is the decisive one: **(U,U,U)=0, so on any triple-concordance reading AUA would be 0%, not 50%.** The printed 50.0% is obtainable only pairwise. The grid is confirmed.

**(f) Does the file print a pairwise different-operator agreement or flip rate directly? YES - three of them, and this is the finding the entry's premise did not anticipate.** By the printed definitions plus the arithmetic above, **APA 92.2% [81.4% - 98.3%], ANA 95.8% [91.9% - 99.1%] and AUA 50.0% [21.5% - 78.5%] in Table 13 are pairwise different-operator agreement statistics**, computed over operator pairs with printed CIs. What the file does **not** print is a single *overall* pairwise agreement or a flip rate so labelled; the 93.55% overall pairwise figure is MY OWN ARITHMETIC. So Table 13 mixes metric families: **OA is a triplet-concordance statistic while the three statistics printed directly beneath it are pairwise.** That undeclared mixture is precisely the ambiguity the claim's "not a measured pairwise result" trades on.

**(g) Uncertainty on sensitivity and specificity.** Printed as 95% CIs only: sensitivity 92.9% **[87.1% - 97.5%]** (92/99), half-width about +/-5.2 points; specificity 85.6% **[82.2% - 89.1%]** (457/534), about +/-3.4 points (half-widths are MY OWN ARITHMETIC). Six table footnotes add: "'NA' indicates instances when this CI method fails due to small sample sizes."

**No pre-specified threshold exists to compare against**, and I ran a dedicated second sweep rather than resting on the first fetch's silence. Term by term: "performance goal", "endpoint", "acceptance criteri", "pre-specified", "primary analysis", "success criteri", "non-inferiority", "superiority", "lower bound", "lower confidence", "powered" - **none occurs**. "prespecified" occurs twice but not about accuracy: p. 4 "did not meet certain additional prespecified criteria", p. 5 "determined using prespecified significance levels". The nearest thing is p. 7: "The primary outcomes were the sensitivity and specificity of EyeArt for detecting mtmDR and vtDR in subject eyes." P. 3 says only "all specifications were met" without values. **So the comparison the candidate's quantity would be made against is the printed CI width, not an acceptance criterion** - the file bounds and reports the accuracy, and announces no threshold.

## REGIME

**Table 13 (the reproducibility result).** Population: Cohort P1, **31 subjects at one of two US primary care sites**. Unit of analysis: **the eye** - 62 eyes, "3 intra-operator pairs x 31 subjects x 2 eyes/subject" for the companion Table 10. Instrument: a single camera model, "Canon CR-2 AF camera". Operating condition: "3 operator-camera pairings consisting of 3 different operators using 2 different camera units of the same model (each operator operated a given camera unit)", with "The order of camera and operator pairings was randomized." Categories: Negative / Positive / Ungradable, ungradable carried as a live third category. Threshold: the mtmDR (more-than-mild DR) output. Uncertainty: CIs "account for the correlation between eyes".

**Two regime facts that cut against reading Table 13 as a clean operator contrast:**

1. **The contrast is operator-plus-camera-unit, not operator.** Three operators, two camera units, each operator fixed to one unit. So at least two of the three pairings differ in camera hardware as well as in operator, and no C1/C2/C3-to-unit mapping is printed ("not stated"). Any "different-operator" flip rate from this table - the entry's 9.68% and my 6.45% alike - is a flip rate across operator-and-unit pairings. The entry's own quotation contains the words that establish this, in the parenthetical it cut.
2. **Table 13 and the accuracy figures are different cohorts.** 92.9%/85.6% (92/99, 457/534) are the **enrichment-permitted cohort at primary care sites**, hundreds of subjects. Table 13 is the **62-eye / 31-subject precision cohort**. A comparison of a precision-study flip rate against the accuracy cohort's CI crosses cohorts, instruments (one camera model vs. the pivotal imaging) and units.

**DENOMINATOR TRAP, stated in both directions as the rule requires.** The number 62 appears in this file as two different things: **62 subjects** (the whole precision study, both sites, "31 subjects each") and **62 eyes** (Cohort P1 = 31 subjects x 2 eyes), which is Table 13's N. The entry sets the design string, the "62 subjects at 2 US primary care sites (31 subjects each)" string and the 56/62 denominator side by side without saying which 62 is which; read naively that invites 56/62 as 62 subjects across two sites, which it is not. Separately, **186** appears twice for different quantities: Table 10's OA* denominator (186 intra-operator eye pairs, deviations counted as ungradable) and my pairwise inter-operator denominator (186 operator-pair comparisons on 62 eyes). Same integer, different numerator classes - what Table 10's 186 includes that mine excludes is repeat readings by the *same* operator; what mine includes that Table 10's excludes is comparisons *across* operators.

## DEFECTS FOUND

1. **THE DECIDING DEFECT. The claim's "not a measured pairwise result" rests on a premise about availability that is false, and the entry's own stated criterion is met.** The cells are not merely obtainable - they open at the FDA-hosted primary the citation already names, in one fetch, once the request is framed as transcription rather than quotation. The pairwise different-operator disagreement rate is **12/186 = 6.45%**, against the triplet bound **6/62 = 9.68%**. The entry wrote: "If the pairwise different-operator flip rate is materially below the triplet bound, the quantitative leg weakens from a match to a bound." It is below it by a factor of **exactly 2/3** - the maximum looseness the three-rater geometry allows.

2. **The record's "no summariser served Table 13's cells" is false, and the failure was in the ask, not the source.** I reproduced the refusal on my first fetch - "I can't reproduce the full table text or every cell under the 125-character quote limit" - and it is a *quotation-cap* refusal. Asking for the table as structured data returned all 27 cells; asking for the literal text-layer sequence returned the row lines. **A quotation-cap refusal recorded as an extraction failure is the same class of false absence as a spent budget recorded as a property of the source.** The unenumerated universal in the entry - "nobody derived or even listed the 3x3x3 cells" - was true over the instances the ledger had opened and is now **false**: the cells are listed above.

3. **Sub-claim (f)'s expected answer is wrong in the entry's favour-of-the-kill direction.** The file *does* print pairwise different-operator agreement: APA, ANA and AUA, with CIs, in Table 13 itself. The proof is internal and does not depend on my grid reading being right in detail - **AUA is printed as 50.0% while (U,U,U)=0**, so AUA cannot be a triple-concordance statistic on any reading. Table 13 therefore prints a triplet statistic (OA) and three pairwise statistics together without flagging the change of family.

4. **The claim's quotation is cut where the cut drops the words that scope it.** "3 different operators using 2 different camera units of the same model" is verbatim and grammatically clean on both sides, but the printed clause continues "**(each operator operated a given camera unit)**" and the whole is scoped by the opener "3 operator-camera pairings consisting of...". Those are the words that make the operator contrast a confounded operator-and-unit contrast. Grammatically clean, scope-materially incomplete.

5. **Sub-claim (e) as the entry words it understates the document.** OA is indeed (PP+NN+UU)/N over eye-level triplets, and the eye-level unit is confirmed - so the entry is right here. But the p. 19 definition is printed beneath a **two-rater** template ("EyeArt result 1" / "EyeArt result 2"); its extension to three operators is performed silently. The entry treats (PP+NN+UU)/N as if natively a triplet definition.

6. **Citation front matter is inapplicable, not merely unverified.** The entry's sub-claim (b) asks for "full author list in printed order, title, journal or venue, volume, issue, pages, year, DOI". A 510(k) summary has none of these. The correct identity is K-number, trade name, applicant, dates - all confirmed above. Asking a regulatory filing for a DOI is a template misfit; recording "could not confirm authors" against it would be a false absence.

7. **Minor, as served: a probable typo in the p. 19 legend**, "TU=NU+PU+UN" where the Ungradable column marginal requires NU+PU+UU. Flagged as MY OWN READING of the served legend; it does not affect any printed value, since my pairwise computation reproduces AUA at 50.0% exactly.

**What I did NOT establish, said plainly.** I give **no CI for 12/186**, and the file prints none for any pairwise overall quantity. A naive binomial interval on 12/186 would be anti-conservative: the 186 comparisons comprise 3 correlated pairs per eye and 2 correlated eyes per subject, and the document itself computes CIs that "account for the correlation between eyes". Carrying the source's stated uncertainty through, 1-OA = 9.7% has a printed interval of **[3.2% - 17.7%]** (complement of [82.3% - 96.8%]), wide enough that the 6.45%-vs-9.68% gap is not a *sampling* finding. The **2/3 ratio is exact and deterministic given the cells**; the pairwise rate's own sampling uncertainty inherits that of just 6 discordant eyes and is correspondingly large. The separation is structural, not statistical - and that is the stronger claim, not the weaker one.

## ROUTES THAT FAILED

- `curl -sSL https://www.accessdata.fda.gov/cdrh_docs/pdf20/K200667.pdf` -> **`curl: (56) CONNECT tunnel failed, response 403`**, HTTP 000, 0 bytes written. Documented tool-scoped proxy 403; **not a host block** - WebFetch reached the identical URL six times, 200 each. TLS verification and HTTPS_PROXY untouched; proxy not probed.
- WebFetch #1, asking for Table 13 **as verbatim quotation** -> partial refusal: "I can't reproduce the full table text or every cell under the 125-character quote limit." **Recovered** by re-asking for the table as structured data (fetch #2) and for the literal text-layer token sequence (fetch #3). Logged because it is the exact failure the ledger recorded as a property of the source.
- No WebSearch was run; none was needed, and no search classifier refusal occurred. 2 fetches and 3 searches unspent.
- No sub-claim is COULD NOT CHECK. All of (a)-(g) were reached.

## BEARING ON THE LEDGER ENTRY

**NARROW the kill, and strike its sufficiency. The quantitative leg goes from a MATCH to a BOUND, by the entry's own stated criterion.**

What **HOLDS**, fully and verbatim:
- Table 13 prints inter-operator OA **90.3% [82.3% - 96.8%] (56/62)**, exactly as the entry carries it. Table 10's 93.9% (169/180) and 90.9% (169/186), the design string, the study-description string, and the accuracy figures 92.9% (92/99) and 85.6% (457/534) all verify at their printed locations.
- The logical characterisation is **correct**: 1 - OA is an algebraic identity on the printed OA, it is an **upper bound** on the pairwise different-operator flip rate, and it is **not itself a measured pairwise result**. I checked the direction of the inequality, as the standing rule requires: the bound runs the way the claim says, pairwise <= 1-OA, confirmed both by the three-rater geometry and by the realised numbers.

What **FALLS**:
- The **unspoken premise that the pairwise result is unavailable from this file**. It is available two ways: the cells are served at the primary (pairwise rate **12/186 = 6.45%**, MY OWN ARITHMETIC, grid confirmed against four printed statistics), and Table 13 **prints pairwise different-operator agreements directly** (APA 92.2%, ANA 95.8%, AUA 50.0%). Sub-claim (f)'s answer is YES, not "there is none".
- **Therefore the leg's sufficiency as a kill.** The entry fixed its own trigger in advance. 6.45% against a 9.68% bound, looser by exactly the maximal factor 3/2, is materially below it.

**Recommended bearing: hold the entry's descriptive and logical content; strike the leg's status as sufficient grounds for Rejection and convert it to a PROMOTION CONDITION** - namely that the candidate's decision-flip rate be compared against the measured pairwise figure 12/186 = 6.45% (or against the printed APA/ANA/AUA), not against 1 - OA = 9.68%. If the candidate's quantity was within a factor of 1.5 of 9.68%, that margin is now gone.

Two further corrections the entry should carry regardless of the verdict:
- **Record the cells as opened.** The nomination of Table 13 was correct *by kind* - a 510(k) summary carrying the joint cross-tabulation is the only kind of document that can settle a pairwise question, since the pairwise rate is not a function of OA or of the margins - and it settled it. The ledger's "no summariser served the cells" should be corrected to a quotation-cap refusal that dissolves on a transcription prompt.
- **Fix the regime description.** Table 13's N=62 is **62 eyes from 31 subjects at one site**, not the 62 subjects of the two-site precision study; the 186 of my pairwise denominator is **not** Table 10's 186; and the operator contrast is confounded with camera unit by the clause the entry's quotation cut. Any flip rate taken from this table is a per-eye rate across operator-and-camera pairings in a 31-subject precision cohort, and comparing it to the enrichment-permitted accuracy cohort's CI crosses cohort, instrument and unit.
