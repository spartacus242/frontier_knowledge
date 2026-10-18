# UQ-20261018-16 — Source reader: two previously unopened leads

Reader run: 2026-10-18. Budget used: **5 web searches of 7, 7 fetches of 7** (2 of the 7 fetches were
refused at the proxy with HTTP 429 and were not retried).

**Environment constraint that shaped everything below:** direct `curl` to external hosts is
policy-denied in this session. A Crossref API call returned `curl: (56) CONNECT tunnel failed,
response 403`, and the agent-proxy status endpoint records
`{"kind":"connect_rejected","detail":"gateway answered 403 to CONNECT (policy denial or upstream
failure)","host":"api.crossref.org:443"}` — with sibling 403s today for `www.nature.com:443`,
`link.springer.com:443`, `doi.org:443`, `www.biorxiv.org:443`, `api.elifesciences.org:443`,
`www.ncimb.com:443`. The proxy README says: "Most often the destination host is not allowed for this
session. Do not retry or route around it — report the blocked host." I did not retry it.
**Consequence: no FULL TEXT RAW read was achievable for either source.** Everything below is
FULL TEXT (via summariser), so every quotation is summariser-mediated and may be truncated near
125 characters. Crossref's ordered author list could not be obtained; author lines were checked
against the publisher's own first page instead.

---

## SOURCE 1 — "Beware of False 'Type Strain' Genome Sequences"

