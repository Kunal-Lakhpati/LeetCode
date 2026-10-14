class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if (num*9<sum)
        {
            return ans;
        }
        for (int i=0;i<num;i++) 
        {
            if(sum>=9) 
            {
                ans+=to_string(9);
                sum-=9;
            } 
            else if(sum>0) 
            {
                ans+=to_string(sum);
                sum=0;
            } 
            else
            {
                ans+=to_string(0);
            }
        }

        return ans;
    }
};