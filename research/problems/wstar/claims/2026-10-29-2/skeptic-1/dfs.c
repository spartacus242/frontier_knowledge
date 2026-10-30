// independent brute-force backtracking: count/find good s-colourings of [1,n]
#include <stdio.h>
#include <stdlib.h>
int n,s,col[200]; long long nodes=0,found=0;
int ok(int k){ // position k newly coloured, check APs ending at k
  for(int d=1;k-2*d>=0;d++){int a=col[k-2*d],b=col[k-d],c=col[k]; if(b-a==c-b) return 0;}
  return 1;}
void rec(int k){ nodes++;
  if(k==n){found++; if(found==1){for(int i=0;i<n;i++)printf("%d",col[i]+1);printf("\n");} return;}
  for(int c=0;c<s;c++){col[k]=c; if(ok(k)) rec(k+1);} }
int main(int ac,char**av){n=atoi(av[1]);s=atoi(av[2]);rec(0);
  printf("n=%d s=%d good colourings=%lld nodes=%lld\n",n,s,found,nodes);}
