# VERIFY - BurstGPT and Mooncake trace releases publish counts, timings and remapped block IDs, never prompt content; leg (a) holds on both
Checker: fresh context. Budget used: 2 WebFetch, 0 WebSearch. Date 2026-10-22.

(Most reads were free `curl` range-reads of raw.githubusercontent.com and of GitHub release assets, which bypass the summariser and do not consume the WebFetch budget. The two WebFetch calls went to the two repository front pages. No search was needed: both repositories were locatable from the citations without one.)

## CLAIM

LEG (a) OF THE FATAL ATTACK, as the entry carries it: that EVERY public production request-length corpus strips prompt CONTENT by design, so the stratum of requests exceeding a previous context limit cannot be re-served and graded, which is what the candidate's limb (b) requires.

Tested here on the two releases the main pass does not reach:

1. **BurstGPT** - entry cites "Wang et al., arXiv:2401.17644" and its released trace on GitHub.
2. **The Mooncake trace release** - entry cites "Qin et al., Mooncake / Kimi", JSONL with a documented schema.

The test as the entry frames it, and as I ran it: does either artifact publish request CONTENT, or a reversible reference to it, as opposed to token COUNTS and timing? Prompt hashes or block identifiers are NOT content. The prompts themselves would break the leg outright.

I graded the **artifacts**, not papers about them. For "what fields does this release publish", the kind of document that can settle the question is a CSV header line or a schema file in the release itself; a paper's prose about the release cannot settle it, because prose describes an intent and a header records a fact. I had both headers and both schema documents, so I did not need either paper, and I did not open either paper. (This matters for one thing the entry flags: the Mooncake paper that "the record returned and never opened" is still unopened, and on this question it is the wrong instrument anyway. See DEFECTS FOUND for what that does and does not license.)

## READ LEVEL

### BurstGPT

- **Location.** Repository `https://github.com/HPMLL/BurstGPT`, default branch `main`. The trace payload is distributed as **GitHub release assets** under Release v2.0 (`https://github.com/HPMLL/BurstGPT/releases/tag/v2.0`), six CSV files; one copy, `data/BurstGPT_1.csv`, also sits in the repository tree.
- **What it actually is.** **CSV**, comma-delimited, with a header line. README states "~5.29M lines, ~188MB" for `BurstGPT_1` & `BurstGPT_2` and "~5.34M lines, ~220MB" for `BurstGPT_3`.
- `README.md` (raw): **FULL TEXT.**
- `LICENSE` (raw): **PARTIAL** - first 1200 bytes, enough to identify it as "Attribution 4.0 International" (CC BY 4.0).
- `data/BurstGPT_1.csv` (raw): **PARTIAL - header line plus the first ~28 data rows** (first 1200 bytes of a ~188MB file). For the question asked this is a complete read of the field inventory, because in CSV the entire schema is the header line.
- Release asset `v2.0/BurstGPT_1.csv`: **PARTIAL - header line plus first 8 rows.**
- Release asset `v2.0/BurstGPT_without_fails_3.csv`: **PARTIAL - header line plus first 4 rows.** This is the file that carries the newer, wider schema; I went to it specifically because the in-tree copy does not.
- `BurstGPT_2.csv`, `BurstGPT_without_fails_1.csv`, `BurstGPT_without_fails_2.csv`, `BurstGPT_3.csv`: **NOT READ.** Their headers are not individually confirmed. The README groups all six under one "## Schema" section, and the two headers I did read are the two distinct forms that section implies.

### Mooncake

