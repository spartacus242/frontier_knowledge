# UQ-20261017-53 verify prior2: Genome Res 2025 35(4):583, doi 10.1101/gr.279865.124

Read level: PDF (publisher PDF genome.cshlp.org/content/genome/35/4/583.full.pdf, via summariser) plus publisher full-text page via summariser. Crossref record for metadata. Quotes below are short fragments passed through a summariser; not verified against raw text.

## Calls
Searches (2 of 6):
1. "10.1101/gr.279865.124 Genome Research 2025" - generic results, no direct hit on article.
2. Title/author search - found genome.cshlp.org/content/35/4/583 (+ .full.pdf), PMC12047247 (not opened, blocked).
Fetches (5 of 6):
1. https://doi.org/10.1101/gr.279865.124 - SERVER_ERROR.
2. https://genome.cshlp.org/content/35/4.toc - SERVER_ERROR.
3. https://api.crossref.org/works/10.1101/gr.279865.124 - OK, metadata.
4. https://genome.cshlp.org/content/35/4/583.full - OK, full text summary.
5. https://genome.cshlp.org/content/genome/35/4/583.full.pdf - OK, PDF summary; confirmed authors, type, quotes.

## Findings
1. DOI resolves (per Crossref; doi.org fetch itself failed) to: "Notable challenges posed by long-read sequencing for the study of transcriptional diversity and genome annotation", Carolina Monzo, Adam Frankish, Ana Conesa. Genome Research 35(4):583-592, 2025. Article type Perspective. Note: one fetch summary said "written by Ana Conesa" alone; PDF and Crossref both list three authors.
2. Perspective on long-read RNA-seq (LRGASP context): separating technical errors from rare genuine transcripts; annotation strategy. Does touch isoform discovery and false-positive novel structures (RT errors, mispriming, intrapriming, template switching; SIRV spike-in baseline; strict filtering vs sensitivity trade-off; replication across 5 mouse brain samples). No saturation analysis.
3. Unit/endpoint/comparator/estimand: no formal estimand. Closest quantitative item: excess of non-FSM reads in mouse brain over SIRV baseline = 10-15% of sequencing output (Fig 2C), described as "only ... a possible upper limit". Unit: reads; denominator: sequencing output; comparator: SIRV spike-in. Perspective with supporting analyses, not a primary study.
4. Undiscovered isoforms per gene or overall: NOT FOUND as an estimate. Only "tens of thousands of novel transcripts" reported (discovered) and speculative "perhaps by many millions" added to reference sets, not modeled and not per-gene.
5. Growth with depth: FOUND, as a statement: "sampling depth will increase and many novel transcripts will be captured by reads at a quality that will allow them to be accurately mapped." (PDF summary; shorter form in HTML summary: "Put simply, sampling depth will increase and many novel transcripts will be captured.") Note it is about increasing depth capturing more novel transcripts; no saturation curve tested.
