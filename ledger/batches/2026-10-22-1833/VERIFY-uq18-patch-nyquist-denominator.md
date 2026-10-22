# VERIFY - the "patch-Nyquist" denominator: real two-grid ambiguity where a merge step exists, not universal, and not "undefined" for axial RoPE

Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it: that two adversaries independently showed, from configuration source
they opened, that the "patch-Nyquist" denominator in the candidate's limb (ii) is AMBIGUOUS BY A
FACTOR OF TWO and UNDEFINED for the axial-RoPE family of vision encoders - this being the Gate 1
well-posedness defect holding the entry below 3/3.

Two separable assertions are bundled here, and they do not stand or fall together:

1. **The factor-of-two assertion.** A merge / pixel-shuffle step leaves two defensible spatial
   sampling grids per image, differing by 2x per axis, so "cycles per patch" does not name one
   quantity.
2. **The axial-RoPE assertion.** For the axial-RoPE family, no patch grid is defined at all in
   the sense the denominator needs.

I checked both against opened configuration source. I did not attempt to reconstruct either
adversary's reasoning, and I was not shown it.

One piece of the claim is **not checkable from the documents at all**: whether the two
adversaries opened configs, and whether they did so *independently*. Nothing in the sources
speaks to that. I note additionally that two reviewers converging on the same four shipped config
files is one document set examined twice, not two independent sources - the same discipline that
forbids counting repeated title returns as corroboration applies to repeated config reads.

## READ LEVEL

| Source | Read level |
|---|---|
| `Qwen/Qwen2.5-VL-7B-Instruct` - `preprocessor_config.json` | **PARTIAL (field-level, served).** The summariser declined verbatim whole-file reproduction ("I can't reproduce the entire file verbatim") and returned the requested fields as values. Field values are first-hand; JSON punctuation/ordering is not. |
| `Qwen/Qwen2.5-VL-7B-Instruct` - `config.json` | **PARTIAL (`vision_config` block + rope fields), quoted as JSON lines.** |
| `OpenGVLab/InternVL2_5-8B` - `config.json` | **PARTIAL (the eleven requested fields), quoted as JSON lines.** |
| `OpenGVLab/InternVL3-8B` - `config.json` | **PARTIAL (the nine requested fields), quoted as JSON lines.** |
| `llava-hf/llava-1.5-7b-hf` - `preprocessor_config.json` | **FULL TEXT.** Returned as a complete JSON object, all 13 keys. |
| Qwen2.5-VL Technical Report, arXiv:2502.13923v1, HTML | **PARTIAL (Sections 2.1, 2.1.1, 2.1.2, 2.2.1 and the Figure 1 caption)**, via targeted quotation with section numbers. |
| `Qwen/Qwen2.5-VL-3B-Instruct` - any config | **COULD NOT READ.** One curl attempt was refused at the proxy before any transfer; I did not spend a WebFetch on it after the 7B configs were in hand and the budget was committed. This is COULD NOT READ, not NOT FOUND, and not evidence that the 3B differs. |
| InternVL2.5 / InternVL3 technical reports | **NOT READ** (budget). The InternVL position-encoding scheme is therefore asserted by me only to the extent the opened configs print it. |

**Named repositories opened:** `Qwen/Qwen2.5-VL-7B-Instruct`, `OpenGVLab/InternVL2_5-8B`,
`OpenGVLab/InternVL3-8B`, `llava-hf/llava-1.5-7b-hf`. That is four repositories covering three
named families (and both InternVL generations), satisfying sub-claim (a)'s "at least three".

## WHAT THE SOURCE SAYS (quotations as served)

### Qwen/Qwen2.5-VL-7B-Instruct, preprocessor_config.json

Served field values: `patch_size: 14`, `merge_size: 2`, `temporal_patch_size: 2`,
`min_pixels: 3136`, `max_pixels: 12845056`, `image_processor_type: Qwen2VLImageProcessor`,
`processor_class: Qwen2_5_VLProcessor`. The remaining keys are `image_mean` and `image_std`.

The fetcher states explicitly of `size`: "Not present in this file, so there is no shortest_edge
or longest_edge value." **There is no fixed input resolution printed in this file.** The only
spatial constraints are the two pixel-count bounds.

