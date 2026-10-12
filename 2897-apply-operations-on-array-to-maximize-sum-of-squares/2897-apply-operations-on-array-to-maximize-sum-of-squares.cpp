class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int MOD=1e9+7;
        int count[30]={0};
        
        for (int num:nums) 
        {
            for (int b=0;b<30;++b)
            {
                if ((num>>b)&1) 
                {
                    count[b]++;
                }
            }
        }
        long long ans=0;
        for (int i=0;i<k;++i) 
        {
            long long val=0;
            for (int b=0;b<30;++b) 
            {
                if (count[b]>0) 
                {
                    val|=(1LL<<b);
                    count[b]--;
                }
            }
            ans=(ans+(val%MOD)*(val % MOD))%MOD;
        }
        return ans;
    }
};