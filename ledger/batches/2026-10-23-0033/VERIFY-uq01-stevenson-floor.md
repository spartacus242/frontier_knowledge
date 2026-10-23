# VERIFY - Stevenson 2011 floor logic: numbers, within-session regime, and the absence of cross-session identity
Checker: fresh context. Budget used: 3 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261023-01 carries Prior 3 as supplying "the same FLOOR LOGIC on a different numerator and in a different
regime," with these specifics:

- unit = a sorted unit's preferred direction WITHIN one 30-40 min session
- endpoint = PD change
- comparator = stable cosine-tuned Poisson neurons
- printed numbers: SD of PD change 39.0 +/- 2.2 deg uncorrected falling to 0.4 +/- 1.1 deg corrected
- that pair described as "compatible with absolutely stable PDs"
- spike sorting "performed offline by manual cluster cutting"
- unit identity ACROSS sessions is neither modelled nor discussed

Verdict in one line: the claim HOLDS on every specific, with one correction of record (the numbers need their
block size, which is their denominator) and two nuances that a reader of the entry should have (the
"absolutely stable" clause governs a PAIR of corrected values, not the 0.4 alone; and the paper's own target
literature IS cross-day even though its correction is not).

## READ LEVEL

FULL TEXT of the main article, via the author's own lab copy, read in two WebFetch passes with targeted
verbatim-segment requests. The copy is:

  https://stevenson.lab.uconn.edu/wp-content/uploads/sites/300/2017/03/Stevenson11_JNP_stability.pdf

Front matter confirms the entry's citation. Printed: "J Neurophysiol 106: 764-774, 2011. First published
May 25, 2011; doi:10.1152/jn.00626.2010." Running head "VOL 106 . AUGUST 2011". The front matter does NOT
print the issue number; "106(2)" as the entry carries it is consistent with the journal's August 2011
pagination but is not a front-matter string.

Author list exactly as the front matter prints it (taken from the front matter, not from any short form):
"Ian H. Stevenson, Anil Cherian, Brian M. London, Nicholas A. Sachs, Eric Lindberg, Jacob Reimer,
Marc W. Slutzky, Nicholas G. Hatsopoulos, Lee E. Miller, and Konrad P. Kording." Affiliations: Departments
of Physical Medicine and Rehabilitation, Physiology, and Neurology, Feinberg School of Medicine, and
Department of Biomedical Engineering, Northwestern University, Chicago, Illinois; and Department of
Organismal Biology and Anatomy, University of Chicago, Chicago, Illinois.

