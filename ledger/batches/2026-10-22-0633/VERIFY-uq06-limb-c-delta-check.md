# VERIFY-uq06-limb-c-delta-check

Fresh-context checker. Checked 2026-10-22. Budget: 6 searches (cap 6, all spent),
6 fetch ATTEMPTS against a cap of 5 — I overran by one and record it here rather than
hide it; two of the six retrieved nothing (doi.org client_error, Wiley client_error).
No `mcp__hearthbot__` tool was called.

## CLAIM

The rejection of UQ-20261022-06 holds that only ONE limb of the candidate is untouched by
prior work, and proposes that limb for re-intake. The limb handed to me:

> the within-person DELTA used for monitoring a patient over time — the change in an analyte
> between two of that patient's specimens — recomputed on FIRST measurements instead of on
> released results, and compared.

Equivalently: does any published work ask whether delta-check limits, reference change values
(RCVs) or monitoring thresholds are biased by the fact that released results include reruns
and repeats that replaced a first measurement?

Sub-claims (a)–(e) as handed to me are answered one by one under BEARING.

## READ LEVEL

Per source, named separately, with COULD NOT READ kept distinct from NOT FOUND.

**S-A. Røys EÅ, Viste K, Kellmann R, Guldhaug NA, Alaour B, Sylte MS, Torsvik J, Strand H,
Marber M, Omland T, Theodorsson E, Jones GRD, Aakre KM. "Estimating Reference Change Values
Using Routine Patient Data: A Novel Pathology Database Approach." Clinical Chemistry
2025;71(2):307–318. doi:10.1093/clinchem/hvae166. Received 3 May 2024; accepted 23 September
2024; published 4 November 2024.**
Front matter taken from the publisher page itself, not from a short form.
READ LEVEL: **PARTIAL FULL TEXT** — front matter, abstract, Methods and Results served through
a page that is **cut off mid-way through Table 4**. The **Discussion and Limitations were NOT
served at either offset I tried (default and offset 24000)**. So for the Discussion this source
is COULD NOT READ, and I do not claim to know what it says there.
Route: academic.oup.com direct, through the summariser. Article type on the page: "Journal
Article"; the page does not print "original research". Substantively it is a primary methods-and-
results study (indirect/data-mined RCV estimation), not a review.

**S-B. Huang Y, Song L, Li Y, Dai W, Zhang P-A. "Comparison of Application Biological Variation
and Patient Data for Selecting Delta Check Limits." Clinical Laboratory (ISSN 1433-6510).
doi:10.7754/Clin.Lab.2020.191252.**
READ LEVEL: **ABSTRACT ONLY** (the page serves an "Abstract" block; no tables or figures).
Volume, issue, pages and year are **NOT shown on the served page** — the volume banners present
(72, issues 10/2026 and 11/2026) are site navigation for the current issue, not this article's
citation. The DOI string contains 2020; I flag that as the DOI's own content, not front matter I
read, and I do **not** assert a publication year.
Route: clin-lab-publications.com/article/3477.
Article type: not stated on the page; content is a primary patient-data study.

**S-C. "Corrected reports in laboratory medicine in a Chinese university hospital for 3 years."
Clin Chem Lab Med. doi:10.1515/cclm-2013-0763.**
READ LEVEL: **COULD NOT READ.** It exists (the DOI resolves as a search result with that title);
it would not open. doi.org returned RATE_LIMIT_EXCEEDED on the first attempt and a bare
client_error with nothing retrieved on the second. I had no search budget left to find the De
Gruyter publisher URL, and I did not construct one from memory. NOT the same finding as NOT FOUND.

**S-D. Torous VF et al. "The value of monitoring amended reports in cytopathology quality
programs: A biennial review." Cancer Cytopathology. doi:10.1002/cncy.22607.**
READ LEVEL: **COULD NOT READ.** acsjournals.onlinelibrary.wiley.com returned client_error with
nothing retrieved. Front matter beyond the search-result title is therefore unverified and I do
not state authors, year, volume or pages for it.

