class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int rS = 0;
        for (int num : nums) 
        {
            rS += num;
        }
        int lS = 0;
        for (int i=0;i<n;i++) 
        {

            rS -= nums[i];

            ans[i] = abs(lS - rS);

            lS += nums[i];
        }

        return ans;
    }
};