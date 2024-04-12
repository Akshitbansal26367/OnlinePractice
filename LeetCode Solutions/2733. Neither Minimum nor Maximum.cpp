class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() == 1 || nums.size() == 2)
            return -1;
        int max = nums[0], min = nums[0];
        int answer;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max)
                max = nums[i];

            if (nums[i] < min)
                min = nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != min && nums[i] != max) {
                answer = nums[i];
                break;
            }
        }
        return answer;
    }
};
