class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
        int dec = 1;
        int maxCount = 1;
        for (int i=0; i<nums.size()-1;i++) 
        {
            if(nums[i]>nums[i+1]) 
            { 
                dec++; 
                inc = 1;
            } 
            else if(nums[i]<nums[i+1]) 
            { 
                inc++; 
                dec=1;
            } 
            else 
            { 
                inc=1; 
                dec=1; 
            }
            maxCount = max(maxCount, max(inc, dec));
        }
        return maxCount;
    }
};
            // if(nums[i]==nums[i+1])
            // {
            //     count+=1;
            //     break;
            // }
            // else if(nums[i]>nums[i+1]||nums[i]<nums[i+1])
            // {
            //     count++;
            // }
            // else if(nums[i+1]==nums[i+2])
            // {
            //     break;
            // }