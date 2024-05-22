class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxElement = *max_element(nums.begin(), nums.end());
        int score = 0;
        for (int i = 0; i < k; i++) {
            score += maxElement;
            maxElement++;
        }
        return score;
    }
};
