# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
setA = set(map(int,input().split()))
b = int(input())
setB = set(map(int,input().split()))
ans = setA | setB
print(len(ans))
