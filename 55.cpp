class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int value=0;
        int end=nums.size()-1;
        while(i<=value)
        {
            if(i+nums[i]>value)
            {
                value=i+nums[i];
            }
            if(i==end)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};