class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int j=0;
        int i=0;
        sort(nums.begin(),nums.end());
        if (nums.empty()) 
        {
            return 0;
        }
        if(val==nums[0] && 1==nums.size())
        {
            return 0;
        }
        while(i<(nums.size()-j))
        {
            // if(i==nums.size()-j)
            // {
            //     break;
            // }
            if(nums[i]==val)
            {
                int temp=nums[nums.size()-j-1];
                nums[nums.size()-j-1]=nums[i];
                nums[i]=temp;
                j++;
            }
            else
            {
                count++;
                i++;
            }
        }
        return count;
    }
};