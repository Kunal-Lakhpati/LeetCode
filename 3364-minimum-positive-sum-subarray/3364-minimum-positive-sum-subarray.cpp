class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int i=0;
        int sum=0;
        int chk=INT_MAX;
        while(i<nums.size())
        {
            sum=0;
            int j=i;
            while(j<nums.size())
            {
                sum+=nums[j];
                int len=j-i+1;
                if(len>=l && len<=r)
                {
                    if(sum>0)
                    {
                        if(chk>sum)
                        {
                            chk=sum;
                        }
                    }
                }
                if(len==r)
                {
                    break;
                }
                j++;
            }
            i++;
        }
        if(chk==INT_MAX)
        {
            return -1;
        }
        return chk;
    }
};
            // sum+=nums[i]+nums[j];
            // if(sum>0)
            // {
            //     if(chk<sum)
            //     {
            //         chk=sum;
            //     }
            // }
            // i++;
            // j++;
            // if(j==nums.size())
            // {
            //     i=0;
            //     j=i+1;
            // }