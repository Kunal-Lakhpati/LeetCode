class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> arr(nums.size(),0);
        int mino=INT_MAX;
        int maxo=0;
        if(arr.size()==1 )
        {
            return 0;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            mino=min(mino, nums[i]);
            arr[i]=mino;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            maxo = max(maxo, nums[i]);
            int score = maxo - arr[i];
            if (score <= k) 
            {
                // if(nums[i]==nums[i+1])
                // {
                //     return i+1;
                // }
                return i;
            }
        }
        return -1;
    }
};