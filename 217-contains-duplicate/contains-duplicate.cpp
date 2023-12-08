class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m ;
        for(int count: nums)
        {
             if(m[count]>=1)
             return true ; 
             m[count]++; 
        } 
        return false ; 

    }
};