NOT READ: the Supplemental Material and the "Supplemental Note". The main text cites two supplemental items
("An analysis of these alternative tuning models is presented (see Supplemental Material)" and "Hotelling's
T2-test, see Supplemental Note"). I did not open either. This matters for sub-claim (e) only in the weak
sense noted there - COULD NOT READ, kept strictly distinct from NOT FOUND.

One mechanical caveat on quotation fidelity: the PDF text layer garbles the plus-minus glyph into a stray
character, so in the two value strings below the "+/-" is reconstructed from the surrounding digits and the
paper's uniform "value +/- error deg" convention. Digits, decimal points, units and word order are verbatim;
the plus-minus GLYPH itself is inferred. Flagging this rather than passing it off as a clean read.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Read level and routes - answered above.

### (b) The two SD figures, exact printed form, units, correction applied

Both figures are real, both are printed, and - this is the correction of record - BOTH ARE FOR BLOCKS OF 40
TRIALS. The entry quotes the pair without its block size, and the block size is the denominator.

Uncorrected, Results, subsection "Assessing tuning curve stability, taking uncertainty into account", p. 769:

  "The SD of PD changes was 39.0 +/- 2.2 deg for blocks of 40 trials and 22.9 +/- 3.2 deg for blocks of
  120 trials."

Corrected, same subsection, p. 769, in the paragraph after Fig. 6:

  "the corrected SD for blocks of 40 trials was 0.4 +/- 1.1 deg and for blocks of 120 trials, was
  1.8 +/- 2.5 deg"

Units: degrees. The 39.0 figure carries no inline "uncorrected" label at its own sentence; the paper supplies
the label later, in the adaptive-filtering Results (p. 772), where the word "uncorrected" appears exactly
once in the article and attaches to this analysis: "as well as the uncorrected block-by-block analysis
(Fig. 6), suggest fluctuations on the order of 2.1 deg-2.2 deg/trial on average." So "uncorrected" is the
paper's own word for the 39.0/22.9 analysis, not the entry's gloss. Confirmed.

The correction applied: variance subtraction. METHODS section "Corrected estimate of the variance of changes
in PD": "In the presence of measurement noise, the differences that we observe in PD between blocks will be
partially due to a true (hidden) drift and partially due to the measurement noise." The corrected quantity
"captures the excess variance (above the measurement noise) that may be attributed to an actual change in
PD." The noise variance is estimated by resampling: "We estimated var(epsilon) empirically by using the
variance of the bootstrap samples (mean across the population of neurons)."

So: the entry's "39.0 falling to 0.4" is a like-for-like pair at a shared 40-trial denominator, not two
figures lifted from different analyses. The entry is right. It is simply the more dramatic of the two
available pairs - the 120-trial pair is 22.9 +/- 3.2 deg falling to 1.8 +/- 2.5 deg. An entry that cites the
40-trial pair without saying "40-trial blocks" invites the reading that 39.0 is THE uncorrected SD, which it
is not; it is the uncorrected SD at the shortest block length, where measurement noise is largest.

### (c) "compatible with absolutely stable PDs" - whole, in its sentence, with neighbours

The sentence, Results p. 769:

  "With the use of this method, we found that the corrected SD for blocks of 40 trials was 0.4 +/- 1.1 deg
  and for blocks of 120 trials, was 1.8 +/- 2.5 deg, compatible with absolutely stable PDs."

Sentence immediately BEFORE:

  "For the population, we can attempt to estimate the true variability in PD changes using a corrected
  measure of SD that attributes the observed fluctuations to a combination of real changes in PD and
  measurement noise (see METHODS)."

Sentence immediately AFTER:

  "Our findings are thus consistent with the results from several past studies that incorporated enough data
  to reduce measurement errors (Chestek et al. 2007; Ganguly and Carmena 2009) and provide statistical
  insights into previous findings of apparent instabilities."

WHAT THE OPENING WORDS SCOPE. The sentence opens "With the use of this method, we found that..." - "this
method" is the corrected-SD variance subtraction defined in the immediately preceding sentence and in
METHODS. The opener therefore scopes the whole claim to one estimator, and the clause ASSERTS the quantity
(it does not deny it and does not record a move away from it). But it asserts it in a HEDGED form that the
entry should carry: the paper says the measured values are "compatible with" absolutely stable PDs - a
statement about what the data fail to exclude - not that PDs ARE absolutely stable. The hedge is the load-
bearing word.

Second nuance, and this is a grammar-on-both-sides-of-the-cut point. The trailing modifier "compatible with
absolutely stable PDs" sits after BOTH corrected values and governs both of them. The entry attaches the
phrase to the 0.4 +/- 1.1 deg figure; grammatically it covers the 0.4 +/- 1.1 deg AND the 1.8 +/- 2.5 deg.
Cutting the quotation so it rides on 0.4 alone is not a misquotation of the words, but it narrows what the
clause was predicated of.

Per the discipline on repeated claims, the HEDGED, CITED formulation is in the Discussion (p. 772), where the
paper restates the result against its own estimator's uncertainty rather than asserting the floor: the true
variability is "likely closer to 1.8 +/- 2.5 deg over 120 trials", and the neighbouring Results sentence
above is the one that carries the citations (Chestek et al. 2007; Ganguly and Carmena 2009). The Discussion
formulation leads with the 120-trial figure, not the 40-trial one.

### (d) Within a single session, and the duration - yes, stated twice

METHODS, p. 765:

  "Spike trains from each subject were recorded during center-out reaching for 30-40 min, resulting in at
  least 300 successful trials for datasets F, R, and K and 290 trials for dataset C."

RESULTS, p. 768:

  "each consisting of at least 290 successful trials with sessions lasting 30-40 min."

Confirmed exactly as the entry states it: 30-40 min, one session per dataset, and every stability comparison
is between BLOCKS WITHIN that session (40-trial and 120-trial blocks). The entry's "WITHIN one 30-40 min
session" is the paper's own regime in the paper's own numbers.

### (e) Cross-session / cross-day unit identity - not modelled, not corrected, and only mentioned ABOUT OTHER PEOPLE'S WORK

No discussion, model or correction of whether a unit is the same neuron across sessions or days. How I
checked: across two full-text passes I had the terms "session", "sessions", "day", "days", "across
sessions", "longitudinal", "same neuron(s)", "same unit(s)", "chronic", "tracking" and "recorded over"
searched against the text. The two returns are both ABOUT OTHER STUDIES, not about this paper's analysis:

Introduction, p. 764, describing the prior literature this paper is correcting:

  "By recording many trials from the same neurons over the course of several days, a number of studies have"

Discussion, p. 773, listing future directions:

  "experimental techniques that allow for longer-term recordings (Dickey et al. 2009; Tolias et al. 2007)"

Neither sentence models, corrects for, or even raises identity error as a source of apparent PD change. The
first is a description of someone else's design; the second records a MOVE AWAY from the paper's own regime
(what would be needed next), not an assertion within it.

Scope of this finding, stated honestly: TRUE OVER THE MAIN TEXT, WHICH I READ IN FULL. NOT ENUMERATED over
the Supplemental Material and Supplemental Note, which I did not open. The main text's two citations of the
supplement are to alternative tuning models and to a Hotelling's T2 significance test - neither is the kind
of item that would house a cross-session matching model - but that is an inference from its cited purpose,
not a read. I am not nominating the supplement as the document that would settle this: the kind of document
that could overturn (e) is one that defines a unit-matching or unit-identity procedure across recording
days, and a note on T2 significance testing of cosine tuning is not that kind. Calling that a lead would be
dressing up a guess.

### (f) The manual-cluster-cutting quotation - confirmed verbatim

METHODS, p. 765:

  "Spike sorting was performed offline by manual cluster cutting."

Confirmed word for word as the entry carries it. The preceding sentence in the same paragraph bears on what
"unit" means here: "Neural signals were classified as single units based on action-potential shape and
minimum interspike intervals of 1.6 ms."

### (g) Noise floor on what - one sentence

It is a floor from FINITE SPIKES, not from identity error: the corrected SD subtracts a bootstrap-estimated
"measurement noise" variance that arises from estimating a tuning curve from a limited number of spike
observations within a block - the paper's own words are that it "captures the excess variance (above the
measurement noise) that may be attributed to an actual change in PD", and it ties that noise to spike count
("the size of confidence intervals is determined by the number of spike observations") - and nowhere does any
term in the correction stand for the possibility that the two blocks' spikes came from different neurons.

