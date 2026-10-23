// exhaustive CSP: one value per block [s*i, s*i+s-1], i<n, no 3-AP. MRV + forward checking.
// usage: mrv.bin s n [fixfile]  -> prints SAT/UNSAT and node count. symmetry: o1+on<=s-1 (reflection)
#include <stdio.h>
#include <stdlib.h>
int s,n,N;
int forb[1024];      // forbid counter per value
int cnt[128];        // allowed count per block
int val[128];        // chosen value or -1
int chosen[128],nc,sol[128];
long long nodes=0;
static inline void forbid(int c,int *tr,int *nt){ if(c<0||c>=N)return; if(forb[c]++==0){cnt[c/s]--;} tr[(*nt)++]=c; }
int rec(int left){
  nodes++;
  if(left==0){for(int k=0;k<nc;k++)sol[chosen[k]/s]=chosen[k];return 1;}
  int bi=-1,bc=99;
  for(int i=0;i<n;i++) if(val[i]<0 && cnt[i]<bc){bc=cnt[i];bi=i; if(bc==0)return 0;}
  for(int v=bi*s;v<bi*s+s;v++){
    if(forb[v])continue;
    int tr[400],nt=0;
    val[bi]=v;
    for(int k=0;k<nc;k++){int b=chosen[k]; forbid(2*b-v,tr,&nt); forbid(2*v-b,tr,&nt); if(((v+b)&1)==0) forbid((v+b)/2,tr,&nt);}
    chosen[nc++]=v;
    // block bi now assigned; its cnt irrelevant
    int r=rec(left-1);
    nc--; val[bi]=-1;
    if(r){ return 1;}   // keep state for printing: caller prints before unwinding? simple: store solution
    for(int k=0;k<nt;k++){int c=tr[k]; if(--forb[c]==0)cnt[c/s]++;}
  }
  return 0;
}
int main(int argc,char**argv){
  s=atoi(argv[1]);n=atoi(argv[2]);N=s*n;
  for(int i=0;i<n;i++){cnt[i]=s;val[i]=-1;}
  // symmetry: forbid (a in block0, b in block n-1) with off sum > s-1 : handle by branching over pairs
  long long total=0; int found=0;
  for(int o1=0;o1<s&&!found;o1++) for(int o2=0;o2+o1<=s-1&&!found;o2++){
    for(int i=0;i<N;i++)forb[i]=0; for(int i=0;i<n;i++){cnt[i]=s;val[i]=-1;} nc=0;
    int tr[400],nt=0;
    int pre[2]={o1,(n-1)*s+o2};
    int ok=1;
    for(int q=0;q<2&&ok;q++){int v=pre[q]; int bi=v/s; if(forb[v]){ok=0;break;}
      val[bi]=v; for(int k=0;k<nc;k++){int b=chosen[k]; forbid(2*b-v,tr,&nt); forbid(2*v-b,tr,&nt); if(((v+b)&1)==0)forbid((v+b)/2,tr,&nt);} chosen[nc++]=v;}
    if(!ok)continue;
    if(n==1){found=1;break;}
    if(rec(n-2)){found=1; for(int i=0;i<n;i++)printf("%d ",sol[i]); }
  }
  printf("\n%s s=%d n=%d nodes=%lld\n",found?"SAT":"UNSAT",s,n,nodes);
  return 0;
}
