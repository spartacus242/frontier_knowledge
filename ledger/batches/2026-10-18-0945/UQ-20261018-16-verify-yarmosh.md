# UQ-20261018-16 — Source read: Yarmosh et al. + the 2021 ATCC poster

Reader: source-reader subagent. Date: 2026-10-18.
Brief: establish what the documents actually say, at first hand. Not judging a candidate question.

## READ LEVEL (declared per document, rule 2)

**(A) Published journal version — mSphere 7(3), DOI 10.1128/msphere.00077-22: FULL TEXT (via summariser).**
Read via WebFetch against `https://journals.asm.org/doi/10.1128/msphere.00077-22` in three passes
(front matter + Results variant passage; Discussion/Methods; Variants subsection + subsection headings).
Coverage confirmed by the summariser: Abstract, Importance, all four Results subsections, Discussion,
Materials and Methods. **NOT read:** figures, tables, and supplementary material (Table S5, Fig. S4 are
named in the text but their contents were not reachable). No raw/unmediated text was obtainable — see
FAILED ROUTES. The summariser truncates quotations near 125 characters and on one pass explicitly
*refused* to reproduce the Variants subsection verbatim and returned a paraphrase instead; every
quotation below is flagged accordingly.

**(B) bioRxiv preprint — 10.1101/2021.12.14.472616: PARTIAL (via summariser).**
Body text was returned (RefSeq survey, overlap counts, variant medians and ranges). **Front matter was
NOT captured at all** — the summariser reported "no title on a first page", no author line, no labelled
abstract, and no posting date. So the preprint was *not* usable for the author-line check (rule 4).

**(C) 2021 ATCC poster: landing page = ABSTRACT ONLY; poster content = FULL TEXT (via summariser).**
Landing page `www.atcc.org/resources/posters/2021-posters/the-elephant-in-the-room-...` gave the event,
presenter and abstract. The poster's own content was then read at
`https://delivery-files.atcc.org/api/public/content/256032-The-Elephant-in-the-Room--Microbial-Reference-Genome-Authentication-and-Traceability`,
which returned the poster's printed author line, body text, figure captions and Table 1 counts.
**NOT read:** the numeric values plotted inside Figure 2's panels (captions only — no values printed),
and the Figure 3 bar labels could not be reliably paired with their categories by the summariser.
The summariser also noted the capture contained no meeting name or date (those come from the landing page).

## BUDGET AND SELF-REPORTED ERRORS (rule 12)

- Web searches used: **5** of 7.
- Fetches used: **7** of 7 — **budget exactly exhausted.**
- **Consequence I must declare:** the dedicated single-string re-check of the poster's
  "Of the 100 strains evaluated, 35 ..." sentence (rule 5) **did not run**, because the fetch budget was
  spent. See Q8 for exactly what that leaves unverified.
- No call was refused by the permission system. Two curl routes were refused by the egress proxy; they
  are logged below and were not reworked (rule 10).

## FAILED ROUTES, with exact error text (rule 10)

1. `curl -sS -L https://www.biorxiv.org/content/10.1101/2021.12.14.472616.full.pdf`
   → `curl: (56) CONNECT tunnel failed, response 403` ; `HTTP:000 SIZE:0`
2. `curl -sS https://api.crossref.org/works?query.bibliographic=...&rows=3&select=...`
   → `curl: (56) CONNECT tunnel failed, response 403` ; `HTTP:000`
   and in the agent-proxy status log:
   `api.crossref.org:443 — connect_rejected`, detail
   `gateway answered 403 to CONNECT (policy denial or upstream failure)`
   **Therefore Crossref's ordered author list was NOT available to me.** The author line below was taken
   from the publisher's own article page instead (see Q1 for how I handled rule 4).
3. PubMed Central / Europe PMC were **not attempted** (hard-blocked per brief). PMC9241530 and PMID
   35491842 are recorded as identifiers only, never used as a route.

No "FULL TEXT RAW" read was possible anywhere in this check: raw curl egress is denied for these hosts.

---

## Q1. Existence, title, author line, venue, year, DOI; published vs preprint

**Both versions exist.**

**Preprint:** bioRxiv, DOI `10.1101/2021.12.14.472616`. The accession string encodes 14 Dec 2021, but
**the posting date was not visible in what I read** — the front matter was not captured (read level B).

