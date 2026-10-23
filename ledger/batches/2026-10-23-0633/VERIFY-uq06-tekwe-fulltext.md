# VERIFY - Tekwe et al., 'Inferential Validity of Digital Health Measures' (arXiv:2608.21782): does it apportion any time-below-range to compression/pressure artifact, and is its headline-adjacent sentence a prediction?

Checker: fresh context. Budget used: 8 WebFetch, 0 WebSearch. Date 2026-10-23.

## CLAIM

That the nearest prior to candidate UQ-20261023-06 reports between-DEVICE discrepancy in a threshold
summary and the resulting classification disagreement, and attributes NO share of time-below-range to
pressure-induced sensor attenuation or compression; and that its one sentence touching the candidate's
headline limb is conditional and scope-limited by its own opener, PREDICTING rather than measuring the
quantity.

Verdict in one line: **both deciding legs HOLD.** The paper does report between-device threshold
discrepancy and classification disagreement; it apportions nothing to compression or pressure, and the
words 'pressure', 'compression', 'artifact', 'artefact', 'attenuation' and 'PISA' do not occur anywhere
in it. One subordinate element of the claim is wrong by a count: there are at least TWO conditional
sentences in that neighbourhood, not one, and the second one names 'sensor placement'. That narrows
the wording of the entry's characterisation without touching the novelty finding.

## READ LEVEL

**PARTIAL**, and I want to be exact about what that means, because the entry is being checked precisely
for over-reading a summariser.

What I have at FULL verbatim level:
- front matter (title, 8 authors in printed order, date, subject class) - abs page and HTML both;
- the abstract, served as six consecutive verbatim segments;
- the complete section/subsection heading tree;
- the four target sentences of sub-claims (c) and (d), each served verbatim in consecutive segments;
- one further verbatim sentence from the CGM subsection (the 'Similar changes in inference' sentence).

