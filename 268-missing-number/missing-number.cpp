class Solution {
public:
    int missingNumber(vector<int>& nums) {
       unordered_map<int,int>mp; 
       for(auto num:nums)
       {
        mp[num] = true;
       }
       for(int i=0;i<=nums.size();i++)
       {
        if(mp.find(i)==mp.end())
        {
            return i ; 
        }
       }
      return 0;
    }
};