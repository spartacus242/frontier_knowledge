# VERIFY - do public LLM-serving corpora strip prompt content, and does that block re-serving a long-context stratum?

Checker: fresh context. Budget used: 7 WebFetch, 0 WebSearch. Date 2026-10-22.
(Plus 5 un-metered raw reads over `raw.githubusercontent.com` via curl, which the task names as the host where a raw read bypasses the summariser. Those are quoted verbatim below and are the backbone of this note. Two authenticated-GitHub reads were refused: see ROUTES THAT FAILED.)

## CLAIM

LEG (a) OF THE FATAL ATTACK on UQ-20261022-20: that **every public production corpus the adversaries opened strips prompt CONTENT by design, for data-protection reasons**, so the stratum of requests exceeding the previous context limit **cannot be re-served against a newer model and graded for outcome** - which is what the candidate's second limb requires.

The leg has three joints, and they do not stand or fall together. I separate them throughout:

- **(a-i)** the opened corpora publish no prompt content (lengths/counts only);
- **(a-ii)** the stated reason is data protection;
- **(a-iii)** therefore the long-context stratum cannot be re-served and graded.

## READ LEVEL

| # | Source, as the entry carries it (or as found) | Read level | What I actually read |
|---|---|---|---|
| 1 | **Azure LLM inference traces on GitHub, `Azure/AzurePublicDataset`** - release docs `AzureLLMInferenceDataset2023.md` and `AzureLLMInferenceDataset2024.md`, plus the repo root `README.md` | **FULL TEXT** of both dataset docs (raw, unsummarised); root README read via grep on the LLM/inference sections = **PARTIAL** (lines 7-31, 82-95) | Schema tables, "Prompt content" sections, licence, attribution, download links |
| 2 | **`Azure/AzurePublicDataset` -> `GitHubCopilotCodingAgentDataset2026.md`** (release accompanying Liu, Qiu, Goiri, Fonseca, Bianchini, Choukse 2026, arXiv:2608.00101) - an instance the entry does **not** name; I found it in the root README | **FULL TEXT** of the release doc (raw, unsummarised) | Top-level schema table, per-LLM-call and per-tool-batch field lists, Dataset Statistics table, "What it does **not** contain" section |
| 3 | **ServeGen's released artifact** - `alibaba/ServeGen` `README.md` (the release); and the paper, Xiang et al., arXiv:2505.09999 | Release README: **FULL TEXT** (raw, unsummarised). Paper: **ABSTRACT ONLY** (arXiv abs page). The paper's **data-description section was NOT read** - the budget went to the release itself, which is what the entry asked for first | `data/` tree, the `conversations/conversations_hashed.json` and `offline/` descriptions, citation block |
| 4 | **"A Year in LLM Serving" (Nixon et al., arXiv:2608.13573)** - the release is `HarvardMadSys/chutes_workload` | Release README: **FULL TEXT** (raw, unsummarised). Paper: **PARTIAL** - Secs. 1, 2.2, 3 and the artifact footnote, via the arXiv HTML summariser | Full 12-field dataset table, session-reconstruction columns, scale figures, licence |
| 5 | **"State of AI: An Empirical 100 Trillion Token Study with OpenRouter" (Aubakirova M. et al., arXiv:2601.10088v1)** | **PARTIAL** - abs page front matter; HTML read covering characters 0-100,000 of 117,865 (Secs. 2.1, 2.2, 2.5, 8.1 surfaced). **The last 17,865 characters were not read**, so a data-availability statement late in the paper is **COULD NOT READ**, not NOT FOUND | Data-description section 2.1, classifier/privacy section 2.2, coverage 2.5, exclusions 8.1 |
| 6 | **WildChat-1M (`allenai/WildChat-1M`)** - my own counter-instance for sub-claim (d) | **PARTIAL** - HuggingFace dataset card, Data Fields + collection + de-identification sections, via summariser | Field list, scale, provenance, removal/redaction statements |
| 7 | **LMSYS-Chat-1M (`lmsys/lmsys-chat-1m`)** - second counter-instance | **PARTIAL** - HuggingFace dataset card, via summariser | Field list, scale, provenance, redaction statements |

