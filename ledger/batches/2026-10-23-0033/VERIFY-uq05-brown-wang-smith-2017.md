# VERIFY - Brown, Wang & Smith 2017 measures unconditioned per-edge conflict counts, not support-conditioned rates
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

The entry's close-neighbour claim, as carried: Brown J.W., Wang N., Smith S.A. (2017), 'The development of
scientific consensus: analyzing conflict and concordance among Avian phylogenies', bioRxiv 10.1101/123034,
(i) uses 290 published avian source trees, (ii) uses a rooted-bipartition unit, (iii) applies a reciprocal
tip-set overlap conflict test with NO support threshold, (iv) prints per-edge counts 'six having 29-37
conflicting trees and 13-30 supporting trees', and (v) has a denominator ambiguous between its own 290
and 223. What turns on it: if the paper conditions on support anywhere, the candidate is substantially
published.

Verdict: HOLDS on (i)-(iv). (v) is WRONG AS STATED and must be narrowed - see DEFECTS.

## READ LEVEL

Brown, Wang & Smith 2017, bioRxiv 10.1101/123034 (preprint v1):
PARTIAL - body text only, served through the WebFetch summariser, which caps verbatim quotation at
roughly 125 characters. Sections reached and quoted from: Introduction; Methods ("Source trees",
"Construction of a new synthetic tree of Aves", "Conflict and concordance analyses"); Results and
Discussion ("The distribution of phylogenetic conflict", "The resolution of the Aves phylogeny through
time"); captions of Figures 2, 3 and 4.

NOT read: FRONT MATTER (title page, author names, affiliations, posting date, DOI line, any "Now
published in" line), the reference list, tables, and supplementary material. All three bioRxiv routes
(v1 landing page, v1.full, .full.pdf) returned a body text that begins at "Introduction" with no title
page attached, so the front matter is COULD NOT READ, not absent.

PUBLISHED VERSION: NOT CHECKED - budget exhausted before it was located. Two searches returned only
bioRxiv records for this title plus one mis-indexed CORE record. I am NOT reporting "no published
version exists": I did not reach that question. The kind of document that would settle it is a
publisher record or Crossref/DOI metadata for the journal article; I opened neither, so naming
Molecular Phylogenetics and Evolution here would be a guess and I decline to dress it as a lead.

Author names in this note are therefore taken from the ENTRY, not from front matter. Flagged below.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are as the summariser served them. Where a sentence exceeded the cap I assembled it
from ORDERED CONSECUTIVE returns and label it a reconstruction with the fragment count.

(b) SUPPORT, BOOTSTRAP, POSTERIOR, THRESHOLD

Term check as served: "threshold" does not appear in the Methods or Results. "posterior" / "posterior
probability" does not appear anywhere in the text served. "bootstrap" appears ONCE, and not in the
Methods.

The one bootstrap sentence, Results and Discussion, "The distribution of phylogenetic conflict"
(reconstruction from 2 consecutive fragments):

  "For example, [3] report that for clades with < 50% bootstrap support, almost half of the families
  (195/399) and two thirds of the genera (32/47) were within the oscine songbird clade."

SCOPE-SETTING OPENER: the sentence opens "For example, [3] report that...". Those words scope the whole
clause to a CITED EXTERNAL RESULT from reference [3]. The clause ASSERTS a bootstrap-conditioned
quantity, but asserts it OF ANOTHER PAPER's analysis; it is a motivating citation in the discussion, not
a description of this paper's own instrument. Nothing in it records this paper conditioning on support.

What "support" means in this paper - figure 2 caption, verbatim:

  "Conflict and concordance are measured as the number of source tree edges that conflict/support a
  given focal tree edge."

So "supporting trees" in this paper is a CONCORDANCE COUNT (how many source trees agree with a focal
edge), not a branch-support value. Figure 4 caption: "The contribution of source tree support to each of
the major avian phylogeny." - same sense.

Methods sentence on provenance of the tooling:

  "Conflict and concordance analyses were conducted using the corresponding tools utilized by the Open
  Tree of Life web service..."

No support stratification, no support-bucketed conflict counts, and no support value recorded alongside
conflicting edges appears anywhere in the sections read.

(c) THE PER-EDGE COUNTS AND THEIR DENOMINATOR

The quoted string is verbatim. Full sentence, Results and Discussion, "The distribution of phylogenetic
conflict", in the passage discussing Figures 2 and 3 (reconstruction from 2 consecutive fragments,
verified at the junction "with six having" / " 29-37 conflicting trees"):

  "[28] have the highest conflict among edges surrounding the Passeriformes clade, with six having 29-37
  conflicting trees and 13-30 supporting trees."

GRAMMAR ON BOTH SIDES OF THE CUT: the entry's excerpt starts at "six having", which drops the subject.
"six" is SIX EDGES of one focal tree - the tree of reference [28] - among the edges surrounding the
Passeriformes clade. It is not six trees, and it is not a whole-paper figure. The preceding sentence
scopes the region: "the relationships that diverge soon after crown Passeriformes (i.e., within the
oscines) are highly contested". The following sentence gives the same shape for a second focal tree:
"[21] showed strong conflict at the base of Passeriformes, with exceptionally high conflict leading to
oscine songbirds."

