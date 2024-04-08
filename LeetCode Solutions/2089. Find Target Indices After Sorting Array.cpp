class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> sortedArray;
        vector<int> index;

        for (int i = 0; i < nums.size(); i++)
            sortedArray.push_back(nums[i]);

        for (int i = 0; i < sortedArray.size(); i++) {
            if (sortedArray[i] == target)
                index.push_back(i);
        }
        return index;
    }
};
