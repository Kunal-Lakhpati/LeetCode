class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int sm=nums.size()/2;
        if(nums.size()/2)
        {
            if(sm<=mp.size())
            {
                return sm;
            }
        }
        return mp.size();
    }
};