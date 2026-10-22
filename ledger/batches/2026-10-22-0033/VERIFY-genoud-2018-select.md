# VERIFY — Genoud et al. (2018), "data selection does matter"

## CLAIM

Four sub-claims handed to this checker about a source the ledger entry cites only by
description ("Genoud et al. (2018), a comparative analysis of basal metabolic rate in
mammals, subtitle 'data selection does matter'"; no journal, volume or DOI given):

- (a) Section II.2a identifies the postabsorptive state by the words "a respiratory
  quotient compatible with a postabsorptive state (i.e. approaching 0.7)".
- (b) Table 1 prints a scaling exponent of 0.729 with S.E. 0.010 for the SELECT dataset.
- (c) The dataset holds 1739 entries from 946 publications; and is respiratory quotient
  among the SELECT inclusion criteria at all, or only in the description of the
  physiological state?
- (d) Published-is-not-performed: does the paper anywhere print an empirical
  distribution, standard deviation or spread of respiratory-quotient VALUES across its
  sources?

## FRONT MATTER FOUND (taken from the paper's own first page, not from a short form)

Michel Genoud (1,2), Karin Isler (3), Robert D. Martin (4,5), "Comparative analyses of
basal rate of metabolism in mammals: data selection does matter", *Biological Reviews*
("Biol. Rev."), 2018, volume 93, pp. 404–438, DOI 10.1111/brv.12350. Affiliations as
printed: Dept of Ecology and Evolution, University of Lausanne; Division of Conservation
Biology, Institute of Ecology and Evolution, University of Bern; Dept of Anthropology,
University of Zürich-Irchel; Integrative Research Center, The Field Museum, Chicago;
Institute of Evolutionary Medicine, University of Zürich-Irchel. Issue number was not
visible in the file read; no guess is attached. (Volume 93, pp. 404–438 corresponds to
issue 1, but that is inference, not front matter read here, so it is not asserted.)

ARTICLE TYPE: a *review* in a review journal that also reports its own comparative
re-analyses. The file carries no journal-applied type label; the authors write "This
review has two goals", and the paper then runs original PGLS regressions and
subsampling. So: review + primary re-analysis of a compiled database, not a primary
measurement study. No BMR was measured by these authors; every value is extracted from
other people's publications.

## READ LEVEL

FULL TEXT, main article only, read through WebFetch's summariser on the authors'
self-hosted PDF of the published paper:
https://www.cb.iee.unibe.ch/e58879/e337551/e608359/e749385/Genoud_BioR2018_eng.pdf

Caveat on grain: every string below reached me through the fetch summariser, which caps
individual quotations; the Table 1 caption below is a RECONSTRUCTION assembled from 10
ordered consecutive returned segments, junctions checked for continuity. I was NOT able
to get the whole Postabsorptive-state paragraph reproduced verbatim — the summariser
refused on quotation limits and returned a summary plus two consecutive fragments of the
acceptance rule. Supplementary Tables S1–S4 (which hold the per-entry coding) were NOT
in the file and were NOT read: anything about S1–S4 below is explicitly unchecked.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The respiratory-quotient string — checked alone, and the grammar on both sides

The string "a respiratory quotient compatible with a postabsorptive state (i.e.
approaching 0.7)" IS present, verbatim, in the postabsorptive-state discussion of
section II.(2)(a). As served, with the clause on each side of the cut:

> "…measurements done on artiodactyls fasted for variable durations have shown that the
> RMR tends to stabilize after an initial decrease, and a respiratory quotient
> compatible with a postabsorptive state (i.e. approaching 0.7) can be reached well
> before starvation (Silver et al., 1969…)."

Grammar on both sides of the cut: the quoted fragment is the SUBJECT of a verb phrase
that the quotation drops — "…can be reached well before starvation". Its governing
clause is "measurements done on **artiodactyls** fasted for variable durations have
shown that…". So in the source the words are part of an argument, carrying a citation to
Silver et al. (1969), that ruminant/artiodactyl BMR is measurable at all because a
postabsorptive state is attainable short of starvation. They are NOT the paper's
identification, definition or operating criterion for the postabsorptive state, and they
are not stated for mammals generally.

The paper's actual acceptance rule for this criterion, as served in two consecutive
fragments:

> "We therefore accepted values as reliable BMR estimates if the authors either provided
> information that strongly suggested" / "that their animals were postabsorptive, or
> actually estimated the length of time required to reach a postabsorptive state."