**Instances actually opened: five production/serving corpora (1, 2, 3, 4, and the OpenRouter study's data description) plus two content-retaining conversation corpora (6, 7).** The task asked for at least three actual instances; four release artefacts were opened at FULL TEXT.

## WHAT THE SOURCE SAYS (quotations as served)

### Sub-claim (a): instances opened, read level, failed routes

Covered in READ LEVEL above. Nothing here rests on an unopened document; the two documents I did not open fully (the ServeGen paper's data-description section, and the last 15% of the OpenRouter paper) are marked COULD NOT READ and are not used as evidence in either direction.

### Sub-claim (b): the per-request FIELDS published, quoted

**1. Azure LLM inference trace 2023 and 2024.** Both docs carry an identical `### Schema` table. Verbatim, the whole table:

> | TIMESTAMP | Invocation time |
> | ContextTokens | Number of context tokens |
> | GeneratedTokens | Number of generated  tokens |

**THREE fields, printed in the `### Schema` table of `AzureLLMInferenceDataset2023.md` and again in `AzureLLMInferenceDataset2024.md`.** (The doubled space in "generated  tokens" is in the source.) Unit of analysis: one row per invocation, two trace files each ("Code", "Conversation"). **Prompt content: absent. Lengths and counts only** - and the "lengths" are token counts, not characters.

Sibling in the same repo, not named by the entry: `AzureLMMInferenceDataset2025`, described in the root README as

> "a one week sample of a LMM inference cluster in Azure containing the number of images, input tokens, and output tokens associated with each request"

- i.e. counts again (image count, input tokens, output tokens). I did **not** open that dataset's own doc, so I grade it only at the root README's one-line description.

**2. GitHub Copilot Coding Agent Traces 2026.** Top-level schema, verbatim:

> | `session_id` | Anonymized agentic conversation id |
> | `date` | UTC partition date (YYYY-MM-DD) |
> | `turns` | Array of user turns, each containing `llm_calls` and `tool_batches` |

Nested fields, verbatim and complete:

> "Each LLM call includes: `timestamp`, `duration_ms`, `model` (anonymized), `tokens` (prompt/completion/cached), and `message_metadata` (segment types and token counts - no text content)."

> "Each tool batch includes: `timestamp`, `duration_ms`, `function_calls` (tool name, status, duration)."

The parenthetical "**- no text content**" is inside the schema sentence, not a separate disclaimer. This is the richest schema of the four and still content-free. Note it **does** publish `status` per tool call: see sub-claim (e).

**3. ServeGen's released artifact.** The README's "Data Structure" section lists `chunk-i-dataset.json` ("Request data distributions") and `chunk-i-trace.csv` ("Rate and arrival pattern information") per model, plus two things the entry's framing does not anticipate:

> "`conversations/conversations_hashed.json`: A selectively released dataset of multi-turn conversations. Input and output content are replaced with block hashes to preserve privacy, while structural characteristics are retained for analysis."

> "`offline/`: Anonymized traces of offline LLM inference workloads (batch tasks) from our platform. See `offline/README.md` for details."

So ServeGen **does release a conversation corpus** - but with "**Input and output content ... replaced with block hashes**". A block hash supports prefix-reuse and structure analysis; it does not support re-serving, because a hash is not invertible to text. I did not open `offline/README.md` (budget), so the offline traces' fields are **COULD NOT READ**.

**4. "A Year in LLM Serving" / `chutes_workload`.** The README: "The released trace contains one row per API invocation." **TWELVE fields**, printed in the `## Dataset` table. Verbatim:

> | `invocation_id` | Request identifier |
> | `function_name` | API endpoint |
> | `chute_id` | Model identifier (maps to a model name in data/paper/chute_models.csv) |
> | `user_id` | Anonymized user identifier |
> | `rehash_round` | Which 3-month rotation round the row belongs to |
> | `instance_id` | Serving instance |
> | `started_at` | Start time, elapsed from the trace's first request |
> | `completed_at` | Completion time, same origin |
> | `it` | Input tokens |
> | `ot` | Output tokens |
> | `ct` | Cached tokens |
> | `ttft` | Time to first token |

**No content field. Lengths (`it`, `ot`, `ct`) and counts only.** The paper's own field sentence, as the summariser served it in three ordered consecutive segments from Sec. 3 (**labelled a reconstruction from 3 fragments**; I verified the junctions read as one sentence pair and did not complete any cut string by inference):

> "For each request, we record its timestamp, endpoint, model, user, and input/output token counts." / "We also collect serving-side execution information, including the instance that handled the request," / "completion latency, time to first token (TTFT), and cached-token counts."

**5. OpenRouter "State of AI".** Sec. 2.1, as served:

> "Each generation record includes information on timing, model and provider identifiers, token usage"

> "Metadata also include fields related to geographic routing, latency, and usage context"

> "Token counts encompass both prompt (input) and completion (output) tokens"

I found **no statement that a dataset is released** in the 85% of the paper I read. Because the last 17,865 characters were not read, "**no public release**" is for this source **COULD NOT CHECK**, not a negative finding. What is established is that the *analysis* ran on metadata, not content.

### Sub-claim (c): is a data-protection or privacy reason stated? Quote it.

**Yes, in three of the five, and explicitly.**

**Azure (both years), the section headed `### Prompt content`.** The full first sentence, with its opener intact:

> "Due to customer privacy requirements (e.g., GDPR), we do not have visibility into the content of the prompts."

**Opener scoping, as the discipline requires:** "Due to customer privacy requirements (e.g., GDPR)," scopes the clause as a *cause*; the clause itself **ASSERTS the absence** of content visibility. It is not a record of a move away from publishing content, and it is not a denial of the absence. The "(e.g., GDPR)" is the hedged, cited formulation - the doc names GDPR as an example of the requirement, not as the sole legal basis. Note the sentence says the *authors* "do not have visibility", which is stronger than "we chose not to publish": content was never available to them. The next sentence is what the candidate's limb runs into:

> "We instead use the production traces to guide the input and output sizes, where we send the input prompt with the required number of tokens, and force the model to generate the corresponding number of output tokens for each request."

That is an explicit statement of the substitute method: **synthetic prompts of the right length**. And the justification, quoted in full because the cut matters:

> "Note that the text of the inputs prompts does not impact the performance metrics that we benchmark, since they depend only on the input and output sizes."

**Opener scoping:** "Note that the text of the inputs prompts does not impact **the performance metrics that we benchmark**" - the clause ASSERTS irrelevance **only within the authors' own benchmarking regime** (throughput/latency/energy). Cut after "does not impact", it would read as a general claim that prompt text does not matter; the trailing restrictive clause is what scopes it. **The candidate's outcome limb is outside that scope**: grading answer quality on a newer model depends on the text, and this sentence does not say otherwise - it says the authors' metrics do not.

**ServeGen:** "Input and output content are replaced with block hashes **to preserve privacy**, while structural characteristics are retained for analysis." Privacy reason stated, in the same sentence as the mechanism.

**GitHub Copilot 2026:** the reason is not labelled "privacy" in the section I read, but the exclusion list is the most explicit of any instance. Under the heading "### What it does **not** contain", verbatim:

> "This release is metadata-only. It includes **no**:
> - source code, file contents, or diffs
> - user prompts, model responses, or tool outputs
> - file paths or repository names
> - user, account, or organization identifiers
> - real model names (models are relabeled 'Model A', 'Model B', ...)"

**Chutes / "A Year in LLM Serving":** the README states "User identifiers are re-anonymized every three months" and "Timestamps are normalized" - anonymisation, but **no privacy rationale for the content exclusion is given in the README**. The paper, Sec. 2.2 as served: "The trace retains anonymized user identifiers, serving-instance identifiers,". The exclusion of prompts appears in the paper as a *constraint the authors work around*, Sec. 3 as served:

> "Since the trace does not include prompts or explicit session identifiers,"

**Opener scoping, and this one is load-bearing:** "Since the trace does not include prompts or explicit session identifiers," is a subordinate *because*-clause whose main clause (not served to me) describes the workaround - the README shows what it is: sessions are reconstructed by chaining `(user, model)` requests. So this clause **ASSERTS the absence of prompts** and simultaneously **RECORDS A MOVE AWAY** from needing them. Both readings are in it; neither supports content being present.

**OpenRouter:** Sec. 2.1 as served: "**Crucially, we did not have access to the underlying text of prompts or completions.**" Opener "Crucially," is emphatic, not scoping; the clause ASSERTS the absence, for the authors. Sec. 2.2 complicates the picture and I record the complication rather than smoothing it: "The classifier operates directly on prompt data (up to the first 1,000 characters)" and "The classifier's outputs are restricted to aggregate counts for internal analytics and reporting," with "OpenRouter provides an explicit opt-in mechanism." So prompt text exists *inside OpenRouter* and is read by a classifier on a sample described as "approximately 0.25% of all prompts and responses"; what leaves is aggregate category counts. That is content-stripping at the publication boundary, stated with a privacy mechanism (opt-in) attached.

### Sub-claim (d): is there any public corpus that DOES retain prompt content at production scale?

**Yes. Two, and I opened both rather than nominating them.** Before naming them I state the kind of document that could settle this: a **dataset card or schema for a publicly downloadable corpus whose per-record fields include the verbatim text of user turns**. Both are that kind.

**WildChat-1M (`allenai/WildChat-1M`).** Fields, as the card's Data Fields section gives them: `conversation_hash`, `model`, `timestamp`, `conversation`, `turn`, `language`, `openai_moderation`, `detoxify_moderation`, `toxic`, `redacted`, `state`, `country`, `hashed_ip`, `header`, plus `turn_identifier` inside each turn. **The `conversation` field holds the utterances with their `content`** - full text, both sides. Scale and provenance, verbatim:

> "WildChat is a collection of 1 million conversations between human users and ChatGPT"

> "We collected WildChat by offering online users free access to OpenAI's GPT-3.5 and GPT-4."

> "25.53% of the conversations come from the GPT-4 chatbot, while the rest come from the GPT-3.5 chatbot."

Content is **altered and selected**, which bears on usability: "The data has been de-identified with Microsoft Presidio and hand-written rules by the authors."; "All toxic conversations identified by the OpenAI Moderations API or Detoxify have been removed"; "for containing PII or sensitive information have been removed from this version of the dataset."; and "Note that this version of the dataset only contains non-toxic user inputs/ChatGPT responses." The `redacted` field is "Whether this conversation contains any utterances in which PII is detected and anonymized."

**LMSYS-Chat-1M (`lmsys/lmsys-chat-1m`).** Per-record: conversation ID, model name, **conversation text in OpenAI API JSON format**, detected language, OpenAI moderation tag, `redacted`. Verbatim:

> "This dataset contains one million real-world conversations with 25 state-of-the-art LLMs."

> "we have made our best efforts to remove all conversations that contain personally identifiable information (PII)."

> "We partnered with the OpaquePrompts team to redact person names in this dataset to protect user privacy."

> "This process may impact data quality and occasionally lead to incorrect redactions."

**REGIME CHECK, which is where the counter-instance has to be honest** (see REGIME below): both are *real user traffic to real frontier models*, so "production" in the sense of "real users, real model" holds. Neither is a *serving trace of a capacity-limited production queue*: WildChat is a free-access research proxy, LMSYS-Chat-1M is "collected from 210K unique IP addresses in the wild on the Vicuna demo and Chatbot Arena website". So they are production *conversation* corpora, not production *serving* corpora.

### Sub-claim (e): could the outcome limb be satisfied WITHOUT re-serving?

**On the four schemas I opened at FULL TEXT: no - and the reason is a second, independent gap, not leg (a)'s gap.** Field by field:

**What the opened schemas WOULD support:**
- **Copilot 2026** is the only one with anything outcome-shaped: `function_calls` carries "(tool name, **status**, duration)". A per-tool-call status gives tool-level failure counts, and the `turns` -> `llm_calls` nesting plus "Avg LLM calls / turn | 7.83" gives a within-turn retry/iteration count. `tokens (prompt/completion/cached)` plus `message_metadata` ("segment types and token counts") supports prompt-composition analysis.
- **Chutes** gives `ot` (output tokens) and `ttft` and `completed_at`; an `ot` piling up at a round cap is a *proxy* for truncation, and the repo's own session reconstruction adds `turn_id`, `parent_invocation_id`, `prefix_tokens` - so repeat-request structure is derivable.
- **Azure** gives `GeneratedTokens`, which is the same weak cap-proxy, and nothing else.

**What they would NOT support, which is decisive:**
- **No finish-reason, error-code, HTTP-status or truncation flag appears in any of the four schemas.** Chutes' 12 fields include no status field at all; Azure's three include no status field at all. The Copilot `status` is on *tool calls*, not on the LLM call and not on the turn.
- **No user-visible task-success signal in any of them**: no thumbs-up/down, no acceptance, no edit-after, no regeneration flag, no PR-merged outcome. The Copilot release explicitly strips the things from which success could be inferred - "source code, file contents, or diffs" and "user prompts, model responses, or tool outputs".
- **No per-request context-limit field**, so even the *stratum* ("requests exceeding the previous context limit") must be constructed from `it`/`ContextTokens` against an externally supplied limit, and the limit is not in the trace.
- Chutes' models are named (`chute_models.csv`), but Copilot's are "relabeled 'Model A', 'Model B', ..." and Azure's are unnamed - so "graded against a *newer model*" cannot even be anchored to a model identity in two of four.

**So the honest decomposition is: the outcome limb fails on these corpora twice over** - once because content is stripped (leg a-i, which blocks re-serving) and once because no outcome field is published (which blocks the no-re-serving route). The second failure is **not** the leg the entry put its weight on, and it is the sturdier of the two, because it survives the counter-instance in (d): WildChat and LMSYS-Chat-1M retain content but publish no outcome label either - WildChat's nearest fields are `openai_moderation`, `detoxify_moderation`, `toxic` and `turn`, which grade *safety*, not *task success*. A grader would have to be built, which is re-serving plus judging, not reading a logged signal.

## REGIME

Stated in each source's own words, then checked against the claim.

**Azure LLM inference 2023.** Population: "a sample of the traces from multiple LLM inference services in Azure, collected on November 11th 2023". Unit: one invocation per row. Instrument: two CSVs, "Code" and "Conversation". Operating condition: the data "described and analyzed in the ISCA 2024 paper 'Splitwise'". **2024**: "collected on May 10th-19th 2024", "a longer one week sample of two LLM inference services". **Claim sits inside**: yes - these are public production corpora, and their field list is exactly what leg (a-i) describes.

**GitHub Copilot 2026.** Population: "uniformly-sampled agentic coding sessions from GitHub Copilot **non-enterprise users**, covering June 1-7, 2026." Unit: "Each line in a shard file is a JSON object representing one agentic session." Scale, printed in the `### Dataset Statistics` table: Agentic sessions 301K; User turns 1.2M; LLM calls 9.3M; Tool calls 8.7M; Distinct (anonymized) models 37; Prompt tokens (sum) 631.4B; Completion tokens (sum) 4.91B; Cached prompt tokens (sum) 540.95B; Avg turns/session 3.95; Avg LLM calls/turn 7.83; Avg tool calls/turn 7.3. **Note the exclusion in the denominator: non-enterprise users only**, and the root README's figure is "~301K agentic GitHub Copilot sessions (~1.19M user turns) from Visual Studio" - so the population is further narrowed to one IDE. **Claim sits inside**: yes, and this is the hardest instance for the candidate, because it is the one corpus with turn structure, tool status and cache accounting - and it still prints no content.

**ServeGen.** Population: "billions of inference requests across 12 production models on Alibaba Cloud Model Studio". Unit: per-client distributions and per-model arrival traces, not per-request rows, for the main `data/` tree; per-conversation for `conversations_hashed.json`. Instrument: a *generator* - "a framework for generating realistic large language model (LLM) serving workloads". **Claim sits inside with a caveat**: ServeGen's primary release is distributions, so "strips prompt content" is almost a category error for it - a CDF has no content to strip. Where it does release conversations, it hashes content and says why.

**Chutes / "A Year in LLM Serving".** Population: "one year of production traffic from Chutes, covering 6.12 billion requests across 9,174 models"; the paper's Sec. 3 figure as served, "6.12 billion requests from 314,970 users across 9,174 models". Unit: "one row per API invocation"; the paper calls them "unsampled request-level records" (Sec. 1). Scale printed in the README's Installation block: "download chutes_trace.parquet (91 GB, 6,122,413,756 rows)". Licence CC BY 4.0. **Claim sits inside**: yes, and this is the largest and most recent instance - the one most likely to have changed practice - and it has not.

**OpenRouter "State of AI".** Unit, Sec. 2.1 as served: "anonymized request-level metadata for billions of prompt-completion pairs". Population: "from a global user base, spanning approximately two years up to the time of writing"; coverage, Sec. 2.5: "Our analyses primarily cover a rolling 13-month period ending on November, 2025"; category analyses on "approximately 0.25% of all prompts and responses" from May 2025; exclusion, Sec. 8.1: "The dataset also excludes BYOK activity to isolate standardized, platform-mediated usage". **Claim sits inside for the analysis; the *release* question is COULD NOT CHECK.**

**WildChat-1M / LMSYS-Chat-1M.** Population: real users given free access to GPT-3.5/GPT-4 (WildChat) and "210K unique IP addresses in the wild on the Vicuna demo and Chatbot Arena website" (LMSYS). Unit: one conversation. **Claim sits PARTLY inside**: these are public, real-traffic, million-scale, content-retaining corpora - which is the thing leg (a) says does not exist - but they are not drawn from a provider's capacity-limited serving queue, they carry none of the serving-side metadata, and their content has been de-identified and filtered. So they defeat the *universality* of leg (a) without supplying a drop-in substrate for the candidate's limb.

**Numerator/denominator check on the one number that looks like the claim's.** Azure's "**three**" is the count of **columns in a published CSV schema**, whose numerator class is *fields released to the public* (exclusions: anything the authors never had - "we do not have visibility into the content of the prompts") and whose denominator is *fields in that release*, **not** *fields logged in Azure production*. The near neighbour it is not: the count of fields Microsoft holds internally, which the doc does not print. **Overlap in both directions:** the Azure schema MISSES everything the candidate's limb needs (text, finish reason, success label, model identity, context limit); it INCLUDES one thing the claim does not dwell on (`TIMESTAMP`), which is what makes era-stratification possible at all. Same shape for Chutes' twelve: numerator = *columns in the released parquet*, denominator = *that release*, and it includes `user_id`/`instance_id`/`ttft`/`ct`, which the claim's "lengths and counts" phrasing undersells.

## DEFECTS FOUND

1. **The universal quantifier is unearned, and a counter-instance exists.** Leg (a) as the entry carries it says "**every** public production corpus ... strips prompt CONTENT by design", and its conclusion is that the stratum "**cannot** be re-served". On the four serving traces I opened, (a-i) and (a-ii) hold exactly. But **WildChat-1M** (1M conversations of real GPT-3.5/GPT-4 traffic, `conversation` field carrying every utterance's `content`, with `timestamp` and `turn`) and **LMSYS-Chat-1M** (1M conversations, 25 models, conversation text in OpenAI API JSON format) retain prompt content at million-conversation scale and are freely downloadable. A long-context stratum **can** be cut from them by token length, stratified by `timestamp` against a model era, re-served against a newer model, and graded. So (a-iii) does not follow from (a-i) over the class "public corpora"; it follows only over the class "public *serving traces*". **This is the ledger's recurring failure mode - a premise about a KIND, killed on instances of one sub-kind.**

2. **The leg conflates "no content" with "no gradeable outcome", and only the second is actually fatal.** Sub-claim (e) shows the opened schemas publish **no finish-reason, error code, truncation flag or task-success signal at all** - Chutes' 12 fields contain no status field, Azure's 3 contain no status field, and Copilot's `status` is per *tool call*. That gap is independent of content-stripping, is not the leg the rejection stands on, and is the one that survives the WildChat counter-instance (WildChat's `openai_moderation`/`detoxify_moderation`/`toxic` grade safety, not task success). **The kill is being carried by the weaker of the two available legs.**

3. **A scope-dropping misquotation risk sitting right where the entry would reach for it.** Azure's "the text of the inputs prompts does not impact the performance metrics that we benchmark" is *restrictive*: it asserts irrelevance **only** for throughput/latency/energy benchmarking. Quoted as "the text of the inputs prompts does not impact" - grammatically complete, verbatim - it would read as a general claim and would be a misquotation of exactly the kind this ledger has been burned by. Similarly, Chutes' "Since the trace does not include prompts or explicit session identifiers," is a subordinate because-clause introducing a workaround; it is sound evidence for absence but must not be served as a standalone assertion.

4. **The entry's instance list is incomplete and two years out of date on its own primary source.** `Azure/AzurePublicDataset` now also carries `AzureLMMInferenceDataset2025` and `GitHubCopilotCodingAgentDataset2026`. The Copilot release is the strongest single instance *for* leg (a-i) - 301K sessions, 9.3M LLM calls, turn and tool structure, and an explicit "This release is metadata-only" exclusion list - and the entry does not cite it. A leg this important should have been grounded on the newest instance, not the 2023 one.

5. **ServeGen is mis-slotted.** The entry treats ServeGen as a corpus whose fields can be inspected for content. Its primary release is *distributions* (`chunk-i-dataset.json`, "Request data distributions") plus arrival traces - there is no per-request content to strip. The place ServeGen actually bears on the leg is `conversations/conversations_hashed.json`, where content **is** released but "replaced with block hashes to preserve privacy". That is a *third* category the leg does not name: content released in non-invertible form. It confirms (a-ii) and (a-iii) while complicating (a-i)'s phrasing ("strips content" vs "publishes content irreversibly transformed").

6. **One source is graded on a read I did not complete.** For arXiv:2601.10088 I read characters 0-100,000 of 117,865. Whether a dataset accompanies that paper is **COULD NOT CHECK**. If the entry asserts there is no release, that assertion is not supported by my read; what *is* supported is that the authors state "we did not have access to the underlying text of prompts or completions."

## ROUTES THAT FAILED

- `mcp__github__get_file_contents` on `Azure/AzurePublicDataset` and on `alibaba/ServeGen`: **refused** - "Access denied: repository ... is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge." The authenticated GitHub MCP tools in this session are scoped to the ledger repo only; they are not a route to third-party repos. **Fix that worked: plain `curl` to `raw.githubusercontent.com`, HTTP 200 on all five files, unsummarised.** Worth recording for later checkers - it cost two calls to learn and saved four WebFetches.
- `arxiv.org/abs/2608.13573`: resolves, but **serves v2, not the v1 the entry cites**. Not a failure, a version drift; recorded under citation corrections.
- `arxiv.org/html/2601.10088v1`: fetched, but the summariser covered only the first 100,000 of 117,865 characters and told me so. I did not spend the follow-up call (offset 100000) because the budget was committed to opening the two content-retaining counter-instances, which bore more weight. **The unread 15% is COULD NOT READ, not NOT FOUND.**
- Not attempted for want of budget, and therefore **COULD NOT CHECK**, not negative findings: `alibaba/ServeGen` `data/offline/README.md`; `analysis/GitHubCopilotCodingAgents/schema.json` (the full field reference behind the summary table I did quote); `AzureLMMInferenceDataset2025.md`; the ServeGen paper's data-description section; the HuggingFace mirror `harvardMadsys/chutes_metadata`.
- **Zero WebSearch calls used. No search classifier refusal occurred**, because no search was issued - every document was located from its citation.

## BEARING ON THE LEDGER ENTRY

**Leg (a) HOLDS on its first two joints and FAILS on its third as written. NARROW it; do not let it carry the kill alone.**

- **(a-i) HOLDS, four for four, at FULL TEXT.** Azure 2023 and 2024 publish three fields; Chutes publishes twelve; Copilot 2026 publishes session/turn/LLM-call/tool-call metadata with "- no text content" written into the schema sentence; ServeGen publishes distributions plus hash-replaced conversations. No prompt text or tokens anywhere. The ledger's two-or-three-instance bar for a document-kind premise is **met and exceeded** on this joint, including on the newest instance available (June 2026 traffic).
- **(a-ii) HOLDS, with the reason stated in the source's own words in three of five**: "Due to customer privacy requirements (e.g., GDPR), we do not have visibility into the content of the prompts" (Azure, twice); "replaced with block hashes to preserve privacy" (ServeGen); an explicit metadata-only exclusion list (Copilot). Chutes states anonymisation but gives no rationale for the content exclusion; OpenRouter states authors lacked text access and describes an opt-in mechanism.
- **(a-iii) FAILS as a universal.** "No public corpus retains prompt content at usable scale" is false: WildChat-1M and LMSYS-Chat-1M each publish ~1M real conversations with full utterance content, timestamps and turn indices, de-identified but not stripped. A long-context stratum is cuttable from them and re-servable. What they lack is serving-side metadata, a provider-specific context limit, and any task-success label.

**Recommended disposition: NARROW leg (a), and CONVERT the remainder to a promotion condition.** Replace "every public production corpus strips content, so the stratum cannot be re-served" with the two claims the documents actually support: (i) **every public *serving trace* opened (Azure 2023/2024, ServeGen, Chutes, Copilot 2026) publishes counts and lengths only, three of them for a stated privacy reason** - a premise now grounded on four instances and safe to lean on; and (ii) **no corpus opened, content-retaining ones included, publishes an outcome field** - no finish reason, no truncation flag, no success label - so the candidate's outcome limb has no logged-signal route either. Then the promotion condition the candidate must meet is specific and checkable: **name a public corpus that retains prompt text, carries a timestamp or model field permitting era-stratification against a named previous context limit, and either publishes an outcome signal or licenses re-serving** - and say how the limit stratum is identified. WildChat-1M is the nearest thing to that and fails only the last two tests, which means Gate 4 is **incomplete, not satisfied**: the kill as written would be reversed by one dataset card the adversaries did not open.