**Published version: YES.** 
- Title, exactly as printed on the article page: **"Comparative Analysis and Data Provenance for 1,113 Bacterial Genome Assemblies"**
- Venue: **mSphere**, Volume 7, Number 3, **2022**. Publication date 2 May 2022; issue dated 29 June 2022.
- DOI: **10.1128/msphere.00077-22**
- Other identifiers, recorded but never used as routes: PMID 35491842, PMC9241530.

**Author line in printed order (15 authors), from the publisher's own article byline:**

1. David A. Yarmosh
2. Juan G. Lopera
3. Nikhita P. Puthuveetil
4. Patrick Ford Combs
5. Amy L. Reese
6. Corina Tabron
7. Amanda E. Pierola
8. James Duncan
9. Samuel R. Greenfield
10. Robert Marlow
11. Stephen King
12. Marco A. Riojas
13. John Bagnoli
14. Briana Benton
15. Jonathan L. Jacobs

**Rule 4 handling, stated plainly.** Crossref was unreachable (failed route 2) and the preprint's front
matter did not render (read level B), so I could not use either of the two routes the rule prefers. I used
the publisher's own article byline at journals.asm.org, which is the document's own author line as the
publisher prints it. As an independent cross-check, the DOAJ record lists the identical 15 names in the
identical order. Both agree; **"Yarmosh" is genuinely first author and "Jacobs" genuinely last.** I flag
that neither source is the printed PDF first page.

**Do the numbers differ between preprint and published?** For the numbers at issue here, **no.** The
preprint read and the published read independently returned the same median (7 SNPs / 8 indels per
assembly), the same maximum (60,064 SNPs), the same indel maximum (2,699) and the same 1,113 / 2,701 /
708 / 303 structure. Only orthography differs: the preprint capitalises "InDels", the published version
uses "indels". **I did not compare every number in the two versions** — only those listed here.

## Q2. THE COMPARATOR (the crux)

**Answer: it is ATCC's own authenticated material on one side and OTHER LABORATORIES' public assemblies
bearing the same ATCC strain NAME on the other. It is NOT two culture collections' distributed material.**

Structure of the comparison, from the text:
- Side 1: **1,113 "ATCC Standard Reference Genomes" (ASRGs)**, produced by ATCC from authenticated ATCC
  biorepository material by hybrid de novo assembly.
- Side 2: **2,701 RefSeq bacterial assemblies** identified by ATCC strain names appearing in their GenBank
  metadata, submitted by third-party labs.
- Overlap: **708** RefSeq assemblies had an ASRG counterpart; of those **303** were "complete genome"
  level, and those **303** are the set used for the variant analysis.

**A mechanism detail that materially changes how the comparator should be described:** the variant counts
are *not* assembly-to-assembly alignments. ATCC's own Illumina reads were mapped *onto the public RefSeq
assembly used as the reference*, and variants were called from the resulting consensus. Sentences
(quoted as returned; the Methods one was flagged as cut short at "variant calling"):

> "we mapped the same Illumina reads used in creating the corresponding ASRGs for the same strain" (Results)

> "303 'complete genome' assemblies were downloaded from NCBI's RefSeq that had corresponding ASRG assemblies and used as references for read-mapping and variant calling" (Methods) — **flagged cut short**

> "Only the corresponding Illumina sequencing reads from each ASRG assembly (see above) was used as input" (Methods)

Sentences settling who produced each side:

> "1,113 ATCC standard reference genomes (ASRGs) produced by ATCC from authenticated and traceable materials." (Importance)

> "we compared these assemblies to those in RefSeq where metadata indicated they were produced by 3rd-party labs" — **flagged cut short**; the summariser said the sentence continues about ATCC-sourced materials.

**Is the provenance of the public assemblies verified? NO — and the paper says so explicitly, and this is
the paper's own headline point.** From the Discussion:

> only **85 of 584** institutions "definitively obtained these strains directly from ATCC"

So the public side is matched **by strain name in metadata**, and for the large majority of submitting
institutions the paper could not establish that the material ever came from ATCC at all. Any reading that
treats this as "the same strain material diverging between two repositories" is reading something the
paper does not claim; the paper's framing is that nominal strain identity in public metadata is
unreliable and untraceable.

