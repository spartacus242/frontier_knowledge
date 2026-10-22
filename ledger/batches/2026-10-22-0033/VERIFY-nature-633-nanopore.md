# VERIFY — Nature 633 (2024), multi-pass nanopore protein reading
# doi 10.1038/s41586-024-07935-7
Checker: fresh-context. Date of check: 2026-10-22.

## CLAIM

The entry UQ-20261022-04 rejects its candidate at Gate 4 partly on an ABSENCE IN PRINT:
that the enabling nanopore instrument "publishes no de novo per-residue accuracy, no limit of
detection and no false-positive rate for a substitution, and reaches 61% at 20-way only in
simulation" (UQ-20261022-04-entry.md line 52), and the entry names THIS source as the single
unopened record most likely to settle it, saying that if it "prints one that clears ~10^-4 per
residue de novo on a native chain, this rejection should be reopened at Gate 4" (line 53).

Sub-claims asked of the source, each answered separately below:
(a) a DE NOVO per-residue reading accuracy (unknown residue, unknown position);
(b) a LIMIT OF DETECTION for a substitution on a single chain;
(c) a FALSE-POSITIVE RATE for calling a substitution;
(d) any result on a NATIVE, full-length protein chain;
(e) the longest chain read, and the read accuracy on it.

## READ LEVEL

FULL TEXT of the published, peer-reviewed version — main article body, Methods, Extended Data
figure and table legends, and the Nature Portfolio Reporting Summary — read at the NSF Public
Access Repository mirror of the publisher's typeset open-access PDF:
  https://par.nsf.gov/servlets/purl/10560827   (record page: https://par.nsf.gov/biblio/10560827)
The served file carries Nature page headers and the CC BY-NC-ND 4.0 open-access line, and is the
typeset version of record, not an accepted manuscript.

NOT READ, and this is a real limit on this check: the SUPPLEMENTARY INFORMATION. The PAR deposit
cites Supplementary Notes 1-4, Supplementary Discussions 1-5, Supplementary Figures (incl. Fig. 9)
and Supplementary Table 1 but contains none of them as content. The deposit ends inside the
Reporting Summary's data-policy field, mid-sentence after "Because of,". So "no such number in the
Supplementary" is NOT established by me and must not be written into the ledger as established.
What IS established below is that the main text, Methods and Extended Data of the version of
record print no such number, and that the paper's own Discussion forecloses (a) in words.

FRONT MATTER, taken from the served document, not from any short form:
  Title: "Multi-pass, single-molecule nanopore reading of long protein strands"
  (NOTE: the published title DROPS the preprint's trailing clause "with single-amino acid
  sensitivity"; two adversaries in this batch read the bioRxiv preprint, which carries the longer
  title. Same work, different title string.)
  Authors, in order as served: Keisuke Motone, Daphne Kontogiorgos-Heintz, Jasmine Wee,
  Kyoko Kurihara, Sangbeom Yang, Gwendolin Roote, Oren E. Fox, Yishu Fang, Melissa Queen,
  Mattias Tolhurst, Nicolas Cardozo, Miten Jain, Jeff Nivala.
  Journal: Nature. Volume 633. Article begins p. 662. Print date 19 September 2024.
  (The served pages do not state the closing page; I do not supply 662-669 from memory.)
  Received 28 June 2023. Accepted 9 August 2024. Published online 11 September 2024.
  DOI 10.1038/s41586-024-07935-7. Open access, CC BY-NC-ND 4.0.
  Type: PRIMARY RESEARCH ARTICLE (proof-of-concept instrument paper). Not a review, protocol,
  guideline or editorial. Its headline accuracy figures are its own measurements; its 61%
  20-way figure is its own simulation (see REGIME).

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are as served by the summariser. Where a sentence exceeded the ~125-character
quotation cap it was returned as ORDERED CONSECUTIVE FRAGMENTS and is marked RECONSTRUCTION with
the fragment count; nothing is completed by inference.

### (a) De novo per-residue reading accuracy — NOT PRINTED. The paper NAMES IT AS FUTURE WORK.

The decisive sentence is in the Discussion. RECONSTRUCTION from 2 consecutive fragments:
  "Furthermore, directly determining amino acid sequences from the nanopore signal (de novo
  sequencing) will be" | "even more difficult and will require extensive datasets for training de
  novo amino acid callers."
