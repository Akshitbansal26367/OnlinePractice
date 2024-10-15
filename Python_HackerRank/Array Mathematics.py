import numpy as np
n, m = map(int, input().split())
lstA = []
lstB = []

for i in range(n):
    user_input = list(map(int, input().split()))
    lstA.append(user_input)

arrayA = np.array(lstA)

for i in range(n):
    user_input = list(map(int, input().split()))
    lstB.append(user_input)

arrayB = np.array(lstB)

print(np.add(arrayA, arrayB))
print(np.subtract(arrayA, arrayB))
print(np.multiply(arrayA, arrayB))
print(np.floor_divide(arrayA, arrayB))
print(np.mod(arrayA, arrayB))
print(np.power(arrayA, arrayB))
