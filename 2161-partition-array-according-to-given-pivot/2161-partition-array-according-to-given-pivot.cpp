class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> yo;
        for (int x : nums)
        {
            if (x < pivot)
            {
                yo.push_back(x);
            }
        }

        for (int x : nums)
        {
            if (x == pivot)
            {
                yo.push_back(x);
            }
        }

        for (int x : nums)
        {
            if (x > pivot)
            {
                yo.push_back(x);
            }
        }
        return yo;
    }
};

// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         int j = 0;
//         int k = 0;
//         vector<int> yo(nums.size());
//         for (int i = 0; i < nums.size(); i++) 
//         {
//             if (nums[i] < pivot)
//             {
//                 yo[j] = nums[i];
//                 j++;
//             }
//         }
//         for (int i = 0; i < nums.size(); i++) 
//         {
//             if (nums[i] == pivot) 
//             {
//                 yo[j] = nums[i];
//                 j++;
//             }
//         }
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] > pivot) {
//                 yo[j] = nums[i];
//                 j++;
//             }
//         }
//         return yo;
//     }
// };

// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]>pivot)
//             {
//                 for(int j=i+1;j<nums.size();j++)
//                 {
//                     if(nums[j]<=pivot)
//                     {
//                         int temp=nums[j];
//                         nums[j]=nums[i];
//                         nums[i]=temp;
//                         break;
//                     }
//                 }
//             }
//         }
//         return nums;
//     }
// };