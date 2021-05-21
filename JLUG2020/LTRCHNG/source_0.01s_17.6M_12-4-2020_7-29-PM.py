# cook your dish here
t=int(input())
vowels=['a','e','i','o','u']
for _ in range(t):
    s=input()
    ans=""
    for ch in s:
        if ord(ch)!=122:
            cha=chr((ord(ch)+1))
        else:
            cha='a'
        if cha in vowels:
            cha=chr(ord(cha)-32)
        ans+=cha
    print(ans)