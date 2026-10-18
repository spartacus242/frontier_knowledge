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
| 2026-10-16 18:33 | AI architecture | UQ-20261016-46 .. -50 |
| 2026-10-16 19:16 | AI architecture (duplicate launch of the 18:33 batch, kept) | UQ-20261016-51 .. -55 |
| 2026-10-16 21:55 | biology | UQ-20261016-56 .. -60 |
| 2026-10-16 23:37 | medicine | UQ-20261016-61 .. -65 |
| 2026-10-17 00:59 | other STEM | UQ-20261017-01 .. -05 |
| 2026-10-17 03:10 | AI architecture | UQ-20261017-06 .. -10 |
| 2026-10-17 05:22 | biology | UQ-20261017-11 .. -15 |
| 2026-10-17 07:42 | medicine | UQ-20261017-16 .. -20 |
| 2026-10-17 09:20 | other STEM | UQ-20261017-21 .. -25 |
| 2026-10-17 11:28 | AI architecture | UQ-20261017-26 .. -30 |
| 2026-10-17 14:21 | biology | UQ-20261017-31 .. -35 |
| 2026-10-17 16:19 | medicine | UQ-20261017-36 .. -40 |
| 2026-10-17 18:23 | other STEM | UQ-20261017-41 .. -45 |
| 2026-10-17 20:46 | AI architecture | UQ-20261017-46 .. -50 |
| 2026-10-17 22:57 | biology | UQ-20261017-51 .. -55 |
| 2026-10-18 01:30 | medicine | UQ-20261018-01 .. -05 |
| 2026-10-18 03:52 | other STEM | UQ-20261018-06 .. -10 |

**The cycle starts one step in, at AI architecture.** The 16:33 batch was generated before the rotation took effect and happened to return three other-STEM entries (UQ-41 numerical computing, UQ-43 electrocatalysis, UQ-45 computer-assisted mathematics) and two medicine. Counted over all 70 entries that leaves medicine 37, other STEM 14, biology 10, AI 9 — so AI architecture, not other STEM, is now the area furthest behind, and starting there serves the balancing this rotation was asked for. Other STEM comes round in its normal place on the next pass. Recorded here rather than by reordering the cycle, so the cycle itself stays fixed.

The 19:16 line is a batch that should not exist: the 18:33 batch was launched twice because its working directory was still empty while it was generating, and that was read as a failed launch. Both batches ran, on the same area, and are kept because their ten candidates are ten different questions. The duplication is what starved the shared web-search budget that day — see the two reports — and `LEDGER.md` now requires one batch at a time. Two lines in the log for one turn of the cycle do not advance it twice: the biology batch at 21:55 took the area after AI architecture, and medicine followed it at 23:37, completing the first full pass. The first full pass closed with medicine at 23:37. The second pass ran other STEM at 00:59, AI architecture at 03:10, biology at 05:22 and medicine at 07:42, which closes it. The third pass opened with other STEM at 09:20, took AI architecture at 11:28 and biology at 14:21, and closed with medicine at 16:19. The fourth pass opened with other STEM at 18:23, took AI architecture at 20:46 and biology at 22:57, and closed with medicine at 01:30 on 2026-10-18. The fifth pass opened with other STEM at 03:52, so the next batch takes **AI architecture**. Area counts over all 155 entries: medicine 57, other STEM 34, AI 34, biology 30 — medicine's share falls to 37% and other STEM draws level with AI, so the three non-medicine areas now sit within four entries of each other and medicine leads the next of them by 23. That lead is entirely the pre-rotation batches; since the rotation began, every area has had the same number of turns. These counts are carried forward batch by batch from each batch's own declared area, which is exact for every batch since the rotation began and label-based only for the pre-rotation entries; classifying all 145 from their domain labels instead gives a different split (medicine 46, AI 34, biology 33, other STEM 32), because labels like "Medicine / STEM", "Biology / biomedical" and "Structural biology" fall differently by label than by the batch that produced them. The declared-area count is the one to use, and the log below is the state for which area comes next.
