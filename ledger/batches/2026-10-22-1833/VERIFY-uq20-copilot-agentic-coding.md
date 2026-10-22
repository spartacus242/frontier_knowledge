# VERIFY - Copilot production traces print a per-class COMPACTION share, not a context-limit exceedance share
Checker: fresh context. Budget used: 7 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

UQ-20261022-20 records that this paper was opened at ABSTRACT LEVEL ONLY; that its abstract names
"context compaction" as a cache-invalidating event and "variable and long-tailed token consumption"
while printing no limit-hit or compaction share; and that its FULL TEXT is the one document most
likely to carry a per-class figure on the candidate's exceedance limb, left unread because the fetch
budget was exhausted at 5 of 5.

Three separable assertions: (i) what the abstract says and does not say; (ii) that the non-read was a
BUDGET fact, not a document fact; (iii) a NOMINATION - that the full text is the kind of document that
could carry a per-class exceedance figure.

(i) and (iii) are the ledger's own claims and both check out, (iii) with a qualification that changes
the entry. The full text is now read, and it does print a per-class share - but of COMPACTION, at
trigger points the paper itself shows firing well below the limit, against a denominator defined by a
prompt-length cutoff and never by a model's announced window.

## READ LEVEL

PARTIAL - substantially full, with a named gap.

- Read: title block and author/affiliation front matter; abstract (verbatim, from the abs page);
  Sections 1-8.3 and into 9.1, i.e. Introduction, Background, Dataset and Methodology, Agent
  Execution Pattern, LLM Footprints, **Context Compaction (Section 6, read in full and quoted)**,
  Tools, Users, and the start of Idleness; Tables 1-7 captions and the Table 4 / Table 6 values;
  Figure 17's caption and its described trigger peaks.
- NOT read: Section 9.2 onward - 9.2 Turn Boundaries as Reclamation Signals, 9.3 Multiplexing
  Opportunity, 10 Related Work, **11 Limitations and Future Work**, 12 Conclusion, References. The
  HTML is 105,735 characters; the first pass covered 0-100,000 and truncated inside 8.3, and the
  offset pass at 92,000 ended mid-sentence in 9.1. Fetch budget ran out before I could reach the
  Limitations section. That is COULD NOT READ for those sections, not NOT FOUND: in particular I
  cannot report what the Limitations section says the traces do not contain.
- The load-bearing section for every sub-claim here is Section 6, and Section 6 was read in full.

Front-matter citation, corrected:

  arXiv:2608.00101v1 [cs.AI; cs.LG]. DOI 10.48550/arXiv.2608.00101 (arXiv-issued, DataCite). No
  journal reference. Submitted 30 Jul 2026, 20:51:51 UTC; v1 only.
  Banruo Liu (UIUC; work done while interning at Microsoft Azure Research), Haoran Qiu (Microsoft
  Azure Research), Inigo Goiri (Microsoft Azure Research), Rodrigo Fonseca (Microsoft Azure
  Research), Ricardo Bianchini (Microsoft Azure), Esha Choukse (Microsoft Azure Research).
  Title as the arXiv listing prints it: "Agentic Coding in the Wild: Characterizing GitHub Copilot
  Traces at Production Scale".

Two front-matter defects in the entry's citation are recorded under DEFECTS FOUND.

## WHAT THE SOURCE SAYS (quotations as served)

Quotations are as the summariser served them; it capped verbatim return at roughly 120 characters and
refused a bulk verbatim request, so each quotation below is a single short served string, not a
reconstruction from fragments. Where a quotation is shorter than its sentence I say what the opening
words scope.

(a) ABSTRACT - what is and is not there. Served verbatim from the abs page:

  "drastically invalidated after events like model switches or context compaction"
  "variable and long-tailed token consumption, time span, and tool calls"

  Opener scoping: the first sits inside a clause about KV-cache state being invalidated AFTER named
  events; it ASSERTS that compaction is such an event and says nothing about how often one occurs.
  The second is a characterization of session shape; it ASSERTS dispersion, not any threshold.
  Abstract numbers, all of them: "comprising 3.2M users, 13M sessions, 761M LLM calls, and 95T
  tokens"; "KV cache hit rates averaging 90% within a turn"; "falling to 55% across turn boundaries";
  "captures 86-90% of total idle time". No percentage or count in the abstract is tied to a context
  limit or to compaction. The ledger's reading of the abstract is correct.