- **Location.** Repository `https://github.com/kvcache-ai/Mooncake`, default branch `main`, directory `FAST25-release/`. Four trace files: `FAST25-release/traces/conversation_trace.jsonl`, `FAST25-release/traces/toolagent_trace.jsonl`, `FAST25-release/traces/synthetic_trace.jsonl`, and the historical `FAST25-release/arxiv-trace/mooncake_trace.jsonl`.
- **What it actually is.** **JSONL**, one JSON object per line, with a documented schema in `FAST25-release/README.md` under the heading "## Trace Format".
- `FAST25-release/README.md` (raw): **FULL TEXT.** This is the schema document.
- `arxiv-trace/mooncake_trace.jsonl` (raw): **PARTIAL - first 9 lines complete** (first 1200 bytes).
- `traces/conversation_trace.jsonl` (raw): **PARTIAL - first 5 lines complete.**
- `traces/toolagent_trace.jsonl` (raw): **PARTIAL - first 4 lines complete.**
- `traces/synthetic_trace.jsonl` (raw): **PARTIAL - first line complete, second truncated mid-array.**
- `FAST25-release/Mooncake-FAST25.pdf`: **NOT READ,** deliberately. Not needed; see CLAIM.
- Mooncake paper (Qin et al.): **NOT READ.** Its front matter is therefore not checked by me, and I correct nothing in that citation.

Because JSONL carries no header, a JSONL field inventory read from data lines alone is only as complete as the lines read. I therefore report the schema document and the data lines separately below, and note where they agree. A field that appears in neither the schema nor any line I read is **unverified**, not **absent** - though for the content question the schema's own closing summary (quoted below) is an affirmative enumeration, which is stronger than my sample.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) PUBLISHED FIELDS, VERBATIM

**BurstGPT, header of `data/BurstGPT_1.csv` and of release asset `v2.0/BurstGPT_1.csv` - identical, quoted verbatim, complete line:**

```
Timestamp,Model,Request tokens,Response tokens,Total tokens,Log Type
```

First data row as served, verbatim: `5,ChatGPT,472,18,490,Conversation log`

**BurstGPT, header of release asset `v2.0/BurstGPT_without_fails_3.csv` - verbatim, complete line:**

```
Timestamp,Session ID,Elapsed time,Model,Request tokens,Response tokens,Total tokens,Log Type
```

First data row as served, verbatim: `19440110.0,1722ac82-0a46-4bf0-aa08-89794e7a2b3f,43,GPT-4,906,446,1352,Conversation log`

**BurstGPT README, "## Schema" section, quoted verbatim bullet by bullet:**

- "`Timestamp`: request submission time, seconds from `0:00:00` on the first day (calibrated to the local time zone )."
- "`Session ID`: conversation ID, only conversation mode have this, traces that share the same value of `Session ID` are in the same conversation session."
- "`Elapsed time`: time between the request submission time and system response time, covers the full duration from submitting the inference request to getting the complete final response (all tokens included). It's not the same as TTFT (time to first token). In seconds."
- "`Model`: called models, including `ChatGPT`(GPT-3.5) and `GPT-4`."
- "`Request tokens`: Request tokens length."
- "`Response tokens`: Response tokens length."
- "`Total tokens`: Request tokens length plus response tokens length."
- "`Log Type`: the way users call the model, in conversation mode or using API, including `Conversation log` and `API log`."

**Field-by-field verdict for BurstGPT (8 fields, the union of both headers):**

| Field | Content? | What it is |
| --- | --- | --- |
| `Timestamp` | no | timing - seconds from the first day |
| `Session ID` | no | opaque grouping key. The served value is a random-looking UUID (`1722ac82-0a46-4bf0-aa08-89794e7a2b3f`). It groups turns of one conversation; it is not a hash OF the prompt and nothing in the release maps it to text |
| `Elapsed time` | no | timing - end-to-end latency in seconds |
| `Model` | no | model-family label, two values: `ChatGPT`, `GPT-4` |
| `Request tokens` | no | **count** |
| `Response tokens` | no | **count** |
| `Total tokens` | no | **count**, derived |
| `Log Type` | no | categorical, two values: `Conversation log`, `API log` |

**No field of either BurstGPT header carries request content, and none carries a reversible reference to content.** Counts, timings, two categorical labels, and one opaque session key.

**Mooncake, schema entry quoted verbatim from `FAST25-release/README.md`, "## Trace Format":**

> "Each trace is a JSONL file. Each line is one request:"

followed by the sample object, then:

