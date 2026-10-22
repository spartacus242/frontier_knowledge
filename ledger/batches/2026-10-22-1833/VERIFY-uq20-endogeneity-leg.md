# VERIFY - UQ-20261022-20 leg (b): request lengths endogenous to the served window

Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

Leg (b) of the fatal attack (attack 4, A2's clause C5), as the entry's adversarial log row 4 words it:
"A2 clause C5: lengths are endogenous to the window they were served under, because the harness
compacts against it, so s does not estimate the demand L_prev would have failed - which is exactly
what the pre-declared negative reads s as."

Two questions decide it: (1) is the contested content a presupposition the question ASSUMES or a
quantity it REPORTS; (2) is the endogeneity SOURCED or ASSERTED.

### (a) The canonical question's clause, verbatim - REPORTS, does not ASSUME

From the entry, line 6, limb (a) of the Question (canonical), quoted verbatim:

  "(a) what is the exceedance share s = P(input length > L_prev | class, C) with CIs"

with the question's preceding scoping clause, also verbatim:

  "For >= 2 open-weight model families with >= 2 announced context-length increases, and for each
  announced step L_prev -> L_new, measured on a named, dated, public request-length corpus C
  stratified by workload class (chat, coding agent, document QA, long tool-trace agent)"

WHAT THE OPENING WORDS SCOPE: "For >= 2 open-weight model families ... measured on a named, dated,
public request-length corpus C stratified by workload class" scopes every limb to an explicitly
named corpus and an explicitly named class. The clause my words sit in ASSERTS a quantity to be
measured; it does not assert, deny, or record a move away from any claim about demand.

PLAINLY: the question REPORTS the share as a described quantity. It is conditioned on `class` and
on `C` and carries CIs. The words "latent demand", "unmet demand", "would have needed", "demand
L_prev would have failed", and any counterfactual verb appear NOWHERE in limb (a) or in the
question's scoping clause. Under the ledger's own rule as the task states it - a contested clause
already converted into a reported quantity is a MEASURAND and attack 4 does not reach it - attack 4
does not reach this clause. s as written is P(input length > L_prev) on a stated corpus: a
descriptive share of a stated support, which is exactly what a window-aware trace can carry.

WHERE THE DEMAND READING ACTUALLY LIVES, since it is in the entry somewhere and a checker should say
where. Not in the question. It is in:
  - line 39 (Significance - consequence): "Negligible exceedance against real cost reclassifies
    announced context length as a positional variable and licenses right-sizing max_model_len below
    the announced number with quantified residual risk."
  - line 9 (Alternative formulations, (1)): "Is the announced context window ever the binding
    constraint for real traffic" - "binding constraint for real traffic" is nearer a demand reading,
    but line 7 states the graded version is the Gate 1 reformulation, not the alternatives.
  - line 58 (Scores): "the inference from s to 'realized marginal value' requires an exogeneity
    clause the record never states."
The pre-declared negative itself (line 21) - "exceedance of a few percent, no outcome gain over
truncation-plus-retrieval, and a measurable short-context cost" - is three measured quantities being
small, not a demand claim. So leg (b) impeaches an INFERENCE the record draws from s, which line 58
already concedes and already scores. It does not impeach a presupposition the question assumes.

## READ LEVEL

1. Entry file /home/claude/frontier_knowledge/ledger/batches/2026-10-22-1833/UQ-20261022-20-entry.md
   - FULL TEXT (69 lines), read locally.
2. Inspect AI, "Compaction", https://inspect.aisi.org.uk/compaction.html
   - PARTIAL: the "Compaction Threshold" section, the "Trim Compaction" section, and the option
     tables, via WebFetch summariser. Not read: the rest of the page.
3. AgentScope 2.0.10, "Compress Context",
   https://docs.agentscope.io/en/versions/2.0.10/building-blocks/context/compress-context
   - PARTIAL: the trigger/threshold passages and the tool-result-truncation passage, via WebFetch
     summariser. Not read: the rest of the page.
4. "A Year in LLM Serving", arXiv:2608.13573v1, https://arxiv.org/html/2608.13573v1
   - PARTIAL: Section 1 (contribution list), Section 5.2 including the paragraph led "Inputs stay
     stable while outputs shrink" and the cohort paragraphs, and the Fig. 11 caption. Two fetches.
     The second fetch REFUSED consecutive-segment reproduction, so the paragraph body around the
     load-bearing sentence is PARAPHRASE FROM THE SUMMARISER, not quotation, and is labelled as such
     below. FRONT MATTER NOT READ - I cannot confirm or correct the entry's "Nixon et al."
5. Tirmazi, Markelon, Bishop, Mitzenmacher, "Context Compaction Theory", arXiv:2608.01326v1,
   https://arxiv.org/html/2608.01326v1
   - PARTIAL: front matter plus text through part of Section 3; the summariser reported the page
     "cuts off partway through Section 3, and Appendix A appears only as the introductory summary".
   - Opened because by KIND it was the one candidate that could have made the endogeneity a sourced
     mechanism rather than an inference. It does not.

NOT OPENED, and named so no silence of theirs is read as a check that passed: TraceLab
("Characterizing Coding Agent Workloads for LLM Serving"); arXiv:2608.00101 (the Copilot trace
paper, whose compaction numbers I take only as the ENTRY reports them, at lines 34 and 64, and do
not independently confirm); SWE-chat arXiv:2604.20779; FineServe arXiv:2607.19349. Budget was spent.

## WHAT THE SOURCE SAYS (quotations as served)

### (c) Scaffold documentation that truncates/compacts against the window - YES, two frameworks

Inspect AI, "Compaction" page, "Compaction Threshold" section:

  "Compaction works by monitoring model input and executing when input tokens get close to the
  model's context window size."
  OPENER SCOPE: "Compaction works by" scopes the clause to the framework's own mechanism. The clause
  ASSERTS the trigger rule. It does not deny it and does not record a move away from it.

  "The default threshold is `0.9` (90% of the context window)."
  OPENER SCOPE: "The default threshold is" scopes the number to the shipped default, not to a
  measured deployment. ASSERTS the configured value.

  "Float values between 0 and 1 (e.g., `0.9`) are interpreted as a percentage of the context window"
  "Token count or percent of context window to trigger compaction." (option-table description of the
  `threshold` parameter)

Inspect AI, "Trim Compaction" section:

  "When compaction triggers multiple times, it continues discarding older messages on each cycle."
  OPENER SCOPE: "When compaction triggers multiple times" scopes the clause to the repeat case only.
  ASSERTS that material is discarded in that case.
  NOTE, against over-reading: the summariser reported that NO sentence on this page says messages are
  truncated or dropped when the window is EXCEEDED. The documented behaviour is pre-emptive
  compaction below the window, not post-hoc truncation at it.

AgentScope 2.0.10, "Compress Context":

  "If total tokens exceed `trigger_ratio x context_size`, compression activates."
  OPENER SCOPE: "If total tokens exceed" scopes the clause to the condition. ASSERTS the rule.
  "Compression activates when token usage exceeds this ratio of the model's context size (capped at
  `0.9`)"
  "The method is a no-op when token usage is below `trigger_ratio x context_size`"
  "once the input tokens exceed 60% of the model context size"  (agentic-compression hint)
  "Once the input tokens pass `(trigger_ratio - context_buffer_ratio) x context_size` and no plan
  task is in progress"
  "After each tool call, the agent compares the result's token count against `tool_result_limit`."
  (tool-result truncation - note this threshold is NOT keyed to the window)

