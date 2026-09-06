class Solution {
public:
    int numDistinct(string s, string t) {
        int meh = t.size();
        vector<unsigned long long> dp(meh+1,0);
        dp[0]=1;
        for (char c:s) 
        {
            for (int j=meh; j>=1;--j) 
            {
                if (c==t[j-1]) 
                {
                    dp[j]+=dp[j-1];
                }
            }
        }
        return (int)dp[meh];
    }
};