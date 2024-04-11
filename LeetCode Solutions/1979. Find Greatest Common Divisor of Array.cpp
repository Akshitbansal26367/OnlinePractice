
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        int answer;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max)
                max = nums[i];

            if (nums[i] < min)
                min = nums[i];
        }

        if (max % min == 0)
            return min;

        for (int i = min - 1; i >= 1; i--) {
            if (max % i == 0 && min % i == 0) {
                answer = i;
                break;
            }
        }
        return answer;
    }
};
