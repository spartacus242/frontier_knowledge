# Post-batch verification — medicine batch, 2026-10-18 01:30 UTC

Twenty-six fresh-context readers, one load-bearing source each, each handed the claim and
its identifier but not the reviewer's reasoning. Every one returned; none died at launch.
A residual pass on untried routes follows at the end of this file.

Read levels, counted over the 26: FULL TEXT or PDF 9, ABSTRACT ONLY 12, COULD NOT READ 3,
metadata or bibliographic only 2. Nine of the twenty-six reads changed something in the
entry they bear on. No verdict moved.

**Form.** Every reader ran the short single-source brief — a neutral literature or methods
question whose answer decides the point, one source per agent, with the read level and the
fetch count declared. That is now 167 of 167 agents under this form across eight batches.
The enumerated eight-attack adversary brief was not used; it has never launched.

**One policy breach, self-reported.** The reader checking Fortis 2016 put the project
owner's email address into an Unpaywall API query string, Unpaywall's courtesy parameter.
It flagged this itself. No other service received it and nothing else was sent. The
reader preamble now forbids putting any personal identifier into a URL, query string,
header or form, and says to skip an API that demands one; the residual pass ran under the
amended preamble. Recorded here because a breach that is only fixed is not disclosed.

Three readers went one or two fetches over their cap (Fortis 7 of 6, Huesch 8 of 6,
Ryder 7 of 6); each self-flagged, and no finding rests on the extra call.

---

## UQ-20261018-01 — Rejected (Gate 2, novelty Low). Verdict stands; two of five priors corrected.

The rejection rests on two legs: Fortis 2016 asked the candidate's question for the COPD
pair and reported both limbs, and Jones 2024 built a national cohort on the candidate's own
primary endpoint with the arrow reversed. Both legs were put to independent readers.

**Fortis 2016 (Respir Care 61(9):1192-1200, doi 10.4187/respcare.04647) — exists; full text
still unread after four independent attempts.** Two readers ran at it here, one by
identifier and one by subject alone; between them they spent 12 fetches on routes including
rc.rcjournal.com (both the article and the `.full.pdf` path), doi.org to
journals.sagepub.com (paywalled), PubMed, OpenAlex, Semantic Scholar, Unpaywall, and the
Minnesota and Iowa repository records. Unpaywall and Semantic Scholar both list a bronze
open-access PDF at rc.rcjournal.com; it returns a client error from here.

What the abstract establishes, concordantly across both readers: 1,805 subjects had a single
PFT session, 855 were included (473 normal, 382 restrictive), and persistent empiric COPD
diagnosis was 60 of 855 (7%). The 24% treatment figure splits the readers: the
subject-first reader found it in the abstract via the Minnesota and Iowa records as 208 of
855 for bronchodilators and/or inhaled steroids, with the covariate odds ratios alongside
it (empiric diagnosis 24.6, current smoking 2.04); the identifier-first reader, working
from an OpenAlex abstract reconstruction, did not see it at all. Treat 208/855 as present
in the abstract on the stronger of the two reads, and the discrepancy as a property of
which abstract rendering a route returns.

What the abstract cannot establish, and no reader could: **whether the 855 denominator is
restricted to patients who already carried a COPD label before the test.** Both readers
returned COULD NOT READ on it. This matters, and it cuts the way the entry already says it
cuts — Fortis's percentages are unconditional, so they cannot be converted into the
candidate's conditional retraction rate. The Gate 2 Low grade does not rest on Fortis
having *answered* the candidate's question; it rests on Fortis having *asked* it, in the
field's own words, and reported both of its limbs. That survives at abstract level.
No follow-up window, comparator, or dated removal event appears in the abstract.

**Jones 2024 (BJGP 74(743):e364-e370, doi 10.3399/BJGP.2023.0271) — verified at PDF level,
with one number to restate.** Hywel Jones, Bethan Cumins, Rebecca Cannings-John, Haroon
Ahmed, "Adverse respiratory outcomes among patients with resolved asthma: matched
retrospective cohort study", CPRD GOLD, England, 2010-2019. The resolved-asthma code is
the EXPOSURE, cohort-defining with the first code as index date, against matched
active-asthma and non-asthma cohorts — exactly the reversed arrow the entry claims.
**16,023 is the size of EACH of three 1:1:1-matched cohorts, not of the study**: 48,069
patients in all. The entry's "16,023-patient matched national cohort" is right about the
resolved cohort and should say so. No rate, hazard or proportion of the asthma population
coded resolved is reported, and there is no time-to-event analysis of the resolution event:
the methods are negative binomial regression of outcome counts after the index date. The
authors say future research should quantify remission and relapse rates.

