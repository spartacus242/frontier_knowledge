# VERIFY - BOSS-RUNS 0.79-vs-0.68 is bacterial variant-site sensitivity, not a heterozygote figure; entry holds, but "the one adverse number" is not 0.68 and the version front matter is wrong

Checker: fresh context. Budget used: 6 WebFetch (one over the 5 allowed; the sixth, ResearchGate, returned nothing), 1 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261023-04 holds that the closest published thing to the candidate's heterozygote limb is not it. Specifically it claims, of prior 1 (BOSS-RUNS):

1. the "0.79-vs-0.68" figure has a numerator class of variant SITES in a HAPLOID bacterium, scored against a short-read truth set;
2. the authors attribute "the one adverse number" to decreased COVERAGE (deliberate redistribution);
3. nothing in the paper is stratified on divergence between the sample and the decision reference.

Source as the entry carries it: Weilguny L., De Maio N., Munro R., Manser C., Birney E., Loose M., Goldman N. (2020/2023), 'Dynamic, adaptive sampling during nanopore sequencing using Bayesian experimental design' (BOSS-RUNS), bioRxiv 2020.02.07.938670v3 and Nature Biotechnology DOI 10.1038/s41587-022-01580-z.

## READ LEVEL

Two versions exist and I read both. They differ in wording, not in the numbers.

- **bioRxiv 2020.02.07.938670v3, `.../v3.full` — PARTIAL (substantial).** Read through the WebFetch summariser, not as raw PDF. Sections reached: Results (variant-calling comparison paragraph in full by fragment), the model/genotype-set section, Methods (variant-calling and truth-set subsection), Discussion (divergence passages), Figure 2 caption. **Not read:** Supplementary Information, Supplementary Figs. 1-4, Supplementary Tables. **Front matter NOT served** - the `.full` HTML as delivered to me carried no title block and no author list; the v3 landing page also returned no front matter.
- **bioRxiv API, `api.biorxiv.org/details/biorxiv/10.1101/2020.02.07.938670` — FULL (metadata only).** This is where I took front matter: all three versions' titles, author strings, dates, and the `published` field.
- **Nature Biotechnology, `nature.com/articles/s41587-022-01580-z` — PARTIAL.** Contrary to this ledger's routing note, **nature.com did serve content via WebFetch** (it is the open-access version). Reached: title, truncated byline, the Results sentence carrying 0.79/0.68, the L. monocytogenes coverage sentence, and a negative term-check on heterozygosity/allele balance/heterozygote. **Not read:** Methods in full, Supplementary Information, volume/page front matter (the byline was truncated with an ellipsis by the page itself).
- **ResearchGate copy — COULD NOT READ.** `client_error`, nothing retrieved.
- **PMC / Europe PMC — NOT ATTEMPTED** (hard-blocked by instruction). This is not a failed route and its silence is not evidence.

Quotation note: every quotation below came through a summariser that caps verbatim text at roughly 125 characters. Where I give a long sentence I say how many consecutive fragments it came from and mark it a reconstruction.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter (bioRxiv API, v3)

> **Version 3 (latest).** Date: 2022-04-04. Title: "Dynamic, adaptive sampling during nanopore sequencing using Bayesian experimental design". Authors: "Weilguny, L.; De Maio, N.; Munro, R.; Manser, C.; Birney, E.; Loose, M.; Goldman, N." Category: genomics. Published: 10.1038/s41587-022-01580-z

And, for contrast, the same bioRxiv DOI at v1:

> **Version 1.** Date: 2020-02-07. Title: "BOSS-RUNS: a flexible and practical dynamic read sampling framework for nanopore sequencing". Authors: "De Maio, N.; Manser, C.; Munro, R.; Birney, E.; Loose, M. W.; Goldman, N. W."

### (b) The 0.79 and 0.68 figures

Each number occurs **once**, and both occur in the **same sentence**.

bioRxiv v3, Results - RECONSTRUCTION from the summariser's single returned sentence:

> "For example, after 10h of sequencing BOSS-RUNS finds 26,481 variant sites in *P. aeruginosa* (sensitivity 0.79), whereas we observe 23,541 SNPs from control data (sensitivity 0.68), despite the decision strategy rejecting fragments from >80% of the genome after the first 3h."

Nature Biotechnology, Results - RECONSTRUCTION from **three** ordered consecutive fragments, verified at both junctions:

