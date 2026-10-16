# Post-batch verification log — fresh-context checker, 2026-10-16 10:33 UTC batch

Each checker was handed one load-bearing claim from the adversary's report plus its cited source, and
NOT the adversary's reasoning or the judge's verdict. `q=` is its search count. This log is the
checker's own text as returned; the final EFFECT paragraph of some sections was cut by the runner's
output cap, marked [...] where that happened.

---

training-restart-accounting | UQ-30-restart | PARTLY_CONFIRMED | q= 13 refused= 3
--- POSED IN PRINT?
POSED, yes — but posed as a per-stack correctness bug, not as the end-to-end accounting question for a real run.

As a stated invariant/question: Megatron-LM #7645 states the expected behavior as "every sample of the current epoch is drawn exactly once" — i.e. the duplicate/drop count should be zero — and asks reviewers to pick among three fix directions. #7646 poses the same for the unsharded path. epochraft poses the goal in print: "it's vital to process only the data that hasn't been utilized up to that interruption point."

As a NAMED PARAMETER: NVIDIA's Megatron Core determinism blog names "data position" as one of the five things to verify after each checkpoint restore ("parameters, optimizer state, RNG state, data position, and subsequent outputs"). torchtitan names the obstacle in an assertion string: "dataloader resharding is not supported yet." HuggingFace datasets names the missing state in a runtime warning: "Loading a state dict of a shuffle buffer of a dataset without the buffer content."

As STATED FUTURE WORK: torchtitan's "not supported yet" is the closest thing — it flags resharding as unimplemented rather than as a measurement question. SeverinVisionary's comment on #7645 names a still-open gap: switching from sharded to unsharded on resume is "still accepted silently" (55 duplicated / 55 never drawn in their test).

NOT FOUND in print: any posing of the question "for a real large-model run that restarted N times, how many tokens were in fact duplicated or skipped relative to its reported token count?" No paper, tech report, or blog I opened asks this, an
--- EFFECT:
The kill survives on two of its three legs and fails on the one that does the actual work.

Survives: (a) the question is NOT silent — it is posed routinely in public issue trackers across every major stack, and engineers did respond by building step-indexed and stateful loaders (StatefulDataLoader, Mosaic elastic determinism, epochraft); (b) the two cited issues are real, do contain exact duplicate and drop counts for a changed-DP resume, and did obtain them on a CPU with no training run and no logs.

Fails: the kill's load-bearing claim is that the quantity is "derivable by reading the dataloader's sampler code rather than requiring measurement." Its own cited sources contradict this. #7646 states plainly that the mechanism was read from the sampler's formulas but "the numbers themselves are not derived analytically" — they came from running a script and tallying every drawn ID with `Counter` against an uninterrupted enumeration. That is measurement. It is cheap measurement of a sampler in isolation on a 256-sample toy dataset, which is a real and useful point, but it is not derivation, and the distinction is exactly the one the kill needs.

The generalization also fails. The analytic-enumeration case holds only for step-indexed deterministic samplers (Megatron legacy cyclic; Mosaic by design). It provably does not hold for HuggingFace datasets' buffered shuffle, where the buffer contents are absent from the checkpoint by documented design; for accelerate's `RandomSampler`, where the permutation is drawn before the RNG is saved; or for DeepSpeed's curriculum sampler, which checkpoints the global numpy RNG instead of its own generator and whose drift is data- and cluster-dependent. And for torchtitan the question cannot even be asked without patching the framework, because `load_state_dict` asserts the DP world size is unchanged and the state is an opaque per-rank pickle.

So the question is not trivial-in-general and not answerable in a page from code. Nor is it genuinely open in the sense of "nobody knows how to find out" — the method is clear and cheap for at least one stack-class. The accurate classification is TRACTABLE-BUT-UNMEASURED, with a three-way spl
Shell cwd was reset to /home/claude/frontier_knowledge
[...] cut by the runner's output cap.
