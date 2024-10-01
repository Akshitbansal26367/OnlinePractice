import numpy as np

n, m = map(int, input().split())
lst = []

for i in range(n):
    user_input = list(map(int, input().split()))
    lst.append(user_input)

array_2D_object = np.array(lst)

sum_2D = np.sum(array_2D_object, axis=0)

product_2D = np.prod(sum_2D)
print(product_2D)
