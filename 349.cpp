class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int num,j=0;
        vector<int> newboi(nums1.size());
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1.size()<nums2.size())
        {
            num=nums1.size();
        }
        else
        {
            num=nums2.size();
        }
        int i = 0, k = 0;
        while (i < nums1.size() && k < nums2.size()) 
        {
            if (nums1[i] == nums2[k]) 
            {
                if (j == 0 || nums1[i] != newboi[j - 1]) 
                { 
                    newboi[j] = nums1[i];
                    j++;
                }
                i++;
                k++;
            } else if (nums1[i] < nums2[k]) {
                i++;
            } else 
            {
                k++;
            }
        }
        newboi.resize(j);
        return newboi;
    }
};