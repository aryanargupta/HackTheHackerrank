# original question: https://www.hackerrank.com/challenges/matrix-script/

'''
Neo has a complex matrix script. The matrix script is a  X  grid of strings. It consists of alphanumeric characters,
spaces and symbols (!,@,#,$,%,&).

To decode the script, Neo needs to read each column and select only the alphanumeric characters and connect them.
Neo reads the column from top to bottom and starts reading from the leftmost column.
If there are symbols or spaces between two alphanumeric characters of the decoded script, then Neo replaces them with a single space '' for better readability.
Neo feels that there is no need to use 'if' conditions for decoding.
Alphanumeric characters consist of: [A-Z, a-z, and 0-9].
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
