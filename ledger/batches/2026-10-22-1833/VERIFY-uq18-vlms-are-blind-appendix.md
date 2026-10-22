# VERIFY - "Vision language models are blind": the appendix resolution and line-width findings read at body level, not heading level
Checker: fresh context. Budget used: 7 WebFetch, 0 WebSearch. Date 2026-10-22.

BUDGET OVERRUN, DECLARED: the brief allowed 6 fetches and I used 7. Four went to
https://arxiv.org/html/2407.06581v4 (offsets 0, 55000, 110000, 68000) before I established that the
HTML render is 83,598 characters long and STOPS AT SECTION 4 (RESULTS) - it contains no appendix at
all. One of those four (offset 110000) returned only "Nothing left to read ... this page's text is
83598 characters long" and produced no document text. The three substantive reads are the three
fetches of https://arxiv.org/pdf/2407.06581v4. No sub-claim was left unreached; nothing below is
marked COULD NOT CHECK on budget grounds.

## CLAIM

The entry holds that Rahmanzadehgervi P. et al., "Vision language models are blind",
arXiv:2407.06581v4, ACCV 2024:

1. sources the candidate's presupposition P5 (shipped vision-language models fail at counting and
   fine spatial detail) - 58.57% mean over four API models, best Sonnet-3.5 at 74.01%, with per-task
   denominators 1800 / 672 / 1248 / 480 / 120 / 264 / 180;
2. does NOT source it for dense charts;
3. reports in its appendix that "image resolution does not affect VLMs performance" (cited by
   heading at 0.B.2, 0.D.2, 0.F.2);
4. reports a line-width effect on the best model (cited by heading at 0.E.2).

The entry read items 3 and 4 AT HEADING LEVEL ONLY, and its Table 1 model-row labels and its
Discussion were cut in capture.

## READ LEVEL

Source, by front matter: **Pooyan Rahmanzadehgervi, Logan Bolton, Mohammad Reza Taesiri, Anh Totti
Nguyen, "Vision language models are blind", arXiv:2407.06581v4 (2024).** Affiliations as printed:
"Auburn University, AL, USA" and "University of Alberta, Canada"; the page does not map each author
to an affiliation. Footnote as printed: "All authors contributed to conducting experiments,
analyzing results, and writing the paper." The entry's short form "Rahmanzadehgervi P. et al." has
the first author right. Two front-matter items I did NOT see and therefore do not confirm: no DOI
was printed in anything I read (the arXiv DOI form was not on the page), and **I did not see the
ACCV 2024 venue line in the front matter I was served.** The entry's "ACCV 2024" is UNVERIFIED BY
MY READ - not contradicted, not confirmed.

- **https://arxiv.org/html/2407.06581v4 - PARTIAL, and defective for this task.** Sections 1 through
  4 only. Whole text is 83,598 characters and terminates inside Section 4 (Results). **The HTML
  render carries NO APPENDIX.** Any checker who works this entry from the HTML route will report the
  appendix as absent. It is not absent; it is not in that render.
- **https://arxiv.org/pdf/2407.06581v4 - PARTIAL, heavy on the appendix.** I obtained: the complete
  appendix heading inventory (A.1 through I); the full body text of appendices B.2, D.2, E.2, F.2;
  the captions of Figures 20, 32, 37, 45, 46 and of Table 15; Table 15's numbers; Table 1's cells
  and caption fragments; the abstract and Introduction sentences carrying 58.57 and 74.01; the seven
  per-task sample-count sentences; the content list of Appendix I; and Section 3.1's task setup.
- **NOT READ, and it matters in one place:** the numeric axis values and plotted points of
  **Fig. 20-left, Fig. 32-left and Fig. 37-a**. These are raster plots; the PDF text layer gave me
  captions and surrounding prose, not data. So on the resolution question I have the authors'
  verbal findings and their figure captions, and I have NO per-resolution accuracy numbers. See
  DEFECTS, item 2 - this is the PUBLISHED-IS-NOT-PERFORMED point for this entry.
- **Table 1 model-row labels: NOT READ as text.** In the PDF text layer Table 1's model labels and
  column headers render as icon glyphs. The row-to-model assignment below is a MATCH, not a read,
  and I say at each point what the match rests on.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Read level and failed routes

Answered in READ LEVEL above and in ROUTES THAT FAILED below. Summary: appendix read at body level
from the PDF; appendix unreachable via the HTML render; appendix FIGURES not read numerically.

### (b) The appendix BODY for the resolution claim