### Qwen/Qwen2.5-VL-7B-Instruct, config.json (vision_config), as JSON lines

```
"patch_size": 14,
"spatial_merge_size": 2,
"spatial_patch_size": 14,
"temporal_patch_size": 2,
"window_size": 112,
"fullatt_block_indexes": [ 7, 15, 23, 31 ]
"in_chans": 3,
"depth": 32,
"out_hidden_size": 3584,
"tokens_per_second": 2,
```
and at the text-model level:
```
"rope_scaling": { "type": "mrope", "mrope_section": [ 16, 24, 24 ] }
"rope_theta": 1000000.0,
"max_position_embeddings": 128000,
"image_token_id": 151655,
```

Note that `patch_size`/`spatial_patch_size` (14) and `spatial_merge_size` (2) are printed as
**separate, co-equal fields**. The config does not mark either the 14-px lattice or the 28-px
lattice as "the" grid.

### OpenGVLab/InternVL2_5-8B, config.json, as JSON lines

```
"downsample_ratio": 0.5,
"patch_size": 14,            (inside vision_config)
"image_size": 448,           (inside vision_config)
"min_dynamic_patch": 1,
"max_dynamic_patch": 12,
"dynamic_image_size": true,
"use_thumbnail": true,
"ps_version": "v2",
"force_image_size": 448,
"select_layer": -1,
"template": "internvl2_5",
```

### OpenGVLab/InternVL3-8B, config.json, as JSON lines

```
"downsample_ratio": 0.5,
"patch_size": 14,            (inside vision_config)
"image_size": 448,           (inside vision_config)
"min_dynamic_patch": 1,
"max_dynamic_patch": 12,
"dynamic_image_size": true,
"use_thumbnail": true,
"ps_version": "v2",
"force_image_size": 448,
```

**The two InternVL generations print identical values on every field that bears on the patch
grid.** Whatever the denominator does for InternVL2.5 it does for InternVL3; they are not two
independent tests of the claim.

### llava-hf/llava-1.5-7b-hf, preprocessor_config.json (FULL TEXT)

```json
{
  "crop_size": { "height": 336, "width": 336 },
  "do_center_crop": true,
  "do_convert_rgb": true,
  "do_normalize": true,
  "do_rescale": true,
  "do_resize": true,
  "image_mean": [0.48145466, 0.4578275, 0.40821073],
  "image_processor_type": "CLIPImageProcessor",
  "image_std": [0.26862954, 0.26130258, 0.27577711],
  "processor_class": "LlavaProcessor",
  "resample": 3,
  "rescale_factor": 0.00392156862745098,
  "size": { "shortest_edge": 336 }
}
```

**`patch_size` is NOT PRESENT in this file.** There is no merge, pixel-shuffle, downsample-ratio,
dynamic-tiling or max-pixels field either. The grid pitch for LLaVA-1.5 is not printed in the
preprocessor config; it lives in the CLIP backbone (`config.json` / `vision_config`), which I did
**not** open.

### Qwen2.5-VL Technical Report (arXiv:2502.13923v1) - quotations with their openers scoped

Per the brief, for each quotation I rely on: what the opening words SCOPE, and whether the clause
my words sit in ASSERTS the quantity, DENIES it, or RECORDS A MOVE AWAY from it.

**Q1, Sec. 2.1** - "Structurally, we incorporate 2D-RoPE and window attention to support native
input resolutions"
*Opener scopes:* "Structurally," confines the clause to architecture, not to measured behaviour.
*Status:* **ASSERTS** that axial (2D) RoPE is present, and asserts its *purpose* is to support
varying input resolutions. It does **not** deny that a patch lattice exists.

**Q2, Sec. 2.1.1** - "For positional encoding, we adopt 2D Rotary Positional Embedding (RoPE)"
*Opener scopes:* "For positional encoding," confines the clause to the position-encoding choice.
*Status:* **ASSERTS** axial RoPE. This is the sentence that identifies Qwen2.5-VL as the
axial-RoPE member of the entry's population.

**Q3, Sec. 2.1** - "During both training and inference, the height and width of the input images
are resized to multiples of 28"
*Opener scopes:* "During both training and inference," extends the rule to both phases - it is
not a training-only artefact.
*Status:* **ASSERTS** a 28-pixel spatial quantum. This quotation does double duty and must not be
cut: it asserts a *defined* pitch (against the "undefined" leg) while simultaneously asserting a
*resize* (hence an image-dependent scale, for the leg about image dependence).

