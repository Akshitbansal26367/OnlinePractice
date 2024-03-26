class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int length = nums.size();
        int i, sum = 0;
        for (i = 1; i <= length; i++) {
            if (length % i == 0)
                sum = sum + (nums[i - 1] * nums[i - 1]);
        }
        return sum;
    }
};
