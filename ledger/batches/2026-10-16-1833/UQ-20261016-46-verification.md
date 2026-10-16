# UQ-20261016-46 verification: Carlini et al. arXiv:2302.10149
Searches run: 0 (not needed; direct arXiv pages used). Fetches: 4 of 5.
## URLs
- https://arxiv.org/abs/2302.10149 : opened. Abstract only; no CC-3M mention (expected for abs page).
- https://arxiv.org/html/2302.10149 : opened 3 times with different prompts (summariser outputs, not raw text).
## Strings checked (one at a time)
- "we find just one domain has our attack signature" : present, Sec IV-D Results. Full: "Among all domains hosting more than 10 images, we find just one domain has our attack signature when comparing images with perceptual similarity."
- "we find two additional domains that have been repurchased" : present (cryptographic hash comparison).
- "still resolve" / "different content" / "serve different" : NOT present.
- Sentence giving % of CC-3M URLs resolving-but-changed: NOT found. Table I: CC-3M 1.04% expired domains (DNS record does not exist), >=0.08% buyable for $1K. Body dates DNS checks May and Aug 2022 (summariser also said buyable figures dated Aug 2022; caption says 2023; cost from Google Domains July 2023).
## Conclusion
Q1: No. Paper reports no count/share of CC-3M URLs that resolve but serve different content. Only a domain-level count (1 domain by perceptual similarity among domains >10 images; +2 by hash, judged benign) with no date for that analysis.
Q2: Perceptual similarity vs original raw CC-3M images (CLIP embedding named as example; exact CC-3M method not named by the summariser), also cryptographic hash comparison (flags benign re-encoding), plus WHOIS last-purchase date for ownership change.
Q3: Distinct in method (DNS-expiry vs content comparison) but content substitution is reported only as a brief domain count, not a URL/image fraction.
Caveat: findings rest on the fetch summariser, not a raw page read; 125-char cap on quotes.
