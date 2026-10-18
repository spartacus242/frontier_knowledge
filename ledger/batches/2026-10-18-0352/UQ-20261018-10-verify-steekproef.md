# UQ-20261018-10 verify Steekproefcontrole Energiemeters (NN) - working notes

READ LEVEL: FULL TEXT as rendered by the summariser (2-page PDF; web-page text) for the Steekproefcontrole PDF and the "Reactie netbeheerders" PDF. Populatiebesluit kWh 2024: first ~34 pp only. All reads are summariser output, not raw PDF.

## Calls (4 searches, 7 fetches)
S1 "Netbeheer Nederland Steekproefcontrole Energiemeters 2024" -> found PDF URL (path 2024-05) + kwaliteitsborging + populatiebesluit PDFs.
S2 smart meter complaints 2023 response -> found westlandinfra.nl PDF (path 2023/11) and Radar 2017 page.
S3 "Steekproefcontrole" stratification query -> only same PDF + populatiebesluit gas/kWh list.
S4 exact title of response -> same westlandinfra PDF; Twente 2017 news.
F1 netbeheernederland.nl/sites/default/files/2024-05/Steekproefcontrole%20Energiemeters%20%20Netbeheer%20Nederland.pdf -> OK
F2 westlandinfra.nl/.../Reactie-netbeheerders-op-onderzoek-...pdf -> OK
F3 netbeheernederland.nl/.../2024-02/kwaliteitsborging_energiemeters.pdf -> OK (web excerpt, no title/date/issuer)
F4 radar.avrotros.nl/artikelen/23245 -> OK (dated 9 Oct 2017)
F5 populatiebesluit_kwh_kv_2024_-_20250325_0.pdf -> OK (~pp1-34)
F6 westlandinfra PDF again, string checks -> OK
F7 Steekproefcontrole PDF again, string checks -> OK

## KEY CORRECTIONS
- The file at the "2024-05" URL is NOT a 2024 document by its own footer: "Kernteam Meetketen KV - 6 juli 2021, 2 van 2". "2024" does not appear in its text. 2024-05 is only the upload folder. It is a 2-page consumer-style explainer.
- The "2023 response" at westlandinfra.nl/2023/11 is a 2023 upload of an older text: refers to late 2015, 2016, installation "tot en met 2020". No date in the document. Radar page (9 Oct 2017) carries a Netbeheer Nederland response to the same topic; the Twente study news is March 2017. So the document is probably 2017-era; the 2023 date is an upload date only. Dating is inference, not stated.
- The Steekproefcontrole PDF has no stratification detail beyond soort/type/bouwjaar.

## Findings
Q2 stratification: "Alle gas- en elektriciteitsmeters zijn verdeeld in groepen op basis van soort, type en bouwjaar." (appears). So kind, type, build year. "model" does not appear (type, not model - correction to the premise). firmware/software: NOT in this PDF (checked strings "firmware","software" absent). Kwaliteitsborging page: no "firmware"; mentions "Er draait software op de meter" and tests for "grote software-updates" - no stratum. Populatiebesluit kWh 2024 (Kiwa GT-250023, 25 Mar 2025): populations by manufacturer, metercode, build/revision year, meter type (mech/electronic), phase; "gebaseerd op het bouwjaar van de meters"; firmware not mentioned in pp1-34. Firmware is NOT a stratum in anything read.
Q3: Steekproefcontrole PDF: only conformity verdicts; RDI publishes yearly list of rejected electricity meters ("publiceert jaarlijks de lijst met alle afgekeurde elektriciteitsmeters"); no error percentages. By contrast the separate Kiwa Populatiebesluit 2024 publishes per-POPULATION stats (population size, outliers, p/pmax, verdict, mean deviation and SD per control point, sample sizes, failure counts). Level of aggregation: per population (manufacturer/metercode/year group), not per meter or per firmware.
Q4: Steekproefcontrole PDF: no waveform detail (no sinus/harmonisch/vervorming); only an "ijkkoffer", ~30 min. Kwaliteitsborging: "verschillende stromen", no waveform. Populatiebesluit: electronic meters at 5 points: 0.5 A cos phi 1; Iref at cos phi 1 and 0.5 ind; 30 A at cos phi 1 and 0.5 ind; mech 10%/100% Ib (1-ph), 20%/100% Ib (3-ph); limits Tabel 4 (class 2 +-4%). Waveform not stated in the excerpt read; nothing about distortion or harmonics. Cannot say "sinusoidal" - merely not stated, i.e. NOT FOUND for waveform, whole populatiebesluit not read (Bijlage IV cut off).
Q5: Response doc verbatim: "Enkele tientallen cases (uit de meer dan 8 miljoen huishoudens) zijn ons toen voorgelegd." (appears; also string "Enkele tientallen cases" and "meer dan 8 miljoen huishoudens" each checked and appear). No exact count of cases. Also "bij 3 miljoen huishoudens" (installed meters). Unit nuance: 8 million = total households/base in that sentence; the 3 million refers to installed smart meters at that time. "tens of cases / >8 million households" is CONFIRMED as "several tens" (enkele tientallen), but not 2023-dated.
Q6: Mixed. Not a designed sample. Rests on individual review of the submitted cases ("In ieder van die gevallen zijn plausibele verklaringen gevonden: en de meter was correct."), a repeat by Van Swinden Laboratorium of the Twente lab findings ("een onafhankelijk onderzoek overgedaan - en dit bevestigde de resultaten"), and home testing ("In deze gevallen testen we de meter bij mensen thuis en indien nodig over een langere tijdsperiode."). No sample size/selection/results given. Separately the Radar 2017 page (NN response) says "In 79 gevallen is bij mensen thuis een controlemeter opgehangen" and no meters found affected by appliances; the figure 79 is NOT in the westlandinfra PDF ("controlemeter" absent there).
