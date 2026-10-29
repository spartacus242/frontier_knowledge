/* dfs3: exhaustive search for good s-colourings of [1,n] (no 3-AP a,a+d,a+2d, d>=1,
   with chi(a+d)-chi(a) == chi(a+2d)-chi(a+d); d=0-like monochromatic APs included).
   Forward checking (every assigned pair forbids one colour at the third point of
   its AP, in all three roles) + most-constrained-variable ordering.
   Symmetry: the group {id, R (reflection i->n+1-i), C (colour c->s+1-c), RC}
   preserves goodness; we keep only chi(1) <= ceil(s/2), chi(1) <= chi(n),
   chi(1)+chi(n) <= s+1 (first-component lex-leader relaxation, valid for the group).
   Cubes: assignments of the K positions 1..K enumerated in a fixed
   order and indexed; cubes with index >= startidx are searched; one line
   "CUBE idx colours count nodes" per cube (flushed) makes the run resumable.
   Usage: dfs3 n s K [startidx] [maxprint]   */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 128
static int n,s,K; static int chi[MAXN+1]; static unsigned forb[MAXN+1]; static int assigned[MAXN+1];
static int alist[MAXN+1], na=0; /* list of assigned positions */
static unsigned FULL; static long long found=0, nodes=0, printed=0, maxprint=3;
static int upos[MAXN*MAXN*4]; static unsigned umask[MAXN*MAXN*4]; static int usp=0;
static int cubepos[MAXN]; static int mono_only=0, lr_order=0, mid_order=0; static int order[MAXN+1]; /* env ORDER=lr: static left-to-right order instead of MRV */ /* env MONO=1: classical van der Waerden (monochromatic APs only), for calibration */
static int addforb(int p, int v){
  if(p<1||p>n||assigned[p]||v<1||v>s) return 0;
  unsigned b=1u<<v; if(forb[p]&b) return 0;
  upos[usp]=p; umask[usp]=forb[p]; usp++; forb[p]|=b; return forb[p]==FULL; }
static int assign(int c,int v){
  chi[c]=v; assigned[c]=1; int dead=0;
  for(int k=0;k<na;k++){ int q=alist[k]; int cq=chi[q]; if(mono_only && cq!=v) continue;
    if(addforb(2*c-q,2*v-cq)) dead=1;          /* (q,c,r): c in the middle */
    if(addforb(2*q-c,2*cq-v)) dead=1;          /* (c,q,r): q in the middle */
    if(!((c+q)&1) && !((v+cq)&1)){ if(addforb((c+q)/2,(v+cq)/2)) dead=1; } } /* midpoint */
  alist[na++]=c; return !dead; }
static void undo(int c,int sp){ while(usp>sp){ usp--; forb[upos[usp]]=umask[usp]; } assigned[c]=0; na--; }
static void rec(int left){
  nodes++;
  if(left==0){ found++; if(printed<maxprint){ printed++; printf("FOUND "); for(int i=1;i<=n;i++) putchar('0'+chi[i]); putchar('\n'); fflush(stdout);} return; }
  int best=-1, bestc=99;
  if(mid_order){ for(int k=1;k<=n;k++){ int p=order[k]; if(!assigned[p]){ int cnt=s-__builtin_popcount(forb[p]); if(cnt==0){bestc=0;break;} if(best<0){best=p;bestc=cnt;} } } }
  else if(lr_order){ for(int p=1;p<=n;p++) if(!assigned[p]){ int cnt=s-__builtin_popcount(forb[p]); if(cnt==0){bestc=0;break;} if(best<0){best=p;bestc=cnt;} } }
  else for(int p=1;p<=n;p++) if(!assigned[p]){ int cnt=s-__builtin_popcount(forb[p]); if(cnt<bestc){bestc=cnt;best=p; if(cnt<=1) break;} }
  if(bestc==0) return;
  for(int v=1;v<=s;v++) if(!(forb[best]&(1u<<v))){
    if(best==n && (chi[1]>v || chi[1]+v>s+1)) continue; /* reflection symmetry: chi(1)<=chi(n), chi(1)+chi(n)<=s+1 (position 1 is always assigned first) */
    int sp=usp; if(assign(best,v)) rec(left-1); undo(best,sp); }
}
static long long cube_idx=0, startidx=0;
static void pre(int k){
  if(k==K){ if(cube_idx>=startidx){ long long f0=found,n0=nodes; rec(n-K); printf("CUBE %lld ",cube_idx); for(int i=0;i<K;i++) putchar('0'+chi[cubepos[i]]); printf(" %lld %lld\n",found-f0,nodes-n0); fflush(stdout);} cube_idx++; return; }
  int c=cubepos[k];
  for(int v=1;v<=s;v++){
    if(forb[c]&(1u<<v)) continue;
    if(c==1 && v>(s+1)/2) continue;
    int sp=usp; int ok=assign(c,v);
    if(ok) pre(k+1); undo(c,sp); }
}
int main(int argc,char**argv){ n=atoi(argv[1]); s=atoi(argv[2]); K=atoi(argv[3]); startidx=argc>4?atoll(argv[4]):0; if(argc>5) maxprint=atoll(argv[5]);
  if(getenv("MONO")) mono_only=1; if(getenv("ORDER")&&getenv("ORDER")[0]=='l') lr_order=1; if(getenv("ORDER")&&getenv("ORDER")[0]=='m') mid_order=1; if(K>n)K=n; if(K<1)K=1; FULL=0; for(int v=1;v<=s;v++) FULL|=1u<<v;
  for(int i=0;i<K;i++) cubepos[i]=i+1; /* cube positions 1..K */
  { int m=(n+1)/2, k=1; order[k++]=m; for(int d=1;k<=n;d++){ if(m+d<=n) order[k++]=m+d; if(m-d>=1) order[k++]=m-d; } }
  pre(0); printf("DONE n=%d s=%d K=%d cubes=%lld found=%lld nodes=%lld\n",n,s,K,cube_idx,found,nodes); return 0; }