What I have at SUMMARISER-PARAPHRASE level only:
- the body of the subsection 'CGM and clinical threshold decisions in diabetes'. The summariser
  explicitly REFUSED to reproduce it word for word ("I can't reproduce the subsection word for word,
  sentence by sentence, because that would effectively copy the article's text") and returned a bulleted
  paraphrase instead. So I have the subsection's content, but not its full text in its own words.

What I have at SUMMARISER-REPORT level only (and this matters for sub-claim (e)):
- the keyword sweeps. I could not run my own grep. The raw-text route failed (see ROUTES THAT FAILED),
  so every 'does not occur' below is a small model's report on a document I could not search myself.
  I ran them REDUNDANTLY to compensate: one broad sweep over all eight terms, then dedicated
  single-term sweeps. Term-by-term sweep counts are recorded in DEFECTS FOUND.

This is **not** a FULL TEXT read, and I am not claiming one. It is a targeted PARTIAL read that covers
every string the entry relies on plus the whole-document term sweeps that decide the entry.

Sections I did NOT open at all: 'Physical activity and adiposity' (beyond one summariser line),
'Interpretation of pulse oximetry across subgroups', 'Common sources of inferential failure across the
digital measure pipeline', 'Applying the framework', 'Conclusion', and the REFERENCE LIST. The record
being checked says it read a CGM subsection and the reference list; I read the former (paraphrase +
verbatim targets) and not the latter. The dedicated 'pressure' sweep asserts it checked the reference
list; that is the summariser's assertion, not my own read of those pages.

Front matter as printed (sub-claim b):
- Title: *Inferential Validity of Digital Health Measures*
- Authors, printed order, from the front matter of both the abs page and the HTML rendering:
  Carmen D. Tekwe; Mercy Oladuti; Yuanyuan Luan; Andi Mai; Orfeu M. Buxton; See Ling Loy;
  Jeffrey S. Gonzalez; Roger S. Zoh. Eight authors.
- Venue: arXiv preprint, arXiv:2608.21782v1, subject class stat.OT. Submitted 2026-08-22.
- Journal ref: **none listed.** DOI: **none listed.** Volume, issue, pages: **none - not a journal
  article.** v1 is the version I read; I did not test for a v2.

## WHAT THE SOURCE SAYS (quotations as served)

### (c) The three strings, each checked alone

**String 1, as the entry carries it:** 'The largest differences in percentage of time below range
exceeded 80 percentage points'

Served sentence, verbatim and complete:

> "The largest differences in percentage of time below range exceeded 80 percentage points."

- VERBATIM: yes, and the entry's string is the whole sentence minus the final period. Grammar is clean
  on both sides because there is no cut.
- OPENING WORDS AND WHAT THEY SCOPE: "The largest differences" scopes the number to the **maximum**
  over the participant pairs, not to a typical, mean or median difference. A reader who carries '80
  percentage points' without 'largest' has silently converted an extremum into a central tendency.
- DIRECTION OF THE INEQUALITY: "exceeded" makes 80 pp a **floor on the maximum**, not a ceiling and not
  a point estimate. No uncertainty is printed with it - no CI, no SD, no range.
- LOGICAL FORM: a bare existential over the sample (there exists at least one pair whose difference
  exceeds 80 pp). Not a condition, so necessary/sufficient does not apply.
- ASSERTS / DENIES / RECORDS A MOVE AWAY: **ASSERTS** the quantity - but the quantity it asserts is a
  between-device disagreement magnitude, not a share of anything. See DEFECTS FOUND for the
  numerator/denominator work.

**String 2, as the entry carries it:** '17 of 45 participants exceeded 4% time below range with Libre
measurements'

Served sentence, verbatim, in the two consecutive segments the summariser returned:

> "In the CGMacros data, 17 of 45 participants exceeded 4% time below range with Libre measurements,"
> " but none of the 45 participants did so with Dexcom measurements."

- VERBATIM: yes. **But the entry's string drops the scope-setting opener "In the CGMacros data,".**
  That opener is doing real work: it binds the 17/45 to a public secondary dataset rather than to any
  trial, cohort or clinical series of the authors' own. Strings 2 and 3 are the two halves of ONE
  sentence, not two sentences; the entry presents them as two strings.
- OPENING WORDS AND WHAT THEY SCOPE: "In the CGMacros data," - dataset-scoped, descriptive.
- ASSERTS / DENIES / RECORDS A MOVE AWAY: **ASSERTS**, for Libre.

**String 3, as the entry carries it:** 'none of the 45 participants did so with Dexcom measurements'

Served clause, verbatim (second half of the sentence above):

> " but none of the 45 participants did so with Dexcom measurements."

- VERBATIM: yes. The entry's string drops the coordinating "but". The grammar on both sides of that cut
  is clean and the meaning does not move, because the clause is a full predication either way. This is
  the one cut in the three that I would accept without comment.
- OPENING WORDS AND WHAT THEY SCOPE: the governing opener is still "In the CGMacros data," one clause
  back, and the elliptical "did so" inherits its predicate ("exceeded 4% time below range") from the
  first half. Quoted alone, "did so" has no antecedent - a reader who meets string 3 without string 2
  cannot recover what the 45 participants did not do.
- ASSERTS / DENIES / RECORDS A MOVE AWAY: **DENIES** the quantity, for Dexcom. It is a universal
  negative ('none'), and under the ledger's enumeration rule it is the good kind: **enumerated** over a
  named, counted frame (45 of 45 participants in one public dataset), stated by the authors who ran the
  comparison. It is not a search's silence.

### (d) The reconstruction at the junction after 'classifications'

Served whole, in the two consecutive segments the summariser returned:

> "Thus, systematic sensor disagreement near a clinically meaningful threshold could alter
> classifications,"
> " estimates of treatment benefit, eligibility for intervention, or interpretation of hypoglycemia
> burden."

**The entry's reconstruction is FAITHFUL at the junction.** The comma after "classifications" is where
the two fragments meet, the second fragment begins with " estimates" exactly as the entry carries it,
and the assembled sentence is identical to the entry's text. I assembled it from two consecutive
returns and completed nothing by inference. Label: a **two-fragment reconstruction**, independently
obtained, matching the entry's two-fragment reconstruction.

Logical form of this sentence, since this is where a fallen kill would hide:
- OPENER: "Thus," - it marks the sentence as an **inference the authors draw from the preceding
  descriptive numbers**, not as a new measurement. Nothing after "Thus," is measured in this paper.
- MODALITY: "**could** alter". Possibility, not actuality, not quantity. The paper does not say
  disagreement DOES alter any of the four things, and prints no estimate of how much.
- FURTHER SCOPE: "near a clinically meaningful threshold" and "systematic sensor disagreement" both
  restrict the antecedent condition.
- STRUCTURE: the four objects of "alter" are a **DISJUNCTION** - "classifications, estimates of
  treatment benefit, eligibility for intervention, **or** interpretation of hypoglycemia burden."
  Citing this sentence for any ONE member (e.g. for 'estimates of treatment benefit') is citing a
  disjunct as if it were the whole. Only 'classifications' is backed by the printed 17/45 vs 0/45; the
  other three disjuncts have no number behind them anywhere I read.
- CONDITION TYPE: it states a possible consequence, so it is neither a necessary nor a sufficient
  condition for anything; nothing in the entry should be read off it as an implication.
- ASSERTS / DENIES / RECORDS A MOVE AWAY: it **PREDICTS** - it announces a quantity (the magnitude of
  the alteration) without measuring it. Under the published-is-not-performed rule this sentence
  **BOUNDS/PREDICTS**, it does not evaluate.

So the entry's characterisation of this sentence - conditional, scope-limited by its own opener,
predicting rather than measuring - is **CORRECT on every element**.

### (e) The deciding sweeps, term by term

| term | sweeps run | result |
|---|---|---|
| pressure | 2 (broad; dedicated, prompted to include compounds like 'blood pressure', captions, affiliations, reference list) | DOES NOT OCCUR in either sweep |
| compression | 2 (broad; dedicated) | DOES NOT OCCUR in either |
| compression low | 1 (broad) + entailed by 'compression' absence over 2 sweeps | DOES NOT OCCUR |
| PISA | 1 (broad only) | DOES NOT OCCUR - single sweep, flagged below |
| artifact | 2 (broad; dedicated) | DOES NOT OCCUR in either |
| artefact | 2 (broad; dedicated) | DOES NOT OCCUR in either |
| attenuation | 2 (broad; dedicated, stem 'attenuat' to catch attenuated/attenuating) | DOES NOT OCCUR in either |

The dedicated 'pressure' sweep is the one I weighted most, because the paper has a subsection on pulse
oximetry where 'blood pressure' would be an easy incidental occurrence. It returned a flat NO with the
reference list named as checked.

So: **nothing in this paper names compression, pressure, artifact or attenuation at all.** The paper's
vocabulary for the phenomenon is 'systematic sensor disagreement' and 'differences between
simultaneously worn sensors'. It never reaches for a physical mechanism by name.

The nearest thing to a mechanism in the paper, served verbatim in three consecutive segments:

> "Similar changes in inference could arise from differences in device generations, calibration
> procedures,"
> " time since sensor insertion, sensor placement, firmware or software updates, preprocessing
> procedures,"
> " or other components of the measurement system."

- MODALITY: "**could** arise" - possibility again, not measurement.
- STRUCTURE: a seven-member **DISJUNCTION** closed by an open-ended "or other components of the
  measurement system". Nothing is quantified, ranked, or apportioned. Citing it for any one member
  ('sensor placement') is citing one disjunct of seven.
- 'sensor placement' and 'time since sensor insertion' are the closest neighbours of a physical artifact
  mechanism anywhere in the paper. **Neither is compression and neither is pressure.** Placement is a
  siting variable; compression/PISA is a transient loading event. One word away is a different quantity.

### (f) Apportionment to a device artifact: none

**There is no such number.** Every number I located in the CGM example and where it is printed:

| number | units | denominator | where printed | what it is |
|---|---|---|---|---|
| 70 | mg/dL | - | CGM subsection text | the low-glucose threshold |
| 4 | % of monitored time below 70 mg/dL | monitored time per participant per device | CGM subsection text | the clinical cutoff for important hypoglycemia burden |
| 17 of 45 | participants | 45 participants in CGMacros | CGM subsection text, Fig 2B | count exceeding the 4% cutoff **by Libre** |
| 0 of 45 ('none') | participants | the same 45 | same sentence | count exceeding it **by Dexcom** |
| > 80 | percentage points | - (it is a difference of two percentages) | CGM subsection text | the **largest** between-device difference in % time below range |
| 1 | participant-day | - | Fig 2A | the illustrative day where Libre sat below 70 and Dexcom above it |

Not one of these is attributed to a mechanism. The paper apportions **no share of time below range, and
no share of any metric, to a device artifact of any kind.** Under the ledger's instancing rule: this is
TRUE OVER THE INSTANCES I OPENED - the abstract, the heading tree, the CGM subsection (paraphrase plus
the verbatim target sentences) and seven whole-document term sweeps - and I did not open the four other
body sections or the reference list, so I am not stating it as a universal over the whole document from
my own eyes. I am stating it as: no apportionment exists in the CGM example, which is the only place in
the paper that discusses time below range at all, and no apportionment vocabulary (pressure,
compression, artifact, attenuation) occurs anywhere in the document per two sweeps each.

## REGIME

In the paper's own terms, for the CGM example that is the only part bearing on the candidate:

- **Population:** the 45 participants of the **CGMacros** public paired-device dataset (cited as refs
  27-28). The paper describes its illustrative analyses as based on publicly available data. **Diabetes
  status and age of the 45 are NOT stated in the CGM example.** The subsection's framing text says CGM
  is standard care in type 1 diabetes and increasingly used in type 2 diabetes on insulin or other
  hypoglycemia-causing therapy, and that hypoglycemia is of particular concern in older or frail
  adults - but that is framing, not a description of these 45 people.
- **Unit of analysis:** mixed, and the entry should not pick one. Fig 2A is **one participant-day**
  (illustration). The 17/45 vs 0/45 comparison and Fig 2B are at the **participant** level. The
  threshold summaries themselves classify **each time point** above or below 70 mg/dL.
- **Wear period:** **NOT STATED.** The paper does not say 24-hour free-living, daytime or nocturnal.
  The only temporal wording I was served is that Libre values "stayed below 70 mg/dL for almost the
  entire day" on the illustrative participant-day. Anything in the entry that asserts a 24-hour
  free-living wear period, or a nocturnal one, is asserting more than this source prints.
- **Comparator:** **another sensor model worn simultaneously** - Abbott FreeStyle Libre Pro vs Dexcom
  G6 Pro, described as simultaneously worn. **It is NOT an artifact adjudication.** There is no
  reference method, no YSI, no adjudicated event list, no label for which device is wrong. The design
  can show that two devices disagree; it structurally cannot attribute the disagreement to a cause.
- **Threshold:** 70 mg/dL, with the >4%-of-monitored-time cutoff for classification.
- **Estimand:** descriptive. Device-specific threshold summaries (% time below range), the magnitude of
  their between-device difference, and the resulting agreement/disagreement of a binary clinical
  classification. No causal estimand, no mechanism-attributed quantity, no treatment effect.

**Does the claim sit inside this regime?** Yes, in both directions, which is why it holds:
- the claim's positive half (reports between-device discrepancy in a threshold summary and the
  resulting classification disagreement) is exactly what this regime produces;
