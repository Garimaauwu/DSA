class Solution {
public:

  
    int fx(int n){
        int sum = 0;
        while(n!=0){
            sum = sum + (n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n == 1)return true;
        unordered_set<int> s;
        s.insert(n);
        while(1){
            int k = fx(n);
            if(s.count(k))return false;
		
            if(k == 1)return true;
            s.insert(k);
            n = k;
        }
        return false;
    }
};