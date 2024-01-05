void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int maxProductDifference(int* arr, int n){
    int product = 0;
    for(int i = 0; i<n; i++) {
        for(int j = i +1; j<n; j++) {
            if(arr[i]>arr[j]) {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    
    int max = arr[n-1] * arr[n-2];
    int min = arr[0] * arr[1];
    return (max-min);
}