## REGIME

Stated in the paper's own words.

- Population / instrument: single units from multielectrode array recordings in monkey motor cortex, "classified
  as single units based on action-potential shape and minimum interspike intervals of 1.6 ms", with
  "Spike sorting ... performed offline by manual cluster cutting". Four datasets (F, R, K, C).
- Unit of analysis: one sorted unit's preferred direction, estimated separately on BLOCKS of trials (40 or
  120) drawn from a single recording session.
- Operating condition: center-out reaching, "recorded ... for 30-40 min", "at least 300 successful trials for
  datasets F, R, and K and 290 trials for dataset C".
- Model / comparator: "Following the conventional cosine-tuning model, we assume that the firing rate of each
  neuron depends on" direction (Eq. 1); simulated comparator neurons are drawn "from a Poisson distribution
  with a firing rate given by Eq. 1", and the paper "then simulated 'stable' neurons with the same tuning
  properties and compared these results". So the entry's "stable cosine-tuned Poisson neurons" is a fair and
  accurate gloss - with one wrinkle worth recording, since the paper flags it itself: the simulations and the
  estimator do not share a noise model. "although tuning curve estimation assumed Gaussian noise, the
  simulations used here assumed Poisson noise", and in the correction "epsilon1 and epsilon2 denote
  instantiations of the measurement noise, which is assumed Gaussian." The comparator is Poisson; the
  subtracted noise term is Gaussian.
