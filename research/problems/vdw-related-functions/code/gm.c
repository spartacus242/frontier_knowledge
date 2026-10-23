/* Middle-out exhaustive search for G(3,s) (Brown-Landman-Robertson), written independently of fcp.c.
   Usage: gm s T [gl gr [gl2 gr2]]
   Decides whether some 3-AP-free x_1 < ... < x_T with all gaps x_{i+1} - x_i <= s exists.
   The middle element x_m, m = ceil(T/2), is placed at 0 (translation); the left side then needs m - 1 more elements and the
   right side T - m. Optional arguments fix the first gap on each side (gl = x_m - x_{m-1}, gr = x_{m+1} - x_m) and then the
   second ones. Each step extends the side with fewer usable positions within reach (most constrained first). Choosing x
   forbids 2x - a, 2a - x and (a + x)/2 for every chosen a. A side that still needs r elements dies if s consecutive forbidden
   positions lie within r - 1 of its frontier (the side must cross them). Prints FOUND with the sequence, or NONE. */
#include <stdio.h>
#include <stdlib.h>
#define MAXT 128
#define MAXS 16
#define OFF (MAXT * MAXS)
#define LEN (2 * OFF + 1)
static int s, T, need[2], fr[2], S[MAXT], ns, fix[2][2], nfix[2], cnt[2];
static int forb[LEN];
static long long nodes;
static unsigned SEED = 0;   /* GM_SEED: randomise the gap order (witness hunting only; the search stays complete) */
static int ORD = 0, m0, m1;   /* side order: 0 most constrained, 1 balanced, 2 one side first */
static void mark(int x, int d) {
    for (int i = 0; i < ns; i++) {
        int a = S[i], p;
        p = 2 * x - a; if (p >= -OFF && p <= OFF) forb[p + OFF] += d;
        p = 2 * a - x; if (p >= -OFF && p <= OFF) forb[p + OFF] += d;
        if (((a + x) & 1) == 0) forb[(a + x) / 2 + OFF] += d;
    }
}
static int F(int p) { return p < -OFF || p > OFF || forb[p + OFF]; }
static int LM[MAXT + 1];          /* LM[k] <= least N such that a 3-AP-free k-subset of N consecutive integers exists */
static int USE_LM = 1;
static int lst[2][MAXT], nl[2];   /* elements added on each side, in order (moving away from 0) */
static int span_needed(int side) {  /* how far past the frontier the side must still reach */
    int r = need[side], x = fr[side], best = r;
    if (!USE_LM) return best;
    /* every chosen a, together with the c - 1 chosen elements between a and x (c counts a and x) and the r still to come,
       forms a 3-AP-free set of c + r elements: so the end lies at least LM[c + r] - 1 beyond a */
    int o = 1 - side, c = 0;
    for (int i = nl[side] - 1; i >= 0; i--) {          /* anchors on this side, nearest the frontier first */
        c++; int d = LM[c + r] - 1 - (side ? x - lst[side][i] : lst[side][i] - x); if (d > best) best = d;
    }
    c++; { int d = LM[c + r] - 1 - (side ? x : -x); if (d > best) best = d; }   /* the middle element 0 */
    for (int i = 0; i < nl[o]; i++) {                    /* anchors on the other side */
        c++; int d = LM[c + r] - 1 - (side ? x - lst[o][i] : lst[o][i] - x); if (d > best) best = d;
    }
    return best;
}
static int dead(int side) {       /* side 0 extends to the left, 1 to the right */
    int r = need[side], x = fr[side], run = 0;
    if (r == 0) return 0;
    int E = span_needed(side);
    if (E > r * s) return 1;       /* r more gaps of at most s cannot reach that far */
    for (int k = 1; k < E; k++) {
        int p = side ? x + k : x - k;
        if (F(p)) { if (++run >= s) return 1; } else run = 0;
    }
    return 0;
}
static int options(int side) {
    int c = 0;
    for (int g = 1; g <= s; g++) c += !F(side ? fr[side] + g : fr[side] - g);
    return c;
}
static int rec(void) {
    nodes++;
    if (need[0] == 0 && need[1] == 0) return 1;
    int side;
    if (need[0] && cnt[0] < nfix[0]) side = 0;              /* fixed gaps first */
    else if (need[1] && cnt[1] < nfix[1]) side = 1;
    else if (!need[0]) side = 1;
    else if (!need[1]) side = 0;
    else if (ORD == 1) side = (m0 - need[0]) <= (m1 - need[1]) ? 0 : 1;   /* balanced: extend the shorter side */
    else if (ORD == 2) side = 0;                                          /* left side first */
    else side = options(0) <= options(1) ? 0 : 1;
    int lo = 1, hi = s;
    if (cnt[side] < nfix[side]) lo = hi = fix[side][cnt[side]];
    int old = fr[side];
    int perm[MAXS + 1], np = 0;
    for (int g = lo; g <= hi; g++) perm[np++] = g;
    if (SEED) for (int i = np - 1; i > 0; i--) { int j = rand() % (i + 1), t = perm[i]; perm[i] = perm[j]; perm[j] = t; }
    for (int q = 0; q < np; q++) {
        int g = perm[q];
        int x = side ? old + g : old - g;
        if (F(x)) continue;
        mark(x, 1); S[ns++] = x; fr[side] = x; need[side]--; cnt[side]++; lst[side][nl[side]++] = x;
        if (!dead(0) && !dead(1) && rec()) return 1;
        nl[side]--; cnt[side]--; need[side]++; fr[side] = old; ns--; mark(x, -1);
    }
    return 0;
}
int main(int argc, char **argv) {
    if (argc < 3) { fprintf(stderr, "usage: gm s T [gl gr [gl2 gr2]]\n"); return 2; }
    s = atoi(argv[1]); T = atoi(argv[2]);
    if (s > MAXS || T > MAXT || T < 2) return 2;
    for (int a = 3, k = 0; a + 1 < argc && k < 2; a += 2, k++) {
        fix[0][k] = atoi(argv[a]); fix[1][k] = atoi(argv[a + 1]); nfix[0] = nfix[1] = k + 1;
    }
    {   /* exact values Lmin(1..K) from lmin.out (written by lmin.c); beyond K a safe lower bound */
        FILE *f = fopen(getenv("GM_LMIN") ? getenv("GM_LMIN") : "lmin.out", "r"); int k, v, K = 0;
        if (getenv("GM_NOLM")) USE_LM = 0;
        LM[0] = 0; LM[1] = 1;
        while (f && fscanf(f, "%d %d", &k, &v) == 2 && k == K + 1 && k <= MAXT) { LM[k] = v; K = k; }
        if (f) fclose(f);
        if (K < 2) { K = 1; }
        for (k = K + 1; k <= MAXT; k++) {   /* Lmin(a + b) >= Lmin(a) + Lmin(b) - 1 */
            int b = LM[k - 1] + 1;
            for (int a = 1; a < k; a++) if (LM[a] + LM[k - a] - 1 > b) b = LM[a] + LM[k - a] - 1;
            LM[k] = b;
        }
    }
    int m = (T + 1) / 2;
    need[0] = m - 1; need[1] = T - m; m0 = need[0]; m1 = need[1];
    if (getenv("GM_ORD")) ORD = atoi(getenv("GM_ORD"));
    if (getenv("GM_SEED")) { SEED = (unsigned)atoi(getenv("GM_SEED")); srand(SEED); } fr[0] = fr[1] = 0; S[ns++] = 0;
    if (need[0] < nfix[0]) nfix[0] = need[0];
    if (need[1] < nfix[1]) nfix[1] = need[1];
    int r = rec();
    printf("gm s=%d T=%d fix=", s, T);
    for (int k = 0; k < nfix[0] || k < nfix[1]; k++) printf("%d/%d,", fix[0][k], fix[1][k]);
    printf(" %s nodes=%lld", r ? "FOUND" : "NONE", nodes);
    if (r) {
        int mn = 0; for (int i = 0; i < ns; i++) if (S[i] < mn) mn = S[i];
        /* print sorted, translated so x_1 = 0 */
        int out[MAXT], n = 0;
        for (int p = mn; n < ns; p++) for (int i = 0; i < ns; i++) if (S[i] == p) out[n++] = p - mn;
        printf(" :"); for (int i = 0; i < n; i++) printf(" %d", out[i]);
    }
    printf("\n");
    return 0;
}