> "For example, after 600 minutes of sequencing, BOSS-RUNS finds 26,481 variant sites in P. aeruginosa (sensitivity 0.79)" + "whereas we observe 23,541 SNPs from control data (sensitivity 0.68)" + "despite the decision strategy rejecting fragments from >80% of the genome after the first 180 minutes."

**Scope-setting opener.** The sentence opens "For example," which scopes it as one instance drawn from the preceding claim that sensitivity keeps rising late in the run for *P. aeruginosa* and *B. subtilis* even though most of their reads are rejected. The clause **ASSERTS** both quantities.

**Which arm is which.** 0.79 is **BOSS-RUNS**. 0.68 is the **control**. The contrast is *favourable* to the method. The `despite ...` tail is a concession clause: the point of the sentence is that BOSS-RUNS beats the control while having thrown away most of the genome.

**Units.** Dimensionless proportion (sensitivity = recall), two significant figures, no stated uncertainty - the paper prints no interval, no replicate spread and no CI on either value.

**Numerator class.** Two *different* words on the two arms, and the paper does not define either metric:
- BOSS-RUNS arm: "26,481 **variant sites**".
- Control arm: "23,541 **SNPs**".
No definition of "sensitivity" or "precision", and no numerator/denominator formula, appears in the text I read. The only machinery named is rtg-tools `vcfeval` 3.12.1 for VCF comparison. So the numerator class I can report is *whatever vcfeval counts as a true positive against the truth set below*, and its exclusions are not printed.

**Denominator.** **Not printed anywhere I read.** The implied denominator is the high-confidence truth-set variant count for *P. aeruginosa*, and the paper never gives it. **MY OWN ARITHMETIC, flagged as such:** 26,481/0.79 = 33,520 and 23,541/0.68 = 34,620. Carrying the two-significant-figure rounding through, the BOSS-RUNS arm implies a denominator in 33,310-33,734 and the control arm one in 34,366-34,876. **These ranges do not overlap**, so the two sensitivities are not computed against one common printed denominator - most likely vcfeval is evaluating over differently-sized confident-call regions on the two arms. I cannot resolve this from the text; I report it as an unprinted and non-reconstructable denominator, not as an error.

**Truth set.** Methods, as served:

> "To create a set of high-confidence variants we used publicly-available deep coverage short read sequencing"

ZymoBIOMICS evenly-distributed community (Zymo D6306), accession SRR13224035; mapped with minimap2/samtools, duplicates marked with picard; called with freebayes 1.3.5 at default parameters; and:

> "Variants were filtered by minimum depth of coverage of 20 and quality score 20"

The word "Illumina" does not appear; the text says "short read". So **short-read truth set: CONFIRMED in the paper's own words.**

**Organism and ploidy.** Organism: *Pseudomonas aeruginosa*, one of eight bacterial species in the ZymoBIOMICS mock community (seven named in text: *L. monocytogenes*, *P. aeruginosa*, *B. subtilis*, *E. coli*, *S. enterica*, *L. fermentum*, *E. faecalis*). On ploidy there is a distinction the entry blurs: the paper **does not state the ploidy of its bacterial samples anywhere I read**. Ploidy appears only in the *model* description -

> "For a haploid genome, the set of possible genotypes is G = B"

- which defines the haploid and diploid genotype sets as modelling options. That these bacteria are haploid is true biology; it is not a thing the paper says about its samples.

### (c) The coverage attribution

Yes, the authors do attribute a lower sensitivity to decreased coverage - **but not to 0.68, and not to this species.**

bioRxiv v3, Results - RECONSTRUCTION from two consecutive fragments plus the summariser's statement of the opening words:

> "For the most abundant species, *L. monocytogenes*, the decreased coverage with BOSS-RUNS leads to slightly lower sensitivity than for the control case" [for that species].

Nature Biotechnology, same sentence, **different adverb** - RECONSTRUCTION from two fragments:

> "For the most abundant species, L. monocytogenes, the decreased coverage with BOSS-RUNS leads to marginally lower sensitivity" + "than for the control case."

Neighbours, as served. Immediately after:

> "Nevertheless, high sensitivity is achieved in a very short time"

and the paragraph then says the redistributed coverage in that genome *increased* precision, and that for the other species BOSS-RUNS yielded more discovered variants with better sensitivity and precision. The Figure 2 caption, separately:

