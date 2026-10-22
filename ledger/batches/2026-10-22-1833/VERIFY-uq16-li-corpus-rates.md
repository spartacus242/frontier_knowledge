# VERIFY - Li et al.'s 3.39% / 2.09% / 2.22% are corpus-occurrence shares, not emission rates; Sec. 8.3 proposes no serving-side mask
Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

Two conjuncts, checked separately.

(1) That 3.39%, 2.09% and 2.22%, which the entry attributes to Li et al., are INPUT-CORPUS OCCURRENCE rates - the share of some corpus's tokens that are glitch/under-trained items - and are NOT emission rates, so they do not occupy the candidate's limb (iii).

(2) That the same paper's mitigation section offers only training-side and activation-side remedies, never a serving-side logit mask over the vocabulary.

VERDICT: both conjuncts HOLD. The numerator/denominator distinction is correct and is in fact stronger than the entry states. Three front-matter/precision corrections are recorded in DEFECTS FOUND; none reverses the entry.

## READ LEVEL

**Source (identified; sub-claim (a)).** The entry carries no clean identifier in its significance paragraph, but the record file names it at P2/P1 as arXiv:2404.09894, and that document matches on every attribute the entry asserts (Table 5 ratios, a Section 8.3 on mitigations with those four proposals). Front matter, taken from the arXiv abs page and the FSE programme page, never from a short form:

> Li, Yuxi; Liu, Yi; Deng, Gelei; Zhang, Ying; Song, Wenjia; Shi, Ling; Wang, Kailong; Li, Yuekang; Liu, Yang; Wang, Haoyu (2024). "Glitch Tokens in Large Language Models: Categorization Taxonomy and Effective Detection." arXiv:2404.09894v3 [cs.CL, cs.SE]. Submitted 2024-04-15; v3 of 2024-04-19.

Venue, established at first hand from the conference programme: **FSE 2024** (ACM International Conference on the Foundations of Software Engineering), **Research Papers** track, session AI4SE 1, Wed 17 Jul 2024. Affiliations as printed there: Huazhong University of Science and Technology (Yuxi Li, Kailong Wang, Haoyu Wang); Nanyang Technological University (Yi Liu, Gelei Deng, Ling Shi, Yang Liu); Virginia Tech (Ying Zhang, Wenjia Song); The University of New South Wales (Yuekang Li).

**DOI: NOT ESTABLISHED.** No DOI appears on the arXiv abs page or on the FSE 2024 programme page, the two pages I opened. I am not asserting a PACMSE DOI, volume or article number from memory. Identifier of record here is therefore arXiv:2404.09894v3 + Li + 2024 + title.

**Read level: FULL TEXT, via https://arxiv.org/html/2404.09894v3, in four passes - BUT MEDIATED, and with one PARTIAL region.** Every pass was served through the summariser, whose verbatim cap is roughly 125 characters, so all quotation below is short fragments and every multi-sentence quotation is labelled a reconstruction. One region is strictly PARTIAL rather than FULL: my request for Section 8.3 in its entirety was **refused by the summariser** as whole-section reproduction, and it returned a summary plus two verbatim phrases instead. So:

- Sections 3.1-3.2, 4.3, 4.4, Table 5 in full, section/table inventory: FULL TEXT (grid and fragments served).
- **Section 8.3: PARTIAL** - a four-item summary plus five verbatim phrases, assembled across two passes. I did not obtain a complete verbatim read of 8.3. The negative in sub-claim (d) therefore rests on that summary PLUS a whole-paper term search, not on a full verbatim read. Said plainly so a reader can discount it correctly.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) Where each number is printed, and what it counts

All three are in **Table 5**, whose caption as printed in the source is misspelled:

> "Occurance of Glitch Tokens in Commonly Used Datasets"

(sic - "Occurance". Quoted as printed.)

