# Verification notes: Mak & Schorlemmer 2016 BSSA 106(4):1817-1831
Searches: 1. Fetches: 4 (all same URL, GFZ public PDF, read via WebFetch summariser = full text via page summariser, not raw).
Routes: WebSearch -> https://gfzpublic.gfz-potsdam.de/pubman/item/item_1724897_4/component/file_1727888/1724897.pdf (readable, 4 fetches). Publisher/DOI/ResearchGate not tried (not needed; cap).
Strings checked (summariser-mediated, each by prompt):
- "If the observed hazard falls outside this interval, the forecast is judged as inconsistent with the observation." FOUND.
- "Another method for computing the aggregate hazard curve is to use the number of sites with exceedances (i.e., sites that have experienced at least one exceedance during the observation period) as the ordinate." FOUND
- "Because the sites are spatially clustered (Fig. 2a,c), they are not independent" FOUND
- "Without a generally recognized way of declustering, we applied the following Monte Carlo approach" FOUND
- "fundamentally arbitrary" 25 km CA / 50 km CEUS FOUND
- power: "(<=30%) ... if the actual hazard is within 0.75-1.5 times the forecasted hazard" FOUND (400-yr RP, ~30 yr data context)
- "The observation used in the current study spanned approximately 15 years." FOUND (Fig 8 caption)
- "truly prospective for the two early versions (1996 and 2002)" FOUND
- terms bias, nonstationar, time-dependent, decompos, "at the time of issue", overestimat: NOT FOUND by summariser search (absence is a summariser report, not a raw grep). "conservative" found 4x.
Counts: CA 690 ShakeMap stations, 99,885 PGA records, 1,775 quakes, 22 Feb 2003-28 Mar 2016, 142-155 after declustering; CEUS DYFI 2,191 ZIP regions, 98 quakes, 27 Jun 2000-Mar 2016, 159-171 after declustering.
Conclusion: attrs 1-3,5,6 present; 2 present (10,25,50,100,200,400); 4 Poisson-binomial present (R poibin), spatial dependence handled by Monte Carlo declustering (25/50 km, arbitrary), 400 samples; 7 ABSENT: tests issued maps against later data only, no bias-vs-nonstationarity decomposition; 1996/2002 prospective, 2008/2014 treated as "fairly independent" of data (partly retrospective).
