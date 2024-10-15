import numpy as np
n, m = map(int, input().split())
lst = []

for i in range(n):
    user_input = list(map(int, input().split()))
    lst.append(user_input)

my_array = np.array(lst)
min_array = np.min(my_array, axis=1)
max_arr = np.max(min_array)
print(max_arr)
