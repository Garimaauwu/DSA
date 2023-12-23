class Solution {
public:
    bool isPathCrossing(string path) {
     int x=0,y=0; 
        set<vector<int>>st;
        st.insert({0,0});
       
        for (char ch:path)
        {
           
            if(ch=='N') y++;
            else if (ch=='S') y--;
            else if(ch=='W') x--;
            else x++;
          
            if(st.find({x,y})!=st.end())
            return true ; 
            st.insert({x,y});


        }
return false; 
    }
};