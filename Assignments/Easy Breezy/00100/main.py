# Name : Sandesh Pathak
# P100 - The 3n+1 Problem 

import sys

length = 0

def fun(n):
    global length
    length+=1
    if 0 <  n and n < 1000000:
        if n == 1:
            return 1
        if n%2 ==0:
            return fun(n/2)
        else:
            return fun((n*3)+1)

          
for line in sys.stdin:
    try:
        max_length = []
      
        i = int(line.split()[0])
        j = int(line.split()[1])
      
        for x in range(i,j+1):
            length=0
            fun(x)
            max_length.append(length)
        print(f'{i} {j} {max(max_length)}')
      
    except EOFError:
        break
