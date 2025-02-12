class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> arr(100);
        int maxval=-1;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int num=nums[i];
            while(num>0)
            {
                sum+=num%10;
                num=num/10;
            }
            if(arr[sum]!=0)
            {
                maxval=max(maxval,arr[sum]+nums[i]);
                arr[sum]=max(arr[sum],nums[i]);
            }
            else
            {
                arr[sum]=nums[i];
            }
        }
        return maxval;
    }
};
        // int rem=0,mod=0,sum=0,sum2=0;
        // int count=0;
        // int k=1;
        // for(int i=0;i<nums;i++)
        // {
        //     int num=nums[i];
        //     count++;
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         while
        //         sum+=num%10;
        //         num=num/10;
        //         if(count==k)
        //         {
        //             sum2=sum;
        //             k++;
        //         }
        //         if(sum==sum2)
        //     }
        // }