- the claim's negative half (no share apportioned to pressure/compression) is what this regime
  *cannot* produce even in principle, there being no adjudication arm. The absence is structural, not
  an oversight I might have missed in an unread section.

### (h) Trial estimate or between-arm contrast

**None.** No randomized trial estimate, no treatment effect, no between-arm contrast computed by these
authors anywhere in the paper. The CGM work is illustrative re-analysis of an existing public dataset.
The one performance number elsewhere in the paper is in the physical-activity example - roughly an
80-90% reduction in mean integrated squared error - and it is a **simulation result the paper cites to
ref 26**, not a trial and not computed here. (That line comes from the summariser, not from a verbatim
read; I flag it because '80' appearing twice in this paper, once as percentage points of TBR difference
and once as a percentage MISE reduction in a different example, is a collision worth knowing about if
anyone quotes '80' from this paper loosely.)

## DEFECTS FOUND

Defects in the ENTRY's use of this source - all minor, none reaching the novelty finding:

1. **'its one sentence touching the candidate's headline limb' undercounts by at least one.** There are
   two conditional sentences in that neighbourhood: the "Thus, systematic sensor disagreement..."
   sentence and the "Similar changes in inference could arise from differences in device generations...
   sensor placement..." sentence. Both are 'could', both are disjunctions, and the second is the one
   that comes nearest a physical mechanism. The entry should say 'the sentences' or name both. This
   narrows the wording and, if anything, strengthens the no-apportionment leg: the second sentence is
   the paper's closest approach to a mechanism and it quantifies nothing either.
