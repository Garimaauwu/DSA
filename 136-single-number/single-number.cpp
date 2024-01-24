class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 1;
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[j]) {
                return nums[i];
            }
            j += 2;
        }
        return nums[nums.size() - 1];
    }
};
