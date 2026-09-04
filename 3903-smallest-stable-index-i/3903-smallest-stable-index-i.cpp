class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n, 0);
        int mino = INT_MAX; 

        for (int i = n - 1; i >= 0; i--)
        {
            mino = min(mino, nums[i]);
            arr[i] = mino;
        }

        int maxo = 0;
        for (int i = 0; i < n; i++)
        {
            maxo = max(maxo, nums[i]);
            int score = maxo - arr[i];
            if (score <= k) 
            {
                return i;
            }
        }
        return -1;
    }
};