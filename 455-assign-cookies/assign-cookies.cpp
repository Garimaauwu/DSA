class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n= g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i=0;
        
    for(int j=0;i<n && j<m;j++)
               if(g[i]<=s[j])
               i++;
               
         return i ;
    }
};