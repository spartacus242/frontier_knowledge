# VERIFY - ServeGen and "A Year in LLM Serving": do the production-trace priors ever meet a context window?
Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261022-20's first limb rests on two production-trace priors being silent about a model's
maximum context window. As the entry carries it:

- (1) Xiang et al., ServeGen, arXiv:2505.09999v1 "fits input lengths as Pareto and log-normal
  mixtures and prints diurnal shift ratios up to 1.63x and 13%, but states no relation to any
  model's maximum context window, its 'Qwen-Long with a 10M context length' being a Table 1 model
  descriptor only".
- (2) Nixon et al., "A Year in LLM Serving", arXiv:2608.13573v1, "over 6,122,413,756 requests from
  2026-04-11 to 2026-04-12", states "input sizes vary from roughly 10^2 to 10^5 tokens, with a heavy
  tail toward very long prompts" with the tail explicitly "not shown", "prints no percentile or
  median in text, computes no context-window utilisation, and evaluates no cost-benefit of
  increasing supported context length".

The sharp risk I was sent to test: a Pareto fit plus a threshold yields an exceedance share by
arithmetic, so if ServeGen prints its fitted parameters the candidate's first limb is computable
from published numbers even though nobody printed the share. **It does not. See (c).**

## READ LEVEL

**(1) ServeGen.** Front matter, arXiv abs page 2505.09999: title *ServeGen: Workload
Characterization and Generation of Large Language Model Serving in Production*; authors as printed,
in order: **Yuxing Xiang, Xue Li, Kun Qian, Wenyuan Yu, Ennan Zhai, Xin Jin**; first submitted
2025-05-15. No DOI is printed on the arXiv record; the identifier of record is arXiv:2505.09999.
Read level: **FULL TEXT of v1** (https://arxiv.org/html/2505.09999v1), body, all tables, all
captions, footnotes 3 and 6. **PARTIAL as to figures**: the HTML route does not render figure
images, so anything existing only *inside* Figures 2, 3 or 4 is COULD NOT READ, not absent.

**(2) A Year in LLM Serving.** Front matter, arXiv abs page 2608.13573: title *A Year in LLM
Serving: Workload Evolution, Caching and Load-Balancing*; authors as printed, in order: **William
Nixon, Jon Durbin, Florian Standhartinger, Haryadi S. Gunawi, Juncheng Yang**; first submitted
2026-07-03. No DOI printed. Read level: **FULL TEXT of v1**
(https://arxiv.org/html/2608.13573v1), body, Table 2 in full, captions of Figures 2, 6, 11, 12.
**PARTIAL as to figures**: same limitation - the percentile bands of Figures 11(a) and 12(a) are
plotted, and I could not read values off them.

Failed routes: none. Both arXiv HTML renderings served on the first attempt; no PDF fallback, no
mirror, no search was needed. I spent 0 of my 1 permitted search.

**Version note the entry should carry.** arXiv now serves ServeGen at **v3 (posted 2026-05-11)** and
Year-in-Serving at **v2 (dated 2026-09-07)**. I read **v1 of each**, as the entry cites them, which
is the right read for checking the entry - but any claim of absence is an absence *in v1*. Whether
v3 of ServeGen added a parameter table is **COULD NOT CHECK**.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) ServeGen's input-length model and its printed parameters

The distributional model, Section 3.2, "Modeling length distributions":

> "input lengths in general-purpose workloads are best modeled by Pareto distributions mixed with
> Log-normal distributions."

*What the opening words scope:* "in general-purpose workloads" restricts the whole claim to one
half of ServeGen's taxonomy; the paper adds that the model is **less accurate for task-specific
workloads**. The clause ASSERTS a functional form. It asserts no parameter and no share. This is
the hedged, scoped formulation and it is the one to carry; the entry's bare "fits input lengths as
Pareto and log-normal mixtures" drops the workload restriction.

**Every fitted parameter printed: none.** This is the finding that matters, so let me be explicit
about what I looked for and did not find. Searching v1 for alpha/α, mu/μ, sigma/σ, xi, "shape",
"scale", "tail index", "exponent", "mixture weight", "goodness of fit", "KS statistic" and R²
returns **no numeric value for any fitted distribution**. There is no appendix in v1. The fits exist
only as curves labelled "Input Fit" and "Input Tail Fit" in Figures 3(a) and 3(b). The paper's two
tables hold no fit parameters:

> Table 1: "The list of workloads and models in our study."
> Table 2: "Comparison between our work and prior characterizations of LLM serving workloads. Dashes
> indicate unavailable data."

Figure 3's caption (a **reconstruction from four consecutive summariser segments**, assembled only
from consecutive returns and verified at each junction, because the caption exceeds the ~125-char
verbatim cap):

