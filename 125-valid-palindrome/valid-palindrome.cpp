class Solution {
public:
    bool helper(int start,int end,string& str )
    {
        if(start>=end)
        { 
             return true ;
        

        }
     
       else if( !isalnum(str[end] ) )
        {
           return  helper(start,end-1,str);
        }
      else  if(!isalnum(str[start])  )
        {
           return  helper(start+1,end,str);
        }
      else  if(tolower(str[start])!=tolower(str[end]))
        {
            return false ; 
        }
      else 
         return  helper(start+1,end-1,str);
       
    } 
    



    bool isPalindrome(string s) {
       int n=s.length();
       int start =0, end=n-1;
    return  helper(start,end,s);
      
    }
};