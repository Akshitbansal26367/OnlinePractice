int firstOccurrence(vector<int>& arr, int n, int key) 
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
	int ans = -1;
	
	while (start <= end) 
    {	
		if(arr[mid] == key) 
        {
			ans = mid;
			end = mid - 1;
		}
		
		else if(key > arr[mid])
			start = mid + 1;
		
		else
			end = mid - 1;	

        mid = start + (end - start)/2;
	}
	
	return ans;
}

int lastOccurrence(vector <int>&arr, int n, int key) 
{
    int start = 0;
    int end = n -1;
    int mid = start + (end - start)/2;
	int ans = -1;
	
	while (start <= end) 
    {
		if(arr[mid] == key) 
        {
			ans = mid;
			start = mid + 1;
		}
		
		else if(key > arr[mid])
			start = mid + 1;
		
		else
			end = mid - 1;	
        
        mid = start + (end - start)/2;
	}
	
	return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    int x = firstOccurrence(arr, n, k);
    int y = lastOccurrence(arr, n, k);

    return {x,y};
}
