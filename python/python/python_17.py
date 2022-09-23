#matrix and its operation:
from numpy import * 

m1=matrix('1 2 3;2 3 7;8 9 10')
m2= matrix('11 12 13;14 15 16;17 18 19')
m3=m1+m2
m4=m1 * m2
#to print a matrix:
print(m1)
print(m2)
#to print the diagonal element of a Matrix:
print(diagonal(m1))
#to find the min element from the Matrix:
print(m1.min())
#to find the max element from the Matrix:
print(m1.max())
#to find the sum of 2 Matrix:
print(m3)
#to find the Multiplication of 2 Matrix:
print(m4)