class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count=0;
        int store=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            if(nums[i]==1)
            {
                // store=count;
                if(store==1 && count<k)
                {
                    return false;
                }
                store=1;
                count=0;
            }
        }
        return true;
    }
};