(b) SHARE OR RATE OF REQUESTS, SESSIONS OR TURNS THAT HIT THE CONTEXT LIMIT - ABSENT.

  Sections read for this: 1-8.3, into 9.1, all of Section 6, Tables 1-7, Figure 17. No sentence
  states a share, rate or count of requests, sessions or turns that reached, hit or exceeded the
  model's context limit. The nearest sentence in the paper is a motivating one, not a measurement:

  "As an agentic session runs long, ... eventually push the prompt toward the model's context limit."

  Opener scoping: "As an agentic session runs long," scopes the clause to a growth tendency. The
  clause ASSERTS that prompts move TOWARD the limit; it does not assert that any measured share
  reaches it, and the ellipsis in the served string sits inside the subject, not across a boundary
  that would change the predicate. On the PUBLISHED-IS-NOT-PERFORMED test the paper here DEFINES the
  limit as a direction of travel; it does not measure arrival at it.

  Not reached: whether Section 11 (Limitations) or Section 12 (Conclusion) restates such a share.
  COULD NOT READ. Given Section 6 is the compaction section and prints none, a limit-hit share
  appearing only in the conclusion would be unusual, but I did not read it and do not claim it.

(c) CONTEXT-COMPACTION RATE OR COUNT - PRESENT, four figures, all in Section 6 / Table 6.

  "7.8% of all agent sessions undergo at least one compaction event,"
  "7.8% of all agent sessions undergo at least one compaction event, rising to 22.6% among
   long-context sessions (those with >100K-token prompts)"
  "Compaction is rare at the level of an individual call, occurring in just 0.5% of the time,"
  Table 6, caption: "Share of total daily volume attributed to sessions that contain at least one
   compaction event." Values: 7.8% of sessions, 44.2% of total tokens, 37.1% of LLM calls, 38.9% of
   tool calls.
  Per-session repetition: median 1, mean 1.7 compactions, with a tail "up to 40 times".
  Figure 17, caption: "Distribution of compaction trigger points." Described trigger peaks in
   pre-compaction context utilization: near 50%, 65-66%, 80%, and near 100%, read by the authors as
   model-specific policies.

  NUMERATOR CLASS of the 22.6%, with its exclusions: sessions that "undergo at least one compaction
  event", where compaction is the agent rewriting the prompt by dropping or summarizing older
  messages. Excludes nothing by severity: one compaction at 50% utilization counts the same as one at
  100%.
  DENOMINATOR of the 22.6%: "long-context sessions (those with >100K-token prompts)" - checked
  against its near neighbours, which are different numbers in the same paragraph: all agent sessions
  (7.8%), individual LLM calls (0.5%), total tokens / LLM calls / tool calls (Table 6's 44.2 / 37.1 /
  38.9%). The 22.6% is per-session within a prompt-length class. It is not per-turn and not per-call.

  OVERLAP IN BOTH DIRECTIONS against the candidate's exceedance limb:
  - What the source's class MISSES: any session that actually reached or exceeded the context limit
    WITHOUT the agent compacting - truncation, an API error, a dropped request, a user abandoning the
    turn. Those are exactly the exceedance events, and they fall outside "undergo at least one
    compaction event".
  - What it INCLUDES that the claim excludes: by the paper's own Figure 17, a large part of the
    numerator compacted at roughly 50%, 65-66% and 80% of context utilization. A session that
    compacted at half the window never exceeded anything. So the 22.6% over-counts exceedance in one
    direction and under-counts it in the other, and the two errors do not cancel into a bound.
  A compaction share is one word away from an exceedance share and is a different quantity.

(d) INPUT-LENGTH PERCENTILES OR DISTRIBUTION, as opposed to a mean - PRESENT.

  Table 4 ("Summary of per-session and per-turn statistics to Figure 4"), per-turn prompt tokens:
  median 227.6K, P75 654.0K, P90 1.50M, mean 582.5K. The mean sits between P75 and P90, which is the
  long tail the abstract asserts.
  Section 5.1 / Figure 10, per LLM call: median prompt 68K tokens, median cached prompt 63K tokens.
  No P90 or P99 is printed for per-call prompt length.
  Section 8.2, per user: median 3.2M prompt tokens, P90 38M.
  Table 7 ("User types depending on the coding agent usage. Values are per-user medians."): Chat-only
  23K tokens per turn, Deep-loop 1.1M.
  Output side, Section 5.1: median 247 tokens per call; "88% of calls produce fewer than 1,000
  tokens".
  Figure 2 bins calls as extremely long / long / medium prompt, but the bin thresholds are not printed
  in the text I read, so that figure cannot be converted into a threshold share.

