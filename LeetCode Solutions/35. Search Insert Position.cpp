class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*int index, i;
        for (i = 0; i<nums.size(); i++) {
            if (nums[i] >= target) {
                index = i;
                break;
            }
        }
        return index;*/
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