> "Input and output length distribution. x-axis: # tokens; y-axis: frequency. / Each subfigure
> corresponds to a specific workload and time period, / split to two consecutive x-scales to better
> visualize the shift in average lengths (left) / as well as the tail distribution (right)."

So the Pareto tail is **drawn**, not **parameterised in print**. For the output side the paper is
equally parameter-free: "Surprisingly, we find that Exponential distributions fit remarkably well
for output lengths" - no rate stated. Footnote 3 on the KS test says only "Indeed, these p-values
are too small to deny the null hypothesis", reporting no p-value and no statistic.

**The 1.63x figure - CONFIRMED, with its definition.** Section 3.2, "Shifting length distributions":

> "the range of such shifts can be up to 1.63× for input lengths"

and the paper's own definition of the quantity:

> "measured by the maximal average length over the minimal."

*What the opening words scope:* "the range of such shifts **can be up to**" is a hedged **upper
bound** over the workloads and time periods studied, not a typical or population value. The clause
ASSERTS a bound. So 1.63x is a ratio of **the maximal average input length over the minimal average
input length** across the diurnal periods ServeGen slices (it reports **1.46x** for output lengths
in the same breath - a companion number the entry omits).

**The 13% figure - CONFIRMED AS A STRING, MISLABELLED BY THE ENTRY.** Section 3.2:

> "M-mid's input length increases by 13% on average, while its output length drops by 18%."

This is **not a shift ratio** and not a sibling of 1.63x. Numerator class and denominator, as the
exercise requires: it is a **percentage change in the mean input length of one single workload,
M-mid**, between two named time periods (Midnight -> Afternoon); its denominator is M-mid's own
mean input length in the baseline period, not a count of requests and not the cross-workload
maximum. The entry's phrase "diurnal shift ratios up to 1.63x and 13%" welds a max/min ratio over
all workloads to a one-workload mean delta, and silently drops the paired -18% output figure that
tells you the move is a length *recomposition*, not a length *inflation*. One word away, different
quantity.

### (c) Could a reader COMPUTE a share above a token threshold from ServeGen? **NO.**

This is the sub-claim the entry's novelty grade hangs on, so I answer it flatly. **No.** The
arithmetic the worry describes - tail parameter plus threshold gives exceedance share - requires
printed parameters, and **ServeGen v1 prints none**. There is no alpha, no x_m, no mixture weight,
no log-normal mu or sigma, anywhere in text, table, caption or footnote. A reader with only the
paper has a *picture* of a tail on a log axis and nothing to put in a formula. ServeGen therefore
**DEFINES and MODELS** the input-length tail; it does not **publish** a parameterisation of it.

Nor does the paper print the share directly:

> The paper gives no fraction or percentage of requests exceeding any stated token threshold.

The percentages it does print are of other things entirely - "the top 29 clients accounting for 90%
of requests" (§3.3), multi-turn requests "almost 10%" of the deepseek-r1 workload (§5.2).

**The one live promotion route, and it is not the paper.** Abstract: "We will open-source ServeGen
to foster future research." Footnote 6: "we release parameterized and sanitized data instead of full
data samples." No URL for that release appears in v1. *What kind of document could settle this:* a
software/dataset artifact release (a repository with a fitted-parameter file or a generator config),
**not** a paper. The ServeGen release is exactly that kind of document, so this is a justified lead
rather than a guess - but I have not opened it, and until someone does, whether published fitted
parameters exist is **COULD NOT CHECK**, not absent.

**And even granting the parameters, what would still be missing to make it the candidate's
quantity** - three things, and the third is fatal:
1. Which fit. Figure 3's caption says "Each subfigure corresponds to a specific workload and time
   period", so there is no single input-length law to integrate; a share would be per-workload,
   per-period, with no printed pooling weights.
