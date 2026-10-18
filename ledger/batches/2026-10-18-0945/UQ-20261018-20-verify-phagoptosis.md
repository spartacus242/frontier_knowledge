# UQ-20261018-20 — Source read: Brown, "Cell death by phagocytosis" (Nat Rev Immunol)

**Source as briefed:** Brown G.C., Nature Reviews Immunology (2023), doi 10.1038/s41577-023-00921-6
**Read level: FULL TEXT (via summariser)** — of an author-hosted publisher-typeset PDF, NOT of the nature.com published page.
**Version read:** publisher-typeset PDF ("Review article", running header "Nature Reviews Immunology", printed DOI https://doi.org/10.1038/s41577-023-00921-6, "© Springer Nature Limited 2023"), hosted by the author at microglia.info and served from
`https://static1.squarespace.com/static/601862527ca7cc6a4ea9ea59/t/64e5ec11fa1a50530b0701b1/1692789781085/PhagoptosisReview.pdf`.
Its "Published online:" line is a blank placeholder (`xx xx xxxx`) and it carries no volume/page numbers, so it is the typeset accepted/proof version rather than the final paginated issue PDF. Text content should be treated as the published text but I cannot certify it against the nature.com copy, which I could not reach.
**NOT raw:** curl is blocked for every host at this session's egress proxy (CONNECT 403), so FULL TEXT RAW was unattainable. Everything below passed through the WebFetch summariser, which truncates quotations near 125 characters. Where that happened I report the fragments as returned, labelled, and I have not stitched fragments into single quotations.
**Verbatim coverage:** abstract (prevalence sentences), Introduction opening + "no corpse" passage, the complete subsection "Turnover of erythrocytes and neutrophils" (all 16 sentences), one sentence of "Relationship of phagoptosis to other forms of cell death", partial Box 1, partial Conclusions. The sections "Mechanisms of phagoptosis", "Immunity by phagocytosis", "Cancer", "Neurology", "Senescence and ageing" were covered only by a whole-document summariser scan (which did return figures from those sections), not transcribed.

## Q1 — Identity, title, author line, citation

- **Title, from the document's own first page:** "Cell death by phagocytosis". Article-type label on the page: "Review article".
- **Author line as printed, in printed order:** "Guy C. Brown" — one name, no co-authors. Affiliation printed: "Department of Biochemistry, University of Cambridge, Cambridge, UK"; e-mail printed on the page (not reproduced here).
- **Single-author: YES.** Two independent supports: (i) the PDF's own first page carries only that one name; (ii) the publisher page (link.springer.com) states "The author is the sole contributor to this article."
- **Journal/year/volume/pages:** Nature Reviews Immunology. The PDF prints no volume or pages and shows "© Springer Nature Limited 2023" with a placeholder online-publication date. The publisher page gives **volume 24, pages 91–102**, and renders the year as **2024** (print issue); the DOI and copyright line are 2023 (online). So the brief's "(2023)" is the online/DOI year; the citable print citation is Nat. Rev. Immunol. 24, 91–102 (2024).
- **Caveat on the author check:** Crossref's ordered author list was unobtainable (api.crossref.org blocked, see failed routes). The author-order check therefore rests on the document's own first page, which rule 4 accepts as the primary source.

## Q2 — The "most common form of cell death in the body" claim

**VERBATIM. The exact string is in the document.** It is the tail of sentence 8 of the subsection "Turnover of erythrocytes and neutrophils" (under "Biological roles of phagoptosis").

The sentence came back in three labelled fragments (125-char truncation), in this order, in a single request:
- 8a. "Thus, both physiological and pathological death of erythrocytes is mediated by phagocytosis, and as"
- 8b. "erythrocyte turnover is the highest of any cell type in the body, cell death by phagocytosis represents"
- 8c. "the most common form of cell death in the body."

**Un-primed confirmation (rule 6 satisfied).** The string first appeared in a reply to a prompt in which I supplied it, which confirms nothing. I then re-checked by asking for the complete subsection transcribed sentence by sentence, supplying neither "most common" nor "most abundant"; the string came back in position as sentence 8, in a numbered sequence of 16 sentences whose other content is independently consistent. The earlier un-primed pass over the abstract and Introduction found only "most abundant", which is why the two wordings both need reporting:

Two neighbouring but distinct formulations exist, and they are not interchangeable:
- **Abstract:** "Cell death by phagocytosis mediates physiological turnover of erythrocytes and other leucocytes, making it the most abundant form of cell death in the mammalian body." (returned as two fragments; scope word is *mammalian*. Note the document's own wording "erythrocytes and other leucocytes" — erythrocytes are not leucocytes; this appears to be an error in the source text, reported as printed.)
- **Body, same subsection, sentence 16:** "As such, cell death by phagocytosis appears to be the most abundant form of cell death in mammals22." (hedged with "appears to be", scoped to *mammals*, carries reference 22.)
- **Body, sentence 8c:** "the most common form of cell death in the body." (unhedged, scope "the body", carries **no** citation.)

So: anyone quoting "the most common form of cell death in the body" is quoting the document correctly, but is quoting its *unhedged, uncited* formulation, not the hedged/cited one two sentences later.

## Q3 — Scope and basis of the claim

**Scope, in the document's own words:** three different scopes for the same idea — "in the body" (sentence 8c, no species named), "in the mammalian body" (abstract), "in mammals" (sentence 16). The document nowhere says "human body". The supporting arithmetic in the passage is, however, explicitly human ("in humans" three times), so "the body" in sentence 8c is a generalisation from human erythrocyte figures to an unnamed body. Not restricted to a tissue or a developmental stage; developmental cell death is treated as a separate contribution elsewhere.

**Basis: an inference the author draws from cited turnover figures — not a measurement of modality share, not a calculation of one, and not a citation to someone else's share figure.** The sentence's own connectives make the chain explicit: "Thus … and as erythrocyte turnover is the highest of any cell type in the body, cell death by phagocytosis represents the most common form of cell death in the body." The premises are sentence 1 (ref 82) plus the body of the subsection; sentence 8 itself carries no reference number. Sentence 16's restatement cites **reference 22 = Brown, G. C., Vilalta, A. & Fricker, M. "Phagoptosis — cell death by phagocytosis — plays central roles in physiology, host defense and pathology." Curr. Mol. Med. 15, 842–851 (2015)** — i.e. the author's own earlier review, not an external measurement.

**Numbers in and near the passage, with the document's units and aggregation level** (all whole-organism rates or per-cell-type counts in humans; none is a share of cell death by modality):
- Erythrocytes "representing 25% of all host cells in humans" — a share of *host cells*, per human body; not a share of deaths.
- Erythrocytes "turn over every 120 days in humans" — per cell type, point value, no uncertainty stated.
- "the death of two million erythrocytes per second in humans" — deaths per second, whole human body; "which is the highest turnover of any cell type82". No uncertainty stated.
- Erythrocytes "live, on average, 3 months" (stated separately from the 120 days).
- "Neutrophils turn over at the rate of 0.5–1 million cells per second in humans, live for approximately 1 day" — deaths per second, whole human body, stated as a **range** (0.5–1 million/s) with "approximately" on the lifespan.
- "aged" neutrophils = "24 h old".
**My own arithmetic, labelled as such:** taking the document's own point value of 2×10^6 erythrocyte deaths/s and its range of 0.5–1×10^6 neutrophil deaths/s, erythrocytes would be 67–80% of the deaths *among just these two cell types* (2/(2+1) to 2/(2+0.5)). This is my calculation, carrying the document's stated neutrophil range; the document performs no such calculation, gives no denominator for total body cell death, and states no uncertainty on the erythrocyte figure.

## Q4 — What phagoptosis IS, and whether the cell is alive at engulfment

**Yes — the definition turns on the cell being alive when engulfed.** Introduction, first paragraph, sentence 1, returned as two labelled fragments:
- 1a. "Cell death by phagocytosis — also referred to as 'phagoptosis' — is cell death resulting from a live cell being phagocytosed"
- 1b. "by another cell, and the engulfed cell dying due to engulfment and digestion within the engulfing cell."
Sentence 2: "Phagocytosis itself is the broader process of engulfment and digestion of any extracellular particle >0.5 μm in size1."
The abstract introduces the term parenthetically as "(termed 'phagoptosis' for short)". The document has a Glossary, but **there is no Glossary entry for 'phagoptosis'**. The live/dead distinction recurs operationally in Box 1, which lists among the difficulties "detecting whether the cell being phagocytosed is alive or capable of living" (quotation as returned, possibly truncated). The document also treats a subsection "How does the engulfed cell die?" separately, i.e. death follows engulfment rather than preceding it. This is the opposite of efferocytosis/clearance of already-dead cells.

## Q5 — Per-modality share or partition of cell death

**NOT FOUND**, at FULL TEXT (via summariser) read level, including a whole-document scan explicitly asked to enumerate every quantitative figure (that scan did return figures from sections I had not transcribed — "about 26 receptors", "about 30 known opsonins", "about 50 such signals", "pH 4", "within 1–2 min", TREM2 R47H "increases Alzheimer disease risk fourfold", MERTK/AXL knockout "twice as many newly generated neurons to survive" — so it did traverse the document). No percentage, fraction or rate apportions cell death between apoptosis, necroptosis, pyroptosis, ferroptosis, autophagy and phagoptosis anywhere. The 25% figure is a share of *host cells*, not of deaths. The document instead states the partition is unknown, at least for neutrophils (see Q7). This is a NOT FOUND over read text, not a COULD NOT READ.

## Q6 — Undetectable by counting dead or dying cells?

**Found, and stated as the reason the phenomenon was overlooked — Introduction, not Box 1.** Returned as labelled fragments:
- preceding sentence: "Despite being one of the earliest discovered forms of cell death, cell death by phagocytosis was poorly recognized" / "until recently for various reasons21,22."
- target: "One reason is that cell death by phagocytosis leaves no cell corpse to indicate that it has occurred" / "and to diagnose the form of death."
- following: "So, cell death by phagocytosis is normally invisible and leaves no trace — which is one of the benefits to the body —" / "but this is a problem for cell death detectives (see Box 1)."

**Precision point:** the document says the mode leaves no corpse and is "normally invisible and leaves no trace", and that this frustrates diagnosis. On a direct check, Box 1 does **not** say the mode is missed by assays that count dead or dying cells; Box 1's stated difficulties are different ones — that it requires continuous or serial imaging of the same cells ("Imaging phagoptosis can be difficult because it requires continuous" …), that "phagoptosis is a relatively rare event, but then occurs quickly", and the live/dead determination quoted in Q4. So the "no corpse to count" proposition is present in the Introduction's own words; the sharper claim "cannot be detected by counting dead or dying cells in tissue" is an implication a reader would be drawing, not a sentence the document prints.

## Q7 — Is the per-modality share posed as an open question?

**Partly — and not at the scope one might expect. The document poses the share question only for neutrophils, never for the healthy body as a whole.**
- Nearest and strongest, subsection sentence 14: "However, there is evidence of some contribution of apoptosis to the turnover of neutrophils45, and the quantitative" / "contribution of different forms of cell death to physiological turnover of neutrophils is still unclear." — scope: neutrophil physiological turnover, per cell type.
- "Relationship of phagoptosis to other forms of cell death": "Moreover, how widespread this form of cell death is requires further investigation." (preceding sentence: "However, this requires further investigation, and, as outlined below, is not the normal means of killing the engulfed cells.") — an open question about *extent of phagoptosis*, not about a partition across modalities.
- Conclusions, as returned (each flagged truncated by the summariser): "Our current understanding of the mechanisms, extent and significance of cell death by phagocytosis is limited by the paucity" [truncated; continues "of methods to image live cell phagocytosis in vivo"]; "to quantify the contribution of phagoptosis to cell turnover in health or disease"; "Solving these existing methodological issues may enable the true extent and significance of cell death by phagocytosis" [continues "to be properly evaluated"].
**NOT FOUND:** no sentence poses the per-modality shares of cell death in a healthy body or tissue as an open question. The document asserts phagoptosis is the commonest mode and asks how to measure *its* extent; it does not ask what the partition is.

## Failed routes, with exact error text

1. `curl https://api.crossref.org/works/10.1038/s41577-023-00921-6` → `curl: (56) CONNECT tunnel failed, response 403`; proxy status: `connect_rejected`, "gateway answered 403 to CONNECT (policy denial or upstream failure)", host `api.crossref.org:443`, ts 2026-10-18T11:32:50.175Z. Retried once, same error. **Consequence: Crossref's ordered author list was never obtained.**
2. `curl https://www.microglia.info/s/PhagoptosisReview.pdf` → `curl: (56) CONNECT tunnel failed, response 403`; proxy: `connect_rejected`, host `www.microglia.info:443`, ts 2026-10-18T11:33:03.075Z.
3. `curl https://static1.squarespace.com/.../PhagoptosisReview.pdf` → `curl: (56) CONNECT tunnel failed, response 403`.
4. Observed in the proxy's own `recentRelayFailures` list, not a call I issued directly: `connect_rejected`, "gateway answered 403 to CONNECT (policy denial or upstream failure)", host `www.nature.com:443`, ts 2026-10-18T11:32:39.144Z — apparently a redirect target reached during the link.springer.com WebFetch. **Consequence: the nature.com published version was never read.**
5. `WebFetch https://www.microglia.info/s/PhagoptosisReview.pdf` → `REDIRECT DETECTED ... Status: 302 Found`, Location `https://static1.squarespace.com/static/601862527ca7cc6a4ea9ea59/t/64e5ec11fa1a50530b0701b1/1692789781085/PhagoptosisReview.pdf`. Not an error; re-issued against the redirect target, which succeeded.
6. link.springer.com served the article record and abstract but reported "This is a preview of subscription content, log in via an institution to check access" — paywalled, abstract level only. No login was attempted.

None of the above was reworked to get around a refusal; the curl route was abandoned once the proxy refused it for a third host, and no refused call is counted below as a check that ran.

## Budget and self-reported errors

- **Web searches used: 1** (budget 7).
- **Fetches used: 7 WebFetch calls** (budget 7) — 1 × link.springer.com, 1 × microglia.info (returned only the 302 notice, no content), 5 × the squarespace PDF. **At budget, not over.** Separately, **3 curl attempts were refused at the proxy** and returned no content; per rule 10 I log them as failed routes and do not count them as checks that ran. A stricter accountant who counts every outbound attempt would record 10, i.e. an overrun of 3 — flagging that reading explicitly rather than choosing the flattering one.
- **Briefs I could not execute:** (i) the publisher route named in the brief (nature.com) was unreachable, so the *published* version was not read and all wording is from the author-hosted typeset PDF; (ii) FULL TEXT RAW was impossible (curl blocked), so every quotation is summariser-mediated and subject to the ~125-character truncation, which is why most quotations above appear as labelled fragments rather than whole sentences; (iii) Crossref author-order verification was impossible.
- **Residual risk:** fragment-split quotations are each individually under the truncation limit and were returned in one ordered sequence per request, but I have not seen any long sentence as one unbroken string of raw text. The decisive strings for this ledger entry — "the most common form of cell death in the body." (8c) and "making it the most abundant form of cell death in the mammalian body." — are each short enough to have come back whole, so they are not at truncation risk.