PUBLISHED IS NOT PERFORMED: both pages DEFINE and ANNOUNCE a policy. Neither MEASURES anything.
Neither prints a share of requests, a share of sessions, a length distribution, or any traffic
quantity. They establish that the mechanism exists and is keyed to the window; they establish no
magnitude on any population.

### (b) Published evidence that input-length distributions SHIFTED after a window increase - NONE FOUND

WebSearch 1 (run once, not refused): "input prompt length distribution changed after context window
increase LLM serving trace before and after". Returned no study of a distribution shift. Returns
were glossary and vendor pages (ibm.com "What is a context window?", Wikipedia "Context window",
aws.amazon.com "Context window overflow", evolink.ai, tinkerllm.com, allaboutai.com, dev.to,
thecodeforge.io, pub.towardsai.net) plus trychroma.com "Context Rot: How Increasing Input Tokens
Impacts LLM Performance", which is about MODEL PERFORMANCE as input length grows, i.e. the opposite
direction of causation from the one leg (b) needs, and is a blog, not a trace study.

The nearest thing I opened, arXiv:2608.13573v1 "A Year in LLM Serving", Section 5.2, paragraph led
in bold "Inputs stay stable while outputs shrink.":

  "Input lengths remain broadly stable over the year, with the monthly median staying in the
  thousands of tokens."
  OPENER SCOPE: "Input lengths remain broadly stable over the year" scopes the clause to the whole
  measurement year at GLOBAL aggregation, and the trailing clause scopes the statistic to "the
  monthly median". The clause ASSERTS stability OF THE MEDIAN. It asserts nothing about any tail.

  Figure 11 caption: "Global input tend to stay stable while output tends to drop over time."

