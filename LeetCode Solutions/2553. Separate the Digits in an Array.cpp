class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> temp;
            while (nums[i] > 0) {
                temp.push_back(nums[i] % 10);
                nums[i] = nums[i] / 10;
            }

            for (int i = temp.size() - 1; i >= 0; i--)
                answer.push_back(temp[i]);
        }
        return answer;
    }
};
