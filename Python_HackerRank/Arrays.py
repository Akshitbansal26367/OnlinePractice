import numpy

def arrays(arr):
    ans_ar = numpy.array(arr[len(arr) - 1:: -1], float)
    return ans_ar

arr = input().strip().split(' ')
result = arrays(arr)
print(result)