Table 5 has seven model rows plus an Average row, and three dataset column groups (Alpaca-52k, ShareGPT-52k, ShareGPT-90k), each group carrying three sub-columns: **Glitch Tokens | Tokens | Glitch Ratio**.

**All three of 3.39%, 2.09% and 2.22% sit in the `Average` row, under `Glitch Ratio`.** They are not any single model's figure. The row as served:

| | Alpaca-52k | ShareGPT-52k | ShareGPT-90k |
|---|---|---|---|
| Average, Glitch Tokens | 155,021 | 5,435,386 | 10,453,970 |
| Average, Tokens | 4,573,187 | 260,274,144 | 470,886,165 |
| Average, **Glitch Ratio** | **3.39%** | **2.09%** | **2.22%** |

Per-model Alpaca-52k Glitch Ratios, for scale: Text-Davinci-003 (r50k_base) 1.26% from 55,009 / 4,366,838; GPT-3.5-Turbo 1.59%; GPT-4 1.32%; Llama2-7b-chat 4.17%; Llama2-13b-chat 4.88%; Mistral-7B-Instruct 3.07%; Vicuna-13b 6.68% from 324,879 / 4,861,603.

The ratios are table cells, so there is no sentence that prints them. The sentence that introduces and generalises them is in Section 4.3 (RQ3). **RECONSTRUCTION from 5 ordered consecutive fragments, junctions verified:**

> "We have conducted an analysis to quantify the occurrence of glitch tokens in real-world scenarios, with results presented in Table 5. The three real-world datasets analyzed comprise over seven hundred million tokens. From a macro perspective, more than 2% of the tokens across models and datasets are identified as glitch tokens, indicating that their presence is not merely incidental in these datasets."

Followed by the boxed finding, served whole:

> "Finding 5: Glitch tokens frequently appear in real-world datasets."

**WHAT THE OPENING WORDS SCOPE.** Two openers carry the weight here.
- "We have conducted an analysis to quantify **the occurrence of glitch tokens in real-world scenarios**" scopes the entire measurement as occurrence-counting inside datasets. The clause ASSERTS the quantity, and the quantity it asserts is an occurrence count in a corpus.
- "**From a macro perspective,**" scopes the >2% claim as an aggregate across models and datasets - which is exactly why the three figures are Average-row values. The clause ASSERTS, and what it asserts is "% **of the tokens** ... are identified as glitch tokens": a share of corpus tokens. It neither denies nor records a move away from an emission rate; an emission rate is simply not the object.
- "Finding 5" says "appear in real-world **datasets**" - again the corpus, not the model's output.

**NUMERATOR CLASS, from the paper's own method.** Section 3.2 ("Glitch Token in Datasets"), fragments as served:

> "We examine three extensively utilized datasets: Alpaca-52k[36], ShareGPT-52k, and ShareGPT-90k[34]."
> "For each dataset, we encode the texts to create lists of tokens using corresponding tokenizers."
> "We then determine the frequency of glitch tokens within these lists."

So the numerator is **occurrences (instances) of glitch tokens in the token list obtained by encoding a pre-existing text corpus**, where glitch-token membership is the paper's behavioural set, fixed per model beforehand (Sec. 3.1; "A glitch token t is distinctly characterized by its capacity to disrupt an LLM's comprehension of its semantic essence", thresholded by failure of any of three proxy tasks). Checked against the near neighbours it is NOT:

- **Not vocabulary items.** The counts are instance counts, not set sizes: Vicuna-13b shows 19,061,985 on ShareGPT-90k, two to three orders of magnitude above any tokenizer vocabulary, and the paper's own glitch-token sets number in the thousands (7,895 of 182,517 tokens tested, across all tokenizers).
- **Not generated tokens.** The tokens come from encoding an existing dataset. No model generates anything in Section 4.3.
- **Not prompts.** The unit of analysis is one token occurrence, not a prompt, instruction or conversation.

