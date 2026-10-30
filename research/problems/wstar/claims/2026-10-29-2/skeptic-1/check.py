import sys
def bad_aps(col):
    n=len(col); out=[]
    for a in range(n):
        for d in range(1,n):
            if a+2*d>=n: break
            c1,c2,c3=col[a],col[a+d],col[a+2*d]
            if c2-c1==c3-c2: out.append((a+1,d,(c1,c2,c3)))
    return out
if __name__=="__main__":
    s="115442212114125512525422541445455112411544221211412551252542254144545511242"
    col=[int(ch) for ch in s]
    print("len",len(col),"colours",sorted(set(col)),"range ok",all(1<=c<=5 for c in col))
    b=bad_aps(col); print("bad APs:",len(b),b[:5])
    # also check extending to 76 with each colour
    for c in range(1,6):
        print("append",c,len(bad_aps(col+[c])),"prepend",c,len(bad_aps([c]+col)))
