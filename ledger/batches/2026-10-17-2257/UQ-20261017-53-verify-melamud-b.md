# UQ-20261017-53 verify melamud-b

Read level: PARTIAL FULL TEXT (OUP page: Abstract, Background, Methods, Results, figure legends; Discussion text NOT present; truncated mid Model 3). All via summariser.

## Calls (6 searches, 5 fetches)
S1 topic search (Melamud Moult splicing noise EST) -> list incl. OUP NAR 37(14):4873; PMC links (blocked, not opened)
F1 academic.oup.com/nar/article/37/14/4873/1087517 -> OK; title/authors/aim sentence
S2 title search -> OUP again, no new
F2 drum.lib.umd.edu (Melamud 2007 thesis item) -> metadata only, not the NAR paper; not opened further
F3 doi.org/10.1093/nar/gkp471 -> 302 to OUP
F4 OUP again, targeted -> full text partially present; no estimators; "only a fraction of all isoforms have so far been observed"
S3 (extended) richness estimators long-read unobserved isoforms -> generic Chao pages, sorghum/breast cancer long-read papers (not opened)
S4 "unseen" isoforms Chao/Good-Turing -> RNA-seq abundance papers; bioRxiv Perplexity paper
S5 title/abstract search restricted domains -> nothing relevant
F5 bioRxiv 2025.07.02.662769 (Schertzer...Knowles, Perplexity) -> full text read; no richness estimators
S6 (extended) richness estimators on isoforms long-read -> assessment/tool papers only (Isopedia etc.), not opened

## Findings
1. Melamud E, Moult J. Stochastic noise in splicing machinery. Nucleic Acids Res 2009;37(14):4873-4886. doi:10.1093/nar/gkp471
2. Aim sentence (single exact fragment): "In this paper, we propose that most alternative splicing events are the result of noise in the splicing process." Abstract summarised: number of isoforms/abundance predicted by stochastic model from intron count and expression level; error rates ~1-10%.
3. Per-gene count of unobserved isoforms: NOT FOUND in the portions read (no Discussion text). Paper says "only a fraction of all isoforms have so far been observed" but does not estimate how many remain. It handles sampling by simulating virtual cDNA libraries (3 error models) vs observed EST data; uses EST count as surrogate for expression rate.
4. Species-richness estimators: NOT FOUND (no Chao/ACE/Good-Turing/rarefaction in read text; Discussion unread).
5. Per-gene richness estimates of unobserved real isoforms on long-read data: NOT FOUND within 6 searches. Nearest: Schertzer et al. 2025 bioRxiv (Perplexity metric), explicitly uses detected isoforms only, no richness estimator.