UNITS AND DENOMINATOR: "29-37 conflicting trees" and "13-30 supporting trees" are counts of SOURCE TREES
per focal-tree edge. The denominator is stated in the Methods, "Conflict and concordance analyses"
(reconstruction from 2 consecutive fragments):

  "We computed edge-specific values of concordance and conflict for each of the nine major trees against
  all 290 source trees."

and reinforced by:

  "Adding the full OTT set of taxa to the focal trees ensures an overlap of tip sets with each of the 290
  source trees."

The denominator of the quoted counts is 290, printed, in the Methods, not inferred.

THE 290 / 223 / 183 NUMBERS, each with its printed sentence:

  290, Methods, "Source trees": "In total, 290 avian phylogenetic hypotheses were gathered from the
  existing resources in the Open Tree of Life."

  290, Introduction: "Additionally, after filtering 290 source trees from the Open Tree of Life, we
  constructed a new comprehensive synthetic bird tree based on certain tree choice criteria (by taxon
  group, sampling scale, and year of publication) and use it for assessment as the largest avian tree to
  date." (reconstruction from 3 consecutive fragments)

  183, Methods, "Construction of a new synthetic tree of Aves": "Of the 290 avian trees collected above,
  183 were selected as reflecting community consensus about phylogenetic hypotheses."

  223, Results and Discussion, "The resolution of the Aves phylogeny through time": "Although we are
  limited by the database of 223 available trees, we can begin to address these questions."

  223, same subsection: "However, 1,890 edges were contributed after 2012, and 223 were added from
  studies published after 2015." - here 223 counts EDGES, not trees.

(d) THE CONFLICT TEST

Unit, Methods: "a source tree edge *j* defines a rooted bipartition *S*(*j*)" - i.e. each source edge is
a split into an ingroup and an outgroup tip set.

Concordance, Methods: concordant when "*B*_in_ subset of *A*_in_ and *B*_out_ subset of *A*_out_" (served
as "B_in ⊂ A_in and B_out ⊂ A_out").

Conflict, Methods, "Conflict and concordance analyses" (reconstruction from 4 consecutive fragments):

  "On the other hand, edges in trees *A* and *B* are identified as conflicting if none of the following
  are empty: *A*_in_ ∩ *B*_in_, *A*_in_ ∩ *B*_out_, or *B*_in_ ∩ *A*_out_ (that is, there is reciprocal
  overlap in the ingroup and outgroup across trees; we note that [24] have a typo in this definition)."

