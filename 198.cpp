class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> a(nums.size());
        a[0]=nums[0];
        if(1==nums.size())
        {
            return nums[0];
        }
        if(nums[0]>=nums[1])
        {
            a[1]=nums[0];
        }
        else
        {
            a[1]=nums[1];
        }
        for(int i=2;i<nums.size();i++)//i=2
        {
            if(nums[i]+a[i-2]>a[i-1])
            {
                a[i]=nums[i]+a[i-2];
            }
            else
            {
                a[i]=a[i-1];
            }
        }
        return a[a.size()-1];
    }

};

// sum=sum+nums[i];//i=2 sum=4
//             if(i+1<nums.size())
//             {
//                 forodd+=nums[i+1];
//             }
//             i++;
//         }
//         if(sum>forodd)
//         {
//             return sum;
//         }
//         return forodd;