class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int, int>mapp;
        for(int i=0;i<n;i++)
        {
           int k=target-nums[i];
            if(mapp.find(k)!=mapp.end())
            {
                  return { i,mapp[k]};
            }
            mapp[nums[i]]=i;

            

        }
       return {-1,-1};
    }
};