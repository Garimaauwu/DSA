class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        
        std::unordered_map<int, int> um;
        int count = 0;

        for (int x : nums) {
            um[x]++;
        }

        for (auto x : um) {
            int freq = x.second;

            
            if (freq == 1) {
                return -1;
            }

            
            count += freq/3 ;
            if (freq % 3) {
                count++;
            }
        }


        return count;
    }
};