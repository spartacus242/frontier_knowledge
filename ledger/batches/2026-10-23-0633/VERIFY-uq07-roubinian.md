# VERIFY - Roubinian 2019 Blood: the 0.25 GEE R2 holds, and no measured per-unit haemoglobin mass is in the exposure set
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

That the second prior, a large single-unit transfusion cohort, reports a coefficient of
determination of 0.25 for the 24-hour haemoglobin increment on donor, component and recipient
covariates, and does NOT include a MEASURED per-unit haemoglobin mass in its exposure list.

Source as the entry carries it: Roubinian N.H., Plimier C., Woo J.P., Lee C., Bruhn R., Liu V.X.,
Escobar G.J., Kleinman S.H., Triulzi D.J., Murphy E.L., Busch M.P., Blood 2019;134(13):1003-1013,
DOI 10.1182/blood.2019000773.

Verdict in one line: **the claim holds on both limbs.** Both limbs are confirmed against the body
text, not the abstract. Three narrowings below; none of them reverses it.

## READ LEVEL

**FULL TEXT (accepted author manuscript), PARTIAL as to appendices.** I read the eScholarship
full-text PDF `https://escholarship.org/content/qt6gm6w01r/qt6gm6w01r.pdf` end to end across three
fetches: Abstract (printed twice in the manuscript), Introduction, Methods, Results, Discussion,
References, and Tables 1-6. Figure 1 is a placeholder in this manuscript version.

**NOT READ: Appendix Tables 1-10.** They are referenced in the text and are not in this PDF. This
matters for one sub-claim and I say so where it bites: **Appendix Table 8 is the table that prints
the 24-hour and 48-hour multivariable model rows.** I did not open it. Its absence is a fact about
my read, not about the paper. The publisher supplement was the route that would have carried it and
the publisher host refused me (below). I did not stop because the budget ran out on the appendix; I
stopped because both routes to the publisher returned client errors, and I had no derivable
supplement URL that had appeared in this conversation.

Front-matter provenance qualification, stated rather than papered over: the **author byline** I
report in (b) is taken from the eScholarship record's own front matter for this item, which matches
the entry's citation name for name and in order. I did not separately re-read the byline off the
PDF's first page, so this one element is repository front matter rather than publisher front matter.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below were served under the summariser's ~125-character cap. Where I have joined
consecutive returns I label the result a reconstruction and say from how many fragments.

### (b) Front matter

- Title: "Effect of donor, component, and recipient characteristics on hemoglobin increments
  following red blood cell transfusion"
- Authors, printed order: Nareg H. Roubinian; Colleen Plimier; Jennifer P. Woo; Catherine Lee;
  Roberta Bruhn; Vincent X. Liu; Gabriel J. Escobar; Steven H. Kleinman; Darrell J. Triulzi;
  Edward L. Murphy; Michael P. Busch. Eleven authors.
- Journal Blood; volume 134; issue 13; pages 1003-1013; 2019 (online 2019-09-03, issue date
  2019-09-26); DOI 10.1182/blood.2019000773; ISSN 0006-4971.
- **No citation correction is required.** The entry's front matter is right in every element I
  could reach.

### (c) The 23,194 and the 0.25

**23,194 - printed, but ONLY in the Abstract.** Abstract: "We linked data on 23,194 transfusion
recipients who received one or more single-unit RBC transfusions (n=38,019 units)."

I ran a dedicated string sweep for `23,194` after the broad read, because one sweep's silence is not
absence. Result: the Results section never states it. The Results give instead, in order
(reconstruction from three consecutive served fragments): "Of the above, blood donor demographic
data were available for 9 of 21 medical centers and were linked to 63,162 recipients" / "who
received 268,017 RBC transfusions."; then "Single unit transfusion episodes were further limited to
those with hemoglobin determinations within 18 hours prior to" / "transfusion and 60 hours after
transfusion, resulting in 38,019 informative transfusion episodes occurring in inpatient" /
"(n=29,045) and outpatient (n=8,974) settings."; then "Hemoglobin levels within the initial
post-transfusion, 24-hour and 48-hour periods occurred without additional interval" / "transfusions
in 38,019, 27,384 and 17,038 episodes, respectively."