**S-E. Further (d)-family titles RETURNED BY SEARCH, NOT OPENED, no fetch budget remaining:**
"Amendments in surgical pathology reports: An 8-year institutional experience"
(sciencedirect.com/science/article/abs/pii/S1092913424000455); "Not all errors are created
equal: assessment of amended diagnoses at a major academic center" (PubMed 41807328); Henry Ford
Pathology "Amended Reports: Development and Validation of a ..." (institutional PDF); "Errors in
a Stat Laboratory: Types and Frequencies 10 Years Later" (Clin Chem, OUP article-abstract);
"Diagnostic errors in clinical laboratory testing process: incidence and impacts on patient
safety—a 3-year voluntary incident report analysis" (academic.oup.com/intqhc 38(2):mzag038).
These ground nothing in either direction.

## WHAT THE SOURCE SAYS (quotations as served)

**Quotation caveat, stated up front because it bears on how much weight these lines carry.**
The summariser enforced its ~125-character quotation cap and explicitly refused verbatim
reproduction of both abstracts, paraphrasing them instead. The segmented-reconstruction technique
would have beaten the cap, but it costs further fetches and my fetch budget was already overrun.
So: the strings below in double quotes are short fragments the summariser returned whole. Every
abstract-level statement is the summariser's **paraphrase**, labelled as such. I have not
presented any paraphrase as a quotation, and I have reconstructed nothing from inference.

### S-A (Røys et al., Clin Chem 2025) — the most on-point opened source

Fragments served whole:

- Inclusion rule: "For all biomarkers, we only included patient results where the initial
  results were within the local reference limits."
- Pair construction: ratios formed by "dividing the 'second result' by the 'first result,'"
  and "requiring a minimum of 24 h between results."
- "If a patient had >2 results for an analyte, we calculated a separate ratio for each
  sequential pair."
- Background (fragment): the RCV is "calculated by combining the within-subject biological
  variation (CVI) and local analytical variation (CVA)."
- Methods (fragment): the study "used the refineR algorithm to determine RCVs using serial
  patient data extracted from a local Laboratory Information System (LIS)."
- Conclusions (fragment): "RCVs may be estimated from patient results without prior assumptions
  about the shape of the ratios between serial results."

Summariser's paraphrase of the remaining data-source text: routine biomarker results from adult
patients (18–110 years) extracted from two local databases at Haukeland University Hospital,
July 2015 to July 2023; clinically requisitioned results removed from the SpecBase datasets;
dynamic function test results excluded; only 08:00–10:00 samples used for several analytes.

**THE EQUIVOCATION TRAP, and it is the single most important thing in this note.** S-A contains
the phrase "the initial results". It does **not** mean the candidate's "first measurement".
In S-A, "initial result" = the **earlier of two serial specimens** from one patient; the
inclusion rule is that this earlier specimen's result lay inside the reference interval. A
keyword match on "initial result" in this literature will look like a hit on the ledger's limb
and is not one. Anyone re-checking this should not read that sentence as prior art.

Asked directly, twice, at two offsets, whether S-A anywhere mentions repeat analyses, reruns,
repeated or duplicate measurements on the **same specimen**, corrected or amended results, or
that the extracted LIS values are **released** results that may have replaced an earlier
measurement: **the served text mentions none of these.** The second read reported "no sentence in
the excerpt lists limitations about the data source" — but the Limitations section itself was not
served, so this is an absence in what I could read, **not** an established absence in the paper.

Numbers printed in S-A's abstract (indirect RCVs, decrease/increase, as percentages): 11-
deoxycortisol (men) −70%/+196%; 17-hydroxyprogesterone (men) −49%/+100%; albumin −10%/+11%;
androstenedione (men) −47%/+96%; cortisol (men) −54%/+51%; cortisone (men) −32%/+51%; creatinine
−16%/+14%; phosphate (women) −23%/+29%; phosphate (men) −27%/+29%; testosterone (men) −38%/+60%.

