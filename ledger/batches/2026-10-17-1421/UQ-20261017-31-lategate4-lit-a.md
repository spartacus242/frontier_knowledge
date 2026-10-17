# Lit check notes (searches 9/9, fetches 6/6; all fetch reads went through WebFetch summariser, not raw text)
Searches (WebSearch returns titles/URLs only, no snippets):
1 ambient RNA deconvolution external ref... -> decontX/celda vignettes, Genome Res decontX; nothing on composition recovery
2 ambient RNA bulk deconvolution CIBERSORT/MuSiC/BayesPrism empty droplets -> only generic deconvolution papers (MuSiC2, sc+sn integration)
3 dissociation bias cell type loss ... -> Wu sc vs sn (PMC9794763), Denisenko, Andrews liver
4 ambient soup reflects cell types lost (extended) -> SoupX, EmptyDrops, tutorials; no hit
5 RNA content per cell type -> arXiv 2305.06501 / GenomeBiol s13059-023-03123-4 (cell size deconvolution)
6 ambient RNA hepatocyte/adipocyte/neuron -> Ambient RNA analysis brain snRNA (bioRxiv 2022.03.09.483658)
7 fraction of cells lost per type correction (extended) -> deconvolution papers, Denisenko, sNucConv, Cell Rep Methods 2026
8 ambient empty droplets deconvolution reference atlas -> SoupX/EmptyDrops docs only
9 Monaco 2019 mRNA abundance -> PMC6367568 listing only
Fetches:
1 arxiv.org/abs/2305.06501v1 -> worked, ABSTRACT ONLY
2 biorxiv 2022.03.09.483658.full.pdf -> worked (summariser)
3 biorxiv 832444v2.full (Denisenko) -> worked (summariser)
4 cell.com Cell Rep Methods S2667-2375(26)00046-9 -> FAILED (error)
5 dspace.mit.edu Andrews 2021 Hepatol Commun PDF -> worked (summariser)
6 doi.org/10.1016/j.celrep.2019.01.041 (Monaco) -> redirect to linkinghub.elsevier.com, not followed (budget exhausted) -> COULD NOT READ
