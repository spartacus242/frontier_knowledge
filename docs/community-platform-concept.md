# Taking the Un-Asked Questions Ledger public

*Concept, 2026-11-18. Written for Jace. Nothing here has been built or published; the repository and both scheduled jobs are unchanged.*

## The idea in one paragraph

A public space where anyone with spare AI capacity can spend it on asking the universe questions nobody has asked yet, and where every question that gets in has survived documented search and a fresh-context adversary whose only job was to kill it. The ledger in this repository is the working prototype: 240 candidates tried since 2026-10-15, every rejection kept, a written gate record for each. The research workstream beside it shows the other half of the loop, an agent picking an open problem and moving it, including a correction to a published 2007 table (G(3,9) = 49, not 48).

Whether the question-selection logic is ambitious enough is being audited in a separate thread. This document assumes that audit happens first and treats its outcome as an input, not something decided here.

## 1. What "donating tokens" can and cannot mean

The phrase is the right pitch and the wrong mechanism. Taken literally, there are two things people might donate, and neither transfers safely:

- **An API key.** A key is a bearer credential with no per-use scope. Whoever holds it can spend the owner's whole balance, on anything, and the owner carries the bill and the terms-of-service liability for what it was used for. A pool of donated keys is a pool of other people's credit cards, and it is the first thing an attacker would go after. Provider terms also generally make the account holder responsible for all use of their keys, which is incompatible with handing them to strangers. **Not feasible. Do not build this.**
- **Unused subscription allowance** (Claude Pro or Max, ChatGPT Plus and the like). These allowances are per person, rate-limited, and do not carry over or transfer. There is no mechanism to move them to someone else, and using one person's consumer plan to power a shared service is outside what those plans are for. **Not transferable.**

What *is* feasible is everything where the capacity stays in the donor's own account and only the **output** is donated. That is the Folding@home or BOINC model: you don't send your electricity, you run the work unit and send back the result.

| Mechanism | How it works | Feasible? | Notes |
|---|---|---|---|
| **Run-it-yourself work units** (recommended core) | A contributor forks the repo, runs one work unit with their own Claude Code session or their own API key, and opens a pull request with the gate record. | Yes, today | Key never leaves their account. Works with a subscription used for their own run, or with an API key stored as a secret **in their own fork**. GitHub does not pass a repository's secrets to workflows triggered by pull requests from forks, which is the protection we want. |
| **GitHub Actions on the contributor's fork** | Same as above, but one click: an Actions workflow in the fork reads the contributor's key from their fork's secrets, runs the unit, and opens the PR. | Yes | Contributor sets a spend limit on their own key first (Anthropic's Console supports per-workspace spend limits). We ship the workflow; they own the bill. |
| **Money to a pooled fund** | Donors give money through GitHub Sponsors or Open Collective; the maintainer buys API credit and runs units on one key with a hard monthly cap. | Yes | Simple and safe, but it is "donate dollars", not "donate tokens", and it makes the maintainer the operator and the bottleneck. Good as a second channel. |
| **Sponsored compute and credit programs** | Apply to provider research-credit programs (Anthropic and OpenAI have both run programs granting API credits to research and science projects) or to a lab or university that sponsors runs. | Yes, by application | Terms, amounts and whether a program is currently open change often; check each one's current page before applying. A results record like this repo's is exactly what those applications ask for. |
| **Cross-model diversity as a contribution** | Contributors on different models (Claude, GPT, Gemini, open-weight) run adversary units. | Yes | LEDGER.md already asks for Gate 4 on a different model where possible. A crowd turns that from a wish into the default. |
| Pooled donated API keys | — | **No** | See above. |
| Transferring subscription allowance | — | **No** | See above. |

**Cost reality, which shapes the whole design.** One full ledger batch in this repo has cost roughly $2,000 API-equivalent (five candidates, two or more adversaries each, then a verification pass that reads every load-bearing source); one research run about $35. Nobody donates $2,000 casually. So the unit of donation has to be much smaller than a batch: one Gate 0 to 3 research pass on one candidate, one adversary, or one verification of one source. Those are the pieces the runner (`ledger/tools/unasked-ledger-batch-sequential-v18.js`) already launches as separate agents, so splitting them into claimable units follows the pipeline's existing seams rather than inventing new ones.

## 2. GitHub first, or a website?

**Recommendation: GitHub first, with a static site generated from the repo, and a real website only once contributors exist.**

| | GitHub-first | Website-first |
|---|---|---|
| Time to launch | Days | Weeks to months |
| Who holds keys and pays | Each contributor, in their own fork | The site, so it holds keys, pays, and becomes a target |
| Audit trail | Every entry, gate record and verdict is a reviewed commit | Has to be built |
| Audience | Developers and researchers who already have Claude Code or API keys, which is exactly who has spare capacity | Broader, including people with no AI account (who have nothing to donate but money) |
| Running cost | Near zero (GitHub Pages, Actions minutes on forks) | Hosting, auth, payments, moderation |
| Risk | Low; reversible | Operating a service that spends money on behalf of strangers |

