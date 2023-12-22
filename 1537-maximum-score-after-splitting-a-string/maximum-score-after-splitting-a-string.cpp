class Solution {
public:
    int maxScore(string s) {
      int n= s.length(); 
      int result =INT_MIN; 
      int totalone=count(s.begin(),s.end(),'1');
      for(int i=0;i<=n-2;i++)
      {
          int zero=0;
          int leftone=0; 
          for(int j=0;j<=i;j++)
          {
                if(s[j]=='0')
                {
                    zero++; 
                }
                
              if(s[j]=='1')
              {
                  leftone++; 
              }
          }
         
          result = max(result,zero+(totalone-leftone));
      }  
      return result ; 
    }
};