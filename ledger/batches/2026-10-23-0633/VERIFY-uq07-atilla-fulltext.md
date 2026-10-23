# VERIFY - Atilla 2017 full text opened: the 19.8% (38/192) is printed and is units SAVED, but the arm is a fixed 2-unit order and the unit's Hb "content" is donor Hb x 450 mL, not measured
Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-23.

## CLAIM

As handed to me (UQ-20261023-07, the single leg the Rejected verdict stands on):

> THE KILL. That this paper randomized what the candidate's own second alternative formulation proposes - label red-cell units by haemoglobin mass, issue by mass, and count the units saved to the same target haemoglobin - and printed its answer: a reduction of 19.8% (38/192) in units from the original order in the haemoglobin-content arm, with target-haemoglobin achievement statistically similar between arms (p=0.125), and transfused units of significantly higher haemoglobin content in the study arm.

The claim has four testable components, and they do not share a fate: (i) the regime characterisation ("label by haemoglobin mass, issue by mass, count the units saved to the same target"); (ii) 19.8% (38/192); (iii) p=0.125; (iv) significantly higher Hb content in the study arm. (ii)-(iv) all verify at printed locations. (i) does not survive the Methods.

## READ LEVEL

**FULL TEXT**, Atilla 2017. Methods, Results, Discussion, Introduction, statistical-methods paragraph, Figure 1 caption and the table headers of Tables 1-3 were all served. What I did NOT get: the numeric cell contents of Tables 1-3 and the plotted values behind Figure 1, which the summariser did not render. Every number I report below is from running text or from a table reference made in running text, and I say which.

Routes, in order:

1. `https://www.tjh.com.tr/jvi.aspx?pdir=tjh&plng=eng&un=TJH-56244` (the route the record names) - **SUCCEEDED in one fetch**. Served the complete front matter, the full English abstract, and the full-text PDF link. The record's "ABSTRACT ONLY, at two routes" is therefore a fact about the record's budget, not about this page: the page itself carries the PDF link in plain sight.
2. `https://jag.journalagent.com/z5/download_fulltext.asp?pdir=tjh&plng=eng&un=TJH-56244` - returned **302 Found** to `https://pdf.journalagent.com/tjh/pdfs/TJH_34_3_244_249.pdf`. The cross-host redirect was returned to me rather than followed, as documented. This is **not a failure**; it is one extra hop.
3. `https://pdf.journalagent.com/tjh/pdfs/TJH_34_3_244_249.pdf` - **SUCCEEDED**, three times, for three different targeted sweeps.

**No route failed.** No error string was returned by any host. I did not run a WebSearch and did not need one: the citation's own publisher route resolves to the PDF in two hops. I did not convert PMC5544044 and did not need to.

The paper is reachable in **two fetches** from the citation the entry already carries. "FULL TEXT OPENED BY NOBODY" was a budget outcome, not a property of the source.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are as served by the summariser from the publisher PDF, in segments under its ~125-character cap. Where I join segments I say so and label the join.

### (b) Front matter

- **Authors, printed order, from the article's own front matter:** Erden Atilla, Selami Kocak Toprak, Sinem Civriz Bozdag, Pervin Topcuoglu, Onder Arslan - printed with diacritics as **Erden Atilla, Selami Koçak Toprak, Sinem Civriz Bozdağ, Pervin Topçuoğlu, Önder Arslan**.
- **Affiliation:** "Ankara University Faculty of Medicine, Department of Hematology, Ankara, Turkey".
- **Title:** "A Randomized Comparison of Hemoglobin Content-Based Versus Standard (Unit-Based) Red Blood Cell Transfusion Policy".
- **Venue:** Turkish Journal of Hematology (Turk J Hematol), **2017;34(3):244-249**, e-ISSN 1308-5263, **DOI 10.4274/tjh.2015.0365**.

The entry's citation is correct in every field. Author order matches. Only the diacritics are stripped (see CITATION CORRECTIONS in the structured output).

### (c) and (d) The numbers, at their printed locations

