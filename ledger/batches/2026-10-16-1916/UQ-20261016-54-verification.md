# UQ-20261016-54 verification notes (2026-10-16)

## Searches (5 of 6 used; none refused)
1. "ModelPulse tracker derivatives of open-weight models Hugging Face quantizations fine-tunes merges download share" -> nothing relevant (ParaPulse Model Family, generic pages).
2. "Hugging Face hub documentation model downloads how counted GGUF per-file query files" -> found hub docs page models-download-stats.
3. "\"ModelPulse\" Hugging Face derivatives census" -> nothing on ModelPulse.
4. "ModelPulse ... \"43%\" hub downloads Qwen3-8B" -> nothing; unrelated Qwen download articles.
5. (extended) "\"ModelPulse\" modelpulse open models ... quantizations fine-tunes merges adapters" -> found github.com/tardellirs/modelpulse, HF Space, several unrelated "modelpulse" repos.

## URLs opened (5 of 5 fetches used)
- https://www.huggingface.co/docs/hub/models-download-stats (3 fetches): opened.
- https://github.com/tardellirs/modelpulse : opened.
- https://huggingface.co/spaces/modelpulse/model-pulse : opened (page resolved as Space by tardellirs; summary only).
Not opened: modelpulse.ifsp.dev (fetch budget exhausted), the "separate report" linked from the GitHub README, other modelpulse repos (Xiaoheixu, Tarunjit45, rajkumarpawar07, anurag77889: different products - Windows LLM monitor, reliability monitor, API change intelligence, backend service).

## Exact strings checked (hub docs)
- "Every HTTP request to these files, including `GET` and `HEAD`, will be counted as a download." -> YES
- "GGUF files are self-contained and are not tied to a single library, so all of them are counted for downloads." -> YES
- "By default, when no library is specified, the Hub uses `config.json` as the default query file." -> reported by summariser (not re-checked separately)
- "The count is done server-side as the Hub serves files for downloads." -> reported
- Page does not mention API fields downloads/downloadsAllTime; does not state per-file counts are exposed.

## Findings
Q1: A public project named Model Pulse exists: Tardelli Stekel (@tardellirs), "independent project, not affiliated with Hugging Face", Apache-2.0, live site modelpulse.ifsp.dev, GitHub github.com/tardellirs/modelpulse, Space tardellirs/model-pulse. Other "modelpulse" GitHub repos are unrelated. Whether this is the "ModelPulse" the claim means is not established.
Q2: It tracks families (base_model links) and says it shows how much reach comes from "quantizations, fine-tunes, adapters and merges". README contains no 43% / 28% / 37% figures, no census date (series start 2024-07-29 rolling 30-day; all-time totals from 2025-02-27; daily snapshots of cfahlgren1/hub-stats models.parquet). A separate report is linked from README but was not opened, so figures could live there.
Q3: Not behaviour: only downloads, likes, ranks, milestones.
Q4: Hub counts downloads server-side by requests to query files; for GGUF every .gguf file counts as a query file, so a multi-file GGUF repo accrues requests per file but the docs describe counting toward the model, and do not say per-file counts are exposed. Public per-repo counter is what the docs describe; per-file exposure is not documented on that page.
