class Solution {
public:
    bool isPathCrossing(string path) {
     int x=0,y=0; 
        unordered_set<string>st;
        st.insert("0,0");
       
        for (char ch:path)
        {
           
            if(ch=='N') y++;
            else if (ch=='S') y--;
            else if(ch=='W') x--;
            else x++;
            string co = to_string(x)+ ","+ to_string(y);
            if(st.find(co)!=st.end())
            return true ; 
            st.insert(co);


        }
return false; 
    }
};