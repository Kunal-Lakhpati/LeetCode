class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        for (int i=0;i<k;i++)
        {
            sum+=cardPoints[i]; 
        }
        int ans = sum;
        for (int i=0;i<k;i++)
        {
            sum-=cardPoints[k-1-i];
            sum+=cardPoints[n-1-i];
            ans=max(ans, sum);
        }
        return ans;
    }
};
        // int l=0;
        // int r=nums.size()-1;
        // int s1=0;
        // for(int i=0;i<=k;i++)
        // {
        //     if(nums[l]<nums[r])
        //     {
        //         s1+=nums[l];
        //         l++;
        //         if(nums[l])
        //     }
        //     else
        //     {
        //         s1+=nums[r];
        //         r--;
        //     }
        // }
        // return s1;