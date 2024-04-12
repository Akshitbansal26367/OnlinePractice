class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int i, temp;
        sort(nums.begin(), nums.end());

        for (i = 0; i < nums.size(); i = i + 2) {
            temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;
        }
        return nums;
    }
};
