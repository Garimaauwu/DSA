class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(begin(s1), end(s1));
        int n = s1.length();
        int m = s2.length();
        if (n > m) {
            return false;
        }
        for (int i = 0; i <= m - n; i++) {
            string subb = s2.substr(i, n);
            sort(subb.begin(), subb.end());
            if (subb == s1) {
                return true;
            }
        }
        return false;
    }
};