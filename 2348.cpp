class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                k++;
                count+=k;
            }
            else
            {
                k=0;
            }
        }
        return count;
    }
};