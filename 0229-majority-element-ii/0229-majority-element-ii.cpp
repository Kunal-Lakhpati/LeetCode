class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> arr;
        int size=nums.size();
        vector<int> op;
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(auto i : arr)
        {
            if((size / 3) < i.second)
            {
                op.push_back(i.first);
            }
        }
        return op;
    }
};