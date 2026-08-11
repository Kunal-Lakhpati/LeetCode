#include <vector>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] == nums[i - 1] + 1) 
            {
                sum += nums[i];
            } 
            else 
            {
                break; 
            }
        }
        
        for (int j = 0; j < nums.size(); j++) 
        {
            if (sum == nums[j]) 
            {
                sum++;  
                j = -1;
            }
        }
        return sum;
    }
};