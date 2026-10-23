# VERIFY - Sleight 2006 bounds but does not exclude an accelerating per-cycle freeze-thaw hazard in E. coli
Checker: fresh context. Budget used: 3 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261023-03 asserts that the one E. coli cycle-count dataset BOUNDS damage
accumulation without EXCLUDING it, on four legs:

1. Sleight et al. 2006 prints "a nearly constant mortality rate of 34.4% killed per
   freeze-thaw cycle";
2. on a log-linear trajectory with r2 = 0.97;
3. over 28 cycles;
4. reports NO test against an accelerating alternative, and measures population CFU/mL
   rather than a per-cell hazard.

Source as the entry carries it: Sleight S.C., Wigginton N.S., Lenski R.E. (2006),
"Increased susceptibility to repeated freeze-thaw cycles in Escherichia coli following
long-term evolution in a benign environment", BMC Evolutionary Biology 6:104,
DOI 10.1186/1471-2148-6-104.

Verdict in one line: **all four legs hold.** Two refinements and one caution below; the
scope-setting opener of the 34.4% sentence makes the entry's case STRONGER, not weaker.

## READ LEVEL

**Sleight, Wigginton & Lenski 2006 - PARTIAL, substantial.** Sections actually read, as
served by the summariser from the Springer full-text HTML: the Results paragraph containing
the 34.4% figure (in full, first word to last), the Figure 1 legend, the Methods passages on
regression, on CFU enumeration and plating, on the freeze-thaw protocol and on replication,
and the Discussion sentence containing "accumulated". Front matter read directly.

NOT read: the figures as images (I have Figure 1's legend and the prose describing it, not
the plotted points); any Additional files / supplementary material, whose existence I did not
establish either way. This matters only for sub-claim (c) and is flagged there.

Route that worked: bmcecolevol.biomedcentral.com/articles/10.1186/1471-2148-6-104 returned a
302 to link.springer.com/article/10.1186/1471-2148-6-104 (with a cookies_not_supported query
string); fetching the redirect target served the full text. Open access, as the entry says.

### Front matter, taken from the article page and not from any short form

Authors as PRINTED: "Sean C Sleight", "Nicholas S Wigginton", "Richard E Lenski".
Journal: BMC Evolutionary Biology (BMC Evol Biol), volume 6, article number 104.
Published 05 December 2006. DOI 10.1186/1471-2148-6-104.

The entry's citation is correct in every particular and needs no correction. One trap for a
future checker: the page's HTML title tag now reads "BMC Ecology and Evolution", because the
journal was renamed after 2006. The journal of record for this article is BMC Evolutionary
Biology. Do not "correct" the entry to the new name.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Read level and routes

Answered above: PARTIAL (Results 34.4% paragraph in full, Figure 1 legend, Methods on
regression / CFU / protocol / replication, one Discussion sentence). Not COULD NOT READ.

### (b) The 34.4% sentence whole, with neighbours, r2, cycle count, and what the opener scopes

RECONSTRUCTION NOTICE: the summariser caps verbatim return at roughly 125 characters. The
paragraph below is assembled from five ORDERED CONSECUTIVE fragments as served, with the
junctions verified; nothing is completed by inference. The server stated that the paragraph's
first word is "Figure" and its last word is "cycle."

> "Figure 1 shows the survival trajectories for the E. coli B ancestral strain under the
> -80°C freeze-only / and freeze-thaw regimes over the course of 28 days. / With daily
> freeze-thaw cycles, the density of viable cells declined by about five orders of magnitude.
> / As evidenced by the log-linear trajectory (r2 = 0.97, p < 0.0001), the bacteria
> experienced a nearly / constant mortality rate of 34.4% killed per freeze-thaw cycle."

The sentence that FOLLOWS the paragraph (served separately, in three consecutive fragments):

> "It is quite clear that most of this mortality was caused by the repeated bouts of freezing
> and thawing, / as opposed to the time that cells spent frozen, / because the cumulative
> mortality under the freeze-only regime was far less."

