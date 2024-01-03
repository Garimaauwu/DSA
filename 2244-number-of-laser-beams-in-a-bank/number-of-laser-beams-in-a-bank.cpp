class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int n=bank.size(),prev=0,res=0; 
       for(int i=0;i<n;i++)
       {
          int curr=0;
          for(char &ch : bank[i])
          {
              if(ch=='1')
              {
                  curr++;
              }  
          }
           res+=prev*curr;
          if(curr!=0)
          {
              prev=curr;
          }
       } 
       return res;
    }
};