The paper therefore does not MEASURE, BOUND or PREDICT a de novo per-residue accuracy; it names
de novo sequencing as a harder, not-yet-attempted task requiring data it does not have. On the
"published is not performed" test: for (a) the paper does not even DEFINE a de novo metric.

What it prints instead is CONSTRAINED CLASSIFICATION accuracy at engineered variable-residue (VR)
positions. Every number below is classification among a KNOWN candidate set at positions recovered
by a separate segmentation step, in a known synthetic background:
  - task statement: "training machine learning models to identify the single mutation present in a VR."
  - candidate sets, as served: "Expanding this to 5-way classifications (for example, G, V, W, R and D)";
    "a 20-way amino acid classification".
  - 3-way: "the model achieved 95% single-read accuracy" (for example, G, Y and D).
  - pairwise: "tyrosine versus aspartate exhibited 100% discrimination accuracy" (Fig. 3b;
    Extended Data Fig. 6a).
  - 5-way: "achieving an accuracy rate of 86%" (Extended Data Table 2; Extended Data Fig. 6b).
  - 20-way: "obtaining an accuracy of 28% compared with just 5.5% for the dummy"
    (Extended Data Fig. 6c); "our model attained 67% accuracy for top-5 and 81% for top-8
    accuracy in the 20-way classification task".
  - END-TO-END PER-READ, the nearest thing in the paper to a per-residue sequencing accuracy, and
    the figure the ledger should quote. Printed in the Results sentence tied to Fig. 3c and
    Supplementary Fig. 9. RECONSTRUCTION from 2 consecutive fragments:
    "Overall sequencing accuracy per read averaged about 62% and 42% for the HDKER sequence, and
    roughly 51%" | " and 21% for the AVLIM sequence, using 5-way and 20-way classification models
    respectively."
    Units and denominator, as the paper frames them: per cent of VR calls correct, per read,
    denominator = the engineered VR positions in the test-set reads (test set = 20.4% of VRs, held
    out by experiment, "at least 12 VRs with each amino acid in the test set"). It is NOT per
    residue over the whole strand: the non-VR residues are fixed background and are not called.
  - Methods confirm the scope of every one of these: "All the results in Fig. 3b,c, Extended Data
    Fig. 6, Extended Data Table 2 and Supplementary Fig. 9" | "are from models evaluated on the
    test set." (RECONSTRUCTION, 2 fragments.)

### (b) Limit of detection for a substitution on a single chain — NOT PRINTED, AND NOT DEFINED.

The strings "limit of detection", "detection limit", "false positive" and "false-positive rate" do
not occur anywhere in the served document. "sensitivity" occurs four times and is used
qualitatively or as a general instrument property, never as a quantified floor:
  - Abstract: "This mechanism achieves sensitivity" | " to single amino acids on synthetic protein
    strands hundreds of amino acids in length" (RECONSTRUCTION, 2 fragments).
  - Introduction: "face problems with detection sensitivity, dynamic range, analytical throughput
    and instrumentation cost" (this is about OTHER technologies).
  - Results: "investigate the sensitivity of this method to single amino acids as a first step".
  - Discussion: "This method achieves single-amino-acid sensitivity and demonstrates the capability
    to reread and sequence".
What the paper does with substitutions instead is DEMONSTRATE discriminability by construction:
  "We introduced a single unique amino acid mutation at the central position in each block and
  demarcated" | "the blocks with a double tyrosine mutation at each end." (RECONSTRUCTION, 2
  fragments.)
  "This spacing was intended to avoid entanglement of the signal contributions from single amino
  acid mutations" | "by preventing them from occupying the pore at the same time." (2 fragments.)
  "The PASTOR design allowed us to analyse up to five different mutations in a single nanopore read,"
  "Between these dips, distinctive and reproducible variations in the ionic current signals were
  observed," | "corresponding to the variable amino acid mutation in each block." (2 fragments.)
  "Collectively, these results show that this method is sensitive to single amino acid residues."
So on the five-way verb test, for (b) the paper MEASURES classification accuracy at designed
substitution sites and DEMONSTRATES that single substitutions produce resolvable signal; it
neither defines nor bounds nor measures a limit of detection. The spacing sentence is important
in the other direction: the design deliberately PREVENTS two substitutions from co-occupying the
pore, so the paper's own construct forecloses the regime in which a two-substitution-per-chain
detection limit could have been measured.

### (c) False-positive rate for calling a substitution — NOT PRINTED.

