class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> answer;
        int leftsum = 0;
        int rightsum = 0;
        int difference, sum = 0;

        left.push_back(0);
        for (int i = 0; i < nums.size() - 1; i++) {
            leftsum += nums[i];
            left.push_back(leftsum);
        }

        for (int i = 1; i < nums.size(); i++)
            sum += nums[i];
        right.push_back(sum);

        for (int i = 1; i < nums.size(); i++) {
            sum -= nums[i];
            right.push_back(sum);
        }

        for (int i = 0; i < nums.size(); i++) {
            difference = abs(left[i] - right[i]);
            answer.push_back(difference);
        }
        return answer;
    }
};
