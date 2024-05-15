pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr, arr + n);
    int floor_val = -1, ceil_val = -1;
    int low = 0, high = n - 1;
    
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == x) {
            floor_val = ceil_val = arr[mid];
            break;
        }
        else if(arr[mid] < x) {
            floor_val = arr[mid];
            low = mid + 1;
        }
        else {
            ceil_val = arr[mid];
            high = mid - 1;
        }
    }
    return {floor_val,ceil_val};
}