That rule names no respiratory quotient and no numeric RQ threshold. For entries lacking
direct evidence, the section describes applying fasting-duration expectations scaled by
body mass and diet (durations in hours), and states that time-to-postabsorptive is
taxon-specific, with fermenting herbivores needing much longer fasts.

The source states the postabsorptive condition more than once, in two different
registers, and they are not equivalent: (i) the coding rule above (hedged, judgement-
based: "strongly suggested"); (ii) the artiodactyl passage with "approaching 0.7"
(carries a citation, Silver et al. 1969, and is evidence ABOUT a taxon, not a rule).

### (b) Table 1 — 0.729 ± 0.010

NAMED NUMBER, AND WHERE PRINTED: Table 1, Mammalia block, row β, column SELECT:
"0.729 ± 0.010". It sits beside β for ALL = "0.737 ± 0.009" and for SPOILED =
"0.711 ± 0.013". Same column, Mammalia: α = "0.377 ± 0.114", t = "73.4, P <10^-15",
r² = "0.908", lambda = "0.906", N = "549", outliers = "12".

WHAT IT IS AN EXPONENT OF — from the caption itself, not from the body. Reconstruction
of the Table 1 caption from 10 ordered consecutive segments:

> "Table 1. Scaling of basal metabolic rate (BMR) to body mass among all mammals, and
> among Metatheria and Eutheria, using different data sets for BMR. N is sample size
> (number of species). log10BMR = β · log10mass + α, α and β are the allometric
> coefficient and exponent (±S.E.), respectively. BMR is expressed in mlO2/h and mass is
> in g. Results of a t-test for β = 0 are given (t-value and corresponding probability,
> P) as well as r2 and the number of outliers. Lambda is a parameter indicative of the
> phylogenetic signal in the data. Data sets: ALL = best (although not necessarily
> accepted) estimate available for each species in the database. SELECT = best estimate
> available for those species of the database which have at least one accepted
> (evaluation criterion E = 1 or 2) BMR estimate. SPOILED = SELECT data set 'spoiled' by
> less-appropriate values, whenever available (see Section II.3 for further details)."

So 0.729 is the exponent of BODY MASS in log10BMR = β·log10mass + α, with whole-animal
BMR in mlO2/h and mass in g — an absolute (not mass-specific) BMR allometry, one value
per species, N = 549 species. The method is phylogenetic generalized least squares: the
caption does not name it, but reports lambda as "a parameter indicative of the
phylogenetic signal", and section II.(4) states the analyses used "phylogenetic
generalized least squares models (PGLS)". The only significance test the caption
declares is a t-test for β = 0 — i.e. the paper does not, in this caption, test 0.729
against 2/3 or 3/4. Carrying its own stated uncertainty, 0.729 ± 0.010 lies ~6 S.E.
below 0.75 and ~6 S.E. above 0.667, but the paper's printed test is against zero, so any
such comparison is the reader's arithmetic, not the table's.