**READ LEVEL: FULL TEXT (via summariser).** Two independent passes on the publisher page
`https://journals.asm.org/doi/10.1128/mra.00369-19`, the second deliberately un-primed (asked for
surrounding passages and for the table's own cells, not for strings to confirm). The document is a
3-page Letter, so "full text" here is a short document read twice. Both passes refused wholesale
verbatim reproduction ("I can't reproduce the full article verbatim under the quoting limits") —
that is a summariser policy limit, not an absence in the document.

### Full citation (established; PMCID converted, never visited)

Salvà-Serra F, Jaén-Luchoro D, Karlsson R, Bennasar-Figueras A, Jakobsson HE, Moore ERB.
**"Beware of False 'Type Strain' Genome Sequences."** *Microbiology Resource Announcements*
**8**(22): e00369-19 (2019). DOI **10.1128/MRA.00369-19**. Article type: **Letter**. Published
30 May 2019. Editor: Irene L. G. Newton, Indiana University, Bloomington. = PMC6544187.

- Routing: PMCID → DOI via a search plus the Universitat de les Illes Balears repository record
  (`dspace.uib.es/xmlui/handle/11201/150272?show=full`, which gave `dc.relation.isformatof
  https://doi.org/10.1128/MRA.00369-19` and `dc.relation.ispartof Microbiology Resource
  Announcements, 2019, vol. 8, num. 22, p. 1-3`). PMC was never used as a route.
- **Author line checked against the publisher's own first page** (journals.asm.org), printed order:
  Francisco Salvà-Serra; Daniel Jaén-Luchoro; Roger Karlsson; Antoni Bennasar-Figueras;
  Hedvig E. Jakobsson; Edward R. B. Moore. The repository stub listed the same six names in the
  same order — but the publisher page is the authority used here. Caveat: the summariser reported
  "no superscript affiliation markers" on the rendered page; I could not verify superscripts, and
  affiliations came back as an unordered list (University of Gothenburg / Sahlgrenska Academy,
  Sahlgrenska University Hospital, Culture Collection University of Gothenburg, CARe, University of
  the Balearic Islands, Nanoxis Consulting AB).
- Note on pagination: the repository says "p. 1-3"; ASM's own eLocator convention gives e00369-19.

### (a) Object of the Letter — mislabelling, NOT divergence between holdings

**ANSWER: mislabelled / wrongly identified genome sequences published under a "type strain" label.
It is not about genomic divergence between correctly identified holdings of the same strain.**
Confidence: high.

Sentences returned as quotations (each flagged for status):

- Opening sentence, returned as a quote: "With this letter, we warn users of bacterial DNA sequence
  data about recent cases misusing the term "type strain" in bacterial genome sequence reports" —
  VERBATIM as returned, but it came back without a closing period, so it may be truncated.
- Second sentence, returned as a quote: "In recent articles published in the journal Genome
  Announcements (GA), (now Microbiology Resource Announcements [MRA]) ([1–5]), the complete genome
  sequences of five strains of five species of bacteria were reported." The doubled comma after
  "(GA)," is reproduced as returned.
- The sentence stating the defect came back as **two fragments in sequence**: "since they are not
  descended from the already defined type strains," and "they cannot represent the authentic type
  strains of the species." **I am NOT stitching these.** They are reported as the summariser
  returned them; they are very likely one sentence split by the ~125-character truncation, but I did
  not verify that they are contiguous, and the clause order in the printed sentence is unverified.
- Supporting content (paraphrase, both passes agreeing): the reported strains were newly isolated
  environmental/air isolates (the SGAir series), the five species were already validly published
  with type strains preserved in culture collections, and under rule 18a of the International Code
  of Nomenclature of Prokaryotes a type strain must descend from the designated nomenclatural type.
  One of the five, *Lelliottia nimipressuralis* SGAir0187, is additionally misclassified at species
  level (ANI 83.10%).

So the error the Letter is about is **nomenclatural/identification error in publication metadata** —
a non-type strain being called the type strain — plus one outright species misassignment. There is
no claim anywhere that two authentic holdings of one type strain differ from each other.

### (b) Quantity — a count of five, with NO denominator

- **Five strains of five species, reported in five Genome Announcements articles (refs 1–5).**
  Level of aggregation: one strain per species per article.
- **The Letter states no total examined, no rate and no share.** It does not say "five out of N
  announcements". The only non-numeric magnitude claim returned was the quoted phrase
  "high numbers of misclassified genome sequences", given with no figure attached.
- Divergence measurements, **per pair (reported strain vs authentic type strain), genome-to-genome
  ANIb (BLAST-based), computed with JSpeciesWS** — from Table 1, whose title reads "TABLE 1 Average
  nucleotide identity values between the genome sequences of the strains erroneously reported as
  type strains and the genome sequences of the authentic type strains of the corresponding species":

| Strain erroneously reported as type strain | GenBank | Authentic type strain | GenBank | ANIb (%) | Aligned nt (%) |
|---|---|---|---|---|---|
| *Acinetobacter indicus* SGAir0564 | CP024620 | *A. indicus* CIP 110367T | AYET00000000 | 96.02 | 83.59 |
| *Bacillus altitudinis* SGAir0031 | CP022319 | *B. altitudinis* 41KF2bT | ASJC00000000 | 97.92 | 91.18 |
| *Lelliottia nimipressuralis* SGAir0187 | CP025034 | *L. nimipressuralis* CCUG 25894T | SDDX00000000 | 83.10 | 75.56 |
| *Pseudomonas stutzeri* SGAir0442 | CP025149 | *P. stutzeri* CGMCC 1.1803T | CP002881 | 97.04 | 88.04 |
| *Staphylococcus haemolyticus* SGAir0252 | CP025031 | *S. haemolyticus* NCTC 11042T | PPQA00000000 | 98.96 | 88.85 |

  Table footnote as returned: "Average nucleotide identity based on BLAST. Species threshold, ≥95%."
  Range cross-checked between the two passes: ANI 83.10–98.96%, aligned nucleotides 75.56–91.18%.
  Both passes agreed on these numbers.
- **MY OWN ARITHMETIC (labelled as such):** using the paper's own ≥95% footnote threshold, 4 of the
  5 reported strains sit above it (96.02, 97.92, 97.04, 98.96) and 1 below (83.10). The Letter does
  not present this 4/5 split itself; the paper carries no stated uncertainties on these ANI values,
  so none can be carried through.

### (c) Does it compare two or more culture collections' holdings of the same strain?

**ANSWER: NO.** Confidence: high (full-text level, asked un-primed in the second pass).

Evidence: every comparison in Table 1 is *a newly isolated non-type strain* against *one* authentic
type strain, and each authentic type strain is cited under a **single** collection designation from a
**different** collection (CIP 110367T, 41KF2bT, CCUG 25894T, CGMCC 1.1803T, NCTC 11042T). Five
different collections appear, but each for a different species — never two collections' holdings of
one strain set against each other. Asked directly and un-primed whether the Letter discusses one
strain held, deposited or subcultured in more than one collection, or differences between separate
stocks or deposits, the answer was that it does not; the nearest passage is a general remark that
authentic type strains are "publicly available in numerous culture collections", which asserts
availability, not a comparison.

### (d) Does it pose, as open, how far apart different collections' holdings of one strain are?

**NOT FOUND** — and this is a not-found at full-text level, on a 3-page Letter read twice, with the
question asked un-primed, not a could-not-read. Confidence: high.

The Letter's forward-looking content is of a different kind. Quotes returned from the final
paragraph (each a separate returned fragment; **not stitched**, and several plainly truncated):
"In conclusion, type strains serve as important "reference points" in bacterial taxonomy and
systematics" / "and are fundamental and essential resources for microbiology." / "The presence of
sequences erroneously reported as type strains is a real example of "fake news"" / "is potentially
dangerous, as it can easily lead to further errors in studies relying on them." / "With the presented
examples of inaccurate and inappropriate use of the term "type strain," we emphasize how important it
is to confirm the designation." / "In fact, we would propose that the public databases establish
dedicated repositories for the genome sequences of the type strains of validly published species." /
"Essentially, while genome sequence data represent enormous resources, it is imperative to perform
basic and relevant controls" / "when reporting and using public genome sequences." The last two are
almost certainly one sentence cut at the truncation limit; I report them as returned rather than
completing them. Also returned: "may lead to erroneous conclusions in future studies that may rely on
the published misinformation." and the editor's note "The authors of the published articles did not
respond."

All of that is about *verifying designations and curating repositories*. The open question the ledger
is interested in — how far apart different collections' holdings of one strain are — is absent.

---

## SOURCE 2 — BCG daughter-strain comparative genomics

**Paper chosen because it could actually be read.** READ LEVEL: **FULL TEXT (via summariser)**, two
passes on the publisher PDF `https://bmcgenomics.biomedcentral.com/track/pdf/10.1186/s12864-019-5909-5`
(BioMed Central / Springer Nature; this host served the PDF where `link.springer.com` and `doi.org`
did not). First pass: first page, abstract, Background. Second pass, un-primed: Results, Discussion,
Conclusions, Methods, replicate statements, framing. No raw text; verbatim reproduction was refused
by the summariser on the first pass.

### Full citation

Borgers K, Ou J-Y, Zheng P-X, Tiels P, Van Hecke A, Plets E, Michielsen G, Festjens N, Callewaert N,
Lin Y-C. **"Reference genome and comparative genome analysis for the WHO reference strain for
*Mycobacterium bovis* BCG Danish, the present tuberculosis vaccine."** *BMC Genomics* **20**: 561
(2019). DOI **10.1186/s12864-019-5909-5**. Research Article, Open Access (CC BY 4.0). Received
25 February 2019, accepted 17 June 2019. (= PMC6615170; PMC not used as a route.)

- Author line read off the publisher PDF's own first page, printed order as given above (Borgers
  first, Lin Y-C last). Caveat: superscript markers were not reproduced, and Crossref's ordered list
  was unavailable (api.crossref.org policy-denied), so the order rests on the publisher PDF alone.
