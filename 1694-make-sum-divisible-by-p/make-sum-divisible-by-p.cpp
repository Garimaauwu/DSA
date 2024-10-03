class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long sum = 0;
        int mini = INT_MAX;
        long long prefixsum = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int rem = sum % p;
        if (rem == 0) {
            return 0;
        }

        mp[0] = -1;
        for (int i = 0; i < n; i++) {
            prefixsum = (prefixsum + nums[i]) % p;

            int part = (prefixsum - rem + p) % p;

            if (mp.find(part) != mp.end()) {
                mini = min(mini, i - mp[part]);
            }

            mp[prefixsum] = i;
        }

        if (mini == n) {
            return -1;
        }
        return mini == INT_MAX ? -1 : mini;
    }
};

// find out the smallest subarray --->sum equals rem