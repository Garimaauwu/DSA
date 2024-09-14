class Solution {
public:

unordered_map<int,int>track;
vector<int>temp;
vector<vector<int>>res;
int n;

void solve(unordered_map<int,int>count,vector<int>& temp)
{
    if(temp.size()==n)
    {
        res.push_back(temp);
        return ;
    }
 for(auto &[num,count]:track)
 {
    if(count==0)
    {
        continue;
    }
    temp.push_back(num);
    track[num]--;
    solve(track,temp);

    temp.pop_back();
    track[num]++;
 }
    
     }





  

    vector<vector<int>> permuteUnique(vector<int>& nums) {
         n=nums.size();
    for(auto &num:nums)  //keeeping the count of every element nums[i] in num ;
    {
      track[num]++;
    }

    solve(track, temp);//sending the track map and temp vector 
    return res; 



    }
};