The 33.3% is real and is worth stating precisely, because the entry leans on it: 5,333 of
the resolved cohort (33.3%) were **excluded in a sensitivity analysis** for having at least
one asthma medication in the 12 months before index. The 12-month criterion appears twice —
as the authors' own description of their cohort in the limitations, and as the QOF remission
definition cited in the introduction — and the sensitivity analysis implies it was not
enforced at code entry. So the endpoint dependency the entry found at Gate 4 holds, in this
form: the recorded-resolution code and the prescribing-cessation fallback are not
independent endpoints, and a third of the resolved cohort fails the prescribing criterion
the code is supposed to follow.

**Aaron 2017 — the title in the record is a paraphrase.** The real title is "Reevaluation of
Diagnosis in Adults With Physician-Diagnosed Asthma" (JAMA 2017;317(3):269-279, doi
10.1001/jama.2016.19627). Read at full text from an author copy. Current asthma was ruled
out in 203 of 613 participants, 33.1% (95% CI 29.4-36.8); 613 is the completers who could
be conclusively evaluated, out of 701 enrolled. De-labelling was performed by the study
team under protocol, with no routine-care follow-up of the label or the medication, and no
statement about what routine care does with a disconfirming result already on file. One
internal inconsistency worth recording: the discussion is reported to say more than 90% of
those ruled out stayed off medication for a year, while 181 of 203 is about 89%.

**Rimawi — real, and the 36% has a narrower denominator than it looks.** Rimawi RH, Shah KB,
Cook PP, "Risk of Redocumenting Penicillin Allergy in a Cohort of Patients With Negative
Penicillin Skin Tests", J Hosp Med 2013;8(11):615-618, doi 10.1002/jhm.2083, read at PDF
level, with the companion intervention paper (J Hosp Med 2013;8:341-345, doi
10.1002/jhm.2036). **The 36% is 20 of 55 readmitted patients, not 36% of the 150 tested** —
only 55 of 150 (37%) returned to a study hospital within a year. Removal was a study-team
intervention, so the inverse-flow reading in the entry is right. Neither paper measures
time from the disconfirming test to removal, nor any removal rate. The paper's own tables
disagree with its text twice (21 against 22 long-term-care residents; 40% against 63%
beta-lactam receipt).

**Spoto, arXiv:2506.14669 — identifier correct, and "decay" does not mean what it looks
like.** "Quantifying Diagnostic Signal Decay in Dementia: A National Study of Medicare
Hospitalization Data", Spoto, Tian, Hugel, Ortega, Ritchie, Blacker, Dominici, Patel, Mork,
Estiri; 1,827,468 beneficiaries, 3,045,819 hospitalisations, 2016-2018. Read at PDF level.
The decay is **loss of diagnostic specificity** — specific codes giving way to non-specific
ones — plus low county-to-national similarity of code-correlation matrices. **Code removal
is not analysed at all, and no hazard or cumulative incidence is reported.** It must not be
cited for a code-removal hazard. It conditions on no test result, which the entry already
says.

**Two findings that support the entry rather than correcting it.** The subject-first reader,
starting from the topic and not from any identifier, found **no paper measuring the rate at
which a chronic-disease code is removed after a disconfirming result as a time-to-event
quantity with a comparator, for COPD or for any other disease pair.** That is independent
confirmation of the Gate 4 attack-1 finding both adversaries reached: the conditional,
comparator-controlled, event-level quantity is unpublished. It is why this rejection routes
as an open problem.

**One prior nobody had found, which belongs in the routing row.** Arnold NR et al., "Inhaled
Medication Use in Smokers With Normal Spirometry", Respir Care 2021;66(4):652-660, doi
10.4187/respcare.08016, in COPDGene: 541 of 4,303 (12.6%) on inhaled medication at
enrolment, with roughly five years of follow-up and a no-medication reference group. It
cites Fortis 2016. It is **not** an answer to the candidate's question — its population is
smokers with normal spirometry rather than patients carrying a COPD label, and its main text
reports neither diagnosis nor inhaler persistence — but it is the nearest thing to a
longitudinal design in this literature and a later reader should not have to find it again.

---

## UQ-20261018-02 — Provisional (cap at Gate 4 attack 7). Verdict stands; the cap's evidence largely falls.