> "Fields:
> - `timestamp`: Relative request arrival time in milliseconds. In the real traces, requests should be replayed according to these timestamps. In the synthetic trace, timestamps are generated from a Poisson process.
> - `input_length`: Number of input tokens. Raw text and tokens are not included for privacy protection.
> - `output_length`: Number of output tokens.
> - `hash_ids`: Remapped prefix block hashes. The block size is 512 tokens. Identical hash IDs indicate reusable prefix KV cache blocks. For example, the two sample requests share the first 12 hash IDs, so they can share prefix caching for the first `12 * 512 = 6144` tokens."

**Mooncake, a data line as served, verbatim** (from `arxiv-trace/mooncake_trace.jsonl`, line 1):

```
{"timestamp": 0, "input_length": 6755, "output_length": 500, "hash_ids": [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]}
```

and from `traces/conversation_trace.jsonl`, line 1:

```
{"timestamp": 0, "input_length": 6758, "output_length": 500, "hash_ids": [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]}
```

All four files, on every line I read, carry exactly these four keys and no others. The schema document and the data agree.

**Field-by-field verdict for Mooncake (4 fields):**

| Field | Content? | What it is |
| --- | --- | --- |
| `timestamp` | no | timing - milliseconds, relative |
| `input_length` | no | **count** of input tokens. The schema says in the same breath that the text is not there |
| `output_length` | no | **count** of output tokens |
| `hash_ids` | no | block identifiers, and **remapped** ones. Not merely "a hash of content" but a renumbering of hashes, 512 tokens to a block. Under the entry's own rule ("A corpus that publishes prompt hashes or block identifiers is NOT content") this is not content twice over |

**Neither release publishes prompt text. Neither publishes a reversible reference to it.** On the entry's own criterion, nothing here would break the leg.

### (c) CONTEXT-WINDOW OR MAX-LENGTH FIELD

**Neither release publishes a per-request context-window or max-length field.** There is no such column in either BurstGPT header and no such key in the Mooncake schema or in any line I read.

On identifying the serving model's window:

- **BurstGPT identifies a model FAMILY per request but not a window.** The field is `Model`, documented as "`Model`: called models, including `ChatGPT`(GPT-3.5) and `GPT-4`." Two values. That names a family, not a deployment: GPT-3.5 and GPT-4 each shipped in several context variants, and nothing in the release says which deployment served a given row. So the window must be supplied from outside the artifact, and whichever one you pick is an assumption the artifact does not license.
- **Mooncake identifies no model at all.** There is no model field. The nearest quantity is the block size: "The block size is 512 tokens." That is a KV-cache paging granularity, not a context window, and it is one word away from being mistaken for one. The release does not name the serving model or its window anywhere in the schema document.

**Where this leaves limb (a) versus limb (b)** - the distinction the entry asked me to keep straight:

- **Limb (a)**, an exceedance SHARE, is **partly computable** from either trace, but only with an externally supplied window. BurstGPT gives `Request tokens` and `Total tokens` per row; Mooncake gives `input_length` and `output_length`. Fix a window by assumption and you can count rows above it and divide. That arithmetic would be YOUR OWN, not the source's: **neither release prints an exceedance share**, and neither prints a window to measure against. The artifacts therefore support a length distribution, not a published exceedance statistic.
- **Limb (b)**, re-serving and grading the exceeding requests, is **not supported by either release**, because there is nothing to re-serve. Identifying a row as over the limit tells you a length; it hands you no prompt.

### (d) DOCUMENTED STATEMENT OF WHY CONTENT IS WITHHELD

**Mooncake: YES, three times, in the release's own documents.** With the openers and their scope written out, as instructed:

1. Schema bullet, `FAST25-release/README.md`: "`input_length`: Number of input tokens. Raw text and tokens are not included for privacy protection."
   - **What the opening words scope:** the sentence sits inside the field-definition bullet for `input_length`, so "Raw text and tokens" is scoped to what accompanies that length field in the release - the input text and its tokenization. The clause **ASSERTS** the withholding and gives privacy as the reason. It is not a record of a move away from withholding, and it is not a denial.