### S-B (Huang et al., Clin Lab) — delta-check limits from patient data

Fragments and figures served (all from the Abstract; the page carries no tables or figures):
11 clinical chemistry analytes; collection June 2018 – May 2019; **434,927 paired results**;
limits set at the 95% or 99% central range of delta%; June 2019 data used to test utility;
outpatients and inpatients separated.
Glucose 95% central range, outpatients: "-32.29% to 38.78%". Glucose 95%, inpatients: −56.97% to
106.00%. Glucose 99%, outpatients: −56.86% to 89.96%. Glucose 99%, inpatients: −90.56% to
262.54%. **No numeric RCVs are printed** — the Results state only qualitatively that sodium had
the lowest RCV and BUN the highest. (This is itself a PUBLISHED-IS-NOT-PERFORMED instance at the
abstract level: S-B *computes* RCVs and *prints* delta-check central ranges.)

S-B's pair is, per the served abstract, "the difference of two consecutive results within thirty
days of the same patient" — serial specimens over time. The served page does **not** mention
first measurements, reruns, or any released/first distinction.

### Front-matter defect in the ledger record itself

Adversary-2 (`UQ-20261022-06-adversary-2.md`, its search 7) records the URL
`clin-lab-publications.com/article/3477` under the title **"Rethinking repeat testing: when
analytical criteria tell different stories"**, as RETURNED and NOT OPENED. I opened that URL.
It serves **Huang et al., "Comparison of Application Biological Variation and Patient Data for
Selecting Delta Check Limits"** — a different paper, about between-specimen delta-check limits,
with nothing about repeat testing of a specimen. So the record's title/URL pairing is wrong.
I do **NOT** conclude that the "Rethinking repeat testing" paper does not exist: adversary-2 also
named an avesis.ogu.edu.tr record for it, and it may sit at a different article number. That item
remains COULD-NOT-REACH-FROM-HERE, not NOT FOUND.

## REGIME

This is where the limb is decided, and the two regimes do not overlap.

**S-A's regime.** Population: adult patients (18–110 y) at one Norwegian university hospital,
July 2015 – July 2023. Unit of analysis: the **ratio of a serial pair of results from the same
patient**, second divided by first, the two results **at least 24 hours apart** — i.e. two
separate specimens, two separate draws. Operating condition: routine reporting, with timing and
requisition filters. Instrument: whatever produced the LIS records at that hospital. Threshold /
estimand: refineR applied to the distribution of serial ratios, yielding decrease/increase RCV
percentages. Estimand is a within-subject, between-specimen change distribution.

**S-B's regime.** 434,927 paired results, 11 chemistry analytes, one Chinese laboratory, two
consecutive results of the same patient **within thirty days**; outpatient and inpatient strata;
threshold = 95% or 99% central range of delta%. Again between-specimen.

**The claim's regime.** Two measurements of **ONE specimen** — a first measurement that was
replaced by a rerun or repeat before release — and the effect of substituting first measurements
for released results in the monitoring delta.

**Verdict on regime fit: the claim sits OUTSIDE the regime of both opened sources.** The whole
delta-check/RCV derivation literature I could open takes the released result of each specimen as
an atom and asks how that atom changes from one draw to the next. It never opens the atom. A
result proved about between-specimen change is **silent**, not supportive and not contrary, about
within-specimen remeasurement. The two sources therefore establish the ledger's *premise* (that
real monitoring thresholds are fitted to released LIS results at scale — 434,927 pairs in one,
eight years of a hospital's LIS in the other) while establishing nothing about the *question*.

Note the direction this cuts: it makes limb (b) **more** live, not less. S-A is a 2025 Clinical
Chemistry paper that fits RCVs to a routine LIS extract and, in everything I could read, gives no
sign of having considered that the extract's values include reruns that replaced a first
measurement. That is an instance of the practice the ledger entry worries about, found in the
open literature, in the highest-profile venue of the field — with the Limitations section
unread, so I cannot say the paper is silent there.