**Q4, Sec. 2.1.2** - "In the spatial domain, Qwen2.5-VL dynamically converts images of varying
sizes into sequences of tokens"
*Opener scopes:* "In the spatial domain," distinguishes this from the temporal / frame-rate
treatment in the same section.
*Status:* **ASSERTS** a variable token count as a function of image size.

**Q5, Sec. 2.1** - "Specifically, instead of directly using the raw patch features extracted by
the Vision Transformer (ViT)" - the sentence continues "we first group spatially adjacent sets of
four patch features."
*Opener scopes:* "Specifically, instead of directly using..." - the opener is adversative.
*Status:* **RECORDS A MOVE AWAY** from the raw patch grid. It neither asserts that the raw patch
grid is the model's grid nor denies that it exists. **This sentence is the textual heart of the
two-grid problem:** the report names both lattices in one breath and says the pipeline declines
the finer one downstream, while the ViT - and its 2D-RoPE - keeps operating on it. A cut that
kept only "we first group spatially adjacent sets of four patch features" would read as a bare
assertion that the model's grid is the coarse one, which the full sentence does not say.

**Q6, Sec. 2.1.1** - "Regions smaller than 112x112 are processed without padding, preserving
their original resolution"
*Opener scopes:* "Regions smaller than 112x112" restricts the clause to sub-window regions only.
*Status:* **ASSERTS** no-padding for that case alone. It says nothing general about padding at
larger sizes, and must not be quoted as if it did.

**Q7, Sec. 2.2.1 / 2.1.2** - "Unlike traditional approaches that normalize coordinates, our model
directly uses the actual dimensions"
*Opener scopes:* "Unlike traditional approaches that normalize coordinates," confines the
contrast to **grounding-output coordinate conventions**.
*Status:* **ASSERTS** un-normalised output coordinates. This is **not** a statement about
sampling intervals, and I do not use it as one. Flagged because "actual dimensions" reads like a
statement about native sampling once the opener is dropped - exactly the failure mode the brief
warns about.

Also served, same section: "only four layers employ full self-attention, while the remaining
layers utilize windowed attention" (consistent with `fullatt_block_indexes: [7,15,23,31]` and
`depth: 32`), and "These grouped features are then concatenated and passed through a two-layer
multi-layer perceptron".

The fetcher reports the string "2x2" does **not** occur in the source; the report says "four
spatially adjacent" patch features. I therefore do not attribute "2x2" to the report. (The 2x2
reading is licensed by the config field `spatial_merge_size: 2`, not by the report's prose.)

### PUBLISHED IS NOT PERFORMED

**No source I opened prints a cycles-per-patch or cycles-per-pixel number of any kind.** Not in a
table, not in a figure, not in a sentence. What the sources do:

- the configs **DEFINE** lattice parameters (`patch_size` 14 px; `spatial_merge_size` 2,
  dimensionless; `downsample_ratio` 0.5, dimensionless) and **BOUND** the token budget
  (`min_pixels` 3136 px, `max_pixels` 12845056 px, `max_dynamic_patch` 12 tiles);
- the technical report **DEFINES** the architecture and **ANNOUNCES** the 28-px resize rule.

So on the candidate's limb (ii) denominator, every source here is a definition-and-bounds source.
A definition citation is not an evaluation, and none of this is a measurement of any spatial-
frequency quantity.

**Numerator/denominator near-neighbour check, both directions.** The claim's quantity is a
spatial frequency denominated in patches (cycles/patch). The printed numbers are of different
kinds entirely: `patch_size` is a **length in pixels**, `merge_size` and `downsample_ratio` are
**dimensionless factors**, `max_pixels` is a **pixel count**. None is one word away from
cycles/patch, so there is no printed figure that could be mistaken for the claim's. The real
near-neighbour hazard is internal to the denominator: 14 px (pre-merge, the lattice 2D-RoPE
indexes) versus 28 px (post-merge, the lattice the language model reads). Those two are one word
apart - "patch" - and that is the ambiguity under test.

## REGIME

