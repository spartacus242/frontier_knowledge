# VERIFY - Dhawale 2017 names unit-tracking error as a conjecture about OTHER studies, poses no question, and prints no tracking-error number
Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it: the QUALITATIVE confound is "asked in print and open" while the
candidate's QUANTITY is unpublished. The routing note asserts three things about

Dhawale A.K., Poddar R., Wolff S.B.E., Normand V.A., Kopelowitz E., Olveczky B.P. (2017),
'Automated long-term recording and analysis of neural activity in behaving animals',
eLife 6:e27702, DOI 10.7554/eLife.27702:

1. that it says the observed change "could be due to systematic errors in unit tracking";
2. that its own stability rates are PLOTTED rather than printed;
3. that this is what would make the candidate asked-but-still-open at roughly tier B
   if a later run rejected it.

## READ LEVEL

PARTIAL, one source, via WebFetch against https://elifesciences.org/articles/27702
(full-text HTML). All text below is as the summariser served it; the summariser caps
verbatim return at roughly 110-125 characters and refused one bulk-paragraph request
outright, so long sentences below are labelled reconstructions with their fragment count.

Sections actually read:
- Discussion, subsection "Long-term stability of neural dynamics" - the paragraph
  containing the target sentence, read as fragments.
- Discussion, the longitudinal-calcium-imaging paragraph (the "leaving open the question"
  sentence and its opener).
- Results, the passage on discontinuous day-gap tracking and the use of continuously
  sorted units as 'ground truth'.
- Figure 3 legend, panels B and D, read as fragments (and the fact of
  Figure 3-figure supplement 1A/B existing as error-rate comparisons).
- Front matter author list.

NOT read, and therefore COULD NOT CHECK rather than NOT FOUND:
- The legend text of Figure 4-figure supplement 1B-C. The summariser stated on the
  fourth call: "The legend text for those supplement panels is not included in the
  content provided, so I can't confirm whether it contains numbers." This is the single
  most likely place in the paper for a printed day-gap tracking-error number, and it
  remains unread.
- Materials and methods in full (I probed it by query for numeric error rates, which is
  not the same as reading it).
- The plotted data values themselves (bar heights in Figure 3B, 3D, 3-fig-supp-1).
- The PDF. Never opened; the HTML consumed the budget.

## WHAT THE SOURCE SAYS (quotations as served)

### The target sentence, WHOLE

RECONSTRUCTION from 2 served fragments plus the server's explicit statement of the
continuation. Fragment 1 (served verbatim, truncated at the cap):

> "Such contrasting findings could be due to systematic errors in unit tracking across
> discontinuous recording se"

Asked whether the sentence ends at "sessions.", the server answered: "The target
sentence does not end at 'sessions.' It continues with", and then served:

> ", or the choice of statistical framework used to assess stability (Rokni et al., 2007;
> Stevenson et al., 2011)."

Assembled, and LABELLED A RECONSTRUCTION FROM 2 FRAGMENTS:

> "Such contrasting findings could be due to systematic errors in unit tracking across
> discontinuous recording sessions, or the choice of statistical framework used to assess
> stability (Rokni et al., 2007; Stevenson et al., 2011)."

Junction note: the cut falls inside the word "sessions" ("recording se" | "ssions, or the
choice..."). I did not complete that word by inference on my own; the completion is
attested by the server's own sentence naming "sessions." as the candidate ending it was
ruling out. Flagging it anyway: the one character-level join in this note is there.

### Its neighbours

Preceding sentence, RECONSTRUCTION FROM 4 SERVED FRAGMENTS WITH ONE ACKNOWLEDGED GAP.
Served fragments, in order:

> "Attempts at inferring long-term stability of movement-related neural dynamics from such
> experiments have produ"
> "ced conflicting results, with many studies reporting stability (Bondar et al., 2009;
> Chestek et al., 2007; "
> "Fraser and Schwartz, 2012; Ganguly and Carmena, 2009; Greenberg and Wilson, 2004;
> Nuyujukian et al., 2014)"
> " even within a single day (Carmena et al., 2005; Mankin et al., 2012; Perge et al., 2013;
> Rokni et al., 2007)."

The clause between the Nuyujukian citation and "even within a single day" was NOT served
verbatim; the summariser said it "says that other studies contrast with these by reporting
substantial fluctuations" and declined to quote it. So the preceding sentence is a
four-fragment reconstruction with a summarised gap of roughly one clause, and I am not
putting a joined version of it in quotation marks.

