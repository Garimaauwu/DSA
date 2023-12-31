
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        unordered_map<char, int> lastOccurrence;
        int res = -1;

        for (int i = 0; i < n; i++) {
            if (lastOccurrence.find(s[i]) != lastOccurrence.end()) {
               
                res = max(res, i - lastOccurrence[s[i]] - 1);
            } else {
        
                lastOccurrence[s[i]] = i;
            }
        }

        return res;
    }
};