2. Closing paragraph of "## Trace Format": "The trace files contain only anonymized timing, length, and remapped hash information. They are intended for reproducible simulation and evaluation of KV cache reuse behavior without exposing user content."
   - **What the opening words scope:** "The trace files" scopes the claim to **the released files**, not to Mooncake's internal data and not to the paper's experiments. Within that scope the first clause is an affirmative, exhaustive enumeration ("contain **only**"), which **ASSERTS** that nothing beyond timing, length and remapped hashes is present. The second clause states the purpose, and "without exposing user content" **ASSERTS** the withholding.
3. Repository front page, as served by WebFetch: "We open-source anonymized request traces containing request arrival times, input and output token counts, and remapped block hashes." and "These traces are designed to support reproducible simulation and evaluation of caching behavior while preserving user privacy."
   - **What the opening words scope:** "We open-source ... traces" scopes to the act of release; "These traces" scopes to the released traces. Both **ASSERT**. Note the hedge-free but **enumerative** form: the first sentence lists what IS there, which is the same four quantities as the schema.

Quotation 2 is the formulation to carry into the ledger, because it is the one that both enumerates exhaustively and states the purpose; quotation 1 is the one that names the reason most directly. Neither is a bare restatement of the other.

**BurstGPT: NO.** I read `README.md` in full and grepped it for `privac|anonym|GDPR|content|prompt text|personal|licen|de-identif` - **zero matches.** There is no privacy note, no anonymization note, no GDPR note, and no sentence explaining why prompt or response text is absent. The repository ships `LICENSE` = "Attribution 4.0 International" (CC BY 4.0), which licenses the released data for reuse with attribution; it is a licence on what IS published and says nothing about what was withheld or why. The README's only "why" is a use invitation: "You may scale the average Requests Per Second (RPS) in the trace according to your evaluation setups."

**Per the entry's own instruction, this absence is not evidence either way.** It does not suggest BurstGPT has content somewhere; the header already settles that it does not. It means the words "by design" in the leg are documented for Mooncake and merely true-in-effect for BurstGPT.

## REGIME

Stated in each release's own words, then whether the claim sits inside it.

**BurstGPT.** Population: "a real-world trace dataset of LLM serving workloads", and "This LLM serving is powered by Microsoft Azure." Unit of analysis: one row = one request (with `Log Type` distinguishing "`Conversation log`" from "`API log`"). Operating condition: "Duration: 121 consecutive days in 4 consecutive months" for `BurstGPT_1`/`BurstGPT_2`; "Duration: 110 consecutive days in 4 consecutive months" for `BurstGPT_3`. Instrument: serving-side logs. Categories: two models, `ChatGPT`(GPT-3.5) and `GPT-4`. **The claim sits inside this regime**: it is a production corpus of request lengths, which is exactly the kind the leg quantifies over.

