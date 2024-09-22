class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
int j=-1;
//this loop is to find out the first index where 0 is present 
for(int i=0;i<n;i++)
{
   
    if(nums[i]==0)
    {
        j=i;
        break;
    }
} 
if(j==-1)//this means there is not a single index where 0 is present 
{
    return ;
}     

for(int i=j+1;i<n;i++)
{
    if(nums[i]!=0)
    {
        swap(nums[i],nums[j]);
        j++;  //j will always be on the index where 0 is present 
    }
}
        
    }
};