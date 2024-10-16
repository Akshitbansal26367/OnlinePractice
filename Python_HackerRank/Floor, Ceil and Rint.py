import numpy as np
np.set_printoptions(legacy='1.13')
lstA = list(map(float, input().split()))
arr = np.array(lstA)
print(np.floor(arr))
print(np.ceil(arr))
print(np.rint(arr))
