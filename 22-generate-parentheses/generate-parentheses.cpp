class Solution {
public:
vector<string>result;
bool isvalid(string current)
{
     int count=0;
   for(char ch:current)
   {
if(ch=='(')
{
    count++;
}
else {
    count--;
}
if(count<0)
    {
        return false ; 
    }
   }
    return count==0;
}


  void solve(int n, string& current)
  {
 if(current.length()==2*n)
        {
            if(isvalid(current))
            {
                result.push_back(current);
                
            }
            return ; 

        }
   current.push_back('(');
        solve(n,current);
        current.pop_back();

        current.push_back(')');
        solve(n,current);
        current.pop_back();

  }
    vector<string> generateParenthesis(int n) {
        string current ="";
        
        
       
        solve(n,current);
        return result;
    }
};