class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative_dig_count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
                negative_dig_count++;
        }

        if (negative_dig_count % 2 == 0)
            return 1;
        else
            return -1;
    }
};
