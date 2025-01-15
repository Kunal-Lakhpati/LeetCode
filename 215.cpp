class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(), greater<int>());
        return nums[k-1];
    }
};
        // int max=INT_MIN;
        // int count=0;
        // for(int j=0;j<nums.size();j++)
        // {
        //     if(max<nums[j])
        //     {
        //         max=nums[j];
        //     }
        // }
        // while(true)
        // {
        //     count=0;
        // for (int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==max)
        //     {
        //         count++;
        //     }
        // }
        //     if(count>=k)
        //     {
        //         return max;
        //     }
        //     k=k-count;
        //     max--;
        // }
        // return max;