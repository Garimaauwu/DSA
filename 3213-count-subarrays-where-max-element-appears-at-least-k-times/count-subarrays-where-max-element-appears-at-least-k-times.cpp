class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         int n = nums.size();
        int max_ele = INT_MIN;
        for(int i = 0; i < n; i++) max_ele = max(max_ele, nums[i]);

        int l = 0, r = 0;
        int count = 0;
        long long ans = 0;

        while(r < n)
        {
            if(nums[r] == max_ele) count++;

            if(count < k) r++;
            else if(count == k)
            {
                while(count == k and l < n)
                {
                    ans += (n - r);
                    if(nums[l] == max_ele) count--;
                    l++;
                }
                r++;
            }
        }

        return ans;
    }
};