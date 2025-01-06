class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    int temp=nums[j];//j=0
                    nums[j]=nums[i];//j=2
                    nums[i]=temp;//i=0
                }
            }
        }
    }
};