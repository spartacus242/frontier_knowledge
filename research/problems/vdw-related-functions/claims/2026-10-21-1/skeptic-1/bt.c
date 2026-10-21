/* Independent exhaustive backtrack (second method, no SAT).
   usage: bt M s n   -> does a 3-AP-free X exist with x_i in [(i-1)s, is-1], i=1..n ?
          bt G s n   -> does a 3-AP-free set of n integers with x1=0, gaps <= s exist?
   Forward checking: forb[p]=1 if p = 2*b - a for chosen a<b (would complete an AP as largest).
   Also prune M if some future block is entirely forbidden. Prints a witness if found, plus node count. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXP 4096
static int s, n, mode;
static int x[256];
static int forb[MAXP];  /* counter */
static long long nodes;
static int top;

static int block_ok(int from) {
    if (mode != 'M') return 1;
    for (int i = from; i <= n; i++) {
        int lo = (i-1)*s, hi = i*s-1, any = 0;
        for (int p = lo; p <= hi; p++) if (!forb[p]) { any = 1; break; }
        if (!any) return 0;
    }
    return 1;
}

static int dfs(int i) { /* place x_i, 1-indexed; x[1..i-1] placed */
    nodes++;
    if (i > n) return 1;
    int lo, hi;
    if (mode == 'M') { lo = (i-1)*s; hi = i*s-1; }
    else { if (i == 1) { lo = hi = 0; } else { lo = x[i-1]+1; hi = x[i-1]+s; } }
    for (int p = lo; p <= hi; p++) {
        if (forb[p]) continue;
        x[i] = p;
        for (int j = 1; j < i; j++) { int q = 2*p - x[j]; if (q < top) forb[q]++; }
        int ok = block_ok(i+1);
        if (ok && dfs(i+1)) return 1;
        for (int j = 1; j < i; j++) { int q = 2*p - x[j]; if (q < top) forb[q]--; }
    }
    return 0;
}

int main(int argc, char **argv) {
    mode = argv[1][0]; s = atoi(argv[2]); n = atoi(argv[3]);
    top = n*s + 2; if (top > MAXP) return 2;
    memset(forb, 0, sizeof forb);
    int r = dfs(1);
    printf("%c s=%d n=%d : %s  nodes=%lld", mode, s, n, r ? "EXISTS" : "NONE", nodes);
    if (r) { printf("  witness:"); for (int i = 1; i <= n; i++) printf(" %d", x[i]); }
    printf("\n");
    return 0;
}