**r2 = 0.97, p < 0.0001.** Printed inside the parenthesis of the 34.4% sentence itself.
Matches the entry exactly.

**Cycles: 28.** Printed as "over the course of 28 days" with "daily freeze-thaw cycles", so
28 daily cycles. The Methods confirm the one-cycle-per-day mapping: "To measure survival
after 7 days, the vials were subjected to seven freeze-thaw cycles". The entry's "over 28
cycles" is right, but note the paper's own unit is DAYS and the cycle count is inferred by the
paper's own daily protocol, not printed as the bare integer 28 next to the word "cycles".

**WHAT THE OPENING WORDS SCOPE - this is the load-bearing finding.** The clause carrying the
quantity is subordinated to "As evidenced by the log-linear trajectory (r2 = 0.97,
p < 0.0001),". That opener scopes the constancy claim as an INFERENCE READ OFF THE FIT, not as
an independently established fact about the hazard. The grammar is: because the trajectory is
log-linear with r2 = 0.97, therefore the rate was nearly constant. The clause ASSERTS the
quantity 34.4% per cycle, and it ASSERTS near-constancy - but it asserts the constancy
*on the evidence of the fit's goodness alone*. A high r2 on a straight line is a
goodness-of-fit statement about one model; it is not a comparison against a second model. The
entry's reading is therefore not merely compatible with the sentence, it is what the
sentence's own opener concedes.

Second hedge in the same clause: "**nearly** constant", not constant. The paper itself
declines the exact-constancy claim.

### (c) Is the fit log-linear, and is any curvature / acceleration / interaction test reported?

**Log-linear: yes, explicitly, in both the Results prose and the Methods.** Methods, as
served in two consecutive fragments:

> "In each case, linear regression was performed on the log10-transformed viable cell
> densities / to estimate the daily mortality rate and determine whether it differed
> significantly from zero."

That sentence names the ONLY hypothesis the regression was built to test: slope versus ZERO.
Not slope versus a curve. The one significance test actually reported on a trajectory shape is
the freeze-only control:

> "the slope of the cell-survival trajectory from day 1 to day 28... was not significantly
> different from zero (p = 0.3483)."

**No test for curvature, nonlinearity, acceleration, a quadratic term, or a cycle-number
interaction is reported.** How I checked: I asked twice, in two separate fetches with
differently worded prompts, for any such test, and the server reported its absence both times
while correctly surfacing the slope-versus-zero tests that ARE present. I also have the
Methods sentence stating what the regression was for, which is positive evidence about the
analysis's design rather than mere silence.

AN UNENUMERATED UNIVERSAL, named as such: "reports NO test" is a universal over the paper's
contents. It is TRUE OVER WHAT I OPENED - Results (the 34.4% paragraph), the Figure 1 legend,
the Methods regression / CFU / protocol / replication passages, and the Discussion sentence I
pulled. It is UNENUMERATED over: the figures as plotted images, and any Additional files or
supplementary material, whose existence I did not establish. I did not open those. A future
checker who wants this leg airtight should enumerate the Additional files.

What KIND of document would settle the residual: the article's own supplementary/Additional
files, or a later paper refitting these same trajectories. I am naming the Additional files
specifically because they are the right KIND - they would carry the unreported statistics of
this very dataset. I have not opened them, so this is a lead, not a finding.

Supporting find the entry does not carry, and should: the paper later treats constancy as an
ASSUMPTION it has already banked, not as a result under test. Served verbatim:

> "given the temporal constancy of the mortality rates observed in the first experiment"

That opener ("given...") RECORDS A MOVE AWAY from testing constancy: it imports the first
experiment's constancy as a premise licensing a later design choice. This is the strongest
single sentence in the paper for the entry's position.

### (d) What is the measured unit - CFU per mL of a population, or individual cells?

**Population CFU/mL. Not individual cells.** The entry is correct.

