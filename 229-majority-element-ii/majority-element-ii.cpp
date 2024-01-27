class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>hashmap;
         vector<int>ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
          hashmap[nums[i]]++;
        }
        for(auto it: hashmap)
        {
            if(it.second>(n/3))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};