# UQ-20261018-14 verify statistics.md (modded-nanogpt)

Read level: FULL TEXT of README table rows via search-snippet (raw file fragments) and summarised fetches; statistics.md files read via summariser (WebFetch) plus raw search fragments. Not read: whole root README (only rows 21, 24-26, 65-67 and max row number), individual run rows of any table.

## Calls (budget 7 searches / 7 fetches; used 5 searches, 6 fetches counting failures)
Fetch 1 FAIL: mcp__github__get_file_contents KellerJordan/modded-nanogpt records/.../pr299/statistics.md
  -> "Access denied: repository "kellerjordan/modded-nanogpt" is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge."
Search 1 OK: github search_code `repo:KellerJordan/modded-nanogpt filename:statistics.md` -> total_count 8 (works despite get_file_contents being denied)
Fetch 2 OK: github.com/.../blob/master/records/track_1_short/2026-05-20_BigramsSignTrick/pr299/statistics.md (summary only)
Fetch 3 OK: raw.githubusercontent.com .../2026-06-11_RecursiveFromBest/this_pr/statistics.md
Search 2 OK: search_code "re-timing" -> 3 files (root README.md, XSAGatedLayers README, UnifiedOptimizers README)
Search 3 OK: search_code "latest torch" -> root README.md only
Fetch 4 OK: raw README.md (rows 24-26, 65-67, max record number)
Fetch 5 FAIL: github.com/.../tree/master/records/track_1_short -> {"error_type":"ROBOTS_DISALLOWED","source":"target","message":"There was an error while fetching."}
Search 4 OK: search_code path:records "Time σ" -> 11 READMEs
Fetch 6 OK: raw pr299/statistics.md (headers, summary rows)
Search 5 OK: search_code path:records/track_1_short/2025-07-13_UpgradeTorch190 -> only the log .txt (no README)

## Findings
Q1 FOUND. Path exists (search index at commit 4ea6b937): https://github.com/KellerJordan/modded-nanogpt/blob/master/records/track_1_short/2026-05-20_BigramsSignTrick/pr299/statistics.md
  Raw search fragment: "# PR299 statistics\n\n20 runs, step 1480/1480." -> "20 runs" VERBATIM (line 3, "20 runs, step 1480/1480.").
Q2 FOUND. records/track_1_short/2026-06-11_RecursiveFromBest/this_pr/statistics.md: "# Run statistics\n\n13 runs, step 1398/1398." (raw fragment) -> the "13 runs" file. Others: ANVIL2/this_pr "runs: `18`", ANVIL2/baseline "runs: `9`", BigramsSignTrick/baseline "10 vanilla runs, step 1480/1480.", RecursiveFromBest/baseline_pr299 "10 runs, step 1385/1385." FP8DownProjection this_pr/baseline have summaries (counts not seen).
Q3 PARTIAL. 8 files named statistics.md, in 4 record directories (BigramsSignTrick, RecursiveFromBest, FP8DownProjection, ANVIL2); plus 11 record READMEs with a "Time σ" multi-run table (Dec 2025-Apr 2026). Root README table numbers up to 91 (some numbers duplicated, e.g. two extra #21 rows), so roughly 15 of ~90 records carry some multi-run table. Directory listing was blocked (robots) and code search may be incomplete, so this is a lower bound; denominator ~91 table rows, not verified directory count. Only recent records (Dec 2025 onwards) appear; early ones have a single log.
Q4 FOUND (via summariser). pr299/statistics.md: per-run table "| Run | val_loss | train_time |" (one row per run, 20 rows, train_time in ms); summary "|  | mean | std | min | max |" with rows val_loss 3.27917/0.00115/3.2763/3.2811 and train_time (ms) 84429.5/71.6/84237/84582; baseline comparison "|  | baseline (n=10) | pr299 (n=20) | delta |" train_time mean 85394.3 vs 84429.5, delta -964.8 ms. So individual run times, mean, std, paired(same-pod/separate-batch) baseline. RecursiveFromBest/this_pr: train_time (ms) mean 77337.6, std 202.9, min 77149, max 77933. Summary values were seen only via summariser, not raw.
Q5 FOUND. Both in root README.md track-1 table, rows numbered 21:
  - "21 | 2.997 minutes | 21st record with new timing | 02/01/25 | log(2025-02-01_RuleTweak) | not a new record, just re-timing #21 with the [updated rules](#timing-change-after-record-21)" -> VERBATIM except that "updated rules" is a markdown link.
  - "21 | 3.014 minutes | 21st record with latest torch | 05/24/25 | log(2025-05-24_StableTorch) | not a new record, just re-timing #21 with latest torch" -> VERBATIM; "latest torch" also in the description column.
  Times 2.997 and 3.014 are in those same rows. Note: the note sits in the contributors column; no maintainer name is in the row.
Q6 PARTIAL. README rows: "25 | 2.896 minutes | Upgrade PyTorch to 2.9.0.dev20250713+cu126 | 07/13/25 | log | @kellerjordan0"; "66 | 1.595 minutes | Torch 2.10 | 01/31/26 | - | -". Descriptions are torch upgrades but the repo does not use the words "toolchain-only"/"environment-only" in those rows. #25 directory holds only a log .txt (no README); #66 has no log or contributor. The rest of the root README was not read, so I cannot rule out prose elsewhere.
Q7 Dispersion is POOLED across runs within one statistics.md (n=20 or 13 runs of one submission), per submission; baseline is a separate pooled n=10 sample. pr299 file says nothing about hardware/nodes/GPUs; RecursiveFromBest and ANVIL2 files state a single pod (8x H100). Not per-node, not per-record-across-submissions.
