class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        vector<int> freq(1001, 0);
        int n = skill.size();
        long long sum = 0;
        for (auto nums : skill) {
            sum += nums;
            freq[nums]++;
        }
         int teams = n / 2;
        if(sum%teams!=0)
        {
            return -1;
        }
       
        long long totalsum = sum / teams;
        long long chemistry = 0, currskill = 0;
        long long remskill = 0;
        for (int i = 0; i < skill.size(); i++) {
            currskill = skill[i];
            remskill = totalsum - currskill;
            if (freq[remskill] <= 0) {
                return -1;
            }
            chemistry += currskill * remskill;
            freq[remskill] -= 1;
        }
        return chemistry/2;
    }
};