**THE 19.8% AND THE 38/192 - PRINTED TWICE, IN TWO INCOMPATIBLE SENSES.**

In the **body Results**, immediately after the order-size sentence:

> "Eighty-four of the 92 episodes in the study group were a 2-unit order and 8 were a 3-unit order."
> "The rate of finding Hb content-matched pRBCs was 41.3% (38/92) and the rate of saving pRBC units"
> "was 19.8% (38/192) in the study group."
> "In the case of no Hb content-matched units found in the study group, two pRBC units were given"
> "as ordered in the 54 episodes, respectively."

(Reconstruction from four consecutive served segments; the junction at "and the rate of saving pRBC units / was 19.8% (38/192)" is mid-clause and verified by the overlap of the two returns.)

In the **abstract Results**:

> "In the study group totally, 38 units of pRBCs were transfused with a reduction of 19.8%"
> "(38/192) from the original order."

**These two cannot both be true.** The body calls 38/192 "the rate of **saving** pRBC units"; the abstract says 38 units "were **transfused**". The body is the one that reconciles arithmetically and is the one the paper's own Results section defines, so the body is primary. **The 38 in 38/192 is the number of units NOT transfused.**

The record's recorded doubt (its vulnerability note (b): "the rendering reads both as '38 units were transfused' and as a 19.8% reduction, which cannot both hold ... 38/192 = 19.79% is consistent with 38 being the units NOT transfused") is **CONFIRMED, and resolved in the entry's favour**: the body reading is the saving reading, which is the reading the entry's own claim wording uses ("a reduction of 19.8% (38/192) in units from the original order"). The defect is in Atilla's abstract, not in the entry's quotation of it.

**Grammar on both sides of the cut, and what the opening words scope.** The body sentence's opening words are "The rate of finding Hb content-matched pRBCs was 41.3% (38/92) and..." - so the clause carrying 19.8% is the SECOND member of a conjunction whose first member scopes it: the 38 units saved are saved in exactly the 38 of 92 episodes where a content-matched unit was found. The clause **ASSERTS** the quantity. The following sentence scopes it from the other side: in the other 54 episodes "two pRBC units were given as ordered", i.e. **no saving occurred in 58.7% of the arm's episodes**. A quotation of the 19.8% that drops either neighbour drops the fact that the intervention fired in a minority of episodes.

**MY OWN ARITHMETIC** on the paper's printed order counts: 84 x 2 + 8 x 3 = 192, so the 192 is reconstructable from printed numbers and is the units **ordered** in the study arm. 38 matched episodes each saving one unit gives 38/192 = 19.79%, consistent with the printed 19.8%; units actually transfused in the arm would then be 154, not 38. The paper does not print 154. I flag one residual inconsistency as MY OWN: the paper says the 54 unmatched episodes received "two pRBC units ... as ordered", yet 8 of the 92 episodes were 3-unit orders, which fits only if all 8 three-unit orders fell in the 38 matched episodes. The paper does not say.

**192 and 38 ARE NEVER DEFINED IN METHODS.** There is no Methods sentence defining either quantity, and no exclusion list attached to either. The closest Methods statement of intent is:

> "Using this approach, the goal was to find the best pRBCs from the inventory to decrease the number of units."

Table 2's column headers read "Successfully matched" and "Unsuccessfully matched", and **the paper never defines either term**. So the numerator class of the 38 is defined only by the Results sentence quoted above - matched episodes, one unit saved each - and by nothing else.

**92 IS A PRINTED NUMBER** and it counts **transfusion episodes randomized to the study arm**: "A total of 178 transfusion episodes occurred in 89 patients, which were randomized into a control group (unit-based, n=86) and a study group (Hb content-based, n=92)", and "Eighty-four of the 92 episodes in the study group...". The record's own arithmetic of ~2.1 units ordered per episode (192/92) is therefore **confirmed by the paper's printed order counts themselves** (84 two-unit plus 8 three-unit = 2.09 units/episode), not merely by division. I note one front-matter inconsistency in the paper: Table 1 labels its study column "n=92" beside patient-level characteristics, which cannot be a patient count when 89 patients were enrolled.