This entry is capped because both adversaries pressed the reason-for-silence mechanism and
adversary 2 graded it Unresolved, on the ground that the question is voiced in the field's
own words three times across 29 years — Phelps 1995, Roper 2023, Hanidu 2024, "each stating
the downstream implication and declining to compute it" — and that the wider artefact
question is actively contested in the candidate's own journal. **Two of those three legs do
not survive, and the third is not what it was taken for.**

**"Roper 2023" could not be identified.** Six searches found no 2023 paper by that author on
labour progress or cervical dilatation measurement. This is not-found in search rather than
proof of non-existence, and the reader said so. The nearest real paper making a similar
point is Huurnink JME et al., "Labor curves based on cervical dilatation over time and their
accuracy and effectiveness: A systematic scoping review", PLoS ONE 2024;19(3):e0298046 —
different authors, 2024 not 2023, and qualitative: it says the exact timepoint at which
dilatation reaches 10 cm is not known, and that examination frequency may affect the
perceived duration of first stage, with nothing computed. **This is the third load-bearing
citation on this ledger that no reader can locate**, after "Elmore 2022" and "Brewer 1995".

**Hanidu 2024 is a real paper doing something else.** Hanidu A, Kovalenko M, Usman S,
Monasta L, Zamagni G, Stampalija T, Lees C, "Intrapartum ultrasound for cervical dilatation:
Inter- and intra-observer agreement", Acta Obstet Gynecol Scand 2024;103(12):2455-2464, doi
10.1111/aogs.14970, read at PDF level from an open-access repository copy. It compares
transperineal ultrasound against digital vaginal examination; **DVE is the clinical
comparator, not a reference standard, so the paper is not an accuracy study of digital
examination and yields no digital-examination error against truth.** All three figures are
in it, with denominators that need stating: 80.3% is 118 of 147 **paired observations**
differing by 1 cm or less (34% at 0 cm plus 46.3% at 1 cm) in 110 women; the ICC of 0.85
(95% CI 0.75-0.90) is **TPUS against DVE**, not between examiners — the inter-observer ICCs
are 0.939 and 0.969 and the intra-observer ICCs 0.995 and 0.996, far higher; and the mean
difference of -0.925 cm is printed with **the direction of subtraction unstated** and with
limits of agreement that cannot be right as printed (-0.777 to 2.628, a lower limit above
the mean). The pairs are within 60 minutes of each other, not simultaneous. And on the
decisive point: **after a full-text read, the paper states no downstream implication for
labour-progress curves or dystocia thresholds** — no partograph, no Friedman-type curve, no
alert or action line. The one progress figure it cites (0.5 cm/hour for nulliparous women)
is used only to justify the 60-minute pairing window and is not computed from its data.

**Phelps 1995 is a simulator study.** "Accuracy and intraobserver variability of simulated
cervical dilatation measurements", AJOG 1995;173(3 Pt 1):942-945, doi
10.1016/0002-9378(95)90371-2. The 89.5% is the share of **1,574 measurements by 102
examiners** within ±1 cm of the **known inner diameter of PVC pipes mounted in cardboard
boxes**, judged by proprioception alone. Exact-diameter accuracy was 56.3%. It is not
digital examination in labour and not agreement between examiners, so citing it as "89.5%
of dilatation estimates within ±1 cm" misdescribes its population. Its intraobserver
variability figures (52.1% exact, 10.5% within ±1 cm) are a separate metric and must not be
read as a reproducibility share. No ICC. The abstract names an implication for
**dysfunctional labour** and computes none; it does not mention labour curves or partograms.
Read at abstract level only, so what the body says about an implication is unknown.

**The second leg of the cap is unread, not confirmed.** de Vries 2021 (BJOG 128(11):
1833-1842, doi 10.1111/1471-0528.16719) exists with every bibliographic element as cited,
but its full text has now defeated four independent readers, and OpenAlex reports no
open-access copy anywhere. The decisive question — whether its simulation injects a
dilatation measurement-error term, or only varies the analysis method and the examination
frequency — is COULD NOT READ, not NOT FOUND. The BJOG 2022 exchange is in the same state:
the Zhang/Troendle/Souza/Oladapo letter (doi 10.1111/1471-0528.17221, BJOG 2022;129(11):
1939-1940) and a de Vries reply both appear to exist, but only as Authorea preprint
metadata; doi.org, Wiley and PubMed all failed, and **no reader has read a word of either
body.**

