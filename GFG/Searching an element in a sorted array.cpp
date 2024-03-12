int searchInSorted(int arr[], int N, int K) 
    { 
        int left = 0;
        int right = N - 1;
        
        while (left <= right) {
            int mid = left + (right - left)/2;
            
            if (arr[mid] == K)
                return 1;
            
            else if (arr[mid] > K)
                right = mid - 1;
            
            else
                left = mid + 1;
        }
        
        return -1;
    }
