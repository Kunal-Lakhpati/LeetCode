class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> arr;
        vector<int> yo;
        for(int i=0; i<nums.size(); i++)
        {
            arr[nums[i]]++;
        }
        for(auto i : arr)
        {
            if(i.second >= 2)
            {
                yo.push_back(i.first);
                yo.push_back(i.first);
            }
            else if(i.second < 2)
            {
                yo.push_back(i.first);
            }
        }
        nums = yo;
        return nums.size();
    }
};


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         map<int,int> arr;
//         vector<int> yo;
//         for(int i=0;i<nums.size();i++)
//         {
//             arr[nums[i]]++;
//         }
//         for(int i=0;i<arr.size();i++)
//         {
//             if(arr[i]>=2)
//             {
//                 yo.push_back(i);
//                 yo.push_back(i);
//             }
//             else if(arr[i]<2)
//             {
//                 yo.push_back(i);
//             }
//         }
//         return nums;
//     }
// };