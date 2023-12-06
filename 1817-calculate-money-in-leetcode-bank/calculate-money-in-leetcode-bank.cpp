class Solution {
public:
    int totalMoney(int n) {
        int sum = 0, prev = 1, first = 0;

        
        for (int i = 0; i < n; i++) {
            if (i % 7 == 0) {
                first = prev;
                prev++;
            }
            
            sum += first;
            first++;
        }

        return sum;
    }
};