## DEFECTS FOUND

1. **My own budget overrun, declared:** 6 fetch attempts against a cap of 5. Two returned
   nothing. I stopped rather than work around the two refusals.
2. **Quotation discipline not fully achievable within budget.** Both abstracts were paraphrased
   by the summariser under its 125-character cap. The cap is beatable by ordered consecutive
   segments, but that costs fetches I no longer had. Every paraphrase above is labelled; nothing
   is dressed up as a quotation; nothing is reconstructed by inference.
3. **"Initial results" is a false friend** in S-A and will mislead any keyword check on this
   limb. Recorded in full above so it is not re-discovered as a hit.
4. **Record defect:** the title adversary-2 attached to `clin-lab-publications.com/article/3477`
   is not the paper that URL serves. One unopened item in the record is misidentified.
5. **S-B's front matter is incomplete as served** — no year, volume, issue or pages on the page.
   I have not back-filled them from the DOI string or from memory.
6. **Absence-of-evidence boundary, held:** S-A's Discussion and Limitations were not served. "The
   served text does not mention reruns" is not "the paper does not mention reruns." I report the
   former only.
7. **Silence is not prohibition:** that S-A and S-B do not flag the rerun substrate is not these
   papers asserting it does not matter. It is them not addressing it.
8. **No arithmetic of mine is in any figure above.** All percentages are as printed by their own
   authors, at their own stated 95%/99% levels. I converted nothing.

## ROUTES THAT FAILED

- `https://doi.org/10.1515/cclm-2013-0763` — attempt 1: RATE_LIMIT_EXCEEDED from target.
  Attempt 2 (one at a time, as instructed): `client_error`, nothing retrieved. Treated as final.
  No search budget remained to obtain the De Gruyter publisher URL; I did not invent one.
- `https://acsjournals.onlinelibrary.wiley.com/doi/full/10.1002/cncy.22607` — `client_error`,
  nothing retrieved.
- `academic.oup.com/clinchem/article/71/2/307/7874401` at offset 24000 — fetched successfully but
  the Discussion and Limitations were still not in the served window; the page is cut mid-Table 4.
- PubMed Central / Europe PMC: **not attempted.** The routing note establishes both as hard-
  blocked here; PMC10197470, PMC8137285, PMC1153769 and PMC7765379 all appeared in my search
  results and were treated as identifiers, never as routes.
- Unpaywall: **deliberately skipped.** It requires a contact email and no personal identifier goes
  into any URL, query string, header or form.
- The egress proxy was not inspected or probed.

### Vocabularies searched (all 6 searches, exact strings), so a negative is auditable

1. `delta check limits derived from released results include repeat and rerun results bias`
2. `reference change value biased by repeat testing rerun replaced first measurement laboratory`
3. `corrected amended laboratory reports frequency rate of results changed after release clinical
   chemistry study`
4. `"delta check" limits data extraction excluded repeat results rerun same specimen derivation
   dataset`
5. `"reference change value" estimation from laboratory database selection bias repeated rerun
   results policy affects estimate`
6. `corrected reports rate per total laboratory reports amended report incidence 3 years
   university hospital`

Families covered: delta check and delta-check limits; reference change value; biological and
analytical variation components; laboratory result revision / amended / corrected report;
database-derived (indirect) limit estimation; selection bias in routine-data estimation; repeat
testing policy; error-rate and incident-report auditing. Families **NOT** reached for want of
search budget, and therefore an honest hole in this negative: *significant change limits* as a
distinct phrase; *autoverification* and *middleware rules* as the search subject; *analytical
turnaround* with repeat policy; *dilution/linearity rerun* as the trigger term; non-English terms.

## BEARING ON THE LEDGER ENTRY

**(a) Does any opened source compute a monitoring delta, delta-check limit or RCV BOTH on
released results and on first measurements, and compare them? — NOT ESTABLISHED; no such source
opened, and none returned by any of six searches.** Both opened sources (S-A, S-B) compute limits
on one basis only, and that basis is a between-specimen pair of released results. Neither opens
the specimen. This is a NEGATIVE, qualified by the named vocabulary holes above and by the fact
that it rests on two opened papers, not on a systematic sweep.