Other rows as served, for completeness: Metatheria β = 0.746 ± 0.013 (ALL),
0.743 ± 0.010 (SELECT), 0.725 ± 0.014 (SPOILED), N = 84/70/70; Eutheria β =
0.735 ± 0.010, 0.726 ± 0.012, 0.714 ± 0.015, N = 730/476/476. Note SELECT and SPOILED
share N by construction (SPOILED is SELECT's species re-populated with worse values).

### (c) 1739 entries / 946 publications; and is RQ a SELECT criterion?

Both counts are present, but they are printed in different places and are about
different things, and the ledger's phrasing compresses them. As served:

> "A total of 1739 values for the metabolic rate of 817 species of mammals" (Introduction)

> "Among the 946 original publications involved, 95% were read" (Methods)

So: 1739 metabolic-rate values / 817 species / 946 original publications — and the 946
is printed inside a statement about READING coverage (95% read), not as a bare source
count. "1739 entries from 946 publications" is a fair compression of the two sentences
but is not a single printed phrase, and the ledger's version drops the 817 species,
which is the unit Table 1 actually regresses.

Is respiratory quotient among the SELECT inclusion criteria? NO. SELECT is defined
purely by the reliability rating: "best estimate available for those species of the
database which have at least one accepted (evaluation criterion E = 1 or 2) BMR
estimate" (caption, verbatim within the reconstruction above). The criteria behind E are
the physiological-condition criteria of section II.(1) — thermoneutrality, rest,
postabsorptive state, major resting phase, adult status, non-reproductive status for
females. Respiratory quotient is not one of them, and it is not a sub-rule under the
postabsorptive criterion either: the accepted-values rule quoted in (a) turns on the
original authors' own evidence or their own estimate of time-to-postabsorptive. RQ
appears ONLY in the narrative description of the physiological state, in the artiodactyl
argument. Unchecked residue: the per-entry coding lives in Table S1, which was not in
the file read, so I cannot exclude an RQ field there; the main text never claims one.

### (d) PUBLISHED IS NOT PERFORMED — any empirical RQ distribution?

NO. The paper prints no mean, no standard deviation, no range, no histogram and no
table of respiratory-quotient values across its sources. "Respiratory quotient" occurs
ONCE in the whole main text (the abbreviation "RQ" does not occur at all). The only
number ever attached to it is "approaching 0.7".

Of the five verbs: the paper **CITES a reference value** for RQ — arguably BOUNDS the
state qualitatively ("approaching 0.7"), on another group's authority (Silver et al.,
1969) and for artiodactyls only. It does not DEFINE an RQ criterion, does not MEASURE
RQ, does not ANNOUNCE an RQ analysis, and does not PREDICT RQ. There is no RQ quantity
of its own to name, so the honest answer to "where is it printed" is: nowhere — a single
narrative sentence is all there is. This is the published-is-not-performed shape exactly:
a physiological indicator invoked in prose with a textbook value, never tabulated across
the 946 publications it would have had to be extracted from. (Supplementary S1–S4 not
read; see READ LEVEL.)

## REGIME

The source establishes its results in this regime, and the ledger should not carry them
outside it:

- POPULATION: mammals, in captivity or laboratory conditions as reported by the original
  publications — 817 species in the full database (1739 values), 549 species in SELECT
  (84/70 Metatheria, 730/476 Eutheria). Species, not individuals, not populations.
