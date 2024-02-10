class Solution {
public:
 bool ispalindrome(string s,int begin,int end )
{
    string sub = s.substr(begin, end - begin + 1);
    string news = sub;
    reverse(news.begin(), news.end());
    return news == sub;
}
    int countSubstrings(string s) {
        int ans =0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(ispalindrome(s,i,j))
                {
                        ans++;
                }
               
            }
        }
        return ans;
    }
};