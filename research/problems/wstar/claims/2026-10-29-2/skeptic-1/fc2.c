/* Exhaustive DFS with forward checking and dynamic (MRV) position ordering
   for good s-colourings of [1,n]: no 3-AP whose colours c1,c2,c3 satisfy c2-c1 == c3-c2.
   Units: nodes at depth M of the (deterministic) search tree, numbered in DFS order.
   usage: fc2 n s M sym donefile [hi] [stride]
   sym=1: first branching restricted by colour-reversal symmetry (see below). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXN 128
int n,s,M,sym,FULL; int col[MAXN]; /* -1 unassigned */
unsigned char dom[MAXN][MAXN];   /* dom[depth][pos] = forbidden mask */
long long nodes,sols,depthcnt[MAXN];
static int popc(unsigned x){return __builtin_popcount(x);}
static void report(void){printf("SOLUTION ");for(int i=0;i<n;i++)printf("%d",col[i]+1);printf("\n");fflush(stdout);}
static inline int forbid(unsigned char *d,int j,int t){ if(t<0||t>=s) return 1; d[j]|=(unsigned char)(1u<<t); return d[j]!=FULL; }
/* assign k:=c at depth D, building dom[D+1]; returns 0 on wipeout */
static int assign(int D,int k,int c){
  unsigned char *d=dom[D+1]; memcpy(d,dom[D],n); col[k]=c;
  for(int i=0;i<n;i++){ if(col[i]<0||i==k) continue; int ci=col[i];
    int j=2*k-i; if(j>=0&&j<n&&col[j]<0) if(!forbid(d,j,2*c-ci)) return 0;
    j=2*i-k;     if(j>=0&&j<n&&col[j]<0) if(!forbid(d,j,2*ci-c)) return 0;
    if(((i+k)&1)==0){ j=(i+k)/2; if(col[j]<0 && ((ci+c)&1)==0) if(!forbid(d,j,(ci+c)/2)) return 0; } }
  return 1; }
static int pick(int D){ int best=-1,bc=99,bd=999; double mid=(n-1)/2.0;
  for(int j=0;j<n;j++){ if(col[j]>=0) continue; int f=s-popc(dom[D][j]);
    int dd=(int)(2*((j>mid)?(j-mid):(mid-j)));
    if(f<bc||(f==bc&&dd<bd)){bc=f;bd=dd;best=j;} }
  return best; }
static void rec(int D){ nodes++; depthcnt[D]++;
  if(D==n){sols++;report();return;}
  int k=pick(D); unsigned m=dom[D][k];
  for(int c=0;c<s;c++) if(!(m>>c&1)){ if(assign(D,k,c)) rec(D+1); col[k]=-1; } }
long long unitidx,hi=(1LL<<62),STRIDE=1; char *done; FILE *df;
static void pre(int D){
  if(D==M){ long long u=unitidx++; if(u>=hi||done[u]||(u%STRIDE)) return;
    long long n0=nodes,s0=sols; rec(D); fprintf(df,"%lld %lld %lld\n",u,nodes-n0,sols-s0); fflush(df); done[u]=1; return; }
  if(D==n) return;
  int k=pick(D); unsigned m=dom[D][k];
  for(int c=0;c<s;c++){ if(m>>c&1) continue;
    /* colour reversal c -> s-1-c (0-based) preserves goodness; at the very first branching (D==0,
       all domains full) we may keep only c <= (s-1)/2 */
    if(D==0&&sym&&c>(s-1)/2) continue;
    if(assign(D,k,c)) pre(D+1); col[k]=-1; } }
int main(int ac,char**av){ n=atoi(av[1]);s=atoi(av[2]);M=atoi(av[3]);sym=atoi(av[4]);FULL=(1<<s)-1;
  if(ac>6) hi=atoll(av[6]); if(ac>7) STRIDE=atoll(av[7]);
  done=calloc(100000000,1); FILE*f=fopen(av[5],"r"); long long nd=0,u,a,b;
  if(f){while(fscanf(f,"%lld %lld %lld",&u,&a,&b)==3){if(!done[u])nd++;done[u]=1;}fclose(f);}
  df=fopen(av[5],"a"); for(int i=0;i<n;i++)col[i]=-1; memset(dom[0],0,MAXN); clock_t t0=clock();
  pre(0);
  printf("n=%d s=%d M=%d sym=%d units=%lld previously_done=%lld nodes=%lld solutions=%lld cpu=%.1fs\n",n,s,M,sym,unitidx,nd,nodes,sols,(double)(clock()-t0)/CLOCKS_PER_SEC);
  for(int i=0;i<=n;i++) if(depthcnt[i]) printf("%d:%lld ",i,depthcnt[i]); printf("\n"); return 0; }