**Qwen2.5-VL-7B-Instruct, in its own words.** Population: single images and video at **native /
variable** resolution. Unit of analysis: the image-and-model pair, since token count is a
function of input size ("In the spatial domain, Qwen2.5-VL dynamically converts images of varying
sizes into sequences of tokens"). Operating condition: input resized to multiples of 28 px,
pixel count constrained to [3136, 12845056]. Instrument: ViT, `depth` 32, `window_size` 112, four
full-attention layers, 2D-RoPE positional encoding, 2x2 spatial merge into the LLM. A single
model-level cycles-per-patch number **sits outside this regime** unless a convention fixes both
the lattice and the input size.

**InternVL2.5-8B / InternVL3-8B, as the configs print them.** Population: images decomposed into
between `min_dynamic_patch: 1` and `max_dynamic_patch: 12` tiles of `image_size: 448`, plus a
thumbnail (`use_thumbnail: true`), with `dynamic_image_size: true`. Unit of analysis: the
**tile**, not the image. Operating condition: pixel shuffle at `downsample_ratio: 0.5`,
`ps_version: "v2"`. A single cycles-per-patch number per *image* sits outside this regime, and so
does a single number per *(model, image)* pair - see (d).

**LLaVA-1.5-7B, as the preprocessor config prints it.** Population: single images, resized to
`shortest_edge: 336` and centre-cropped to 336x336. Unit of analysis: the fixed crop. Operating
condition: no tiling, no merge, no pixel shuffle. Here a model-level sampling interval **does**
sit inside the regime, provided it is denominated in crop pixels - but note that
`do_center_crop: true` means image content outside the central square is discarded, so the
interval in *source*-image coordinates still depends on the source aspect ratio.

**The entry's population is not homogeneous in the respect the claim quantifies over.** Any
finding stated as holding "for the families in the entry's population" has to survive LLaVA-1.5,
and the factor-of-two finding does not.

## DEFECTS FOUND

Taking the sub-claims in order, as instructed, without merging them.

### (a) Configs opened, with the grid-determining fields quoted

Done, four repositories, three named families; fields quoted verbatim in the section above. Read
levels named per source in READ LEVEL. **Qwen2.5-VL-3B: COULD NOT READ** - not a negative
finding. LLaVA-1.5's `patch_size` is **not in the file I opened**; I flag that rather than supply
it from recollection of the architecture, which this check forbids.

### (b) Unique sampling interval, or two defensible grids?

Concretely, per model opened. All derived figures below are **MY OWN ARITHMETIC** from the quoted
fields; the sources print no products or quotients.

**Qwen2.5-VL-7B-Instruct: TWO defensible grids.** `patch_size: 14` and `spatial_merge_size: 2`
give a pre-merge lattice of pitch 14 px and a post-merge lattice of pitch 14 x 2 = **28 px**
(MY OWN ARITHMETIC). Both are defensible, and each has a different structure behind it: 2D-RoPE
is indexed on the **14-px** lattice, while the language model receives tokens on the **28-px**
lattice. The 28-px figure is independently corroborated by the report's resize rule
("...resized to multiples of 28"). Nyquist is 0.5 cycles/patch on either lattice, but the implied
cycles-per-*pixel* differ by exactly 2x (1/28 vs 1/56 cyc/px, MY OWN ARITHMETIC). So the
factor-of-two is real here, and it is real **per axis**, i.e. 4x in patch count.

For scale, also MY OWN ARITHMETIC from the printed bounds: `min_pixels: 3136` = 3136/784 = 4
merged tokens (= 16 pre-merge patches); `max_pixels: 12845056` = 12845056/784 = **16384** merged
tokens (= 65536 pre-merge patches). The admissible grid extent spans four orders of magnitude.

**InternVL2.5-8B and InternVL3-8B: TWO defensible grids, identically.** `image_size: 448` with
vision `patch_size: 14` gives 448/14 = 32, i.e. a **32x32 = 1024**-patch lattice per tile; pixel
shuffle at `downsample_ratio: 0.5` gives **16x16 = 256** tokens per tile (MY OWN ARITHMETIC).
Pitch 14 px pre-shuffle, 28 px post-shuffle, in tile coordinates. Factor of two per axis,
confirmed, on both generations.

**LLaVA-1.5-7B: ONE grid. No factor-of-two ambiguity.** The opened config contains **no** merge,
pixel-shuffle or downsample field, and LLaVA-1.5's projector emits one token per patch. With
`crop_size` 336x336 the lattice is 24x24 = 576 at pitch 14 px (MY OWN ARITHMETIC, and flagged:
the 14 comes from the ViT-L/14 backbone, **not** from a field in the file I opened, so the 24x24
is inference, not a read). There is exactly one defensible interval here.

**Finding on (b): the factor-of-two ambiguity is REAL, and it is real wherever a merge or
pixel-shuffle step exists - 3 of the 4 repositories I opened. It is NOT universal across the
entry's population: LLaVA-1.5-7B has a unique grid.** The claim as the entry carries it
generalises over "the model families in the entry's population" and therefore **overshoots**.

### (c) For the axial-RoPE family, is a patch grid defined at all?

**No - the claim is wrong as written, and on one point it points the wrong way.** Three findings:

1. **The pitch IS defined, and printed twice.** `"patch_size": 14` and `"spatial_patch_size": 14`
   in `vision_config`, plus the report's "During both training and inference, the height and
   width of the input images are resized to multiples of 28". A quantity printed in the shipped
   config is not undefined.
2. **What is undefined is the grid's EXTENT, not its pitch.** No `size` key exists in the Qwen
   preprocessor config - the fetcher states so explicitly - and the extent is bounded only by
   `min_pixels: 3136` / `max_pixels: 12845056`. So there is no model-level *number of patches*,
   and no model-level pitch *in source-image coordinates*, because the resize scale is per-image.
   That is a real defect, but it is a defect about extent and about coordinate frame, not about
   definedness of the lattice.
3. **Axial RoPE, far from making the grid undefined, is the one thing that PICKS OUT a grid.**
   "For positional encoding, we adopt 2D Rotary Positional Embedding (RoPE)" - 2D-RoPE is indexed
   on the pre-merge 14-px lattice. For Qwen2.5-VL, axial RoPE is therefore an *argument for* the
   14-px denominator being the privileged one. The claim has the valence of this leg inverted.

And the obstacle this exposes is worse than the claim's, not better: the principled lattice
**differs by family**. For Qwen2.5-VL, RoPE indexing favours the pre-merge lattice; for
InternVL2.5/3 the language model reads the post-pixel-shuffle lattice and the vision tower uses
absolute position embeddings at `force_image_size: 448` (as the configs print; I did **not** read
the InternVL reports, so I do not characterise their position encoding beyond what the config
shows). A single population-wide denominator has no family-neutral justification. **That is a
better statement of the Gate 1 defect than "ambiguous by a factor of two".**

### (d) Does dynamic tiling make the interval image-dependent?

**YES - and for InternVL in a stronger way than the sub-claim supposes.** Three distinct
behaviours across the population:

- **InternVL2.5-8B / InternVL3-8B: worse than per-(model, image).** With
  `dynamic_image_size: true`, `min_dynamic_patch: 1`, `max_dynamic_patch: 12`, the source image
  is rescaled to a best-fitting grid of 448x448 tiles, so the pitch in **source** pixels is an
  image-dependent scale factor. On top of that, `use_thumbnail: true` puts the **whole image into
  one additional 448 tile in the same forward pass**. A single image therefore carries **two
  different sampling intervals simultaneously** - the tile interval and the much coarser
  thumbnail interval. Up to 13 x 256 = **3328** tokens at mixed scales (MY OWN ARITHMETIC). So
  cycles-per-patch is not even well defined for a (model, image) pair; it is well defined only
  for a (model, image, tile) triple.
- **Qwen2.5-VL-7B: image-dependent, but mildly.** No tiling field exists. For an image whose
  pixel count already lies within [3136, 12845056], the pitch in source pixels is 14/28 px up to
  the rounding to multiples of 28; above `max_pixels` the image is downscaled by an image-
  dependent factor. Image-dependence is real but weaker than InternVL's, and there is no
  simultaneous multi-scale.
- **LLaVA-1.5-7B: no tiling at all.** `do_resize` + `size.shortest_edge: 336` +
  `do_center_crop` + `crop_size` 336. Denominated in crop pixels the interval is fixed and
  model-level; denominated in source pixels it varies with the source's shorter side, and content
  outside the centre square is discarded entirely.

**Finding on (d): YES, but the degree varies so sharply across the population that "a single
cycles-per-patch number is not well defined for a model" is true for InternVL, true-with-caveats
for Qwen2.5-VL, and FALSE for LLaVA-1.5 under a stated coordinate convention.**

### (e) Could the candidate pin the denominator by declaring it?

**Yes, and it would be a DECLARATION - a stipulated convention - not a measurement.** Nothing I
opened measures the quantity (see PUBLISHED IS NOT PERFORMED), so no amount of reading settles
which lattice is "the" one; the candidate has to choose. "Cycles per pre-merge patch at a fixed
input size" is a legitimate choice and would make limb (ii) well posed. Three costs the entry
should record:

1. **The declaration must fix more than the lattice.** Pre-merge pitch alone does not pin the
   mapping to image content, because of InternVL's tiles-plus-thumbnail: the convention must also
   fix the tiling policy and whether the thumbnail counts.
2. **"Pre-merge" is vacuous for LLaVA-1.5** - there is no merge there. The convention has to say
   that pre-merge degenerates to the only lattice, or the population stops being uniform.
3. **Declaring narrows what the claim is about.** If limb (ii) was meant empirically - about
   where these models actually lose image information - then pinning the denominator by fiat
   converts it into a statement about the ViT's patch lattice, which is an architectural fact, not
   a claim about effective resolution. A declaration makes the limb well posed and, in the same
   motion, makes it weaker.

So: declarable, and a declaration. The promotion condition should require the declaration to be
**written into the entry text** - lattice, input size, and tiling/thumbnail policy - rather than
left for a reader to supply.

### (f) Bearing (stated in full under BEARING below)

Ambiguity real for the merge/shuffle models, not real for LLaVA-1.5; the axial-RoPE leg is
overstated and partly inverted; the well-posedness cap is **correct**, for a narrower and partly
different reason than the entry records.

### Defects in the entry's own wording, itemised

- **D1. Over-generalisation.** "ambiguous by a factor of two" is asserted of the population; it
  fails on LLaVA-1.5-7B, which has one grid and no merge field.
- **D2. Wrong leg: "UNDEFINED for the axial-RoPE family."** `patch_size: 14` and
  `spatial_patch_size: 14` are printed in `Qwen/Qwen2.5-VL-7B-Instruct/config.json`, and the
  report prints the 28-px resize rule. The pitch is defined; the **extent** and the **source-pixel
  coordinate frame** are not. The entry names the wrong missing object.
- **D3. Inverted valence.** 2D-RoPE is indexed on the pre-merge lattice, so axial RoPE
  *disambiguates* in favour of the 14-px denominator for Qwen rather than removing the grid.
- **D4. Independence not established, and not establishable from these documents.** Whether two
  adversaries opened configs independently is outside what the sources can show. Separately,
  **InternVL2.5-8B and InternVL3-8B print identical values on every grid-bearing field**, so
  citing both is one test, not two - as is two reviewers reading the same four files.
- **D5. Understated where it matters most.** InternVL's `use_thumbnail: true` plus
  `max_dynamic_patch: 12` defeats a per-(model, image) interval, not merely a per-model one. The
  entry's framing is too weak here, and a factor of two is not the right description of a
  tiles-plus-thumbnail multi-scale pyramid.

## ROUTES THAT FAILED

- **curl to huggingface.co: refused at the proxy, three times** - `curl: (56) CONNECT tunnel
  failed, response 403` for the Qwen2.5-VL-7B, Qwen2.5-VL-3B and LLaVA-1.5-7B raw config URLs.
  Nothing transferred. Consistent with the brief's note that a curl 403 here is tool-scoped:
  **WebFetch reached all three paths immediately.** I did not route around the proxy and did not
  probe it.
- **Verbatim whole-file reproduction refused by the summariser** for
  `Qwen/Qwen2.5-VL-7B-Instruct/preprocessor_config.json` ("I can't reproduce the entire file
  verbatim"). Field values were served instead, so that read is PARTIAL (field-level), not FULL
  TEXT. The LLaVA file came back whole.
- **Not attempted, budget:** Qwen2.5-VL-3B configs; `llava-hf/llava-1.5-7b-hf/config.json` (which
  is where LLaVA's `patch_size` actually lives); InternVL2.5 and InternVL3 technical reports.
  **COULD NOT READ / NOT READ, not NOT FOUND.**
- One WebSearch used, for the sanctioned purpose of confirming the technical report's arXiv ID
  (2502.13923) before spending the final fetch. No search was refused by the classifier.

**What kind of document would settle the open residue, and is the thing I am naming that kind?**
The residue is (i) LLaVA-1.5's patch pitch and (ii) InternVL's vision-tower position encoding.
For (i) the settling document is a **shipped config printing the field** - specifically
`llava-hf/llava-1.5-7b-hf/config.json`, whose `vision_config.patch_size` would make the 24x24 a
read rather than my arithmetic. That is the right kind: it is the same class of primary
configuration source as the files I did open. For (ii) the settling document is the **InternVL
technical report**, which is the right kind for a position-encoding scheme (a config prints
`force_image_size`, not an encoding scheme) - but I have not opened it, so naming it is a lead,
and I call it one. Neither affects the bearing below: (i) cannot create a merge step where no
merge field exists, and (ii) cannot remove a `downsample_ratio` that is printed.

## BEARING ON THE LEDGER ENTRY

**HOLD the Gate 1 well-posedness cap. NARROW the finding. CORRECT the axial-RoPE leg. Convert the
remainder into a promotion condition.**

The cap is **correct**: limb (ii)'s denominator genuinely does not name one quantity across this
population, and I confirmed that from opened configuration source, not recollection. But it is
correct for reasons the entry states partly wrongly, and the entry should not be promoted on the
strength of the current wording even though the wording's conclusion survives.

What survives, and should be restated:

- **The factor-of-two ambiguity is REAL for every model in the population that has a merge or
  pixel-shuffle step.** Confirmed from printed fields: Qwen2.5-VL-7B (`patch_size: 14`,
  `spatial_merge_size: 2`), InternVL2.5-8B and InternVL3-8B (`patch_size: 14`,
  `downsample_ratio: 0.5`, `image_size: 448`). Pre-merge pitch 14 px, post-merge 28 px, per axis.
- **It is NOT real for LLaVA-1.5-7B**, whose opened preprocessor config has no merge,
  pixel-shuffle, downsample or tiling field at all. Strike the universal quantifier.
- **The "undefined for the axial-RoPE family" leg must be struck and replaced.** The pitch is
  defined (14, printed twice in `vision_config`; 28-px resize printed in the report). What is
  undefined is the grid **extent** (no `size` key; only `min_pixels` / `max_pixels`) and the
  pitch in **source-image coordinates**. And 2D-RoPE *selects* the pre-merge lattice rather than
  dissolving it, so this leg currently points the wrong way.
- **Strengthen the dynamic-tiling leg.** InternVL's `use_thumbnail: true` with
  `max_dynamic_patch: 12` means one image carries several intervals at once, so the right
  statement is that the interval is well defined only per **(model, image, tile)**, not per
  (model, image). A factor of two does not describe a multi-scale pyramid.
- **Replace the single finding with the family-neutrality obstacle**, which is sharper and is
  what actually blocks promotion: the *principled* lattice differs by family - RoPE-indexed
  pre-merge for Qwen, post-pixel-shuffle for what InternVL's language model reads, and a single
  lattice for LLaVA-1.5 - so no population-wide denominator has a family-neutral justification.

**Promotion condition the entry should carry.** Limb (ii) is promotable once the candidate
**declares** the denominator in the entry text, naming all three of: (1) the lattice (e.g.
cycles per pre-merge patch), (2) the input size or resize policy, and (3) the tiling and
thumbnail policy for the InternVL members - with an explicit note that for LLaVA-1.5 "pre-merge"
degenerates to the only lattice. The entry must also record that this is a **declaration, not a
measurement**: none of the shipped configs or the Qwen2.5-VL technical report prints any
cycles-per-patch or cycles-per-pixel figure, so they define and bound the lattice and never
evaluate the quantity limb (ii) is about. Should the candidate decline to declare, the cap stands.

**Not checkable here:** whether the two adversaries in fact opened configs, and whether they did
so independently. The documents are silent on that, and I make no finding either way - except to
note that two readings of the same four config files, and the two InternVL generations that print
identical grid fields, are each one test and not two.
