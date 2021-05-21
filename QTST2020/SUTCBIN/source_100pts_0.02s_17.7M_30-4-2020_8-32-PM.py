# cook your dish here
from collections import OrderedDict

n = int(input())

l = list(map(int, input().strip().split()))[:n]

d = OrderedDict()

for i in l:
    if i not in d:
        d[i] = 1
    else:
        d[i] += 1

for k in d:
    print(k + d[k], end=' ')
