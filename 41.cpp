class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int j=1;//3
        int i=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 && nums[i]==j)
            {
                j++;
            }
            // else if(nums[i]>0)
            // {
            //     return j;
            // }
        }
        return j;
    }
};