class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.length(),res=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                 res=j-i-1>res?j-i-1:res;               
            }   
        }
    
             return res;
        
}
};