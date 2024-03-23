class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt;
        int i, j, count;
        for (i = 0; i < nums.size(); i++) {
            count = 0;
            for (j = 0; j < nums.size(); j++) {
                if (j != i && nums[j] < nums[i])
                    count++;
            }
            cnt.push_back(count);
        }
        return cnt;
    }
};