Following sentence, RECONSTRUCTION FROM 2 SERVED FRAGMENTS WITH A GAP:

> "Complications may also arise from the use of activity metrics, such as firing rate and
> ISI distributions, to t"
> "hose spike waveforms (Figure 1C-D) and neural dynamics (Figure 8-figure supplement 1)
> do not change with time."

Middle not served. The summariser's gloss: "using firing-rate and ISI measures to follow
units may bias datasets toward units whose waveforms and dynamics happen not to change
over time."

### WHAT THE OPENING WORDS SCOPE

The sentence opens "Such contrasting findings". The referent is fixed by the preceding
sentence: the conflicting results of the prior literature - stability reported by Bondar
2009, Chestek 2007, Fraser and Schwartz 2012, Ganguly and Carmena 2009, Greenberg and
Wilson 2004, Nuyujukian 2014, against fluctuation reported by Carmena 2005, Mankin 2012,
Perge 2013, Rokni 2007. The grammatical subject is OTHER PEOPLE'S DISCREPANT FINDINGS. It
is not this paper's own observed change, and it is not an observed change at all; it is
the disagreement between published studies.

Which of the three it is: the clause is a HEDGED, CITED, DISJUNCTIVE CONJECTURE about the
methodology of other studies. "could be due to X, or the choice of statistical framework
... (Rokni et al., 2007; Stevenson et al., 2011)". It does not pose a question - there is
no interrogative anywhere in it. It does not report a measurement - no quantity is
asserted, bounded, or cited. It concedes a limitation, but of the discontinuous-recording
literature the authors are differentiating themselves FROM, offered as motivation for
their own continuous-recording method. In the ledger's vocabulary the clause RECORDS A
MOVE AWAY from the quantity: it names tracking error as one of two candidate explanations
and then changes method so as not to have to measure it.

### Figure 3 legend, panels B and D (served as fragments)

Panel B:
> "Spike-sorting error rate of FAST on the paired extracellular-intracellular recording
> datasets (n = 5) from"
> "in comparison to the best ellipsoidal error rate (BEER), a measure of the optimal
> performance of standard"
> "spike-sorting algorithms (see Materials and methods, Harris et al., 2000)."
> "The error rate was calculated by dividing the number of misclassified spikes (sum of
> false positives and"
> "false negatives) by the number of ground-truth spikes for each unit."

Panel D:
> "Spike-sorting error rates of FAST (blue bars) applied to the synthetic tetrode datasets
> (n = 48 units"
> "from six tetrodes), in comparison to the BEER measure (red bars) over different
> durations of the simulated recordings."

The legend DEFINES the ratio and prints no value of it. What the legend does print:
n = 5 recordings (B); n = 48 units from six tetrodes (D); a significance threshold p<0.05
(D). Those are sample sizes and a threshold, not error rates.

### The Results sentences on day-gap tracking

> "Since we were able to reliably track units continuously over weeks, we used the sorted
> single-units as 'ground truth'"

> "In our data set, we found discontinuous tracking over day-long gaps to be highly
> error-prone"

Opening words of the second: "In our data set, we found" - scopes the verdict to these
authors' own recordings and to DISCONTINUOUS tracking across day-long gaps. It does not
extend to continuous recording, which is the regime of their own stability analysis. This
clause ASSERTS a qualitative magnitude ("highly") and no number in the text.

### The "leaving open the question" sentence

Opening words, served verbatim:
> "These variables may have contributed to discrepancies in studies using longitudinal
> calcium imaging, with many"

What they scope: longitudinal CALCIUM IMAGING studies, and the variables are indicator
effects - chelation, cell health. The trailing clause "leaving open the question of how
stable the brain really is" therefore sits inside a sentence about imaging confounds, not
about electrode unit-tracking. Anyone who lifts "leaving open the question of how stable
the brain really is" into a routing row about tracking error has dropped the opener that
scopes it to a different instrument.

### Front matter

As printed: Ashesh K Dhawale (corresponding author); Rajesh Poddar; Steffen BE Wolff;
Valentin A Normand; Evi Kopelowitz; Bence P Olveczky (corresponding author, printed with
the umlaut as Oelveczky / "Ölveczky"). Affiliation: Harvard University, United States.

## REGIME

The source's regime, in its own words and as served:

- Instrument: chronically implanted tetrodes and single electrodes with continuous
  recording; spike sorting by the authors' FAST algorithm, benchmarked against BEER, "a
  measure of the optimal performance of standard spike-sorting algorithms (see Materials
  and methods, Harris et al., 2000)".
- Unit of analysis for the printed error quantity: SPIKES per unit. Numerator class, in
  the legend's own words: "the number of misclassified spikes (sum of false positives and
  false negatives)". Denominator: "the number of ground-truth spikes for each unit".
