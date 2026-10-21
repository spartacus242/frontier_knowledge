# VERIFY — arena / PRISM / HelpSteer2 / OASST / SHP per-annotator cluster sizes

Checker: fresh context. Date: 2026-10-21.
Budget used: 3 WebSearch of 6 (searches at this proxy return URLs only, no snippet text, so
they could not supply quotations); 5 WebFetch of 5 (cap reached — fetching stopped, no
work-arounds attempted); plus curl to raw.githubusercontent.com, which the routing note
licenses, and two curl attempts that the proxy refused (recorded below).

## CLAIM

As handed to me, a composite of dataset facts rather than one paper's finding. The ledger
entry's strongest objection "rests on per-annotator cluster sizes being small on every corpus
with usable identifiers", and records specifically:

(a) Chatbot Arena shipped an anonymized user id in its July 2023 release, with "33K
    conversations, over 13K users", from which an adversary computed a mean of about 2.5
    votes per user.
(b) PRISM (Kirk et al., arXiv:2404.16019) carries per-participant identifiers; what does it
    print about conversations per participant?
(c) HelpSteer2 (NVIDIA, arXiv:2406.08673): does it release individual annotator identifiers,
    and what does it say about how many annotated each sample?
(d) OASST and SHP: stable per-RATER identifiers, as opposed to author or subreddit groupings?
(e) For each, read level, and whether the cluster-size figure is PRINTED or derived by
    arithmetic from two other numbers.

## READ LEVEL

| Source | What I read | Level |
|---|---|---|
| (a) LMSYS release blog, lmsys.org/blog/2023-07-20-dataset | whole page via WebFetch summariser | full text (of the blog post) |
| (a) HF card, huggingface.co/datasets/lmsys/chatbot_arena_conversations | card prose + Basic Statistics table via WebFetch | full text of the card; **underlying schema/column names NOT inspected** |
| (a) arXiv:2306.05685 / arXiv:2403.04132 | **not read** — fetch cap reached | COULD NOT READ (budget, not blocked) |
| (b) PRISM, arxiv.org/html/2404.16019v1 | first 100,000 of 105,175 chars; abstract, §1, §3.2, §4.1.1, §4.2.1, §5.1, Fig. 1, Fig. 5 caption | full text, minus last 5,175 chars |
| (c) HelpSteer2, arxiv.org/html/2406.08673v1 | whole paper via summariser | full text (v1) |
| (d) OASST data format: raw.githubusercontent.com/LAION-AI/Open-Assistant/main/oasst-data/README.md and .../oasst-data/oasst_data/schemas.py | raw, un-summarised, read directly | full text of the **format documentation**; the oasst1 HF card and arXiv:2304.07327 were **not read** |
| (d) SHP, huggingface.co/datasets/stanfordnlp/SHP | first 100,000 of 140,339 chars (mostly dataset-viewer markup); column list obtained | **partial** — column list full, card prose on label provenance not located in the portion served |

COULD NOT READ vs NOT FOUND: nothing here was NOT FOUND. Every source exists and is open.
The two Arena papers and the oasst1 card are COULD NOT READ **for budget reasons** — I hit
the 5-fetch cap — not because any host refused me.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Chatbot Arena, July 2023 release

LMSYS blog post dated 2023-07-20, an announcement/blog post (not a peer-reviewed paper):

- "33K crowd-sourced conversations with human preference annotations from Chatbot Arena."
- "This dataset contains 33K cleaned conversations with pairwise human preferences collected
  on Chatbot Arena"
- "Contains unrestricted conversations from over 13K users in the wild."
- "Contains the outputs of 20 LLMs including stronger LLMs such as GPT-4 and Claude-v1."
- Field list: "Each sample includes two model names, their full conversation text, the user
  vote, the anonymized user ID," / "the detected language tag, the OpenAI moderation API tag,
  the additional toxic tag, and the timestamp."
- A **different** population, stated on the same page: "In that short time span, we collected
  around 53K votes from 19K unique IP addresses for 22 models." This is the arena traffic
  figure, not the released dataset.

HuggingFace dataset card, `lmsys/chatbot_arena_conversations`:

