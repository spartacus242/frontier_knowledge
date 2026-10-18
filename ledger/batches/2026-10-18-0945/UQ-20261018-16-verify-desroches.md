# UQ-20261018-16 — Source verification: Desroches et al. 2018 (ancestral Escherich strain across culture collections)

Reader: source-reader subagent. Date: 2026-10-18.

## READ LEVEL (declared first, per rule 2)

**FULL TEXT (via summariser)** — body text only; **figures NOT read**.

Precisely what that means here:
- All reading was done through `WebFetch` against the publisher page
  `https://journals.asm.org/doi/10.1128/msphere.00553-17` (ASM, open access CC BY 4.0).
  The page served the article text on every call.
- I never saw unmediated raw text. Raw `curl` is blocked at this session's egress proxy for every
  host I tried (see Failed routes), so **FULL TEXT RAW was not achievable**.
- The summariser **refused verbatim transcription at length** on my first call ("reproducing it at
  that length goes beyond what I should copy") and offered short quotations "of up to 125
  characters each". All quotations below are therefore short-form, and rule 5's 125-character
  truncation hazard applies throughout.
- Coverage across six prompted passes: front matter / author line, Abstract, IMPORTANCE, Results
  (incl. the SNP/indel subsection and the headings and contents of Tables 1–3), Materials and
  Methods, **Discussion (6 paragraphs, confirmed read)** and the concluding paragraph.
- **Not read: the figures.** Figure 1B's parenthetical values and Figure 3A's mutation totals and
  indel/substitution ratios are figure-only; the summariser said so explicitly and I did not read
  the image. Any absence I report is an absence from the *text*, not from the figures.

## Q1 — Existence and citation

**Exists.** Title as printed on the article's own front matter:

> The Odyssey of the Ancestral Escherich Strain through Culture Collections: an Example of
> Allopatric Diversification

Author line, **printed order, as taken from the publisher's article front matter** (rule 4 — not
from a record page, press release or repository stub):

`M. Desroches, G. Royer, D. Roche, M. Mercier-Darty, D. Vallenet, C. Médigue, K. Bastard,
C. Rodriguez, O. Clermont, E. Denamur, J.-W. Decousser` — 11 authors.

**First author surname: Desroches (M. Desroches). CONFIRMED** as first in the printed order.
Caveat: the front matter was rendered with initials only, so I have initials, not full given names.
Crossref's ordered list was unavailable (api.crossref.org is proxy-blocked here), so this rests on
the publisher's own article page.

- Journal: **mSphere** (ASM)
- Volume 3, Issue 1; published online 31 January 2018; issue dated Jan–Feb 2018 (the page showed
  28 February 2018 as the issue date)
- DOI: **10.1128/mSphere.00553-17** (publisher URL renders it lowercase: `10.1128/msphere.00553-17`)
- Article e-locator: **e00553-17**. FLAG: the summariser gave "00553-17 (from the DOI)" — i.e. it
  derived the locator from the DOI rather than reading it off the page. mSphere's house style is
  `3(1):e00553-17`; treat the `e` prefix as conventional, not as something I saw printed.
- PMCID PMC5793043 corresponds to this article. Per the brief, PMC was treated as an identifier to
  convert, not a route; it was never fetched.

## Q2 — SCOPE AND UNIT

The paper's own stated scope: it sequenced **four** isolates of the strain, one from each of four
collections, and compared them with **two previously published** NCTC 86 genomes — **six genomes in
the comparison**.

Newly sequenced in this study (Table 1 rows, columns: *Isolate | Collection | Country | Yr of entry
into collection | Sequencing technology | Reference*):

| Isolate | Collection | Country | Yr of entry | Technology |
|---|---|---|---|---|
| NCTC86 | NCTC | England | 1920 | Illumina MiSeq |
| CIP61.11 | Centre de Ressources Biologiques de l'Institut Pasteur | France | 1961 | Illumina MiSeq |
| ATCC 4157 | ATCC | United States | Unknown | Illumina MiSeq |
| DSM301 | DSMZ | Germany | 1970 | Illumina MiSeq |