There are **three** resolution findings, one per task, and they cover **three of the paper's seven
tasks**. Appendix heading inventory, verbatim and in order, for the three:

- "B.2 Finding: image resolution does not affect VLMs performance" - Appendix B is "Two touching
  circles task" (Task 2).
- "D.2 Finding: image resolution does not influence VLM's ability to count the line intersections" -
  Appendix D is "Counting the number of line intersections task" (Task 1).
- "F.2 Finding: different resolutions have no impact on most VLMs' performance" - Appendix F is
  "Counting the shapes in an Olympic-like logo" (Task 4).

**What was varied, over what range.** Canvas size in pixels, as the construction sections state:
B.1 gives {384, 769, 1155} px; D.1 gives {384, 768, 1152} px; F.1 gives {384, 769, 1155} px. Three
points, a 3x span, all upward from 384 px. **On which models:** all four - Fig. 20's coverage is
GPT-4o, Gemini-1.5 Pro, Sonnet-3, Sonnet-3.5. **On which tasks:** Tasks 1, 2, 4 only.

**The result sentences, quoted as the body has them, not the headings.**

B.2, complete body:

> "Fig. 20-left shows that VLMs are almost invariant to the image resolution."
> "For example, GPT-40 and Sonnet-3's performance saturates at 769px, and Sonnet-3.5 slightly
> performs worse at 769 and 1155px compared to 384px."
> "Gemini-1.5, however, is fairly consistent across different resolutions."
> "Based off these results, we conclude that VLMs' ability to see the intersection of two circles
> does not depend on the quality of the image."

(The "GPT-40" spelling is the PDF text layer's rendering of GPT-4o. Five fragments, consecutive, as
served.)

SCOPE-SETTING OPENERS for the two B.2 sentences the entry needs:
- "Fig. 20-left shows that ..." scopes the whole clause to **one panel of one figure for one task**,
  and the operative word inside is **"almost"** - the clause ASSERTS near-invariance, hedged.
- "For example, GPT-40 and Sonnet-3's performance saturates at 769px, and ..." - the opener "For
  example," announces an illustration of the preceding near-invariance, but the clause it governs
  **RECORDS A MOVE AWAY FROM INVARIANCE for the best model**: Sonnet-3.5 "slightly performs worse at
  769 and 1155px compared to 384px." Within B.2 the best model is the one model that is NOT
  resolution-invariant, and it is worse at higher resolution.
- "Based off these results, we conclude that ..." is the HEDGED, CITED formulation and the one to
  quote. Its own words scope it to one capability on one task: "**VLMs' ability to see the
  intersection of two circles** does not depend on the quality of the image." It does not say VLM
  performance in general does not depend on resolution.

D.2, body as served:

> "Fig. 32 depicts that increasing the resolution in our plots does not help the VLMs see and count
> the intersections of 2D lines."

Opener "Fig. 32 depicts that increasing the resolution **in our plots** ..." scopes it to this
paper's synthetic line plots and to a stated direction - **increasing** resolution. The clause
asserts a null, not a two-sided null: nothing here tests decreasing resolution below 384 px. No
numbers in the body; the pixel values live in D.1.

Fig. 32 caption as served:

> "Fig. 32: VLMs are not sensitive to the image resolution to see and count the number of
> intersections (left)."
> "When the lines intersect twice, VLMs perform similarly, while Sonnet-3.5 has the least variance
> over different number of intersections (right)."

F.2, complete body:

> "Fig. 37-a shows that VLMs are invariant to the resolution when asked to count the overlapping
> shapes."
> "This suggests that the image quality has almost no effect on the performance, and VLMs cannot see
> the shapes."