- Affiliations as returned: VIB-UGent Center for Medical Biotechnology, Ghent; Dept of Biochemistry
  and Microbiology, Ghent University; Biotechnology Center in Southern Taiwan, Academia Sinica,
  Tainan; Agricultural Biotechnology Research Center, Academia Sinica, Tainan.

### (e) What it compares, how many substrains, what divergence

**Important scope correction to any reading of this as a multi-substrain comparison.** The paper's
primary object is a **complete reference genome for ONE substrain** — BCG Danish 1331, the WHO
reference strain (07/270) — plus **its own engineered sapM knockout derivative**. The comparative
component is secondary: a pairwise comparison to BCG Pasteur 1173P2 and a **reanalysis of the DU1
duplication in previously published data**. Asked directly, the article **never states a single
number of substrains compared**; the scope sentence returned for the reanalysis is only
"the DU1 duplication region was reanalyzed in published genome data" (Methods), citing refs
[12, 15–20], i.e. seven published datasets. **Table 2 lists ten BCG strains with complete genomes
(Tokyo 172, Moreau, Tice, Mexico 1931, Korea 1168P, Russia 368, Russia BCG-1, clinical isolate 3281,
Danish 1331 among them) — but it is a literature overview of available high-coverage genomes, not
the comparison the paper itself performs.** This is exactly the scope trap rule 7 warns about, so:
the paper's own comparisons are one assembled genome vs one reference genome, one knockout vs its
parent, and a targeted DU1 reanalysis across cited datasets (Leung et al. 2008 tiling array, 13 BCG
strains per its title; Abdallah et al. 2015, 14 strains per the Discussion).

