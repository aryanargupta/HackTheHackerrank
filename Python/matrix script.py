import re
n,m = map(int,input().split())
a = []
sym = ['$','#','%','!']
for i in range(n):
    a.append(input())
s = ""
for i in range(m):
    for j in a:
        s = s+j[i]
    
pat = r'(?<=[a-zA-Z0-9])[^a-zA-Z0-9]+(?=[a-zA-Z0-9])'
print(re.sub(pat,' ',s))