(e) ANYTHING RELATED TO A MODEL'S ANNOUNCED OR MAXIMUM CONTEXT WINDOW - explicitly, NO NUMBER.

  Answering this directly, because it is the candidate's threshold. The paper uses "the model's
  context limit" as the DENOMINATOR of the utilization axis in Figure 17 - so it knows each call's
  window and divides by it - but it never prints a token value for any window, no 128K, no 200K, no
  1M, and it never names a model's announced maximum. The only token threshold in Section 6 is the
  ">100K-token prompts" cutoff that DEFINES the long-context class, which is a prompt-length cutoff
  chosen by the authors, not a model window. The paper notes that limits differ across models, which
  is why the trigger distribution is multi-peaked. So on the candidate's threshold the paper
  ANNOUNCES and uses the window as a normalizer; it does not publish it, and it publishes no share of
  anything against it.

(f) OUTCOME OR TASK-SUCCESS MEASURE FOR LONG-CONTEXT REQUESTS SPECIFICALLY - ABSENT in what I read.

  No task-success, correctness, resolution or failure rate is reported for long-context requests. What
  Section 6 reports around compaction is cost and latency: compaction takes a median of about 22% of
  turn execution time, P90 about 34%; the median event drops 72.8% of prompt tokens; the first call
  after compaction shows a median cache hit-rate drop of 66.1%, which the authors read as behaving
  like a model switch in cache terms. Section 4.4 reports that Deep-loop turns involving failures
  carry 36 LLM calls, which is a volume statistic attached to a failure category, not a success rate,
  and it is not conditioned on long context. Section 11 (Limitations) unread, so I cannot report
  whether the authors state that outcome labels are absent from the traces - which is the likely
  reason none appears.

## REGIME

In the paper's own words: traces from GitHub Copilot's coding agent, "from GitHub Copilot coding
agent traces from June 2026 (sampled 13.5M agent sessions)" (Table 1 caption), over "one week of June
2026" (Table 3 caption), at a scale the abstract states as "3.2M users, 13M sessions, 761M LLM calls,
and 95T tokens". Population: sampled production users of one vendor's coding agent. Units of
analysis, and the paper keeps them distinct: user, session, turn, LLM call, tool call - the
compaction figures are quoted per session and per call, the length percentiles per turn, per call and
per user. Operating condition: live production serving on Azure, mixed models, with model switching
observed as its own phenomenon (Section 5.4). Instrument: serving-side request traces, which is why
every measure is a cost, volume or latency measure and none is an outcome measure. Category
definitions that matter here: a "compaction event" is the agent rewriting the prompt to drop or
summarize older messages; a "long-context session" is one with ">100K-token prompts".

Does the claim sit inside this regime? Partly, and the mismatch is at the threshold. The candidate's
exceedance limb asks for a share measured against a model's ANNOUNCED window. This paper's instrument
can see the window - it normalizes by it in Figure 17 - but its published categories are a
self-chosen 100K prompt cutoff and an agent-behaviour event. A result about compaction incidence is
silent about exceedance incidence, not supportive of it, because Figure 17 shows the event firing
across the whole utilization range rather than at the limit.

## DEFECTS FOUND

1. Citation, title. The entry writes "Agentic Coding in the Wild: Characterizing GitHub Copilot at
   Production Scale". The arXiv listing prints "... Characterizing GitHub Copilot **Traces** at
   Production Scale". The HTML paper's own title line drops "Traces" and matches the entry. Both
   forms are real, from the same v1; the listing form is the one to cite, with the discrepancy noted
   rather than silently resolved.
2. Citation, affiliation. The entry's "(Microsoft)" covers all six authors. The front matter gives
   Banruo Liu as UIUC, "work done while interning at Microsoft Azure Research". First-author
   affiliation is misattributed.
3. Citation, year/venue. Entry gives no identifier. Record it as arXiv:2608.00101 / DOI
   10.48550/arXiv.2608.00101, Liu, 2026. v1 only; unrefereed preprint, so the compaction numbers
   carry no external review.
4. The entry's stated reason for the non-read - budget exhausted at 5 of 5 - is consistent with what I
   found: the document was reachable (HTML v1 opens) and the abstract is available separately from
   the full text, so this was a budget fact, not a document fact. No defect here; recorded because the
   ledger insists on the distinction and this is a case where it held.
