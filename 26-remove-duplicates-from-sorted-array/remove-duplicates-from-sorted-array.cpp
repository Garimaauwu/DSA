class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //two pointer appproach//
        int n=nums.size();
        int j=1,i=0;
        for( j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
 };