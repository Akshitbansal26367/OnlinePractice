class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> answer;
        int length = nums.size();
        int i;
        for (i = 0; i < length; i++)
            answer.push_back(nums[nums[i]]);
        return answer;
    }
};
