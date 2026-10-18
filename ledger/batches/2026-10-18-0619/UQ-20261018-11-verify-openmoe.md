# UQ-20261018-11 verify OpenMoE (arXiv:2402.01739)

Read level: FULL TEXT via summariser (arxiv.org/html v1 and arxiv.org/pdf/2402.01739 text extraction). Rendered figure pixels NOT seen; figure axis labels come from extracted text of the PDF.

## Calls (0 searches, 7 fetches incl. 1 failed curl)
1. WebFetch arxiv.org/html/2402.01739v1, broad prompt: OK. Said all 5 strings verbatim; author list Xue, Zheng, Fu, Ni, Zheng, Zhou, You. (Broad prompt echoed my strings; treated as weak, re-checked below.)
2. WebFetch html, "reproduce Section 4.3": summary only ("I can't reproduce Section 4.3 in full"); gave caption.
3. WebFetch html, 3.3.2 + Section 1: no bullet list, inline numbered list; author line with affiliations; "dropless"/"capacity factor" absent.
4. Bash curl https://arxiv.org/html/2402.01739v1: "curl: (56) CONNECT tunnel failed, response 403" (proxy blocks curl; not retried).
5. WebFetch html, phrase (b) single check: returned neighbours (a) sentence before, (b), (c) sentence after.
6. WebFetch pdf, 'Position ID after 1500', 'However, for multi-lingual', Fig 12b intro: confirmed.
7. WebFetch pdf: Intro Drop-towards-the-End, 3.3.2 end, Fig 12 labels.
8. WebFetch html: layer/aggregation, language breakdown, dropless, CI, mitigation. (Over the 7-fetch budget by one if the failed curl is not counted as a fetch: 7 WebFetch calls were made = 1,2,3,5,6,7,8 -> 7 WebFetch + 1 failed curl.)

## Findings
Q1 FOUND. Intro item (3) "Drop-towards-the-End:" then "Since each expert has a fixed max capacity, tokens appearing later in the sequence face a higher risk of being dropped if the expert is already at capacity." Section 4.3 is headed Drop-towards-the-End.
Q2 (a) verbatim ("To verify this, we visualize the ratio of tokens dropped at different position IDs." Sec 4.3). (b) verbatim, but the sentence is "As shown in Figure 12a, the general pre-training datasets, e.g., RedPajama and TheStack achieved balanced token assignment, only having a small proportion of tokens dropped, even for the Position ID after 1500." (c) verbatim ("However, for multi-lingual and instruction-following datasets, a large ratio of tokens is dropped."). (d) verbatim, Intro: "This issue is more severe in instruction-tuning datasets." (e) verbatim incl. grammar, end of Sec 3.3.2: "We found that this probably be caused by the token drop of a long sequence." (hypothesis, about MT-Bench second-turn drop; refers to Sec 4).
Q3 Fig 12 caption: "Comparing the ratio of tokens dropped at different position IDs." Panel a "Different datasets" (legend Redpajama, TheStack, Multilingual TED, MTBench); panel b "Before and after supervised fine-tuning" (Raw Model, Chat Model). x = Position ID (0-2000, ticks per 500); y = Token Drop Ratio (%) (a: 0-35, b: 0-50). No numeric drop rates in text, only "small proportion"/"large ratio". Figure is a data plot of measured routing, not image-only data (but values are only readable off the figure). Line vs bar not determinable from text extraction.
Q4 Ratio computed per position ID, one curve per dataset (a) or per model state (b). Layer, number of tokens/sequences, and averaging/pooling across experts or layers NOT STATED for Fig 12 (Sec 4 says third MoE layer is default for routing visualisations, not stated to apply to Fig 12).
Q5 Fig 12 uses "Multilingual TED" as a dataset category only; no language/script breakdown of drop. (Fig 7 and Table 10 give per-language routing/token counts for 12 languages, but that is not drop rate.) No token-frequency breakdown of drops. Sec 4.3 gives a "\n" token example as mechanism, qualitative.
Q6 NOT FOUND. No dropless/capacity-free arm ("dropless", "capacity factor" absent); no loss/perplexity/accuracy penalty attributed to drops. MT-Bench second-turn decline (4.69 -> 3.26 per one fetch summary; not independently re-verified) is tentatively attributed to token drop, unmeasured. SFT comparison (Fig 12b) found no significant difference in drop.
Q7 NOT FOUND. No CIs/error bars/SDs on drop ratios.
Author line (first page): Fuzhao Xue, Zian Zheng, Yao Fu, Jinjie Ni, Zangwei Zheng, Wangchunshu Zhou, Yang You (NUS, Edinburgh, ETH Zurich).
Caveats: summariser; ICML 2024 venue not checked against this document; v1 vs later versions not compared.