So **23,194 is the recipient count of the single-unit analytic cohort as the Abstract states it; the
Results report the cohort in EPISODES, not recipients, and never restate 23,194.** 63,162 is the
donor-linked recipient count *before* the single-unit and Hb-timing restrictions, and is a near
neighbour that must not be substituted for it.

**0.25 - printed twice.**
- Abstract: "the coefficient of determination for GEE models was 0.25".
- Results, the load-bearing printed location: "The estimated coefficients of determination (R2) for
  GEE multivariate models were 0.18, 0.25, 0.28" - for the initial post-transfusion, 24-hour and
  48-hour increments respectively.

What the 0.25 is computed on, each element answered separately:
- **Model:** the multivariable GEE model for the 24-hour hemoglobin increment. Methods: "To assess
  model fit, we calculated the coefficient of determination (R2) for GEE models and assessed
  calibration using" / "plots of predicted vs. actual hemoglobin increments and corresponding
  correlation.28" (reconstruction from two consecutive fragments). Reference 28 is Zheng B.,
  "Summarizing the goodness of fit of generalized linear models for longitudinal data," Stat Med
  2000.
- **Outcome:** the observed haemoglobin increment in g/dL at the 24-hour window.
- **Is it a "GEE pseudo-R-squared"?** It is a **GEE goodness-of-fit R2 computed by Zheng's method**.
  The paper **never uses the word "pseudo"** - I ran a dedicated sweep for that exact string and it
  does not occur. The paper's own printed label is "coefficient of determination (R2) for GEE
  models". So: the entry's phrase "coefficient of determination" is the paper's own word and is
  correct; "GEE pseudo-R-squared" would be an outside label, defensible as a description of what
  Zheng's statistic is but not the paper's.

**NUMERATOR CLASS and DENOMINATOR for the 0.25, with overlap in both directions.**
- Numerator class: the share of variation in the *observed* 24-hour increment explained by the
  fitted GEE linear predictor. Exclusions carried in by the cohort rules: Methods, "Transfusions
  were excluded from analyses if there were no pre- or posttransfusion hemoglobin levels in the
  specific time" / "periods or if the patient received multiple RBC transfusions during a single
  transfusion episode." The 24-hour window additionally required no intervening transfusion.
- Denominator: the **27,384** 24-hour episodes. Checked against the near neighbours it is not -
  38,019 initial-period episodes (R2 = 0.18), 17,038 48-hour episodes (R2 = 0.28), 23,194
  recipients, 268,017 linked transfusions, 63,162 linked recipients. The unit of analysis is the
  **episode**, not the recipient and not the unit.
- What the source's class MISSES relative to the claim's use: it explains variation only within
  single-unit, singly-drawn episodes in one integrated system; it says nothing about multi-unit
  transfusion, and it is a share of *observed* increment variance, which includes measurement noise
  in both haemoglobin draws, so 1 - 0.25 is not a clean "unexplained biology" residual.
- What it INCLUDES that the claim's framing excludes: the covariate set is not purely
  donor/component/recipient. It also carries **"Hours between pre-Tx measurement and Tx"**, **"Hours
  between Tx and post-Tx measurement"** and **"Transfusion year"** - measurement-process and
  secular-trend nuisance terms. Part of the 0.25 is bought by draw timing, not by donor, component
  or recipient biology. A reader who treats 0.25 as the explanatory ceiling of donor/component/
  recipient characteristics is overstating it.

### (d) The full exposure set

**Where it is printed in full:** only for the **initial post-transfusion** model, in **Table 5**.
Columns: "Characteristic"; "Change in hemoglobin in g/dL (95% CI)"; "p-value". Row labels verbatim,
in printed order: "Male donor"; "Donor age (ref: <20 years)"; "20-45"; "45-70"; ">70+"; "Donor Rh
positive status"; "Donor ABO status (ref: non-O)"; "Blood type O"; "Whole blood collection";
"Storage duration (ref: 1-21 days)"; "22-28"; "29-35"; "36-42"; "RBC additive solution (ref:
AS-1)^"; "AS-3"; "Gamma irradiation"; "Female recipient"; "Recipient age*"; "Recipient body mass
index"; "Recipient Rh positive status"; "Recipient ABO status (ref: non-O)"; "Blood type O";
"Pre-transfusion Hb level"; "Hours between pre-Tx measurement and Tx"; "Hours between Tx and post-Tx
measurement"; "Transfusion year".

