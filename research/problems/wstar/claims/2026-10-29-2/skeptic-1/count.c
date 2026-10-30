#include <stdio.h>
#include <stdlib.h>
int n,s,col[200]; long long cnt[200];
int ok(int k){for(int d=1;k-2*d>=0;d++){int a=col[k-2*d],b=col[k-d],c=col[k]; if(b-a==c-b) return 0;} return 1;}
void rec(int k){ cnt[k]++; if(k==n) return;
  for(int c=0;c<s;c++){col[k]=c; if(ok(k)) rec(k+1);} }
int main(int ac,char**av){n=atoi(av[1]);s=atoi(av[2]);rec(0);for(int i=1;i<=n;i++)printf("%d %lld\n",i,cnt[i]);}