## Q3. The median 7 SNPs and 8 indels — CHECKED SEPARATELY

**The paper's own figure, as returned un-primed (I supplied no numbers in the request):**

> "The median level of SNPs and indels was 7 SNPs and 8 indels per assembly"

Status: **VERBATIM** in the published version. This string is ~71 characters, well under the summariser's
~125-character truncation point, and it came back **whole and un-primed in two separate reads of two
different documents** (the bioRxiv preprint PDF and the publisher article page). The preprint wording is
identical except for capitalisation: "The median level of SNPs and InDels was 7 SNPs and 8 InDels per
assembly." I did not supply "7", "8", "median", "SNPs" or "indels" as strings to be found in either call.

**Denominator and units, stated plainly:** **per assembly**, over the **303** complete RefSeq assemblies
that had a corresponding ASRG. The paper's own subsection heading is **"Variants in 303 RefSeq
assemblies."** The published text calls these **"the 303 mappings"** in the adjacent sentence
("with 7 of the 303 mappings having no detectable SNPs and indels"), which is the honest description:
each unit is one read-mapping of ATCC reads onto one public assembly.

**LEVEL OF AGGREGATION (rule 8): per assembly / per mapping, i.e. medians over ASSEMBLIES, not over
strains.** The paper's words are "per assembly", and the companion sentence counts "mappings". This matters
because the same strain designation can have several public assemblies, so one strain can contribute more
than one unit to the median. The paper itself slides between units within the same passage — the
outlier sentence switches to **"26 strains"** while the surrounding sentences count assemblies/mappings
(see Q4). Anyone quoting "median 7 SNPs and 8 indels" as a per-strain figure is restating it at the wrong
level of aggregation.

**Distribution figures given alongside (all per assembly unless noted):**
- Range: "the number of SNPs and indels per assembly ranged from 0 (none detected) to as many as 60,064 SNPs" (max SNPs: *Acinetobacter baumannii* ATCC 17978, GCF_011067065.1)
- "2,699 indels for a given assembly" (max indels: *Parabacteroides distasonis* ATCC 8503, GCF_900683725.1)
- "with 7 of the 303 mappings having no detectable SNPs and indels."
- "A total of 111 assemblies had fewer than 10 variants (SNPs and indels)"
- "while 15 assemblies had more than 500 variants (SNPs and indels)"
- Nonsynonymous, per assembly/genome: "Of these, 52 of the 303 assemblies had no expected nonsynonymous mutations" and "but 87 had at least 10 nonsynonymous variants per genome". Among RefSeq assemblies labelled "assembled from type material": 52 had ≥10 nonsynonymous variants and 7 had >100.

**Stated interquartile range: the IQR is invoked but NO NUMERIC IQR VALUE IS PRINTED.** The text uses
"3 times the interquartile range (IQR) above the median" as an outlier boundary without ever giving the
IQR as a number. I asked for a numeric IQR value directly and the summariser reported: "The article gives
no numeric IQR value." This is a NOT FOUND at full-text read level for the main text; I did **not** read
Table S5 or Fig. S4, where a distribution might be tabulated.

## Q4. Share or fraction of comparisons exceeding a divergence threshold?

**As a SHARE or FRACTION: NOT FOUND.** The paper reports **counts against stated thresholds**, never a
percentage or proportion, in the main text I read.

The threshold statements, as returned:

> "26 strains had SNPs and indels beyond an extreme-outlier boundary"

> "greater than 3 times the interquartile range (IQR) above the median, with 9 of them having over 1,000 SNPs and indels each"

> "A total of 111 assemblies had fewer than 10 variants (SNPs and indels)"

> "while 15 assemblies had more than 500 variants (SNPs and indels)"

All four quotations were flagged by the summariser as fragments of a longer passage and the Variants
subsection was **not** reproducible verbatim; treat them as the summariser's best quotation of a passage
it would not reproduce whole, not as certified verbatim strings.

**MY OWN ARITHMETIC (rule 9), not the paper's:** if 26 of the 303 units exceed the >3×IQR boundary that is
**8.6%**; 15/303 = **5.0%** above 500 variants; 111/303 = **36.6%** below 10 variants. **The paper prints
none of these percentages.** And the 26 figure carries an unresolved unit mismatch: the paper says
"26 **strains**" while the denominator 303 is in **assemblies/mappings**, so 26/303 mixes two levels of
aggregation and my 8.6% should not be quoted as the paper's share. No uncertainty interval is available to
carry through, because the paper states no IQR value and no interval on the median.

