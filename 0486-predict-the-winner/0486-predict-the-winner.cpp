class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        
        if (n % 2 == 0) 
        {
            return true; 
        }
        
        vector<int> dp(nums);
        for (int i = n - 2; i >= 0; --i) 
        {
            for (int j = i + 1; j < n; ++j) 
            {
                dp[j] = max(nums[i] - dp[j], nums[j] - dp[j - 1]);
            }
        }
        return dp[n - 1] >= 0;
    }
};
    //     int p1 = 0;
    //     int p2 = 0;

    //     int i = 0;
    //     int j = n.size() - 1;

    //     while (i <= j) 
    //     {
    //         if (n[i] >= n[j]) 
    //         {
    //             p1 += n[i];
    //             i++;
    //         } 
    //         else 
    //         {
    //             p1 += n[j];
    //             j--;
    //         }

    //         if (i > j)
    //             break;

    //         if (n[i] >= n[j]) 
    //         {
    //             p2 += n[i];
    //             i++;
    //         } 
    //         else 
    //         {
    //             p2 += n[j];
    //             j--;
    //         }
    //     }
    //     return p1 >= p2;
    // }