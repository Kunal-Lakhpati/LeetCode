class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n=nums.size();
        map<vector<int>,int> mp;        
        int ans=0;
        int mx=0;
        for(int i=1;i<n;i++)
        {            
            mp[{min(nums[i-1],nums[i]),max(nums[i-1],nums[i])}]++;
        }
        for(auto &[v,cnt]:mp)
        {
            if(v[0]==v[1]) 
            {
                ans+=mp[v];
            }
            else 
            {
                mx = max(mx,mp[v]);
            }
        }
        return ans+mx;
    }
};