**What this does to the entry.** The verdict does not move, and cannot: Validated is barred
independently by Gate 5's "Medium novelty with a close neighbor" — P1 is that neighbour and
its methods are unread — and by the Unverified residual inside attack 2. The entry is
already at its floor, so no late Gate 4 is owed. But the cap's stated ground must be
rewritten. It no longer rests on three voicings across 29 years: it rests on one simulator
study whose abstract names an implication for dysfunctional labour, and on a BJOG exchange
nobody has opened. An Unverified residual caps at Provisional in its own right, so the
entry lands in the same place on weaker and more honest ground.

The promotion condition must be rewritten too, because two of its items are now ill-formed:
item (1) requires reading two letter bodies that four route-sweeps have not opened, and item
(3) offers "the instrumented Hanidu-type paired-data route" as a primary design, when
Hanidu's pairs are 60 minutes apart, number 147 in 110 women, and measure TPUS against DVE
rather than either against truth.

---

## UQ-20261018-03 — Rejected (Gate 2 Low; Disguise Unresolved from both adversaries). Verdict stands; the swap leg falls, the near-duplicate leg holds.

**Hockenberry and Helmchen 2014 (P1) — the ground, and it holds.** Journal of Health
Economics 37:70-80, doi 10.1016/j.jhealeco.2014.06.001. All four coefficients the record
quotes exist in NBER WP 20017 Table 2, full-sample column, in percentage points per day
(the table note says coefficients were multiplied by 100): days since any inpatient
procedure, in-hospital mortality 0.067 (SE 0.025) and 1-day mortality 0.046 (SE 0.014);
days since last CABG, 0.032 (SE 0.015) and 0.010 (SE 0.006, not significant). Surgeon,
hospital and year fixed effects; log surgeon and log hospital CABG volume over the 365 days
to each procedure; the patient covariate list as recorded. The published abstract agrees on
188 surgeons, 56,315 CABG surgeries, Pennsylvania 2006-2010, 0.067 pp per day (2.4%
relative) and 0.398 pp (11.4%) in the high-volume emergent subsample. Endogenous scheduling
is flagged in the working paper in two places, and the findings are framed as "consistent
with" the mechanism rather than causal.

Three corrections. **The published body could not be read** — the Elsevier landing page
returned empty and ScienceDirect blocks fetching by robots rule — so the entry's "read in
full" should read "read in full as NBER WP 20017; published body unread, abstract
concordant". **The source contradicts itself on the CABG coefficient**: Table 2 flags 0.032
at the 5% level while §4.2 is reported to call the CABG effect not statistically significant
for the full sample. And **no interval or break-point is estimated anywhere** in the working
paper, confirming the record — the models are linear in days.

I checked adversary 1's own labelled arithmetic myself rather than taking it on trust. Its
"roughly 8 to 250 days at an illustrative 0.5 pp margin" reproduces exactly on the CABG
coefficient at ±2 SE: the interval [0.002, 0.062] pp/day gives [8.1, 250.0] days. At ±1.96
SE it would be [8.1, 192]. So the figure is sound and its looseness is the point being made.
If §4.2's reading is the authors' own, the exposure is even less identified than the
arithmetic suggests, which strengthens the adversary rather than weakening it.

**Van Gestel, Müller and Bosmans 2017 (P4) — called "decisive for the swap limb", and it is
not the swap.** Health Economics 26(9):1094-1109, doi 10.1002/hec.3505; read at PDF level in
the HEDG WP 16/27 and Bern DP 17-10 working-paper versions, the journal text not reached.
TAVI, the first 860 Belgian procedures across 23 centres, 2007-2012, with regression samples
of 854 and 780: all as recorded. Days since the last TAVI is genuinely an exposure (minimum
0, mean about 26, median 14), "depreciation of human capital" is the paper's own term, the
0.12 and 0.07 percentage-point-per-day figures for renal failure and stroke are in Table 3
as 0.0012 and 0.0007, and Hockenberry and Helmchen 2014 is cited.

But **the exposures are defined per HOSPITAL and the models carry hospital fixed effects** —
"the 30th patient for a provider (hospital)" — with operator identity apparently not
observed and no operator fixed effects. The candidate's exposure, and P1's, is assigned at
the individual proceduralist. So P4 is a **centre-level** analogue, not the operator-level
registry-and-specialty swap the entry called decisive, and it falsifies the record's "no
replication in another specialty" only at a different level of aggregation. The record had
flagged the unit as unconfirmable from the page opened; it is now confirmed, against the
entry's reading. One further finding: the paper's Table 8 remarks that stroke risk is
strongly increased once about 100 days separate procedures, which it reads as non-linearity
— an observational remark, not a derived interval, but closer to the candidate's limb (b)
than the record allows.