**A THIRD, UNRELATED 38.** The Results also print: "Fifty-one patients were evaluated for only 1 transfusion episode whereas 38 patients had 2 or more episodes" "(median of 3, ranging from 1 to 7)." That 38 is a **patient** count and has nothing to do with 38/192. Anyone sweeping for "38" in this paper will hit all three.

**THE p=0.125.** It appears in the **abstract** and in the **Discussion**, citing Figure 1:

> "The rates of achieving targeted Hb were not statistically different in the control and study groups (p=0.125),"

Figure 1's caption is "Comparison of rates of achieving targeted hemoglobin level." **I ran a dedicated sweep for the string "0.125" in the Results section and it does not occur there.** So the claim's p=0.125 is real and printed, but it is an abstract-and-Discussion number pointing at a figure, with no Results-text statement and no numerator/denominator printed in running text for either arm's attainment rate. The clause **ASSERTS** a null ("were not statistically different"); its logical form is a failure to reject, not an equivalence demonstration, and the paper has no power calculation.

**THE HIGHER Hb CONTENT IN THE STUDY ARM.** Results, referencing Table 3: "The Hb content of transfused pRBC units was significantly higher in the study group", **p<0.0001, Table 3**. This one is in the body as well as the abstract. It holds.

### (f) Variance, R-squared, regression, slope, increment - five separate sweeps

I ran each term as its own sweep, not one broad sweep.

- **"variance": does not occur.** The nearest string is "variability", once, and it is about another paper: "Holme et al. [8] stated that pRBC units collected by apheresis demonstrated low variability in volume of RBC mass collected...".
- **"R2" / "R-squared" / "coefficient of determination": does not occur.** No coefficient of determination of any kind is printed.
- **"regression": does not occur.** Consistent with the statistical-methods paragraph, which lists only: "Numerical variables were given as medians and distributions," "which were compared with the nonparametric Mann-Whitney U test" "and the Kruskal-Wallis method." "Nominal variables were compared by cross-table method using the chi-square test." "P<0.05 was assumed to be statistically significant." "SPSS 15.0 for Windows (SPSS Inc., Chicago, IL, USA) was used." **There is no multivariable model anywhere in this paper.**
- **"slope": does not occur.**
- **"increment": occurs exactly ONCE, and it is a sentence about somebody else's study** - Reikvam et al. [10]: "the Hb increment in the patient can be predicted from the Hb dose transfused." Its opening words scope it to a citation of prior work; the clause **RECORDS ANOTHER GROUP'S CLAIM**, and the paper performs no increment analysis on its own data.
- **Second-unit probability, rate or hazard: NONE.** The paper reports a rate of *finding a matched unit* (41.3%, 38/92) and a rate of *units saved* (19.8%). It reports no probability, rate or hazard of needing a second unit, and it has no reassessment step at which such a thing could be defined.
- **One thing it does report, and it is not a variance share:** "There was a positive correlation between the rate of achieving targeted Hb level and Hb content..." (p=0.001). **No correlation coefficient is printed** - only the p-value. So the paper ASSERTS a correlation and does not MEASURE its magnitude; and its outcome is binary target attainment, not the increment. This is not a percent-variance-explained and not a slope on grams.

So on sub-claim (f): **the paper reports none of the four quantities** - no variance decomposition, no percent variance explained, no slope of increment on grams delivered, no second-unit hazard. The entry's statement to that effect is correct, and it is now established at full text rather than inferred from an abstract.

### (g) Was the issuing by MEASURED haemoglobin mass? NO - it was CALCULATED from donor haemoglobin times a constant.

This is the finding that matters most, and it is a direct Methods quotation. Served as consecutive segments:

