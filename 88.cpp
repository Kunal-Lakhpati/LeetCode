class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++)
        {
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
        // int k=0;
        // int lol=0;
        // k=m+n;
        // vector<int> arr(k);
        // for(int i=0;i<m;i++)
        // {
        //     arr[i]=nums1[i];
        //     if(i==m)
        //     {
        //         lol=i;
        //     }
        // }
        // for(int i=1;i<n;i++)
        // {
        //     arr[lol+i]=nums2[i-1];
        // }