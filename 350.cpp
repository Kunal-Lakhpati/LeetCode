class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n,m;
        if(nums1.size()<nums2.size())
        {
            n=nums1.size();
            m=nums2.size();
        }
        else
        {
            n=nums2.size();
            m=nums1.size();
        }
        vector<int> newboi(m);
        int str=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    newboi[i]=nums2[j];
                    nums2[j]=INT_MIN;
                    str++;
                    break;
                }
            }
        }
        int k=0;
        vector<int> secondboi(str);
        for(int i=0;i<newboi.size();i++)
        {
            if(k==secondboi.size())
            {
                break;
            }
            if(newboi[i]>0)
            {
                secondboi[k]=newboi[i];
                k++;
            }
        }
        return secondboi;
    }
};