**For the 24-hour model specifically:** the manuscript directs the reader to **Appendix Table 8**,
which I did not open. The Methods state the adjustment set is the same - the model adjusts for "the
above donor, component, and recipient characteristics". So my statement of the 24-hour exposure set
is: identical to Table 5 by the Methods' own declaration, **with the printed 24-hour rows
unopened.**

**Measured per-unit haemoglobin mass: ABSENT.** This is the limb that decides the entry, so I
instanced it rather than resting on one sweep. Broad read first, then a dedicated string sweep for
`hemoglobin mass`, `hemoglobin content`, `Hgb mass`, `Hgb content`, `89 grams`, `grams Hgb`, `donor
hemoglobin`, `donor Hgb`, `unit volume`, `volume`. Results:

- `hemoglobin mass` occurs **once, in a reference title only** - ref. 62, "Hemoglobin concentration,
  total hemoglobin mass and plasma volume in patients: implications for anemia." A cited title is
  not a variable.
- `hemoglobin content` occurs twice, both times as an **unmeasured hypothesised mechanism**, never as
  a covariate. Introduction: "Donor and component characteristics may impact rates of in-vitro
  hemolysis or the hemoglobin content of a unit of RBC." Logical form, because this is the sentence
  most likely to be misused: the modality is **"may impact"** - a hedge, not an assertion of effect -
  and the predicate is a **DISJUNCTION** (in-vitro haemolysis OR haemoglobin content). It cannot be
  cited for haemoglobin content alone, and it asserts no measurement. Discussion, in a list of what
  further work would need: "including hemoglobin content, biochemical properties."
- `89 grams` / `grams Hgb` occur once, in the Discussion: "the same RBC dose (~89 grams Hgb per
  transfused unit)". **Scope check.** The opening words scope this clause to recipients being
  *assumed* to receive an equal dose, and the clause's work is to argue that recipient factors
  explain increment differences *given* a constant dose. The clause therefore **ASSERTS a constant
  assumed per-unit dose and thereby DENIES that per-unit haemoglobin mass is a measured, varying
  covariate here.** Published is not performed: the paper **ASSUMES** a per-unit haemoglobin mass of
  about 89 g. It does not measure it, model it, or report its distribution. There is no table,
  figure or sentence giving a measured grams-of-Hb-per-unit value with a denominator.
- `donor hemoglobin` occurs once, in the Discussion, and it is the paper's own concession that this
  variable was not in the model: future studies "will need to normalize for donor hemoglobin levels
  to assess the impact of in vitro". Modality: a statement of what future work *will need* to do.
  Direction: it names the adjustment as **missing here**, not present.