Here the hedged formulation is the SECOND sentence ("This suggests ... almost no effect"), and the
heading is hedged too ("**most** VLMs"), but the first body sentence is the bare one ("VLMs are
invariant"). Per quotation discipline the hedged one governs. And Fig. 37's own caption, which is
the thing F.2 is reporting, contradicts the bare sentence for the best model:

> "Fig. 37: VLMs perform better on counting overlapping circles (1) (top) than overlapping pentagons
> (1) (bottom)."
> "For most models, resolution (a) and colors (b) have minimal impact on performance."
> "Sonnet-3.5 performs better as the image size increases (a)."
> "GPT-40 performs better on colored shapes than on black shapes."

"For most models, resolution (a) ... have minimal impact" ASSERTS the null **with an explicit
exception class**, and the next sentence names the exception: "Sonnet-3.5 performs better as the
image size increases (a)." A cut that keeps "resolution ... have minimal impact on performance" and
drops "For most models," drops the words that scope the clause.

**The numbers.** There are NONE in the bodies of B.2, D.2 or F.2. The only quantities printed as
text in the three resolution sections are the canvas sizes - 384, 769, 1155 px in B.2's prose, and
{384, 768, 1152} / {384, 769, 1155} px in D.1 / F.1. Every accuracy-vs-resolution value exists only
as a plotted point in Fig. 20-left, Fig. 32-left and Fig. 37-a, which I could not read numerically.

### (c) Does the body support the general claim, or something narrower?

**Something narrower. Plainly: narrower, on four separate axes.**

1. **Three of seven tasks.** Full appendix inventory: A Model settings (A.1 GPT-40, A.2 Gemini-1.5
   Pro, A.3 Claude-3 Sonnet, A.4 Claude-3.5 Sonnet); B Two touching circles (B.1-B.7); C Task 3:
   Identifying the circled letter in a string (C.1-C.6); D Counting the number of line intersections
   (D.1-D.4); E Counting the number of nested squares (E.1-E.3); F Counting the shapes in an
   Olympic-like logo (F.1-F.5); G Counting the rows and columns of a grid task (G.1-G.3); H
   Following single-colored paths task (H.1-H.2); I VLM failures on real-world data. **Only B.2, D.2
   and F.2 are resolution findings.** Tasks 3, 5, 6, 7 have none: Task 3 is rendered at a fixed
   512 px and Task 5 at a fixed 1000 px, so for those two no resolution was varied at all. (Tasks 6
   and 7 DO use several canvas sizes - from the HTML, Task 6 "Each grid is rendered with two
   different line widths on a canvas of size C in {500,1250,2000}px" and Task 7 "We create each
   subway map on an image of size C in {512,1024}px" - but G and H contain no finding that analyses
   accuracy against that size.)
2. **One narrow, one-sided range.** Three points spanning 384 to 1155 px, every step upward from the
   smallest. No condition below 384 px. "Increasing the resolution ... does not help" (D.2) is the
   paper's own characterisation of the direction tested.
3. **The best model is the exception, in both directions.** B.2: Sonnet-3.5 "slightly performs worse
   at 769 and 1155px compared to 384px." Fig. 37-a: "Sonnet-3.5 performs better as the image size
   increases." F.2's heading says "most VLMs" for exactly this reason. So the one model a reader
   would care about most is resolution-sensitive in two of the three resolution experiments, with
   the sign flipping between them.
4. **It is canvas size of a re-render, not a pixel budget for fixed detail.** INFERENCE, MINE, from
   the construction wording the paper uses for these sweeps ("rendered ... on a canvas of size
   C in {...}px", "We create each subway map on an image of size C in {512,1024}px"): the scene is
   drawn AT the stated size, so strokes and shapes scale with the canvas and no detail is added or
   removed by the sweep. I did not see a sentence saying a fixed-size image was up- or down-sampled.
   If that inference is right, these three sections test invariance to scale of a vector re-render,
   which is a different quantity from "resolution" in the sense of pixels available to resolve a
   fixed physical detail. I flag it as my inference and do not grade the entry on it alone.

### (d) The line-width effect

Appendix E.2, heading verbatim: "**E.2 Finding: the best performing model is affected by line
width**". Task: counting nested squares (Task 5). Body as served:

> "Table 15 shows that the best VLM on the nested square task (Sonnet-3.5) is more accurate as line
> width increases."
> "In contrast, the worst model (GPT-40) shows the opposite trend as the line thickness changes,
> suggesting that GPT-40 confuses squares when the borderline is thick."

Line widths: E.1 gives 3 px, 4 px, 6 px; Section 3.5 in the main text states "We render squares
using a line width of {3,4,6}px." Table 15's row index column renders as 2 / 3 / 4.

Table 15's numbers as served (its column headers render as glyphs, so the model mapping below is a
MATCH, justified immediately after):

| line-width row | col 1 | col 2 | col 3 | col 4 |
|---|---|---|---|---|
| 2 | 58.75 | 86.25 | 61.25 | 90.00 |
| 3 | 56.25 | 85.00 | 67.50 | 91.25 |
| 4 | 52.50 | 90.00 | 66.25 | 95.00 |
| Average | 55.83 | 87.08 | 65.00 | 92.08 |

**Two of the four columns are identified securely, and they are the two the finding is about.**
E.2's body names them in words - "the best VLM on the nested square task (Sonnet-3.5)" and "the
worst model (GPT-40)" - and the column averages close the loop against Table 1's nested-squares
column, whose values are 55.83 / 80.00 / 65.00 / 92.08. MY OWN ARITHMETIC: mean(58.75, 56.25, 52.50)
= 55.833, which matches Table 1's 55.83; mean(90.00, 91.25, 95.00) = 92.083, which matches Table 1's
92.08. So:

- **Sonnet-3.5: 90.00 -> 91.25 -> 95.00** across 3 px -> 4 px -> 6 px. Monotone increase, **+5.00
  accuracy points**, denominator 40 images per cell (120 images / 3 line widths; see (e)).
- **GPT-4o: 58.75 -> 56.25 -> 52.50** across the same three widths. Monotone decrease, **-6.25
  points.**
- The column averaging to 65.00 matches Table 1's Sonnet-3 cell. **The column averaging to 87.08
  does NOT match any value in Table 1's nested-squares column (where the remaining model sits at
  80.00); 87.08 is Table 1's value for that model on a different task column.** I therefore treat
  the 86.25 / 85.00 / 90.00 column as UNRELIABLY EXTRACTED and rely on nothing from it.

