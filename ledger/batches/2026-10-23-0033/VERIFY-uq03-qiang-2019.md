# VERIFY - Qiang et al. 2019 PNAS prints property decay, not cycles-to-failure; SI Fig. S4 still unopened after three routes
Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261023-03 holds that the nearest prior supplies the fatigue METHOD inside a single
living cell but not the candidate's endpoint. Specifically that Qiang Y., Liu J., Dao M.,
Suresh S., Du E. (2019), 'Mechanical fatigue of human red blood cells', PNAS
116(40):19828-19834, DOI 10.1073/pnas.1910336116:

  (i) DEFINES a critical cycle count N_s at a 5% drop in maximum stretch ratio;
  (ii) MEASURES property decay;
  (iii) does NOT print per-cell failure probability against cycle number;
  (iv) and that its SI Fig. S4, which carries the Wohler-like construction, was NOT
       opened by anybody.

## READ LEVEL

MAIN TEXT: PARTIAL, via the NSF PAR mirror of the published PNAS article,
https://par.nsf.gov/servlets/purl/10203855 . Front matter, Abstract, Introduction,
Results (figure captions for Figs. 1-5), Discussion, and the voltage/shear-stress
calibration list were all served. The read is PARTIAL rather than FULL because the
summariser caps verbatim quotation at roughly 125 characters and declined to reproduce
the five main-text figure captions in full, returning summaries of Figs. 1-5 instead;
I therefore do not hold those captions verbatim and do not quote them as if I did.
Methods were not served in any detail.

SI APPENDIX (Figs. S1-S9, including Fig. S4): COULD NOT READ. Not NOT FOUND - the
document is cited by the main text and exists at the publisher. Three routes failed; see
ROUTES THAT FAILED. The SI is not bound into the PAR mirror: the PAR PDF is the published
article only, and its own text "cites SI Figs. S1-S9, but their contents aren't provided."

SURROGATE ATTEMPTED AND FAILED: Yuhao Qiang's FAU dissertation PDF
(https://fau.edu/engineering/news/phd-dissertations/yuhao-qiang.pdf) served only the
abstract, biographical sketch and publication list - no figures, no captions, and the
publication list does not even include the PNAS 2019 paper. It is the right KIND of
document to carry a reproduction of the Wohler-like figure (an author's own thesis on
exactly this work), which is why I named it; it turned out to be a one-page front-matter
file, so it settles nothing in either direction.

WRONG-PAPER WARNING for anyone retracing this: the first hit for the exact title phrase,
https://par.nsf.gov/servlets/purl/10026265 , is NOT the PNAS paper. It is the 2017
predecessor - Yuhao Qiang, Jia Liu, E Du, 'Dynamic fatigue measurement of human
erythrocytes using dielectrophoresis', Acta Biomaterialia 57:352-362 (front matter as
printed there). That paper defines NO N_s, uses ONE amplitude level, and its "S4" is a
MATLAB script in the supplementary material, not a figure. Grading UQ-20261023-03 on
10026265 would produce a false negative on sub-claim (e) and a spurious "Fig. S4 is a
script" reading. I read it (one fetch) before noticing the title mismatch, and I report it
as a distinct document, not as corroboration of the PNAS paper.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are from the PAR mirror of the PNAS 2019 article unless labelled
otherwise.

FRONT MATTER (authority for the citation): "Yuhao Qiang, Jia Liu, Ming Dao, Subra Suresh,
E. Du", Proceedings of the National Academy of Sciences, vol. 116, no. 40, pp. 19828-19834,
first published September 16, 2019, DOI 10.1073/pnas.1910336116.

(b) THE DEFINITION OF N_s. RECONSTRUCTION FROM 2 CONSECUTIVE SUMMARISER FRAGMENTS,
assembled only from consecutive returns and verified at the junction, which falls inside
the noun phrase "a critical number of fatigue cycles, Ns, / required to achieve this level
of change":

  "we explore the conditions surrounding a 5% reduction in lambda-max and define a
   critical number of fatigue cycles, Ns, required to achieve this level of change for
   different fatigue loading conditions."