Divergence figures, each with its level of aggregation:

| Figure | Comparison | Aggregation |
|---|---|---|
| 4,411,814 bp chromosome; 4084 genes (4004 protein-coding, 30 pseudogenes) | BCG Danish 1331 WT | per genome (not a divergence figure) |
| **42 SNPs** (24 non-synonymous, 9 synonymous, 9 intergenic) | Danish 1331 WT vs BCG Pasteur 1173P2 (NC_008769.1) | **per pair of substrains** |
| 26 SNPs affecting 19 genes attempted by Sanger; 15 SNPs in 15 genes validated | within that 42-SNP set | per SNP / per gene |
| 1 bp deletion in Mb3865; 465 bp insertion in PE_PGRS54 | Danish vs Pasteur | per locus, per pair |
| DU1-like duplication of **14,577 bp** | Danish 1331 WT | per duplication, per genome |
| 31 genes in the DU1 of BCG Pasteur; 7 genes common to all DU1-like duplications | across DU1 forms (Pasteur, Birkhaug, China, Danish, isolate 3281) | per duplication |
| 4 forms of DU2 | across BCG strains | per duplication class |
| 7 kb region covering six genes, repeated three times, crossing oriC | clinical isolate 3281 | per region, per strain |
| 894 bp deletion in Mb0096c–Mb0098c **not found**; leuA insertion 399 bp (12 × 57 bp repeats) rather than 118 bp | Danish 1331 WT vs the published description of BCG Danish in Abdallah et al. | per locus — a disagreement between two labs' accounts of the *same* substrain |
| SenX3-RegX3 with 3 × 77 bp repeats | Danish WT | per locus |
| **1 SNP** (Asn737Thr, BCG_3966/BCGDan_4053) + loss of one DU2 copy | sapM knockout vs its parental WT | **per pair, same stock lineage, same laboratory** |

Depth figures (per sequencing run): 140x and 95x for the two WT SMRT cells, 229x for the KO, 55–56x
Illumina per genome.

### (f) Framing — the specific history of this one vaccine

**ANSWER: framed as the specific history of BCG, not as a general property of material held at
different institutions.** Confidence: high.

Quotes returned (Background): "this BCG Pasteur strain was distributed to laboratories around the
world" / "different laboratories maintained their own daughter strains by passaging" / "Over the
years, different substrains arose with different protective efficacy". The paper also attributes the
end of divergence to institutional practice rather than to biology: a 1956 frozen seed-lot system and
a 1966 WHO recommendation on passage limits "halted the accumulation of additional genetic changes",
and DU2 "probably arose due to inadvertent selection for increased growth rate on glycerol".

The furthest the article generalises, asked un-primed, stops at TB vaccines: "Such unexpected genomic
alterations may be more common than thought in engineered live attenuated TB vaccines". **No sentence
frames the differences as a general phenomenon affecting strains, cell lines or stocks held at
different institutions beyond BCG** — that was asked directly and reported as absent at full-text
level.

### (g) Does it pose divergence between institutions' holdings of the same material, in general, as open or future work?

**NOT FOUND** (full-text level, asked un-primed; not a could-not-read). Confidence: medium-high.

The nearest sentence is BCG-specific provenance hygiene, not a general open question:
"they demand for the specification of the exact origin of the BCG strain(s) used in studies on this
vaccine". Its trigger is that public datasets conflict on whether DU1 is present in given substrains,
and that the article's own BCG Danish differs from Abdallah et al.'s published BCG Danish at two loci
(the 894 bp deletion and the leuA insertion length) — i.e. the paper *encounters* exactly the
two-labs-disagree-about-one-substrain phenomenon and responds with a reporting recommendation rather
than by posing it as a question. Its stated open questions are mechanistic and local: "no driving
factor for the DU1 has been identified"; on two oriC copies, "Confirmation of this hypothesis awaits
experimental confirmation"; "The effect of the SNP in BCG_3966 (or Rv3909) is hard to estimate";
Sanger validation impossible in "highly repetitive and/or highly GC-rich regions". Closing
Conclusions fragments returned (truncated, not stitched): "now permits full genomic characterization
of (engineered) TB vaccine strains, which should contribute to more" / "and that is used as a basic
chassis for improved TB vaccine design."

### (h) Replicate or within-institute baseline

