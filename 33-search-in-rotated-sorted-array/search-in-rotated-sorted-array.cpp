class Solution {
public:
    int  search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high-low) / 2;
            if (nums[mid] == target) {
                return mid;
            }     
        
            else if (nums[low] <= nums[mid]) // left half is sorted
            {
                if (nums[mid] >= target && nums[low] <= target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            else // right half is sorted
            {
                if (nums[mid] <= target && nums[high] >= target) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
