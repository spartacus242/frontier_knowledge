/* Independent exhaustive backtracking for M(3,s) and G(3,s) (Brown-Landman-Robertson).
   mode M: pick x_i in block [(i-1)s, is-1] for i=1,2,...; mode G: x_1 = 0, x_{i+1} in [x_i+1, x_i+s].
   Prints the largest n reached (a 3-AP-free choice of n elements); the function value is that n + 1.
   Usage: bt M|G s [target]  -- with target, stops as soon as depth target is reached. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXP 4096
static unsigned char in[MAXP]; static int X[1024], best = 0, s, target = 0; static char mode;
static long long nodes = 0;
static int ok(int x, int n) {            /* x larger than all chosen: no a<b chosen with b-a = x-b */
    for (int i = n - 1; i >= 0; i--) { int b = X[i]; int a = 2*b - x; if (a < 0) break; if (in[a]) return 0; }
    return 1;
}
static void rec(int n) {
    nodes++;
    if (n > best) { best = n; printf("depth %d:", n); for (int i = 0; i < n; i++) printf(" %d", X[i]); printf("\n"); fflush(stdout);
        if (target && best >= target) exit(0); }
    int lo, hi;
    if (mode == 'M') { lo = n*s; hi = n*s + s - 1; } else { if (n == 0) { lo = hi = 0; } else { lo = X[n-1] + 1; hi = X[n-1] + s; } }
    for (int x = lo; x <= hi; x++) if (ok(x, n)) { in[x] = 1; X[n] = x; rec(n + 1); in[x] = 0; }
}
int main(int argc, char **argv) {
    mode = argv[1][0]; s = atoi(argv[2]); if (argc > 3) target = atoi(argv[3]);
    rec(0); printf("DONE max n = %d, value = %d, nodes = %lld\n", best, best + 1, nodes); return 0;
}
