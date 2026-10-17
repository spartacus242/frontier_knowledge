# UQ-20261016-65 verification notes

## Searches (3 of 6 used; 3 further not used)
1. "proportion of image series never opened viewed by radiologist before report signed PACS audit log" -> titles only; leads: AuntMinnie SIIM ED viewing stats; RadiologyBusiness "40% of images, radiology reports requiring follow-up are never reviewed"; RSNA 2006 abstract.
2. "Forsberg Rosipko Sunshine Factors Affecting Radiologist's PACS Usage command log series displayed" -> titles only; PMC (blocked), springermedicine full-text mirror (not opened), AuntMinnie Europe summary (not opened).
3. "radiologist did not open all series before signing report ... not viewed" -> titles only; nothing new directly on point (eye-tracking CT study pubmed 2085560 not opened; 1990-era).

## Fetches (5 of 5 used)
- https://doi.org/10.1007/s10278-016-9881-1 -> FAILED (fetch error)
- https://doi.org/10.1007/s10278-010-9337-y -> FAILED (fetch error)
- https://link.springer.com/article/10.1007/s10278-016-9881-1 -> opened, abstract page only (paywalled full text)
- https://link.springer.com/article/10.1007/s10278-010-9337-y -> opened, abstract page only (paywalled)
- https://www.auntminnie.com/.../15599431/siim-pacs-audit-data-unlock-ed-image-viewing-stats -> opened (news report of SIIM talk, not the primary paper)
Not opened: PMC, Europe PMC (blocked), springermedicine mirror, radiologybusiness 40% article, RSNA 2006 abstract (fetch budget exhausted).

## Exact strings checked
- Forsberg: no abstract string about series/image display; page said usage = "sequence of computer commands"; granularity not stated. Summariser paraphrased, no verbatim quote returned.
- French & Langer: "Lacking a vended solution for this challenge, we developed our own." Metrics not stated on page.
- AuntMinnie: "Exam was never viewed by the referring physician: 5,236 (21%)" (CT); "...3,844 (5%)" (CR); "...5,999 (54%)" (US).

## Conclusions
1. Forsberg 2016: unit = one command trace (one attending radiologist reading one exam); endpoints = number of commands, command classes, bigram repetitiveness, time to read; GLMs, factors radiologist/exam category/time of week/week; 8 weeks of logs. Series-level display logging and a never-viewed fraction: NOT shown by the abstract page; full text unread. Cannot confirm or exclude.
2. French & Langer 2011 (online 2010): "Tracking PACS Usage with Open Source Tools"; workstation fleet utilisation for purchasing decisions. Metrics not visible; per-series display logging not indicated. Full text unread.
3. Nothing found measuring proportion of diagnostically intended series never opened by the radiologist before signing. Closest: SIIM/AuntMinnie report, unit = ED exam (Staten Island Univ Hosp, CT etc., 6/2010-5/2011), endpoint = time to first ED staff view vs time to first report, and share of exams never viewed by the REFERRING physician (not radiologist, not series). RadiologyBusiness "40% of images ... requiring follow-up never reviewed" not opened; headline appears to concern follow-up recommendations, unverified.
