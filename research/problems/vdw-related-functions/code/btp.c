/* Plain exhaustive backtracking (no forward checking) for G(3,s) with forced first gaps: x_1 = 0, x_2 = g1, x_3 = g1 + g2.
   Prints the largest size of a 3-AP-free set with all gaps <= s and that prefix. Usage: btp s g1 g2 */
#include <stdio.h>
#include <stdlib.h>
static unsigned char in[8192]; static int X[1024], best = 0, s, g[2]; static long long nodes = 0;
static int ok(int x, int n) { for (int i = n - 1; i >= 0; i--) { int a = 2*X[i] - x; if (a < 0) break; if (in[a]) return 0; } return 1; }
static void rec(int n) {
    nodes++; if (n > best) best = n;
    int lo, hi;
    if (n == 0) lo = hi = 0; else if (n <= 2) lo = hi = X[n-1] + g[n-1]; else { lo = X[n-1] + 1; hi = X[n-1] + s; }
    for (int x = lo; x <= hi; x++) if (ok(x, n)) { in[x] = 1; X[n] = x; rec(n + 1); in[x] = 0; }
}
int main(int argc, char **argv) { s = atoi(argv[1]); g[0] = atoi(argv[2]); g[1] = atoi(argv[3]); rec(0);
    printf("s=%d g1=%d g2=%d max=%d nodes=%lld\n", s, g[0], g[1], best, nodes); return 0; }
