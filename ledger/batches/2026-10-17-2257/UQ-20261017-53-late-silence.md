# UQ-20261017-53 working notes (unseen-class estimation, genes vs isoforms)

Budget used: 7 searches, 6 fetches (two fetches ended at redirect notices without content: PMC2220008 and doi.org/10.1038/nmeth.2375).

## Read levels
- Wang & Lindsay-line paper, BMC Bioinformatics 2005 6:300 ("Gene capture prediction and overlap estimation in EST sequencing from one or multiple libraries"): Springer page, partial full text (abstract, background, model, start of simulations; Methods, simulation results, discussion, reference list NOT read). Authors/title come from search result titles, not from the page text.
- Garcia-Ortega & Martinez, PLoS ONE 2015 (PMC4479379): summariser output of the article page (abstract plus some body). Not verbatim-checked beyond one quoted sentence.
- preseq 3.2.0 manual (gensoft.pasteur.fr PDF): summariser output; PDF.
- Kim et al., Nature Genetics 36:915-916 (2004): summariser output of the letter page, short.
- Daley & Smith 2013 Nat Methods: SEARCH SNIPPETS / title only. Not opened.
- Lijoi/Mena/Prunster Bayesian EST paper (PMC2220008): COULD NOT READ (PMC blocked/redirect). Title only seen in search.

## Q1 splice isoforms vs genes in Wang/Lindsay EST literature: NOT FOUND
Searches run (7): (1) Wang Lindsay unseen genes EST cDNA zero-class; (2) unobserved splice isoforms EST species richness; (3) preseqR Daley Smith; (4) undetected isoforms RNA-seq species richness Chao Good-Toulmin; (5) Wang Lindsay alternative splicing splice variants inflate genes; (6) Daley Smith 2013 abstract; (7) species richness estimator applied to isoforms. None returned a paper that estimates unseen isoforms. Read one Wang-Lindsay-line paper in part. Absence is from search plus one partial read, not exhaustive.
Adjacent but not the same: Kim et al. 2004 Nat Genet estimates splice variants per gene from ESTs by adapting an Ewing & Green gene-counting method (their aim: "provide an alternative estimate for the number of splice variants per gene"). That is rate per gene, not an unseen-class (zero-class) estimate, per the summary I read.

## Q2 treatment of alternative splicing
BMC Bioinf 2005 6:300: per summariser, no discussion of alternative splicing; "splicing detection" appears only in a list of EST applications and one reference title ("Genome-wide detection of alternative splicing"). Model counts genes (Poisson count per gene, abundance distribution Q by NPMLE, N = D / q1hat). So splicing is neither counted nor treated as a named nuisance there. (A nuisance reading is not supported by any quote I found.)
Closest explicit statement is in the later RNA-seq paper (Garcia-Ortega & Martinez 2015): "some studies take different splicing variants of transcripts derived from the same locus as different 'genes'" (summariser quote, single fragment); they say "undetected classes" would be more precise but keep "undetected genes". Here the gene/isoform unit is a definitional ambiguity.

## Q3 modern successor literature
- Daley & Smith, Nat Methods 2013 (10:325): title "Predicting the molecular complexity of sequencing libraries"; not opened, so unit is from title and the preseq manual only: distinct molecules/reads.
- preseq manual: lc_extrap predicts distinct reads (UMI = mapping location of first mate, or sequence prefix); gc_extrap covered bases; bound_pop species richness "total number of species or classes". RNA-seq section treats distinct splice junctions as units. Manual does not claim isoform/transcript counting.
- preseqR: only seen in CRAN index titles ("Predicting Species Accumulation Curves"); not opened. Unit not verified.
- Garcia-Ortega & Martinez 2015 PLoS ONE: counts GENES (tags mapped to genes; sample size = total tags); 32 experiments, 311 libraries; about 6% undetected on average, about 10% for individual libraries (summariser figures; unit = share of expressed genes; not checked against tables).
Answer: successor literature counts reads/molecules (preseq), covered bases, junctions, or genes (G-O&M). Not transcripts/isoforms.

## Q4 gene-to-isoform transition in print with statistical complications named: NOT FOUND
Same 7 searches; the last two aimed directly at it and surfaced only G-O&M 2015 (gene unit, flags the definitional issue in one sentence) and generic isoform-abundance papers. Not read: Daley & Smith full text, preseqR docs, Lijoi et al., any HAL/Semantic Scholar copies. Statistical complications specific to isoforms (shared reads across isoforms, ambiguous assignment, abundance nested within gene) were not found named in any page I opened.

## Caveats
Summariser output throughout; quotes are single fragments. Numbers (9155 root, 12005 silique; 6%, 10%) exist in the summarised text but I did not see tables.
