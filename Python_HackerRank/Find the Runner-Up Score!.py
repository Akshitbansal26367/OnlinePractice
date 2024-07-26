if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse = True)
    #print(arr)
    largest = arr[0]
    for i in range(1,len(arr)):
        if arr[i] != largest:
            print(arr[i])
            break
