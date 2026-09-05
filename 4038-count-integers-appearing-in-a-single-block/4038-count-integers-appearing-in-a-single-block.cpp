class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int blk[101] = {};
        for (int i=0;i<nums.size();i++) 
        {
            if (i==0||nums[i]!=nums[i-1]) 
            {
                blk[nums[i]]++;
            }
        }
        int result = 0;
        for (int i=1;i<=100;i++) 
        {
            if (blk[i]==1) 
            {
                result++;
            }
        }
        return result;
    }
};