import numpy as np

n = int(input())
lst = []

for i in range(n):
    user_input = list(map(float, input().split()))
    lst.append(user_input)

arr = np.array(lst)
determinant = np.linalg.det(arr)
print(determinant.round(2))