- Populations: n = 5 paired extracellular-intracellular recordings (Fig 3B); n = 48 units
  from six tetrodes, synthetic, across durations up to the multi-day range (Fig 3D);
  single-electrode comparison in Fig 3-figure supplement 1.
- A SECOND, different ground truth appears for tracking: continuously sorted single units
  used as 'ground truth' against which day-by-day DISCONTINUOUS tracking is benchmarked
  (Figure 4-figure supplement 1B-C).

Does the claim sit inside this regime? Only partly, and the part that matters sits outside
it. The candidate quantity at issue is a UNIT-TRACKING error rate - how often the identity
of a unit is wrongly carried across a gap, and how much apparent change that manufactures.
The quantity Figure 3 plots is a SPIKE-CLASSIFICATION error rate. Overlap in both
directions:

- What Figure 3's class MISSES: every cross-session identity error. A false match, split,
  or merge of a unit's identity across a day gap is not a misclassified spike against an
  intracellular or synthetic ground truth; it is an error at a level the Figure 3 ratio
  does not address.
- What Figure 3's class INCLUDES that the candidate excludes: within-session false-positive
  and false-negative spikes from any cause at all - threshold misses, overlapping spikes,
  noise admitted - which say nothing about tracking across time.

So the Figure 3 number, even if read off the bars, is a different quantity from the
candidate's, one word away and in both directions. The quantity that IS in the candidate's
regime is the one in Figure 4-figure supplement 1B-C, and its legend is exactly what I
could not read.

## DEFECTS FOUND

1. THE ENTRY'S QUOTATION IS CUT BEFORE ITS SECOND DISJUNCT. The entry carries "could be
   due to systematic errors in unit tracking". The sentence reads "...across discontinuous
   recording sessions, or the choice of statistical framework used to assess stability
   (Rokni et al., 2007; Stevenson et al., 2011)." The cut converts a hedged two-way
   disjunction with citations into a single named cause. By the ledger's own rule - quote
   the hedged, cited formulation, and check the grammar on both sides of the cut - the
   entry's version is a misquotation even though every word in it is verbatim.

2. THE ENTRY MIS-SCOPES THE SUBJECT. The entry says Dhawale says "the observed change"
   could be due to tracking error. The sentence's subject is "Such contrasting findings" -
   the prior literature's disagreement, enumerated in the preceding sentence. The paper is
   not conceding a confound in its own measurement; it is diagnosing other studies and
   motivating its own method.

3. "ASKED IN PRINT" IS WRONG AS TO MOOD. Nothing I read poses the question in the authors'
   own words. There is no interrogative on this topic. The nearest interrogative served -
   "is the brain stable when behavior is stable?" - is a biological question about
   stability, not about tracking artifact. The nearest "question" wording - "leaving open
   the question of how stable the brain really is" - is scoped by its own opener to
   longitudinal calcium imaging and indicator confounds. A routing row that claims to
   carry a posing sentence from this paper cannot be written, because there is no posing
   sentence. The honest row carries a CONJECTURE ABOUT OTHER STUDIES.

4. "STILL OPEN" IS OVERSTATED IN ONE DIRECTION. The paper does deliver a qualitative
   verdict in its own data: "In our data set, we found discontinuous tracking over day-long
   gaps to be highly error-prone". That is a reported finding about the confound, not an
   open question left hanging. It is unnumbered in the text, which is a different defect
   from being unaddressed.

5. THE ENTRY'S PLOTTED-NOT-PRINTED CLAIM HOLDS WHERE I COULD CHECK, BUT ON THE WRONG
   FIGURE. No numeric error rate is printed in the Results text, the Figure 3 legend, or
   the Figure 3-figure supplement 1 descriptions I was served; rates appear as plotted bars
   in Fig 3B, Fig 3D and Fig 3-figure supplement 1A/B. But those bars are spike-
   misclassification, not unit tracking (see REGIME). The entry treats them as "its own
   stability rates", which conflates two quantities the paper keeps separate.

