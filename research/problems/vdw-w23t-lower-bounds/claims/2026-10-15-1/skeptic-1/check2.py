# independent naive check, 0-indexed positions (index shift does not affect AP structure)
s=open('/home/claude/frontier_knowledge/research/problems/vdw-w23t-lower-bounds/claims/2026-10-15-1/colouring_t33_n1068.txt').read().strip()
n=len(s); z=[i for i in range(n) if s[i]=='0']
bad3=sum(1 for i in z for j in z if j>i and 2*j-i<n and s[2*j-i]=='0')
print('3-APs in colour0:',bad3)
cnt=0
for d in range(1,n):
    for a in range(0,n-32*d):
        if all(s[a+k*d]=='1' for k in range(33)): cnt+=1
print('33-APs in colour1:',cnt)
cnt32=sum(1 for d in range(1,n) for a in range(0,n-31*d) if all(s[a+k*d]=='1' for k in range(32)))
print('32-APs in colour1:',cnt32)
