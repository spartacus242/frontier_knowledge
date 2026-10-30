/* Exhaustive forward-checking DFS for good s-colourings of [1,n]
   good = no 3-AP a<b<c with col(b)-col(a) == col(c)-col(b)  (includes monochromatic).
   Work units: all good prefixes of length M (positions 1..M), optional symmetry col(1) <= (s+1)/2
   (colour reversal c -> s+1-c maps good colourings to good colourings).
   usage: fc n s M sym donefile [maxunits]
   donefile: lines "unit_index nodes solutions" appended after each unit completes (resumable). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXN 128
int n,s,M,sym; int col[MAXN]; unsigned char forb[MAXN][MAXN]; /* forb[depth][pos] */
long long nodes, sols, depthcnt[MAXN]; int FULL;
static void report(void){ printf("SOLUTION "); for(int i=0;i<n;i++) printf("%d",col[i]+1); printf("\n"); fflush(stdout);}
/* assign position k colour c given forb[k] row; build forb[k+1]; return 0 on wipeout */
static int assign(int k,int c){
  unsigned char *src=forb[k], *dst=forb[k+1];
  memcpy(dst,src,n); col[k]=c;
  for(int i=0;i<k;i++){ int j=2*k-i; if(j>=n) continue; int t=2*c-col[i];
    if(t>=0 && t<s){ dst[j]|=(unsigned char)(1u<<t); if(dst[j]==FULL) return 0; } }
  return 1; }
static void rec(int k){ nodes++; depthcnt[k]++;
  if(k==n){ sols++; report(); return; }
  unsigned m=forb[k][k];
  for(int c=0;c<s;c++) if(!(m>>c&1)) { if(assign(k,c)) rec(k+1); } }
/* enumerate prefixes of length M in a fixed order; callback for each */
long long STRIDE=1; long long unitidx; long long target_lo, target_hi; char *done; FILE *df;
static void pre(int k){
  if(k==M){ long long u=unitidx++; if(u<target_lo||u>=target_hi||done[u]||(u%STRIDE)!=0) return;
    long long n0=nodes,s0=sols; rec(M);
    fprintf(df,"%lld %lld %lld\n",u,nodes-n0,sols-s0); fflush(df); done[u]=1; return; }
  unsigned m=forb[k][k];
  for(int c=0;c<s;c++){ if(m>>c&1) continue; if(k==0&&sym&&c>(s-1)/2) continue;
    if(assign(k,c)) pre(k+1); } }
int main(int ac,char**av){
  n=atoi(av[1]); s=atoi(av[2]); M=atoi(av[3]); sym=atoi(av[4]); FULL=(1<<s)-1;
  target_lo=0; target_hi=(ac>6)?atoll(av[6]):(1LL<<62);
  done=calloc(50000000,1); if(ac>7) STRIDE=atoll(av[7]);
  FILE *f=fopen(av[5],"r"); long long nd=0;
  if(f){ long long u,a,b; while(fscanf(f,"%lld %lld %lld",&u,&a,&b)==3){ if(!done[u]) nd++; done[u]=1; } fclose(f);}
  df=fopen(av[5],"a");
  memset(forb[0],0,MAXN); clock_t t0=clock();
  pre(0);
  printf("n=%d s=%d M=%d sym=%d units=%lld previously_done=%lld nodes=%lld solutions=%lld cpu=%.1fs\n",
    n,s,M,sym,unitidx,nd,nodes,sols,(double)(clock()-t0)/CLOCKS_PER_SEC);
  for(int i=0;i<=n;i++) if(depthcnt[i]) printf("%d:%lld ",i,depthcnt[i]); printf("\n");
  return 0; }