No FPR for substitution calling appears. The only false-call-shaped numbers in the paper are for
PHOSPHORYLATION (a PTM), not for a substitution, and they are counts in a kinase assay:
  "substantial increase in ionic current in 91 of the 92 reads (98.9%)" (PKA, kemptide VR;
  Fig. 5b / Extended Data Fig. 8a)
  "361 of the 368 non-kemptide VRs and linker sequences (98.1%) showed no substantial signal
  changes"
  and the qualitative claim: "This indicates that the method can discern site-specific
  phosphorylation events, demonstrating specificity to CKII."
The 98.1% is a per-site non-response rate on non-target VRs and linkers in a PTM assay,
denominator 368 sites; reading it as a substitution-calling false-positive rate would be a
different endpoint on a different analyte, and the paper does not perform that conversion.
Statistical treatment of calls is by hypothesis test, not by error rate. Methods,
"Null-hypothesis tests", as served:
  "All PERMANOVA tests were done on the DTW distance matrix of signals using scikit-bio" | "and
  10^6 permutations, unless we used a Bonferroni correction, in which case n x 10^6 permutations
  were used," | "where n is the number of comparisons performed." (RECONSTRUCTION, 3 fragments.)
  "Kruskal-Wallis, T and Mann-Whitney U tests were performed using SciPy."
  "Reported P values were multiplied by n if we noted that we used a Bonferroni correction."
  "All tests were two-sided unless stated otherwise, and P values were considered significant if
  P < 0.05."
A P-value threshold on a signal-distance matrix is not a false-positive rate for a residue call.

### (d) A native, full-length protein chain — NO. Native SEGMENTS inside designed carriers.

The paper is explicit that native sequence space is future work:
  "However, further work is needed to explore more native protein sequences."
Everything read is a PASTOR construct (designed carrier):
  "five repeating sequence blocks, each containing 59 amino acids," plus a "29-amino acid linker";
  the early construct: "It comprised an unstructured, negatively charged N-terminal sequence of
  42 amino acids" (attached to a folded Smt3 domain).
The two experiments nearest to "native" embed a native-derived domain in that carrier:
  "we analysed a PASTOR protein with the titin I27V15P domain, which consists of 89 amino acids"
  (I27 V15P is a point-mutated engineering variant of the native titin I27 domain, not the native
  domain and not full-length titin.)
  "We next tested PASTOR constructs with the amyloid-beta protein 1-42 (PASTOR-Abeta42) and its
  shorter derivative 1-15" — Abeta 1-42 IS a native human peptide sequence at its full length, but
  it is read as a cassette inside PASTOR, not as a free native protein.
What was reported for these, as served (RECONSTRUCTIONS of 2 fragments each where marked):
  "Unlike unstructured proteins, nanopore traces of PASTOR-titin yielded an initial two-step" |
  "electrophoretic nanopore capture state, indicating that the folded titin domain was first
  captured"
  "After a successful unfolding attempt, we observed putative translocation of the titin domain"
  "In the titin translocation signal, individual ClpX steps could be seen (Fig. 6c)."
  "As expected, after nanopore analysis they yielded ionic current traces similar to PASTOR-D-titin
  overall" | "comparing their putative translocation states (state vii)"
NO accuracy figure, read count in the body, LOD or FPR is attached to the titin or Abeta
experiments. The section's only number is a model-match rank, "ranked in the top 0.04% of the best
matches", which is a sequence-to-signal model check, not a read accuracy. Read counts for these
appear only in an Extended Data Fig. 9 legend, as "n = 20, 12, 21, and 15 for PASTOR-Titin,
PASTOR-dTitin,". Note "putative translocation" twice: the translocation itself is inferred, not
confirmed by sequence read-out.
The Abstract's closing framing is weaker than the ledger's phrasing of the field's goal:
  "Finally, we apply these methods to examine full-length, folded protein domains for complete
  end-to-end analysis." — full-length DOMAINS, not full-length proteins; and the Abstract's own
  verdict on the whole paper is "These results provide proof of concept for a platform that has
  the potential to identify" | "and characterize full-length proteoforms at single-molecule
  resolution." (RECONSTRUCTION, 2 fragments.) "Has the potential to" is the paper's own hedge.

### (e) Longest chain read, and accuracy on it.

The paper states lengths only loosely and never prints a total construct length. Strings as served:
  Abstract: "hundreds of amino acids in length".
  Rereading: the reread "extended across the entire PASTOR unstructured region (more than 300
  amino acids)."
  Components: 5 blocks x 59 aa, plus a 29-aa linker, plus an 89-aa titin domain in the folded-domain
  experiments; the document "never states the total length of a full PASTOR construct."
