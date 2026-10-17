# UQ-20261017-49 notes (7 searches, 6 fetches used)
All fetches went through a summariser; read levels are per the summariser's coverage.

(i) Vendor ownership
- arxiv.org/abs/2609.40295 (ABSTRACT ONLY): authors Russell, Glickenhaus, Thai, Wieting, Iyyer, Spero, Emi; no affiliations on abs page.
- arxiv.org/html/2609.40295 (PARTIAL FULL TEXT: abstract, intro, Sec 2-4, most of Table 1; appendices/refs/Sec 5-6 only as TOC): Glickenhaus, Thai, Spero, Emi carry Pangram icon / "Pangram Labs" header (icon mapping inferred by summariser); footnote "Work done during an internship at Pangram Labs" (author unnamed). No competing-interest statement seen. Error rates 0.05% FPR / 1.99% FNR attributed to Glickenhaus et al. 2026; EditLens to Thai et al. 2026. No Rogan-Gladen/sensitivity/specificity terms in the portion read.
- pulse2.com Spero interview (FULL TEXT of page as summarised): Spero = co-founder/CEO of Pangram, Emi co-founder; commercial: revenue, $4M seed, enterprise contracts.
- Pew methodology page (FULL TEXT as summarised): authors Bestvater, Smith, TerBush, Baronavski, Chavda; no Pangram authors credited; uses Pangram open model editlens_Llama-3.2-3B and Pangram 3.3 on 62,370 pages; kappa 0.61 between the two Pangram models; no prevalence correction, no human-labelled validation sample, no human labelling cost/agreement.
- Net: the paper that reports filter survival of AI text is co-authored by staff of the vendor of the detector. Pew (independent) used vendor models but no vendor authors. Not established: whether other detector owners (GPTZero, Originality etc.) have corpus-composition work; not searched.

(ii) Rogan-Gladen traffic into NLP
- arxiv.org/pdf/2601.17036 (Elazar & Antoniak, cs.DL preprint; PDF as summarised): DOES use Rogan-Gladen to calibrate Alpha-estimator output with pre-LLM CS papers; Pangram uncorrected because zero FPs; acknowledges Pangram platform credits. Venue not stated (arXiv only). So there is at least one NLP-adjacent author pair using it, on arXiv papers, not corpus construction.
- Other search hits for "Rogan-Gladen" (2605.20668 AI reviewers, 2606.10315 LLM-as-judge, 2601.10338 agent skills, Indeed blog) = SEARCH SNIPPETS ONLY, titles only; not opened.
- aclanthology N18-1148 (Card & Smith 2018, calibration for estimating proportions from annotations): SEARCH SNIPPETS ONLY (title/URL only), related method, not opened, not confirmed to cite Rogan-Gladen.
- No count of citations into ACL/EMNLP/NAACL was obtained; search engine cannot do citation counts. Absence of NLP-venue citation traffic NOT established.

(iii) Hand-labelling infeasibility
- arxiv.org/html/2501.15654v2 (Russell, Karpinska, Iyyer; PARTIAL, first 100,000 of 116,233 chars): ~300 English nonfiction articles; 5 expert annotators majority vote misclassified 1/300; ~ $4.9K total; summariser says paper states cost limited sample size and manual review cannot scale to high-volume low-stakes tasks (paraphrase, not verbatim). IAA statistic not seen in portion read (not the same as absent). Co-author Russell is also first author of 2609.40295; Iyyer too.
- Other search hits (RoFT 2010.03070, Scarecrow 2107.01294, 2406.18259) SEARCH SNIPPETS ONLY.
- No source found stating web-scale (pretraining-corpus-scale) hand-labelling infeasible with a cost per document.
