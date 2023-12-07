class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk; 
        for(char alpha :s )
        {
            if(!stk.empty() && alpha==stk.top())
            {
                stk.pop();
            }
            else 
            stk.push(alpha);
        }
        s.clear(); 
        while(!stk.empty())
        {
            s=stk.top()+s; 
            stk.pop();
        }
return s ; 
    }
};