Under the pass's own rule this is a decoration falling, not a ground: P1 survives
first-hand verification of its own numbers and remains limb (a) executed at the candidate's
own level of exposure, so Gate 2 Low and the Disguise grade stand and **no late Gate 4 is
owed.** What changes is the objection's wording, which must now rest on P1 alone for the
operator-level claim and describe P4 for what it is.

**Huesch 2014 (P2) — exists; the detail the record quotes is unverified.** Marco D. Huesch,
"The impact of short breaks from cardiac surgery on mortality and stay length in
California", J Healthc Qual 36(5):42-49, doi 10.1111/jhq.12018, PMID 23773602. At abstract
level: all 56,956 isolated-CABG patients in California 2003-2005; no significant difference
in hospital or 30-day mortality; patients of surgeons with no CABG in the prior calendar
month stayed about 0.5 day longer, and that difference was not robust to statistical
corrections. **The p = .037 and the specific skew-and-clustering wording are NOT FOUND at
abstract level**, and whether surgeon fixed effects were used COULD NOT BE READ. The
deposited reference list does cite Hockenberry — but **Hockenberry 2008 in the Journal of
Human Capital, not Hockenberry and Helmchen 2014** — along with Sfekas 2009, Carey 2008,
Edelman 2010, Sinha 2008 and Blasier 2009.

**de Andres Crespo 2025 (P3) — verified exactly as the record has it.** "Surgery and
technical skill decay", Int J Surg 2025;111(5):3399-3413, doi 10.1097/JS9.0000000000002313,
read at PDF level from the UCL Discovery open-access copy. A narrative review of 41
articles; endpoints are simulated or assessed technical performance, with no included study
whose endpoint is a patient outcome; "no precise timeframe for skill decay has been found"
is in the retention-interval section, as a fragment the summariser would not return whole;
and a term search of the 52-entry reference list finds no Hockenberry, Helmchen or Huesch
entry and no Journal of Health Economics or Journal for Healthcare Quality. The
reason-for-silence mechanism the record built on this paper is intact.

---

## UQ-20261018-04 — Rejected (Gate 2, novelty Low). Verdict stands; one leg carries it where the entry claimed three.

The entry rejects on the premise that a tracking system's per-item cumulative reprocessing
count has never been used as an exposure, which it says is falsified three times. All three
were read. **Only one of the three actually does it.**

**Yoshikawa 2019 (P1) — verified at full text, and narrower than the entry implies.**
Yoshikawa T, Kimura E, Akama E, Nakao H, Yorozuya T, Ishihara K, "Prediction of the service
life of surgical instruments from the surgical instrument management system log using radio
frequency identification", BMC Health Serv Res 19:695, doi 10.1186/s12913-019-4540-0;
Japanese Red Cross Wakayama Medical Center, Sept 2013 to April 2017. The unit is the
individual instrument by RFID ID, the exposure is a per-item usage count from the system's
use and repair-request records, and failure is the issuance of a repair request: all as
recorded, and it is the one genuine instance of the manoeuvre the candidate proposes. All
four figures exist. But: the paper words 1.026 as a **risk** per additional use and the
phrase "odds ratio" does not appear; 0.032 is a "coefficient of determination" whose
pseudo-R² type is unspecified; and **169 and 224 are the usage counts at which the
model-predicted failure probability passes 0.5 and 0.8, for Cooper scissors specifically** —
not observed rates, not service-life limits, and not across instrument types. The logistic
model's sample is described as 136 Cooper scissors for which repairs had been requested,
leaving it unclear how non-failed items enter. **No instrument age or calendar time in
service is modelled anywhere**, so the candidate's age limb has no counterpart in P1 at all.
No patient data, no SSI, no sterilisation-process failure. The Kaplan-Meier curves and
pairwise log-rank tests across five instrument types (n = 35, 28, 20, 58, 28) are as
recorded.

**Homma 2023 — verified, and far weaker than a near-duplicate.** Homma T, Uehara H, Saji H,
"Factors affecting insulation failure in reusable surgical devices", Sci Rep 13:13719, doi
10.1038/s41598-023-41059-8, read at full text. Both p-values are real: cleanings median 281
(IQR 261-323) in failed against 261 (179-320) in intact instruments, P = 0.27; period of use
7 years (6-8) against 7 (4-8), P = 0.90. But **the whole study is 69 instruments with 8
insulation failures (11.6%)**, tested univariately by Wilcoxon rank-sum with **no effect
size, no confidence interval and no multivariable model**; the variable is "period of use"
in years rather than instrument age as such; and **the paper never says the cleaning counts
came from a tracking system** — no barcode, log or system is mentioned. No instrument is
linked to any patient or case.

