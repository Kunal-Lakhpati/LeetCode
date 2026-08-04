class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> bankai;
        sort(nums.begin(), nums.end());
        int j = 0;
        for (int i = nums[0]; i <= nums[nums.size() - 1]; i++) 
        {
            if (j < nums.size() && nums[j] == i) 
            {
                j++;
            } 
            else 
            {
                bankai.push_back(i);
            }
        }

        return bankai;
    }
};