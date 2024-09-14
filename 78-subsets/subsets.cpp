class Solution {
public:
vector<vector<int>>result; 
void solve(vector<int> nums, int index,vector<int> subset)
{
    
  if(index>=nums.size())
        {
            result.push_back(subset);
            return;
        }
        
        subset.push_back(nums[index]);
        solve(nums,index+1,subset);
        subset.pop_back();
        solve(nums,index+1,subset);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
      
        int index=0; 
      solve(nums,index,subset);
      return result;
    }
};