## Q5. Two or more culture collections' holdings compared against each other? Internal baseline?

**Inter-collection comparison: NO.** Plainly no. The article compares RefSeq assemblies *labelled* as
ATCC strains against ATCC's own genomes. Another collection's identifier appears only as a
record-deduplication step, not as a second holding to compare:

> "many strains have synonymous ATCC and NCTC identifiers."

The Discussion's institutional analysis is about *who submitted the public assemblies* (85 of 584
institutions definitively obtained strains directly from ATCC), not about a second repository's holdings
of the same accession. No DSMZ/NCTC/JCM/CCUG/BCCM holding is sequenced or compared. This is the single
most important thing a ledger entry could get wrong about this paper.

**Internal baseline (replicate ampoules, separate lots, re-sequencing of the same accession, technical
replicates): NOT FOUND**, at FULL TEXT read level of Results, Discussion and Materials and Methods. The
paper offers no estimate of what divergence is expected from the measurement process itself, so the
median of 7 SNPs / 8 indels is reported with **no measurement-level floor to compare it against.** I did
not read the supplementary material, so this NOT FOUND covers the main text only.

## Q6. Partition by class? Regression on passage number / transfers / years since deposit?

**Partition by variant class — partly, and not where the median lives.**
- **Insertion sequences / mobile elements: NOT FOUND.** Nothing in the article reports these as categories.
- **Prophages: NOT FOUND.**
- **Plasmids: NOT FOUND in the paper.** (The 2021 poster does report plasmid differences — see Q8 — but
  the paper does not.)
- **Structural variants: FOUND, but in a different subsection.** Relocations, inversions and translocations
  are treated in **"Comparative genomics of 303 RefSeq assemblies"**, i.e. *not* in the
  "Variants in 303 RefSeq assemblies" subsection that produces the 7/8 median. The 7/8 median is SNPs and
  indels only.
- Within the variant subsection, variants are classified only as SNPs vs indels and, via Ensembl VEP, as
  synonymous vs nonsynonymous (other variants relegated to Table S5 / Fig. S4, which I did not read).
- **Pseudogenes and truncated genes: NOT FOUND** (no counts reported). Nonsynonymous mutations are
  reported **per assembly / per genome only — no per-gene breakdown** (rule 8).

Results subsection headings, in printed order: (1) "Whole-genome sequencing of 1,113 ATCC bacterial
strains." (2) "Survey of bacterial genome assemblies in RefSeq." (3) "Comparative genomics of 303 RefSeq
assemblies." (4) "Variants in 303 RefSeq assemblies."

**Regression on passage number, transfers or years since deposit: NOT FOUND.** No statistical model
relating divergence to any of these is reported. Two adjacent facts, which are not the same thing:
- The Abstract says each ASRG is released with "passage history" — but **no passage numbers are reported
  and none are related to divergence.**
- The Results relate structural differences to *submission date* **descriptively only**: the greatest
  differences "corresponded to those submitted to NCBI prior to 2010 and for which" sequencing technology
  or assembly method was missing. **No statistical test is reported for this relationship.** Note this is
  submission date to NCBI, not years since deposit at a collection, and not transfers.

## Q7. Open question or future work about divergence between DIFFERENT COLLECTIONS' holdings?

**Read level before answering, as required: FULL TEXT (via summariser) of Abstract, Importance, all four
Results subsections, Discussion and Materials and Methods. There is no separate Conclusion or Limitations
section** — the summariser reported this explicitly. Supplementary material not read.

**On the specific question asked — divergence between different culture collections' holdings: NOT FOUND.**
Nothing in the text I read poses that question, in future-work form or otherwise.

What the paper *does* state as future work is adjacent but different in object — it is about public
database provenance and accountability, not about inter-collection divergence:

> "further systematic studies are needed to better understand the risks and prevalence of inauthentic and inaccurate data."

> "we urge the administrators of public genome databases to place a higher level of accountability" [on submissions]

> "the microbial research community would benefit from establishing a standard for documenting the provenance" [of cultures, isolates and derived data]

