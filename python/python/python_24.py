import numbers
from tokenize import Double


def is_even(n):
    return n%2==0

nums = [2,3,6,4,9,7,5,10,45,12]

even = list(filter(is_even,nums))

print(even)
#to find even nos by lambda functions:

numbers = [19,21,22,24,26,27,89,43,45,88,28,26]

evens = list(filter(lambda m: m%2 == 0,numbers))

Double = list(map(lambda m : m*2,evens))

print(evens)
print(Double)