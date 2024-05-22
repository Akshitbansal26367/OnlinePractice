class Solution {
public:
    int lastNegativeOccurrence(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < 0) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return ans;
    }

    int firstPositiveOccurrence(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int ans = nums.size();
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > 0) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }

    int maximumCount(vector<int>& nums) {
        int firstpos = firstPositiveOccurrence(nums);
        int lastpos = lastNegativeOccurrence(nums);
        int firstcount = nums.size() - firstpos;
        int lastcount = lastpos + 1;
        return max(firstcount, lastcount);
    }
};
