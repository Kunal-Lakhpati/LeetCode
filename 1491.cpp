class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        double n=salary.size()-2;
        // vector<int> real(salary.size()-2);
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++)
        {
            sum=sum+salary[i];
        }
        if(salary.size()==3)
        {
            return sum;
        }
        sum=sum/n;
        return sum;
    }
};