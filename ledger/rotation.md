# Area rotation

Jace, 2026-10-16: the ledger was finding most of its questions in medicine or biology, and asked that the area of focus alternate each run. Measured at 65 entries, the skew was real — medicine 35 (54%), other STEM 11, biology 10, AI 9, so medicine and biology together held 69%.

So each batch now draws **all five** of its candidates from **one** area, and the areas rotate in this fixed cycle:

1. **other STEM** — physical sciences, mathematics, engineering, earth and space science. Excludes biology and medicine even where they use physical methods.
2. **AI architecture** — model and system design, training, evaluation, and the data layer. Excludes applications of AI to another field, which belong to that field's batch.
3. **biology** — excludes clinical and patient-facing questions.
4. **medicine** — clinical, public-health and health-systems questions.

Cross-field transplants are unaffected and still wanted: the method may come from anywhere, as long as the TARGET field — the one whose literature decides novelty and whose community would act on the answer — is the batch's area.

## How a run picks its area

Read the last line of the log below, take the next area in the cycle, pass it to the batch runner as its `area` argument, and append this batch's line when the batch is committed. A batch that fails before it commits appends nothing, so the next run takes the same area — which is correct, since that area did not get a batch.

The log is the state. Do not infer the area from entry domains or from the batch count.

| Batch (UTC) | Area | Entries |
|---|---|---|
| 2026-10-15 16:05 .. 2026-10-16 16:33 | all four areas at once (pre-rotation) | UQ-20261015-01 .. UQ-20261016-45 |
