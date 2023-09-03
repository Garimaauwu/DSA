class Solution {
public:
    bool isPalindrome(string s) {
        string newstr; 
        for(int i=0; i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                newstr.push_back(s[i]+32);
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                newstr.push_back(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                newstr.push_back(s[i]);
            }
        }
    
        int i=0, j=newstr.length()-1;
        while(i<=j)
        {
            if(newstr[i]!=newstr[j])
            {
                return false;
            }
            i++;
            j--; 
        }
        return true ; 
    }
};