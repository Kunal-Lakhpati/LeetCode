class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int yele=0;
        sort(nums.begin(),nums.end());
        // for(int i=nums.size()-1; i<0; i--)
        // {
        //     nums[]
        // }
        yele=yele+((nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
    return yele;
    }
};