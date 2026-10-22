/* Second, independently written exhaustive search for M(3,s) (one element per block, no 3-term AP).
   Usage: mb s T alast [a0 a1 ...]
   Decides whether x_i in [(i-1)s, is-1], i = 1..T, can avoid every 3-AP, with the LAST block's offset fixed to alast
   (x_T = (T-1)s + alast) and the first blocks' offsets optionally fixed to a0, a1, ....
   Differs from fcpm.c: positions are a bitset; the forbidden set is updated with one shifted copy of the reversed chosen
   set (2x - a = (P - a) + (2x - P), P = Ts - 1); the last element is placed first, so every chosen x also forbids the
   midpoint (x + x_T)/2 and any branch that forbids x_T itself is cut.
   Reflection x -> P - x maps offset a in block i to offset s-1-a in block T-1-i; mbsym.sh uses it to skip half the cubes. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define W 8                       /* up to 512 positions */
typedef uint64_t bs[W];
static int s, T, P, xl, npre, pre[32], X[128];
static long long nodes;
static bs F[128], R[128];
static int get(const uint64_t *b, int p) { return (b[p >> 6] >> (p & 63)) & 1; }
static void set(uint64_t *b, int p) { b[p >> 6] |= 1ULL << (p & 63); }
/* out |= (in shifted by d), keeping bits 0..P */
static void orshift(uint64_t *out, const uint64_t *in, int d) {
    uint64_t t[W] = {0};
    if (d >= 0) {                   /* left shift: t bit q = in bit q - d */
        int ws = d >> 6, bsh = d & 63;
        for (int i = W - 1; i >= ws; i--) {
            t[i] = in[i - ws] << bsh;
            if (bsh && i - ws - 1 >= 0) t[i] |= in[i - ws - 1] >> (64 - bsh);
        }
    } else {                        /* right shift by e = -d: t bit q = in bit q + e */
        int e = -d, ws = e >> 6, bsh = e & 63;
        for (int i = 0; i + ws < W; i++) {
            t[i] = in[i + ws] >> bsh;
            if (bsh && i + ws + 1 < W) t[i] |= in[i + ws + 1] << (64 - bsh);
        }
    }
    int top = P + 1;                /* keep bits 0..P only */
    for (int i = 0; i < W; i++) {
        int lo = i * 64;
        if (lo >= top) t[i] = 0;
        else if (lo + 64 > top) t[i] &= (1ULL << (top - lo)) - 1;
        out[i] |= t[i];
    }
}
static int blockfull(const uint64_t *b, int j) {
    for (int k = j * s; k < j * s + s; k++) if (!get(b, k)) return 0;
    return 1;
}
static int rec(int n) {           /* blocks 0..n-1 chosen; state F[n], R[n] */
    nodes++;
    if (n == T - 1) return 1;
    int lo = n * s, hi = lo + s - 1;
    if (n < npre) lo = hi = n * s + pre[n];
    for (int x = lo; x <= hi; x++) {
        if (get(F[n], x)) continue;
        memcpy(F[n + 1], F[n], sizeof(bs));
        memcpy(R[n + 1], R[n], sizeof(bs));
        orshift(F[n + 1], R[n], 2 * x - P);
        if ((x + xl) % 2 == 0) set(F[n + 1], (x + xl) / 2);
        set(R[n + 1], P - x);
        if (get(F[n + 1], xl)) continue;
        int bad = 0;
        for (int j = n + 1; j < T - 1 && !bad; j++) bad = blockfull(F[n + 1], j);
        if (bad) continue;
        X[n] = x;
        if (rec(n + 1)) return 1;
    }
    return 0;
}
int main(int argc, char **argv) {
    if (argc < 4) { fprintf(stderr, "usage: mb s T alast [a0 a1 ...]\n"); return 2; }
    s = atoi(argv[1]); T = atoi(argv[2]); P = T * s - 1;
    if (P + 1 > W * 64 || T > 120) return 2;
    xl = (T - 1) * s + atoi(argv[3]);
    for (int a = 4; a < argc && npre < 32; a++) pre[npre++] = atoi(argv[a]);
    memset(F[0], 0, sizeof(bs)); memset(R[0], 0, sizeof(bs));
    int r = rec(0);
    printf("mb s=%d T=%d alast=%d pre=", s, T, xl - (T - 1) * s);
    for (int a = 0; a < npre; a++) printf("%d,", pre[a]);
    printf(" %s nodes=%lld", r ? "FOUND" : "NONE", nodes);
    if (r) { printf(" :"); for (int i = 0; i < T - 1; i++) printf(" %d", X[i]); printf(" %d", xl); }
    printf("\n");
    return 0;
}