5. A substantive defect in the entry's GROUND, not its citation: the entry rests novelty on "no source
   prints the exceedance share", and the nominated document turns out to print a neighbouring per-class
   share (22.6% of long-context sessions compact). The literal ground survives, but it now needs the
   narrower wording in BEARING, because a reader who sees 22.6% and the entry's bare "no source prints
   the share" will read the entry as wrong.
6. Internal inconsistency in the source worth carrying: the abstract says "13M sessions", Table 1's
   caption says "sampled 13.5M agent sessions". Prefer the hedged, instrument-naming form - Table 3's
   "one week of June 2026" with Table 1's "sampled 13.5M agent sessions" - over the abstract's round
   figure, and note the two do not agree.

## ROUTES THAT FAILED

- https://arxiv.org/a/find?query=... - RATE_LIMIT_EXCEEDED at the target (two arxiv.org pages fetched
  in one block). Cost one fetch, returned nothing.
- http://export.arxiv.org/api/query?search_query=ti:... - robots_disallowed; nothing retrieved. The
  arXiv API is not a usable route for WebFetch here.
- WebSearch (1 of 2 used), query: "Agentic Coding in the Wild" Characterizing GitHub Copilot
  Production Scale arXiv - returned the arXiv abs and html URLs on the first result. Not refused.
  Note on corroboration: the same paper surfaced as the arXiv listing, the arXiv HTML, a Microsoft
  Research publication page, two blog write-ups, an Azure dataset README and three further
  commentaries. Those are TITLE MATCHES of ONE document, counted as one source, and none of them is
  cited above - every number here comes from the paper itself.
- https://arxiv.org/html/2608.00101v1 at offset 52,000 with a bulk-verbatim request - the summariser
  REFUSED to return Section 6 as consecutive segments ("would amount to copying the article's text")
  and returned a summary instead. Cost one fetch. The re-ask for individually named short clauses
  succeeded, which is the pattern to use here: name each clause, do not ask for a span.
- https://arxiv.org/html/2608.00101v1 at offset 92,000 - the served window still ended mid-sentence in
  Section 9.1, so Sections 9.2-12 and the References were never served. Fetch budget (7) exhausted
  at that point. Unread, not absent.

## BEARING ON THE LEDGER ENTRY

NARROW the novelty ground, and convert what remains into a promotion condition. Do not hold the entry
as written and do not strike it.

On the limb itself: the exceedance limb is NOT occupied. Sub-claims (b) and (e) both come back
negative on a full read of the compaction section - no share of requests, sessions or turns hitting
the context limit, and no numeric announced window anywhere in the paper. The nearest published
quantity, 22.6% of long-context sessions undergoing at least one compaction, fails the overlap test
in both directions: it misses every session that exceeded the limit without compacting, and it
includes the many sessions that compacted at roughly 50%, 65-66% or 80% utilization per Figure 17,
which never approached the limit. So the candidate's exceedance figure is not a disguised known.

But the entry's ground as phrased is now too strong to leave standing. The entry should be amended to
say that no source prints the share of sessions exceeding a model's ANNOUNCED context window, and
should carry, as the near neighbours it must be distinguished from, Liu 2026's 7.8% of all agent
sessions, 22.6% of long-context sessions (>100K-token prompts), 0.5% of individual calls, and Table
6's 44.2 / 37.1 / 38.9% volume shares - with the Figure 17 trigger distribution as the reason they are
not exceedance figures.

Novelty therefore stays at Medium rather than falling to Low, and the rejection's character is
unchanged - it remains presupposition failure, not a disguised known. The promotion condition: the
candidate must state its threshold as the model's announced maximum window and its denominator as a
named request class, because if it instead means "the point at which the agent compacts", the quantity
is already published at 7.8 / 22.6 / 0.5% and novelty collapses to Low on this one paper.

Two residual exposures, both read-level and neither a negative finding: Section 11 (Limitations) and
Section 12 (Conclusion) are COULD NOT READ at 7 of 7 fetches, so a restatement there is unexcluded;
and sub-claim (f) is answered only over Sections 1-9.1. On the ledger's own nomination discipline, the
entry's nomination of this document was justified by kind - a production-trace characterization paper
is the right kind of document to carry a per-class threshold share - and it paid off partially: the
kind was right, the quantity was adjacent.
