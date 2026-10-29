// exhaustive DFS: is there a good s-colouring of [1,n]? args: n s [prefixlen]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n,s,PL; int col[128]; int forb[128][8]; int nforb_all[128]; // count of distinct forbidden colours? use counts
int nf[128]; // number of colours with forb>0
long long nodes=0; long long found=0;
int assign(int p,int c){ // returns 0 if wipeout; always records for undo
  col[p]=c; int ok=1;
  for(int a=1;a<p;a++){int t=2*p-a; if(t>n)continue; int z=2*c-col[a]; if(z>=1&&z<=s){ if(forb[t][z]++==0) nf[t]++; if(col[t]==0 && nf[t]==s) ok=0; }}
  return ok;}
void undo(int p){int c=col[p];
  for(int a=1;a<p;a++){int t=2*p-a; if(t>n)continue; int z=2*c-col[a]; if(z>=1&&z<=s){ if(--forb[t][z]==0) nf[t]--; }}
  col[p]=0;}
int stop_first=1;
// prefix enumeration: mode: if PL>0 run job index J over prefixes of length PL
int rec(int p){
  if(p>n){found++;return 1;}
  nodes++;
  for(int c=1;c<=s;c++){
    if(p==1 && c>(s+1)/2) break;
    if(forb[p][c]) continue;
    int ok=assign(p,c);
    int r=0; if(ok) r=rec(p+1);
    undo(p);
    if(r&&stop_first) return 1;
  }
  return 0;}
// job enumeration
int pre[32];
int main(int argc,char**argv){
  n=atoi(argv[1]); s=atoi(argv[2]); PL=argc>3?atoi(argv[3]):0;
  if(!PL){ int r=rec(1); printf("n=%d s=%d good=%d nodes=%lld\n",n,s,r,nodes); if(r){for(int i=1;i<=n;i++)printf("%d",col[i]);puts("");} return 0;}
  // enumerate prefixes of length PL in lexicographic order; job id = order; skip ids < start (argv[4]); print per job result
  long long start=argc>4?atoll(argv[4]):0, id=0; long long tot=0; int anyfound=0;
  // iterative enumeration via recursion on prefix
  // simple recursive lambda emulation
  int p=1; int c[32]; for(int i=0;i<32;i++)c[i]=0;
  // DFS over prefix with explicit stack
  int depth=1; c[1]=0;
  while(depth>=1){
    c[depth]++;
    if(c[depth]>s || (depth==1&&c[depth]>(s+1)/2)){ depth--; if(depth>=1) undo(depth); continue;}
    if(forb[depth][c[depth]]) continue;
    int ok=assign(depth,c[depth]);
    if(!ok){undo(depth);continue;}
    if(depth==PL){
      if(id>=start){ long long n0=nodes; int r=rec(PL+1); printf("JOB %lld ",id); for(int i=1;i<=PL;i++)printf("%d",c[i]); printf(" found=%d nodes=%lld\n",r,nodes-n0); fflush(stdout); if(r){anyfound=1;for(int i=1;i<=n;i++)printf("%d",col[i]);puts("");} }
      id++; undo(depth); continue;}
    depth++; c[depth]=0;
  }
  printf("DONE jobs=%lld anyfound=%d totalnodes=%lld\n",id,anyfound,nodes);
}
