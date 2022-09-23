
from numpy import * 
#sum of two array elements:
#arr1= array([1,2,3,4,5,6])
#arr2= array([6,4,5,7,8,3])
#arr3 = arr1+arr2
#print(arr3)
#sum of array Element:
#arr = array([0,30,60,45,90])
#print(sum(arr))
#find the max element form the array:
arr= array([1,20,45,120,78,45,65])
print(max(arr))

arr= array([1,20,45,120,78,45,65])
print(min(arr))

#to concatenate two array:
arr1= array([7,5,6,4,9])
arr2= array([10,12,47,25,14])

print(concatenate([arr1,arr2]))
#array(Aliasing):
arr1= array([2,5,6,4,9])

arr2=arr1
print(arr1)
print(arr2)

#coping of a array:

arr1 = array([10,45,23,47,21])
#this is the function creates a copy of arr1(shallow copy):
arr2=arr1.view()
print(arr1)
print(arr2)

#this is the function creates a copy of arr1(deep copy):

arr1= array([10,23,45,60,45])
arr2=arr1.copy()
print(arr1)
print(arr2)