class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> arr;
        if(nums.size() == 0)
            return 0;
        for(int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }
        int j = 0;
        int max = 0;
        int prev = 0;
        for(auto i : arr)
        {
            if(j == 0)
            {
                j = 1;
            }
            else if(i.first == prev + 1)
            {
                j++;
            }
            else
            {
                j = 1;
            }

            if(max < j)
            {
                max = j;
            }

            prev = i.first;
        }

        return max;
    }
};