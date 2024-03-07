class Solution{
  public:
    int i, temp;
    void swapElements(int arr[], int n){
        for (i = 0; i<n - 2; i++) {
            temp = arr[i];
            arr[i] = arr[i + 2];
            arr[i + 2] = temp;
        }
    }
};
