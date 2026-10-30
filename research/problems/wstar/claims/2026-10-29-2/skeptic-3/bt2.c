/* Exhaustive CSP search (forward checking + unit propagation + MRV ordering)
   for "good" s-colourings of [1,n]: no 3-AP x<y<z (y-x=z-y) with
   chi(y)-chi(x) == chi(z)-chi(y).
   Symmetry used: colour reversal c -> s-1-c  =>  position 0 colour <= (s-1)/2.
   Resumable: the search is split by the colouring of the first K positions
   (cubes); each finished cube is appended to the state file; cubes present in
   the state file are skipped on relaunch.
   usage: bt2 n s K statefile [maxprint] [stop]
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXN 128
static int n, s, K, maxprint = 5, stopfirst = 0;
static int order_mode = 0; static int order[MAXN];
static int col[MAXN];              /* -1 if unassigned */
static unsigned dom[MAXN];         /* bitmask of allowed colours */
static int nap;                    /* number of APs */
static int apx[8192], apy[8192], apz[8192];
static int aps_of[MAXN][256], naps_of[MAXN];   /* indices of APs containing p */
static unsigned long long nodes, found;
/* trail */
static int tr_p[1 << 20]; static unsigned tr_d[1 << 20]; static int tr_c[1 << 20]; static int tr_n;
static int queue[MAXN]; static int qn;
static FILE *out;

static int full;
static inline int popc(unsigned x) { return __builtin_popcount(x); }

static int remove_colour(int p, int c) {        /* returns 0 on wipe-out */
    if (c < 0 || c >= s) return 1;
    if (!(dom[p] & (1u << c))) return 1;
    tr_p[tr_n] = p; tr_d[tr_n] = dom[p]; tr_c[tr_n] = col[p]; tr_n++;
    dom[p] &= ~(1u << c);
    if (dom[p] == 0) return 0;
    if (popc(dom[p]) == 1 && col[p] < 0) {    /* unit: schedule assignment */
        int cc = __builtin_ctz(dom[p]);
        tr_p[tr_n] = p; tr_d[tr_n] = dom[p]; tr_c[tr_n] = col[p]; tr_n++;
        col[p] = cc; queue[qn++] = p;
    }
    return 1;
}

/* process the queue of newly assigned positions; returns 0 on conflict */
static int propagate(void) {
    while (qn > 0) {
        int p = queue[--qn];
        int cp = col[p];
        for (int t = 0; t < naps_of[p]; t++) {
            int a = aps_of[p][t];
            int x = apx[a], y = apy[a], z = apz[a];
            int cx = col[x], cy = col[y], cz = col[z];
            int unk = (cx < 0) + (cy < 0) + (cz < 0);
            if (unk == 0) {
                if (cy - cx == cz - cy) return 0;
            } else if (unk == 1) {
                if (cz < 0) { if (!remove_colour(z, 2 * cy - cx)) return 0; }
                else if (cx < 0) { if (!remove_colour(x, 2 * cy - cz)) return 0; }
                else { int sum = cx + cz; if (!(sum & 1)) { if (!remove_colour(y, sum / 2)) return 0; } }
            }
        }
        (void)cp;
    }
    return 1;
}

static void undo_to(int mark) {
    while (tr_n > mark) {
        tr_n--;
        dom[tr_p[tr_n]] = tr_d[tr_n]; col[tr_p[tr_n]] = tr_c[tr_n];
    }
    qn = 0;
}

static int assign(int p, int c) {   /* assign and propagate; 0 on conflict */
    tr_p[tr_n] = p; tr_d[tr_n] = dom[p]; tr_c[tr_n] = col[p]; tr_n++;
    dom[p] = 1u << c; col[p] = c; qn = 0; queue[qn++] = p;
    return propagate();
}

static void rec(void) {
    nodes++;
    /* MRV: pick unassigned position with smallest domain */
    int best = -1, bsz = 99;
    if (order_mode == 0) {
        for (int p = 0; p < n; p++) if (col[p] < 0) {
            int sz = popc(dom[p]);
            if (sz < bsz) { bsz = sz; best = p; if (sz <= 2) break; }
        }
    } else {   /* static order; but take any unit (domain size 1) first */
        for (int t = 0; t < n; t++) { int p = order[t]; if (col[p] < 0) { best = p; break; } }
    }
    if (best < 0) {
        found++;
        if (found <= (unsigned long long)maxprint) {
            fprintf(out, "GOOD "); for (int j = 0; j < n; j++) fputc('1' + col[j], out);
            fputc('\n', out); fflush(out);
        }
        if (stopfirst) { fprintf(out, "STOPPED AT FIRST GOOD COLOURING\n"); fflush(out); exit(0); }
        return;
    }
    unsigned d = dom[best];
    while (d) {
        int c = __builtin_ctz(d); d &= d - 1;
        int mark = tr_n;
        if (assign(best, c)) rec();
        undo_to(mark);
    }
}

