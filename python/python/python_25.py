from functools import reduce
import numbers
from tokenize import Double


num = [2,4,5,6,7,8,9,3]

even = list(filter(lambda n : n%2 == 0,num))

double = list(map(lambda n : n*2,even))

print(double)

sum = reduce(lambda a,b : a+b,double)

print(sum)

#use of map, filter, reduce