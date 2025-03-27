class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int size = nums.size();
        long long answer = 0;

        for (int i = 0; i < size; i++) {
            int minVal = nums[i];
            int maxVal = nums[i];
            for (int j = i; j < size; j++) {
                /*minVal = nums[j] < minVal ? nums[j] : minVal;
                maxVal = nums[j] > maxVal ? nums[j] : maxVal;*/
                minVal = min(nums[j], minVal);
                maxVal = max(nums[j], maxVal);
                answer += maxVal - minVal;
            }
        }
        return answer;
    }
};
