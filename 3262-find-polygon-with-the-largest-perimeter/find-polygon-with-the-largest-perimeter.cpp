class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        long long res=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<sum){
                       res=nums[i]+sum;
            }
            
            sum+=nums[i];

        }
        return res;
    }
};