- "This dataset contains 33K cleaned conversations with pairwise human preferences."
- "It is collected from 13K unique IP addresses on the Chatbot Arena from April to June 2023."
- Field list includes "question ID", two model names, "their full conversation text in OpenAI
  API JSON format", "the user vote", "**the anonymized user ID**", "the detected language tag",
  "the OpenAI moderation API tag", "the additional toxic tag", "the timestamp".
- Basic Statistics table: **"# Users" = 13,383**.
- "we have made our best efforts to remove all conversations that contain personally
  identifiable information (PII)."
- "Users of this data agree to not attempt to determine the identity of individuals in this
  dataset."

**Per-user identifier: PRESENT.** Both the blog and the card name "the anonymized user ID" as
a released field. I did **not** verify the literal column name (the entry's phrasing elsewhere
calls it `judge`); the card's prose calls it "the anonymized user ID" and the card "does not
name a field called 'judge'" in the text served to me. Treat the column *name* as unverified
here; its *existence* is printed twice.

**Per-user vote-count distribution: NOT PRINTED.** The blog page "contains no sentence about
per-user vote counts or their distribution"; the card "does not print any distribution of
votes per user." What is printed is two totals: 33K conversations and 13,383 users / "13K
unique IP addresses".

**The 2.5 figure is ARITHMETIC, not a published quantity.** 33,000 / 13,383 = 2.466, which
rounds to "about 2.5". The sources DEFINE and COUNT the two totals; neither MEASURES nor
PRINTS a per-user mean, median, maximum or distribution, in any table, figure or sentence.

### (b) PRISM

Front matter as served: "The PRISM Alignment Project: What Participatory, Representative and
Individualised Human Feedback Reveals About the Subjective and Multicultural Alignment of
Large Language Models", Hannah Rose Kirk, Alexander Whitefield, Paul Röttger, Andrew Bean,
Katerina Margatina, Juan Ciro, Rafael Mosquera, Max Bartolo, Adina Williams, He He, Bertie
Vidgen, Scott A. Hale. No journal or conference line; the only identifier on the page is
"arXiv:2404.16019v1 [cs.CL] 24 Apr 2024". Type: **dataset paper** ("we introduce Prism, a new
dataset") with three case studies; not a review, not a protocol.

Totals:
- Abstract: "1,500 diverse participants from 75 countries"; "8,0118,011 live conversations with
  21 LLMs" — **rendered with doubled digits in the HTML as served**; the intended figure is
  8,011. Reproduced as served per instruction, and flagged rather than silently corrected.
- §1: "There are 8,011 Conversations between participants () and LLMs ()." (the parentheses are
  empty in the served text, where symbols were dropped)
- Figure 1: "Survey Participants 1,500" and "Total Conversations 8,011".

**Conversations per participant: PRINTED.**
- Figure 1: "**Conversations / participant 5.7±1.0**" — a mean with a spread, printed in the
  paper's summary figure. This is the only mean-and-spread for the full dataset; no minimum,
  maximum or full distribution appears in what I read.
- §4.2.1 (Case Study II methods), a second and differing formulation: "each participant on
  average has 6 conversations with 4 models." Rounded, and about the case-study regime.
- §4.2.1 also describes a balanced **subset**: "6,669 conversations from 1,246 participants"
  (digits again doubled in the served HTML).
- §3.2 footnote 5 gives a **design quota**, not a completed count: "two of each conversation
  type (n=6 in total)."

Per-participant identifier: PRESENT and load-bearing.
- §1: "**Prism links each preference rating to a unique pseudonymous ID and a detailed
  participant profile.**"
- Figure 5 caption: "Participant ID and Cluster ID act as robustness checks."
- §5.1: "We have pseudo-anonymised the data."

### (c) HelpSteer2

Front matter as served: "HelpSteer2: Open-source dataset for training top-performing reward
models", Zhilin Wang, Yi Dong, Olivier Delalleau, Jiaqi Zeng, Gerald Shen, Daniel Egert,
Jimmy J. Zhang, Makesh Narsimhan Sreedhar, Oleksii Kuchaiev — NVIDIA. Type: **dataset paper /
primary release** with reward-model training experiments.

On the annotators:
- "we engaged approximately 1,000 US-based annotators through our vendor Scale AI"
- "Annotators for the HelpSteer2 dataset were contracted through Scale AI"
- annotation process and "annotator screening are primarily derived from HelpSteer guidelines"
- "removing annotations from annotators who were deemed 'untrusted'"
- Limitations: "potential lack of demographic diversity among the annotators (exclusively
  US-based)"