- `unit volume` does not occur. `volume` occurs only as recipient circulating blood volume
  (Introduction: "Circulating blood volumes differ with recipient sex and body mass index.") and as
  intravenous fluid volume in the limitations ("Future analyses accounting for volumes of
  intravenous fluids.").

**Proxies present, named as proxies.** The exposure set contains **storage duration** (four
categories), **whole blood collection** (collection method), **RBC additive solution (AS-3 vs
AS-1)**, **gamma irradiation**, **male donor** (donor sex), **donor age**, **donor Rh**, **donor
ABO**. Each of these is a **proxy** for unit quality or unit haemoglobin content, not a measurement
of it. Donor haemoglobin - the nearest available proxy for per-unit haemoglobin mass - is **not**
among them, by the paper's own statement above.

### (e) Variance decomposition

**None.** Dedicated sweep: the string `variance` does not occur in the manuscript; nor do `random
effect` or `intraclass`. The paper uses "variation" (Abstract: "accounted for significant variation
in hemoglobin increments"). Correlation within recipients is handled only by the GEE working
correlation structure - Methods: the models were fit "to account for correlated transfusion events"
in a given recipient. The only fit statistics are the three R2 values and the predicted-versus-actual
correlations.

**Trap worth flagging for the entry's reader:** the Abstract reports an "estimated correlation of
0.5" alongside the 0.25. That is the GEE **within-recipient working correlation**, not a
unit-versus-patient variance split. Reading it as a decomposition would be a different quantity one
word away.

### (f) Second-unit probability or hazard

**None.** Dedicated sweep: `second unit` does not occur; `subsequent transfusion` does not occur;
`additional transfusion` does not occur as that exact string (the Results have "occurred without
additional interval transfusions in 38,019, 27,384 and 17,038 episodes"). Multi-unit episodes are
**excluded by design** (Methods exclusion quoted in (c) above), and the 24-/48-hour windows require
no intervening transfusion. That is an inclusion rule, not a modelled outcome. The design forecloses
this question rather than answering it either way.

## REGIME

In the paper's own words: adult **KPNC inpatients and outpatients** who received a **single RBC
unit** during one or more transfusion episodes at **9 medical centers**, **January 1, 2008 to June
30, 2016** - "We included all adult KPNC inpatients and outpatients who received a single RBC unit
during one or more transfusion" / "episodes at 9 medical centers from January 1, 2008 to June 30,
2016." Donor demographic linkage was available for 9 of 21 medical centres. **Unit of analysis: the
transfusion episode**, not the recipient and not the blood unit. **Instrument:** haemoglobin levels
"measured by the clinical laboratory prior to and following each RBC transfusion event" - routine
clinical labs, not a research assay. **Operating condition / thresholds:** pre-transfusion Hb within
18 hours before and post within 60 hours after; windowed as initial, 24-hour, 48-hour; no intervening
transfusion in the window; multi-unit episodes excluded. **Exposure measurement:** donor and
component administrative and blood-bank attributes, with no per-unit laboratory haemoglobin assay.

Does the claim sit inside this regime? **Yes.** The claim is about what this cohort reports and what
its exposure list contains - both internal questions. The entry's broader *candidate* (variance share
attributable to a specific unit's haemoglobin mass) sits **outside** it, because the regime contains
no measurement of that quantity at all.

## DEFECTS FOUND

Three, all narrowing, none fatal to the claim.

1. **The 23,194 is an abstract-only figure and is a recipient count, while the 0.25's denominator is
   an episode count.** The claim pairs them as if they described one population. Printed, the 0.25
   rests on **27,384 24-hour episodes**; 23,194 recipients appears only in the Abstract and is never
   restated in the Results. Anyone carrying "23,194" forward as the n of the 0.25 model is wrong by
   construction.

2. **"on donor, component and recipient covariates" is the paper's own framing but is not the whole
   covariate set.** The printed model also carries two draw-timing variables and transfusion year.
   Part of the 0.25 is explained by measurement timing and secular trend. This does not contradict
   the claim - the paper itself titles these as donor/component/recipient models - but it means 0.25
   overstates the explanatory reach of donor, component and recipient biology.

3. **The 24-hour model's covariate rows are in Appendix Table 8, which I did not open.** My
   statement of the 24-hour exposure set rests on the Methods' declaration that the same adjustment
   set applies, plus the fully printed initial-period Table 5. **Instanced, as required:** on the
   question "does a measured per-unit haemoglobin mass appear in the exposure set", the universal
   negative is **TRUE OVER THE INSTANCES I OPENED** - Abstract, Introduction, Methods, Results,
   Discussion, Tables 1-6 - and the instances I did **not** open are **Appendix Tables 1-10**. I
   call it true rather than unenumerated for a reason I state as **MY OWN REASONING, NOT A SOURCE
   FINDING**: an appendix table of model coefficients cannot contain a variable the study never
   measured, and the Discussion's "will need to normalize for donor hemoglobin levels" says in the
   paper's own voice that even the *proxy* was unavailable. The document that could overturn this is
   the publisher supplement carrying Appendix Table 8 - that is the right **kind** of document for
   the question (it prints the model's coefficient rows), and it is the one I would open next.

Not a defect, but the single most consequential thing I found and it is not in the claim: **the
paper explicitly announces the entry's first limb as future work.** The Discussion's "will need to
normalize for donor hemoglobin levels to assess the impact of in vitro" and its list "including
hemoglobin content, biochemical properties" mean the gap is **named by the prior itself**. Announced
is not performed, so the question is still unanswered - but it is not un-asked.

## ROUTES THAT FAILED

- `https://doi.org/10.1182/blood.2019000773` - WebFetch: "failed at its site (client_error), and
  nothing of the page was retrieved." Nothing retrieved.
- `https://ashpublications.org/blood/article/134/13/1003/374918/Effect-of-donor-component-and-recipient`
  - WebFetch: "failed at its site (client_error), and nothing of the page was retrieved." This was
  my route to the supplement and to publisher front matter; it is the reason Appendix Table 8 is
  unread. Route failure, **not** budget exhaustion.
- WebSearch for the supplement by title plus "ashpublications supplemental appendix" returned no
  Blood or supplement URL - only the eScholarship record and an unrelated cluster of JCI Insight
  article 152598 pages. **Counting discipline:** the eScholarship record surfaced in both searches;
  that is one document, not two sources, and it is the same document as the PDF I read.
- Routes NOT attempted, and why: **PMC and Europe PMC are hard-blocked here**, so no PMCID route was
  tried; a PMCID would in any case be an identifier to convert, not a route. **Unpaywall was skipped
  entirely** rather than supply a contact email.
- Budget state at stop: 5 of 6 fetches and 2 of 2 searches spent. One fetch remained; I had no
  further non-derived URL in conversation to spend it on.

## BEARING ON THE LEDGER ENTRY

**HOLD, with two narrowings written into the entry.**

The entry's characterisation of the second prior is accurate on both limbs, and the limb the entry's
survival depends on is accurate for a stronger reason than the entry gives. Taking the "why it
matters" on its own terms: measured per-unit haemoglobin mass is **not** in the exposure set, so the
candidate's first limb - the variance share attributable to the specific unit's haemoglobin mass - is
**not** closer to answered, and the entry's "nothing else kills this entry" line survives this
source. The paper does not merely omit the variable: it **assumes a constant per-unit dose of ~89 g
Hgb** and states that future work "will need to normalize for donor hemoglobin levels", i.e. it
reports that even the proxy was unavailable. On sub-claims (e) and (f) the entry is also safe - there
is no unit-versus-patient variance decomposition and no second-unit probability or hazard, the latter
foreclosed by the single-unit design rather than answered.

Narrow the entry in two places:

1. Stop pairing "23,194 recipients" with the 0.25. **Write the 0.25's denominator as 27,384 24-hour
   transfusion episodes**, note that 23,194 is the Abstract's recipient count and is not restated in
   the Results, and note that the unit of analysis is the episode. Record the sibling values 0.18
   (38,019 initial-period episodes) and 0.28 (17,038 48-hour episodes) so no one later swaps them.

2. Add that the 0.25's covariate set also carries **"Hours between pre-Tx measurement and Tx"**,
   **"Hours between Tx and post-Tx measurement"** and **"Transfusion year"**, so 1 - 0.25 is **not**
   a residual attributable to unmeasured unit biology. If the entry's candidate leans on the
   unexplained 75% as headroom for per-unit haemoglobin mass, that inference does not follow from
   this paper and the entry should say so itself.

One addition the entry should make on its own account, bearing on novelty rather than on survival:
**this prior names the gap.** Phrase the entry's framing as "unperformed, and flagged as future work
by Roubinian et al. 2019" rather than as un-asked. An entry that claims nobody has posed the
question is weaker than one that claims the measurement has not been made, and only the second is
true here.

Residual uncertainty to carry forward, flagged so the next reader does not treat it as closed:
**Appendix Table 8 is unread** (publisher host client_error, not budget). It is the right kind of
document to settle the 24-hour model's printed covariate rows. I expect it to contain no
haemoglobin-mass variable, for the reason I labelled above as my own reasoning, but the entry should
carry that as an open route rather than as a finished check.