2. The mixture decomposition - the Pareto component's weight and its location/threshold, since a
   Pareto tail parameter alone integrates nothing without x_m, and the body is log-normal.
3. **A window.** The candidate's quantity is a share of requests at or above *a model's maximum
   supported context*. ServeGen never pairs a length distribution with a window, so even a perfect
   exceedance curve would be a share above an *analyst-chosen* token threshold - a different
   quantity, missing the denominator that makes the candidate's limb mean anything.

### (d) "Qwen-Long with a 10M context length" - CONFIRMED as a Table 1 descriptor only

The string appears in **Table 1, the M-long row**, and that is its only occurrence. "Qwen-Long",
"10M" and "context length" **do not appear anywhere outside Table 1** in v1. "context window" does
not appear in the paper at all. M-long is used downstream as a *workload label* (it appears in the
Figure 2 and Figure 3 discussions) and never as a *capacity bound*: no sentence anywhere relates an
observed input length, a fitted tail, or a shift ratio to the 10M figure or to any other window.
The entry's characterisation of this is exactly right.

### (e) Year in Serving: the input-size sentence, whole, and the date correction

The sentence, Section 3.2, in full (a **reconstruction from two consecutive segments** on account of
the quotation cap, verified at the junction):

> "Figure 2a shows that input sizes vary from roughly 10^2 to 10^5 tokens, with a heavy tail toward
> very long prompts (not shown)."

*What the opening words scope:* "**Figure 2a shows that**" scopes the entire clause to what a single
figure panel displays - it is a reading-off, not a population claim. And the sentence does two
things at once that read alike once the opener is gone: the first clause ASSERTS an order-of-
magnitude range, while the trailing "**(not shown)**" **RECORDS A MOVE AWAY** from the very region
the candidate needs. The "heavy tail toward very long prompts" is asserted to exist and
simultaneously withheld from display. The entry's handling of this is correct and the parenthetical
is verbatim.

**CORRECTION - THE DATE RANGE IS WRONG IN THE ENTRY.** Table 2, caption "Summary of the CompanyX
production trace.", prints:

> Time span: "1 year (2025-04-11 to 2026-04-12)"

The entry records **2026-04-11 to 2026-04-12**. The printed start year is **2025**, not 2026. The
entry's window is a one-day typo for a one-year trace, which is also internally incoherent with the
paper's own §2.2 phrasing: "we release and analyze a one-year production trace containing 6.12
billion requests across 9,174 models."

**The request count is CONFIRMED.** Table 2 prints "Requests | **6,122,413,756**" exactly as the
entry carries it. Table 2's other rows, for the record: Input tokens 35,795,761 million; Output
tokens 2,522,394 million; Users 314,970; Models 9,174 (3,922 public, 5,252 private); Serving
instances 875,921.

### (f) Does Year in Serving print any percentile, median or utilisation figure anywhere?

Two different answers, and the entry conflates them.

**Percentiles and medians: YES, in figures - the entry's "in text" qualifier is doing real work and
must be kept.** The paper plots percentile bands and medians for input length in at least three
places, by their own captions:

> Figure 11: "Monthly input (a) and output (b) token-length bands (P10-P90, P25-P75, median). Global
> input tend to stay stable while output tends to drop over time."
> Figure 12: "Per-user median input (a) and output (b) by release cohort, with P10-P90 and P25-P75
> bands. Later user cohorts shift toward larger inputs and outputs"
> Figure 6: "Most models and users have longer median inputs than outputs, but vary substantially
> across groups."

**No numeric percentile value is printed in the text.** The nearest thing is §5.2:

> "Input lengths remain broadly stable over the year, with the monthly median staying in the
> thousands of tokens."

*What the opening words scope:* "Input lengths remain broadly stable over the year" scopes the
clause to a longitudinal-stability claim; the median appears as the *evidence for stability*, at
order-of-magnitude granularity. The clause ASSERTS that a median exists and is O(10^3), and prints
no value. Numerator class and denominator, both directions: the numerator class is the **median
request's input token count within one calendar month**, pooled across all 9,174 models and 314,970
users; the denominator is **all requests in that month**. What it MISSES relative to the candidate:
it is a central-tendency statistic, so it says nothing about the tail share the candidate needs, and
it carries no window. What it INCLUDES that the candidate excludes: requests to every model
regardless of that model's own maximum context, so a single monthly median mixes populations whose
windows differ by orders of magnitude - precisely the pairing the candidate's quantity requires and
this number forecloses.