2. **String 2 is quoted without its scope-setting opener "In the CGMacros data,".** Restore it. It is
   the words that tie 17/45 to a public secondary dataset rather than to a trial.
3. **Strings 2 and 3 are one sentence, not two.** The entry presents them as two of three independent
   strings, which inflates the apparent corroboration from one sentence to two. (Same defect in kind as
   counting one document twice.)
4. **Citation front matter is incomplete.** The entry's citation gives no year and no venue. Correct
   form: Tekwe C.D., Oladuti M., Luan Y., Mai A., Buxton O.M., Loy S.L., Gonzalez J.S., Zoh R.S. (2026),
   'Inferential Validity of Digital Health Measures', arXiv preprint arXiv:2608.21782v1, stat.OT,
   submitted 22 Aug 2026. No DOI, no journal ref, no volume/issue/pages. Author names and printed order
   in the entry **match the front matter exactly** - nothing to correct there.
5. **'80 percentage points' must always travel with 'The largest differences'.** It is a floor on an
   extremum with no stated uncertainty, not a typical difference.

The numerator/denominator work on the one number that could be mistaken for the candidate's, as the
ledger's newest rule requires:

- The source's **>80 percentage points** has numerator class = *the arithmetic difference, for one
  participant, between the percentage of monitored time below 70 mg/dL computed from Libre and the same
  percentage computed from Dexcom*, taken at its maximum over the 45; denominator = *that participant's
  monitored time, per device*. Near neighbours it is **not**: not a percentage of time below range; not
  a mean difference; not a difference in mean glucose (the paper notes mean glucose differed only
  modestly); not a between-arm contrast.
