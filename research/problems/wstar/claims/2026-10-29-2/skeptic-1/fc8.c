/* fc8: same search and same unit numbering as fc7, with bit-parallel forward checking.
   Problem: no 3-AP (a,a+d,a+2d), d>=1, in [1,n] whose colours c1,c2,c3 satisfy c2-c1==c3-c2.
   State: F[t] = set of unassigned positions where colour t is forbidden (128-bit, positions 0..n-1).
   For each colour ci: cls  = positions coloured ci,
                       rev  = {127-i}, dbl = {2i} (256-bit as 2 x 128), h0 = {i/2: i even}, h1 = {(i-1)/2: i odd}.
   Assigning k:=c forbids, for every assigned i of colour ci:
     j=2k-i colour 2c-ci  (k middle)        -> reflect: rev shifted
     j=2i-k colour 2ci-c  (i middle)        -> dbl >> k
     j=(i+k)/2 colour (ci+c)/2 if ci+c even  -> h0<<(k/2) (k even) or h1<<((k+1)/2) (k odd)
   Wipeout: some unassigned position has all s colours forbidden.
   Units: assignments to the central reversal-invariant block, canonical under {id,C,R,RC}, as in fc7.
   usage: fc8 n s M sym donefile capfile [hi] [stride]   env CAP */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef unsigned __int128 u128;
#define MAXN 128
int n,s,M,sym; int col[MAXN]; int asg[MAXN],na=0;
u128 F[MAXN][5]; u128 cls[5],rv[5],dl[5],dh[5],h0[5],h1[5]; u128 ALL,UN;
int order[MAXN];
long long nodes,sols,CAP=0,unitstart; int aborted=0;
static inline u128 bit(int i){return ((u128)1)<<i;}
static void report(void){printf("SOLUTION ");for(int i=0;i<n;i++)printf("%d",col[i]+1);printf("\n");fflush(stdout);}
static inline u128 shr256(u128 lo,u128 hi,int k){ /* (hi:lo) >> k, low 128 bits, 0<=k<128 */
  if(k==0) return lo; return (lo>>k)|(hi<<(128-k)); }
static int assign(int D,int k,int c){
  u128 *f=F[D+1]; const u128 *g=F[D]; u128 un=UN&~bit(k);
  for(int t=0;t<s;t++) f[t]=g[t];
  for(int ci=0;ci<s;ci++){ if(!cls[ci]) continue; int t;
    t=2*c-ci; if(t>=0&&t<s){ int sh=127-2*k; u128 m= sh>=0 ? (rv[ci]>>sh) : (rv[ci]<<(-sh)); f[t]|=m&un; }
    t=2*ci-c; if(t>=0&&t<s){ f[t]|=shr256(dl[ci],dh[ci],k)&un; }
    if(!((ci+c)&1)){ t=(ci+c)>>1; u128 m=(k&1)? (h1[ci]<<((k+1)>>1)) : (h0[ci]<<(k>>1)); f[t]|=m&un; } }
  u128 w=un; for(int t=0;t<s;t++) w&=f[t]; if(w) return 0;
  col[k]=c; UN=un; asg[na++]=k;
  cls[c]|=bit(k); rv[c]|=bit(127-k); if(2*k<128) dl[c]|=bit(2*k); else dh[c]|=bit(2*k-128);
  if(k&1) h1[c]|=bit(k>>1); else h0[c]|=bit(k>>1);
  return 1; }
static inline void unassign(int k){ int c=col[k]; na--; col[k]=-1; UN|=bit(k);
  cls[c]&=~bit(k); rv[c]&=~bit(127-k); if(2*k<128) dl[c]&=~bit(2*k); else dh[c]&=~bit(2*k-128);
  if(k&1) h1[c]&=~bit(k>>1); else h0[c]&=~bit(k>>1); }
