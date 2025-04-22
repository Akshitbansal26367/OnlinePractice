class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        bool isFound = false;
        int index , i;
        
        for (int i = 0; i<N;  i++) {
            if (arr[i] == X) {
                index = i;
                isFound = true;
                break;
            }
        }
        
        if (isFound == true)
            return index;
        
        else
            return -1;
    }
};