plus advice that researchers be cautious about public database data and that culture collection
identifiers be used when submitting assemblies. All four were flagged as fragments/partial quotations.

The distinction matters for this ledger: "further systematic studies are needed to better understand the
risks and prevalence of inauthentic and inaccurate data" is about *public submissions*, whose provenance
the paper has just shown to be unverifiable. It is not an open question about two authenticated
collections' holdings of the same accession drifting apart.

## Q8. The 2021 ATCC poster

**It exists as a findable, citable document. Not COULD NOT ESTABLISH, not NOT FOUND.**

- **Title:** "The Elephant in the Room: Microbial Reference Genome Authentication and Traceability"
- **Meeting:** **World Microbe Forum, Virtual Event, 21 June 2021.** Filed by ATCC under "2021 Posters".
  Source for the meeting and date: the **landing page** (ABSTRACT ONLY level). The poster capture itself
  contained no meeting name or date — I flag this split.
- **Authors, in the printed order on the poster, all with affiliation "ATCC, Manassas, VA 20110":**
  1. David Yarmosh, MS
  2. Ford Combs, MS
  3. Nikhita Puthuveetil, MS
  4. Juan Lopera, PhD
  5. Samuel Greenfield, BS
  6. Stephen King, MS
  7. Marco Riojas, PhD
  8. Amanda Pierola, BS
  9. Briana Benton, BS
  10. John Bagnoli, BS
  11. Jonathan Jacobs, PhD
  **Note for citation accuracy:** this is **11 authors, not the paper's 15**, and the order differs from
  the paper's (poster: Combs 2nd, Puthuveetil 3rd, Lopera 4th; paper: Lopera 2nd, Puthuveetil 3rd, Combs
  4th). The landing page lists **only David Yarmosh**, as presenter — a record page leading with one
  name, exactly the rule-4 trap. The 11-name line above is the poster's own printed line.
- **URL:** landing page
  `https://www.atcc.org/resources/posters/2021-posters/the-elephant-in-the-room-microbial-reference-genome-authentication-and-traceability`
  ; poster file
  `https://delivery-files.atcc.org/api/public/content/256032-The-Elephant-in-the-Room--Microbial-Reference-Genome-Authentication-and-Traceability`
  ; a video presentation is embedded (Wistia media ID joy39ljmr3), not read.
- **No DOI.** It is a vendor-hosted conference poster: citable, but grey literature, not peer reviewed.

**What it reports.** Scope claim, stated in the poster's own terms (rule 7): the poster's scope is
**100 bacterial strains** with complete assemblies in NCBI RefSeq, selected **by strain name and
publication impact**, re-sequenced at ATCC with Illumina + Oxford Nanopore through ATCC's hybrid assembly
pipeline. It is therefore a **smaller, name-matched, impact-weighted** precursor to the 303-assembly
analysis in the paper — not a random or complete sample, and the selection on "publication impact" is an
explicit non-random selection the poster itself declares.

**Share-above-threshold statistic: YES, and this is the poster's distinctive content.** As returned:

> "Of the 100 strains evaluated, 35 were found to have more than 50 variants, 8 with over 100 variants, and 2 with over 50kb in differences relative to those in RefSeq."

- Thresholds and counts: **>50 variants → 35 strains; >100 variants → 8 strains; >50 kb of difference → 2 strains.** Denominator **100 strains evaluated.**
- **LEVEL OF AGGREGATION: per strain** — unlike the paper's per-assembly/per-mapping median. Do not merge the two.
- Because the denominator is exactly 100, the counts read directly as percentages (35%, 8%, 2%); that
  conversion is **my arithmetic**, trivial but still mine, and the poster prints counts.
- **Verbatim status — the honest answer.** The quoted sentence is ~165 characters, i.e. **longer than the
  125-character truncation the summariser declared**, yet it came back unbroken. I therefore **cannot
  exclude** that the summariser assembled it, and **the dedicated single-string re-check did not run
  because my fetch budget was exhausted** (rule 12). What I can say: the four numbers (100, 35, 8, 2) with
  the same thresholds were returned by **two separate un-primed fetches of two different URLs** — the
  landing-page abstract and the poster file — and I supplied none of them in either request. So the
  **numbers are solid; the exact wording is probable but not independently certified.**

