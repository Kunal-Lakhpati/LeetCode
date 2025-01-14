class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val;
        sort(nums.begin(), nums.end());
        val = nums.size();
        return nums[val/2];
    }
};