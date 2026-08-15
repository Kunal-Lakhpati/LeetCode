class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> arr;
        vector<int> op;
        for(int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }

        for(int j = 0; j < k; j++)
        {
            int max = nums[0];
            int maxFreq = 0;
            for(auto i : arr)
            {
                if(i.second > maxFreq)
                {
                    maxFreq = i.second;
                    max = i.first;
                }
            }
            op.push_back(max);
            arr[max] = 0;
        }

        return op;
    }
};