> "Initial assessment of donor Hb concentration was obtained by finger-stick puncture"
> "as part of the routine procedure at the donor sessions."
> "A calibrated HemoCue hemoglobinometer (Hemo Control, EKF Diagnostics, Poland) was used for Hb determination."
> ...
> "The WB collections were drawn into 450-mL triple bags with a standardized volume of 63 mL"
> "of citrate-phosphate-dextrose solution (Kansuk, Turkey)."
> "A saline-adenine-glucose-mannitol solution (100 mL; Kansuk, Turkey) was added to the RBC bag"
> "after the extraction of 200-250 mL of residual plasma by centrifugation from WB."
> "The volumes of WB collected during phlebotomy and the pretransfusion Hb values of the donors"
> "were all recorded with Hemosoft as part of routine procedure."
> ...
> "Total Hb content of each pRBC unit in the inventory was calculated as"
> "\"donor Hb level x 450 mL\" automatically in Hemosoft."

(Reconstruction from eleven consecutive served segments across one Methods passage; the ellipses mark where I omitted the leukoreduction and donor-cut-off sentences, which I quote in full nowhere else and which do not bear on the formula.)

**No unit was assayed.** The per-unit "Hb content" is the product of (i) a **capillary finger-stick donor haemoglobin** measured at the donor session on a HemoCue, and (ii) the **nominal 450 mL** collection volume - a **constant**. Three consequences, all mine to state but each resting on that quotation:

1. The only quantity that varies between units in Atilla's content figure is the **donor's** Hb. Collected volume does not enter the formula even though the paper says the collected volumes "were all recorded with Hemosoft".
2. The formula is computed on **whole-blood** terms (donor Hb x 450 mL) while the issued product is a leukoreduced packed red cell unit from which "200-250 mL of residual plasma" was removed and to which 100 mL of SAGM was added. The paper does not correct for processing loss.
3. Its units are g/dL x mL, i.e. the figure is a scaled donor Hb, and the paper prints no validation of it against any measured unit haemoglobin.

The claim's phrase "**label red-cell units by haemoglobin mass**" and the candidate's exposure "the **measured** haemoglobin mass of the specific red-cell unit issued" are therefore **not what Atilla implemented**. Nor were units *labelled*: the content figure lived in the Hemosoft blood-bank database and was queried at order time.

### (e) The policy, in the paper's own words

**Control arm - a FIXED TWO-UNIT policy, not a single-unit policy:**

> "All patients received two pRBC units in 86 transfusion episodes as requested by the clinician in the control group."

**Study arm - two- and three-unit orders:**

> "Eighty-four of the 92 episodes in the study group were a 2-unit order and 8 were a 3-unit order."

**The study-arm algorithm:**

> "total Hb required to achieve targeted Hb (g) = (targeted Hb - actual Hb) g/dL x TBV"

The paper **does not print a TBV equation** - it records height and body weight and says nothing about how total blood volume was computed from them. Clinicians supplied "actual and target Hb level of each patient during pRBC orders"; **target Hb is never formally defined**, and the study arm's median target was 9.3 g/dL. Post-transfusion sampling: "Posttransfusion Hb level was checked 2 h after transfusion in both groups" "by using peripheral venous blood samples (Coulter STKS, USA)."

**Design and randomisation:**

> "The present study was carried out as a prospective, randomized, open-label clinical study"
> "A total of 178 transfusion episodes occurred in 89 patients, which were randomized into a control group"
> "(unit-based, n=86) and a study group (Hb content-based, n=92)."

The paper gives **no sequence generation and no allocation-concealment method**. It is open-label.

**Aim, Introduction:**

> "By using a computer program, Hemosoft, in a randomized study, we aimed to use pRBCs according to their total Hb content"
> "in order to decrease the number of units and to compare the rates of achieving the target Hb"
> "concentration levels with the current transfusion practice."

**No primary endpoint is declared anywhere in the paper.** The aim is a conjunction of two co-equal objectives - decrease unit count, and compare target attainment. Units saved is one of two, not a declared primary.

## REGIME

Atilla 2017's regime, in its own words, and whether the claim sits inside it.

