from numpy import *
arr1 = array([
    [1,2,3,9,10,15],
    [5,6,7,8,11,12]
])
#to print 2d array:
print(arr1)
#to check Dimension/rank:
print(arr1.ndim)
#to check the size the Matrix:
print(arr1.size)
#to check the shape the Matrix:
print(arr1.shape)

#to convert 2D array into 1D Array:

arr2=arr1.flatten()
print(arr2)

#to convert 2D array into 3D Array:

arr3=arr2.reshape(3,4)    #3rows,4column
print(arr3)

#to convert 2 2D array from a 1D Array:

arr3= arr2.reshape(2,2,3)

print(arr3)