This is the HEDGED, CITED formulation, and it is the only one: the test is purely set-theoretic on tip
sets, with no support term anywhere in it. Applied on shared taxa: YES - the test is defined on
intersections of tip sets, and the paper manufactures the needed overlap rather than discarding
non-overlapping trees: "Adding the full OTT set of taxa to the focal trees ensures an overlap of tip
sets with each of the 290 source trees."

(e) ANY RATE?

Not found in the sections read. Every quantity I could name is a COUNT: conflicting/supporting source
trees per edge (29-37, 13-30), numbers of edges (1,890 edges after 2012; 223 edges after 2015), and
tree counts (290, 183, 223). The one fraction-shaped pair of numbers in the text, "195/399" and "32/47",
is inside the "For example, [3] report that..." sentence - it is reference [3]'s figure about family and
genus placement in the oscines under <50% bootstrap support, not this paper's measurement and not a
between-study conflict rate.

This negative is bounded by my read: I opened Introduction, Methods, Results and Discussion and the
captions of Figures 2-4. I did NOT open the tables, the supplementary material, or any published
version. So the claim "the paper prints no conflict rate" is TRUE OVER WHAT I OPENED and UNENUMERATED
for the supplement, the tables and the journal version.

(f) ONE SENTENCE: unconditioned conflict counts. The paper measures, per focal-tree edge, how many of
290 source trees conflict with it and how many support it, by a threshold-free set-overlap test, and
prints those counts - it does not print a support-conditioned rate.

## REGIME

In the paper's own words: population = "290 avian phylogenetic hypotheses were gathered from the existing
resources in the Open Tree of Life"; focal objects = "each of the nine major trees"; unit of analysis =
the EDGE, where "a source tree edge *j* defines a rooted bipartition *S*(*j*)"; instrument = "the
corresponding tools utilized by the Open Tree of Life web service"; operating condition = tip sets forced
to overlap by "Adding the full OTT set of taxa to the focal trees"; threshold = NONE - the word
"threshold" does not occur in Methods or Results, and the conflict criterion is set-theoretic only.

Does the entry's claim sit inside this regime? Yes for (i)-(iv): the entry describes exactly this
population, unit, test and absence of a threshold. For (v) it sits OUTSIDE: the entry attributes a
denominator ambiguity to the conflict measurement, whereas the paper's conflict measurement states its
denominator (290) unambiguously and the 223 figure belongs to a different subsection with a different
object.

NUMERATOR CLASS AND DENOMINATOR, both directions, for the number closest to the candidate's:
The paper's per-edge conflict count has numerator class = "the number of source tree edges that
conflict... a given focal tree edge", with conflict defined by reciprocal ingroup/outgroup overlap, and
NO exclusion by support. Its denominator is 290 source trees, checked against the near neighbours it is
not: 183 (trees selected for building the new synthetic tree) and 223 (the "database of available trees"
figure in the through-time section). What this class MISSES relative to a support-conditioned rate: it
carries no information about how well-supported either the focal edge or the conflicting edge is, so a
conflict against a 30% bootstrap edge and one against a 100% edge are the same unit here. What it
INCLUDES that a support-conditioned quantity would exclude: every source-tree edge that overlaps
reciprocally, however weakly supported, including edges from trees of any sampling scale or vintage. The
two quantities are one word apart and are not the same number.

## DEFECTS FOUND

