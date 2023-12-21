class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n= candies.size();
        vector<bool>answer;
    int maxi= *max_element(candies.begin(), candies.end());
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxi)
            {
                     answer.push_back(true); 
            }
              else{
                    answer.push_back(false);
              }
           
        }
        return answer;
    }
};