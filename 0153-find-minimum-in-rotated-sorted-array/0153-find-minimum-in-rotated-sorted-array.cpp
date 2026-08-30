class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int u=nums.size()-1;
        while(l<u)
        {
            int mid=(l+u)/2;
            if(nums[mid]<=nums[u])
            {
                u=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return nums[l];
    }
};