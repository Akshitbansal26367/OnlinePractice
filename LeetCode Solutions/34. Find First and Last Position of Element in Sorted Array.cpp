class Solution {
public:
    int first_occurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return first;
    }

    int last_occurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = first_occurrence(nums, target);
        int last = last_occurrence(nums, target);
        if (first == -1) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        } else
            ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
