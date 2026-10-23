// CSP with unit propagation + failed-literal probing + MRV. usage: prop.bin s n probe_maxdom [prefix values...]
// Prefix values (optional) are pre-assigned (for cubes). Reflection symmetry applied only when no prefix.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int s,n,N,PD;
int forb[1024],cnt[128],val[128],asg[128];
int chosen[128],nc,sol[128];
int ftr[1<<20],nft=0;     // trail of forbidden values
int atr[128],nat=0;       // trail of assigned blocks (order)
int q[256],qh,qt;
long long nodes=0,probes=0,pfail=0;
static inline int forbid(int c){
  if(c<0||c>=N)return 1;
  int b=c/s;
  if(asg[b]&&val[b]==c)return 0;
  forb[c]++; ftr[nft++]=c;
  if(forb[c]==1){cnt[b]--; if(!asg[b]){ if(cnt[b]==0)return 0; if(cnt[b]==1)q[qt++]=b; }}
  return 1;
}
static inline int assign(int v){
  int b=v/s; asg[b]=1; val[b]=v; atr[nat++]=b;
  for(int k=0;k<nc;k++){int x=chosen[k];
    if(!forbid(2*x-v))return 0; if(!forbid(2*v-x))return 0; if(((v+x)&1)==0&&!forbid((v+x)/2))return 0;}
  chosen[nc++]=v; return 1;
}
static void undo(int mf,int ma){
  while(nft>mf){int c=ftr[--nft]; if(--forb[c]==0)cnt[c/s]++;}
  while(nat>ma){int b=atr[--nat]; asg[b]=0; if(nc>0&&chosen[nc-1]/s==b)nc--; }
}
// careful: assign may fail before pushing chosen; handle by recomputing nc in undo: chosen[nc-1]/s==b check works since chosen holds only completed assigns
static int propagate(void){
  while(qh<qt){int b=q[qh++]; if(asg[b])continue;
    int v=-1; for(int x=b*s;x<b*s+s;x++) if(!forb[x]){v=x;break;}
    if(v<0)return 0;
    if(!assign(v))return 0;}
  return 1;
}
static int try_assign(int v){ qh=qt=0; if(!assign(v))return 0; return propagate(); }
int rec(int left){
  nodes++;
  // left = unassigned blocks count
  (void)left;
  // probing
  int changed=1;
  while(changed && PD>0){
    changed=0;
    for(int b=0;b<n;b++) if(!asg[b]&&cnt[b]<=PD&&cnt[b]>1){
      for(int v=b*s;v<b*s+s;v++){ if(forb[v]||asg[b])continue;
        int mf=nft,ma=nat; probes++;
        int ok=try_assign(v); undo(mf,ma);
        if(!ok){ pfail++; qh=qt=0; int ok2=forbid(v)&&propagate(); if(!ok2) {return 0;} changed=1; if(asg[b])break; }
      }
    }
  }
  // recount left
  int l=0; for(int b=0;b<n;b++) if(!asg[b])l++;
  if(l==0){for(int k=0;k<nc;k++)sol[chosen[k]/s]=chosen[k];return 1;}
  int bi=-1,bc=99; for(int b=0;b<n;b++) if(!asg[b]&&cnt[b]<bc){bc=cnt[b];bi=b;}
  if(bc==0)return 0;
  int v=-1; for(int x=bi*s;x<bi*s+s;x++) if(!forb[x]){v=x;break;}
  { int mf=nft,ma=nat;
    int ok=try_assign(v);
    if(ok && rec(l-1)) return 1;
    undo(mf,ma); }
  qh=qt=0; if(!forbid(v) || !propagate()) return 0;
  return rec(l);
}

double dive(void){ // returns estimated node count from current state
  double W=1,sum=0;
  for(;;){
    sum+=W;
    int l=0; for(int b=0;b<n;b++) if(!asg[b])l++;
    if(l==0)return sum;
    int bi=-1,bc=99; for(int b=0;b<n;b++) if(!asg[b]&&cnt[b]<bc){bc=cnt[b];bi=b;}
    if(bc==0)return sum;
    int v=-1; for(int x=bi*s;x<bi*s+s;x++) if(!forb[x]){v=x;break;}
    W*=2;
    if(rand()&1){ if(!try_assign(v))return sum+W; }
    else { qh=qt=0; if(!forbid(v)||!propagate())return sum+W; }
  }
}
int main(int argc,char**argv){
  s=atoi(argv[1]);n=atoi(argv[2]);N=s*n;int K=atoi(argv[3]);PD=0; srand(12345);
  double tot=0; double mx=0;
  for(int k=0;k<K;k++){
    memset(forb,0,sizeof forb);memset(asg,0,sizeof asg);nft=nat=nc=0;
    for(int i=0;i<n;i++)cnt[i]=s;
    int pairs=s*(s+1)/2; int pi=rand()%pairs,o1=0,o2=0,c=0;
    for(o1=0;o1<s;o1++){ for(o2=0;o2+o1<=s-1;o2++){ if(c==pi)goto got; c++; } }
    got:
    qh=qt=0; double e=0;
    if(assign(o1)&&assign((n-1)*s+o2)&&propagate()) e=pairs*dive();
    tot+=e; if(e>mx)mx=e;
  }
  printf("s=%d n=%d probes=%d est nodes=%.3g max probe=%.3g\n",s,n,K,tot/K,mx);
}
