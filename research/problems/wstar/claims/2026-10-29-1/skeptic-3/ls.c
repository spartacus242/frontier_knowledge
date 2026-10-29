/* Local search (min-conflicts with tabu + random restarts) hunting for a good
   s-colouring of [1,n]: cost = number of 3-APs whose colours form an AP (incl. mono).
   Usage: ls n s seconds seed */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
static int n,s; static int chi[200];
static int cost_of_pos(int p,int v){ /* violations involving position p if chi[p]=v */
  int c=0;
  for(int q=1;q<=n;q++){ if(q==p) continue; int cq=chi[q];
    int r=2*p-q; if(r>=1&&r<=n&&r!=q){ if(2*v-cq==chi[r]) c++; }        /* p middle */
    int r2=2*q-p; if(r2>=1&&r2<=n&&r2!=p){ if(2*cq-v==chi[r2]) c++; }   /* q middle */
    if(!((p+q)&1)){ int m=(p+q)/2; if(m!=p&&m!=q && !((v+cq)&1) && chi[m]==(v+cq)/2) c++; } } /* p,q ends: counted twice (once per end) */
  return c/2; } /* every AP containing p is enumerated exactly twice above */
static int total(){ int c=0; for(int a=1;a<=n;a++) for(int d=1;a+2*d<=n;d++) if(chi[a+d]-chi[a]==chi[a+2*d]-chi[a+d]) c++; return c; }
int main(int argc,char**argv){ n=atoi(argv[1]); s=atoi(argv[2]); int secs=atoi(argv[3]); srand(atoi(argv[4]));
  time_t t0=time(0); long long steps=0; int best=1<<30; int tabu[200][8]={{0}};
  while(time(0)-t0<secs){
    for(int i=1;i<=n;i++) chi[i]=1+rand()%s;
    int cur=total(); long long it=0;
    while(cur>0 && it<2000000){ it++; steps++;
      /* pick a random violated AP, then the best move among its three positions */
      int a,d; do{ a=1+rand()%n; d=1+rand()%(n/2); } while(a+2*d>n || chi[a+d]-chi[a]!=chi[a+2*d]-chi[a+d]);
      int cand[3]={a,a+d,a+2*d}; int bp=-1,bv=-1,bdelta=1<<30;
      for(int k=0;k<3;k++){ int p=cand[k]; int old=chi[p]; int base=cost_of_pos(p,old);
        for(int v=1;v<=s;v++) if(v!=old){ if(tabu[p][v]>it) continue; int delta=cost_of_pos(p,v)-base; if(delta<bdelta || (delta==bdelta && rand()%2)){bdelta=delta;bp=p;bv=v;} } }
      if(bp<0) continue;
      tabu[bp][chi[bp]]=it+5+rand()%10; chi[bp]=bv; cur+=bdelta;
      if(cur<best){ best=cur; }
    }
    if(cur!=total()){ printf("BUG cur mismatch\n"); return 2; }
    if(cur==0){ printf("FOUND n=%d s=%d ",n,s); for(int i=1;i<=n;i++) putchar('0'+chi[i]); printf("\n"); fflush(stdout); return 0; }
  }
  printf("NOTFOUND n=%d s=%d best=%d steps=%lld\n",n,s,best,steps); return 1; }
