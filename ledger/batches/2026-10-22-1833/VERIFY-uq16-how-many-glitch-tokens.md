# VERIFY - "How Many Glitch Tokens Hide in Popular LLMs?" is not a paper; it is a repost headline for Land & Bartolo 2024 (arXiv:2405.05417), which counts a vocabulary share and no emission rate

Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it: a paper titled approximately "How Many Glitch Tokens Hide in Popular LLMs?" was returned by three separate search sweeps in this batch and OPENED BY NOBODY, with no DOI and no arXiv identifier recovered by any of them - so nothing is known about whether it carries the candidate's quantity.

Verdict in one line: the second half of the claim is now false and the first half is a category error. The string is real, but it is **not a paper title**. It is the headline a third-party repost site put on **one section** of a real paper, and that paper has both an arXiv id and a published ACL Anthology id. It is now opened. It does not carry the candidate's quantity, for a reason that is substantive rather than accidental.

### (a) Does this paper exist, and what is its full citation from its own front matter?

**NOT FOUND as a paper with that title.** No such title exists in arXiv, the ACL Anthology, or any bibliographic record I could reach. What exists is a *republished section* of a real paper, carrying a site-generated question headline.

The page bearing the exact entry title is `https://largemodels.tech/effectiveness-of-indicators-and-verification`. Its `<title>` is "How Many Glitch Tokens Hide in Popular LLMs? Revelations from Large-Scale Testing". Its own attribution block names "(1) Sander Land, Cohere" and "(2) Max Bartolo, Cohere", and carries the line, as served: "This paper is available on arxiv under CC BY-SA 4.0 DEED license." with "available on arxiv" hyperlinked to `arxiv.org/abs/2405.05417`. Note that the URL slug - `effectiveness-of-indicators-and-verification` - is the paper's own section heading; the question-form title is the site's, not the authors'.

**The real citation, from the paper's own front matter (arXiv HTML v1):**

- Title: "Fishing for Magikarp: Automatically Detecting Under-trained Tokens in Large Language Models"
- Authors as printed in front matter: **Sander Land** and **Max Bartolo**, both affiliated "Cohere" (contact `sander@cohere.com`, `max@cohere.com`). The only other front-matter link is the repository `https://github.com/cohere-ai/magikarp`.
- arXiv: **arXiv:2405.05417** [cs.CL]. Submitted 2024-05-08. The abs page as served lists **v2, dated 2024-09-27**, as the current version; it prints **no Comments field, no Journal reference field and no DOI field**.
- Published version: **ACL Anthology 2024.emnlp-main.649** (EMNLP 2024, Main Conference), `https://aclanthology.org/2024.emnlp-main.649/`. I established this id from an Anthology-restricted search result, and I had **no fetch budget left to open the Anthology landing page**, so I do **not** assert a DOI string: the Anthology assigns DOIs under the `10.18653/v1/` prefix, but I have not seen this paper's DOI printed and I will not reconstruct one by pattern.

**Record it as:** DOI not verified / arXiv:2405.05417 (= ACL 2024.emnlp-main.649) + Land, Sander + 2024 + "Fishing for Magikarp: Automatically Detecting Under-trained Tokens in Large Language Models".

**One document, not several.** The same batch sweeps that returned "How Many Glitch Tokens Hide in Popular LLMs?" also returned "Where Glitch Tokens Hide: Common Patterns in LLM Tokenizer Vocabularies" (on both hackernoon.com and largemodels.tech). That is a **second chunk of the same paper** under a second site-generated headline. Counting them as separate returned-but-unopened leads inflates one document into three. I count them as **one title match on one document, and as zero corroboration**.

Two genuinely distinct papers also surfaced in the same sweep and must not be merged into this entry: arXiv:2404.09894 ("Glitch Tokens in Large Language Models: Categorization Taxonomy and Effective Detection") and arXiv:2410.15052 ("GlitchMiner: Mining Glitch Tokens in Large Language Models via Gradient-based Discrete Optimization"). I did **not** open either. They are unread, and their silence is evidence of nothing.