Previously published, added for comparison: **NCTC86_Dunne** (PacBio RS II + Illumina, ref. 2) and
**NCTC86_Meric** (Illumina MiSeq, ref. 4). Both are NCTC 86 sequences produced by other groups.

**One holding per collection, or several?** Each of the four collections contributes **exactly one
holding sequenced in this study**. The NCTC appears three times in the comparison (NCTC86 from this
study, NCTC86_Dunne, NCTC86_Meric), but **the paper does not state whether those three are separate
ampoules, separate orders, or the same physical stock** — it describes them only as separate
sequencing efforts by different groups. So "three NCTC entries" is three *sequences*, not three
documented *holdings*. This is NOT FOUND in the text, not COULD NOT READ: I read the Methods and
Table 1 and the point is not stated.

**Reference and symmetry.** The reference is **NCTC86_Dunne**, chosen because it "corresponds to a
complete and circularized chromosome". SNP/indel calling used "the complete genome of NCTC86_Dunne
as the reference". The comparison for the reported counts is therefore **asymmetric: each isolate
against that single reference, not all-pairwise.** The paper additionally runs a concatenated-SNP
phylogeny (PhyML) and hierarchical clustering that analyse the isolates jointly, but it reports no
all-pairwise difference matrix.

Also sequenced, separately from the collection holdings: **six "squatter colonies"** — three each
from NCTC86 (S1–S3) and ATCC 4157 (S1–S3) — recovered from inside antibiotic inhibition zones.

## Q3 — The SNP and indel counts

**Method note (rules 5 and 6).** I did **not** hand the paper the numbers 164/803/878 or
127/227/230. Rule 6 forbids treating a confirmation of supplied strings as a confirmation. Instead I
asked twice, under two differently framed un-primed prompts, "what counts does the paper report",
and a third time for the **surrounding passage** of the sentence that carries them. All three passes
agreed, and the first two also volunteered two rows I had never mentioned (NCTC86 and NCTC86_Meric),
which is what makes the agreement load-bearing.

The paper's own figures, as printed in Results under the subsection heading **"The number of
mutations correlates with the temporospatial history of the isolates"**, in the paper's own
`SNPs/indels` notation, all **against NCTC86_Dunne**:

| Isolate | Collection | SNPs | Indels |
|---|---|---|---|
| NCTC86_Meric | NCTC (England), prior study | 0 | 128 |
| NCTC86 (this study) | NCTC (England) | 17 | 142 |
| CIP61.11 | Institut Pasteur / CIP (France) | **164** | **127** |
| ATCC 4157 | ATCC (United States) | **803** | **227** |
| DSM301 | DSMZ (Germany) | **878** | **230** |
| NCTC86_Dunne | NCTC (England) | — (reference) | — (reference) |

**All six queried numbers match the paper**, and each belongs to the collection shown.

**Plainly, as asked: yes — the counts are per isolate (one holding per collection for CIP61.11,
ATCC 4157 and DSM301), each measured against the single reference NCTC86_Dunne.** The unit of
aggregation is **per isolate, per whole genome** — not per gene, per locus or per collection
aggregate (rule 8).

Surrounding passage, short quotes (none came back cut off; the middle of the sentence is given as
three fragments of one sentence, **not stitched into a single quotation** — rule 5):

- Sentence before: "The results were in agreement with those of cgMLST (Fig. 1B)."
- The counts sentence, in fragments: "After hierarchical clustering of SNP/indel presence/absence in
  the isolates, we observed two groups:" / "with 0/128, 17/142, and 164/127 SNPs/indels in
  NCTC86_Meric, NCTC86, and CIP61.11, respectively," / "with 803/227 and 878/230 SNPs/indels in
  ATCC 4157 and DSM301, respectively."
- Sentence after: "Finally, we performed an SNP-based phylogeny analysis with PhyML."

So the counts sit inside a **two-group clustering** result: English/French (Meric, NCTC86, CIP61.11)
versus American/German (ATCC 4157, DSM301).

