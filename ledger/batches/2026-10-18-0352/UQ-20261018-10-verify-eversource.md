# UQ-20261018-10 verify Eversource 2021 meter testing report

Read level: PDF (read through a summariser; the OCR is garbled, so some values were reconstructed by the summariser).

## Routes
1. WebSearch "Eversource 2021 Meter Testing Program report New Hampshire PUC DE 18-162": OK, returned the PDF URL.
2. WebFetch puc.nh.gov/Regulatory/Docketbk/2018/18-162.html (docket index): error, not read.
3. WebFetch the PDF (summary prompt): OK.
4. Bash curl of the PDF: proxy 403 (CONNECT tunnel failed). No raw text obtained.
5. WebFetch the PDF (table-reproduction and term-search prompt): OK.
Total: 1 search, 3 fetch attempts (1 failed), 1 curl blocked.

## URL
https://puc.nh.gov/regulatory/Docketbk/2018/18-162/LETTERS-MEMOS-TARIFFS/18-162_2022-01-06_EVERSOURCE_METER_TESTING_PROGRAM_2021_ANNUAL_RPT.PDF

## Findings
1. Letter dated 6 Jan 2022, PSNH d/b/a Eversource Energy (signed "Counsel, Eversource Energy", Jessica Chiavara) to Chair Daniel Goldner, NH PUC, Docket DE 18-162 (DE, not IR). It encloses "Sample Testing Program Summary - 2021" (dated 11/1/2021, parameter sheet "Updated 9/7/2021"). Waiver of Puc 305.03 granted 5 Dec 2018, using ANSI/ASQ Z1.9-2003.
2. FOUND. Six lots. Per lot the table gives mean, s, Qu, Ql, Pu, Pl, P, M and Pass/Fail. Pu, Pl and P are 0 for all lots, so the estimated nonconforming is zero and gives no spread between lots. Per-lot rows (n required/tested; mean; s; M):
   - Lot 1 Centron: 476038; 200/201; 100.001; 0.0951; 2.04
   - Lot 2 Centron Bridge 1P: 54697; 150/151; 100.054; 0.0604; 2.05
   - Lot 3 Centron Bridge 3P: 15280; 100/104; 100.035; 0.0653; 2.18
   - Lot 4 GE I-210 (label unclear): 21423; 100/105; 99.914; 0.0752; 2.18
   - Lot 5 Other solid state: 817; 35/40; 99.987; 0.0490; 2.66
   - Lot 6 Electro-mechanical: 117; 10/12; 99.944; 0.2720; 3.27
   Limits are 98 to 101 (Lot 6: 98 to 102). A separate summary table gives min, max, average, s and 3-sigma of "Weighted Average Accuracy".
3. Row check. Lot size 476,038 matches. Mean 100.001 matches (the summary table rounds it to 100.00). s = 0.0951 matches. n: Z1.9 sample size is 200 and 201 were actually tested. So 201 is the tested count, not the plan n. Sum of measurements is 20100.13 (20100.13/201 = 100.0006, consistent).
4. PARTLY. Lots are by meter type or description (Centron, Centron Bridge 1P/3P, GE I-210, other solid state, electro-mechanical). Lot sizes are "based on the installed meter count for each Lot as of 1/4/2021, when the samples lots were selected". The words "model", "build year" and "asset" do not appear. So "by model, kind and build year" is not confirmed; the lot is a meter-type description. The installed-count part is confirmed.
5. NOT FOUND. No test points are stated. The terms light load, full load, power factor, harmonic, sinusoidal, test point and waveform do not appear. The metric is "Weighted Average Accuracy" (percent registration), with no definition of the weighting or test points. The document does not settle whether the points are sinusoidal.
6. NOT FOUND in the document read (all of it as presented: letter plus one-page summary). "Crest" and "waveform" do not appear.

## Caveats
- The summariser's term-search is a model judgement, not a text search. The OCR is garbled, so the reconstructed fields (Qu, Ql, SS and others) are less certain than the headline values.
- Lot 4's description was reported two different ways between fetches.
- Pu, Pl and P = 0 are as reconstructed by the summariser.
