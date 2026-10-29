// Exhaustive CSP search with full propagation and MRV ordering.
// Decides whether a good s-colouring of [1,n] exists (no 3-AP whose colours are in AP, incl. constant).
// Usage: mrv n s mode ckfile   mode: 0=find (stop at first), 1=count all (no symmetry breaking)
// Symmetry (mode 0): complement c->s+1-c; centre position m=(n+1)/2 (floor) restricted to colours <= ceil(s/2).
// Checkpoint: completed subtrees at decision depth CK are appended to ckfile as paths and skipped on resume.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXN 128
#define CK 4
int n,s,mode; unsigned dom[MAXN+2]; int fixedc[MAXN+2]; // 0 if unfixed
int fixlist[MAXN+2], nfixed=0;
int trailp[1<<20]; unsigned traild[1<<20]; int ntrail=0;
int q[MAXN*4], qh, qt;
long long nodes=0, found=0;
char **donep; int ndone=0; FILE *ck;
static int popc(unsigned x){return __builtin_popcount(x);}
static int setdom(int p,unsigned d){ if(dom[p]==d) return 1; trailp[ntrail]=p; traild[ntrail]=dom[p]; ntrail++; dom[p]=d; if(!d) return 0; if(popc(d)==1 && !fixedc[p]) q[qt++]=p; return 1; }
static int forbid(int k,int col){ if(k<1||k>n||col<1||col>s) return 1; unsigned b=1u<<col; if(!(dom[k]&b)) return 1; return setdom(k,dom[k]&~b); }
// fixedc changes also trailed via special marker p<0
static int propagate(){
  while(qh<qt){
    int p=q[qh++]; if(fixedc[p]) continue;
    int c=__builtin_ctz(dom[p]);
    fixedc[p]=c; fixlist[nfixed++]=p; trailp[ntrail]=-p; traild[ntrail]=0; ntrail++;
    for(int t=0;t<nfixed-1;t++){ int r=fixlist[t]; int e=fixedc[r];
      if(!forbid(2*r-p,2*e-c)) return 0;
      if(!forbid(2*p-r,2*c-e)) return 0;
      if(((p+r)&1)==0 && ((c+e)&1)==0) if(!forbid((p+r)/2,(c+e)/2)) return 0;
    }
  }
  return 1;
}
static void undo(int mark){ while(ntrail>mark){ ntrail--; int p=trailp[ntrail]; if(p<0){ fixedc[-p]=0; nfixed--; } else dom[p]=traild[ntrail]; } }
char path[64];
static int isdone(int depth){ for(int i=0;i<ndone;i++) if(memcmp(donep[i],path,depth)==0 && donep[i][depth]==0) return 1; return 0; }
int dfs(int depth){
  nodes++;
  // choose unfixed position with smallest domain, tie -> closest to centre
  int best=-1,bs=99; double bd=1e9; double cen=(n+1)/2.0;
  for(int p=1;p<=n;p++) if(!fixedc[p]){ int k=popc(dom[p]); double d=p>cen?p-cen:cen-p; if(k<bs||(k==bs&&d<bd)){bs=k;bd=d;best=p;} }
  if(best<0){ found++; if(found==1||mode==0){ printf("GOOD:"); for(int p=1;p<=n;p++) printf("%d",fixedc[p]); printf("\n"); fflush(stdout);} return mode==0; }
  unsigned d=dom[best]; int idx=0;
  for(int c=1;c<=s;c++) if(d&(1u<<c)){
    path[depth]='a'+idx; path[depth+1]=0; idx++;
    if(depth<CK && ck && isdone(depth+1)) continue;
    int mark=ntrail; qh=qt=0;
    int ok=setdom(best,1u<<c); if(ok){ q[qt++]=best; ok=propagate(); }
    if(ok && dfs(depth+1)) return 1;
    undo(mark);
    path[depth]=0;
    if(depth+1==CK && ck){ path[depth]='a'+idx-1; path[depth+1]=0; fprintf(ck,"%s %lld\n",path,nodes); fflush(ck); path[depth]=0; }
  }
  return 0;
}
int main(int argc,char**argv){
  n=atoi(argv[1]); s=atoi(argv[2]); mode=atoi(argv[3]); ck=NULL;
  donep=malloc(sizeof(char*)*1000000);
  if(argc>4){ FILE*f=fopen(argv[4],"r"); char buf[128]; long long x; if(f){ while(fscanf(f,"%127s %lld",buf,&x)==2){ donep[ndone++]=strdup(buf);} fclose(f);} ck=fopen(argv[4],"a"); }
  unsigned all=0; for(int c=1;c<=s;c++) all|=1u<<c;
  for(int p=1;p<=n;p++){dom[p]=all; fixedc[p]=0;}
  if(mode==0){ int m=(n+1)/2; unsigned r=0; for(int c=1;c<=(s+1)/2;c++) r|=1u<<c; dom[m]=r; }
  clock_t t0=clock();
  int r=dfs(0);
  printf("RESULT n=%d s=%d %s nodes=%lld found=%lld resumed_skips=%d cpu=%.1fs\n",n,s,mode==0?(r?"GOOD_EXISTS":"NO_GOOD_COLOURING"):"COUNT",nodes,found,ndone,(double)(clock()-t0)/CLOCKS_PER_SEC);
  return 0;
}