int main(int argc, char **argv) {
    if (argc < 5) { fprintf(stderr, "usage: bt2 n s K statefile [maxprint] [stop]\n"); return 2; }
    n = atoi(argv[1]); s = atoi(argv[2]); K = atoi(argv[3]); const char *sf = argv[4];
    if (argc > 5) maxprint = atoi(argv[5]);
    if (argc > 6 && !strcmp(argv[6], "stop")) stopfirst = 1;
    out = stdout; const char *onlycube = getenv("ONLYCUBE");
    if (getenv("ORDER")) order_mode = atoi(getenv("ORDER"));
    if (order_mode == 1) { for (int i = 0; i < n; i++) order[i] = i; }           /* left to right */
    if (order_mode == 2) { int m = n / 2, t = 0; order[t++] = m;                  /* centre out */
        for (int d = 1; t < n; d++) { if (m - d >= 0) order[t++] = m - d; if (m + d < n && t < n) order[t++] = m + d; } } full = (1 << s) - 1;
    nap = 0;
    for (int d = 1; 2 * d < n; d++) for (int x = 0; x + 2 * d < n; x++) {
        apx[nap] = x; apy[nap] = x + d; apz[nap] = x + 2 * d;
        aps_of[x][naps_of[x]++] = nap; aps_of[x + d][naps_of[x + d]++] = nap; aps_of[x + 2 * d][naps_of[x + 2 * d]++] = nap;
        nap++;
    }
    static char done[400000][40]; int ndone = 0;
    FILE *f = fopen(sf, "r");
    if (f) { char line[256]; while (fgets(line, sizeof line, f)) if (sscanf(line, "%39s", done[ndone]) == 1) ndone++; fclose(f); }
    fprintf(out, "n=%d s=%d K=%d APs=%d already-done cubes=%d\n", n, s, K, nap, ndone); fflush(out);
    long total = 1; for (int i = 0; i < K; i++) total *= s;
    unsigned long long tnodes = 0, tfound = 0; long live = 0, nskip = 0;
    time_t t0 = time(NULL);
    int pre[MAXN];
    for (long p = 0; p < total; p++) {
        long q = p; char key[64];
        for (int i = K - 1; i >= 0; i--) { pre[i] = q % s; q /= s; }
        for (int i = 0; i < K; i++) key[i] = '1' + pre[i]; key[K] = 0;
        if (onlycube && strcmp(onlycube, key)) continue;
        if (pre[0] > (s - 1) / 2) continue;
        /* init */
        for (int i = 0; i < n; i++) { col[i] = -1; dom[i] = full; }
        tr_n = 0; qn = 0;
        int ok = 1;
        for (int i = 0; i < K && ok; i++) {
            if (!(dom[i] & (1u << pre[i]))) { ok = 0; break; }
            if (col[i] >= 0) { if (col[i] != pre[i]) ok = 0; continue; }
            if (!assign(i, pre[i])) ok = 0;
        }
        if (!ok) continue;             /* cube refuted by propagation: no colouring below */
        live++;
        int skip = 0; for (int j = 0; j < ndone; j++) if (!strcmp(done[j], key)) { skip = 1; break; }
        if (skip) { nskip++; continue; }
        nodes = 0; found = 0; time_t t1 = time(NULL);
        rec();
        tnodes += nodes; tfound += found;
        FILE *g = fopen(sf, "a");
        fprintf(g, "%s nodes=%llu found=%llu secs=%ld\n", key, nodes, found, (long)(time(NULL) - t1)); fclose(g);
        fprintf(out, "cube %s nodes=%llu found=%llu secs=%ld elapsed=%ld\n", key, nodes, found,
                (long)(time(NULL) - t1), (long)(time(NULL) - t0)); fflush(out);
    }
    fprintf(out, "DONE: live cubes=%ld (skipped as already done=%ld) nodes this run=%llu found this run=%llu secs=%ld\n",
            live, nskip, tnodes, tfound, (long)(time(NULL) - t0));
    return 0;
}
