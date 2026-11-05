class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int h=nums.size()-1;
        int mid=(l+h)/2;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            cnt+=abs(nums[i]-nums[mid]);
        }
        return cnt;
    }
};