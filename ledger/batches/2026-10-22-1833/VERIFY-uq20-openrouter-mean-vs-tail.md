# VERIFY - OpenRouter 100T-token study prints a mean prompt length, never a tail; the unread tail contains nothing about input length
Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261022-20, Prior 1. The claim under test, as handed to me:

> That the nearest prior prints the MEAN and not the tail: Section 4.3's "Average prompt tokens per request have increased roughly fourfold from around 1.5K to over 6K", whose numerator is monthly prompt tokens and whose denominator is requests with all models and classes mixed and first-party API traffic excluded by construction; that its only tail-adjacent sentence is qualitative with no denominator, "Requests involving code understanding, debugging, and code generation routinely exceed 20K input tokens"; and that it prints no percentile, no histogram, no share above any threshold, no context-window utilisation, and no mention of any announced window. The entry read characters 0 to 100,000 of 117,865 and did NOT read the Discussion and Limitations tail.

Verdict in one line: **the core holds, the gloss does not.** The source prints a mean and no tail statistic, and the previously unread tail changes nothing. But three of the entry's descriptive attachments to that mean - "monthly", "first-party API traffic excluded by construction", and "all models and classes mixed" as applied to the 20K sentence - are not the paper's words and two of them are contradicted by it.

## READ LEVEL

**FULL TEXT of the HTML rendering, read in four overlapping spans, summariser-mediated.** Source: Aubakirova M. et al. (2026), "State of AI: An Empirical 100 Trillion Token Study with OpenRouter", arXiv:2601.10088v1, https://arxiv.org/html/2601.10088v1. Document length as the tool reports it: 117,865 characters.

| Fetch | Offset | Span actually summarised | Sections reached |
|---|---|---|---|
| 1 | 98,000 | ~98,000 - 117,865 (end) | §8.2 tail, **§9 Discussion, §10 Limitations, §11 Conclusion**, References, Contributions, Appendix |
| 2 | 0 | 0 - 100,000 (tool said so explicitly) | Abstract, §1, §2.1-2.5, §3.1-3.3, §4.1-4.5, §5.1-5.3, §6.1-6.2, §7.1, §8.1, into §8.2 |
| 3 | 20,000 | 20,000 onward | §2.2 (partial) through §8.2, §4.3 in full |
| 4 | 40,000 | 40,000 onward | §4 onward, §4.3 again |

**The Discussion and Limitations tail was reached specifically** (fetch 1, §9/§10/§11 named by heading with body text quoted). This is the span the entry did not read.

**Two read-level caveats I will not paper over.**

1. Everything I have is **summariser-mediated**. I did not see raw HTML. The summariser caps verbatim quotation at roughly 125 characters, so the longer passages below are labelled as reconstructions from consecutive returns.
2. **I read figure CAPTIONS, not figure CONTENTS.** Figures 14, 16, 17, 18 are plots served as images. If a percentile band or a distribution were drawn inside a plot without being named in its caption or body text, I could not see it. I judge this a low risk because the captions themselves name the quantity plotted - Figure 14 "Average prompt token length", Figure 17 "Mean number of tokens per generation (prompt + completion)" - and a caption naming a mean is not a caption over a histogram. But this is COULD NOT READ at the pixel level, not NOT FOUND, and I keep the two distinct.

No routes failed. The arXiv HTML served on the first attempt, four times.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter, taken from the front matter

Title as printed: "State of AI: An Empirical 100 Trillion Token Study with OpenRouter" (the HTML renders a double space after "AI:"). Authors as printed, in order: **Malika Aubakirova** (marked lead contributor), **Alex Atallah, Chris Clark, Justin Summerville, Anjney Midha**. Affiliations: OpenRouter Inc. and a16z (Andreessen Horowitz). Identifier: arXiv:2601.10088v1 [cs.AI]. The document itself is dated **"December, 2025"**; the arXiv submission line reads **15 Jan 2026**. No DOI is printed on the HTML page I read.

### (b) The Section 4.3 average sentence, WHOLE

§4.3 is headed **"The Anatomy of Prompt-Completion Shapes"**. Reconstruction from three consecutive summariser segments, junction verified at each comma:

> "Average prompt tokens per request have increased roughly fourfold from around 1.5K to over 6K, while completions have nearly tripled from about 150 to 400 tokens."

**The entry quotes only the first clause.** The cut falls at a comma and the clause left standing asserts exactly what the entry says it asserts, so this is not a misquotation - but the sentence's second half is about completions, and anyone re-checking should know the sentence does not end where the entry's quotation marks do.

