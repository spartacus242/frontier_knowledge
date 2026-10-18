# Post-batch verification — biology batch 2026-10-17 22:57 UTC

Thirty-three fresh-context reads after Gate 5: 22 verification checks, then 8 late-Gate-4
and residual checks plus 2 cold judges. Every one returned; no agent died. Each reader was
handed one source and the claim made of it, never a reviewer's reasoning, and was required
to declare its read level and keep "I did not find it" separate from "I could not read it".

Two verdicts changed, both from Rejected to Provisional (UQ-53, UQ-54). One routing row was
withdrawn (UQ-52). Per-check notes are the `*-verify-*.md`, `*-late-*.md` and
`*-residual-*.md` files in this folder.

## UQ-51 — Rejected stands; two figures corrected

- **Hatton et al., PNAS 2023, 120(39):e2303077120** read by two independent readers, one by
  identifier at pnas.org and one by subject alone. Both confirm the paper and the
  equal-biomass-per-logarithmic-size-class result for the human reference body, and the
  slope near -0.97 (95% CI -1.09 to -0.87).
- **The two sentences the kill cited as separate cross-species claims are ONE conditional
  sentence**, in the section "A Recurrent Pattern": "If we assume that the ratios of
  different cell types in different tissues are constant across species, we should expect a
  similar inverse cell size-count relation to hold in other mammals." The cross-species
  claim is therefore an assumption-based expectation, not a result. A third attributed
  sentence ("A similar pattern may hold across the bodies of mammal species.") was reported
  by one summariser pass and could not be re-confirmed or placed; it is treated as unverified.
- **The 33-cell-type mammal dataset is cell SIZE only.** Materials and Methods, Supporting
  data, pointing to SI Appendix Fig. S1. It carries no counts and is not a whole-body census.
- **Savage et al. 2007: the "14 of 18 cell-volume CIs include 0" figure is not the paper's.**
  14 of 18 is the count of cell types classed as strategy i. The Fig. 2 caption reads
  "Except for alveolar macrophages, the 95% CI of the slopes all include the value of 0",
  so 13 of those 14 include 0, and the 4 strategy-ii types (exponents 0.13-0.18) exclude it.
  The paper states no "X of 18" count. Savage computes no biomass per logarithmic size class
  and poses no question about the within-body distribution's shape against body mass.
- **Reference 34 identity confirmed, its content unread, and the claim it carries is
  verifiable in a DIFFERENT paper by the same author in the same year.** Ref 34 resolves at
  the publisher to Fankhauser, "The effects of changes in chromosome number on amphibian
  development", Quarterly Review of Biology 20:20-78 (1945). That review COULD NOT READ
  (journals.uchicago.edu fetch error, JSTOR JavaScript challenge, archive.org 0 hits, three
  searches). The compensation result was read instead in Fankhauser, "Maintenance of normal
  structure in heteroploid salamander larvae", J Exp Zool 100:445-455 (1945): compensation is
  stated **per organ or tissue, not whole body**, and is "only partial as a rule" in haploids
  with the pentaploid retina overcompensating. Miller, Brownlee & Heald 2020 (Exp Cell Res
  392:112036) attributes the claim to the J Exp Zool paper, not to the QRB review. Whether
  the QRB review also carries it is unread, so this is a could-not-read, not a misattribution.
- Net effect: the salamander precedent is per-organ, which strengthens rather than weakens
  the finding that no non-human whole-body cell count-and-size census exists. A dedicated
  sweep (6 searches) found none, and the subject-only reader found none in 5 more.

## UQ-52 — Rejected stands; the routing row is withdrawn

- **P1 is JCB 224(2):e202409007**, Gameiro, Juarez-Nunez, Fung, Shankar, Luke & Khmelinskii,
  "Genome-wide conditional degron libraries for functional genomics" — confirmed a research
  article from the publisher page, not a commentary. **P2 is JCB 224(2):e202409050**, Valenti
  et al. (Rehling and Schuldiner labs), "A proteome-wide yeast degron collection for the
  dynamic study of protein function", 5,170 arrayed strains.
- **The 55% and 38% figures are real and are NOT complements.** "fitness defects were
  observed for over 55% of essential ORFs (499 out of 906)" has as denominator all 906
  essential ORFs in the OsTIR1+ screen, at a threshold of size ratio < 0.8 with p < 0.05.
  The "38%" (and its "over 61%" partner) is of essential proteins judged DEGRADED, a
  different and smaller denominator; the paper gives no count behind either, and the
  denominator identification is the reader's inference. So the entry's "38-45%" band is
  sound only because it spans two denominators, which it must now say.
- **Both papers' comparator is the YKO gene-deletion collection** (Winzeler 1999, Giaever
  2002, with Despres 2020), not a CRISPR screen.
