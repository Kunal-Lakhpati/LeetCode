class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int e=0;
        int o=0;
        int n=nums.size();
        vector<int> arr(n);
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
                mn=min(mn,nums[i]);
            }
        }
        if(e==nums.size())
        {
            return true;
        }
        else if(o==nums.size())
        {
            return true;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                if(nums[i]<mn)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
        // int e=0;
        // int o=0;
        // int n=nums.size();
        // vector<int> arr(n);
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2==0)
        //     {
        //         e++;
        //     }
        //     else
        //     {
        //         o++;
        //     }
        // }
        // if(e==nums.size())
        // {
        //     return true;
        // }
        // else if(o==nums.size())
        // {
        //     return true;
        // }
        // int j=0;
        // if(e>o)
        // {
        //     for(int i=0;i<nums.size();i++)
        //     {
        //         if(nums[i]%2!=0)
        //         {
        //             if(i!=j)
        //             {
        //                 arr[i]=nums[i]-nums[j];
        //                 if(arr[i]%2!=0)
        //                 {
        //                     j++;
        //                     arr[i]=0;
        //                 }
        //             }
        //         }
        //         else
        //         {
        //             arr[i]=nums[i];
        //         }
        //     }
        //     return false;
        // }
        // else
        // {
        //     return false;
        // }