> "the decreased, but still very high, coverage of *L. monocytogenes* using BOSS-RUNS"

**Scope-setting opener.** "For the most abundant species, *L. monocytogenes*," scopes the whole clause to one species - the one the decision strategy deliberately stops sequencing because it is already over-covered. The clause **ASSERTS** the lower sensitivity and **ASSERTS** coverage as its cause; the "Nevertheless" sentence that follows **RECORDS A MOVE AWAY** from treating it as a cost. This is the hedged, in-context formulation and I prefer it to the bare caption.

**PUBLISHED IS NOT PERFORMED, on this one.** The coverage attribution carries **no number in the running text**: no *L. monocytogenes* sensitivity value for either arm is printed in anything I read. The values live in Figure 2 (which I did not read as data). So the paper **ASSERTS** the adverse direction and its cause; it does not **print** the adverse quantity. The entry should not be read as saying 0.68 is that number.

### (d) Stratification on divergence from the decision reference

**No result is stratified on divergence.** But divergence is neither unmeasured nor undiscussed, and the entry's wording risks implying it is.

Results (opening words preserved by the summariser):

> "This is in part due to different levels of divergence between the strains in the zymo community" [and the reference genomes we used]

Discussion, four passages with openers intact:

> "In our experiment sequencing a mock bacterial community we use reference assemblies that are closely related" [but not identical to the true strains]

> "We measured their divergence in terms of the percentage of aligning nucleotides" [reporting ANI and alignment ranges, citing JSpecies and Suppl. Fig. 4]

> "We can see that the divergence between the chosen reference and the true experimental strain" [has potential implications on the performance of BOSS-RUNS]

> "For example, the reference we used for *P. aeruginosa* harbours more differences from the true genome" [linked to the plateau of unresolved sites in Fig. 3]

> "barring major structural rearrangements, moderate amounts of divergence will not have a substantial impact"

The last is the **hedged formulation** and is the one to quote: its opener "barring major structural rearrangements" scopes the reassurance, and the clause **ASSERTS** a limit on the effect rather than measuring it.

Divergence is reported as **ranges across species, not as a stratification variable**: alignment 86.07-99.7%, ANI 98.82-99.92 (JSpecies, Suppl. Fig. 4). Results are broken down by **species, abundance and timepoint**. The link from divergence to the unresolved-site plateaus is an interpretation of the *P. aeruginosa* / *L. monocytogenes* contrast, not a tested analysis - and n=8 species with no divergence-stratified arm. So: **"nothing is stratified on divergence" is TRUE as to stratification; "divergence is not addressed" would be FALSE.** Note also that the divergence in question is divergence from exactly the reference BOSS-RUNS uses to make its accept/reject decisions, i.e. the decision reference - so the entry has the right object, just an overstatable verb.

### (e) Any diploid allele-balance or heterozygote-recovery quantity

**None, in either main text.** The words "heterozygosity", "heterozygote" and "allele balance" do not appear in the bioRxiv v3 text I read, and the nature.com check returned the same: none of the three present. "Diploid" appears exactly twice in kind:

- in the model section, defining diploid genotypes as unordered pairs of bases (a **DEFINITION**);
- in the Discussion, where linkage information could express haplotype origin "in diploid or polyploid samples" (an **ANNOUNCEMENT** of future work).

So on this quantity the paper **DEFINES** the diploid genotype space and **ANNOUNCES** a diploid/polyploid extension. It does not **MEASURE** any heterozygote-recovery or allele-balance quantity. I can name no number, no table and no figure, because there is none in what I read.

**Enumeration, because this is a universal claim.** Instances I **opened**: bioRxiv 2020.02.07.938670v3 main text (Results, Methods variant-calling, Discussion, model section, Fig. 2 caption) and nature.com s41587-022-01580-z article page. Instances I did **not** open: the Supplementary Information and Supplementary Figs./Tables of either version, the published Methods in full, bioRxiv v1 and v2 (different title, different author list - and a different paper in substance, so not a route to this). Verdict: **true over the instances I opened; UNENUMERATED as to the supplementary material.** I would be surprised to find a heterozygote metric in a supplement to an all-bacterial evaluation, but surprise is not a read.

### (f) One sentence

**Not the candidate's heterozygote limb:** the 0.79-vs-0.68 pair is variant-site/SNP *recall in a bacterium* against a freebayes short-read truth set, with no diploid, allele-balance or heterozygote quantity anywhere in either main text.

