class Solution {
public:
unordered_map<char, int>symbol={{'[',-1},{'{',-2}, {'(',-3},{']',1},{'}',2}, {')',3} };
  stack<char>st; 
    bool isValid(string s) {
        
  for(char bracket :s )
  {
      if(symbol[bracket]<0)
      {
          st.push(bracket);
      }
      else {
          if(st.empty())
          return false; 
          char top=st.top();
          st.pop(); 
          if(symbol[top]+symbol[bracket]!=0)
          {
              return false ;
          }
      }
  }
  if (st.empty())
  return true ;
  else 
  return false ; 
  
  }
};