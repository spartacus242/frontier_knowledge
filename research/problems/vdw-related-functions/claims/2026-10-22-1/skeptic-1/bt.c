// independent plain backtracker: longest prefix length L such that a 3-AP-free choice x_i in [s(i-1), si-1] exists; M = L+1
#include <stdio.h>
#include <stdlib.h>
int s, best=0, x[200]; unsigned char used[2000]; long long nodes=0;
void rec(int i){ // choose x_i (0-based block i)
  nodes++;
  if(i>best){best=i;}
  for(int j=0;j<s;j++){
    int v=s*i+j, ok=1;
    for(int k=0;k<i && ok;k++){ int a=x[k]; if(((a+v)&1)==0 && used[(a+v)/2]) ok=0; }
    if(!ok) continue;
    x[i]=v; used[v]=1; rec(i+1); used[v]=0;
  }
}
int main(int c,char**v){ s=atoi(v[1]); rec(0); printf("s=%d longest=%d M=%d nodes=%lld\n",s,best,best+1,nodes); }
