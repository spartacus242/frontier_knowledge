# Attia 2020 / Severson 2019 design check - working notes
Searches run: 3 (cap 8). Fetches run: 6 (cap 6, reached; no further fetches made).

## Routes
1. nature.com/articles/s41586-020-1994-5 : fetch error (CLIENT_ERROR). No text.
2. github.com/chueh-ermon/battery-fast-charging-optimization (landing page): readable, README only. No cell/channel/equipment counts. Points to a legacy experimental-scripts repo and an Arbin test-file automation repo (not opened).
3. escholarship.org/uc/item/117547r6 : empty page content.
4. Nature ESM supplementary PDF (media.springernature.com ... MOESM1_ESM.pdf): READ (via summariser, so third-party-summariser reading of the full SI text). Source of nearly all positive findings below.
5. nature.com/articles/s41560-019-0356-8 (Severson): fetch error. No text.
6. data.matr.io/1/ : JS-only shell ("You need to enable JavaScript to run this app."). No content.
Searches: 3 returned link lists only (no text): Attia query, Severson query, Attia Arbin/channel query. Candidate unread routes: arxiv.org/pdf/2101.01885 etc. (secondary), web-mit-edu Severson PDF mirror, tri.global, notion/substack summaries, GitHub data/ folder, Arbin automation repo.

## Strings checked (all from Attia SI, via summariser)
- "48-channel cycler" (SI Table 5): found.
- "~200 cells for optimization (4×48)" (SI Table 5): found. Batch size 48, budget 4.
- SI Table 2: batch sizes 43-48; "oed_0 (this work)" 46 cells.
- "given our single temperature chamber for all channels" (SI Disc. 2): found.
- "We disallowed repeated runs of the same charging protocol within a given round" (SI Disc. 2): found.
- "the practical cell switching frequency is around once or twice per day": found (not an assignment rule).
- "Arbin": NOT FOUND in SI (SI only; main-text Methods not read).
- "barcode": NOT FOUND in SI.
- channel/position/thermal-position variation: NOT discussed in SI (SI only). SI Disc. 4 attributes bias to calendar aging.
- "4 cells per channel": NOT FOUND; SI implies 48 channels and batch of 48, i.e. ~1 cell per channel per round (inference, not stated).
- Assignment of protocols/cells to channels: NOT DESCRIBED in SI.

## Not read
Main-text Methods of Attia (the likely home of equipment/channel assignment text); entire Severson paper; data.matr.io; GitHub data folder fields. These are COULD NOT READ, not negatives.

## Conclusion
Q1 partly answered (48-channel cycler, ~200 cells = 4 rounds x 48, 30 C single chamber); Arbin unconfirmed. Q2 undetermined from sources read. Q3: "disallowed repeats within a round" appears as printed (SI); "about 4 cells per channel" not found / appears differently (4 is the number of rounds, 4x48). Q4 undetermined (no channel field mentioned in SI; data files unread). Q5: absent from SI; main text and Severson unread.
