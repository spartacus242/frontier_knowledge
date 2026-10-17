# UQ-20261017-26 — vLLM issue 54506 / verification-vs-decode RFC

## Access log

- mcp__github__issue_read(vllm-project/vllm, 54506) -> DENIED: "repository ... is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge"
- Next: try gh CLI (preconfigured for proxy), then WebFetch github.com/vllm-project/vllm/issues/54506

- gh issue view (GraphQL) -> HTTP 403, GraphQL unavailable in session
- gh api repos/vllm-project/vllm/issues/54506 -> HTTP 403, repo not enabled for session
- SEARCH 1: WebSearch "vllm-project/vllm issue 54506" -> no direct hit, only generic issue-list mirrors
- FETCH 1: https://github.com/vllm-project/vllm/issues/54506 -> SUCCESS. Title = "[RFC]: Batch invariance for speculative decoding needs to cover the forward pass (M=1 vs M=k+1)".
  Body opens: "At temperature 0, enabling speculative decoding can change the generated sequence relative to plain decoding."
  References #41758 (ngram spec decode) and #52522. Two commenters visible: yuvalluria, Leonccaa.
  Summariser did NOT surface number/author/state/date/comment count.
- Next: try public REST API via WebFetch for metadata.
- WebFetch api.github.com/.../issues/54506 -> CLIENT_ERROR (blocked)
- curl api.github.com/.../issues/54506 -> 403 "GitHub access to this repository is not enabled for this session"
- FETCH 2 (same URL, metadata prompt): summariser says number/author/state/date/labels NOT present in converted markdown.
  Body also references #45819. No Member/Collaborator-labelled comment; no maintainer decision. Has a "Feedback Period" section asking two weeks of input.
- SEARCH 2: WebSearch exact title -> no mirror with metadata; only unrelated arXiv "Batch Speculative Decoding Done Right" (2510.22876) and vLLM docs.
  => metadata fields (author, state, date, comment total, labels) = COULD NOT READ via available routes.
- Next fetches: (a) exact-string check, (b) M=1 vs M=k+1 sentence, (c) quantitative numbers.

## FETCH 3 (exact-string check) — SUCCESS
String checked: "nothing in the current stack guarantees those two produce identical bits"
-> FOUND verbatim (summariser notes surrounding bold/markdown emphasis is formatting, not part of the sentence). CONFIRMED.
Also quoted:
- "At temperature 0, enabling speculative decoding can change the generated sequence relative to plain decoding."
- required invariant: "the target model's verify pass over rows `[t..t+k]` must reproduce, bit for bit, what plain `M=1` decode would produce"
Nothing is stated as currently guaranteed.

## FETCH 4 (M=1 vs M=k+1) — SUCCESS
YES, it compares verification batch/row count with ordinary decode.
Posing sentence: "Speculative decoding adds the `M=1 <-> M=k+1` axis for the *same* logical row, which is the axis we found unguarded."
Also: motivation section (verify computes rows at M=k+1, plain decode same rows at M=1); Appendix C core check compares verify logits (M=k+1 rows) to plain-decode logits (M=1).

## FETCH 5 (quantitative content) — SUCCESS
NOT purely qualitative. Numbers in body:
- 125B hybrid linear-attention/MoE + native MTP head, TP4, FP16; SM70/V100 x4
- "draft acceptance ~100% -> 72%, decode ~110 -> 89 tok/s"; "acceptance restored to 81%"
- "16/16 greedy-token parity at 1K/4K contexts"
- Class A: "selecting a 1024-wide reduction for M=1 and 512-wide for M>1"; "~92-114 of 20480 elements differ by 1-2 ULP"
- Class B: "1 FP16 element of 10240 differs, |D| = 7.63e-6"; "downstream layer outputs differ at 1 ULP across ~2.3M elements";
  "XBLOCK=1, R0_BLOCK=2048, 16 warps over a 128-element row"; "across 140+ instances x M=2..8"
- Appendix A: "~1,500 such comparisons across two operator families"; "all 48 layers' block outputs bitwise-equal over a 1024-token prefill"; M=1..8
- token-index migration "moved 14 -> 2 -> 14 -> 10"; boundary prompt lengths 4/5/6; reference Qwen3-0.6B ngram on A100
Comments:
- yuvalluria: qualitative only; PR #45819, Qwen3.5/3.6 GDN_ATTN; proposes VLLM_BATCH_INVARIANT cover all execution modes / run verify pass as M=1.
- Leonccaa: retracts two own claims; two launches of NON-spec engine, identical inputs/config -> "identical 64-token greedy output but materially different logits",
  "469 of the reported top-8 logprob entries differ", "maximum delta of 5.25 nats", first-position logprob "-0.156 in one run and -0.022 in the other".
  Says Class D load-strategy claim and 14->2->14->10 narrative are unproven from token-level A/Bs; bitwise results (Classes A,B,C) stand.

## CONCLUSION
- Issue 54506 IS about output determinism (bitwise parity of spec decode vs plain decode). No fallback search needed.
- Metadata (author login, open/closed, creation date, total comment count, labels) COULD NOT BE READ:
  routes tried = mcp__github__issue_read (repo not allowed), gh issue view (GraphQL blocked), gh api / curl api.github.com (403 repo not enabled),
  WebFetch api.github.com (CLIENT_ERROR), WebFetch of HTML page x3 (markdown conversion strips the issue header), 2 WebSearches (no mirror).
- No maintainer/Member/Collaborator decision visible; RFC is in a self-declared "Feedback Period" of "Two weeks."
- Likely-but-unverified inference: Leonccaa is the OP (says "two of my own claims" and restates body figures). NOT confirmed.
- Exact string CONFIRMED verbatim.