Its scoping opener and the two sentences around it, same reconstruction method:

> "The shape of model workloads has evolved markedly over the past year. Both prompt (input) and completion (output) token volumes have risen sharply, though at different scales and rates."

then the average sentence, then:

> "The relative magnitude of growth highlights a decisive shift toward more complex, context-rich workloads."

**What the opening words scope:** "The shape of model workloads has evolved markedly over the past year" scopes a period, not a population or a condition. The clause the entry relies on **ASSERTS** the quantity - it is a positive measurement claim, not a denial and not a move away from a measurement. Good.

Figure 14's caption, the figure this sentence reads off:

> "Number of Prompt Tokens is on the Rise."
> "Average prompt token length has grown nearly fourfold since early 2024, reflecting increasingly context-heavy workloads."

**Numerator and denominator, in the paper's own words: the paper does not give them.** This is the single most important finding of this check and I want it stated plainly. Across all four spans there is **no formula, no numerator class, no denominator definition, and no exclusion statement attached to "Average prompt tokens per request."** The nearest definitional material is elsewhere and is about a different quantity:

- §2.3: "We distinguish between prompt tokens, which represent the input text provided to a model, and completion tokens, which represent the model's generated output." Then: "Total tokens equal the sum of prompt and completion tokens." Then: "Unless otherwise noted, token volume refers to the sum of prompt (input) and completion (output) tokens."
- §2.5: "Unless otherwise specified, all time-series aggregates are computed on a weekly basis using UTC-normalized timestamps, summing prompt and completion tokens."
- §2.1: "Token counts encompass both prompt (input) and completion (output) tokens,"

So the paper's own stated aggregation period is **weekly**, not monthly, and its default token quantity is **prompt plus completion**, with §4.3 being one of the places that departs from that default by splitting them.

**Exclusions the paper actually names.** None of them is attached to §4.3:

- §8.1, in the cost analysis: "The dataset also excludes BYOK activity to isolate standardized, platform-mediated usage" - repeated in the Figure 27 caption, "the metric reflects a blended average across prompt and completion tokens".
- §2.2, bearing on the category-level figures only: "a random sample comprising approximately 0.25% of all prompts and responses"; "The classifier operates directly on prompt data (up to the first 1,000 characters)."; "Categories with confidence scores below the default threshold of 0.5 are excluded from further analysis"; and of one category, "we omit this category from most analyses below".
- §2.1, on platform scope: "While certain usage patterns outside the platform are not captured,"
- §2.1, on the instrument: "we did not have access to the underlying text of prompts or completions."
- §4.1: "(excluding free launch access)". §5.1, Figure 20 caption: "This graph omits xAI that had substantial usage but was given away for free for a period of time."

**The phrase "first-party API traffic" appears nowhere in the paper, in any span.** The nearest thing is §3.2: "a meaningful portion of their real usage is invisible to any centralized API provider" - which is a remark about open-weight models being self-hosted, i.e. traffic invisible to *any* aggregator, not a statement that OpenRouter's dataset excludes model-vendors' own first-party APIs.

### (c) The "routinely exceed 20K" sentence, WHOLE, with its opening words

Reconstruction from two consecutive segments, junction at the comma:

> "Requests involving code understanding, debugging, and code generation routinely exceed 20K input tokens, while all other categories remain relatively flat and low-volume."

Its immediate antecedent, which is the scoping material the entry's quotation drops:

> "Category-level data (available only since Spring 2025 as per Section 2.5) provides a more nuanced picture: programming workloads are the dominant driver of prompt token growth."

and the sentence that closes the paragraph:

> "This asymmetric contribution suggests that the recent expansion in prompt size is not a uniform trend across tasks but rather a concentrated surge tied to software development and technical reasoning use cases."

Figure 16, which this paragraph reads off:

> "Programming as the Main Driver Behind Prompt Token Growth."
> "Since tags are available starting in Spring 2025, programming-related tasks have consistently required the largest input contexts."

**What the opening words scope:** "Requests involving code understanding, debugging, and code generation" scopes a **category subset** of requests, and the antecedent sentence scopes it further to **classifier-tagged data from Spring 2025 onward**. The clause **ASSERTS** a floor, but a floor on what statistic is left unsaid.

**Does any denominator or share attach to it? No.** No count of such requests, no share of traffic, no percentage, no "N% of programming requests". Nothing.