SCOPE-SETTING OPENER: the clause opens with "we explore the conditions surrounding", which
scopes the whole sentence as the authors' own definitional move - it ASSERTS that N_s is a
quantity they are constructing, and the trailing "for different fatigue loading conditions"
scopes N_s as a per-condition quantity, i.e. one N_s per amplitude level. The 5% drop is in
lambda-max, "the maximum extension ratio" - NOT in shear modulus, not in viscosity, and not
in any failure measure.

TERMINOLOGY NOTE ON THE ENTRY'S WORDING: the entry says "5% drop in maximum stretch ratio".
The PNAS paper's own word is extension ratio (lambda-max); "stretch ratio (SR)" is the
wording of the 2017 Acta Biomaterialia predecessor. Same quantity, different house style.
Not a defect, but the entry should say lambda-max if it wants to be quotable.

AXIS N_s SITS ON: NOT ESTABLISHED from the main text. The served text "does not state what
axis N_s occupies"; per the summariser it "appears only in the context of a stress-life
curve, which is referenced to SI Appendix Fig. S4". I flag that I do NOT hold a verbatim
sentence placing the string "SI Appendix, Fig. S4" adjacent to the Wohler phrase - that
adjacency is the summariser's assembly, not a quotation I can stand behind.

(c) FAILURE, HEMOLYSIS, LYSIS - what is actually printed. The paper talks about failure
repeatedly and measures none of it. Preferring the HEDGED formulations:

  "Our method thus provides an accelerated test for assessing fatigue failure in RBC
   membranes due to mechanical loading."   (Discussion)
  "It is likely that significantly greater numbers of mechanical fatigue are needed to
   lyse the RBCs."   (Discussion)
  "the eventual failure of RBCs causing hemolysis in various hemolytic pathologies"
   (Abstract)
  "exacerbating fatigue damage and hemolysis of RBCs in circulation"   (Introduction)