Figure 1 legend: "log10-transformed viable cell density (CFU/mL)".
Methods: "Colony forming units (CFU) were used to estimate viable cell densities."
Plating: "Diluted or undiluted cell cultures were plated on tetrazolium-arabinose (TA)
indicator agar", incubated "at 37°C for 24 h before counting."
Detection limit: "~10 cells/mL".

No per-cell, single-cell, flow-cytometry, microscopy, or viability-stain measurement is
reported anywhere I read. The paper's instrument is a colony count on an agar plate.

NUMERATOR CLASS and DENOMINATOR, checked in both directions, because 34.4%/cycle is exactly
the kind of number that sits one word away from the candidate's quantity:

- NUMERATOR CLASS: loss of colony-forming ability on TA agar at 37°C within 24 h, inferred
  from the slope of log10 CFU/mL - not counted directly. What this class MISSES: any cell that
  is metabolically alive but non-culturable on TA agar under those conditions is scored as
  killed, so the numerator over-counts death relative to any stain- or cytometry-based
  viability. What this class INCLUDES that a per-cell hazard excludes: clumping and aggregation
  effects (one colony can arise from several adhering cells), plating efficiency losses, and
  the ~10 cells/mL floor, none of which are properties of individual cells.
- DENOMINATOR: viable cells per mL present at the start of each cycle - a population density
  in a vial. Near neighbours it is NOT: not per hour or per day spent frozen (that is the
  freeze-only control, whose slope was indistinguishable from zero, p = 0.3483); not per day
  of storage; not per cell lineage or per tracked cell.
- OVERLAP: a ratio of successive population CFU/mL equals a per-cell hazard ONLY if the
  population is homogeneous, the cells are independent, and the hazard is memoryless. Those are
  precisely the assumptions a damage-accumulation hypothesis denies. So the paper's number and
  the candidate's quantity are DIFFERENT QUANTITIES that coincide under the null being tested.

MY OWN ARITHMETIC, labelled as such: 34.4% killed per cycle implies 0.656 survival per cycle,
log10(0.656) = -0.183 per cycle, times 28 cycles = -5.1, i.e. about 5.1 orders of magnitude.
This reproduces the paper's own "declined by about five orders of magnitude", so the printed
34.4% and the printed 28-day decline are internally consistent. Stated uncertainty carried
through: the paper prints r2 = 0.97 and p < 0.0001 for the fit and prints NO confidence
interval or standard error on the 34.4% itself, so my check inherits no interval either.

### (e) Does the paper frame repeated cycles as CUMULATIVE DAMAGE, and in what words?

**No - not as cumulative cellular damage.** This is a refinement a reader of the entry needs.

The word "cumulative" does occur, but in the sentence immediately AFTER the 34.4% sentence, and
there it is an ACCOUNTING term in a between-regimes comparison, not a mechanism: "because the
cumulative mortality under the freeze-only regime was far less." That clause's work is to
attribute mortality to the thaw transitions rather than to frozen residence time. Quoting
"cumulative" out of it to support a damage-accumulation framing would be a verbatim-but-wrong
cut of exactly the sort this ledger keeps committing.

"accumulated" occurs in the Discussion, and refers to MUTATIONS, not cellular damage:
"mutations that harmed freeze-thaw survival had accumulated by neutral drift." That is a claim
about genomes over 20,000 generations of evolution, on a different axis entirely from
within-cell injury across 28 cycles.

"damage" and "injury" do not describe repeated cycles in the body text as read; they appear in
reference titles only (e.g. "cryoinjury", "wall and membrane damage"), which I did not quote
and which are other authors' words.