**Pitschner 2007 — verified, and it confirms the entry's own careful reading.** HF Pitschner,
P Reinesch, H Bahavar, U Jung, H Hassdenteufel, M Kunis, A Koenig, in European
Cardiovascular Disease 2007;3(1):83-88, doi 10.15420/ecr.2007.0.1.83 (the journal is now
European Cardiology Review; the full heading is longer than the quoted title, which came
from the URL slug). Read at full text from the public article page. 202 interventions, 241
reprocessed and 231 new catheters, recurrence denominators of 100 and 102 summing to 202.
The per-item reprocessing count of 1 to 6 **was** recorded and read from the catheter's
barcode. But **it was never used as an exposure**: the analysis is new against reprocessed
as two arms by t-test and Fisher's exact, with no per-cycle estimate, regression or trend
anywhere, and the only cycle-indexed data are the reprocessor's own scrap rates. Endpoints
are procedure and fluoroscopy time, RF deliveries, severe complications and six-month
recurrence. The internal inconsistency the record noticed is confirmed: the reprocessed arm
is printed at 6.9% while its stated counts give 6 of 102, or 5.9%. And the conflict is
worse than the record said — **the page carries no formal conflict-of-interest or funding
statement at all**, while the reprocessor is Remed GmbH of the VANGUARD group, the register
is jointly VANGUARD and Kerckhoff-Klinik Bad Nauheim, and the article is reproduced with
permission from the European Association for Medical Device Reprocessing.

So the entry's three-fold falsification is really one direct instance (Yoshikawa, for the
service-life limb, in one instrument type, with no age limb) plus two weaker neighbours: a
69-instrument univariate study whose count provenance is unstated, and a 2007 registry that
captured the per-item count and then collapsed it. **Gate 2 Low still holds**, because the
candidate's own alternative formulation 1 is substantially Yoshikawa's title and the
service-life question was asked and answered in the candidate's own named data substrate.
But the objection must be rewritten to say which leg carries it.

**Nichol 2024 — the claim attributed to it is not in it.** The paper is real: Nichol PF,
Saari MJ, Navas N, et al., "Observed rates of surgical instrument errors point to
visualization tasks as being a critically vulnerable point in sterile processing and a
significant cause of lost chargeable OR minutes", BMC Surgery 2024;24(1), doi
10.1186/s12893-024-02407-1, read at full text. It is about sterile-processing errors, and
**it nowhere states that intraoperative instrument malfunction is not routinely recorded in
OR documentation.** What it does say, in the introduction and discussion, is that staff
reporting is frequently incomplete, delayed and underreporting, and that the historical
reporting database is not integrated into the medical record. The entry's secondary point
survives in that narrower form, and the real support for it is the figure the entry did not
have: Patient Safety Notices were filed on 368 of about 33,000 cases, 1.11%, against a
directly observed 147 of 562 cases (26.16%) with at least one instrument error, 44 of the
236 errors being broken or poorly functioning instruments. Table 6 (232 errors) disagrees
with Table 2 and the text (236).

**van der Ploeg 2024 — figures confirmed, one characterisation softened.** "Impact of
duodenoscope reprocessing factors on duodenoscope contamination: a retrospective
observational study", J Hosp Infect 2024;154:88-94, doi 10.1016/j.jhin.2024.09.018, read at
abstract level (the Erasmus Pure PDF, the Elsevier route and the journal site all failed).
Both adjusted odds ratios are in the abstract exactly as recorded: manual cleaning of 5
minutes or less 1.61 (1.10-2.34), P = 0.01; increased usage 0.80 (0.64-0.995), P = 0.045.
307 is the number of cultures, 58 of them (18.9%) contaminated; 1,296 is the number of
reprocessing cycles over Feb 2022 to Dec 2023. **"Usage" is not among the abstract's listed
exposures and its definition could not be read**, so the entry's "undefined usage" must
become "definition unread" — absence from an abstract is not absence from a paper. The
grouping variable of the logistic mixed-effects model is not stated either, so clustering by
scope is unconfirmed. The inverse direction is confirmed, resting on a CI whose upper bound
is 0.995.

---