- UNIT OF ANALYSIS for Table 1: one BMR value per SPECIES (the "best estimate
  available"), regressed across species on a phylogeny with lambda estimated. The
  database's unit is the published VALUE (1739 of them); the regression's unit is the
  species (817 / 549).
- ENDPOINT / ESTIMAND: the allometric exponent β of whole-animal BMR on body mass in
  log10 space, log10BMR = β·log10mass + α, BMR in mlO2/h, mass in g — an interspecific
  scaling slope, not an individual metabolic prediction and not mass-specific BMR.
- COMPARATOR: the same species set under deliberately degraded data (SPOILED), and the
  unfiltered database (ALL). The paper's point is the SHIFT between these columns
  (0.737 → 0.729 → 0.711 for Mammalia), i.e. that data selection moves the exponent;
  0.729 is one cell of that contrast, not a free-standing "the" mammalian exponent.
- MEASUREMENT CONDITION the criteria apply to: the condition of the ANIMAL in the
  original experiment — thermoneutral, resting, postabsorptive, in its major resting
  phase, adult, non-reproductive. These are criteria for judging OTHER AUTHORS'
  published measurements from what those authors reported, not conditions this paper
  imposed in a laboratory.
- THRESHOLD: the only selection threshold is the reliability rating E ∈ {1, 2}
  ("accepted"). The postabsorptive criterion has NO numeric threshold — not an RQ value,
  not a fixed fasting time; fasting expectations are scaled by body mass and diet.
  "Approaching 0.7" is a cited qualitative indicator for artiodactyls, in no threshold.

Does the handed claim sit inside that regime? (b) and (c)'s counts: yes. (a): no — the
string is genuine but its regime is one order (Artiodactyla) in a narrative argument
about attainability, and the claim uses it as the paper's identification of the
postabsorptive state in general. (d): the claim's answer is a clean negative.

## DEFECTS FOUND

1. (a) MISQUOTATION BY CUT, scope-type. The words are verbatim, but the cut removes the
   predicate "can be reached well before starvation" and the governing clause
   "measurements done on artiodactyls fasted for variable durations have shown that…".
   Quoted as the paper's identification of the postabsorptive state, it changes an
   artiodactyl-specific attainability argument (with someone else's citation attached)
   into a general operational definition. The paper's own operating rule is the
   "strongly suggested … or actually estimated the length of time" sentence, which names
   no RQ.
2. (a) ATTRIBUTION. The "approaching 0.7" content is attributed by the paper to Silver
   et al. (1969) et al.; it is not a finding of Genoud et al.
3. (b) METHOD NOT IN THE CAPTION. Reading 0.729 ± 0.010 as a PGLS exponent is correct
   but comes from section II.(4) and the lambda column, not from Table 1's caption,
   which names no method. Anyone citing Table 1 alone cannot tell.
4. (b) THRESHOLD. The paper's printed test for β is against 0, not against 2/3 or 3/4.
   Any "significantly below 3/4" statement built on 0.729 ± 0.010 is the citer's
   arithmetic, not a figure the paper prints.
5. (b) CELL-OF-A-CONTRAST. 0.729 is the SELECT cell of a three-way ALL/SELECT/SPOILED
   comparison for Mammalia at N = 549 species. Detached from that contrast — and from
   "Mammalia", "N = 549", "mlO2/h", "g", "absolute BMR" — it becomes an unqualified
   exponent the paper did not assert.
6. (c) COMPRESSION. "1739 entries from 946 publications" merges two sentences from two
   sections and drops 817 species — the unit Table 1 regresses on. The 946 is printed
   inside a reading-coverage claim ("95% were read").
7. (c)/(d) GRANULARITY, not absence: the paper's coding stops at a per-entry reliability
   rating E; it never descends to per-entry physiological measurements such as RQ. A
   ledger entry looking for RQ-level data is hitting a granularity ceiling, not a
   contradiction.
8. (d) No defect in the claim: the negative is real in the main text. But note the
   asymmetry worth not over-reading — the paper's silence on RQ distributions is not the
   paper disclaiming RQ, and the fact that it notes fasting-duration heterogeneity is
   not a flag of an RQ gap.
9. SUPPLEMENT UNREAD. Tables S1–S4 were absent from the file; sub-claims (c) and (d) are
   therefore established for the main text only.

## ROUTES THAT FAILED

- `curl` to https://www.cb.iee.unibe.ch/... : exit 56, "CONNECT tunnel failed, response
  403" (proxy connect_rejected). Per established routing this is TOOL-SCOPED, and the
  same URL opened fine through WebFetch — the host is not blocked.
- WebFetch refusal (recorded, not worked around): the request to reproduce the WHOLE
  section II.(2)(a) "Postabsorptive state" paragraph verbatim was declined — "I can't
  reproduce the full paragraph verbatim, since that would exceed the quotation limits."
  The segment-reconstruction technique DID succeed for the Table 1 caption (10
  consecutive segments) but was declined for that paragraph. Consequently the
  postabsorptive-state paragraph is reported from a summary plus two consecutive
  verbatim fragments, not as a continuous verbatim block.
- Not attempted by rule: PubMed Central / Europe PMC (hard-blocked); Unpaywall (would
  require supplying a contact address). The Wiley/doi.org publisher route was not needed
  because the authors' own PDF of the published article opened; no claim here rests on an
  abstract.

## BEARING ON THE LEDGER ENTRY

The source is REAL, correctly described by the entry's subtitle, and OPENS at a route the
entry does not name: Genoud, Isler & Martin, *Biological Reviews* 93: 404–438 (2018),
DOI 10.1111/brv.12350. The entry should carry that front matter.

Sub-claim verdicts: (b) HOLDS as printed — 0.729 ± 0.010, Table 1, Mammalia β, SELECT
column, N = 549 species, log10BMR(mlO2/h) on log10mass(g), PGLS. (c) HOLDS on the counts
(1739 values, 817 species, 946 publications) and the answer to its second half is
unambiguous: respiratory quotient is NOT a SELECT inclusion criterion — SELECT is
defined solely by E = 1 or 2, and RQ appears only in the narrative description of the
physiological state. (d) HOLDS as a negative: the paper prints no RQ distribution, SD or
spread; it cites one textbook-style value, for artiodactyls, on another paper's
authority. (a) HOLDS ONLY AS A STRING: the words are in the paper, in section II.(2)(a),
but they do not do the job the claim assigns them. They are the subject of a clause about
artiodactyls being measurable short of starvation, not the paper's identification of the
postabsorptive state — which is instead a judgement rule about what the original authors
reported, with no RQ and no numeric threshold in it.

Net bearing: if the ledger entry's un-asked question is "what RQ did these 946
publications actually report, and how much did it vary?", the source supports the gap
being real — but the entry must stop quoting "approaching 0.7" as Genoud et al.'s
criterion. It is their citation of Silver et al. (1969) about artiodactyls, inside a
paper whose selection machinery never uses RQ at all.
