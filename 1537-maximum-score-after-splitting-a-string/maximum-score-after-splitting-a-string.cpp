class Solution {
public:
    int maxScore(string s) {
      int n= s.length(); 
      int result =INT_MIN; 
      int totalone=count(s.begin(),s.end(),'1');
      int zero=0, leftone=0; 
      for(int i=0;i<=n-2;i++)
      {  if(s[i]=='0')
                  zero++;
                    else   
                leftone++; 
          result = max(result,zero+(totalone-leftone));
      }  
      return result ; 
    }
};