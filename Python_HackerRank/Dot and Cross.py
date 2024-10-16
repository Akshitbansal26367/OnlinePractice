import numpy as np

n = int(input())
lstA = []
lstB = []

for i in range(n):
    user_input = list(map(int, input().split()))
    lstA.append(user_input)

arr1 = np.array(lstA)

for i in range(n):
    user_input = list(map(int, input().split()))
    lstB.append(user_input)
    
arr2 = np.array(lstB)

multiplication_result = np.dot(arr1, arr2)
print(multiplication_result)
