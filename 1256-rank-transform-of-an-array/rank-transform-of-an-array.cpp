class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        unordered_map<int,int> mpp;
        set<int> sett;
        for (auto it : arr) {
            sett.insert(it);
        }
        int rank = 1;
        for (auto nums : sett) {
            mpp[nums] = rank;
            rank++;
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mpp[arr[i]];
        }

        return arr;
    }
};