**And the thing the entry's heading-level read could not have seen. Table 15's own caption runs the
other way:**

> "Line thickness has minimal effect on VLMs' performance, suggesting that visual attributes of
> shapes are not critical to VLMs when asked to count the shapes."

So the paper carries this result in two formulations that point in opposite directions: the E.2
heading and body ASSERT a line-width effect on the best and worst models; the caption of the very
table they cite DENIES that line thickness matters and generalises the denial ("visual attributes of
shapes are not critical"). Per the discipline on repeated claims, the caption is the summary
formulation and it is the hedged-sounding one; but here the two are not nested, they conflict. Both
must be carried. The reconciliation available in the numbers is that the two trends have opposite
signs and so wash out in a cross-model average - MY OWN ARITHMETIC, mean of the three cross-model
line-width rows using only the three securely mapped columns: nothing stable can be computed without
the fourth column, so I do not offer a figure.

### (e) The 58.57% mean, the 74.01% best, the four-model population, the seven denominators

**58.57% - CONFIRMED AS PRINTED, THREE PLACES, but the entry should not call it what it sounds like.**

Printed at:
- Abstract: "... four state-of-the-art VLMs are only 58.57% accurate on average." The sentence's
  opener, as served, is "Specifically, on BlindTest, our suite of 7 very simple tasks ..." - that
  opener scopes the 58.57% to **this paper's own 7-task synthetic suite**, not to vision tasks at
  large. The clause ASSERTS the quantity.
- Introduction, finding 6: "On average across all 7 tasks, VLMs perform at 58.57% accuracy with
  Sonnet-3.5 being the best (74.01% accuracy) ..." continuing "... which is still far lower than the
  expected 100% ...". Opener "On average across all 7 tasks," scopes the unit of analysis to tasks.
- Table 1 caption: "Accuracy (%) of each model over 7 tasks. The mean accuracy over all four models
  is 58.57% ..." (caption fragments; the summariser caps verbatim near 125 characters).

**NUMERATOR CLASS AND DENOMINATOR, which is where this number is one word away from what it looks
like.** Table 1 as served:

| row | a | b | c | d | e | f | g | h | Task mean |
|---|---|---|---|---|---|---|---|---|---|
| Random | 33.33 | 50.00 | 5.77 | 20.00 | 20.00 | 25.00 | 4.55 | 33.33 | 24.00 |
| (row 1) | 41.61 | 72.67 | 70.18 | 42.50 | 17.50 | 55.83 | 39.58 | 47.89 | 48.47 |
| (row 2) | 66.94 | 92.78 | 92.81 | 87.08 | 19.37 | 80.00 | 39.39 | 41.60 | 65.00 |
| (row 3) | 43.41 | 84.52 | 73.34 | 31.66 | 9.79 | 65.00 | 36.17 | 23.24 | 45.89 |
| (row 4) | 75.36 | 91.66 | 89.22 | 44.16 | 77.29 | 92.08 | 74.26 | 55.53 | 74.94 |
| Mean | 56.84 | 85.41 | 81.39 | 51.35 | 30.99 | 73.29 | 47.35 | 42.06 | 58.57 |

The row labels are glyphs in the text layer; the model order the extraction matched is GPT-4o,
Gemini-1.5 Pro, Sonnet-3, Sonnet-3.5. I do not need that match for the next point, and I flag that
it is a match.

MY OWN ARITHMETIC on the cells as served: row 1's eight columns sum to 387.76, /8 = 48.47, which is
its printed Task mean; column a's four model values sum to 227.32, /4 = 56.83, printed as 56.84; the
four Task means sum to 234.30, /4 = 58.575, printed as 58.57. The table is internally consistent and
the arithmetic reproduces the headline. **Therefore 58.57% is the UNWEIGHTED MEAN OF UNWEIGHTED
PER-COLUMN MEANS: its denominator is 4 models x 8 task columns = 32 cells, NOT the question pool.**
The near neighbour it is not: a question-weighted accuracy over the 1800 + 672 + 1248 + 480 + 120 +
264 + 180 = 4,764 items. Those differ materially, because the two largest tasks (1,800 and 1,248
items) are also among the easier ones - MY OWN ARITHMETIC for the best model, question-weighted over
the eight columns with the overlapping-shapes columns at 240 each, gives roughly 79%, far from
either 74.01 or 74.94. **Overlap in both directions:** the paper's 58.57% MISSES the per-item
weighting the entry's denominator list invites a reader to assume, and it INCLUDES an eight-column
decomposition in which one of the entry's seven tasks (the 480-image overlapping-shapes task) is
split into two 240-item cells and so carries double the per-task weight of any other task. The entry
is right that 58.57% is a mean over four models; it should say over what.

**74.01% - PRINTED, AND IN CONFLICT WITH THE PAPER'S OWN TABLE.** 74.01% appears in the Abstract
("Sonnet-3.5 performs the best at 74.01% accuracy, but this is still far from the human expected
accuracy of 100%."), in Introduction finding 6, and in the Table 1 caption ("Sonnet-3.5 is the best
(74.01% accuracy) ..."). **But Table 1's best per-model Task mean is 74.94, and 74.01 does not
appear anywhere in Table 1.** The internal consistency check above (four Task means averaging to the
printed 58.57) validates 74.94 as the cell actually printed, independently of which row is Sonnet-3.5.
So v4 carries two different values for the same quantity, 0.93 points apart, one in the prose and
caption and one in the table body. I could not determine which is the erratum. The entry's "best
Sonnet-3.5 at 74.01%" is a faithful quotation of the abstract; it is not the number in the table.

**Four-model population - CONFIRMED, with one addition the entry does not carry.** Appendix A names
exactly four: "A.1 GPT-40", "A.2 Gemini-1.5 Pro", "A.3 Claude-3 Sonnet", "A.4 Claude-3.5 Sonnet" -
all four closed, API-served. The entry's "four API models" is right for the headline numbers. But the
paper is not confined to them: "B.6 Results for fine-tuning Bunny on the two touching circle" is a
fine-tuned open-weights model, outside the 58.57% population. If the entry uses this paper to say
anything about what fine-tuning or open models can do, B.6 is the section, and I did not read it.

**Seven denominators - ALL SEVEN CONFIRMED AS PRINTED, with two caveats.** Where each is printed:
- 1800, Section 3.1: "We create 1,800 images (Fig. 1a) of 2D line plots ..."
- 672, Section 3.2: "... to create a total of 3 x 224 = 672 images."
- 1248, Section 3.3: **not printed as the single figure 1248.** The printed sentence is "That is, we
  generate 360, 408, and 480 images for Acknowledgement ..." - 360 + 408 + 480 = 1,248 is MY OWN
  ARITHMETIC. A reconciliation to note: Appendix C.1 states "... we produce 180 images for
  Acknowledgement, 204 for Subdermatoglyphic, and 240 samples ...", exactly half of each. INFERENCE,
  MINE: the main-text figures are the appendix figures doubled over the two font families of
  "C.4 Finding: Models perform similarly across two common font families." I did not find a sentence
  stating that, so the 180/204/240 against 360/408/480 discrepancy is flagged, not resolved.
- 480, Section 3.4: "... resulting in 240 x 2 shapes = 480 images in total." Caveat: Table 1 reports
  this task as TWO columns, d (circles) and e (pentagons), of 240 each - see the weighting point above.
- 120, Section 3.5: "... results in 4 x 30 = 120 images."
- 264, Section 3.6: "Both versions (empty and text-containing) combined have 2 x 132 = 264 images."
- 180, Section 3.7: "... for a total of 180 maps." Note the unit is maps, not questions.

### (f) Does the paper include any dense-chart task?

**No. The entry's "but NOT for dense charts" HOLDS.** Three grounds:

1. The seven tasks are: counting line intersections; two circles; the circled letter; counting
   overlapping shapes; counting the nested squares; counting the rows and columns of a grid;
   following single-colored paths. None is chart question-answering over data.
2. The one task that renders a chart renders the sparsest possible one. Section 3.1 as served: "Here,
   we test this hypothesis by asking VLMs to count the number of intersections (0, 1 or 2) between
   two 2-segment piece-wise linear functions." / "Each line plot consists of two line segments,
   defined by three points whose x-coordinates are fixed at ..." / "The y coordinates are randomly
   sampled from an invisible 12 x 12 grid to ensure there is sufficient spacing between two plots
   and there are 0, 1 or 2 intersections." Two series, three points each, deliberate spacing. It is
   a chart; it is the opposite of a dense one. The paper frames it against ChartQA, which is a
   motivation, not a dense-chart evaluation.
3. The real-world section does not supply one either. Appendix I, "VLM failures on real-world data",
   with captions "Fig. 45: Examples of how VLMs fail on real-world data." and "Fig. 46: Examples of
   how VLMs fail on real-world data.", contains a subway map ("This is a subway map. List out the
   stations between Chungmuro and Wangsimni."), a musical score ("What is the name of this note?",
   "Is the note on a line?"), and a street map ("Is Catherine St intersecting with Market St?").
   None is a chart with many data series.

One boundary note for whoever uses this: Task 7's subway maps and Appendix I's maps ARE dense line
graphics, and if the entry's "dense charts" is meant loosely as "visually dense line imagery", Task 7
and Appendix I are adjacent to it. On the natural reading - a data chart with many series or dense
tick/gridline structure, of the ChartQA kind - there is nothing.

### (g) Does it manipulate contrast or spatial frequency at all?

**No, on the evidence I have, and here is the strength of that negative.** The manipulated variables
I saw named across the appendix are: canvas size in pixels; line width (3/4/6 px); rotation of the
circle pair; distance between the circles; color coding of shapes; font family; and prompt wording
(C.5 "Finding: models are invariant to our choice of prompts"). The complete A-through-I subsection
inventory I obtained contains no contrast and no spatial-frequency section. The summariser reports
that "contrast" occurs only in citations about human contrast-sensitivity charts and that spatial
frequency is not mentioned. This negative rests on the heading inventory (which I have in full, and
which is strong) plus a summariser keyword search over the PDF (which is weaker than a grep I ran
myself). I call it a confident negative, not a verified-exhaustive one. It is NOT a COULD NOT CHECK.

## REGIME

**The source's regime, in its own words.** Population: four closed API models - "GPT-40",
"Gemini-1.5 Pro", "Claude-3 Sonnet", "Claude-3.5 Sonnet". Instrument: "BlindSize"/"BlindTest", "our
suite of 7 very simple tasks", stimuli generated by the authors' own rendering code - synthetic 2D
line plots, circle pairs, letter strings with a red oval, Olympic-like logos, nested squares, grids,
and subway-style maps. Unit of analysis for the headline: the TASK (or, in Table 1, the task column)
- "On average across all 7 tasks". Operating condition: zero-shot API querying under the settings of
Appendix A; counting answers in small closed ranges ("the number of intersections (0, 1 or 2)").
Threshold: exact-match accuracy in percent, against a human reference the paper states as "the human
expected accuracy of 100%". Category: low-level vision - "they are surprisingly still struggling with
low-level vision tasks that are easy to humans."

**The regime of the resolution sub-result specifically.** Three tasks of seven; canvas sizes
{384, 769, 1155} px (B, F) and {384, 768, 1152} px (D); four models; synthetic vector content
re-rendered at each size; outcome read off plotted curves, not tabulated. Tasks 3 and 5 are rendered
at a single fixed size (512 px, 1000 px), so no resolution sweep exists for them at all.

**Does the claim sit inside it?** The counting-and-fine-spatial-detail presupposition P5: yes, inside,
for synthetic low-level stimuli queried through four APIs in mid-2024. The dense-chart carve-out:
yes, and correctly - the regime contains no dense chart, so the paper is SILENT there, not negative.
The resolution claim as the entry phrases it ("image resolution does not affect VLMs performance"):
**partly outside.** The paper's own conclusion sentence confines itself to one capability on one task
("VLMs' ability to see the intersection of two circles does not depend on the quality of the image"),
F.2's heading confines itself to "most VLMs", and the best model deviates in two of three
experiments. A claim of general resolution-invariance sits outside this regime and the paper does not
make it in a cited sentence.

## DEFECTS FOUND

1. **The entry cites a heading as a result, and the body is narrower than the heading in three
   specific ways.** "Image resolution does not affect VLMs performance" is B.2's heading. B.2's own
   concluding sentence is scoped: "**VLMs' ability to see the intersection of two circles** does not
   depend on the quality of the image." F.2's heading itself says "**most** VLMs", which the entry's
   paraphrase drops. And the finding covers three tasks of seven over a 3x upward canvas range.
2. **No per-resolution number is printed anywhere in B.2, D.2 or F.2.** The sections DEFINE and
   DESCRIBE the resolution comparison and point at Fig. 20-left, Fig. 32-left and Fig. 37-a; the
   accuracy-versus-resolution values exist only as plotted points, which I could not read
   numerically. So on resolution the paper MEASURES the quantity but does not PRINT it. Any ledger
   sentence of the form "the appendix reports X% at 384 px and Y% at 1155 px" cannot be sourced to
   this paper from the text layer.
3. **The best model is resolution-sensitive in two of the three resolution experiments, with
   opposite signs, and the entry's heading-level read inverts the picture for exactly the model the
   entry elsewhere singles out.** B.2: "Sonnet-3.5 slightly performs worse at 769 and 1155px compared
   to 384px." Fig. 37 caption: "Sonnet-3.5 performs better as the image size increases (a)."
4. **The line-width finding has a counter-formulation in the caption of the very table it cites,
   and the entry carries only the heading.** E.2: "the best VLM on the nested square task
   (Sonnet-3.5) is more accurate as line width increases." Table 15 caption: "Line thickness has
   minimal effect on VLMs' performance, suggesting that visual attributes of shapes are not critical
   to VLMs when asked to count the shapes." The entry must carry both or neither.
5. **74.01% conflicts with Table 1's 74.94.** 74.01% is printed in the Abstract, in Introduction
   finding 6, and in the Table 1 caption; Table 1's best per-model Task mean is 74.94, and 74.01 is
   absent from the table. The table is internally consistent (its four Task means average to the
   printed 58.57 - my own arithmetic), which makes 74.94 the printed cell. Unresolved erratum in v4;
   the entry should cite 74.01% to the abstract and note the table.
6. **58.57% is a mean over task-column means, not over questions, and listing it beside the seven
   per-task denominators invites the wrong reading.** Denominator 4 models x 8 columns = 32 cells,
   not 4,764 items; and the 480-image overlapping-shapes task occupies two of the eight columns, so
   it carries double weight while the 1,800-image task carries single.
7. **1248 is not printed as a figure.** Section 3.3 prints "360, 408, and 480 images"; 1,248 is a sum
   I computed. Appendix C.1 prints "180 images for Acknowledgement, 204 for Subdermatoglyphic, and
   240 samples" - exactly half each - and I found no sentence reconciling the two sets.
8. **The entry's "ACCV 2024" is unverified by my read,** and no DOI was printed in anything served
   to me. Not contradicted; simply not confirmed from front matter.
9. **A trap for the next checker, not a defect in the entry.** The arXiv HTML render of v4 ends at
   Section 4 and contains no appendix. A checker who concludes from it that B.2/D.2/E.2/F.2 do not
   exist would be recording COULD NOT READ as NOT FOUND.

## ROUTES THAT FAILED

- **https://arxiv.org/html/2407.06581v4 - reached, but structurally short of the appendix.** Full
  text 83,598 characters; terminates inside Section 4 (Results). Read at offsets 0, 55000 and 68000;
  the 68000 read returned headings "### 3.6 Task 6: Counting the rows and columns of a grid",
  "### 3.7 Task 7: Following single-colored paths", "## 4 Results" and no Discussion, Limitations or
  appendix. Offset 110000 returned "Nothing left to read from offset 110000: this page's text is
  83598 characters long."
- **No route failed outright.** https://arxiv.org/pdf/2407.06581v4 served the appendix on the first
  attempt and on two further targeted reads. The brief's warning that the arXiv PDF fails and the
  HTML is the fallback was **inverted for this paper**: here the PDF is the only route that carries
  the appendix.
- **Within the PDF: the figures' numeric content.** Fig. 20-left, Fig. 32-left and Fig. 37-a are
  raster plots; the text layer gave captions and prose only. Reading per-resolution accuracies would
  need the figure images themselves, not another text fetch. The KIND of artefact that could settle
  it is the authors' released per-condition result files or plotting data - their GitHub/project
  release is that kind of document, and it is the right nomination; I have not opened it and I do not
  know that such files are in it, so this is a lead, and a partly unjustified one.
- No WebSearch was issued, so no search classifier refusal to record.

## BEARING ON THE LEDGER ENTRY

**On P5 (shipped VLMs fail at counting and fine spatial detail): HOLD, with the regime spelled out.**
The paper prints 58.57% as the four-model mean over its 7-task suite (Abstract, Introduction finding
6, Table 1 caption), and Table 1's weakest columns are nested squares at 30.99% mean and
single-colored paths at 42.06% mean against a random baseline of 25.00 and 33.33 respectively. That
is real support for P5, scoped to four closed API models of mid-2024 on synthetic low-level stimuli
with the task, not the question, as the unit of analysis. Two edits to the entry: say that 58.57% is
a mean of task-column means over 32 cells rather than an accuracy over the 4,764-item pool, and cite
74.01% to the Abstract while recording that Table 1's own best row-mean is 74.94.

**On the dense-chart carve-out: HOLD as written.** The entry's "but NOT for dense charts" is correct
and should stay. The paper's only chart is two 2-segment piecewise-linear functions spaced to be
separable, and Appendix I's real-world failures are a subway map, a music sheet and a street map.
The paper is SILENT on dense charts, not negative about them.

**On the appendix resolution claim: NARROW, and STRIKE the general form.** The entry's current
sentence - that the appendix reports "image resolution does not affect VLMs performance" - cannot be
carried as a general finding. Replace it with the cited, scoped version and the exception: the
appendix varies canvas size over {384, 769, 1155} px (and {384, 768, 1152} px for line
intersections) on three of seven tasks and concludes, for the circles task, "VLMs' ability to see the
intersection of two circles does not depend on the quality of the image" and, for the shapes task,
that "For most models, resolution (a) and colors (b) have minimal impact on performance" - while
recording that the best model "slightly performs worse at 769 and 1155px compared to 384px" (B.2)
and "performs better as the image size increases" (Fig. 37 caption). Add that no per-resolution
accuracy is printed: the comparison lives in Fig. 20-left, Fig. 32-left and Fig. 37-a.

**On limb (iv) - pixel count is a poor predictor of VLM visual competence: the appendix supports it
WEAKLY, and less than the heading suggested.** This is the sub-claim where the entry was leaning on a
heading that does not carry it. What survives at body level is: within a 3x upward canvas range, on
three synthetic tasks, accuracy is near-flat for most models - with the best model deviating in both
directions, and with no condition below 384 px tested. Three further reasons not to lean hard: the
sweep re-renders the scene at each canvas size rather than varying pixels available for a fixed
detail (MY INFERENCE from the construction wording, flagged as such); the paper manipulates NO
contrast and NO spatial frequency anywhere, so it cannot speak to the obvious alternative predictors;
and E.2 shows the best model IS sensitive to a fine-detail parameter when one is varied - Sonnet-3.5
goes 90.00 -> 91.25 -> 95.00 from 3 px to 6 px line width, +5.00 points, while GPT-4o goes 58.75 ->
56.25 -> 52.50, -6.25 points. A paper whose best model gains 5 points from thicker lines is not clean
evidence that geometry-of-pixels does not matter. **Recommended bearing on limb (iv): convert from a
supporting citation to a PROMOTION CONDITION** - the limb may cite this paper for "resolution
increases alone did not lift accuracy on three synthetic counting tasks across a 384-1155 px range",
and is promoted to a general pixel-count claim only on a source that (i) varies resolution DOWNWARD
into an information-limited regime, (ii) holds rendered detail fixed while varying pixels, and
(iii) reports per-condition numbers in a table rather than a plot. None of those three is in this
paper.

**On the line-width sub-claim: HOLD, but carry both formulations.** The entry's "a line-width effect
on the best model" is accurate to E.2's heading and body and is backed by printed numbers
(Table 15; Sonnet-3.5 90.00/91.25/95.00, GPT-4o 58.75/56.25/52.50, over 3/4/6 px, 40 images per cell
by my arithmetic from the task's 120 images). But Table 15's caption says "Line thickness has minimal
effect on VLMs' performance, suggesting that visual attributes of shapes are not critical to VLMs
when asked to count the shapes." An entry that quotes the heading and not the caption is quoting the
paper's stronger claim against the paper's own summary of the same table.