**Figures that differ from the six supplied, or that are adjacent and easy to confuse:**
- **cgMLST allelic differences from NCTC86_Dunne** — a different measurement at a different unit
  (per allele/locus, not per nucleotide): NCTC86_Meric 4, NCTC86 11, CIP61.11 105, ATCC 4157 446,
  DSM301 572. These are NOT SNP counts and must not be reported as such.
- Ka/Ks: NCTC86 1.07, CIP61.11 0.94, ATCC 4157 1.05, DSM301 1.07.
- **No printed table holds the SNP/indel counts.** Table 1 is isolates and sources, Table 2 typing
  and virulence, Table 3 mutation rates and phenotypes. The counts are text-only (plus Fig. 1B).
- **An apparent inconsistency, resolved by MY OWN ARITHMETIC (rule 9).** The text cites
  indel/substitution ratios of 1 (NCTC86_Meric), 0.22 (ATCC 4157) and 0.21 (DSM301). Those are not
  indels÷SNPs: 227÷803 = 0.283 and 230÷878 = 0.262 (my arithmetic). They **are** indels ÷
  (SNPs+indels): 227÷1030 = 0.220, 230÷1108 = 0.208, and 128÷(0+128) = 1.00 (my arithmetic). So the
  ratios are consistent with the counts if the denominator is total mutations. **This is my
  inference, not the paper's statement**, and the ratios themselves live in Figure 3A, which I did
  not read. The paper states no uncertainty interval on any of these counts, so none is carried
  through.
- **A caution the paper itself does not raise.** NCTC86_Meric differs from the reference by **128
  indels and 0 SNPs**. The paper does **not** discuss sequencing or assembly artefact as an
  explanation for its indels, validates **no** variant by PCR or Sanger, and the reference is a
  PacBio assembly while Meric and the four new genomes are Illumina MiSeq. The only safeguards
  described are coverage-based filtering, and a note that some comparison genomes are "unfinished".
  Reported as what the text does and does not say — I am not asserting the indels are artefactual.

## Q4 — Partition of the differences by class

**Partially NOT FOUND.** The paper classifies the differences essentially only as **SNPs and
indels**. On the specific classes asked about:

- **Insertion sequences:** no count, no partition. The single mention is an IS*4*-family transposase
  among candidate squatter-colony genes.
- **Prophages:** NOT FOUND — no prophage partition of the differences.
- **Structural variants / rearrangements:** NOT FOUND — not counted.
- **Gene losses:** not counted as a class; only individual presence/absence calls, e.g. *iucC* and
  *traT* present only in ATCC 4157 and DSM301.
- **Synonymous vs non-synonymous:** not counted separately; only a Ka/Ks ratio is reported.
- **Plasmids:** YES, but as gene content rather than as a share of the differences. ATCC 4157 and
  DSM301 each carry F plasmid replicons (IncFIA, IncFII, IncFIB), typed F1:A6:B1, on four or five
  plasmidic contigs, with 125 predicted genes on those contigs (no per-isolate split given).
- **Mutator alleles:** YES — this is the paper's organising explanation.

Mutator alleles, with the paper's own wording (short quotes; flagged where relevant):

- *mutL*: "a deletion of leucine and alanine (L68_A69del) in a repeated region of MutL" — reported
  in **all** isolates.
- *mutT*: "a C insertion in a tract of C's in mutT resulting in a previously described frameshift" —
  **all** isolates.
- "we found other mutations in the dam, mutS, and uvrD genes." (isolates not specified)
- *miaA*: "miaA also displayed a probably damaging mutation in ATCC 4157 and DSM301." (those two only)
- *mutY*, *mutM*: the changes "are polymorphisms rather than deleterious mutations."
- Phenotype confirmed by an *rpoB*/rifampin mutation-rate assay; rates are reported in Table 3 as a
  median of five independent experiments (**per isolate, per assay**, not per gene).

**On acquisition during collection passage** — the paper is NOT univocal, and this matters:
- Abstract: the mutator phenotype "was probably acquired during subculturing and corresponded to
  second-order selection."
