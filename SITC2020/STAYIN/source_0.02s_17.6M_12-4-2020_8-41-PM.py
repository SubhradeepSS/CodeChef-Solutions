# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    c=0
    a=None
    for i in range(2,n):
        if n%i==0:
            c+=1
            if c==2:
                a=i
                break
    util=n
    b=util
    util//=10
    pos=1
    i=2
    while util>0:
        if util>b:
            b=util
            pos=i
        i+=1
        util=util//10
    s=list(map(int,str(n)))
    for i in range(len(s)):
        if s[i]%2==0:
            s[i]+=1
    s=[str(i) for i in s]
    print(str(a)+" "+str(pos)+" "+"".join(s))