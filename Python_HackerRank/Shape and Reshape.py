import numpy as np

lst = list(map(int, input().split()))
arr = np.array(lst)
arr.shape = (3, 3)
print(arr)