static int pick(int D){ const u128 *f=F[D];
  /* bit-sliced count of forbidden colours per position (s<=5): count in b2 b1 b0 */
  u128 b0=0,b1=0,b2=0;
  for(int t=0;t<s;t++){ u128 x=f[t]&UN; u128 c0=b0&x; b0^=x; u128 c1=b1&c0; b1^=c0; b2|=c1; }
  /* classes by count descending: count = 4b2+2b1+b0 ; s<=5 and no wipeout so count<=s-1 */
  for(int cnt=s-1;cnt>=0;cnt--){
    u128 m=UN; m&= (cnt&4)?b2:~b2; m&= (cnt&2)?b1:~b1; m&= (cnt&1)?b0:~b0;
    if(m){ for(int q=0;q<n;q++){ int j=order[q]; if(m>>j&1) return j; } } }
  return -1; }
static void rec(int D){ if(aborted) return; nodes++; if(CAP&&nodes-unitstart>CAP){aborted=1;return;}
  if(D==n){sols++;report();return;}
  int k=pick(D); u128 kb=bit(k);
  for(int c=0;c<s;c++){ if(F[D][c]&kb) continue; if(assign(D,k,c)){ rec(D+1); unassign(k);} if(aborted) return; } }
long long unitidx,hi=(1LL<<62),STRIDE=1,ncap=0; char *done; FILE *df,*cf; int S0,S1;
static int canonical(void){ int L=S1-S0+1; int a[MAXN],b[MAXN];
  for(int i=0;i<L;i++) a[i]=col[S0+i];
  for(int t=1;t<4;t++){ for(int i=0;i<L;i++){ int v=(t&1)? a[L-1-i] : a[i]; if(t&2) v=s-1-v; b[i]=v; }
    for(int i=0;i<L;i++){ if(b[i]<a[i]) return 0; if(b[i]>a[i]) break; } }
  return 1; }
static void pre(int D){
  if(D==S1-S0+1){ if(sym&&!canonical()) return; long long u=unitidx++; if(u>=hi||done[u]||(u%STRIDE)) return;
    long long n0=nodes,s0=sols; unitstart=nodes; aborted=0; rec(D);
    if(aborted){ aborted=0; ncap++; fprintf(cf,"%lld",u); for(int q=0;q<D;q++) fprintf(cf," %d:%d",asg[q],col[asg[q]]); fprintf(cf,"\n"); fflush(cf);
      fprintf(df,"%lld %lld -1\n",u,nodes-n0); fflush(df); done[u]=1; return; }
    fprintf(df,"%lld %lld %lld\n",u,nodes-n0,sols-s0); fflush(df); done[u]=1; return; }
  int k=S0+D;
  for(int c=0;c<s;c++){ if(F[D][c]>>k&1) continue; if(assign(D,k,c)){ pre(D+1); unassign(k);} } }
int main(int ac,char**av){ n=atoi(av[1]);s=atoi(av[2]);M=atoi(av[3]);sym=atoi(av[4]);
  if(n>76+0 && n>127){printf("n too big\n");return 1;}
  S0=(n-M)/2; S1=S0+M-1; if(S0+S1!=n-1){printf("block not symmetric\n");return 1;}
  if(getenv("CAP")) CAP=atoll(getenv("CAP")); if(ac>7) hi=atoll(av[7]); if(ac>8) STRIDE=atoll(av[8]);
  done=calloc(100000000,1); FILE*f=fopen(av[5],"r"); long long nd=0,u,a,b;
  if(f){while(fscanf(f,"%lld %lld %lld",&u,&a,&b)==3){if(!done[u])nd++;done[u]=1;}fclose(f);}
  df=fopen(av[5],"a"); cf=fopen(av[6],"a");
  ALL=0; for(int i=0;i<n;i++){ALL|=bit(i);col[i]=-1;} UN=ALL; memset(F,0,sizeof F);
  /* centre-out order, ties -> lower index (same as fc7's pick) */
  { int q=0; for(int dd=0;dd<=n;dd++) for(int j=0;j<n;j++){ int e=2*j-(n-1); if(e<0)e=-e; if(e==dd) order[q++]=j; } }
  clock_t t0=clock(); pre(0);
  printf("FINISHED n=%d s=%d M=%d sym=%d units=%lld previously_done=%lld nodes=%lld solutions=%lld capped=%lld cpu=%.1fs\n",n,s,M,sym,unitidx,nd,nodes,sols,ncap,(double)(clock()-t0)/CLOCKS_PER_SEC);
  return 0; }
