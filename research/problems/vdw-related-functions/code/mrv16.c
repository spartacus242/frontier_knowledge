/* Third exhaustive search for M(3,s), written independently of fcpm.c and mb.c.
   Usage: mrv s T [blk off ...]   (optional fixed assignments: block index blk (0-based) gets offset off)
   Decides whether x_i in [(i-1)s, is-1], i = 1..T, can avoid every 3-AP.
   Blocks are filled in any order: the next block is the open block with the fewest non-forbidden positions
   (cut when some open block has none). With S the chosen set, choosing x forbids, for every a in S,
     2x - a  (x the middle term),  2a - x  (a the middle term),  (a + x)/2 when a = x mod 2  (x an end term).
   Each family is one shifted copy of a maintained bitset: R = {P - a}, D = {2a}, E = {a/2 : a even}, O = {(a-1)/2 : a odd}.
   Prints FOUND with the full choice, or NONE, and the node count. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define W 16                      /* bitsets of up to 1024 bits; D needs 2P + 1 */
typedef struct { uint64_t F[W], R[W], D[W], E[W], O[W]; } state;
static int s, T, P, X[160], chosen[160];
static long long nodes;
static state st[161];
static int get(const uint64_t *b, int p) { return p >= 0 && p < W * 64 && ((b[p >> 6] >> (p & 63)) & 1); }
static void set(uint64_t *b, int p) { b[p >> 6] |= 1ULL << (p & 63); }
/* out |= in shifted by d (bit q of the shifted copy = bit q - d of in), restricted to bits 0..P */
static void orshift(uint64_t *out, const uint64_t *in, int d) {
    uint64_t t[W] = {0};
    if (d >= 0) {
        int ws = d >> 6, b = d & 63;
        for (int i = W - 1; i >= ws; i--) {
            t[i] = in[i - ws] << b;
            if (b && i - ws - 1 >= 0) t[i] |= in[i - ws - 1] >> (64 - b);
        }
    } else {
        int e = -d, ws = e >> 6, b = e & 63;
        for (int i = 0; i + ws < W; i++) {
            t[i] = in[i + ws] >> b;
            if (b && i + ws + 1 < W) t[i] |= in[i + ws + 1] << (64 - b);
        }
    }
    for (int i = 0; i < W; i++) {
        int lo = i * 64;
        if (lo > P) t[i] = 0;
        else if (lo + 64 > P + 1) t[i] &= (1ULL << (P + 1 - lo)) - 1;
        out[i] |= t[i];
    }
}
static void choose(state *to, const state *from, int x) {
    *to = *from;
    orshift(to->F, from->R, 2 * x - P);          /* 2x - a = (P - a) + (2x - P) */
    orshift(to->F, from->D, -x);                 /* 2a - x */
    if (x % 2 == 0) orshift(to->F, from->E, x / 2);          /* (a + x)/2 = a/2 + x/2 */
    else orshift(to->F, from->O, (x + 1) / 2);               /* = (a - 1)/2 + (x + 1)/2 */
    set(to->R, P - x); set(to->D, 2 * x);
    if (x % 2 == 0) set(to->E, x / 2); else set(to->O, (x - 1) / 2);
}
static int TIE = 0;                /* tie-break among equally constrained blocks: 0 first, 1 outermost, 2 innermost */
static int freecount(const uint64_t *F, int j) {
    int p = j * s, w = p >> 6, b = p & 63;
    uint64_t v = F[w] >> b;
    if (b + s > 64) v |= F[w + 1] << (64 - b);
    return s - __builtin_popcountll(v & ((1ULL << s) - 1));
}
static int key(int j) { int d = j < T - 1 - j ? j : T - 1 - j; return TIE == 1 ? d : TIE == 2 ? -d : 0; }
static int rec(int depth) {
    nodes++;
    state *cur = &st[depth];
    int best = -1, bc = s + 1;
    for (int j = 0; j < T; j++) if (!chosen[j]) {
        int c = freecount(cur->F, j);
        if (c == 0) return 0;
        if (c < bc || (c == bc && key(j) < key(best))) { bc = c; best = j; }
    }
    if (best < 0) return 1;
    chosen[best] = 1;
    for (int x = best * s; x < best * s + s; x++) {
        if (get(cur->F, x)) continue;
        choose(&st[depth + 1], cur, x);
        X[best] = x;
        if (rec(depth + 1)) return 1;
    }
    chosen[best] = 0;
    return 0;
}
int main(int argc, char **argv) {
    if (argc < 3 || argc % 2 == 0) { fprintf(stderr, "usage: mrv s T [blk off ...]\n"); return 2; }
    if (getenv("MRV_TIE")) TIE = atoi(getenv("MRV_TIE"));
    s = atoi(argv[1]); T = atoi(argv[2]); P = T * s - 1;
    if (2 * P + 1 > W * 64 || T > 160) return 2;
    memset(&st[0], 0, sizeof(state));
    int depth = 0, ok = 1;
    printf("mrv s=%d T=%d fixed=", s, T);
    for (int a = 3; a + 1 < argc; a += 2) {
        int j = atoi(argv[a]), x = j * s + atoi(argv[a + 1]);
        printf("%d:%s,", j, argv[a + 1]);
        if (chosen[j] || get(st[depth].F, x)) ok = 0;   /* repeated block, or the fixed elements already contain a 3-AP */
        chosen[j] = 1; X[j] = x;
        choose(&st[depth + 1], &st[depth], x); depth++;
    }
    int r = ok && rec(depth);
    printf(" %s nodes=%lld", r ? "FOUND" : "NONE", nodes);
    if (r) { printf(" :"); for (int i = 0; i < T; i++) printf(" %d", X[i]); }
    printf("\n");
    return 0;
}
