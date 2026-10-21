# Check witnesses exactly as the definitions are quoted.
import sys
W = {
 ("M",4,18): [2,4,11,12,19,23,24,30,32,38,43,47,50,55,59,61,66,69],
 ("M",5,30): [2,6,12,15,20,26,33,35,42,48,53,56,62,66,74,75,83,87,93,96,101,107,114,116,123,129,134,137,143,147],
 ("M",6,37): [4,11,13,19,24,31,40,47,52,59,65,68,74,79,88,95,98,103,113,115,121,130,133,140,148,155,160,164,169,176,184,191,194,203,209,210,216],
 ("G",6,22): [0,3,8,12,18,22,25,30,34,40,45,51,53,59,64,70,71,74,79,85,86,92],
}
def ap_free(X):
    S=set(X)
    for i in range(len(X)):
        for j in range(i+1,len(X)):
            if 2*X[j]-X[i] in S: return False
    return True
ok=True
for (t,s,n),X in W.items():
    assert len(X)==n, (t,s,n,len(X))
    assert all(X[i]<X[i+1] for i in range(n-1)), "not increasing"
    if t=="M":
        blocks = all((i)*s <= X[i] <= (i+1)*s-1 for i in range(n))   # x_i in [(i-1)s, is-1], 1-indexed
        print(t,s,n,"blocks ok:",blocks,"3AP-free:",ap_free(X))
        ok &= blocks and ap_free(X)
    else:
        gaps = all(X[i+1]-X[i]<=s for i in range(n-1))
        print(t,s,n,"gaps<=s:",gaps,"3AP-free:",ap_free(X))
        ok &= gaps and ap_free(X)
print("ALL WITNESSES OK" if ok else "WITNESS FAILURE")
