class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> finale;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        while(!mp.empty())
        {
            vector<int> arr;
            for(auto i:mp)
            {
                arr.push_back(i.first);
            }
            for(int i=0;i<arr.size();i++)
            {
                finale.push_back(arr[i]);
                mp[arr[i]]--;
                if(mp[arr[i]]==0)
                {
                    mp.erase(arr[i]);
                }
            }
        }

        return finale;
    }
};


// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> arr;
//         vector<int> arr2;
//         map<int,int> mp;
//         vector<int> finale;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(int i=0;i<mp.size();i++)
//         {
//             if(mp[i]!=0)
//             {
//                 arr.push_back(i);
//             }
//         }
//         sort(arr.begin(),arr.end());
//         for(int i=0;i<mp.size();i++)
//         {
//             if(mp[i]>1)
//             {
//                 arr2.push_back(i);
//                 mp[i]--;
//             }
//         }
//         sort(arr2.begin(),arr2.end());
//         for(int i=0;i<nums.size();i++)
//         {
//             finale.push_back(arr[i]);
//         }
//     }
// };