english = int(input())
setEnglish = set(map(int, input().split()))
french = int(input())
setFrench = set(map(int, input().split()))
print(len(setEnglish.difference(setFrench)))
