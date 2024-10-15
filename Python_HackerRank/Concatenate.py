import numpy as np

n, m, p = map(int, input().split())
lst1 = []
lst2 = []

for i in range(n):
    user_input = list(map(int, input().split()))
    lst1.append(user_input)

for i in range(m):
    user_input = list(map(int, input().split()))
    lst2.append(user_input)

my_arr1 = np.array(lst1)
my_arr2 = np.array(lst2)

output_array = np.concatenate((my_arr1, my_arr2), axis=0)
print(output_array)
