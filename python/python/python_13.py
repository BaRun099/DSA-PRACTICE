from array import *
from logging.config import valid_ident
arr = array('i',[])

n=int(input("Enter the length of the Array"))

for i in range(n):
    x = int(input("Enter the next value:"))
    arr.append(x)


print(arr)

val= int(input("Enter the Value for searching:"))

k=0
for e in arr:
    if e==val:
        print(k)
        break

    k+=1
print(arr.index(val))