- **P2's 69% cannot be reconstructed from the paper.** The phrase is real, at relative growth
  < 0.5, but Methods give two different YKO essential-gene denominators (560 in one place,
  650 in another) and no counts. The "11 of 281" is real at a < 10% threshold, but the paper
  states no percentage, names no pool for the 281, and describes the 11 as candidates not
  identified as essential in the YKO — five of which have low-throughput literature support.
  "Newly essential" overstates it.
- **ROUTING ROW WITHDRAWN.** The row claimed the protein-half-life limb is "posed inside the
  near-duplicate itself and left untested there". A dedicated reader of both papers' full
  text found **neither raises protein half-life, stability or turnover as an explanation for
  the essential-gene discordance**. P2 estimates half-lives by one-phase decay fits for some
  proteins and offers longer half-lives as an untested explanation for the milder depletion
  of mitochondrial proteins — a different phenomenon. What both papers do raise is incomplete
  degradation and residual protein. Under the routing test a quantity nobody posed is not an
  asked-but-open problem, so no row is appended.
- Against the candidate and for it at once: P1 reports that protein levels did not differ
  between essential proteins with and without a fitness defect, which cuts against residual
  protein as the cause. The explanation for the discordance is therefore genuinely open — but
  un-asked rather than asked, and the candidate leads with the headline rate that is answered.

## UQ-53 — Rejected to Provisional, on a late Gate 4

Three adversaries ran in the batch. Two returned Provisional with Disguise Resolved; the
third returned Rejected with Disguise and Presupposition failure Unresolved. Both of that
third adversary's fatal grounds had two legs, and verification broke one leg of each.

- **Wang, Lindsay et al. 2005 estimates unobserved GENES, not isoforms.** Its real title is
  "Gene capture prediction and overlap estimation in EST sequencing from one or multiple
  libraries" (BMC Bioinformatics 6:300). The zero class it estimates is the number of genes
  with no EST in the library; the "35%-40%" bias and the 12030-vs-9155 and 12085-vs-9492
  before-and-after figures are estimates of GENE number, and the "ISO" in "ISO error
  correction" stands for insufficient overlap, a clustering error, not isoform. Two readers
  disagree on one point: the fuller read (BMC HTML plus Springer PDF) found splicing treated
  as a bias source inflating gene counts and quotes a sentence to that effect; a second,
  partial read found splicing not treated at all. The fuller read is preferred and the
  disagreement is recorded rather than resolved.
- **Houseley & Tollervey 2010 (PLoS ONE 5(8):e12271) does not support the donor leg.** Every
  quoted phrase is in it, but reproducibility was tested only across repeated RT reactions,
  enzymes, temperatures and priming on the SAME in vitro purified substrates — not across
  independent RNA preparations, donors or individuals. No template-switching rate is
  quantified. The third adversary had labelled the donor extension as its own inference; it
  is unsourced, so under the ENVIRONMENT rule that ground is Partial at best, never Unresolved.
- **Melamud & Moult 2009 (NAR 37(14):4873)**, two readers: an error-rate and observed-count
  noise model with simulated EST sampling, estimating per-gene error rates of 1-10%. In the
  parts both could open it estimates no count of unobserved isoform classes and names no
  richness estimator. One reader did not reach the Discussion, so that absence is over the
  parts read.
- **Pickrell et al. 2010 (PLoS Genet 6(12):e1001236)**, read in full: every quoted phrase and
  figure is in it, the depth analysis is **graphical only** with no model fitted and no
  extrapolation, no richness or capture-recapture estimator is used, and RT artefacts are not
  discussed. So Pickrell poses the direction and not the asymptote.
- **Chiu & Chao 2016 carries someone else's title.** PeerJ 4:e1634 is "Estimating and
  comparing microbial diversity in the presence of sequencing errors"; the title it was cited
  under, "Species richness estimation with high diversity but spurious singletons", is
  Willis, arXiv:1604.02598. Both papers are real. Chiu & Chao replaces the observed singleton
  count with a nonparametric estimate from f2-f4 and feeds an adjusted Chao1; its worked data
  are viral metagenome contig spectra, and transcripts, isoforms, RNA-seq and cDNA do not
  appear in it.
- **The record's own two nearest priors hold.** bioRxiv 10.1101/2025.07.02.662769 is
  Schertzer, Park, Su, Reese, Sheynkman & Knowles, "Perplexity as a Metric for Isoform
  Diversity in the Human Transcriptome", 124 ENCODE4 PacBio datasets, per-gene D0 (observed
  isoform count) and D1 (perplexity, Hill q=1), with no Chao1, Good-Turing or extrapolation.
  Genome Research 35(4):583 is a Perspective by Monzo, Frankish & Conesa: conceptual, with no
  estimate of undiscovered isoforms, though it says qualitatively that capture grows with depth.
