# VERIFY - current-utc-offset in ietf-ptp@2019-05-07 carries TAI-UTC, not UT1-UTC: claim confirmed, with one truncation nit and one terminology nit
Checker: fresh context. Budget used: 2 WebFetch + 6 raw curl reads (8 fetch-equivalents), 1 WebSearch. Date 2026-10-22.

## CLAIM

That `current-utc-offset` in the IETF PTP YANG module is declared verbatim as "The offset between TAI and UTC",
and that all four of the record's named instances carry the LEAP COUNT or a bare flag rather than UT1-UTC.

Verdict: **MOSTLY HOLDS.** The substance is confirmed on every leg. Two front-matter defects, neither of which
disturbs the kill: (i) the quoted string is the *opening clause* of a longer description, not the whole
declaration, and the entry presents it as "declared verbatim as" without the continuation; (ii) "LEAP COUNT" is
loose - the field carries TAI-UTC, which equals 10 s plus the accumulated leap seconds, not the bare count.

## READ LEVEL

1. **ietf-ptp@2019-05-07.yang** (module `ietf-ptp`, yang-version 1.1, revision 2019-05-07, reference
   "RFC 8575: YANG Data Model for the Precision Time Protocol"; front-matter organization "IETF TICTOC Working
   Group", Editors Yuanlong Jiang and Rodney Cummings) - **FULL TEXT.** Route: `curl` to
   `https://raw.githubusercontent.com/YangModels/yang/main/standard/ietf/RFC/ietf-ptp%402019-05-07.yang`,
   HTTP 200, 18457 bytes, sha256 `78e9d550e25676e417701d867e6a95be00f2298a07ffdaee674ab8e529c68ece`.
   Raw read, no summariser, so quotations below are byte-exact and uncapped.
2. **RFC 5905 (NTPv4)** - **PARTIAL:** characters 0-100000 of 119175, which covers Section 7.3 (packet header
   variables) and Figure 9. Sections past 10 and the appendices not read. Route: WebFetch to
   `https://www.rfc-editor.org/rfc/rfc5905.txt` (curl got CONNECT tunnel 403 at this proxy - tool-scoped).
3. **linuxptp (Richard Cochran), master branch** - **PARTIAL (FULL TEXT of the relevant declarations):**
   `ds.h` (whole file, 3243 B), `msg.h` (announce struct), `clock.c` (lines 860-975 and 2255-2275 of 63916 B),
   `clockadj.c` (`sysclk_set_tai_offset`). Route: `curl` to `raw.githubusercontent.com/richardcochran/linuxptp/master/...`,
   all HTTP 200. Raw reads, byte-exact.
4. **chrony (Miroslav Lichvar), master, `ntp.h`** - **PARTIAL (FULL TEXT of the leap declarations).** Route: raw curl, HTTP 200.
5. **IEEE 802.1AS gPTP YANG module, `ieee802-dot1as-gptp.yang`** (IEEE-authored, free on grouper.ieee.org) -
   **PARTIAL, THROUGH THE SUMMARISER (125-char cap).** Route: WebFetch to
   `https://grouper.ieee.org/groups/802/1/files/public/YANGs/ieee802-dot1as-gptp.yang` (curl was refused at the
   egress proxy: `connect_rejected`). Used as an open IEEE-authored gloss on the same field.
6. **IEEE Std 1588 itself** - **COULD NOT READ.** Paywalled; I did not obtain the standard's own clause 8.2.4.3 /
   13.5 text. This is COULD NOT READ, not NOT FOUND: the standard's silence is not evidence either way, and the
   IEEE-side finding below rests on (5) plus the linuxptp wire struct, both of which I name as proxies.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Is "The offset between TAI and UTC" present verbatim? YES - but it is a clause, not the declaration.

From `ietf-ptp@2019-05-07.yang`, lines 334-353, byte-exact from the raw read, with the surrounding lines so the
grammar on both sides of the cut is visible:

```
      container time-properties-ds {
        description
          "The timeProperties data set of the clock (see
           IEEE Std 1588-2008 subclause 8.2.4).";
        reference
          "IEEE Std 1588-2008: 8.2.4";
        leaf current-utc-offset-valid {
          type boolean;
          description
            "When set to true, the current UTC offset is valid.";
        }
        leaf current-utc-offset {
          when "../current-utc-offset-valid='true'";
          type int16;
          description
            "The offset between TAI and UTC when the epoch of the
             PTP system is the PTP epoch in units of seconds, i.e.,
             when ptp-timescale is TRUE; otherwise, the value has
             no meaning.";
        }
```

The string the entry quotes is present verbatim and begins the description. **But the description does not end
there.** The entry's "declared verbatim as 'The offset between TAI and UTC'" cuts mid-sentence, immediately
before "when the epoch of the PTP system is the PTP epoch". Checking the grammar on both sides of that cut: the
continuation is a **condition of applicability**, not a redefinition of the quantity - it says the field means
TAI-UTC *when* `ptp-timescale` is TRUE, and "otherwise, the value has no meaning." Nothing after the cut turns
the field into UT1-UTC or into anything else. So the truncation is a citation defect, not a reversal.

Note also that the module itself points at the IEEE source for this data set: `reference "IEEE Std 1588-2008: 8.2.4"`.

### (b) Declared TYPE and range

```
          when "../current-utc-offset-valid='true'";
          type int16;
```

- **Type: `int16`.** Confirmed.
- **Range: none.** There is no `range` substatement. `grep -n "units\|range"` over the whole module returns only
  two hits, both inside description prose (line 122, a different typedef; line 350, the "in units of seconds"
  phrase above). The module declares no `range` and no `units` statement anywhere on this leaf.
- Additionally gated by `when "../current-utc-offset-valid='true'"`, so the leaf is only present when the
  companion validity boolean is true.

### (c) Each further instance, and the line that settles it

**Instance 2 - the PTP announce-message `currentUtcOffset` field (IEEE 1588).** Carries **UTC-TAI (TAI minus UTC)**.
IEEE Std 1588 itself: COULD NOT READ. Two open proxies:

  (i) IEEE's own 802.1AS gPTP YANG module, on the same-named leaf. Served through the summariser, which caps
  verbatim quotation at ~125 characters. **The following is a RECONSTRUCTION from 2 summariser fragments**, which
  were returned as two separate complete sentences (so there is no junction inside a clause to verify):

  > fragment 1: "Offset from UTC (TAI - UTC). The offset is in units of seconds."
  > fragment 2: "This leaf applies to the ClockTimeTransmitter entity (i.e., local only, unrelated to a remote GM)."

  Same declared `type int16`, no `range`, no `units` substatement, `config false`, and the same
  `when "../current-utc-offset-valid='true'"` gate. The parenthetical "(TAI - UTC)" is IEEE's own gloss and is
  decisive on direction. Companion leaves in the same module are bare flags: leap59 - "a true value for leap59
  shall indicate that the last minute of the current UTC day" / "contains 59 seconds" (2 fragments); leap61
  likewise with 61 seconds.

  (ii) linuxptp's wire struct for the announce message, `msg.h` lines 105-111, raw read, byte-exact:

```
struct announce_msg {
	struct ptp_header    hdr;
	struct Timestamp     originTimestamp;
	Integer16            currentUtcOffset;
```

  and `ds.h` lines 88-96, which both fixes the direction by its value and shows the timePropertiesDS layout:

```
#define CURRENT_UTC_OFFSET  37 /* 1 Jan 2017 */
...
struct timePropertiesDS {
	Integer16    currentUtcOffset;
	UInteger8    flags;
	Enumeration8 timeSource;
} PACKED;
```

  **37 s as of 1 Jan 2017 is the TAI-UTC offset.** It cannot be UT1-UTC: |DUT1| is held below 0.9 s by the IERS
  leap-second convention, so a default of 37 excludes the DUT1 reading on its face.

**Instance 3 - the NTP leap indicator / RFC 5905.** Carries a **bare warning flag**. RFC 5905 Section 7.3, as served:

  > "LI Leap Indicator (leap): 2-bit integer warning of an impending leap second to be inserted or deleted"
  > "in the last minute of the current month with values defined in Figure 9."

  Figure 9 code values as served: 0 "no warning"; 1 "last minute of the day has 61 seconds"; 2 "last minute of
  the day has 59 seconds"; 3 "unknown (clock unsynchronized)". Two bits, four codes, **no magnitude field at
  all** - neither TAI-UTC nor UT1-UTC. On the read I got (chars 0-100000, through Section 10), the fetch reports
  that the packet-header variables in Figure 7 "contain no such field" and that nothing visible defines a
  UT1-UTC or TAI-UTC offset in seconds. Corroborated by chrony `ntp.h` lines 69-75, raw read, byte-exact:

```
/* Type definition for leap bits */
typedef enum {
  LEAP_Normal = 0,
  LEAP_InsertSecond = 1,
  LEAP_DeleteSecond = 2,
  LEAP_Unsynchronised = 3
} NTP_Leap;
```

**Instance 4 - the Linux/C `tai_offset`.** Carries **UTC-TAI (TAI minus UTC)**. linuxptp `clock.c` lines 959-963
and 969-971, raw read, byte-exact - the comments are the implementers' own words and they settle it twice:

```
	/* Update TAI-UTC offset of the system clock if valid and traceable. */
	if (c->tds.flags & UTC_OFF_VALID && c->tds.flags & TIME_TRACEABLE &&
	    c->utc_offset_set != utc_offset && c->clkid == CLOCK_REALTIME) {
		sysclk_set_tai_offset(utc_offset);
		c->utc_offset_set = utc_offset;
	}
```

```
	offset.tv_sec = utc_offset;
	offset.tv_nsec = 0;
	/* Local clock is UTC, but master is TAI. */
```

and the sink, `clockadj.c` lines 211-220:

```
void sysclk_set_tai_offset(int offset)
{
	clockid_t clkid = CLOCK_REALTIME;
	struct timex tx;
	memset(&tx, 0, sizeof(tx));
	tx.modes = ADJ_TAI;
	tx.constant = offset;
```

This is the load-bearing identity for the record: the value received in the announce message's
`currentUtcOffset` is assigned straight through to the kernel's `ADJ_TAI` constant. `clock.c` line 895,
`tds.currentUtcOffset = msg->announce.currentUtcOffset;` and line 871 `c->tds.currentUtcOffset = c->utc_offset;`
close the loop in both directions. **The PTP field and the kernel `tai_offset` are the same quantity.**

### (d) Does ANY instance carry UT1-UTC?

**No.** Three carry TAI-UTC (ietf-ptp `current-utc-offset`; the announce `currentUtcOffset`; the Linux
`tai_offset`), and one is a bare 2-bit warning flag with no magnitude (the NTP leap indicator). Nothing I opened
carries UT1-UTC / DUT1. The ietf-ptp module's `leap59`, `leap61`, `time-traceable`, `frequency-traceable` and
`ptp-timescale` leaves are all `type boolean`, i.e. further bare flags, and the module contains no DUT1 leaf:
`grep -i "utc\|tai\|leap"` over the full module returns the 12 lines reproduced or enumerated above and nothing
resembling UT1, DUT1 or a sub-second offset.

### (e) The 32,767 s figure

- **Declared type confirmed:** `type int16` in ietf-ptp; `type int16` in IEEE 802.1AS on the same leaf;
  `Integer16` on the wire in linuxptp's `announce_msg` and `timePropertiesDS`. Three independent routes agree on
  a signed 16-bit field.
- **Does any source PRINT a maximum representable offset? NO.** I can name no number. No source I opened prints
  32,767, or any maximum, or any range. ietf-ptp declares no `range` substatement; IEEE 802.1AS declares no
  `range`; linuxptp declares a C type and a default of 37, not a bound. **These sources DEFINE the field's width;
  they do not state, bound or measure a maximum offset.** The 32,767 s figure follows from YANG's built-in range
  for `int16` (RFC 7950 §9.2.4, which I did not open in this check) applied to the declared type - i.e. it is
  derivation from a type declaration, not a printed quantity. **The entry's labelling of it as its own arithmetic
  is therefore correct and should stay**; it would be a defect to present it as something the module prints.
  Carried uncertainty: none is stated by any source, because no source states the quantity.

### (f) Could a |UT1-UTC| ceiling bite on a UTC-TAI field?

**No. Nothing in anything I opened provides a bridge.** The three offset-bearing fields are declared as TAI-UTC,
and none of the five documents I read mentions UT1, DUT1, Earth-rotation angle, or any sub-second astronomical
offset. There is no conversion, no alias, and no shared field. Positively: linuxptp's
`#define CURRENT_UTC_OFFSET  37` is already ~41x the IERS ceiling on |DUT1| (0.9 s), so a |UT1-UTC| bound applied
to this field would reject the field's own default value - which is the sharpest available demonstration that the
two quantities are not interchangeable. A largest-representable-|UT1-UTC| has no referent on a TAI-UTC field.

## REGIME

- **ietf-ptp@2019-05-07 / RFC 8575.** In its own words: "This YANG module defines a data model for the
  configuration of IEEE Std 1588-2008 clocks, and also for retrieval of the state data of IEEE Std 1588-2008
  clocks." Unit of analysis: a leaf in a NETCONF/YANG data model. Operating condition on this leaf, stated
  twice: present only `when "../current-utc-offset-valid='true'"`, and meaningful only "when ptp-timescale is
  TRUE; otherwise, the value has no meaning." **This is a definition document. It measures nothing.** The claim
  under check is itself definitional, so it sits squarely inside the regime - this is the one kind of claim such
  a source can settle.
- **RFC 5905.** Regime: the NTPv4 on-the-wire packet header. Unit: a 2-bit header field. The claim about the leap
  indicator sits inside it; the read is PARTIAL (Sections 7.3 and Figure 9 covered), so I state the finding only
  for the packet-header variables I read, not for the whole document.
- **IEEE 802.1AS gPTP YANG.** Regime: gPTP, the 802.1AS profile of IEEE 1588, and the leaf is explicitly scoped
  "to the ClockTimeTransmitter entity (i.e., local only, unrelated to a remote GM)." It is therefore an
  IEEE-authored statement about the same named field in a neighbouring profile, **not** IEEE Std 1588's own
  clause 8.2.4.3 text. It supports the direction of the offset; it is not a substitute for the standard.
- **linuxptp / chrony.** Regime: running C implementations, not specifications. They evidence what implementers
  take the field to mean and what the kernel does with it. They are inside the record's own fourth instance
  (the "Linux/C `tai_offset` or equivalent in an open-source time-distribution implementation") by construction.

## DEFECTS FOUND

1. **Truncated quotation presented as the whole declaration (minor, fix the wording).** The entry says the leaf
   is "declared verbatim as 'The offset between TAI and UTC'". The declaration is in fact
   "The offset between TAI and UTC when the epoch of the PTP system is the PTP epoch in units of seconds, i.e.,
   when ptp-timescale is TRUE; otherwise, the value has no meaning." The quoted fragment is verbatim and
   sentence-initial, and the continuation is a condition of applicability rather than a change of quantity, so
   the entry's point survives intact. But the entry should carry the full description, and should say "begins" or
   "opens" rather than imply the string is the entire declaration. **If anything the continuation strengthens the
   entry**: a field that is explicitly meaningless unless `ptp-timescale` is TRUE is even less assimilable to a
   UT1-UTC quantity.
2. **"LEAP COUNT" is the wrong name for the quantity (minor, terminology).** The field carries TAI-UTC, which
   since 1972 equals 10 s plus the accumulated leap seconds - 37 s at 1 Jan 2017, against 27 leap seconds
   inserted by then (that decomposition is MY OWN ARITHMETIC from the printed `37`; no source I opened prints the
   leap count separately). So "the leap count" undercounts by the 1972 epoch offset. This does not touch the
   verdict, since the operative disjunction in the claim is "rather than UT1-UTC", and on that the entry is right.
   Suggested repair: "the accumulated TAI-UTC offset" instead of "the leap count".
3. **Instance 2 rests on proxies, and the entry should say so.** IEEE Std 1588's own text is paywalled and I
   COULD NOT READ it. The finding for the announce field comes from IEEE's 802.1AS YANG module plus linuxptp's
   wire struct and its `37 /* 1 Jan 2017 */` default. The entry should name the route it actually used rather
   than cite the standard as if read. This is a provenance defect, not a substantive one - the two proxies
   converge, and one of them is IEEE-authored.
4. **No defect on the 32,767 figure.** The entry labels it as its own arithmetic, which is exactly right: no
   source prints it. Leave the labelling alone.

## BEARING ON THE LEDGER ENTRY

**The kill stands. Attack 4 leg (a) survives re-testing on the documents.**

The definitional core of leg (a) is confirmed from a byte-exact raw read of the named module: `current-utc-offset`
is `type int16` with no declared range, and its description opens with the exact string the entry quotes and
nowhere departs from TAI-UTC. All four named instances check out as the entry says in substance - three carry
TAI-UTC (ietf-ptp's leaf; the announce-message `currentUtcOffset`, per IEEE's own 802.1AS gloss "Offset from UTC
(TAI - UTC)" and linuxptp's `Integer16 currentUtcOffset` with its `37 /* 1 Jan 2017 */` default; and the Linux
`tai_offset`, which linuxptp assigns straight from the announce field into `tx.modes = ADJ_TAI`) and the fourth,
NTP's leap indicator, is a bare 2-bit flag carrying no magnitude whatever. **No instance carries UT1-UTC.** No
bridge exists in any of these documents by which a largest-representable-|UT1-UTC| could bite on a TAI-UTC field;
linuxptp's own default of 37 s exceeds the IERS |DUT1| ceiling of 0.9 s by more than an order of magnitude, so
such a bound would reject the field's own shipped value.

Therefore: **HOLD the Rejected verdict, and do NOT open a late Gate 4.** The two conditions the brief names for
the kill falling - that the definition is not what the entry says, or that the named instances do carry UT1-UTC -
are both false on the documents.

**Narrow the entry's prose in three places, without touching the verdict:** quote the full description rather
than its first clause (and say "opens with"); replace "the leap count" with "the accumulated TAI-UTC offset";
and state that IEEE Std 1588 itself was not read, naming the 802.1AS module and linuxptp as the routes actually
used for that instance. None of these is a promotion condition - they are copy-edits to a conclusion that the
sources sustain.
