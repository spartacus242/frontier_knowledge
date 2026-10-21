# VERIFY — nuclear-data / criticality-safety: is the "validation-set overlap" question posed in print?

Independent sweep. No source was handed to me. Query budget used in full: 6 WebSearch calls,
5 WebFetch calls (2 of them refused by the target's robots policy — recorded, not worked around).

## The question I was sent to check (restated, so the regime is explicit)

Has the nuclear-data / criticality-safety literature POSED in print the question of how much of a
RELEASED evaluated library's benchmark-validation accuracy is attributable to OVERLAP between the
integral experiments used in producing or adjusting that library and the integral experiments used
to validate it — and has anyone COMPUTED a consequence of that overlap for a criticality-safety
bias, a bias uncertainty, or an upper subcritical limit (USL) under ANSI/ANS-8.24?

Two distinct things are being asked: (i) the question posed; (ii) a quantity computed. They must be
reported separately, and they came out differently.

## Read levels, source by source

### Read: full text / substantial text

1. **Rochman, D.A.; Bauge, E.; Vasiliev, A.; Ferroukhi, H.; Perret, G., "Nuclear data correlation
   between different isotopes via integral information", EPJ Nuclear Sciences & Technologies
   (EPJ Nucl. Sci. Technol.) **4**, 7 (2018), DOI 10.1051/epjn/2018006.**
   URL: https://www.epj-n.org/articles/epjn/full_html/2018/01/epjn170045/epjn170045.html
   Read level: **FULL TEXT** (publisher HTML).
   Type: **primary methodological study** (Monte-Carlo / BMC weighting), not a review.

2. **Marshall, W.J.; Greene, T.M.; Shaw, A.M.; Celik, C.; Dupont, M.N., "Sensitivity/Uncertainty
   Methods for Nuclear Criticality Safety Validation", NUREG/CR-7308 (ORNL/TM-2024/3277),
   U.S. Nuclear Regulatory Commission, Office of Nuclear Regulatory Research; NRC Project Manager
   Lucas Kyriazidis; manuscript completed December 2024, published April 2025.**
   URL: https://www.nrc.gov/docs/ML2509/ML25099A002.pdf
   Read level: **PARTIAL FULL TEXT** — two windows read (opening matter, and a window from
   character offset 40000). The document is long; I did not read it end to end, so statements below
   are scoped to the windows I read and are NOT a whole-document NOT FOUND.
   Type: **NRC contractor technical report** that reviews prior guidance and issues best-practice
   recommendations, with three case studies. Not a primary study, not a consensus standard.

### COULD NOT READ (route refused — distinct from NOT FOUND)

3. **WPEC Subgroup 22, "First conclusions of the WPEC/Subgroup-22", NEA/NSC/WPEC/DOC(2004)325.**
   URL: https://www.oecd-nea.org/upload/docs/application/pdf/2020-01/nsc-wpec-doc2004-325.pdf
   Read level: **COULD NOT READ.** Route failed: WebFetch returned
   `ROBOTS_DISALLOWED` from the target (oecd-nea.org). No other route attempted within the cap.
   This is the single most likely place for an explicit statement on using the same integral
   experiments for adjustment and for validation, and it remains **unread, not absent**.

4. **Brown, D.A. et al., "ENDF/B-VIII.0: The 8th Major Release of the Nuclear Reaction Data Library
   with CIELO-project Cross Sections, New Standards and Thermal Scattering Evaluations"** — OSTI
   full-text copy.
   URL: https://www.osti.gov/servlets/purl/1478739
   Read level: **COULD NOT READ.** Route failed: WebFetch returned `ROBOTS_DISALLOWED` from
   osti.gov. Front matter therefore NOT taken from front matter — the title above is a short form
   from a search-result listing and must not be cited as verified. Whether the release paper itself
   states that integral/criticality benchmarks informed its evaluations, and whether it flags the
   resulting non-independence of its own validation suite, is **unestablished here.**

### Identified but NOT READ at all (titles only — not evidence of contents)

The following surfaced in search and are plausibly on point. I did not open them; the cap was
spent. Each is a title, and per the rules a title is not evidence of its contents.
- "A Comparison of Sensitivity/Uncertainty-Based Upper Subcritical Limit..." — https://www.osti.gov/servlets/purl/2001759
- "Determination of Bias and Bias Uncertainty for Criticality..." — https://www.nrc.gov/docs/ML2512/ML25120A337.pdf
- "Comparative Analysis of Standard and Advanced USL Methodologies" — https://www.osti.gov/pages/servlets/purl/1998999
- "Estimating Code Biases for Criticality Safety Applications with Few..." — https://www.osti.gov/pages/servlets/purl/1560510
- Alwin/Brown et al., "Lecture Notes on Sensitivity-Uncertainty Based [Criticality Safety Validation]", LA-UR-16-23533 — https://mcnp.lanl.gov/pdf_files/TechReport_2016_LANL_LA-UR-16-23533_AlwinBrownEtAl.pdf
- WPEC Subgroup 44 inter-comparison on correlations in nuclear data libraries — https://www.sciencedirect.com/science/article/abs/pii/S0306454921004813
- "Assessment of Existing Nuclear Data Adjustment Methodologies", WPEC/NSC intermediate report — https://www.osti.gov/etdeweb/biblio/22134350
- "Methods and Issues for the Combined Use of Integral Experiments and Covariance Data" (WPEC SG-33) — https://www.osti.gov/etdeweb/biblio/22205393
- WPEC SG-33 3rd meeting summary record — https://www.oecd-nea.org/download/wpec/sg33/3rd_meeting/Summary.pdf
- UACSA Phase IV, "Role of Integral Experiment Covariance Data for Criticality Safety Validation" (ICNC 2019) — https://www.ornl.gov/file/uacsa-phase-iv-role-integral-experiment-covariance-data-criticality-safety-validation-summary/display
- CSSG Response 2014-02, "validation with limited data" — https://ncsp.llnl.gov/sites/ncsp/files/2021-10/2014-02_response_on_validation_with_limited_data_09-21-15.pdf

## Claim A — Has the overlap question been POSED in print?

**Finding in the sources I actually read: NOT FOUND, in those sources.** Neither source I read
poses the question. This is a NOT FOUND over two documents, not over the literature.

### What Rochman et al. (2018) says

The paper does **not** use the words double counting, circular validation, independence of
validation benchmarks, criticality-safety bias, bias uncertainty, or upper subcritical limit.

It does set up the structure in which the question would arise, and then does not ask it. Verbatim
strings found (each returned whole, under the quotation cap; no reconstruction):

- "The second test concerns the predictive power of the method"
- "three additional benchmarks are calculated with the same random 238U and 235U nuclear data files"
- "weighting random samples according to one given benchmark does not produce a distribution"
- "that is only good for that benchmark."
- "the posterior distribution can be observed to agree very well with the experimental result and its uncertainties."

**The grammar on both sides of the cut matters here.** The last string is the paper's statement of
agreement, and that agreement is for `imf7` — the very benchmark whose k_eff supplied the weights.
That is precisely the overlap configuration the ledger question is about. The paper reports the
agreement; it does **not** label it as circular, as double counting, or as a reason to discount the
agreement. Quoting that sentence as the field "posing the question" would be a misquotation: it is
a result statement, not a methodological caution.

The nearest thing to the question being asked is the pair about predictive power — the paper tests
on three *other* benchmarks (hmf1, imf1-1, lct6-1), which is an act of guarding against overlap
without naming it. "Does not produce a distribution ... that is only good for that benchmark" is a
claim about generalisation, hedged to this method and these files; it carries no citation to prior
work framing the overlap problem.

**What the paper measures** (its own regime, in its own terms): unit of analysis is a *pair* of
random TENDL-2014-based 235U and 238U nuclear data files (n = 7000), each weighted by a
chi-squared-type function of calculated-k_eff agreement with the `imf7` benchmark. Endpoints are
cross-isotope correlation coefficients between observables (cross sections, nubar, chi) at
specified incident energies; updated cross-section means and variances; and k_eff C/E for `imf7`
plus the three test benchmarks. **Regime limits: this is a per-nuclide-pair correlation study on
random file ensembles, not a released evaluated library, and its endpoint is a correlation
coefficient and a C/E, not a bias, a bias uncertainty or a USL.** Nothing in it is evidence about
a released library's validation accuracy, and it is silent on ANSI/ANS-8.24.

### What NUREG/CR-7308 says (windows read)

Within the windows I read, **the dual-use / overlap question is NOT FOUND as posed.** Searched
unprimed for the words themselves: "double counting" — not found; "independent" validation
benchmarks — not found; benchmarks used both to adjust/evaluate and to validate — not found as
stated; circularity — not found; compensating errors revealed by validation — not found.

The report does pose an adjacent and importantly *different* problem: repeated sensitivity across
benchmarks within a validation suite. Verbatim, from its description of the TSUNAMI penalty
assessment:

- "it ignores multiple occurrences of sensitivity in the same reactions and the same energy ranges in different benchmarks."
- "These shortcomings eventually came to be recognized as problematic."

**This is not the gap I was sent to check.** It is non-independence *among the validation
benchmarks themselves*, i.e. a benchmark suite that repeats information. The ledger question is
about overlap *between the production/adjustment set and the validation set*. A source noting the
absence or inadequacy of a different thing is not a flag of this gap, and these two strings must
not be promoted into evidence that the overlap question has been posed.

## Claim B — Has a consequence been COMPUTED for a bias, a bias uncertainty, or a USL under ANSI/ANS-8.24?

**NOT FOUND in the sources I read.** No computed quantity attributable to production/validation
overlap appears in either source. No figure to re-derive, therefore no threshold or stated
uncertainty to carry.

NUREG/CR-7308 is squarely in the bias / bias-uncertainty regime, and it is the document where such
a computation would belong, which makes its silence informative but **not** a prohibition. What it
does say, verbatim, about the regime:

- "consensus standard on NCS validation [1] uses the term validation applicability"
- "In practical terms, this generally involves the determination of a bias and bias uncertainty for the computational method"
- "so that the calculational margin—bias and bias uncertainty—that is derived from the validation can be applied"

**Front-matter caution on the standard.** In the windows I read, the report **never names
ANSI/ANS-8.24**; it refers to "the consensus standard on NCS validation [1]". I did not resolve
reference [1], so I cannot state from this source that the standard in question is 8.24, only that
a consensus NCS-validation standard is cited. "Upper subcritical limit" appears in the
abbreviations list with no substantive discussion in either window.

On data adjustment as a validation route, verbatim from the offset-40000 window:

- "The generalized linear least squares methodology (GLLSM) has been implemented in the TSURFER sequence"
- "TSURFER is an implementation of the GLLSM validation approach and is discussed in Section 7.1."
- "The GLLSM approach is discussed further in Section 7.1, but significant challenges remain to be solved"
- "prior to using GLLSM directly for determining bias and bias uncertainty for NCS validation."
- "The reactivity sensitivities calculated in TSAR are used within a TSURFER GLLSM analysis,"
- "so they are not widely used in the NCS community today."
- "Finally, bias assessments using TSURFER and TSURFER with TSAR data are presented."
- "This is a logical next step because the promise of the GLLSM validation technique, as discussed in Section 7.1,"
- "is that relevant information can be extracted from each benchmark experiment, regardless of its similarity"
- "that only 10 experiments were needed for a GLLSM bias estimate to converge,"
- "although this recommendation is based on results of GLLSM validation"
- "and may not be appropriate for a trending validation approach."

Two notes on these.

(a) **Hedging and attribution.** The "10 experiments" string is a *recommendation attributed to
prior results*, and the report itself hedges it in the same breath — "although this recommendation
is based on results of GLLSM validation / and may not be appropriate for a trending validation
approach." The report does not present it as its own finding. The "significant challenges remain
to be solved / prior to using GLLSM directly for determining bias and bias uncertainty" pair is the
report's own hedge, and it is a hedge about readiness, not about overlap.

(b) **Regime.** GLLSM/TSURFER is itself an adjustment-on-integral-experiments machinery turned into
a validation estimator, which is exactly where the overlap question bites hardest. The report
flags that it is not ready and "not widely used in the NCS community today" — but on *this* ground
it is silent. Silence is not a prohibition and is not a posing of the question.

### Note on the "10 experiments" figure

I did not re-derive it: the window gave me the recommendation but not its own author's threshold,
convergence criterion or stated uncertainty, so there is nothing to re-derive at the author's own
threshold. It should not be carried into the ledger as a number.

## Routes that failed

- `WebFetch` → https://www.oecd-nea.org/upload/docs/application/pdf/2020-01/nsc-wpec-doc2004-325.pdf
  — `ROBOTS_DISALLOWED` from target. WPEC SG-22 conclusions **unread**.
- `WebFetch` → https://www.osti.gov/servlets/purl/1478739 — `ROBOTS_DISALLOWED` from target.
  ENDF/B-VIII.0 release paper **unread**; its front matter therefore unverified.
- Query cap reached (6/6 searches, 5/5 fetches) before any WPEC SG-33 / SG-39 / SG-44 report, any
  ICNC or NCSD proceedings paper, the UACSA Phase IV summary, the CSSG 2014-02 response, or any
  dedicated USL-methodology paper could be opened. Per instruction, I stopped rather than working
  around the refusals or the cap.
- Unpaywall deliberately not used (it requires a contact e-mail address in the URL).

## Defects

1. **The decisive document is COULD NOT READ, not NOT FOUND.** WPEC SG-22's "First conclusions"
   and the ENDF/B-VIII.0 release paper were both refused by robots policy. A verdict of "the
   question has not been posed" cannot rest on this sweep. The honest statement is: not posed in
   the two sources read, with the most likely venues unread.
2. **Partial read of NUREG/CR-7308 reported as a document-level absence would be a defect.** I read
   two windows, not the whole report. Sections 7.1 (GLLSM) and the case studies — the places most
   likely to discuss experiment correlation and its effect on bias uncertainty — were not read.
   Its NOT FOUNDs above are window-scoped.
3. **Adjacent-gap substitution.** The strongest-looking strings I found ("it ignores multiple
   occurrences of sensitivity in the same reactions and the same energy ranges in different
   benchmarks.") concern non-independence *within* a validation suite, not overlap *between*
   production and validation sets. Treating them as the question being posed would be a scope
   error of exactly the kind flagged in the task brief.
4. **Result-statement-as-caution risk in Rochman et al.** The paper's agreement statement for
   `imf7` sits in the overlap configuration but is written as a result, not a warning. Quoting it
   as the field acknowledging circularity would be verbatim-but-misquoted.
5. **Regime mismatch in Rochman et al.** Random-file ensembles weighted on one benchmark, endpoint
   = cross-isotope correlation coefficients and C/E. Not a released evaluated library; no bias, no
   bias uncertainty, no USL. Silent outside its assumptions, therefore not supportive either way.
6. **Front matter not taken from front matter for two items.** The ENDF/B-VIII.0 title and the
   WPEC SG-22 title/report number above come from search listings and a URL, not from the served
   front matter. They are provisional.
7. **ANSI/ANS-8.24 not confirmed by name** in the one source that discusses bias and bias
   uncertainty; it cites "the consensus standard on NCS validation [1]" and I did not resolve [1].
8. **Eleven identified-but-unopened documents.** Several are directly on USL and bias-uncertainty
   determination. None may be cited for contents; titles are not evidence.
