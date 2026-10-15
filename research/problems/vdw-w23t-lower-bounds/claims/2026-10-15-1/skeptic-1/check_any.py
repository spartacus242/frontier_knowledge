import sys
s=open(sys.argv[1]).read().strip(); n=len(s)
print('len',n,set(s))
z=[i for i in range(n) if s[i]=='0']; zs=set(z)
print('3APs colour0',sum(1 for i in z for j in z if j>i and 2*j-i in zs))
best=0
for d in range(1,n):
  for a in range(min(d,n)):
    run=0
    for x in range(a,n,d):
      run=run+1 if s[x]=='1' else 0; best=max(best,run)
print('longest colour1 AP',best)