**DENOMINATOR.** Total tokens produced by encoding that dataset **with that row's own tokenizer**. The decisive internal evidence is that the denominator moves across rows for a fixed dataset: Alpaca-52k is 4,366,838 tokens under r50k_base, 4,190,804 under cl100k_base, 4,861,603 under LlamaTokenizer, 4,679,054 under Mistral's. A vocabulary denominator would not vary with the corpus, and a generated-token denominator would not be fixed by the corpus; a corpus-tokens-under-this-tokenizer denominator does exactly this.

**Definition gap, recorded rather than smoothed.** "Glitch Ratio" is **never defined in prose** - it appears only as a column header. "Occurrence" likewise carries no formal definition beyond the Section 4.3 opener. That Glitch Ratio = Glitch Tokens / Tokens is **MY OWN ARITHMETIC**; it holds on every row I checked, but the paper does not state the formula, and the paper states no uncertainty on any of the three figures (no CI, no variance over the seven rows).

### (c) Is any of the three a rate over GENERATED tokens?

**NO.** Explicitly: none of 3.39%, 2.09%, 2.22% is a rate over generated tokens. Each is (summed glitch-token occurrences / summed corpus tokens), averaged over seven model-tokenizer rows, on three static text datasets.

**OVERLAP IN BOTH DIRECTIONS**, as the ledger's discipline requires.

*What the paper's class MISSES that limb (iii) requires.* Everything that makes an emission rate an emission rate. There is no decoding configuration anywhere in the measurement: no temperature, top-p, top-k, no truncation step, no per-step support, no sampler at all - the paper's own detection setup runs at temperature 0 precisely to remove it. It also misses any glitch token a model would emit that does not happen to occur in these three corpora, and it cannot distinguish a token the model would never produce from one it produces often.

*What it INCLUDES that limb (iii) excludes.* Glitch tokens sitting in human-written instruction and prompt text. And one honest complication the entry half-gestures at: ShareGPT-52K/90K are shared conversation logs, so a portion of that denominator is ChatGPT-generated assistant text. That does not make any cell an emission rate, for three reasons, all checkable in the table: (1) the paper never characterises the datasets that way - Sec. 3.2 calls them only "three extensively utilized datasets", and the sole hint is the reference titles "Stanford Alpaca: An Instruction-following LLaMA model" and "ShareGPT52K"; (2) it never separates human from assistant turns nor reports any figure over the latter; (3) the glitch set applied is each ROW's own model's set, so the Text-Davinci-003, Llama2, Mistral and Vicuna rows count tokens those models did not emit, re-encoded from text another system produced. **No row in Table 5 couples an emitting model to its own glitch set under any stated decoding condition.** A number one word away is a different quantity, and this one is several words away.

PUBLISHED IS NOT PERFORMED: for an emission rate over generated tokens this paper does not measure it, and it does not define, bound, predict or announce it either. The quantity is absent.

### (d) Section 8.3 and the serving-side mask

Section inventory confirmed: Section 8 "Discussions" = 8.1 Glitch Token Taxonomy, 8.2 Glitch Token Detection, **8.3 Glitch Token Mitigation**. The entry's section number is right.

Verbatim phrases served from 8.3 across two passes (READ LEVEL PARTIAL - see above):

> "a multifaceted approach to mitigation becomes indispensable"
> "the meticulous curation and refinement of training datasets"
> "the advancement of model architectures to be more discerning"
> "the implementation of rigorous post-training evaluations"
> "feed-back loops and continuous learning mechanisms"

Four proposals: training-data curation; architecture change; post-training evaluation; feedback loops / continuous learning. **A serving-side logit mask over the vocabulary is not among them.**