## UQ-20261018-05 — Provisional (cap at Gate 4 attack 7). Verdict stands; one decoration of the cap is false.

**Ryder 2020 (P1) — verified at full text, with the entry's most specific claim about it
falsified.** Ryder M, Gunther RA, Nishikawa RA, Stranz M, Meyer BM, Spangler TA, Parker AE,
Sylvia C, "Investigation of the role of infusate properties related to midline catheter
failure in an ovine model", Am J Health-Syst Pharm 2020;77(16):1336-1346, doi
10.1093/ajhp/zxaa175, read at the publisher.

The design is as recorded, with one addition: 24 sheep enrolled, 4 excluded, **20
analysed**, each with two 10-cm 18-gauge midline catheters in the cephalic veins, giving 40
catheters across 6 test arms (vancomycin 4 and 10 mg/mL, Clinimix 4.25/5 at 675 mOsm/L and
pH 5.65, Clinimix 4.25/10 at 930 mOsm/L and pH 5.54, doxycycline, acyclovir), each paired
with a contralateral saline control, randomised by leg, with a blinded pathologist and
animal as a random effect. Failure is a four-criterion composite; the vessel injury score
is 16 sections graded 0-4 on four axes, and the study was powered on it.

The two headline percentages need their denominators: **95% is 19 of 20 test catheters** and
**60% is 12 of 20 control catheters** — neither is a share of sheep. And the control figure
is partly an artefact of the design: **8 of the 20 controls were removed unfailed when their
paired test catheter failed**, so control failure is tied to the test leg's failure rather
than independently observed. Results and discussion word this differently and give medians
of 7 and 8 days. "Four of the 6 arms (all except the C675 and A350 arms)" is verbatim.

Confirmed as the entry has it: **no threshold or cutoff analysis** of any kind — no
cut-point search, ROC, sensitivity, specificity or regression on osmolarity or pH, with the
arms categorical — and **no variance components, ICC or R²** despite the animal random
effect. The discussion asserts pH is an independent risk factor while no analysis in the
paper tests that.

**The false claim.** The entry says Ryder joins pharmacy physicochemistry to vascular-access
outcomes "with the threshold rule's own source author on the byline". **No author of this
paper is shown to have authored the osmolarity threshold.** The 600 mOsm/L figure is
attributed in the paper to the 2011 INS standard, credited to L. Gorski, who is not a
co-author; the 900 mOsm/L figure to INS 2016 and ASPEN 2014. Marc Stranz co-authored a
different paper with Gorski on noncytotoxic vesicant medications, which the paper does not
describe as a standard. The byline decoration falls; the rest of the Ryder leg — a pharmacy
journal, physicochemistry joined to failure outcomes, on data — stands, and it is what the
attack-7 kill actually needs.

One thing the entry should carry that it does not: **the study was funded by BD**, and four
of the eight authors declare BD consulting fees or research payments. That bears directly on
the incentive mechanism the entry calls asserted-but-unevidenced, and it cuts both ways.

**Yasuda 2025 (P2) — exists; everything the entry claims of it is still unverified.**
Identifiers confirmed from OpenAlex metadata: Emergency Medicine International
2025;2025(1):4457109, doi 10.1155/emmi/4457109, PMID 40364916, CC BY gold open access, with
the full author list and the title's own "Time-Dependent Multilevel Cox Regression Model".
**The full text was not reached** — doi.org, the Wiley article page, the Wiley pdfdirect URL
named as the best open-access location, and a Wiley mirror all failed, and PubMed Central is
blocked here. So 3,410 catheters, 1,351 patients, 23 ICUs, the adjusted HR of 1.06
(0.93-1.20), the change point above about 6 mg, the model's levels, and above all **whether
any variance component is reported** are COULD NOT READ, not NOT FOUND.

One warning the reader surfaced: this group's earlier paper (Front Med 2022) reports **3,429
catheters from 23 ICUs**, close to but not the same as the 3,410 quoted here, so the figures
in the entry may describe the earlier cohort or a re-derivation. Until someone opens the
2025 paper, its numbers are unread rather than wrong.

What survives for the cap is the title and the metadata, which do establish that a
catheter-level, time-dependent, multilevel survival model of PIVC phlebitis exists in this
field — enough for the attack-7 point that the data-architecture mechanism cannot do
explanatory work, but not enough for any number the entry quotes.

