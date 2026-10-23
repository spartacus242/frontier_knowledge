// Forward-checking CSP with MRV for: choose x_i in [s*i, s*i+s-1], i=0..n-1, no 3-AP.
// usage: fc.bin s n [blk val]...   (optional fixed assignments, val = offset in block)
// prints SAT + witness or UNSAT, with node count.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 80
int s,n; int val[MAXN]; int asg[MAXN], na=0; long long nodes=0;
static inline int pc(unsigned x){return __builtin_popcount(x);}
int elim(unsigned char *dom,int w){ // remove absolute value w; return 0 if wipeout
  if(w<0||w>=s*n) return 1;
  int b=w/s,o=w%s;
  if(val[b]>=0) return (val[b]!=w); // conflict with an assigned value
  dom[b]&=~(1u<<o);
  return dom[b]!=0;
}
int assign(unsigned char *dom,int b,int v){ // v absolute
  for(int k=0;k<na;k++){int u=val[asg[k]];
    if(!elim(dom,2*v-u))return 0; if(!elim(dom,2*u-v))return 0;
    if(((u+v)&1)==0 && !elim(dom,(u+v)/2))return 0;}
  val[b]=v; asg[na++]=b; dom[b]=1u<<(v-s*b); return 1;
}
int rec(unsigned char *dom){
  nodes++;
  if(na==n) return 1;
  int best=-1,bc=99;
  for(int b=0;b<n;b++) if(val[b]<0){int c=pc(dom[b]); if(c<bc||(c==bc && 0)){bc=c;best=b;}}
  unsigned char nd[MAXN];
  for(int o=0;o<s;o++) if(dom[best]>>o&1){
    memcpy(nd,dom,n); int save=na;
    if(assign(nd,best,s*best+o) && rec(nd)) return 1;
    for(int k=save;k<na;k++) val[asg[k]]=-1; na=save;
  }
  return 0;
}
int main(int c,char**v){ s=atoi(v[1]); n=atoi(v[2]);
  unsigned char dom[MAXN]; for(int b=0;b<n;b++){dom[b]=(1u<<s)-1; val[b]=-1;}
  for(int a=3;a+1<c;a+=2){int b=atoi(v[a]),o=atoi(v[a+1]); if(!(dom[b]>>o&1)||!assign(dom,b,s*b+o)){printf("s=%d n=%d fixed-conflict UNSAT nodes=0\n",s,n);return 0;}}
  int r=rec(dom);
  printf("s=%d n=%d %s nodes=%lld",s,n,r?"SAT":"UNSAT",nodes);
  if(r){ // verify independently
    int bad=0; for(int i=0;i<n;i++) if(val[i]/s!=i) bad=1;
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){int w=2*val[j]-val[i]; if(w<s*n && w>=0 && val[w/s]==w) bad=1;}
    printf(" verified=%s witness:",bad?"NO":"yes"); for(int i=0;i<n;i++)printf(" %d",val[i]);}
  printf("\n"); return 0; }