So: the paper's causal framing is "repeated bouts of freezing and thawing" as the agent of
mortality ("It is quite clear that most of this mortality was caused by the repeated bouts of
freezing and thawing, as opposed to the time that cells spent frozen"), which localises the
killing to the TRANSITION rather than to duration - but it says nothing about whether successive
transitions act on a progressively more damaged population.

### (f) One sentence: exclude, or fail to test?

It FAILS TO TEST for an accelerating per-cycle hazard - it does not exclude one: the only
inferential question the Methods pose is whether the log-linear slope differs from zero, the
near-constancy is asserted "As evidenced by the log-linear trajectory (r2 = 0.97, p < 0.0001)"
rather than against any alternative model, and the paper's own hedges ("nearly constant") and
its later importation of constancy as a premise ("given the temporal constancy of the mortality
rates observed in the first experiment") both concede that constancy was read off a good fit
rather than established against a competitor.

## REGIME

Stated in the paper's own words, so a reader can see where the result is silent.

- **Population / unit of analysis:** the "E. coli B ancestral strain" - the ancestor of
  Lenski's LTEE, not an evolved clone. The 34.4% figure is the ANCESTOR's, in the Figure 1
  experiment. Separately, "12 populations were founded using an E. coli B ancestor" for the
  evolutionary comparison that is the paper's actual subject.
- **Operating condition:** vials "placed in a -80°C freezer"; "Each day the tubes were kept
  frozen for 22.5 h"; "allowed to thaw at room temperature (about 22°C) for 1.5 h"; one cycle
  per day; 28 days. Cryoprotectant: the Introduction says the tests were run "in the absence
  of cryoprotectant"; glycerol appears in the Methods only for stock storage, "stored in
  glycerol at -80°C". Control arm: a "freeze-only" regime at -80°C.
- **Instrument and threshold:** colony counts on tetrazolium-arabinose indicator agar, 37°C
  for 24 h, detection limit "~10 cells/mL". Readout "log10-transformed viable cell density
  (CFU/mL)".
- **Replication:** "transferred into each of three replicate vials"; "Each evolved line had
  three replicates, while the ancestor was replicated six-fold".
- **Statistic:** "linear regression ... performed on the log10-transformed viable cell
  densities to estimate the daily mortality rate and determine whether it differed
  significantly from zero."

**Does the claim sit inside this regime?** The entry's descriptive claims about the paper sit
squarely inside it - every leg is printed. But the candidate's quantity, if it is a per-cell
hazard, sits OUTSIDE this regime: the instrument is a plate count on a population, the unit of
analysis is a vial, and the only alternative hypothesis entertained is a zero slope. A result
proved under these assumptions is silent outside them.

## DEFECTS FOUND

Against the ENTRY: none that changes its bearing. Specifically:

1. "34.4% killed per freeze-thaw cycle" - PRINTED, verbatim, in the Results paragraph on
   Figure 1. Confirmed.
2. "log-linear trajectory" and "r2 = 0.97" - PRINTED in the same sentence, with p < 0.0001.
   Confirmed.
3. "over 28 cycles" - PRINTED as 28 days of daily cycles. Confirmed, with the minor note that
   the paper's printed unit is days.
4. "reports NO test against an accelerating alternative" - confirmed over every section I
   opened, and positively supported by the Methods statement that the regression existed to
   test the slope against zero. UNENUMERATED over Additional files and the figure images.
5. "measures population CFU/mL rather than a per-cell hazard" - confirmed; CFU/mL is the
   printed unit and no single-cell instrument appears.

Refinements the entry should absorb:

6. **Attribute the 34.4% to the ANCESTOR, in the Figure 1 experiment.** The entry does not say
   whose rate it is. The paper's paragraph opens "Figure 1 shows the survival trajectories for
   the E. coli B ancestral strain". If the entry's attack 8 identity is applied to evolved
   lines, this number is the wrong arm.
7. **Do not confuse 34.4% with 34.0%.** The paper prints a SECOND, near-identical figure from a
   different experiment: "The ancestor experienced a mortality rate of 34.0% per day under the
   freeze-thaw regime". Two numbers one decimal apart, from two experiments. The entry quotes
   34.4%, which is the Figure 1 / r2 = 0.97 number - correct pairing. Anyone re-checking should
   not treat the 34.0% as corroboration; it is a second measurement in the same paper, not an
   independent source.
8. **The paper does NOT frame repeated cycles as cumulative cellular damage** (sub-claim (e)).
   If any part of the ledger leans on Sleight et al. for a damage-accumulation framing, that
   lean is unsupported: "cumulative" there modifies "mortality" in a freeze-only comparison,
   and "accumulated" in the Discussion refers to mutations under drift.
9. **Strengthen the entry with the scope-setting opener and the "given..." sentence.** The
   entry currently argues the paper is silent on acceleration. The paper is better than silent
   for the entry's purposes: it marks its own constancy claim as an inference from fit quality
   ("As evidenced by the log-linear trajectory..."), hedges it ("nearly constant"), and then
   banks it as a premise ("given the temporal constancy of the mortality rates observed in the
   first experiment").

One caution on how far "bounds" can be pushed: r2 = 0.97 across 28 daily points does
constrain gross curvature, so the entry's word "BOUNDS" is apt and should not be upgraded to
anything stronger or weaker. But r2 is a goodness-of-fit on one model and the paper prints no
residual analysis, no confidence interval on the 34.4%, and no plotted points I could read, so
the bound cannot be quantified from what is printed. PUBLISHED IS NOT PERFORMED: the paper
PRINTS a per-cycle mortality rate and an r2; it does not PERFORM a model comparison, and so
with respect to the accelerating alternative it BOUNDS rather than measures.

## ROUTES THAT FAILED

- bmcecolevol.biomedcentral.com/articles/10.1186/1471-2148-6-104 - not a failure exactly: 302
  Found to link.springer.com with a cookies_not_supported query string. Cross-host redirect was
  returned rather than followed, costing one fetch. A future checker should go STRAIGHT to
  link.springer.com/article/10.1186/1471-2148-6-104 and save the call.
- Nothing else attempted. No PMC or Europe PMC route tried (hard-blocked here). No search used;
  the DOI resolved from the citation without one.
- Not reached, and therefore NOT a negative finding: the article's Additional files (existence
  unestablished) and Figure 1 as a plotted image.

## BEARING ON THE LEDGER ENTRY

**HOLD, with two narrowings and one strengthening.**

The entry's characterisation of Sleight, Wigginton & Lenski 2006 is accurate on all four legs:
the 34.4%-per-cycle figure, the log-linear fit at r2 = 0.97, the 28 cycles, and the absence of
any test against an accelerating alternative on a population CFU/mL readout. Attack 8's
algebraic identity can continue to lean on this paper as the null-supplying source, and the
novelty claim is not disturbed: the paper does NOT test for curvature and does NOT report a
per-cell measurement, which were the two conditions the entry flagged as able to overturn both.

NARROW on two points. (i) The number is the ANCESTRAL strain's, from the Figure 1 experiment -
say so, and do not silently transfer it to evolved lines; the paper's own second figure for the
ancestor, 34.0% per day, comes from a different experiment and is not corroboration. (ii) Drop
or disclaim any suggestion that the paper frames repeated cycles as cumulative damage. Its
"cumulative" is mortality accounting in a freeze-only comparison and its "accumulated" is about
mutations under neutral drift; the mechanistic framing the entry's topic needs is simply not
in this paper.

STRENGTHEN on one. The entry treats the paper as silent about acceleration. It is more helpful
than silent: the constancy claim is grammatically subordinated to the fit's own goodness ("As
evidenced by the log-linear trajectory (r2 = 0.97, p < 0.0001)"), hedged as "nearly constant",
scoped by a Methods design whose only stated inferential target is "whether it differed
significantly from zero", and subsequently imported as an assumption ("given the temporal
constancy of the mortality rates observed in the first experiment"). Quote the opener and the
"given..." clause in the entry; they do the work better than a bare assertion of silence.

Residual, honestly labelled: the "no test" leg is true over every section I opened and
unenumerated over the Additional files and the figure images. That is a lead of the right KIND
- supplementary files would carry unreported statistics on this very dataset - but I did not
open them, so it is a guess about what is there, not a finding. Promotion condition, if the
ledger wants this leg airtight: enumerate the article's Additional files and confirm no
curvature or model-comparison statistic appears in them.