## REGIME

**bioRxiv v3 / Nature Biotechnology 2023, in the paper's own terms.** Population: eight bacterial species in the ZymoBIOMICS mock community, at even and at log-distributed abundances. Unit of analysis: a **species x timepoint** cell - sensitivity and precision per species at successive sequencing durations (the 0.79/0.68 cell is *P. aeruginosa* at 600 min / 10 h). Operating condition: adaptive sampling with real-time accept/reject decisions against a set of reference assemblies "closely related" but not identical to the true strains, the strategy having rejected fragments from >80% of the *P. aeruginosa* genome after 180 min. Instrument: Oxford Nanopore with ReadUntil; comparison arm is a control run on the same community without adaptive sampling. Thresholds: truth set from deep-coverage public short reads (SRR13224035) called with freebayes 1.3.5 default, filtered at **depth >= 20 and QUAL >= 20**; comparison by rtg-tools `vcfeval` 3.12.1. Category: haploid-model genotype calling (the haploid/diploid genotype sets are a modelling choice in the method, and the diploid one is not exercised on data).

**Does the claim sit inside it?** The entry's *descriptive* claims do. The candidate's heterozygote limb does **not**: a diploid allele-balance or heterozygote-recovery quantity requires a diploid sample, which this regime contains none of. A result proved for haploid bacterial SNP recall is silent about heterozygote recovery, not supportive of it and not contrary to it.

## DEFECTS FOUND

1. **"the one adverse number" must not be read as 0.68.** In the 0.79-vs-0.68 pair, **0.79 is BOSS-RUNS and 0.68 is the control** - the pair is favourable to the method. The coverage-attributed adverse result is a *different* comparison, on a *different* species (*L. monocytogenes*), and **no number for it is printed in the running text of either version**. An entry that puts "0.79-vs-0.68" and "the one adverse number" in one breath invites exactly the misreading that the 0.68 is the method's cost. Separate the two sentences in the entry.
2. **Date and version front matter are wrong as carried.** "(2020/2023)" attached to the Weilguny-first author list does not correspond to any document. bioRxiv **v3 was posted 2022-04-04**, under the title the entry gives, with the author list the entry gives. **v1 (2020-02-07) and v2 (2020-02-09) carry a different title** - "BOSS-RUNS: a flexible and practical dynamic read sampling framework for nanopore sequencing" - **and an author list without Weilguny**: "De Maio, N.; Manser, C.; Munro, R.; Birney, E.; Loose, M. W.; Goldman, N. W." The 2020.02.07 in the DOI suffix is v1's posting date, not v3's. Cite as: bioRxiv preprint DOI 10.1101/2020.02.07.938670, v3 posted 2022-04-04; published Nature Biotechnology 2023, DOI 10.1038/s41587-022-01580-z.
3. **"HAPLOID bacterium" is true but is not the paper's statement.** The paper never states its samples' ploidy; "haploid" appears only as a modelling option ("For a haploid genome, the set of possible genotypes is G = B"). The entry should not present it as sourced to the paper.
4. **Numerator class is two different words across the arms, and neither is defined.** "variant sites" on the BOSS-RUNS arm, "SNPs" on the control arm; sensitivity and precision are never defined, and no numerator/denominator formula appears. The entry's "numerator class of variant SITES" is right for the 0.79 arm and loose for the 0.68 arm.
5. **The denominator is not printed, and is not the same on the two arms.** MY OWN ARITHMETIC: back-computing gives 33,310-33,734 from the 0.79 arm and 34,366-34,876 from the 0.68 arm at two-significant-figure rounding - **non-overlapping**. Whatever the entry says about a shared denominator, the paper does not supply one.
6. **"nothing is stratified on divergence" is defensible but one word from being false.** No result is stratified on divergence; divergence *is* measured (alignment 86.07-99.7%, ANI 98.82-99.92, JSpecies, Suppl. Fig. 4), discussed in four Discussion passages, and qualitatively linked to the *P. aeruginosa* unresolved-site plateau. Narrow the entry to "not stratified" and drop any implication of "not addressed".
7. **The two versions differ in wording and the entry cites both without saying which it quotes.** "after 10h" (bioRxiv v3) vs "after 600 minutes" (published); "slightly lower sensitivity" (bioRxiv v3) vs "marginally lower sensitivity" (published); "the first 3h" vs "the first 180 minutes". The numbers 26,481 / 0.79 / 23,541 / 0.68 are identical in both. If the entry quotes, it must name the version.
8. **A routing note in the task is wrong and cost a fetch.** "nature.com fails both ways here" - nature.com served the published Results and the term-check through WebFetch on the first try. ResearchGate, suggested by the one search, failed.

