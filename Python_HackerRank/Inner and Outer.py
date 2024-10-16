import numpy as np
lstA = list(map(int, input().split()))
lstB = list(map(int, input().split()))

arrayA = np.array(lstA)
arrayB = np.array(lstB)

print(np.inner(arrayA, arrayB))
print(np.outer(arrayA, arrayB))