- **Four fresh literature sweeps found no instance of the candidate's own estimand**: no
  per-gene unobserved-isoform estimate by any richness estimator on long-read data, none at
  any unit, none combined with a false-positive term calibrated from spike-ins or technical
  replicates, and no paper posing whether per-gene isoform number has a finite asymptote.
  Each is NOT FOUND on a bounded search, not an exclusion.
- **Late Gate 4 form, disclosed:** the enumerated eight-attack adversary brief is unusable in
  this environment, so the gaps were asked as four neutral literature questions, one agent
  each, and two cold judges were given the Gate 0-3 record, the established facts above, all
  the answers, and the prior grade declared void. Both returned **Provisional independently,
  with no Unresolved attack**. Judge 1: Resolved on Triviality and Combinatorial novelty,
  Partial on the other six. Judge 2: Resolved on Triviality, Combinatorial novelty, Vagueness
  and Dissolution, Partial on Disguise, Presupposition failure, Significance inflation and
  Reason for silence. Neither found a key kill; judge 2 recorded "None".
- **A defect in the judges' brief, disclosed:** it quoted the record's Well-posedness 3/3
  rather than the entry's Gate 5 regrade to 2/3. The error could only have made the judges
  more lenient, and they still returned Provisional with both fatal attacks Partial, so the
  outcome does not turn on it. The regrade itself survives on its other limbs, but its first
  limb rested on the same unsourced donor-reproducibility inference and is withdrawn.

## UQ-54 — Rejected to Provisional, with no late Gate 4 needed

All three batch adversaries returned Provisional with no Unresolved attack. The rejection was
the Gate 5 judge's own Gate 2 downgrade from Medium to Low, resting on two priors. Both were
opened, and neither performs the comparison the candidate asks for.

- **The metalation calculators (bioRxiv 2022.05.06.490408) only PREDICT.** The paper combines
  in vitro dissociation constants with intracellular available metal concentrations to predict
  fractional occupancy, and discusses agreement with the literature case by case. It reports
  **no independently measured in-cell protein occupancy** anywhere. A prior that predicts a
  quantity without ever measuring it is not a disguised known for a question about the gap
  between prediction and measurement.
- **The in-cell NMR paper (Acta Cryst D 2021) lacks the free-ligand term and the cross-complex
  comparison.** It is one protein (carbonic anhydrase II) with four sulfonamide ligands in HEK
  293T cells. Every quoted affinity figure exists in Table 3 in nM, but the MZA in-cell value
  is not an independent measurement, intracellular free ligand is **held known by design
  rather than measured in situ**, and the paper's conclusion is that in-cell Kd is similar to
  in vitro.
- So novelty is restored to **Medium with close neighbours**, which is Gate 5's Provisional
  case outright, and Well-posedness 2/3 bars Validated independently. Gate 4 ran properly in
  the batch with three adversaries and no Unresolved attack, so no late Gate 4 is required
  here: what fell was the judge's Gate 2 ground, not an adversary's.
- **The absence limb remains weak and is recorded as such.** Two sweeps for a cryo-ET state
  census compared against a mass-action prediction returned NOT FOUND, but between them they
  opened only two papers and their searches returned titles without snippets; Xue et al. 2022
  (Nature) and the visual-proteomics reviews are COULD NOT READ. Two in-cell ribosome studies
  were confirmed to publish state fractions with no thermodynamic comparison.

## UQ-55 — Provisional unchanged; three promotion items moved

- **Park et al. 2024 (Front Sustain Food Syst 8:1399801) confirmed**: a genuine 2x2 crossing
  temperature (37 and 39 C) with oxygen (20% and 2%), interaction terms reported, endpoints
  proliferation and differentiation markers only, **no in vivo reference profile** so no
  distance to in vivo can be computed, and the animal's stated in vivo 38.5 C never tested as
  an arm. The Gate 2 negative it falsifies was about the factorial existing, not the estimand.
- **Gregg et al. 2023 (Front Physiol 14:1288809) confirmed**: the measured donor tissue
  temperature of 41.14 +/- 0.08 C is real, and the paper makes **no comparison to an in vivo
  reference profile and computes no fraction of an in-vitro-to-in-vivo gap**.
- **PRIOR C is a completed review, not only a protocol.** Cochrane CD012192.pub2 was published
  17 September 2019 and reports results; the 2016 protocol sits at the DOI the record used.
  Read through a summariser only, so paraphrased.
- **The Twente chondrocyte thesis is still COULD NOT READ, now with its routes logged** so a
  later pass does not repeat them: exact-title search (URL only), keyword search, extended
  search, exact-phrase-plus-years search, purl.utwente.nl/essays/85570 (302 to the repository
  home page), https://essay.utwente.nl/essays/85570 and http://essay.utwente.nl/85570/ (both
  JavaScript-only shells with no metadata), and core.ac.uk. Its title is "The Influence of
  Hydrogel, Temperature, Oxygen, and Cytokines on Human Chondrocytes using in vitro
  Culture-Based Models"; author, year and programme are not established.