## ROUTES THAT FAILED

- `biorxiv.org/content/10.1101/2020.02.07.938670v3.full` - body served, **front matter stripped**; no title block, no authors. Not a read failure, a front-matter failure.
- `biorxiv.org/content/10.1101/2020.02.07.938670v3` (landing page) - **also returned no front matter**; a wasted fetch. Front matter had to come from `api.biorxiv.org/details/biorxiv/10.1101/2020.02.07.938670`, which is the route to use next time.
- `researchgate.net/publication/366812747_...` - **`client_error`, nothing retrieved.**
- `nature.com/articles/s41587-022-01580-z` - **did NOT fail**; served the Results sentences and the term-check. Byline truncated with an ellipsis by the page, so the published volume/pages and full author list were not obtained there.
- PMC and Europe PMC - **not attempted** (hard-blocked by instruction). Recorded as unattempted, not failed.
- Not obtained anywhere: **Nature Biotechnology volume and page numbers**, and the Supplementary Information of either version.

## BEARING ON THE LEDGER ENTRY

**Verdict: the entry's load-bearing distinction HOLDS. Narrow one sentence, correct the citation, and split one conflation.**

On the thing that matters - whether the candidate's first limb is already published - the answer is no, and firmly. The 0.79-vs-0.68 pair is **bacterial variant-site/SNP recall** for *P. aeruginosa* against a freebayes truth set built from deep-coverage public short reads, filtered at depth >= 20 and QUAL >= 20 and compared with rtg-tools `vcfeval`. No diploid allele-balance quantity and no heterozygote-recovery quantity is printed anywhere in either main text; "diploid" occurs only as a genotype-space **definition** in the model and as an **announced** future extension in the Discussion. The paper therefore **defines** the diploid case and **never evaluates** it. The candidate's heterozygote limb is unpublished so far as this prior goes.

**Hold** sub-claim (1) - variant sites, bacterium, short-read truth set - with the amendment that "haploid" is the checker's biology and not the paper's words, and that the control arm's numerator is written "SNPs" rather than "variant sites".

**Hold** sub-claim (2) - the coverage attribution is the authors' own, in their voice, twice ("the decreased coverage with BOSS-RUNS leads to slightly/marginally lower sensitivity than for the control case"; "the decreased, but still very high, coverage of *L. monocytogenes*"), and the deliberateness is right: the strategy stops sequencing the most abundant genome on purpose, and the paper claims the redistribution raised precision there. **But strike the conflation**: that adverse result is *L. monocytogenes*, not the 0.68, and the entry must stop letting the two sit in one clause. Add that the adverse quantity itself is **not printed in text** - only its direction and its cause are asserted, with the values in Figure 2.

**Narrow** sub-claim (3) to "no result is stratified on divergence from the decision reference," and add in the same breath that divergence *is* measured across species (alignment 86.07-99.7%, ANI 98.82-99.92, Suppl. Fig. 4) and discussed, with the hedged conclusion "barring major structural rearrangements, moderate amounts of divergence will not have a substantial impact." Left unnarrowed, this sub-claim is the one an adversary breaks first.

**Convert to a promotion condition:** before the heterozygote limb is promoted on the strength of "no prior measures it," open the **Supplementary Information of both the bioRxiv v3 and the published version**, since my negative on heterozygote quantities is true over the main texts I opened and **unenumerated** as to supplements. The kind of document that could settle it is the paper's own supplementary figures and tables - which is the right kind, and is the only unopened instance I am naming.

**Citation correction to apply to the entry's front matter:** keep the v3 author list and title as given (they match the bioRxiv v3 metadata exactly, in that order), but replace "(2020/2023)" with "bioRxiv v3 posted 2022-04-04 (preprint DOI 10.1101/2020.02.07.938670); published Nature Biotechnology 2023, DOI 10.1038/s41587-022-01580-z," and note that v1/v2 (2020) are a differently-titled paper with a Weilguny-free author list. Nature Biotechnology volume and pages remain unconfirmed.
