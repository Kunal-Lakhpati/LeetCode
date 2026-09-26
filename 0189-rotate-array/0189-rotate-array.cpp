class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> rotated(n);

        for (int i = 0; i < n; i++) 
        {
            rotated[(i+k)%n]=nums[i];
        }

        for (int i=0;i<n;i++) 
        {
            nums[i]=rotated[i];
        }
    }
};
        // vector<int> a(nums.size());
        // int h=0;
        // if(nums.size()==1)
        // {
        //     return;
        // }
        // if(k==(k%2==0))
        // {
        //     return;
        // }
        // for (int i=0;i<nums.size()-k;i++)//i=1
        // {
        //     a[i]=nums[(nums.size()-k)+i];//a[i]=99
        // }
        // for(int j=0;j<nums.size()-k;j++)//j=0
        // {
        //     a[k+j]=nums[j];//a[k+j]=4
        // }
        // for(int g=0;g<nums.size();g++)
        // {
        //     nums[g]=a[g];
        // }