class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            long long p=1;
            long long g=0;
            long long l=1;
            for(int j=i;j<nums.size();j++)
            {
                if(p>1e18/nums[j])
                {
                    break;
                }
                p*=nums[j];
                g=gcd(g,nums[j]);
                l=lcm(l,(long long)nums[j]);
                if(p==g*l)
                {
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};