1. (v) is wrong as stated. The entry says the denominator "is ambiguous between its own 290 and 223".
   The conflict/concordance denominator is PRINTED as 290 in the Methods ("against all 290 source
   trees"). The 223 appears only in "The resolution of the Aves phylogeny through time", attached to a
   different object: "the database of 223 available trees". The paper does carry an unreconciled
   290-versus-223 inconsistency, but it does not infect the per-edge counts the entry relies on. STRIKE
   the ambiguity from the denominator and, if it is worth keeping at all, re-file it as an internal
   inconsistency in the through-time subsection.

2. The entry omits a third, closer near-neighbour denominator: 183 ("Of the 290 avian trees collected
   above, 183 were selected..."). If anything threatens the 290 reading it is 183, not 223 - and it does
   not, because 183 is scoped to building the synthetic tree, not to the conflict analyses.

3. "223" is printed twice with two different units in the same subsection - 223 TREES and 223 EDGES
   ("223 were added from studies published after 2015"). Anyone reading the second occurrence as trees
   would manufacture exactly the ambiguity the entry asserts. Worth naming in the entry so the next
   reader does not re-derive it.

4. The entry's excerpt 'six having 29-37 conflicting trees and 13-30 supporting trees' is verbatim but
   cut before its subject. "six" = six EDGES around the Passeriformes clade of ONE focal tree (reference
   [28]), the paper's worst case, not a representative figure. Quote it with "[28] have the highest
   conflict among edges surrounding the Passeriformes clade, with..." attached, or the number reads as
   general.

5. Front-matter discipline: I could not open the title page on any route, so the entry's author initials
   (J.W., N., S.A.) and the title's capitalisation ("Avian") are UNVERIFIED here, taken from the entry
   rather than from front matter. The entry's parenthetical "(also published in Molecular Phylogenetics
   and Evolution - give the published citation if you find it)" is also unverified: I did not reach it.
   Neither is a finding against the entry; both are gaps in this check.

6. On the question that actually matters: no defect. The word "bootstrap" does occur, which is the kind
   of hit that could look like support-conditioning on a keyword scan, but its one occurrence is inside
   "For example, [3] report that..." - another paper's result, in the discussion. The entry's reading
   survives it.

## ROUTES THAT FAILED

- https://www.biorxiv.org/content/10.1101/123034v1 - served body text starting at "Introduction"; no
  title page, authors, abstract, DOI line or "Now published in" line returned.
- https://www.biorxiv.org/content/10.1101/123034v1.full - same: body only, front matter absent from what
  was served.
- https://www.biorxiv.org/content/10.1101/123034.full.pdf - same; the summariser explicitly reported no
  title page in the content it received. (Body text came through well on this route; the failure is
  front matter specifically.)
- https://core.ac.uk/works/517410 - returned a DIFFERENT work (an avian feather louse, Ischnocera:
  Phthiraptera, phylogeny abstract) with no title, authors or DOI. A title-level search hit that is not
  this document. Counted as one wasted fetch, not as corroboration.
- Searches: 2 used. The title surfaced repeatedly as bioRxiv records - those repeated returns are TITLE
  MATCHES for ONE document, not multiple sources, and none carried the journal DOI.

## BEARING ON THE LEDGER ENTRY

The load-bearing part of the neighbour description HOLDS, and holds on Methods text read directly:
rooted-bipartition unit, reciprocal tip-set overlap conflict test, no support threshold anywhere, 290
source trees as the comparison set, per-edge counts printed. The specific risk the entry was checked
against - that the paper conditions on, records or stratifies by support somewhere - is NOT realised in
the sections I read: "threshold" and "posterior" do not occur, and the single "bootstrap" occurrence is
a cited result from reference [3] in the discussion. So this neighbour measures the UNCONDITIONED
quantity, it does not pre-empt a support-conditioned conflict rate, and the Medium novelty cap it
imposes stands on the ground the entry gives it, independently of attack 4.

Two changes to the entry. NARROW sub-claim (v): strike "denominator ambiguous between 290 and 223" -
the conflict denominator is printed as 290; re-file the 290/223 discrepancy as an internal
inconsistency in the through-time subsection, and name 183 and the 223-edges collision while there.
And attach the subject to the quoted counts (defect 4) so "six" is not read as six trees or as a
general figure.

Residual, and it is a gap in this check rather than a mark against the entry: the front matter was never
served on any route, and the journal version was never opened. If the published Molecular Phylogenetics
and Evolution version revised the Methods to add a support filter, this check would not have seen it. A
reviewer who wants that closed should open the publisher record or Crossref metadata for the journal
article - that is the kind of document that settles it - and re-run sub-claim (b) against the published
Methods.