- Threshold / endpoint: SD across the population of the change in PD between two blocks, in degrees,
  uncorrected and corrected.

Does the claim sit inside this regime? Yes. Every specific the entry asserts about Prior 3 is a statement the
paper makes inside its own regime, in its own printed numbers, in the sections the entry implies. The entry
is not grading the paper outside its assumptions.

## DEFECTS FOUND

1. MISSING DENOMINATOR (correction of record, not a reversal). The entry prints "39.0 +/- 2.2 deg
   uncorrected falling to 0.4 +/- 1.1 deg corrected" with no block size. Both belong to BLOCKS OF 40 TRIALS.
   The paper prints a second, equally valid pair at 120-trial blocks: 22.9 +/- 3.2 deg uncorrected falling to
   1.8 +/- 2.5 deg corrected. The entry has quoted the shortest-block pair, which is where measurement noise
   is largest and so where the uncorrected-to-corrected drop is most spectacular. Fix by adding "for blocks
   of 40 trials" to both numbers. Nothing in the entry's argument depends on which pair is used, so this
   costs the entry nothing - but an unlabelled "39.0" reads as the paper's headline SD, and it is not.

2. THE SCOPE-SETTING OPENER AND THE GOVERNED PAIR. "compatible with absolutely stable PDs" is verbatim, but
   (i) its sentence opens "With the use of this method, we found that...", which scopes the whole claim to
   the corrected-SD estimator rather than to the data at large, and (ii) the clause governs BOTH corrected
   values, not the 0.4 alone. Also: "compatible with" is a non-exclusion claim, not an assertion of
   stability. The entry's phrasing "described as 'compatible with absolutely stable PDs'" is defensible
   because it keeps the hedge inside the quotation marks - but it should name the pair, and the Discussion's
   own restatement puts the weight on the 120-trial figure ("likely closer to 1.8 +/- 2.5 deg over 120
   trials"), not on 0.4.

3. NUANCE THAT CUTS SLIGHTLY AGAINST "DIFFERENT REGIME" BEING A CLEAN GAP - and the entry should absorb it
   rather than wait to be hit with it. The paper's own measurements are strictly within-session, which is
   what the entry says. But the literature the paper is CORRECTING is cross-day: the Introduction's framing
   is "By recording many trials from the same neurons over the course of several days, a number of studies
   have" [found apparent instability], and the Results conclude that the corrected within-session result
   "provide[s] statistical insights into previous findings of apparent instabilities." So Stevenson et al.
   deploy a within-session finite-spike floor as an argument about cross-day instability claims. An adversary
   can say the floor LOGIC was therefore already aimed at the cross-session question in 2011. What survives
   that, and what the entry should say explicitly, is sub-claim (g): the correction's noise term is
   bootstrap-estimated measurement noise from limited spike observations, assumed Gaussian, and there is NO
   term anywhere in it for the two blocks' spikes having come from different neurons. Aiming a
   finite-spike floor at a cross-day debate is not the same as modelling identity error.

4. CITATION FRONT MATTER: no substantive error. The author list, year, title, volume, page range and DOI all
   match the front matter exactly. The one flag is that "106(2)" is not a printed front-matter string - the
   article prints "J Neurophysiol 106: 764-774, 2011" with the running head "VOL 106 . AUGUST 2011". The
   issue number is correct; it is just not sourced from the page itself. No change needed.

5. NO UNENUMERATED UNIVERSAL IS BEING SMUGGLED, with one boundary to mark. The entry's sub-claim (e) is a
   negative claim about ONE document, not about a kind of document, so it is not the failure mode that broke
   the previous batch. It is true over the main text, which I read in full, and unenumerated over the
   supplement, which I did not open. If the entry's wording generalises from this to anything like "no prior
   corrects for identity error", that would be an unenumerated universal and needs its own instance list.

## ROUTES THAT FAILED

- https://journals.physiology.org/doi/10.1152/jn.00626.2010 via WebFetch: "failed at its site
  (client_error), and nothing of the page was retrieved." The publisher host did not serve the article.
- curl to the author copy at stevenson.lab.uconn.edu: "curl: (56) CONNECT tunnel failed, response 403",
  HTTP 000, 0 bytes. This is the documented tool-scoped 403 at this proxy, not a host block - WebFetch
  reached the same URL on the next call and served the full text. I did not route around the proxy and did
  not touch TLS settings.
- PMC was returned by the search (PMC3154833) and was NOT attempted: PMC and Europe PMC are hard-blocked
  here, and a PMCID is an identifier to convert, not a route.
- Unpaywall was not used at all, by rule - its contact-email parameter would put a personal identifier in a
  query string.
- Supplemental Material / Supplemental Note: not attempted; budget exhausted. COULD NOT READ, not NOT FOUND.

Budget: 1 WebSearch (located the author copy; the publisher citation alone did not yield a readable
document), 3 WebFetch (one refused at the publisher, two successful passes over the author copy). The single
search returned the same paper under several titles/hosts - PubMed, PMC, the lab copy, a profiles page. That
is ONE document surfacing repeatedly, counted as title matches and not as corroboration.

## BEARING ON THE LEDGER ENTRY

HOLD the entry's characterisation of Prior 3, with the block size added to the numbers.

Every testable specific checks out against the full main text: the within-session 30-40 min regime (stated
twice, verbatim), the sorted-unit-PD unit of analysis, the PD-change endpoint, the stable cosine-tuned
Poisson comparator, both printed SD figures, the "compatible with absolutely stable PDs" phrase, the
"Spike sorting was performed offline by manual cluster cutting." sentence, and the absence of any
cross-session identity treatment.

On the two things the entry's novelty assessment turns on:

- Does the paper treat cross-session identity? NO, over the main text read in full. Its only cross-day
  sentences describe other people's designs and future instrumentation. Nothing is modelled or corrected.
- Does it correct for identity error rather than finite-spike sampling noise? NO. The corrected SD subtracts
  a bootstrap-estimated Gaussian "measurement noise" variance tied to the number of spike observations. The
  entry's "different numerator" claim is the strongest part of the entry and it survives intact.

So the Medium novelty allowance is not undercut by this prior. The gap the entry claims - same floor logic,
different numerator, different regime - is really there.

Two edits to make, neither of which weakens the entry:

1. Add "for blocks of 40 trials" to the 39.0 / 0.4 pair, and ideally note the 120-trial pair
   (22.9 +/- 3.2 deg -> 1.8 +/- 2.5 deg) so the entry cannot be accused of cherry-picking the widest drop.
2. Pre-empt Defect 3 in the entry itself: say that Stevenson et al. AIM their within-session floor at the
   cross-day instability literature, and that this is precisely why the distinction has to be drawn at the
   noise term rather than at the regime. The regime difference is real but it is the weaker of the entry's
   two arguments; the numerator difference is the one that does the work.