"It is likely that significantly greater numbers ... are needed to lyse the RBCs" RECORDS A
MOVE AWAY from the quantity: it is the authors saying their cycle counts did not reach
lysis. The method sentence ANNOUNCES a capability ("provides an accelerated test for
assessing fatigue failure") rather than printing a failure number - PUBLISHED IS NOT
PERFORMED, and there is no cycles-to-failure number anywhere in the served text.

THE ONE NUMBER THAT LOOKS LIKE THE CLAIM'S, and why it is not. Served fragment, Discussion:
"about 98% of the cells are still viable after mechanical fatigue testing".

  NUMERATOR CLASS: cells scored still viable at the END of the fatigue test. Its complement
  (about 2%) is non-viable cells, pooled over the whole test. Exclusions that matter: the
  companion treatment of this same assay counts irreversibly deformed but intact cells as
  something OTHER than ruptured - cf. the 2017 predecessor's "a direct sign of cumulative
  deterioration in cell membrane integrity is the emergence of irreversibly deformed cells"
  and its separate "This allows us to detect whether membrane rupture occurs for hemoglobin
  release" - so an irreversibly deformed, non-lysed cell lands in the 98%, i.e. in the
  SURVIVOR class.
  DENOMINATOR: cells put through the fatigue test, pooled. Checked against the near
  neighbours it is NOT: it is not per cycle number N, not per amplitude level, not per cell
  tracked to an event, and not a censored-survival denominator.
  OVERLAP, WHAT IT MISSES: everything the claim's quantity needs. A per-cell failure
  probability against cycle number requires P(fail | N) at several N and several amplitudes;
  this is one scalar at one endpoint of testing, with no N-dependence, no amplitude
  breakdown, no distribution and no censoring. No S-N or survival curve can be recovered
  from it.
  OVERLAP, WHAT IT INCLUDES THAT THE CLAIM EXCLUDES: any loss of viability during the whole
  protocol - electrical, thermal, DEP-field and handling losses - not only
  mechanical-fatigue-induced rupture. It is a protocol-level viability control, which is
  what viability assays are for.
  HONEST LIMIT: I could not read this sentence's OPENING WORDS, only the fragment above, so
  I cannot complete the scope-setting-opener discipline on it. Treat my numerator/denominator
  reading as resting on a short fragment.

(e) AMPLITUDE LEVELS. Voltage (RMS) "fixed at 0.5, 0.8, 1.0, and 1.2 V" in the initial
experiments, with 1.5 V and 2.0 V added later - six voltage levels; "The applied voltage was
kept at no more than 2.0 V." Calibrated shear stresses are given for 0.8-2.0 V only, five
levels, with the authors' stated uncertainty carried through:
1.19 +/- 0.22 Pa, 1.87 +/- 0.42 Pa, 2.85 +/- 0.77 Pa, 4.78 +/- 1.48 Pa, 9.63 +/- 3.21 Pa.
No calibrated stress for 0.5 V. Loading R = 0 at 0.25 Hz, rectangular waveform, with a
half-wave rectified sinusoid at 1.2 V also tested. So: YES, at least four amplitude levels,
and five with a calibrated stress.

(d) FIG. S4. COULD NOT READ. The only thing I can quote toward it is the main text's hedged
comparison, "somewhat similar to the classical Wohler curve in metal fatigue". "somewhat
similar to" RECORDS A MOVE AWAY from the assertion that this IS a Wohler curve. What
follows is MY OWN INFERENCE from the main text and is explicitly not a read of S4: since
the only life variable the paper defines is N_s at a 5% lambda-max reduction, and since no
failure endpoint is measured anywhere in the served text, a stress-life plot in Fig. S4 can
only have N_s on its life axis, which makes it a property-decay life curve wearing S-N
clothes rather than a stress-life curve with failure as the endpoint. That is an inference,
not a finding.

## REGIME

Qiang et al. 2019 PNAS, in its own terms: population = human red blood cells from healthy
donors, held in a DEP working medium on an interdigitated-microelectrode microfluidic chip.
Unit of analysis = the individual cell, tracked optically across cycles - which is exactly
the regime the entry credits it with ("the fatigue METHOD inside a single living cell").
Operating condition = amplitude-modulated electrodeformation, R = 0 (zero minimum load),
0.25 Hz, rectangular waveform, 0.5-2.0 V RMS, calibrated shear stress 1.19-9.63 Pa, up to
of order 900-1000 cycles (cell images at N = 1, 50, 450, 900). Instrument = DEP
electrodeformation plus microscopy. Threshold = a 5% reduction in lambda-max, author-chosen.
Category of outcome = property decay: lambda-max, effective plastic strain, membrane shear
modulus, membrane viscosity, each versus cycle number.

DOES THE CLAIM SIT INSIDE IT? The entry's method limb sits squarely inside: single-cell
unit of analysis, cyclic mechanical loading, multiple amplitudes, a defined life variable.
The entry's endpoint limb sits OUTSIDE it, and that is the entry's own point: the paper's
outcome category is a property threshold, and its only lysis-adjacent statement is the
authors saying lysis was not reached. A per-cell failure probability against cycle number
is silent in this regime, not contradicted by it.

## DEFECTS FOUND

1. NOT A DEFECT IN THE ENTRY, BUT THE ENTRY IS MISSING ITS NEAREST NEIGHBOUR. The entry
   says the paper "does NOT print per-cell failure probability against cycle number" and
   stops there. The paper DOES print a number one word away - "about 98% of the cells are
   still viable after mechanical fatigue testing" - and an adversarial reader will hold that
   up as a failure rate. The entry should name it and say what it is not (see the
   numerator/denominator work above), rather than leave the field looking empty.

2. THE ENTRY'S "maximum stretch ratio" is the predecessor paper's wording. The PNAS 2019
   paper's own term is the maximum extension ratio, lambda-max. Cosmetic, but it is the
   difference between a quotable entry and a paraphrased one.

3. SUB-CLAIM (iv) IS AN UNENUMERATED UNIVERSAL AND REMAINS SO. "was NOT opened by anybody"
   is a claim about the ledger's reading history, which I cannot audit from here. What I can
   enumerate is my own side: instances I OPENED = the PNAS 2019 main text (PAR mirror), the
   2017 Acta Biomaterialia predecessor (PAR mirror), the FAU dissertation front matter.
   Instances I did NOT open = SI Appendix Figs. S1-S9 of PNAS 2019, Fig. S4 among them, and
   the PNAS main-text page itself. So sub-claim (iv) is TRUE OVER THE INSTANCES I CAN
   ENUMERATE and UNENUMERATED as to the reviewers - and, importantly, it is now a ROUTE
   PROBLEM rather than an oversight: a second, independent reader could not reach that SI
   either, through three distinct URLs. The entry should say "route-blocked" rather than
   imply nobody tried.

4. THE ENTRY GRADES ON AN UNREAD CONSTRUCTION, and that stands. The entry asserts Fig. S4
   "carries the Wohler-like construction". I could not open S4, and I could not even obtain
   a verbatim main-text sentence tying the Wohler phrase to the S4 citation - the adjacency
   came to me via a summariser, not as a quotation. So the entry's characterisation of S4 is
   currently supported by nobody's direct read, including mine.

## ROUTES THAT FAILED

- https://www.pnas.org/doi/10.1073/pnas.1910336116 - WebFetch, client_error at the site,
  nothing retrieved.
- https://www.pnas.org/doi/suppl/10.1073/pnas.1910336116/suppl_file/pnas.1910336116.sapp.pdf
  - WebFetch, client_error at the site, nothing retrieved. This is the SI route the task
  named.
- https://www.pnas.org/action/downloadSupplement?doi=10.1073%2Fpnas.1910336116&file=pnas.1910336116.sapp.pdf
  - WebFetch, robots_disallowed. Different failure mode from the two above, same host.
- pmc.ncbi.nlm.nih.gov/articles/PMC6778231 surfaced in the search and was NOT attempted:
  PMC and Europe PMC are hard-blocked in this environment by standing rule.
- /root/.ccr/README.md and the proxy status endpoint: Bash read DENIED by the auto-mode
  classifier ("Containment Escape"). Recorded, not worked around, not retried, and the
  proxy was not probed by any other means. If a future checker needs the PNAS SI, the
  blocker is this permission plus pnas.org's robots policy, and it needs a human decision
  rather than another agent's cleverness.
- https://fau.edu/engineering/news/phd-dissertations/yuhao-qiang.pdf - fetched successfully
  but served only abstract, bio and publication list; no figures.
- https://par.nsf.gov/servlets/purl/10026265 - fetched successfully but is the 2017 Acta
  Biomaterialia predecessor, not the PNAS paper. A title-match hit that is a different
  document.

Searches: ONE WebSearch, the exact-title-plus-author query against par.nsf.gov; it returned
nine links, several of which are repeat title returns for the SAME underlying document and
are counted as title matches, never as corroboration. No search was refused by the
classifier.

## BEARING ON THE LEDGER ENTRY

HOLD the entry's substance, NARROW its wording, and CONVERT its SI limb into an explicit
promotion condition.

HOLDS, on a partial read of the main text: (i) the paper does DEFINE N_s at a 5% reduction
in lambda-max, in the authors' own definitional sentence; (ii) it MEASURES property decay -
lambda-max, effective plastic strain, shear modulus, viscosity against cycle number, at five
calibrated stress amplitudes; (iii) it prints NO per-cell failure probability and NO
cycles-to-failure distribution, and its own Discussion says lysis was not reached ("It is
likely that significantly greater numbers of mechanical fatigue are needed to lyse the
RBCs"). The entry's reading of the method/endpoint split survives independent re-testing.

NARROW: say lambda-max, not "maximum stretch ratio"; and add the 98%-viability sentence as
the named near neighbour the entry is not relying on, with its denominator spelled out, so
the next reader does not mistake it for a failure rate.

CONVERT TO A PROMOTION CONDITION, touching the entry's SI limb and the rejected candidate's
FIRST LIMB: SI Appendix Fig. S4 is COULD NOT READ, not read-and-found-empty. The kind of
document that would settle it is the PNAS SI appendix PDF itself (or a library/repository
copy of it) - nothing else will do, because the question is what that specific figure's axes
are. Condition: if Fig. S4 plots stress amplitude against N_s defined at the 5% lambda-max
threshold, the entry's first limb STANDS as written and the candidate's endpoint is still
un-published. If Fig. S4 plots cycles to lysis or rupture, or any survival fraction against
cycle number, then the entry's limb (iii) must be STRUCK and the candidate's first limb is
closer to published than the entry says. Until someone with publisher access opens that
figure, the entry should carry the limb as route-blocked rather than as established.