6. UNENUMERATED UNIVERSAL. The entry's novelty leg - that no source names the candidate
   number - is TRUE OVER WHAT I OPENED and UNENUMERATED beyond it. Instances I opened:
   the eLife HTML's Discussion, the day-gap Results passage, the Figure 3 legend, and
   keyword probes of Methods. Instances I did NOT open: the Figure 4-figure supplement
   1B-C legend, the full Materials and methods, the figure data, and the PDF. I am not
   recording the paper's silence on a day-gap tracking-error number as established.

7. CITATION FRONT MATTER. The entry prints the sixth author as "Olveczky B.P."; the front
   matter prints the umlaut, "Bence P Ölveczky". eLife's own style drops the periods in the
   initials ("Steffen BE Wolff", "Ashesh K Dhawale"), which is a house-style difference and
   not an error in the entry. Year 2017, eLife 6:e27702 and DOI 10.7554/eLife.27702 match
   the article page. I did not independently re-derive the volume or elocation beyond that
   page.

## ROUTES THAT FAILED

- curl to https://elifesciences.org/articles/27702: "curl: (56) CONNECT tunnel failed,
  response 403". Tool-scoped at this proxy, as the brief says; WebFetch reached the same
  URL on every call. I did not probe the proxy further and did not route around it. Read
  /root/.ccr/README.md, which confirms 403 is reported, not retried.
- Consequence: no summariser-free read of the article was available to me, so no quotation
  in this note exceeds the roughly 110-character cap except as a labelled reconstruction.
- WebFetch call 2 (a request for the whole Discussion paragraph as ordered consecutive
  fragments) was REFUSED by the summariser: "I can't reproduce that paragraph verbatim,
  even in fragments." The refusal cost one fetch and returned a summary I have not relied
  on for any quotation.
- The Figure 4-figure supplement legends were not in the content the summariser was given
  on the call where I asked for them. The eLife /figures sub-page was the obvious next
  route and the budget was gone.

## BEARING ON THE LEDGER ENTRY

NARROW the routing note, and strike two of its three legs as written.

- STRIKE the characterisation "asked in print". The confound is NAMED, as one of two
  hedged candidate explanations, in a sentence whose subject is the prior literature's
  contrasting findings and whose second disjunct the entry's quotation drops. No sentence
  in what I read poses the question in the authors' own words, so sub-claim (e) is
  answered NO and the row cannot be built around a posing sentence.
- STRIKE, or at least re-anchor, "the observed change could be due to systematic errors in
  unit tracking" as an attribution to this paper about its own data. If the row keeps the
  sentence it must keep the whole of it, with "Such contrasting findings" as the subject
  and ", or the choice of statistical framework used to assess stability (Rokni et al.,
  2007; Stevenson et al., 2011)" attached.
- HOLD, with a correction, "plotted rather than printed": no numeric error rate is printed
  anywhere I read, and the Figure 3 legend defines the ratio without giving a value. But
  what is plotted is a spike-misclassification rate over ground-truth spikes, not a
  unit-tracking rate, so it was never the candidate's quantity and its being unprinted is
  not the point the entry makes of it.
- The NOVELTY leg (no source names the candidate number) SURVIVES on what I opened and is
  UNENUMERATED beyond it. One unopened document decides it: the legend and panels of
  Figure 4-figure supplement 1B-C, where day-by-day discontinuous tracking is benchmarked
  against continuously sorted units used as 'ground truth'. KIND OF DOCUMENT THAT COULD
  SETTLE IT: a figure legend or methods passage that states a rate with a numerator class
  and a denominator at the level of UNIT IDENTITY ACROSS SESSIONS. Figure 4-figure
  supplement 1B-C is that kind of object - it is the paper's only tracking-level benchmark
  - so this is a justified nomination and not a guess. The eLife /figures sub-page or the
  PDF would open it in one fetch.
- TIER. As written, the row is not routable at tier B, because its tier-B warrant was "the
  question is posed in the paper's own words and left unanswered" and neither half holds:
  it is not posed, and the authors do give a qualitative answer in their own data ("highly
  error-prone"). CONVERT the tier-B routability to a PROMOTION CONDITION: route the row
  only if Figure 4-figure supplement 1B-C is opened and found to print no unit-level
  tracking-error rate, and then route it on the honest warrant - the confound is named as a
  conjecture about other studies and answered only qualitatively in this one - not on a
  posing sentence that does not exist.
