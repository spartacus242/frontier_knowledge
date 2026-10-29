/* Exhaustive search for good s-colourings of [1,n] (no 3-AP a,a+d,a+2d with
   chi(a+d)-chi(a) == chi(a+2d)-chi(a+d)), with forward checking and dynamic
   most-constrained-variable ordering.  Cubes: all good assignments of positions
   1..K (with chi[1] <= ceil(s/2) by the colour-reversal symmetry c -> s+1-c,
   which preserves goodness) are enumerated statically and indexed; each cube
   >= startidx is searched to completion and a line "CUBE idx prefix count nodes"
   is printed and flushed, so a killed run can be resumed from the last idx.
   Usage: dfs2 n s K [startidx] [maxprint] */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 128
static int n,s,K; static int chi[MAXN+1]; static unsigned forb[MAXN+1]; static int assigned[MAXN+1];
static unsigned FULL; static long long found=0, nodes=0, printed=0, maxprint=3;
/* undo stack: (pos, oldmask) */
static int upos[MAXN*MAXN*4]; static unsigned umask[MAXN*MAXN*4]; static int usp=0;
static int addforb(int p, int v){ /* forbid colour v at position p; return 1 if p becomes dead */
  if(p<1||p>n||assigned[p]||v<1||v>s) return 0;
  unsigned b=1u<<v; if(forb[p]&b) return 0;
  upos[usp]=p; umask[usp]=forb[p]; usp++; forb[p]|=b; return forb[p]==FULL; }
static int assign(int c,int v){ /* returns 1 if ok, 0 if some position dead; always pushes undo */
  chi[c]=v; assigned[c]=1; int dead=0;
  for(int q=1;q<=n;q++) if(assigned[q]&&q!=c){
    int r=2*c-q; if(addforb(r,2*v-chi[q])) dead=1;
    int r2=2*q-c; if(addforb(r2,2*chi[q]-v)) dead=1;
    if(((c+q)&1)==0 && ((v+chi[q])&1)==0){ if(addforb((c+q)/2,(v+chi[q])/2)) dead=1; } }
  return !dead; }
static void undo(int c,int sp){ while(usp>sp){ usp--; forb[upos[usp]]=umask[usp]; } assigned[c]=0; }
static void rec(int left){
  nodes++;
  if(left==0){ found++; if(printed<maxprint){ printed++; printf("FOUND "); for(int i=1;i<=n;i++) putchar('0'+chi[i]); putchar('\n'); fflush(stdout);} return; }
  /* pick unassigned position with fewest allowed colours */
  int best=-1, bestc=99;
  for(int p=1;p<=n;p++) if(!assigned[p]){ int cnt=s-__builtin_popcount(forb[p]); if(cnt<bestc){bestc=cnt;best=p; if(cnt<=1) break;} }
  if(bestc==0) return;
  for(int v=1;v<=s;v++) if(!(forb[best]&(1u<<v))){ int sp=usp; if(assign(best,v)) rec(left-1); undo(best,sp); }
}
static long long cube_idx=0, startidx=0;
static void pre(int c){
  if(c>K){ if(cube_idx>=startidx){ long long f0=found,n0=nodes; rec(n-K); printf("CUBE %lld ",cube_idx); for(int i=1;i<=K;i++) putchar('0'+chi[i]); printf(" %lld %lld\n",found-f0,nodes-n0); fflush(stdout);} cube_idx++; return; }
  int hi=(c==1)?(s+1)/2:s;
  for(int v=1;v<=hi;v++) if(!(forb[c]&(1u<<v))){ int sp=usp; if(assign(c,v)) pre(c+1); undo(c,sp); }
}
int main(int argc,char**argv){ n=atoi(argv[1]); s=atoi(argv[2]); K=atoi(argv[3]); startidx=argc>4?atoll(argv[4]):0; if(argc>5) maxprint=atoll(argv[5]);
  if(K>n)K=n; FULL=0; for(int v=1;v<=s;v++) FULL|=1u<<v;
  pre(1); printf("DONE n=%d s=%d K=%d cubes=%lld found=%lld nodes=%lld\n",n,s,K,cube_idx,found,nodes); return 0; }