And one thing the entry did not say, which runs in the entry's favour: **this sentence is most likely itself a statement about a MEAN, not a tail.** It is the prose read-off of Figure 16, whose caption describes category-level "input contexts" and whose companion §4.4 figure is described as "programming-related prompts now average 3-4 times the token length of general-purpose prompts." If Figure 16 plots per-category average prompt tokens - which the captions indicate and which I could not confirm at the pixel level - then "routinely exceed 20K" means *the programming category's average curve sits above 20K*, not *individual requests in the tail exceed 20K*. The word "routinely" reads as a tail word and is not one. The entry calls the sentence "qualitative with no denominator", which is correct but undersells it: it is qualitative, denominator-free, **and mean-adjacent**.

### (d) Percentile, histogram, quantile, CDF, share-above-threshold, context-window utilisation, for input length

Searched all four spans. Reporting each category:

| Quantity | Finding |
|---|---|
| Percentile of input length (p50, p90, p99...) | **ABSENT.** No percentile of input length anywhere in the paper. |
| Median of input length | **ABSENT.** The only "median" in the paper is §8.1's median cost, "$0.73 per 1M tokens" - a price, not a length. §4.5 refers to "the median LLM request" rhetorically, with no statistic attached. |
| Histogram of input length | **ABSENT** from captions and body text. Caveat: plot interiors unread (see READ LEVEL). Figures 14, 16, 17, 18 are captioned as time series of averages. |
| Quantile / cumulative distribution of input length | **ABSENT.** |
| Share of requests above any input-length threshold | **ABSENT.** 20K is named as a floor some category's requests "routinely exceed"; no share, fraction, count or percentage is attached to it or to any other threshold. |
| Context-window utilisation (input length as a fraction of the window) | **ABSENT.** The concept does not appear. |

What the paper prints for input length, exhaustively, every figure a mean or a ratio of means:

- §4.3: "around 1.5K to over 6K" average prompt tokens per request, "roughly fourfold" growth.
- §4.3 / Fig 14 caption: "nearly fourfold since early 2024".
- §4.3: programming "routinely exceed 20K input tokens" - floor, no denominator.
- §4.4 / Fig 17: average **sequence** length (prompt + completion, a different quantity) "from under 2,000 tokens in late 2023 to over 5,400 by late 2025", "more than tripled over the past 20 months".
- §4.4: "programming-related prompts now average 3-4 times the token length of general-purpose prompts" - a ratio of means.

### (e) Any announced or maximum context window named?

**No. ABSENT.** No model's announced or maximum context window is named anywhere in the paper - no 128K, no 200K, no 1M, no number of any kind presented as a window size. The only occurrences of the phrase are qualitative and plural:

- §4.4: "This growth reflects a structural shift toward longer context windows, deeper task history, and more elaborate completions."
- §4.5: "Instead, it is part of a structured, agent-like loop, invoking external tools, reasoning over state, and persisting across longer contexts."
- §8.2: "(people run longer contexts, more iterations, etc.)"

"Longer context windows" **ANNOUNCES a direction of travel**; it does not **MEASURE** a window. Under the published-is-not-performed rule: the paper neither measures nor even defines a context window. It gestures at one.

### (f) What is in the tail the entry did not see

The previously unread span, characters ~98,000 - 117,865, holds §9 Discussion, §10 Limitations, §11 Conclusion, References, Contributions, and the Appendix. **Bearing on the candidate: nothing, in either direction.** Specifically:

- **§10 Limitations contains no input-length statistic, no percentile, no distribution, and no context-window figure.** The entry's worry that a limitations section would be where a percentile or a window-utilisation figure hides is **not borne out**. What §10 does say, verbatim as served: "This study reflects patterns observed on a single platform, namely OpenRouter, and over a finite time window"; "Certain dimensions, such as enterprise usage, locally hosted deployments, or closed internal systems, remain outside the scope of our data."; "several of our data analyses rely on proxy measures"; "inferring user geography from billing rather than verified location data".
- §10 **does not mention first-party API traffic either.** The exclusion list it gives is enterprise usage, locally hosted deployments, closed internal systems - not model vendors' own direct APIs.
- §9 Discussion carries only token-share figures, not length: "open source models like DeepSeek and Qwen collectively served a large portion of total tokens (sometimes over 30%)"; "Asia's share of total token demand has risen from about 13% to 31%".
- §11 Conclusion: nothing on input length.
- Appendix: one share figure, by sub-category and of tokens, not of length - Figure 29a caption, "Tokens partition into Role-Playing Game scenarios (58%)".

