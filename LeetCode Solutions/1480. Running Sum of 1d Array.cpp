class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        int length = nums.size();
        int sum = 0;

        for (int i = 0; i < length; i++) {
            sum = sum + nums[i];
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};
