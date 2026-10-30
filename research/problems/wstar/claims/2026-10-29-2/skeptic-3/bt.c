/* Exhaustive backtracking search for "good" s-colourings of [1,n]:
   no 3-AP a<b<c (b-a=c-b) with chi(b)-chi(a)==chi(c)-chi(b).
   Colours 0..s-1 internally (printed as 1..s).
   Symmetry used: colour reversal c -> s-1-c, so position 0 gets colour <= (s-1)/2.
   Resumable: the search is split by the first K positions (prefixes); each
   completed prefix is appended to the state file with its node count and
   number of good colourings found. Prefixes already in the state file are skipped.
   usage: bt n s K statefile [maxprint]
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static int n, s, K;
static int col[256];
static unsigned long long nodes, found;
static int maxprint = 5;
static int stopfirst = 0;
static FILE *out;

/* colours of positions 0..i-1 assigned; try to place colour c at i:
   check all APs (i-2d, i-d, i) for d>=1 */
static inline int ok(int i, int c) {
    for (int d = 1; i - 2 * d >= 0; d++) {
        int c1 = col[i - 2 * d], c2 = col[i - d];
        if (c2 - c1 == c - c2) return 0;
    }
    return 1;
}

static void rec(int i) {
    nodes++;
    if (i == n) {
        found++;
        if (found <= (unsigned long long)maxprint) {
            fprintf(out, "GOOD ");
            for (int j = 0; j < n; j++) fputc('1' + col[j], out);
            fputc('\n', out); fflush(out);
        }
        if (stopfirst) { fprintf(out, "STOPPED AT FIRST GOOD COLOURING\n"); exit(0); }
        return;
    }
    int cmax = (i == 0) ? (s - 1) / 2 : s - 1;
    for (int c = 0; c <= cmax; c++) {
        if (ok(i, c)) { col[i] = c; rec(i + 1); }
    }
}

int main(int argc, char **argv) {
    if (argc < 5) { fprintf(stderr, "usage: bt n s K statefile [maxprint]\n"); return 2; }
    n = atoi(argv[1]); s = atoi(argv[2]); K = atoi(argv[3]);
    const char *sf = argv[4];
    if (argc > 5) maxprint = atoi(argv[5]);
    if (argc > 6 && !strcmp(argv[6], "stop")) stopfirst = 1;
    out = stdout; const char *onlycube = getenv("ONLYCUBE");
    /* read done prefixes */
    static char done[200000][32]; int ndone = 0;
    FILE *f = fopen(sf, "r");
    if (f) { char line[256];
        while (fgets(line, sizeof line, f)) { if (sscanf(line, "%31s", done[ndone]) == 1) ndone++; }
        fclose(f); }
    fprintf(out, "n=%d s=%d K=%d already-done prefixes=%d\n", n, s, K, ndone); fflush(out);
    /* enumerate prefixes of length K (as colourings of positions 0..K-1) */
    long total = 1; for (int i = 0; i < K; i++) total *= s;
    unsigned long long tnodes = 0, tfound = 0; long npre = 0, nskip = 0;
    time_t t0 = time(NULL);
    for (long p = 0; p < total; p++) {
        long q = p; char key[32];
        for (int i = K - 1; i >= 0; i--) { col[i] = q % s; q /= s; }
        for (int i = 0; i < K; i++) key[i] = '1' + col[i]; key[K] = 0;
        if (onlycube && strcmp(onlycube, key)) continue;
        if (col[0] > (s - 1) / 2) continue;      /* symmetry */
        int good = 1;
        for (int i = 1; i < K && good; i++) if (!ok(i, col[i])) good = 0;
        if (!good) continue;                      /* prefix itself bad: 0 nodes below */
        npre++;
        int skip = 0; for (int j = 0; j < ndone; j++) if (!strcmp(done[j], key)) { skip = 1; break; }
        if (skip) { nskip++; continue; }
        nodes = 0; found = 0;
        time_t t1 = time(NULL);
        rec(K);
        tnodes += nodes; tfound += found;
        FILE *g = fopen(sf, "a");
        fprintf(g, "%s nodes=%llu found=%llu secs=%ld\n", key, nodes, found, (long)(time(NULL) - t1));
        fclose(g);
        fprintf(out, "prefix %s nodes=%llu found=%llu secs=%ld elapsed=%ld\n", key, nodes, found,
                (long)(time(NULL) - t1), (long)(time(NULL) - t0)); fflush(out);
    }
    fprintf(out, "DONE: live prefixes=%ld (skipped as already done=%ld) nodes this run=%llu found this run=%llu total secs=%ld\n",
            npre, nskip, tnodes, tfound, (long)(time(NULL) - t0));
    return 0;
}
