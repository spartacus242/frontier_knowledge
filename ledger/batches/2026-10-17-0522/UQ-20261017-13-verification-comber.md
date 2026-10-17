# UQ-20261017-13 verification: MAUP in spatial transcriptomics
Budget used: 7 searches (none refused), 6 fetches (none refused). All fetches were summarised by a small model, so quotes are as relayed, not eyeballed from the PDF.

## Searches
1. Comber Zormpas Queen Cockell title -> found AGILE-GISS 5, 21, 2024 page; STExplorer biorxiv PDF; White Rose eprints.
2. STExplorer MAUP geographically weighted -> biorxiv 10.1101/2025.01.17.633539 PDF.
3. SVG sensitivity to bin size / MAUP -> only 10x tech note, sainsc, splisosm tutorials; no systematic study.
4. "modifiable areal unit problem" spatial transcriptomics bin size benchmark SVG noise floor -> SVG benchmarks (PMC12445034, biorxiv 2023.12.02.569717, 2024.07.04.602147, PMC10506280); none opened, titles only; none visibly about aggregation support.
5. Effect of binning on SVG/domains Visium HD/Stereo-seq -> tutorials, Bioinformatics btae546 (title unknown), OSTA; none opened.
6. MAUP scale effect ST preprint 2025 -> only geography/political-science MAUP papers.
7. "Bioinformatics 2024 btae546" -> failed to identify the paper (unresolved). Not opened.

## Fetches
1. arxiv.org/abs/2602.02825 -> Su, Fung, Wang, Yang, Knowles, Rabadan, "On the consistent and scalable detection of spatial patterns". Abstract summary mentions no bin sizes (abstract page only).
2. agile-giss.copernicus.org/articles/5/21/2024/ -> abstract page; string not on page; abstract names spatial autocorrelation, non-stationarity, MAUP.
3. arxiv.org/html/2602.02825v1 -> full text: 8 um vs 16 um Visium HD comparison present (see below).
4. agile-giss PDF (prompt 1) -> "completely unknown" / "ignored" present.
5. agile-giss PDF (prompt 2) -> sentence quoted in context.
6. biorxiv STExplorer PDF -> MAUP named; no support-dependence test.
Not opened: PMC, Europe PMC, PubMed (blocked), btae546, SVG benchmark papers, Comber & Harris 2022.

## Strings checked
- "completely unknown and ignored": present verbatim in the AGILE PDF, Section 3 Example 1: "The choice of aggregation unit will influence process understanding through scale (MAUP) driven distortions but this is completely unknown and ignored." Not on the abstract page. Subject of "this" = the MAUP-driven distortion.
- "Despite the MAUP being a core consideration in all analyses of spatial data, its effects are rarely tested for" (Section 6; general, not ST-specific).
- Comber paper runs no analysis; position paper; Figure 1 = example ST data (Spaniel).
- STExplorer: "Firstly, the MAUP highlights the impact of spatial data aggregation scale on statistical relationships"; "high- resolution platforms, like Stereo-seq or Visium-HD, may introduce artificial ecotones by binning data." Analyses on Visium spots only; no bin-size test; only GWPCA/GWR bandwidth varied, no sensitivity analysis reported.
- arXiv 2602.02825: "the 'Swiss roll' pattern introduced during sample preparation was preferentially detected at 8 um resolution"; "due to signal dampening at the 16 um Nyquist limit"; "comprising 164,800 bins at 16 um resolution, and 656,788 bins at 8 um."

## Conclusion
See structured output. Decisive question: nothing found, but search coverage thin (no fetch of any SVG benchmark); absence is "not found in 7 searches", not "does not exist".
