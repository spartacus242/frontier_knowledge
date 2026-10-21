#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int s; int forb[3000]; int pos[400]; int best=0; long long nodes=0;
void dfs(int i){ nodes++;
  if(i>best){best=i; fprintf(stderr,"depth %d\n",best);}
  int lo=i*s;
  for(int v=lo; v<lo+s; v++){ if(forb[v]) continue;
    for(int j=0;j<i;j++) forb[2*v-pos[j]]++;
    pos[i]=v; if(i+1>best){best=i+1; fprintf(stderr,"depth %d\n",best);}
    int f=0; for(int u=(i+1)*s;u<(i+1)*s+s;u++) if(!forb[u]){f=1;break;}
    if(f) dfs(i+1);
    for(int j=0;j<i;j++) forb[2*v-pos[j]]--;
  }
}
int main(int c,char**a){ s=atoi(a[1]); dfs(0);
 printf("M(3,%d) = %d  (max free %d) nodes=%lld\n",s,best+1,best,nodes); }
