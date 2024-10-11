class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        vector<int> chairs(n, -1);
        int arrivaltime = times[targetFriend][0];
        sort(begin(times), end(times));
        for (vector<int>& it : times) {
            int arrival = it[0];
            int departure = it[1];
            for (int i = 0; i < n; i++) {
                if (chairs[i] <= arrival) {
                    chairs[i] = departure;
                
                if (arrival == arrivaltime) {
                    return i;
                }
                break;
                }
            }
        }

        return -1;
    }
};