So the best-supported answer is: unstructured region MORE THAN 300 amino acids, total construct
length NOT PRINTED (anyone quoting a total residue count for a PASTOR is doing their own
arithmetic on component sizes, which the paper does not perform).
Accuracy on the longest chain: no accuracy is reported as a function of length. The accuracy that
applies to the long PASTOR reads is the per-read VR figure above — about 62% (5-way) and 42%
(20-way) for HDKER, about 51% and 21% for AVLIM. Nothing is published tying an accuracy to the
titin or Abeta42 constructs, i.e. to the longest and most native-like strands.

### The 61% figure: simulated, and this is confirmed in the source.

  "the accuracy for the 20-way amino acid classification task improved from 28% to 61%"
  "the accuracy for a 7-way classification task improved from 66% to 99%" (against a stated 14%
  random baseline)
  barcodes: "decodable with a single-molecule accuracy of more than 95% or more than 81%"
  (Extended Data Fig. 7e; Supplementary Table 1)
The source labels these simulated. Results: "Using a simulation discussed in Supplementary Note 3,
the accuracy for the 20-way amino acid" | "classification task improved from 28% to 61%"
(RECONSTRUCTION, 2 fragments). Extended Data Fig. 7d is titled as simulated: "Simulated effect of
rereading on 2 (Y, D), 4 (A, W, R, D), 7 (G, Q, W, F, R, D, E)"; Fig. 7e is "Projected sequencing
accuracy of barcode designs" and derives from those simulated accuracies.
Methods, "Reread simulation", as served, and this matters because it is NOT a held-out test:
  "To collect the results shown in Extended Data Fig. 7d,e, we used a random forest" | "without
  hyperparameter tuning and used 100 randomly selected 80-20 train-train splits." | "This was
  necessary to estimate the accuracy well enough with a large number of rereads, given the data
  limitation" | "and the need to group samples in the test set." (RECONSTRUCTION, 4 fragments.)
  "train-train splits" is the paper's own wording. The 61% and the barcode projections therefore
  rest on resampling within training data, by the authors' stated necessity, whereas the 28%, 86%
  and 62%/42% figures are from the held-out test set.
No measured accuracy from EXPERIMENTAL rereads is printed. Rereading is shown experimentally as
traces, e.g. "Top box shows example trace of PASTOR-reread showing three almost-complete reread
events", and back-slipping distances by ClpX concentration in an Extended Data Fig. 7a legend
("Estimated back-slipping distance for ClpX concentrations at 1000 nM (n = 141), 200 nM (n = 609)"),
but no reread-boosted accuracy is measured. This is a clean "published is not performed" case:
the multi-pass gain is ANNOUNCED in the Abstract ("we demonstrate the ability to reread individual
protein molecules multiple times") and quantified only in SIMULATION.

### The paper's own statement of its limits.

  "There are challenges with experimental yield (Extended Data Fig. 10 and Supplementary Discussion
  4) and read-out accuracy, particularly for domains with secondary structure"
  "However, further work is needed to explore more native protein sequences."
  "Furthermore, directly determining amino acid sequences from the nanopore signal (de novo
  sequencing) will be" | "even more difficult and will require extensive datasets for training de
  novo amino acid callers."
  "One factor that currently impedes data collection throughput is the two-step flow cell loading
  process."
No yield percentage is printed in the served text; Extended Data Fig. 10's legend gives sample
sizes (n = 35, 3, 3) and says translocations per quality open pore were significantly higher under
the optimised run method at 500 nM, with the detail deferred to Supplementary Discussion 4, which
I did not read.

## REGIME