- **"The paper does not state whether annotator identifiers are released."** Silence, which is
  not a prohibition; it is also not a release. I did not read the HF card, so I cannot say the
  released files omit ids — only that the paper I read never says they are included.

On annotators per sample (printed, and stated four times with different formulations):
- "we required at least three annotators to annotate each response" (a requirement)
- "Each sample is initially annotated by three annotators." (the design)
- "two additional annotators are recruited to annotate the sample" (the escalation)
- "We used up to five annotators per sample but only retained annotations from the three most
  in agreement." (the cap plus a selection rule)
- "**Overall, samples were on average annotated by 3.41 annotators.**" (the measured mean)

Sizes: "Our final dataset contains 21,362 high-quality annotated samples", "consisting of
10,681 prompts each with two annotated responses"; abstract: "HelpSteer2 consists of only ten
thousand response pairs". Five attributes "on a Likert-5 scale". The paper gives **no field
schema** for the release; it points to huggingface.co/datasets/nvidia/HelpSteer2. It also does
not state how retained scores are combined.

### (d) OASST and SHP

**OASST — official export-format documentation, read raw (no summariser).**

`oasst_data/schemas.py` prints the released object model:

```
class ExportMessageEvent(BaseModel):
    type: str
    user_id: str | None
```
and `ExportMessageEventRating`, `ExportMessageEventRanking`, `ExportMessageEventScore`,
`ExportMessageEventReport`, `ExportMessageEventEmoji` all **inherit that `user_id`**, i.e. the
format carries a **per-rater identifier on each rating / ranking / score event**.

```
class ExportMessageNode(BaseModel):
    message_id: str
    parent_id: str | None
    user_id: str | None
    ...
    labels: LabelValues | None
    events: dict[str, list[ExportMessageEvent]] | None
```
`user_id` on a node is the **message author** (contributor), which is an author grouping, not a
rater grouping.

The README's own message example shows how labels appear **aggregated**:
`"quality": { "value": 0.416, "count": 3 }`, `"review_count": 3` — i.e. a mean and a count of
reviewers, with no rater identity attached to the value. The README documents that individual-
message exports are produced "when filtering messages based on properties like user, deleted,
spam or synthetic", so a per-user filter exists in the tooling.

Limit of this read: the format **supports** per-rater ids via `events`; I could **not** verify
whether the public `OpenAssistant/oasst1` release populates `events` (the HF card was not read
— fetch cap, and huggingface.co refuses curl at this proxy). So for OASST: author ids are
documented as present; per-rater ids are present in the schema but **unverified in the public
release**, where the label values as documented are averages with counts.

**SHP — HF card/viewer, partial read.** Column list as served:

`post_id, domain, upvote_ratio, history, c_root_id_A, c_root_id_B, created_at_utc_A,
created_at_utc_B, score_A, score_B, human_ref_A, human_ref_B, labels, seconds_difference,
score_ratio`

- "The page does not name any post author, comment author, or rater/annotator field."
- `domain` "has 18 values", sample value "askacademia_train" — a **subreddit grouping**.
- Counts as served: "default · 386k rows", "train · 349k rows", "validation (18.4k rows)",
  "test (18.4k rows)".
- "The page does not state where the preference labels come from. The only related text is the
  tag 'reddit.'" — in the portion served to me; the card's prose on provenance may sit in the
  40,339 characters I did not read.
- No caveat sentence about who produced the preferences was in the portion served.

So SHP: **no per-rater identifier of any kind** in the released columns. Its preference signal
is a function of comment scores (`score_A`, `score_B`, `score_ratio`), i.e. an aggregate of
anonymous votes; individual voters are neither identified nor countable, so per-rater clusters
are not definable at all, let alone small.

## REGIME

- **Arena.** Unit of analysis: one **conversation** (one row) carrying "the user vote".
  Denominator unit: the card's prose says "**13K unique IP addresses**"; the card's table calls
  the same quantity "# Users" = 13,383; the blog calls it "over 13K users". These are not the
  same object: an IP address is not a person — one household or NAT is one id for several
  people, one person on several networks is several ids. Period: "April to June 2023"; release
  July 2023. Models: 20 (card) / 22 (blog, arena traffic). The 53K-votes-from-19K-IPs sentence
  belongs to **arena traffic**, not the released file; mixing it with the release's 33K/13,383
  is a regime error (it yields 2.8, not 2.5).
