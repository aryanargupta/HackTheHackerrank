'''
original question: https://www.hackerrank.com/challenges/matrix-script/
'''

#Explaination: Use a nested loop to concatenate the elements columnwise starting from the top left;
#followed by constructing a regular expression as per the problem definition and using it to filter the extracted string

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