Whether the *figure images* carry readable axis values at P90 is **COULD NOT READ** on my route, not
absent. A reader wanting a numeric P90 must read it off Figure 11(a)'s axis.

**Context-window utilisation: CONFIRMED ABSENT.** "context window", "context length" and "maximum
context" do not appear in the paper. The paper states **no ratio of prompt length to a model's
maximum supported context** and **no percentage of requests above a token threshold**. The nearest
long-context material is cost-of-serving, not capacity: §7.2 "KV state can be very large for
long-context requests", with "a 100K-token MiniMax-M2.5 context occupies roughly 27 GB of KV state".
§4.1's "Some users consistently send short prompts, while others work with much larger contexts" is
a dispersion remark with no number and no window.

**Cost-benefit of increasing supported context length: CONFIRMED ABSENT.** The paper discusses the
*cost of serving* long contexts (the 27 GB KV example) and never the cost or benefit of *raising* a
supported window. These are different questions and the entry draws the line in the right place.

## REGIME

**ServeGen, in its own words.** Population: the workloads and models of "our study", enumerated in
Table 1 - a production LLM-serving fleet, split into **general-purpose** and **task-specific**
workloads, with M-long described as "Qwen-Long with a 10M context length". Unit of analysis: the
request, with lengths aggregated per workload **and per time period** (Figure 3: "Each subfigure
corresponds to a specific workload and time period"), the periods named Midnight and Afternoon.
Instrument: production traces, with distributions fitted by eye-and-KS (footnote 3) and released
only as "parameterized and sanitized data" (footnote 6). Threshold/category: none - no token
threshold is defined anywhere, and no capacity bound is used as one. **Does the claim sit inside
this regime?** The entry's claim is a claim of *absence* about this regime, and yes, it sits inside
it: the regime has no window variable at all, so a window-utilisation result is not merely unproved
here, it is unexpressible in ServeGen's own vocabulary.

**Year in Serving, in its own words.** Population: "a one-year production trace from CompanyX",
tabulated as 6,122,413,756 requests, 314,970 users, 9,174 models (3,922 public, 5,252 private),
875,921 serving instances, 2025-04-11 to 2026-04-12. Unit of analysis: Figure 2's caption says
"Request-level token-length distributions for three representative models against the full
population" - so request-level, with per-model, per-user (Figure 6), monthly (Figure 11) and
release-cohort (Figure 12) aggregates layered on. Operating condition: longitudinal, a single
provider, models entering and leaving over the year. Threshold: none for input length; the only
token threshold in the paper is the illustrative 100K in a KV-size example. **Does the claim sit
inside this regime?** Yes - and note the regime is *larger* than the entry gives it credit for
(nine thousand models, a year, percentile bands plotted monthly and by cohort), which makes the
absence of any window pairing a stronger fact, not a weaker one.

## DEFECTS FOUND

1. **The Year-in-Serving date range is wrong and must be corrected to 2025-04-11 to 2026-04-12.**
   The entry's "2026-04-11 to 2026-04-12" is a one-day window attached to a one-year trace. Printed
   at Table 2, "Time span: 1 year (2025-04-11 to 2026-04-12)". The request count 6,122,413,756 is
   correct as carried.
2. **"diurnal shift ratios up to 1.63x and 13%" mislabels the 13%.** 1.63x is a max/min ratio of
   average input lengths across periods, by the paper's own definition "measured by the maximal
   average length over the minimal". The 13% is a percentage change in **one workload's** (M-mid)
   mean input length between two named periods, printed beside a paired **-18%** output change the
   entry drops. Recommend: "prints a diurnal input-length shift bounded at 1.63x (max/min of average
   lengths) and, for the M-mid workload, a 13% mean input rise against an 18% output fall".
3. **"prints no percentile or median in text" is true but is being read as "prints no percentile".**
   Year-in-Serving plots input-length **P10-P90, P25-P75 and median bands monthly (Figure 11a)**,
   **per-user medians by cohort with the same bands (Figure 12a)**, and **median inputs per model and
   per user (Figure 6)**. The entry's limb survives only with "in text" kept load-bearing and
   explicit, and it is safer to re-state the limb as: *prints no numeric percentile value, and no
   percentile of any kind expressed against a context window*. Any future adversary who opens
   Figure 11(a) will find percentiles, and the entry should not look surprised.
