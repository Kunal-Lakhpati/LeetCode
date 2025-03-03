class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int j = 0;
            int k = 0;
            vector<int> yo(nums.size());
            for (int i = 0; i < nums.size(); i++) 
            {
                if (nums[i] < pivot)
                {
                    yo[j] = nums[i];
                    j++;
                }
            }
            for (int i = 0; i < nums.size(); i++) 
            {
                if (nums[i] == pivot) 
                {
                    yo[j] = nums[i];
                    j++;
                }
            }
            for (int i = 0; i < nums.size(); i++) 
            {
                if (nums[i] > pivot) 
                {
                    yo[j] = nums[i];
                    j++;
                }
            }
            return yo;
        }
    };