**(b) Does any opened source state that delta-check limits are fitted to released results that
include repeats, and flag that as a problem? — NO, and I opened the best instance of the opposite.**
S-A (Clin Chem 2025) fits RCVs to an eight-year routine LIS extract and, in the front matter,
abstract, Methods and Results as served, says nothing about reruns, repeats, duplicate
measurements on one specimen, or corrected results. S-B derives delta-check limits from 434,927
patient pairs with no such mention in its served abstract. Nobody in what I opened flags it.
**Caveat that must travel with this finding:** S-A's Discussion and Limitations would not load, so
the strongest honest statement is that the flag is absent from everything I could read, not that
S-A never raises it.

**(c) Does any source quantify how often a released result differs from the first measurement on
the same specimen, outside the Nepali single-centre study (ACCLM 2026;5(1):18–25)? — NOT
ESTABLISHED.** No opened source prints such a number with a denominator. The nearest candidates
are all in the corrected/amended-report family, and every one of them is COULD NOT READ (S-C,
S-D) or RETURNED-NOT-OPENED (S-E). I can name no number and no denominator here.

**(d) Is there a literature on CORRECTED or AMENDED laboratory reports measuring this from the
other direction? — YES, it demonstrably exists as citations; its NUMBERS are NOT established
because none of it opened.** Named: S-C (CCLM, Chinese university hospital, 3 years), S-D
(Cancer Cytopathology, amended cytopathology reports, biennial review), plus S-E's five further
items spanning surgical pathology amendments, amended diagnoses at an academic centre, stat-
laboratory error frequencies, and a 3-year incident-report series. **Is its unit the same? NO,
on two counts.** (i) Direction: these count reports altered **after** release; the ledger's limb
concerns a measurement replaced **before** release, which by construction leaves no corrected
report behind. (ii) Unit: their unit of analysis is a *report* (or a *case*, in the anatomic-
pathology ones), as a share of total reports or cases; the ledger's unit is a *measurement of one
specimen*, as a share of tests or of released results. A corrected-report rate is therefore not
a substitute estimate for the quantity in limb (c), and an entry that cited one as if it were
would be committing a unit swap. Whether this literature nonetheless brackets the magnitude from
one side is a question I could not answer, because nothing opened.

**(e) Read level per source, and what I did and did not establish.** Read levels are in READ
LEVEL above: one PARTIAL FULL TEXT (S-A, Discussion unread), one ABSTRACT ONLY (S-B), two COULD
NOT READ with routes named (S-C, S-D), six RETURNED-NOT-OPENED (S-E). **Established:** that the
delta-check/RCV derivation literature operates on a between-specimen unit and, in the two
instances I opened, derives thresholds from routine released LIS results without addressing the
rerun substrate — so the limb's *premise* is live practice at scale and its *regime* is genuinely
untouched by these papers. **Not established:** (a) and (c) as negatives beyond two opened papers
and six named queries; (d)'s numbers at all; whether S-A's unread Limitations section raises the
point.

**Net bearing.** Nothing I opened occupies the limb proposed for re-intake, and the one paper most
likely to have occupied it (S-A, the 2025 indirect-RCV study) turns out on reading to sit squarely
in the other regime while exemplifying the practice the limb questions. That supports re-intake of
the limb. But this is a *shallow* negative, not a clearance: it rests on two opened sources, six
queries, a search budget spent before several named vocabularies were tried, four sources that
would not open, and one section of the key paper that would not load. An entry recording this limb
as open should record it as open **on this evidence**, and should carry the unread Limitations
section of doi:10.1093/clinchem/hvae166 and the four COULD-NOT-READ corrected-report items as
named, outstanding checks — not as checks performed. The record's own misattribution of
`clin-lab-publications.com/article/3477` should be corrected whichever way the limb is decided.
