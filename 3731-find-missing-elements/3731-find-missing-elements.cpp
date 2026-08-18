class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int,int> arr;
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==1 && arr[i+1]!=1)
            {
                vec.push_back(i+1);
                arr[i+1]++;
            }
        }
        return vec;
    }
};