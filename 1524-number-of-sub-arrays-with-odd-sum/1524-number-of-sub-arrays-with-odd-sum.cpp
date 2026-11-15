class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        vector<int> arr;
        long long sum=0;
        long long m=1e9+7;
        long long c=0;
        long long e=1;
        long long o=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum%2==0)
            {
                c=(c+o)%m;
                e++;
            }
            else
            {
                c=(c+e)%m;
                o++;
            }
        }
        return c;
    }
};
        // for(long long i=0;i<nums.size();i++)
        // {
        //     sum=0;
        //     for(long long j=i;j<nums.size();j++)
        //     {
        //         sum+=nums[j];
        //         arr.push_back(sum);
        //     }
        // }
        // for(long long i=0;i<arr.size();i++)
        // {
        //     if(arr[i]%2!=0)
        //     {
        //         c++;
        //         c%=m;
        //     }
        // }