Whole-paper term search, which is what actually carries this negative given the PARTIAL read of 8.3. Reported absent: **"logit"; "mask"; "masking"; "blacklist"; "block list"; "banned"; "exclude"; "serving"; "vocabulary pruning"**. Near-hits, each checked and each not a mitigation:
- "filter" absent; the closest string is a DETECTION baseline's stopword step, "remove these common words, treating the remaining tokens as glitch tokens" - that is a baseline detector, not a remedy.
- "decoding" occurs only in the Figure 1 caption describing the LLM pipeline: "The 'Decode' stage then interprets these probabilities to produce the final output."
- "sampling" occurs only inside GlitchHunter's own algorithm (Sec. 5.2 "we sample tokens from clusters and validate them with the oracle"; "only a 0.05 fraction of tokens from each cluster is sampled for validation") - cluster sampling in a search procedure, not a decoding sampler.
- "deployment" occurs once, in the Introduction, and scopes the INPUT side: "During deployment, users interact with LLMs by providing textual prompts as inputs."

Section 4.4 "Implications of Our Findings" was checked in case a serving control appears outside 8.3. It does not; its remedies are a test oracle and the detector - "By leveraging this relation, developers can effectively pinpoint and address glitch tokens"; "Given our observation that glitch tokens cluster in the embedding space, we introduce GlitchHunter."

## REGIME

The source's regime, in its own words. **Population:** tokens of three fixed public text datasets - Alpaca-52k, ShareGPT-52k, ShareGPT-90k - "over seven hundred million tokens" in total, encoded by seven tokenizer/model pairs (r50k_base, cl100k_base x2, LlamaTokenizer x4). **Unit of analysis:** one token occurrence in an encoded list. **Operating condition:** offline tokenization of a static corpus; no inference, no generation, no sampler. Where the paper does run models (Sec. 3.1 glitch-set construction, not Table 5) its stated condition is temperature 0: "we set the temperature to 0. We keep all other parameters at default values." **Instrument:** each model's tokenizer, plus a precomputed glitch-token set. **Threshold/category:** "glitch token" = failure of any of three proxy tasks (repetition, spelling, length) with the token placed in the INPUT. **Reporting level:** the three contested figures are the Average over the seven rows, "From a macro perspective".

Does the candidate's limb (iii) sit inside this regime? **No.** Limb (iii) asks for a rate over tokens a model emits under a release's own shipped decoding defaults. That regime has a sampler, a truncation step and a per-step support; this one has none of the three, and its unit sits on the input side of the model by construction. A result proved under this regime is silent outside it, not supportive and not contradictory.

## DEFECTS FOUND

Three, all in the entry's own prose; none reverses it.

1. **Average row mislabelled by juxtaposition (precision defect, both files).** The entry reads: "3.39% (Alpaca-52k), 2.09% (ShareGPT-52k), 2.22% (ShareGPT-90k) - e.g. 55,009 occurrences in 4,366,838 tokens for Text-Davinci-003". The three ratios are the **Average** row across seven model/tokenizer rows. The exemplar pair 55,009 / 4,366,838 is a genuine Table 5 cell pair, but it computes to **1.26%**, the *lowest* of the seven Alpaca-52k rows, not to 3.39%. A reader will take the "e.g." as the arithmetic behind the leading figure. Narrow it: say Average row over seven tokenizers, and give the spread - Alpaca-52k ranges 1.26% (Text-Davinci-003) to 6.68% (Vicuna-13b).

2. **"an INPUT corpus of human and assistant text" is a characterisation the paper does not make, and it is the weaker argument available.** It is true of ShareGPT in the world, but Sec. 3.2 says only "three extensively utilized datasets"; the entry is importing outside knowledge, and in doing so it concedes that part of the denominator IS model-generated text - which is the one foothold an adversary has. The stronger point is first-hand and needs no knowledge of what ShareGPT is: **the denominator is corpus-tokens-under-this-tokenizer** (it moves from 4,366,838 to 4,861,603 for the same dataset across rows), and **no row couples an emitting model to its own glitch set under any decoding condition**. Substitute that.

