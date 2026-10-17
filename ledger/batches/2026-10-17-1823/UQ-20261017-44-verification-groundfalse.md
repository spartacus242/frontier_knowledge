# Verification notes: Ground False (An, Min, Si, Bastani)
Read level: ABSTRACT ONLY (ICML workshop listing, via summariser) + GitHub README (secondary). Full paper NOT opened.
Budget used: 3 searches, 6 fetches.
Opened: icml.cc/virtual/2026/82611 (abstract); github.com/marcusm117/ProofNet-Verified (README); lacuna summary page (teaser only).
Failed: openreview forum (browser-check interstitial), openreview pdf (fetch error), github error_taxonomy dir (robots disallowed). No arXiv version found in 3 searches.

(1) Exists. Poster at "3rd AI for Math Workshop: Toward Self-Evolving Scientific Agents", ICML 2026, Sat 11 Jul 2026. A WORKSHOP paper, not the main ICML track. Authors One An, Marcus (J.) Min, Xujie Si, Osbert Bastani. OpenReview forum id 5c0RSYyIWW exists (linked, not readable). No arXiv found. Code/data: github.com/marcusm117/ProofNet-Verified.
(2) Abstract: audits 367 ProofNet formalizations; "six other benchmarks" (names and item counts NOT read). 367 correct per abstract; README: ProofNet 371 reduced to 367 after removing 4 non-proof problems. README also audits ProofNet# (367 items; 97/367 = 26.4% errors); unknown whether paper counts ProofNet# among the six.
(3) Abstract: "analyze these errors by provability, logical strength, and root cause". Named, so FOUND at abstract level. Category definitions (stronger/weaker) not read. README root-cause table: misunderstanding of informal statement, missing premise, misunderstanding of Mathlib, missing implicit premise, misunderstanding of Lean, adding extra case, adding extra conclusion.
(4) Abstract: 104 (28%) mathematically false, 100 more (27%) not false but unfaithful, 204 (56%) unfaithful, all over the 367 ProofNet items. README: 204/367 = 55.6%. Range 4.8% to 60.0% = unfaithful-ground-truth rates from applying the pipeline to the six OTHER benchmarks (per abstract).
(5) Comparator: not established from the paper. Abstract says only "faithfulness"; README pairs each entry's informal_stmt with formal_stmt and has categories "Ambiguous NL"/"Wrong NL", implying the benchmark's shipped informal statement is the comparator. No evidence of a published-theorem comparator seen. Inference from README, not from the paper.
(6) Covariates (age, length, subfield, source): COULD NOT READ paper. Abstract and README silent.
(7) "curatorial process" sentence: COULD NOT READ paper. Not in abstract, README or Lacuna teaser.
(8) Axioms: COULD NOT READ paper. Abstract and README silent.