An apparent contradiction with Section 1, contribution 2, which prints:

  "Request characteristics shift toward longer inputs and shorter outputs"

I checked it rather than reporting it as an inconsistency. PARAPHRASE FROM THE SUMMARISER (the
consecutive-segment request was refused, so this is not a quotation): the rest of that sentence says
the shift changes the balance between prefill and decode work, and the sentence concludes that short
measurement windows are not enough for capacity planning. So the Introduction's "shift toward longer
inputs" is a claim about the INPUT/OUTPUT BALANCE, inputs stable while outputs shrink, not about
absolute input growth. The two statements are compatible and the entry's use of "broadly stable" is
quotation-accurate.

THE NUMBER CHECK, because this is the one printed figure that looks like it bears on the claim.
NUMERATOR CLASS: per-request "input length", with no exclusions printed in the sections I read,
reduced to a MONTHLY MEDIAN. DENOMINATOR: all requests on a model-mixed serving platform (the entry
records 6,122,413,756 requests), unstratified by workload class, with the figure bands "weighted by
request count" (summariser paraphrase) so heavy-traffic users dominate. CHECKED AGAINST ITS NEAR
NEIGHBOURS: it is a median, not a percentile and not a share above a threshold - the entry itself
records at line 30 that this paper labels its heavy tail "not shown".
OVERLAP, BOTH DIRECTIONS. What the source's class MISSES: every share-above-a-threshold quantity,
i.e. the candidate's entire object; any per-family breakdown; any workload-class stratification; any
announced-window anchor. What it INCLUDES that the claim excludes: every model on the platform
regardless of family or window, every class pooled, and the whole sub-threshold mass that determines
a median. A median "in the thousands of tokens" sits roughly two orders of magnitude below any
plausible L_prev of 128k. A median is one word away from a percentile and is a different quantity.
AND: the summariser reported that this paper contains "no sentence relating input lengths to models'
maximum context windows or to context-window increases."

CONSEQUENCE, AND IT CUTS AGAINST THE CANDIDATE, SO I STATE IT: the entry's own vulnerability note at
line 64 calls this paper's stability "weak evidence against strong endogeneity at that aggregation".
On my read that should be downgraded from "weak evidence against" to SILENT IN BOTH DIRECTIONS. A
stable monthly median in the thousands of tokens, on a model-mixed platform with no window anchor
printed anywhere, bears on neither direction at a 128k threshold. The entry should not bank it as
counter-evidence.

Tirmazi, Markelon, Bishop, Mitzenmacher, "Context Compaction Theory", arXiv:2608.01326v1 - the one
candidate I could name by KIND as potentially making the mechanism sourced. It does not. Per my
read, the paper "does not state or measure that observed input length distributions depend on, or
adapt to, the context window" and "does not report any empirical distribution of input lengths under
two context-window settings". Its closest sentence, quoted:

  "Context rot pushes agents to do context compaction even before their state reaches the context
  window."
  OPENER SCOPE: "Context rot pushes agents to" scopes the clause to a cause of compaction behaviour.
  The clause ASSERTS a compaction trigger. It asserts nothing about a length distribution.