**Bahl 2022 (P3) — verified at full text, and the demotion condition is properly
discharged.** "Vesicant infusates are not associated with ultrasound-guided peripheral
intravenous catheter failure: A secondary analysis of existing data", PLoS ONE
17(1):e0262793. 257 adults with difficult vascular access from a single-site RCT
(NCT03655106); exposure is the INS vesicant/irritant list as a yes/no label plus dose count
and three named agents; adjusted HR 1.17 (95% CI 0.76-1.81), p = 0.477, from a
time-dependent extended Cox model, with the unadjusted HR 1.31 (0.87-1.98). On the decisive
question: **pH appears zero times in the text, tables and references, and osmolarity once,
as introduction background on how the INS list was built, with no values.** No random
effects, frailty terms or clustering. Extravasation was not predefined and its 10 events
appear only in the discussion, with no denominator stated. Two internal inconsistencies:
**the abstract prints the adjusted HR as 1.71, outside its own confidence interval**, where
the body and Table 3 say 1.17 — the entry uses the body value, correctly — and the paper is
inconsistent on whether 257 or 270 were randomised. Supplementary files S1-S3 were not
opened, so the pH and osmolarity absence is established for the main text, tables and
references rather than the supplements.

**Lanbeck 2002 — exists; the per-drug odds ratios the entry relies on are unverified.**
Lanbeck P, Odenholt I, Paulsen O, "Antibiotics differ in their tendency to cause infusion
phlebitis: a prospective observational study", Scand J Infect Dis 2002;34(7):512-519, doi
10.1080/00365540110080908, read at abstract level only. 550 patients with 1,386 peripheral
catheters, so the 1,386 is real. But **the abstract carries no per-antibiotic odds ratios**:
only an overall antibiotic-against-no-antibiotic OR of 2.34, and a qualitative sorting of
named drugs into highest risk (dicloxacillin, erythromycin), also raised (benzylpenicillin,
cefuroxime, cloxacillin) and not raised (ampicillin, imipenem/cilastatin, clindamycin,
netilmicin, vancomycin). Two Lund catalogue records even disagree on whether the 18.5% and
8.8% are of catheters or of patients. The entry's conclusion — that Gate 2 query 11's "no
empirically derived drug irritancy ranking from clinical data" is wrong for antibiotics —
survives, because a regression-based ordering of named drugs by observed phlebitis is such a
ranking; but "per-antibiotic phlebitis ORs" overstates what anyone has seen. Note also a
later separate paper (Scand J Infect Dis 2003;35:397-400) comparing dicloxacillin with
cloxacillin, so no such figure should be credited to the 2002 paper.

**Dugan 2014 — verified at abstract level, with its real title.** "Maximum Tolerated
Osmolarity for Peripheral Administration of Parenteral Nutrition in Pediatric Patients",
JPEN 2014;38(7):847-851, doi 10.1177/0148607113495569. A retrospective matched cohort of
352 patients aged 18 or under on peripheral parenteral nutrition; the exposure is the single
dichotomy above against at or below 1,000 mOsm/L; the multivariable OR is 1.67 (95% CI
1.08-2.52, P = .02) for the composite of phlebitis or infiltration, reference at or below
1,000. The unadjusted composite OR is 1.65, nearly identical, which is easy to confuse with
the adjusted one. Whether more than one cut point was tested, and whether any calibration,
discrimination or reclassification is reported, are NOT FOUND at abstract level only — the
methods were not read, so the entry should not treat the single-cut claim as established
beyond the abstract.

**Manrique-Rodríguez 2021 — verified at full text, exactly as recorded.** "Standardization
and Chemical Characterization of Intravenous Therapy in Adult Patients: A Step Further in
Medication Safety", Drugs in R&D 21(1):39-64, doi 10.1007/s40268-020-00329-w, 32 authors.
pH and osmolarity are genuinely **measured** — osmolality by freezing-point depression on a
Fiske 210 micro-osmometer with three measurements per admixture, density by pycnometer,
osmolarity as their product, pH as the mean of three readings on a Crison 2006 meter — and
the paper says no label or literature values existed for these admixtures. 307 is the number
of distinct admixtures, from 106 drugs at 183 concentrations, with 123 of 307 (40.0%)
classed high risk. **No admixture is linked to any clinical outcome**: phlebitis appears
only as literature background and the vascular-access algorithm is proposed, not validated.
The paper adopts risk tiers of under 450, 450-600 and over 600 mOsm/L, attributing the
600 mOsm/L peripheral limit to other authors and noting that the current INS standard uses
900 mOsm/L for central access while an earlier edition used 600 and pH 5-9.
