class Solution {
public:
    int minSwaps(vector<int>& nums) {
        // int j=0;
        unordered_map<int,int> mp;
        vector<pair<int,int>> lol;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int x=nums[i];
            while(x>0)
            {
                sum+=x%10;
                x=x/10;
            }
            lol.push_back({sum,nums[i]});
        }
        sort(lol.begin(),lol.end());
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        int val=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=lol[i].second)
            {
                int j=mp[lol[i].second];
                swap(nums[i],nums[j]);
                mp[nums[j]]=j;
                mp[nums[i]]=i;
                val++;
            }
        }
        return val;
    }
};