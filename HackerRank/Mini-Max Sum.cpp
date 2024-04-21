void miniMaxSum(vector<int> arr) {
    long int min = arr[0], max = arr[0];
    long int sum = 0;
    
    for (int i = 0; i<arr.size(); i++) {
        if(arr[i] < min)
            min = arr[i];
        
        else if(arr[i] > max)
            max = arr[i];
        sum += arr[i];
    }
    cout << sum - max << " " << sum - min;
}