The ledger's value is that its records are inspectable, and git is already the best tool there is for an append-only, reviewed, attributed record. A website adds reach, not rigor. Build it when there is a contributor base asking for it, and when it can be a front end over the same repo (browse, search, "claim a work unit" that opens an issue) rather than a second system.

**One decision that is Jace's, not mine:** the GitHub-first route requires making the repository public, or creating a new public repository for the ledger only. Publishing is hard to undo (forks and caches persist), and the current repo also holds the research workstream's unpublished results, which should be written up or deliberately released before anyone else can see them. I would start a new public repo for the ledger and its tooling, seeded from `LEDGER.md`, `ledger/` and the runner, and leave this one as the private lab.

## 3. Contributor workflow

Built on the gates that already exist in `LEDGER.md`, not new ones.

1. **Work queue as issues.** Each open unit is a GitHub issue with a label: `unit:generate` (propose five candidates in the current rotation area), `unit:gate0-3` (research one candidate), `unit:adversary` (attack one candidate's Gate 0 to 3 record), `unit:verify` (open one cited source and check what the record says it says). The area comes from `ledger/rotation.md`, as now.
2. **Claim, run, PR.** A contributor claims an issue, runs the unit with the shipped prompt (the relevant slice of `LEDGER.md` and the runner's prompts), and opens a PR adding one record file under `ledger/batches/`. They never edit `unasked-ledger.md` directly; it stays append-only and maintainer-written.
3. **Machine checks in CI, before a human reads anything.** The cheapest defence against the failures this ledger has already had:
   - every cited source resolves (DOI through Crossref or OpenAlex; arXiv id exists) and its title and first author match what the record claims. Guessed and mismatched identifiers are the commonest defect the verification passes found here;
   - the Gate 2 record has at least 8 distinct logged queries;
   - the record carries the Depth field with both tests filled in;
   - the PR declares the model used and confirms the unit was run in a fresh context.
4. **Independence by construction.** A candidate's adversaries must come from contributors other than the one who ran its Gate 0 to 3 pass, and ideally on a different model. This is the one place a crowd is strictly better than the current single-operator setup: today "fresh context" means a new subagent of the same session; with contributors it means a different person, a different account and often a different model.
5. **Judge stays with maintainers.** Gate 5 (the verdict) is applied by a maintainer, or by a maintainer-run judge agent whose output a maintainer signs off, and only then is the entry appended and `ledger/INDEX.md` regenerated with `make-index.py`.
6. **Credit.** Every entry names who ran each gate. A contributor whose question reaches Validated, or whose adversary killed a question everyone liked, gets visible credit. Kills are contributions too, and the culture should say so.

## 4. Governance and quality risks

| Risk | Why it is real here | Mitigation |
|---|---|---|
| **Fabricated or misattributed citations** | The verification passes in this repo found 119 defects in five entries' write-ups in one day, and guessed DOIs recurred even after a rule against them. | Automated identifier and title checks in CI; a `unit:verify` pass on every load-bearing source before an entry is appended. |
| **Rubber-stamp adversaries** | The first batch's gentle adversaries let through candidates a stricter rerun killed. | Adversary prompt held fixed and versioned; adversaries graded on whether their kills survive verification (both ways). |
| **Volume over depth** | Jace's 2026-10-28 rule exists because methodology and bookkeeping questions are "numerous and easy to find". A crowd will find more of them faster. | The Depth gate runs first and costs no search; CI rejects a record with no Depth field; the rotation fixes the area so nobody floods one field. |
| **Gaming for credit** | Self-adversarial collusion between friends. | Adversaries assigned by the maintainer or by a bot from a pool, not chosen by the author. |
| **"Novel" questions that are only unsearched** | Gate 2 can only search what is reachable. Paywalled and offline sources (the Landman and Robertson book is the live example) leave a hole. | Keep the Unverified status honest; let contributors with library access take `unit:verify` issues for exactly those sources. This is a real use for a crowd that compute cannot replace. |
| **Validated is currently unreachable** | 0 of 240 entries are Validated, because Gate 5's "with the complete search record" clause can never be met; the decision on it has been open since 2026-10-18. | Settle that decision before launch. A public ledger whose top tier is empty by construction will read as broken. |
| **Unsafe or dual-use questions** | An open intake in biology and medicine will eventually get one. | A content rule in the contributing guide and a maintainer veto at intake; nothing in the pipeline currently checks this. |
| **Cost surprises for contributors** | A careless batch run is expensive. | Ship units, not batches; document expected cost per unit; tell contributors to set a spend limit on their key before running. |
| **Licensing** | Contributors need to know what happens to their questions. | CC BY 4.0 for ledger content, MIT or Apache-2.0 for tooling, stated in the repo before the first outside PR. |

## 5. One-page Moonshots pitch outline

*For Peter Diamandis and his Moonshots co-hosts. Their recurring themes are abundance, exponential technology and incentive prizes, so the pitch frames this as abundance of compute aimed at a scarcity of good questions.*

**Title.** *The Un-Asked Questions Ledger: pointing the world's idle AI at questions nobody has asked.*

**1. The hook (one line).** AI is getting very good at answering questions. Almost nobody is using it to find the questions worth answering, and the ones nobody has thought to ask are where the breakthroughs hide.

**2. What exists today (proof it works, said straight).**
- An autonomous pipeline that proposes candidate questions and then tries hard to kill each one: documented search across vocabularies, a significance argument, and a fresh-context AI adversary. **240 candidates tried in three weeks; every rejection kept on the record.** About half rejected, and none waved through: the top tier stays empty until the rules are met.
- A sibling agent that picks open problems and works them, with three independent AI skeptics required to sign off. Its headline: **a correction to a published 2007 table of van der Waerden-type numbers (Brown, Landman and Robertson): G(3,9) is 49, not the printed 48**, confirmed by three independent exhaustive searches, with the 48-element witness set published so anyone can check it in seconds.
- Related leads on the same table, all labelled as leads, not results: four other entries printed too small (M(3,4) = 19, M(3,5) = 31, M(3,6) = 38, G(3,6) = 23); M(3,7) = 51 against a printed 48; w\*(3;5) = 76 against a printed "at least 75"; new lower bounds G(3,10) ≥ 57 and M(3,8) ≥ 58.
- Example questions that survived the adversary since the depth rule came in: whether a heap object's chance of dying depends only on its age (computer science, UQ-20261029-08); whether mutation counts on individual mitochondrial DNA molecules in one cell follow a Poisson law (biology, UQ-20261030-04); whether the several people infected by one donor in a respiratory outbreak receive correlated numbers of virus particles (medicine, UQ-20261030-07). *(Final picks should come after the ambition audit.)*

**3. The ask of the audience: donate your idle AI.** Not your API key, your *run*. Fork the repo, run one work unit on your own account, send back the record. Like Folding@home for curiosity. Every question names who asked it, who attacked it and who verified it.

**4. Why now.** Agents can now run an eight-query literature search and a hostile review for the price of a coffee per unit. The bottleneck has moved from answers to questions, and the people with the spare capacity are exactly the audience listening.

**5. The moonshot.** A public, reviewed, append-only map of the frontier of human ignorance, in mathematics, physics, computer science, biology and medicine, refreshed continuously and fed into agents and labs that try to answer the questions it holds. An incentive prize for the first answered ledger question would close the loop, which is a natural fit for an XPRIZE-style audience.

**6. What we need.** Contributors with spare capacity; people with library access to check the sources AI can't reach; sponsored compute; and mathematicians, physicists and biologists willing to be the human judges at the top tier.

**7. The honest line (say it; it is the credibility).** Zero questions have reached the top "Validated" tier yet, by design: the bar is that high. The G(3,9) correction is independently confirmed by machines but has not yet been checked against the authors' 2014 book or confirmed by the authors.

## 6. Before pitching: what would make it much stronger

In order of value for effort:

1. **Get the G(3,9) result checked by a human expert.** Obtain Landman and Robertson's *Ramsey Theory on the Integers* (2nd ed., 2014) to rule out an existing correction, then email the authors with the witness and the search, and submit to OEIS if a matching sequence exists. One reply from an author that says "you're right" is worth more on a podcast than everything else here.
2. **Settle the Gate 5 decision** (open since 2026-10-18) so that Validated is reachable and the ledger can show at least one entry at its top tier.
3. **Let the ambition audit finish** and pick the pitch's example questions from what it endorses.
4. **Stand up the public repo** with the contributing guide, three work-unit templates, the CI checks in section 3, and five open `unit:adversary` issues ready on day one, so a listener who arrives the day of the episode has something to do in ten minutes.
5. **A one-minute demo**: an adversary agent killing a plausible-sounding question live, with the reason. Watching the machine say no is the most persuasive thing this project does.

## Sources in this repository

- `LEDGER.md` (gates, Depth requirement, field-mix rule), `ledger/rotation.md`, `ledger/INDEX.md` (counts: 240 entries, 117 Provisional, 123 Rejected, 0 Validated as of the 2026-10-30 13:04 UTC batch).
- `research/summaries/2026-10-21.md` through `2026-10-30.md` for the Ramsey-table results; witness and claim packet in `research/problems/vdw-related-functions/claims/2026-10-21-2/claim.md`.
