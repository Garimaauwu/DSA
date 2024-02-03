
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(k, 0);
        for(int i=1; i<=n; i++){
            int maxA=0, ans=0;
            int k0=min(k, i);
            for (int j=1; j<=k0; j++) {
                maxA=max(maxA, arr[i-j]); 
                ans=max(ans, dp[(i-j)%k]+j*maxA);
            }
            dp[i%k]=ans;
        }
        return dp[n%k];       
    }
};