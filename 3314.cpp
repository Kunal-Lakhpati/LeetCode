class Solution {
    public:
        vector<int> minBitwiseArray(vector<int>& nums) {
             for (int i = 0; i != nums.size(); ++i) 
             {
                int target = exchange(nums[i], -1);            
                for (int val = 1; val != target; ++val) 
                {
                    if ((val | (val+ 1)) == target) 
                    {
                        nums[i] = val;
                        break;
                    }
                }            
            }
            return nums;
        }
    };