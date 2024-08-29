M = int(input())
setM = set(map(int, input().split()))

N = int(input())
setN = set(map(int, input().split()))

setAns = setM.symmetric_difference(setN)
sorted_set = sorted(setAns)

for i in sorted_set:
    print(i)
