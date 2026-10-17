# purge_dups verification notes (2026-10-17)
Budget used: 2 searches (0 refused), 6 fetches. All page text came via a summariser, not raw; quotes are as relayed.

## Searches
1. "hifiasm purge duplication -l 0 1 2 3 ..." -> titles only; hifiasm readthedocs parameter reference found.
2. "Roach Schmidt Borneman 2018 Purge Haplotigs ..." -> titles only (PMC6267036, BMC figure/table pages). Not opened.

## URLs
- doi.org/10.1093/bioinformatics/btaa025 -> 302 to academic.oup.com (not auto-followed)
- academic.oup.com/bioinformatics/article/36/9/2896/5714742 -> OPENED (main text, summarised; supplement not read)
- github.com/dfguan/purge_dups -> OPENED (README)
- raw.githubusercontent.com/dfguan/purge_dups/master/README.md -> OPENED
- raw.githubusercontent.com/dfguan/purge_dups/master/src/purge_dups.c -> OPENED (summariser reported it was eg.c content; flag/threshold parsing in opt.h not seen)
- hifiasm.readthedocs.io/en/latest/parameter-reference.html -> OPENED
- NOT opened: purge_haplotigs paper (PMC6267036 / BMC / doi 10.1186/s12859-018-2485-7) - fetch budget exhausted. COULD NOT READ.

## Strings checked
Paper: "does not exhibit signs of significant overpurging"; "has only a limited ability to explicitly handle repeats"; heterozygous step "both contigs fall below the cutoff" (relayed paraphrase).
README: JUNK = avg cov below low; contigs below mid tested for haplotypic duplication; above high -> REPEAT; "it may delete false positive duplications" (get_seqs without -e); "purged assembly size smaller than expected" (cutoffs too high, low-het species); FAQ Q5 "Some of them are real, while others may not."; "limited extent" repeats.
README does NOT define HAPLOTIG, HIGHCOV, OVLP. Paper does not either.
Code (via summariser): dup_type_s = {JUNK,HIGHCOV,HAPLOTIG,PRIMARY,REPEAT,OVLP,UNKNOWN}; classify_seq: low>min_frac->JUNK, else dip->PRIMARY, else high->HIGH, else HAPLOTIG (fallback); cal_cov_4reg per-hit labels; flt_by_bm_mm: bm>=min_bm and mm<min_mm -> HAPLOTIG (alignment-only, no coverage); flt_hits3 drops hits with qcov/tcov > dip_cut or < low_cut when usecuts.
hifiasm docs: -l "0 to disable, 1 to only purge contained haplotigs ... 3 ... most aggressive"; default 3 non-trio, 0 trio; --purge-max "If the coverage of a contig is higher than this bound, don't apply purge duplication"; "may collapse repeats or segmental duplications"; -s default 0.75 (-l1/2), 0.55 (-l3).

## Conclusion
PARTIALLY CONFIRMED. Coverage gating is the documented design (contigs below mid tested; both below cutoff for het overlaps), but no source says a diploid-depth sequence "cannot be removed at all"; code as relayed has an alignment-based HAPLOTIG branch lacking a coverage test, and README/paper both concede false positives are possible. No false-positive rate on genuine duplications reported. Unverified inference: near-identical paralogs can multi-map and show reduced depth.