- **PRISM.** Unit: a **conversation** between one participant and one LLM; 5.7±1.0 is
  conversations per participant. A conversation contains multiple rated model responses, so
  **ratings per participant is a larger number at a finer grain, and I did not locate it in
  what I read.** Population: 1,500 participants, 75 countries, recruited for representativeness.
  The 6,669/1,246 figures are a **balanced subset** used for one case study, not the corpus.
- **HelpSteer2.** Unit: a **sample** (prompt + response). 3.41 is **annotators per sample** —
  the inverse direction from annotations per annotator. Population: ~1,000 US-based Scale AI
  annotators. Regime: 21,362 samples, five Likert-5 attributes.
- **OASST.** Two different units coexist: a **message** (with an author `user_id`) and a
  **label event** (with a rater `user_id`), and the released label is an **average over
  `count` reviewers**.
- **SHP.** Unit: a **pair of Reddit comments under one post**, grouped by **subreddit**
  (`domain`). There is no rater unit.

Does the claim sit inside these regimes? Partly. "Per-annotator cluster size" is well defined
for PRISM (printed, in conversations) and computable for Arena (per anonymised id, which is an
**IP-address-shaped** id, not a person). It is **not** defined for SHP, and for HelpSteer2 the
printed 3.41 answers a different question than the one the objection needs. For OASST it is
defined for authorship and, in the schema, for rating events, but I could not confirm the
public file exposes the latter.

## DEFECTS FOUND

1. **Published is not performed (a).** The entry's "mean of about 2.5 votes per user" is
   **nobody's published quantity**. Neither source prints a per-user mean or distribution; both
   print only the totals 33K and 13,383. 33,000/13,383 = 2.466. That division is the
   adversary's arithmetic on two printed totals, and the entry should say so. A mean with no
   distribution also hides the shape: the Arena vote stream is widely expected to be heavy-
   tailed, and nothing in either source bounds the tail.
2. **Unit substitution (a).** "over 13K users" (blog) and "# Users 13,383" (card table) restate
   a quantity the card's prose defines as "**13K unique IP addresses**". Reporting a per-IP mean
   as a per-user mean is the same class of error as reporting a share of utilisation as a share
   of users. The claim as recorded inherits the looser of the two labels.
3. **Wrong-direction statistic (c).** HelpSteer2's printed annotator figure, "on average
   annotated by 3.41 annotators", is annotators **per sample**. It is not a per-annotator
   cluster size and must not be cited as one. The per-annotator figure (~21,362 × 3.41 ÷ ~1,000
   ≈ 73 annotations per annotator) is **arithmetic on an "approximately 1,000"**, so its
   uncertainty is at least as loose as that approximation, and the paper prints no such number.
4. **Granularity gap, not absence (d, OASST).** OASST is not a corpus "without identifiers":
   the format documents `user_id` on every message and on every rating/ranking/score **event**.
   What the public release shows in its documented example is an **aggregate** label
   (`"value": 0.416, "count": 3`). Calling this "no per-rater ids" overstates; calling it "per-
   rater ids available" overstates in the other direction. The honest statement is a granularity
   gap that I could not close within budget.
5. **Overreach in "every corpus" (bearing on the objection).** PRISM **prints** 5.7±1.0
   conversations per participant — more than double the Arena figure, and in ratings larger
   still. So the generalisation "small on every corpus with usable identifiers" is carrying
   Arena's number across corpora that print their own, larger one. Each corpus needs its own
   figure, as the task says.