The regime in which this paper establishes what it establishes, in its own terms:

  Construct type: PASTOR — a designed synthetic carrier. Five repeating blocks of 59 aa each, one
  engineered variable residue (VR) at the CENTRAL position of each block, blocks demarcated by
  double-tyrosine (YY) markers, plus a 29-aa linker, plus (in the folded-domain experiments) an
  89-aa titin I27V15P domain or an Abeta 1-42 / 1-15 cassette. Not a native protein; native
  sequence appears only as an embedded cassette.
  Sequence background: known and fixed by design; eight PASTOR backgrounds (HDKER, GNQST, FYWCP,
  AVLIM, VGDNY, TWAFH, PRMQE, KSILC) chosen so "each of the 20 amino acids in two different
  PASTOR sequence contexts" is covered.
  Unit of analysis: ONE VR SITE within one nanopore read, aggregated to a per-read accuracy across
  that read's VR sites. Not a residue drawn at random from a chain.
  Endpoint: correct identification of the amino acid at a VR, chosen from a CLOSED candidate set.
  Comparator: a scikit-learn dummy classifier at chance (5.5% for 20-way; 14% for 7-way).
  Estimand: out-of-sample classification accuracy on an experiment-level held-out test set
  (20.4% of VRs) for the 28%/86%/95%/62%/42% family; for the reread and barcode figures, an
  in-training resampled estimate across "100 randomly selected 80-20 train-train splits".
  Number of candidate sequences / classes: 2, 3, 5, 7 and 20 way. The headline 20-way is the only
  one spanning the full amino acid alphabet, and the 7-way 99% and the >95% barcode figures are
  stated for REDUCED alphabets and are silent outside them.
  Read passes: single pass for all MEASURED accuracies; multi-pass gain is simulated.
  Experimental vs simulated: experimental — ClpX two-residue stepping, single-substitution signal
  resolution, per-read VR accuracy (62%/42%/51%/21%), phosphorylation counts (98.9%, 98.1%),
  titin and Abeta translocation traces. Simulated — reread accuracy (28% -> 61% at 20-way,
  66% -> 99% at 7-way) and barcode decoding projections (>95%, >81%). Modelled, a third category
  the paper distinguishes — the a priori sequence-to-signal biophysical model (Extended Data Fig. 5,
  Supplementary Fig. 8), labelled "modeled signal", not "simulated".
  Instrument: commercial MinION array, CsgG nanopore, ClpX unfoldase ratcheting.

Does the claim handed to me sit inside this regime? The ledger's claim is an ABSENCE claim about
(a), (b), (c) and about the simulated status of 61%. On all four it sits squarely inside what this
version of record shows, and the source's own Discussion states the (a) gap in the paper's own
voice. The ledger's reopening CONDITION, by contrast, sits entirely OUTSIDE this regime: it asks
for ~10^-4 per-residue de novo accuracy on a native chain, and the paper's regime is closed-set
classification at designed sites in a synthetic background at single-pass accuracies of 21-62%.
A result proved under those assumptions is silent, not supportive, about the candidate's regime.

## DEFECTS FOUND

Defects in the LEDGER ENTRY's handling of this source:

1. NONE ON SUBSTANCE for the three absence sub-claims. Entry line 52's assertion that the source
   "publishes no de novo per-residue accuracy, no limit of detection and no false-positive rate
   for a substitution, and reaches 61% at 20-way only in simulation" is confirmed at main-text,
   Methods and Extended Data level in the VERSION OF RECORD, which nobody in the batch had opened.
   The entry's characterisation of the task as "known-position classification among known
   candidates in a synthetic sequence background" is also confirmed, including by Methods wording.
2. UNDERSTATED, in the entry's favour: the entry treats the de novo gap as an inference from
   design ("an ABSENCE IN PRINT plus adversary arithmetic, not a reported negative result",
   line 53). It is stronger than that. The published Discussion states in the authors' own voice
   that de novo sequencing "will be even more difficult and will require extensive datasets for
   training de novo amino acid callers", and that "further work is needed to explore more native
   protein sequences." That is close to a reported negative: the authors declare both the de novo
   capability and the native-sequence regime out of reach of this work. The entry's self-described
   vulnerability on this point is therefore too generous to its own opponent.
3. A GAP IN THE ENTRY'S EVIDENCE that this check does NOT close: the entry says "its reviewed text
   and supplementary are the likeliest place for a limit of detection or false-positive rate to be
   printed" (line 53). I read the reviewed text; I did NOT read the Supplementary Information,
   which the PAR deposit omits. So the entry's hypothesis is refuted for the reviewed text and
   REMAINS OPEN for Supplementary Notes 1-4, Supplementary Discussions 1-5 and Supplementary
   Table 1. Writing "the supplementary prints no LOD" into the ledger on the strength of this note
   would be a fabrication.
4. A citation hazard for anyone writing this source up: the PUBLISHED title drops the preprint's
   "with single-amino acid sensitivity" clause. Two adversaries in this batch read the preprint.
   Front matter in this note is from the served typeset version; the closing page number is NOT
   served and I have not supplied one.
