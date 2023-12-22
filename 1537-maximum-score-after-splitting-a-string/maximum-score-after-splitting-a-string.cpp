class Solution {
public:
    int maxScore(string s) {
      int n= s.length(); 
      int result =INT_MIN; 
      int totalone=count(s.begin(),s.end(),'1');
      int zero=0, leftone=0; 
      for(int i=0;i<=n-2;i++)
      {  if(s[i]=='1')
       leftone++; 
                 
                    else   
                zero++;
          result = max(result,(zero-leftone));
      }  
      if(s[n-1]==0)
      {
          leftone++;
      }
      return result+totalone ; 
    }
};