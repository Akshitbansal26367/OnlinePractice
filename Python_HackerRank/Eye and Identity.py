import numpy as np
np.set_printoptions(legacy='1.13')
n, m = map(int, input().split())

output_array = np.eye(n, m)
print(output_array)