So the tail **strengthens** the entry's negative finding by closing the one gap in its own read. The place a percentile would most plausibly have been named is now read, and it is not there.

## REGIME

The source's regime, in its own words.

- **Population:** "patterns observed on a single platform, namely OpenRouter, and over a finite time window" (§10). Out of scope by the paper's own statement: "enterprise usage, locally hosted deployments, or closed internal systems" (§10). Not stated as out of scope: model vendors' first-party APIs.
- **Unit of analysis for the §4.3 figure:** the request, per the metric's name "Average prompt tokens per request". The paper gives no further definition of the unit, and no count of requests.
- **Aggregation:** "all time-series aggregates are computed on a weekly basis using UTC-normalized timestamps" (§2.5) - **weekly**.
- **Instrument:** billing/usage telemetry without prompt text - "we did not have access to the underlying text of prompts or completions" (§2.1). Category labels come from a separate, far narrower instrument: "a random sample comprising approximately 0.25% of all prompts and responses", classified on "up to the first 1,000 characters", with "Categories with confidence scores below the default threshold of 0.5 are excluded" (§2.2), available "only since Spring 2025" (§4.3, §2.5).
- **Threshold / category:** no length threshold is operationalised anywhere. 20K appears once, in prose, as a floor on a category, with no counting rule behind it.
- **Statistic:** the arithmetic mean, throughout. §4.3 mean prompt tokens; §4.4 mean sequence length; §4.4 a ratio of means. No order statistic of input length is computed anywhere in the paper.

**Does the candidate's claim sit inside this regime?** Partly, and only for the part the entry is using it for. The population overlaps - this is real API traffic and real prompt lengths. But the **statistic does not overlap at all**. A claim about the share of requests above a length threshold, or about any percentile of input length, or about window utilisation, is **outside** this paper's regime: the paper computes no order statistic and operationalises no threshold. Under the rule that a result proved under one set of assumptions is silent outside them, this paper is **silent** on the candidate's quantity. It is not evidence against it; it is not evidence for it.

