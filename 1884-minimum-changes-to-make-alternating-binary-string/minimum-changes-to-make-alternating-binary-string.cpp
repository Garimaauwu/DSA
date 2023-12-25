class Solution {
public:
    int minOperations(string s) {
       int n= s.length();
       int count01=0,count10=0;
       for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
 if(s[i]=='1')
{
    count01++;
}
        }
        else 
        {
            if(s[i]=='0')
            {
                count01++;
            }
        }

    }
   return  min(count01,n-count01);
    }
};