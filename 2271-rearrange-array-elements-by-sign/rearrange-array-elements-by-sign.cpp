class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>positive;
        vector<int>negative; 
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                negative.push_back(nums[i]);
            }
            else 
            {
                positive.push_back(nums[i]);
            }
        }
        int n1=positive.size();
        int n2=negative.size();
        int i=0;
        while(i<n1)
        {
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
            i++;
        }
        return ans;
    }
};