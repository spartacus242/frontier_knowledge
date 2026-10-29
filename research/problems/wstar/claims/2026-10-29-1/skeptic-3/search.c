/* Exhaustive DFS for "good" s-colourings of [1,n]: no 3-AP a,a+d,a+2d with
   chi(a+d)-chi(a) == chi(a+2d)-chi(a+d).  Usage: search n s K startidx
   Enumerates good prefixes of length K (chi[1] <= ceil(s/2) by colour-reversal
   symmetry), indexes them 0,1,2,..., and for each prefix with index >= startidx
   runs a full DFS to length n, printing "PREFIX idx count" (count = number of
   good colourings of [1,n] extending that prefix) and any found colouring (up to
   a limit).  Output is flushed per prefix so it can be resumed from idx. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int n,s,K; static int chi[200]; static long long found=0, printed=0;
static long long prefix_idx=0, startidx=0;
static unsigned forb(int c){ /* forbidden colour mask for position c (1-indexed) */
  unsigned m=0; for(int d=1; c-2*d>=1; d++){ int v=2*chi[c-d]-chi[c-2*d]; if(v>=1&&v<=s) m|=1u<<v; } return m; }
static void full(int c){
  if(c>n){ found++; if(printed<5){ printed++; printf("FOUND "); for(int i=1;i<=n;i++) putchar('0'+chi[i]); putchar('\n'); } return; }
  unsigned m=forb(c);
  for(int v=1; v<=s; v++) if(!(m&(1u<<v))){ chi[c]=v; full(c+1); }
}
static void pre(int c){
  if(c>K){ if(prefix_idx>=startidx){ long long before=found; full(K+1); printf("PREFIX %lld %lld\n",prefix_idx,found-before); fflush(stdout);} prefix_idx++; return; }
  unsigned m=forb(c); int hi = (c==1)? (s+1)/2 : s;
  for(int v=1; v<=hi; v++) if(!(m&(1u<<v))){ chi[c]=v; pre(c+1); }
}
int main(int argc,char**argv){ n=atoi(argv[1]); s=atoi(argv[2]); K=atoi(argv[3]); startidx=argc>4?atoll(argv[4]):0;
  if(K>n) K=n; pre(1); printf("DONE n=%d s=%d prefixes=%lld found=%lld\n",n,s,prefix_idx,found); return 0; }