- Discussion, one way: it is "plausible that what Escherich isolated in 1885 was a mutator strain".
- Discussion, the other way: "presumably, the ancestral Escherich strain was not a mutator strain
  but selected mutator alleles during its conservation" — **this quote came back flagged as cut off
  at the summariser's ~125-character limit.** The summariser then offered "in collections" as the
  continuation; per rule 5 I record that **the completion is the summariser's, not verified text**,
  and I do not adopt it.
- Context given for passage: "The Escherich strain has undergone numerous subcultures on various
  media during its European trip to the Lister Institute." and "Shipment to other collections
  represents additional subcultures." The paper **counts** subcultures for no isolate.

## Q5 — THE DECISIVE QUESTION: is a broader survey posed, called for, or deferred?

**NOT FOUND.**

How much I read before saying so: the whole article body via the summariser, including **all six
Discussion-and-conclusion paragraphs** (the summariser enumerated them: opening, main finding,
origin/interpretation, clinical-epidemiological risk, therapeutic risk, conclusion), reached under a
prompt that asked openly whether any sentence proposes extending the comparison to other strains,
other collections, more isolates, or determining how commonly or widely collection holdings diverge.
Nothing of that kind appears in the Discussion or the conclusion. **Caveat: I did not read the
figures or their legends, and I did not read any supplemental material.**

The nearest thing in the paper is a recommendation about **analysis practice**, not a call for a
survey: "Therefore, interpretation of WGS data should trigger a thorough analysis of antimutator
genes." That is advice to people interpreting WGS, not a proposal to measure the distribution of
between-collection divergence across many strains.

So: the paper does **not** ask what the distribution of divergence between collections' holdings
would be across many strains, and does **not** say anyone should measure it.

## Q6 — Within-collection or replicate baseline

**NOT FOUND**, in the strict sense asked: the paper does **not** sequence or compare two independent
ampoules, vials, lots or stock replicates of the same catalogue accession to establish a baseline.
The text is silent on ampoule/lot/batch identity altogether; Table 1 carries no accession, lot or
ampoule column, and no passage counts.

Three near-misses, none of which is the baseline asked for:
1. **The three NCTC 86 sequences** (NCTC86 17/142, NCTC86_Meric 0/128, both vs NCTC86_Dunne) are the
   closest de facto within-collection comparison, and the numbers are small relative to CIP61.11,
   ATCC 4157 and DSM301. But the paper **does not state** whether they are the same stock, so it
   cannot be read as a deliberate replicate baseline — and the three were produced on different
   platforms by different groups, so platform differs along with material.