- A candidate quantity of the form *share of time below range caused by compression/pressure artifact*
  overlaps it in **neither** direction cleanly:
  - what the source's class **MISSES**: any compression-induced low that BOTH sensors register
    concordantly cancels in a difference and is invisible here; so a between-device discrepancy
    systematically undercounts a true artifact share.
  - what the source's class **INCLUDES that the candidate excludes**: every non-compression source of
    disagreement at once - device generation, calibration, sensor lag, insertion recency, placement,
    firmware, preprocessing, and ordinary measurement noise - bundled and unseparated. The paper says
    so itself in the seven-member disjunction above.
  So the >80 pp figure is **a different quantity** from the candidate's headline, in both directions,
  and cannot be read as a measurement of it. This is the structural reason the novelty leg survives.

My own reasoning, labelled as such: the inference in the last bullet - that a paired-device difference
cannot identify a mechanism share without an adjudication arm - is **MY OWN REASONING ABOUT THE
DESIGN, not a finding printed in this paper.** The paper does not say this about itself. What would
ground it independently is a methods paper on identifiability of artifact share from paired CGM without
reference adjudication; I did not search for one, and my budget was spent before I could.

Defects in MY OWN check, declared:

6. I could not grep the document myself. All seven term results are summariser reports. I ran each
   deciding term twice to reduce that risk; **'PISA' got only ONE sweep** (the broad one). Its absence
   is near-certain given that 'compression' and 'pressure' are absent over two sweeps each, but under
   the one-sweep rule I record PISA as single-sweep rather than confirmed-by-two.
7. The summariser REFUSED verbatim reproduction of the CGM subsection, so I hold that subsection as
   paraphrase plus five verbatim sentences. A sentence in it that mentions a mechanism in words none of
   my seven terms would catch - say 'sensor occlusion' or 'local perfusion' - would not have been
   caught by the sweeps and might not have surfaced in the paraphrase. I consider this a small residual
   risk, not a live doubt, because the paraphrase's own 'other contributing factors' bullet reproduces
   exactly the seven-member disjunction I then got verbatim, with nothing extra.
8. I did not open the reference list, the pulse-oximetry subsection, the physical-activity subsection in
   full, the 'Common sources of inferential failure' section, 'Applying the framework', or the
   conclusion. Named here so nobody records their silence as a finding.

## ROUTES THAT FAILED

- `curl -sS -L https://arxiv.org/html/2608.21782v1` -> **`curl: (56) CONNECT tunnel failed, response
  403`**, HTTP 000, zero bytes. This is the documented tool-scoped curl 403 at this proxy, not a host
  block: WebFetch reached the same URL on the first try. Consequence: no raw text, so no grep of my own,
  so sub-claim (e) rests on summariser sweeps. I did not probe the proxy further and did not touch TLS
  settings.
- WebFetch on `https://arxiv.org/html/2608.21782v1` asking for the CGM subsection reproduced word for
  word -> **refused by the summariser**, verbatim: "I can't reproduce the subsection word for word,
  sentence by sentence, because that would effectively copy the article's text." Returned a paraphrase.
  This consumed one of eight fetches. Narrower requests for specific sentences were then served without
  objection.
- Routes NOT tried, with the reason: `arxiv.org/pdf/2608.21782` and
  `ar5iv.labs.arxiv.org/html/2608.21782` were never needed, since `arxiv.org/abs` and
  `arxiv.org/html/...v1` both opened on the first call. I did not test whether a **v2** exists; my
  budget ran out first. That is a spent budget, not a property of the source.

**Budget: 8 of 8 WebFetch used, 0 of 3 WebSearch used.** No search was needed - the citation's own first
two routes both opened. No search was refused by the classifier. Sub-claims (a) through (h) were all
reached; **none is COULD NOT CHECK**, with the two qualifications recorded as defects 6 and 7 above.

