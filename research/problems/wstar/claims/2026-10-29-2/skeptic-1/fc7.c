/* fc7: units = assignments to the central block of M positions S0..S1 (reversal-invariant), kept only if
   lexicographically minimal among their images under colour reversal C, position reversal R, and RC
   (all four map good colourings to good colourings and map the block to itself).
   Exhaustive search for good s-colourings of [1,n]: no 3-AP (a, a+d, a+2d), d>=1, whose colours
   c1,c2,c3 satisfy c2-c1 == c3-c2 (monochromatic included).
   DFS with forward checking (forbidden-colour masks) and MRV position choice (ties: nearest centre).
   Work units = nodes at depth M of the deterministic tree, numbered in DFS order (resumable).
   A unit whose subtree exceeds CAP nodes is abandoned and its cube is written to capfile, to be
   decided by a SAT solver (cdcl_caps.py).
   Symmetry: colour reversal c -> s+1-c maps good colourings to good colourings; the very first
   branching (empty assignment, position chosen deterministically) keeps colours c <= (s+1)/2 only.
   usage: fc6 n s M sym donefile capfile [hi] [stride]   env CAP=nodes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXN 128
int n,s,M,sym,FULL; int col[MAXN]; int asg[MAXN],na=0;
unsigned char dom[MAXN][MAXN];
long long nodes,sols,CAP=0,unitstart; int aborted=0;
static void report(void){printf("SOLUTION ");for(int i=0;i<n;i++)printf("%d",col[i]+1);printf("\n");fflush(stdout);}
static int assign(int D,int k,int c){
  unsigned char *d=dom[D+1]; memcpy(d,dom[D],n); col[k]=c;
  for(int q=0;q<na;q++){ int i=asg[q]; int ci=col[i],j,t;
    j=2*k-i; if(j>=0&&j<n&&col[j]<0){t=2*c-ci; if(t>=0&&t<s){d[j]|=1u<<t; if(d[j]==FULL) goto fail;}}
    j=2*i-k; if(j>=0&&j<n&&col[j]<0){t=2*ci-c; if(t>=0&&t<s){d[j]|=1u<<t; if(d[j]==FULL) goto fail;}}
    if(!((i+k)&1)){ j=(i+k)>>1; if(col[j]<0&&!((ci+c)&1)){t=(ci+c)>>1; d[j]|=1u<<t; if(d[j]==FULL) goto fail;}} }
  asg[na++]=k; return 1;
fail: col[k]=-1; return 0; }
static inline void unassign(int k){ na--; col[k]=-1; }
static int pick(int D){ int best=-1,bc=99,bd=999; const unsigned char *d=dom[D];
  for(int j=0;j<n;j++){ if(col[j]>=0) continue; int f=s-__builtin_popcount(d[j]);
    int dd=2*j-(n-1); if(dd<0) dd=-dd;
    if(f<bc||(f==bc&&dd<bd)){bc=f;bd=dd;best=j;} }
  return best; }
static void rec(int D){ if(aborted) return; nodes++; if(CAP&&nodes-unitstart>CAP){aborted=1;return;}
  if(D==n){sols++;report();return;}
  int k=pick(D); unsigned m=dom[D][k];
  for(int c=0;c<s;c++) if(!(m>>c&1)){ if(assign(D,k,c)){ rec(D+1); unassign(k);} if(aborted) return; } }
long long unitidx,hi=(1LL<<62),STRIDE=1,ncap=0; char *done; FILE *df,*cf;
int S0,S1; /* block positions S0..S1 (0-based), must satisfy S0+S1==n-1 (reversal-invariant) */
int blk[MAXN];
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
  for(int c=0;c<s;c++){ if(dom[D][k]>>c&1) continue;
    if(assign(D,k,c)){ pre(D+1); unassign(k);} } }
int main(int ac,char**av){ n=atoi(av[1]);s=atoi(av[2]);M=atoi(av[3]); S0=(n-M)/2; S1=S0+M-1; if(S0+S1!=n-1){printf("block not symmetric\n");return 1;}sym=atoi(av[4]);FULL=(1<<s)-1;
  if(getenv("CAP")) CAP=atoll(getenv("CAP")); if(ac>7) hi=atoll(av[7]); if(ac>8) STRIDE=atoll(av[8]);
  done=calloc(100000000,1); FILE*f=fopen(av[5],"r"); long long nd=0,u,a,b;
  if(f){while(fscanf(f,"%lld %lld %lld",&u,&a,&b)==3){if(!done[u])nd++;done[u]=1;}fclose(f);}
  df=fopen(av[5],"a"); cf=fopen(av[6],"a");
  for(int i=0;i<n;i++)col[i]=-1; memset(dom[0],0,MAXN); clock_t t0=clock();
  pre(0);
  printf("FINISHED n=%d s=%d M=%d sym=%d units=%lld previously_done=%lld nodes=%lld solutions=%lld capped=%lld cpu=%.1fs\n",n,s,M,sym,unitidx,nd,nodes,sols,ncap,(double)(clock()-t0)/CLOCKS_PER_SEC);
  return 0; }