6. **Render damage, flagged not corrected (b).** The PRISM HTML as served doubles digits
   ("8,0118,011"; the subset figures likewise) and drops inline symbols ("participants () and
   LLMs ()"). Reproduced as served above. The intended values are evidently 8,011 and
   6,669/1,246, but I have not silently substituted them.
7. **Unverified column name (a).** The literal field name for the Arena identifier was not
   confirmed; the card prose says "the anonymized user ID" and, in the text served, "does not
   name a field called 'judge'". If the entry quotes a column name, that name is unchecked here.
8. **Two Arena papers unread.** arXiv:2306.05685 and arXiv:2403.04132 were not read, so if the
   entry attributes the 33K/13K wording or any per-user distribution to a **paper**, that
   attribution is unchecked. The wording the entry uses matches the **blog post** and the **HF
   card** nearly verbatim.

## ROUTES THAT FAILED

- `curl https://huggingface.co/datasets/.../raw/main/README.md` for
  `lmsys/chatbot_arena_conversations`, `OpenAssistant/oasst1`, `stanfordnlp/SHP` — all three
  "CONNECT tunnel failed, response 403", `connect_rejected`. **Tool-scoped**, as the routing
  note predicts: WebFetch read huggingface.co pages for two of the same datasets in the same
  session. Not a host block.
- `curl https://arxiv.org/abs/2304.07327` (OASST paper front matter) — "CONNECT tunnel failed,
  response 403". Again tool-scoped: WebFetch read two other arxiv.org pages successfully.
- `raw.githubusercontent.com` worked, un-summarised, HTTP 200, as documented.
- Not attempted, by instruction: PubMed Central, Europe PMC, Unpaywall (no contact address was
  supplied anywhere), any proxy inspection.
- Stopped at the 5-fetch cap rather than working around it: the oasst1 HF card, the
  nvidia/HelpSteer2 HF card, arXiv:2306.05685, arXiv:2403.04132, the last 5,175 chars of the
  PRISM HTML and the last 40,339 chars of the SHP page are unread for that reason.

## BEARING ON THE LEDGER ENTRY

The dataset facts the entry records are, item by item, accurate as printed — with one number
that is not printed anywhere and one unit that is looser than its source.

- (a) **Identifier: confirmed present, printed twice** ("the anonymized user ID", blog and
  card). **33K conversations: printed.** **13K users: printed as "# Users 13,383" in the card's
  Basic Statistics table and as "over 13K users" in the blog, but defined in the card's prose as
  "13K unique IP addresses".** **Per-user vote distribution: NOT PRINTED by either source.** The
  "about 2.5" is **DERIVED by arithmetic from two totals**, and is a per-anonymised-id mean, not
  a per-person mean. The entry should carry it as the adversary's arithmetic with the IP caveat,
  not as a dataset statistic.
- (b) **PRISM: identifier present and central** ("links each preference rating to a unique
  pseudonymous ID"). **Cluster size PRINTED**: "Conversations / participant 5.7±1.0" in
  Figure 1, restated as "on average has 6 conversations with 4 models" in §4.2.1. So at least
  one corpus publishes the quantity directly — and publishes it at **more than twice** Arena's
  derived value, in conversations, with ratings per participant finer still and unlocated.
- (c) **HelpSteer2: the paper never says annotator identifiers are released.** It prints
  annotators **per sample** (3.41 on average; at least three required, up to five used, three
  most-in-agreement retained) and ~1,000 annotators in total. Cluster size per annotator is
  **not printed**; any such figure is arithmetic on an approximate headcount. HelpSteer2 is
  therefore a corpus the objection cannot lean on, in either direction.
- (d) **OASST: author `user_id` is documented on every message, and the export schema puts a
  `user_id` on every rating / ranking / score event**, but the documented released label is an
  average with a reviewer count, and I could not verify whether the public oasst1 files populate
  `events`. **SHP: no per-rater identifier at all** — only `post_id`, `domain` (subreddit) and
  Reddit comment scores, so per-rater clusters are undefined, not small.
- (e) Printed vs derived, summarised: **(a) derived** (two totals, no distribution);
  **(b) printed** (Figure 1, mean±sd, no full distribution); **(c) printed but for the wrong
  unit** (annotators per sample), per-annotator figure derived; **(d) OASST neither — ids
  documented, cluster sizes never stated; SHP not applicable.**

Net effect on the objection: its **direction** survives for Arena, but it rests on one
unpublished division over an IP-shaped denominator, it is contradicted in magnitude by the one
corpus that does print the quantity (PRISM, 5.7±1.0 conversations per participant), and two of
the four corpora cited cannot support it because they publish no rater identifiers at all. The
entry should replace "small on every corpus with usable identifiers" with the per-corpus
numbers and their provenance.