**Mooncake.** Population: the real traces are "sampled from one hour of online request data"; the synthetic trace "is constructed from public datasets and uses Poisson-generated arrivals while preserving the order within multi-turn conversations." Unit of analysis: "Each line is one request." Operating condition: three workloads, with printed sizes - Conversation 12,031 requests, avg input length 12,035, avg output length 343, arrival pattern "Timestamp"; Tool and Agent 23,608 requests, avg input 8,596, avg output 182, "Timestamp"; Synthetic 3,993 requests, avg input 15,325, avg output 149, "Poisson". (These are PRINTED in the workload table of `FAST25-release/README.md`; units are requests for the counts and tokens for the lengths; the denominator for each average is that file's request count on the same row. They are not exceedance shares and bear on the claim only as evidence that lengths, not texts, are what the release quantifies.) Instrument: serving-side trace with KV-block accounting. **The claim sits inside this regime for the two real traces.** For `synthetic_trace.jsonl` the fit is looser, because that file is not production data - see DEFECTS FOUND.

**Neither regime includes a context window.** Neither release states a maximum request length, a model deployment, or a truncation threshold. A claim about "requests exceeding a previous context limit" is therefore **outside** what either artifact measures, and the artifacts are silent on it rather than supportive of it.

## DEFECTS FOUND

These are defects in the leg's wording and in the citation, not grounds to strike it. The leg's substance survived.

1. **"EVERY public production request-length corpus" is a universal claim, and I added two confirming instances to it, not a proof of it.** Two instances are two instances. The ledger's own record on premises about a KIND of artifact - zero of three instances supplying what a kill assumed - is a record of a universal collapsing when checked. This check went the other way, and the leg now stands at 2-for-2 here plus whatever the main pass returns on its four. That is an enumerative generalization over a handful of named releases. It should be carried as such: **"every corpus we have checked"**, not "every corpus". The honest form names the releases.

2. **"by design" is documented for one of the two, not both.** Mooncake says why in its own schema file, three times, and the quotations are above. BurstGPT says nothing about it anywhere in its README or licence. The fact that BurstGPT publishes no content is **verified from the header**; the claim that it does so **by design** is not verified for BurstGPT, because no document in the release states a design intent. If the leg's force depends on "by design" (for instance, on an argument that the practice is deliberate and so will not change), that force rests on Mooncake and not on BurstGPT.

3. **One narrow seam, which I record because a determined reader will find it: `synthetic_trace.jsonl`.** The release says it "is constructed from public datasets". So the prompts underlying that one file are, in principle, public somewhere - unlike the two real traces. This does **not** break the leg. The trace publishes no pointer into those datasets: `hash_ids` are "**Remapped** prefix block hashes", a renumbering, so there is no join key, and under the entry's own rule a block identifier is not content. And the file is explicitly not production data - "constructed from public datasets", "Poisson-generated arrivals" - so it is outside the leg's population anyway. I flag it because the leg's phrase "cannot be re-served" is at its weakest exactly here, and a reviewer who finds it unflagged will think it was missed.

4. **Citation front matter, BurstGPT.** The entry cites only "Wang et al., arXiv:2401.17644". The repository's own BibTeX front matter gives a peer-reviewed venue and DOI the entry omits. From the repository README's BibTeX block, verbatim fields: authors "Yuxin Wang and Yuhan Chen and Zeyu Li and Xueze Kang and Yuchu Fang and Yeju Zhou and Yang Zheng and Zhenheng Tang and Xin He and Rui Guo and Xin Wang and Qiang Wang and Amelie Chi Zhou and Xiaowen Chu"; title "{BurstGPT}: A Real-World Workload Dataset to Optimize LLM Serving Systems"; booktitle "Proceedings of the 31st ACM SIGKDD Conference on Knowledge Discovery and Data Mining V.2 (KDD '25)"; year 2025; address "Toronto, ON, Canada"; publisher "ACM"; doi "10.1145/3711896.3737413". First author **Yuxin Wang**, so "Wang et al." is correct. Caveat on my own read level: this is the **repository's** BibTeX, not the arXiv PDF's front matter, and I did not open arXiv:2401.17644. Treat the venue and DOI as grounded and the arXiv-to-KDD title correspondence as unchecked.

5. **Citation front matter, Mooncake: NOT CHECKED.** I did not open the Mooncake paper or `Mooncake-FAST25.pdf`, so I correct nothing in "Qin et al., Mooncake / Kimi". The repository is `kvcache-ai/Mooncake`. I am not nominating `FAST25-release/Mooncake-FAST25.pdf` as the document that would settle anything, because the question asked here - what fields are published - is settled by the schema file, and a paper is not the kind of document that settles it. If a later pass needs the paper, it should be for a different question (the serving model's window, say), and that is a real gap: **no document I opened names Mooncake's serving model or its context window.**

6. **A number one word away from the claim's, so that nobody later mistakes it.** Mooncake prints "The block size is 512 tokens." That is a KV-cache block granularity. **Numerator class:** tokens per prefix-cache block, the unit in which `hash_ids` entries are denominated. **Denominator:** none - it is a block size, not a ratio. **What it misses relative to a context window:** everything; it imposes no ceiling on `input_length`, and the traces contain rows far above it (`input_length` 40160 in `synthetic_trace.jsonl` line 1). **What it includes that a window excludes:** it is a property of the cache implementation, present whatever the window is. It is **not** a max length and must not be used as one.

## ROUTES THAT FAILED

- `mcp__github__get_file_contents` on `HPMLL/BurstGPT` and on `kvcache-ai/Mooncake`: **refused, tool-scoped.** "Access denied: repository ... is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge." Not a host block and not a missing document. I did not attempt to add a repository.
- `curl https://api.github.com/repos/.../contents/`: **refused at the proxy** with HTTP 400 and body `{"message":"Request path could not be canonicalized."}`. Tool-scoped at this proxy; I did not probe further and did not route around it.
- `curl` range-reads of `https://raw.githubusercontent.com/HPMLL/BurstGPT/main/data/` for `BurstGPT_2.csv`, `BurstGPT_without_fails_1.csv`, `BurstGPT_without_fails_2.csv`, `BurstGPT_1_conversation.csv`, `BurstGPT_conversation.csv`: **404: Not Found, each one. This is NOT FOUND, not COULD NOT READ** - and it is correct behaviour, not a failure: the README says only "`BurstGPT_1.csv` is also in `/data`", and the other five CSVs are **release assets** under the v2.0 tag, not files in the git tree. I reached two of them at `https://github.com/HPMLL/BurstGPT/releases/download/v2.0/<name>` with `curl -L` and a byte range, which worked.

**Nothing I needed was COULD NOT READ.** Both schema documents and both header forms were read as served. The unread items (four BurstGPT CSV headers, both papers, the FAST'25 PDF) are NOT READ by choice or budget, and their silence is not evidence in either direction.

## BEARING ON THE LEDGER ENTRY

**(e) Leg (a) HOLDS across both of these releases as well. Neither supplies what the kill assumes cannot be had.** Verified from the artifacts, not from papers: BurstGPT publishes `Timestamp,Session ID,Elapsed time,Model,Request tokens,Response tokens,Total tokens,Log Type` and Mooncake publishes `timestamp`, `input_length`, `output_length`, `hash_ids` - counts, timings, two categorical labels, an opaque session key, and remapped block identifiers. No prompt text. No reversible reference to prompt text. On the entry's own stated criterion, nothing here breaks the leg, and Mooncake's schema file states the withholding and its reason in its own words.

**HOLD leg (a), with two narrowings written into the entry, neither of which touches the kill:**

- Narrow "EVERY public production request-length corpus" to **"every corpus checked, which is now: BurstGPT (v2.0, six CSVs) and the Mooncake FAST'25 release (four JSONL files), plus the main pass's four."** Name them. The leg is an enumerative generalization over named releases, and after this check it is a well-supported one; it is not a proof that no such corpus exists, and the ledger's record on universals about artifact KINDS is the reason to say so in the entry rather than in a footnote.
- Keep **"by design"** attached to Mooncake, which documents it, and not to BurstGPT, which publishes no content but documents no reason. Sub-claim (d) is a yes for one and a no for the other.

**One thing this check moves, and it belongs to limb (a), not limb (b).** Both releases publish per-request input lengths, so a share of requests above an assumed window is computable arithmetic. But **neither release publishes a context-window or max-length field, and neither identifies the serving model's window** - BurstGPT names only a model family (`ChatGPT`, `GPT-4`), Mooncake names no model at all. So the window is an external assumption in both cases, and no exceedance share is printed in either artifact. Limb (a) is therefore computable-with-an-assumption rather than supported-by-publication, and limb (b) remains unsupported on both, which is what leg (a) asserts.

**Sub-claims reached: (a), (b), (c), (d), (e) - all five.** None marked COULD NOT CHECK. Budget was not exhausted: 2 of 6 WebFetch and 0 of 2 WebSearch were used, the rest of the work having gone through free raw reads.