Its only empirical work visible to me is a set-membership case study comparing a compaction endpoint
against a Bloom filter of the same compacted size; it analyses no input lengths. Its 1,000,000-token
figure is, per my read, "an illustrative calculation", i.e. the paper BOUNDS or ILLUSTRATES a cost,
it does not MEASURE a length distribution.

## REGIME

Inspect AI compaction docs. Population: agents run under the Inspect framework by whoever configures
it. Unit of analysis: a configured agent run / a model input. Operating condition: the framework's
own default, `threshold` 0.9. Instrument: the framework's token monitor against "the model's context
window size". Threshold: 0.9 of the window. SITS INSIDE the claim's mechanism scope, and OUTSIDE its
quantitative scope: nothing here is a production traffic measurement, and the candidate's corpus C is
a production request-length corpus.

AgentScope compress-context docs. Population: agents built on AgentScope 2.0. Unit: a reasoning step
("Compression runs automatically before each reasoning step"). Operating condition: `trigger_ratio`
times `context_size`, "capped at 0.9", with a 60%-of-window agentic hint. Instrument: a token
counter against the model's declared `context_size`. SITS INSIDE the mechanism scope, OUTSIDE the
quantitative scope, same reason.

arXiv:2608.13573v1. Population: one model-mixed serving platform's year of traffic. Unit: a request,
collapsed to a monthly median and to join-time user cohorts. Endpoint: input and output token
lengths over time. Comparator: month-over-month, and cohort-over-cohort. Threshold: NONE stated. No
announced window stated. The claim does NOT sit inside this regime: the candidate needs a share above
a named family's L_prev, stratified by class, and this paper states no threshold, no class stratum of
the candidate's kind, and no window.

arXiv:2608.01326v1. Population: conceptual - agents performing context compaction; one case study on
set-membership queries. Unit: a compaction operation. Endpoint: compacted-size versus a Bloom filter
of equal size. The claim does not sit inside this regime at all: no length distribution, no window
comparison.

## DEFECTS FOUND

D1 - THE MEASURAND RULE DISPOSES OF LEG (b) AT THE CLAUSE LEVEL. Limb (a) as the entry prints it
REPORTS "the exceedance share s = P(input length > L_prev | class, C) with CIs" on a named, dated
corpus stratified by class. It does not ASSUME that s measures latent demand; the question contains
no demand term. Under the ledger's own rule the clause is a MEASURAND and attack 4 does not reach it.
Leg (b) is aimed at the record's INFERENCE from s to "realized marginal value" and to "licenses
right-sizing max_model_len" (lines 58 and 39), not at a presupposition of the question. That is a
well-posedness and interpretation objection, and line 58 already books it as one and already deducts
for it. Carrying the same objection a second time as an independent FATAL presupposition failure
double-counts it.

D2 - THE MECHANISM IS SOURCED; THE LOAD-BEARING MAGNITUDE IS NOT. Scaffold compaction keyed to the
window is documented, verbatim, in two independent frameworks (Inspect AI, AgentScope), and per the
entry's own reading in arXiv:2608.00101. So leg (b) is NOT a bare intuition. But what leg (b) needs
in order to void s is that the counterfactual length distribution under L_prev differs from the
observed one by enough to change the answer, and NOTHING I opened measures that. The entry already
says so at line 64(iii): the step "HAS NOT BEEN MEASURED BY ANYONE". My independent check confirms
it and adds that the one paper whose title suggested it might formalise the adaptation,
arXiv:2608.01326v1, does not.

D3 - THE SIGN IS UNDETERMINED, AND THE DOCUMENTATION DOES NOT FIX IT. The scaffold docs sign the
compaction OPERATION in one direction only: compaction removes tokens, so it can only shorten an
observed input ("it continues discarding older messages on each cycle"). They say nothing about the
demand side. The entry records A2's own position, line 64(iii): "the bias is not even signed
(compaction pushes observed lengths down while a larger window invites longer histories)." An
objection that cannot sign its own bias cannot establish that s is unusable; it establishes that s
needs its policy declared.

