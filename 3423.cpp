class Solution {
    public:
        int maxAdjacentDistance(vector<int>& nums) {
            int n = nums.size();
            int max_diff = fabs(nums[0] - nums[n-1]);
            for(int i=0; i<n-1; i++){
                int diff = fabs(nums[i] - nums[i+1]);
                max_diff = max(diff, max_diff);
            }
            return max_diff;
        }
    };