Other poster content, read at the same level:
- "ATCC has released over 1,200 genomes," described as "directly traceable back to source material."
- **20** strains had more than one genome assembly in NCBI's Assembly database, and **3 of those 20
  contained plasmid differences** versus identically named ATCC strains. (Per strain. This is the one
  plasmid-class result in either document.)
- Figure 1 caption: "Heatmap representing 486 ratios of contig N50 to Assembly Length for internal ATCC
  assemblies (top) and publicly available assemblies from GenBank (bottom)." The caption does **not** give
  the split between the two groups. "All GenBank assemblies are labeled as 'complete genome' or
  'chromosome' level assemblies."
- Figure 2 compares GenBank assemblies with ATCC counterparts for SNPs, InDels and structural variants;
  panel D concerns "ATCC assemblies that have 3 or more GenBank 'complete' counterparts". **No numeric
  values appear in the captions and the panel values were not readable** — so the poster's divergence
  *distribution* is, as far as I could read it, locked in unreadable figures. The only distributional
  numbers I can report are the 35/8/2-of-100 thresholds above.
- Figure 3: "Unknown Sequencing Tech 46.2%" / "Known Sequencing Tech 53.8%"; "Unknown Assembler 50%" /
  "Known Assembler 50%". Axis "Number of Assemblies", 0–200 scale; **denominators not stated.** The bar
  labels (40, 12, 10, 8, 7, 6, 5, 3, 2, 1) could not be reliably paired with categories — reported as
  unresolved, not as data.
- Table 1 (GenBank material attribution), counts as extracted, **row pairing inferred by the summariser
  from extraction order and therefore not reliable**, and **no total or denominator stated**: Not Listed 11;
  Assembly from type material, no source 13; Assembly from type material, non-ATCC source 4; Non-ATCC Lab
  8; ATCC 1; Treated with mutagen 3; Grown outside of ATCC 10.
- Quotations: "Sources of error are legion." (complete in capture). Figure heading: "Variant Counts Across
  Multiple Assemblies are Highly Inconsistent". "In GenBank assembly metadata, the material attribution is
  sometimes listed." — **flagged cut short.**

**Crucially, the poster's comparator is the same as the paper's, not a different one.** The poster compares
**ATCC's own material against public GenBank/RefSeq assemblies bearing the same strain name** — not two
culture collections' holdings. The poster is therefore not independent corroboration of any
inter-collection divergence claim; it is the same ATCC-vs-public-submitters comparison at n=100 strains.

---

## Relationship between the two sources, which the brief says is the point

Same lead author, same institution, same comparator, nested scope: the 2021 World Microbe Forum poster
(100 strains, name-matched, impact-weighted) is the **precursor** to the 2022 mSphere paper (1,113 ASRGs;
2,701 RefSeq records; 708 overlapping; 303 analysed). They are **not two independent measurements.**
Eleven of the poster's authors appear among the paper's fifteen. Citing both for one divergence claim
double-counts a single body of work.

Where they differ in what they license:
- The **poster** gives a **share-above-threshold at strain level** (35 of 100 strains >50 variants).
- The **paper** gives a **median at assembly/mapping level** (7 SNPs and 8 indels per assembly, n=303) and
  **threshold counts, never shares**, with **no numeric IQR**.
- Neither compares two culture collections' holdings. Neither establishes an internal measurement baseline.
- Neither regresses divergence on passage number, transfers or years since deposit.

## Items a downstream reader should not over-read

1. **"Median 7 SNPs and 8 indels" is per assembly/mapping, not per strain, and is SNPs+indels only** —
   structural variants are analysed in a different subsection and are not in that median.
2. **The public side's provenance is unverified by the paper's own finding** (85 of 584 institutions).
   This is ATCC vs other labs' same-name assemblies, not repository-vs-repository drift.
3. **The variants are called by mapping ATCC reads onto the public assembly as reference** — so the
   counts bundle genuine biological divergence with public-assembly error, and the paper's framing is
   about assembly/metadata quality as much as about strain drift.
4. **No measurement-level floor exists in either document**, so there is nothing in these sources saying
   how much of 7/8 is expected noise.
5. **No numeric IQR** is printed, so any confidence statement built on the "3×IQR" boundary cannot be
   reconstructed from the main text.