## READ LEVEL

- **largemodels.tech repost of §"Effectiveness of Indicators and Verification"** - **PARTIAL (one section only, as served through the summariser).** Served to me as a third-party republication, not as the paper. Numbers taken from it are flagged below as repost-sourced and **unverified against the paper itself**.
- **arXiv:2405.05417, Land & Bartolo 2024, "Fishing for Magikarp"** - **PARTIAL.** Via `https://arxiv.org/html/2405.05417v1`: front matter; §3.1 (verification procedure and candidate-share figures); Table 1 **caption and column headers only, not its body cells**; §5 (summary figure); the token-category definitions; the indicator definition. **Not FULL TEXT.** I did **not** obtain Table 1's per-model `#Confirmed` values, and I did not read §4 or the appendices.
- **arXiv:2405.05417 abs page** - **FULL (metadata fields only).**
- **ACL Anthology 2024.emnlp-main.649** - **COULD NOT READ.** Located but never opened; fetch budget exhausted.
- **arXiv:2404.09894 and arXiv:2410.15052** - **COULD NOT READ** (not attempted; out of scope and out of budget).

### (b) Read level and failed routes

See above, plus ROUTES THAT FAILED. Net: the entry's named "source" was fully resolved; the real paper was read at PARTIAL level sufficient to answer (c)-(f) on its stated quantities, and insufficient to quote per-model table cells.

## WHAT THE SOURCE SAYS (quotations as served)

Every string below came through the summariser, which caps verbatim quotation at roughly 125 characters. Each is a single short served fragment; I have **assembled nothing** and completed no cut string by inference.

### (c) What quantity does it count - numerator and denominator in the paper's own words

The paper counts **tokens, as vocabulary items, per model** - not corpus occurrences and not generated tokens. It carries **two different denominators**, one word apart, and the entry's attack would turn on which one is read.

**Denominator 1 - tested candidates.** Table 1's caption, as served: the caption opens "Detection of under-trained tokens." and states "#Confirmed are the confirmed/tested numbers for the tokens tested in verification". Column headers as served: "Model", "#Tokens", "Tied Emb.", "#Confirmed", "Examples".

> Scope-setting opener check: the caption's opening words "Detection of under-trained tokens." scope the whole table to a **detection run**, and the `#Confirmed` gloss further scopes the denominator to "the tokens tested in verification". The clause **ASSERTS** a count, but asserts it over a *tested subset*, not a population. Read without that gloss, `#Confirmed` looks like a vocabulary count. It is not.

**Denominator 2 - total vocabulary.** §3.1, as served: "typically ranges between 5-50% of tested candidate tokens, corresponding to 0.1-1% of the total vocabulary."

> Scope-setting opener check: the sentence's opening words "typically ranges" are the **hedge**, and they govern both halves. The clause **ASSERTS** the fractions, in hedged cross-model form. Critically, the two fractions in this one sentence have **different denominators** - "tested candidate tokens" and "the total vocabulary" - and a reader who carries the first number with the second's denominator is off by roughly two orders of magnitude.

§5 restates it, and this is the **hedged formulation I rely on**: "typically around 0.1-1% of the vocabulary consisting of severely under-trained tokens".

> Scope-setting opener check: "typically around" hedges the number; "severely" narrows the numerator class. The clause **ASSERTS** the quantity. I use this wording rather than any bare restatement.

**Repost-sourced, unverified against the paper:** the largemodels.tech page serves "This resulted in 137 out of 31,747 verified tokens compared to 76 of 637 when testing only the top 2% candidate tokens." (Zephyr-beta).

> Scope-setting opener check: the opener "This resulted in" points back to a described methodological experiment - exhaustive testing versus top-2% testing. The clause **RECORDS A MOVE** (it justifies restricting verification to the top 2% of indicator-ranked candidates) at least as much as it asserts a population figure. Treating 137/31,747 as "the glitch-token rate of Zephyr-beta" reads an ablation as a measurement. I did not see this sentence in the paper's own HTML.

