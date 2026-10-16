# UQ-20261016-58 verification: RIN as hard gate vs advisory in biodiversity genomics
Budget used: 5 searches, 5 fetches (fetch pool exhausted; 1 search unused).

## Searches
1. "Darwin Tree of Life RNA sample QC RIN threshold submission guidance" -> only generic core-facility PDFs (EMBL, Exeter, Liverpool, BCGSC); no DToL document.
2. "Earth BioGenome Project sample standards RNA RIN minimum invertebrate 28S hidden break" -> EBP standards page, GigaScience 2025 sample-collection report (PMC12121479, blocked), Deleo 2018 (FIU record).
3. "Darwin Tree of Life Sanger sample manifest RNA extraction RIN ..." -> Sanger ToL bioRxiv 2025.04.11.648334 and protocols.io Sanger ToL RNA protocols.
4. "Darwin Tree of Life RNA extraction RIN Illumina Iso-Seq insects ..." -> same protocols.io set; no new documents.
5. "core facility RNA submission guideline insects invertebrates RIN not reliable 28S hidden break..." -> research papers on hidden break (PMC4342065, PMC6994094, PeerJ 1436, J Insect Sci 2010, USDA Agilent note); no core-facility guideline.

## Opened
- https://www.earthbiogenome.org/sample-collection-processing-standards : landing page with abstract only. No RIN/RQN/28S/rejection text. Full report (GigaScience 2025, PubMed 40440092) NOT opened.
- https://discovery.fiu.edu/display/pub78904 (Deleo et al. 2018, Biomethods, doi 10.1093/biomethods/bpy012): abstract only. RIN "was developed based on model bacterial and vertebrate organisms"; 28S "highly prone to a form of denaturation known as gap deletion"; pattern often "misinterpreted as a 'degraded' rRNA profile"; collapse seen in ~90% of species sampled, >half of major arthropod lineages. No submission thresholds in abstract.
- https://www.biorxiv.org/content/10.1101/2025.04.11.648334.full.pdf (Sanger ToL core lab, first 2000 species): no mention of RIN, RQN, integrity, 28S. Quality by Qubit RNA BR and Nanodrop. Only numeric criterion: "a total RNA yield over the 100 ng input requirement for our standard library prep and sequencing process". Failure handling: "For samples that fail, a different individual, different tissue type(s) and/or increased input amounts can be used". Also "many failed extractions originate from samples not preserved in the ideal way." Pass rate ~100% most taxa, protists 92%.
- https://www.protocols.io/view/sanger-tree-of-life-rna-extraction-manual-trizol-cy3kxykw.html : no RIN/RQN/28S/integrity. Only numeric: "Partially dissolved RNA samples have an A230/280 <1.6" (dissolution flag, not gate). Step 24 "with the required QC" without criteria.
- https://www.protocols.io/view/sanger-tree-of-life-sample-preparation-triage-and-cztex6je.pdf : no RIN/RQN/28S. Weight-based rules only ("If less than 40 mg do not proceed", plant POE). Refers to an "RNA Decision Making Tree" in Appendices (not read).

## NOT opened / failed
- PMC12121479 and PMC6994094 (PMC blocked per brief); Deleo full text therefore not read.
- GigaScience EBP report full text; Sanger automated MagMax RNA protocol; DToL sample manifest/SOP pages; generic core-facility PDFs (EMBL, Exeter, Liverpool, BCGSC) seen in search results but not opened (fetch budget).

## Conclusion
- Q1: No document opened states a minimum RIN/RQN below which a sample is rejected or re-extracted. Sanger ToL documents do not mention RIN at all; their gate is yield (>100 ng). Did not read the RNA Decision Making Tree or the EBP full report, so absence is "not found in documents opened", not proven absent from programme.
- Q2: No published statement with an integrity score + number found. The only quantified rejection/retry is yield-based (100 ng) and weight-based (40 mg, plants).
- Q3: The hidden-break caveat is documented in primary literature (Deleo 2018 abstract: reads as "degraded" profile; ~90% of species). No programme/core-facility document opened acknowledges it, so no submitter instruction found. Deleo's abstract gives no explicit instruction; the inference that a single ~18S band should not be read as degradation is mine.
