import numpy
n = int(input("Enter the n = "))
arr = numpy.ndarray(shape=(n),dtype=int)
print("Enter %d Elements :"%n)
for i in range(n):
    arr[i] = int(input())
print("Array elements :", arr)