**So, on the required formula:** the paper **MEASURES** a vocabulary share - numerator = confirmed severely under-trained tokens, denominator = total tokenizer vocabulary, printed in §3.1 and §5 as a hedged 0.1-1% range across models, with per-model cells in Table 1 under the *tested-candidates* denominator. Per vocabulary, per model. **Not** per corpus occurrence. **Not** per generated token.

### (d) Does it print anything about generation, sampling, truncation, top-k/top-p, or an emission rate?

**Effectively ABSENT.** No mention of temperature, top-k, top-p, nucleus sampling, truncation of the sampling support, or any rate per million generated tokens was served. The only generation-adjacent sentence is the verification procedure: "For each prompt we generate three tokens and check the maximal probability of our target token being predicted."

> Scope-setting opener check: the opener "For each prompt" scopes this to a **per-prompt probe under an adversarial repetition prompt**, not to free generation. The clause asserts a *procedure*, and what it measures is a **maximal predicted probability of a target token the prober chose in advance** - the inverse of an emission rate, which would require unprompted generation and a sampling configuration.

On the required formula: with respect to any emission rate or post-truncation support share, this paper does not even **BOUND** or **PREDICT** the quantity. It is silent.

### (e) Does it distinguish under-trained items from tokenizer-unreachable items, and how?

**Yes, explicitly, as separate categories.** As served:

- "Unreachable: When no input string can result in the token id, we categorize it as 'unreachable'."
- "Partial UTF-8 sequences: The token contains a partial UTF-8 sequence and can not be converted to a string by itself."
- "Special tokens: Manually defined tokens carrying specific meanings as control tokens, such as `<s>`."

And on terminology, the paper restrains itself: "reserving the latter term only for cases in which we have clear indication".

> Scope-setting opener check: this fragment's function is terminological restraint - it **RECORDS A MOVE AWAY** from the stronger word ("untrained") toward the weaker one ("under-trained"). Quoted as if it asserted a finding, it would invert the authors' caution.

The main indicator is defined without a cut-off: the steps are to "Calculate the mean unused token embedding vector" and then "Take the cosine distances" "between this mean unused embedding vector and rows in U'", after removing a constant component, because "care should be taken to remove such a constant component to maximize the separation of unused tokens." On thresholds the paper says the indicators "do not give a definitive threshold."

> Scope-setting opener check: that last clause **DENIES** a threshold. It does not record one. Verification is instead budgeted: it checks "all tokens which rank among the most likely 2% according to the chosen indicator." Consequence: the reported counts are **lower bounds conditional on an indicator ranking**, not exhaustive vocabulary audits, except in the single Zephyr-beta ablation.

## REGIME

**Land & Bartolo 2024, in its own words.** Population: tokenizer vocabularies of open-weight LLMs, one row per model in Table 1 ("Model", "#Tokens", "Tied Emb.", "#Confirmed"). Unit of analysis: **the token as a vocabulary entry**, categorised as under-trained, unreachable, partial-UTF-8, or special. Instrument: **model weights plus adversarial prompting** - an unembedding-geometry indicator ("cosine distances" from the "mean unused token embedding vector", first principal component removed) followed by a prompt-based verification that generates three tokens and reads "the maximal probability of our target token being predicted". Operating condition: **static weight inspection and targeted probing**; no decoding configuration is specified anywhere I read. Threshold: none - "do not give a definitive threshold" - replaced by a **top-2% candidate budget**.

**Does the claim sit inside this regime?** No, in both relevant senses:

1. The entry's claim that nothing is known about the document is outside the regime because the document was misidentified: it is a repost chunk, and the underlying paper is identified, published, and now read.
2. The candidate's quantities - mean step-wise mass, post-truncation support share, emission rate per million generated tokens - are all **decoding-time, probability-weighted** quantities. This paper's regime is **static and unweighted**, one count per vocabulary entry. A result proved under static weight inspection is **silent** about decoding-time rates, not supportive of them and not contrary to them.

### (f) Does it occupy any limb of the candidate?