## BEARING ON THE LEDGER ENTRY

**HOLD the entry's reading of this prior, with one narrowing and one restored opener. The candidate's
Medium novelty survives this check.**

Leg by leg:

- *'reports between-DEVICE discrepancy in a threshold summary and the resulting classification
  disagreement'* - **CONFIRMED.** 'The largest differences in percentage of time below range exceeded 80
  percentage points' is the discrepancy; 'In the CGMacros data, 17 of 45 participants exceeded 4% time
  below range with Libre measurements, but none of the 45 participants did so with Dexcom measurements'
  is the classification disagreement. Both verbatim, both complete sentences, both inside a declared
  regime of two simultaneously worn sensor models on 45 participants of a public dataset at a 70 mg/dL
  threshold with a >4% cutoff.

- *'attributes NO share of time-below-range to pressure-induced sensor attenuation or compression'* -
  **CONFIRMED, and more strongly than the entry claims.** It is not merely that no share is apportioned:
  the words 'pressure', 'compression', 'artifact', 'artefact' and 'attenuation' do not occur in the
  document at all (two dedicated sweeps each), and 'PISA' does not occur (one sweep). No number anywhere
  in the CGM example is attributed to any mechanism. The paper's own mechanism sentence is a
  seven-member 'could arise from' disjunction whose nearest members are 'sensor placement' and 'time
  since sensor insertion' - adjacent to, and not the same as, a transient compression event.
  Classification under the instancing rule: **TRUE OVER THE INSTANCES I OPENED**, with the four body
  sections and the reference list named as unopened in READ LEVEL.

- *'its one sentence ... is conditional and scope-limited by its own opener, PREDICTING rather than
  measuring'* - **CONFIRMED for the designated sentence; NARROW the count.** The sentence 'Thus,
  systematic sensor disagreement near a clinically meaningful threshold could alter classifications,
  estimates of treatment benefit, eligibility for intervention, or interpretation of hypoglycemia
  burden' is opened by 'Thus,' (marking it an inference from the preceding descriptives), carries the
  modality 'could' (possibility), is further scoped by 'near a clinically meaningful threshold', and is
  a four-member disjunction of which only the first member has a printed number behind it. It
  **PREDICTS**; it measures nothing. The entry's 'one sentence' should become 'the two conditional
  sentences', the second being 'Similar changes in inference could arise from differences in device
  generations, calibration procedures, time since sensor insertion, sensor placement, firmware or
  software updates, preprocessing procedures, or other components of the measurement system.'

- The entry's own stated worry - *'if the paper in fact apportions any share of time-below-range to
  compression or pressure artifact, or prints a trial estimate rather than a prediction, novelty falls'*
  - **does not materialise on either branch.** No apportionment (sub-claim f: there is none, and I have
  named every number in the subsection to show what is there instead). No trial estimate and no
  between-arm contrast anywhere in the paper (sub-claim h); all analyses are illustrative re-analyses of
  existing public datasets, and the only other quantitative claim in the paper is a simulation MISE
  reduction cited to ref 26 in a different example.

Edits the entry should take, none of them changing the verdict:

1. Replace 'its one sentence touching the candidate's headline limb' with 'the two conditional sentences
   touching it', quoting both.
2. Restore 'In the CGMacros data,' to the front of the 17/45 string, and record that the 17/45 and the
   'none of the 45' clauses are **one sentence**, so the entry rests on **two** printed strings here,
   not three.
3. Always carry 'The largest differences' with the 80-percentage-point figure; it is a floor on an
   extremum with no printed uncertainty.
4. Complete the citation: (2026), arXiv:2608.21782v1, stat.OT, submitted 22 Aug 2026, no DOI, no venue.
   Author list and order are already correct against the front matter.
5. Delete any assertion of this paper's wear period. The paper does not state 24-hour free-living or
   nocturnal; the only temporal phrase is that Libre 'stayed below 70 mg/dL for almost the entire day'
   on one illustrative participant-day.
6. Downgrade the record's own read-level note the same way I downgrade mine: this paper has still not
   been read in full by anyone on this ledger. My read is PARTIAL - verbatim on every string that
   matters plus redundant whole-document term sweeps, paraphrase-only on the CGM subsection body,
   unopened on four body sections and the reference list - and the sweeps are summariser reports because
   curl is 403 at this proxy and no raw-text route was available.
