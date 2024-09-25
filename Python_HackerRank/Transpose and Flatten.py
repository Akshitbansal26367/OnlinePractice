import numpy as np

list1 = []
n, m = map(int, input().split())

for i in range(n):
    user_input = list(map(int, input().split()))
    list1.append(user_input)

array_obj = np.array(list1)

transpose_matrix = np.transpose(array_obj)
print(transpose_matrix)

flatten_matrix = array_obj.flatten()
print(flatten_matrix)
