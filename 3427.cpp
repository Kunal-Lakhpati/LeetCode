class Solution {
    public:
        int subarraySum(vector<int>& nums) {
            int sum=0; 
            for(int i = 0; i <nums.size(); i++) 
            {
                int boi = max(0, i - nums[i]);
                for(int j = boi; j <= i; j++) 
                {
                    sum += nums[j];
                }
            }
            
            return sum;
        }
    };