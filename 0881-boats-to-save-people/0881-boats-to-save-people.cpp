class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(), nums.end());
        int j = 0;
        int sum = nums[j];
        int bt = 0;
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(j > i)
            {
                break;
            }
            sum = nums[i];
            if(j < i && sum + nums[j] <= limit)
            {
                j++;
            }
            bt++;
        }
        return bt;
    }
};