class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=1;j<nums.size()-i;j++)
            {
                if(nums[j]>nums[j-1])
                {
                    int temp=nums[j];
                    nums[j]=nums[j-1];
                    nums[j-1]=temp;
                }
            }   
        }
        if(nums.size()<3)
        {
            return nums[0];
        }
        int count = 1;
        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] != nums[i - 1]) 
            {
                count++;
                if (count == 3) 
                {
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};
        // max=nums[0];
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //         if(nums[i]==nums[i+1])
        //         {
        //             int temp=nums[i+1];
        //             nums[i+1]=nums[i+2];
        //             nums[i+2]=temp;
        //         }
        //         // if(max>nums[i+1])
        //         // {
        //         //     max=nums[i+2];
        //         // }
        // }
        //         if(nums[0]!=nums[1]&&nums[1]!=nums[2])
        //         {
        //             return nums[2];
        //         }