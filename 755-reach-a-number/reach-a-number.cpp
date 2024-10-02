class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        int steps=0,sum=0;
        while(sum<target)
        {
           steps++;
           sum+=steps;
        }
        int diff=sum-target;
        if(sum==target || diff%2==0)
        {
            return steps;
        }
        else {
            if((steps+1)%2==1)
            {
                return steps+1;
            }
            else{
                return steps+2;
            }
        }
       
    }
};