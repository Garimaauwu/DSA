class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
        int sum = 0;
        int maxi = nums[0];  // Initialize with the first element

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum < nums[i]) {
                sum = nums[i];
            }

            // Update maxi with the maximum of current sum and previous maxi
            maxi = max(maxi, sum);
        }

        return maxi;
    }
   
};