**No limb.** It occupies a fourth quantity: the unweighted vocabulary share of severely under-trained tokens per model. The required two-direction overlap, taking the closest-looking number (0.1-1% of vocabulary) against the candidate's **post-truncation support share**:

- **Numerator class, with exclusions quoted.** "severely under-trained tokens" - tokens that rank in the top 2% of an unembedding-geometry indicator **and** survive prompt-based verification. Explicitly held in **separate** categories, hence excluded from the numerator: "Unreachable: When no input string can result in the token id"; "Partial UTF-8 sequences: The token contains a partial UTF-8 sequence and can not be converted to a string by itself"; "Special tokens: Manually defined tokens carrying specific meanings as control tokens". Also excluded by construction: anything outside the top-2% indicator ranking.
- **Denominator, checked against near neighbours it is not.** "the total vocabulary" (§3.1, §5). It is **not** "tested candidate tokens" (the other denominator in the very same §3.1 sentence, and the one Table 1's `#Confirmed` uses). It is **not** the size of a truncated sampling support at a decoding step. It is **not** generated tokens. It is **not** corpus token occurrences.
- **What the source's class MISSES relative to the candidate.** Everything decoding-time. It never asks whether an under-trained token enters a top-k or top-p nucleus at any step, so it gives no support share; it never generates unprompted text, so it gives no emission rate; and because its unit is the vocabulary entry rather than probability, it gives no step-wise mass. A 0.1-1% **count** share cannot be converted into a **mass** share without the per-step probabilities the paper does not report.
- **What the source's class INCLUDES that the candidate excludes.** Tokens that are statically under-trained but carry **zero or negligible probability at every decoding step** - which is precisely the expected case for a token the model has barely trained on. These contribute fully to the paper's 0.1-1% and contribute **nothing** to a step-wise mass, a post-truncation support share, or an emission rate. The paper's class also includes tokens reachable only under the adversarial repetition prompt, a condition the candidate's generation-side quantities do not involve.

Both directions are large. The two numbers are not one word apart; they are different objects.

## DEFECTS FOUND

1. **The entry treats a repost headline as a paper title.** "How Many Glitch Tokens Hide in Popular LLMs?" is a headline generated by largemodels.tech / hackernoon over a republished section of Land & Bartolo 2024. The slug of that very page is the paper's own section heading, "effectiveness-of-indicators-and-verification". No bibliographic record carries the question-form title.
2. **"No identifier recovered by any of them" is now corrected.** arXiv:2405.05417, published as ACL Anthology 2024.emnlp-main.649. The identifier was one hyperlink inside the page the sweeps returned.
3. **Three sweeps, one document - and arguably not even one document.** "Where Glitch Tokens Hide: Common Patterns in LLM Tokenizer Vocabularies" is a second chunk of the same paper under a second site headline. The returned-but-unopened list contains **one** underlying paper here, not two or three leads.
4. **The entry's framing - "if this paper prints an emission rate or a post-truncation support share, the candidate is a disguised known" - rests on a premise this read refutes.** The paper prints neither, and not for want of looking: its entire instrument is static weight geometry plus targeted prompting, with no decoding configuration anywhere I read.
5. **A live misquotation hazard inside §3.1.** The sentence "typically ranges between 5-50% of tested candidate tokens, corresponding to 0.1-1% of the total vocabulary" carries two fractions with two denominators. Any downstream use must carry the denominator with the number.
6. **A second hazard: the 137/31,747 figure is ablation output, not a measured population rate**, and I hold it only from the repost, not from the paper.
7. **Nomination discipline.** The kind of document that could settle the candidate's emission-rate limb is one that **generates text under a stated sampling configuration and counts tokens emitted**, reporting a rate with generated tokens in the denominator. Land & Bartolo 2024 is **not that kind** of document. Neither, on its title alone, is arXiv:2410.15052 (GlitchMiner), which is a detection-optimisation paper - and since I did not open it, naming it would be a **guess**, and I call it one. I nominate nothing.

## ROUTES THAT FAILED

- `WebFetch` on `http://export.arxiv.org/api/query?...` - **robots_disallowed**; nothing retrieved.
- `WebFetch` on `https://dblp.org/search/publ/api?...` - **robots_disallowed**; nothing retrieved.
- `curl` on `https://dblp.org/...` - **CONNECT tunnel failed, 403**; the proxy status reported `dblp.org:443 connect_rejected`. Reported, not retried, not routed around. **DBLP is unreachable from this session by either tool.**
- `curl` on `export.arxiv.org` - **could not resolve host**.
- `WebFetch` on `https://api.semanticscholar.org/graph/v1/paper/search?...` - **client_error**; nothing retrieved. **Semantic Scholar's API did not serve this session.**
- ACL Anthology landing page `https://aclanthology.org/2024.emnlp-main.649/` - **not attempted; fetch budget exhausted.** This is why no DOI string is asserted.
- Table 1 body cells, §4, and appendices of arXiv:2405.05417 - **not reached**; same budget.

Of the four locator routes the entry named, two (DBLP, Semantic Scholar) are **blocked or broken in this environment** and one (arXiv API) is robots-blocked to WebFetch. The entry's note that three sweeps failed to recover an identifier is consistent with the environment; the identifier was nevertheless sitting in the returned page's own attribution block.

## BEARING ON THE LEDGER ENTRY

**STRIKE the item from the returned-but-unopened list, and REVERSE the inference the entry hangs on it.**

- Strike it **as a paper**: there is no paper by that title. Replace the list entry with the real citation - **arXiv:2405.05417 / ACL 2024.emnlp-main.649, Land, Sander; Bartolo, Max; 2024, "Fishing for Magikarp: Automatically Detecting Under-trained Tokens in Large Language Models"** - and mark it **OPENED, PARTIAL** by this check.
- Strike the sibling entry "Where Glitch Tokens Hide: Common Patterns in LLM Tokenizer Vocabularies" as a **duplicate chunk of the same document**, not a separate lead.
- **On the novelty question the entry was worried about: this paper does not make the candidate a disguised known, on any limb.** It does not print an emission rate per million generated tokens; it does not print a post-truncation support share; it does not print a mean step-wise mass. It prints an **unweighted vocabulary count share**, hedged as "typically around 0.1-1% of the vocabulary consisting of severely under-trained tokens", under a **static weights-plus-prompting** regime with no decoding configuration. The overlap with the candidate fails in both directions: the paper's class includes tokens with no probability mass at any step, and misses the decoding-time behaviour that is the candidate's entire subject.
- **Narrow, do not strike, one thing in the candidate's favour becoming weaker:** if the candidate's framing anywhere implies that *nobody has counted glitch tokens per vocabulary*, that framing must go. Land & Bartolo 2024 measured exactly that, across many models, and it is the obvious prior-work citation for the candidate's **definition** of its token class - including its exclusions, which the candidate should adopt or explicitly reject ("Unreachable: When no input string can result in the token id"; "Partial UTF-8 sequences ... can not be converted to a string by itself"; "Special tokens").
- **CONVERT to a promotion condition, not an attack:** the candidate's quantity is promotable over this paper only if the candidate reports its numerator and denominator in **decoding-time** terms - probability mass per step, or tokens inside a stated truncated support, or tokens emitted per million generated - and states its sampling configuration. State that condition in the entry. On this read, Land & Bartolo 2024 is a **definition and prior-art citation**, and a **non-evaluation** of the candidate's quantity.
- **Housekeeping for the batch's own failure mode:** this item's whole history is a search sweep returning a URL, nobody opening it, and the unopened URL acquiring the status of a threat. The identifier was one link inside the first page opened. Note in the entry that DBLP and Semantic Scholar are hard-unreachable here, so future sweeps on this ledger should go **arXiv listing -> ACL Anthology -> the returned page's own attribution block**, and should treat any `largemodels.tech` or `hackernoon.com` title as a **repost headline to be resolved to an arXiv id**, never as a citation.
