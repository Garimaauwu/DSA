class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(begin(skill),end(skill));
        int i=0,j=skill.size()-1;
        int sum=skill[i]+skill[j];
        long long totalskill=0,chemistry=0;
        while(i<j)
        {
            totalskill=skill[i]+skill[j];
            if(totalskill != sum)
            {
                return -1;
            }
            chemistry+=skill[i]*skill[j];
            i++;
            j--;
        }
        return chemistry;

    }
};