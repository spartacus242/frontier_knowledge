# UQ-20261016-46 Gate 4 (late, separate) adversary log

Restatement: For URL-manifest image/text corpora, (i) is the subset that still resolves at date T a covariate-selective thinning of the manifest as published (retention ratios, CIs, out-of-fold AUC on manifest fields), and (ii) does training on that subset vs a size-matched random subsample of the same archived manifest move the benchmark average outside a +/-2 SD seed band. Limb (ii) needs bytes of the t0 content.

Budget: 12 searches (all used), 5 fetches (all used; one returned an Anubis Access Denied page). Not run: any read of the Lakic paper itself, any read of Zubiaga 2018, GH issue #3 comments, any check of the Multimedia Commons coverage numbers.

## Queries (all in vocabularies the record did not try)
1. CC12M / Conceptual Captions missing images fraction vanished -> generic CLIP papers, nothing on point.
2. YFCC100M Multimedia Commons AWS deleted Flickr mirror (answer-side for P7) -> SIGMM guide, AWS registry; OPENED SIGMM page.
3. "dataset shrinkage"/"dataset decay" partially downloaded dataset accuracy -> noise; UZH link-rot hits first appear (not understood yet).
4. survivorship bias web image dataset expired links ImageNet/Open Images/Flickr -> Hong 2506.17185, 2511.08637 (known), UZH hit again.
5. Common Crawl re-crawl content drift -> patents, Pew link-rot blog, web-characteristics notes; nothing on training corpora.
6. Chinese-language LAION link failure query -> LAION papers, Re-LAION-Caption; nothing.
7. Re-LAION-5B vs LAION-5B trained-model comparison (answer-side, natural experiment) -> LAION-5B paper, Re-LAION-Caption 2507.05300 (not opened); no trained-model comparison found in snippets.
8. MNAR / unavailable examples in video datasets (Kinetics, YouTube-8M) leaderboard -> unrelated; 1811.11815 opened (abstract only: generic availability remark, no attrition study).
9. Kinetics-400 videos unavailable reproduction accuracy -> many Kinetics users, no attrition-vs-accuracy study surfaced in snippets.
10. link rot ML datasets content-hash datasheets versioning -> UZH ifi-ddis item again, ecoevorxiv data-availability material.
11. "Link-Rot in Web-Sourced Multimedia Datasets" Lakic MMM 2023 (title and co-authors NOT confirmed from an opened source; the title was my guess from the blog framing) -> SIGMM MDRE overview, UZH blog, dblp; abstract not reached.
12. Springer MMM 2023 link rot web-sourced multimedia datasets abstract -> same UZH/SIGMM hits; abstract not reached.

## Opened
- https://records.sigmm.org/?p=6300 : "The images and videos included in the YFCC100M can be accessed and even downloaded freely from an AWS S3 bucket"; "a tiny percentage of images and videos are missing from the bucket" because they "had disappeared when organizers started the download process"; also "a growing number of images and videos is becoming unavailable due to the natural lifecycle of digital items".
- https://files.ifi.uzh.ch/ddis/blog/ifiblog/?p=797 (UZH DDIS blog, 25 Jan 2023, "Award for Paper Based on Student Thesis", Viktor Lakic, best-paper award at MMM 2023): thesis looked at "the decay happening in datasets when the resources that Web-URLs point to become unavailable"; Link-Rot "can cause problems for reproducibility, as datasets can shrink over time." Does not state which datasets, whether selectivity was analysed, or whether any model was trained.
- https://arxiv.org/abs/1811.11815 : not an attrition study.
- zora.uzh.ch publication page: Access Denied (Anubis), unread.
NOT opened: merlin.uzh.ch/publication/show/23568, SIGMM MDRE overview, dblp, arXiv 2507.05300, 2511.08637.

## Attacks
1. Triviality - Resolved. Given facts: Carlini reports no URL-level substitution rate; Hong gives n=1000 vs 1000 descriptive "slight". No source I found answers (i) with CIs/AUC or (ii) at all. Not answerable in a page.
2. Disguise - Partial. 12 new-vocabulary queries; none found limb (ii) or an AUC/CI selectivity study. But a multimedia-community paper on link rot / dataset shrinkage and reproducibility (MMM 2023 best paper, per UZH blog) exists and I could not read it. If it measures covariate-selectivity across URL datasets it would pre-empt limb (i) in part; it very likely does not train models, but that is unverified. Cannot be marked Unresolved without reading it; promotion condition: read that paper's abstract/method (unit, endpoint, comparator, estimand).
3. Combinatorial novelty - Partial. Limb (i) is a transplant (Elmas persistence bias x Acuna method), but limb (ii) is a real interface problem (does attrition reach a trained model); no source shows it is vacuous.
4. Presupposition failure - Partial. P7 is the live one. New evidence: YFCC100M has a byte-level archive (Multimedia Commons S3) with a "tiny percentage" missing, so limb (ii) has a site, contrary to the record's NOT VERIFIED. Scope check: that is a 2014 Flickr corpus, not LAION/DataComp/OBELICS, and the record's own worry (thin covariates, no modern suite) stands. The archive also being itself incomplete means "t0 content" is approximate. Not a kill; not fully repaired. Also P4/P5 (small-scale null, suite sensitivity) remain contested as the record says; I found no source on either.
5. Vagueness - Partial. Decision rules are pre-registered, so an answer is possible; but a +/-2 SD band from k=5 seeds is a noisy tolerance and could make "immaterial" cheap; unevidenced either way.
6. Significance inflation - Partial. Audience is real in part (datacomp issue #3 quote in the record, Re-LAION edits), but willingness to fund limb (ii) is unevidenced.
7. Reason for silence - Partial. The record's mechanisms explain why answering is hard (legal, compute, disciplinary) more than why nobody asked; the UZH item suggests the multimedia community asked a neighbouring question in 2023, which weakens "no one framed it". Mechanism 3 (boundary) and 2 (engineering classification) remain plausible but unevidenced; GH issue comments unread.
8. Dissolution - Partial. Limb (i) may dissolve into "domain concentration gives some selectivity" (near-certain, hence uninformative unless AUC/magnitude is the point); limb (ii) may dissolve into a small-scale null. Both are informative answers per the record, so not dissolved.

## Verdict: Provisional. No attack Unresolved; Disguise Partial with a named unread prior; P7 partly repaired by YFCC100M archive evidence.
