#include <stdio.h>
#include <stdlib.h>
int s,n,x[64];
int ok(int k){for(int j=k-1;j>=1;j--){int t=2*x[j]-x[k]; if(t<0)continue; int i=t/s; if(i<j&&x[i]==t)return 0;}return 1;}
int rec(int k){ if(k==n)return 1; for(int v=k*s;v<k*s+s;v++){x[k]=v; if(ok(k)&&rec(k+1))return 1;} return 0;}
int main(int c,char**a){s=atoi(a[1]);for(n=1;;n++){if(!rec(0)){printf("M(3,%d)=%d\n",s,n);return 0;}}}