**Numerator-class and denominator check on the one number that looks closest.** The §4.3 figure "around 1.5K to over 6K":
- Its **numerator class** is prompt tokens as §2.3 defines them, "the input text provided to a model" - and the paper prints no exclusions for it.
- Its **denominator** is requests, checked against the near neighbours it is not: it is **not** per generation (that is Figure 17's "Mean number of tokens per generation (prompt + completion)"), **not** per user, **not** per token of total volume, and **not** per category (that is Figure 16).
- **Overlap in both directions.** What the paper's class **MISSES** that the candidate needs: every order statistic. A mean of 6K is consistent with a 1% exceedance share above 20K and equally consistent with a 30% one; the mean does not bound the tail in either direction without a distributional assumption the paper never makes. It also misses any window denominator, since no window is named. What the paper's class **INCLUDES** that the candidate excludes: all request classes pooled - chat, roleplay, translation, programming - across all models and all providers on the platform, where the candidate's quantity is presumably scoped to some narrower population; plus the full 2024-2025 time range, where the mean is a moving target by construction. **A number one word away from the claim's is a different quantity**, and "mean" to "percentile" is that one word.

## DEFECTS FOUND

Three in the entry's own characterisation of Prior 1. None of them touches the entry's conclusion, but all three are the kind of unsourced attachment that this ledger has been bleeding on, so they get fixed rather than waved through.

1. **"monthly" is wrong, or at best unsourced.** The entry describes the §4.3 numerator as "monthly prompt tokens". The paper's only statement of aggregation period is §2.5: "all time-series aggregates are computed on a weekly basis using UTC-normalized timestamps". The paper never says monthly, and never states a period for §4.3 specifically. **Correction: strike "monthly" and write "the paper states no aggregation period for this metric; its default, per §2.5, is weekly."**

2. **"first-party API traffic excluded by construction" is not the paper's claim and the phrase is not in the paper.** It is a defensible inference from "a single platform, namely OpenRouter" - OpenRouter is a router, so vendors' own direct API traffic is not in it - but the paper does not say it, and the entry phrases it as though the paper did. Worse, the exclusion the paper *does* name for a metric is a different one, **BYOK**, and it attaches to the **cost** analysis in §8.1, not to §4.3: "The dataset also excludes BYOK activity to isolate standardized, platform-mediated usage". **Correction: replace with the paper's actual scope language - §10's "a single platform, namely OpenRouter" and its named out-of-scope list "enterprise usage, locally hosted deployments, or closed internal systems" - and mark the first-party-API point as the checker's or the entry's inference, labelled as such.**

3. **"all models and classes mixed" is right for the average sentence and wrong for the 20K sentence.** The entry's single denominator description is attached to both sentences. Figure 14's mean does pool models and categories. But the 20K sentence is explicitly **category-split** and rests on the much weaker category instrument: "Category-level data (available only since Spring 2025 as per Section 2.5)", drawn from "approximately 0.25% of all prompts and responses", classified on "up to the first 1,000 characters", with sub-0.5-confidence categories "excluded from further analysis". **Correction: split the description. And add the stronger point the entry missed - the 20K sentence is itself most likely a read-off of a per-category MEAN curve (Fig 16), so "routinely" is a tail-sounding word over a mean, which makes the entry's mean-versus-tail distinction sharper, not weaker.**

Two smaller notes, not defects:

4. The entry's §4.3 quotation stops at a comma; the sentence continues "while completions have nearly tripled from about 150 to 400 tokens." Verbatim and grammatically clean on both sides, and the clause asserts what the entry says - but worth completing in the entry so the next checker does not re-derive it.
5. Citation year. The entry carries (2026), which matches the arXiv v1 submission of 15 Jan 2026. The document's own date line reads "December, 2025". Either is defensible; if the ledger's convention is the document date, this is (2025).

## ROUTES THAT FAILED

None. https://arxiv.org/html/2601.10088v1 served on every attempt, four times, through the proxy without incident. No arXiv PDF attempt was needed, no mirror, no search. **Zero WebSearch calls used.** Budget remaining at the end of the check: 2 WebFetch, 1 WebSearch.

The one thing I could not do with the budget and tools available: **read the interiors of Figures 14, 16, 17 and 18.** These are served as images and the summariser gives captions. A checker wanting to close that gap would need to pull the image files themselves. I log it as COULD NOT READ, not as NOT FOUND. The kind of document that would settle it is the figure asset or the paper's source files - and that *is* the right kind of document for the question, so this is a justified nomination rather than a guess. I did not open it.

## BEARING ON THE LEDGER ENTRY

**HOLD the substance. NARROW the wording.**

On the attack the entry is making: **the source does not print the candidate's quantity, and the newly read tail confirms it.** Taking the published-is-not-performed test in order - I cannot name a percentile of input length, because none is printed. I cannot name a share above a threshold, because none is printed. I cannot name a context-window utilisation figure, because the paper never names a window. What the paper prints, and where, is: a **mean** of 1.5K to over 6K prompt tokens per request (§4.3, Figure 14, units tokens, denominator requests); a **mean** sequence length of under 2,000 to over 5,400 tokens per generation (§4.4, Figure 17, prompt + completion); and a **ratio of means**, programming prompts averaging "3-4 times the token length of general-purpose prompts" (§4.4). With respect to the candidate's exceedance share, this paper **MEASURES a neighbouring quantity and is silent on the claimed one.** With respect to a context window, it does not even define one - it **ANNOUNCES** a direction, "a structural shift toward longer context windows".

The entry's single read-level gap is now closed in the entry's favour. §10 Limitations was the place a percentile or a window-utilisation figure would most plausibly have been named, and it names neither; its limitations are about platform scope, out-of-scope deployment modes, and proxy measures for geography. **The entry's negative finding survives a full read.** Prior 1 stands as the nearest prior, and it stands as mean-only.

So: **no strike, no reversal, no conversion to a promotion condition.** This leg of the novelty argument holds on the documents. If anything the entry can state it more strongly than it did, because the 20K sentence - the one sentence that reads like a tail - is on the evidence a per-category mean wearing a tail word.

The narrowing is to the entry's prose, on the three defects above: delete "monthly", replace "first-party API traffic excluded by construction" with the paper's own §10 scope language and label the first-party point an inference, and split the denominator description so the 20K sentence carries its own - category-tagged, Spring 2025 onward, 0.25% classified sample, 0.5 confidence floor. These are front-matter-grade fixes to how the entry *describes* its prior, not challenges to what the prior *says*. Left unfixed they are exactly the sort of thing an adversary picks up to argue the entry did not read its own Prior 1 closely.