2. **The six squatter colonies** (NCTC86_S1–S3, ATCC 4157_S1–S3) are within-isolate derivatives, but
   they arose inside antibiotic inhibition zones during MIC testing, i.e. they are selected variants,
   not independent stock replicates. The paper reports **no SNP/indel counts between colonies**; the
   within-isolate results are at *ompR*/*envZ* only: NCTC86_S1 and _S2 share R190C; ATCC 4157_S1 and
   _S3 share M40R; ATCC 4157_S2 has Y102H; NCTC86_S3 has no recovered *ompR* mutation but an EnvZ
   V227A. Plasmid-borne *ompR* restored benzylpenicillin hypersusceptibility in all but NCTC86_S3.
3. **Five independent *rpoB* mutation-rate experiments** per isolate are phenotypic replicates, not
   independent sequencing of stocks.

## Q7 — How the paper frames the finding

**Not as a curation error to be fixed.** The paper makes **no** recommendation addressed to the
collections, and does not describe what happened as a curation or preservation failure. It frames it
as an **evolutionary process** plus a **warning to users of the data**:

- Evolutionary framing: the strain "selected mutator alleles during its conservation in collections,
  allowing it to cope with life under such conditions by second-order selection." The IMPORTANCE
  statement calls it "unintentional experimental evolution in culture collections all over the word
  since 1885" (*word* is the typo as rendered; I did not independently verify the typo against the
  printed page).
- The strain is called "a very nice model of allopatric diversification", and the Discussion compares
  it with Lenski's long-term *E. coli* evolution experiment. The title's own framing — "an Example of
  Allopatric Diversification" — is the same move.
- Trade-off framing: *rpoS* and OmpF changes are read as a self-preservation / nutritional-competence
  trade-off during storage.
- Warning framing, clinical and epidemiological: "such mutator isolates can also be problematic when
  cross contamination between patients is suspected"; the work "pointed out the risk of
  misinterpretation of several phenotypes"; and, on treating the isolates as distinct strains, "we
  will have drawn a false conclusion by considering that each isolate is different while they all
  belong to the same strain."
- Practice recommendation, aimed at WGS interpretation rather than at collections: "interpretation of
  WGS data should trigger a thorough analysis of antimutator genes."

Net: **a general property of this strain's life in collections, told as evolution, with the
actionable warning pointed at interpreters of WGS data (cgMLST thresholds, relatedness, antibiotic
susceptibility) — not at the collections' curation practice.**

## Failed routes, with exact error text (rule 10)

1. `curl -sS -G https://api.crossref.org/works ...` →
   `curl: (56) CONNECT tunnel failed, response 403` / `HTTP:000`.
   Proxy status endpoint recorded:
   `{"kind":"connect_rejected","detail":"gateway answered 403 to CONNECT (policy denial or upstream failure)","host":"api.crossref.org:443"}`.
   Per /root/.ccr/README.md ("do not retry policy denials (403/407) — report them instead") this was
   **not retried**. Consequence: Crossref's ordered author list was unavailable, so Q1's author order
   rests on the publisher's own article front matter instead.
2. `curl -sSL https://www.france-genomique.org/publication/the-odyssey-of-the-ancestral-escherich-strain-through-culture-collections-an-example-of-allopatric-diversification/` →
   `HTTP:000` (CONNECT denied by the egress proxy; no body returned). Not retried.
3. `curl -sS -I https://journals.asm.org/journal/msphere` →
   `curl: (56) CONNECT tunnel failed, response 403`, with the proxy's own reply
   `HTTP/1.1 403 Forbidden / Content-Type: text/plain; charset=utf-8 / X-Content-Type-Options: nosniff / Content-Length: 74 / Connection: close`.
   Not retried. Consequence: **no raw-text route existed**, so FULL TEXT RAW was impossible and all
   reading went through the WebFetch summariser.
4. First WebFetch on the publisher page was a **partial refusal**: the summariser declined to
   transcribe the Abstract, IMPORTANCE and Introduction verbatim — "reproducing it at that length
   goes beyond what I should copy" — and capped quotations at ~125 characters. Recorded, not worked
   around; I switched to short quotations plus structured un-primed questions.
5. PMC / Europe PMC: **not attempted**, per the brief. PMCID PMC5793043 was treated as an identifier
   to convert to the publisher DOI.

## Budget and self-reported errors (rule 12)

- **WebSearch: 3 of 7 used.**
- **Content fetches: 6 of 7 used** — all six WebFetch calls, all against
  `https://journals.asm.org/doi/10.1128/msphere.00553-17`. Three *additional* raw-`curl` retrieval
  attempts (items 1–3 above) were denied at the proxy and returned no content; counting every HTTP
  retrieval attempt, the total is **9**. I report it both ways rather than picking the flattering
  one: 6 fetches returned content, under budget; 9 attempts were made.
- Errors and shortfalls to declare: (a) no raw/unmediated read was possible, so every quotation in
  this file is summariser-mediated and subject to the ~125-character truncation hazard; (b) one
  mutator-timing quotation came back truncated and the summariser completed it — I have marked the
  completion as unverified rather than adopting it; (c) the figures (Fig. 1B, Fig. 3A) and any
  supplemental material were not read, so Q4 and Q5 absences are absences from the body text only;
  (d) the e-locator `e00553-17` was derived from the DOI by the summariser, not read off the page;
  (e) Crossref was unavailable, so the author order has a single source (the publisher front matter);
  (f) the indel-fraction reconciliation in Q3 is my own arithmetic, explicitly labelled.
