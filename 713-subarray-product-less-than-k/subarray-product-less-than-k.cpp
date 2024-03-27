class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int cnt=0,i=0,j=0,pro=1;
        while(j<nums.size()){
            pro*=nums[j];
            while(pro>=k && i<=j){
                pro=pro/nums[i];
                i++;
            }
            cnt+=j-i+1;
            j++;
        }
        return cnt;
    }
};