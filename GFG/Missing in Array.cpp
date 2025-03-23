class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        long long int n = arr.size() + 1;
        long long int sum = n * (n + 1) / 2;
        
        for (long long int i = 0; i < arr.size(); i++)
            sum -= arr[i];
        return sum;
    }
};
