class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        //sort the intervals //
        sort(begin(intervals),end(intervals));
       //deifne min heap to store the end of intervals 
        priority_queue<int,vector<int>,greater<int>>pq;
        //iterate through the vector intervals one by one and check 
        for(auto &it : intervals)
        {
            int start=it[0];
            int end=it[1];
            if(!pq.empty() && pq.top()<start)
            {
                pq.pop();
            }
            pq.push(end);
        }
        //return the size of priority queue
        return pq.size();
    }
};