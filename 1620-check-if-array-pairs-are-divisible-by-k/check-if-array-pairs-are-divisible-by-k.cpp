class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int rem=0;
        int n=arr.size();
        vector<int>remm(k,0);
        for(int i=0;i<arr.size();i++)
        {
            rem=(arr[i]%k+k)%k;
            remm[rem]++;
        }
          if(remm[0]%2!=0)  //this check means that pairs are not possible if the number of integers that are completely divisible by k are not even
          {
            return false ;
          }
          
        for(rem=1;rem<=k/2;rem++)
        {
            int part=k-rem;
            if(remm[part]!=remm[rem])
            {
                return false;
            }
        }
        return true;
    }
};