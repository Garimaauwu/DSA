class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0)
        {
            return num; 
        }
       if(num%2==0)
       {
        return numberOfSteps(num/2)+1;
       }
      
       return numberOfSteps(num-1)+1; 
        
    }
};