- **Population:** adult haematology patients at "the Hematology Clinic and Stem Cell Transplantation Unit and the Blood Banks of Ankara University". Diagnoses: acute leukaemia 44, lymphoproliferative disease 17, plasma cell disorders 11, bone marrow failure 15, sickle cell anaemia 1, solid tumour 1. **Exclusions: acute blood loss, autoimmune haemolytic anaemia, age under 18.** 89 patients, 55 male / 34 female, median age 46 (range 19-75).
- **Country and years:** Turkey; enrolment "between October 2010 and February 2011" (a four-month window; the DOI's 2015 stem indicates a long review).
- **Operating condition - THE DECISIVE ONE:** **multi-unit ordering throughout.** The control arm received two units in every one of its 86 episodes. The study arm's orders were 2 units (84/92) or 3 units (8/92). **No episode in either arm was a single-unit order, and there is no reassess-after-one-unit step anywhere in the protocol.**
- **Instrument:** Hemosoft Blood Banking Management & Information System, querying a per-unit Hb content **calculated** as donor HemoCue Hb x 450 mL. No unit assay.
- **Intervention's firing rate:** 41.3% (38/92). In 58.7% of study-arm episodes "two pRBC units were given as ordered", i.e. the arm reverted to control behaviour.
- **Unit of analysis:** randomisation was at the **transfusion episode** (178 episodes in 89 patients, 86 vs 92), with patients contributing 1-7 episodes (51 patients contributed one; 38 contributed two or more, median 3). **No clustering adjustment**: the analysis is Mann-Whitney / Kruskal-Wallis / chi-square only. Episodes from the same patient are treated as independent. Table 1 reports patient-level characteristics under "n=92", an episode count.
- **Outcome window:** post-transfusion Hb at **2 hours**.
- **Endpoint:** two co-equal declared aims; no primary endpoint named; efficacy judged by "the rates of achieving targeted Hb levels" (Figure 1, p=0.125).

**Does the claim sit inside this regime?** The claim as the entry words it - "label red-cell units by haemoglobin mass, issue by mass, and count the units saved to the same target haemoglobin" - sits inside it only **loosely and with two words wrong**: "label" (there was no label; there was a database field) and "mass" / "measured" (there was no measurement; there was donor Hb x a constant). The candidate question's own canonical regime - adult inpatients **under a single-unit policy**, **measured** unit Hb mass, a **48-h second-unit** endpoint - sits **outside** Atilla's regime on all three axes. Atilla is silent outside its own regime, not supportive.

## DEFECTS FOUND

Ordered by what they do to the leg.

1. **THE EXPOSURE IS ESTIMATED, NOT MEASURED, AND ITS ONLY VARYING INPUT IS THE DONOR'S CAPILLARY HAEMOGLOBIN.** "Total Hb content of each pRBC unit in the inventory was calculated as 'donor Hb level x 450 mL' automatically in Hemosoft." The claim's "label red-cell units by haemoglobin mass" and the candidate's "measured haemoglobin mass of the specific red-cell unit issued" are a different quantity from Atilla's. One word away - "calculated" for "measured" - and it is the word the candidate's L1 and L2 turn on. This is the defect the entry could not see at abstract level, and it is a defect in the kill, not in the candidate.
2. **THE CONTROL ARM IS A FIXED TWO-UNIT POLICY.** "All patients received two pRBC units in 86 transfusion episodes as requested by the clinician in the control group." The entry recorded its own falsification condition for this leg: "If its full text shows the arm genuinely multi-unit throughout with no reassessment-triggered second-unit endpoint, this rejection weakens from 'answered' toward 'answered for a different denominator'." **That condition is met in the paper's own words, for both arms.** The entry predicted the finding and set the consequence; I am reporting that the prediction came true.
3. **ATILLA'S ABSTRACT MISSTATES ITS OWN HEADLINE NUMBER.** Abstract: "38 units of pRBCs were transfused with a reduction of 19.8% (38/192) from the original order." Body: "the rate of saving pRBC units was 19.8% (38/192)". 38 is units **saved**. The abstract sentence is self-contradictory, and the record read this paper at abstract level only. The entry's claim wording happens to use the body's (correct) reading, so the entry is not damaged - but anyone citing the abstract sentence verbatim would be citing an error.
4. **THE INTERVENTION FIRED IN A MINORITY OF EPISODES.** 41.3% (38/92). In the other 54 episodes the arm behaved exactly like the control. A claim that the paper "randomized ... issue by mass" is true of the assignment and false of 58.7% of the treatment actually delivered; the 19.8% is a diluted, intention-to-treat-like figure, and the paper never reports a per-protocol saving rate among matched episodes.
5. **NO PRIMARY ENDPOINT, NO POWER CALCULATION, AND THE p=0.125 IS A FAILURE TO REJECT.** The Introduction states two co-equal aims. The Conclusion nevertheless asserts equivalence: "we clearly demonstrated that the efficacy of Hb content-based transfusion is similar to that of unit-based transfusion." **"Clearly demonstrated ... similar" from p=0.125 on 86 vs 92 episodes with no power calculation is a non-inferiority claim from an underpowered null test.** The hedged formulation elsewhere in the paper is the Discussion's "were not statistically different (p=0.125)", and that is the one to quote.
6. **EPISODES TREATED AS INDEPENDENT.** 178 episodes from 89 patients, up to 7 per patient, analysed with chi-square and Mann-Whitney. No random effect, no clustering correction. The effective sample is smaller than the printed one.
7. **NO MODEL OF ANY KIND.** No regression, no variance decomposition, no R-squared, no slope. The one dose-response-adjacent result is "a positive correlation between the rate of achieving targeted Hb level and Hb content" with **p=0.001 and no coefficient printed** - an asserted association with an unmeasured magnitude.
8. **Internal number inconsistencies:** Table 1's "n=92" against 89 patients; "two pRBC units were given as ordered in the 54 episodes" against 8 of the 92 being 3-unit orders; "Successfully matched" / "Unsuccessfully matched" used as Table 2 headers and never defined.
9. **ONE GROUP, ONE CENTRE, FOUR MONTHS, OPEN-LABEL, NO ALLOCATION METHOD.** Atilla/Arslan, Ankara, Oct 2010 - Feb 2011. The entry's vulnerability note (a) stands and is now sharper: the paper does not state how randomisation was performed.
10. **A ROUTE LOGGED AS EXHAUSTED THAT WAS NOT.** The record's "ABSTRACT ONLY, at two routes" and "FULL TEXT OPENED BY NOBODY" describe three readers' spent budgets. The publisher page the record already reached **carries the PDF link**; the PDF is two fetches from the citation; no host refused anything. This is exactly the false absence the batch rules warn about.

## ROUTES THAT FAILED

**None.** No fetch returned an error. For the record, in order: tjh.com.tr article page - 200, front matter plus full abstract plus PDF link; jag.journalagent.com download_fulltext.asp - **302 Found** to pdf.journalagent.com (a redirect returned for me to follow, not a failure); pdf.journalagent.com/tjh/pdfs/TJH_34_3_244_249.pdf - 200, full text, fetched three times for three separate sweeps. I spent 6 of 8 fetches and 0 of 3 searches. **No sub-claim was left unreached: (a) through (g) are all answered above.** The only thing I could not read is the numeric interior of Tables 1-3 and the plotted values of Figure 1, which the summariser did not render; I mark those **COULD NOT READ**, not absent, and I did not rely on them.

## BEARING ON THE LEDGER ENTRY

**The kill's numbers survive. The kill's regime characterisation does not. Bearing: NARROW the leg, and on the entry's own recorded rule that is enough to move Rejected to Provisional.**

What holds, verbatim and at a printed location:

- **19.8% (38/192)** - printed in abstract Results and, better, in body Results as "the rate of saving pRBC units was 19.8% (38/192) in the study group". The entry's wording ("a reduction of 19.8% (38/192) in units from the original order") matches the **body**, which is the primary and the correct reading. The entry's own vulnerability note (b) is resolved **in the entry's favour**: 38 is units saved, and the entry read it that way.
- **p=0.125** - printed in abstract and Discussion, citing Figure 1; **not** in the Results text. Target attainment "not statistically different". Holds, with the modality noted: it is a failure to reject, and the paper's Conclusion overstates it as "clearly demonstrated ... similar".
- **Significantly higher Hb content in the study arm** - printed in body Results, **p<0.0001, Table 3**. Holds, of the **calculated** content.

What falls:

- **"label red-cell units by haemoglobin mass"** - FALSE as described. No labelling; a Hemosoft database field.
- **"issue by mass"** - FALSE as described, twice over. The quantity is not a measured mass: "Total Hb content of each pRBC unit in the inventory was calculated as 'donor Hb level x 450 mL'". And the mass-based issue fired in only 41.3% of episodes.
- **The implicit single-unit framing** - FALSE. "All patients received two pRBC units in 86 transfusion episodes ... in the control group"; study arm 2- or 3-unit orders. There is no single-unit policy, no reassessment step, and therefore no second-unit quantity of any kind in this paper.

**Why that narrowing is decisive rather than cosmetic.** The entry itself wrote the test: "a population swap (single-unit policy instead of multi-unit ordering) on an answered question is a disguised known, not a new question." At full text the gap is **larger than a population swap**. It is a swap of the **exposure** (calculated donor-Hb-times-a-constant versus measured per-unit Hb mass), of the **policy** (fixed 2-unit order versus single-unit-then-reassess), and of the **endpoint** (order trimming at issue, with no reassessment, versus a reassessment-triggered second-unit rate). Three axes, not one. And the entry pre-committed to the consequence: "this rejection weakens from 'answered' toward 'answered for a different denominator', and the narrower L1+L2 question becomes the right entry."

**What Atilla is, stated in the terms this ledger uses.** It is an **evaluation**, not a definition or an announcement - it randomised an issuing policy and printed a units-saved figure with a null on attainment. So it is a genuine prior, and it is correctly named as the nearest one. But its measurand is **units trimmed off a two-unit order when the inventory happened to hold a high-content unit**, and the candidate's measurands are **the share of increment variance attributable to issued unit Hb mass**, **the slope on grams delivered**, and **the second-unit hazard under a single-unit policy**. On sub-claim (f), at full text and after five separate dedicated sweeps, Atilla prints **none** of those three, and prints no model at all. Its one dose-response-adjacent result is an uncoefficiented correlation (p=0.001) on a binary attainment outcome.

**Instancing the existence premise behind the kill, as required.** The premise the Rejected verdict needs is: *there exists a published randomized study answering the candidate's second alternative formulation.* Instances I opened: **one** - Atilla 2017, at full text, the only instance the entry names. Classification: **FALSE as the formulation is worded** (it answers a neighbouring question with an estimated exposure under a fixed two-unit policy), **TRUE of a looser formulation** ("could issuing by computed per-unit Hb content reduce units ordered at equal attainment? yes, 19.8%, one centre, 2010-11"). I opened no other instance and name none; whether some other study randomised issuing by **measured** unit Hb mass under a **single-unit** policy is **UNENUMERATED** here - my budget went to the full text I was sent for, and I ran no search. That is a budget fact, not a finding of absence in either direction.

**Group count.** Atilla's article, the same group's conference item and the Turkish thesis the record lists are **one group citing itself** (Atilla/Arslan, Ankara University), one centre, one four-month enrolment window. The entry already counted them once; that was right.

**Recommended bearing on the verdict.** The leg does not strike clean, but it does not hold at the strength Rejected requires either. The entry stands on this leg **alone** and pre-declared that this finding weakens it; both adversaries independently placed the entry at Provisional. I find the printed numbers exactly as the entry carries them and the regime materially different from the candidate's on exposure, policy and endpoint. **Converting the Rejected to Provisional, with the promotion condition that the entry be re-entered narrowed to L1+L2 with L3 dropped and the decomposition named, is what the full text supports.** The entry's text already contains that successor; what it lacked was the read that justified it.

**One line of my own reasoning, labelled as mine and not a source finding:** the inference that each matched episode saved exactly one unit (and hence that 154 units were transfused) is MY arithmetic from 38/192 = 19.79% against 84x2 + 8x3 = 192; the paper prints neither the per-episode saving nor the units transfused. A fetch of Table 2's numeric interior would ground it, and that table I could not read.