5. A quantity the batch should stop attributing to this paper: a total PASTOR construct length in
   residues. The paper prints component sizes (59 aa x 5 blocks, 29-aa linker, 42-aa N-terminal
   stretch, 89-aa titin domain) and the loose "more than 300 amino acids" for the unstructured
   region, but never the total. Any single total figure is someone else's arithmetic.
6. A granularity point, not an absence, on (c): the paper DOES print a non-response count on
   non-target sites — "361 of the 368 non-kemptide VRs and linker sequences (98.1%) showed no
   substantial signal changes" — but for PHOSPHORYLATION detection, at site granularity, in a
   kinase assay. It is a different analyte and a different endpoint from substitution calling.
   Reporting it as "the paper's false-positive rate" would be a regime swap of exactly the kind
   this ledger has been burned by. State it as what it is or leave it out.
7. A further distinction the entry does not draw, and which strengthens leg 4: the 61% 20-way and
   the >95% barcode figures are not merely simulated — their Methods state they come from "100
   randomly selected 80-20 train-train splits" (the paper's own phrase), i.e. resampling inside
   the training data rather than the experiment-level held-out test set used for the 28% and the
   62%/42%. The simulated figures are thus a weaker class of estimate than the measured ones, not
   simply a projection of them.

## ROUTES THAT FAILED

None attempted and failed. Routing was taken as given in the task brief and the first route tried
worked. For the record, so no later reader re-spends calls:
  - nature.com was NOT attempted (brief states it fails both ways here even for open access).
  - PubMed Central and Europe PMC were NOT attempted (hard-blocked here; PMID 39261738 and the
    PMC id are identifiers to convert, not routes).
  - doi.org was NOT attempted (brief: can return 429 with do-not-retry).
  - Unpaywall was NOT used, by rule: it requires a contact email and no personal identifier goes
    into a URL or query string.
  - WORKED, first try: NSF Public Access Repository (funder repository), the typeset open-access
    PDF at https://par.nsf.gov/servlets/purl/10560827 , reached from the record page
    https://par.nsf.gov/biblio/10560827 . Four WebFetch calls against that one URL, no searches
    beyond the one that surfaced it. Budget used: 1 search of 6, 5 fetches of 5.
  - PARTIAL at that route: the deposit carries main text + Methods + Extended Data legends +
    Reporting Summary and ends mid-sentence in the Reporting Summary's data-policy field; it does
    NOT carry the Supplementary Information. That is a content gap in the deposit, not a failed
    route. A future checker wanting the Supplementary should look for it somewhere other than PAR.

## BEARING ON THE LEDGER ENTRY

The rejection's one load-bearing leg SURVIVES this check, and is now better grounded than when it
was written. Attack 4 was recorded as resting on an absence in print established from a secondary
and a preprint, with the version of record unopened. The version of record is now open and read at
full main-text level, and it says what the entry said it would say, in the authors' own voice:
no de novo per-residue accuracy, no limit of detection, no substitution false-positive rate, the
61% 20-way figure simulated, and de novo sequencing plus native sequences explicitly named as
further work. Leg 4 stands. Gate 4 should NOT be reopened on this source.

The entry's own reopening condition is not met and is not close to met. The entry would reopen if
this paper printed a de novo per-residue figure clearing ~10^-4 on a native chain. The paper's best
MEASURED number is about 62% per-read correct calls at designed sites with a 5-candidate closed set
in a known synthetic background, single pass; its best 20-way measured number is 42% per read and
28% per site; and its native content is an 89-aa engineered titin variant and an Abeta cassette
inside a designed carrier, with no accuracy attached to either. The gap between the regime proved
and the regime the candidate needs is not narrowed by anything in the published version.

Two amendments to make to the entry, neither of which changes its verdict:
  (i) line 53 should record that the version of record HAS now been opened, at the PAR mirror,
      and that its Discussion states the de novo and native-sequence gaps explicitly — so the
      vulnerability note's "not a reported negative result" should be softened, not kept as is.
  (ii) line 53's "its reviewed text and supplementary" should be split: the reviewed text is
      checked and prints no such number; the SUPPLEMENTARY remains unopened and is the only
      residual place a printed LOD or FPR could still hide. If the batch wants the vulnerability
      note fully closed, that is the one remaining call to spend — and it should be spent
      somewhere other than PAR, which omits the Supplementary.
The entry's other caps are untouched by this check: well-posedness 2/3, the attack-8 algebraic
identity, and the P1 close-neighbour reading were not within this source's scope and nothing here
speaks to them.