D4 - A COUNTER-EVIDENCE ITEM IN THE ENTRY IS OVERVALUED, AGAINST THE CANDIDATE. Line 64 banks
arXiv:2608.13573's "broadly stable" as "weak evidence against strong endogeneity". The printed
statistic is a monthly MEDIAN "staying in the thousands of tokens" on a model-mixed platform with no
window anchor anywhere in the paper. It is silent at a 128k threshold in both directions. Strike it
as counter-evidence rather than weigh it.

D5 - PRE-EMPTIVE COMPACTION IS NOT TRUNCATION AT THE LIMIT, AND THE DISTINCTION MATTERS TO LEG (b).
The Inspect page, per my read, contains no sentence about dropping messages when the window is
EXCEEDED; its documented behaviour fires at 0.9 of the window, and AgentScope's hint fires at 60%.
This is the same granularity gap the entry already records at line 32 against arXiv:2608.00101 ("A
share COMPACTED is not a share EXCEEDING"), and it cuts the same way here: the sourced mechanism
operates WELL BELOW the window, so it censors the observable's support at the scaffold's threshold,
not at L_prev. That makes leg (b) an argument about a scaffold constant, which a restatement can
pin, rather than about the window, which it cannot.

### (d) What a surviving restatement would need - requirements only, not a case for the candidate

A restatement would have to supply, per request and on one population:
  1. The scaffold's compaction/truncation threshold PINNED AND RECORDED, so the censoring point is a
     known constant rather than a free parameter. Both frameworks I opened expose it as a configured
     number (`threshold`, `trigger_ratio`), so this is recordable in principle.
  2. The serving model's identity AND its announced maximum window, recorded per request, so the
     length distribution can be cut by the window that actually served it.
  3. The SAME workload class observed under BOTH L_prev and L_new - either a before/after around one
     family's announced step with the scaffold held fixed across the step, or a contemporaneous split
     in which some requests were served at L_prev and some at L_new.
With 1-3, s becomes P(input > L_prev) under a declared, recorded policy: a quantity defined relative
to a named scaffold rather than to latent demand, and the before/after contrast becomes the estimand
instead of a nuisance. Without 3, the one-sided bounds form (s as a LOWER bound on the uncensored
share, paired with the compaction incidence as the censoring rate) requires the net bias to be
signed, and per D3 it is not - so the bounds form needs an argument the entry records as unavailable.
Two facts the entry already states and I do not relitigate: a bounds restatement turns s into "a
lower bound of unknown looseness, not a share with CIs" (line 51), and any restatement is a second
reformulation that Gate 1's spent allowance does not permit (lines 7, 51, 65).

KIND CHECK BEFORE NOMINATING ANYTHING. What kind of document could settle leg (b)? A production or
agent workload characterization that records, per request, the input length, the serving model's
identity, that model's maximum window, AND the scaffold's compaction threshold, spanning a window
change or a mixed-window fleet. TraceLab, "Characterizing Coding Agent Workloads for LLM Serving",
is nominally that kind on its title, and the entry nominates it at line 64; I did not open it and
cannot confirm it records windows or thresholds, so on my evidence that remains a LEAD BY KIND, not
a confirmed settler. Inspect AI and AgentScope are NOT that kind - they are configuration
documentation and measure no traffic. arXiv:2608.01326v1 was not that kind either, which my fetch
confirmed. arXiv:2608.13573v1 is that kind in population but not in instrumentation: it records
lengths over time and no windows.

### (e) Sourced or inference - in those words

The MECHANISM is SOURCED: scaffolds compact against the window, quoted above from two independent
frameworks I opened, and per the entry from arXiv:2608.00101's printed compaction rates.
The SUPPORT BOUND ("a served request cannot exceed the limit of the model that served it") is a
design/definitional truth, exactly as the entry labels it at line 64(i) - not a finding.
The LOAD-BEARING STEP (that the counterfactual distribution under L_prev differs enough to void s,
and in which direction) is AN INFERENCE. It is sourced NOWHERE I opened.

## ROUTES THAT FAILED

- WebFetch on https://arxiv.org/html/2608.13573v1 asking for ORDERED CONSECUTIVE SEGMENTS of the
  Section 5.2 paragraph: REFUSED by the summariser ("I can't reproduce those passages in full,
  because that would mean reconstructing the text in consecutive pieces"). Short quotes were served.
  Consequence: the paragraph body around the load-bearing sentence is paraphrase, labelled as such
  above, and I did NOT complete any cut string by inference.
- No search was refused by the classifier. No fetch was refused by the proxy. No 403, no 429.
- Front matter of arXiv:2608.13573v1 NOT reached: I spent both of its fetches on the length-trend
  sections. So I can neither confirm nor correct the entry's "Nixon et al."
- Budget exhausted before TraceLab, arXiv:2604.20779, arXiv:2607.19349 and arXiv:2608.00101 could be
  opened. Their silence is COULD NOT READ, not NOT FOUND, and is evidence in neither direction.

## BEARING ON THE LEDGER ENTRY

Leg (b) STANDS AS AN UNSOURCED INFERENCE on its load-bearing step, and separately DOES NOT REACH the
question's clause. It should not carry a fatal grade on its own.

1. STRIKE leg (b) as an independent fatal leg of attack 4. Sub-claim (a) is decisive and is settled
   from the entry's own text: limb (a) REPORTS s as "P(input length > L_prev | class, C) with CIs" on
   a named dated corpus; it nowhere assumes s measures latent demand. Under the ledger's own
   measurand rule attack 4 does not reach a clause the question converts into a reported quantity.
2. NARROW what survives of leg (b) into the well-posedness line where the entry already books it -
   line 58, "the inference from s to 'realized marginal value' requires an exogeneity clause the
   record never states" - and into Significance, since it is the decision reading at line 39 that
   needs exogeneity, not limb (a). Do not charge it twice.
3. REVERSE line 60's claim that "either leg independently makes attack 4 Unresolved from two
   independent adversaries, so the fatal grade does not depend on which leg a judge prefers." On this
   check the fatal grade DOES depend on the leg: the CONTENT leg (A1's C3 on limb (b), verbatim-
   sourced on seven dataset cards) is untouched by me and is the only leg I find capable of carrying
   it. The entry's conditional at line 60 then applies in its partial form: with one fatal leg
   standing, the status does not change, but the entry's redundancy claim must go.
4. CONVERT leg (b) to a PROMOTION CONDITION, stated so a later run can discharge it: open TraceLab
   (or any coding-agent/serving characterization recording per-request length, serving-model
   identity, that model's maximum window, and the scaffold's compaction threshold). If such a corpus
   records lengths under two window settings for one class, the endogeneity becomes MEASURED and
   either voids s or is quantified and absorbed into it. Until then the magnitude and the sign are
   both unmeasured, as line 64(iii) already concedes.
5. STRIKE, against the candidate, line 64's banking of arXiv:2608.13573's "broadly stable over the
   year" as "weak evidence against strong endogeneity". It is a monthly median in the thousands of
   tokens on a model-mixed platform with no window anchor printed anywhere in the paper: silent in
   both directions at the candidate's threshold, not weak evidence either way.
6. ADD to the record, as newly sourced and new to the entry: the endogeneity MECHANISM is now
   documented outside arXiv:2608.00101, in two independent agent frameworks' own documentation -
   Inspect AI, default "threshold" 0.9, "Compaction works by monitoring model input and executing
   when input tokens get close to the model's context window size"; AgentScope 2.0.10, "If total
   tokens exceed trigger_ratio x context_size, compression activates", capped at 0.9, with a 60%
   agentic hint. Both DEFINE a policy and MEASURE nothing. This strengthens leg (b)'s mechanism and
   leaves its magnitude exactly where it was, and it also sharpens the entry's own line-32 point: the
   documented trigger fires at 60-90% of the window, so what the scaffold censors is the support at
   its own threshold, not at L_prev.
7. CITATION, new to the entry: Tirmazi, Markelon, Bishop, Mitzenmacher, "Context Compaction Theory",
   arXiv:2608.01326v1 (front matter: Hayder Tirmazi, AllSpice Inc. and Boston University; Sam
   Markelon, Proof Trading; Allison Bishop, Proof Trading and City College of New York; Michael
   Mitzenmacher, Harvard University). Record it as OPENED AND NEGATIVE on the endogeneity question so
   no later run nominates it: it neither states nor measures that length distributions adapt to the
   window.
