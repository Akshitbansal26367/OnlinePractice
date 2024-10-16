import numpy as np

n, m = map(int, input().split())
lstA = []

for i in range(n):
    user_input = list(map(int, input().split()))
    lstA.append(user_input)

my_array = np.array(lstA)
mean_along_axis1 = np.mean(my_array, axis=1)
var_along_axis0 = np.var(my_array, axis=0)
deviation = np.std(my_array)

print(mean_along_axis1)
print(var_along_axis0)
print(deviation.round(11))