3. **Undefined quantity presented as if defined, and a caption misquotation risk.** "Glitch Ratio" is a bare column header with no prose definition, and the division identity is the checker's arithmetic, not the paper's formula; the paper states no uncertainty on the three figures. Also, if the entry ever quotes the caption, it is misspelled in the source as "Occurance of Glitch Tokens in Commonly Used Datasets".

Front-matter corrections: **"Li et al. FSE 2024" is correct** - FSE 2024 Research Papers track, confirmed from the programme. Year 2024 correct. Section number 8.3 correct, title "Glitch Token Mitigation" correct, and all four proposals the entry attributes to it are attested. **No DOI established**; the entry should carry arXiv:2404.09894v3 rather than an unverified DOI.

## ROUTES THAT FAILED

- **Summariser refusal, not a host failure:** a request for Section 8.3 verbatim in its entirety was declined as whole-section reproduction. Worked around with (i) short-fragment requests across two passes and (ii) a whole-paper term search. This is why 8.3 is recorded PARTIAL.
- **No DOI route completed.** The arXiv abs page lists no DOI and no journal-ref; the FSE 2024 programme page lists no DOI, proceedings name, volume, article number or page range. I did not spend further budget guessing a PACMSE identifier, and I do not assert one. Should the ledger want one, the kind of document that would settle it is the ACM Digital Library landing page for the FSE 2024 proceedings volume - that is the right kind of document, and it is unopened here; naming it is a justified nomination, not a guess, but it is still unopened.
- arXiv HTML v3 worked first try; no PDF fallback, no mirror, no doi.org, no idconv needed.
- WebSearch: one query, returned, not refused. Note that arXiv:2404.09894 surfaced at six of nine result slots - **one document, not six sources, and no corroboration.**

## BEARING ON THE LEDGER ENTRY

**HOLD, with narrowing on both conjuncts. The numerator/denominator distinction is correct.**

Sub-claim (a): paper identified - Li et al. 2024, arXiv:2404.09894v3, FSE 2024 Research Papers, "Glitch Tokens in Large Language Models: Categorization Taxonomy and Effective Detection". No substitution was needed and none was made.

Sub-claim (b): all three figures located in Table 5's Average row; numerator = glitch-token occurrences in an encoded corpus, denominator = that corpus's tokens under that row's tokenizer, both checked against vocabulary items, generated tokens and prompts.

Sub-claim (c): **NO** - none of the three is a rate over generated tokens. **Limb (iii) is NOT occupied by this source, and the trigger that would send novelty to Low does not fire.** The entry's "NEAR-MISS DENOMINATOR" flag in the record is the right call and should stay; it is a flag the entry deserves credit for, and this check strengthens it, because the denominator demonstrably varies with the tokenizer and no Table 5 row controls emitter and glitch-set jointly.

Sub-claim (d): Section 8.3's four proposals are attested and a serving-side logit mask is **not** among them; "logit", "mask" and "serving" do not occur anywhere in the paper, and the only inference-adjacent words ("decoding", "deployment", "sampling") scope the pipeline description, the input side, and GlitchHunter's cluster sampling respectively. **The entry's serving-side novelty leg survives for this source.** One honesty constraint on how far it may be pushed: my read of 8.3 is PARTIAL, so the entry should phrase this as the record already does - "Li et al.'s Sec. 8.3 offers dataset curation, architecture changes, post-training evaluation and feedback loops, and no serving-side control" - an enumeration of what IS proposed plus the term-search negative, rather than an unqualified "never" resting on a full verbatim read I did not obtain.

Sub-claim (e): the distinction is correct. Required edits are the three in DEFECTS FOUND - label the figures as the Average row and give the 1.26%-6.68% spread; replace the "human and assistant text" framing with the per-tokenizer-denominator argument; and carry arXiv:2404.09894v3 with no DOI asserted. Nothing here converts to a promotion condition, and nothing strikes or reverses.