**Partially yes — technical replicates only, and no replicate baseline for the divergence figures.**
Confidence: high.

- qPCR copy-number: run "in quadruplicate for each gDNA sample" (Methods); Fig. 2d and Fig. 4c
  legends give "averages (± SD) of four technical replicates". **Technical, not biological.**
- No biological replicates are described, for the growth observations or for the sequencing.
- The WT was sequenced in two SMRT cells (140x, 95x); the Methods do not state whether these were the
  same stock or separate cultures — so this is not usable as a replicate baseline.
- Closest thing to a within-institute comparison: in-house BCG Pasteur 1173 (ATCC 35734) and Pasteur
  1721 were assayed alongside Danish 1331 for DU1 copy number (Fig. 2d). These are two different
  Pasteur passage levels, not two holdings of one stock, and the readout is qPCR copy number, not
  genome-wide divergence.
- The one same-laboratory, same-lineage divergence number in the paper is the **1 SNP** between the
  sapM knockout and its parental WT, which is a constructed derivative rather than a passage control.
- SNP validation by PCR and Sanger; DU1/DU2 junctions confirmed by PCR and Sanger; ambiguous regions
  "locally reassembled and/or experimentally verified".

---

## Failed routes, with exact error text

1. `curl https://api.crossref.org/works?query.bibliographic=Beware+of+False+Type+Strain+Genome+Sequences...`
   → `curl: (56) CONNECT tunnel failed, response 403`. Proxy status endpoint:
   `{"ts":"2026-10-18T...","kind":"connect_rejected","detail":"gateway answered 403 to CONNECT (policy
   denial or upstream failure)","host":"api.crossref.org:443"}`. **Policy denial — not retried, not
   routed around** (README: "Do not retry or route around it — report the blocked host"). Effect:
   Crossref's ordered author list was unavailable for both sources.
2. `WebFetch https://doi.org/10.1128/MRA.00369-19` →
   `{"error_type":"PROXY_REJECTED","source":"proxy","message":"The WebFetch proxy rejected the request
   (HTTP 429; rate limited — the server requests waiting ~60s before retrying): Do not fetch this page
   again, even after waiting; other pages may be refused too..."}`. **Not retried.** Worked around by
   searching journals.asm.org directly.
3. `WebFetch https://journals.plos.org/plosone/article/file?id=10.1371/journal.pone.0071243&type=printable`
   (Zhang et al., "Genome Sequencing and Analysis of BCG Vaccine Strains", PLOS ONE) → identical
   `PROXY_REJECTED ... HTTP 429 ... Do not fetch this page again, even after waiting`. **Not retried.**
   So that paper is **COULD NOT READ**; nothing about its contents is asserted here. It remains the
   obvious next candidate for a genuinely multi-substrain BCG comparison, which Borgers et al. is not.
4. Pre-existing proxy log for this session's machine also shows today's 403 CONNECT denials for
   `www.nature.com:443`, `link.springer.com:443`, `doi.org:443`, `www.biorxiv.org:443`,
   `api.elifesciences.org:443`, `www.ncimb.com:443` — consistent with the earlier readers' Springer 429
   and blocked-PMC reports, and explaining them as host-level policy rather than per-paper paywalls.
5. PMC / Europe PMC: **not attempted** (hard-blocked per the brief). PMC6544187 and PMC6615170 were
   treated as identifiers to convert, which succeeded for both.
6. Summariser refusals (not document absences): the first journals.asm.org pass and the first BMC pass
   both answered "I can't reproduce the full article verbatim under the quoting limits". Quotations
   throughout are therefore short and several came back truncated near 125 characters; where that
   happened it is flagged, and fragments are never stitched.

## Reader's own errors and caveats

- Used the full fetch budget (7/7), two of which were proxy refusals, leaving no fetch for an
  un-primed third pass or for a second Source 2 paper. Searches: 5/7.
- No FULL TEXT RAW read was possible for either source (curl policy-denied), so every quotation here
  is summariser-mediated. Treat exact punctuation and clause order as unverified even where wording is
  reported as verbatim.
- Author lines were checked against each publisher's own first page, as required, but superscript
  affiliation markers could not be verified and Crossref could not be used as the cross-check.
- Source 2 is a reference-genome paper with a comparative component, not a dedicated daughter-strain
  comparison. That is a real limitation of the answer to (e), and it is reported rather than papered
  over.