4. **ServeGen is cited at v1 while arXiv serves v3 (2026-05-11); Year-in-Serving at v1 while arXiv
   serves v2 (2026-09-07).** The entry's absence findings are v1 findings. v3 adding a fitted-
   parameter table is unchecked.
5. **The entry's ServeGen distributional quote drops its scope.** The paper says Pareto-mixed-with-
   log-normal "in general-purpose workloads" and says the model is less accurate for task-specific
   ones. Carry the restriction.
6. **Front matter is clean.** "Xiang et al." matches first author Yuxing Xiang; "Nixon et al."
   matches first author William Nixon. No DOI is printed for either; cite by arXiv id. Full author
   lists are in READ LEVEL above and should replace any short form.

## ROUTES THAT FAILED

None. arXiv abs and arXiv HTML (/html/<id>v1) both served on first request for both documents. No
PDF fallback, no NSF PAR mirror, no institutional copy and no search was required. Standing
limitation, not a failure: the arXiv HTML route delivers text, tables and captions but not figure
images, so figure-interior values (ServeGen Figures 2-4; Year-in-Serving Figures 2, 6, 11, 12) are
**COULD NOT READ** rather than shown absent. Searches used: 0 of 1. No query was refused.

## BEARING ON THE LEDGER ENTRY

**HOLD on the core, with two corrections and one narrowing.** The limb that carries the novelty
grade survives its hardest test.

**ServeGen: HOLD, and the Pareto worry is retired.** The danger the entry was exposed to - that a
fitted tail parameter plus a threshold makes the candidate's first limb computable from published
numbers - **does not materialise in v1**. ServeGen prints no alpha, no x_m, no mixture weight, no
mu or sigma, no KS statistic, no appendix: the Pareto-log-normal mixture exists as a named functional
form and as curves inside Figure 3, and nowhere as arithmetic a reader could carry away. It prints
no share above any token threshold. And "Qwen-Long with a 10M context length" is confirmed as a
Table 1 row label with no downstream analytic use; "context window" is absent from the paper
entirely. Both ServeGen limbs stand as the entry states them, with the quote re-scoped to
general-purpose workloads and the 13% relabelled.

**Convert to a promotion condition, narrowly.** ServeGen's footnote 6 - "we release parameterized
and sanitized data instead of full data samples" - plus the abstract's open-sourcing promise means
the fitted parameters are expected to exist in an *artifact release* that v1 does not URL. The
condition: **if the ServeGen release (or v3) publishes fitted input-length parameters per workload,
the entry must re-state its limb as "no published share, and no published window pairing" rather
than "no computable share".** Even then the limb does not collapse - a parameterised exceedance
curve above an analyst-chosen threshold is still not a share above a model's maximum context, which
needs the window ServeGen never supplies. So this is a condition on the entry's *wording*, not on
its novelty.

**Year in Serving: HOLD on the window limbs, NARROW the percentile limb, CORRECT the dates.** The
window limbs are clean and stronger than the entry argues: across a year, 6.12 billion requests and
9,174 models, the paper never writes "context window" or "context length", never ratios a prompt to
a supported window, never prints a share above a token threshold, and never weighs raising a window
- its only long-context cost material is KV-state size ("roughly 27 GB" for a 100K-token context),
which is a serving-cost fact, not a capacity-utilisation one. The input-size sentence is verbatim
and its "(not shown)" is doing exactly the work the entry says. But the percentile limb must be
narrowed to **numeric percentiles in text**, because Figures 11(a), 12(a) and 6 plot input-length
medians and P10-P90/P25-P75 bands; and the trace window must be corrected to **2025-04-11 to
2026-04-12**.

**Net:** neither prior anticipates the candidate, and the Pareto route to anticipation is closed in
the published text. The entry should ship with the date fixed, the 13% relabelled, the percentile
limb narrowed to "no numeric percentile in text, and no percentile expressed against a window", and
the ServeGen artifact release logged as the one unopened document of the right kind to disturb the
first limb's wording.
